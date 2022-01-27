/*
** Automatically generated from `unneeded_code.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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
#include "cord.mih"
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
#include "hlds.vartypes.mih"
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
#include "parse_tree.file_kind.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
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




#line 152 "transform_hlds.unneeded_code.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unneeded_code__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 155 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unneeded_code__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 158 "transform_hlds.unneeded_code.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unneeded_code__type_ctor_info_where_needed_0;

#line 161 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0;

#line 164 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unneeded_code__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 167 "transform_hlds.unneeded_code.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 170 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unneeded_code__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 173 "transform_hlds.unneeded_code.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unneeded_code__pair__pti_pair_2__plain_transform_hlds__unneeded_code__type_ctor_info_branch_point_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 176 "transform_hlds.unneeded_code.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0;

#line 179 "transform_hlds.unneeded_code.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unneeded_code__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0;

#line 182 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_bracketed_goal_0_0[3];

#line 185 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_bracketed_goal_0_0;

#line 188 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_bracketed_goal_0_0[1];

#line 191 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_bracketed_goal_0[1];

#line 194 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_bracketed_goal_0[1];

#line 197 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_bracketed_goal_0[1];

#line 200 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_alts_0_0;

#line 203 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_branch_alts_0_1[1];

#line 206 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_alts_0_1;

#line 209 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_branch_alts_0_0[1];

#line 212 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_branch_alts_0_1[1];

#line 215 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_branch_alts_0[2];

#line 218 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_branch_alts_0[2];

#line 221 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_branch_alts_0[2];

#line 224 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_branch_point_0_0[2];

#line 227 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_point_0_0;

#line 230 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_branch_point_0_0[1];

#line 233 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_branch_point_0[1];

#line 236 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_branch_point_0[1];

#line 239 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_branch_point_0[1];

#line 242 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_location_0_0[2];

#line 245 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_location_0_0;

#line 248 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_location_0_0[1];

#line 251 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_location_0[1];

#line 254 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_location_0[1];

#line 257 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_location_0[1];

#line 260 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 263 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_uc_option_values_0_0[4];

#line 266 "transform_hlds.unneeded_code.c"
static const MR_ConstString transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_names_uc_option_values_0_0[4];

#line 269 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_uc_option_values_0_0;

#line 272 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_uc_option_values_0_0[1];

#line 275 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_uc_option_values_0[1];

#line 278 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_uc_option_values_0[1];

#line 281 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_uc_option_values_0[1];

#line 284 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 287 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

#line 290 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_unneeded_code_info_0_0[4];

#line 293 "transform_hlds.unneeded_code.c"
static const MR_ConstString transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_names_unneeded_code_info_0_0[4];

#line 296 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_unneeded_code_info_0_0;

#line 299 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_unneeded_code_info_0_0[1];

#line 302 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_unneeded_code_info_0[1];

#line 305 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_unneeded_code_info_0[1];

#line 308 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_unneeded_code_info_0[1];

#line 311 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_where_needed_0_0;

#line 314 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2transform_hlds__unneeded_code__type_ctor_info_branch_point_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 317 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_where_needed_0_1[1];

#line 320 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDesc transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_where_needed_0_1;

#line 323 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_where_needed_0_0[1];

#line 326 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_where_needed_0_1[1];

#line 329 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_where_needed_0[2];

#line 332 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_where_needed_0[2];

#line 335 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_where_needed_0[2];

#line 338 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unneeded_code__type_ctor_info_where_needed_0;

#line 341 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____bracketed_goal_0_0_10001(
#line 344 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 346 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2);

#line 349 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____bracketed_goal_0_0_10001(
#line 352 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 354 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 356 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3);

#line 359 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____branch_alts_0_0_10001(
#line 362 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 364 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2);

#line 367 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____branch_alts_0_0_10001(
#line 370 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 372 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 374 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3);

#line 377 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____branch_point_0_0_10001(
#line 380 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 382 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2);

#line 385 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____branch_point_0_0_10001(
#line 388 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 390 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 392 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3);

#line 395 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____location_0_0_10001(
#line 398 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 400 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2);

#line 403 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____location_0_0_10001(
#line 406 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 408 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 410 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3);

#line 413 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____refined_goal_map_0_0_10001(
#line 416 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 418 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2);

#line 421 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____refined_goal_map_0_0_10001(
#line 424 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 426 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 428 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3);

#line 431 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____uc_option_values_0_0_10001(
#line 434 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 436 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2);

#line 439 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____uc_option_values_0_0_10001(
#line 442 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 444 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 446 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3);

#line 449 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____unneeded_code_info_0_0_10001(
#line 452 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 454 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2);

#line 457 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____unneeded_code_info_0_0_10001(
#line 460 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 462 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 464 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3);

#line 467 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_0_0_10001(
#line 470 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 472 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2);

#line 475 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_0_0_10001(
#line 478 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 480 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 482 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3);

#line 485 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_branches_0_0_10001(
#line 488 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 490 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2);

#line 493 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_branches_0_0_10001(
#line 496 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 498 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 500 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3);

#line 503 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_map_0_0_10001(
#line 506 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 508 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2);

#line 511 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_map_0_0_10001(
#line 514 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 516 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 518 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3);

#line 765 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_110_101_101_100_101_100_95_112_114_111_99_101_115_115_95_99_111_110_106_95_95_91_53_93_95_48_11_p_0(
#line 765 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_12,
#line 765 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goals0_13,
#line 765 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Goals_14,
#line 765 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_15,
#line 765 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_23,
#line 765 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_24,
#line 765 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_25,
#line 765 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_26,
#line 765 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_27,
#line 765 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_28);

#line 647 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_109_97_110_100_95_118_97_114_95_101_118_101_114_121_119_104_101_114_101_95_95_91_49_93_95_48_2_p_0(
#line 647 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__2_2);

#line 550 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__IntroducedFrom__pred__adjust_where_needed__550__1_2_p_0(
#line 550 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_40,
#line 550 "unneeded_code.m"
  MR_Integer * transform_hlds__unneeded_code__HeadVar__2_41);

#line 366 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__IntroducedFrom__pred__unneeded_process_proc__366__1_1_p_0(
#line 366 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__RefinedGoals_49);

#line 321 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__IntroducedFrom__pred__unneeded_process_proc__321__1_3_p_0(
#line 321 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_65,
#line 321 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_66,
#line 321 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__3_67);

#line 204 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_map_0_0(
#line 204 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 204 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 204 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3);

#line 204 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_map_0_0(
#line 204 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 204 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2);

#line 210 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_branches_0_0(
#line 210 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 210 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 210 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3);

#line 210 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_branches_0_0(
#line 210 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 210 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2);

#line 206 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_0_0(
#line 206 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 206 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 206 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3);

#line 206 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_0_0(
#line 206 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 206 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2);

#line 299 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____unneeded_code_info_0_0(
#line 299 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 299 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 299 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3);

#line 299 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____unneeded_code_info_0_0(
#line 299 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 299 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2);

#line 291 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____uc_option_values_0_0(
#line 291 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 291 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 291 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3);

#line 291 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____uc_option_values_0_0(
#line 291 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 291 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2);

#line 218 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____refined_goal_map_0_0(
#line 218 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 218 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 218 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3);

#line 218 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____refined_goal_map_0_0(
#line 218 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 218 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2);

#line 146 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____location_0_0(
#line 146 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 146 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 146 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3);

#line 146 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____location_0_0(
#line 146 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 146 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2);

#line 114 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____branch_point_0_0(
#line 114 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 114 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 114 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3);

#line 114 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____branch_point_0_0(
#line 114 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 114 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2);

#line 125 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____branch_alts_0_0(
#line 125 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 125 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 125 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3);

#line 125 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____branch_alts_0_0(
#line 125 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 125 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2);

#line 762 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____bracketed_goal_0_0(
#line 762 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 762 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 762 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3);

#line 762 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____bracketed_goal_0_0(
#line 762 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 762 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2);

#line 1188 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__get_parent_branch_point_6_p_0(
#line 1188 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_7,
#line 1188 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__GoalId_8,
#line 1188 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__BranchGoalId_9,
#line 1188 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__BranchArmGoalId_10,
#line 1188 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__BranchAlt_11,
#line 1188 "unneeded_code.m"
  MR_Integer * transform_hlds__unneeded_code__BranchNum_12);

#line 1147 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__where_needed_branches_upper_bound_2_5_p_0(
#line 1147 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_1,
#line 1147 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_2,
#line 1147 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3,
#line 1147 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__4_4,
#line 1147 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__5_5);

#line 1076 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_ite_9_p_0(
#line 1076 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Cond0_10,
#line 1076 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Cond_11,
#line 1076 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Then0_12,
#line 1076 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Then_13,
#line 1076 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Else0_14,
#line 1076 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Else_15,
#line 1076 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_22,
#line 1076 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_23,
#line 1076 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__GoalId_17);

#line 1059 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_disj_6_p_0(
#line 1059 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 1059 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__2_2,
#line 1059 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_3,
#line 1059 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_4,
#line 1059 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__GoalId_5,
#line 1059 "unneeded_code.m"
  MR_Integer transform_hlds__unneeded_code__BranchNum_6);

#line 1040 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_cases_6_p_0(
#line 1040 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 1040 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__2_2,
#line 1040 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_3,
#line 1040 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_4,
#line 1040 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__GoalId_5,
#line 1040 "unneeded_code.m"
  MR_Integer transform_hlds__unneeded_code__BranchNum_6);

#line 1027 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_conj_4_p_0(
#line 1027 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 1027 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__2_2,
#line 1027 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_3,
#line 1027 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_4);

#line 965 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(
#line 965 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal0_5,
#line 965 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Goal_6,
#line 965 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_58,
#line 965 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59);

#line 937 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__add_alt_start_7_p_0(
#line 937 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_1,
#line 937 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 937 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__BranchPoint_3,
#line 937 "unneeded_code.m"
  MR_Integer transform_hlds__unneeded_code__BranchNum_4,
#line 937 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_5,
#line 937 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_6,
#line 937 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_7);

#line 914 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__add_where_needed_list_5_p_0(
#line 914 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_1,
#line 914 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 914 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_3,
#line 914 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_4,
#line 914 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_5);

#line 905 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__merge_where_needed_maps_5_p_0(
#line 905 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_6,
#line 905 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_7,
#line 905 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__WhereNeededMap1_8,
#line 905 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__WhereNeededMap2_9,
#line 905 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__WhereNeededMap_10);

#line 866 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_ite_17_p_0(
#line 866 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_18,
#line 866 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Cond0_19,
#line 866 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Cond_20,
#line 866 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Then0_21,
#line 866 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Then_22,
#line 866 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Else0_23,
#line 866 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Else_24,
#line 866 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__BranchPoint_25,
#line 866 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_26,
#line 866 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__FinalInstMap_27,
#line 866 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_28,
#line 866 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_45,
#line 866 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_46,
#line 866 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_47,
#line 866 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_48,
#line 866 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_49,
#line 866 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_50);

#line 840 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_cases_15_p_0(
#line 840 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_1,
#line 840 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 840 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__3_3,
#line 840 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__BranchPoint_4,
#line 840 "unneeded_code.m"
  MR_Integer transform_hlds__unneeded_code__BranchNum_5,
#line 840 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_6,
#line 840 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__FinalInstMap_7,
#line 840 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_8,
#line 840 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__StartWhereNeededMap_9,
#line 840 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_10,
#line 840 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_11,
#line 840 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_12,
#line 840 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_13,
#line 840 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_14,
#line 840 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_15);

#line 817 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_disj_13_p_0(
#line 817 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_1,
#line 817 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 817 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__3_3,
#line 817 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_4,
#line 817 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__FinalInstMap_5,
#line 817 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_6,
#line 817 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__StartWhereNeededMap_7,
#line 817 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_8,
#line 817 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_9,
#line 817 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_10,
#line 817 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_11,
#line 817 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_12,
#line 817 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_13);

#line 794 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_rev_bracketed_conj_9_p_0(
#line 794 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_1,
#line 794 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 794 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__3_3,
#line 794 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_4,
#line 794 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_5,
#line 794 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_6,
#line 794 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_7,
#line 794 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_8,
#line 794 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_9);

#line 778 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__build_bracketed_conj_3_p_0(
#line 778 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 778 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_2,
#line 778 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__3_3);

#line 704 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_3(
#line 704 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 704 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 704 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_2);

#line 730 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_2(
#line 730 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 730 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 730 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_2);

#line 719 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_1(
#line 719 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 719 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 719 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_2);

#line 653 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0(
#line 653 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_12,
#line 653 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal0_13,
#line 653 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Goal_14,
#line 653 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_15,
#line 653 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__FinalInstMap_16,
#line 653 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_88,
#line 653 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_89,
#line 653 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_90,
#line 653 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_91,
#line 653 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_92,
#line 653 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_93);

#line 647 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__demand_var_everywhere_2_p_0(
#line 647 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code___WhereNeeded0_3,
#line 647 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__2_2);

#line 639 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__undemand_var_3_p_0(
#line 639 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Var_4,
#line 639 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_6,
#line 639 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_7);

#line 626 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__demand_var_6_p_0(
#line 626 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_7,
#line 626 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_8,
#line 626 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__WhereNeeded_9,
#line 626 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Var_10,
#line 626 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_14,
#line 626 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_15);

#line 617 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__nonlocal_is_virgin_output_3_p_0(
#line 617 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ModuleInfo_4,
#line 617 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InstMap_5,
#line 617 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Var_6);

#line 597 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__nonlocal_may_be_input_3_p_0(
#line 597 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ModuleInfo_4,
#line 597 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InstMap_5,
#line 597 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Var_6);

#line 594 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__demand_inputs_6_p_0_2(
#line 594 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 594 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 594 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 594 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_3);

#line 591 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__demand_inputs_6_p_0_1(
#line 591 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 591 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1);

#line 582 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__demand_inputs_6_p_0(
#line 582 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_7,
#line 582 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal_8,
#line 582 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_9,
#line 582 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__WhereNeeded_10,
#line 582 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_20,
#line 582 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_21);

#line 496 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__collect_where_needed_6_p_0(
#line 496 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_7,
#line 496 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_8,
#line 496 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__WhereNeededMap_9,
#line 496 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ChangedVar_10,
#line 496 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_0_13,
#line 496 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_14);

#line 551 "unneeded_code.m"
static MR_Box MR_CALL 
transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_3(
#line 551 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 551 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 551 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2);

#line 550 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_2(
#line 550 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 550 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 550 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_2);

#line 491 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_1(
#line 491 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 491 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 491 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 491 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_3);

#line 474 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0(
#line 474 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_7,
#line 474 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal_8,
#line 474 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_9,
#line 474 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__FinalInstMap_10,
#line 474 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__WhereNeededMap_11,
#line 474 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_23);

#line 459 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__insert_branch_arm_into_refined_goals_5_p_0(
#line 459 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal_6,
#line 459 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__GoalPath_7,
#line 459 "unneeded_code.m"
  MR_Integer transform_hlds__unneeded_code__BranchNum_8,
#line 459 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_13,
#line 459 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_14);

#line 456 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__insert_branch_into_refined_goals_4_p_0_1(
#line 456 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 456 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 456 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 456 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_3);

#line 448 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__insert_branch_into_refined_goals_4_p_0(
#line 448 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal_5,
#line 448 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 448 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_12,
#line 448 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_13);

#line 443 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_4(
#line 443 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 443 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 443 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_2);

#line 615 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_3(
#line 615 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 615 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 615 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 615 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_3);

#line 613 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_2(
#line 613 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 613 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1);

#line 415 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_1(
#line 415 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 415 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 415 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 415 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_3);

#line 396 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(
#line 396 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_12,
#line 396 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal0_13,
#line 396 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Goal_14,
#line 396 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_15,
#line 396 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__FinalInstMap_16,
#line 396 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_30,
#line 396 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_31,
#line 396 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_32,
#line 396 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_33,
#line 396 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_34,
#line 396 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_35);

#line 366 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__unneeded_process_proc_7_p_0_2(
#line 366 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg);

#line 321 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_proc_7_p_0_1(
#line 321 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 321 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 321 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 321 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_3);

#line 307 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_proc_7_p_0(
#line 307 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_0_60,
#line 307 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_61,
#line 307 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_62,
#line 307 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_63,
#line 307 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__PredId_10,
#line 307 "unneeded_code.m"
  MR_Integer transform_hlds__unneeded_code__Pass_11,
#line 307 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Successful_12);


static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_1[3][2];

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_2[15][3];

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

static /* final */ const MR_Box transform_hlds__unneeded_code_scalar_common_2[15][3] = {
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
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0)),
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_1[2]))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_proc_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
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
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1650 "transform_hlds.unneeded_code.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unneeded_code__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1658 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unneeded_code__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1666 "transform_hlds.unneeded_code.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unneeded_code__type_ctor_info_where_needed_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0
  }
};

#line 1675 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1684 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unneeded_code__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1692 "transform_hlds.unneeded_code.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1701 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__unneeded_code__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1709 "transform_hlds.unneeded_code.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unneeded_code__pair__pti_pair_2__plain_transform_hlds__unneeded_code__type_ctor_info_branch_point_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

#line 1718 "transform_hlds.unneeded_code.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unneeded_code__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

#line 1727 "transform_hlds.unneeded_code.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unneeded_code__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1735 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_bracketed_goal_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0,
  (MR_PseudoTypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0
};

#line 1742 "transform_hlds.unneeded_code.c"
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

#line 1757 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_bracketed_goal_0_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_bracketed_goal_0_0
};

#line 1762 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_bracketed_goal_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_bracketed_goal_0_0
  }
};

#line 1771 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_bracketed_goal_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_bracketed_goal_0_0
};

#line 1776 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_bracketed_goal_0[1] = {
  (MR_Integer) 0
};

#line 1781 "transform_hlds.unneeded_code.c"
const MR_TypeCtorInfo_Struct transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_bracketed_goal_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unneeded_code____Unify____bracketed_goal_0_0_10001)),
  ((MR_Box) (transform_hlds__unneeded_code____Compare____bracketed_goal_0_0_10001)),
  (MR_String) "transform_hlds.unneeded_code",
  (MR_String) "bracketed_goal",
  {     transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_bracketed_goal_0 },
  {     transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_bracketed_goal_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_bracketed_goal_0
};

#line 1798 "transform_hlds.unneeded_code.c"
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

#line 1813 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_branch_alts_0_1[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_maybe_switch_num_functors_0
};

#line 1818 "transform_hlds.unneeded_code.c"
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

#line 1833 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_branch_alts_0_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_alts_0_0
};

#line 1838 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_branch_alts_0_1[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_alts_0_1
};

#line 1843 "transform_hlds.unneeded_code.c"
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

#line 1857 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_branch_alts_0[2] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_alts_0_0,
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_alts_0_1
};

#line 1863 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_branch_alts_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1869 "transform_hlds.unneeded_code.c"
const MR_TypeCtorInfo_Struct transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_alts_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unneeded_code____Unify____branch_alts_0_0_10001)),
  ((MR_Box) (transform_hlds__unneeded_code____Compare____branch_alts_0_0_10001)),
  (MR_String) "transform_hlds.unneeded_code",
  (MR_String) "branch_alts",
  {     transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_branch_alts_0 },
  {     transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_branch_alts_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_branch_alts_0
};

#line 1886 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_branch_point_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_alts_0
};

#line 1892 "transform_hlds.unneeded_code.c"
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

#line 1907 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_branch_point_0_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_point_0_0
};

#line 1912 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_branch_point_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_branch_point_0_0
  }
};

#line 1921 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_branch_point_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_branch_point_0_0
};

#line 1926 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_branch_point_0[1] = {
  (MR_Integer) 0
};

#line 1931 "transform_hlds.unneeded_code.c"
const MR_TypeCtorInfo_Struct transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unneeded_code____Unify____branch_point_0_0_10001)),
  ((MR_Box) (transform_hlds__unneeded_code____Compare____branch_point_0_0_10001)),
  (MR_String) "transform_hlds.unneeded_code",
  (MR_String) "branch_point",
  {     transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_branch_point_0 },
  {     transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_branch_point_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_branch_point_0
};

#line 1948 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_location_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1954 "transform_hlds.unneeded_code.c"
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

#line 1969 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_location_0_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_location_0_0
};

#line 1974 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_location_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_location_0_0
  }
};

#line 1983 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_location_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_location_0_0
};

#line 1988 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_location_0[1] = {
  (MR_Integer) 0
};

#line 1993 "transform_hlds.unneeded_code.c"
const MR_TypeCtorInfo_Struct transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_location_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unneeded_code____Unify____location_0_0_10001)),
  ((MR_Box) (transform_hlds__unneeded_code____Compare____location_0_0_10001)),
  (MR_String) "transform_hlds.unneeded_code",
  (MR_String) "location",
  {     transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_location_0 },
  {     transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_location_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_location_0
};

#line 2010 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__unneeded_code__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &transform_hlds__unneeded_code__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 2019 "transform_hlds.unneeded_code.c"
const MR_TypeCtorInfo_Struct transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_refined_goal_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__unneeded_code____Unify____refined_goal_map_0_0_10001)),
  ((MR_Box) (transform_hlds__unneeded_code____Compare____refined_goal_map_0_0_10001)),
  (MR_String) "transform_hlds.unneeded_code",
  (MR_String) "refined_goal_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2036 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_uc_option_values_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 2044 "transform_hlds.unneeded_code.c"
static const MR_ConstString transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_names_uc_option_values_0_0[4] = {
  (MR_String) "uc_fully_strict",
  (MR_String) "uc_reorder_conj",
  (MR_String) "uc_copy_limit",
  (MR_String) "uc_debug"
};

#line 2052 "transform_hlds.unneeded_code.c"
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

#line 2067 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_uc_option_values_0_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_uc_option_values_0_0
};

#line 2072 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_uc_option_values_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_uc_option_values_0_0
  }
};

#line 2081 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_uc_option_values_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_uc_option_values_0_0
};

#line 2086 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_uc_option_values_0[1] = {
  (MR_Integer) 0
};

#line 2091 "transform_hlds.unneeded_code.c"
const MR_TypeCtorInfo_Struct transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_uc_option_values_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unneeded_code____Unify____uc_option_values_0_0_10001)),
  ((MR_Box) (transform_hlds__unneeded_code____Compare____uc_option_values_0_0_10001)),
  (MR_String) "transform_hlds.unneeded_code",
  (MR_String) "uc_option_values",
  {     transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_uc_option_values_0 },
  {     transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_uc_option_values_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_uc_option_values_0
};

#line 2108 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__unneeded_code__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2117 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

#line 2126 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_unneeded_code_info_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_uc_option_values_0,
  (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0
};

#line 2134 "transform_hlds.unneeded_code.c"
static const MR_ConstString transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_names_unneeded_code_info_0_0[4] = {
  (MR_String) "uci_module_info",
  (MR_String) "uci_vartypes",
  (MR_String) "uci_options",
  (MR_String) "uci_containing_goal_map"
};

#line 2142 "transform_hlds.unneeded_code.c"
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

#line 2157 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_unneeded_code_info_0_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_unneeded_code_info_0_0
};

#line 2162 "transform_hlds.unneeded_code.c"
static const MR_DuPtagLayout transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_unneeded_code_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_unneeded_code_info_0_0
  }
};

#line 2171 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_unneeded_code_info_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_unneeded_code_info_0_0
};

#line 2176 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_unneeded_code_info_0[1] = {
  (MR_Integer) 0
};

#line 2181 "transform_hlds.unneeded_code.c"
const MR_TypeCtorInfo_Struct transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_unneeded_code_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unneeded_code____Unify____unneeded_code_info_0_0_10001)),
  ((MR_Box) (transform_hlds__unneeded_code____Compare____unneeded_code_info_0_0_10001)),
  (MR_String) "transform_hlds.unneeded_code",
  (MR_String) "unneeded_code_info",
  {     transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_unneeded_code_info_0 },
  {     transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_unneeded_code_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_unneeded_code_info_0
};

#line 2198 "transform_hlds.unneeded_code.c"
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

#line 2213 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2transform_hlds__unneeded_code__type_ctor_info_branch_point_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0,
    (MR_TypeInfo) &transform_hlds__unneeded_code__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

#line 2222 "transform_hlds.unneeded_code.c"
static const MR_PseudoTypeInfo transform_hlds__unneeded_code__transform_hlds__unneeded_code__field_types_where_needed_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__tree234__ti_tree234_2transform_hlds__unneeded_code__type_ctor_info_branch_point_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
};

#line 2227 "transform_hlds.unneeded_code.c"
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

#line 2242 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_where_needed_0_0[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_where_needed_0_0
};

#line 2247 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_stag_ordered_where_needed_0_1[1] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_where_needed_0_1
};

#line 2252 "transform_hlds.unneeded_code.c"
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

#line 2266 "transform_hlds.unneeded_code.c"
static const MR_DuFunctorDescPtr transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_where_needed_0[2] = {
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_where_needed_0_1,
  &transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_functor_desc_where_needed_0_0
};

#line 2272 "transform_hlds.unneeded_code.c"
static const MR_Integer transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_where_needed_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2278 "transform_hlds.unneeded_code.c"
const MR_TypeCtorInfo_Struct transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unneeded_code____Unify____where_needed_0_0_10001)),
  ((MR_Box) (transform_hlds__unneeded_code____Compare____where_needed_0_0_10001)),
  (MR_String) "transform_hlds.unneeded_code",
  (MR_String) "where_needed",
  {     transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_name_ordered_where_needed_0 },
  {     transform_hlds__unneeded_code__transform_hlds__unneeded_code__du_ptag_ordered_where_needed_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__unneeded_code__transform_hlds__unneeded_code__functor_number_map_where_needed_0
};

#line 2295 "transform_hlds.unneeded_code.c"
const MR_TypeCtorInfo_Struct transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_branches_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__unneeded_code____Unify____where_needed_branches_0_0_10001)),
  ((MR_Box) (transform_hlds__unneeded_code____Compare____where_needed_branches_0_0_10001)),
  (MR_String) "transform_hlds.unneeded_code",
  (MR_String) "where_needed_branches",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__tree234__ti_tree234_2transform_hlds__unneeded_code__type_ctor_info_branch_point_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2312 "transform_hlds.unneeded_code.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__unneeded_code__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unneeded_code__type_ctor_info_where_needed_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__unneeded_code__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0
  }
};

#line 2321 "transform_hlds.unneeded_code.c"
const MR_TypeCtorInfo_Struct transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__unneeded_code____Unify____where_needed_map_0_0_10001)),
  ((MR_Box) (transform_hlds__unneeded_code____Compare____where_needed_map_0_0_10001)),
  (MR_String) "transform_hlds.unneeded_code",
  (MR_String) "where_needed_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__unneeded_code__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unneeded_code__type_ctor_info_where_needed_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2338 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____bracketed_goal_0_0_10001(
#line 2341 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 2343 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2)
#line 2345 "transform_hlds.unneeded_code.c"
{
#line 2347 "transform_hlds.unneeded_code.c"
  {
#line 2349 "transform_hlds.unneeded_code.c"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 2352 "transform_hlds.unneeded_code.c"
    {
#line 2354 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____bracketed_goal_0_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2));
    }
#line 2357 "transform_hlds.unneeded_code.c"
    return transform_hlds__unneeded_code__succeeded;
#line 2359 "transform_hlds.unneeded_code.c"
  }
#line 2361 "transform_hlds.unneeded_code.c"
}

#line 2364 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____bracketed_goal_0_0_10001(
#line 2367 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 2369 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 2371 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3)
#line 2373 "transform_hlds.unneeded_code.c"
{
#line 2375 "transform_hlds.unneeded_code.c"
  {
#line 2377 "transform_hlds.unneeded_code.c"
    MR_Word transform_hlds__unneeded_code__conv0_HeadVar__1_1;

#line 2380 "transform_hlds.unneeded_code.c"
    {
#line 2382 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code____Compare____bracketed_goal_0_0(&transform_hlds__unneeded_code__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_3));
    }
#line 2385 "transform_hlds.unneeded_code.c"
    *transform_hlds__unneeded_code__wrapper_arg_1 = ((MR_Box) (transform_hlds__unneeded_code__conv0_HeadVar__1_1));
#line 2387 "transform_hlds.unneeded_code.c"
  }
#line 2389 "transform_hlds.unneeded_code.c"
}

#line 2392 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____branch_alts_0_0_10001(
#line 2395 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 2397 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2)
#line 2399 "transform_hlds.unneeded_code.c"
{
#line 2401 "transform_hlds.unneeded_code.c"
  {
#line 2403 "transform_hlds.unneeded_code.c"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 2406 "transform_hlds.unneeded_code.c"
    {
#line 2408 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____branch_alts_0_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2));
    }
#line 2411 "transform_hlds.unneeded_code.c"
    return transform_hlds__unneeded_code__succeeded;
#line 2413 "transform_hlds.unneeded_code.c"
  }
#line 2415 "transform_hlds.unneeded_code.c"
}

#line 2418 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____branch_alts_0_0_10001(
#line 2421 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 2423 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 2425 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3)
#line 2427 "transform_hlds.unneeded_code.c"
{
#line 2429 "transform_hlds.unneeded_code.c"
  {
#line 2431 "transform_hlds.unneeded_code.c"
    MR_Word transform_hlds__unneeded_code__conv0_HeadVar__1_1;

#line 2434 "transform_hlds.unneeded_code.c"
    {
#line 2436 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code____Compare____branch_alts_0_0(&transform_hlds__unneeded_code__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_3));
    }
#line 2439 "transform_hlds.unneeded_code.c"
    *transform_hlds__unneeded_code__wrapper_arg_1 = ((MR_Box) (transform_hlds__unneeded_code__conv0_HeadVar__1_1));
#line 2441 "transform_hlds.unneeded_code.c"
  }
#line 2443 "transform_hlds.unneeded_code.c"
}

#line 2446 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____branch_point_0_0_10001(
#line 2449 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 2451 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2)
#line 2453 "transform_hlds.unneeded_code.c"
{
#line 2455 "transform_hlds.unneeded_code.c"
  {
#line 2457 "transform_hlds.unneeded_code.c"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 2460 "transform_hlds.unneeded_code.c"
    {
#line 2462 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____branch_point_0_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2));
    }
#line 2465 "transform_hlds.unneeded_code.c"
    return transform_hlds__unneeded_code__succeeded;
#line 2467 "transform_hlds.unneeded_code.c"
  }
#line 2469 "transform_hlds.unneeded_code.c"
}

#line 2472 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____branch_point_0_0_10001(
#line 2475 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 2477 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 2479 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3)
#line 2481 "transform_hlds.unneeded_code.c"
{
#line 2483 "transform_hlds.unneeded_code.c"
  {
#line 2485 "transform_hlds.unneeded_code.c"
    MR_Word transform_hlds__unneeded_code__conv0_HeadVar__1_1;

#line 2488 "transform_hlds.unneeded_code.c"
    {
#line 2490 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code____Compare____branch_point_0_0(&transform_hlds__unneeded_code__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_3));
    }
#line 2493 "transform_hlds.unneeded_code.c"
    *transform_hlds__unneeded_code__wrapper_arg_1 = ((MR_Box) (transform_hlds__unneeded_code__conv0_HeadVar__1_1));
#line 2495 "transform_hlds.unneeded_code.c"
  }
#line 2497 "transform_hlds.unneeded_code.c"
}

#line 2500 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____location_0_0_10001(
#line 2503 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 2505 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2)
#line 2507 "transform_hlds.unneeded_code.c"
{
#line 2509 "transform_hlds.unneeded_code.c"
  {
#line 2511 "transform_hlds.unneeded_code.c"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 2514 "transform_hlds.unneeded_code.c"
    {
#line 2516 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____location_0_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2));
    }
#line 2519 "transform_hlds.unneeded_code.c"
    return transform_hlds__unneeded_code__succeeded;
#line 2521 "transform_hlds.unneeded_code.c"
  }
#line 2523 "transform_hlds.unneeded_code.c"
}

#line 2526 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____location_0_0_10001(
#line 2529 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 2531 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 2533 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3)
#line 2535 "transform_hlds.unneeded_code.c"
{
#line 2537 "transform_hlds.unneeded_code.c"
  {
#line 2539 "transform_hlds.unneeded_code.c"
    MR_Word transform_hlds__unneeded_code__conv0_HeadVar__1_1;

#line 2542 "transform_hlds.unneeded_code.c"
    {
#line 2544 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code____Compare____location_0_0(&transform_hlds__unneeded_code__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_3));
    }
#line 2547 "transform_hlds.unneeded_code.c"
    *transform_hlds__unneeded_code__wrapper_arg_1 = ((MR_Box) (transform_hlds__unneeded_code__conv0_HeadVar__1_1));
#line 2549 "transform_hlds.unneeded_code.c"
  }
#line 2551 "transform_hlds.unneeded_code.c"
}

#line 2554 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____refined_goal_map_0_0_10001(
#line 2557 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 2559 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2)
#line 2561 "transform_hlds.unneeded_code.c"
{
#line 2563 "transform_hlds.unneeded_code.c"
  {
#line 2565 "transform_hlds.unneeded_code.c"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 2568 "transform_hlds.unneeded_code.c"
    {
#line 2570 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____refined_goal_map_0_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2));
    }
#line 2573 "transform_hlds.unneeded_code.c"
    return transform_hlds__unneeded_code__succeeded;
#line 2575 "transform_hlds.unneeded_code.c"
  }
#line 2577 "transform_hlds.unneeded_code.c"
}

#line 2580 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____refined_goal_map_0_0_10001(
#line 2583 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 2585 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 2587 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3)
#line 2589 "transform_hlds.unneeded_code.c"
{
#line 2591 "transform_hlds.unneeded_code.c"
  {
#line 2593 "transform_hlds.unneeded_code.c"
    MR_Word transform_hlds__unneeded_code__conv0_HeadVar__1_1;

#line 2596 "transform_hlds.unneeded_code.c"
    {
#line 2598 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code____Compare____refined_goal_map_0_0(&transform_hlds__unneeded_code__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_3));
    }
#line 2601 "transform_hlds.unneeded_code.c"
    *transform_hlds__unneeded_code__wrapper_arg_1 = ((MR_Box) (transform_hlds__unneeded_code__conv0_HeadVar__1_1));
#line 2603 "transform_hlds.unneeded_code.c"
  }
#line 2605 "transform_hlds.unneeded_code.c"
}

#line 2608 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____uc_option_values_0_0_10001(
#line 2611 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 2613 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2)
#line 2615 "transform_hlds.unneeded_code.c"
{
#line 2617 "transform_hlds.unneeded_code.c"
  {
#line 2619 "transform_hlds.unneeded_code.c"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 2622 "transform_hlds.unneeded_code.c"
    {
#line 2624 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____uc_option_values_0_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2));
    }
#line 2627 "transform_hlds.unneeded_code.c"
    return transform_hlds__unneeded_code__succeeded;
#line 2629 "transform_hlds.unneeded_code.c"
  }
#line 2631 "transform_hlds.unneeded_code.c"
}

#line 2634 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____uc_option_values_0_0_10001(
#line 2637 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 2639 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 2641 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3)
#line 2643 "transform_hlds.unneeded_code.c"
{
#line 2645 "transform_hlds.unneeded_code.c"
  {
#line 2647 "transform_hlds.unneeded_code.c"
    MR_Word transform_hlds__unneeded_code__conv0_HeadVar__1_1;

#line 2650 "transform_hlds.unneeded_code.c"
    {
#line 2652 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code____Compare____uc_option_values_0_0(&transform_hlds__unneeded_code__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_3));
    }
#line 2655 "transform_hlds.unneeded_code.c"
    *transform_hlds__unneeded_code__wrapper_arg_1 = ((MR_Box) (transform_hlds__unneeded_code__conv0_HeadVar__1_1));
#line 2657 "transform_hlds.unneeded_code.c"
  }
#line 2659 "transform_hlds.unneeded_code.c"
}

#line 2662 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____unneeded_code_info_0_0_10001(
#line 2665 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 2667 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2)
#line 2669 "transform_hlds.unneeded_code.c"
{
#line 2671 "transform_hlds.unneeded_code.c"
  {
#line 2673 "transform_hlds.unneeded_code.c"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 2676 "transform_hlds.unneeded_code.c"
    {
#line 2678 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____unneeded_code_info_0_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2));
    }
#line 2681 "transform_hlds.unneeded_code.c"
    return transform_hlds__unneeded_code__succeeded;
#line 2683 "transform_hlds.unneeded_code.c"
  }
#line 2685 "transform_hlds.unneeded_code.c"
}

#line 2688 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____unneeded_code_info_0_0_10001(
#line 2691 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 2693 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 2695 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3)
#line 2697 "transform_hlds.unneeded_code.c"
{
#line 2699 "transform_hlds.unneeded_code.c"
  {
#line 2701 "transform_hlds.unneeded_code.c"
    MR_Word transform_hlds__unneeded_code__conv0_HeadVar__1_1;

#line 2704 "transform_hlds.unneeded_code.c"
    {
#line 2706 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code____Compare____unneeded_code_info_0_0(&transform_hlds__unneeded_code__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_3));
    }
#line 2709 "transform_hlds.unneeded_code.c"
    *transform_hlds__unneeded_code__wrapper_arg_1 = ((MR_Box) (transform_hlds__unneeded_code__conv0_HeadVar__1_1));
#line 2711 "transform_hlds.unneeded_code.c"
  }
#line 2713 "transform_hlds.unneeded_code.c"
}

