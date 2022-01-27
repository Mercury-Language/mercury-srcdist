/*
** Automatically generated from `hlds_clauses.m'
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


/* :- module hlds.hlds_clauses. */
/* :- implementation. */

/*
INIT mercury__hlds__hlds_clauses__init
ENDINIT
*/

#include "hlds.hlds_clauses.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 141 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 144 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_0_0[5];

#line 147 "hlds.hlds_clauses.c"
static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clause_0_0[5];

#line 150 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_0_0;

#line 153 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_0_0[1];

#line 156 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_0[1];

#line 159 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_0[1];

#line 162 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_0[1];

#line 165 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_0;

#line 168 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1builtin__type_ctor_info_int_0;

#line 171 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_applicable_modes_0_1[1];

#line 174 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_1;

#line 177 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_applicable_modes_0_0[1];

#line 180 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_applicable_modes_0_1[1];

#line 183 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_applicable_modes_0[2];

#line 186 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_applicable_modes_0[2];

#line 189 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_applicable_modes_0[2];

#line 192 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_item_number_region_0_0[4];

#line 195 "hlds.hlds_clauses.c"
static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clause_item_number_region_0_0[4];

#line 198 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_number_region_0_0;

#line 201 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_number_region_0_0[1];

#line 204 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_item_number_region_0[1];

#line 207 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_item_number_region_0[1];

#line 210 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_region_0[1];

#line 213 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_0;

#line 216 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_1;

#line 219 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_value_ordered_clause_item_number_type_0[2];

#line 222 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_clause_item_number_type_0[2];

#line 225 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_type_0[2];

#line 228 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_0;

#line 231 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_1;

#line 234 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_value_ordered_clause_item_number_types_0[2];

#line 237 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_clause_item_number_types_0[2];

#line 240 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_types_0[2];

#line 243 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0;

#line 246 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_item_numbers_0_0[2];

#line 249 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_0;

#line 252 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_1;

#line 255 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_numbers_0_0[1];

#line 258 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_numbers_0_1[1];

#line 261 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_item_numbers_0[2];

#line 264 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_item_numbers_0[2];

#line 267 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_numbers_0[2];

#line 270 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 273 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 276 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_clauses__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 279 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 282 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_clauses__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 285 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__hlds__hlds_args__ti_proc_arg_vector_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 288 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clauses_info_0_0[10];

#line 291 "hlds.hlds_clauses.c"
static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clauses_info_0_0[10];

#line 294 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_info_0_0;

#line 297 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_info_0_0[1];

#line 300 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clauses_info_0[1];

#line 303 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clauses_info_0[1];

#line 306 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clauses_info_0[1];

#line 309 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__cord__ti_cord_1hlds__hlds_clauses__type_ctor_info_clause_0;

#line 312 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clauses_rep_0_0[2];

#line 315 "hlds.hlds_clauses.c"
static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clauses_rep_0_0[2];

#line 318 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_rep_0_0;

#line 321 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_rep_0_0[1];

#line 324 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clauses_rep_0[1];

#line 327 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clauses_rep_0[1];

#line 330 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clauses_rep_0[1];

#line 333 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_0_0_10001(
#line 336 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 338 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

#line 341 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_0_0_10001(
#line 344 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 346 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 348 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

#line 351 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_applicable_modes_0_0_10001(
#line 354 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 356 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

#line 359 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_applicable_modes_0_0_10001(
#line 362 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 364 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 366 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

#line 369 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_region_0_0_10001(
#line 372 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 374 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

#line 377 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_region_0_0_10001(
#line 380 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 382 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 384 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

#line 387 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_type_0_0_10001(
#line 390 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 392 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

#line 395 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_type_0_0_10001(
#line 398 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 400 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 402 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

#line 405 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_types_0_0_10001(
#line 408 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 410 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

#line 413 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_types_0_0_10001(
#line 416 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 418 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 420 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

#line 423 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_numbers_0_0_10001(
#line 426 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 428 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

#line 431 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_numbers_0_0_10001(
#line 434 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 436 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 438 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

#line 441 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clauses_info_0_0_10001(
#line 444 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 446 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

#line 449 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clauses_info_0_0_10001(
#line 452 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 454 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 456 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

#line 459 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clauses_rep_0_0_10001(
#line 462 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 464 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

#line 467 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clauses_rep_0_0_10001(
#line 470 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 472 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 474 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

#line 369 "hlds_clauses.m"
static void MR_CALL 
hlds__hlds_clauses__add_clause_item_number_regions_4_p_0(
#line 369 "hlds_clauses.m"
  MR_Integer hlds__hlds_clauses__ItemNum_5,
#line 369 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__Context_6,
#line 369 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_Regions_0_23,
#line 369 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_Regions_24);


static /* final */ const MR_Box hlds__hlds_clauses_scalar_common_1[9][2];

static /* final */ const MR_Box hlds__hlds_clauses_scalar_common_2[2][3];




static /* final */ const MR_Box hlds__hlds_clauses_scalar_common_1[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__hlds_args__hlds__hlds_args__type_ctor_info_proc_arg_vector_1)),
    ((MR_Box) (&hlds__hlds_clauses_scalar_common_1[1]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__hlds_clauses_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_clauses_scalar_common_1[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_clauses_scalar_common_1[0]))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 569 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 577 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_0_0[5] = {
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_applicable_modes_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_implementation_language_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 586 "hlds.hlds_clauses.c"
static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clause_0_0[5] = {
  (MR_String) "clause_applicable_procs",
  (MR_String) "clause_body",
  (MR_String) "clause_lang",
  (MR_String) "clause_context",
  (MR_String) "clause_statevar_warnings"
};

#line 595 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_0_0 = {
  (MR_String) "clause",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_0_0,
  hlds__hlds_clauses__hlds__hlds_clauses__field_names_clause_0_0,
  NULL,
  NULL
};

#line 610 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_0_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_0_0
};

#line 615 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_0_0
  }
};

#line 624 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_0_0
};

#line 629 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_0[1] = {
  (MR_Integer) 0
};

#line 634 "hlds.hlds_clauses.c"
const MR_TypeCtorInfo_Struct hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_clauses____Unify____clause_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clause_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clause",
  {     hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_0 },
  {     hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_0
};

#line 651 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_0 = {
  (MR_String) "all_modes",
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

#line 666 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 674 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_applicable_modes_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 679 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_1 = {
  (MR_String) "selected_modes",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_applicable_modes_0_1,
  NULL,
  NULL,
  NULL
};

#line 694 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_applicable_modes_0_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_0
};

#line 699 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_applicable_modes_0_1[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_1
};

#line 704 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_applicable_modes_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_applicable_modes_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_applicable_modes_0_1
  }
};

#line 718 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_applicable_modes_0[2] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_0,
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_1
};

#line 724 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_applicable_modes_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 730 "hlds.hlds_clauses.c"
const MR_TypeCtorInfo_Struct hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_applicable_modes_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_clauses____Unify____clause_applicable_modes_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clause_applicable_modes_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clause_applicable_modes",
  {     hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_applicable_modes_0 },
  {     hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_applicable_modes_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_applicable_modes_0
};

#line 747 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_item_number_region_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 755 "hlds.hlds_clauses.c"
static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clause_item_number_region_0_0[4] = {
  (MR_String) "cnr_lower_item_number",
  (MR_String) "cnr_upper_item_number",
  (MR_String) "cnr_lower_item_context",
  (MR_String) "cnr_upper_item_context"
};

#line 763 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_number_region_0_0 = {
  (MR_String) "clause_item_number_region",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_item_number_region_0_0,
  hlds__hlds_clauses__hlds__hlds_clauses__field_names_clause_item_number_region_0_0,
  NULL,
  NULL
};

#line 778 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_number_region_0_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_number_region_0_0
};

#line 783 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_item_number_region_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_number_region_0_0
  }
};

#line 792 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_item_number_region_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_number_region_0_0
};

#line 797 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_region_0[1] = {
  (MR_Integer) 0
};

#line 802 "hlds.hlds_clauses.c"
const MR_TypeCtorInfo_Struct hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_clauses____Unify____clause_item_number_region_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clause_item_number_region_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clause_item_number_region",
  {     hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_item_number_region_0 },
  {     hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_item_number_region_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_region_0
};

#line 819 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_0 = {
  (MR_String) "item_is_clause",
  (MR_Integer) 0
};

#line 825 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_1 = {
  (MR_String) "item_is_foreign_proc",
  (MR_Integer) 1
};

#line 831 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_value_ordered_clause_item_number_type_0[2] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_0,
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_1
};

#line 837 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_clause_item_number_type_0[2] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_0,
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_1
};

#line 843 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 849 "hlds.hlds_clauses.c"
const MR_TypeCtorInfo_Struct hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_clauses____Unify____clause_item_number_type_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clause_item_number_type_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clause_item_number_type",
  {     hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_clause_item_number_type_0 },
  {     hlds__hlds_clauses__hlds__hlds_clauses__enum_value_ordered_clause_item_number_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_type_0
};

#line 866 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_0 = {
  (MR_String) "only_clauses",
  (MR_Integer) 0
};

#line 872 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_1 = {
  (MR_String) "clauses_and_foreign_procs",
  (MR_Integer) 1
};

#line 878 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_value_ordered_clause_item_number_types_0[2] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_0,
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_1
};

#line 884 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_clause_item_number_types_0[2] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_1,
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_0
};

#line 890 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_types_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 896 "hlds.hlds_clauses.c"
const MR_TypeCtorInfo_Struct hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_types_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_clauses____Unify____clause_item_number_types_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clause_item_number_types_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clause_item_number_types",
  {     hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_clause_item_number_types_0 },
  {     hlds__hlds_clauses__hlds__hlds_clauses__enum_value_ordered_clause_item_number_types_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_types_0
};

#line 913 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0
  }
};

#line 921 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_item_numbers_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__list__ti_list_1hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0,
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__list__ti_list_1hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0
};

#line 927 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_0 = {
  (MR_String) "user_clauses",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_item_numbers_0_0,
  NULL,
  NULL,
  NULL
};

#line 942 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_1 = {
  (MR_String) "comp_gen_clauses",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 957 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_numbers_0_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_1
};

#line 962 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_numbers_0_1[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_0
};

#line 967 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_item_numbers_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_numbers_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_numbers_0_1
  }
};

#line 981 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_item_numbers_0[2] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_1,
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_0
};

#line 987 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_numbers_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 993 "hlds.hlds_clauses.c"
const MR_TypeCtorInfo_Struct hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_numbers_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_clauses____Unify____clause_item_numbers_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clause_item_numbers_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clause_item_numbers",
  {     hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_item_numbers_0 },
  {     hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_item_numbers_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_numbers_0
};

#line 1010 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1018 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1026 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_clauses__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1035 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1043 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_clauses__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1052 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__hlds__hlds_args__ti_proc_arg_vector_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &hlds__hlds_args__hlds__hlds_args__type_ctor_info_proc_arg_vector_1,
  {
    (MR_TypeInfo) &hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1060 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clauses_info_0_0[10] = {
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__hlds__hlds_args__ti_proc_arg_vector_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_rep_0,
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_numbers_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1074 "hlds.hlds_clauses.c"
static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clauses_info_0_0[10] = {
  (MR_String) "cli_varset",
  (MR_String) "cli_explicit_vartypes",
  (MR_String) "cli_tvar_name_map",
  (MR_String) "cli_vartypes",
  (MR_String) "cli_headvars",
  (MR_String) "cli_rep",
  (MR_String) "cli_item_numbers",
  (MR_String) "cli_rtti_varmaps",
  (MR_String) "cli_have_foreign_clauses",
  (MR_String) "cli_had_syntax_errors"
};

#line 1088 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_info_0_0 = {
  (MR_String) "clauses_info",
  (MR_Integer) 10,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_clauses__hlds__hlds_clauses__field_types_clauses_info_0_0,
  hlds__hlds_clauses__hlds__hlds_clauses__field_names_clauses_info_0_0,
  NULL,
  NULL
};

#line 1103 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_info_0_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_info_0_0
};

#line 1108 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clauses_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_info_0_0
  }
};

#line 1117 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clauses_info_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_info_0_0
};

#line 1122 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clauses_info_0[1] = {
  (MR_Integer) 0
};

#line 1127 "hlds.hlds_clauses.c"
const MR_TypeCtorInfo_Struct hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_clauses____Unify____clauses_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clauses_info_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clauses_info",
  {     hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clauses_info_0 },
  {     hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clauses_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clauses_info_0
};

#line 1144 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__cord__ti_cord_1hlds__hlds_clauses__type_ctor_info_clause_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0
  }
};

#line 1152 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clauses_rep_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__cord__ti_cord_1hlds__hlds_clauses__type_ctor_info_clause_0
};

#line 1158 "hlds.hlds_clauses.c"
static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clauses_rep_0_0[2] = {
  (MR_String) "cr_num_clauses",
  (MR_String) "cr_clauses_cord"
};

#line 1164 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_rep_0_0 = {
  (MR_String) "clauses_rep",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_clauses__hlds__hlds_clauses__field_types_clauses_rep_0_0,
  hlds__hlds_clauses__hlds__hlds_clauses__field_names_clauses_rep_0_0,
  NULL,
  NULL
};

#line 1179 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_rep_0_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_rep_0_0
};

#line 1184 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clauses_rep_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_rep_0_0
  }
};

#line 1193 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clauses_rep_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_rep_0_0
};

#line 1198 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clauses_rep_0[1] = {
  (MR_Integer) 0
};

#line 1203 "hlds.hlds_clauses.c"
const MR_TypeCtorInfo_Struct hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_rep_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_clauses____Unify____clauses_rep_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clauses_rep_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clauses_rep",
  {     hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clauses_rep_0 },
  {     hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clauses_rep_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clauses_rep_0
};