#line 2716 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_0_0_10001(
#line 2719 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 2721 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2)
#line 2723 "transform_hlds.unneeded_code.c"
{
#line 2725 "transform_hlds.unneeded_code.c"
  {
#line 2727 "transform_hlds.unneeded_code.c"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 2730 "transform_hlds.unneeded_code.c"
    {
#line 2732 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____where_needed_0_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2));
    }
#line 2735 "transform_hlds.unneeded_code.c"
    return transform_hlds__unneeded_code__succeeded;
#line 2737 "transform_hlds.unneeded_code.c"
  }
#line 2739 "transform_hlds.unneeded_code.c"
}

#line 2742 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_0_0_10001(
#line 2745 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 2747 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 2749 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3)
#line 2751 "transform_hlds.unneeded_code.c"
{
#line 2753 "transform_hlds.unneeded_code.c"
  {
#line 2755 "transform_hlds.unneeded_code.c"
    MR_Word transform_hlds__unneeded_code__conv0_HeadVar__1_1;

#line 2758 "transform_hlds.unneeded_code.c"
    {
#line 2760 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code____Compare____where_needed_0_0(&transform_hlds__unneeded_code__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_3));
    }
#line 2763 "transform_hlds.unneeded_code.c"
    *transform_hlds__unneeded_code__wrapper_arg_1 = ((MR_Box) (transform_hlds__unneeded_code__conv0_HeadVar__1_1));
#line 2765 "transform_hlds.unneeded_code.c"
  }
#line 2767 "transform_hlds.unneeded_code.c"
}

#line 2770 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_branches_0_0_10001(
#line 2773 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 2775 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2)
#line 2777 "transform_hlds.unneeded_code.c"
{
#line 2779 "transform_hlds.unneeded_code.c"
  {
#line 2781 "transform_hlds.unneeded_code.c"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 2784 "transform_hlds.unneeded_code.c"
    {
#line 2786 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____where_needed_branches_0_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2));
    }
#line 2789 "transform_hlds.unneeded_code.c"
    return transform_hlds__unneeded_code__succeeded;
#line 2791 "transform_hlds.unneeded_code.c"
  }
#line 2793 "transform_hlds.unneeded_code.c"
}

#line 2796 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_branches_0_0_10001(
#line 2799 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 2801 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 2803 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3)
#line 2805 "transform_hlds.unneeded_code.c"
{
#line 2807 "transform_hlds.unneeded_code.c"
  {
#line 2809 "transform_hlds.unneeded_code.c"
    MR_Word transform_hlds__unneeded_code__conv0_HeadVar__1_1;

#line 2812 "transform_hlds.unneeded_code.c"
    {
#line 2814 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code____Compare____where_needed_branches_0_0(&transform_hlds__unneeded_code__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_3));
    }
#line 2817 "transform_hlds.unneeded_code.c"
    *transform_hlds__unneeded_code__wrapper_arg_1 = ((MR_Box) (transform_hlds__unneeded_code__conv0_HeadVar__1_1));
#line 2819 "transform_hlds.unneeded_code.c"
  }
#line 2821 "transform_hlds.unneeded_code.c"
}

#line 2824 "transform_hlds.unneeded_code.c"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_map_0_0_10001(
#line 2827 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 2829 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2)
#line 2831 "transform_hlds.unneeded_code.c"
{
#line 2833 "transform_hlds.unneeded_code.c"
  {
#line 2835 "transform_hlds.unneeded_code.c"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 2838 "transform_hlds.unneeded_code.c"
    {
#line 2840 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____where_needed_map_0_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2));
    }
#line 2843 "transform_hlds.unneeded_code.c"
    return transform_hlds__unneeded_code__succeeded;
#line 2845 "transform_hlds.unneeded_code.c"
  }
#line 2847 "transform_hlds.unneeded_code.c"
}

#line 2850 "transform_hlds.unneeded_code.c"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_map_0_0_10001(
#line 2853 "transform_hlds.unneeded_code.c"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_1,
#line 2855 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 2857 "transform_hlds.unneeded_code.c"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_3)
#line 2859 "transform_hlds.unneeded_code.c"
{
#line 2861 "transform_hlds.unneeded_code.c"
  {
#line 2863 "transform_hlds.unneeded_code.c"
    MR_Word transform_hlds__unneeded_code__conv0_HeadVar__1_1;

#line 2866 "transform_hlds.unneeded_code.c"
    {
#line 2868 "transform_hlds.unneeded_code.c"
      transform_hlds__unneeded_code____Compare____where_needed_map_0_0(&transform_hlds__unneeded_code__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_3));
    }
#line 2871 "transform_hlds.unneeded_code.c"
    *transform_hlds__unneeded_code__wrapper_arg_1 = ((MR_Box) (transform_hlds__unneeded_code__conv0_HeadVar__1_1));
#line 2873 "transform_hlds.unneeded_code.c"
  }
#line 2875 "transform_hlds.unneeded_code.c"
}

#line 765 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_110_101_101_100_101_100_95_112_114_111_99_101_115_115_95_99_111_110_106_95_95_91_53_93_95_48_11_p_0(
#line 765 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_12,
#line 765 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goals0_13,
#line 765 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Goals_14,
#line 765 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_15,
#line 765 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_23,
#line 765 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_24,
#line 765 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_25,
#line 765 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_26,
#line 765 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_27,
#line 765 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_28)
#line 765 "unneeded_code.m"
{
#line 771 "unneeded_code.m"
  {
#line 771 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 771 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__BracketedGoals_20;
#line 771 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__RevBracketedGoals_21;
#line 771 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__RevGoals_22;

#line 772 "unneeded_code.m"
    {
#line 772 "unneeded_code.m"
      transform_hlds__unneeded_code__build_bracketed_conj_3_p_0(transform_hlds__unneeded_code__Goals0_13, transform_hlds__unneeded_code__InitInstMap_15, &transform_hlds__unneeded_code__BracketedGoals_20);
    }
#line 773 "unneeded_code.m"
    {
#line 773 "unneeded_code.m"
      mercury__list__reverse_2_p_0((MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_bracketed_goal_0, transform_hlds__unneeded_code__BracketedGoals_20, &transform_hlds__unneeded_code__RevBracketedGoals_21);
    }
#line 774 "unneeded_code.m"
    {
#line 774 "unneeded_code.m"
      transform_hlds__unneeded_code__unneeded_process_rev_bracketed_conj_9_p_0(transform_hlds__unneeded_code__UnneededInfo_12, transform_hlds__unneeded_code__RevBracketedGoals_21, &transform_hlds__unneeded_code__RevGoals_22, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_23, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_24, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_25, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_26, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_27, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_28);
    }
#line 776 "unneeded_code.m"
    {
#line 776 "unneeded_code.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__unneeded_code__RevGoals_22, transform_hlds__unneeded_code__Goals_14);
#line 776 "unneeded_code.m"
      return;
    }
#line 771 "unneeded_code.m"
  }
#line 765 "unneeded_code.m"
}

#line 647 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_109_97_110_100_95_118_97_114_95_101_118_101_114_121_119_104_101_114_101_95_95_91_49_93_95_48_2_p_0(
#line 647 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__2_2)
#line 647 "unneeded_code.m"
{
#line 649 "unneeded_code.m"
  {
#line 649 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 649 "unneeded_code.m"
    *transform_hlds__unneeded_code__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 649 "unneeded_code.m"
  }
#line 647 "unneeded_code.m"
}

#line 550 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__IntroducedFrom__pred__adjust_where_needed__550__1_2_p_0(
#line 550 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_40,
#line 550 "unneeded_code.m"
  MR_Integer * transform_hlds__unneeded_code__HeadVar__2_41)
#line 550 "unneeded_code.m"
{
#line 550 "unneeded_code.m"
  {
#line 550 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 550 "unneeded_code.m"
    {
#line 550 "unneeded_code.m"
      mercury__set__count_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__unneeded_code__HeadVar__1_40, transform_hlds__unneeded_code__HeadVar__2_41);
#line 550 "unneeded_code.m"
      return;
    }
#line 550 "unneeded_code.m"
  }
#line 550 "unneeded_code.m"
}

#line 366 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__IntroducedFrom__pred__unneeded_process_proc__366__1_1_p_0(
#line 366 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__RefinedGoals_49)
#line 366 "unneeded_code.m"
{
#line 366 "unneeded_code.m"
  {
#line 366 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 366 "unneeded_code.m"
    {
#line 366 "unneeded_code.m"
      return transform_hlds__unneeded_code__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1], transform_hlds__unneeded_code__RefinedGoals_49);
    }
#line 366 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 366 "unneeded_code.m"
  }
#line 366 "unneeded_code.m"
}

#line 321 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__IntroducedFrom__pred__unneeded_process_proc__321__1_3_p_0(
#line 321 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_65,
#line 321 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_66,
#line 321 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__3_67)
#line 321 "unneeded_code.m"
{
#line 321 "unneeded_code.m"
  {
#line 321 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 322 "unneeded_code.m"
    {
#line 322 "unneeded_code.m"
      mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, ((MR_Box) (transform_hlds__unneeded_code__HeadVar__1_65)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__unneeded_code__HeadVar__2_66, transform_hlds__unneeded_code__HeadVar__3_67);
#line 322 "unneeded_code.m"
      return;
    }
#line 321 "unneeded_code.m"
  }
#line 321 "unneeded_code.m"
}

#line 204 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_map_0_0(
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
    MR_Word transform_hlds__unneeded_code__Cast_HeadVar1_4 = transform_hlds__unneeded_code__HeadVar__2_2;
#line 204 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Cast_HeadVar2_5 = transform_hlds__unneeded_code__HeadVar__3_3;

#line 204 "unneeded_code.m"
    {
#line 204 "unneeded_code.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[0], transform_hlds__unneeded_code__HeadVar__1_1, ((MR_Box) (transform_hlds__unneeded_code__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__unneeded_code__Cast_HeadVar2_5)));
#line 204 "unneeded_code.m"
      return;
    }
#line 204 "unneeded_code.m"
  }
#line 204 "unneeded_code.m"
}

#line 204 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_map_0_0(
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
    MR_Word transform_hlds__unneeded_code__Cast_HeadVar1_3 = transform_hlds__unneeded_code__HeadVar__1_1;
#line 204 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Cast_HeadVar2_4 = transform_hlds__unneeded_code__HeadVar__2_2;

#line 204 "unneeded_code.m"
    {
#line 204 "unneeded_code.m"
      return transform_hlds__unneeded_code__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[0], ((MR_Box) (transform_hlds__unneeded_code__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__unneeded_code__Cast_HeadVar2_4)));
    }
#line 204 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 204 "unneeded_code.m"
  }
#line 204 "unneeded_code.m"
}

#line 210 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_branches_0_0(
#line 210 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 210 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 210 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3)
#line 210 "unneeded_code.m"
{
#line 210 "unneeded_code.m"
  {
#line 210 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 210 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Cast_HeadVar1_4 = transform_hlds__unneeded_code__HeadVar__2_2;
#line 210 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Cast_HeadVar2_5 = transform_hlds__unneeded_code__HeadVar__3_3;

#line 210 "unneeded_code.m"
    {
#line 210 "unneeded_code.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[6], transform_hlds__unneeded_code__HeadVar__1_1, ((MR_Box) (transform_hlds__unneeded_code__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__unneeded_code__Cast_HeadVar2_5)));
#line 210 "unneeded_code.m"
      return;
    }
#line 210 "unneeded_code.m"
  }
#line 210 "unneeded_code.m"
}

#line 210 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_branches_0_0(
#line 210 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 210 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2)
#line 210 "unneeded_code.m"
{
#line 210 "unneeded_code.m"
  {
#line 210 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 210 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Cast_HeadVar1_3 = transform_hlds__unneeded_code__HeadVar__1_1;
#line 210 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Cast_HeadVar2_4 = transform_hlds__unneeded_code__HeadVar__2_2;

#line 210 "unneeded_code.m"
    {
#line 210 "unneeded_code.m"
      return transform_hlds__unneeded_code__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[6], ((MR_Box) (transform_hlds__unneeded_code__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__unneeded_code__Cast_HeadVar2_4)));
    }
#line 210 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 210 "unneeded_code.m"
  }
#line 210 "unneeded_code.m"
}

#line 206 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____where_needed_0_0(
#line 206 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 206 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 206 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3)
#line 206 "unneeded_code.m"
{
#line 206 "unneeded_code.m"
  {
#line 206 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 206 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_8 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;
#line 206 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_9 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__3_3;

#line 206 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_8 == transform_hlds__unneeded_code__CastY_9);
#line 206 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 3186 "transform_hlds.unneeded_code.c"
      *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 0;
#line 206 "unneeded_code.m"
    else
#line 206 "unneeded_code.m"
    if ((transform_hlds__unneeded_code__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 206 "unneeded_code.m"
      if ((transform_hlds__unneeded_code__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 206 "unneeded_code.m"
        *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 0;
#line 206 "unneeded_code.m"
      else
#line 3198 "transform_hlds.unneeded_code.c"
        *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 1;
#line 206 "unneeded_code.m"
    else
#line 206 "unneeded_code.m"
      {
#line 206 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));

#line 206 "unneeded_code.m"
        if ((transform_hlds__unneeded_code__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3209 "transform_hlds.unneeded_code.c"
          *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 2;
#line 206 "unneeded_code.m"
        else
#line 206 "unneeded_code.m"
          {
#line 206 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 0)));

#line 206 "unneeded_code.m"
            {
#line 206 "unneeded_code.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[6], transform_hlds__unneeded_code__HeadVar__1_1, ((MR_Box) (transform_hlds__unneeded_code__V_11_11)), ((MR_Box) (transform_hlds__unneeded_code__V_7_7)));
#line 206 "unneeded_code.m"
              return;
            }
#line 206 "unneeded_code.m"
          }
#line 206 "unneeded_code.m"
      }
#line 206 "unneeded_code.m"
  }
#line 206 "unneeded_code.m"
}

#line 206 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____where_needed_0_0(
#line 206 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 206 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2)
#line 206 "unneeded_code.m"
{
#line 206 "unneeded_code.m"
  {
#line 206 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 206 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_7 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__1_1;
#line 206 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_8 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;

#line 206 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_7 == transform_hlds__unneeded_code__CastY_8);
#line 206 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 206 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 206 "unneeded_code.m"
    else
#line 206 "unneeded_code.m"
    if ((transform_hlds__unneeded_code__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 206 "unneeded_code.m"
      {
#line 206 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__CastX_3 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__1_1;
#line 206 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__CastY_4 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;

#line 206 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastY_4 == transform_hlds__unneeded_code__CastX_3);
#line 206 "unneeded_code.m"
      }
#line 206 "unneeded_code.m"
    else
#line 206 "unneeded_code.m"
      {
#line 206 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__TypeInfo_9_9;
#line 206 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 0)));
#line 206 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_6_6;

#line 206 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = ((MR_tag((MR_Word) transform_hlds__unneeded_code__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 206 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 206 "unneeded_code.m"
          {
#line 206 "unneeded_code.m"
            transform_hlds__unneeded_code__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 3292 "transform_hlds.unneeded_code.c"
            transform_hlds__unneeded_code__TypeInfo_9_9 = (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[6];
#line 3294 "transform_hlds.unneeded_code.c"
            {
#line 3296 "transform_hlds.unneeded_code.c"
              return transform_hlds__unneeded_code__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unneeded_code__TypeInfo_9_9, ((MR_Box) (transform_hlds__unneeded_code__V_5_5)), ((MR_Box) (transform_hlds__unneeded_code__V_6_6)));
            }
#line 206 "unneeded_code.m"
          }
#line 206 "unneeded_code.m"
      }
#line 206 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 206 "unneeded_code.m"
  }
#line 206 "unneeded_code.m"
}

#line 299 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____unneeded_code_info_0_0(
#line 299 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 299 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 299 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3)
#line 299 "unneeded_code.m"
{
#line 299 "unneeded_code.m"
  {
#line 299 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 299 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_15 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;
#line 299 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_16 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__3_3;

#line 299 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_15 == transform_hlds__unneeded_code__CastY_16);
#line 299 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 3334 "transform_hlds.unneeded_code.c"
      *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 0;
#line 299 "unneeded_code.m"
    else
#line 299 "unneeded_code.m"
      {
#line 299 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 299 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 299 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 2)));
#line 299 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 3)));
#line 299 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 0)));
#line 299 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 1)));
#line 299 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 2)));
#line 299 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 3)));
#line 299 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_12_12;

#line 299 "unneeded_code.m"
        {
#line 299 "unneeded_code.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__unneeded_code__V_12_12, transform_hlds__unneeded_code__V_4_4, transform_hlds__unneeded_code__V_8_8);
        }
#line 3364 "transform_hlds.unneeded_code.c"
        transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_12_12 == (MR_Integer) 0);
#line 299 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 299 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 299 "unneeded_code.m"
          *transform_hlds__unneeded_code__HeadVar__1_1 = transform_hlds__unneeded_code__V_12_12;
#line 299 "unneeded_code.m"
        else
#line 299 "unneeded_code.m"
          {
#line 299 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_13_13;

#line 299 "unneeded_code.m"
            {
#line 299 "unneeded_code.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[4], &transform_hlds__unneeded_code__V_13_13, ((MR_Box) (transform_hlds__unneeded_code__V_5_5)), ((MR_Box) (transform_hlds__unneeded_code__V_9_9)));
            }
#line 3384 "transform_hlds.unneeded_code.c"
            transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_13_13 == (MR_Integer) 0);
#line 299 "unneeded_code.m"
            transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 299 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 299 "unneeded_code.m"
              *transform_hlds__unneeded_code__HeadVar__1_1 = transform_hlds__unneeded_code__V_13_13;
#line 299 "unneeded_code.m"
            else
#line 299 "unneeded_code.m"
              {
#line 299 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__V_14_14;

#line 299 "unneeded_code.m"
                {
#line 299 "unneeded_code.m"
                  transform_hlds__unneeded_code____Compare____uc_option_values_0_0(&transform_hlds__unneeded_code__V_14_14, transform_hlds__unneeded_code__V_6_6, transform_hlds__unneeded_code__V_10_10);
                }
#line 3404 "transform_hlds.unneeded_code.c"
                transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_14_14 == (MR_Integer) 0);
#line 299 "unneeded_code.m"
                transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 299 "unneeded_code.m"
                if (transform_hlds__unneeded_code__succeeded)
#line 299 "unneeded_code.m"
                  *transform_hlds__unneeded_code__HeadVar__1_1 = transform_hlds__unneeded_code__V_14_14;
#line 299 "unneeded_code.m"
                else
#line 299 "unneeded_code.m"
                  {
#line 299 "unneeded_code.m"
                    {
#line 299 "unneeded_code.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[5], transform_hlds__unneeded_code__HeadVar__1_1, ((MR_Box) (transform_hlds__unneeded_code__V_7_7)), ((MR_Box) (transform_hlds__unneeded_code__V_11_11)));
#line 299 "unneeded_code.m"
                      return;
                    }
#line 299 "unneeded_code.m"
                  }
#line 299 "unneeded_code.m"
              }
#line 299 "unneeded_code.m"
          }
#line 299 "unneeded_code.m"
      }
#line 299 "unneeded_code.m"
  }
#line 299 "unneeded_code.m"
}

#line 299 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____unneeded_code_info_0_0(
#line 299 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 299 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2)
#line 299 "unneeded_code.m"
{
#line 299 "unneeded_code.m"
  {
#line 299 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 299 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_11 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__1_1;
#line 299 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_12 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;

#line 299 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_11 == transform_hlds__unneeded_code__CastY_12);
#line 299 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 299 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 299 "unneeded_code.m"
    else
#line 299 "unneeded_code.m"
      {
#line 299 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__TypeInfo_14_14;
#line 299 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__TypeInfo_15_15;
#line 299 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 0)));
#line 299 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 1)));
#line 299 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 2)));
#line 299 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 3)));
#line 299 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 299 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 299 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 2)));
#line 299 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 3)));

#line 3485 "transform_hlds.unneeded_code.c"
        {
#line 3487 "transform_hlds.unneeded_code.c"
          transform_hlds__unneeded_code__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__unneeded_code__V_3_3, transform_hlds__unneeded_code__V_7_7);
        }
#line 299 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 299 "unneeded_code.m"
          {
#line 3494 "transform_hlds.unneeded_code.c"
            transform_hlds__unneeded_code__TypeInfo_14_14 = (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[4];
#line 3496 "transform_hlds.unneeded_code.c"
            {
#line 3498 "transform_hlds.unneeded_code.c"
              transform_hlds__unneeded_code__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unneeded_code__TypeInfo_14_14, ((MR_Box) (transform_hlds__unneeded_code__V_4_4)), ((MR_Box) (transform_hlds__unneeded_code__V_8_8)));
            }
#line 299 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 299 "unneeded_code.m"
              {
#line 3505 "transform_hlds.unneeded_code.c"
                {
#line 3507 "transform_hlds.unneeded_code.c"
                  transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____uc_option_values_0_0(transform_hlds__unneeded_code__V_5_5, transform_hlds__unneeded_code__V_9_9);
                }
#line 299 "unneeded_code.m"
                if (transform_hlds__unneeded_code__succeeded)
#line 299 "unneeded_code.m"
                  {
#line 3514 "transform_hlds.unneeded_code.c"
                    transform_hlds__unneeded_code__TypeInfo_15_15 = (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[5];
#line 3516 "transform_hlds.unneeded_code.c"
                    {
#line 3518 "transform_hlds.unneeded_code.c"
                      return transform_hlds__unneeded_code__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__unneeded_code__TypeInfo_15_15, ((MR_Box) (transform_hlds__unneeded_code__V_6_6)), ((MR_Box) (transform_hlds__unneeded_code__V_10_10)));
                    }
#line 299 "unneeded_code.m"
                  }
#line 299 "unneeded_code.m"
              }
#line 299 "unneeded_code.m"
          }
#line 299 "unneeded_code.m"
      }
#line 299 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 299 "unneeded_code.m"
  }
#line 299 "unneeded_code.m"
}

#line 291 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____uc_option_values_0_0(
#line 291 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 291 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 291 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3)
#line 291 "unneeded_code.m"
{
#line 291 "unneeded_code.m"
  {
#line 291 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 291 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_15 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;
#line 291 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_16 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__3_3;

#line 291 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_15 == transform_hlds__unneeded_code__CastY_16);
#line 291 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 3560 "transform_hlds.unneeded_code.c"
      *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 0;
#line 291 "unneeded_code.m"
    else
#line 291 "unneeded_code.m"
      {
#line 291 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 291 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 291 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 2)));
#line 291 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 3)));
#line 291 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 0)));
#line 291 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 1)));
#line 291 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 2)));
#line 291 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 3)));
#line 291 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_12_12;
#line 291 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_21_21 = (MR_Integer) transform_hlds__unneeded_code__V_4_4;
#line 291 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_22_22 = (MR_Integer) transform_hlds__unneeded_code__V_8_8;

#line 291 "unneeded_code.m"
        {
#line 291 "unneeded_code.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__unneeded_code__V_12_12, transform_hlds__unneeded_code__V_21_21, transform_hlds__unneeded_code__V_22_22);
        }
#line 3594 "transform_hlds.unneeded_code.c"
        transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_12_12 == (MR_Integer) 0);
#line 291 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 291 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 291 "unneeded_code.m"
          *transform_hlds__unneeded_code__HeadVar__1_1 = transform_hlds__unneeded_code__V_12_12;
#line 291 "unneeded_code.m"
        else
#line 291 "unneeded_code.m"
          {
#line 291 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_13_13;
#line 291 "unneeded_code.m"
            MR_Integer transform_hlds__unneeded_code__V_23_23 = (MR_Integer) transform_hlds__unneeded_code__V_5_5;
#line 291 "unneeded_code.m"
            MR_Integer transform_hlds__unneeded_code__V_24_24 = (MR_Integer) transform_hlds__unneeded_code__V_9_9;

#line 291 "unneeded_code.m"
            {
#line 291 "unneeded_code.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__unneeded_code__V_13_13, transform_hlds__unneeded_code__V_23_23, transform_hlds__unneeded_code__V_24_24);
            }
#line 3618 "transform_hlds.unneeded_code.c"
            transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_13_13 == (MR_Integer) 0);
#line 291 "unneeded_code.m"
            transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 291 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 291 "unneeded_code.m"
              *transform_hlds__unneeded_code__HeadVar__1_1 = transform_hlds__unneeded_code__V_13_13;
#line 291 "unneeded_code.m"
            else
#line 291 "unneeded_code.m"
              {
#line 291 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__V_14_14;

#line 291 "unneeded_code.m"
                {
#line 291 "unneeded_code.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__unneeded_code__V_14_14, transform_hlds__unneeded_code__V_6_6, transform_hlds__unneeded_code__V_10_10);
                }
#line 3638 "transform_hlds.unneeded_code.c"
                transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_14_14 == (MR_Integer) 0);
#line 291 "unneeded_code.m"
                transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 291 "unneeded_code.m"
                if (transform_hlds__unneeded_code__succeeded)
#line 291 "unneeded_code.m"
                  *transform_hlds__unneeded_code__HeadVar__1_1 = transform_hlds__unneeded_code__V_14_14;
#line 291 "unneeded_code.m"
                else
#line 291 "unneeded_code.m"
                  {
#line 291 "unneeded_code.m"
                    MR_Integer transform_hlds__unneeded_code__V_25_25 = (MR_Integer) transform_hlds__unneeded_code__V_7_7;
#line 291 "unneeded_code.m"
                    MR_Integer transform_hlds__unneeded_code__V_26_26 = (MR_Integer) transform_hlds__unneeded_code__V_11_11;

#line 291 "unneeded_code.m"
                    {
#line 291 "unneeded_code.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__unneeded_code__HeadVar__1_1, transform_hlds__unneeded_code__V_25_25, transform_hlds__unneeded_code__V_26_26);
#line 291 "unneeded_code.m"
                      return;
                    }
#line 291 "unneeded_code.m"
                  }
#line 291 "unneeded_code.m"
              }
#line 291 "unneeded_code.m"
          }
#line 291 "unneeded_code.m"
      }
#line 291 "unneeded_code.m"
  }
#line 291 "unneeded_code.m"
}

#line 291 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____uc_option_values_0_0(
#line 291 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 291 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2)
#line 291 "unneeded_code.m"
{
#line 291 "unneeded_code.m"
  {
#line 291 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 291 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_11 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__1_1;
#line 291 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_12 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;

#line 291 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_11 == transform_hlds__unneeded_code__CastY_12);
#line 291 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 291 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 291 "unneeded_code.m"
    else
#line 291 "unneeded_code.m"
      {
#line 291 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 0)));
#line 291 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 1)));
#line 291 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 2)));
#line 291 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 3)));
#line 291 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 291 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 291 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 2)));
#line 291 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 3)));

#line 3720 "transform_hlds.unneeded_code.c"
        transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_3_3 == transform_hlds__unneeded_code__V_7_7);
#line 291 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 291 "unneeded_code.m"
          {
#line 3726 "transform_hlds.unneeded_code.c"
            transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_4_4 == transform_hlds__unneeded_code__V_8_8);
#line 291 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 291 "unneeded_code.m"
              {
#line 3732 "transform_hlds.unneeded_code.c"
                transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_5_5 == transform_hlds__unneeded_code__V_9_9);
#line 291 "unneeded_code.m"
                if (transform_hlds__unneeded_code__succeeded)
#line 3736 "transform_hlds.unneeded_code.c"
                  transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_6_6 == transform_hlds__unneeded_code__V_10_10);
#line 291 "unneeded_code.m"
              }
#line 291 "unneeded_code.m"
          }
#line 291 "unneeded_code.m"
      }
#line 291 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 291 "unneeded_code.m"
  }
#line 291 "unneeded_code.m"
}

#line 218 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____refined_goal_map_0_0(
#line 218 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 218 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 218 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3)
#line 218 "unneeded_code.m"
{
#line 218 "unneeded_code.m"
  {
#line 218 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 218 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Cast_HeadVar1_4 = transform_hlds__unneeded_code__HeadVar__2_2;
#line 218 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Cast_HeadVar2_5 = transform_hlds__unneeded_code__HeadVar__3_3;

#line 218 "unneeded_code.m"
    {
#line 218 "unneeded_code.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[3], transform_hlds__unneeded_code__HeadVar__1_1, ((MR_Box) (transform_hlds__unneeded_code__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__unneeded_code__Cast_HeadVar2_5)));
#line 218 "unneeded_code.m"
      return;
    }
#line 218 "unneeded_code.m"
  }
#line 218 "unneeded_code.m"
}

#line 218 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____refined_goal_map_0_0(
#line 218 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 218 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2)
#line 218 "unneeded_code.m"
{
#line 218 "unneeded_code.m"
  {
#line 218 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 218 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Cast_HeadVar1_3 = transform_hlds__unneeded_code__HeadVar__1_1;
#line 218 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Cast_HeadVar2_4 = transform_hlds__unneeded_code__HeadVar__2_2;

#line 218 "unneeded_code.m"
    {
#line 218 "unneeded_code.m"
      return transform_hlds__unneeded_code__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[3], ((MR_Box) (transform_hlds__unneeded_code__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__unneeded_code__Cast_HeadVar2_4)));
    }
#line 218 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 218 "unneeded_code.m"
  }
#line 218 "unneeded_code.m"
}

#line 146 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____location_0_0(
#line 146 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 146 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 146 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3)
#line 146 "unneeded_code.m"
{
#line 146 "unneeded_code.m"
  {
#line 146 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 146 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_9 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;
#line 146 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_10 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__3_3;

#line 146 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_9 == transform_hlds__unneeded_code__CastY_10);
#line 146 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 3837 "transform_hlds.unneeded_code.c"
      *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 0;
#line 146 "unneeded_code.m"
    else
#line 146 "unneeded_code.m"
      {
#line 146 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 146 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 146 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 0)));
#line 146 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 1)));
#line 146 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_8_8;

#line 146 "unneeded_code.m"
        {
#line 146 "unneeded_code.m"
          transform_hlds__unneeded_code____Compare____branch_point_0_0(&transform_hlds__unneeded_code__V_8_8, transform_hlds__unneeded_code__V_4_4, transform_hlds__unneeded_code__V_6_6);
        }
#line 3859 "transform_hlds.unneeded_code.c"
        transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_8_8 == (MR_Integer) 0);
#line 146 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 146 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 146 "unneeded_code.m"
          *transform_hlds__unneeded_code__HeadVar__1_1 = transform_hlds__unneeded_code__V_8_8;
#line 146 "unneeded_code.m"
        else
#line 146 "unneeded_code.m"
          {
#line 146 "unneeded_code.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__unneeded_code__HeadVar__1_1, transform_hlds__unneeded_code__V_5_5, transform_hlds__unneeded_code__V_7_7);
#line 146 "unneeded_code.m"
            return;
          }
#line 146 "unneeded_code.m"
      }
#line 146 "unneeded_code.m"
  }
#line 146 "unneeded_code.m"
}

#line 146 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____location_0_0(
#line 146 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 146 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2)
#line 146 "unneeded_code.m"
{
#line 146 "unneeded_code.m"
  {
#line 146 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 146 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_7 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__1_1;
#line 146 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_8 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;

#line 146 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_7 == transform_hlds__unneeded_code__CastY_8);
#line 146 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 146 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 146 "unneeded_code.m"
    else
#line 146 "unneeded_code.m"
      {
#line 146 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 0)));
#line 146 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 1)));
#line 146 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 146 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));

#line 3920 "transform_hlds.unneeded_code.c"
        {
#line 3922 "transform_hlds.unneeded_code.c"
          transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____branch_point_0_0(transform_hlds__unneeded_code__V_3_3, transform_hlds__unneeded_code__V_5_5);
        }
#line 146 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 3927 "transform_hlds.unneeded_code.c"
          transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_4_4 == transform_hlds__unneeded_code__V_6_6);
#line 146 "unneeded_code.m"
      }
#line 146 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 146 "unneeded_code.m"
  }
#line 146 "unneeded_code.m"
}

#line 114 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____branch_point_0_0(
#line 114 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 114 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 114 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3)
#line 114 "unneeded_code.m"
{
#line 114 "unneeded_code.m"
  {
#line 114 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 114 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_9 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;
#line 114 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_10 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__3_3;

#line 114 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_9 == transform_hlds__unneeded_code__CastY_10);
#line 114 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 3962 "transform_hlds.unneeded_code.c"
      *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 0;
#line 114 "unneeded_code.m"
    else
#line 114 "unneeded_code.m"
      {
#line 114 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 114 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 114 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 0)));
#line 114 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 1)));
#line 114 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_8_8;
#line 114 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_13_13 = (MR_Integer) transform_hlds__unneeded_code__V_4_4;
#line 114 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_14_14 = (MR_Integer) transform_hlds__unneeded_code__V_6_6;

#line 114 "unneeded_code.m"
        {
#line 114 "unneeded_code.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__unneeded_code__V_8_8, transform_hlds__unneeded_code__V_13_13, transform_hlds__unneeded_code__V_14_14);
        }
#line 3988 "transform_hlds.unneeded_code.c"
        transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_8_8 == (MR_Integer) 0);
#line 114 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 114 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 114 "unneeded_code.m"
          *transform_hlds__unneeded_code__HeadVar__1_1 = transform_hlds__unneeded_code__V_8_8;
#line 114 "unneeded_code.m"
        else
#line 114 "unneeded_code.m"
          {
#line 114 "unneeded_code.m"
            transform_hlds__unneeded_code____Compare____branch_alts_0_0(transform_hlds__unneeded_code__HeadVar__1_1, transform_hlds__unneeded_code__V_5_5, transform_hlds__unneeded_code__V_7_7);
#line 114 "unneeded_code.m"
            return;
          }
#line 114 "unneeded_code.m"
      }
#line 114 "unneeded_code.m"
  }
#line 114 "unneeded_code.m"
}

#line 114 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____branch_point_0_0(
#line 114 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 114 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2)
#line 114 "unneeded_code.m"
{
#line 114 "unneeded_code.m"
  {
#line 114 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 114 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_7 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__1_1;
#line 114 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_8 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;

#line 114 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_7 == transform_hlds__unneeded_code__CastY_8);
#line 114 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 114 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 114 "unneeded_code.m"
    else
#line 114 "unneeded_code.m"
      {
#line 114 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 0)));
#line 114 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 1)));
#line 114 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 114 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 114 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_10_10 = (MR_Integer) transform_hlds__unneeded_code__V_3_3;
#line 114 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_11_11 = (MR_Integer) transform_hlds__unneeded_code__V_5_5;

#line 4053 "transform_hlds.unneeded_code.c"
        transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_10_10 == transform_hlds__unneeded_code__V_11_11);
#line 114 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 4057 "transform_hlds.unneeded_code.c"
          {
#line 4059 "transform_hlds.unneeded_code.c"
            return transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code____Unify____branch_alts_0_0(transform_hlds__unneeded_code__V_4_4, transform_hlds__unneeded_code__V_6_6);
          }
#line 114 "unneeded_code.m"
      }
#line 114 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 114 "unneeded_code.m"
  }
#line 114 "unneeded_code.m"
}

#line 125 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____branch_alts_0_0(
#line 125 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 125 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 125 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3)
#line 125 "unneeded_code.m"
{
#line 125 "unneeded_code.m"
  {
#line 125 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 125 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_8 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;
#line 125 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_9 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__3_3;

#line 125 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_8 == transform_hlds__unneeded_code__CastY_9);
#line 125 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 4095 "transform_hlds.unneeded_code.c"
      *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 0;
#line 125 "unneeded_code.m"
    else
#line 125 "unneeded_code.m"
    if ((transform_hlds__unneeded_code__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 125 "unneeded_code.m"
      if ((transform_hlds__unneeded_code__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 125 "unneeded_code.m"
        *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 0;
#line 125 "unneeded_code.m"
      else
#line 4107 "transform_hlds.unneeded_code.c"
        *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 1;
#line 125 "unneeded_code.m"
    else
#line 125 "unneeded_code.m"
      {
#line 125 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));

#line 125 "unneeded_code.m"
        if ((transform_hlds__unneeded_code__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4118 "transform_hlds.unneeded_code.c"
          *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 2;
#line 125 "unneeded_code.m"
        else
#line 125 "unneeded_code.m"
          {
#line 125 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 0)));

#line 125 "unneeded_code.m"
            {
#line 125 "unneeded_code.m"
              mdbcomp__goal_path____Compare____maybe_switch_num_functors_0_0(transform_hlds__unneeded_code__HeadVar__1_1, transform_hlds__unneeded_code__V_11_11, transform_hlds__unneeded_code__V_7_7);
#line 125 "unneeded_code.m"
              return;
            }
#line 125 "unneeded_code.m"
          }
#line 125 "unneeded_code.m"
      }
#line 125 "unneeded_code.m"
  }
#line 125 "unneeded_code.m"
}

#line 125 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____branch_alts_0_0(
#line 125 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 125 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2)
#line 125 "unneeded_code.m"
{
#line 125 "unneeded_code.m"
  {
#line 125 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 125 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_7 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__1_1;
#line 125 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_8 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;

#line 125 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_7 == transform_hlds__unneeded_code__CastY_8);
#line 125 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 125 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 125 "unneeded_code.m"
    else
#line 125 "unneeded_code.m"
    if ((transform_hlds__unneeded_code__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 125 "unneeded_code.m"
      {
#line 125 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__CastX_3 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__1_1;
#line 125 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__CastY_4 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;

#line 125 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastY_4 == transform_hlds__unneeded_code__CastX_3);
#line 125 "unneeded_code.m"
      }
#line 125 "unneeded_code.m"
    else
#line 125 "unneeded_code.m"
      {
#line 125 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 0)));
#line 125 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_6_6;

#line 125 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = ((MR_tag((MR_Word) transform_hlds__unneeded_code__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 125 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 125 "unneeded_code.m"
          {
#line 125 "unneeded_code.m"
            transform_hlds__unneeded_code__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 4199 "transform_hlds.unneeded_code.c"
            {
#line 4201 "transform_hlds.unneeded_code.c"
              return transform_hlds__unneeded_code__succeeded = mdbcomp__goal_path____Unify____maybe_switch_num_functors_0_0(transform_hlds__unneeded_code__V_5_5, transform_hlds__unneeded_code__V_6_6);
            }
#line 125 "unneeded_code.m"
          }
#line 125 "unneeded_code.m"
      }
#line 125 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 125 "unneeded_code.m"
  }
#line 125 "unneeded_code.m"
}

#line 762 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code____Compare____bracketed_goal_0_0(
#line 762 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__1_1,
#line 762 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 762 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3)
#line 762 "unneeded_code.m"
{
#line 762 "unneeded_code.m"
  {
#line 762 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 762 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_12 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;
#line 762 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_13 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__3_3;

#line 762 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_12 == transform_hlds__unneeded_code__CastY_13);
#line 762 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 4239 "transform_hlds.unneeded_code.c"
      *transform_hlds__unneeded_code__HeadVar__1_1 = (MR_Integer) 0;
#line 762 "unneeded_code.m"
    else
#line 762 "unneeded_code.m"
      {
#line 762 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 762 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 762 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 2)));
#line 762 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 0)));
#line 762 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 1)));
#line 762 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 2)));
#line 762 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_10_10;

#line 762 "unneeded_code.m"
        {
#line 762 "unneeded_code.m"
          hlds__hlds_goal____Compare____hlds_goal_0_0(&transform_hlds__unneeded_code__V_10_10, transform_hlds__unneeded_code__V_4_4, transform_hlds__unneeded_code__V_7_7);
        }
#line 4265 "transform_hlds.unneeded_code.c"
        transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_10_10 == (MR_Integer) 0);
#line 762 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 762 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 762 "unneeded_code.m"
          *transform_hlds__unneeded_code__HeadVar__1_1 = transform_hlds__unneeded_code__V_10_10;
#line 762 "unneeded_code.m"
        else
#line 762 "unneeded_code.m"
          {
#line 762 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_11_11;

#line 762 "unneeded_code.m"
            {
#line 762 "unneeded_code.m"
              hlds__instmap____Compare____instmap_0_0(&transform_hlds__unneeded_code__V_11_11, transform_hlds__unneeded_code__V_5_5, transform_hlds__unneeded_code__V_8_8);
            }
#line 4285 "transform_hlds.unneeded_code.c"
            transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_11_11 == (MR_Integer) 0);
#line 762 "unneeded_code.m"
            transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 762 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 762 "unneeded_code.m"
              *transform_hlds__unneeded_code__HeadVar__1_1 = transform_hlds__unneeded_code__V_11_11;
#line 762 "unneeded_code.m"
            else
#line 762 "unneeded_code.m"
              {
#line 762 "unneeded_code.m"
                hlds__instmap____Compare____instmap_0_0(transform_hlds__unneeded_code__HeadVar__1_1, transform_hlds__unneeded_code__V_6_6, transform_hlds__unneeded_code__V_9_9);
#line 762 "unneeded_code.m"
                return;
              }
#line 762 "unneeded_code.m"
          }
#line 762 "unneeded_code.m"
      }
#line 762 "unneeded_code.m"
  }
#line 762 "unneeded_code.m"
}

#line 762 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code____Unify____bracketed_goal_0_0(
#line 762 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 762 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2)
#line 762 "unneeded_code.m"
{
#line 762 "unneeded_code.m"
  {
#line 762 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 762 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastX_9 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__1_1;
#line 762 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__CastY_10 = (MR_Integer) transform_hlds__unneeded_code__HeadVar__2_2;

#line 762 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__CastX_9 == transform_hlds__unneeded_code__CastY_10);
#line 762 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 762 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 762 "unneeded_code.m"
    else
#line 762 "unneeded_code.m"
      {
#line 762 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 0)));
#line 762 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 1)));
#line 762 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 2)));
#line 762 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 762 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 762 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 2)));

#line 4352 "transform_hlds.unneeded_code.c"
        {
#line 4354 "transform_hlds.unneeded_code.c"
          transform_hlds__unneeded_code__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__unneeded_code__V_3_3, transform_hlds__unneeded_code__V_6_6);
        }
#line 762 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 762 "unneeded_code.m"
          {
#line 4361 "transform_hlds.unneeded_code.c"
            {
#line 4363 "transform_hlds.unneeded_code.c"
              transform_hlds__unneeded_code__succeeded = hlds__instmap____Unify____instmap_0_0(transform_hlds__unneeded_code__V_4_4, transform_hlds__unneeded_code__V_7_7);
            }
#line 762 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 4368 "transform_hlds.unneeded_code.c"
              {
#line 4370 "transform_hlds.unneeded_code.c"
                return transform_hlds__unneeded_code__succeeded = hlds__instmap____Unify____instmap_0_0(transform_hlds__unneeded_code__V_5_5, transform_hlds__unneeded_code__V_8_8);
              }
#line 762 "unneeded_code.m"
          }
#line 762 "unneeded_code.m"
      }
#line 762 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 762 "unneeded_code.m"
  }
#line 762 "unneeded_code.m"
}

#line 1188 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__get_parent_branch_point_6_p_0(
#line 1188 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_7,
#line 1188 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__GoalId_8,
#line 1188 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__BranchGoalId_9,
#line 1188 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__BranchArmGoalId_10,
#line 1188 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__BranchAlt_11,
#line 1188 "unneeded_code.m"
  MR_Integer * transform_hlds__unneeded_code__BranchNum_12)
#line 1188 "unneeded_code.m"
{
#line 1192 "unneeded_code.m"
  while (MR_TRUE)
#line 1192 "unneeded_code.m"
    {
#line 1192 "unneeded_code.m"
      /* tailcall optimized into a loop */
#line 1192 "unneeded_code.m"
      {
#line 1192 "unneeded_code.m"
        MR_bool transform_hlds__unneeded_code__succeeded;
#line 1192 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__GoalContaining_13;
#line 1192 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__ContainingGoalId_14;
#line 1192 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__LastStep_15;
#line 1193 "unneeded_code.m"
        MR_Box transform_hlds__unneeded_code__conv0_GoalContaining_13;

#line 1193 "unneeded_code.m"
        {
#line 1193 "unneeded_code.m"
          mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0, transform_hlds__unneeded_code__ContainingGoalMap_7, ((MR_Box) (transform_hlds__unneeded_code__GoalId_8)), &transform_hlds__unneeded_code__conv0_GoalContaining_13);
        }
#line 1193 "unneeded_code.m"
        transform_hlds__unneeded_code__GoalContaining_13 = ((MR_Word) transform_hlds__unneeded_code__conv0_GoalContaining_13);
#line 1194 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = ((MR_tag((MR_Word) transform_hlds__unneeded_code__GoalContaining_13)) == (MR_mktag((MR_Integer) 1)));
#line 1194 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 1194 "unneeded_code.m"
          {
#line 1194 "unneeded_code.m"
            transform_hlds__unneeded_code__ContainingGoalId_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__GoalContaining_13, (MR_Integer) 0)));
#line 1194 "unneeded_code.m"
            transform_hlds__unneeded_code__LastStep_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__GoalContaining_13, (MR_Integer) 1)));
#line 1201 "unneeded_code.m"
#line 1201 "unneeded_code.m"
            switch (MR_tag((MR_Word) transform_hlds__unneeded_code__LastStep_15)) {
#line 1201 "unneeded_code.m"
              default:
#line 1201 "unneeded_code.m"
                transform_hlds__unneeded_code__succeeded = MR_FALSE;
#line 1201 "unneeded_code.m"
                break;
#line 1201 "unneeded_code.m"
              case (MR_Integer) 0:
#line 1201 "unneeded_code.m"
#line 1201 "unneeded_code.m"
                switch (MR_unmkbody(transform_hlds__unneeded_code__LastStep_15)) {
#line 1201 "unneeded_code.m"
                  default:
#line 1201 "unneeded_code.m"
                    transform_hlds__unneeded_code__succeeded = MR_FALSE;
#line 1201 "unneeded_code.m"
                    break;
#line 1201 "unneeded_code.m"
                  case (MR_Integer) 0:
#line 1201 "unneeded_code.m"
                  case (MR_Integer) 3:
#line 1220 "unneeded_code.m"
                    {
#line 1220 "unneeded_code.m"
                      /* direct tailcall eliminated */
#line 1220 "unneeded_code.m"
                      {
#line 1220 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__GoalId__tmp_copy_8 = transform_hlds__unneeded_code__ContainingGoalId_14;

#line 1220 "unneeded_code.m"
                        transform_hlds__unneeded_code__GoalId_8 = transform_hlds__unneeded_code__GoalId__tmp_copy_8;
#line 1220 "unneeded_code.m"
                      }
#line 1220 "unneeded_code.m"
                      continue;
#line 1220 "unneeded_code.m"
                    }
#line 1201 "unneeded_code.m"
                    break;
#line 1201 "unneeded_code.m"
                  case (MR_Integer) 1:
#line 1202 "unneeded_code.m"
                    {
#line 1203 "unneeded_code.m"
                      *transform_hlds__unneeded_code__BranchGoalId_9 = transform_hlds__unneeded_code__ContainingGoalId_14;
#line 1204 "unneeded_code.m"
                      *transform_hlds__unneeded_code__BranchArmGoalId_10 = transform_hlds__unneeded_code__GoalId_8;
#line 1205 "unneeded_code.m"
                      *transform_hlds__unneeded_code__BranchAlt_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1206 "unneeded_code.m"
                      *transform_hlds__unneeded_code__BranchNum_12 = (MR_Integer) 1;
#line 1202 "unneeded_code.m"
                      transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 1202 "unneeded_code.m"
                    }
#line 1201 "unneeded_code.m"
                    break;
#line 1201 "unneeded_code.m"
                  case (MR_Integer) 2:
#line 1208 "unneeded_code.m"
                    {
#line 1209 "unneeded_code.m"
                      *transform_hlds__unneeded_code__BranchGoalId_9 = transform_hlds__unneeded_code__ContainingGoalId_14;
#line 1210 "unneeded_code.m"
                      *transform_hlds__unneeded_code__BranchArmGoalId_10 = transform_hlds__unneeded_code__GoalId_8;
#line 1211 "unneeded_code.m"
                      *transform_hlds__unneeded_code__BranchAlt_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1212 "unneeded_code.m"
                      *transform_hlds__unneeded_code__BranchNum_12 = (MR_Integer) 2;
#line 1208 "unneeded_code.m"
                      transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 1208 "unneeded_code.m"
                    }
#line 1201 "unneeded_code.m"
                    break;
#line 1201 "unneeded_code.m"
                }
#line 1201 "unneeded_code.m"
                break;
#line 1201 "unneeded_code.m"
              case (MR_Integer) 1:
#line 1201 "unneeded_code.m"
              case (MR_Integer) 2:
#line 1220 "unneeded_code.m"
                {
#line 1220 "unneeded_code.m"
                  /* direct tailcall eliminated */
#line 1220 "unneeded_code.m"
                  {
#line 1220 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__GoalId__tmp_copy_8 = transform_hlds__unneeded_code__ContainingGoalId_14;

#line 1220 "unneeded_code.m"
                    transform_hlds__unneeded_code__GoalId_8 = transform_hlds__unneeded_code__GoalId__tmp_copy_8;
#line 1220 "unneeded_code.m"
                  }
#line 1220 "unneeded_code.m"
                  continue;
#line 1220 "unneeded_code.m"
                }
#line 1201 "unneeded_code.m"
                break;
#line 1201 "unneeded_code.m"
              case (MR_Integer) 3:
#line 1201 "unneeded_code.m"
#line 1201 "unneeded_code.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__LastStep_15, (MR_Integer) 0)))) {
#line 1201 "unneeded_code.m"
                  default:
#line 1201 "unneeded_code.m"
                    transform_hlds__unneeded_code__succeeded = MR_FALSE;
#line 1201 "unneeded_code.m"
                    break;
#line 1201 "unneeded_code.m"
                  case (MR_Integer) 0:
#line 1196 "unneeded_code.m"
                    {
#line 1196 "unneeded_code.m"
                      MR_Word transform_hlds__unneeded_code__MaybeNumAlts_17;

#line 1196 "unneeded_code.m"
                      *transform_hlds__unneeded_code__BranchNum_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__LastStep_15, (MR_Integer) 1)));
#line 1196 "unneeded_code.m"
                      transform_hlds__unneeded_code__MaybeNumAlts_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__LastStep_15, (MR_Integer) 2)));
#line 1197 "unneeded_code.m"
                      *transform_hlds__unneeded_code__BranchGoalId_9 = transform_hlds__unneeded_code__ContainingGoalId_14;
#line 1198 "unneeded_code.m"
                      *transform_hlds__unneeded_code__BranchArmGoalId_10 = transform_hlds__unneeded_code__GoalId_8;
#line 1199 "unneeded_code.m"
                      {
#line 1199 "unneeded_code.m"
                        MR_Word base;
#line 1199 "unneeded_code.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1199 "unneeded_code.m"
                        *transform_hlds__unneeded_code__BranchAlt_11 = base;
#line 1199 "unneeded_code.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__MaybeNumAlts_17));
#line 1199 "unneeded_code.m"
                      }
#line 1196 "unneeded_code.m"
                      transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 1196 "unneeded_code.m"
                    }
#line 1201 "unneeded_code.m"
                    break;
#line 1201 "unneeded_code.m"
                  case (MR_Integer) 1:
#line 1220 "unneeded_code.m"
                    {
#line 1220 "unneeded_code.m"
                      /* direct tailcall eliminated */
#line 1220 "unneeded_code.m"
                      {
#line 1220 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__GoalId__tmp_copy_8 = transform_hlds__unneeded_code__ContainingGoalId_14;

#line 1220 "unneeded_code.m"
                        transform_hlds__unneeded_code__GoalId_8 = transform_hlds__unneeded_code__GoalId__tmp_copy_8;
#line 1220 "unneeded_code.m"
                      }
#line 1220 "unneeded_code.m"
                      continue;
#line 1220 "unneeded_code.m"
                    }
#line 1201 "unneeded_code.m"
                    break;
#line 1201 "unneeded_code.m"
                }
#line 1201 "unneeded_code.m"
                break;
#line 1201 "unneeded_code.m"
            }
#line 1194 "unneeded_code.m"
          }
#line 1192 "unneeded_code.m"
        return transform_hlds__unneeded_code__succeeded;
#line 1192 "unneeded_code.m"
      }
#line 1192 "unneeded_code.m"
      break;
#line 1192 "unneeded_code.m"
    }
#line 1188 "unneeded_code.m"
}

#line 1147 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__where_needed_branches_upper_bound_2_5_p_0(
#line 1147 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_1,
#line 1147 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_2,
#line 1147 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__3_3,
#line 1147 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__4_4,
#line 1147 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__5_5)
#line 1147 "unneeded_code.m"
{
#line 1151 "unneeded_code.m"
  while (MR_TRUE)
#line 1151 "unneeded_code.m"
    {
#line 1151 "unneeded_code.m"
      /* tailcall optimized into a loop */
#line 1151 "unneeded_code.m"
      {
#line 1151 "unneeded_code.m"
        MR_bool transform_hlds__unneeded_code__succeeded;

#line 1151 "unneeded_code.m"
        if ((transform_hlds__unneeded_code__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1152 "unneeded_code.m"
          {
#line 1152 "unneeded_code.m"
            MR_Word base;
#line 1152 "unneeded_code.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1152 "unneeded_code.m"
            *transform_hlds__unneeded_code__HeadVar__5_5 = base;
#line 1152 "unneeded_code.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__HeadVar__4_4));
#line 1152 "unneeded_code.m"
          }
#line 1151 "unneeded_code.m"
        else
#line 1154 "unneeded_code.m"
          {
#line 1154 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__First_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 0)));
#line 1154 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__Rest_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__3_3, (MR_Integer) 1)));
#line 1154 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__BranchPoint_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__First_11, (MR_Integer) 0)));
#line 1154 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__NewAlts_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__First_11, (MR_Integer) 1)));
#line 1182 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__OldAlts_17;
#line 1156 "unneeded_code.m"
            MR_Box transform_hlds__unneeded_code__conv0_OldAlts_17;

#line 1156 "unneeded_code.m"
            {
#line 1156 "unneeded_code.m"
              transform_hlds__unneeded_code__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2], transform_hlds__unneeded_code__HeadVar__4_4, ((MR_Box) (transform_hlds__unneeded_code__BranchPoint_15)), &transform_hlds__unneeded_code__conv0_OldAlts_17);
            }
#line 1156 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 1156 "unneeded_code.m"
              {
#line 1156 "unneeded_code.m"
                transform_hlds__unneeded_code__OldAlts_17 = ((MR_Word) transform_hlds__unneeded_code__conv0_OldAlts_17);
#line 1156 "unneeded_code.m"
                transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 1156 "unneeded_code.m"
              }
#line 1182 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 1157 "unneeded_code.m"
              {
#line 1157 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__TypeCtorInfo_34_34 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1157 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__Alts_18;
#line 1157 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__BranchGoalId_19;
#line 1157 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__BranchAlts_20;

#line 1157 "unneeded_code.m"
                {
#line 1157 "unneeded_code.m"
                  mercury__set__union_3_p_0(transform_hlds__unneeded_code__TypeCtorInfo_34_34, transform_hlds__unneeded_code__OldAlts_17, transform_hlds__unneeded_code__NewAlts_16, &transform_hlds__unneeded_code__Alts_18);
                }
#line 1158 "unneeded_code.m"
                transform_hlds__unneeded_code__BranchGoalId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BranchPoint_15, (MR_Integer) 0)));
#line 1158 "unneeded_code.m"
                transform_hlds__unneeded_code__BranchAlts_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BranchPoint_15, (MR_Integer) 1)));
#line 1226 "unneeded_code.m"
                if ((transform_hlds__unneeded_code__BranchAlts_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1226 "unneeded_code.m"
                  {
#line 1226 "unneeded_code.m"
                    MR_Integer transform_hlds__unneeded_code__NumAlts_42;

#line 1227 "unneeded_code.m"
                    {
#line 1227 "unneeded_code.m"
                      mercury__set__count_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__unneeded_code__Alts_18, &transform_hlds__unneeded_code__NumAlts_42);
                    }
#line 1228 "unneeded_code.m"
                    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__NumAlts_42 == (MR_Integer) 2);
#line 1226 "unneeded_code.m"
                  }
#line 1226 "unneeded_code.m"
                else
#line 1230 "unneeded_code.m"
                  {
#line 1230 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__TypeCtorInfo_10_48;
#line 1230 "unneeded_code.m"
                    MR_Integer transform_hlds__unneeded_code__NumFunctors_43;
#line 1230 "unneeded_code.m"
                    MR_Integer transform_hlds__unneeded_code__NumAlts_45;
#line 1230 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__BranchAlts_20, (MR_Integer) 0)));

#line 1229 "unneeded_code.m"
                    transform_hlds__unneeded_code__succeeded = ((MR_tag((MR_Word) transform_hlds__unneeded_code__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 1229 "unneeded_code.m"
                    if (transform_hlds__unneeded_code__succeeded)
#line 1229 "unneeded_code.m"
                      {
#line 1229 "unneeded_code.m"
                        transform_hlds__unneeded_code__NumFunctors_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_46_46, (MR_Integer) 0)));
#line 4758 "transform_hlds.unneeded_code.c"
                        transform_hlds__unneeded_code__TypeCtorInfo_10_48 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1231 "unneeded_code.m"
                        {
#line 1231 "unneeded_code.m"
                          mercury__set__count_2_p_0(transform_hlds__unneeded_code__TypeCtorInfo_10_48, transform_hlds__unneeded_code__Alts_18, &transform_hlds__unneeded_code__NumAlts_45);
                        }
#line 1232 "unneeded_code.m"
                        transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__NumAlts_45 == transform_hlds__unneeded_code__NumFunctors_43);
#line 1229 "unneeded_code.m"
                      }
#line 1230 "unneeded_code.m"
                  }
#line 1177 "unneeded_code.m"
                if (transform_hlds__unneeded_code__succeeded)
#line 1174 "unneeded_code.m"
                  {
#line 1174 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__ParentBranchGoalId_21;
#line 1174 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__ParentBranchAlt_23;
#line 1174 "unneeded_code.m"
                    MR_Integer transform_hlds__unneeded_code__ParentBranchNum_24;
#line 1163 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__ParentBranchArmGoalId_22;

#line 1161 "unneeded_code.m"
                    {
#line 1161 "unneeded_code.m"
                      transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code__get_parent_branch_point_6_p_0(transform_hlds__unneeded_code__ContainingGoalMap_1, transform_hlds__unneeded_code__BranchGoalId_19, &transform_hlds__unneeded_code__ParentBranchGoalId_21, &transform_hlds__unneeded_code__ParentBranchArmGoalId_22, &transform_hlds__unneeded_code__ParentBranchAlt_23, &transform_hlds__unneeded_code__ParentBranchNum_24);
                    }
#line 1163 "unneeded_code.m"
                    if (transform_hlds__unneeded_code__succeeded)
#line 1163 "unneeded_code.m"
                      {
#line 1164 "unneeded_code.m"
                        {
#line 1164 "unneeded_code.m"
                          transform_hlds__unneeded_code__succeeded = mdbcomp__goal_path__goal_id_inside_3_p_0(transform_hlds__unneeded_code__ContainingGoalMap_1, transform_hlds__unneeded_code__ParentBranchArmGoalId_22, transform_hlds__unneeded_code__CurrentId_2);
                        }
#line 1164 "unneeded_code.m"
                        transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 1163 "unneeded_code.m"
                      }
#line 1174 "unneeded_code.m"
                    if (transform_hlds__unneeded_code__succeeded)
#line 1167 "unneeded_code.m"
                      {
#line 1167 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__Branches1_25;
#line 1167 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__ParentBranchPoint_26;
#line 1167 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__ParentAlts_27;
#line 1167 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__V_28_28;
#line 1167 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__V_29_29;

#line 1167 "unneeded_code.m"
                        {
#line 1167 "unneeded_code.m"
                          mercury__map__delete_3_p_0((MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2], ((MR_Box) (transform_hlds__unneeded_code__BranchPoint_15)), transform_hlds__unneeded_code__HeadVar__4_4, &transform_hlds__unneeded_code__Branches1_25);
                        }
#line 1168 "unneeded_code.m"
                        {
#line 1168 "unneeded_code.m"
                          transform_hlds__unneeded_code__ParentBranchPoint_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1168 "unneeded_code.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__ParentBranchPoint_26, 0) = ((MR_Box) (transform_hlds__unneeded_code__ParentBranchGoalId_21));
#line 1168 "unneeded_code.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__ParentBranchPoint_26, 1) = ((MR_Box) (transform_hlds__unneeded_code__ParentBranchAlt_23));
#line 1168 "unneeded_code.m"
                        }
#line 1170 "unneeded_code.m"
                        {
#line 1170 "unneeded_code.m"
                          transform_hlds__unneeded_code__ParentAlts_27 = mercury__set__make_singleton_set_1_f_0(transform_hlds__unneeded_code__TypeCtorInfo_34_34, ((MR_Box) (transform_hlds__unneeded_code__ParentBranchNum_24)));
                        }
#line 1172 "unneeded_code.m"
                        {
#line 1172 "unneeded_code.m"
                          transform_hlds__unneeded_code__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1172 "unneeded_code.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_29_29, 0) = ((MR_Box) (transform_hlds__unneeded_code__ParentBranchPoint_26));
#line 1172 "unneeded_code.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_29_29, 1) = ((MR_Box) (transform_hlds__unneeded_code__ParentAlts_27));
#line 1172 "unneeded_code.m"
                        }
#line 1172 "unneeded_code.m"
                        {
#line 1172 "unneeded_code.m"
                          transform_hlds__unneeded_code__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1172 "unneeded_code.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_28_28, 0) = ((MR_Box) (transform_hlds__unneeded_code__V_29_29));
#line 1172 "unneeded_code.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_28_28, 1) = ((MR_Box) (transform_hlds__unneeded_code__Rest_12));
#line 1172 "unneeded_code.m"
                        }
#line 1171 "unneeded_code.m"
                        /* direct tailcall eliminated */
#line 1171 "unneeded_code.m"
                        {
#line 1171 "unneeded_code.m"
                          MR_Word transform_hlds__unneeded_code__HeadVar__3__tmp_copy_3 = transform_hlds__unneeded_code__V_28_28;
#line 1171 "unneeded_code.m"
                          MR_Word transform_hlds__unneeded_code__HeadVar__4__tmp_copy_4 = transform_hlds__unneeded_code__Branches1_25;

#line 1171 "unneeded_code.m"
                          transform_hlds__unneeded_code__HeadVar__4_4 = transform_hlds__unneeded_code__HeadVar__4__tmp_copy_4;
#line 1171 "unneeded_code.m"
                          transform_hlds__unneeded_code__HeadVar__3_3 = transform_hlds__unneeded_code__HeadVar__3__tmp_copy_3;
#line 1171 "unneeded_code.m"
                        }
#line 1171 "unneeded_code.m"
                        continue;
#line 1167 "unneeded_code.m"
                      }
#line 1174 "unneeded_code.m"
                    else
#line 1175 "unneeded_code.m"
                      *transform_hlds__unneeded_code__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1174 "unneeded_code.m"
                  }
#line 1177 "unneeded_code.m"
                else
#line 1178 "unneeded_code.m"
                  {
#line 1178 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__Branches1_30;

#line 1178 "unneeded_code.m"
                    {
#line 1178 "unneeded_code.m"
                      mercury__map__det_update_4_p_0((MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2], ((MR_Box) (transform_hlds__unneeded_code__BranchPoint_15)), ((MR_Box) (transform_hlds__unneeded_code__Alts_18)), transform_hlds__unneeded_code__HeadVar__4_4, &transform_hlds__unneeded_code__Branches1_30);
                    }
#line 1179 "unneeded_code.m"
                    /* direct tailcall eliminated */
#line 1179 "unneeded_code.m"
                    {
#line 1179 "unneeded_code.m"
                      MR_Word transform_hlds__unneeded_code__HeadVar__3__tmp_copy_3 = transform_hlds__unneeded_code__Rest_12;
#line 1179 "unneeded_code.m"
                      MR_Word transform_hlds__unneeded_code__HeadVar__4__tmp_copy_4 = transform_hlds__unneeded_code__Branches1_30;

#line 1179 "unneeded_code.m"
                      transform_hlds__unneeded_code__HeadVar__4_4 = transform_hlds__unneeded_code__HeadVar__4__tmp_copy_4;
#line 1179 "unneeded_code.m"
                      transform_hlds__unneeded_code__HeadVar__3_3 = transform_hlds__unneeded_code__HeadVar__3__tmp_copy_3;
#line 1179 "unneeded_code.m"
                    }
#line 1179 "unneeded_code.m"
                    continue;
#line 1178 "unneeded_code.m"
                  }
#line 1157 "unneeded_code.m"
              }
#line 1182 "unneeded_code.m"
            else
#line 1183 "unneeded_code.m"
              {
#line 1183 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__Branches1_31;

#line 1183 "unneeded_code.m"
                {
#line 1183 "unneeded_code.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2], ((MR_Box) (transform_hlds__unneeded_code__BranchPoint_15)), ((MR_Box) (transform_hlds__unneeded_code__NewAlts_16)), transform_hlds__unneeded_code__HeadVar__4_4, &transform_hlds__unneeded_code__Branches1_31);
                }
#line 1184 "unneeded_code.m"
                /* direct tailcall eliminated */
#line 1184 "unneeded_code.m"
                {
#line 1184 "unneeded_code.m"
                  MR_Word transform_hlds__unneeded_code__HeadVar__3__tmp_copy_3 = transform_hlds__unneeded_code__Rest_12;
#line 1184 "unneeded_code.m"
                  MR_Word transform_hlds__unneeded_code__HeadVar__4__tmp_copy_4 = transform_hlds__unneeded_code__Branches1_31;

#line 1184 "unneeded_code.m"
                  transform_hlds__unneeded_code__HeadVar__4_4 = transform_hlds__unneeded_code__HeadVar__4__tmp_copy_4;
#line 1184 "unneeded_code.m"
                  transform_hlds__unneeded_code__HeadVar__3_3 = transform_hlds__unneeded_code__HeadVar__3__tmp_copy_3;
#line 1184 "unneeded_code.m"
                }
#line 1184 "unneeded_code.m"
                continue;
#line 1183 "unneeded_code.m"
              }
#line 1154 "unneeded_code.m"
          }
#line 1151 "unneeded_code.m"
      }
#line 1151 "unneeded_code.m"
      break;
#line 1151 "unneeded_code.m"
    }
#line 1147 "unneeded_code.m"
}

#line 1076 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_ite_9_p_0(
#line 1076 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Cond0_10,
#line 1076 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Cond_11,
#line 1076 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Then0_12,
#line 1076 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Then_13,
#line 1076 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Else0_14,
#line 1076 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Else_15,
#line 1076 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_22,
#line 1076 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_23,
#line 1076 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__GoalId_17)
#line 1076 "unneeded_code.m"
{
#line 1081 "unneeded_code.m"
  {
#line 1081 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 1081 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Then1_18;
#line 1081 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Else1_19;
#line 1081 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_24_24;
#line 1081 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_25_25;
#line 1081 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_26_26;
#line 1081 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_30_30;
#line 1089 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__ToInsertGoalsThen_20;
#line 1089 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_27_27;
#line 1086 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__conv0_ToInsertGoalsThen_20;
#line 1095 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__ToInsertGoalsElse_21;
#line 1095 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_32_32;
#line 1092 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__conv1_ToInsertGoalsElse_21;

#line 1082 "unneeded_code.m"
    {
#line 1082 "unneeded_code.m"
      transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(transform_hlds__unneeded_code__Cond0_10, transform_hlds__unneeded_code__Cond_11, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_22, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_24_24);
    }
#line 1083 "unneeded_code.m"
    {
#line 1083 "unneeded_code.m"
      transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(transform_hlds__unneeded_code__Then0_12, &transform_hlds__unneeded_code__Then1_18, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_24_24, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_25_25);
    }
#line 1084 "unneeded_code.m"
    {
#line 1084 "unneeded_code.m"
      transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(transform_hlds__unneeded_code__Else0_14, &transform_hlds__unneeded_code__Else1_19, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_25_25, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_26_26);
    }
#line 1086 "unneeded_code.m"
    {
#line 1086 "unneeded_code.m"
      transform_hlds__unneeded_code__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1086 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_27_27, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalId_17));
#line 1086 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_27_27, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1086 "unneeded_code.m"
    }
#line 1086 "unneeded_code.m"
    {
#line 1086 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1], transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_26_26, ((MR_Box) (transform_hlds__unneeded_code__V_27_27)), &transform_hlds__unneeded_code__conv0_ToInsertGoalsThen_20);
    }
#line 1086 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 1086 "unneeded_code.m"
      {
#line 1086 "unneeded_code.m"
        transform_hlds__unneeded_code__ToInsertGoalsThen_20 = ((MR_Word) transform_hlds__unneeded_code__conv0_ToInsertGoalsThen_20);
#line 1086 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 1086 "unneeded_code.m"
      }
#line 1089 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 1087 "unneeded_code.m"
      {
#line 1087 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Conj_48;
#line 1087 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__GoalInfo0_50;
#line 1087 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_51_51;
#line 1105 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_49_49;

#line 1103 "unneeded_code.m"
        {
#line 1103 "unneeded_code.m"
          transform_hlds__unneeded_code__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1103 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_51_51, 0) = ((MR_Box) (transform_hlds__unneeded_code__Then1_18));
#line 1103 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1103 "unneeded_code.m"
        }
#line 1103 "unneeded_code.m"
        {
#line 1103 "unneeded_code.m"
          mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__unneeded_code__ToInsertGoalsThen_20, transform_hlds__unneeded_code__V_51_51, &transform_hlds__unneeded_code__Conj_48);
        }
#line 1105 "unneeded_code.m"
        transform_hlds__unneeded_code__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Then1_18, (MR_Integer) 0)));
#line 1105 "unneeded_code.m"
        transform_hlds__unneeded_code__GoalInfo0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Then1_18, (MR_Integer) 1)));
#line 1106 "unneeded_code.m"
        {
#line 1106 "unneeded_code.m"
          hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__unneeded_code__Conj_48, transform_hlds__unneeded_code__GoalInfo0_50, transform_hlds__unneeded_code__Then_13);
        }
#line 1088 "unneeded_code.m"
        {
#line 1088 "unneeded_code.m"
          mercury__map__delete_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1], ((MR_Box) (transform_hlds__unneeded_code__V_27_27)), transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_26_26, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_30_30);
        }
#line 1087 "unneeded_code.m"
      }
#line 1089 "unneeded_code.m"
    else
#line 1090 "unneeded_code.m"
      {
#line 1090 "unneeded_code.m"
        *transform_hlds__unneeded_code__Then_13 = transform_hlds__unneeded_code__Then1_18;
#line 1090 "unneeded_code.m"
        transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_30_30 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_26_26;
#line 1090 "unneeded_code.m"
      }
#line 1092 "unneeded_code.m"
    {
#line 1092 "unneeded_code.m"
      transform_hlds__unneeded_code__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1092 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_32_32, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalId_17));
#line 1092 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_32_32, 1) = ((MR_Box) ((MR_Integer) 2));
#line 1092 "unneeded_code.m"
    }
#line 1092 "unneeded_code.m"
    {
#line 1092 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1], transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_30_30, ((MR_Box) (transform_hlds__unneeded_code__V_32_32)), &transform_hlds__unneeded_code__conv1_ToInsertGoalsElse_21);
    }
#line 1092 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 1092 "unneeded_code.m"
      {
#line 1092 "unneeded_code.m"
        transform_hlds__unneeded_code__ToInsertGoalsElse_21 = ((MR_Word) transform_hlds__unneeded_code__conv1_ToInsertGoalsElse_21);
#line 1092 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 1092 "unneeded_code.m"
      }
#line 1095 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 1093 "unneeded_code.m"
      {
#line 1093 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Conj_57;
#line 1093 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__GoalInfo0_59;
#line 1093 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_60_60;
#line 1105 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_58_58;

#line 1103 "unneeded_code.m"
        {
#line 1103 "unneeded_code.m"
          transform_hlds__unneeded_code__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1103 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_60_60, 0) = ((MR_Box) (transform_hlds__unneeded_code__Else1_19));
#line 1103 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1103 "unneeded_code.m"
        }
#line 1103 "unneeded_code.m"
        {
#line 1103 "unneeded_code.m"
          mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__unneeded_code__ToInsertGoalsElse_21, transform_hlds__unneeded_code__V_60_60, &transform_hlds__unneeded_code__Conj_57);
        }
#line 1105 "unneeded_code.m"
        transform_hlds__unneeded_code__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Else1_19, (MR_Integer) 0)));
#line 1105 "unneeded_code.m"
        transform_hlds__unneeded_code__GoalInfo0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Else1_19, (MR_Integer) 1)));
#line 1106 "unneeded_code.m"
        {
#line 1106 "unneeded_code.m"
          hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__unneeded_code__Conj_57, transform_hlds__unneeded_code__GoalInfo0_59, transform_hlds__unneeded_code__Else_15);
        }
#line 1094 "unneeded_code.m"
        {
#line 1094 "unneeded_code.m"
          mercury__map__delete_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1], ((MR_Box) (transform_hlds__unneeded_code__V_32_32)), transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_30_30, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_23);
#line 1094 "unneeded_code.m"
          return;
        }
#line 1093 "unneeded_code.m"
      }
#line 1095 "unneeded_code.m"
    else