#line 1220 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_0_0_10001(
#line 1223 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 1225 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
#line 1227 "hlds.hlds_clauses.c"
{
#line 1229 "hlds.hlds_clauses.c"
  {
#line 1231 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded;

#line 1234 "hlds.hlds_clauses.c"
    {
#line 1236 "hlds.hlds_clauses.c"
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
#line 1239 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 1241 "hlds.hlds_clauses.c"
  }
#line 1243 "hlds.hlds_clauses.c"
}

#line 1246 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_0_0_10001(
#line 1249 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 1251 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 1253 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
#line 1255 "hlds.hlds_clauses.c"
{
#line 1257 "hlds.hlds_clauses.c"
  {
#line 1259 "hlds.hlds_clauses.c"
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

#line 1262 "hlds.hlds_clauses.c"
    {
#line 1264 "hlds.hlds_clauses.c"
      hlds__hlds_clauses____Compare____clause_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
#line 1267 "hlds.hlds_clauses.c"
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
#line 1269 "hlds.hlds_clauses.c"
  }
#line 1271 "hlds.hlds_clauses.c"
}

#line 1274 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_applicable_modes_0_0_10001(
#line 1277 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 1279 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
#line 1281 "hlds.hlds_clauses.c"
{
#line 1283 "hlds.hlds_clauses.c"
  {
#line 1285 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded;

#line 1288 "hlds.hlds_clauses.c"
    {
#line 1290 "hlds.hlds_clauses.c"
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_applicable_modes_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
#line 1293 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 1295 "hlds.hlds_clauses.c"
  }
#line 1297 "hlds.hlds_clauses.c"
}

#line 1300 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_applicable_modes_0_0_10001(
#line 1303 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 1305 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 1307 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
#line 1309 "hlds.hlds_clauses.c"
{
#line 1311 "hlds.hlds_clauses.c"
  {
#line 1313 "hlds.hlds_clauses.c"
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

#line 1316 "hlds.hlds_clauses.c"
    {
#line 1318 "hlds.hlds_clauses.c"
      hlds__hlds_clauses____Compare____clause_applicable_modes_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
#line 1321 "hlds.hlds_clauses.c"
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
#line 1323 "hlds.hlds_clauses.c"
  }
#line 1325 "hlds.hlds_clauses.c"
}

#line 1328 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_region_0_0_10001(
#line 1331 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 1333 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
#line 1335 "hlds.hlds_clauses.c"
{
#line 1337 "hlds.hlds_clauses.c"
  {
#line 1339 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded;

#line 1342 "hlds.hlds_clauses.c"
    {
#line 1344 "hlds.hlds_clauses.c"
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_item_number_region_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
#line 1347 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 1349 "hlds.hlds_clauses.c"
  }
#line 1351 "hlds.hlds_clauses.c"
}

#line 1354 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_region_0_0_10001(
#line 1357 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 1359 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 1361 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
#line 1363 "hlds.hlds_clauses.c"
{
#line 1365 "hlds.hlds_clauses.c"
  {
#line 1367 "hlds.hlds_clauses.c"
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

#line 1370 "hlds.hlds_clauses.c"
    {
#line 1372 "hlds.hlds_clauses.c"
      hlds__hlds_clauses____Compare____clause_item_number_region_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
#line 1375 "hlds.hlds_clauses.c"
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
#line 1377 "hlds.hlds_clauses.c"
  }
#line 1379 "hlds.hlds_clauses.c"
}

#line 1382 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_type_0_0_10001(
#line 1385 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 1387 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
#line 1389 "hlds.hlds_clauses.c"
{
#line 1391 "hlds.hlds_clauses.c"
  {
#line 1393 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded;

#line 1396 "hlds.hlds_clauses.c"
    {
#line 1398 "hlds.hlds_clauses.c"
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_item_number_type_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
#line 1401 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 1403 "hlds.hlds_clauses.c"
  }
#line 1405 "hlds.hlds_clauses.c"
}

#line 1408 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_type_0_0_10001(
#line 1411 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 1413 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 1415 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
#line 1417 "hlds.hlds_clauses.c"
{
#line 1419 "hlds.hlds_clauses.c"
  {
#line 1421 "hlds.hlds_clauses.c"
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

#line 1424 "hlds.hlds_clauses.c"
    {
#line 1426 "hlds.hlds_clauses.c"
      hlds__hlds_clauses____Compare____clause_item_number_type_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
#line 1429 "hlds.hlds_clauses.c"
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
#line 1431 "hlds.hlds_clauses.c"
  }
#line 1433 "hlds.hlds_clauses.c"
}

#line 1436 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_types_0_0_10001(
#line 1439 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 1441 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
#line 1443 "hlds.hlds_clauses.c"
{
#line 1445 "hlds.hlds_clauses.c"
  {
#line 1447 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded;

#line 1450 "hlds.hlds_clauses.c"
    {
#line 1452 "hlds.hlds_clauses.c"
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_item_number_types_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
#line 1455 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 1457 "hlds.hlds_clauses.c"
  }
#line 1459 "hlds.hlds_clauses.c"
}

#line 1462 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_types_0_0_10001(
#line 1465 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 1467 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 1469 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
#line 1471 "hlds.hlds_clauses.c"
{
#line 1473 "hlds.hlds_clauses.c"
  {
#line 1475 "hlds.hlds_clauses.c"
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

#line 1478 "hlds.hlds_clauses.c"
    {
#line 1480 "hlds.hlds_clauses.c"
      hlds__hlds_clauses____Compare____clause_item_number_types_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
#line 1483 "hlds.hlds_clauses.c"
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
#line 1485 "hlds.hlds_clauses.c"
  }
#line 1487 "hlds.hlds_clauses.c"
}

#line 1490 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_numbers_0_0_10001(
#line 1493 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 1495 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
#line 1497 "hlds.hlds_clauses.c"
{
#line 1499 "hlds.hlds_clauses.c"
  {
#line 1501 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded;

#line 1504 "hlds.hlds_clauses.c"
    {
#line 1506 "hlds.hlds_clauses.c"
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_item_numbers_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
#line 1509 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 1511 "hlds.hlds_clauses.c"
  }
#line 1513 "hlds.hlds_clauses.c"
}

#line 1516 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_numbers_0_0_10001(
#line 1519 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 1521 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 1523 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
#line 1525 "hlds.hlds_clauses.c"
{
#line 1527 "hlds.hlds_clauses.c"
  {
#line 1529 "hlds.hlds_clauses.c"
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

#line 1532 "hlds.hlds_clauses.c"
    {
#line 1534 "hlds.hlds_clauses.c"
      hlds__hlds_clauses____Compare____clause_item_numbers_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
#line 1537 "hlds.hlds_clauses.c"
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
#line 1539 "hlds.hlds_clauses.c"
  }
#line 1541 "hlds.hlds_clauses.c"
}

#line 1544 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clauses_info_0_0_10001(
#line 1547 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 1549 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
#line 1551 "hlds.hlds_clauses.c"
{
#line 1553 "hlds.hlds_clauses.c"
  {
#line 1555 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded;

#line 1558 "hlds.hlds_clauses.c"
    {
#line 1560 "hlds.hlds_clauses.c"
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clauses_info_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
#line 1563 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 1565 "hlds.hlds_clauses.c"
  }
#line 1567 "hlds.hlds_clauses.c"
}

#line 1570 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clauses_info_0_0_10001(
#line 1573 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 1575 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 1577 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
#line 1579 "hlds.hlds_clauses.c"
{
#line 1581 "hlds.hlds_clauses.c"
  {
#line 1583 "hlds.hlds_clauses.c"
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

#line 1586 "hlds.hlds_clauses.c"
    {
#line 1588 "hlds.hlds_clauses.c"
      hlds__hlds_clauses____Compare____clauses_info_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
#line 1591 "hlds.hlds_clauses.c"
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
#line 1593 "hlds.hlds_clauses.c"
  }
#line 1595 "hlds.hlds_clauses.c"
}

#line 1598 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clauses_rep_0_0_10001(
#line 1601 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 1603 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
#line 1605 "hlds.hlds_clauses.c"
{
#line 1607 "hlds.hlds_clauses.c"
  {
#line 1609 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded;

#line 1612 "hlds.hlds_clauses.c"
    {
#line 1614 "hlds.hlds_clauses.c"
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clauses_rep_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
#line 1617 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 1619 "hlds.hlds_clauses.c"
  }
#line 1621 "hlds.hlds_clauses.c"
}

#line 1624 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clauses_rep_0_0_10001(
#line 1627 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 1629 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 1631 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
#line 1633 "hlds.hlds_clauses.c"
{
#line 1635 "hlds.hlds_clauses.c"
  {
#line 1637 "hlds.hlds_clauses.c"
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

#line 1640 "hlds.hlds_clauses.c"
    {
#line 1642 "hlds.hlds_clauses.c"
      hlds__hlds_clauses____Compare____clauses_rep_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
#line 1645 "hlds.hlds_clauses.c"
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
#line 1647 "hlds.hlds_clauses.c"
  }
#line 1649 "hlds.hlds_clauses.c"
}

#line 477 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses____Compare____clauses_rep_0_0(
#line 477 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__1_1,
#line 477 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2,
#line 477 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__3_3)
#line 477 "hlds_clauses.m"
{
#line 477 "hlds_clauses.m"
  {
#line 477 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 477 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastX_9 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;
#line 477 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastY_10 = (MR_Integer) hlds__hlds_clauses__HeadVar__3_3;

#line 477 "hlds_clauses.m"
    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_9 == hlds__hlds_clauses__CastY_10);
#line 477 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 1676 "hlds.hlds_clauses.c"
      *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 0;
#line 477 "hlds_clauses.m"
    else
#line 477 "hlds_clauses.m"
      {
#line 477 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
#line 477 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
#line 477 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 0)));
#line 477 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 1)));
#line 477 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_8_8;

#line 477 "hlds_clauses.m"
        {
#line 477 "hlds_clauses.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_clauses__V_8_8, hlds__hlds_clauses__V_4_4, hlds__hlds_clauses__V_6_6);
        }
#line 1698 "hlds.hlds_clauses.c"
        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_8_8 == (MR_Integer) 0);
#line 477 "hlds_clauses.m"
        hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 477 "hlds_clauses.m"
        if (hlds__hlds_clauses__succeeded)
#line 477 "hlds_clauses.m"
          *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_8_8;
#line 477 "hlds_clauses.m"
        else
#line 477 "hlds_clauses.m"
          {
#line 477 "hlds_clauses.m"
            {
#line 477 "hlds_clauses.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[7], hlds__hlds_clauses__HeadVar__1_1, ((MR_Box) (hlds__hlds_clauses__V_5_5)), ((MR_Box) (hlds__hlds_clauses__V_7_7)));
            }
#line 477 "hlds_clauses.m"
          }
#line 477 "hlds_clauses.m"
      }
#line 477 "hlds_clauses.m"
  }
#line 477 "hlds_clauses.m"
}

#line 477 "hlds_clauses.m"
MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clauses_rep_0_0(
#line 477 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__1_1,
#line 477 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2)
#line 477 "hlds_clauses.m"
{
#line 477 "hlds_clauses.m"
  {
#line 477 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 477 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastX_7 = (MR_Integer) hlds__hlds_clauses__HeadVar__1_1;
#line 477 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastY_8 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;

#line 477 "hlds_clauses.m"
    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_7 == hlds__hlds_clauses__CastY_8);
#line 477 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 477 "hlds_clauses.m"
      hlds__hlds_clauses__succeeded = MR_TRUE;
#line 477 "hlds_clauses.m"
    else
#line 477 "hlds_clauses.m"
      {
#line 477 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__TypeInfo_9_9;
#line 477 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 0)));
#line 477 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 1)));
#line 477 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
#line 477 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));

#line 1763 "hlds.hlds_clauses.c"
        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_3_3 == hlds__hlds_clauses__V_5_5);
#line 477 "hlds_clauses.m"
        if (hlds__hlds_clauses__succeeded)
#line 477 "hlds_clauses.m"
          {
#line 1769 "hlds.hlds_clauses.c"
            hlds__hlds_clauses__TypeInfo_9_9 = (MR_Word) &hlds__hlds_clauses_scalar_common_1[7];
#line 1771 "hlds.hlds_clauses.c"
            {
#line 1773 "hlds.hlds_clauses.c"
              hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_9_9, ((MR_Box) (hlds__hlds_clauses__V_4_4)), ((MR_Box) (hlds__hlds_clauses__V_6_6)));
            }
#line 477 "hlds_clauses.m"
          }
#line 477 "hlds_clauses.m"
      }
#line 477 "hlds_clauses.m"
    return hlds__hlds_clauses__succeeded;
#line 477 "hlds_clauses.m"
  }
#line 477 "hlds_clauses.m"
}

#line 45 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses____Compare____clauses_info_0_0(
#line 45 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__1_1,
#line 45 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2,
#line 45 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__3_3)
#line 45 "hlds_clauses.m"
{
#line 45 "hlds_clauses.m"
  {
#line 45 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 45 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastX_33 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;
#line 45 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastY_34 = (MR_Integer) hlds__hlds_clauses__HeadVar__3_3;

#line 45 "hlds_clauses.m"
    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_33 == hlds__hlds_clauses__CastY_34);
#line 45 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 1811 "hlds.hlds_clauses.c"
      *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 0;
#line 45 "hlds_clauses.m"
    else
#line 45 "hlds_clauses.m"
      {
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 2)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 3)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 4)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 5)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 6)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 7)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 8)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 9)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 0)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 1)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 2)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 3)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 4)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 5)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 6)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 7)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 8)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 9)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_24_24;

#line 45 "hlds_clauses.m"
        {
#line 45 "hlds_clauses.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[5], &hlds__hlds_clauses__V_24_24, ((MR_Box) (hlds__hlds_clauses__V_4_4)), ((MR_Box) (hlds__hlds_clauses__V_14_14)));
        }
#line 1865 "hlds.hlds_clauses.c"
        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_24_24 == (MR_Integer) 0);
#line 45 "hlds_clauses.m"
        hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 45 "hlds_clauses.m"
        if (hlds__hlds_clauses__succeeded)
#line 45 "hlds_clauses.m"
          *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_24_24;
#line 45 "hlds_clauses.m"
        else
#line 45 "hlds_clauses.m"
          {
#line 45 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__V_25_25;

#line 45 "hlds_clauses.m"
            {
#line 45 "hlds_clauses.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_2[0], &hlds__hlds_clauses__V_25_25, ((MR_Box) (hlds__hlds_clauses__V_5_5)), ((MR_Box) (hlds__hlds_clauses__V_15_15)));
            }
#line 1885 "hlds.hlds_clauses.c"
            hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_25_25 == (MR_Integer) 0);
#line 45 "hlds_clauses.m"
            hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 45 "hlds_clauses.m"
            if (hlds__hlds_clauses__succeeded)
#line 45 "hlds_clauses.m"
              *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_25_25;
#line 45 "hlds_clauses.m"
            else
#line 45 "hlds_clauses.m"
              {
#line 45 "hlds_clauses.m"
                MR_Word hlds__hlds_clauses__V_26_26;

#line 45 "hlds_clauses.m"
                {
#line 45 "hlds_clauses.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_2[1], &hlds__hlds_clauses__V_26_26, ((MR_Box) (hlds__hlds_clauses__V_6_6)), ((MR_Box) (hlds__hlds_clauses__V_16_16)));
                }
#line 1905 "hlds.hlds_clauses.c"
                hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_26_26 == (MR_Integer) 0);
#line 45 "hlds_clauses.m"
                hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 45 "hlds_clauses.m"
                if (hlds__hlds_clauses__succeeded)
#line 45 "hlds_clauses.m"
                  *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_26_26;
#line 45 "hlds_clauses.m"
                else
#line 45 "hlds_clauses.m"
                  {
#line 45 "hlds_clauses.m"
                    MR_Word hlds__hlds_clauses__V_27_27;

#line 45 "hlds_clauses.m"
                    {
#line 45 "hlds_clauses.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_2[0], &hlds__hlds_clauses__V_27_27, ((MR_Box) (hlds__hlds_clauses__V_7_7)), ((MR_Box) (hlds__hlds_clauses__V_17_17)));
                    }
#line 1925 "hlds.hlds_clauses.c"
                    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_27_27 == (MR_Integer) 0);
#line 45 "hlds_clauses.m"
                    hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 45 "hlds_clauses.m"
                    if (hlds__hlds_clauses__succeeded)
#line 45 "hlds_clauses.m"
                      *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_27_27;
#line 45 "hlds_clauses.m"
                    else
#line 45 "hlds_clauses.m"
                      {
#line 45 "hlds_clauses.m"
                        MR_Word hlds__hlds_clauses__V_28_28;

#line 45 "hlds_clauses.m"
                        {
#line 45 "hlds_clauses.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[6], &hlds__hlds_clauses__V_28_28, ((MR_Box) (hlds__hlds_clauses__V_8_8)), ((MR_Box) (hlds__hlds_clauses__V_18_18)));
                        }
#line 1945 "hlds.hlds_clauses.c"
                        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_28_28 == (MR_Integer) 0);
#line 45 "hlds_clauses.m"
                        hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 45 "hlds_clauses.m"
                        if (hlds__hlds_clauses__succeeded)
#line 45 "hlds_clauses.m"
                          *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_28_28;
#line 45 "hlds_clauses.m"
                        else
#line 45 "hlds_clauses.m"
                          {
#line 45 "hlds_clauses.m"
                            MR_Word hlds__hlds_clauses__V_29_29;

#line 45 "hlds_clauses.m"
                            {
#line 45 "hlds_clauses.m"
                              hlds__hlds_clauses____Compare____clauses_rep_0_0(&hlds__hlds_clauses__V_29_29, hlds__hlds_clauses__V_9_9, hlds__hlds_clauses__V_19_19);
                            }
#line 1965 "hlds.hlds_clauses.c"
                            hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_29_29 == (MR_Integer) 0);
#line 45 "hlds_clauses.m"
                            hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 45 "hlds_clauses.m"
                            if (hlds__hlds_clauses__succeeded)
#line 45 "hlds_clauses.m"
                              *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_29_29;
#line 45 "hlds_clauses.m"
                            else
#line 45 "hlds_clauses.m"
                              {
#line 45 "hlds_clauses.m"
                                MR_Word hlds__hlds_clauses__V_30_30;

#line 45 "hlds_clauses.m"
                                {
#line 45 "hlds_clauses.m"
                                  hlds__hlds_clauses____Compare____clause_item_numbers_0_0(&hlds__hlds_clauses__V_30_30, hlds__hlds_clauses__V_10_10, hlds__hlds_clauses__V_20_20);
                                }
#line 1985 "hlds.hlds_clauses.c"
                                hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_30_30 == (MR_Integer) 0);