#line 1096 "unneeded_code.m"
      {
#line 1096 "unneeded_code.m"
        *transform_hlds__unneeded_code__Else_15 = transform_hlds__unneeded_code__Else1_19;
#line 1096 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_23 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_30_30;
#line 1096 "unneeded_code.m"
      }
#line 1081 "unneeded_code.m"
  }
#line 1076 "unneeded_code.m"
}

#line 1059 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_disj_6_p_0(
#line 1059 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 1059 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__2_2,
#line 1059 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_3,
#line 1059 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_4,
#line 1059 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__GoalId_5,
#line 1059 "unneeded_code.m"
  MR_Integer transform_hlds__unneeded_code__BranchNum_6)
#line 1059 "unneeded_code.m"
{
#line 1063 "unneeded_code.m"
  {
#line 1063 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 1063 "unneeded_code.m"
    if ((transform_hlds__unneeded_code__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1063 "unneeded_code.m"
      {
#line 1063 "unneeded_code.m"
        *transform_hlds__unneeded_code__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1063 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_4 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_3;
#line 1063 "unneeded_code.m"
      }
#line 1063 "unneeded_code.m"
    else
#line 1065 "unneeded_code.m"
      {
#line 1065 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 0)));
#line 1065 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 1)));
#line 1065 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal_14;
#line 1065 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goals_15;
#line 1065 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal1_19;
#line 1065 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_23_23;
#line 1065 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_26_26;
#line 1065 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_28_28;
#line 1070 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__ToInsertGoals_20;
#line 1070 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_24_24;
#line 1067 "unneeded_code.m"
        MR_Box transform_hlds__unneeded_code__conv0_ToInsertGoals_20;

#line 1066 "unneeded_code.m"
        {
#line 1066 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(transform_hlds__unneeded_code__Goal0_12, &transform_hlds__unneeded_code__Goal1_19, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_3, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_23_23);
        }
#line 1067 "unneeded_code.m"
        {
#line 1067 "unneeded_code.m"
          transform_hlds__unneeded_code__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1067 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_24_24, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalId_5));
#line 1067 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_24_24, 1) = ((MR_Box) (transform_hlds__unneeded_code__BranchNum_6));
#line 1067 "unneeded_code.m"
        }
#line 1067 "unneeded_code.m"
        {
#line 1067 "unneeded_code.m"
          transform_hlds__unneeded_code__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1], transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_23_23, ((MR_Box) (transform_hlds__unneeded_code__V_24_24)), &transform_hlds__unneeded_code__conv0_ToInsertGoals_20);
        }
#line 1067 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 1067 "unneeded_code.m"
          {
#line 1067 "unneeded_code.m"
            transform_hlds__unneeded_code__ToInsertGoals_20 = ((MR_Word) transform_hlds__unneeded_code__conv0_ToInsertGoals_20);
#line 1067 "unneeded_code.m"
            transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 1067 "unneeded_code.m"
          }
#line 1070 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 1068 "unneeded_code.m"
          {
#line 1068 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__Conj_37;
#line 1068 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__GoalInfo0_39;
#line 1068 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_40_40;
#line 1105 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_38_38;

#line 1103 "unneeded_code.m"
            {
#line 1103 "unneeded_code.m"
              transform_hlds__unneeded_code__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1103 "unneeded_code.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_40_40, 0) = ((MR_Box) (transform_hlds__unneeded_code__Goal1_19));
#line 1103 "unneeded_code.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1103 "unneeded_code.m"
            }
#line 1103 "unneeded_code.m"
            {
#line 1103 "unneeded_code.m"
              mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__unneeded_code__ToInsertGoals_20, transform_hlds__unneeded_code__V_40_40, &transform_hlds__unneeded_code__Conj_37);
            }
#line 1105 "unneeded_code.m"
            transform_hlds__unneeded_code__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal1_19, (MR_Integer) 0)));
#line 1105 "unneeded_code.m"
            transform_hlds__unneeded_code__GoalInfo0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal1_19, (MR_Integer) 1)));
#line 1106 "unneeded_code.m"
            {
#line 1106 "unneeded_code.m"
              hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__unneeded_code__Conj_37, transform_hlds__unneeded_code__GoalInfo0_39, &transform_hlds__unneeded_code__Goal_14);
            }
#line 1069 "unneeded_code.m"
            {
#line 1069 "unneeded_code.m"
              mercury__map__delete_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1], ((MR_Box) (transform_hlds__unneeded_code__V_24_24)), transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_23_23, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_26_26);
            }
#line 1068 "unneeded_code.m"
          }
#line 1070 "unneeded_code.m"
        else
#line 1071 "unneeded_code.m"
          {
#line 1071 "unneeded_code.m"
            transform_hlds__unneeded_code__Goal_14 = transform_hlds__unneeded_code__Goal1_19;
#line 1071 "unneeded_code.m"
            transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_26_26 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_23_23;
#line 1071 "unneeded_code.m"
          }
#line 1074 "unneeded_code.m"
        transform_hlds__unneeded_code__V_28_28 = (transform_hlds__unneeded_code__BranchNum_6 + (MR_Integer) 1);
#line 1073 "unneeded_code.m"
        {
#line 1073 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_refine_disj_6_p_0(transform_hlds__unneeded_code__Goals0_13, &transform_hlds__unneeded_code__Goals_15, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_26_26, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_4, transform_hlds__unneeded_code__GoalId_5, transform_hlds__unneeded_code__V_28_28);
        }
#line 1064 "unneeded_code.m"
        {
#line 1064 "unneeded_code.m"
          MR_Word base;
#line 1064 "unneeded_code.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1064 "unneeded_code.m"
          *transform_hlds__unneeded_code__HeadVar__2_2 = base;
#line 1064 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__Goal_14));
#line 1064 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__Goals_15));
#line 1064 "unneeded_code.m"
        }
#line 1065 "unneeded_code.m"
      }
#line 1063 "unneeded_code.m"
  }
#line 1059 "unneeded_code.m"
}

#line 1040 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_cases_6_p_0(
#line 1040 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 1040 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__2_2,
#line 1040 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_3,
#line 1040 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_4,
#line 1040 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__GoalId_5,
#line 1040 "unneeded_code.m"
  MR_Integer transform_hlds__unneeded_code__BranchNum_6)
#line 1040 "unneeded_code.m"
{
#line 1044 "unneeded_code.m"
  {
#line 1044 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 1044 "unneeded_code.m"
    if ((transform_hlds__unneeded_code__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1044 "unneeded_code.m"
      {
#line 1044 "unneeded_code.m"
        *transform_hlds__unneeded_code__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1044 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_4 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_3;
#line 1044 "unneeded_code.m"
      }
#line 1044 "unneeded_code.m"
    else
#line 1046 "unneeded_code.m"
      {
#line 1046 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Case0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 0)));
#line 1046 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Cases0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 1)));
#line 1046 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Case_14;
#line 1046 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Cases_15;
#line 1046 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Case0_12, (MR_Integer) 0)));
#line 1046 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Case0_12, (MR_Integer) 1)));
#line 1046 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Case0_12, (MR_Integer) 2)));
#line 1046 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal1_22;
#line 1046 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal_24;
#line 1046 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_27_27;
#line 1046 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_30_30;
#line 1046 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_32_32;
#line 1052 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__ToInsertGoals_23;
#line 1052 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_28_28;
#line 1049 "unneeded_code.m"
        MR_Box transform_hlds__unneeded_code__conv0_ToInsertGoals_23;

#line 1048 "unneeded_code.m"
        {
#line 1048 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(transform_hlds__unneeded_code__Goal0_21, &transform_hlds__unneeded_code__Goal1_22, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_3, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_27_27);
        }
#line 1049 "unneeded_code.m"
        {
#line 1049 "unneeded_code.m"
          transform_hlds__unneeded_code__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1049 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_28_28, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalId_5));
#line 1049 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_28_28, 1) = ((MR_Box) (transform_hlds__unneeded_code__BranchNum_6));
#line 1049 "unneeded_code.m"
        }
#line 1049 "unneeded_code.m"
        {
#line 1049 "unneeded_code.m"
          transform_hlds__unneeded_code__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1], transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_27_27, ((MR_Box) (transform_hlds__unneeded_code__V_28_28)), &transform_hlds__unneeded_code__conv0_ToInsertGoals_23);
        }
#line 1049 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 1049 "unneeded_code.m"
          {
#line 1049 "unneeded_code.m"
            transform_hlds__unneeded_code__ToInsertGoals_23 = ((MR_Word) transform_hlds__unneeded_code__conv0_ToInsertGoals_23);
#line 1049 "unneeded_code.m"
            transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 1049 "unneeded_code.m"
          }
#line 1052 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 1050 "unneeded_code.m"
          {
#line 1050 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__Conj_41;
#line 1050 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__GoalInfo0_43;
#line 1050 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_44_44;
#line 1105 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_42_42;

#line 1103 "unneeded_code.m"
            {
#line 1103 "unneeded_code.m"
              transform_hlds__unneeded_code__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1103 "unneeded_code.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_44_44, 0) = ((MR_Box) (transform_hlds__unneeded_code__Goal1_22));
#line 1103 "unneeded_code.m"
              MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1103 "unneeded_code.m"
            }
#line 1103 "unneeded_code.m"
            {
#line 1103 "unneeded_code.m"
              mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__unneeded_code__ToInsertGoals_23, transform_hlds__unneeded_code__V_44_44, &transform_hlds__unneeded_code__Conj_41);
            }
#line 1105 "unneeded_code.m"
            transform_hlds__unneeded_code__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal1_22, (MR_Integer) 0)));
#line 1105 "unneeded_code.m"
            transform_hlds__unneeded_code__GoalInfo0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal1_22, (MR_Integer) 1)));
#line 1106 "unneeded_code.m"
            {
#line 1106 "unneeded_code.m"
              hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__unneeded_code__Conj_41, transform_hlds__unneeded_code__GoalInfo0_43, &transform_hlds__unneeded_code__Goal_24);
            }
#line 1051 "unneeded_code.m"
            {
#line 1051 "unneeded_code.m"
              mercury__map__delete_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1], ((MR_Box) (transform_hlds__unneeded_code__V_28_28)), transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_27_27, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_30_30);
            }
#line 1050 "unneeded_code.m"
          }
#line 1052 "unneeded_code.m"
        else
#line 1053 "unneeded_code.m"
          {
#line 1053 "unneeded_code.m"
            transform_hlds__unneeded_code__Goal_24 = transform_hlds__unneeded_code__Goal1_22;
#line 1053 "unneeded_code.m"
            transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_30_30 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_27_27;
#line 1053 "unneeded_code.m"
          }
#line 1055 "unneeded_code.m"
        {
#line 1055 "unneeded_code.m"
          transform_hlds__unneeded_code__Case_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1055 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Case_14, 0) = ((MR_Box) (transform_hlds__unneeded_code__MainConsId_19));
#line 1055 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Case_14, 1) = ((MR_Box) (transform_hlds__unneeded_code__OtherConsIds_20));
#line 1055 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Case_14, 2) = ((MR_Box) (transform_hlds__unneeded_code__Goal_24));
#line 1055 "unneeded_code.m"
        }
#line 1057 "unneeded_code.m"
        transform_hlds__unneeded_code__V_32_32 = (transform_hlds__unneeded_code__BranchNum_6 + (MR_Integer) 1);
#line 1056 "unneeded_code.m"
        {
#line 1056 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_refine_cases_6_p_0(transform_hlds__unneeded_code__Cases0_13, &transform_hlds__unneeded_code__Cases_15, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_30_30, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_4, transform_hlds__unneeded_code__GoalId_5, transform_hlds__unneeded_code__V_32_32);
        }
#line 1045 "unneeded_code.m"
        {
#line 1045 "unneeded_code.m"
          MR_Word base;
#line 1045 "unneeded_code.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1045 "unneeded_code.m"
          *transform_hlds__unneeded_code__HeadVar__2_2 = base;
#line 1045 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__Case_14));
#line 1045 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__Cases_15));
#line 1045 "unneeded_code.m"
        }
#line 1046 "unneeded_code.m"
      }
#line 1044 "unneeded_code.m"
  }
#line 1040 "unneeded_code.m"
}

#line 1027 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_conj_4_p_0(
#line 1027 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 1027 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__2_2,
#line 1027 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_3,
#line 1027 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_4)
#line 1027 "unneeded_code.m"
{
#line 1030 "unneeded_code.m"
  {
#line 1030 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 1030 "unneeded_code.m"
    if ((transform_hlds__unneeded_code__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1030 "unneeded_code.m"
      {
#line 1030 "unneeded_code.m"
        *transform_hlds__unneeded_code__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1030 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_4 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_3;
#line 1030 "unneeded_code.m"
      }
#line 1030 "unneeded_code.m"
    else
#line 1031 "unneeded_code.m"
      {
#line 1031 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 0)));
#line 1031 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 1)));
#line 1031 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__HeadGoal_12;
#line 1031 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__TailGoals_13;
#line 1031 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_18_18;
#line 1036 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__HeadGoals_14;
#line 1034 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_20_20;
#line 1034 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_21_21;
#line 1034 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_15_15;

#line 1032 "unneeded_code.m"
        {
#line 1032 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(transform_hlds__unneeded_code__Goal0_8, &transform_hlds__unneeded_code__HeadGoal_12, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_3, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_18_18);
        }
#line 1033 "unneeded_code.m"
        {
#line 1033 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_refine_conj_4_p_0(transform_hlds__unneeded_code__Goals0_9, &transform_hlds__unneeded_code__TailGoals_13, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_18_18, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_4);
        }
#line 1034 "unneeded_code.m"
        transform_hlds__unneeded_code__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadGoal_12, (MR_Integer) 0)));
#line 1034 "unneeded_code.m"
        transform_hlds__unneeded_code__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadGoal_12, (MR_Integer) 1)));
#line 1034 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = ((((MR_tag((MR_Word) transform_hlds__unneeded_code__V_20_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__V_20_20, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1034 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 1034 "unneeded_code.m"
          {
#line 1034 "unneeded_code.m"
            transform_hlds__unneeded_code__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__V_20_20, (MR_Integer) 1)));
#line 1034 "unneeded_code.m"
            transform_hlds__unneeded_code__HeadGoals_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__V_20_20, (MR_Integer) 2)));
#line 1034 "unneeded_code.m"
            transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_21_21 == (MR_Integer) 0);
#line 1034 "unneeded_code.m"
          }
#line 1036 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 1035 "unneeded_code.m"
          {
#line 1035 "unneeded_code.m"
            {
#line 1035 "unneeded_code.m"
              *transform_hlds__unneeded_code__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__unneeded_code__HeadGoals_14, transform_hlds__unneeded_code__TailGoals_13);
            }
#line 1035 "unneeded_code.m"
          }
#line 1036 "unneeded_code.m"
        else
#line 1037 "unneeded_code.m"
          {
#line 1037 "unneeded_code.m"
            MR_Word base;
#line 1037 "unneeded_code.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1037 "unneeded_code.m"
            *transform_hlds__unneeded_code__HeadVar__2_2 = base;
#line 1037 "unneeded_code.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__HeadGoal_12));
#line 1037 "unneeded_code.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__TailGoals_13));
#line 1037 "unneeded_code.m"
          }
#line 1031 "unneeded_code.m"
      }
#line 1030 "unneeded_code.m"
  }
#line 1027 "unneeded_code.m"
}

#line 965 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(
#line 965 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal0_5,
#line 965 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Goal_6,
#line 965 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_58,
#line 965 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59)
#line 965 "unneeded_code.m"
{
#line 968 "unneeded_code.m"
  {
#line 968 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 968 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal0_5, (MR_Integer) 0)));
#line 968 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal0_5, (MR_Integer) 1)));

#line 977 "unneeded_code.m"
#line 977 "unneeded_code.m"
    switch (MR_tag((MR_Word) transform_hlds__unneeded_code__GoalExpr0_8)) {
#line 977 "unneeded_code.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 977 "unneeded_code.m"
      case (MR_Integer) 0:
#line 1009 "unneeded_code.m"
        {
#line 1009 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__NegGoal0_51 = (MR_Word) MR_body(((MR_Word) transform_hlds__unneeded_code__GoalExpr0_8), (MR_Integer) 0);
#line 1009 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__NegGoal_52;
#line 1009 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__GoalExpr_77;

#line 1010 "unneeded_code.m"
          {
#line 1010 "unneeded_code.m"
            transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(transform_hlds__unneeded_code__NegGoal0_51, &transform_hlds__unneeded_code__NegGoal_52, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_58, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59);
          }
#line 1011 "unneeded_code.m"
          transform_hlds__unneeded_code__GoalExpr_77 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__unneeded_code__NegGoal_52);
#line 1012 "unneeded_code.m"
          {
#line 1012 "unneeded_code.m"
            MR_Word base;
#line 1012 "unneeded_code.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1012 "unneeded_code.m"
            *transform_hlds__unneeded_code__Goal_6 = base;
#line 1012 "unneeded_code.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalExpr_77));
#line 1012 "unneeded_code.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__GoalInfo0_9));
#line 1012 "unneeded_code.m"
          }
#line 1009 "unneeded_code.m"
        }
#line 977 "unneeded_code.m"
        break;
#line 977 "unneeded_code.m"
      case (MR_Integer) 1:
#line 977 "unneeded_code.m"
      case (MR_Integer) 2:
#line 975 "unneeded_code.m"
        {
#line 976 "unneeded_code.m"
          *transform_hlds__unneeded_code__Goal_6 = transform_hlds__unneeded_code__Goal0_5;
#line 975 "unneeded_code.m"
          *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_58;
#line 975 "unneeded_code.m"
        }
#line 977 "unneeded_code.m"
        break;
#line 977 "unneeded_code.m"
      case (MR_Integer) 3:
#line 977 "unneeded_code.m"
#line 977 "unneeded_code.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 0)))) {
#line 977 "unneeded_code.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 977 "unneeded_code.m"
          case (MR_Integer) 0:
#line 977 "unneeded_code.m"
          case (MR_Integer) 1:
#line 975 "unneeded_code.m"
            {
#line 976 "unneeded_code.m"
              *transform_hlds__unneeded_code__Goal_6 = transform_hlds__unneeded_code__Goal0_5;
#line 975 "unneeded_code.m"
              *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_58;
#line 975 "unneeded_code.m"
            }
#line 977 "unneeded_code.m"
            break;
#line 977 "unneeded_code.m"
          case (MR_Integer) 2:
#line 978 "unneeded_code.m"
            {
#line 978 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__ConjType_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 1)));
#line 978 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Conjuncts0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 2)));

#line 984 "unneeded_code.m"
#line 984 "unneeded_code.m"
              switch (transform_hlds__unneeded_code__ConjType_33) {
#line 984 "unneeded_code.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 984 "unneeded_code.m"
                case (MR_Integer) 1:
#line 985 "unneeded_code.m"
                  {
#line 986 "unneeded_code.m"
                    *transform_hlds__unneeded_code__Goal_6 = transform_hlds__unneeded_code__Goal0_5;
#line 985 "unneeded_code.m"
                    *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_58;
#line 985 "unneeded_code.m"
                  }
#line 984 "unneeded_code.m"
                  break;
#line 984 "unneeded_code.m"
                case (MR_Integer) 0:
#line 980 "unneeded_code.m"
                  {
#line 980 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__Conjuncts_35;
#line 980 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__GoalExpr_36;

#line 981 "unneeded_code.m"
                    {
#line 981 "unneeded_code.m"
                      transform_hlds__unneeded_code__unneeded_refine_conj_4_p_0(transform_hlds__unneeded_code__Conjuncts0_34, &transform_hlds__unneeded_code__Conjuncts_35, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_58, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59);
                    }
#line 982 "unneeded_code.m"
                    {
#line 982 "unneeded_code.m"
                      transform_hlds__unneeded_code__GoalExpr_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 982 "unneeded_code.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 982 "unneeded_code.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_36, 1) = ((MR_Box) (transform_hlds__unneeded_code__ConjType_33));
#line 982 "unneeded_code.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_36, 2) = ((MR_Box) (transform_hlds__unneeded_code__Conjuncts_35));
#line 982 "unneeded_code.m"
                    }
#line 983 "unneeded_code.m"
                    {
#line 983 "unneeded_code.m"
                      MR_Word base;
#line 983 "unneeded_code.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 983 "unneeded_code.m"
                      *transform_hlds__unneeded_code__Goal_6 = base;
#line 983 "unneeded_code.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalExpr_36));
#line 983 "unneeded_code.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__GoalInfo0_9));
#line 983 "unneeded_code.m"
                    }
#line 980 "unneeded_code.m"
                  }
#line 984 "unneeded_code.m"
                  break;
#line 984 "unneeded_code.m"
              }
#line 978 "unneeded_code.m"
            }
#line 977 "unneeded_code.m"
            break;
#line 977 "unneeded_code.m"
          case (MR_Integer) 3:
#line 995 "unneeded_code.m"
            {
#line 995 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Disjuncts0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 1)));
#line 995 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Disjuncts_43;
#line 995 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__GoalExpr_73;
#line 995 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__GoalId_74;

#line 996 "unneeded_code.m"
              {
#line 996 "unneeded_code.m"
                transform_hlds__unneeded_code__GoalId_74 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__unneeded_code__GoalInfo0_9);
              }
#line 997 "unneeded_code.m"
              {
#line 997 "unneeded_code.m"
                transform_hlds__unneeded_code__unneeded_refine_disj_6_p_0(transform_hlds__unneeded_code__Disjuncts0_42, &transform_hlds__unneeded_code__Disjuncts_43, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_58, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59, transform_hlds__unneeded_code__GoalId_74, (MR_Integer) 1);
              }
#line 999 "unneeded_code.m"
              {
#line 999 "unneeded_code.m"
                transform_hlds__unneeded_code__GoalExpr_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 999 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 999 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_73, 1) = ((MR_Box) (transform_hlds__unneeded_code__Disjuncts_43));
#line 999 "unneeded_code.m"
              }
#line 1000 "unneeded_code.m"
              {
#line 1000 "unneeded_code.m"
                MR_Word base;
#line 1000 "unneeded_code.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1000 "unneeded_code.m"
                *transform_hlds__unneeded_code__Goal_6 = base;
#line 1000 "unneeded_code.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalExpr_73));
#line 1000 "unneeded_code.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__GoalInfo0_9));
#line 1000 "unneeded_code.m"
              }
#line 995 "unneeded_code.m"
            }
#line 977 "unneeded_code.m"
            break;
#line 977 "unneeded_code.m"
          case (MR_Integer) 4:
#line 989 "unneeded_code.m"
            {
#line 989 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__SwitchVar_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 1)));
#line 989 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__CanFail_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 2)));
#line 989 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Cases0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 3)));
#line 989 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__GoalId_40;
#line 989 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Cases_41;
#line 989 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__GoalExpr_72;

#line 990 "unneeded_code.m"
              {
#line 990 "unneeded_code.m"
                transform_hlds__unneeded_code__GoalId_40 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__unneeded_code__GoalInfo0_9);
              }
#line 991 "unneeded_code.m"
              {
#line 991 "unneeded_code.m"
                transform_hlds__unneeded_code__unneeded_refine_cases_6_p_0(transform_hlds__unneeded_code__Cases0_39, &transform_hlds__unneeded_code__Cases_41, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_58, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59, transform_hlds__unneeded_code__GoalId_40, (MR_Integer) 1);
              }
#line 992 "unneeded_code.m"
              {
#line 992 "unneeded_code.m"
                transform_hlds__unneeded_code__GoalExpr_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 992 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 992 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_72, 1) = ((MR_Box) (transform_hlds__unneeded_code__SwitchVar_37));
#line 992 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_72, 2) = ((MR_Box) (transform_hlds__unneeded_code__CanFail_38));
#line 992 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_72, 3) = ((MR_Box) (transform_hlds__unneeded_code__Cases_41));
#line 992 "unneeded_code.m"
              }
#line 993 "unneeded_code.m"
              {
#line 993 "unneeded_code.m"
                MR_Word base;
#line 993 "unneeded_code.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 993 "unneeded_code.m"
                *transform_hlds__unneeded_code__Goal_6 = base;
#line 993 "unneeded_code.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalExpr_72));
#line 993 "unneeded_code.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__GoalInfo0_9));
#line 993 "unneeded_code.m"
              }
#line 989 "unneeded_code.m"
            }
#line 977 "unneeded_code.m"
            break;
#line 977 "unneeded_code.m"
          case (MR_Integer) 5:
#line 1014 "unneeded_code.m"
            {
#line 1014 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Reason_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 1)));
#line 1014 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__SomeGoal0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 2)));
#line 1015 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__V_63_63;
#line 1015 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__V_55_55;

#line 1015 "unneeded_code.m"
              transform_hlds__unneeded_code__succeeded = ((((MR_tag((MR_Word) transform_hlds__unneeded_code__Reason_53)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__Reason_53, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1015 "unneeded_code.m"
              if (transform_hlds__unneeded_code__succeeded)
#line 1015 "unneeded_code.m"
                {
#line 1015 "unneeded_code.m"
                  transform_hlds__unneeded_code__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__Reason_53, (MR_Integer) 1)));
#line 1015 "unneeded_code.m"
                  transform_hlds__unneeded_code__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__Reason_53, (MR_Integer) 2)));
#line 1015 "unneeded_code.m"
                  transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_63_63 == (MR_Integer) 1);
#line 1015 "unneeded_code.m"
                }
#line 1017 "unneeded_code.m"
              if (transform_hlds__unneeded_code__succeeded)
#line 1016 "unneeded_code.m"
                {
#line 1016 "unneeded_code.m"
                  *transform_hlds__unneeded_code__Goal_6 = transform_hlds__unneeded_code__Goal0_5;
#line 1016 "unneeded_code.m"
                  *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_58;
#line 1016 "unneeded_code.m"
                }
#line 1017 "unneeded_code.m"
              else
#line 1018 "unneeded_code.m"
                {
#line 1018 "unneeded_code.m"
                  MR_Word transform_hlds__unneeded_code__SomeGoal_56;
#line 1018 "unneeded_code.m"
                  MR_Word transform_hlds__unneeded_code__GoalExpr_78;

#line 1018 "unneeded_code.m"
                  {
#line 1018 "unneeded_code.m"
                    transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(transform_hlds__unneeded_code__SomeGoal0_54, &transform_hlds__unneeded_code__SomeGoal_56, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_58, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59);
                  }
#line 1019 "unneeded_code.m"
                  {
#line 1019 "unneeded_code.m"
                    transform_hlds__unneeded_code__GoalExpr_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "unneeded_code.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1019 "unneeded_code.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_78, 1) = ((MR_Box) (transform_hlds__unneeded_code__Reason_53));
#line 1019 "unneeded_code.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_78, 2) = ((MR_Box) (transform_hlds__unneeded_code__SomeGoal_56));
#line 1019 "unneeded_code.m"
                  }
#line 1020 "unneeded_code.m"
                  {
#line 1020 "unneeded_code.m"
                    MR_Word base;
#line 1020 "unneeded_code.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1020 "unneeded_code.m"
                    *transform_hlds__unneeded_code__Goal_6 = base;
#line 1020 "unneeded_code.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalExpr_78));
#line 1020 "unneeded_code.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__GoalInfo0_9));
#line 1020 "unneeded_code.m"
                  }
#line 1018 "unneeded_code.m"
                }
#line 1014 "unneeded_code.m"
            }
#line 977 "unneeded_code.m"
            break;
#line 977 "unneeded_code.m"
          case (MR_Integer) 6:
#line 1002 "unneeded_code.m"
            {
#line 1002 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Quant_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 1)));
#line 1002 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Cond0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 2)));
#line 1002 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Then0_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 3)));
#line 1002 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Else0_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_8, (MR_Integer) 4)));
#line 1002 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Cond_48;
#line 1002 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Then_49;
#line 1002 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Else_50;
#line 1002 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__GoalExpr_75;
#line 1002 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__GoalId_76;

#line 1003 "unneeded_code.m"
              {
#line 1003 "unneeded_code.m"
                transform_hlds__unneeded_code__GoalId_76 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__unneeded_code__GoalInfo0_9);
              }
#line 1004 "unneeded_code.m"
              {
#line 1004 "unneeded_code.m"
                transform_hlds__unneeded_code__unneeded_refine_ite_9_p_0(transform_hlds__unneeded_code__Cond0_45, &transform_hlds__unneeded_code__Cond_48, transform_hlds__unneeded_code__Then0_46, &transform_hlds__unneeded_code__Then_49, transform_hlds__unneeded_code__Else0_47, &transform_hlds__unneeded_code__Else_50, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_58, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59, transform_hlds__unneeded_code__GoalId_76);
              }
#line 1006 "unneeded_code.m"
              {
#line 1006 "unneeded_code.m"
                transform_hlds__unneeded_code__GoalExpr_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1006 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1006 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_75, 1) = ((MR_Box) (transform_hlds__unneeded_code__Quant_44));
#line 1006 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_75, 2) = ((MR_Box) (transform_hlds__unneeded_code__Cond_48));
#line 1006 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_75, 3) = ((MR_Box) (transform_hlds__unneeded_code__Then_49));
#line 1006 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_75, 4) = ((MR_Box) (transform_hlds__unneeded_code__Else_50));
#line 1006 "unneeded_code.m"
              }
#line 1007 "unneeded_code.m"
              {
#line 1007 "unneeded_code.m"
                MR_Word base;
#line 1007 "unneeded_code.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1007 "unneeded_code.m"
                *transform_hlds__unneeded_code__Goal_6 = base;
#line 1007 "unneeded_code.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalExpr_75));
#line 1007 "unneeded_code.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__GoalInfo0_9));
#line 1007 "unneeded_code.m"
              }
#line 1002 "unneeded_code.m"
            }
#line 977 "unneeded_code.m"
            break;
#line 977 "unneeded_code.m"
          case (MR_Integer) 7:
#line 1023 "unneeded_code.m"
            {
#line 1024 "unneeded_code.m"
              {
#line 1024 "unneeded_code.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unneeded_code", (MR_String) "predicate \140transform_hlds.unneeded_code.unneeded_refine_goal\'/4", (MR_String) "shorthand");
#line 1024 "unneeded_code.m"
                return;
              }
#line 1023 "unneeded_code.m"
            }
#line 977 "unneeded_code.m"
            break;
#line 977 "unneeded_code.m"
        }
#line 977 "unneeded_code.m"
        break;
#line 977 "unneeded_code.m"
    }
#line 968 "unneeded_code.m"
  }
#line 965 "unneeded_code.m"
}

#line 937 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__add_alt_start_7_p_0(
#line 937 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_1,
#line 937 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 937 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__BranchPoint_3,
#line 937 "unneeded_code.m"
  MR_Integer transform_hlds__unneeded_code__BranchNum_4,
#line 937 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_5,
#line 937 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_6,
#line 937 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_7)
#line 937 "unneeded_code.m"
{
#line 941 "unneeded_code.m"
  while (MR_TRUE)
#line 941 "unneeded_code.m"
    {
#line 941 "unneeded_code.m"
      /* tailcall optimized into a loop */
#line 941 "unneeded_code.m"
      {
#line 941 "unneeded_code.m"
        MR_bool transform_hlds__unneeded_code__succeeded;

#line 941 "unneeded_code.m"
        if ((transform_hlds__unneeded_code__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 941 "unneeded_code.m"
          *transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_7 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_6;
#line 941 "unneeded_code.m"
        else
#line 943 "unneeded_code.m"
          {
#line 943 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__Var_16;
#line 943 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__BranchWhere0_17;
#line 943 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__WhereNeededList_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 943 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__BranchWhere_25;
#line 943 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 943 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_32_32;
#line 957 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__OldWhere_27;
#line 953 "unneeded_code.m"
            MR_Box transform_hlds__unneeded_code__conv0_OldWhere_27;

#line 942 "unneeded_code.m"
            transform_hlds__unneeded_code__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_31_31, (MR_Integer) 0)));
#line 942 "unneeded_code.m"
            transform_hlds__unneeded_code__BranchWhere0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_31_31, (MR_Integer) 1)));
#line 949 "unneeded_code.m"
            if ((transform_hlds__unneeded_code__BranchWhere0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 945 "unneeded_code.m"
              {
#line 945 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__BranchNumSet_23;
#line 945 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__BranchMap_24;

#line 946 "unneeded_code.m"
                {
#line 946 "unneeded_code.m"
                  transform_hlds__unneeded_code__BranchNumSet_23 = mercury__set__make_singleton_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__unneeded_code__BranchNum_4)));
                }
#line 947 "unneeded_code.m"
                {
#line 947 "unneeded_code.m"
                  transform_hlds__unneeded_code__BranchMap_24 = mercury__map__singleton_2_f_0((MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2], ((MR_Box) (transform_hlds__unneeded_code__BranchPoint_3)), ((MR_Box) (transform_hlds__unneeded_code__BranchNumSet_23)));
                }
#line 948 "unneeded_code.m"
                {
#line 948 "unneeded_code.m"
                  transform_hlds__unneeded_code__BranchWhere_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 948 "unneeded_code.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__BranchWhere_25, 0) = ((MR_Box) (transform_hlds__unneeded_code__BranchMap_24));
#line 948 "unneeded_code.m"
                }
#line 945 "unneeded_code.m"
              }
#line 949 "unneeded_code.m"
            else
#line 951 "unneeded_code.m"
              transform_hlds__unneeded_code__BranchWhere_25 = transform_hlds__unneeded_code__BranchWhere0_17;
#line 953 "unneeded_code.m"
            {
#line 953 "unneeded_code.m"
              transform_hlds__unneeded_code__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_6, ((MR_Box) (transform_hlds__unneeded_code__Var_16)), &transform_hlds__unneeded_code__conv0_OldWhere_27);
            }
#line 953 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 953 "unneeded_code.m"
              {
#line 953 "unneeded_code.m"
                transform_hlds__unneeded_code__OldWhere_27 = ((MR_Word) transform_hlds__unneeded_code__conv0_OldWhere_27);
#line 953 "unneeded_code.m"
                transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 953 "unneeded_code.m"
              }
#line 957 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 955 "unneeded_code.m"
              {
#line 955 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__CombinedWhere_28;
#line 955 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__BranchesA_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__BranchWhere_25, (MR_Integer) 0)));

#line 1129 "unneeded_code.m"
                if ((transform_hlds__unneeded_code__OldWhere_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1128 "unneeded_code.m"
                  transform_hlds__unneeded_code__CombinedWhere_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1129 "unneeded_code.m"
                else
#line 1130 "unneeded_code.m"
                  {
#line 1130 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__BranchesB_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__OldWhere_27, (MR_Integer) 0)));
#line 1130 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__BranchesList_56;

#line 1143 "unneeded_code.m"
                    {
#line 1143 "unneeded_code.m"
                      mercury__map__to_assoc_list_2_p_0((MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2], transform_hlds__unneeded_code__BranchesA_49, &transform_hlds__unneeded_code__BranchesList_56);
                    }
#line 1144 "unneeded_code.m"
                    {
#line 1144 "unneeded_code.m"
                      transform_hlds__unneeded_code__where_needed_branches_upper_bound_2_5_p_0(transform_hlds__unneeded_code__ContainingGoalMap_1, transform_hlds__unneeded_code__CurrentId_5, transform_hlds__unneeded_code__BranchesList_56, transform_hlds__unneeded_code__BranchesB_50, &transform_hlds__unneeded_code__CombinedWhere_28);
                    }
#line 1130 "unneeded_code.m"
                  }
#line 956 "unneeded_code.m"
                {
#line 956 "unneeded_code.m"
                  mercury__map__det_update_4_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, ((MR_Box) (transform_hlds__unneeded_code__Var_16)), ((MR_Box) (transform_hlds__unneeded_code__CombinedWhere_28)), transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_6, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_32_32);
                }
#line 955 "unneeded_code.m"
              }
#line 957 "unneeded_code.m"
            else
#line 958 "unneeded_code.m"
              {
#line 958 "unneeded_code.m"
                {
#line 958 "unneeded_code.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, ((MR_Box) (transform_hlds__unneeded_code__Var_16)), ((MR_Box) (transform_hlds__unneeded_code__BranchWhere_25)), transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_6, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_32_32);
                }
#line 958 "unneeded_code.m"
              }
#line 960 "unneeded_code.m"
            /* direct tailcall eliminated */
#line 960 "unneeded_code.m"
            {
#line 960 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__HeadVar__2__tmp_copy_2 = transform_hlds__unneeded_code__WhereNeededList_18;
#line 960 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0__tmp_copy_6 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_32_32;

#line 960 "unneeded_code.m"
              transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_6 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0__tmp_copy_6;
#line 960 "unneeded_code.m"
              transform_hlds__unneeded_code__HeadVar__2_2 = transform_hlds__unneeded_code__HeadVar__2__tmp_copy_2;
#line 960 "unneeded_code.m"
            }
#line 960 "unneeded_code.m"
            continue;
#line 943 "unneeded_code.m"
          }
#line 941 "unneeded_code.m"
      }
#line 941 "unneeded_code.m"
      break;
#line 941 "unneeded_code.m"
    }