#line 45 "hlds_clauses.m"
                                hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 45 "hlds_clauses.m"
                                if (hlds__hlds_clauses__succeeded)
#line 45 "hlds_clauses.m"
                                  *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_30_30;
#line 45 "hlds_clauses.m"
                                else
#line 45 "hlds_clauses.m"
                                  {
#line 45 "hlds_clauses.m"
                                    MR_Word hlds__hlds_clauses__V_31_31;

#line 45 "hlds_clauses.m"
                                    {
#line 45 "hlds_clauses.m"
                                      hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&hlds__hlds_clauses__V_31_31, hlds__hlds_clauses__V_11_11, hlds__hlds_clauses__V_21_21);
                                    }
#line 2005 "hlds.hlds_clauses.c"
                                    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_31_31 == (MR_Integer) 0);
#line 45 "hlds_clauses.m"
                                    hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 45 "hlds_clauses.m"
                                    if (hlds__hlds_clauses__succeeded)
#line 45 "hlds_clauses.m"
                                      *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_31_31;
#line 45 "hlds_clauses.m"
                                    else
#line 45 "hlds_clauses.m"
                                      {
#line 45 "hlds_clauses.m"
                                        MR_Word hlds__hlds_clauses__V_32_32;
#line 45 "hlds_clauses.m"
                                        MR_Integer hlds__hlds_clauses__V_45_45 = (MR_Integer) hlds__hlds_clauses__V_12_12;
#line 45 "hlds_clauses.m"
                                        MR_Integer hlds__hlds_clauses__V_46_46 = (MR_Integer) hlds__hlds_clauses__V_22_22;

#line 45 "hlds_clauses.m"
                                        {
#line 45 "hlds_clauses.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_clauses__V_32_32, hlds__hlds_clauses__V_45_45, hlds__hlds_clauses__V_46_46);
                                        }
#line 2029 "hlds.hlds_clauses.c"
                                        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_32_32 == (MR_Integer) 0);
#line 45 "hlds_clauses.m"
                                        hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 45 "hlds_clauses.m"
                                        if (hlds__hlds_clauses__succeeded)
#line 45 "hlds_clauses.m"
                                          *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_32_32;
#line 45 "hlds_clauses.m"
                                        else
#line 45 "hlds_clauses.m"
                                          {
#line 45 "hlds_clauses.m"
                                            MR_Integer hlds__hlds_clauses__V_47_47 = (MR_Integer) hlds__hlds_clauses__V_13_13;
#line 45 "hlds_clauses.m"
                                            MR_Integer hlds__hlds_clauses__V_48_48 = (MR_Integer) hlds__hlds_clauses__V_23_23;

#line 45 "hlds_clauses.m"
                                            {
#line 45 "hlds_clauses.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_clauses__HeadVar__1_1, hlds__hlds_clauses__V_47_47, hlds__hlds_clauses__V_48_48);
                                            }
#line 45 "hlds_clauses.m"
                                          }
#line 45 "hlds_clauses.m"
                                      }
#line 45 "hlds_clauses.m"
                                  }
#line 45 "hlds_clauses.m"
                              }
#line 45 "hlds_clauses.m"
                          }
#line 45 "hlds_clauses.m"
                      }
#line 45 "hlds_clauses.m"
                  }
#line 45 "hlds_clauses.m"
              }
#line 45 "hlds_clauses.m"
          }
#line 45 "hlds_clauses.m"
      }
#line 45 "hlds_clauses.m"
  }
#line 45 "hlds_clauses.m"
}

#line 45 "hlds_clauses.m"
MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clauses_info_0_0(
#line 45 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__1_1,
#line 45 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2)
#line 45 "hlds_clauses.m"
{
#line 45 "hlds_clauses.m"
  {
#line 45 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 45 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastX_23 = (MR_Integer) hlds__hlds_clauses__HeadVar__1_1;
#line 45 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastY_24 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;

#line 45 "hlds_clauses.m"
    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_23 == hlds__hlds_clauses__CastY_24);
#line 45 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 45 "hlds_clauses.m"
      hlds__hlds_clauses__succeeded = MR_TRUE;
#line 45 "hlds_clauses.m"
    else
#line 45 "hlds_clauses.m"
      {
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__TypeInfo_26_26;
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__TypeInfo_27_27;
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__TypeInfo_28_28;
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__TypeInfo_29_29;
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 0)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 1)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 2)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 3)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 4)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 5)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 6)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 7)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 8)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 9)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 2)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 3)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 4)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 5)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 6)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 7)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 8)));
#line 45 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 9)));

#line 2153 "hlds.hlds_clauses.c"
        {
#line 2155 "hlds.hlds_clauses.c"
          hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[5], ((MR_Box) (hlds__hlds_clauses__V_3_3)), ((MR_Box) (hlds__hlds_clauses__V_13_13)));
        }
#line 45 "hlds_clauses.m"
        if (hlds__hlds_clauses__succeeded)
#line 45 "hlds_clauses.m"
          {
#line 2162 "hlds.hlds_clauses.c"
            hlds__hlds_clauses__TypeInfo_26_26 = (MR_Word) &hlds__hlds_clauses_scalar_common_2[0];
#line 2164 "hlds.hlds_clauses.c"
            {
#line 2166 "hlds.hlds_clauses.c"
              hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_26_26, ((MR_Box) (hlds__hlds_clauses__V_4_4)), ((MR_Box) (hlds__hlds_clauses__V_14_14)));
            }
#line 45 "hlds_clauses.m"
            if (hlds__hlds_clauses__succeeded)
#line 45 "hlds_clauses.m"
              {
#line 2173 "hlds.hlds_clauses.c"
                hlds__hlds_clauses__TypeInfo_27_27 = (MR_Word) &hlds__hlds_clauses_scalar_common_2[1];
#line 2175 "hlds.hlds_clauses.c"
                {
#line 2177 "hlds.hlds_clauses.c"
                  hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_27_27, ((MR_Box) (hlds__hlds_clauses__V_5_5)), ((MR_Box) (hlds__hlds_clauses__V_15_15)));
                }
#line 45 "hlds_clauses.m"
                if (hlds__hlds_clauses__succeeded)
#line 45 "hlds_clauses.m"
                  {
#line 2184 "hlds.hlds_clauses.c"
                    hlds__hlds_clauses__TypeInfo_28_28 = (MR_Word) &hlds__hlds_clauses_scalar_common_2[0];
#line 2186 "hlds.hlds_clauses.c"
                    {
#line 2188 "hlds.hlds_clauses.c"
                      hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_28_28, ((MR_Box) (hlds__hlds_clauses__V_6_6)), ((MR_Box) (hlds__hlds_clauses__V_16_16)));
                    }
#line 45 "hlds_clauses.m"
                    if (hlds__hlds_clauses__succeeded)
#line 45 "hlds_clauses.m"
                      {
#line 2195 "hlds.hlds_clauses.c"
                        hlds__hlds_clauses__TypeInfo_29_29 = (MR_Word) &hlds__hlds_clauses_scalar_common_1[6];
#line 2197 "hlds.hlds_clauses.c"
                        {
#line 2199 "hlds.hlds_clauses.c"
                          hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_29_29, ((MR_Box) (hlds__hlds_clauses__V_7_7)), ((MR_Box) (hlds__hlds_clauses__V_17_17)));
                        }
#line 45 "hlds_clauses.m"
                        if (hlds__hlds_clauses__succeeded)
#line 45 "hlds_clauses.m"
                          {
#line 2206 "hlds.hlds_clauses.c"
                            {
#line 2208 "hlds.hlds_clauses.c"
                              hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clauses_rep_0_0(hlds__hlds_clauses__V_8_8, hlds__hlds_clauses__V_18_18);
                            }
#line 45 "hlds_clauses.m"
                            if (hlds__hlds_clauses__succeeded)
#line 45 "hlds_clauses.m"
                              {
#line 2215 "hlds.hlds_clauses.c"
                                {
#line 2217 "hlds.hlds_clauses.c"
                                  hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_item_numbers_0_0(hlds__hlds_clauses__V_9_9, hlds__hlds_clauses__V_19_19);
                                }
#line 45 "hlds_clauses.m"
                                if (hlds__hlds_clauses__succeeded)
#line 45 "hlds_clauses.m"
                                  {
#line 2224 "hlds.hlds_clauses.c"
                                    {
#line 2226 "hlds.hlds_clauses.c"
                                      hlds__hlds_clauses__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(hlds__hlds_clauses__V_10_10, hlds__hlds_clauses__V_20_20);
                                    }
#line 45 "hlds_clauses.m"
                                    if (hlds__hlds_clauses__succeeded)
#line 45 "hlds_clauses.m"
                                      {
#line 2233 "hlds.hlds_clauses.c"
                                        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_11_11 == hlds__hlds_clauses__V_21_21);
#line 45 "hlds_clauses.m"
                                        if (hlds__hlds_clauses__succeeded)
#line 2237 "hlds.hlds_clauses.c"
                                          hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_12_12 == hlds__hlds_clauses__V_22_22);
#line 45 "hlds_clauses.m"
                                      }
#line 45 "hlds_clauses.m"
                                  }
#line 45 "hlds_clauses.m"
                              }
#line 45 "hlds_clauses.m"
                          }
#line 45 "hlds_clauses.m"
                      }
#line 45 "hlds_clauses.m"
                  }
#line 45 "hlds_clauses.m"
              }
#line 45 "hlds_clauses.m"
          }
#line 45 "hlds_clauses.m"
      }
#line 45 "hlds_clauses.m"
    return hlds__hlds_clauses__succeeded;
#line 45 "hlds_clauses.m"
  }
#line 45 "hlds_clauses.m"
}