#line 937 "unneeded_code.m"
}

#line 914 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__add_where_needed_list_5_p_0(
#line 914 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_1,
#line 914 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 914 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_3,
#line 914 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_4,
#line 914 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_5)
#line 914 "unneeded_code.m"
{
#line 918 "unneeded_code.m"
  while (MR_TRUE)
#line 918 "unneeded_code.m"
    {
#line 918 "unneeded_code.m"
      /* tailcall optimized into a loop */
#line 918 "unneeded_code.m"
      {
#line 918 "unneeded_code.m"
        MR_bool transform_hlds__unneeded_code__succeeded;

#line 918 "unneeded_code.m"
        if ((transform_hlds__unneeded_code__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 918 "unneeded_code.m"
          *transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_5 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_4;
#line 918 "unneeded_code.m"
        else
#line 920 "unneeded_code.m"
          {
#line 920 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__Var_12;
#line 920 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__BranchWhere_13;
#line 920 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__WhereNeededList_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 920 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 920 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_22_22;
#line 925 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__OldWhere_17;
#line 921 "unneeded_code.m"
            MR_Box transform_hlds__unneeded_code__conv0_OldWhere_17;

#line 919 "unneeded_code.m"
            transform_hlds__unneeded_code__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_21_21, (MR_Integer) 0)));
#line 919 "unneeded_code.m"
            transform_hlds__unneeded_code__BranchWhere_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_21_21, (MR_Integer) 1)));
#line 921 "unneeded_code.m"
            {
#line 921 "unneeded_code.m"
              transform_hlds__unneeded_code__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_4, ((MR_Box) (transform_hlds__unneeded_code__Var_12)), &transform_hlds__unneeded_code__conv0_OldWhere_17);
            }
#line 921 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 921 "unneeded_code.m"
              {
#line 921 "unneeded_code.m"
                transform_hlds__unneeded_code__OldWhere_17 = ((MR_Word) transform_hlds__unneeded_code__conv0_OldWhere_17);
#line 921 "unneeded_code.m"
                transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 921 "unneeded_code.m"
              }
#line 925 "unneeded_code.m"
            if (transform_hlds__unneeded_code__succeeded)
#line 923 "unneeded_code.m"
              {
#line 923 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__CombinedWhere_18;

#line 1122 "unneeded_code.m"
                if ((transform_hlds__unneeded_code__BranchWhere_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1123 "unneeded_code.m"
                  transform_hlds__unneeded_code__CombinedWhere_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1122 "unneeded_code.m"
                else
#line 1125 "unneeded_code.m"
                  {
#line 1125 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__BranchesA_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__BranchWhere_13, (MR_Integer) 0)));

#line 1129 "unneeded_code.m"
                    if ((transform_hlds__unneeded_code__OldWhere_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1128 "unneeded_code.m"
                      transform_hlds__unneeded_code__CombinedWhere_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1129 "unneeded_code.m"
                    else
#line 1130 "unneeded_code.m"
                      {
#line 1130 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__BranchesB_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__OldWhere_17, (MR_Integer) 0)));
#line 1130 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__BranchesList_43;

#line 1143 "unneeded_code.m"
                        {
#line 1143 "unneeded_code.m"
                          mercury__map__to_assoc_list_2_p_0((MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2], transform_hlds__unneeded_code__BranchesA_36, &transform_hlds__unneeded_code__BranchesList_43);
                        }
#line 1144 "unneeded_code.m"
                        {
#line 1144 "unneeded_code.m"
                          transform_hlds__unneeded_code__where_needed_branches_upper_bound_2_5_p_0(transform_hlds__unneeded_code__ContainingGoalMap_1, transform_hlds__unneeded_code__CurrentId_3, transform_hlds__unneeded_code__BranchesList_43, transform_hlds__unneeded_code__BranchesB_37, &transform_hlds__unneeded_code__CombinedWhere_18);
                        }
#line 1130 "unneeded_code.m"
                      }
#line 1125 "unneeded_code.m"
                  }
#line 924 "unneeded_code.m"
                {
#line 924 "unneeded_code.m"
                  mercury__map__det_update_4_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, ((MR_Box) (transform_hlds__unneeded_code__Var_12)), ((MR_Box) (transform_hlds__unneeded_code__CombinedWhere_18)), transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_4, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_22_22);
                }
#line 923 "unneeded_code.m"
              }
#line 925 "unneeded_code.m"
            else
#line 926 "unneeded_code.m"
              {
#line 926 "unneeded_code.m"
                {
#line 926 "unneeded_code.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, ((MR_Box) (transform_hlds__unneeded_code__Var_12)), ((MR_Box) (transform_hlds__unneeded_code__BranchWhere_13)), transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_4, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_22_22);
                }
#line 926 "unneeded_code.m"
              }
#line 928 "unneeded_code.m"
            /* direct tailcall eliminated */
#line 928 "unneeded_code.m"
            {
#line 928 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__HeadVar__2__tmp_copy_2 = transform_hlds__unneeded_code__WhereNeededList_14;
#line 928 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0__tmp_copy_4 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_22_22;

#line 928 "unneeded_code.m"
              transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_4 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0__tmp_copy_4;
#line 928 "unneeded_code.m"
              transform_hlds__unneeded_code__HeadVar__2_2 = transform_hlds__unneeded_code__HeadVar__2__tmp_copy_2;
#line 928 "unneeded_code.m"
            }
#line 928 "unneeded_code.m"
            continue;
#line 920 "unneeded_code.m"
          }
#line 918 "unneeded_code.m"
      }
#line 918 "unneeded_code.m"
      break;
#line 918 "unneeded_code.m"
    }
#line 914 "unneeded_code.m"
}

#line 905 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__merge_where_needed_maps_5_p_0(
#line 905 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_6,
#line 905 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_7,
#line 905 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__WhereNeededMap1_8,
#line 905 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__WhereNeededMap2_9,
#line 905 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__WhereNeededMap_10)
#line 905 "unneeded_code.m"
{
#line 909 "unneeded_code.m"
  {
#line 909 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 909 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__WhereNeededList1_11;

#line 910 "unneeded_code.m"
    {
#line 910 "unneeded_code.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, transform_hlds__unneeded_code__WhereNeededMap1_8, &transform_hlds__unneeded_code__WhereNeededList1_11);
    }
#line 911 "unneeded_code.m"
    {
#line 911 "unneeded_code.m"
      transform_hlds__unneeded_code__add_where_needed_list_5_p_0(transform_hlds__unneeded_code__ContainingGoalMap_6, transform_hlds__unneeded_code__WhereNeededList1_11, transform_hlds__unneeded_code__CurrentId_7, transform_hlds__unneeded_code__WhereNeededMap2_9, transform_hlds__unneeded_code__WhereNeededMap_10);
#line 911 "unneeded_code.m"
      return;
    }
#line 909 "unneeded_code.m"
  }
#line 905 "unneeded_code.m"
}

#line 866 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_ite_17_p_0(
#line 866 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_18,
#line 866 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Cond0_19,
#line 866 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Cond_20,
#line 866 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Then0_21,
#line 866 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Then_22,
#line 866 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Else0_23,
#line 866 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Else_24,
#line 866 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__BranchPoint_25,
#line 866 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_26,
#line 866 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__FinalInstMap_27,
#line 866 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_28,
#line 866 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_45,
#line 866 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_46,
#line 866 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_47,
#line 866 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_48,
#line 866 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_49,
#line 866 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_50)
#line 866 "unneeded_code.m"
{
#line 875 "unneeded_code.m"
  {
#line 875 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 875 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__TypeInfo_63_63;
#line 875 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__TypeCtorInfo_64_64;
#line 875 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__CondInfo0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Cond0_19, (MR_Integer) 1)));
#line 875 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__InstMapDelta_34;
#line 875 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__InstMapCond_35;
#line 875 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__WhereNeededMapElse_36;
#line 875 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__WhereNeededMapThen_37;
#line 875 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__ContainingGoalMap_38;
#line 875 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__BranchNeededMap0_39;
#line 875 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__WhereNeededListElse_40;
#line 875 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__BranchNeededMap1_41;
#line 875 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__WhereNeededListThen_42;
#line 875 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__BranchNeededMap_43;
#line 875 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__WhereNeededMapCond_44;
#line 875 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_51_51;
#line 875 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_52_52;
#line 875 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_53_53;
#line 875 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_54_54;
#line 875 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__WhereNeededList1_70;
#line 876 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Cond0_19, (MR_Integer) 0)));
#line 885 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_60_60;
#line 885 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_61_61;
#line 885 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_62_62;

#line 877 "unneeded_code.m"
    {
#line 877 "unneeded_code.m"
      transform_hlds__unneeded_code__InstMapDelta_34 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__unneeded_code__CondInfo0_33);
    }
#line 878 "unneeded_code.m"
    {
#line 878 "unneeded_code.m"
      hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__unneeded_code__InitInstMap_26, transform_hlds__unneeded_code__InstMapDelta_34, &transform_hlds__unneeded_code__InstMapCond_35);
    }
#line 880 "unneeded_code.m"
    {
#line 880 "unneeded_code.m"
      transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(transform_hlds__unneeded_code__UnneededInfo_18, transform_hlds__unneeded_code__Else0_23, transform_hlds__unneeded_code__Else_24, transform_hlds__unneeded_code__InitInstMap_26, transform_hlds__unneeded_code__FinalInstMap_27, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_45, &transform_hlds__unneeded_code__WhereNeededMapElse_36, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_47, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_51_51, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_49, &transform_hlds__unneeded_code__STATE_VARIABLE_Changed_52_52);
    }
#line 882 "unneeded_code.m"
    {
#line 882 "unneeded_code.m"
      transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(transform_hlds__unneeded_code__UnneededInfo_18, transform_hlds__unneeded_code__Then0_21, transform_hlds__unneeded_code__Then_22, transform_hlds__unneeded_code__InstMapCond_35, transform_hlds__unneeded_code__FinalInstMap_27, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_45, &transform_hlds__unneeded_code__WhereNeededMapThen_37, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_51_51, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_53_53, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_52_52, &transform_hlds__unneeded_code__STATE_VARIABLE_Changed_54_54);
    }
#line 885 "unneeded_code.m"
    transform_hlds__unneeded_code__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_18, (MR_Integer) 0)));
#line 885 "unneeded_code.m"
    transform_hlds__unneeded_code__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_18, (MR_Integer) 1)));
#line 885 "unneeded_code.m"
    transform_hlds__unneeded_code__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_18, (MR_Integer) 2)));
#line 885 "unneeded_code.m"
    transform_hlds__unneeded_code__ContainingGoalMap_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_18, (MR_Integer) 3)));
#line 6627 "transform_hlds.unneeded_code.c"
    transform_hlds__unneeded_code__TypeInfo_63_63 = (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0];
#line 6629 "transform_hlds.unneeded_code.c"
    transform_hlds__unneeded_code__TypeCtorInfo_64_64 = (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0;
#line 886 "unneeded_code.m"
    {
#line 886 "unneeded_code.m"
      mercury__map__init_1_p_0(transform_hlds__unneeded_code__TypeInfo_63_63, transform_hlds__unneeded_code__TypeCtorInfo_64_64, &transform_hlds__unneeded_code__BranchNeededMap0_39);
    }
#line 887 "unneeded_code.m"
    {
#line 887 "unneeded_code.m"
      mercury__map__to_assoc_list_2_p_0(transform_hlds__unneeded_code__TypeInfo_63_63, transform_hlds__unneeded_code__TypeCtorInfo_64_64, transform_hlds__unneeded_code__WhereNeededMapElse_36, &transform_hlds__unneeded_code__WhereNeededListElse_40);
    }
#line 888 "unneeded_code.m"
    {
#line 888 "unneeded_code.m"
      transform_hlds__unneeded_code__add_alt_start_7_p_0(transform_hlds__unneeded_code__ContainingGoalMap_38, transform_hlds__unneeded_code__WhereNeededListElse_40, transform_hlds__unneeded_code__BranchPoint_25, (MR_Integer) 2, transform_hlds__unneeded_code__CurrentId_28, transform_hlds__unneeded_code__BranchNeededMap0_39, &transform_hlds__unneeded_code__BranchNeededMap1_41);
    }
#line 890 "unneeded_code.m"
    {
#line 890 "unneeded_code.m"
      mercury__map__to_assoc_list_2_p_0(transform_hlds__unneeded_code__TypeInfo_63_63, transform_hlds__unneeded_code__TypeCtorInfo_64_64, transform_hlds__unneeded_code__WhereNeededMapThen_37, &transform_hlds__unneeded_code__WhereNeededListThen_42);
    }
#line 891 "unneeded_code.m"
    {
#line 891 "unneeded_code.m"
      transform_hlds__unneeded_code__add_alt_start_7_p_0(transform_hlds__unneeded_code__ContainingGoalMap_38, transform_hlds__unneeded_code__WhereNeededListThen_42, transform_hlds__unneeded_code__BranchPoint_25, (MR_Integer) 1, transform_hlds__unneeded_code__CurrentId_28, transform_hlds__unneeded_code__BranchNeededMap1_41, &transform_hlds__unneeded_code__BranchNeededMap_43);
    }
#line 910 "unneeded_code.m"
    {
#line 910 "unneeded_code.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_45, &transform_hlds__unneeded_code__WhereNeededList1_70);
    }
#line 911 "unneeded_code.m"
    {
#line 911 "unneeded_code.m"
      transform_hlds__unneeded_code__add_where_needed_list_5_p_0(transform_hlds__unneeded_code__ContainingGoalMap_38, transform_hlds__unneeded_code__WhereNeededList1_70, transform_hlds__unneeded_code__CurrentId_28, transform_hlds__unneeded_code__BranchNeededMap_43, &transform_hlds__unneeded_code__WhereNeededMapCond_44);
    }
#line 896 "unneeded_code.m"
    {
#line 896 "unneeded_code.m"
      transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(transform_hlds__unneeded_code__UnneededInfo_18, transform_hlds__unneeded_code__Cond0_19, transform_hlds__unneeded_code__Cond_20, transform_hlds__unneeded_code__InitInstMap_26, transform_hlds__unneeded_code__InstMapCond_35, transform_hlds__unneeded_code__WhereNeededMapCond_44, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_46, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_53_53, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_48, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_54_54, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_50);
#line 896 "unneeded_code.m"
      return;
    }
#line 875 "unneeded_code.m"
  }
#line 866 "unneeded_code.m"
}

#line 840 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_cases_15_p_0(
#line 840 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_1,
#line 840 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 840 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__3_3,
#line 840 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__BranchPoint_4,
#line 840 "unneeded_code.m"
  MR_Integer transform_hlds__unneeded_code__BranchNum_5,
#line 840 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_6,
#line 840 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__FinalInstMap_7,
#line 840 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_8,
#line 840 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__StartWhereNeededMap_9,
#line 840 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_10,
#line 840 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_11,
#line 840 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_12,
#line 840 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_13,
#line 840 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_14,
#line 840 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_15)
#line 840 "unneeded_code.m"
{
#line 847 "unneeded_code.m"
  {
#line 847 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 847 "unneeded_code.m"
    if ((transform_hlds__unneeded_code__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 847 "unneeded_code.m"
      {
#line 847 "unneeded_code.m"
        *transform_hlds__unneeded_code__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 848 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_Changed_15 = transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_14;
#line 848 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_13 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_12;
#line 848 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_11 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_10;
#line 847 "unneeded_code.m"
      }
#line 847 "unneeded_code.m"
    else
#line 851 "unneeded_code.m"
      {
#line 851 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Case0_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 851 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Cases0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 851 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Case_35;
#line 851 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Cases_36;
#line 851 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__MainConsId_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Case0_33, (MR_Integer) 0)));
#line 851 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__OtherConsIds_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Case0_33, (MR_Integer) 1)));
#line 851 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal0_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Case0_33, (MR_Integer) 2)));
#line 851 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal_49;
#line 851 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__WhereNeededMapFirst_50;
#line 851 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__WhereNeededList_51;
#line 851 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__ContainingGoalMap_52;
#line 851 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59_59;
#line 851 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_60_60;
#line 851 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_61_61;
#line 851 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_62_62;
#line 857 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_67_67;
#line 857 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_68_68;
#line 857 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_69_69;

#line 853 "unneeded_code.m"
        {
#line 853 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(transform_hlds__unneeded_code__UnneededInfo_1, transform_hlds__unneeded_code__Goal0_48, &transform_hlds__unneeded_code__Goal_49, transform_hlds__unneeded_code__InitInstMap_6, transform_hlds__unneeded_code__FinalInstMap_7, transform_hlds__unneeded_code__StartWhereNeededMap_9, &transform_hlds__unneeded_code__WhereNeededMapFirst_50, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_12, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59_59, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_14, &transform_hlds__unneeded_code__STATE_VARIABLE_Changed_60_60);
        }
#line 855 "unneeded_code.m"
        {
#line 855 "unneeded_code.m"
          transform_hlds__unneeded_code__Case_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 855 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Case_35, 0) = ((MR_Box) (transform_hlds__unneeded_code__MainConsId_46));
#line 855 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Case_35, 1) = ((MR_Box) (transform_hlds__unneeded_code__OtherConsIds_47));
#line 855 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Case_35, 2) = ((MR_Box) (transform_hlds__unneeded_code__Goal_49));
#line 855 "unneeded_code.m"
        }
#line 856 "unneeded_code.m"
        {
#line 856 "unneeded_code.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, transform_hlds__unneeded_code__WhereNeededMapFirst_50, &transform_hlds__unneeded_code__WhereNeededList_51);
        }
#line 857 "unneeded_code.m"
        transform_hlds__unneeded_code__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_1, (MR_Integer) 0)));
#line 857 "unneeded_code.m"
        transform_hlds__unneeded_code__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_1, (MR_Integer) 1)));
#line 857 "unneeded_code.m"
        transform_hlds__unneeded_code__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_1, (MR_Integer) 2)));
#line 857 "unneeded_code.m"
        transform_hlds__unneeded_code__ContainingGoalMap_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_1, (MR_Integer) 3)));
#line 858 "unneeded_code.m"
        {
#line 858 "unneeded_code.m"
          transform_hlds__unneeded_code__add_alt_start_7_p_0(transform_hlds__unneeded_code__ContainingGoalMap_52, transform_hlds__unneeded_code__WhereNeededList_51, transform_hlds__unneeded_code__BranchPoint_4, transform_hlds__unneeded_code__BranchNum_5, transform_hlds__unneeded_code__CurrentId_8, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_10, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_61_61);
        }
#line 861 "unneeded_code.m"
        transform_hlds__unneeded_code__V_62_62 = (transform_hlds__unneeded_code__BranchNum_5 + (MR_Integer) 1);
#line 860 "unneeded_code.m"
        {
#line 860 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_process_cases_15_p_0(transform_hlds__unneeded_code__UnneededInfo_1, transform_hlds__unneeded_code__Cases0_34, &transform_hlds__unneeded_code__Cases_36, transform_hlds__unneeded_code__BranchPoint_4, transform_hlds__unneeded_code__V_62_62, transform_hlds__unneeded_code__InitInstMap_6, transform_hlds__unneeded_code__FinalInstMap_7, transform_hlds__unneeded_code__CurrentId_8, transform_hlds__unneeded_code__StartWhereNeededMap_9, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_61_61, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_11, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_59_59, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_13, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_60_60, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_15);
        }
#line 849 "unneeded_code.m"
        {
#line 849 "unneeded_code.m"
          MR_Word base;
#line 849 "unneeded_code.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 849 "unneeded_code.m"
          *transform_hlds__unneeded_code__HeadVar__3_3 = base;
#line 849 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__Case_35));
#line 849 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__Cases_36));
#line 849 "unneeded_code.m"
        }
#line 851 "unneeded_code.m"
      }
#line 847 "unneeded_code.m"
  }
#line 840 "unneeded_code.m"
}

#line 817 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_disj_13_p_0(
#line 817 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_1,
#line 817 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 817 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__3_3,
#line 817 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_4,
#line 817 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__FinalInstMap_5,
#line 817 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_6,
#line 817 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__StartWhereNeededMap_7,
#line 817 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_8,
#line 817 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_9,
#line 817 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_10,
#line 817 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_11,
#line 817 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_12,
#line 817 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_13)
#line 817 "unneeded_code.m"
{
#line 823 "unneeded_code.m"
  {
#line 823 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 823 "unneeded_code.m"
    if ((transform_hlds__unneeded_code__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 823 "unneeded_code.m"
      {
#line 823 "unneeded_code.m"
        *transform_hlds__unneeded_code__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 824 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_Changed_13 = transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_12;
#line 824 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_11 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_10;
#line 824 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_9 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_8;
#line 823 "unneeded_code.m"
      }
#line 823 "unneeded_code.m"
    else
#line 827 "unneeded_code.m"
      {
#line 827 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal0_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 827 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goals0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 827 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal_31;
#line 827 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goals_32;
#line 827 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__WhereNeededMapFirst_40;
#line 827 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__WhereNeededList_41;
#line 827 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__ContainingGoalMap_42;
#line 827 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_49_49;
#line 827 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_50_50;
#line 827 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_51_51;
#line 831 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_55_55;
#line 831 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_56_56;
#line 831 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_57_57;

#line 828 "unneeded_code.m"
        {
#line 828 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(transform_hlds__unneeded_code__UnneededInfo_1, transform_hlds__unneeded_code__Goal0_29, &transform_hlds__unneeded_code__Goal_31, transform_hlds__unneeded_code__InitInstMap_4, transform_hlds__unneeded_code__FinalInstMap_5, transform_hlds__unneeded_code__StartWhereNeededMap_7, &transform_hlds__unneeded_code__WhereNeededMapFirst_40, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_10, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_49_49, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_12, &transform_hlds__unneeded_code__STATE_VARIABLE_Changed_50_50);
        }
#line 830 "unneeded_code.m"
        {
#line 830 "unneeded_code.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, transform_hlds__unneeded_code__WhereNeededMapFirst_40, &transform_hlds__unneeded_code__WhereNeededList_41);
        }
#line 831 "unneeded_code.m"
        transform_hlds__unneeded_code__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_1, (MR_Integer) 0)));
#line 831 "unneeded_code.m"
        transform_hlds__unneeded_code__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_1, (MR_Integer) 1)));
#line 831 "unneeded_code.m"
        transform_hlds__unneeded_code__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_1, (MR_Integer) 2)));
#line 831 "unneeded_code.m"
        transform_hlds__unneeded_code__ContainingGoalMap_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_1, (MR_Integer) 3)));
#line 832 "unneeded_code.m"
        {
#line 832 "unneeded_code.m"
          transform_hlds__unneeded_code__add_where_needed_list_5_p_0(transform_hlds__unneeded_code__ContainingGoalMap_42, transform_hlds__unneeded_code__WhereNeededList_41, transform_hlds__unneeded_code__CurrentId_6, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_8, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_51_51);
        }
#line 834 "unneeded_code.m"
        {
#line 834 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_process_disj_13_p_0(transform_hlds__unneeded_code__UnneededInfo_1, transform_hlds__unneeded_code__Goals0_30, &transform_hlds__unneeded_code__Goals_32, transform_hlds__unneeded_code__InitInstMap_4, transform_hlds__unneeded_code__FinalInstMap_5, transform_hlds__unneeded_code__CurrentId_6, transform_hlds__unneeded_code__StartWhereNeededMap_7, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_51_51, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_9, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_49_49, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_11, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_50_50, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_13);
        }
#line 825 "unneeded_code.m"
        {
#line 825 "unneeded_code.m"
          MR_Word base;
#line 825 "unneeded_code.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 825 "unneeded_code.m"
          *transform_hlds__unneeded_code__HeadVar__3_3 = base;
#line 825 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__Goal_31));
#line 825 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__Goals_32));
#line 825 "unneeded_code.m"
        }
#line 827 "unneeded_code.m"
      }
#line 823 "unneeded_code.m"
  }
#line 817 "unneeded_code.m"
}

#line 794 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_rev_bracketed_conj_9_p_0(
#line 794 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_1,
#line 794 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 794 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__3_3,
#line 794 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_4,
#line 794 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_5,
#line 794 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_6,
#line 794 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_7,
#line 794 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_8,
#line 794 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_9)
#line 794 "unneeded_code.m"
{
#line 799 "unneeded_code.m"
  {
#line 799 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 799 "unneeded_code.m"
    if ((transform_hlds__unneeded_code__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 799 "unneeded_code.m"
      {
#line 799 "unneeded_code.m"
        *transform_hlds__unneeded_code__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 800 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_Changed_9 = transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_8;
#line 800 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_7 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_6;
#line 800 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_5 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_4;
#line 799 "unneeded_code.m"
      }
#line 799 "unneeded_code.m"
    else
#line 803 "unneeded_code.m"
      {
#line 803 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__BracketedGoal_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 803 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__BracketedGoals_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 803 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BracketedGoal_21, (MR_Integer) 0)));
#line 803 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__InitInstMap_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BracketedGoal_21, (MR_Integer) 1)));
#line 803 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__FinalInstMap_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BracketedGoal_21, (MR_Integer) 2)));
#line 803 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal1_30;
#line 803 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goals1_31;
#line 803 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_39_39;
#line 803 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_40_40;
#line 803 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_41_41;
#line 809 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_45_45;
#line 809 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_46_46;
#line 809 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_32_32;

#line 805 "unneeded_code.m"
        {
#line 805 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(transform_hlds__unneeded_code__UnneededInfo_1, transform_hlds__unneeded_code__Goal0_27, &transform_hlds__unneeded_code__Goal1_30, transform_hlds__unneeded_code__InitInstMap_28, transform_hlds__unneeded_code__FinalInstMap_29, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_4, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_39_39, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_6, &transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_40_40, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_8, &transform_hlds__unneeded_code__STATE_VARIABLE_Changed_41_41);
        }
#line 807 "unneeded_code.m"
        {
#line 807 "unneeded_code.m"
          transform_hlds__unneeded_code__unneeded_process_rev_bracketed_conj_9_p_0(transform_hlds__unneeded_code__UnneededInfo_1, transform_hlds__unneeded_code__BracketedGoals_22, &transform_hlds__unneeded_code__Goals1_31, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_39_39, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_5, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_40_40, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_7, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_41_41, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_9);
        }
#line 809 "unneeded_code.m"
        transform_hlds__unneeded_code__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal1_30, (MR_Integer) 0)));
#line 809 "unneeded_code.m"
        transform_hlds__unneeded_code__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal1_30, (MR_Integer) 1)));
#line 809 "unneeded_code.m"
        {
#line 809 "unneeded_code.m"
          transform_hlds__unneeded_code__V_46_46 = hlds__make_goal__true_goal_expr_0_f_0();
        }
#line 809 "unneeded_code.m"
        {
#line 809 "unneeded_code.m"
          transform_hlds__unneeded_code__succeeded = hlds__hlds_goal____Unify____hlds_goal_expr_0_0(transform_hlds__unneeded_code__V_45_45, transform_hlds__unneeded_code__V_46_46);
        }
#line 811 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 810 "unneeded_code.m"
          *transform_hlds__unneeded_code__HeadVar__3_3 = transform_hlds__unneeded_code__Goals1_31;
#line 811 "unneeded_code.m"
        else
#line 812 "unneeded_code.m"
          {
#line 812 "unneeded_code.m"
            MR_Word base;
#line 812 "unneeded_code.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 812 "unneeded_code.m"
            *transform_hlds__unneeded_code__HeadVar__3_3 = base;
#line 812 "unneeded_code.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__Goal1_30));
#line 812 "unneeded_code.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__Goals1_31));
#line 812 "unneeded_code.m"
          }
#line 803 "unneeded_code.m"
      }
#line 799 "unneeded_code.m"
  }
#line 794 "unneeded_code.m"
}

#line 778 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__build_bracketed_conj_3_p_0(
#line 778 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__1_1,
#line 778 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_2,
#line 778 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__3_3)
#line 778 "unneeded_code.m"
{
#line 781 "unneeded_code.m"
  {
#line 781 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 781 "unneeded_code.m"
    if ((transform_hlds__unneeded_code__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 781 "unneeded_code.m"
      *transform_hlds__unneeded_code__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 781 "unneeded_code.m"
    else
#line 782 "unneeded_code.m"
      {
#line 782 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 0)));
#line 782 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__HeadVar__1_1, (MR_Integer) 1)));

#line 783 "unneeded_code.m"
        {
#line 783 "unneeded_code.m"
          transform_hlds__unneeded_code__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(transform_hlds__unneeded_code__InitInstMap_2);
        }
#line 785 "unneeded_code.m"
        if (transform_hlds__unneeded_code__succeeded)
#line 784 "unneeded_code.m"
          *transform_hlds__unneeded_code__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 785 "unneeded_code.m"
        else
#line 786 "unneeded_code.m"
          {
#line 786 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal_5, (MR_Integer) 1)));
#line 786 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__InstMapDelta_11;
#line 786 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__FinalInstMap_12;
#line 786 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__BracketedTail_13;
#line 786 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__BracketedGoal_14;
#line 786 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal_5, (MR_Integer) 0)));

#line 787 "unneeded_code.m"
            {
#line 787 "unneeded_code.m"
              transform_hlds__unneeded_code__InstMapDelta_11 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__unneeded_code__GoalInfo_10);
            }
#line 788 "unneeded_code.m"
            {
#line 788 "unneeded_code.m"
              hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__unneeded_code__InitInstMap_2, transform_hlds__unneeded_code__InstMapDelta_11, &transform_hlds__unneeded_code__FinalInstMap_12);
            }
#line 789 "unneeded_code.m"
            {
#line 789 "unneeded_code.m"
              transform_hlds__unneeded_code__build_bracketed_conj_3_p_0(transform_hlds__unneeded_code__Goals_6, transform_hlds__unneeded_code__FinalInstMap_12, &transform_hlds__unneeded_code__BracketedTail_13);
            }
#line 790 "unneeded_code.m"
            {
#line 790 "unneeded_code.m"
              transform_hlds__unneeded_code__BracketedGoal_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 790 "unneeded_code.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BracketedGoal_14, 0) = ((MR_Box) (transform_hlds__unneeded_code__Goal_5));
#line 790 "unneeded_code.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BracketedGoal_14, 1) = ((MR_Box) (transform_hlds__unneeded_code__InitInstMap_2));
#line 790 "unneeded_code.m"
              MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BracketedGoal_14, 2) = ((MR_Box) (transform_hlds__unneeded_code__FinalInstMap_12));
#line 790 "unneeded_code.m"
            }
#line 791 "unneeded_code.m"
            {
#line 791 "unneeded_code.m"
              MR_Word base;
#line 791 "unneeded_code.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "unneeded_code.m"
              *transform_hlds__unneeded_code__HeadVar__3_3 = base;
#line 791 "unneeded_code.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__BracketedGoal_14));
#line 791 "unneeded_code.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__BracketedTail_13));
#line 791 "unneeded_code.m"
            }
#line 786 "unneeded_code.m"
          }
#line 782 "unneeded_code.m"
      }
#line 781 "unneeded_code.m"
  }
#line 778 "unneeded_code.m"
}

#line 704 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_3(
#line 704 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 704 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 704 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_2)
#line 704 "unneeded_code.m"
{
#line 704 "unneeded_code.m"
  {
#line 704 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;
#line 704 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__conv3_HeadVar__2_2;

#line 704 "unneeded_code.m"
    {
#line 704 "unneeded_code.m"
      transform_hlds__unneeded_code__demand_var_everywhere_2_p_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), &transform_hlds__unneeded_code__conv3_HeadVar__2_2);
    }
#line 704 "unneeded_code.m"
    *transform_hlds__unneeded_code__wrapper_arg_2 = ((MR_Box) (transform_hlds__unneeded_code__conv3_HeadVar__2_2));
#line 704 "unneeded_code.m"
  }
#line 704 "unneeded_code.m"
}

#line 730 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_2(
#line 730 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 730 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 730 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_2)
#line 730 "unneeded_code.m"
{
#line 730 "unneeded_code.m"
  {
#line 730 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;
#line 730 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__conv1_HeadVar__2_2;

#line 730 "unneeded_code.m"
    {
#line 730 "unneeded_code.m"
      transform_hlds__unneeded_code__demand_var_everywhere_2_p_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), &transform_hlds__unneeded_code__conv1_HeadVar__2_2);
    }
#line 730 "unneeded_code.m"
    *transform_hlds__unneeded_code__wrapper_arg_2 = ((MR_Box) (transform_hlds__unneeded_code__conv1_HeadVar__2_2));
#line 730 "unneeded_code.m"
  }
#line 730 "unneeded_code.m"
}

#line 719 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0_1(
#line 719 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 719 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 719 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_2)
#line 719 "unneeded_code.m"
{
#line 719 "unneeded_code.m"
  {
#line 719 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;
#line 719 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__conv0_HeadVar__2_2;

#line 719 "unneeded_code.m"
    {
#line 719 "unneeded_code.m"
      transform_hlds__unneeded_code__demand_var_everywhere_2_p_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), &transform_hlds__unneeded_code__conv0_HeadVar__2_2);
    }
#line 719 "unneeded_code.m"
    *transform_hlds__unneeded_code__wrapper_arg_2 = ((MR_Box) (transform_hlds__unneeded_code__conv0_HeadVar__2_2));
#line 719 "unneeded_code.m"
  }
#line 719 "unneeded_code.m"
}