#line 299 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_numbers_0_0(
#line 299 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__1_1,
#line 299 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2,
#line 299 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__3_3)
#line 299 "hlds_clauses.m"
{
#line 299 "hlds_clauses.m"
  {
#line 299 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 299 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastX_13 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;
#line 299 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastY_14 = (MR_Integer) hlds__hlds_clauses__HeadVar__3_3;

#line 299 "hlds_clauses.m"
    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_13 == hlds__hlds_clauses__CastY_14);
#line 299 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 2288 "hlds.hlds_clauses.c"
      *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 0;
#line 299 "hlds_clauses.m"
    else
#line 299 "hlds_clauses.m"
    if ((hlds__hlds_clauses__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 299 "hlds_clauses.m"
      if ((hlds__hlds_clauses__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 299 "hlds_clauses.m"
        *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 0;
#line 299 "hlds_clauses.m"
      else
#line 2300 "hlds.hlds_clauses.c"
        *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 2;
#line 299 "hlds_clauses.m"
    else
#line 299 "hlds_clauses.m"
      {
#line 299 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
#line 299 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));

#line 299 "hlds_clauses.m"
        if ((hlds__hlds_clauses__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2313 "hlds.hlds_clauses.c"
          *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 1;
#line 299 "hlds_clauses.m"
        else
#line 299 "hlds_clauses.m"
          {
#line 299 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 0)));
#line 299 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 1)));
#line 299 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__V_8_8;

#line 299 "hlds_clauses.m"
            {
#line 299 "hlds_clauses.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[4], &hlds__hlds_clauses__V_8_8, ((MR_Box) (hlds__hlds_clauses__V_18_18)), ((MR_Box) (hlds__hlds_clauses__V_6_6)));
            }
#line 2331 "hlds.hlds_clauses.c"
            hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_8_8 == (MR_Integer) 0);
#line 299 "hlds_clauses.m"
            hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 299 "hlds_clauses.m"
            if (hlds__hlds_clauses__succeeded)
#line 299 "hlds_clauses.m"
              *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_8_8;
#line 299 "hlds_clauses.m"
            else
#line 299 "hlds_clauses.m"
              {
#line 299 "hlds_clauses.m"
                {
#line 299 "hlds_clauses.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[4], hlds__hlds_clauses__HeadVar__1_1, ((MR_Box) (hlds__hlds_clauses__V_17_17)), ((MR_Box) (hlds__hlds_clauses__V_7_7)));
                }
#line 299 "hlds_clauses.m"
              }
#line 299 "hlds_clauses.m"
          }
#line 299 "hlds_clauses.m"
      }
#line 299 "hlds_clauses.m"
  }
#line 299 "hlds_clauses.m"
}

#line 299 "hlds_clauses.m"
MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_numbers_0_0(
#line 299 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__1_1,
#line 299 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2)
#line 299 "hlds_clauses.m"
{
#line 299 "hlds_clauses.m"
  {
#line 299 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 299 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastX_9 = (MR_Integer) hlds__hlds_clauses__HeadVar__1_1;
#line 299 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastY_10 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;

#line 299 "hlds_clauses.m"
    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_9 == hlds__hlds_clauses__CastY_10);
#line 299 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 299 "hlds_clauses.m"
      hlds__hlds_clauses__succeeded = MR_TRUE;
#line 299 "hlds_clauses.m"
    else
#line 299 "hlds_clauses.m"
    if ((hlds__hlds_clauses__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 299 "hlds_clauses.m"
      {
#line 299 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__CastX_7 = (MR_Integer) hlds__hlds_clauses__HeadVar__1_1;
#line 299 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__CastY_8 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;

#line 299 "hlds_clauses.m"
        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastY_8 == hlds__hlds_clauses__CastX_7);
#line 299 "hlds_clauses.m"
      }
#line 299 "hlds_clauses.m"
    else
#line 299 "hlds_clauses.m"
      {
#line 299 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__TypeInfo_11_11;
#line 299 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__TypeInfo_12_12;
#line 299 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 0)));
#line 299 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 1)));
#line 299 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_5_5;
#line 299 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_6_6;

#line 299 "hlds_clauses.m"
        hlds__hlds_clauses__succeeded = ((MR_tag((MR_Word) hlds__hlds_clauses__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 299 "hlds_clauses.m"
        if (hlds__hlds_clauses__succeeded)
#line 299 "hlds_clauses.m"
          {
#line 299 "hlds_clauses.m"
            hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
#line 299 "hlds_clauses.m"
            hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
#line 2425 "hlds.hlds_clauses.c"
            hlds__hlds_clauses__TypeInfo_11_11 = (MR_Word) &hlds__hlds_clauses_scalar_common_1[4];
#line 2427 "hlds.hlds_clauses.c"
            {
#line 2429 "hlds.hlds_clauses.c"
              hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_11_11, ((MR_Box) (hlds__hlds_clauses__V_3_3)), ((MR_Box) (hlds__hlds_clauses__V_5_5)));
            }
#line 299 "hlds_clauses.m"
            if (hlds__hlds_clauses__succeeded)
#line 299 "hlds_clauses.m"
              {
#line 2436 "hlds.hlds_clauses.c"
                hlds__hlds_clauses__TypeInfo_12_12 = (MR_Word) &hlds__hlds_clauses_scalar_common_1[4];
#line 2438 "hlds.hlds_clauses.c"
                {
#line 2440 "hlds.hlds_clauses.c"
                  hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_12_12, ((MR_Box) (hlds__hlds_clauses__V_4_4)), ((MR_Box) (hlds__hlds_clauses__V_6_6)));
                }
#line 299 "hlds_clauses.m"
              }
#line 299 "hlds_clauses.m"
          }
#line 299 "hlds_clauses.m"
      }
#line 299 "hlds_clauses.m"
    return hlds__hlds_clauses__succeeded;
#line 299 "hlds_clauses.m"
  }
#line 299 "hlds_clauses.m"
}

#line 266 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_types_0_0(
#line 266 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__1_1,
#line 266 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2,
#line 266 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__3_3)
#line 266 "hlds_clauses.m"
{
#line 266 "hlds_clauses.m"
  {
#line 266 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 266 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;
#line 266 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_clauses__HeadVar__3_3;

#line 266 "hlds_clauses.m"
    {
#line 266 "hlds_clauses.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_clauses__HeadVar__1_1, hlds__hlds_clauses__Cast_HeadVar1_4, hlds__hlds_clauses__Cast_HeadVar2_5);
    }
#line 266 "hlds_clauses.m"
  }
#line 266 "hlds_clauses.m"
}

#line 266 "hlds_clauses.m"
MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_types_0_0(
#line 266 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_1,
#line 266 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2)
#line 266 "hlds_clauses.m"
{
#line 2495 "hlds.hlds_clauses.c"
  {
#line 2497 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__HeadVar__2_1 == hlds__hlds_clauses__HeadVar__2_2);

#line 2500 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 2502 "hlds.hlds_clauses.c"
  }
#line 266 "hlds_clauses.m"
}

#line 275 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_type_0_0(
#line 275 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__1_1,
#line 275 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2,
#line 275 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__3_3)
#line 275 "hlds_clauses.m"
{
#line 275 "hlds_clauses.m"
  {
#line 275 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 275 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;
#line 275 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_clauses__HeadVar__3_3;

#line 275 "hlds_clauses.m"
    {
#line 275 "hlds_clauses.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_clauses__HeadVar__1_1, hlds__hlds_clauses__Cast_HeadVar1_4, hlds__hlds_clauses__Cast_HeadVar2_5);
    }
#line 275 "hlds_clauses.m"
  }
#line 275 "hlds_clauses.m"
}

#line 275 "hlds_clauses.m"
MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_type_0_0(
#line 275 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_1,
#line 275 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2)
#line 275 "hlds_clauses.m"
{
#line 2546 "hlds.hlds_clauses.c"
  {
#line 2548 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__HeadVar__2_1 == hlds__hlds_clauses__HeadVar__2_2);

#line 2551 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 2553 "hlds.hlds_clauses.c"
  }
#line 275 "hlds_clauses.m"
}

#line 258 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_region_0_0(
#line 258 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__1_1,
#line 258 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2,
#line 258 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__3_3)
#line 258 "hlds_clauses.m"
{
#line 258 "hlds_clauses.m"
  {
#line 258 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 258 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastX_15 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;
#line 258 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastY_16 = (MR_Integer) hlds__hlds_clauses__HeadVar__3_3;

#line 258 "hlds_clauses.m"
    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_15 == hlds__hlds_clauses__CastY_16);
#line 258 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 2582 "hlds.hlds_clauses.c"
      *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 0;
#line 258 "hlds_clauses.m"
    else
#line 258 "hlds_clauses.m"
      {
#line 258 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
#line 258 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
#line 258 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 2)));
#line 258 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 3)));
#line 258 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 0)));
#line 258 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 1)));
#line 258 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 2)));
#line 258 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 3)));
#line 258 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_12_12;

#line 258 "hlds_clauses.m"
        {
#line 258 "hlds_clauses.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_clauses__V_12_12, hlds__hlds_clauses__V_4_4, hlds__hlds_clauses__V_8_8);
        }
#line 2612 "hlds.hlds_clauses.c"
        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_12_12 == (MR_Integer) 0);
#line 258 "hlds_clauses.m"
        hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 258 "hlds_clauses.m"
        if (hlds__hlds_clauses__succeeded)
#line 258 "hlds_clauses.m"
          *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_12_12;
#line 258 "hlds_clauses.m"
        else
#line 258 "hlds_clauses.m"
          {
#line 258 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__V_13_13;

#line 258 "hlds_clauses.m"
            {
#line 258 "hlds_clauses.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_clauses__V_13_13, hlds__hlds_clauses__V_5_5, hlds__hlds_clauses__V_9_9);
            }
#line 2632 "hlds.hlds_clauses.c"
            hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_13_13 == (MR_Integer) 0);
#line 258 "hlds_clauses.m"
            hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 258 "hlds_clauses.m"
            if (hlds__hlds_clauses__succeeded)
#line 258 "hlds_clauses.m"
              *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_13_13;
#line 258 "hlds_clauses.m"
            else
#line 258 "hlds_clauses.m"
              {
#line 258 "hlds_clauses.m"
                MR_Word hlds__hlds_clauses__V_14_14;

#line 258 "hlds_clauses.m"
                {
#line 258 "hlds_clauses.m"
                  mercury__term____Compare____context_0_0(&hlds__hlds_clauses__V_14_14, hlds__hlds_clauses__V_6_6, hlds__hlds_clauses__V_10_10);
                }
#line 2652 "hlds.hlds_clauses.c"
                hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_14_14 == (MR_Integer) 0);
#line 258 "hlds_clauses.m"
                hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 258 "hlds_clauses.m"
                if (hlds__hlds_clauses__succeeded)
#line 258 "hlds_clauses.m"
                  *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_14_14;
#line 258 "hlds_clauses.m"
                else
#line 258 "hlds_clauses.m"
                  {
#line 258 "hlds_clauses.m"
                    mercury__term____Compare____context_0_0(hlds__hlds_clauses__HeadVar__1_1, hlds__hlds_clauses__V_7_7, hlds__hlds_clauses__V_11_11);
                  }
#line 258 "hlds_clauses.m"
              }
#line 258 "hlds_clauses.m"
          }
#line 258 "hlds_clauses.m"
      }
#line 258 "hlds_clauses.m"
  }
#line 258 "hlds_clauses.m"
}

#line 258 "hlds_clauses.m"
MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_region_0_0(
#line 258 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__1_1,
#line 258 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2)
#line 258 "hlds_clauses.m"
{
#line 258 "hlds_clauses.m"
  {
#line 258 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 258 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastX_11 = (MR_Integer) hlds__hlds_clauses__HeadVar__1_1;
#line 258 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastY_12 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;

#line 258 "hlds_clauses.m"
    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_11 == hlds__hlds_clauses__CastY_12);
#line 258 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 258 "hlds_clauses.m"
      hlds__hlds_clauses__succeeded = MR_TRUE;
#line 258 "hlds_clauses.m"
    else
#line 258 "hlds_clauses.m"
      {
#line 258 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 0)));
#line 258 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 1)));
#line 258 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 2)));
#line 258 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 3)));
#line 258 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
#line 258 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
#line 258 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 2)));
#line 258 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 3)));

#line 2723 "hlds.hlds_clauses.c"
        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_3_3 == hlds__hlds_clauses__V_7_7);
#line 258 "hlds_clauses.m"
        if (hlds__hlds_clauses__succeeded)
#line 258 "hlds_clauses.m"
          {
#line 2729 "hlds.hlds_clauses.c"
            hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_4_4 == hlds__hlds_clauses__V_8_8);
#line 258 "hlds_clauses.m"
            if (hlds__hlds_clauses__succeeded)
#line 258 "hlds_clauses.m"
              {
#line 2735 "hlds.hlds_clauses.c"
                {
#line 2737 "hlds.hlds_clauses.c"
                  hlds__hlds_clauses__succeeded = mercury__term____Unify____context_0_0(hlds__hlds_clauses__V_5_5, hlds__hlds_clauses__V_9_9);
                }
#line 258 "hlds_clauses.m"
                if (hlds__hlds_clauses__succeeded)
#line 2742 "hlds.hlds_clauses.c"
                  {
#line 2744 "hlds.hlds_clauses.c"
                    hlds__hlds_clauses__succeeded = mercury__term____Unify____context_0_0(hlds__hlds_clauses__V_6_6, hlds__hlds_clauses__V_10_10);
                  }
#line 258 "hlds_clauses.m"
              }
#line 258 "hlds_clauses.m"
          }
#line 258 "hlds_clauses.m"
      }
#line 258 "hlds_clauses.m"
    return hlds__hlds_clauses__succeeded;
#line 258 "hlds_clauses.m"
  }
#line 258 "hlds_clauses.m"
}

#line 228 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses____Compare____clause_applicable_modes_0_0(
#line 228 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__1_1,
#line 228 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2,
#line 228 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__3_3)
#line 228 "hlds_clauses.m"
{
#line 228 "hlds_clauses.m"
  {
#line 228 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 228 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastX_8 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;
#line 228 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastY_9 = (MR_Integer) hlds__hlds_clauses__HeadVar__3_3;

#line 228 "hlds_clauses.m"
    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_8 == hlds__hlds_clauses__CastY_9);
#line 228 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 2784 "hlds.hlds_clauses.c"
      *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 0;
#line 228 "hlds_clauses.m"
    else
#line 228 "hlds_clauses.m"
    if ((hlds__hlds_clauses__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 228 "hlds_clauses.m"
      if ((hlds__hlds_clauses__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 228 "hlds_clauses.m"
        *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 0;
#line 228 "hlds_clauses.m"
      else
#line 2796 "hlds.hlds_clauses.c"
        *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 1;
#line 228 "hlds_clauses.m"
    else
#line 228 "hlds_clauses.m"
      {
#line 228 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));

#line 228 "hlds_clauses.m"
        if ((hlds__hlds_clauses__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2807 "hlds.hlds_clauses.c"
          *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 2;
#line 228 "hlds_clauses.m"
        else
#line 228 "hlds_clauses.m"
          {
#line 228 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 0)));

#line 228 "hlds_clauses.m"
            {
#line 228 "hlds_clauses.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[3], hlds__hlds_clauses__HeadVar__1_1, ((MR_Box) (hlds__hlds_clauses__V_11_11)), ((MR_Box) (hlds__hlds_clauses__V_7_7)));
            }
#line 228 "hlds_clauses.m"
          }
#line 228 "hlds_clauses.m"
      }
#line 228 "hlds_clauses.m"
  }
#line 228 "hlds_clauses.m"
}

#line 228 "hlds_clauses.m"
MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_applicable_modes_0_0(
#line 228 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__1_1,
#line 228 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2)
#line 228 "hlds_clauses.m"
{
#line 228 "hlds_clauses.m"
  {
#line 228 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 228 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastX_7 = (MR_Integer) hlds__hlds_clauses__HeadVar__1_1;
#line 228 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastY_8 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;

#line 228 "hlds_clauses.m"
    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_7 == hlds__hlds_clauses__CastY_8);
#line 228 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 228 "hlds_clauses.m"
      hlds__hlds_clauses__succeeded = MR_TRUE;
#line 228 "hlds_clauses.m"
    else
#line 228 "hlds_clauses.m"
    if ((hlds__hlds_clauses__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 228 "hlds_clauses.m"
      {
#line 228 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__CastX_3 = (MR_Integer) hlds__hlds_clauses__HeadVar__1_1;
#line 228 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__CastY_4 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;

#line 228 "hlds_clauses.m"
        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastY_4 == hlds__hlds_clauses__CastX_3);
#line 228 "hlds_clauses.m"
      }
#line 228 "hlds_clauses.m"
    else
#line 228 "hlds_clauses.m"
      {
#line 228 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__TypeInfo_9_9;
#line 228 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 0)));
#line 228 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_6_6;

#line 228 "hlds_clauses.m"
        hlds__hlds_clauses__succeeded = ((MR_tag((MR_Word) hlds__hlds_clauses__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 228 "hlds_clauses.m"
        if (hlds__hlds_clauses__succeeded)
#line 228 "hlds_clauses.m"
          {
#line 228 "hlds_clauses.m"
            hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
#line 2888 "hlds.hlds_clauses.c"
            hlds__hlds_clauses__TypeInfo_9_9 = (MR_Word) &hlds__hlds_clauses_scalar_common_1[3];
#line 2890 "hlds.hlds_clauses.c"
            {
#line 2892 "hlds.hlds_clauses.c"
              hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_9_9, ((MR_Box) (hlds__hlds_clauses__V_5_5)), ((MR_Box) (hlds__hlds_clauses__V_6_6)));
            }
#line 228 "hlds_clauses.m"
          }
#line 228 "hlds_clauses.m"
      }
#line 228 "hlds_clauses.m"
    return hlds__hlds_clauses__succeeded;
#line 228 "hlds_clauses.m"
  }
#line 228 "hlds_clauses.m"
}

#line 216 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses____Compare____clause_0_0(
#line 216 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__1_1,
#line 216 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2,
#line 216 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__3_3)
#line 216 "hlds_clauses.m"
{
#line 216 "hlds_clauses.m"
  {
#line 216 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 216 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastX_18 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;
#line 216 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastY_19 = (MR_Integer) hlds__hlds_clauses__HeadVar__3_3;

#line 216 "hlds_clauses.m"
    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_18 == hlds__hlds_clauses__CastY_19);
#line 216 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 2930 "hlds.hlds_clauses.c"
      *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 0;
#line 216 "hlds_clauses.m"
    else
#line 216 "hlds_clauses.m"
      {
#line 216 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
#line 216 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
#line 216 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 2)));
#line 216 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 3)));
#line 216 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 4)));
#line 216 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 0)));
#line 216 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 1)));
#line 216 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 2)));
#line 216 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 3)));
#line 216 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 4)));
#line 216 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_14_14;

#line 216 "hlds_clauses.m"
        {
#line 216 "hlds_clauses.m"
          hlds__hlds_clauses____Compare____clause_applicable_modes_0_0(&hlds__hlds_clauses__V_14_14, hlds__hlds_clauses__V_4_4, hlds__hlds_clauses__V_9_9);
        }
#line 2964 "hlds.hlds_clauses.c"
        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_14_14 == (MR_Integer) 0);
#line 216 "hlds_clauses.m"
        hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 216 "hlds_clauses.m"
        if (hlds__hlds_clauses__succeeded)
#line 216 "hlds_clauses.m"
          *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_14_14;
#line 216 "hlds_clauses.m"
        else
#line 216 "hlds_clauses.m"
          {
#line 216 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__V_15_15;

#line 216 "hlds_clauses.m"
            {
#line 216 "hlds_clauses.m"
              hlds__hlds_goal____Compare____hlds_goal_0_0(&hlds__hlds_clauses__V_15_15, hlds__hlds_clauses__V_5_5, hlds__hlds_clauses__V_10_10);
            }
#line 2984 "hlds.hlds_clauses.c"
            hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_15_15 == (MR_Integer) 0);
#line 216 "hlds_clauses.m"
            hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 216 "hlds_clauses.m"
            if (hlds__hlds_clauses__succeeded)
#line 216 "hlds_clauses.m"
              *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_15_15;
#line 216 "hlds_clauses.m"
            else
#line 216 "hlds_clauses.m"
              {
#line 216 "hlds_clauses.m"
                MR_Word hlds__hlds_clauses__V_16_16;

#line 216 "hlds_clauses.m"
                {
#line 216 "hlds_clauses.m"
                  hlds__hlds_pred____Compare____implementation_language_0_0(&hlds__hlds_clauses__V_16_16, hlds__hlds_clauses__V_6_6, hlds__hlds_clauses__V_11_11);
                }
#line 3004 "hlds.hlds_clauses.c"
                hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_16_16 == (MR_Integer) 0);
#line 216 "hlds_clauses.m"
                hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 216 "hlds_clauses.m"
                if (hlds__hlds_clauses__succeeded)
#line 216 "hlds_clauses.m"
                  *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_16_16;
#line 216 "hlds_clauses.m"
                else
#line 216 "hlds_clauses.m"
                  {
#line 216 "hlds_clauses.m"
                    MR_Word hlds__hlds_clauses__V_17_17;

#line 216 "hlds_clauses.m"
                    {
#line 216 "hlds_clauses.m"
                      mercury__term____Compare____context_0_0(&hlds__hlds_clauses__V_17_17, hlds__hlds_clauses__V_7_7, hlds__hlds_clauses__V_12_12);
                    }
#line 3024 "hlds.hlds_clauses.c"
                    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_17_17 == (MR_Integer) 0);
#line 216 "hlds_clauses.m"
                    hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 216 "hlds_clauses.m"
                    if (hlds__hlds_clauses__succeeded)
#line 216 "hlds_clauses.m"
                      *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_17_17;
#line 216 "hlds_clauses.m"
                    else
#line 216 "hlds_clauses.m"
                      {
#line 216 "hlds_clauses.m"
                        {
#line 216 "hlds_clauses.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[2], hlds__hlds_clauses__HeadVar__1_1, ((MR_Box) (hlds__hlds_clauses__V_8_8)), ((MR_Box) (hlds__hlds_clauses__V_13_13)));
                        }
#line 216 "hlds_clauses.m"
                      }
#line 216 "hlds_clauses.m"
                  }
#line 216 "hlds_clauses.m"
              }
#line 216 "hlds_clauses.m"
          }
#line 216 "hlds_clauses.m"
      }
#line 216 "hlds_clauses.m"
  }
#line 216 "hlds_clauses.m"
}

#line 216 "hlds_clauses.m"
MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_0_0(
#line 216 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__1_1,
#line 216 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2)
#line 216 "hlds_clauses.m"
{
#line 216 "hlds_clauses.m"
  {
#line 216 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 216 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastX_13 = (MR_Integer) hlds__hlds_clauses__HeadVar__1_1;
#line 216 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastY_14 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;

#line 216 "hlds_clauses.m"
    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_13 == hlds__hlds_clauses__CastY_14);
#line 216 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 216 "hlds_clauses.m"
      hlds__hlds_clauses__succeeded = MR_TRUE;
#line 216 "hlds_clauses.m"
    else
#line 216 "hlds_clauses.m"
      {
#line 216 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__TypeInfo_18_18;
#line 216 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 0)));
#line 216 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 1)));
#line 216 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 2)));
#line 216 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 3)));
#line 216 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 4)));
#line 216 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
#line 216 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
#line 216 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 2)));
#line 216 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 3)));
#line 216 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 4)));

#line 3107 "hlds.hlds_clauses.c"
        {
#line 3109 "hlds.hlds_clauses.c"
          hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_applicable_modes_0_0(hlds__hlds_clauses__V_3_3, hlds__hlds_clauses__V_8_8);
        }
#line 216 "hlds_clauses.m"
        if (hlds__hlds_clauses__succeeded)
#line 216 "hlds_clauses.m"
          {
#line 3116 "hlds.hlds_clauses.c"
            {
#line 3118 "hlds.hlds_clauses.c"
              hlds__hlds_clauses__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(hlds__hlds_clauses__V_4_4, hlds__hlds_clauses__V_9_9);
            }
#line 216 "hlds_clauses.m"
            if (hlds__hlds_clauses__succeeded)
#line 216 "hlds_clauses.m"
              {
#line 3125 "hlds.hlds_clauses.c"
                {
#line 3127 "hlds.hlds_clauses.c"
                  hlds__hlds_clauses__succeeded = hlds__hlds_pred____Unify____implementation_language_0_0(hlds__hlds_clauses__V_5_5, hlds__hlds_clauses__V_10_10);
                }
#line 216 "hlds_clauses.m"
                if (hlds__hlds_clauses__succeeded)
#line 216 "hlds_clauses.m"
                  {
#line 3134 "hlds.hlds_clauses.c"
                    {
#line 3136 "hlds.hlds_clauses.c"
                      hlds__hlds_clauses__succeeded = mercury__term____Unify____context_0_0(hlds__hlds_clauses__V_6_6, hlds__hlds_clauses__V_11_11);
                    }
#line 216 "hlds_clauses.m"
                    if (hlds__hlds_clauses__succeeded)
#line 216 "hlds_clauses.m"
                      {
#line 3143 "hlds.hlds_clauses.c"
                        hlds__hlds_clauses__TypeInfo_18_18 = (MR_Word) &hlds__hlds_clauses_scalar_common_1[2];
#line 3145 "hlds.hlds_clauses.c"
                        {
#line 3147 "hlds.hlds_clauses.c"
                          hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_18_18, ((MR_Box) (hlds__hlds_clauses__V_7_7)), ((MR_Box) (hlds__hlds_clauses__V_12_12)));
                        }
#line 216 "hlds_clauses.m"
                      }
#line 216 "hlds_clauses.m"
                  }
#line 216 "hlds_clauses.m"
              }
#line 216 "hlds_clauses.m"
          }
#line 216 "hlds_clauses.m"
      }
#line 216 "hlds_clauses.m"
    return hlds__hlds_clauses__succeeded;
#line 216 "hlds_clauses.m"
  }
#line 216 "hlds_clauses.m"
}

#line 369 "hlds_clauses.m"
static void MR_CALL 
hlds__hlds_clauses__add_clause_item_number_regions_4_p_0(
#line 369 "hlds_clauses.m"
  MR_Integer hlds__hlds_clauses__ItemNum_5,
#line 369 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__Context_6,
#line 369 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_Regions_0_23,
#line 369 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_Regions_24)
#line 369 "hlds_clauses.m"
{
#line 375 "hlds_clauses.m"
  {
#line 375 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;

#line 375 "hlds_clauses.m"
    if ((hlds__hlds_clauses__STATE_VARIABLE_Regions_0_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 375 "hlds_clauses.m"
      {
#line 375 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__NewRegion_8;

#line 376 "hlds_clauses.m"
        {
#line 376 "hlds_clauses.m"
          hlds__hlds_clauses__NewRegion_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 376 "hlds_clauses.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_clauses__NewRegion_8, 0) = ((MR_Box) (hlds__hlds_clauses__ItemNum_5));
#line 376 "hlds_clauses.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_clauses__NewRegion_8, 1) = ((MR_Box) (hlds__hlds_clauses__ItemNum_5));
#line 376 "hlds_clauses.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_clauses__NewRegion_8, 2) = ((MR_Box) (hlds__hlds_clauses__Context_6));
#line 376 "hlds_clauses.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_clauses__NewRegion_8, 3) = ((MR_Box) (hlds__hlds_clauses__Context_6));
#line 376 "hlds_clauses.m"
        }
#line 378 "hlds_clauses.m"
        {
#line 378 "hlds_clauses.m"
          MR_Word base;
#line 378 "hlds_clauses.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 378 "hlds_clauses.m"
          *hlds__hlds_clauses__STATE_VARIABLE_Regions_24 = base;
#line 378 "hlds_clauses.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_clauses__NewRegion_8));
#line 378 "hlds_clauses.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 378 "hlds_clauses.m"
        }
#line 375 "hlds_clauses.m"
      }
#line 375 "hlds_clauses.m"
    else
#line 380 "hlds_clauses.m"
      {
#line 380 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__FirstRegion0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__STATE_VARIABLE_Regions_0_23, (MR_Integer) 0)));
#line 380 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__LaterRegions0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__STATE_VARIABLE_Regions_0_23, (MR_Integer) 1)));
#line 380 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__LowerNum0_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion0_9, (MR_Integer) 0)));
#line 380 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__UpperNum0_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion0_9, (MR_Integer) 1)));
#line 380 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__LowerContext0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion0_9, (MR_Integer) 2)));
#line 380 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__UpperContext0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion0_9, (MR_Integer) 3)));
#line 383 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_25_25 = (hlds__hlds_clauses__LowerNum0_11 - (MR_Integer) 1);

#line 383 "hlds_clauses.m"
        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__ItemNum_5 < hlds__hlds_clauses__V_25_25);
#line 383 "hlds_clauses.m"
        if (hlds__hlds_clauses__succeeded)
#line 385 "hlds_clauses.m"
          {
#line 385 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__NewRegion_49;

#line 384 "hlds_clauses.m"
            {
#line 384 "hlds_clauses.m"
              hlds__hlds_clauses__NewRegion_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 384 "hlds_clauses.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_clauses__NewRegion_49, 0) = ((MR_Box) (hlds__hlds_clauses__ItemNum_5));
#line 384 "hlds_clauses.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_clauses__NewRegion_49, 1) = ((MR_Box) (hlds__hlds_clauses__ItemNum_5));
#line 384 "hlds_clauses.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_clauses__NewRegion_49, 2) = ((MR_Box) (hlds__hlds_clauses__Context_6));
#line 384 "hlds_clauses.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_clauses__NewRegion_49, 3) = ((MR_Box) (hlds__hlds_clauses__Context_6));
#line 384 "hlds_clauses.m"
            }
#line 386 "hlds_clauses.m"
            {
#line 386 "hlds_clauses.m"
              MR_Word base;
#line 386 "hlds_clauses.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 386 "hlds_clauses.m"
              *hlds__hlds_clauses__STATE_VARIABLE_Regions_24 = base;
#line 386 "hlds_clauses.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_clauses__NewRegion_49));
#line 386 "hlds_clauses.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hlds_clauses__STATE_VARIABLE_Regions_0_23));
#line 386 "hlds_clauses.m"
            }
#line 385 "hlds_clauses.m"
          }
#line 383 "hlds_clauses.m"
        else
#line 387 "hlds_clauses.m"
          {
#line 387 "hlds_clauses.m"
            MR_Integer hlds__hlds_clauses__V_31_31 = (hlds__hlds_clauses__LowerNum0_11 - hlds__hlds_clauses__ItemNum_5);

#line 387 "hlds_clauses.m"
            hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_31_31 == (MR_Integer) 1);
#line 387 "hlds_clauses.m"
            if (hlds__hlds_clauses__succeeded)
#line 389 "hlds_clauses.m"
              {
#line 389 "hlds_clauses.m"
                MR_Word hlds__hlds_clauses__FirstRegion_15;

#line 388 "hlds_clauses.m"
                {
#line 388 "hlds_clauses.m"
                  hlds__hlds_clauses__FirstRegion_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 388 "hlds_clauses.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_15, 0) = ((MR_Box) (hlds__hlds_clauses__ItemNum_5));
#line 388 "hlds_clauses.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_15, 1) = ((MR_Box) (hlds__hlds_clauses__UpperNum0_12));
#line 388 "hlds_clauses.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_15, 2) = ((MR_Box) (hlds__hlds_clauses__Context_6));
#line 388 "hlds_clauses.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_15, 3) = ((MR_Box) (hlds__hlds_clauses__UpperContext0_14));
#line 388 "hlds_clauses.m"
                }
#line 390 "hlds_clauses.m"
                {
#line 390 "hlds_clauses.m"
                  MR_Word base;
#line 390 "hlds_clauses.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "hlds_clauses.m"
                  *hlds__hlds_clauses__STATE_VARIABLE_Regions_24 = base;
#line 390 "hlds_clauses.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_clauses__FirstRegion_15));
#line 390 "hlds_clauses.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hlds_clauses__LaterRegions0_10));
#line 390 "hlds_clauses.m"
                }
#line 389 "hlds_clauses.m"
              }
#line 387 "hlds_clauses.m"
            else
#line 391 "hlds_clauses.m"
              {
#line 391 "hlds_clauses.m"
                hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__ItemNum_5 <= hlds__hlds_clauses__UpperNum0_12);
#line 391 "hlds_clauses.m"
                if (hlds__hlds_clauses__succeeded)
#line 392 "hlds_clauses.m"
                  {
#line 392 "hlds_clauses.m"
                    {
#line 392 "hlds_clauses.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_clauses", (MR_String) "predicate \140hlds.hlds_clauses.add_clause_item_number_regions\'/4", (MR_String) "duplicate item number");
#line 392 "hlds_clauses.m"
                      return;
                    }
#line 392 "hlds_clauses.m"
                  }
#line 391 "hlds_clauses.m"
                else
#line 393 "hlds_clauses.m"
                  {
#line 393 "hlds_clauses.m"
                    MR_Integer hlds__hlds_clauses__V_36_36 = (hlds__hlds_clauses__ItemNum_5 - hlds__hlds_clauses__UpperNum0_12);

#line 393 "hlds_clauses.m"
                    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_36_36 == (MR_Integer) 1);
#line 393 "hlds_clauses.m"
                    if (hlds__hlds_clauses__succeeded)
#line 395 "hlds_clauses.m"
                      {
#line 395 "hlds_clauses.m"
                        MR_Word hlds__hlds_clauses__FirstRegion_50;

#line 394 "hlds_clauses.m"
                        {
#line 394 "hlds_clauses.m"
                          hlds__hlds_clauses__FirstRegion_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 394 "hlds_clauses.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_50, 0) = ((MR_Box) (hlds__hlds_clauses__LowerNum0_11));
#line 394 "hlds_clauses.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_50, 1) = ((MR_Box) (hlds__hlds_clauses__ItemNum_5));
#line 394 "hlds_clauses.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_50, 2) = ((MR_Box) (hlds__hlds_clauses__LowerContext0_13));
#line 394 "hlds_clauses.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_50, 3) = ((MR_Box) (hlds__hlds_clauses__Context_6));
#line 394 "hlds_clauses.m"
                        }
#line 396 "hlds_clauses.m"
                        {
#line 396 "hlds_clauses.m"
                          MR_Word base;
#line 396 "hlds_clauses.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "hlds_clauses.m"
                          *hlds__hlds_clauses__STATE_VARIABLE_Regions_24 = base;
#line 396 "hlds_clauses.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_clauses__FirstRegion_50));
#line 396 "hlds_clauses.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hlds_clauses__LaterRegions0_10));
#line 396 "hlds_clauses.m"
                        }
#line 395 "hlds_clauses.m"
                      }
#line 393 "hlds_clauses.m"
                    else
#line 399 "hlds_clauses.m"
                      {
#line 399 "hlds_clauses.m"
                        MR_Word hlds__hlds_clauses__LaterRegions1_16;

#line 398 "hlds_clauses.m"
                        {
#line 398 "hlds_clauses.m"
                          hlds__hlds_clauses__add_clause_item_number_regions_4_p_0(hlds__hlds_clauses__ItemNum_5, hlds__hlds_clauses__Context_6, hlds__hlds_clauses__LaterRegions0_10, &hlds__hlds_clauses__LaterRegions1_16);
                        }
#line 405 "hlds_clauses.m"
                        if ((hlds__hlds_clauses__LaterRegions1_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 403 "hlds_clauses.m"
                          {
#line 404 "hlds_clauses.m"
                            {
#line 404 "hlds_clauses.m"
                              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_clauses", (MR_String) "predicate \140hlds.hlds_clauses.add_clause_item_number_regions\'/4", (MR_String) "insertion yields empty list");
#line 404 "hlds_clauses.m"
                              return;
                            }
#line 403 "hlds_clauses.m"
                          }
#line 405 "hlds_clauses.m"
                        else
#line 406 "hlds_clauses.m"
                          {
#line 406 "hlds_clauses.m"
                            MR_Word hlds__hlds_clauses__FirstLaterRegion1_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__LaterRegions1_16, (MR_Integer) 0)));
#line 406 "hlds_clauses.m"
                            MR_Word hlds__hlds_clauses__LaterLaterRegions1_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__LaterRegions1_16, (MR_Integer) 1)));
#line 406 "hlds_clauses.m"
                            MR_Integer hlds__hlds_clauses__LowerNum1_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstLaterRegion1_17, (MR_Integer) 0)));
#line 406 "hlds_clauses.m"
                            MR_Integer hlds__hlds_clauses__UpperNum1_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstLaterRegion1_17, (MR_Integer) 1)));
#line 406 "hlds_clauses.m"
                            MR_Word hlds__hlds_clauses__UpperContext1_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstLaterRegion1_17, (MR_Integer) 3)));