#line 653 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0(
#line 653 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_12,
#line 653 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal0_13,
#line 653 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Goal_14,
#line 653 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_15,
#line 653 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__FinalInstMap_16,
#line 653 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_88,
#line 653 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_89,
#line 653 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_90,
#line 653 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_91,
#line 653 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_92,
#line 653 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_93)
#line 653 "unneeded_code.m"
{
#line 659 "unneeded_code.m"
  {
#line 659 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 659 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__GoalExpr0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal0_13, (MR_Integer) 0)));
#line 659 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__GoalInfo0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal0_13, (MR_Integer) 1)));

#line 670 "unneeded_code.m"
#line 670 "unneeded_code.m"
    switch (MR_tag((MR_Word) transform_hlds__unneeded_code__GoalExpr0_20)) {
#line 670 "unneeded_code.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 670 "unneeded_code.m"
      case (MR_Integer) 0:
#line 737 "unneeded_code.m"
        {
#line 737 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__NegGoal0_81 = (MR_Word) MR_body(((MR_Word) transform_hlds__unneeded_code__GoalExpr0_20), (MR_Integer) 0);
#line 737 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__NegGoal_82;
#line 737 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__GoalExpr_142;

#line 738 "unneeded_code.m"
          {
#line 738 "unneeded_code.m"
            transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(transform_hlds__unneeded_code__UnneededInfo_12, transform_hlds__unneeded_code__NegGoal0_81, &transform_hlds__unneeded_code__NegGoal_82, transform_hlds__unneeded_code__InitInstMap_15, transform_hlds__unneeded_code__FinalInstMap_16, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_88, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_89, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_90, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_91, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_92, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_93);
          }
#line 741 "unneeded_code.m"
          transform_hlds__unneeded_code__GoalExpr_142 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__unneeded_code__NegGoal_82);
#line 742 "unneeded_code.m"
          {
#line 742 "unneeded_code.m"
            MR_Word base;
#line 742 "unneeded_code.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 742 "unneeded_code.m"
            *transform_hlds__unneeded_code__Goal_14 = base;
#line 742 "unneeded_code.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalExpr_142));
#line 742 "unneeded_code.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__GoalInfo0_21));
#line 742 "unneeded_code.m"
          }
#line 737 "unneeded_code.m"
        }
#line 670 "unneeded_code.m"
        break;
#line 670 "unneeded_code.m"
      case (MR_Integer) 1:
#line 670 "unneeded_code.m"
      case (MR_Integer) 2:
#line 666 "unneeded_code.m"
        {
#line 667 "unneeded_code.m"
          *transform_hlds__unneeded_code__Goal_14 = transform_hlds__unneeded_code__Goal0_13;
#line 668 "unneeded_code.m"
          {
#line 668 "unneeded_code.m"
            transform_hlds__unneeded_code__demand_inputs_6_p_0(transform_hlds__unneeded_code__UnneededInfo_12, *transform_hlds__unneeded_code__Goal_14, transform_hlds__unneeded_code__InitInstMap_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_88, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_89);
          }
#line 666 "unneeded_code.m"
          *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_91 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_90;
#line 666 "unneeded_code.m"
          *transform_hlds__unneeded_code__STATE_VARIABLE_Changed_93 = transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_92;
#line 666 "unneeded_code.m"
        }
#line 670 "unneeded_code.m"
        break;
#line 670 "unneeded_code.m"
      case (MR_Integer) 3:
#line 670 "unneeded_code.m"
#line 670 "unneeded_code.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 0)))) {
#line 670 "unneeded_code.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 670 "unneeded_code.m"
          case (MR_Integer) 0:
#line 670 "unneeded_code.m"
          case (MR_Integer) 1:
#line 666 "unneeded_code.m"
            {
#line 667 "unneeded_code.m"
              *transform_hlds__unneeded_code__Goal_14 = transform_hlds__unneeded_code__Goal0_13;
#line 668 "unneeded_code.m"
              {
#line 668 "unneeded_code.m"
                transform_hlds__unneeded_code__demand_inputs_6_p_0(transform_hlds__unneeded_code__UnneededInfo_12, *transform_hlds__unneeded_code__Goal_14, transform_hlds__unneeded_code__InitInstMap_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_88, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_89);
              }
#line 666 "unneeded_code.m"
              *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_91 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_90;
#line 666 "unneeded_code.m"
              *transform_hlds__unneeded_code__STATE_VARIABLE_Changed_93 = transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_92;
#line 666 "unneeded_code.m"
            }
#line 670 "unneeded_code.m"
            break;
#line 670 "unneeded_code.m"
          case (MR_Integer) 2:
#line 671 "unneeded_code.m"
            {
#line 671 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__ConjType_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 1)));
#line 671 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Conjuncts0_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 2)));

#line 679 "unneeded_code.m"
#line 679 "unneeded_code.m"
              switch (transform_hlds__unneeded_code__ConjType_45) {
#line 679 "unneeded_code.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 679 "unneeded_code.m"
                case (MR_Integer) 1:
#line 680 "unneeded_code.m"
                  {
#line 681 "unneeded_code.m"
                    *transform_hlds__unneeded_code__Goal_14 = transform_hlds__unneeded_code__Goal0_13;
#line 682 "unneeded_code.m"
                    {
#line 682 "unneeded_code.m"
                      transform_hlds__unneeded_code__demand_inputs_6_p_0(transform_hlds__unneeded_code__UnneededInfo_12, *transform_hlds__unneeded_code__Goal_14, transform_hlds__unneeded_code__InitInstMap_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_88, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_89);
                    }
#line 680 "unneeded_code.m"
                    *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_91 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_90;
#line 680 "unneeded_code.m"
                    *transform_hlds__unneeded_code__STATE_VARIABLE_Changed_93 = transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_92;
#line 680 "unneeded_code.m"
                  }
#line 679 "unneeded_code.m"
                  break;
#line 679 "unneeded_code.m"
                case (MR_Integer) 0:
#line 673 "unneeded_code.m"
                  {
#line 673 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__Conjuncts_47;
#line 673 "unneeded_code.m"
                    MR_Word transform_hlds__unneeded_code__GoalExpr_48;

#line 674 "unneeded_code.m"
                    {
#line 674 "unneeded_code.m"
                      transform_hlds__unneeded_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_110_101_101_100_101_100_95_112_114_111_99_101_115_115_95_99_111_110_106_95_95_91_53_93_95_48_11_p_0(transform_hlds__unneeded_code__UnneededInfo_12, transform_hlds__unneeded_code__Conjuncts0_46, &transform_hlds__unneeded_code__Conjuncts_47, transform_hlds__unneeded_code__InitInstMap_15, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_88, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_89, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_90, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_91, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_92, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_93);
                    }
#line 677 "unneeded_code.m"
                    {
#line 677 "unneeded_code.m"
                      transform_hlds__unneeded_code__GoalExpr_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 677 "unneeded_code.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 677 "unneeded_code.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_48, 1) = ((MR_Box) ((MR_Integer) 0));
#line 677 "unneeded_code.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_48, 2) = ((MR_Box) (transform_hlds__unneeded_code__Conjuncts_47));
#line 677 "unneeded_code.m"
                    }
#line 678 "unneeded_code.m"
                    {
#line 678 "unneeded_code.m"
                      MR_Word base;
#line 678 "unneeded_code.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 678 "unneeded_code.m"
                      *transform_hlds__unneeded_code__Goal_14 = base;
#line 678 "unneeded_code.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalExpr_48));
#line 678 "unneeded_code.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__GoalInfo0_21));
#line 678 "unneeded_code.m"
                    }
#line 673 "unneeded_code.m"
                  }
#line 679 "unneeded_code.m"
                  break;
#line 679 "unneeded_code.m"
              }
#line 671 "unneeded_code.m"
            }
#line 670 "unneeded_code.m"
            break;
#line 670 "unneeded_code.m"
          case (MR_Integer) 3:
#line 717 "unneeded_code.m"
            {
#line 717 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__TypeCtorInfo_157_157;
#line 717 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Disjuncts0_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 1)));
#line 717 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Disjuncts_73;
#line 717 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_111_111;
#line 717 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__GoalExpr_137;
#line 717 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__GoalId_138;

#line 718 "unneeded_code.m"
              {
#line 718 "unneeded_code.m"
                transform_hlds__unneeded_code__GoalId_138 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__unneeded_code__GoalInfo0_21);
              }
#line 7516 "transform_hlds.unneeded_code.c"
              transform_hlds__unneeded_code__TypeCtorInfo_157_157 = (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0;
#line 719 "unneeded_code.m"
              {
#line 719 "unneeded_code.m"
                mercury__map__map_values_only_3_p_0(transform_hlds__unneeded_code__TypeCtorInfo_157_157, transform_hlds__unneeded_code__TypeCtorInfo_157_157, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[12], transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_88, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_111_111);
              }
#line 720 "unneeded_code.m"
              {
#line 720 "unneeded_code.m"
                transform_hlds__unneeded_code__unneeded_process_disj_13_p_0(transform_hlds__unneeded_code__UnneededInfo_12, transform_hlds__unneeded_code__Disjuncts0_72, &transform_hlds__unneeded_code__Disjuncts_73, transform_hlds__unneeded_code__InitInstMap_15, transform_hlds__unneeded_code__FinalInstMap_16, transform_hlds__unneeded_code__GoalId_138, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_111_111, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_111_111, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_89, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_90, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_91, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_92, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_93);
              }
#line 724 "unneeded_code.m"
              {
#line 724 "unneeded_code.m"
                transform_hlds__unneeded_code__GoalExpr_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 724 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_137, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 724 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_137, 1) = ((MR_Box) (transform_hlds__unneeded_code__Disjuncts_73));
#line 724 "unneeded_code.m"
              }
#line 725 "unneeded_code.m"
              {
#line 725 "unneeded_code.m"
                MR_Word base;
#line 725 "unneeded_code.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 725 "unneeded_code.m"
                *transform_hlds__unneeded_code__Goal_14 = base;
#line 725 "unneeded_code.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalExpr_137));
#line 725 "unneeded_code.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__GoalInfo0_21));
#line 725 "unneeded_code.m"
              }
#line 717 "unneeded_code.m"
            }
#line 670 "unneeded_code.m"
            break;
#line 670 "unneeded_code.m"
          case (MR_Integer) 4:
#line 686 "unneeded_code.m"
            {
#line 686 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__TypeCtorInfo_153_153;
#line 686 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__TypeInfo_154_154;
#line 686 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__SwitchVar_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 1)));
#line 686 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__CanFail_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 2)));
#line 686 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Cases0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 3)));
#line 686 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__ContainingGoalMap_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_12, (MR_Integer) 3)));
#line 686 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__MaybeNumAlt_66;
#line 686 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__GoalId_67;
#line 686 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__BranchPoint_68;
#line 686 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__BranchNeededMap0_69;
#line 686 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Cases_70;
#line 686 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__BranchNeededMap_71;
#line 686 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__V_119_119;
#line 686 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_121_121;
#line 686 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_125_125;
#line 686 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__GoalExpr_136;
#line 687 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_12, (MR_Integer) 0)));
#line 687 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_12, (MR_Integer) 1)));
#line 687 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_12, (MR_Integer) 2)));
#line 699 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__MaybeNumAltPrime_65;
#line 689 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__TypeCtorInfo_149_149;
#line 689 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__TypeCtorInfo_150_150;
#line 689 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__FirstCase0_53;
#line 689 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__FirstCaseGoal0_57;
#line 689 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__FirstCaseGoalInfo0_59;
#line 689 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__FirstCaseGoalId0_60;
#line 689 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__GoalContaining0_61;
#line 689 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__FirstCaseLastStep_63;
#line 689 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__V_54_54;
#line 690 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__V_55_55;
#line 690 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__V_56_56;
#line 691 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__V_58_58;
#line 693 "unneeded_code.m"
              MR_Box transform_hlds__unneeded_code__conv2_GoalContaining0_61;
#line 694 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code___ContainingGoalId_62;
#line 696 "unneeded_code.m"
              MR_Integer transform_hlds__unneeded_code__V_64_64;

#line 689 "unneeded_code.m"
              transform_hlds__unneeded_code__succeeded = ((MR_tag((MR_Word) transform_hlds__unneeded_code__Cases0_51)) == (MR_mktag((MR_Integer) 1)));
#line 689 "unneeded_code.m"
              if (transform_hlds__unneeded_code__succeeded)
#line 689 "unneeded_code.m"
                {
#line 689 "unneeded_code.m"
                  transform_hlds__unneeded_code__FirstCase0_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__Cases0_51, (MR_Integer) 0)));
#line 689 "unneeded_code.m"
                  transform_hlds__unneeded_code__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__Cases0_51, (MR_Integer) 1)));
#line 690 "unneeded_code.m"
                  transform_hlds__unneeded_code__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__FirstCase0_53, (MR_Integer) 0)));
#line 690 "unneeded_code.m"
                  transform_hlds__unneeded_code__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__FirstCase0_53, (MR_Integer) 1)));
#line 690 "unneeded_code.m"
                  transform_hlds__unneeded_code__FirstCaseGoal0_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__FirstCase0_53, (MR_Integer) 2)));
#line 691 "unneeded_code.m"
                  transform_hlds__unneeded_code__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__FirstCaseGoal0_57, (MR_Integer) 0)));
#line 691 "unneeded_code.m"
                  transform_hlds__unneeded_code__FirstCaseGoalInfo0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__FirstCaseGoal0_57, (MR_Integer) 1)));
#line 692 "unneeded_code.m"
                  {
#line 692 "unneeded_code.m"
                    transform_hlds__unneeded_code__FirstCaseGoalId0_60 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__unneeded_code__FirstCaseGoalInfo0_59);
                  }
#line 7656 "transform_hlds.unneeded_code.c"
                  transform_hlds__unneeded_code__TypeCtorInfo_149_149 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 7658 "transform_hlds.unneeded_code.c"
                  transform_hlds__unneeded_code__TypeCtorInfo_150_150 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0;
#line 693 "unneeded_code.m"
                  {
#line 693 "unneeded_code.m"
                    mercury__map__lookup_3_p_0(transform_hlds__unneeded_code__TypeCtorInfo_149_149, transform_hlds__unneeded_code__TypeCtorInfo_150_150, transform_hlds__unneeded_code__ContainingGoalMap_52, ((MR_Box) (transform_hlds__unneeded_code__FirstCaseGoalId0_60)), &transform_hlds__unneeded_code__conv2_GoalContaining0_61);
                  }
#line 693 "unneeded_code.m"
                  transform_hlds__unneeded_code__GoalContaining0_61 = ((MR_Word) transform_hlds__unneeded_code__conv2_GoalContaining0_61);
#line 694 "unneeded_code.m"
                  transform_hlds__unneeded_code__succeeded = ((MR_tag((MR_Word) transform_hlds__unneeded_code__GoalContaining0_61)) == (MR_mktag((MR_Integer) 1)));
#line 694 "unneeded_code.m"
                  if (transform_hlds__unneeded_code__succeeded)
#line 694 "unneeded_code.m"
                    {
#line 694 "unneeded_code.m"
                      transform_hlds__unneeded_code___ContainingGoalId_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__GoalContaining0_61, (MR_Integer) 0)));
#line 694 "unneeded_code.m"
                      transform_hlds__unneeded_code__FirstCaseLastStep_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__GoalContaining0_61, (MR_Integer) 1)));
#line 696 "unneeded_code.m"
                      transform_hlds__unneeded_code__succeeded = ((((MR_tag((MR_Word) transform_hlds__unneeded_code__FirstCaseLastStep_63)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__FirstCaseLastStep_63, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 696 "unneeded_code.m"
                      if (transform_hlds__unneeded_code__succeeded)
#line 696 "unneeded_code.m"
                        {
#line 696 "unneeded_code.m"
                          transform_hlds__unneeded_code__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__FirstCaseLastStep_63, (MR_Integer) 1)));
#line 696 "unneeded_code.m"
                          transform_hlds__unneeded_code__MaybeNumAltPrime_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__FirstCaseLastStep_63, (MR_Integer) 2)));
#line 696 "unneeded_code.m"
                        }
#line 694 "unneeded_code.m"
                    }
#line 689 "unneeded_code.m"
                }
#line 699 "unneeded_code.m"
              if (transform_hlds__unneeded_code__succeeded)
#line 698 "unneeded_code.m"
                transform_hlds__unneeded_code__MaybeNumAlt_66 = transform_hlds__unneeded_code__MaybeNumAltPrime_65;
#line 699 "unneeded_code.m"
              else
#line 700 "unneeded_code.m"
                {
#line 700 "unneeded_code.m"
                  {
#line 700 "unneeded_code.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unneeded_code", (MR_String) "predicate \140transform_hlds.unneeded_code.unneeded_process_goal_internal\'/11", (MR_String) "switch count");
#line 700 "unneeded_code.m"
                    return;
                  }
#line 700 "unneeded_code.m"
                }
#line 702 "unneeded_code.m"
              {
#line 702 "unneeded_code.m"
                transform_hlds__unneeded_code__GoalId_67 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__unneeded_code__GoalInfo0_21);
              }
#line 703 "unneeded_code.m"
              {
#line 703 "unneeded_code.m"
                transform_hlds__unneeded_code__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 703 "unneeded_code.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_119_119, 0) = ((MR_Box) (transform_hlds__unneeded_code__MaybeNumAlt_66));
#line 703 "unneeded_code.m"
              }
#line 703 "unneeded_code.m"
              {
#line 703 "unneeded_code.m"
                transform_hlds__unneeded_code__BranchPoint_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 703 "unneeded_code.m"
                MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BranchPoint_68, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalId_67));
#line 703 "unneeded_code.m"
                MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BranchPoint_68, 1) = ((MR_Box) (transform_hlds__unneeded_code__V_119_119));
#line 703 "unneeded_code.m"
              }
#line 7733 "transform_hlds.unneeded_code.c"
              transform_hlds__unneeded_code__TypeCtorInfo_153_153 = (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0;
#line 7735 "transform_hlds.unneeded_code.c"
              transform_hlds__unneeded_code__TypeInfo_154_154 = (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0];
#line 704 "unneeded_code.m"
              {
#line 704 "unneeded_code.m"
                mercury__map__map_values_only_3_p_0(transform_hlds__unneeded_code__TypeCtorInfo_153_153, transform_hlds__unneeded_code__TypeCtorInfo_153_153, transform_hlds__unneeded_code__TypeInfo_154_154, (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[14], transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_88, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_121_121);
              }
#line 705 "unneeded_code.m"
              {
#line 705 "unneeded_code.m"
                mercury__map__init_1_p_0(transform_hlds__unneeded_code__TypeInfo_154_154, transform_hlds__unneeded_code__TypeCtorInfo_153_153, &transform_hlds__unneeded_code__BranchNeededMap0_69);
              }
#line 706 "unneeded_code.m"
              {
#line 706 "unneeded_code.m"
                transform_hlds__unneeded_code__unneeded_process_cases_15_p_0(transform_hlds__unneeded_code__UnneededInfo_12, transform_hlds__unneeded_code__Cases0_51, &transform_hlds__unneeded_code__Cases_70, transform_hlds__unneeded_code__BranchPoint_68, (MR_Integer) 1, transform_hlds__unneeded_code__InitInstMap_15, transform_hlds__unneeded_code__FinalInstMap_16, transform_hlds__unneeded_code__GoalId_67, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_121_121, transform_hlds__unneeded_code__BranchNeededMap0_69, &transform_hlds__unneeded_code__BranchNeededMap_71, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_90, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_91, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_92, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_93);
              }
#line 710 "unneeded_code.m"
              {
#line 710 "unneeded_code.m"
                transform_hlds__unneeded_code__merge_where_needed_maps_5_p_0(transform_hlds__unneeded_code__ContainingGoalMap_52, transform_hlds__unneeded_code__GoalId_67, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_121_121, transform_hlds__unneeded_code__BranchNeededMap_71, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_125_125);
              }
#line 712 "unneeded_code.m"
              {
#line 712 "unneeded_code.m"
                transform_hlds__unneeded_code__demand_var_6_p_0(transform_hlds__unneeded_code__ContainingGoalMap_52, transform_hlds__unneeded_code__GoalId_67, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__unneeded_code__SwitchVar_49, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_125_125, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_89);
              }
#line 714 "unneeded_code.m"
              {
#line 714 "unneeded_code.m"
                transform_hlds__unneeded_code__GoalExpr_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 714 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 714 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_136, 1) = ((MR_Box) (transform_hlds__unneeded_code__SwitchVar_49));
#line 714 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_136, 2) = ((MR_Box) (transform_hlds__unneeded_code__CanFail_50));
#line 714 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_136, 3) = ((MR_Box) (transform_hlds__unneeded_code__Cases_70));
#line 714 "unneeded_code.m"
              }
#line 715 "unneeded_code.m"
              {
#line 715 "unneeded_code.m"
                MR_Word base;
#line 715 "unneeded_code.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 715 "unneeded_code.m"
                *transform_hlds__unneeded_code__Goal_14 = base;
#line 715 "unneeded_code.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalExpr_136));
#line 715 "unneeded_code.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__GoalInfo0_21));
#line 715 "unneeded_code.m"
              }
#line 686 "unneeded_code.m"
            }
#line 670 "unneeded_code.m"
            break;
#line 670 "unneeded_code.m"
          case (MR_Integer) 5:
#line 744 "unneeded_code.m"
            {
#line 744 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Reason_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 1)));
#line 744 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__SomeGoal0_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 2)));
#line 745 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__V_97_97;
#line 745 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__V_85_85;

#line 745 "unneeded_code.m"
              transform_hlds__unneeded_code__succeeded = ((((MR_tag((MR_Word) transform_hlds__unneeded_code__Reason_83)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__Reason_83, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 745 "unneeded_code.m"
              if (transform_hlds__unneeded_code__succeeded)
#line 745 "unneeded_code.m"
                {
#line 745 "unneeded_code.m"
                  transform_hlds__unneeded_code__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__Reason_83, (MR_Integer) 1)));
#line 745 "unneeded_code.m"
                  transform_hlds__unneeded_code__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__Reason_83, (MR_Integer) 2)));
#line 745 "unneeded_code.m"
                  transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_97_97 == (MR_Integer) 1);
#line 745 "unneeded_code.m"
                }
#line 747 "unneeded_code.m"
              if (transform_hlds__unneeded_code__succeeded)
#line 746 "unneeded_code.m"
                {
#line 746 "unneeded_code.m"
                  *transform_hlds__unneeded_code__Goal_14 = transform_hlds__unneeded_code__Goal0_13;
#line 746 "unneeded_code.m"
                  *transform_hlds__unneeded_code__STATE_VARIABLE_Changed_93 = transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_92;
#line 746 "unneeded_code.m"
                  *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_91 = transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_90;
#line 746 "unneeded_code.m"
                  *transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_89 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_88;
#line 746 "unneeded_code.m"
                }
#line 747 "unneeded_code.m"
              else
#line 750 "unneeded_code.m"
                {
#line 750 "unneeded_code.m"
                  MR_Word transform_hlds__unneeded_code__SomeGoal_86;
#line 750 "unneeded_code.m"
                  MR_Word transform_hlds__unneeded_code__GoalExpr_143;

#line 748 "unneeded_code.m"
                  {
#line 748 "unneeded_code.m"
                    transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(transform_hlds__unneeded_code__UnneededInfo_12, transform_hlds__unneeded_code__SomeGoal0_84, &transform_hlds__unneeded_code__SomeGoal_86, transform_hlds__unneeded_code__InitInstMap_15, transform_hlds__unneeded_code__FinalInstMap_16, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_88, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_89, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_90, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_91, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_92, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_93);
                  }
#line 751 "unneeded_code.m"
                  {
#line 751 "unneeded_code.m"
                    transform_hlds__unneeded_code__GoalExpr_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 751 "unneeded_code.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 751 "unneeded_code.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_143, 1) = ((MR_Box) (transform_hlds__unneeded_code__Reason_83));
#line 751 "unneeded_code.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_143, 2) = ((MR_Box) (transform_hlds__unneeded_code__SomeGoal_86));
#line 751 "unneeded_code.m"
                  }
#line 752 "unneeded_code.m"
                  {
#line 752 "unneeded_code.m"
                    MR_Word base;
#line 752 "unneeded_code.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 752 "unneeded_code.m"
                    *transform_hlds__unneeded_code__Goal_14 = base;
#line 752 "unneeded_code.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalExpr_143));
#line 752 "unneeded_code.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__GoalInfo0_21));
#line 752 "unneeded_code.m"
                  }
#line 750 "unneeded_code.m"
                }
#line 744 "unneeded_code.m"
            }
#line 670 "unneeded_code.m"
            break;
#line 670 "unneeded_code.m"
          case (MR_Integer) 6:
#line 727 "unneeded_code.m"
            {
#line 727 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__TypeCtorInfo_161_161;
#line 727 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Quant_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 1)));
#line 727 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Cond0_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 2)));
#line 727 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Then0_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 3)));
#line 727 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Else0_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr0_20, (MR_Integer) 4)));
#line 727 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Cond_78;
#line 727 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Then_79;
#line 727 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__Else_80;
#line 727 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_106_106;
#line 727 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__GoalExpr_139;
#line 727 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__GoalId_140;
#line 727 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__BranchPoint_141;

#line 728 "unneeded_code.m"
              {
#line 728 "unneeded_code.m"
                transform_hlds__unneeded_code__GoalId_140 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__unneeded_code__GoalInfo0_21);
              }
#line 729 "unneeded_code.m"
              {
#line 729 "unneeded_code.m"
                transform_hlds__unneeded_code__BranchPoint_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 729 "unneeded_code.m"
                MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BranchPoint_141, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalId_140));
#line 729 "unneeded_code.m"
                MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BranchPoint_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 729 "unneeded_code.m"
              }
#line 7925 "transform_hlds.unneeded_code.c"
              transform_hlds__unneeded_code__TypeCtorInfo_161_161 = (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0;
#line 730 "unneeded_code.m"
              {
#line 730 "unneeded_code.m"
                mercury__map__map_values_only_3_p_0(transform_hlds__unneeded_code__TypeCtorInfo_161_161, transform_hlds__unneeded_code__TypeCtorInfo_161_161, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[13], transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_88, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_106_106);
              }
#line 731 "unneeded_code.m"
              {
#line 731 "unneeded_code.m"
                transform_hlds__unneeded_code__unneeded_process_ite_17_p_0(transform_hlds__unneeded_code__UnneededInfo_12, transform_hlds__unneeded_code__Cond0_75, &transform_hlds__unneeded_code__Cond_78, transform_hlds__unneeded_code__Then0_76, &transform_hlds__unneeded_code__Then_79, transform_hlds__unneeded_code__Else0_77, &transform_hlds__unneeded_code__Else_80, transform_hlds__unneeded_code__BranchPoint_141, transform_hlds__unneeded_code__InitInstMap_15, transform_hlds__unneeded_code__FinalInstMap_16, transform_hlds__unneeded_code__GoalId_140, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_106_106, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_89, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_90, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_91, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_92, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_93);
              }
#line 734 "unneeded_code.m"
              {
#line 734 "unneeded_code.m"
                transform_hlds__unneeded_code__GoalExpr_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 734 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 734 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_139, 1) = ((MR_Box) (transform_hlds__unneeded_code__Quant_74));
#line 734 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_139, 2) = ((MR_Box) (transform_hlds__unneeded_code__Cond_78));
#line 734 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_139, 3) = ((MR_Box) (transform_hlds__unneeded_code__Then_79));
#line 734 "unneeded_code.m"
                MR_hl_field(MR_mktag(3), transform_hlds__unneeded_code__GoalExpr_139, 4) = ((MR_Box) (transform_hlds__unneeded_code__Else_80));
#line 734 "unneeded_code.m"
              }
#line 735 "unneeded_code.m"
              {
#line 735 "unneeded_code.m"
                MR_Word base;
#line 735 "unneeded_code.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 735 "unneeded_code.m"
                *transform_hlds__unneeded_code__Goal_14 = base;
#line 735 "unneeded_code.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalExpr_139));
#line 735 "unneeded_code.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__unneeded_code__GoalInfo0_21));
#line 735 "unneeded_code.m"
              }
#line 727 "unneeded_code.m"
            }
#line 670 "unneeded_code.m"
            break;
#line 670 "unneeded_code.m"
          case (MR_Integer) 7:
#line 755 "unneeded_code.m"
            {
#line 757 "unneeded_code.m"
              {
#line 757 "unneeded_code.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.unneeded_code", (MR_String) "predicate \140transform_hlds.unneeded_code.unneeded_process_goal_internal\'/11", (MR_String) "shorthand");
#line 757 "unneeded_code.m"
                return;
              }
#line 755 "unneeded_code.m"
            }
#line 670 "unneeded_code.m"
            break;
#line 670 "unneeded_code.m"
        }
#line 670 "unneeded_code.m"
        break;
#line 670 "unneeded_code.m"
    }
#line 659 "unneeded_code.m"
  }
#line 653 "unneeded_code.m"
}

#line 647 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__demand_var_everywhere_2_p_0(
#line 647 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code___WhereNeeded0_3,
#line 647 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__HeadVar__2_2)
#line 647 "unneeded_code.m"
{
#line 649 "unneeded_code.m"
  {
#line 649 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 649 "unneeded_code.m"
    {
#line 649 "unneeded_code.m"
      transform_hlds__unneeded_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_109_97_110_100_95_118_97_114_95_101_118_101_114_121_119_104_101_114_101_95_95_91_49_93_95_48_2_p_0(transform_hlds__unneeded_code__HeadVar__2_2);
#line 649 "unneeded_code.m"
      return;
    }
#line 649 "unneeded_code.m"
  }
#line 647 "unneeded_code.m"
}

#line 639 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__undemand_var_3_p_0(
#line 639 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Var_4,
#line 639 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_6,
#line 639 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_7)
#line 639 "unneeded_code.m"
{
#line 643 "unneeded_code.m"
  {
#line 643 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;

#line 643 "unneeded_code.m"
    {
#line 643 "unneeded_code.m"
      mercury__map__delete_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, ((MR_Box) (transform_hlds__unneeded_code__Var_4)), transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_6, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_7);
#line 643 "unneeded_code.m"
      return;
    }
#line 643 "unneeded_code.m"
  }
#line 639 "unneeded_code.m"
}

#line 626 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__demand_var_6_p_0(
#line 626 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_7,
#line 626 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_8,
#line 626 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__WhereNeeded_9,
#line 626 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Var_10,
#line 626 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_14,
#line 626 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_15)
#line 626 "unneeded_code.m"
{
#line 635 "unneeded_code.m"
  {
#line 635 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 635 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Where0_12;
#line 631 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__conv0_Where0_12;

#line 631 "unneeded_code.m"
    {
#line 631 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_14, ((MR_Box) (transform_hlds__unneeded_code__Var_10)), &transform_hlds__unneeded_code__conv0_Where0_12);
    }
#line 631 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 631 "unneeded_code.m"
      {
#line 631 "unneeded_code.m"
        transform_hlds__unneeded_code__Where0_12 = ((MR_Word) transform_hlds__unneeded_code__conv0_Where0_12);
#line 631 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 631 "unneeded_code.m"
      }
#line 635 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 633 "unneeded_code.m"
      {
#line 633 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Where_13;

#line 1122 "unneeded_code.m"
        if ((transform_hlds__unneeded_code__WhereNeeded_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1123 "unneeded_code.m"
          transform_hlds__unneeded_code__Where_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1122 "unneeded_code.m"
        else
#line 1125 "unneeded_code.m"
          {
#line 1125 "unneeded_code.m"
            MR_Word transform_hlds__unneeded_code__BranchesA_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__WhereNeeded_9, (MR_Integer) 0)));

#line 1129 "unneeded_code.m"
            if ((transform_hlds__unneeded_code__Where0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1128 "unneeded_code.m"
              transform_hlds__unneeded_code__Where_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1129 "unneeded_code.m"
            else
#line 1130 "unneeded_code.m"
              {
#line 1130 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__BranchesB_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__Where0_12, (MR_Integer) 0)));
#line 1130 "unneeded_code.m"
                MR_Word transform_hlds__unneeded_code__BranchesList_36;

#line 1143 "unneeded_code.m"
                {
#line 1143 "unneeded_code.m"
                  mercury__map__to_assoc_list_2_p_0((MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2], transform_hlds__unneeded_code__BranchesA_29, &transform_hlds__unneeded_code__BranchesList_36);
                }
#line 1144 "unneeded_code.m"
                {
#line 1144 "unneeded_code.m"
                  transform_hlds__unneeded_code__where_needed_branches_upper_bound_2_5_p_0(transform_hlds__unneeded_code__ContainingGoalMap_7, transform_hlds__unneeded_code__CurrentId_8, transform_hlds__unneeded_code__BranchesList_36, transform_hlds__unneeded_code__BranchesB_30, &transform_hlds__unneeded_code__Where_13);
                }
#line 1130 "unneeded_code.m"
              }
#line 1125 "unneeded_code.m"
          }
#line 634 "unneeded_code.m"
        {
#line 634 "unneeded_code.m"
          mercury__map__det_update_4_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, ((MR_Box) (transform_hlds__unneeded_code__Var_10)), ((MR_Box) (transform_hlds__unneeded_code__Where_13)), transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_14, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_15);
#line 634 "unneeded_code.m"
          return;
        }
#line 633 "unneeded_code.m"
      }
#line 635 "unneeded_code.m"
    else
#line 636 "unneeded_code.m"
      {
#line 636 "unneeded_code.m"
        {
#line 636 "unneeded_code.m"
          mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, ((MR_Box) (transform_hlds__unneeded_code__Var_10)), ((MR_Box) (transform_hlds__unneeded_code__WhereNeeded_9)), transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_14, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_15);
#line 636 "unneeded_code.m"
          return;
        }
#line 636 "unneeded_code.m"
      }
#line 635 "unneeded_code.m"
  }
#line 626 "unneeded_code.m"
}

#line 617 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__nonlocal_is_virgin_output_3_p_0(
#line 617 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ModuleInfo_4,
#line 617 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InstMap_5,
#line 617 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Var_6)
#line 617 "unneeded_code.m"
{
#line 620 "unneeded_code.m"
  {
#line 620 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 620 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Inst_7;

#line 621 "unneeded_code.m"
    {
#line 621 "unneeded_code.m"
      hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__unneeded_code__InstMap_5, transform_hlds__unneeded_code__Var_6, &transform_hlds__unneeded_code__Inst_7);
    }
#line 622 "unneeded_code.m"
    {
#line 622 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(transform_hlds__unneeded_code__ModuleInfo_4, transform_hlds__unneeded_code__Inst_7);
    }
#line 622 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 620 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 620 "unneeded_code.m"
  }
#line 617 "unneeded_code.m"
}

#line 597 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__nonlocal_may_be_input_3_p_0(
#line 597 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ModuleInfo_4,
#line 597 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InstMap_5,
#line 597 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Var_6)
#line 597 "unneeded_code.m"
{
#line 600 "unneeded_code.m"
  {
#line 600 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 600 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Inst_7;

#line 601 "unneeded_code.m"
    {
#line 601 "unneeded_code.m"
      hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__unneeded_code__InstMap_5, transform_hlds__unneeded_code__Var_6, &transform_hlds__unneeded_code__Inst_7);
    }
#line 602 "unneeded_code.m"
    {
#line 602 "unneeded_code.m"
      return transform_hlds__unneeded_code__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(transform_hlds__unneeded_code__ModuleInfo_4, transform_hlds__unneeded_code__Inst_7);
    }
#line 600 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 600 "unneeded_code.m"
  }
#line 597 "unneeded_code.m"
}

#line 594 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__demand_inputs_6_p_0_2(
#line 594 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 594 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 594 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 594 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_3)
#line 594 "unneeded_code.m"
{
#line 594 "unneeded_code.m"
  {
#line 594 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;
#line 594 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__conv0_STATE_VARIABLE_WhereNeededMap_15;

#line 594 "unneeded_code.m"
    {
#line 594 "unneeded_code.m"
      transform_hlds__unneeded_code__demand_var_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), &transform_hlds__unneeded_code__conv0_STATE_VARIABLE_WhereNeededMap_15);
    }
#line 594 "unneeded_code.m"
    *transform_hlds__unneeded_code__wrapper_arg_3 = ((MR_Box) (transform_hlds__unneeded_code__conv0_STATE_VARIABLE_WhereNeededMap_15));
#line 594 "unneeded_code.m"
  }
#line 594 "unneeded_code.m"
}

#line 591 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__demand_inputs_6_p_0_1(
#line 591 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 591 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1)
#line 591 "unneeded_code.m"
{
#line 591 "unneeded_code.m"
  {
#line 591 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 591 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;

#line 591 "unneeded_code.m"
    {
#line 591 "unneeded_code.m"
      return transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code__nonlocal_may_be_input_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1));
    }
#line 591 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 591 "unneeded_code.m"
  }
#line 591 "unneeded_code.m"
}

#line 582 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__demand_inputs_6_p_0(
#line 582 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_7,
#line 582 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal_8,
#line 582 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_9,
#line 582 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__WhereNeeded_10,
#line 582 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_20,
#line 582 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_21)
#line 582 "unneeded_code.m"
{
#line 585 "unneeded_code.m"
  {
#line 585 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 585 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__TypeInfo_33_33;
#line 585 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal_8, (MR_Integer) 1)));
#line 585 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__NonLocalSet_14;
#line 585 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__GoalId_15;
#line 585 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__NonLocals_16;
#line 585 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__ModuleInfo_17;
#line 585 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Inputs_18;
#line 585 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__ContainingGoalMap_19;
#line 585 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_22_22;
#line 585 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_23_23;
#line 586 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal_8, (MR_Integer) 0)));
#line 590 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_25_25;
#line 590 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_26_26;
#line 590 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_27_27;
#line 593 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_28_28;
#line 593 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_29_29;
#line 593 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_30_30;
#line 594 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__conv1_STATE_VARIABLE_WhereNeededMap_21;

#line 587 "unneeded_code.m"
    {
#line 587 "unneeded_code.m"
      transform_hlds__unneeded_code__NonLocalSet_14 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__unneeded_code__GoalInfo_13);
    }
#line 588 "unneeded_code.m"
    {
#line 588 "unneeded_code.m"
      transform_hlds__unneeded_code__GoalId_15 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__unneeded_code__GoalInfo_13);
    }
#line 589 "unneeded_code.m"
    {
#line 589 "unneeded_code.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__unneeded_code__NonLocalSet_14, &transform_hlds__unneeded_code__NonLocals_16);
    }
#line 590 "unneeded_code.m"
    transform_hlds__unneeded_code__ModuleInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 0)));
#line 590 "unneeded_code.m"
    transform_hlds__unneeded_code__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 1)));
#line 590 "unneeded_code.m"
    transform_hlds__unneeded_code__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 2)));
#line 590 "unneeded_code.m"
    transform_hlds__unneeded_code__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 3)));
#line 591 "unneeded_code.m"
    {
#line 591 "unneeded_code.m"
      transform_hlds__unneeded_code__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 591 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_22_22, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_3[1]));
#line 591 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_22_22, 1) = ((MR_Box) (transform_hlds__unneeded_code__demand_inputs_6_p_0_1));
#line 591 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 591 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_22_22, 3) = ((MR_Box) (transform_hlds__unneeded_code__ModuleInfo_17));
#line 591 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_22_22, 4) = ((MR_Box) (transform_hlds__unneeded_code__InitInstMap_9));
#line 591 "unneeded_code.m"
    }
#line 8393 "transform_hlds.unneeded_code.c"
    transform_hlds__unneeded_code__TypeInfo_33_33 = (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0];
#line 591 "unneeded_code.m"
    {
#line 591 "unneeded_code.m"
      mercury__list__filter_3_p_0(transform_hlds__unneeded_code__TypeInfo_33_33, transform_hlds__unneeded_code__V_22_22, transform_hlds__unneeded_code__NonLocals_16, &transform_hlds__unneeded_code__Inputs_18);
    }
#line 593 "unneeded_code.m"
    transform_hlds__unneeded_code__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 0)));
#line 593 "unneeded_code.m"
    transform_hlds__unneeded_code__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 1)));
#line 593 "unneeded_code.m"
    transform_hlds__unneeded_code__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 2)));
#line 593 "unneeded_code.m"
    transform_hlds__unneeded_code__ContainingGoalMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 3)));
#line 594 "unneeded_code.m"
    {
#line 594 "unneeded_code.m"
      transform_hlds__unneeded_code__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 594 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_23_23, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_8[1]));
#line 594 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_23_23, 1) = ((MR_Box) (transform_hlds__unneeded_code__demand_inputs_6_p_0_2));
#line 594 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 594 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_23_23, 3) = ((MR_Box) (transform_hlds__unneeded_code__ContainingGoalMap_19));
#line 594 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_23_23, 4) = ((MR_Box) (transform_hlds__unneeded_code__GoalId_15));
#line 594 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_23_23, 5) = ((MR_Box) (transform_hlds__unneeded_code__WhereNeeded_10));
#line 594 "unneeded_code.m"
    }
#line 594 "unneeded_code.m"
    {
#line 594 "unneeded_code.m"
      mercury__list__foldl_4_p_0(transform_hlds__unneeded_code__TypeInfo_33_33, (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[0], transform_hlds__unneeded_code__V_23_23, transform_hlds__unneeded_code__Inputs_18, ((MR_Box) (transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_20)), &transform_hlds__unneeded_code__conv1_STATE_VARIABLE_WhereNeededMap_21);
    }
#line 594 "unneeded_code.m"
    *transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_21 = ((MR_Word) transform_hlds__unneeded_code__conv1_STATE_VARIABLE_WhereNeededMap_21);
#line 585 "unneeded_code.m"
  }
#line 582 "unneeded_code.m"
}

#line 496 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__collect_where_needed_6_p_0(
#line 496 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ContainingGoalMap_7,
#line 496 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__CurrentId_8,
#line 496 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__WhereNeededMap_9,
#line 496 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__ChangedVar_10,
#line 496 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_0_13,
#line 496 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_14)
#line 496 "unneeded_code.m"
{
#line 505 "unneeded_code.m"
  {
#line 505 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 505 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Where_12;
#line 502 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__conv0_Where_12;

#line 502 "unneeded_code.m"
    {
#line 502 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, transform_hlds__unneeded_code__WhereNeededMap_9, ((MR_Box) (transform_hlds__unneeded_code__ChangedVar_10)), &transform_hlds__unneeded_code__conv0_Where_12);
    }
#line 502 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 502 "unneeded_code.m"
      {
#line 502 "unneeded_code.m"
        transform_hlds__unneeded_code__Where_12 = ((MR_Word) transform_hlds__unneeded_code__conv0_Where_12);
#line 502 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 502 "unneeded_code.m"
      }
#line 505 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 1122 "unneeded_code.m"
      if ((transform_hlds__unneeded_code__Where_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1123 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1122 "unneeded_code.m"
      else
#line 1125 "unneeded_code.m"
        {
#line 1125 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__BranchesA_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__Where_12, (MR_Integer) 0)));

#line 1129 "unneeded_code.m"
          if ((transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1128 "unneeded_code.m"
            *transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1129 "unneeded_code.m"
          else
#line 1130 "unneeded_code.m"
            {
#line 1130 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__BranchesB_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_0_13, (MR_Integer) 0)));
#line 1130 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__BranchesList_30;

#line 1143 "unneeded_code.m"
              {
#line 1143 "unneeded_code.m"
                mercury__map__to_assoc_list_2_p_0((MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2], transform_hlds__unneeded_code__BranchesA_23, &transform_hlds__unneeded_code__BranchesList_30);
              }
#line 1144 "unneeded_code.m"
              {
#line 1144 "unneeded_code.m"
                transform_hlds__unneeded_code__where_needed_branches_upper_bound_2_5_p_0(transform_hlds__unneeded_code__ContainingGoalMap_7, transform_hlds__unneeded_code__CurrentId_8, transform_hlds__unneeded_code__BranchesList_30, transform_hlds__unneeded_code__BranchesB_24, transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_14);
#line 1144 "unneeded_code.m"
                return;
              }
#line 1130 "unneeded_code.m"
            }
#line 1125 "unneeded_code.m"
        }
#line 505 "unneeded_code.m"
    else
#line 505 "unneeded_code.m"
      *transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_14 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_0_13;
#line 505 "unneeded_code.m"
  }
#line 496 "unneeded_code.m"
}

#line 551 "unneeded_code.m"
static MR_Box MR_CALL 
transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_3(
#line 551 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 551 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 551 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2)
#line 551 "unneeded_code.m"
{
#line 551 "unneeded_code.m"
  {
#line 551 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__wrapper_arg_3;
#line 551 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;
#line 551 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__conv3_HeadVar__3_3;

#line 551 "unneeded_code.m"
    {
#line 551 "unneeded_code.m"
      transform_hlds__unneeded_code__conv3_HeadVar__3_3 = mercury__int__plus_2_f_0(((MR_Integer) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Integer) transform_hlds__unneeded_code__wrapper_arg_2));
    }
#line 551 "unneeded_code.m"
    transform_hlds__unneeded_code__wrapper_arg_3 = ((MR_Box) (transform_hlds__unneeded_code__conv3_HeadVar__3_3));
#line 551 "unneeded_code.m"
    return transform_hlds__unneeded_code__wrapper_arg_3;
#line 551 "unneeded_code.m"
  }
#line 551 "unneeded_code.m"
}

#line 550 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_2(
#line 550 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 550 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 550 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_2)
#line 550 "unneeded_code.m"
{
#line 550 "unneeded_code.m"
  {
#line 550 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;
#line 550 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__conv2_HeadVar__2_41;

#line 550 "unneeded_code.m"
    {
#line 550 "unneeded_code.m"
      transform_hlds__unneeded_code__IntroducedFrom__pred__adjust_where_needed__550__1_2_p_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), &transform_hlds__unneeded_code__conv2_HeadVar__2_41);
    }
#line 550 "unneeded_code.m"
    *transform_hlds__unneeded_code__wrapper_arg_2 = ((MR_Box) (transform_hlds__unneeded_code__conv2_HeadVar__2_41));
#line 550 "unneeded_code.m"
  }
#line 550 "unneeded_code.m"
}

#line 491 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_1(
#line 491 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 491 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 491 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 491 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_3)
#line 491 "unneeded_code.m"
{
#line 491 "unneeded_code.m"
  {
#line 491 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;
#line 491 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__conv0_STATE_VARIABLE_WhereInfo_14;

#line 491 "unneeded_code.m"
    {
#line 491 "unneeded_code.m"
      transform_hlds__unneeded_code__collect_where_needed_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), &transform_hlds__unneeded_code__conv0_STATE_VARIABLE_WhereInfo_14);
    }
#line 491 "unneeded_code.m"
    *transform_hlds__unneeded_code__wrapper_arg_3 = ((MR_Box) (transform_hlds__unneeded_code__conv0_STATE_VARIABLE_WhereInfo_14));
#line 491 "unneeded_code.m"
  }
#line 491 "unneeded_code.m"
}

#line 474 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0(
#line 474 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_7,
#line 474 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal_8,
#line 474 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_9,
#line 474 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__FinalInstMap_10,
#line 474 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__WhereNeededMap_11,
#line 474 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_23)
#line 474 "unneeded_code.m"
{
#line 479 "unneeded_code.m"
  {
#line 479 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 479 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 0)));
#line 479 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__VarTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 1)));
#line 479 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__ChangedVarSet_15;
#line 479 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__ChangedVars_16;
#line 479 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Empty_17;
#line 479 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__GoalInfo_19;
#line 479 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__CurrentId_20;
#line 479 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__ContainingGoalMap_21;
#line 479 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Options_22;
#line 479 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_24_24;
#line 479 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_25_25;
#line 479 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_26_26;
#line 480 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 2)));
#line 480 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 3)));
#line 487 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_18_18;
#line 489 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_34_34;
#line 489 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_35_35;
#line 489 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_36_36;
#line 490 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__conv1_STATE_VARIABLE_WhereInfo_26_26;
#line 493 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_37_37;
#line 493 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_38_38;
#line 493 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_39_39;
#line 519 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__GoalExpr_53;
#line 519 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__GoalInfo_54;

#line 482 "unneeded_code.m"
    {
#line 482 "unneeded_code.m"
      hlds__instmap__instmap_changed_vars_5_p_0(transform_hlds__unneeded_code__InitInstMap_9, transform_hlds__unneeded_code__FinalInstMap_10, transform_hlds__unneeded_code__VarTypes_14, transform_hlds__unneeded_code__ModuleInfo_13, &transform_hlds__unneeded_code__ChangedVarSet_15);
    }
#line 484 "unneeded_code.m"
    {
#line 484 "unneeded_code.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__unneeded_code__ChangedVarSet_15, &transform_hlds__unneeded_code__ChangedVars_16);
    }
#line 485 "unneeded_code.m"
    {
#line 485 "unneeded_code.m"
      mercury__map__init_1_p_0((MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2], &transform_hlds__unneeded_code__Empty_17);
    }
#line 486 "unneeded_code.m"
    {
#line 486 "unneeded_code.m"
      transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 486 "unneeded_code.m"
      MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_24_24, 0) = ((MR_Box) (transform_hlds__unneeded_code__Empty_17));
#line 486 "unneeded_code.m"
    }
#line 487 "unneeded_code.m"
    transform_hlds__unneeded_code__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal_8, (MR_Integer) 0)));
#line 487 "unneeded_code.m"
    transform_hlds__unneeded_code__GoalInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal_8, (MR_Integer) 1)));
#line 488 "unneeded_code.m"
    {
#line 488 "unneeded_code.m"
      transform_hlds__unneeded_code__CurrentId_20 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__unneeded_code__GoalInfo_19);
    }
#line 489 "unneeded_code.m"
    transform_hlds__unneeded_code__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 0)));
#line 489 "unneeded_code.m"
    transform_hlds__unneeded_code__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 1)));
#line 489 "unneeded_code.m"
    transform_hlds__unneeded_code__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 2)));
#line 489 "unneeded_code.m"
    transform_hlds__unneeded_code__ContainingGoalMap_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 3)));
#line 491 "unneeded_code.m"
    {
#line 491 "unneeded_code.m"
      transform_hlds__unneeded_code__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 491 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_25_25, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_8[0]));
#line 491 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_25_25, 1) = ((MR_Box) (transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0_1));
#line 491 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 491 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_25_25, 3) = ((MR_Box) (transform_hlds__unneeded_code__ContainingGoalMap_21));
#line 491 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_25_25, 4) = ((MR_Box) (transform_hlds__unneeded_code__CurrentId_20));
#line 491 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_25_25, 5) = ((MR_Box) (transform_hlds__unneeded_code__WhereNeededMap_11));
#line 491 "unneeded_code.m"
    }
#line 490 "unneeded_code.m"
    {
#line 490 "unneeded_code.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, transform_hlds__unneeded_code__V_25_25, transform_hlds__unneeded_code__ChangedVars_16, ((MR_Box) (transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_24_24)), &transform_hlds__unneeded_code__conv1_STATE_VARIABLE_WhereInfo_26_26);
    }
#line 490 "unneeded_code.m"
    transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_26_26 = ((MR_Word) transform_hlds__unneeded_code__conv1_STATE_VARIABLE_WhereInfo_26_26);
#line 493 "unneeded_code.m"
    transform_hlds__unneeded_code__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 0)));
#line 493 "unneeded_code.m"
    transform_hlds__unneeded_code__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 1)));
#line 493 "unneeded_code.m"
    transform_hlds__unneeded_code__Options_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 2)));
#line 493 "unneeded_code.m"
    transform_hlds__unneeded_code__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_7, (MR_Integer) 3)));
#line 519 "unneeded_code.m"
    transform_hlds__unneeded_code__GoalExpr_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal_8, (MR_Integer) 0)));
#line 519 "unneeded_code.m"
    transform_hlds__unneeded_code__GoalInfo_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal_8, (MR_Integer) 1)));
#line 524 "unneeded_code.m"
    {
#line 524 "unneeded_code.m"
      MR_Word transform_hlds__unneeded_code__Detism_55;

#line 524 "unneeded_code.m"
      {
#line 524 "unneeded_code.m"
        transform_hlds__unneeded_code__Detism_55 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__unneeded_code__GoalInfo_54);
      }
#line 571 "unneeded_code.m"
#line 571 "unneeded_code.m"
      switch (transform_hlds__unneeded_code__Detism_55) {
#line 571 "unneeded_code.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 571 "unneeded_code.m"
        case (MR_Integer) 4:
#line 578 "unneeded_code.m"
          {
#line 525 "unneeded_code.m"
            transform_hlds__unneeded_code__succeeded = ((MR_Integer) 0 == (MR_Integer) 1);
#line 578 "unneeded_code.m"
          }
#line 571 "unneeded_code.m"
          break;
#line 571 "unneeded_code.m"
        case (MR_Integer) 5:
#line 577 "unneeded_code.m"
          {
#line 525 "unneeded_code.m"
            transform_hlds__unneeded_code__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 577 "unneeded_code.m"
          }
#line 571 "unneeded_code.m"
          break;
#line 571 "unneeded_code.m"
        case (MR_Integer) 0:
#line 571 "unneeded_code.m"
          {
#line 525 "unneeded_code.m"
            transform_hlds__unneeded_code__succeeded = ((MR_Integer) 0 == (MR_Integer) 1);
#line 571 "unneeded_code.m"
          }
#line 571 "unneeded_code.m"
          break;
#line 571 "unneeded_code.m"
        case (MR_Integer) 6:
#line 575 "unneeded_code.m"
          {
#line 525 "unneeded_code.m"
            transform_hlds__unneeded_code__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 575 "unneeded_code.m"
          }
#line 571 "unneeded_code.m"
          break;
#line 571 "unneeded_code.m"
        case (MR_Integer) 7:
#line 576 "unneeded_code.m"
          {
#line 525 "unneeded_code.m"
            transform_hlds__unneeded_code__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 576 "unneeded_code.m"
          }
#line 571 "unneeded_code.m"
          break;
#line 571 "unneeded_code.m"
        case (MR_Integer) 2:
#line 574 "unneeded_code.m"
          {
#line 525 "unneeded_code.m"
            transform_hlds__unneeded_code__succeeded = ((MR_Integer) 0 == (MR_Integer) 1);
#line 574 "unneeded_code.m"
          }
#line 571 "unneeded_code.m"
          break;
#line 571 "unneeded_code.m"
        case (MR_Integer) 3:
#line 573 "unneeded_code.m"
          {
#line 525 "unneeded_code.m"
            transform_hlds__unneeded_code__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 573 "unneeded_code.m"
          }
#line 571 "unneeded_code.m"
          break;
#line 571 "unneeded_code.m"
        case (MR_Integer) 1:
#line 572 "unneeded_code.m"
          {
#line 525 "unneeded_code.m"
            transform_hlds__unneeded_code__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 572 "unneeded_code.m"
          }
#line 571 "unneeded_code.m"
          break;
#line 571 "unneeded_code.m"
      }
#line 524 "unneeded_code.m"
    }
#line 526 "unneeded_code.m"
    if (!(transform_hlds__unneeded_code__succeeded))
#line 526 "unneeded_code.m"
      {
#line 529 "unneeded_code.m"
        {
#line 529 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__V_66_66;

#line 529 "unneeded_code.m"
          {
#line 529 "unneeded_code.m"
            transform_hlds__unneeded_code__V_66_66 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__unneeded_code__GoalInfo_54);
          }
#line 529 "unneeded_code.m"
          transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_66_66 == (MR_Integer) 0);
#line 529 "unneeded_code.m"
          transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 529 "unneeded_code.m"
        }
#line 526 "unneeded_code.m"
        if (!(transform_hlds__unneeded_code__succeeded))
#line 526 "unneeded_code.m"
          {
#line 533 "unneeded_code.m"
            {
#line 533 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_22, (MR_Integer) 0)));
#line 533 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_22, (MR_Integer) 1)));
#line 533 "unneeded_code.m"
              MR_Integer transform_hlds__unneeded_code__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_22, (MR_Integer) 2)));
#line 533 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_22, (MR_Integer) 3)));

#line 533 "unneeded_code.m"
              transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_65_65 == (MR_Integer) 1);
#line 533 "unneeded_code.m"
              if (transform_hlds__unneeded_code__succeeded)
#line 534 "unneeded_code.m"
                {
#line 534 "unneeded_code.m"
                  transform_hlds__unneeded_code__succeeded = hlds__goal_form__goal_can_loop_or_throw_1_p_0(transform_hlds__unneeded_code__Goal_8);
                }
#line 533 "unneeded_code.m"
            }
#line 526 "unneeded_code.m"
            if (!(transform_hlds__unneeded_code__succeeded))
#line 526 "unneeded_code.m"
              {
#line 538 "unneeded_code.m"
                {
#line 538 "unneeded_code.m"
                  MR_Word transform_hlds__unneeded_code__BranchMap_56;
#line 538 "unneeded_code.m"
                  MR_Word transform_hlds__unneeded_code__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_22, (MR_Integer) 1)));
#line 538 "unneeded_code.m"
                  MR_Word transform_hlds__unneeded_code__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_22, (MR_Integer) 0)));
#line 538 "unneeded_code.m"
                  MR_Integer transform_hlds__unneeded_code__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_22, (MR_Integer) 2)));
#line 538 "unneeded_code.m"
                  MR_Word transform_hlds__unneeded_code__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_22, (MR_Integer) 3)));
#line 541 "unneeded_code.m"
                  MR_Word transform_hlds__unneeded_code__TypeCtorInfo_36_79;
#line 541 "unneeded_code.m"
                  MR_Word transform_hlds__unneeded_code__TypeInfo_37_80;

#line 538 "unneeded_code.m"
                  transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_64_64 == (MR_Integer) 0);
#line 538 "unneeded_code.m"
                  if (transform_hlds__unneeded_code__succeeded)
#line 538 "unneeded_code.m"
                    {
#line 539 "unneeded_code.m"
                      {
#line 539 "unneeded_code.m"
                        transform_hlds__unneeded_code__succeeded = hlds__goal_form__goal_can_loop_or_throw_1_p_0(transform_hlds__unneeded_code__Goal_8);
                      }
#line 538 "unneeded_code.m"
                      if (transform_hlds__unneeded_code__succeeded)
#line 538 "unneeded_code.m"
                        {
#line 540 "unneeded_code.m"
                          transform_hlds__unneeded_code__succeeded = ((MR_tag((MR_Word) transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 540 "unneeded_code.m"
                          if (transform_hlds__unneeded_code__succeeded)
#line 540 "unneeded_code.m"
                            {
#line 540 "unneeded_code.m"
                              transform_hlds__unneeded_code__BranchMap_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_26_26, (MR_Integer) 0)));
#line 8962 "transform_hlds.unneeded_code.c"
                              transform_hlds__unneeded_code__TypeCtorInfo_36_79 = (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0;
#line 8964 "transform_hlds.unneeded_code.c"
                              transform_hlds__unneeded_code__TypeInfo_37_80 = (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2];
#line 541 "unneeded_code.m"
                              {
#line 541 "unneeded_code.m"
                                transform_hlds__unneeded_code__succeeded = mercury__map__is_empty_1_p_0(transform_hlds__unneeded_code__TypeCtorInfo_36_79, transform_hlds__unneeded_code__TypeInfo_37_80, transform_hlds__unneeded_code__BranchMap_56);
                              }
#line 541 "unneeded_code.m"
                              transform_hlds__unneeded_code__succeeded = !(transform_hlds__unneeded_code__succeeded);
#line 540 "unneeded_code.m"
                            }
#line 538 "unneeded_code.m"
                        }
#line 538 "unneeded_code.m"
                    }
#line 538 "unneeded_code.m"
                }
#line 526 "unneeded_code.m"
                if (!(transform_hlds__unneeded_code__succeeded))
#line 526 "unneeded_code.m"
                  {
#line 546 "unneeded_code.m"
                    {
#line 546 "unneeded_code.m"
                      MR_Word transform_hlds__unneeded_code__V_91_91;

#line 546 "unneeded_code.m"
                      {
#line 546 "unneeded_code.m"
                        transform_hlds__unneeded_code__V_91_91 = hlds__make_goal__true_goal_expr_0_f_0();
                      }
#line 546 "unneeded_code.m"
                      {
#line 546 "unneeded_code.m"
                        transform_hlds__unneeded_code__succeeded = hlds__hlds_goal____Unify____hlds_goal_expr_0_0(transform_hlds__unneeded_code__GoalExpr_53, transform_hlds__unneeded_code__V_91_91);
                      }
#line 546 "unneeded_code.m"
                    }
#line 526 "unneeded_code.m"
                    if (!(transform_hlds__unneeded_code__succeeded))
#line 548 "unneeded_code.m"
                      {
#line 548 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__TypeCtorInfo_38_81;
#line 548 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__TypeInfo_39_82;
#line 548 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__TypeCtorInfo_43_86;
#line 548 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__BranchArms_57;
#line 548 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__BranchArmCounts_58;
#line 548 "unneeded_code.m"
                        MR_Integer transform_hlds__unneeded_code__BranchArmCount_59;
#line 548 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__V_60_60;
#line 548 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__V_61_61;
#line 548 "unneeded_code.m"
                        MR_Integer transform_hlds__unneeded_code__V_62_62;
#line 548 "unneeded_code.m"
                        MR_Integer transform_hlds__unneeded_code__V_63_63;
#line 548 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__BranchMap_69;
#line 551 "unneeded_code.m"
                        MR_Box transform_hlds__unneeded_code__conv4_BranchArmCount_59;
#line 552 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__V_76_76;
#line 552 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__V_77_77;
#line 552 "unneeded_code.m"
                        MR_Word transform_hlds__unneeded_code__V_78_78;

#line 548 "unneeded_code.m"
                        transform_hlds__unneeded_code__succeeded = ((MR_tag((MR_Word) transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 548 "unneeded_code.m"
                        if (transform_hlds__unneeded_code__succeeded)
#line 548 "unneeded_code.m"
                          {
#line 548 "unneeded_code.m"
                            transform_hlds__unneeded_code__BranchMap_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_26_26, (MR_Integer) 0)));
#line 9045 "transform_hlds.unneeded_code.c"
                            transform_hlds__unneeded_code__TypeCtorInfo_38_81 = (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0;
#line 9047 "transform_hlds.unneeded_code.c"
                            transform_hlds__unneeded_code__TypeInfo_39_82 = (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2];
#line 549 "unneeded_code.m"
                            {
#line 549 "unneeded_code.m"
                              mercury__map__values_2_p_0(transform_hlds__unneeded_code__TypeCtorInfo_38_81, transform_hlds__unneeded_code__TypeInfo_39_82, transform_hlds__unneeded_code__BranchMap_69, &transform_hlds__unneeded_code__BranchArms_57);
                            }
#line 550 "unneeded_code.m"
                            transform_hlds__unneeded_code__V_60_60 = (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[10];
#line 9056 "transform_hlds.unneeded_code.c"
                            transform_hlds__unneeded_code__TypeCtorInfo_43_86 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 550 "unneeded_code.m"
                            {
#line 550 "unneeded_code.m"
                              mercury__list__map_3_p_0(transform_hlds__unneeded_code__TypeInfo_39_82, transform_hlds__unneeded_code__TypeCtorInfo_43_86, transform_hlds__unneeded_code__V_60_60, transform_hlds__unneeded_code__BranchArms_57, &transform_hlds__unneeded_code__BranchArmCounts_58);
                            }
#line 551 "unneeded_code.m"
                            transform_hlds__unneeded_code__V_61_61 = (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[11];
#line 551 "unneeded_code.m"
                            transform_hlds__unneeded_code__V_62_62 = (MR_Integer) 0;
#line 551 "unneeded_code.m"
                            {
#line 551 "unneeded_code.m"
                              transform_hlds__unneeded_code__conv4_BranchArmCount_59 = mercury__list__foldl_3_f_0(transform_hlds__unneeded_code__TypeCtorInfo_43_86, transform_hlds__unneeded_code__TypeCtorInfo_43_86, transform_hlds__unneeded_code__V_61_61, transform_hlds__unneeded_code__BranchArmCounts_58, ((MR_Box) (transform_hlds__unneeded_code__V_62_62)));
                            }
#line 551 "unneeded_code.m"
                            transform_hlds__unneeded_code__BranchArmCount_59 = ((MR_Integer) transform_hlds__unneeded_code__conv4_BranchArmCount_59);
#line 552 "unneeded_code.m"
                            transform_hlds__unneeded_code__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_22, (MR_Integer) 0)));
#line 552 "unneeded_code.m"
                            transform_hlds__unneeded_code__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_22, (MR_Integer) 1)));
#line 552 "unneeded_code.m"
                            transform_hlds__unneeded_code__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_22, (MR_Integer) 2)));
#line 552 "unneeded_code.m"
                            transform_hlds__unneeded_code__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_22, (MR_Integer) 3)));
#line 552 "unneeded_code.m"
                            transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__BranchArmCount_59 > transform_hlds__unneeded_code__V_63_63);
#line 548 "unneeded_code.m"
                          }
#line 548 "unneeded_code.m"
                      }
#line 526 "unneeded_code.m"
                  }
#line 526 "unneeded_code.m"
              }
#line 526 "unneeded_code.m"
          }
#line 526 "unneeded_code.m"
      }
#line 565 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 564 "unneeded_code.m"
      *transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 565 "unneeded_code.m"
    else
#line 565 "unneeded_code.m"
      *transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_23 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereInfo_26_26;
#line 479 "unneeded_code.m"
  }
#line 474 "unneeded_code.m"
}

#line 459 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__insert_branch_arm_into_refined_goals_5_p_0(
#line 459 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal_6,
#line 459 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__GoalPath_7,
#line 459 "unneeded_code.m"
  MR_Integer transform_hlds__unneeded_code__BranchNum_8,
#line 459 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_13,
#line 459 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_14)
#line 459 "unneeded_code.m"
{
#line 463 "unneeded_code.m"
  {
#line 463 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 463 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Key_10;
#line 468 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Goals0_11;
#line 465 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__conv0_Goals0_11;

#line 464 "unneeded_code.m"
    {
#line 464 "unneeded_code.m"
      transform_hlds__unneeded_code__Key_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 464 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Key_10, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalPath_7));
#line 464 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Key_10, 1) = ((MR_Box) (transform_hlds__unneeded_code__BranchNum_8));
#line 464 "unneeded_code.m"
    }
#line 465 "unneeded_code.m"
    {
#line 465 "unneeded_code.m"
      transform_hlds__unneeded_code__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1], transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_13, ((MR_Box) (transform_hlds__unneeded_code__Key_10)), &transform_hlds__unneeded_code__conv0_Goals0_11);
    }
#line 465 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 465 "unneeded_code.m"
      {
#line 465 "unneeded_code.m"
        transform_hlds__unneeded_code__Goals0_11 = ((MR_Word) transform_hlds__unneeded_code__conv0_Goals0_11);
#line 465 "unneeded_code.m"
        transform_hlds__unneeded_code__succeeded = MR_TRUE;
#line 465 "unneeded_code.m"
      }
#line 468 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 466 "unneeded_code.m"
      {
#line 466 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Goals_12;

#line 466 "unneeded_code.m"
        {
#line 466 "unneeded_code.m"
          transform_hlds__unneeded_code__Goals_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__Goals_12, 0) = ((MR_Box) (transform_hlds__unneeded_code__Goal_6));
#line 466 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__Goals_12, 1) = ((MR_Box) (transform_hlds__unneeded_code__Goals0_11));
#line 466 "unneeded_code.m"
        }
#line 467 "unneeded_code.m"
        {
#line 467 "unneeded_code.m"
          mercury__map__det_update_4_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1], ((MR_Box) (transform_hlds__unneeded_code__Key_10)), ((MR_Box) (transform_hlds__unneeded_code__Goals_12)), transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_13, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_14);
#line 467 "unneeded_code.m"
          return;
        }
#line 466 "unneeded_code.m"
      }
#line 468 "unneeded_code.m"
    else
#line 469 "unneeded_code.m"
      {
#line 469 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_16_16;

#line 469 "unneeded_code.m"
        {
#line 469 "unneeded_code.m"
          transform_hlds__unneeded_code__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_16_16, 0) = ((MR_Box) (transform_hlds__unneeded_code__Goal_6));
#line 469 "unneeded_code.m"
          MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 469 "unneeded_code.m"
        }
#line 469 "unneeded_code.m"
        {
#line 469 "unneeded_code.m"
          mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1], ((MR_Box) (transform_hlds__unneeded_code__Key_10)), ((MR_Box) (transform_hlds__unneeded_code__V_16_16)), transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_13, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_14);
#line 469 "unneeded_code.m"
          return;
        }
#line 469 "unneeded_code.m"
      }
#line 463 "unneeded_code.m"
  }
#line 459 "unneeded_code.m"
}

#line 456 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__insert_branch_into_refined_goals_4_p_0_1(
#line 456 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 456 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 456 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 456 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_3)
#line 456 "unneeded_code.m"
{
#line 456 "unneeded_code.m"
  {
#line 456 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;
#line 456 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__conv0_STATE_VARIABLE_RefinedGoals_14;

#line 456 "unneeded_code.m"
    {
#line 456 "unneeded_code.m"
      transform_hlds__unneeded_code__insert_branch_arm_into_refined_goals_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 4))), ((MR_Integer) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), &transform_hlds__unneeded_code__conv0_STATE_VARIABLE_RefinedGoals_14);
    }
#line 456 "unneeded_code.m"
    *transform_hlds__unneeded_code__wrapper_arg_3 = ((MR_Box) (transform_hlds__unneeded_code__conv0_STATE_VARIABLE_RefinedGoals_14));
#line 456 "unneeded_code.m"
  }
#line 456 "unneeded_code.m"
}

#line 448 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__insert_branch_into_refined_goals_4_p_0(
#line 448 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal_5,
#line 448 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__HeadVar__2_2,
#line 448 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_12,
#line 448 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_13)
#line 448 "unneeded_code.m"
{
#line 453 "unneeded_code.m"
  {
#line 453 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 453 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 453 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__BranchPoint_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 0)));
#line 453 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__BranchNumSet_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__HeadVar__2_2, (MR_Integer) 1)));
#line 453 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__GoalPath_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BranchPoint_6, (MR_Integer) 0)));
#line 453 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__BranchNums_11;
#line 453 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_14_14;
#line 454 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__BranchPoint_6, (MR_Integer) 1)));
#line 456 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__conv1_STATE_VARIABLE_RefinedGoals_13;

#line 455 "unneeded_code.m"
    {
#line 455 "unneeded_code.m"
      mercury__set__to_sorted_list_2_p_0(transform_hlds__unneeded_code__TypeCtorInfo_16_16, transform_hlds__unneeded_code__BranchNumSet_7, &transform_hlds__unneeded_code__BranchNums_11);
    }
#line 456 "unneeded_code.m"
    {
#line 456 "unneeded_code.m"
      transform_hlds__unneeded_code__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 456 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_14_14, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_7[0]));
#line 456 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_14_14, 1) = ((MR_Box) (transform_hlds__unneeded_code__insert_branch_into_refined_goals_4_p_0_1));
#line 456 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 456 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_14_14, 3) = ((MR_Box) (transform_hlds__unneeded_code__Goal_5));
#line 456 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_14_14, 4) = ((MR_Box) (transform_hlds__unneeded_code__GoalPath_9));
#line 456 "unneeded_code.m"
    }
#line 456 "unneeded_code.m"
    {
#line 456 "unneeded_code.m"
      mercury__list__foldl_4_p_0(transform_hlds__unneeded_code__TypeCtorInfo_16_16, (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[3], transform_hlds__unneeded_code__V_14_14, transform_hlds__unneeded_code__BranchNums_11, ((MR_Box) (transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_12)), &transform_hlds__unneeded_code__conv1_STATE_VARIABLE_RefinedGoals_13);
    }
#line 456 "unneeded_code.m"
    *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_13 = ((MR_Word) transform_hlds__unneeded_code__conv1_STATE_VARIABLE_RefinedGoals_13);
#line 453 "unneeded_code.m"
  }
#line 448 "unneeded_code.m"
}

#line 443 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_4(
#line 443 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 443 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 443 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_2)
#line 443 "unneeded_code.m"
{
#line 443 "unneeded_code.m"
  {
#line 443 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;
#line 443 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__conv4_HeadVar__2_2;

#line 443 "unneeded_code.m"
    {
#line 443 "unneeded_code.m"
      transform_hlds__unneeded_code__demand_var_everywhere_2_p_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), &transform_hlds__unneeded_code__conv4_HeadVar__2_2);
    }
#line 443 "unneeded_code.m"
    *transform_hlds__unneeded_code__wrapper_arg_2 = ((MR_Box) (transform_hlds__unneeded_code__conv4_HeadVar__2_2));
#line 443 "unneeded_code.m"
  }
#line 443 "unneeded_code.m"
}

#line 615 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_3(
#line 615 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 615 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 615 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 615 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_3)
#line 615 "unneeded_code.m"
{
#line 615 "unneeded_code.m"
  {
#line 615 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;
#line 615 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__conv2_STATE_VARIABLE_WhereNeededMap_7;

#line 615 "unneeded_code.m"
    {
#line 615 "unneeded_code.m"
      transform_hlds__unneeded_code__undemand_var_3_p_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), &transform_hlds__unneeded_code__conv2_STATE_VARIABLE_WhereNeededMap_7);
    }
#line 615 "unneeded_code.m"
    *transform_hlds__unneeded_code__wrapper_arg_3 = ((MR_Box) (transform_hlds__unneeded_code__conv2_STATE_VARIABLE_WhereNeededMap_7));
#line 615 "unneeded_code.m"
  }
#line 615 "unneeded_code.m"
}

#line 613 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_2(
#line 613 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 613 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1)
#line 613 "unneeded_code.m"
{
#line 613 "unneeded_code.m"
  {
#line 613 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 613 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;

#line 613 "unneeded_code.m"
    {
#line 613 "unneeded_code.m"
      return transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code__nonlocal_is_virgin_output_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1));
    }
#line 613 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 613 "unneeded_code.m"
  }
#line 613 "unneeded_code.m"
}

#line 415 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_1(
#line 415 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 415 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 415 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 415 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_3)
#line 415 "unneeded_code.m"
{
#line 415 "unneeded_code.m"
  {
#line 415 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;
#line 415 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__conv0_STATE_VARIABLE_RefinedGoals_13;

#line 415 "unneeded_code.m"
    {
#line 415 "unneeded_code.m"
      transform_hlds__unneeded_code__insert_branch_into_refined_goals_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), &transform_hlds__unneeded_code__conv0_STATE_VARIABLE_RefinedGoals_13);
    }
#line 415 "unneeded_code.m"
    *transform_hlds__unneeded_code__wrapper_arg_3 = ((MR_Box) (transform_hlds__unneeded_code__conv0_STATE_VARIABLE_RefinedGoals_13));
#line 415 "unneeded_code.m"
  }
#line 415 "unneeded_code.m"
}

#line 396 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(
#line 396 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__UnneededInfo_12,
#line 396 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__Goal0_13,
#line 396 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Goal_14,
#line 396 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__InitInstMap_15,
#line 396 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__FinalInstMap_16,
#line 396 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_30,
#line 396 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_31,
#line 396 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_32,
#line 396 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_33,
#line 396 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_34,
#line 396 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_Changed_35)
#line 396 "unneeded_code.m"
{
#line 402 "unneeded_code.m"
  {
#line 402 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 402 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__TypeInfo_22_90;
#line 402 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__WhereInfo_20;
#line 402 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__ModuleInfo_29;
#line 402 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_47_47;
#line 402 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_50_50;
#line 402 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__GoalInfo_81;
#line 402 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__NonLocalSet_82;
#line 402 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__NonLocals_83;
#line 402 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__VirginOutputs_84;
#line 402 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_85_85;
#line 434 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_60_60;
#line 434 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_61_61;
#line 434 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_62_62;
#line 610 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_80_80;
#line 615 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__conv3_STATE_VARIABLE_WhereNeededMap_50_50;
#line 436 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_51_51;

#line 403 "unneeded_code.m"
    {
#line 403 "unneeded_code.m"
      transform_hlds__unneeded_code__can_eliminate_or_move_6_p_0(transform_hlds__unneeded_code__UnneededInfo_12, transform_hlds__unneeded_code__Goal0_13, transform_hlds__unneeded_code__InitInstMap_15, transform_hlds__unneeded_code__FinalInstMap_16, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_30, &transform_hlds__unneeded_code__WhereInfo_20);
    }
#line 410 "unneeded_code.m"
    if ((transform_hlds__unneeded_code__WhereInfo_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 407 "unneeded_code.m"
      {
#line 407 "unneeded_code.m"
        transform_hlds__unneeded_code__unneeded_process_goal_internal_11_p_0(transform_hlds__unneeded_code__UnneededInfo_12, transform_hlds__unneeded_code__Goal0_13, transform_hlds__unneeded_code__Goal_14, transform_hlds__unneeded_code__InitInstMap_15, transform_hlds__unneeded_code__FinalInstMap_16, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_30, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_47_47, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_32, transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_33, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_0_34, transform_hlds__unneeded_code__STATE_VARIABLE_Changed_35);
      }
#line 410 "unneeded_code.m"
    else
#line 411 "unneeded_code.m"
      {
#line 411 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Branches_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__WhereInfo_20, (MR_Integer) 0)));
#line 411 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__BranchList_22;
#line 411 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Options_23;
#line 411 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__Debug_24;
#line 411 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_37_37;
#line 415 "unneeded_code.m"
        MR_Box transform_hlds__unneeded_code__conv1_STATE_VARIABLE_RefinedGoals_33;
#line 420 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_54_54;
#line 420 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_55_55;
#line 420 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_56_56;
#line 421 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_57_57;
#line 421 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__V_58_58;
#line 421 "unneeded_code.m"
        MR_Integer transform_hlds__unneeded_code__V_59_59;

#line 412 "unneeded_code.m"
        {
#line 412 "unneeded_code.m"
          transform_hlds__unneeded_code__demand_inputs_6_p_0(transform_hlds__unneeded_code__UnneededInfo_12, transform_hlds__unneeded_code__Goal0_13, transform_hlds__unneeded_code__InitInstMap_15, transform_hlds__unneeded_code__WhereInfo_20, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_0_30, &transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_47_47);
        }
#line 414 "unneeded_code.m"
        {
#line 414 "unneeded_code.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_branch_point_0, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[2], transform_hlds__unneeded_code__Branches_21, &transform_hlds__unneeded_code__BranchList_22);
        }
#line 415 "unneeded_code.m"
        {
#line 415 "unneeded_code.m"
          transform_hlds__unneeded_code__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 415 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_37_37, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_5[0]));
#line 415 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_37_37, 1) = ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_1));
#line 415 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 415 "unneeded_code.m"
          MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_37_37, 3) = ((MR_Box) (transform_hlds__unneeded_code__Goal0_13));
#line 415 "unneeded_code.m"
        }
#line 415 "unneeded_code.m"
        {
#line 415 "unneeded_code.m"
          mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[2], (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[3], transform_hlds__unneeded_code__V_37_37, transform_hlds__unneeded_code__BranchList_22, ((MR_Box) (transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_0_32)), &transform_hlds__unneeded_code__conv1_STATE_VARIABLE_RefinedGoals_33);
        }
#line 415 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_RefinedGoals_33 = ((MR_Word) transform_hlds__unneeded_code__conv1_STATE_VARIABLE_RefinedGoals_33);
#line 417 "unneeded_code.m"
        {
#line 417 "unneeded_code.m"
          *transform_hlds__unneeded_code__Goal_14 = hlds__make_goal__true_goal_0_f_0();
        }
#line 418 "unneeded_code.m"
        *transform_hlds__unneeded_code__STATE_VARIABLE_Changed_35 = (MR_Integer) 1;
#line 420 "unneeded_code.m"
        transform_hlds__unneeded_code__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_12, (MR_Integer) 0)));