#line 407 "hlds_clauses.m"
                            MR_Word hlds__hlds_clauses___LowerContext1_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstLaterRegion1_17, (MR_Integer) 2)));
#line 409 "hlds_clauses.m"
                            MR_Integer hlds__hlds_clauses__V_38_38 = (hlds__hlds_clauses__LowerNum1_19 - hlds__hlds_clauses__UpperNum0_12);

#line 409 "hlds_clauses.m"
                            hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_38_38 == (MR_Integer) 1);
#line 409 "hlds_clauses.m"
                            if (hlds__hlds_clauses__succeeded)
#line 412 "hlds_clauses.m"
                              {
#line 412 "hlds_clauses.m"
                                MR_Word hlds__hlds_clauses__FirstRegion_51;

#line 410 "hlds_clauses.m"
                                {
#line 410 "hlds_clauses.m"
                                  hlds__hlds_clauses__FirstRegion_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 410 "hlds_clauses.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_51, 0) = ((MR_Box) (hlds__hlds_clauses__LowerNum0_11));
#line 410 "hlds_clauses.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_51, 1) = ((MR_Box) (hlds__hlds_clauses__UpperNum1_20));
#line 410 "hlds_clauses.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_51, 2) = ((MR_Box) (hlds__hlds_clauses__LowerContext0_13));
#line 410 "hlds_clauses.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_51, 3) = ((MR_Box) (hlds__hlds_clauses__UpperContext1_22));
#line 410 "hlds_clauses.m"
                                }
#line 413 "hlds_clauses.m"
                                {
#line 413 "hlds_clauses.m"
                                  MR_Word base;
#line 413 "hlds_clauses.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "hlds_clauses.m"
                                  *hlds__hlds_clauses__STATE_VARIABLE_Regions_24 = base;
#line 413 "hlds_clauses.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_clauses__FirstRegion_51));
#line 413 "hlds_clauses.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hlds_clauses__LaterLaterRegions1_18));
#line 413 "hlds_clauses.m"
                                }
#line 412 "hlds_clauses.m"
                              }