#line 420 "unneeded_code.m"
        transform_hlds__unneeded_code__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_12, (MR_Integer) 1)));
#line 420 "unneeded_code.m"
        transform_hlds__unneeded_code__Options_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_12, (MR_Integer) 2)));
#line 420 "unneeded_code.m"
        transform_hlds__unneeded_code__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_12, (MR_Integer) 3)));
#line 421 "unneeded_code.m"
        transform_hlds__unneeded_code__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_23, (MR_Integer) 0)));
#line 421 "unneeded_code.m"
        transform_hlds__unneeded_code__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_23, (MR_Integer) 1)));
#line 421 "unneeded_code.m"
        transform_hlds__unneeded_code__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_23, (MR_Integer) 2)));
#line 421 "unneeded_code.m"
        transform_hlds__unneeded_code__Debug_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_23, (MR_Integer) 3)));
#line 424 "unneeded_code.m"
#line 424 "unneeded_code.m"
        switch (transform_hlds__unneeded_code__Debug_24) {
#line 424 "unneeded_code.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 424 "unneeded_code.m"
          case (MR_Integer) 0:
#line 423 "unneeded_code.m"
            {
#line 423 "unneeded_code.m"
            }
#line 424 "unneeded_code.m"
            break;
#line 424 "unneeded_code.m"
          case (MR_Integer) 1:
#line 425 "unneeded_code.m"
            {
#line 425 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__GoalInfo0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal0_13, (MR_Integer) 1)));
#line 425 "unneeded_code.m"
              MR_Integer transform_hlds__unneeded_code__GoalIdNum0_27;
#line 425 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__V_40_40;
#line 426 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code___GoalExpr0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal0_13, (MR_Integer) 0)));
#line 428 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__V_43_43;
#line 428 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__V_45_45;

#line 427 "unneeded_code.m"
              {
#line 427 "unneeded_code.m"
                transform_hlds__unneeded_code__V_40_40 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(transform_hlds__unneeded_code__GoalInfo0_26);
              }
#line 427 "unneeded_code.m"
              transform_hlds__unneeded_code__GoalIdNum0_27 = (MR_Integer) transform_hlds__unneeded_code__V_40_40;
#line 429 "unneeded_code.m"
              {
#line 429 "unneeded_code.m"
                transform_hlds__unneeded_code__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 429 "unneeded_code.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_45_45, 0) = ((MR_Box) (transform_hlds__unneeded_code__GoalIdNum0_27));
#line 429 "unneeded_code.m"
              }
#line 429 "unneeded_code.m"
              {
#line 429 "unneeded_code.m"
                transform_hlds__unneeded_code__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "unneeded_code.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_43_43, 0) = ((MR_Box) (transform_hlds__unneeded_code__V_45_45));
#line 429 "unneeded_code.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 429 "unneeded_code.m"
              }
#line 429 "unneeded_code.m"
              {
#line 429 "unneeded_code.m"
                mercury__io__format_4_p_0((MR_String) "unneeded code at goal id %d\n", transform_hlds__unneeded_code__V_43_43);
              }
#line 425 "unneeded_code.m"
            }
#line 424 "unneeded_code.m"
            break;
#line 424 "unneeded_code.m"
        }
#line 411 "unneeded_code.m"
      }
#line 434 "unneeded_code.m"
    transform_hlds__unneeded_code__ModuleInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_12, (MR_Integer) 0)));
#line 434 "unneeded_code.m"
    transform_hlds__unneeded_code__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_12, (MR_Integer) 1)));
#line 434 "unneeded_code.m"
    transform_hlds__unneeded_code__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_12, (MR_Integer) 2)));
#line 434 "unneeded_code.m"
    transform_hlds__unneeded_code__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_12, (MR_Integer) 3)));
#line 610 "unneeded_code.m"
    transform_hlds__unneeded_code__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal0_13, (MR_Integer) 0)));
#line 610 "unneeded_code.m"
    transform_hlds__unneeded_code__GoalInfo_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal0_13, (MR_Integer) 1)));
#line 611 "unneeded_code.m"
    {
#line 611 "unneeded_code.m"
      transform_hlds__unneeded_code__NonLocalSet_82 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__unneeded_code__GoalInfo_81);
    }
#line 612 "unneeded_code.m"
    {
#line 612 "unneeded_code.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__unneeded_code__NonLocalSet_82, &transform_hlds__unneeded_code__NonLocals_83);
    }
#line 613 "unneeded_code.m"
    {
#line 613 "unneeded_code.m"
      transform_hlds__unneeded_code__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 613 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_85_85, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_3[1]));
#line 613 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_85_85, 1) = ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_goal_11_p_0_2));
#line 613 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_85_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 613 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_85_85, 3) = ((MR_Box) (transform_hlds__unneeded_code__ModuleInfo_29));
#line 613 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_85_85, 4) = ((MR_Box) (transform_hlds__unneeded_code__InitInstMap_15));
#line 613 "unneeded_code.m"
    }
#line 9703 "transform_hlds.unneeded_code.c"
    transform_hlds__unneeded_code__TypeInfo_22_90 = (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0];
#line 613 "unneeded_code.m"
    {
#line 613 "unneeded_code.m"
      mercury__list__filter_3_p_0(transform_hlds__unneeded_code__TypeInfo_22_90, transform_hlds__unneeded_code__V_85_85, transform_hlds__unneeded_code__NonLocals_83, &transform_hlds__unneeded_code__VirginOutputs_84);
    }
#line 615 "unneeded_code.m"
    {
#line 615 "unneeded_code.m"
      mercury__list__foldl_4_p_0(transform_hlds__unneeded_code__TypeInfo_22_90, (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[0], (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[8], transform_hlds__unneeded_code__VirginOutputs_84, ((MR_Box) (transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_47_47)), &transform_hlds__unneeded_code__conv3_STATE_VARIABLE_WhereNeededMap_50_50);
    }
#line 615 "unneeded_code.m"
    transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_50_50 = ((MR_Word) transform_hlds__unneeded_code__conv3_STATE_VARIABLE_WhereNeededMap_50_50);
#line 436 "unneeded_code.m"
    {
#line 436 "unneeded_code.m"
      transform_hlds__unneeded_code__V_51_51 = hlds__hlds_goal__goal_get_purity_1_f_0(*transform_hlds__unneeded_code__Goal_14);
    }
#line 436 "unneeded_code.m"
    transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__V_51_51 == (MR_Integer) 2);
#line 444 "unneeded_code.m"
    if (transform_hlds__unneeded_code__succeeded)
#line 443 "unneeded_code.m"
      {
#line 443 "unneeded_code.m"
        MR_Word transform_hlds__unneeded_code__TypeCtorInfo_72_72 = (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0;

#line 443 "unneeded_code.m"
        {
#line 443 "unneeded_code.m"
          mercury__map__map_values_only_3_p_0(transform_hlds__unneeded_code__TypeCtorInfo_72_72, transform_hlds__unneeded_code__TypeCtorInfo_72_72, (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0], (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[9], transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_50_50, transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_31);
#line 443 "unneeded_code.m"
          return;
        }
#line 443 "unneeded_code.m"
      }
#line 444 "unneeded_code.m"
    else
#line 444 "unneeded_code.m"
      *transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_31 = transform_hlds__unneeded_code__STATE_VARIABLE_WhereNeededMap_50_50;
#line 402 "unneeded_code.m"
  }
#line 396 "unneeded_code.m"
}

#line 366 "unneeded_code.m"
static MR_bool MR_CALL 
transform_hlds__unneeded_code__unneeded_process_proc_7_p_0_2(
#line 366 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg)
#line 366 "unneeded_code.m"
{
#line 366 "unneeded_code.m"
  {
#line 366 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 366 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;

#line 366 "unneeded_code.m"
    {
#line 366 "unneeded_code.m"
      return transform_hlds__unneeded_code__succeeded = transform_hlds__unneeded_code__IntroducedFrom__pred__unneeded_process_proc__366__1_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__closure, (MR_Integer) 3))));
    }
#line 366 "unneeded_code.m"
    return transform_hlds__unneeded_code__succeeded;
#line 366 "unneeded_code.m"
  }
#line 366 "unneeded_code.m"
}

#line 321 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_proc_7_p_0_1(
#line 321 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__closure_arg,
#line 321 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_1,
#line 321 "unneeded_code.m"
  MR_Box transform_hlds__unneeded_code__wrapper_arg_2,
#line 321 "unneeded_code.m"
  MR_Box * transform_hlds__unneeded_code__wrapper_arg_3)
#line 321 "unneeded_code.m"
{
#line 321 "unneeded_code.m"
  {
#line 321 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__closure = transform_hlds__unneeded_code__closure_arg;
#line 321 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__conv0_HeadVar__3_67;

#line 321 "unneeded_code.m"
    {
#line 321 "unneeded_code.m"
      transform_hlds__unneeded_code__IntroducedFrom__pred__unneeded_process_proc__321__1_3_p_0(((MR_Word) transform_hlds__unneeded_code__wrapper_arg_1), ((MR_Word) transform_hlds__unneeded_code__wrapper_arg_2), &transform_hlds__unneeded_code__conv0_HeadVar__3_67);
    }
#line 321 "unneeded_code.m"
    *transform_hlds__unneeded_code__wrapper_arg_3 = ((MR_Box) (transform_hlds__unneeded_code__conv0_HeadVar__3_67));
#line 321 "unneeded_code.m"
  }
#line 321 "unneeded_code.m"
}

#line 307 "unneeded_code.m"
static void MR_CALL 
transform_hlds__unneeded_code__unneeded_process_proc_7_p_0(
#line 307 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_0_60,
#line 307 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_61,
#line 307 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_62,
#line 307 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_63,
#line 307 "unneeded_code.m"
  MR_Word transform_hlds__unneeded_code__PredId_10,
#line 307 "unneeded_code.m"
  MR_Integer transform_hlds__unneeded_code__Pass_11,
#line 307 "unneeded_code.m"
  MR_Word * transform_hlds__unneeded_code__Successful_12)
#line 307 "unneeded_code.m"
{
#line 310 "unneeded_code.m"
  {
#line 310 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 310 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__TypeInfo_110_110;
#line 310 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__ContainingGoalMap_13;
#line 310 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Goal0_14;
#line 310 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__VarSet0_15;
#line 310 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__VarTypes0_16;
#line 310 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__InitInstMap_17;
#line 310 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__GoalInfo0_19;
#line 310 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__InstMapDelta_20;
#line 310 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__FinalInstMap_21;
#line 310 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__NeededVarsList_22;
#line 310 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__WhereNeededMap0_23;
#line 310 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__WhereNeededMap1_28;
#line 310 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Globals_29;
#line 310 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__ReorderConj_30;
#line 310 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__FullyStrict_31;
#line 310 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__Limit_32;
#line 310 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Debug_33;
#line 310 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Options_34;
#line 310 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__UnneededInfo_43;
#line 310 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Goal1_44;
#line 310 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__RefinedGoals1_46;
#line 310 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Changed_47;
#line 310 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Goal2_48;
#line 310 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__RefinedGoals_49;
#line 310 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_64_64;
#line 310 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_89_89;
#line 310 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_91_91;
#line 316 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_18_18;
#line 324 "unneeded_code.m"
    MR_Box transform_hlds__unneeded_code__conv1_WhereNeededMap1_28;
#line 362 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__V_45_45;

#line 311 "unneeded_code.m"
    {
#line 311 "unneeded_code.m"
      hlds__goal_path__fill_goal_id_slots_in_proc_4_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_62, &transform_hlds__unneeded_code__ContainingGoalMap_13, transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_0_60, &transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_64_64);
    }
#line 312 "unneeded_code.m"
    {
#line 312 "unneeded_code.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_64_64, &transform_hlds__unneeded_code__Goal0_14);
    }
#line 313 "unneeded_code.m"
    {
#line 313 "unneeded_code.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_64_64, &transform_hlds__unneeded_code__VarSet0_15);
    }
#line 314 "unneeded_code.m"
    {
#line 314 "unneeded_code.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_64_64, &transform_hlds__unneeded_code__VarTypes0_16);
    }
#line 315 "unneeded_code.m"
    {
#line 315 "unneeded_code.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_64_64, transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_62, &transform_hlds__unneeded_code__InitInstMap_17);
    }
#line 316 "unneeded_code.m"
    transform_hlds__unneeded_code__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal0_14, (MR_Integer) 0)));
#line 316 "unneeded_code.m"
    transform_hlds__unneeded_code__GoalInfo0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Goal0_14, (MR_Integer) 1)));
#line 317 "unneeded_code.m"
    {
#line 317 "unneeded_code.m"
      transform_hlds__unneeded_code__InstMapDelta_20 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__unneeded_code__GoalInfo0_19);
    }
#line 318 "unneeded_code.m"
    {
#line 318 "unneeded_code.m"
      hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__unneeded_code__InitInstMap_17, transform_hlds__unneeded_code__InstMapDelta_20, &transform_hlds__unneeded_code__FinalInstMap_21);
    }
#line 319 "unneeded_code.m"
    {
#line 319 "unneeded_code.m"
      hlds__hlds_pred__proc_info_instantiated_head_vars_3_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_62, transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_64_64, &transform_hlds__unneeded_code__NeededVarsList_22);
    }
#line 9935 "transform_hlds.unneeded_code.c"
    transform_hlds__unneeded_code__TypeInfo_110_110 = (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[0];
#line 320 "unneeded_code.m"
    {
#line 320 "unneeded_code.m"
      mercury__map__init_1_p_0(transform_hlds__unneeded_code__TypeInfo_110_110, (MR_Word) &transform_hlds__unneeded_code__transform_hlds__unneeded_code__type_ctor_info_where_needed_0, &transform_hlds__unneeded_code__WhereNeededMap0_23);
    }
#line 324 "unneeded_code.m"
    {
#line 324 "unneeded_code.m"
      mercury__list__foldl_4_p_0(transform_hlds__unneeded_code__TypeInfo_110_110, (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[0], (MR_Word) &transform_hlds__unneeded_code_scalar_common_2[7], transform_hlds__unneeded_code__NeededVarsList_22, ((MR_Box) (transform_hlds__unneeded_code__WhereNeededMap0_23)), &transform_hlds__unneeded_code__conv1_WhereNeededMap1_28);
    }
#line 324 "unneeded_code.m"
    transform_hlds__unneeded_code__WhereNeededMap1_28 = ((MR_Word) transform_hlds__unneeded_code__conv1_WhereNeededMap1_28);
#line 326 "unneeded_code.m"
    {
#line 326 "unneeded_code.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_62, &transform_hlds__unneeded_code__Globals_29);
    }
#line 327 "unneeded_code.m"
    {
#line 327 "unneeded_code.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unneeded_code__Globals_29, (MR_Integer) 164, &transform_hlds__unneeded_code__ReorderConj_30);
    }
#line 328 "unneeded_code.m"
    {
#line 328 "unneeded_code.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unneeded_code__Globals_29, (MR_Integer) 166, &transform_hlds__unneeded_code__FullyStrict_31);
    }
#line 329 "unneeded_code.m"
    {
#line 329 "unneeded_code.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__unneeded_code__Globals_29, (MR_Integer) 359, &transform_hlds__unneeded_code__Limit_32);
    }
#line 330 "unneeded_code.m"
    {
#line 330 "unneeded_code.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__unneeded_code__Globals_29, (MR_Integer) 360, &transform_hlds__unneeded_code__Debug_33);
    }
#line 331 "unneeded_code.m"
    {
#line 331 "unneeded_code.m"
      transform_hlds__unneeded_code__Options_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 331 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_34, 0) = ((MR_Box) (transform_hlds__unneeded_code__FullyStrict_31));
#line 331 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_34, 1) = ((MR_Box) (transform_hlds__unneeded_code__ReorderConj_30));
#line 331 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_34, 2) = ((MR_Box) (transform_hlds__unneeded_code__Limit_32));
#line 331 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__Options_34, 3) = ((MR_Box) (transform_hlds__unneeded_code__Debug_33));
#line 331 "unneeded_code.m"
    }
#line 334 "unneeded_code.m"
#line 334 "unneeded_code.m"
    switch (transform_hlds__unneeded_code__Debug_33) {
#line 334 "unneeded_code.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 334 "unneeded_code.m"
      case (MR_Integer) 0:
#line 333 "unneeded_code.m"
        {
#line 333 "unneeded_code.m"
        }
#line 334 "unneeded_code.m"
        break;
#line 334 "unneeded_code.m"
      case (MR_Integer) 1:
#line 336 "unneeded_code.m"
        {
#line 336 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__PredInfo_36;
#line 336 "unneeded_code.m"
          MR_String transform_hlds__unneeded_code__PredName_37;
#line 336 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__DebugPredNames_38;

#line 337 "unneeded_code.m"
          {
#line 337 "unneeded_code.m"
            hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_62, transform_hlds__unneeded_code__PredId_10, &transform_hlds__unneeded_code__PredInfo_36);
          }
#line 338 "unneeded_code.m"
          {
#line 338 "unneeded_code.m"
            transform_hlds__unneeded_code__PredName_37 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__unneeded_code__PredInfo_36);
          }
#line 339 "unneeded_code.m"
          {
#line 339 "unneeded_code.m"
            libs__globals__lookup_accumulating_option_3_p_0(transform_hlds__unneeded_code__Globals_29, (MR_Integer) 361, &transform_hlds__unneeded_code__DebugPredNames_38);
          }
#line 345 "unneeded_code.m"
          if ((transform_hlds__unneeded_code__DebugPredNames_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 342 "unneeded_code.m"
            {
#line 342 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__V_85_85;
#line 342 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__V_87_87;

#line 344 "unneeded_code.m"
              {
#line 344 "unneeded_code.m"
                transform_hlds__unneeded_code__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 344 "unneeded_code.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_87_87, 0) = ((MR_Box) (transform_hlds__unneeded_code__Pass_11));
#line 344 "unneeded_code.m"
              }
#line 344 "unneeded_code.m"
              {
#line 344 "unneeded_code.m"
                transform_hlds__unneeded_code__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 344 "unneeded_code.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_85_85, 0) = ((MR_Box) (transform_hlds__unneeded_code__V_87_87));
#line 344 "unneeded_code.m"
                MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 344 "unneeded_code.m"
              }
#line 343 "unneeded_code.m"
              {
#line 343 "unneeded_code.m"
                mercury__io__format_4_p_0((MR_String) "%% Starting unneededed code pass %d\n", transform_hlds__unneeded_code__V_85_85);
              }
#line 342 "unneeded_code.m"
            }
#line 345 "unneeded_code.m"
          else
#line 354 "unneeded_code.m"
            {
#line 347 "unneeded_code.m"
              {
#line 347 "unneeded_code.m"
                transform_hlds__unneeded_code__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (transform_hlds__unneeded_code__PredName_37)), transform_hlds__unneeded_code__DebugPredNames_38);
              }
#line 354 "unneeded_code.m"
              if (transform_hlds__unneeded_code__succeeded)
#line 349 "unneeded_code.m"
                {
#line 349 "unneeded_code.m"
                  MR_Word transform_hlds__unneeded_code__OutInfo_42;
#line 349 "unneeded_code.m"
                  MR_Word transform_hlds__unneeded_code__V_76_76;
#line 349 "unneeded_code.m"
                  MR_Word transform_hlds__unneeded_code__V_78_78;

#line 349 "unneeded_code.m"
                  {
#line 349 "unneeded_code.m"
                    transform_hlds__unneeded_code__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 349 "unneeded_code.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_78_78, 0) = ((MR_Box) (transform_hlds__unneeded_code__Pass_11));
#line 349 "unneeded_code.m"
                  }
#line 349 "unneeded_code.m"
                  {
#line 349 "unneeded_code.m"
                    transform_hlds__unneeded_code__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "unneeded_code.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_76_76, 0) = ((MR_Box) (transform_hlds__unneeded_code__V_78_78));
#line 349 "unneeded_code.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__unneeded_code__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 349 "unneeded_code.m"
                  }
#line 348 "unneeded_code.m"
                  {
#line 348 "unneeded_code.m"
                    mercury__io__format_4_p_0((MR_String) "%% Starting unneededed code pass %d\n", transform_hlds__unneeded_code__V_76_76);
                  }
#line 351 "unneeded_code.m"
                  {
#line 351 "unneeded_code.m"
                    transform_hlds__unneeded_code__OutInfo_42 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(transform_hlds__unneeded_code__Globals_29, (MR_Integer) 1);
                  }
#line 352 "unneeded_code.m"
                  {
#line 352 "unneeded_code.m"
                    hlds__hlds_out__hlds_out_goal__write_goal_9_p_0(transform_hlds__unneeded_code__OutInfo_42, transform_hlds__unneeded_code__Goal0_14, transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_62, transform_hlds__unneeded_code__VarSet0_15, (MR_Integer) 1, (MR_Integer) 0, (MR_String) ".\n");
                  }
#line 349 "unneeded_code.m"
                }
#line 354 "unneeded_code.m"
              else
#line 354 "unneeded_code.m"
                {
#line 354 "unneeded_code.m"
                }
#line 354 "unneeded_code.m"
            }
#line 336 "unneeded_code.m"
        }
#line 334 "unneeded_code.m"
        break;
#line 334 "unneeded_code.m"
    }
#line 360 "unneeded_code.m"
    {
#line 360 "unneeded_code.m"
      transform_hlds__unneeded_code__UnneededInfo_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 360 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_43, 0) = ((MR_Box) (transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_62));
#line 360 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_43, 1) = ((MR_Box) (transform_hlds__unneeded_code__VarTypes0_16));
#line 360 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_43, 2) = ((MR_Box) (transform_hlds__unneeded_code__Options_34));
#line 360 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__UnneededInfo_43, 3) = ((MR_Box) (transform_hlds__unneeded_code__ContainingGoalMap_13));
#line 360 "unneeded_code.m"
    }
#line 364 "unneeded_code.m"
    {
#line 364 "unneeded_code.m"
      transform_hlds__unneeded_code__V_89_89 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__unneeded_code_scalar_common_2[1], (MR_Word) &transform_hlds__unneeded_code_scalar_common_1[1]);
    }
#line 362 "unneeded_code.m"
    {
#line 362 "unneeded_code.m"
      transform_hlds__unneeded_code__unneeded_process_goal_11_p_0(transform_hlds__unneeded_code__UnneededInfo_43, transform_hlds__unneeded_code__Goal0_14, &transform_hlds__unneeded_code__Goal1_44, transform_hlds__unneeded_code__InitInstMap_17, transform_hlds__unneeded_code__FinalInstMap_21, transform_hlds__unneeded_code__WhereNeededMap1_28, &transform_hlds__unneeded_code__V_45_45, transform_hlds__unneeded_code__V_89_89, &transform_hlds__unneeded_code__RefinedGoals1_46, (MR_Integer) 0, &transform_hlds__unneeded_code__Changed_47);
    }
#line 365 "unneeded_code.m"
    {
#line 365 "unneeded_code.m"
      transform_hlds__unneeded_code__unneeded_refine_goal_4_p_0(transform_hlds__unneeded_code__Goal1_44, &transform_hlds__unneeded_code__Goal2_48, transform_hlds__unneeded_code__RefinedGoals1_46, &transform_hlds__unneeded_code__RefinedGoals_49);
    }
#line 366 "unneeded_code.m"
    {
#line 366 "unneeded_code.m"
      transform_hlds__unneeded_code__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 366 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_91_91, 0) = ((MR_Box) (&transform_hlds__unneeded_code_scalar_common_4[0]));
#line 366 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_91_91, 1) = ((MR_Box) (transform_hlds__unneeded_code__unneeded_process_proc_7_p_0_2));
#line 366 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_91_91, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 366 "unneeded_code.m"
      MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__V_91_91, 3) = ((MR_Box) (transform_hlds__unneeded_code__RefinedGoals_49));
#line 366 "unneeded_code.m"
    }
#line 366 "unneeded_code.m"
    {
#line 366 "unneeded_code.m"
      mercury__require__expect_4_p_0(transform_hlds__unneeded_code__V_91_91, (MR_String) "transform_hlds.unneeded_code", (MR_String) "predicate \140transform_hlds.unneeded_code.unneeded_process_proc\'/7", (MR_String) "goal reattachment unsuccessful");
    }
#line 391 "unneeded_code.m"
#line 391 "unneeded_code.m"
    switch (transform_hlds__unneeded_code__Changed_47) {
#line 391 "unneeded_code.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 391 "unneeded_code.m"
      case (MR_Integer) 0:
#line 392 "unneeded_code.m"
        {
#line 393 "unneeded_code.m"
          *transform_hlds__unneeded_code__Successful_12 = (MR_Integer) 0;
#line 392 "unneeded_code.m"
          *transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_61 = transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_64_64;
#line 392 "unneeded_code.m"
          *transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_63 = transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_62;
#line 392 "unneeded_code.m"
        }
#line 391 "unneeded_code.m"
        break;
#line 391 "unneeded_code.m"
      case (MR_Integer) 1:
#line 369 "unneeded_code.m"
        {
#line 369 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__HeadVars_50;
#line 369 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__InstVarSet_51;
#line 369 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__RttiVarMaps0_52;
#line 369 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__Goal3_54;
#line 369 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__VarSet_55;
#line 369 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__VarTypes_56;
#line 369 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__RttiVarMaps_57;
#line 369 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__Goal_58;
#line 369 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_97_97;
#line 369 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_98_98;
#line 369 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_99_99;
#line 369 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_100_100;
#line 369 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_101_101;
#line 375 "unneeded_code.m"
          MR_Word transform_hlds__unneeded_code___Warnings_53;

#line 372 "unneeded_code.m"
          {
#line 372 "unneeded_code.m"
            hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_64_64, &transform_hlds__unneeded_code__HeadVars_50);
          }
#line 373 "unneeded_code.m"
          {
#line 373 "unneeded_code.m"
            hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_64_64, &transform_hlds__unneeded_code__InstVarSet_51);
          }
#line 374 "unneeded_code.m"
          {
#line 374 "unneeded_code.m"
            hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_64_64, &transform_hlds__unneeded_code__RttiVarMaps0_52);
          }
#line 375 "unneeded_code.m"
          {
#line 375 "unneeded_code.m"
            hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 1, transform_hlds__unneeded_code__HeadVars_50, &transform_hlds__unneeded_code___Warnings_53, transform_hlds__unneeded_code__Goal2_48, &transform_hlds__unneeded_code__Goal3_54, transform_hlds__unneeded_code__VarSet0_15, &transform_hlds__unneeded_code__VarSet_55, transform_hlds__unneeded_code__VarTypes0_16, &transform_hlds__unneeded_code__VarTypes_56, transform_hlds__unneeded_code__RttiVarMaps0_52, &transform_hlds__unneeded_code__RttiVarMaps_57);
          }
#line 379 "unneeded_code.m"
          {
#line 379 "unneeded_code.m"
            check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 1, transform_hlds__unneeded_code__Goal3_54, &transform_hlds__unneeded_code__Goal_58, transform_hlds__unneeded_code__VarTypes_56, transform_hlds__unneeded_code__InstVarSet_51, transform_hlds__unneeded_code__InitInstMap_17, transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_62, &transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_97_97);
          }
#line 381 "unneeded_code.m"
          {
#line 381 "unneeded_code.m"
            hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__unneeded_code__Goal_58, transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_64_64, &transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_98_98);
          }
#line 382 "unneeded_code.m"
          {
#line 382 "unneeded_code.m"
            hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__unneeded_code__VarSet_55, transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_98_98, &transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_99_99);
          }
#line 383 "unneeded_code.m"
          {
#line 383 "unneeded_code.m"
            hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__unneeded_code__VarTypes_56, transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_99_99, &transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_100_100);
          }
#line 384 "unneeded_code.m"
          {
#line 384 "unneeded_code.m"
            hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__unneeded_code__RttiVarMaps_57, transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_100_100, &transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_101_101);
          }
#line 385 "unneeded_code.m"
          transform_hlds__unneeded_code__succeeded = (transform_hlds__unneeded_code__Pass_11 > (MR_Integer) 3);
#line 387 "unneeded_code.m"
          if (transform_hlds__unneeded_code__succeeded)
#line 386 "unneeded_code.m"
            {
#line 386 "unneeded_code.m"
              *transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_63 = transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_97_97;
#line 386 "unneeded_code.m"
              *transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_61 = transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_101_101;
#line 386 "unneeded_code.m"
            }
#line 387 "unneeded_code.m"
          else
#line 388 "unneeded_code.m"
            {
#line 388 "unneeded_code.m"
              MR_Integer transform_hlds__unneeded_code__V_105_105 = (transform_hlds__unneeded_code__Pass_11 + (MR_Integer) 1);
#line 388 "unneeded_code.m"
              MR_Word transform_hlds__unneeded_code__V_59_59;

#line 388 "unneeded_code.m"
              {
#line 388 "unneeded_code.m"
                transform_hlds__unneeded_code__unneeded_process_proc_7_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_101_101, transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_61, transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_97_97, transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_63, transform_hlds__unneeded_code__PredId_10, transform_hlds__unneeded_code__V_105_105, &transform_hlds__unneeded_code__V_59_59);
              }
#line 388 "unneeded_code.m"
            }
#line 390 "unneeded_code.m"
          *transform_hlds__unneeded_code__Successful_12 = (MR_Integer) 1;
#line 369 "unneeded_code.m"
        }
#line 391 "unneeded_code.m"
        break;
#line 391 "unneeded_code.m"
    }
#line 310 "unneeded_code.m"
  }
#line 307 "unneeded_code.m"
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
#line 222 "unneeded_code.m"
  {
#line 222 "unneeded_code.m"
    MR_bool transform_hlds__unneeded_code__succeeded;
#line 222 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__PredId_10;
#line 222 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Successful_12;
#line 222 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_20_20;
#line 222 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__HeadVars_32;
#line 222 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Goal0_33;
#line 222 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__VarSet0_34;
#line 222 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__VarTypes0_35;
#line 222 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__RttiVarMaps0_36;
#line 222 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__Goal_38;
#line 222 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__VarSet_39;
#line 222 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__VarTypes_40;
#line 222 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__RttiVarMaps_41;
#line 222 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_17_43;
#line 222 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_18_44;
#line 222 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_19_45;
#line 257 "unneeded_code.m"
    MR_Word transform_hlds__unneeded_code___Warnings_37;
#line 235 "unneeded_code.m"
    MR_Integer transform_hlds__unneeded_code__V_11_11;

#line 231 "unneeded_code.m"
    {
#line 231 "unneeded_code.m"
      hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "% Removing dead code in ", transform_hlds__unneeded_code__PredProcId_6, transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_15);
    }
#line 252 "unneeded_code.m"
    {
#line 252 "unneeded_code.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_0_13, &transform_hlds__unneeded_code__HeadVars_32);
    }
#line 253 "unneeded_code.m"
    {
#line 253 "unneeded_code.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_0_13, &transform_hlds__unneeded_code__Goal0_33);
    }
#line 254 "unneeded_code.m"
    {
#line 254 "unneeded_code.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_0_13, &transform_hlds__unneeded_code__VarSet0_34);
    }
#line 255 "unneeded_code.m"
    {
#line 255 "unneeded_code.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_0_13, &transform_hlds__unneeded_code__VarTypes0_35);
    }
#line 256 "unneeded_code.m"
    {
#line 256 "unneeded_code.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_0_13, &transform_hlds__unneeded_code__RttiVarMaps0_36);
    }
#line 257 "unneeded_code.m"
    {
#line 257 "unneeded_code.m"
      hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 1, transform_hlds__unneeded_code__HeadVars_32, &transform_hlds__unneeded_code___Warnings_37, transform_hlds__unneeded_code__Goal0_33, &transform_hlds__unneeded_code__Goal_38, transform_hlds__unneeded_code__VarSet0_34, &transform_hlds__unneeded_code__VarSet_39, transform_hlds__unneeded_code__VarTypes0_35, &transform_hlds__unneeded_code__VarTypes_40, transform_hlds__unneeded_code__RttiVarMaps0_36, &transform_hlds__unneeded_code__RttiVarMaps_41);
    }
#line 260 "unneeded_code.m"
    {
#line 260 "unneeded_code.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__unneeded_code__Goal_38, transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_0_13, &transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_17_43);
    }
#line 261 "unneeded_code.m"
    {
#line 261 "unneeded_code.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__unneeded_code__VarSet_39, transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_17_43, &transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_18_44);
    }
#line 262 "unneeded_code.m"
    {
#line 262 "unneeded_code.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__unneeded_code__VarTypes_40, transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_18_44, &transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_19_45);
    }
#line 263 "unneeded_code.m"
    {
#line 263 "unneeded_code.m"
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__unneeded_code__RttiVarMaps_41, transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_19_45, &transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_20_20);
    }
#line 235 "unneeded_code.m"
    transform_hlds__unneeded_code__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__PredProcId_6, (MR_Integer) 0)));
#line 235 "unneeded_code.m"
    transform_hlds__unneeded_code__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__unneeded_code__PredProcId_6, (MR_Integer) 1)));
#line 236 "unneeded_code.m"
    {
#line 236 "unneeded_code.m"
      transform_hlds__unneeded_code__unneeded_process_proc_7_p_0(transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_20_20, transform_hlds__unneeded_code__STATE_VARIABLE_ProcInfo_14, transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_0_15, transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_16, transform_hlds__unneeded_code__PredId_10, (MR_Integer) 1, &transform_hlds__unneeded_code__Successful_12);
    }
#line 242 "unneeded_code.m"
#line 242 "unneeded_code.m"
    switch (transform_hlds__unneeded_code__Successful_12) {
#line 242 "unneeded_code.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 242 "unneeded_code.m"
      case (MR_Integer) 0:
#line 243 "unneeded_code.m"
        {
#line 244 "unneeded_code.m"
          {
#line 244 "unneeded_code.m"
            hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "% none found.\n", transform_hlds__unneeded_code__PredProcId_6, *transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_16);
#line 244 "unneeded_code.m"
            return;
          }
#line 243 "unneeded_code.m"
        }
#line 242 "unneeded_code.m"
        break;
#line 242 "unneeded_code.m"
      case (MR_Integer) 1:
#line 239 "unneeded_code.m"
        {
#line 240 "unneeded_code.m"
          {
#line 240 "unneeded_code.m"
            hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "% done.\n", transform_hlds__unneeded_code__PredProcId_6, *transform_hlds__unneeded_code__STATE_VARIABLE_ModuleInfo_16);
#line 240 "unneeded_code.m"
            return;
          }
#line 239 "unneeded_code.m"
        }
#line 242 "unneeded_code.m"
        break;
#line 242 "unneeded_code.m"
    }
#line 222 "unneeded_code.m"
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