#line 409 "hlds_clauses.m"
                            else
#line 415 "hlds_clauses.m"
                              {
#line 415 "hlds_clauses.m"
                                MR_Word base;
#line 415 "hlds_clauses.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "hlds_clauses.m"
                                *hlds__hlds_clauses__STATE_VARIABLE_Regions_24 = base;
#line 415 "hlds_clauses.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_clauses__FirstRegion0_9));
#line 415 "hlds_clauses.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hlds_clauses__LaterRegions1_16));
#line 415 "hlds_clauses.m"
                              }
#line 406 "hlds_clauses.m"
                          }
#line 399 "hlds_clauses.m"
                      }
#line 393 "hlds_clauses.m"
                  }
#line 391 "hlds_clauses.m"
              }
#line 387 "hlds_clauses.m"
          }
#line 380 "hlds_clauses.m"
      }
#line 375 "hlds_clauses.m"
  }
#line 369 "hlds_clauses.m"
}

#line 284 "hlds_clauses.m"
MR_Word MR_CALL 
hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0(void)
#line 284 "hlds_clauses.m"
{
#line 312 "hlds_clauses.m"
  {
#line 312 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;

#line 312 "hlds_clauses.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 312 "hlds_clauses.m"
  }
#line 284 "hlds_clauses.m"
}

#line 283 "hlds_clauses.m"
MR_Word MR_CALL 
hlds__hlds_clauses__init_clause_item_numbers_user_0_f_0(void)
#line 283 "hlds_clauses.m"
{
#line 311 "hlds_clauses.m"
  {
#line 311 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;

#line 311 "hlds_clauses.m"
    return (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_clauses_scalar_common_1[8]);
#line 311 "hlds_clauses.m"
  }
#line 283 "hlds_clauses.m"
}

#line 279 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__add_clause_item_number_5_p_0(
#line 279 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__MaybeItemNumber_6,
#line 279 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__Context_7,
#line 279 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__Type_8,
#line 279 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_0_17,
#line 279 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_18)
#line 279 "hlds_clauses.m"
{
#line 327 "hlds_clauses.m"
  {
#line 327 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;

#line 327 "hlds_clauses.m"
    if ((hlds__hlds_clauses__MaybeItemNumber_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 327 "hlds_clauses.m"
      *hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_18 = hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_0_17;
#line 327 "hlds_clauses.m"
    else
#line 346 "hlds_clauses.m"
      {
#line 346 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__ItemNumber_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__MaybeItemNumber_6, (MR_Integer) 0)));

#line 360 "hlds_clauses.m"
        if ((hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 361 "hlds_clauses.m"
          *hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_18 = hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_0_17;
#line 360 "hlds_clauses.m"
        else
#line 348 "hlds_clauses.m"
          {
#line 348 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__MercuryRegions0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_0_17, (MR_Integer) 0)));
#line 348 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__BothRegions0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_0_17, (MR_Integer) 1)));
#line 348 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__MercuryRegions_15;
#line 348 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__BothRegions_16;

#line 353 "hlds_clauses.m"
#line 353 "hlds_clauses.m"
            switch (hlds__hlds_clauses__Type_8) {
#line 353 "hlds_clauses.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 353 "hlds_clauses.m"
              case (MR_Integer) 0:
#line 351 "hlds_clauses.m"
                {
#line 351 "hlds_clauses.m"
                  hlds__hlds_clauses__add_clause_item_number_regions_4_p_0(hlds__hlds_clauses__ItemNumber_12, hlds__hlds_clauses__Context_7, hlds__hlds_clauses__MercuryRegions0_13, &hlds__hlds_clauses__MercuryRegions_15);
                }
#line 353 "hlds_clauses.m"
                break;
#line 353 "hlds_clauses.m"
              case (MR_Integer) 1:
#line 355 "hlds_clauses.m"
                hlds__hlds_clauses__MercuryRegions_15 = hlds__hlds_clauses__MercuryRegions0_13;
#line 353 "hlds_clauses.m"
                break;
#line 353 "hlds_clauses.m"
            }
#line 357 "hlds_clauses.m"
            {
#line 357 "hlds_clauses.m"
              hlds__hlds_clauses__add_clause_item_number_regions_4_p_0(hlds__hlds_clauses__ItemNumber_12, hlds__hlds_clauses__Context_7, hlds__hlds_clauses__BothRegions0_14, &hlds__hlds_clauses__BothRegions_16);
            }
#line 359 "hlds_clauses.m"
            {
#line 359 "hlds_clauses.m"
              MR_Word base;
#line 359 "hlds_clauses.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 359 "hlds_clauses.m"
              *hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_18 = base;
#line 359 "hlds_clauses.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_clauses__MercuryRegions_15));
#line 359 "hlds_clauses.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hlds_clauses__BothRegions_16));
#line 359 "hlds_clauses.m"
            }
#line 348 "hlds_clauses.m"
          }
#line 346 "hlds_clauses.m"
      }
#line 327 "hlds_clauses.m"
  }
#line 279 "hlds_clauses.m"
}

#line 270 "hlds_clauses.m"
MR_bool MR_CALL 
hlds__hlds_clauses__clauses_are_non_contiguous_5_p_0(
#line 270 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__ClauseItemNumbers_6,
#line 270 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__Type_7,
#line 270 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__FirstRegion_8,
#line 270 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__SecondRegion_9,
#line 270 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__LaterRegions_10)
#line 270 "hlds_clauses.m"
{
#line 315 "hlds_clauses.m"
  {
#line 315 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded = ((MR_tag((MR_Word) hlds__hlds_clauses__ClauseItemNumbers_6)) == (MR_mktag((MR_Integer) 1)));
#line 315 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__MercuryRegions_11;
#line 315 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__BothRegions_12;

#line 316 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 316 "hlds_clauses.m"
      {
#line 316 "hlds_clauses.m"
        hlds__hlds_clauses__MercuryRegions_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__ClauseItemNumbers_6, (MR_Integer) 0)));
#line 316 "hlds_clauses.m"
        hlds__hlds_clauses__BothRegions_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__ClauseItemNumbers_6, (MR_Integer) 1)));
#line 320 "hlds_clauses.m"
#line 320 "hlds_clauses.m"
        switch (hlds__hlds_clauses__Type_7) {
#line 320 "hlds_clauses.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 320 "hlds_clauses.m"
          case (MR_Integer) 1:
#line 321 "hlds_clauses.m"
            {
#line 321 "hlds_clauses.m"
              MR_Word hlds__hlds_clauses__V_13_13;

#line 322 "hlds_clauses.m"
              hlds__hlds_clauses__succeeded = ((MR_tag((MR_Word) hlds__hlds_clauses__BothRegions_12)) == (MR_mktag((MR_Integer) 1)));
#line 322 "hlds_clauses.m"
              if (hlds__hlds_clauses__succeeded)
#line 322 "hlds_clauses.m"
                {
#line 322 "hlds_clauses.m"
                  *hlds__hlds_clauses__FirstRegion_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__BothRegions_12, (MR_Integer) 0)));
#line 322 "hlds_clauses.m"
                  hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__BothRegions_12, (MR_Integer) 1)));
#line 322 "hlds_clauses.m"
                  hlds__hlds_clauses__succeeded = ((MR_tag((MR_Word) hlds__hlds_clauses__V_13_13)) == (MR_mktag((MR_Integer) 1)));
#line 322 "hlds_clauses.m"
                  if (hlds__hlds_clauses__succeeded)
#line 322 "hlds_clauses.m"
                    {
#line 322 "hlds_clauses.m"
                      *hlds__hlds_clauses__SecondRegion_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__V_13_13, (MR_Integer) 0)));
#line 322 "hlds_clauses.m"
                      *hlds__hlds_clauses__LaterRegions_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__V_13_13, (MR_Integer) 1)));
#line 322 "hlds_clauses.m"
                    }
#line 322 "hlds_clauses.m"
                }
#line 321 "hlds_clauses.m"
            }
#line 320 "hlds_clauses.m"
            break;
#line 320 "hlds_clauses.m"
          case (MR_Integer) 0:
#line 318 "hlds_clauses.m"
            {
#line 318 "hlds_clauses.m"
              MR_Word hlds__hlds_clauses__V_14_14;

#line 319 "hlds_clauses.m"
              hlds__hlds_clauses__succeeded = ((MR_tag((MR_Word) hlds__hlds_clauses__MercuryRegions_11)) == (MR_mktag((MR_Integer) 1)));
#line 319 "hlds_clauses.m"
              if (hlds__hlds_clauses__succeeded)
#line 319 "hlds_clauses.m"
                {
#line 319 "hlds_clauses.m"
                  *hlds__hlds_clauses__FirstRegion_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__MercuryRegions_11, (MR_Integer) 0)));
#line 319 "hlds_clauses.m"
                  hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__MercuryRegions_11, (MR_Integer) 1)));
#line 319 "hlds_clauses.m"
                  hlds__hlds_clauses__succeeded = ((MR_tag((MR_Word) hlds__hlds_clauses__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 319 "hlds_clauses.m"
                  if (hlds__hlds_clauses__succeeded)
#line 319 "hlds_clauses.m"
                    {
#line 319 "hlds_clauses.m"
                      *hlds__hlds_clauses__SecondRegion_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__V_14_14, (MR_Integer) 0)));
#line 319 "hlds_clauses.m"
                      *hlds__hlds_clauses__LaterRegions_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__V_14_14, (MR_Integer) 1)));
#line 319 "hlds_clauses.m"
                    }
#line 319 "hlds_clauses.m"
                }
#line 318 "hlds_clauses.m"
            }
#line 320 "hlds_clauses.m"
            break;
#line 320 "hlds_clauses.m"
        }
#line 316 "hlds_clauses.m"
      }
#line 315 "hlds_clauses.m"
    return hlds__hlds_clauses__succeeded;
#line 315 "hlds_clauses.m"
  }
#line 270 "hlds_clauses.m"
}

#line 226 "hlds_clauses.m"
MR_Word MR_CALL 
hlds__hlds_clauses__clause_body_1_f_0(
#line 226 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__1_1)
#line 226 "hlds_clauses.m"
{
#line 226 "hlds_clauses.m"
  {
#line 226 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 226 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 1)));
#line 226 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 0)));
#line 226 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 2)));
#line 226 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 3)));
#line 226 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 4)));

#line 226 "hlds_clauses.m"
    return hlds__hlds_clauses__HeadVar__2_2;
#line 226 "hlds_clauses.m"
  }
#line 226 "hlds_clauses.m"
}

#line 213 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_set_rtti_varmaps_3_p_0(
#line 213 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__X_4,
#line 213 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_CI_0_6,
#line 213 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_CI_7)
#line 213 "hlds_clauses.m"
{
#line 475 "hlds_clauses.m"
  {
#line 475 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 475 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
#line 475 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
#line 475 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 2)));
#line 475 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 3)));
#line 475 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 4)));
#line 475 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 5)));
#line 475 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 6)));
#line 475 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 8)));
#line 475 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 9)));
#line 475 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 7)));

#line 475 "hlds_clauses.m"
    {
#line 475 "hlds_clauses.m"
      MR_Word base;
#line 475 "hlds_clauses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 475 "hlds_clauses.m"
      *hlds__hlds_clauses__STATE_VARIABLE_CI_7 = base;
#line 475 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__V_9_9));
#line 475 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__V_10_10));
#line 475 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_clauses__V_11_11));
#line 475 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_clauses__V_12_12));
#line 475 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_clauses__V_13_13));
#line 475 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_clauses__V_14_14));
#line 475 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_clauses__V_15_15));
#line 475 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_clauses__X_4));
#line 475 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_clauses__V_17_17));
#line 475 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_clauses__V_18_18));
#line 475 "hlds_clauses.m"
    }
#line 475 "hlds_clauses.m"
  }
#line 213 "hlds_clauses.m"
}

#line 210 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(
#line 210 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__X_4,
#line 210 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_CI_0_6,
#line 210 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_CI_7)
#line 210 "hlds_clauses.m"
{
#line 468 "hlds_clauses.m"
  {
#line 468 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 468 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
#line 468 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
#line 468 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 2)));
#line 468 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 4)));
#line 468 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 5)));
#line 468 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 6)));
#line 468 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 7)));
#line 468 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 8)));
#line 468 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 9)));
#line 468 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 3)));

#line 468 "hlds_clauses.m"
    {
#line 468 "hlds_clauses.m"
      MR_Word base;
#line 468 "hlds_clauses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 468 "hlds_clauses.m"
      *hlds__hlds_clauses__STATE_VARIABLE_CI_7 = base;
#line 468 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__V_9_9));
#line 468 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__V_10_10));
#line 468 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_clauses__V_11_11));
#line 468 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_clauses__X_4));
#line 468 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_clauses__V_13_13));
#line 468 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_clauses__V_14_14));
#line 468 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_clauses__V_15_15));
#line 468 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_clauses__V_16_16));
#line 468 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_clauses__V_17_17));
#line 468 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_clauses__V_18_18));
#line 468 "hlds_clauses.m"
    }
#line 468 "hlds_clauses.m"
  }
#line 210 "hlds_clauses.m"
}

#line 204 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_set_explicit_vartypes_3_p_0(
#line 204 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__X_4,
#line 204 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_CI_0_6,
#line 204 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_CI_7)
#line 204 "hlds_clauses.m"
{
#line 466 "hlds_clauses.m"
  {
#line 466 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 466 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
#line 466 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 2)));
#line 466 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 3)));
#line 466 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 4)));
#line 466 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 5)));
#line 466 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 6)));
#line 466 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 7)));
#line 466 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 8)));
#line 466 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 9)));
#line 466 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));

#line 466 "hlds_clauses.m"
    {
#line 466 "hlds_clauses.m"
      MR_Word base;
#line 466 "hlds_clauses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 466 "hlds_clauses.m"
      *hlds__hlds_clauses__STATE_VARIABLE_CI_7 = base;
#line 466 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__V_9_9));
#line 466 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__X_4));
#line 466 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_clauses__V_11_11));
#line 466 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_clauses__V_12_12));
#line 466 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_clauses__V_13_13));
#line 466 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_clauses__V_14_14));
#line 466 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_clauses__V_15_15));
#line 466 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_clauses__V_16_16));
#line 466 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_clauses__V_17_17));
#line 466 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_clauses__V_18_18));
#line 466 "hlds_clauses.m"
    }
#line 466 "hlds_clauses.m"
  }
#line 204 "hlds_clauses.m"
}

#line 198 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_set_varset_3_p_0(
#line 198 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__X_4,
#line 198 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_CI_0_6,
#line 198 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_CI_7)
#line 198 "hlds_clauses.m"
{
#line 464 "hlds_clauses.m"
  {
#line 464 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 464 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
#line 464 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 2)));
#line 464 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 3)));
#line 464 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 4)));
#line 464 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 5)));
#line 464 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 6)));
#line 464 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 7)));
#line 464 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 8)));
#line 464 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 9)));
#line 464 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));

#line 464 "hlds_clauses.m"
    {
#line 464 "hlds_clauses.m"
      MR_Word base;
#line 464 "hlds_clauses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 464 "hlds_clauses.m"
      *hlds__hlds_clauses__STATE_VARIABLE_CI_7 = base;
#line 464 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__X_4));
#line 464 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__V_10_10));
#line 464 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_clauses__V_11_11));
#line 464 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_clauses__V_12_12));
#line 464 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_clauses__V_13_13));
#line 464 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_clauses__V_14_14));
#line 464 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_clauses__V_15_15));
#line 464 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_clauses__V_16_16));
#line 464 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_clauses__V_17_17));
#line 464 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_clauses__V_18_18));
#line 464 "hlds_clauses.m"
    }
#line 464 "hlds_clauses.m"
  }
#line 198 "hlds_clauses.m"
}

#line 195 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(
#line 195 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__X_5,
#line 195 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__Y_6,
#line 195 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_CI_0_8,
#line 195 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_CI_9)
#line 195 "hlds_clauses.m"
{
#line 471 "hlds_clauses.m"
  {
#line 471 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 471 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 0)));
#line 471 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 1)));
#line 471 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 2)));
#line 471 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 3)));
#line 471 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 4)));
#line 471 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 7)));
#line 471 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 8)));
#line 471 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 9)));
#line 472 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 5)));
#line 472 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 6)));

#line 473 "hlds_clauses.m"
    {
#line 473 "hlds_clauses.m"
      MR_Word base;
#line 473 "hlds_clauses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 473 "hlds_clauses.m"
      *hlds__hlds_clauses__STATE_VARIABLE_CI_9 = base;
#line 473 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__V_12_12));
#line 473 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__V_13_13));
#line 473 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_clauses__V_14_14));
#line 473 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_clauses__V_15_15));
#line 473 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_clauses__V_16_16));
#line 473 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_clauses__X_5));
#line 473 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_clauses__Y_6));
#line 473 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_clauses__V_19_19));
#line 473 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_clauses__V_20_20));
#line 473 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_clauses__V_21_21));
#line 473 "hlds_clauses.m"
    }
#line 471 "hlds_clauses.m"
  }
#line 195 "hlds_clauses.m"
}

#line 192 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_set_headvars_3_p_0(
#line 192 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__X_4,
#line 192 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_CI_0_6,
#line 192 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_CI_7)
#line 192 "hlds_clauses.m"
{
#line 470 "hlds_clauses.m"
  {
#line 470 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 470 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
#line 470 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
#line 470 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 2)));
#line 470 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 3)));
#line 470 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 5)));
#line 470 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 6)));
#line 470 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 7)));
#line 470 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 8)));
#line 470 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 9)));
#line 470 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 4)));

#line 470 "hlds_clauses.m"
    {
#line 470 "hlds_clauses.m"
      MR_Word base;
#line 470 "hlds_clauses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 470 "hlds_clauses.m"
      *hlds__hlds_clauses__STATE_VARIABLE_CI_7 = base;
#line 470 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__V_9_9));
#line 470 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__V_10_10));
#line 470 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_clauses__V_11_11));
#line 470 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_clauses__V_12_12));
#line 470 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_clauses__X_4));
#line 470 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_clauses__V_14_14));
#line 470 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_clauses__V_15_15));
#line 470 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_clauses__V_16_16));
#line 470 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_clauses__V_17_17));
#line 470 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_clauses__V_18_18));
#line 470 "hlds_clauses.m"
    }
#line 470 "hlds_clauses.m"
  }
#line 192 "hlds_clauses.m"
}

#line 189 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_clauses_4_p_0(
#line 189 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__Clauses_5,
#line 189 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__ItemNumbers_6,
#line 189 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_CI_0_10,
#line 189 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_CI_11)
#line 189 "hlds_clauses.m"
{
#line 517 "hlds_clauses.m"
  {
#line 517 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 517 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__TypeCtorInfo_10_47;
#line 517 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__ClausesRep0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 5)));
#line 517 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__ClausesRep_9;
#line 517 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__NumClauses_44;
#line 517 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__ClausesCord0_45;
#line 517 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__ClausesCord_46;
#line 518 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 0)));
#line 518 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 1)));
#line 518 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 2)));
#line 518 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 3)));
#line 518 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 4)));
#line 518 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_19_19;
#line 518 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_20_20;
#line 518 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_21_21;
#line 521 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_31_31;
#line 521 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_32_32;
#line 521 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_33_33;
#line 521 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_34_34;
#line 521 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_35_35;
#line 521 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_37_37;
#line 521 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_38_38;
#line 521 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_39_39;
#line 521 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_40_40;
#line 521 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_36_36;

#line 518 "hlds_clauses.m"
    *hlds__hlds_clauses__ItemNumbers_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 6)));
#line 518 "hlds_clauses.m"
    hlds__hlds_clauses__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 7)));
#line 518 "hlds_clauses.m"
    hlds__hlds_clauses__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 8)));
#line 518 "hlds_clauses.m"
    hlds__hlds_clauses__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 9)));
#line 497 "hlds_clauses.m"
    hlds__hlds_clauses__NumClauses_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep0_8, (MR_Integer) 0)));
#line 497 "hlds_clauses.m"
    hlds__hlds_clauses__ClausesCord0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep0_8, (MR_Integer) 1)));
#line 4292 "hlds.hlds_clauses.c"
    hlds__hlds_clauses__TypeCtorInfo_10_47 = (MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0;
#line 498 "hlds_clauses.m"
    {
#line 498 "hlds_clauses.m"
      *hlds__hlds_clauses__Clauses_5 = mercury__cord__list_1_f_0(hlds__hlds_clauses__TypeCtorInfo_10_47, hlds__hlds_clauses__ClausesCord0_45);
    }
#line 499 "hlds_clauses.m"
    {
#line 499 "hlds_clauses.m"
      hlds__hlds_clauses__ClausesCord_46 = mercury__cord__from_list_1_f_0(hlds__hlds_clauses__TypeCtorInfo_10_47, *hlds__hlds_clauses__Clauses_5);
    }
#line 500 "hlds_clauses.m"
    {
#line 500 "hlds_clauses.m"
      hlds__hlds_clauses__ClausesRep_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 500 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_9, 0) = ((MR_Box) (hlds__hlds_clauses__NumClauses_44));
#line 500 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_9, 1) = ((MR_Box) (hlds__hlds_clauses__ClausesCord_46));
#line 500 "hlds_clauses.m"
    }
#line 521 "hlds_clauses.m"
    hlds__hlds_clauses__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 0)));
#line 521 "hlds_clauses.m"
    hlds__hlds_clauses__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 1)));
#line 521 "hlds_clauses.m"
    hlds__hlds_clauses__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 2)));
#line 521 "hlds_clauses.m"
    hlds__hlds_clauses__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 3)));
#line 521 "hlds_clauses.m"
    hlds__hlds_clauses__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 4)));
#line 521 "hlds_clauses.m"
    hlds__hlds_clauses__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 5)));
#line 521 "hlds_clauses.m"
    hlds__hlds_clauses__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 6)));
#line 521 "hlds_clauses.m"
    hlds__hlds_clauses__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 7)));
#line 521 "hlds_clauses.m"
    hlds__hlds_clauses__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 8)));
#line 521 "hlds_clauses.m"
    hlds__hlds_clauses__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 9)));
#line 521 "hlds_clauses.m"
    {
#line 521 "hlds_clauses.m"
      MR_Word base;
#line 521 "hlds_clauses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 521 "hlds_clauses.m"
      *hlds__hlds_clauses__STATE_VARIABLE_CI_11 = base;
#line 521 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__V_31_31));
#line 521 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__V_32_32));
#line 521 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_clauses__V_33_33));
#line 521 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_clauses__V_34_34));
#line 521 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_clauses__V_35_35));
#line 521 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_clauses__ClausesRep_9));
#line 521 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_clauses__V_37_37));
#line 521 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_clauses__V_38_38));
#line 521 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_clauses__V_39_39));
#line 521 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_clauses__V_40_40));
#line 521 "hlds_clauses.m"
    }
#line 517 "hlds_clauses.m"
  }
#line 189 "hlds_clauses.m"
}

#line 183 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(
#line 183 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__CI_4,
#line 183 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__2_2,
#line 183 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__3_3)
#line 183 "hlds_clauses.m"
{
#line 460 "hlds_clauses.m"
  {
#line 460 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 460 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 0)));
#line 460 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 1)));
#line 460 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 2)));
#line 460 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 3)));
#line 460 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 4)));
#line 460 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_11_11;
#line 460 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_12_12;
#line 460 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_13_13;

#line 460 "hlds_clauses.m"
    *hlds__hlds_clauses__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 5)));
#line 460 "hlds_clauses.m"
    *hlds__hlds_clauses__HeadVar__3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 6)));
#line 460 "hlds_clauses.m"
    hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 7)));
#line 460 "hlds_clauses.m"
    hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 8)));
#line 460 "hlds_clauses.m"
    hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 9)));
#line 460 "hlds_clauses.m"
  }
#line 183 "hlds_clauses.m"
}

#line 180 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(
#line 180 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__CI_3,
#line 180 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__List_4)
#line 180 "hlds_clauses.m"
{
#line 458 "hlds_clauses.m"
  {
#line 458 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 458 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 4)));
#line 459 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 0)));
#line 459 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 1)));
#line 459 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 2)));
#line 459 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 3)));
#line 459 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 5)));
#line 459 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 6)));
#line 459 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 7)));
#line 459 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 8)));
#line 459 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 9)));

#line 459 "hlds_clauses.m"
    {
#line 459 "hlds_clauses.m"
      *hlds__hlds_clauses__List_4 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[1], hlds__hlds_clauses__V_5_5);
    }
#line 458 "hlds_clauses.m"
  }
#line 180 "hlds_clauses.m"
}

#line 173 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_get_headvars_2_p_0(
#line 173 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__CI_3,
#line 173 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__2_2)
#line 173 "hlds_clauses.m"
{
#line 457 "hlds_clauses.m"
  {
#line 457 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 457 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 0)));
#line 457 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 1)));
#line 457 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 2)));
#line 457 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 3)));
#line 457 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_8_8;
#line 457 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_9_9;
#line 457 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_10_10;
#line 457 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_11_11;
#line 457 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_12_12;

#line 457 "hlds_clauses.m"
    *hlds__hlds_clauses__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 4)));
#line 457 "hlds_clauses.m"
    hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 5)));
#line 457 "hlds_clauses.m"
    hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 6)));
#line 457 "hlds_clauses.m"
    hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 7)));
#line 457 "hlds_clauses.m"
    hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 8)));
#line 457 "hlds_clauses.m"
    hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 9)));
#line 457 "hlds_clauses.m"
  }
#line 173 "hlds_clauses.m"
}

#line 170 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_get_rtti_varmaps_2_p_0(
#line 170 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__CI_3,
#line 170 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__2_2)
#line 170 "hlds_clauses.m"
{
#line 461 "hlds_clauses.m"
  {
#line 461 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 461 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 0)));
#line 461 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 1)));
#line 461 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 2)));
#line 461 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 3)));
#line 461 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 4)));
#line 461 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 5)));
#line 461 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 6)));
#line 461 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_11_11;
#line 461 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_12_12;

#line 461 "hlds_clauses.m"
    *hlds__hlds_clauses__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 7)));
#line 461 "hlds_clauses.m"
    hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 8)));
#line 461 "hlds_clauses.m"
    hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 9)));
#line 461 "hlds_clauses.m"
  }
#line 170 "hlds_clauses.m"
}

#line 168 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(
#line 168 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__CI_3,
#line 168 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__2_2)
#line 168 "hlds_clauses.m"
{
#line 456 "hlds_clauses.m"
  {
#line 456 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 456 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 0)));
#line 456 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 1)));
#line 456 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 2)));
#line 456 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_7_7;
#line 456 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_8_8;
#line 456 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_9_9;
#line 456 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_10_10;
#line 456 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_11_11;
#line 456 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_12_12;

#line 456 "hlds_clauses.m"
    *hlds__hlds_clauses__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 3)));
#line 456 "hlds_clauses.m"
    hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 4)));
#line 456 "hlds_clauses.m"
    hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 5)));
#line 456 "hlds_clauses.m"
    hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 6)));
#line 456 "hlds_clauses.m"
    hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 7)));
#line 456 "hlds_clauses.m"
    hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 8)));
#line 456 "hlds_clauses.m"
    hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 9)));
#line 456 "hlds_clauses.m"
  }
#line 168 "hlds_clauses.m"
}

#line 162 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_get_explicit_vartypes_2_p_0(
#line 162 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__CI_3,
#line 162 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__2_2)
#line 162 "hlds_clauses.m"
{
#line 455 "hlds_clauses.m"
  {
#line 455 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 455 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 0)));
#line 455 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_5_5;
#line 455 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_6_6;
#line 455 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_7_7;
#line 455 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_8_8;
#line 455 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_9_9;
#line 455 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_10_10;
#line 455 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_11_11;
#line 455 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_12_12;

#line 455 "hlds_clauses.m"
    *hlds__hlds_clauses__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 1)));
#line 455 "hlds_clauses.m"
    hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 2)));
#line 455 "hlds_clauses.m"
    hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 3)));
#line 455 "hlds_clauses.m"
    hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 4)));
#line 455 "hlds_clauses.m"
    hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 5)));
#line 455 "hlds_clauses.m"
    hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 6)));
#line 455 "hlds_clauses.m"
    hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 7)));
#line 455 "hlds_clauses.m"
    hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 8)));
#line 455 "hlds_clauses.m"
    hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 9)));
#line 455 "hlds_clauses.m"
  }
#line 162 "hlds_clauses.m"
}

#line 157 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_get_varset_2_p_0(
#line 157 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__CI_3,
#line 157 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__2_2)
#line 157 "hlds_clauses.m"
{
#line 454 "hlds_clauses.m"
  {
#line 454 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 454 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_4_4;
#line 454 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_5_5;
#line 454 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_6_6;
#line 454 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_7_7;
#line 454 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_8_8;
#line 454 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_9_9;
#line 454 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_10_10;
#line 454 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_11_11;
#line 454 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_12_12;

#line 454 "hlds_clauses.m"
    *hlds__hlds_clauses__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 0)));
#line 454 "hlds_clauses.m"
    hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 1)));
#line 454 "hlds_clauses.m"
    hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 2)));
#line 454 "hlds_clauses.m"
    hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 3)));
#line 454 "hlds_clauses.m"
    hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 4)));
#line 454 "hlds_clauses.m"
    hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 5)));
#line 454 "hlds_clauses.m"
    hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 6)));
#line 454 "hlds_clauses.m"
    hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 7)));
#line 454 "hlds_clauses.m"
    hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 8)));
#line 454 "hlds_clauses.m"
    hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 9)));
#line 454 "hlds_clauses.m"
  }
#line 157 "hlds_clauses.m"
}

#line 155 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__set_clause_list_2_p_0(
#line 155 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__Clauses_3,
#line 155 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__ClausesRep_4)
#line 155 "hlds_clauses.m"
{
#line 514 "hlds_clauses.m"
  {
#line 514 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 514 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__TypeCtorInfo_7_7 = (MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0;
#line 514 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__V_5_5;
#line 514 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_6_6;

#line 515 "hlds_clauses.m"
    {
#line 515 "hlds_clauses.m"
      hlds__hlds_clauses__V_5_5 = mercury__list__length_1_f_0(hlds__hlds_clauses__TypeCtorInfo_7_7, hlds__hlds_clauses__Clauses_3);
    }
#line 515 "hlds_clauses.m"
    {
#line 515 "hlds_clauses.m"
      hlds__hlds_clauses__V_6_6 = mercury__cord__from_list_1_f_0(hlds__hlds_clauses__TypeCtorInfo_7_7, hlds__hlds_clauses__Clauses_3);
    }
#line 515 "hlds_clauses.m"
    {
#line 515 "hlds_clauses.m"
      MR_Word base;
#line 515 "hlds_clauses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 515 "hlds_clauses.m"
      *hlds__hlds_clauses__ClausesRep_4 = base;
#line 515 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__V_5_5));
#line 515 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__V_6_6));
#line 515 "hlds_clauses.m"
    }
#line 514 "hlds_clauses.m"
  }
#line 155 "hlds_clauses.m"
}

#line 151 "hlds_clauses.m"
MR_bool MR_CALL 
hlds__hlds_clauses__get_first_clause_2_p_0(
#line 151 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__ClausesRep_3,
#line 151 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__FirstClause_4)
#line 151 "hlds_clauses.m"
{
#line 510 "hlds_clauses.m"
  {
#line 510 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 510 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__ClausesCord_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 1)));
#line 511 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses___NumClauses_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 0)));
#line 512 "hlds_clauses.m"
    MR_Box hlds__hlds_clauses__conv0_FirstClause_4;

#line 512 "hlds_clauses.m"
    {
#line 512 "hlds_clauses.m"
      hlds__hlds_clauses__succeeded = mercury__cord__get_first_2_p_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, hlds__hlds_clauses__ClausesCord_6, &hlds__hlds_clauses__conv0_FirstClause_4);
    }
#line 512 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 512 "hlds_clauses.m"
      {
#line 512 "hlds_clauses.m"
        *hlds__hlds_clauses__FirstClause_4 = ((MR_Word) hlds__hlds_clauses__conv0_FirstClause_4);
#line 512 "hlds_clauses.m"
        hlds__hlds_clauses__succeeded = MR_TRUE;
#line 512 "hlds_clauses.m"
      }
#line 510 "hlds_clauses.m"
    return hlds__hlds_clauses__succeeded;
#line 510 "hlds_clauses.m"
  }
#line 151 "hlds_clauses.m"
}

#line 148 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(
#line 148 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__ClausesRep_3,
#line 148 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__Clauses_4)
#line 148 "hlds_clauses.m"
{
#line 506 "hlds_clauses.m"
  {
#line 506 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 506 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__ClausesCord_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 1)));
#line 507 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses___NumClauses_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 0)));

#line 508 "hlds_clauses.m"
    {
#line 508 "hlds_clauses.m"
      *hlds__hlds_clauses__Clauses_4 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, hlds__hlds_clauses__ClausesCord_6);
    }
#line 506 "hlds_clauses.m"
  }
#line 148 "hlds_clauses.m"
}

#line 146 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(
#line 146 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__ClausesRep_3,
#line 146 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__Clauses_4)
#line 146 "hlds_clauses.m"
{
#line 502 "hlds_clauses.m"
  {
#line 502 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 502 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__ClausesCord_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 1)));
#line 503 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses___NumClauses_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 0)));

#line 504 "hlds_clauses.m"
    {
#line 504 "hlds_clauses.m"
      *hlds__hlds_clauses__Clauses_4 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, hlds__hlds_clauses__ClausesCord_6);
    }
#line 502 "hlds_clauses.m"
  }
#line 146 "hlds_clauses.m"
}

#line 144 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__get_clause_list_3_p_0(
#line 144 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__Clauses_4,
#line 144 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__ClausesRep0_5,
#line 144 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__ClausesRep_6)
#line 144 "hlds_clauses.m"
{
#line 496 "hlds_clauses.m"
  {
#line 496 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 496 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__TypeCtorInfo_10_10 = (MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0;
#line 496 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__NumClauses_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep0_5, (MR_Integer) 0)));
#line 496 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__ClausesCord0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep0_5, (MR_Integer) 1)));
#line 496 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__ClausesCord_9;

#line 498 "hlds_clauses.m"
    {
#line 498 "hlds_clauses.m"
      *hlds__hlds_clauses__Clauses_4 = mercury__cord__list_1_f_0(hlds__hlds_clauses__TypeCtorInfo_10_10, hlds__hlds_clauses__ClausesCord0_8);
    }
#line 499 "hlds_clauses.m"
    {
#line 499 "hlds_clauses.m"
      hlds__hlds_clauses__ClausesCord_9 = mercury__cord__from_list_1_f_0(hlds__hlds_clauses__TypeCtorInfo_10_10, *hlds__hlds_clauses__Clauses_4);
    }
#line 500 "hlds_clauses.m"
    {
#line 500 "hlds_clauses.m"
      MR_Word base;
#line 500 "hlds_clauses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 500 "hlds_clauses.m"
      *hlds__hlds_clauses__ClausesRep_6 = base;
#line 500 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__NumClauses_7));
#line 500 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__ClausesCord_9));
#line 500 "hlds_clauses.m"
    }
#line 496 "hlds_clauses.m"
  }
#line 144 "hlds_clauses.m"
}

#line 103 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__add_clause_3_p_0(
#line 103 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__Clause_4,
#line 103 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_ClausesRep_0_10,
#line 103 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_ClausesRep_11)
#line 103 "hlds_clauses.m"
{
#line 523 "hlds_clauses.m"
  {
#line 523 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 523 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__NumClauses0_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_ClausesRep_0_10, (MR_Integer) 0)));
#line 523 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__ClausesCord0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_ClausesRep_0_10, (MR_Integer) 1)));
#line 523 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__NumClauses_8 = (hlds__hlds_clauses__NumClauses0_6 + (MR_Integer) 1);
#line 523 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__ClausesCord_9;

#line 526 "hlds_clauses.m"
    {
#line 526 "hlds_clauses.m"
      hlds__hlds_clauses__ClausesCord_9 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, hlds__hlds_clauses__ClausesCord0_7, ((MR_Box) (hlds__hlds_clauses__Clause_4)));
    }
#line 527 "hlds_clauses.m"
    {
#line 527 "hlds_clauses.m"
      MR_Word base;
#line 527 "hlds_clauses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 527 "hlds_clauses.m"
      *hlds__hlds_clauses__STATE_VARIABLE_ClausesRep_11 = base;
#line 527 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__NumClauses_8));
#line 527 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__ClausesCord_9));
#line 527 "hlds_clauses.m"
    }
#line 523 "hlds_clauses.m"
  }
#line 103 "hlds_clauses.m"
}

#line 99 "hlds_clauses.m"
MR_Integer MR_CALL 
hlds__hlds_clauses__num_clauses_in_clauses_rep_1_f_0(
#line 99 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__ClausesRep_3)
#line 99 "hlds_clauses.m"
{
#line 494 "hlds_clauses.m"
  {
#line 494 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 494 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__NumClauses_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 0)));
#line 494 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 1)));

#line 494 "hlds_clauses.m"
    return hlds__hlds_clauses__NumClauses_4;
#line 494 "hlds_clauses.m"
  }
#line 99 "hlds_clauses.m"
}

#line 95 "hlds_clauses.m"
MR_Word MR_CALL 
hlds__hlds_clauses__clause_list_is_empty_1_f_0(
#line 95 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__ClausesRep_3)
#line 95 "hlds_clauses.m"
{
#line 485 "hlds_clauses.m"
  {
#line 485 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 485 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__IsEmpty_4;
#line 485 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__ClausesCord_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 1)));
#line 486 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 0)));

#line 487 "hlds_clauses.m"
    {
#line 487 "hlds_clauses.m"
      hlds__hlds_clauses__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, hlds__hlds_clauses__ClausesCord_6);
    }
#line 487 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 488 "hlds_clauses.m"
      hlds__hlds_clauses__IsEmpty_4 = (MR_Integer) 1;
#line 487 "hlds_clauses.m"
    else
#line 490 "hlds_clauses.m"
      hlds__hlds_clauses__IsEmpty_4 = (MR_Integer) 0;
#line 485 "hlds_clauses.m"
    return hlds__hlds_clauses__IsEmpty_4;
#line 485 "hlds_clauses.m"
  }
#line 95 "hlds_clauses.m"
}

#line 90 "hlds_clauses.m"
MR_Word MR_CALL 
hlds__hlds_clauses__init_clauses_rep_0_f_0(void)
#line 90 "hlds_clauses.m"
{
#line 483 "hlds_clauses.m"
  {
#line 483 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 483 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__HeadVar__1_1;
#line 483 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_3_3;

#line 483 "hlds_clauses.m"
    {
#line 483 "hlds_clauses.m"
      hlds__hlds_clauses__V_3_3 = mercury__cord__init_0_f_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0);
    }
#line 483 "hlds_clauses.m"
    {
#line 483 "hlds_clauses.m"
      hlds__hlds_clauses__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 483 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, 0) = ((MR_Box) ((MR_Integer) 0));
#line 483 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, 1) = ((MR_Box) (hlds__hlds_clauses__V_3_3));
#line 483 "hlds_clauses.m"
    }
#line 483 "hlds_clauses.m"
    return hlds__hlds_clauses__HeadVar__1_1;
#line 483 "hlds_clauses.m"
  }
#line 90 "hlds_clauses.m"
}

#line 85 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_init_for_assertion_2_p_0(
#line 85 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVars_3,
#line 85 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__ClausesInfo_4)
#line 85 "hlds_clauses.m"
{
#line 438 "hlds_clauses.m"
  {
#line 438 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 438 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__TypeCtorInfo_7_25;
#line 438 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__VarSet_5;
#line 438 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__VarTypes_6;
#line 438 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__TVarNameMap_7;
#line 438 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__HeadVarVec_8;
#line 438 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__ClausesRep_9;
#line 438 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__RttiVarMaps_11;
#line 438 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_15_15;
#line 438 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__V_23_23;
#line 438 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_24_24;

#line 439 "hlds_clauses.m"
    {
#line 439 "hlds_clauses.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &hlds__hlds_clauses__VarSet_5);
    }
#line 440 "hlds_clauses.m"
    {
#line 440 "hlds_clauses.m"
      hlds__vartypes__init_vartypes_1_p_0(&hlds__hlds_clauses__VarTypes_6);
    }
#line 441 "hlds_clauses.m"
    {
#line 441 "hlds_clauses.m"
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__hlds_clauses_scalar_common_1[0], &hlds__hlds_clauses__TVarNameMap_7);
    }
#line 444 "hlds_clauses.m"
    {
#line 444 "hlds_clauses.m"
      hlds__hlds_clauses__HeadVarVec_8 = hlds__hlds_args__proc_arg_vector_init_2_f_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[1], (MR_Integer) 0, hlds__hlds_clauses__HeadVars_3);
    }
#line 445 "hlds_clauses.m"
    hlds__hlds_clauses__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5116 "hlds.hlds_clauses.c"
    hlds__hlds_clauses__TypeCtorInfo_7_25 = (MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0;
#line 515 "hlds_clauses.m"
    {
#line 515 "hlds_clauses.m"
      hlds__hlds_clauses__V_23_23 = mercury__list__length_1_f_0(hlds__hlds_clauses__TypeCtorInfo_7_25, hlds__hlds_clauses__V_15_15);
    }
#line 515 "hlds_clauses.m"
    {
#line 515 "hlds_clauses.m"
      hlds__hlds_clauses__V_24_24 = mercury__cord__from_list_1_f_0(hlds__hlds_clauses__TypeCtorInfo_7_25, hlds__hlds_clauses__V_15_15);
    }
#line 515 "hlds_clauses.m"
    {
#line 515 "hlds_clauses.m"
      hlds__hlds_clauses__ClausesRep_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 515 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_9, 0) = ((MR_Box) (hlds__hlds_clauses__V_23_23));
#line 515 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_9, 1) = ((MR_Box) (hlds__hlds_clauses__V_24_24));
#line 515 "hlds_clauses.m"
    }
#line 447 "hlds_clauses.m"
    {
#line 447 "hlds_clauses.m"
      hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&hlds__hlds_clauses__RttiVarMaps_11);
    }
#line 450 "hlds_clauses.m"
    {
#line 450 "hlds_clauses.m"
      MR_Word base;
#line 450 "hlds_clauses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 450 "hlds_clauses.m"
      *hlds__hlds_clauses__ClausesInfo_4 = base;
#line 450 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__VarSet_5));
#line 450 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__VarTypes_6));
#line 450 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_clauses__TVarNameMap_7));
#line 450 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_clauses__VarTypes_6));
#line 450 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_clauses__HeadVarVec_8));
#line 450 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_clauses__ClausesRep_9));
#line 450 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 450 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_clauses__RttiVarMaps_11));
#line 450 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Integer) 0));
#line 450 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((MR_Integer) 0));
#line 450 "hlds_clauses.m"
    }
#line 438 "hlds_clauses.m"
  }
#line 85 "hlds_clauses.m"
}

#line 82 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_init_4_p_0(
#line 82 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__PredOrFunc_5,
#line 82 "hlds_clauses.m"
  MR_Integer hlds__hlds_clauses__Arity_6,
#line 82 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__ItemNumbers_7,
#line 82 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__ClausesInfo_8)
#line 82 "hlds_clauses.m"
{
#line 424 "hlds_clauses.m"
  {
#line 424 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 424 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__TypeCtorInfo_22_22 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 424 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__TypeCtorInfo_7_30;
#line 424 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__VarSet0_9;
#line 424 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__HeadVars_10;
#line 424 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__VarSet_11;
#line 424 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__VarTypes_12;
#line 424 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__TVarNameMap_13;
#line 424 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__HeadVarVec_14;
#line 424 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__ClausesRep_15;
#line 424 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__RttiVarMaps_16;
#line 424 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_20_20;
#line 424 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__V_28_28;
#line 424 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_29_29;

#line 425 "hlds_clauses.m"
    {
#line 425 "hlds_clauses.m"
      mercury__varset__init_1_p_0(hlds__hlds_clauses__TypeCtorInfo_22_22, &hlds__hlds_clauses__VarSet0_9);
    }
#line 426 "hlds_clauses.m"
    {
#line 426 "hlds_clauses.m"
      parse_tree__prog_util__make_n_fresh_vars_5_p_0(hlds__hlds_clauses__TypeCtorInfo_22_22, (MR_String) "HeadVar__", hlds__hlds_clauses__Arity_6, &hlds__hlds_clauses__HeadVars_10, hlds__hlds_clauses__VarSet0_9, &hlds__hlds_clauses__VarSet_11);
    }
#line 427 "hlds_clauses.m"
    {
#line 427 "hlds_clauses.m"
      hlds__vartypes__init_vartypes_1_p_0(&hlds__hlds_clauses__VarTypes_12);
    }
#line 428 "hlds_clauses.m"
    {
#line 428 "hlds_clauses.m"
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__hlds_clauses_scalar_common_1[0], &hlds__hlds_clauses__TVarNameMap_13);
    }
#line 429 "hlds_clauses.m"
    {
#line 429 "hlds_clauses.m"
      hlds__hlds_clauses__HeadVarVec_14 = hlds__hlds_args__proc_arg_vector_init_2_f_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[1], hlds__hlds_clauses__PredOrFunc_5, hlds__hlds_clauses__HeadVars_10);
    }
#line 430 "hlds_clauses.m"
    hlds__hlds_clauses__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5249 "hlds.hlds_clauses.c"
    hlds__hlds_clauses__TypeCtorInfo_7_30 = (MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0;
#line 515 "hlds_clauses.m"
    {
#line 515 "hlds_clauses.m"
      hlds__hlds_clauses__V_28_28 = mercury__list__length_1_f_0(hlds__hlds_clauses__TypeCtorInfo_7_30, hlds__hlds_clauses__V_20_20);
    }
#line 515 "hlds_clauses.m"
    {
#line 515 "hlds_clauses.m"
      hlds__hlds_clauses__V_29_29 = mercury__cord__from_list_1_f_0(hlds__hlds_clauses__TypeCtorInfo_7_30, hlds__hlds_clauses__V_20_20);
    }
#line 515 "hlds_clauses.m"
    {
#line 515 "hlds_clauses.m"
      hlds__hlds_clauses__ClausesRep_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 515 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_15, 0) = ((MR_Box) (hlds__hlds_clauses__V_28_28));
#line 515 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_15, 1) = ((MR_Box) (hlds__hlds_clauses__V_29_29));
#line 515 "hlds_clauses.m"
    }
#line 431 "hlds_clauses.m"
    {
#line 431 "hlds_clauses.m"
      hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&hlds__hlds_clauses__RttiVarMaps_16);
    }
#line 434 "hlds_clauses.m"
    {
#line 434 "hlds_clauses.m"
      MR_Word base;
#line 434 "hlds_clauses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 434 "hlds_clauses.m"
      *hlds__hlds_clauses__ClausesInfo_8 = base;
#line 434 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__VarSet_11));
#line 434 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__VarTypes_12));
#line 434 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_clauses__TVarNameMap_13));
#line 434 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_clauses__VarTypes_12));
#line 434 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_clauses__HeadVarVec_14));
#line 434 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_clauses__ClausesRep_15));
#line 434 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_clauses__ItemNumbers_7));
#line 434 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_clauses__RttiVarMaps_16));
#line 434 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Integer) 0));
#line 434 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((MR_Integer) 0));
#line 434 "hlds_clauses.m"
    }
#line 424 "hlds_clauses.m"
  }
#line 82 "hlds_clauses.m"
}

void mercury__hlds__hlds_clauses__init(void)
{
}

void mercury__hlds__hlds_clauses__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0);
	MR_register_type_ctor_info(&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_applicable_modes_0);
	MR_register_type_ctor_info(&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0);
	MR_register_type_ctor_info(&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_type_0);
	MR_register_type_ctor_info(&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_types_0);
	MR_register_type_ctor_info(&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_numbers_0);
	MR_register_type_ctor_info(&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_info_0);
	MR_register_type_ctor_info(&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_rep_0);
}

void mercury__hlds__hlds_clauses__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.hlds_clauses. */
