/*
** Automatically generated from `pred_table.m'
** by the Mercury compiler,
** version rotd-2015-02-04
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


/* :- module hlds.pred_table. */
/* :- implementation. */

/*
INIT mercury__hlds__pred_table__init
ENDINIT
*/

#include "hlds.pred_table.mih"


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
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 138 "hlds.pred_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

#line 141 "hlds.pred_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__pred_table__type_ctor_info_name_accessibility_0;

#line 144 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

#line 147 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct1 hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 150 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 153 "hlds.pred_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 156 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__pred_table__type_ctor_info_name_accessibility_0;

#line 159 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct1 hlds__pred_table__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 162 "hlds.pred_table.c"
static const MR_VA_TypeInfo_Struct2 hlds__pred_table____vti_pred_2builtin__type_ctor_info_int_0list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 165 "hlds.pred_table.c"
static const MR_EnumFunctorDesc hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_0;

#line 168 "hlds.pred_table.c"
static const MR_EnumFunctorDesc hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_1;

#line 171 "hlds.pred_table.c"
static const MR_EnumFunctorDescPtr hlds__pred_table__hlds__pred_table__enum_value_ordered_is_fully_qualified_0[2];

#line 174 "hlds.pred_table.c"
static const MR_EnumFunctorDescPtr hlds__pred_table__hlds__pred_table__enum_name_ordered_is_fully_qualified_0[2];

#line 177 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_is_fully_qualified_0[2];

#line 180 "hlds.pred_table.c"
static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_0;

#line 183 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_mode_no_0_1[1];

#line 186 "hlds.pred_table.c"
static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_1;

#line 189 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_mode_no_0_0[1];

#line 192 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_mode_no_0_1[1];

#line 195 "hlds.pred_table.c"
static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_mode_no_0[2];

#line 198 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_mode_no_0[2];

#line 201 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_mode_no_0[2];

#line 204 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 207 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_name_accessibility_0_0[2];

#line 210 "hlds.pred_table.c"
static const MR_ConstString hlds__pred_table__hlds__pred_table__field_names_name_accessibility_0_0[2];

#line 213 "hlds.pred_table.c"
static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_name_accessibility_0_0;

#line 216 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_name_accessibility_0_0[1];

#line 219 "hlds.pred_table.c"
static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_name_accessibility_0[1];

#line 222 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_name_accessibility_0[1];

#line 225 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_name_accessibility_0[1];

#line 228 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_name_arity_0_0[2];

#line 231 "hlds.pred_table.c"
static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_name_arity_0_0;

#line 234 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_name_arity_0_0[1];

#line 237 "hlds.pred_table.c"
static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_name_arity_0[1];

#line 240 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_name_arity_0[1];

#line 243 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_name_arity_0[1];

#line 246 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__pred_table__type_ctor_info_name_arity_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 249 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 252 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0;

#line 255 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct1 hlds__pred_table__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 258 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_predicate_table_0_0[10];

#line 261 "hlds.pred_table.c"
static const MR_ConstString hlds__pred_table__hlds__pred_table__field_names_predicate_table_0_0[10];

#line 264 "hlds.pred_table.c"
static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_predicate_table_0_0;

#line 267 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_predicate_table_0_0[1];

#line 270 "hlds.pred_table.c"
static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_predicate_table_0[1];

#line 273 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_predicate_table_0[1];

#line 276 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_predicate_table_0[1];

#line 279 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____accessibility_table_0_0_10001(
#line 282 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 284 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 287 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____accessibility_table_0_0_10001(
#line 290 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 292 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 294 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 297 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____constraint_search_0_0_10001(
#line 300 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 302 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 305 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____constraint_search_0_0_10001(
#line 308 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 310 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 312 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 315 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____is_fully_qualified_0_0_10001(
#line 318 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 320 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 323 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____is_fully_qualified_0_0_10001(
#line 326 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 328 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 330 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 333 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____mode_no_0_0_10001(
#line 336 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 338 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 341 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____mode_no_0_0_10001(
#line 344 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 346 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 348 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 351 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____module_name_arity_index_0_0_10001(
#line 354 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 356 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 359 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____module_name_arity_index_0_0_10001(
#line 362 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 364 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 366 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 369 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_accessibility_0_0_10001(
#line 372 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 374 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 377 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_accessibility_0_0_10001(
#line 380 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 382 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 384 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 387 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_0_0_10001(
#line 390 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 392 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 395 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_0_0_10001(
#line 398 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 400 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 402 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 405 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_index_0_0_10001(
#line 408 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 410 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 413 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_index_0_0_10001(
#line 416 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 418 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 420 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 423 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_index_0_0_10001(
#line 426 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 428 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 431 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_index_0_0_10001(
#line 434 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 436 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 438 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 441 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____pred_table_0_0_10001(
#line 444 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 446 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 449 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____pred_table_0_0_10001(
#line 452 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 454 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 456 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 459 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____predicate_table_0_0_10001(
#line 462 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 464 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 467 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____predicate_table_0_0_10001(
#line 470 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 472 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 474 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 355 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_index_0_0(
#line 355 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 355 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 355 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3);

#line 355 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_index_0_0(
#line 355 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 355 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2);

#line 357 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_index_0_0(
#line 357 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 357 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 357 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3);

#line 357 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_index_0_0(
#line 357 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 357 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2);

#line 358 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_0_0(
#line 358 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 358 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 358 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3);

#line 358 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_0_0(
#line 358 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 358 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2);

#line 345 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_accessibility_0_0(
#line 345 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 345 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 345 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3);

#line 345 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_accessibility_0_0(
#line 345 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 345 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2);

#line 364 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____module_name_arity_index_0_0(
#line 364 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 364 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 364 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3);

#line 364 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____module_name_arity_index_0_0(
#line 364 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 364 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2);

#line 343 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____accessibility_table_0_0(
#line 343 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 343 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 343 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3);

#line 343 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____accessibility_table_0_0(
#line 343 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 343 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2);

#line 1083 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__univ_constraints_match_2_p_0(
#line 1083 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 1083 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2);

#line 972 "pred_table.m"
static void MR_CALL 
hlds__pred_table__insert_into_mna_index_6_p_0(
#line 972 "pred_table.m"
  MR_String hlds__pred_table__Name_7,
#line 972 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_8,
#line 972 "pred_table.m"
  MR_Word hlds__pred_table__PredId_9,
#line 972 "pred_table.m"
  MR_Word hlds__pred_table__Module_10,
#line 972 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_MNA_Index_0_14,
#line 972 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_MNA_Index_15);

#line 958 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_do_insert_14_p_0_1(
#line 958 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 958 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 958 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 958 "pred_table.m"
  MR_Box * hlds__pred_table__wrapper_arg_3);

#line 929 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_do_insert_14_p_0(
#line 929 "pred_table.m"
  MR_Word hlds__pred_table__Module_15,
#line 929 "pred_table.m"
  MR_String hlds__pred_table__Name_16,
#line 929 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_17,
#line 929 "pred_table.m"
  MR_Word hlds__pred_table__NeedQual_18,
#line 929 "pred_table.m"
  MR_Word hlds__pred_table__MaybeQualInfo_19,
#line 929 "pred_table.m"
  MR_Word hlds__pred_table__PredId_20,
#line 929 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_AccessibilityTable_0_31,
#line 929 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_AccessibilityTable_32,
#line 929 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_N_Index_0_33,
#line 929 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_N_Index_34,
#line 929 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_NA_Index_0_35,
#line 929 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_NA_Index_36,
#line 929 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_MNA_Index_0_37,
#line 929 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_MNA_Index_38);

#line 958 "pred_table.m"
static void MR_CALL 
hlds__pred_table__do_predicate_table_insert_7_p_0_1(
#line 958 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 958 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 958 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 958 "pred_table.m"
  MR_Box * hlds__pred_table__wrapper_arg_3);

#line 868 "pred_table.m"
static void MR_CALL 
hlds__pred_table__do_predicate_table_insert_7_p_0(
#line 868 "pred_table.m"
  MR_Word hlds__pred_table__MaybePredId_8,
#line 868 "pred_table.m"
  MR_Word hlds__pred_table__PredInfo_9,
#line 868 "pred_table.m"
  MR_Word hlds__pred_table__NeedQual_10,
#line 868 "pred_table.m"
  MR_Word hlds__pred_table__MaybeQualInfo_11,
#line 868 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_12,
#line 868 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39,
#line 868 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_40);

#line 822 "pred_table.m"
static void MR_CALL 
hlds__pred_table__reinsert_for_restrict_6_p_0(
#line 822 "pred_table.m"
  MR_Word hlds__pred_table__PartialQualInfo_7,
#line 822 "pred_table.m"
  MR_Word hlds__pred_table__Preds_8,
#line 822 "pred_table.m"
  MR_Word hlds__pred_table__AccessibilityTable_9,
#line 822 "pred_table.m"
  MR_Word hlds__pred_table__PredId_10,
#line 822 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_19,
#line 822 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_20);

#line 746 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__pred_id_matches_module_3_p_0(
#line 746 "pred_table.m"
  MR_Word hlds__pred_table__Preds_4,
#line 746 "pred_table.m"
  MR_Word hlds__pred_table__ModuleName_5,
#line 746 "pred_table.m"
  MR_Word hlds__pred_table__PredId_6);

#line 744 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0_1(
#line 744 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 744 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1);

#line 656 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0(
#line 656 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_6,
#line 656 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_7,
#line 656 "pred_table.m"
  MR_Word hlds__pred_table__Module_8,
#line 656 "pred_table.m"
  MR_String hlds__pred_table__FuncName_9,
#line 656 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_10);

#line 446 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_remove_from_index_10_p_0(
#line 446 "pred_table.m"
  MR_Word hlds__pred_table__Module_11,
#line 446 "pred_table.m"
  MR_String hlds__pred_table__Name_12,
#line 446 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_13,
#line 446 "pred_table.m"
  MR_Word hlds__pred_table__PredId_14,
#line 446 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_N_0_18,
#line 446 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_N_19,
#line 446 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_NA_0_20,
#line 446 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_NA_21,
#line 446 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_MNA_0_22,
#line 446 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_MNA_23);

#line 744 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0_1(
#line 744 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 744 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1);

#line 744 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0_1(
#line 744 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 744 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1);

#line 744 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_sym_4_p_0_1(
#line 744 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 744 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1);

#line 744 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0_1(
#line 744 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 744 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1);

#line 744 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_sym_4_p_0_1(
#line 744 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 744 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1);

#line 819 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_restrict_4_p_0_1(
#line 819 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 819 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 819 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 819 "pred_table.m"
  MR_Box * hlds__pred_table__wrapper_arg_3);


static /* final */ const MR_Box hlds__pred_table_scalar_common_1[15][2];

static /* final */ const MR_Box hlds__pred_table_scalar_common_2[7][3];

static /* final */ const MR_Box hlds__pred_table_scalar_common_3[1][4];

static /* final */ const MR_Box hlds__pred_table_scalar_common_4[2][9];

static /* final */ const MR_Box hlds__pred_table_scalar_common_5[1][6];

static /* final */ const MR_Box hlds__pred_table_scalar_common_6[1][1];




static /* final */ const MR_Box hlds__pred_table_scalar_common_1[15][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "You need to use an explicit module qualifier."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__pred_table_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__pred_table_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "(Sorry, confused by earlier errors -- bailing out.)")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "\' with no modes.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "(use an explicit lambda expression instead)")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "\' with multiple modes.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[10])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: unresolved predicate overloading, matched"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "\'")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__pred_table_scalar_common_2[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__pred_table_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__pred_table_scalar_common_2[0])),
    ((MR_Box) (&hlds__pred_table_scalar_common_2[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0)),
    ((MR_Box) (&hlds__pred_table_scalar_common_1[0]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__pred_table_scalar_common_1[0]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
};

static /* final */ const MR_Box hlds__pred_table_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__pred_table_scalar_common_1[1]))
  },
};

static /* final */ const MR_Box hlds__pred_table_scalar_common_4[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_partial_qualifier_info_0)),
    ((MR_Box) (&hlds__pred_table__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__pred_table__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__pred_table__type_ctor_info_name_accessibility_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__pred_table__hlds__pred_table__type_ctor_info_predicate_table_0)),
    ((MR_Box) (&hlds__pred_table__hlds__pred_table__type_ctor_info_predicate_table_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__pred_table__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__pred_table__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};

static /* final */ const MR_Box hlds__pred_table_scalar_common_5[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__pred_table__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};

static /* final */ const MR_Box hlds__pred_table_scalar_common_6[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1019 "hlds.pred_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

#line 1028 "hlds.pred_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__pred_table__type_ctor_info_name_accessibility_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0
  }
};

#line 1037 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1046 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct1 hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1054 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1063 "hlds.pred_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__pred_table__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1072 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__pred_table__type_ctor_info_name_accessibility_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0
  }
};

#line 1081 "hlds.pred_table.c"
const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_accessibility_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pred_table____Unify____accessibility_table_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____accessibility_table_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "accessibility_table",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__pred_table__type_ctor_info_name_accessibility_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1102 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct1 hlds__pred_table__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1110 "hlds.pred_table.c"
static const MR_VA_TypeInfo_Struct2 hlds__pred_table____vti_pred_2builtin__type_ctor_info_int_0list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &hlds__pred_table__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1120 "hlds.pred_table.c"
const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_constraint_search_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pred_table____Unify____constraint_search_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____constraint_search_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "constraint_search",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &hlds__pred_table____vti_pred_2builtin__type_ctor_info_int_0list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1141 "hlds.pred_table.c"
static const MR_EnumFunctorDesc hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_0 = {
  (MR_String) "is_fully_qualified",
  (MR_Integer) 0
};

#line 1147 "hlds.pred_table.c"
static const MR_EnumFunctorDesc hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_1 = {
  (MR_String) "may_be_partially_qualified",
  (MR_Integer) 1
};

#line 1153 "hlds.pred_table.c"
static const MR_EnumFunctorDescPtr hlds__pred_table__hlds__pred_table__enum_value_ordered_is_fully_qualified_0[2] = {
  &hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_0,
  &hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_1
};

#line 1159 "hlds.pred_table.c"
static const MR_EnumFunctorDescPtr hlds__pred_table__hlds__pred_table__enum_name_ordered_is_fully_qualified_0[2] = {
  &hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_0,
  &hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_1
};

#line 1165 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_is_fully_qualified_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1171 "hlds.pred_table.c"
const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_is_fully_qualified_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__pred_table____Unify____is_fully_qualified_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____is_fully_qualified_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "is_fully_qualified",
  {
    hlds__pred_table__hlds__pred_table__enum_name_ordered_is_fully_qualified_0
  },
  {
    hlds__pred_table__hlds__pred_table__enum_value_ordered_is_fully_qualified_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__pred_table__hlds__pred_table__functor_number_map_is_fully_qualified_0
};

#line 1192 "hlds.pred_table.c"
static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_0 = {
  (MR_String) "only_mode",
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

#line 1207 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_mode_no_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1212 "hlds.pred_table.c"
static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_1 = {
  (MR_String) "mode_no",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__pred_table__hlds__pred_table__field_types_mode_no_0_1,
  NULL,
  NULL,
  NULL
};

#line 1227 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_mode_no_0_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_0
};

#line 1232 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_mode_no_0_1[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_1
};

#line 1237 "hlds.pred_table.c"
static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_mode_no_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    hlds__pred_table__hlds__pred_table__du_stag_ordered_mode_no_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__pred_table__hlds__pred_table__du_stag_ordered_mode_no_0_1
  }
};

#line 1251 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_mode_no_0[2] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_1,
  &hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_0
};

#line 1257 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_mode_no_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1263 "hlds.pred_table.c"
const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_mode_no_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__pred_table____Unify____mode_no_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____mode_no_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "mode_no",
  {
    hlds__pred_table__hlds__pred_table__du_name_ordered_mode_no_0
  },
  {
    hlds__pred_table__hlds__pred_table__du_ptag_ordered_mode_no_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__pred_table__hlds__pred_table__functor_number_map_mode_no_0
};

#line 1284 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__pred_table__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1293 "hlds.pred_table.c"
const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_module_name_arity_index_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pred_table____Unify____module_name_arity_index_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____module_name_arity_index_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "module_name_arity_index",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1314 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_name_accessibility_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1320 "hlds.pred_table.c"
static const MR_ConstString hlds__pred_table__hlds__pred_table__field_names_name_accessibility_0_0[2] = {
  (MR_String) "accessible_by_unqualifed_name",
  (MR_String) "accessible_by_partially_qualified_names"
};

#line 1326 "hlds.pred_table.c"
static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_name_accessibility_0_0 = {
  (MR_String) "access",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__pred_table__hlds__pred_table__field_types_name_accessibility_0_0,
  hlds__pred_table__hlds__pred_table__field_names_name_accessibility_0_0,
  NULL,
  NULL
};

#line 1341 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_name_accessibility_0_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_name_accessibility_0_0
};

#line 1346 "hlds.pred_table.c"
static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_name_accessibility_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__pred_table__hlds__pred_table__du_stag_ordered_name_accessibility_0_0
  }
};

#line 1355 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_name_accessibility_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_name_accessibility_0_0
};

#line 1360 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_name_accessibility_0[1] = {
  (MR_Integer) 0
};

#line 1365 "hlds.pred_table.c"
const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__pred_table____Unify____name_accessibility_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____name_accessibility_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "name_accessibility",
  {
    hlds__pred_table__hlds__pred_table__du_name_ordered_name_accessibility_0
  },
  {
    hlds__pred_table__hlds__pred_table__du_ptag_ordered_name_accessibility_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__pred_table__hlds__pred_table__functor_number_map_name_accessibility_0
};

#line 1386 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_name_arity_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1392 "hlds.pred_table.c"
static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_name_arity_0_0 = {
  (MR_String) "/",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__pred_table__hlds__pred_table__field_types_name_arity_0_0,
  NULL,
  NULL,
  NULL
};

#line 1407 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_name_arity_0_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_name_arity_0_0
};

#line 1412 "hlds.pred_table.c"
static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_name_arity_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__pred_table__hlds__pred_table__du_stag_ordered_name_arity_0_0
  }
};

#line 1421 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_name_arity_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_name_arity_0_0
};

#line 1426 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_name_arity_0[1] = {
  (MR_Integer) 0
};

#line 1431 "hlds.pred_table.c"
const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__pred_table____Unify____name_arity_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____name_arity_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "name_arity",
  {
    hlds__pred_table__hlds__pred_table__du_name_ordered_name_arity_0
  },
  {
    hlds__pred_table__hlds__pred_table__du_ptag_ordered_name_arity_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__pred_table__hlds__pred_table__functor_number_map_name_arity_0
};

#line 1452 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__pred_table__type_ctor_info_name_arity_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0,
    (MR_TypeInfo) &hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1461 "hlds.pred_table.c"
const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_index_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pred_table____Unify____name_arity_index_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____name_arity_index_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "name_arity_index",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2hlds__pred_table__type_ctor_info_name_arity_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1482 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1491 "hlds.pred_table.c"
const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_name_index_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pred_table____Unify____name_index_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____name_index_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "name_index",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1512 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

#line 1521 "hlds.pred_table.c"
const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_pred_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pred_table____Unify____pred_table_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____pred_table_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "pred_table",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1542 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct1 hlds__pred_table__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1550 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_predicate_table_0_0[10] = {
  (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__pred_table__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__pred_table__type_ctor_info_name_accessibility_0,
  (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2hlds__pred_table__type_ctor_info_name_arity_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2hlds__pred_table__type_ctor_info_name_arity_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
};

#line 1564 "hlds.pred_table.c"
static const MR_ConstString hlds__pred_table__hlds__pred_table__field_names_predicate_table_0_0[10] = {
  (MR_String) "preds",
  (MR_String) "next_pred_id",
  (MR_String) "valid_pred_ids",
  (MR_String) "accessibility_table",
  (MR_String) "pred_name_index",
  (MR_String) "pred_name_arity_index",
  (MR_String) "pred_module_name_arity_index",
  (MR_String) "func_name_index",
  (MR_String) "func_name_arity_index",
  (MR_String) "func_module_name_arity_index"
};

#line 1578 "hlds.pred_table.c"
static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_predicate_table_0_0 = {
  (MR_String) "predicate_table",
  (MR_Integer) 10,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__pred_table__hlds__pred_table__field_types_predicate_table_0_0,
  hlds__pred_table__hlds__pred_table__field_names_predicate_table_0_0,
  NULL,
  NULL
};

#line 1593 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_predicate_table_0_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_predicate_table_0_0
};

#line 1598 "hlds.pred_table.c"
static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_predicate_table_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__pred_table__hlds__pred_table__du_stag_ordered_predicate_table_0_0
  }
};

#line 1607 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_predicate_table_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_predicate_table_0_0
};

#line 1612 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_predicate_table_0[1] = {
  (MR_Integer) 0
};

#line 1617 "hlds.pred_table.c"
const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_predicate_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__pred_table____Unify____predicate_table_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____predicate_table_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "predicate_table",
  {
    hlds__pred_table__hlds__pred_table__du_name_ordered_predicate_table_0
  },
  {
    hlds__pred_table__hlds__pred_table__du_ptag_ordered_predicate_table_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__pred_table__hlds__pred_table__functor_number_map_predicate_table_0
};

#line 1638 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____accessibility_table_0_0_10001(
#line 1641 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1643 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1645 "hlds.pred_table.c"
{
#line 1647 "hlds.pred_table.c"
  {
#line 1649 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1652 "hlds.pred_table.c"
    {
#line 1654 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____accessibility_table_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1657 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1659 "hlds.pred_table.c"
  }
#line 1661 "hlds.pred_table.c"
}

#line 1664 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____accessibility_table_0_0_10001(
#line 1667 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 1669 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 1671 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 1673 "hlds.pred_table.c"
{
#line 1675 "hlds.pred_table.c"
  {
#line 1677 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 1680 "hlds.pred_table.c"
    {
#line 1682 "hlds.pred_table.c"
      hlds__pred_table____Compare____accessibility_table_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 1685 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 1687 "hlds.pred_table.c"
  }
#line 1689 "hlds.pred_table.c"
}

#line 1692 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____constraint_search_0_0_10001(
#line 1695 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1697 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1699 "hlds.pred_table.c"
{
#line 1701 "hlds.pred_table.c"
  {
#line 1703 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1706 "hlds.pred_table.c"
    {
#line 1708 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____constraint_search_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1711 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1713 "hlds.pred_table.c"
  }
#line 1715 "hlds.pred_table.c"
}

#line 1718 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____constraint_search_0_0_10001(
#line 1721 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 1723 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 1725 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 1727 "hlds.pred_table.c"
{
#line 1729 "hlds.pred_table.c"
  {
#line 1731 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 1734 "hlds.pred_table.c"
    {
#line 1736 "hlds.pred_table.c"
      hlds__pred_table____Compare____constraint_search_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 1739 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 1741 "hlds.pred_table.c"
  }
#line 1743 "hlds.pred_table.c"
}

#line 1746 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____is_fully_qualified_0_0_10001(
#line 1749 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1751 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1753 "hlds.pred_table.c"
{
#line 1755 "hlds.pred_table.c"
  {
#line 1757 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1760 "hlds.pred_table.c"
    {
#line 1762 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____is_fully_qualified_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1765 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1767 "hlds.pred_table.c"
  }
#line 1769 "hlds.pred_table.c"
}

#line 1772 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____is_fully_qualified_0_0_10001(
#line 1775 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 1777 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 1779 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 1781 "hlds.pred_table.c"
{
#line 1783 "hlds.pred_table.c"
  {
#line 1785 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 1788 "hlds.pred_table.c"
    {
#line 1790 "hlds.pred_table.c"
      hlds__pred_table____Compare____is_fully_qualified_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 1793 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 1795 "hlds.pred_table.c"
  }
#line 1797 "hlds.pred_table.c"
}

#line 1800 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____mode_no_0_0_10001(
#line 1803 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1805 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1807 "hlds.pred_table.c"
{
#line 1809 "hlds.pred_table.c"
  {
#line 1811 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1814 "hlds.pred_table.c"
    {
#line 1816 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____mode_no_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1819 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1821 "hlds.pred_table.c"
  }
#line 1823 "hlds.pred_table.c"
}

#line 1826 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____mode_no_0_0_10001(
#line 1829 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 1831 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 1833 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 1835 "hlds.pred_table.c"
{
#line 1837 "hlds.pred_table.c"
  {
#line 1839 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 1842 "hlds.pred_table.c"
    {
#line 1844 "hlds.pred_table.c"
      hlds__pred_table____Compare____mode_no_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 1847 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 1849 "hlds.pred_table.c"
  }
#line 1851 "hlds.pred_table.c"
}

#line 1854 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____module_name_arity_index_0_0_10001(
#line 1857 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1859 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1861 "hlds.pred_table.c"
{
#line 1863 "hlds.pred_table.c"
  {
#line 1865 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1868 "hlds.pred_table.c"
    {
#line 1870 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____module_name_arity_index_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1873 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1875 "hlds.pred_table.c"
  }
#line 1877 "hlds.pred_table.c"
}

#line 1880 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____module_name_arity_index_0_0_10001(
#line 1883 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 1885 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 1887 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 1889 "hlds.pred_table.c"
{
#line 1891 "hlds.pred_table.c"
  {
#line 1893 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 1896 "hlds.pred_table.c"
    {
#line 1898 "hlds.pred_table.c"
      hlds__pred_table____Compare____module_name_arity_index_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 1901 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 1903 "hlds.pred_table.c"
  }
#line 1905 "hlds.pred_table.c"
}

#line 1908 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_accessibility_0_0_10001(
#line 1911 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1913 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1915 "hlds.pred_table.c"
{
#line 1917 "hlds.pred_table.c"
  {
#line 1919 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1922 "hlds.pred_table.c"
    {
#line 1924 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____name_accessibility_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1927 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1929 "hlds.pred_table.c"
  }
#line 1931 "hlds.pred_table.c"
}

#line 1934 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_accessibility_0_0_10001(
#line 1937 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 1939 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 1941 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 1943 "hlds.pred_table.c"
{
#line 1945 "hlds.pred_table.c"
  {
#line 1947 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 1950 "hlds.pred_table.c"
    {
#line 1952 "hlds.pred_table.c"
      hlds__pred_table____Compare____name_accessibility_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 1955 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 1957 "hlds.pred_table.c"
  }
#line 1959 "hlds.pred_table.c"
}

#line 1962 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_0_0_10001(
#line 1965 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1967 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1969 "hlds.pred_table.c"
{
#line 1971 "hlds.pred_table.c"
  {
#line 1973 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1976 "hlds.pred_table.c"
    {
#line 1978 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____name_arity_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1981 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1983 "hlds.pred_table.c"
  }
#line 1985 "hlds.pred_table.c"
}

#line 1988 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_0_0_10001(
#line 1991 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 1993 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 1995 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 1997 "hlds.pred_table.c"
{
#line 1999 "hlds.pred_table.c"
  {
#line 2001 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 2004 "hlds.pred_table.c"
    {
#line 2006 "hlds.pred_table.c"
      hlds__pred_table____Compare____name_arity_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 2009 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 2011 "hlds.pred_table.c"
  }
#line 2013 "hlds.pred_table.c"
}

#line 2016 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_index_0_0_10001(
#line 2019 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 2021 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 2023 "hlds.pred_table.c"
{
#line 2025 "hlds.pred_table.c"
  {
#line 2027 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 2030 "hlds.pred_table.c"
    {
#line 2032 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____name_arity_index_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 2035 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 2037 "hlds.pred_table.c"
  }
#line 2039 "hlds.pred_table.c"
}

#line 2042 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_index_0_0_10001(
#line 2045 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 2047 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 2049 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 2051 "hlds.pred_table.c"
{
#line 2053 "hlds.pred_table.c"
  {
#line 2055 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 2058 "hlds.pred_table.c"
    {
#line 2060 "hlds.pred_table.c"
      hlds__pred_table____Compare____name_arity_index_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 2063 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 2065 "hlds.pred_table.c"
  }
#line 2067 "hlds.pred_table.c"
}

#line 2070 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_index_0_0_10001(
#line 2073 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 2075 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 2077 "hlds.pred_table.c"
{
#line 2079 "hlds.pred_table.c"
  {
#line 2081 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 2084 "hlds.pred_table.c"
    {
#line 2086 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____name_index_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 2089 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 2091 "hlds.pred_table.c"
  }
#line 2093 "hlds.pred_table.c"
}

#line 2096 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_index_0_0_10001(
#line 2099 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 2101 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 2103 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 2105 "hlds.pred_table.c"
{
#line 2107 "hlds.pred_table.c"
  {
#line 2109 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 2112 "hlds.pred_table.c"
    {
#line 2114 "hlds.pred_table.c"
      hlds__pred_table____Compare____name_index_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 2117 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 2119 "hlds.pred_table.c"
  }
#line 2121 "hlds.pred_table.c"
}

#line 2124 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____pred_table_0_0_10001(
#line 2127 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 2129 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 2131 "hlds.pred_table.c"
{
#line 2133 "hlds.pred_table.c"
  {
#line 2135 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 2138 "hlds.pred_table.c"
    {
#line 2140 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____pred_table_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 2143 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 2145 "hlds.pred_table.c"
  }
#line 2147 "hlds.pred_table.c"
}

#line 2150 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____pred_table_0_0_10001(
#line 2153 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 2155 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 2157 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 2159 "hlds.pred_table.c"
{
#line 2161 "hlds.pred_table.c"
  {
#line 2163 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 2166 "hlds.pred_table.c"
    {
#line 2168 "hlds.pred_table.c"
      hlds__pred_table____Compare____pred_table_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 2171 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 2173 "hlds.pred_table.c"
  }
#line 2175 "hlds.pred_table.c"
}

#line 2178 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____predicate_table_0_0_10001(
#line 2181 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 2183 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 2185 "hlds.pred_table.c"
{
#line 2187 "hlds.pred_table.c"
  {
#line 2189 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 2192 "hlds.pred_table.c"
    {
#line 2194 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____predicate_table_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 2197 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 2199 "hlds.pred_table.c"
  }
#line 2201 "hlds.pred_table.c"
}

#line 2204 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____predicate_table_0_0_10001(
#line 2207 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 2209 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 2211 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 2213 "hlds.pred_table.c"
{
#line 2215 "hlds.pred_table.c"
  {
#line 2217 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 2220 "hlds.pred_table.c"
    {
#line 2222 "hlds.pred_table.c"
      hlds__pred_table____Compare____predicate_table_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 2225 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 2227 "hlds.pred_table.c"
  }
#line 2229 "hlds.pred_table.c"
}

#line 314 "pred_table.m"
void MR_CALL 
hlds__pred_table____Compare____predicate_table_0_0(
#line 314 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 314 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 314 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 314 "pred_table.m"
{
#line 314 "pred_table.m"
  {
#line 314 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 314 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_33 = (MR_Integer) hlds__pred_table__HeadVar__2_2;
#line 314 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_34 = (MR_Integer) hlds__pred_table__HeadVar__3_3;

#line 314 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_33 == hlds__pred_table__CastY_34);
#line 314 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 2256 "hlds.pred_table.c"
      *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 0;
#line 314 "pred_table.m"
    else
#line 314 "pred_table.m"
      {
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 2)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 3)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 4)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 5)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 6)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 7)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 8)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 9)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 0)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 1)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 2)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 3)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 4)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 5)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 6)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 7)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 8)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 9)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_24_24;

#line 314 "pred_table.m"
        {
#line 314 "pred_table.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[6], &hlds__pred_table__V_24_24, ((MR_Box) (hlds__pred_table__V_4_4)), ((MR_Box) (hlds__pred_table__V_14_14)));
        }
#line 2310 "hlds.pred_table.c"
        hlds__pred_table__succeeded = (hlds__pred_table__V_24_24 == (MR_Integer) 0);
#line 314 "pred_table.m"
        hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 314 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 314 "pred_table.m"
          *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_24_24;
#line 314 "pred_table.m"
        else
#line 314 "pred_table.m"
          {
#line 314 "pred_table.m"
            MR_Word hlds__pred_table__V_25_25;

#line 314 "pred_table.m"
            {
#line 314 "pred_table.m"
              hlds__hlds_pred____Compare____pred_id_0_0(&hlds__pred_table__V_25_25, hlds__pred_table__V_5_5, hlds__pred_table__V_15_15);
            }
#line 2330 "hlds.pred_table.c"
            hlds__pred_table__succeeded = (hlds__pred_table__V_25_25 == (MR_Integer) 0);
#line 314 "pred_table.m"
            hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 314 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 314 "pred_table.m"
              *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_25_25;
#line 314 "pred_table.m"
            else
#line 314 "pred_table.m"
              {
#line 314 "pred_table.m"
                MR_Word hlds__pred_table__V_26_26;

#line 314 "pred_table.m"
                {
#line 314 "pred_table.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_1[2], &hlds__pred_table__V_26_26, ((MR_Box) (hlds__pred_table__V_6_6)), ((MR_Box) (hlds__pred_table__V_16_16)));
                }
#line 2350 "hlds.pred_table.c"
                hlds__pred_table__succeeded = (hlds__pred_table__V_26_26 == (MR_Integer) 0);
#line 314 "pred_table.m"
                hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 314 "pred_table.m"
                if (hlds__pred_table__succeeded)
#line 314 "pred_table.m"
                  *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_26_26;
#line 314 "pred_table.m"
                else
#line 314 "pred_table.m"
                  {
#line 314 "pred_table.m"
                    MR_Word hlds__pred_table__V_27_27;

#line 314 "pred_table.m"
                    {
#line 314 "pred_table.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[3], &hlds__pred_table__V_27_27, ((MR_Box) (hlds__pred_table__V_7_7)), ((MR_Box) (hlds__pred_table__V_17_17)));
                    }
#line 2370 "hlds.pred_table.c"
                    hlds__pred_table__succeeded = (hlds__pred_table__V_27_27 == (MR_Integer) 0);
#line 314 "pred_table.m"
                    hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 314 "pred_table.m"
                    if (hlds__pred_table__succeeded)
#line 314 "pred_table.m"
                      *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_27_27;
#line 314 "pred_table.m"
                    else
#line 314 "pred_table.m"
                      {
#line 314 "pred_table.m"
                        MR_Word hlds__pred_table__V_28_28;

#line 314 "pred_table.m"
                        {
#line 314 "pred_table.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[5], &hlds__pred_table__V_28_28, ((MR_Box) (hlds__pred_table__V_8_8)), ((MR_Box) (hlds__pred_table__V_18_18)));
                        }
#line 2390 "hlds.pred_table.c"
                        hlds__pred_table__succeeded = (hlds__pred_table__V_28_28 == (MR_Integer) 0);
#line 314 "pred_table.m"
                        hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 314 "pred_table.m"
                        if (hlds__pred_table__succeeded)
#line 314 "pred_table.m"
                          *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_28_28;
#line 314 "pred_table.m"
                        else
#line 314 "pred_table.m"
                          {
#line 314 "pred_table.m"
                            MR_Word hlds__pred_table__V_29_29;

#line 314 "pred_table.m"
                            {
#line 314 "pred_table.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[4], &hlds__pred_table__V_29_29, ((MR_Box) (hlds__pred_table__V_9_9)), ((MR_Box) (hlds__pred_table__V_19_19)));
                            }
#line 2410 "hlds.pred_table.c"
                            hlds__pred_table__succeeded = (hlds__pred_table__V_29_29 == (MR_Integer) 0);
#line 314 "pred_table.m"
                            hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 314 "pred_table.m"
                            if (hlds__pred_table__succeeded)
#line 314 "pred_table.m"
                              *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_29_29;
#line 314 "pred_table.m"
                            else
#line 314 "pred_table.m"
                              {
#line 314 "pred_table.m"
                                MR_Word hlds__pred_table__V_30_30;

#line 314 "pred_table.m"
                                {
#line 314 "pred_table.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[2], &hlds__pred_table__V_30_30, ((MR_Box) (hlds__pred_table__V_10_10)), ((MR_Box) (hlds__pred_table__V_20_20)));
                                }
#line 2430 "hlds.pred_table.c"
                                hlds__pred_table__succeeded = (hlds__pred_table__V_30_30 == (MR_Integer) 0);
#line 314 "pred_table.m"
                                hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 314 "pred_table.m"
                                if (hlds__pred_table__succeeded)
#line 314 "pred_table.m"
                                  *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_30_30;
#line 314 "pred_table.m"
                                else
#line 314 "pred_table.m"
                                  {
#line 314 "pred_table.m"
                                    MR_Word hlds__pred_table__V_31_31;

#line 314 "pred_table.m"
                                    {
#line 314 "pred_table.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[5], &hlds__pred_table__V_31_31, ((MR_Box) (hlds__pred_table__V_11_11)), ((MR_Box) (hlds__pred_table__V_21_21)));
                                    }
#line 2450 "hlds.pred_table.c"
                                    hlds__pred_table__succeeded = (hlds__pred_table__V_31_31 == (MR_Integer) 0);
#line 314 "pred_table.m"
                                    hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 314 "pred_table.m"
                                    if (hlds__pred_table__succeeded)
#line 314 "pred_table.m"
                                      *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_31_31;
#line 314 "pred_table.m"
                                    else
#line 314 "pred_table.m"
                                      {
#line 314 "pred_table.m"
                                        MR_Word hlds__pred_table__V_32_32;

#line 314 "pred_table.m"
                                        {
#line 314 "pred_table.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[4], &hlds__pred_table__V_32_32, ((MR_Box) (hlds__pred_table__V_12_12)), ((MR_Box) (hlds__pred_table__V_22_22)));
                                        }
#line 2470 "hlds.pred_table.c"
                                        hlds__pred_table__succeeded = (hlds__pred_table__V_32_32 == (MR_Integer) 0);
#line 314 "pred_table.m"
                                        hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 314 "pred_table.m"
                                        if (hlds__pred_table__succeeded)
#line 314 "pred_table.m"
                                          *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_32_32;
#line 314 "pred_table.m"
                                        else
#line 314 "pred_table.m"
                                          {
#line 314 "pred_table.m"
                                            {
#line 314 "pred_table.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[2], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__V_13_13)), ((MR_Box) (hlds__pred_table__V_23_23)));
#line 314 "pred_table.m"
                                              return;
                                            }
#line 314 "pred_table.m"
                                          }
#line 314 "pred_table.m"
                                      }
#line 314 "pred_table.m"
                                  }
#line 314 "pred_table.m"
                              }
#line 314 "pred_table.m"
                          }
#line 314 "pred_table.m"
                      }
#line 314 "pred_table.m"
                  }
#line 314 "pred_table.m"
              }
#line 314 "pred_table.m"
          }
#line 314 "pred_table.m"
      }
#line 314 "pred_table.m"
  }
#line 314 "pred_table.m"
}

#line 314 "pred_table.m"
MR_bool MR_CALL 
hlds__pred_table____Unify____predicate_table_0_0(
#line 314 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 314 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 314 "pred_table.m"
{
#line 314 "pred_table.m"
  {
#line 314 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 314 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_23 = (MR_Integer) hlds__pred_table__HeadVar__1_1;
#line 314 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_24 = (MR_Integer) hlds__pred_table__HeadVar__2_2;

#line 314 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_23 == hlds__pred_table__CastY_24);
#line 314 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 314 "pred_table.m"
      hlds__pred_table__succeeded = MR_TRUE;
#line 314 "pred_table.m"
    else
#line 314 "pred_table.m"
      {
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_27_27;
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_28_28;
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_29_29;
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_30_30;
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_31_31;
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_32_32;
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_33_33;
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_34_34;
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 0)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 1)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 2)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 3)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 4)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 5)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 6)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 7)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 8)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 9)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 2)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 3)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 4)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 5)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 6)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 7)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 8)));
#line 314 "pred_table.m"
        MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 9)));

#line 2599 "hlds.pred_table.c"
        {
#line 2601 "hlds.pred_table.c"
          hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pred_table_scalar_common_2[6], ((MR_Box) (hlds__pred_table__V_3_3)), ((MR_Box) (hlds__pred_table__V_13_13)));
        }
#line 314 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 314 "pred_table.m"
          {
#line 2608 "hlds.pred_table.c"
            {
#line 2610 "hlds.pred_table.c"
              hlds__pred_table__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__pred_table__V_4_4, hlds__pred_table__V_14_14);
            }
#line 314 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 314 "pred_table.m"
              {
#line 2617 "hlds.pred_table.c"
                hlds__pred_table__TypeInfo_27_27 = (MR_Word) &hlds__pred_table_scalar_common_1[2];
#line 2619 "hlds.pred_table.c"
                {
#line 2621 "hlds.pred_table.c"
                  hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_27_27, ((MR_Box) (hlds__pred_table__V_5_5)), ((MR_Box) (hlds__pred_table__V_15_15)));
                }
#line 314 "pred_table.m"
                if (hlds__pred_table__succeeded)
#line 314 "pred_table.m"
                  {
#line 2628 "hlds.pred_table.c"
                    hlds__pred_table__TypeInfo_28_28 = (MR_Word) &hlds__pred_table_scalar_common_2[3];
#line 2630 "hlds.pred_table.c"
                    {
#line 2632 "hlds.pred_table.c"
                      hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_28_28, ((MR_Box) (hlds__pred_table__V_6_6)), ((MR_Box) (hlds__pred_table__V_16_16)));
                    }
#line 314 "pred_table.m"
                    if (hlds__pred_table__succeeded)
#line 314 "pred_table.m"
                      {
#line 2639 "hlds.pred_table.c"
                        hlds__pred_table__TypeInfo_29_29 = (MR_Word) &hlds__pred_table_scalar_common_2[5];
#line 2641 "hlds.pred_table.c"
                        {
#line 2643 "hlds.pred_table.c"
                          hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_29_29, ((MR_Box) (hlds__pred_table__V_7_7)), ((MR_Box) (hlds__pred_table__V_17_17)));
                        }
#line 314 "pred_table.m"
                        if (hlds__pred_table__succeeded)
#line 314 "pred_table.m"
                          {
#line 2650 "hlds.pred_table.c"
                            hlds__pred_table__TypeInfo_30_30 = (MR_Word) &hlds__pred_table_scalar_common_2[4];
#line 2652 "hlds.pred_table.c"
                            {
#line 2654 "hlds.pred_table.c"
                              hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_30_30, ((MR_Box) (hlds__pred_table__V_8_8)), ((MR_Box) (hlds__pred_table__V_18_18)));
                            }
#line 314 "pred_table.m"
                            if (hlds__pred_table__succeeded)
#line 314 "pred_table.m"
                              {
#line 2661 "hlds.pred_table.c"
                                hlds__pred_table__TypeInfo_31_31 = (MR_Word) &hlds__pred_table_scalar_common_2[2];
#line 2663 "hlds.pred_table.c"
                                {
#line 2665 "hlds.pred_table.c"
                                  hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_31_31, ((MR_Box) (hlds__pred_table__V_9_9)), ((MR_Box) (hlds__pred_table__V_19_19)));
                                }
#line 314 "pred_table.m"
                                if (hlds__pred_table__succeeded)
#line 314 "pred_table.m"
                                  {
#line 2672 "hlds.pred_table.c"
                                    hlds__pred_table__TypeInfo_32_32 = (MR_Word) &hlds__pred_table_scalar_common_2[5];
#line 2674 "hlds.pred_table.c"
                                    {
#line 2676 "hlds.pred_table.c"
                                      hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_32_32, ((MR_Box) (hlds__pred_table__V_10_10)), ((MR_Box) (hlds__pred_table__V_20_20)));
                                    }
#line 314 "pred_table.m"
                                    if (hlds__pred_table__succeeded)
#line 314 "pred_table.m"
                                      {
#line 2683 "hlds.pred_table.c"
                                        hlds__pred_table__TypeInfo_33_33 = (MR_Word) &hlds__pred_table_scalar_common_2[4];
#line 2685 "hlds.pred_table.c"
                                        {
#line 2687 "hlds.pred_table.c"
                                          hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_33_33, ((MR_Box) (hlds__pred_table__V_11_11)), ((MR_Box) (hlds__pred_table__V_21_21)));
                                        }
#line 314 "pred_table.m"
                                        if (hlds__pred_table__succeeded)
#line 314 "pred_table.m"
                                          {
#line 2694 "hlds.pred_table.c"
                                            hlds__pred_table__TypeInfo_34_34 = (MR_Word) &hlds__pred_table_scalar_common_2[2];
#line 2696 "hlds.pred_table.c"
                                            {
#line 2698 "hlds.pred_table.c"
                                              return hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_34_34, ((MR_Box) (hlds__pred_table__V_12_12)), ((MR_Box) (hlds__pred_table__V_22_22)));
                                            }
#line 314 "pred_table.m"
                                          }
#line 314 "pred_table.m"
                                      }
#line 314 "pred_table.m"
                                  }
#line 314 "pred_table.m"
                              }
#line 314 "pred_table.m"
                          }
#line 314 "pred_table.m"
                      }
#line 314 "pred_table.m"
                  }
#line 314 "pred_table.m"
              }
#line 314 "pred_table.m"
          }
#line 314 "pred_table.m"
      }
#line 314 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 314 "pred_table.m"
  }
#line 314 "pred_table.m"
}

#line 53 "pred_table.m"
void MR_CALL 
hlds__pred_table____Compare____pred_table_0_0(
#line 53 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 53 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 53 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 53 "pred_table.m"
{
#line 53 "pred_table.m"
  {
#line 53 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 53 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_4 = hlds__pred_table__HeadVar__2_2;
#line 53 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_5 = hlds__pred_table__HeadVar__3_3;

#line 53 "pred_table.m"
    {
#line 53 "pred_table.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[6], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__Cast_HeadVar1_4)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_5)));
#line 53 "pred_table.m"
      return;
    }
#line 53 "pred_table.m"
  }
#line 53 "pred_table.m"
}

#line 53 "pred_table.m"
MR_bool MR_CALL 
hlds__pred_table____Unify____pred_table_0_0(
#line 53 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 53 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 53 "pred_table.m"
{
#line 53 "pred_table.m"
  {
#line 53 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 53 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_3 = hlds__pred_table__HeadVar__1_1;
#line 53 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_4 = hlds__pred_table__HeadVar__2_2;

#line 53 "pred_table.m"
    {
#line 53 "pred_table.m"
      return hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pred_table_scalar_common_2[6], ((MR_Box) (hlds__pred_table__Cast_HeadVar1_3)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_4)));
    }
#line 53 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 53 "pred_table.m"
  }
#line 53 "pred_table.m"
}

#line 355 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_index_0_0(
#line 355 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 355 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 355 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 355 "pred_table.m"
{
#line 355 "pred_table.m"
  {
#line 355 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 355 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_4 = hlds__pred_table__HeadVar__2_2;
#line 355 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_5 = hlds__pred_table__HeadVar__3_3;

#line 355 "pred_table.m"
    {
#line 355 "pred_table.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[5], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__Cast_HeadVar1_4)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_5)));
#line 355 "pred_table.m"
      return;
    }
#line 355 "pred_table.m"
  }
#line 355 "pred_table.m"
}

#line 355 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_index_0_0(
#line 355 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 355 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 355 "pred_table.m"
{
#line 355 "pred_table.m"
  {
#line 355 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 355 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_3 = hlds__pred_table__HeadVar__1_1;
#line 355 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_4 = hlds__pred_table__HeadVar__2_2;

#line 355 "pred_table.m"
    {
#line 355 "pred_table.m"
      return hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pred_table_scalar_common_2[5], ((MR_Box) (hlds__pred_table__Cast_HeadVar1_3)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_4)));
    }
#line 355 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 355 "pred_table.m"
  }
#line 355 "pred_table.m"
}

#line 357 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_index_0_0(
#line 357 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 357 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 357 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 357 "pred_table.m"
{
#line 357 "pred_table.m"
  {
#line 357 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 357 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_4 = hlds__pred_table__HeadVar__2_2;
#line 357 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_5 = hlds__pred_table__HeadVar__3_3;

#line 357 "pred_table.m"
    {
#line 357 "pred_table.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[4], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__Cast_HeadVar1_4)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_5)));
#line 357 "pred_table.m"
      return;
    }
#line 357 "pred_table.m"
  }
#line 357 "pred_table.m"
}

#line 357 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_index_0_0(
#line 357 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 357 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 357 "pred_table.m"
{
#line 357 "pred_table.m"
  {
#line 357 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 357 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_3 = hlds__pred_table__HeadVar__1_1;
#line 357 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_4 = hlds__pred_table__HeadVar__2_2;

#line 357 "pred_table.m"
    {
#line 357 "pred_table.m"
      return hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pred_table_scalar_common_2[4], ((MR_Box) (hlds__pred_table__Cast_HeadVar1_3)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_4)));
    }
#line 357 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 357 "pred_table.m"
  }
#line 357 "pred_table.m"
}

#line 358 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_0_0(
#line 358 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 358 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 358 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 358 "pred_table.m"
{
#line 358 "pred_table.m"
  {
#line 358 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 358 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_9 = (MR_Integer) hlds__pred_table__HeadVar__2_2;
#line 358 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_10 = (MR_Integer) hlds__pred_table__HeadVar__3_3;

#line 358 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_9 == hlds__pred_table__CastY_10);
#line 358 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 2938 "hlds.pred_table.c"
      *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 0;
#line 358 "pred_table.m"
    else
#line 358 "pred_table.m"
      {
#line 358 "pred_table.m"
        MR_String hlds__pred_table__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 358 "pred_table.m"
        MR_Integer hlds__pred_table__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));
#line 358 "pred_table.m"
        MR_String hlds__pred_table__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 0)));
#line 358 "pred_table.m"
        MR_Integer hlds__pred_table__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 1)));
#line 358 "pred_table.m"
        MR_Word hlds__pred_table__V_8_8;

#line 358 "pred_table.m"
        {
#line 358 "pred_table.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&hlds__pred_table__V_8_8, hlds__pred_table__V_4_4, hlds__pred_table__V_6_6);
        }
#line 2960 "hlds.pred_table.c"
        hlds__pred_table__succeeded = (hlds__pred_table__V_8_8 == (MR_Integer) 0);
#line 358 "pred_table.m"
        hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 358 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 358 "pred_table.m"
          *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_8_8;
#line 358 "pred_table.m"
        else
#line 358 "pred_table.m"
          {
#line 358 "pred_table.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(hlds__pred_table__HeadVar__1_1, hlds__pred_table__V_5_5, hlds__pred_table__V_7_7);
#line 358 "pred_table.m"
            return;
          }
#line 358 "pred_table.m"
      }
#line 358 "pred_table.m"
  }
#line 358 "pred_table.m"
}

#line 358 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_0_0(
#line 358 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 358 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 358 "pred_table.m"
{
#line 358 "pred_table.m"
  {
#line 358 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 358 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_7 = (MR_Integer) hlds__pred_table__HeadVar__1_1;
#line 358 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_8 = (MR_Integer) hlds__pred_table__HeadVar__2_2;

#line 358 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_7 == hlds__pred_table__CastY_8);
#line 358 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 358 "pred_table.m"
      hlds__pred_table__succeeded = MR_TRUE;
#line 358 "pred_table.m"
    else
#line 358 "pred_table.m"
      {
#line 358 "pred_table.m"
        MR_String hlds__pred_table__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 0)));
#line 358 "pred_table.m"
        MR_Integer hlds__pred_table__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 1)));
#line 358 "pred_table.m"
        MR_String hlds__pred_table__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 358 "pred_table.m"
        MR_Integer hlds__pred_table__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));

#line 3021 "hlds.pred_table.c"
        hlds__pred_table__succeeded = (strcmp(hlds__pred_table__V_3_3, hlds__pred_table__V_5_5) == 0);
#line 358 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 3025 "hlds.pred_table.c"
          hlds__pred_table__succeeded = (hlds__pred_table__V_4_4 == hlds__pred_table__V_6_6);
#line 358 "pred_table.m"
      }
#line 358 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 358 "pred_table.m"
  }
#line 358 "pred_table.m"
}

#line 345 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_accessibility_0_0(
#line 345 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 345 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 345 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 345 "pred_table.m"
{
#line 345 "pred_table.m"
  {
#line 345 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 345 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_9 = (MR_Integer) hlds__pred_table__HeadVar__2_2;
#line 345 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_10 = (MR_Integer) hlds__pred_table__HeadVar__3_3;

#line 345 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_9 == hlds__pred_table__CastY_10);
#line 345 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 3060 "hlds.pred_table.c"
      *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 0;
#line 345 "pred_table.m"
    else
#line 345 "pred_table.m"
      {
#line 345 "pred_table.m"
        MR_Word hlds__pred_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 345 "pred_table.m"
        MR_Word hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));
#line 345 "pred_table.m"
        MR_Word hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 0)));
#line 345 "pred_table.m"
        MR_Word hlds__pred_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 1)));
#line 345 "pred_table.m"
        MR_Word hlds__pred_table__V_8_8;
#line 345 "pred_table.m"
        MR_Integer hlds__pred_table__V_13_13 = (MR_Integer) hlds__pred_table__V_4_4;
#line 345 "pred_table.m"
        MR_Integer hlds__pred_table__V_14_14 = (MR_Integer) hlds__pred_table__V_6_6;

#line 345 "pred_table.m"
        {
#line 345 "pred_table.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__pred_table__V_8_8, hlds__pred_table__V_13_13, hlds__pred_table__V_14_14);
        }
#line 3086 "hlds.pred_table.c"
        hlds__pred_table__succeeded = (hlds__pred_table__V_8_8 == (MR_Integer) 0);
#line 345 "pred_table.m"
        hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 345 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 345 "pred_table.m"
          *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_8_8;
#line 345 "pred_table.m"
        else
#line 345 "pred_table.m"
          {
#line 345 "pred_table.m"
            MR_Integer hlds__pred_table__V_15_15 = (MR_Integer) hlds__pred_table__V_5_5;
#line 345 "pred_table.m"
            MR_Integer hlds__pred_table__V_16_16 = (MR_Integer) hlds__pred_table__V_7_7;

#line 345 "pred_table.m"
            {
#line 345 "pred_table.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(hlds__pred_table__HeadVar__1_1, hlds__pred_table__V_15_15, hlds__pred_table__V_16_16);
#line 345 "pred_table.m"
              return;
            }
#line 345 "pred_table.m"
          }
#line 345 "pred_table.m"
      }
#line 345 "pred_table.m"
  }
#line 345 "pred_table.m"
}

#line 345 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_accessibility_0_0(
#line 345 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 345 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 345 "pred_table.m"
{
#line 345 "pred_table.m"
  {
#line 345 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 345 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_7 = (MR_Integer) hlds__pred_table__HeadVar__1_1;
#line 345 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_8 = (MR_Integer) hlds__pred_table__HeadVar__2_2;

#line 345 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_7 == hlds__pred_table__CastY_8);
#line 345 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 345 "pred_table.m"
      hlds__pred_table__succeeded = MR_TRUE;
#line 345 "pred_table.m"
    else
#line 345 "pred_table.m"
      {
#line 345 "pred_table.m"
        MR_Word hlds__pred_table__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 0)));
#line 345 "pred_table.m"
        MR_Word hlds__pred_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 1)));
#line 345 "pred_table.m"
        MR_Word hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 345 "pred_table.m"
        MR_Word hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));

#line 3156 "hlds.pred_table.c"
        hlds__pred_table__succeeded = (hlds__pred_table__V_3_3 == hlds__pred_table__V_5_5);
#line 345 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 3160 "hlds.pred_table.c"
          hlds__pred_table__succeeded = (hlds__pred_table__V_4_4 == hlds__pred_table__V_6_6);
#line 345 "pred_table.m"
      }
#line 345 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 345 "pred_table.m"
  }
#line 345 "pred_table.m"
}

#line 364 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____module_name_arity_index_0_0(
#line 364 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 364 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 364 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 364 "pred_table.m"
{
#line 364 "pred_table.m"
  {
#line 364 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 364 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_4 = hlds__pred_table__HeadVar__2_2;
#line 364 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_5 = hlds__pred_table__HeadVar__3_3;

#line 364 "pred_table.m"
    {
#line 364 "pred_table.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[2], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__Cast_HeadVar1_4)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_5)));
#line 364 "pred_table.m"
      return;
    }
#line 364 "pred_table.m"
  }
#line 364 "pred_table.m"
}

#line 364 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____module_name_arity_index_0_0(
#line 364 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 364 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 364 "pred_table.m"
{
#line 364 "pred_table.m"
  {
#line 364 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 364 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_3 = hlds__pred_table__HeadVar__1_1;
#line 364 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_4 = hlds__pred_table__HeadVar__2_2;

#line 364 "pred_table.m"
    {
#line 364 "pred_table.m"
      return hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pred_table_scalar_common_2[2], ((MR_Box) (hlds__pred_table__Cast_HeadVar1_3)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_4)));
    }
#line 364 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 364 "pred_table.m"
  }
#line 364 "pred_table.m"
}

#line 300 "pred_table.m"
void MR_CALL 
hlds__pred_table____Compare____mode_no_0_0(
#line 300 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 300 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 300 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 300 "pred_table.m"
{
#line 300 "pred_table.m"
  {
#line 300 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 300 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_8 = (MR_Integer) hlds__pred_table__HeadVar__2_2;
#line 300 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_9 = (MR_Integer) hlds__pred_table__HeadVar__3_3;

#line 300 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_8 == hlds__pred_table__CastY_9);
#line 300 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 3257 "hlds.pred_table.c"
      *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 0;
#line 300 "pred_table.m"
    else
#line 300 "pred_table.m"
      if ((hlds__pred_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 300 "pred_table.m"
        if ((hlds__pred_table__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 300 "pred_table.m"
          *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 0;
#line 300 "pred_table.m"
        else
#line 3269 "hlds.pred_table.c"
          *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 1;
#line 300 "pred_table.m"
      else
#line 300 "pred_table.m"
        {
#line 300 "pred_table.m"
          MR_Integer hlds__pred_table__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));

#line 300 "pred_table.m"
          if ((hlds__pred_table__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3280 "hlds.pred_table.c"
            *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 2;
#line 300 "pred_table.m"
          else
#line 300 "pred_table.m"
            {
#line 300 "pred_table.m"
              MR_Integer hlds__pred_table__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__3_3, (MR_Integer) 0)));

#line 300 "pred_table.m"
              {
#line 300 "pred_table.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(hlds__pred_table__HeadVar__1_1, hlds__pred_table__V_11_11, hlds__pred_table__V_7_7);
#line 300 "pred_table.m"
                return;
              }
#line 300 "pred_table.m"
            }
#line 300 "pred_table.m"
        }
#line 300 "pred_table.m"
  }
#line 300 "pred_table.m"
}

#line 300 "pred_table.m"
MR_bool MR_CALL 
hlds__pred_table____Unify____mode_no_0_0(
#line 300 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 300 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 300 "pred_table.m"
{
#line 300 "pred_table.m"
  {
#line 300 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 300 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_7 = (MR_Integer) hlds__pred_table__HeadVar__1_1;
#line 300 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_8 = (MR_Integer) hlds__pred_table__HeadVar__2_2;

#line 300 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_7 == hlds__pred_table__CastY_8);
#line 300 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 300 "pred_table.m"
      hlds__pred_table__succeeded = MR_TRUE;
#line 300 "pred_table.m"
    else
#line 300 "pred_table.m"
      if ((hlds__pred_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 300 "pred_table.m"
        {
#line 300 "pred_table.m"
          MR_Integer hlds__pred_table__CastX_3 = (MR_Integer) hlds__pred_table__HeadVar__1_1;
#line 300 "pred_table.m"
          MR_Integer hlds__pred_table__CastY_4 = (MR_Integer) hlds__pred_table__HeadVar__2_2;

#line 300 "pred_table.m"
          hlds__pred_table__succeeded = (hlds__pred_table__CastY_4 == hlds__pred_table__CastX_3);
#line 300 "pred_table.m"
        }
#line 300 "pred_table.m"
      else
#line 300 "pred_table.m"
        {
#line 300 "pred_table.m"
          MR_Integer hlds__pred_table__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__1_1, (MR_Integer) 0)));
#line 300 "pred_table.m"
          MR_Integer hlds__pred_table__V_6_6;

#line 300 "pred_table.m"
          hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 300 "pred_table.m"
          if (hlds__pred_table__succeeded)
#line 300 "pred_table.m"
            {
#line 300 "pred_table.m"
              hlds__pred_table__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 3361 "hlds.pred_table.c"
              hlds__pred_table__succeeded = (hlds__pred_table__V_5_5 == hlds__pred_table__V_6_6);
#line 300 "pred_table.m"
            }
#line 300 "pred_table.m"
        }
#line 300 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 300 "pred_table.m"
  }
#line 300 "pred_table.m"
}

#line 165 "pred_table.m"
void MR_CALL 
hlds__pred_table____Compare____is_fully_qualified_0_0(
#line 165 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 165 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 165 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 165 "pred_table.m"
{
#line 165 "pred_table.m"
  {
#line 165 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 165 "pred_table.m"
    MR_Integer hlds__pred_table__Cast_HeadVar1_4 = (MR_Integer) hlds__pred_table__HeadVar__2_2;
#line 165 "pred_table.m"
    MR_Integer hlds__pred_table__Cast_HeadVar2_5 = (MR_Integer) hlds__pred_table__HeadVar__3_3;

#line 165 "pred_table.m"
    {
#line 165 "pred_table.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__pred_table__HeadVar__1_1, hlds__pred_table__Cast_HeadVar1_4, hlds__pred_table__Cast_HeadVar2_5);
#line 165 "pred_table.m"
      return;
    }
#line 165 "pred_table.m"
  }
#line 165 "pred_table.m"
}

#line 165 "pred_table.m"
MR_bool MR_CALL 
hlds__pred_table____Unify____is_fully_qualified_0_0(
#line 165 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_1,
#line 165 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 165 "pred_table.m"
{
#line 3415 "hlds.pred_table.c"
  {
#line 3417 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded = (hlds__pred_table__HeadVar__2_1 == hlds__pred_table__HeadVar__2_2);

#line 3420 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 3422 "hlds.pred_table.c"
  }
#line 165 "pred_table.m"
}

#line 276 "pred_table.m"
void MR_CALL 
hlds__pred_table____Compare____constraint_search_0_0(
#line 276 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 276 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 276 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 276 "pred_table.m"
{
#line 276 "pred_table.m"
  {
#line 276 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 276 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_4 = hlds__pred_table__HeadVar__2_2;
#line 276 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_5 = hlds__pred_table__HeadVar__3_3;

#line 276 "pred_table.m"
    {
#line 276 "pred_table.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_3[0], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__Cast_HeadVar1_4)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_5)));
#line 276 "pred_table.m"
      return;
    }
#line 276 "pred_table.m"
  }
#line 276 "pred_table.m"
}

#line 276 "pred_table.m"
MR_bool MR_CALL 
hlds__pred_table____Unify____constraint_search_0_0(
#line 276 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 276 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 276 "pred_table.m"
{
#line 276 "pred_table.m"
  {
#line 276 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 276 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_3 = hlds__pred_table__HeadVar__1_1;
#line 276 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_4 = hlds__pred_table__HeadVar__2_2;

#line 276 "pred_table.m"
    {
#line 276 "pred_table.m"
      return hlds__pred_table__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__pred_table__Cast_HeadVar1_3, (MR_Word) hlds__pred_table__Cast_HeadVar2_4);
    }
#line 276 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 276 "pred_table.m"
  }
#line 276 "pred_table.m"
}

#line 343 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____accessibility_table_0_0(
#line 343 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 343 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 343 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 343 "pred_table.m"
{
#line 343 "pred_table.m"
  {
#line 343 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 343 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_4 = hlds__pred_table__HeadVar__2_2;
#line 343 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_5 = hlds__pred_table__HeadVar__3_3;

#line 343 "pred_table.m"
    {
#line 343 "pred_table.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[3], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__Cast_HeadVar1_4)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_5)));
#line 343 "pred_table.m"
      return;
    }
#line 343 "pred_table.m"
  }
#line 343 "pred_table.m"
}

#line 343 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____accessibility_table_0_0(
#line 343 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 343 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 343 "pred_table.m"
{
#line 343 "pred_table.m"
  {
#line 343 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 343 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_3 = hlds__pred_table__HeadVar__1_1;
#line 343 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_4 = hlds__pred_table__HeadVar__2_2;

#line 343 "pred_table.m"
    {
#line 343 "pred_table.m"
      return hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pred_table_scalar_common_2[3], ((MR_Box) (hlds__pred_table__Cast_HeadVar1_3)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_4)));
    }
#line 343 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 343 "pred_table.m"
  }
#line 343 "pred_table.m"
}

#line 1083 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__univ_constraints_match_2_p_0(
#line 1083 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 1083 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 1083 "pred_table.m"
{
#line 1086 "pred_table.m"
  while (MR_TRUE)
#line 1086 "pred_table.m"
    {
#line 1086 "pred_table.m"
      /* tailcall optimized into a loop */
#line 1086 "pred_table.m"
      {
#line 1086 "pred_table.m"
        MR_bool hlds__pred_table__succeeded;

#line 1086 "pred_table.m"
        if ((hlds__pred_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1086 "pred_table.m"
          hlds__pred_table__succeeded = (hlds__pred_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1086 "pred_table.m"
        else
#line 1088 "pred_table.m"
          {
#line 1088 "pred_table.m"
            MR_Word hlds__pred_table__TypeCtorInfo_11_11;
#line 1088 "pred_table.m"
            MR_Word hlds__pred_table__ProvenConstraint_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__1_1, (MR_Integer) 0)));
#line 1088 "pred_table.m"
            MR_Word hlds__pred_table__ProvenConstraints_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__1_1, (MR_Integer) 1)));
#line 1088 "pred_table.m"
            MR_Word hlds__pred_table__CalleeConstraint_5;
#line 1088 "pred_table.m"
            MR_Word hlds__pred_table__CalleeConstraints_6;
#line 1088 "pred_table.m"
            MR_Word hlds__pred_table__ClassName_7;
#line 1088 "pred_table.m"
            MR_Word hlds__pred_table__ProvenArgTypes_8;
#line 1088 "pred_table.m"
            MR_Integer hlds__pred_table__Arity_9;
#line 1088 "pred_table.m"
            MR_Word hlds__pred_table__CalleeArgTypes_10;
#line 1088 "pred_table.m"
            MR_Word hlds__pred_table__V_12_12;
#line 1088 "pred_table.m"
            MR_Integer hlds__pred_table__V_13_13;

#line 1088 "pred_table.m"
            hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1088 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 1088 "pred_table.m"
              {
#line 1088 "pred_table.m"
                hlds__pred_table__CalleeConstraint_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 1088 "pred_table.m"
                hlds__pred_table__CalleeConstraints_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));
#line 1089 "pred_table.m"
                hlds__pred_table__ClassName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__ProvenConstraint_3, (MR_Integer) 0)));
#line 1089 "pred_table.m"
                hlds__pred_table__ProvenArgTypes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__ProvenConstraint_3, (MR_Integer) 1)));
#line 3616 "hlds.pred_table.c"
                hlds__pred_table__TypeCtorInfo_11_11 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1090 "pred_table.m"
                {
#line 1090 "pred_table.m"
                  mercury__list__length_2_p_0(hlds__pred_table__TypeCtorInfo_11_11, hlds__pred_table__ProvenArgTypes_8, &hlds__pred_table__Arity_9);
                }
#line 1091 "pred_table.m"
                hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__CalleeConstraint_5, (MR_Integer) 0)));
#line 1091 "pred_table.m"
                hlds__pred_table__CalleeArgTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__CalleeConstraint_5, (MR_Integer) 1)));
#line 1091 "pred_table.m"
                {
#line 1091 "pred_table.m"
                  hlds__pred_table__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__pred_table__ClassName_7, hlds__pred_table__V_12_12);
                }
#line 1088 "pred_table.m"
                if (hlds__pred_table__succeeded)
#line 1088 "pred_table.m"
                  {
#line 1092 "pred_table.m"
                    {
#line 1092 "pred_table.m"
                      mercury__list__length_2_p_0(hlds__pred_table__TypeCtorInfo_11_11, hlds__pred_table__CalleeArgTypes_10, &hlds__pred_table__V_13_13);
                    }
#line 1092 "pred_table.m"
                    hlds__pred_table__succeeded = (hlds__pred_table__Arity_9 == hlds__pred_table__V_13_13);
#line 1088 "pred_table.m"
                    if (hlds__pred_table__succeeded)
#line 1093 "pred_table.m"
                      {
#line 1093 "pred_table.m"
                        /* direct tailcall eliminated */
#line 1093 "pred_table.m"
                        {
#line 1093 "pred_table.m"
                          MR_Word hlds__pred_table__HeadVar__1__tmp_copy_1 = hlds__pred_table__ProvenConstraints_4;
#line 1093 "pred_table.m"
                          MR_Word hlds__pred_table__HeadVar__2__tmp_copy_2 = hlds__pred_table__CalleeConstraints_6;

#line 1093 "pred_table.m"
                          hlds__pred_table__HeadVar__2_2 = hlds__pred_table__HeadVar__2__tmp_copy_2;
#line 1093 "pred_table.m"
                          hlds__pred_table__HeadVar__1_1 = hlds__pred_table__HeadVar__1__tmp_copy_1;
#line 1093 "pred_table.m"
                        }
#line 1093 "pred_table.m"
                        continue;
#line 1093 "pred_table.m"
                      }
#line 1088 "pred_table.m"
                  }
#line 1088 "pred_table.m"
              }
#line 1088 "pred_table.m"
          }
#line 1086 "pred_table.m"
        return hlds__pred_table__succeeded;
#line 1086 "pred_table.m"
      }
#line 1086 "pred_table.m"
      break;
#line 1086 "pred_table.m"
    }
#line 1083 "pred_table.m"
}

#line 972 "pred_table.m"
static void MR_CALL 
hlds__pred_table__insert_into_mna_index_6_p_0(
#line 972 "pred_table.m"
  MR_String hlds__pred_table__Name_7,
#line 972 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_8,
#line 972 "pred_table.m"
  MR_Word hlds__pred_table__PredId_9,
#line 972 "pred_table.m"
  MR_Word hlds__pred_table__Module_10,
#line 972 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_MNA_Index_0_14,
#line 972 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_MNA_Index_15)
#line 972 "pred_table.m"
{
#line 980 "pred_table.m"
  {
#line 980 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 980 "pred_table.m"
    MR_Word hlds__pred_table__MN_Arities0_12;
#line 980 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16;
#line 977 "pred_table.m"
    MR_Box hlds__pred_table__conv0_MN_Arities0_12;

#line 977 "pred_table.m"
    {
#line 977 "pred_table.m"
      hlds__pred_table__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 977 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_16_16, 0) = ((MR_Box) (hlds__pred_table__Module_10));
#line 977 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_16_16, 1) = ((MR_Box) (hlds__pred_table__Name_7));
#line 977 "pred_table.m"
    }
#line 977 "pred_table.m"
    {
#line 977 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__STATE_VARIABLE_MNA_Index_0_14, ((MR_Box) (hlds__pred_table__V_16_16)), &hlds__pred_table__conv0_MN_Arities0_12);
    }
#line 977 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 977 "pred_table.m"
      {
#line 977 "pred_table.m"
        hlds__pred_table__MN_Arities0_12 = ((MR_Word) hlds__pred_table__conv0_MN_Arities0_12);
#line 977 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 977 "pred_table.m"
      }
#line 980 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 978 "pred_table.m"
      {
#line 978 "pred_table.m"
        MR_Word hlds__pred_table__MN_Arities_13;

#line 978 "pred_table.m"
        {
#line 978 "pred_table.m"
          mercury__multi_map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (hlds__pred_table__Arity_8)), ((MR_Box) (hlds__pred_table__PredId_9)), hlds__pred_table__MN_Arities0_12, &hlds__pred_table__MN_Arities_13);
        }
#line 979 "pred_table.m"
        {
#line 979 "pred_table.m"
          mercury__map__det_update_4_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], ((MR_Box) (hlds__pred_table__V_16_16)), ((MR_Box) (hlds__pred_table__MN_Arities_13)), hlds__pred_table__STATE_VARIABLE_MNA_Index_0_14, hlds__pred_table__STATE_VARIABLE_MNA_Index_15);
#line 979 "pred_table.m"
          return;
        }
#line 978 "pred_table.m"
      }
#line 980 "pred_table.m"
    else
#line 981 "pred_table.m"
      {
#line 981 "pred_table.m"
        MR_Word hlds__pred_table__V_19_19;
#line 981 "pred_table.m"
        MR_Word hlds__pred_table__V_21_21;
#line 981 "pred_table.m"
        MR_Word hlds__pred_table__MN_Arities_23;

#line 981 "pred_table.m"
        {
#line 981 "pred_table.m"
          hlds__pred_table__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 981 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_19_19, 0) = ((MR_Box) (hlds__pred_table__PredId_9));
#line 981 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 981 "pred_table.m"
        }
#line 981 "pred_table.m"
        {
#line 981 "pred_table.m"
          hlds__pred_table__MN_Arities_23 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], ((MR_Box) (hlds__pred_table__Arity_8)), ((MR_Box) (hlds__pred_table__V_19_19)));
        }
#line 982 "pred_table.m"
        {
#line 982 "pred_table.m"
          hlds__pred_table__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 982 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_21_21, 0) = ((MR_Box) (hlds__pred_table__Module_10));
#line 982 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_21_21, 1) = ((MR_Box) (hlds__pred_table__Name_7));
#line 982 "pred_table.m"
        }
#line 982 "pred_table.m"
        {
#line 982 "pred_table.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], ((MR_Box) (hlds__pred_table__V_21_21)), ((MR_Box) (hlds__pred_table__MN_Arities_23)), hlds__pred_table__STATE_VARIABLE_MNA_Index_0_14, hlds__pred_table__STATE_VARIABLE_MNA_Index_15);
#line 982 "pred_table.m"
          return;
        }
#line 981 "pred_table.m"
      }
#line 980 "pred_table.m"
  }
#line 972 "pred_table.m"
}

#line 958 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_do_insert_14_p_0_1(
#line 958 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 958 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 958 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 958 "pred_table.m"
  MR_Box * hlds__pred_table__wrapper_arg_3)
#line 958 "pred_table.m"
{
#line 958 "pred_table.m"
  {
#line 958 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;
#line 958 "pred_table.m"
    MR_Word hlds__pred_table__conv0_STATE_VARIABLE_MNA_Index_15;

#line 958 "pred_table.m"
    {
#line 958 "pred_table.m"
      hlds__pred_table__insert_into_mna_index_6_p_0(((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 5))), ((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2), &hlds__pred_table__conv0_STATE_VARIABLE_MNA_Index_15);
    }
#line 958 "pred_table.m"
    *hlds__pred_table__wrapper_arg_3 = ((MR_Box) (hlds__pred_table__conv0_STATE_VARIABLE_MNA_Index_15));
#line 958 "pred_table.m"
  }
#line 958 "pred_table.m"
}

#line 929 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_do_insert_14_p_0(
#line 929 "pred_table.m"
  MR_Word hlds__pred_table__Module_15,
#line 929 "pred_table.m"
  MR_String hlds__pred_table__Name_16,
#line 929 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_17,
#line 929 "pred_table.m"
  MR_Word hlds__pred_table__NeedQual_18,
#line 929 "pred_table.m"
  MR_Word hlds__pred_table__MaybeQualInfo_19,
#line 929 "pred_table.m"
  MR_Word hlds__pred_table__PredId_20,
#line 929 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_AccessibilityTable_0_31,
#line 929 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_AccessibilityTable_32,
#line 929 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_N_Index_0_33,
#line 929 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_N_Index_34,
#line 929 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_NA_Index_0_35,
#line 929 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_NA_Index_36,
#line 929 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_MNA_Index_0_37,
#line 929 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_MNA_Index_38)
#line 929 "pred_table.m"
{
#line 937 "pred_table.m"
  {
#line 937 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 937 "pred_table.m"
    MR_Word hlds__pred_table__AccessibleByUnqualifiedName_26;
#line 937 "pred_table.m"
    MR_Word hlds__pred_table__AccessibleByPartiallyQualifiedNames_29;
#line 937 "pred_table.m"
    MR_Word hlds__pred_table__Access_30;
#line 937 "pred_table.m"
    MR_Word hlds__pred_table__STATE_VARIABLE_MNA_Index_42_42;

#line 948 "pred_table.m"
    if ((hlds__pred_table__NeedQual_18 == (MR_Integer) 1))
#line 939 "pred_table.m"
      {
#line 939 "pred_table.m"
        MR_Word hlds__pred_table__TypeCtorInfo_46_46 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 939 "pred_table.m"
        MR_Word hlds__pred_table__NA_25;

#line 941 "pred_table.m"
        {
#line 941 "pred_table.m"
          mercury__multi_map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__pred_table__TypeCtorInfo_46_46, ((MR_Box) (hlds__pred_table__Name_16)), ((MR_Box) (hlds__pred_table__PredId_20)), hlds__pred_table__STATE_VARIABLE_N_Index_0_33, hlds__pred_table__STATE_VARIABLE_N_Index_34);
        }
#line 944 "pred_table.m"
        {
#line 944 "pred_table.m"
          hlds__pred_table__NA_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 944 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__NA_25, 0) = ((MR_Box) (hlds__pred_table__Name_16));
#line 944 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__NA_25, 1) = ((MR_Box) (hlds__pred_table__Arity_17));
#line 944 "pred_table.m"
        }
#line 945 "pred_table.m"
        {
#line 945 "pred_table.m"
          mercury__multi_map__set_4_p_0((MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0, hlds__pred_table__TypeCtorInfo_46_46, ((MR_Box) (hlds__pred_table__NA_25)), ((MR_Box) (hlds__pred_table__PredId_20)), hlds__pred_table__STATE_VARIABLE_NA_Index_0_35, hlds__pred_table__STATE_VARIABLE_NA_Index_36);
        }
#line 947 "pred_table.m"
        hlds__pred_table__AccessibleByUnqualifiedName_26 = (MR_Integer) 1;
#line 939 "pred_table.m"
      }
#line 948 "pred_table.m"
    else
#line 949 "pred_table.m"
      {
#line 950 "pred_table.m"
        hlds__pred_table__AccessibleByUnqualifiedName_26 = (MR_Integer) 0;
#line 949 "pred_table.m"
        *hlds__pred_table__STATE_VARIABLE_N_Index_34 = hlds__pred_table__STATE_VARIABLE_N_Index_0_33;
#line 949 "pred_table.m"
        *hlds__pred_table__STATE_VARIABLE_NA_Index_36 = hlds__pred_table__STATE_VARIABLE_NA_Index_0_35;
#line 949 "pred_table.m"
      }
#line 962 "pred_table.m"
    if ((hlds__pred_table__MaybeQualInfo_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 963 "pred_table.m"
      {
#line 964 "pred_table.m"
        hlds__pred_table__AccessibleByPartiallyQualifiedNames_29 = (MR_Integer) 0;
#line 963 "pred_table.m"
        hlds__pred_table__STATE_VARIABLE_MNA_Index_42_42 = hlds__pred_table__STATE_VARIABLE_MNA_Index_0_37;
#line 963 "pred_table.m"
      }
#line 962 "pred_table.m"
    else
#line 953 "pred_table.m"
      {
#line 953 "pred_table.m"
        MR_Word hlds__pred_table__QualInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__MaybeQualInfo_19, (MR_Integer) 0)));
#line 953 "pred_table.m"
        MR_Word hlds__pred_table__PartialQuals_28;
#line 953 "pred_table.m"
        MR_Word hlds__pred_table__V_41_41;
#line 958 "pred_table.m"
        MR_Box hlds__pred_table__conv1_STATE_VARIABLE_MNA_Index_42_42;

#line 957 "pred_table.m"
        {
#line 957 "pred_table.m"
          parse_tree__module_qual__get_partial_qualifiers_3_p_0(hlds__pred_table__Module_15, hlds__pred_table__QualInfo_27, &hlds__pred_table__PartialQuals_28);
        }
#line 958 "pred_table.m"
        {
#line 958 "pred_table.m"
          hlds__pred_table__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 958 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_4[1]));
#line 958 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 1) = ((MR_Box) (hlds__pred_table__predicate_table_do_insert_14_p_0_1));
#line 958 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 958 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 3) = ((MR_Box) (hlds__pred_table__Name_16));
#line 958 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 4) = ((MR_Box) (hlds__pred_table__Arity_17));
#line 958 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 5) = ((MR_Box) (hlds__pred_table__PredId_20));
#line 958 "pred_table.m"
        }
#line 958 "pred_table.m"
        {
#line 958 "pred_table.m"
          mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__pred_table_scalar_common_2[2], hlds__pred_table__V_41_41, hlds__pred_table__PartialQuals_28, ((MR_Box) (hlds__pred_table__STATE_VARIABLE_MNA_Index_0_37)), &hlds__pred_table__conv1_STATE_VARIABLE_MNA_Index_42_42);
        }
#line 958 "pred_table.m"
        hlds__pred_table__STATE_VARIABLE_MNA_Index_42_42 = ((MR_Word) hlds__pred_table__conv1_STATE_VARIABLE_MNA_Index_42_42);
#line 961 "pred_table.m"
        hlds__pred_table__AccessibleByPartiallyQualifiedNames_29 = (MR_Integer) 1;
#line 953 "pred_table.m"
      }
#line 967 "pred_table.m"
    {
#line 967 "pred_table.m"
      hlds__pred_table__insert_into_mna_index_6_p_0(hlds__pred_table__Name_16, hlds__pred_table__Arity_17, hlds__pred_table__PredId_20, hlds__pred_table__Module_15, hlds__pred_table__STATE_VARIABLE_MNA_Index_42_42, hlds__pred_table__STATE_VARIABLE_MNA_Index_38);
    }
#line 968 "pred_table.m"
    {
#line 968 "pred_table.m"
      hlds__pred_table__Access_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 968 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__Access_30, 0) = ((MR_Box) (hlds__pred_table__AccessibleByUnqualifiedName_26));
#line 968 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__Access_30, 1) = ((MR_Box) (hlds__pred_table__AccessibleByPartiallyQualifiedNames_29));
#line 968 "pred_table.m"
    }
#line 970 "pred_table.m"
    {
#line 970 "pred_table.m"
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0, ((MR_Box) (hlds__pred_table__PredId_20)), ((MR_Box) (hlds__pred_table__Access_30)), hlds__pred_table__STATE_VARIABLE_AccessibilityTable_0_31, hlds__pred_table__STATE_VARIABLE_AccessibilityTable_32);
#line 970 "pred_table.m"
      return;
    }
#line 937 "pred_table.m"
  }
#line 929 "pred_table.m"
}

#line 958 "pred_table.m"
static void MR_CALL 
hlds__pred_table__do_predicate_table_insert_7_p_0_1(
#line 958 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 958 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 958 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 958 "pred_table.m"
  MR_Box * hlds__pred_table__wrapper_arg_3)
#line 958 "pred_table.m"
{
#line 958 "pred_table.m"
  {
#line 958 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;
#line 958 "pred_table.m"
    MR_Word hlds__pred_table__conv0_STATE_VARIABLE_MNA_Index_15;

#line 958 "pred_table.m"
    {
#line 958 "pred_table.m"
      hlds__pred_table__insert_into_mna_index_6_p_0(((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 5))), ((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2), &hlds__pred_table__conv0_STATE_VARIABLE_MNA_Index_15);
    }
#line 958 "pred_table.m"
    *hlds__pred_table__wrapper_arg_3 = ((MR_Box) (hlds__pred_table__conv0_STATE_VARIABLE_MNA_Index_15));
#line 958 "pred_table.m"
  }
#line 958 "pred_table.m"
}

#line 868 "pred_table.m"
static void MR_CALL 
hlds__pred_table__do_predicate_table_insert_7_p_0(
#line 868 "pred_table.m"
  MR_Word hlds__pred_table__MaybePredId_8,
#line 868 "pred_table.m"
  MR_Word hlds__pred_table__PredInfo_9,
#line 868 "pred_table.m"
  MR_Word hlds__pred_table__NeedQual_10,
#line 868 "pred_table.m"
  MR_Word hlds__pred_table__MaybeQualInfo_11,
#line 868 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_12,
#line 868 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39,
#line 868 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_40)
#line 868 "pred_table.m"
{
#line 873 "pred_table.m"
  {
#line 873 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 873 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_43_43;
#line 873 "pred_table.m"
    MR_Word hlds__pred_table__Preds0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 0)));
#line 873 "pred_table.m"
    MR_Word hlds__pred_table__NextPredId0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 1)));
#line 873 "pred_table.m"
    MR_Word hlds__pred_table__ValidPredIds0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 2)));
#line 873 "pred_table.m"
    MR_Word hlds__pred_table__AccessibilityTable0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 3)));
#line 873 "pred_table.m"
    MR_Word hlds__pred_table__Pred_N_Index0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 4)));
#line 873 "pred_table.m"
    MR_Word hlds__pred_table__Pred_NA_Index0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 5)));
#line 873 "pred_table.m"
    MR_Word hlds__pred_table__Pred_MNA_Index0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 6)));
#line 873 "pred_table.m"
    MR_Word hlds__pred_table__Func_N_Index0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 7)));
#line 873 "pred_table.m"
    MR_Word hlds__pred_table__Func_NA_Index0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 8)));
#line 873 "pred_table.m"
    MR_Word hlds__pred_table__Func_MNA_Index0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 9)));
#line 873 "pred_table.m"
    MR_Word hlds__pred_table__Module_24;
#line 873 "pred_table.m"
    MR_String hlds__pred_table__Name_25;
#line 873 "pred_table.m"
    MR_Integer hlds__pred_table__Arity_26;
#line 873 "pred_table.m"
    MR_Word hlds__pred_table__NextPredId_27;
#line 873 "pred_table.m"
    MR_Word hlds__pred_table__PredOrFunc_28;
#line 873 "pred_table.m"
    MR_Word hlds__pred_table__AccessibilityTable_29;
#line 873 "pred_table.m"
    MR_Word hlds__pred_table__Pred_N_Index_30;
#line 873 "pred_table.m"
    MR_Word hlds__pred_table__Pred_NA_Index_31;
#line 873 "pred_table.m"
    MR_Word hlds__pred_table__Pred_MNA_Index_32;
#line 873 "pred_table.m"
    MR_Word hlds__pred_table__Func_N_Index_33;
#line 873 "pred_table.m"
    MR_Word hlds__pred_table__Func_NA_Index_34;
#line 873 "pred_table.m"
    MR_Word hlds__pred_table__Func_MNA_Index_35;
#line 873 "pred_table.m"
    MR_Word hlds__pred_table__Preds_37;
#line 873 "pred_table.m"
    MR_Word hlds__pred_table__ValidPredIds_38;

#line 878 "pred_table.m"
    {
#line 878 "pred_table.m"
      hlds__pred_table__Module_24 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__pred_table__PredInfo_9);
    }
#line 879 "pred_table.m"
    {
#line 879 "pred_table.m"
      hlds__pred_table__Name_25 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__pred_table__PredInfo_9);
    }
#line 880 "pred_table.m"
    {
#line 880 "pred_table.m"
      hlds__pred_table__Arity_26 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__pred_table__PredInfo_9);
    }
#line 884 "pred_table.m"
    if ((hlds__pred_table__MaybePredId_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 886 "pred_table.m"
      {
#line 887 "pred_table.m"
        *hlds__pred_table__PredId_12 = hlds__pred_table__NextPredId0_15;
#line 888 "pred_table.m"
        {
#line 888 "pred_table.m"
          hlds__hlds_pred__next_pred_id_2_p_0(*hlds__pred_table__PredId_12, &hlds__pred_table__NextPredId_27);
        }
#line 886 "pred_table.m"
      }
#line 884 "pred_table.m"
    else
#line 882 "pred_table.m"
      {
#line 882 "pred_table.m"
        *hlds__pred_table__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__MaybePredId_8, (MR_Integer) 0)));
#line 883 "pred_table.m"
        hlds__pred_table__NextPredId_27 = hlds__pred_table__NextPredId0_15;
#line 882 "pred_table.m"
      }
#line 892 "pred_table.m"
    {
#line 892 "pred_table.m"
      hlds__pred_table__PredOrFunc_28 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__pred_table__PredInfo_9);
    }
#line 905 "pred_table.m"
    if ((hlds__pred_table__PredOrFunc_28 == (MR_Integer) 1))
#line 906 "pred_table.m"
      {
#line 906 "pred_table.m"
        MR_Integer hlds__pred_table__FuncArity_36 = (hlds__pred_table__Arity_26 - (MR_Integer) 1);
#line 906 "pred_table.m"
        MR_Word hlds__pred_table__AccessibleByUnqualifiedName_64;
#line 906 "pred_table.m"
        MR_Word hlds__pred_table__AccessibleByPartiallyQualifiedNames_67;
#line 906 "pred_table.m"
        MR_Word hlds__pred_table__Access_68;
#line 906 "pred_table.m"
        MR_Word hlds__pred_table__STATE_VARIABLE_MNA_Index_42_72;

#line 948 "pred_table.m"
        if ((hlds__pred_table__NeedQual_10 == (MR_Integer) 1))
#line 939 "pred_table.m"
          {
#line 939 "pred_table.m"
            MR_Word hlds__pred_table__TypeCtorInfo_46_76 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 939 "pred_table.m"
            MR_Word hlds__pred_table__NA_63;

#line 941 "pred_table.m"
            {
#line 941 "pred_table.m"
              mercury__multi_map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__pred_table__TypeCtorInfo_46_76, ((MR_Box) (hlds__pred_table__Name_25)), ((MR_Box) (*hlds__pred_table__PredId_12)), hlds__pred_table__Func_N_Index0_21, &hlds__pred_table__Func_N_Index_33);
            }
#line 944 "pred_table.m"
            {
#line 944 "pred_table.m"
              hlds__pred_table__NA_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 944 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__NA_63, 0) = ((MR_Box) (hlds__pred_table__Name_25));
#line 944 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__NA_63, 1) = ((MR_Box) (hlds__pred_table__FuncArity_36));
#line 944 "pred_table.m"
            }
#line 945 "pred_table.m"
            {
#line 945 "pred_table.m"
              mercury__multi_map__set_4_p_0((MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0, hlds__pred_table__TypeCtorInfo_46_76, ((MR_Box) (hlds__pred_table__NA_63)), ((MR_Box) (*hlds__pred_table__PredId_12)), hlds__pred_table__Func_NA_Index0_22, &hlds__pred_table__Func_NA_Index_34);
            }
#line 947 "pred_table.m"
            hlds__pred_table__AccessibleByUnqualifiedName_64 = (MR_Integer) 1;
#line 939 "pred_table.m"
          }
#line 948 "pred_table.m"
        else
#line 949 "pred_table.m"
          {
#line 950 "pred_table.m"
            hlds__pred_table__AccessibleByUnqualifiedName_64 = (MR_Integer) 0;
#line 949 "pred_table.m"
            hlds__pred_table__Func_N_Index_33 = hlds__pred_table__Func_N_Index0_21;
#line 949 "pred_table.m"
            hlds__pred_table__Func_NA_Index_34 = hlds__pred_table__Func_NA_Index0_22;
#line 949 "pred_table.m"
          }
#line 962 "pred_table.m"
        if ((hlds__pred_table__MaybeQualInfo_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 963 "pred_table.m"
          {
#line 964 "pred_table.m"
            hlds__pred_table__AccessibleByPartiallyQualifiedNames_67 = (MR_Integer) 0;
#line 963 "pred_table.m"
            hlds__pred_table__STATE_VARIABLE_MNA_Index_42_72 = hlds__pred_table__Func_MNA_Index0_23;
#line 963 "pred_table.m"
          }
#line 962 "pred_table.m"
        else
#line 953 "pred_table.m"
          {
#line 953 "pred_table.m"
            MR_Word hlds__pred_table__QualInfo_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__MaybeQualInfo_11, (MR_Integer) 0)));
#line 953 "pred_table.m"
            MR_Word hlds__pred_table__PartialQuals_66;
#line 953 "pred_table.m"
            MR_Word hlds__pred_table__V_71_71;
#line 958 "pred_table.m"
            MR_Box hlds__pred_table__conv1_STATE_VARIABLE_MNA_Index_42_72;

#line 957 "pred_table.m"
            {
#line 957 "pred_table.m"
              parse_tree__module_qual__get_partial_qualifiers_3_p_0(hlds__pred_table__Module_24, hlds__pred_table__QualInfo_65, &hlds__pred_table__PartialQuals_66);
            }
#line 958 "pred_table.m"
            {
#line 958 "pred_table.m"
              hlds__pred_table__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 958 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_71_71, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_4[1]));
#line 958 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_71_71, 1) = ((MR_Box) (hlds__pred_table__do_predicate_table_insert_7_p_0_1));
#line 958 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 958 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_71_71, 3) = ((MR_Box) (hlds__pred_table__Name_25));
#line 958 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_71_71, 4) = ((MR_Box) (hlds__pred_table__FuncArity_36));
#line 958 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_71_71, 5) = ((MR_Box) (*hlds__pred_table__PredId_12));
#line 958 "pred_table.m"
            }
#line 958 "pred_table.m"
            {
#line 958 "pred_table.m"
              mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__pred_table_scalar_common_2[2], hlds__pred_table__V_71_71, hlds__pred_table__PartialQuals_66, ((MR_Box) (hlds__pred_table__Func_MNA_Index0_23)), &hlds__pred_table__conv1_STATE_VARIABLE_MNA_Index_42_72);
            }
#line 958 "pred_table.m"
            hlds__pred_table__STATE_VARIABLE_MNA_Index_42_72 = ((MR_Word) hlds__pred_table__conv1_STATE_VARIABLE_MNA_Index_42_72);
#line 961 "pred_table.m"
            hlds__pred_table__AccessibleByPartiallyQualifiedNames_67 = (MR_Integer) 1;
#line 953 "pred_table.m"
          }
#line 967 "pred_table.m"
        {
#line 967 "pred_table.m"
          hlds__pred_table__insert_into_mna_index_6_p_0(hlds__pred_table__Name_25, hlds__pred_table__FuncArity_36, *hlds__pred_table__PredId_12, hlds__pred_table__Module_24, hlds__pred_table__STATE_VARIABLE_MNA_Index_42_72, &hlds__pred_table__Func_MNA_Index_35);
        }
#line 968 "pred_table.m"
        {
#line 968 "pred_table.m"
          hlds__pred_table__Access_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 968 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__Access_68, 0) = ((MR_Box) (hlds__pred_table__AccessibleByUnqualifiedName_64));
#line 968 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__Access_68, 1) = ((MR_Box) (hlds__pred_table__AccessibleByPartiallyQualifiedNames_67));
#line 968 "pred_table.m"
        }
#line 970 "pred_table.m"
        {
#line 970 "pred_table.m"
          mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0, ((MR_Box) (*hlds__pred_table__PredId_12)), ((MR_Box) (hlds__pred_table__Access_68)), hlds__pred_table__AccessibilityTable0_17, &hlds__pred_table__AccessibilityTable_29);
        }
#line 915 "pred_table.m"
        hlds__pred_table__Pred_N_Index_30 = hlds__pred_table__Pred_N_Index0_18;
#line 916 "pred_table.m"
        hlds__pred_table__Pred_NA_Index_31 = hlds__pred_table__Pred_NA_Index0_19;
#line 917 "pred_table.m"
        hlds__pred_table__Pred_MNA_Index_32 = hlds__pred_table__Pred_MNA_Index0_20;
#line 906 "pred_table.m"
      }
#line 905 "pred_table.m"
    else
#line 894 "pred_table.m"
      {
#line 895 "pred_table.m"
        {
#line 895 "pred_table.m"
          hlds__pred_table__predicate_table_do_insert_14_p_0(hlds__pred_table__Module_24, hlds__pred_table__Name_25, hlds__pred_table__Arity_26, hlds__pred_table__NeedQual_10, hlds__pred_table__MaybeQualInfo_11, *hlds__pred_table__PredId_12, hlds__pred_table__AccessibilityTable0_17, &hlds__pred_table__AccessibilityTable_29, hlds__pred_table__Pred_N_Index0_18, &hlds__pred_table__Pred_N_Index_30, hlds__pred_table__Pred_NA_Index0_19, &hlds__pred_table__Pred_NA_Index_31, hlds__pred_table__Pred_MNA_Index0_20, &hlds__pred_table__Pred_MNA_Index_32);
        }
#line 902 "pred_table.m"
        hlds__pred_table__Func_N_Index_33 = hlds__pred_table__Func_N_Index0_21;
#line 903 "pred_table.m"
        hlds__pred_table__Func_NA_Index_34 = hlds__pred_table__Func_NA_Index0_22;
#line 904 "pred_table.m"
        hlds__pred_table__Func_MNA_Index_35 = hlds__pred_table__Func_MNA_Index0_23;
#line 894 "pred_table.m"
      }
#line 4325 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_43_43 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 921 "pred_table.m"
    {
#line 921 "pred_table.m"
      mercury__map__det_insert_4_p_0(hlds__pred_table__TypeCtorInfo_43_43, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ((MR_Box) (*hlds__pred_table__PredId_12)), ((MR_Box) (hlds__pred_table__PredInfo_9)), hlds__pred_table__Preds0_14, &hlds__pred_table__Preds_37);
    }
#line 922 "pred_table.m"
    {
#line 922 "pred_table.m"
      mercury__set_tree234__insert_3_p_0(hlds__pred_table__TypeCtorInfo_43_43, ((MR_Box) (*hlds__pred_table__PredId_12)), hlds__pred_table__ValidPredIds0_16, &hlds__pred_table__ValidPredIds_38);
    }
#line 924 "pred_table.m"
    {
#line 924 "pred_table.m"
      MR_Word base;
#line 924 "pred_table.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 924 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_PredicateTable_40 = base;
#line 924 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__Preds_37));
#line 924 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__NextPredId_27));
#line 924 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__ValidPredIds_38));
#line 924 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__AccessibilityTable_29));
#line 924 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__Pred_N_Index_30));
#line 924 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__Pred_NA_Index_31));
#line 924 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__Pred_MNA_Index_32));
#line 924 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__Func_N_Index_33));
#line 924 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__Func_NA_Index_34));
#line 924 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__Func_MNA_Index_35));
#line 924 "pred_table.m"
    }
#line 873 "pred_table.m"
  }
#line 868 "pred_table.m"
}

#line 822 "pred_table.m"
static void MR_CALL 
hlds__pred_table__reinsert_for_restrict_6_p_0(
#line 822 "pred_table.m"
  MR_Word hlds__pred_table__PartialQualInfo_7,
#line 822 "pred_table.m"
  MR_Word hlds__pred_table__Preds_8,
#line 822 "pred_table.m"
  MR_Word hlds__pred_table__AccessibilityTable_9,
#line 822 "pred_table.m"
  MR_Word hlds__pred_table__PredId_10,
#line 822 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_19,
#line 822 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_20)
#line 822 "pred_table.m"
{
#line 827 "pred_table.m"
  {
#line 827 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 827 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 827 "pred_table.m"
    MR_Word hlds__pred_table__PredInfo_12;
#line 827 "pred_table.m"
    MR_Word hlds__pred_table__Access_13;
#line 827 "pred_table.m"
    MR_Word hlds__pred_table__Unqualified_14;
#line 827 "pred_table.m"
    MR_Word hlds__pred_table__PartiallyQualified_15;
#line 827 "pred_table.m"
    MR_Word hlds__pred_table__NeedQual_16;
#line 827 "pred_table.m"
    MR_Word hlds__pred_table__MaybeQualInfo_17;
#line 827 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21;
#line 828 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredInfo_12;
#line 829 "pred_table.m"
    MR_Box hlds__pred_table__conv1_Access_13;
#line 845 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18;

#line 828 "pred_table.m"
    {
#line 828 "pred_table.m"
      hlds__pred_table__conv0_PredInfo_12 = mercury__map__lookup_2_f_0(hlds__pred_table__TypeCtorInfo_23_23, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__pred_table__Preds_8, ((MR_Box) (hlds__pred_table__PredId_10)));
    }
#line 828 "pred_table.m"
    hlds__pred_table__PredInfo_12 = ((MR_Word) hlds__pred_table__conv0_PredInfo_12);
#line 829 "pred_table.m"
    {
#line 829 "pred_table.m"
      hlds__pred_table__conv1_Access_13 = mercury__map__lookup_2_f_0(hlds__pred_table__TypeCtorInfo_23_23, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0, hlds__pred_table__AccessibilityTable_9, ((MR_Box) (hlds__pred_table__PredId_10)));
    }
#line 829 "pred_table.m"
    hlds__pred_table__Access_13 = ((MR_Word) hlds__pred_table__conv1_Access_13);
#line 830 "pred_table.m"
    hlds__pred_table__Unqualified_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__Access_13, (MR_Integer) 0)));
#line 830 "pred_table.m"
    hlds__pred_table__PartiallyQualified_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__Access_13, (MR_Integer) 1)));
#line 834 "pred_table.m"
    if ((hlds__pred_table__Unqualified_14 == (MR_Integer) 0))
#line 836 "pred_table.m"
      hlds__pred_table__NeedQual_16 = (MR_Integer) 0;
#line 834 "pred_table.m"
    else
#line 833 "pred_table.m"
      hlds__pred_table__NeedQual_16 = (MR_Integer) 1;
#line 841 "pred_table.m"
    if ((hlds__pred_table__PartiallyQualified_15 == (MR_Integer) 0))
#line 843 "pred_table.m"
      hlds__pred_table__MaybeQualInfo_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 841 "pred_table.m"
    else
#line 840 "pred_table.m"
      {
#line 840 "pred_table.m"
        hlds__pred_table__MaybeQualInfo_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 840 "pred_table.m"
        MR_hl_field(MR_mktag(1), hlds__pred_table__MaybeQualInfo_17, 0) = ((MR_Box) (hlds__pred_table__PartialQualInfo_7));
#line 840 "pred_table.m"
      }
#line 845 "pred_table.m"
    {
#line 845 "pred_table.m"
      hlds__pred_table__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 845 "pred_table.m"
      MR_hl_field(MR_mktag(1), hlds__pred_table__V_21_21, 0) = ((MR_Box) (hlds__pred_table__PredId_10));
#line 845 "pred_table.m"
    }
#line 845 "pred_table.m"
    {
#line 845 "pred_table.m"
      hlds__pred_table__do_predicate_table_insert_7_p_0(hlds__pred_table__V_21_21, hlds__pred_table__PredInfo_12, hlds__pred_table__NeedQual_16, hlds__pred_table__MaybeQualInfo_17, &hlds__pred_table__V_18_18, hlds__pred_table__STATE_VARIABLE_PredicateTable_0_19, hlds__pred_table__STATE_VARIABLE_PredicateTable_20);
    }
#line 827 "pred_table.m"
  }
#line 822 "pred_table.m"
}

#line 746 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__pred_id_matches_module_3_p_0(
#line 746 "pred_table.m"
  MR_Word hlds__pred_table__Preds_4,
#line 746 "pred_table.m"
  MR_Word hlds__pred_table__ModuleName_5,
#line 746 "pred_table.m"
  MR_Word hlds__pred_table__PredId_6)
#line 746 "pred_table.m"
{
#line 749 "pred_table.m"
  {
#line 749 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 749 "pred_table.m"
    MR_Word hlds__pred_table__PredInfo_7;
#line 749 "pred_table.m"
    MR_Word hlds__pred_table__V_10_10;
#line 750 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredInfo_7;

#line 750 "pred_table.m"
    {
#line 750 "pred_table.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__pred_table__Preds_4, ((MR_Box) (hlds__pred_table__PredId_6)), &hlds__pred_table__conv0_PredInfo_7);
    }
#line 750 "pred_table.m"
    hlds__pred_table__PredInfo_7 = ((MR_Word) hlds__pred_table__conv0_PredInfo_7);
#line 751 "pred_table.m"
    {
#line 751 "pred_table.m"
      hlds__pred_table__V_10_10 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__pred_table__PredInfo_7);
    }
#line 751 "pred_table.m"
    {
#line 751 "pred_table.m"
      return hlds__pred_table__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__pred_table__ModuleName_5, hlds__pred_table__V_10_10);
    }
#line 749 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 749 "pred_table.m"
  }
#line 746 "pred_table.m"
}

#line 744 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0_1(
#line 744 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 744 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1)
#line 744 "pred_table.m"
{
#line 744 "pred_table.m"
  {
#line 744 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 744 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;

#line 744 "pred_table.m"
    {
#line 744 "pred_table.m"
      return hlds__pred_table__succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) hlds__pred_table__wrapper_arg_1));
    }
#line 744 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 744 "pred_table.m"
  }
#line 744 "pred_table.m"
}

#line 656 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0(
#line 656 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_6,
#line 656 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_7,
#line 656 "pred_table.m"
  MR_Word hlds__pred_table__Module_8,
#line 656 "pred_table.m"
  MR_String hlds__pred_table__FuncName_9,
#line 656 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_10)
#line 656 "pred_table.m"
{
#line 661 "pred_table.m"
  {
#line 661 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 661 "pred_table.m"
    MR_Word hlds__pred_table__Func_MNA_Index_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 9)));
#line 662 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 0)));
#line 662 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 1)));
#line 662 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 2)));
#line 662 "pred_table.m"
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 3)));
#line 662 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 4)));
#line 662 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 5)));
#line 662 "pred_table.m"
    MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 6)));
#line 662 "pred_table.m"
    MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 7)));
#line 662 "pred_table.m"
    MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 8)));
#line 668 "pred_table.m"
    MR_Word hlds__pred_table__Arities_12;
#line 663 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15;
#line 663 "pred_table.m"
    MR_Box hlds__pred_table__conv0_Arities_12;

#line 663 "pred_table.m"
    {
#line 663 "pred_table.m"
      hlds__pred_table__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 663 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_15_15, 0) = ((MR_Box) (hlds__pred_table__Module_8));
#line 663 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_15_15, 1) = ((MR_Box) (hlds__pred_table__FuncName_9));
#line 663 "pred_table.m"
    }
#line 663 "pred_table.m"
    {
#line 663 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__Func_MNA_Index_11, ((MR_Box) (hlds__pred_table__V_15_15)), &hlds__pred_table__conv0_Arities_12);
    }
#line 663 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 663 "pred_table.m"
      {
#line 663 "pred_table.m"
        hlds__pred_table__Arities_12 = ((MR_Word) hlds__pred_table__conv0_Arities_12);
#line 663 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 663 "pred_table.m"
      }
#line 668 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 664 "pred_table.m"
      {
#line 664 "pred_table.m"
        MR_Word hlds__pred_table__PredIdLists_13;
#line 664 "pred_table.m"
        MR_Word hlds__pred_table__PredIds0_14;

#line 664 "pred_table.m"
        {
#line 664 "pred_table.m"
          mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__Arities_12, &hlds__pred_table__PredIdLists_13);
        }
#line 665 "pred_table.m"
        {
#line 665 "pred_table.m"
          mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__PredIdLists_13, &hlds__pred_table__PredIds0_14);
        }
#line 739 "pred_table.m"
        if ((hlds__pred_table__IsFullyQualified_7 == (MR_Integer) 0))
#line 742 "pred_table.m"
          {
#line 742 "pred_table.m"
            MR_Word hlds__pred_table__Preds_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 0)));
#line 742 "pred_table.m"
            MR_Word hlds__pred_table__V_41_41;
#line 399 "pred_table.m"
            MR_Word hlds__pred_table__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 1)));
#line 399 "pred_table.m"
            MR_Word hlds__pred_table__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 2)));
#line 399 "pred_table.m"
            MR_Word hlds__pred_table__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 3)));
#line 399 "pred_table.m"
            MR_Word hlds__pred_table__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 4)));
#line 399 "pred_table.m"
            MR_Word hlds__pred_table__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 5)));
#line 399 "pred_table.m"
            MR_Word hlds__pred_table__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 6)));
#line 399 "pred_table.m"
            MR_Word hlds__pred_table__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 7)));
#line 399 "pred_table.m"
            MR_Word hlds__pred_table__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 8)));
#line 399 "pred_table.m"
            MR_Word hlds__pred_table__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 9)));

#line 744 "pred_table.m"
            {
#line 744 "pred_table.m"
              hlds__pred_table__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 744 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
#line 744 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0_1));
#line 744 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 744 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 3) = ((MR_Box) (hlds__pred_table__Preds_38));
#line 744 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 4) = ((MR_Box) (hlds__pred_table__Module_8));
#line 744 "pred_table.m"
            }
#line 744 "pred_table.m"
            {
#line 744 "pred_table.m"
              mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__V_41_41, hlds__pred_table__PredIds0_14, hlds__pred_table__PredIds_10);
#line 744 "pred_table.m"
              return;
            }
#line 742 "pred_table.m"
          }
#line 739 "pred_table.m"
        else
#line 740 "pred_table.m"
          *hlds__pred_table__PredIds_10 = hlds__pred_table__PredIds0_14;
#line 664 "pred_table.m"
      }
#line 668 "pred_table.m"
    else
#line 669 "pred_table.m"
      *hlds__pred_table__PredIds_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 661 "pred_table.m"
  }
#line 656 "pred_table.m"
}

#line 446 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_remove_from_index_10_p_0(
#line 446 "pred_table.m"
  MR_Word hlds__pred_table__Module_11,
#line 446 "pred_table.m"
  MR_String hlds__pred_table__Name_12,
#line 446 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_13,
#line 446 "pred_table.m"
  MR_Word hlds__pred_table__PredId_14,
#line 446 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_N_0_18,
#line 446 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_N_19,
#line 446 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_NA_0_20,
#line 446 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_NA_21,
#line 446 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_MNA_0_22,
#line 446 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_MNA_23)
#line 446 "pred_table.m"
{
#line 452 "pred_table.m"
  {
#line 452 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 452 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_28_28 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 452 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_29_29;
#line 452 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_24_71;
#line 452 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_25_72;
#line 452 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_26_73;
#line 452 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_27_74;
#line 452 "pred_table.m"
    MR_Word hlds__pred_table__V_25_25;
#line 452 "pred_table.m"
    MR_Word hlds__pred_table__Arities0_60;
#line 452 "pred_table.m"
    MR_Word hlds__pred_table__PredIds0_61;
#line 452 "pred_table.m"
    MR_Word hlds__pred_table__PredIds_62;
#line 452 "pred_table.m"
    MR_Word hlds__pred_table__V_66_66;
#line 470 "pred_table.m"
    MR_Word hlds__pred_table__NamePredIds0_34;
#line 461 "pred_table.m"
    MR_Box hlds__pred_table__conv0_NamePredIds0_34;
#line 470 "pred_table.m"
    MR_Word hlds__pred_table__NamePredIds0_46;
#line 461 "pred_table.m"
    MR_Box hlds__pred_table__conv1_NamePredIds0_46;
#line 479 "pred_table.m"
    MR_Box hlds__pred_table__conv2_Arities0_60;
#line 480 "pred_table.m"
    MR_Box hlds__pred_table__conv3_PredIds0_61;

#line 461 "pred_table.m"
    {
#line 461 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0(hlds__pred_table__TypeCtorInfo_28_28, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__STATE_VARIABLE_N_0_18, ((MR_Box) (hlds__pred_table__Name_12)), &hlds__pred_table__conv0_NamePredIds0_34);
    }
#line 461 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 461 "pred_table.m"
      {
#line 461 "pred_table.m"
        hlds__pred_table__NamePredIds0_34 = ((MR_Word) hlds__pred_table__conv0_NamePredIds0_34);
#line 461 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 461 "pred_table.m"
      }
#line 470 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 462 "pred_table.m"
      {
#line 462 "pred_table.m"
        MR_Word hlds__pred_table__NamePredIds_35;

#line 462 "pred_table.m"
        {
#line 462 "pred_table.m"
          mercury__list__delete_all_3_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__NamePredIds0_34, ((MR_Box) (hlds__pred_table__PredId_14)), &hlds__pred_table__NamePredIds_35);
        }
#line 466 "pred_table.m"
        if ((hlds__pred_table__NamePredIds_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 464 "pred_table.m"
          {
#line 465 "pred_table.m"
            {
#line 465 "pred_table.m"
              mercury__map__delete_3_p_0(hlds__pred_table__TypeCtorInfo_28_28, (MR_Word) &hlds__pred_table_scalar_common_1[0], ((MR_Box) (hlds__pred_table__Name_12)), hlds__pred_table__STATE_VARIABLE_N_0_18, hlds__pred_table__STATE_VARIABLE_N_19);
            }
#line 464 "pred_table.m"
          }
#line 466 "pred_table.m"
        else
#line 467 "pred_table.m"
          {
#line 468 "pred_table.m"
            {
#line 468 "pred_table.m"
              mercury__map__det_update_4_p_0(hlds__pred_table__TypeCtorInfo_28_28, (MR_Word) &hlds__pred_table_scalar_common_1[0], ((MR_Box) (hlds__pred_table__Name_12)), ((MR_Box) (hlds__pred_table__NamePredIds_35)), hlds__pred_table__STATE_VARIABLE_N_0_18, hlds__pred_table__STATE_VARIABLE_N_19);
            }
#line 467 "pred_table.m"
          }
#line 462 "pred_table.m"
      }
#line 470 "pred_table.m"
    else
#line 471 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_N_19 = hlds__pred_table__STATE_VARIABLE_N_0_18;
#line 454 "pred_table.m"
    {
#line 454 "pred_table.m"
      hlds__pred_table__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 454 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_25_25, 0) = ((MR_Box) (hlds__pred_table__Name_12));
#line 454 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_25_25, 1) = ((MR_Box) (hlds__pred_table__Arity_13));
#line 454 "pred_table.m"
    }
#line 4834 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_29_29 = (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0;
#line 461 "pred_table.m"
    {
#line 461 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0(hlds__pred_table__TypeCtorInfo_29_29, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__STATE_VARIABLE_NA_0_20, ((MR_Box) (hlds__pred_table__V_25_25)), &hlds__pred_table__conv1_NamePredIds0_46);
    }
#line 461 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 461 "pred_table.m"
      {
#line 461 "pred_table.m"
        hlds__pred_table__NamePredIds0_46 = ((MR_Word) hlds__pred_table__conv1_NamePredIds0_46);
#line 461 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 461 "pred_table.m"
      }
#line 470 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 462 "pred_table.m"
      {
#line 462 "pred_table.m"
        MR_Word hlds__pred_table__NamePredIds_47;

#line 462 "pred_table.m"
        {
#line 462 "pred_table.m"
          mercury__list__delete_all_3_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__NamePredIds0_46, ((MR_Box) (hlds__pred_table__PredId_14)), &hlds__pred_table__NamePredIds_47);
        }
#line 466 "pred_table.m"
        if ((hlds__pred_table__NamePredIds_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 464 "pred_table.m"
          {
#line 465 "pred_table.m"
            {
#line 465 "pred_table.m"
              mercury__map__delete_3_p_0(hlds__pred_table__TypeCtorInfo_29_29, (MR_Word) &hlds__pred_table_scalar_common_1[0], ((MR_Box) (hlds__pred_table__V_25_25)), hlds__pred_table__STATE_VARIABLE_NA_0_20, hlds__pred_table__STATE_VARIABLE_NA_21);
            }
#line 464 "pred_table.m"
          }
#line 466 "pred_table.m"
        else
#line 467 "pred_table.m"
          {
#line 468 "pred_table.m"
            {
#line 468 "pred_table.m"
              mercury__map__det_update_4_p_0(hlds__pred_table__TypeCtorInfo_29_29, (MR_Word) &hlds__pred_table_scalar_common_1[0], ((MR_Box) (hlds__pred_table__V_25_25)), ((MR_Box) (hlds__pred_table__NamePredIds_47)), hlds__pred_table__STATE_VARIABLE_NA_0_20, hlds__pred_table__STATE_VARIABLE_NA_21);
            }
#line 467 "pred_table.m"
          }
#line 462 "pred_table.m"
      }
#line 470 "pred_table.m"
    else
#line 471 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_NA_21 = hlds__pred_table__STATE_VARIABLE_NA_0_20;
#line 479 "pred_table.m"
    {
#line 479 "pred_table.m"
      hlds__pred_table__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 479 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_66_66, 0) = ((MR_Box) (hlds__pred_table__Module_11));
#line 479 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_66_66, 1) = ((MR_Box) (hlds__pred_table__Name_12));
#line 479 "pred_table.m"
    }
#line 4901 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_24_71 = (MR_Word) &hlds__pred_table_scalar_common_2[0];
#line 4903 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_25_72 = (MR_Word) &hlds__pred_table_scalar_common_2[1];
#line 479 "pred_table.m"
    {
#line 479 "pred_table.m"
      mercury__map__lookup_3_p_0(hlds__pred_table__TypeInfo_24_71, hlds__pred_table__TypeInfo_25_72, hlds__pred_table__STATE_VARIABLE_MNA_0_22, ((MR_Box) (hlds__pred_table__V_66_66)), &hlds__pred_table__conv2_Arities0_60);
    }
#line 479 "pred_table.m"
    hlds__pred_table__Arities0_60 = ((MR_Word) hlds__pred_table__conv2_Arities0_60);
#line 4912 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_26_73 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 4914 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_27_74 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
#line 480 "pred_table.m"
    {
#line 480 "pred_table.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__pred_table__TypeInfo_27_74, hlds__pred_table__Arities0_60, hlds__pred_table__Arity_13, &hlds__pred_table__conv3_PredIds0_61);
    }
#line 480 "pred_table.m"
    hlds__pred_table__PredIds0_61 = ((MR_Word) hlds__pred_table__conv3_PredIds0_61);
#line 481 "pred_table.m"
    {
#line 481 "pred_table.m"
      mercury__list__delete_all_3_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__PredIds0_61, ((MR_Box) (hlds__pred_table__PredId_14)), &hlds__pred_table__PredIds_62);
    }
#line 490 "pred_table.m"
    if ((hlds__pred_table__PredIds_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 483 "pred_table.m"
      {
#line 483 "pred_table.m"
        MR_Word hlds__pred_table__Arities_63;

#line 484 "pred_table.m"
        {
#line 484 "pred_table.m"
          mercury__map__delete_3_p_0(hlds__pred_table__TypeCtorInfo_26_73, hlds__pred_table__TypeInfo_27_74, ((MR_Box) (hlds__pred_table__Arity_13)), hlds__pred_table__Arities0_60, &hlds__pred_table__Arities_63);
        }
#line 485 "pred_table.m"
        {
#line 485 "pred_table.m"
          hlds__pred_table__succeeded = mercury__map__is_empty_1_p_0(hlds__pred_table__TypeCtorInfo_26_73, hlds__pred_table__TypeInfo_27_74, hlds__pred_table__Arities_63);
        }
#line 487 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 486 "pred_table.m"
          {
#line 486 "pred_table.m"
            mercury__map__delete_3_p_0(hlds__pred_table__TypeInfo_24_71, hlds__pred_table__TypeInfo_25_72, ((MR_Box) (hlds__pred_table__V_66_66)), hlds__pred_table__STATE_VARIABLE_MNA_0_22, hlds__pred_table__STATE_VARIABLE_MNA_23);
#line 486 "pred_table.m"
            return;
          }
#line 487 "pred_table.m"
        else
#line 488 "pred_table.m"
          {
#line 488 "pred_table.m"
            mercury__map__det_update_4_p_0(hlds__pred_table__TypeInfo_24_71, hlds__pred_table__TypeInfo_25_72, ((MR_Box) (hlds__pred_table__V_66_66)), ((MR_Box) (hlds__pred_table__Arities_63)), hlds__pred_table__STATE_VARIABLE_MNA_0_22, hlds__pred_table__STATE_VARIABLE_MNA_23);
#line 488 "pred_table.m"
            return;
          }
#line 483 "pred_table.m"
      }
#line 490 "pred_table.m"
    else
#line 491 "pred_table.m"
      {
#line 491 "pred_table.m"
        MR_Word hlds__pred_table__Arities_70;

#line 492 "pred_table.m"
        {
#line 492 "pred_table.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(hlds__pred_table__TypeInfo_27_74, hlds__pred_table__Arity_13, ((MR_Box) (hlds__pred_table__PredIds_62)), hlds__pred_table__Arities0_60, &hlds__pred_table__Arities_70);
        }
#line 493 "pred_table.m"
        {
#line 493 "pred_table.m"
          mercury__map__det_update_4_p_0(hlds__pred_table__TypeInfo_24_71, hlds__pred_table__TypeInfo_25_72, ((MR_Box) (hlds__pred_table__V_66_66)), ((MR_Box) (hlds__pred_table__Arities_70)), hlds__pred_table__STATE_VARIABLE_MNA_0_22, hlds__pred_table__STATE_VARIABLE_MNA_23);
#line 493 "pred_table.m"
          return;
        }
#line 491 "pred_table.m"
      }
#line 452 "pred_table.m"
  }
#line 446 "pred_table.m"
}

#line 308 "pred_table.m"
void MR_CALL 
hlds__pred_table__get_next_pred_id_2_p_0(
#line 308 "pred_table.m"
  MR_Word hlds__pred_table__PredTable_3,
#line 308 "pred_table.m"
  MR_Word * hlds__pred_table__NextPredId_4)
#line 308 "pred_table.m"
{
#line 1230 "pred_table.m"
  {
#line 1230 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 1230 "pred_table.m"
    MR_Word hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 0)));
#line 1230 "pred_table.m"
    MR_Word hlds__pred_table__V_6_6;
#line 1230 "pred_table.m"
    MR_Word hlds__pred_table__V_7_7;
#line 1230 "pred_table.m"
    MR_Word hlds__pred_table__V_8_8;
#line 1230 "pred_table.m"
    MR_Word hlds__pred_table__V_9_9;
#line 1230 "pred_table.m"
    MR_Word hlds__pred_table__V_10_10;
#line 1230 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11;
#line 1230 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12;
#line 1230 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13;

#line 1230 "pred_table.m"
    *hlds__pred_table__NextPredId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 1)));
#line 1230 "pred_table.m"
    hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 2)));
#line 1230 "pred_table.m"
    hlds__pred_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 3)));
#line 1230 "pred_table.m"
    hlds__pred_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 4)));
#line 1230 "pred_table.m"
    hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 5)));
#line 1230 "pred_table.m"
    hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 6)));
#line 1230 "pred_table.m"
    hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 7)));
#line 1230 "pred_table.m"
    hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 8)));
#line 1230 "pred_table.m"
    hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 9)));
#line 1230 "pred_table.m"
  }
#line 308 "pred_table.m"
}

#line 304 "pred_table.m"
void MR_CALL 
hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(
#line 304 "pred_table.m"
  MR_Word hlds__pred_table__Module_9,
#line 304 "pred_table.m"
  MR_Word hlds__pred_table__ModuleName_10,
#line 304 "pred_table.m"
  MR_String hlds__pred_table__ProcName_11,
#line 304 "pred_table.m"
  MR_Word hlds__pred_table__PredOrFunc_12,
#line 304 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_13,
#line 304 "pred_table.m"
  MR_Word hlds__pred_table__ModeNo_14,
#line 304 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_15,
#line 304 "pred_table.m"
  MR_Integer * hlds__pred_table__ProcId_16)
#line 304 "pred_table.m"
{
#line 1165 "pred_table.m"
  {
#line 1165 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 1165 "pred_table.m"
    MR_Word hlds__pred_table__PredTable_17;
#line 1165 "pred_table.m"
    MR_Word hlds__pred_table__PredInfo_20;
#line 1165 "pred_table.m"
    MR_Word hlds__pred_table__ProcIds_21;
#line 1180 "pred_table.m"
    MR_Word hlds__pred_table__PredIdPrime_19;
#line 1176 "pred_table.m"
    MR_Word hlds__pred_table__PredIds_18;
#line 1176 "pred_table.m"
    MR_Word hlds__pred_table__V_26_26;

#line 1166 "pred_table.m"
    {
#line 1166 "pred_table.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__pred_table__Module_9, &hlds__pred_table__PredTable_17);
    }
#line 1172 "pred_table.m"
    if ((hlds__pred_table__PredOrFunc_12 == (MR_Integer) 1))
#line 1173 "pred_table.m"
      {
#line 1174 "pred_table.m"
        {
#line 1174 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredTable_17, (MR_Integer) 0, hlds__pred_table__ModuleName_10, hlds__pred_table__ProcName_11, hlds__pred_table__Arity_13, &hlds__pred_table__PredIds_18);
        }
#line 1173 "pred_table.m"
      }
#line 1172 "pred_table.m"
    else
#line 1169 "pred_table.m"
      {
#line 1170 "pred_table.m"
        {
#line 1170 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredTable_17, (MR_Integer) 0, hlds__pred_table__ModuleName_10, hlds__pred_table__ProcName_11, hlds__pred_table__Arity_13, &hlds__pred_table__PredIds_18);
        }
#line 1169 "pred_table.m"
      }
#line 1177 "pred_table.m"
    hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__PredIds_18)) == (MR_mktag((MR_Integer) 1)));
#line 1177 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 1177 "pred_table.m"
      {
#line 1177 "pred_table.m"
        hlds__pred_table__PredIdPrime_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__PredIds_18, (MR_Integer) 0)));
#line 1177 "pred_table.m"
        hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__PredIds_18, (MR_Integer) 1)));
#line 1177 "pred_table.m"
        hlds__pred_table__succeeded = (hlds__pred_table__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1177 "pred_table.m"
      }
#line 1180 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 1179 "pred_table.m"
      *hlds__pred_table__PredId_15 = hlds__pred_table__PredIdPrime_19;
#line 1180 "pred_table.m"
    else
#line 1199 "pred_table.m"
      {
#line 1199 "pred_table.m"
        MR_Word hlds__pred_table__PredIdPrime_75;
#line 1195 "pred_table.m"
        MR_Word hlds__pred_table__V_33_33;
#line 1195 "pred_table.m"
        MR_Word hlds__pred_table__PredIds_73;

#line 1191 "pred_table.m"
        if ((hlds__pred_table__PredOrFunc_12 == (MR_Integer) 1))
#line 1192 "pred_table.m"
          {
#line 1192 "pred_table.m"
            MR_Integer hlds__pred_table__V_28_28 = (hlds__pred_table__Arity_13 - (MR_Integer) 1);

#line 1193 "pred_table.m"
            {
#line 1193 "pred_table.m"
              hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredTable_17, (MR_Integer) 0, hlds__pred_table__ModuleName_10, hlds__pred_table__ProcName_11, hlds__pred_table__V_28_28, &hlds__pred_table__PredIds_73);
            }
#line 1192 "pred_table.m"
          }
#line 1191 "pred_table.m"
        else
#line 1188 "pred_table.m"
          {
#line 1188 "pred_table.m"
            MR_Integer hlds__pred_table__V_31_31 = (hlds__pred_table__Arity_13 - (MR_Integer) 1);

#line 1189 "pred_table.m"
            {
#line 1189 "pred_table.m"
              hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredTable_17, (MR_Integer) 0, hlds__pred_table__ModuleName_10, hlds__pred_table__ProcName_11, hlds__pred_table__V_31_31, &hlds__pred_table__PredIds_73);
            }
#line 1188 "pred_table.m"
          }
#line 1196 "pred_table.m"
        hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__PredIds_73)) == (MR_mktag((MR_Integer) 1)));
#line 1196 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 1196 "pred_table.m"
          {
#line 1196 "pred_table.m"
            hlds__pred_table__PredIdPrime_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__PredIds_73, (MR_Integer) 0)));
#line 1196 "pred_table.m"
            hlds__pred_table__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__PredIds_73, (MR_Integer) 1)));
#line 1196 "pred_table.m"
            hlds__pred_table__succeeded = (hlds__pred_table__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1196 "pred_table.m"
          }
#line 1199 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 1198 "pred_table.m"
          *hlds__pred_table__PredId_15 = hlds__pred_table__PredIdPrime_75;
#line 1199 "pred_table.m"
        else
#line 1200 "pred_table.m"
          {
#line 1200 "pred_table.m"
            MR_String hlds__pred_table__V_36_36;
#line 1200 "pred_table.m"
            MR_String hlds__pred_table__V_40_40;
#line 1200 "pred_table.m"
            MR_String hlds__pred_table__V_79_79;
#line 1200 "pred_table.m"
            MR_Word hlds__pred_table__V_85_85;
#line 1200 "pred_table.m"
            MR_String hlds__pred_table__V_87_87;
#line 1200 "pred_table.m"
            MR_String hlds__pred_table__V_88_88;
#line 1200 "pred_table.m"
            MR_String hlds__pred_table__V_95_95;
#line 1200 "pred_table.m"
            MR_String hlds__pred_table__V_97_97;
#line 1200 "pred_table.m"
            MR_String hlds__pred_table__V_98_98;
#line 1200 "pred_table.m"
            MR_String hlds__pred_table__V_105_105;

#line 1202 "pred_table.m"
            {
#line 1202 "pred_table.m"
              hlds__pred_table__V_40_40 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__pred_table__ModuleName_10);
            }
#line 5216 "hlds.pred_table.c"
            hlds__pred_table__V_85_85 = (MR_Word) &hlds__pred_table_scalar_common_6[0];
#line 1203 "pred_table.m"
            {
#line 1203 "pred_table.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__pred_table__V_85_85, hlds__pred_table__Arity_13, &hlds__pred_table__V_79_79);
            }
#line 1201 "pred_table.m"
            {
#line 1201 "pred_table.m"
              hlds__pred_table__V_87_87 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__pred_table__V_79_79);
            }
#line 1203 "pred_table.m"
            {
#line 1203 "pred_table.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__pred_table__V_85_85, hlds__pred_table__ProcName_11, &hlds__pred_table__V_88_88);
            }
#line 1201 "pred_table.m"
            {
#line 1201 "pred_table.m"
              hlds__pred_table__V_95_95 = mercury__string__f_43_43_2_f_0(hlds__pred_table__V_88_88, hlds__pred_table__V_87_87);
            }
#line 1201 "pred_table.m"
            {
#line 1201 "pred_table.m"
              hlds__pred_table__V_97_97 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__pred_table__V_95_95);
            }
#line 1202 "pred_table.m"
            {
#line 1202 "pred_table.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__pred_table__V_85_85, hlds__pred_table__V_40_40, &hlds__pred_table__V_98_98);
            }
#line 1201 "pred_table.m"
            {
#line 1201 "pred_table.m"
              hlds__pred_table__V_105_105 = mercury__string__f_43_43_2_f_0(hlds__pred_table__V_98_98, hlds__pred_table__V_97_97);
            }
#line 1201 "pred_table.m"
            {
#line 1201 "pred_table.m"
              hlds__pred_table__V_36_36 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t locate ", hlds__pred_table__V_105_105);
            }
#line 1200 "pred_table.m"
            {
#line 1200 "pred_table.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.lookup_builtin_pred_proc_id\'/8", hlds__pred_table__V_36_36);
#line 1200 "pred_table.m"
              return;
            }
#line 1200 "pred_table.m"
          }
#line 1199 "pred_table.m"
      }
#line 1205 "pred_table.m"
    {
#line 1205 "pred_table.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__pred_table__Module_9, *hlds__pred_table__PredId_15, &hlds__pred_table__PredInfo_20);
    }
#line 1206 "pred_table.m"
    {
#line 1206 "pred_table.m"
      hlds__pred_table__ProcIds_21 = hlds__hlds_pred__pred_info_procids_1_f_0(hlds__pred_table__PredInfo_20);
    }
#line 1217 "pred_table.m"
    if ((hlds__pred_table__ModeNo_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1211 "pred_table.m"
      {
#line 1211 "pred_table.m"
        MR_Integer hlds__pred_table__ProcId0_22;
#line 1209 "pred_table.m"
        MR_Word hlds__pred_table__V_60_60;

#line 1209 "pred_table.m"
        hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__ProcIds_21)) == (MR_mktag((MR_Integer) 1)));
#line 1209 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 1209 "pred_table.m"
          {
#line 1209 "pred_table.m"
            hlds__pred_table__ProcId0_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__ProcIds_21, (MR_Integer) 0)));
#line 1209 "pred_table.m"
            hlds__pred_table__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__ProcIds_21, (MR_Integer) 1)));
#line 1209 "pred_table.m"
            hlds__pred_table__succeeded = (hlds__pred_table__V_60_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1209 "pred_table.m"
          }
#line 1211 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 1210 "pred_table.m"
          *hlds__pred_table__ProcId_16 = hlds__pred_table__ProcId0_22;
#line 1211 "pred_table.m"
        else
#line 1212 "pred_table.m"
          {
#line 1212 "pred_table.m"
            MR_String hlds__pred_table__V_63_63;
#line 1212 "pred_table.m"
            MR_String hlds__pred_table__V_67_67;
#line 1212 "pred_table.m"
            MR_String hlds__pred_table__V_107_107;
#line 1212 "pred_table.m"
            MR_Word hlds__pred_table__V_113_113;
#line 1212 "pred_table.m"
            MR_String hlds__pred_table__V_115_115;
#line 1212 "pred_table.m"
            MR_String hlds__pred_table__V_116_116;
#line 1212 "pred_table.m"
            MR_String hlds__pred_table__V_123_123;
#line 1212 "pred_table.m"
            MR_String hlds__pred_table__V_125_125;
#line 1212 "pred_table.m"
            MR_String hlds__pred_table__V_126_126;
#line 1212 "pred_table.m"
            MR_String hlds__pred_table__V_133_133;

#line 1214 "pred_table.m"
            {
#line 1214 "pred_table.m"
              hlds__pred_table__V_67_67 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__pred_table__ModuleName_10);
            }
#line 5336 "hlds.pred_table.c"
            hlds__pred_table__V_113_113 = (MR_Word) &hlds__pred_table_scalar_common_6[0];
#line 1215 "pred_table.m"
            {
#line 1215 "pred_table.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__pred_table__V_113_113, hlds__pred_table__Arity_13, &hlds__pred_table__V_107_107);
            }
#line 1213 "pred_table.m"
            {
#line 1213 "pred_table.m"
              hlds__pred_table__V_115_115 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__pred_table__V_107_107);
            }
#line 1215 "pred_table.m"
            {
#line 1215 "pred_table.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__pred_table__V_113_113, hlds__pred_table__ProcName_11, &hlds__pred_table__V_116_116);
            }
#line 1213 "pred_table.m"
            {
#line 1213 "pred_table.m"
              hlds__pred_table__V_123_123 = mercury__string__f_43_43_2_f_0(hlds__pred_table__V_116_116, hlds__pred_table__V_115_115);
            }
#line 1213 "pred_table.m"
            {
#line 1213 "pred_table.m"
              hlds__pred_table__V_125_125 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__pred_table__V_123_123);
            }
#line 1214 "pred_table.m"
            {
#line 1214 "pred_table.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__pred_table__V_113_113, hlds__pred_table__V_67_67, &hlds__pred_table__V_126_126);
            }
#line 1213 "pred_table.m"
            {
#line 1213 "pred_table.m"
              hlds__pred_table__V_133_133 = mercury__string__f_43_43_2_f_0(hlds__pred_table__V_126_126, hlds__pred_table__V_125_125);
            }
#line 1213 "pred_table.m"
            {
#line 1213 "pred_table.m"
              hlds__pred_table__V_63_63 = mercury__string__f_43_43_2_f_0((MR_String) "expected single mode for ", hlds__pred_table__V_133_133);
            }
#line 1212 "pred_table.m"
            {
#line 1212 "pred_table.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.lookup_builtin_pred_proc_id\'/8", hlds__pred_table__V_63_63);
#line 1212 "pred_table.m"
              return;
            }
#line 1212 "pred_table.m"
          }
#line 1211 "pred_table.m"
      }
#line 1217 "pred_table.m"
    else
#line 1218 "pred_table.m"
      {
#line 1218 "pred_table.m"
        MR_Integer hlds__pred_table__N_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__ModeNo_14, (MR_Integer) 0)));
#line 1221 "pred_table.m"
        MR_Integer hlds__pred_table__ProcId0_76;
#line 1219 "pred_table.m"
        MR_Box hlds__pred_table__conv0_ProcId0_76;

#line 1219 "pred_table.m"
        {
#line 1219 "pred_table.m"
          hlds__pred_table__succeeded = mercury__list__index0_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, hlds__pred_table__ProcIds_21, hlds__pred_table__N_23, &hlds__pred_table__conv0_ProcId0_76);
        }
#line 1219 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 1219 "pred_table.m"
          {
#line 1219 "pred_table.m"
            hlds__pred_table__ProcId0_76 = ((MR_Integer) hlds__pred_table__conv0_ProcId0_76);
#line 1219 "pred_table.m"
            hlds__pred_table__succeeded = MR_TRUE;
#line 1219 "pred_table.m"
          }
#line 1221 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 1220 "pred_table.m"
          *hlds__pred_table__ProcId_16 = hlds__pred_table__ProcId0_76;
#line 1221 "pred_table.m"
        else
#line 1222 "pred_table.m"
          {
#line 1222 "pred_table.m"
            MR_String hlds__pred_table__V_48_48;
#line 1222 "pred_table.m"
            MR_String hlds__pred_table__V_54_54;
#line 1222 "pred_table.m"
            MR_String hlds__pred_table__V_135_135;
#line 1222 "pred_table.m"
            MR_Word hlds__pred_table__V_141_141;
#line 1222 "pred_table.m"
            MR_String hlds__pred_table__V_143_143;
#line 1222 "pred_table.m"
            MR_String hlds__pred_table__V_144_144;
#line 1222 "pred_table.m"
            MR_String hlds__pred_table__V_151_151;
#line 1222 "pred_table.m"
            MR_String hlds__pred_table__V_153_153;
#line 1222 "pred_table.m"
            MR_String hlds__pred_table__V_154_154;
#line 1222 "pred_table.m"
            MR_String hlds__pred_table__V_161_161;
#line 1222 "pred_table.m"
            MR_String hlds__pred_table__V_163_163;
#line 1222 "pred_table.m"
            MR_String hlds__pred_table__V_164_164;
#line 1222 "pred_table.m"
            MR_String hlds__pred_table__V_171_171;

#line 1224 "pred_table.m"
            {
#line 1224 "pred_table.m"
              hlds__pred_table__V_54_54 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__pred_table__ModuleName_10);
            }
#line 5455 "hlds.pred_table.c"
            hlds__pred_table__V_141_141 = (MR_Word) &hlds__pred_table_scalar_common_6[0];
#line 1225 "pred_table.m"
            {
#line 1225 "pred_table.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__pred_table__V_141_141, hlds__pred_table__Arity_13, &hlds__pred_table__V_135_135);
            }
#line 1223 "pred_table.m"
            {
#line 1223 "pred_table.m"
              hlds__pred_table__V_143_143 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__pred_table__V_135_135);
            }
#line 1225 "pred_table.m"
            {
#line 1225 "pred_table.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__pred_table__V_141_141, hlds__pred_table__ProcName_11, &hlds__pred_table__V_144_144);
            }
#line 1223 "pred_table.m"
            {
#line 1223 "pred_table.m"
              hlds__pred_table__V_151_151 = mercury__string__f_43_43_2_f_0(hlds__pred_table__V_144_144, hlds__pred_table__V_143_143);
            }
#line 1223 "pred_table.m"
            {
#line 1223 "pred_table.m"
              hlds__pred_table__V_153_153 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__pred_table__V_151_151);
            }
#line 1224 "pred_table.m"
            {
#line 1224 "pred_table.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__pred_table__V_141_141, hlds__pred_table__V_54_54, &hlds__pred_table__V_154_154);
            }
#line 1223 "pred_table.m"
            {
#line 1223 "pred_table.m"
              hlds__pred_table__V_161_161 = mercury__string__f_43_43_2_f_0(hlds__pred_table__V_154_154, hlds__pred_table__V_153_153);
            }
#line 1223 "pred_table.m"
            {
#line 1223 "pred_table.m"
              hlds__pred_table__V_163_163 = mercury__string__f_43_43_2_f_0((MR_String) " for ", hlds__pred_table__V_161_161);
            }
#line 1224 "pred_table.m"
            {
#line 1224 "pred_table.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__pred_table__V_141_141, hlds__pred_table__N_23, &hlds__pred_table__V_164_164);
            }
#line 1223 "pred_table.m"
            {
#line 1223 "pred_table.m"
              hlds__pred_table__V_171_171 = mercury__string__f_43_43_2_f_0(hlds__pred_table__V_164_164, hlds__pred_table__V_163_163);
            }
#line 1223 "pred_table.m"
            {
#line 1223 "pred_table.m"
              hlds__pred_table__V_48_48 = mercury__string__f_43_43_2_f_0((MR_String) "there is no mode ", hlds__pred_table__V_171_171);
            }
#line 1222 "pred_table.m"
            {
#line 1222 "pred_table.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.lookup_builtin_pred_proc_id\'/8", hlds__pred_table__V_48_48);
#line 1222 "pred_table.m"
              return;
            }
#line 1222 "pred_table.m"
          }
#line 1218 "pred_table.m"
      }
#line 1165 "pred_table.m"
  }
#line 304 "pred_table.m"
}

#line 298 "pred_table.m"
void MR_CALL 
hlds__pred_table__get_proc_id_3_p_0(
#line 298 "pred_table.m"
  MR_Word hlds__pred_table__ModuleInfo_4,
#line 298 "pred_table.m"
  MR_Word hlds__pred_table__PredId_5,
#line 298 "pred_table.m"
  MR_Integer * hlds__pred_table__ProcId_6)
#line 298 "pred_table.m"
{
#line 1134 "pred_table.m"
  {
#line 1134 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 1134 "pred_table.m"
    MR_Word hlds__pred_table__PredInfo_7;
#line 1134 "pred_table.m"
    MR_Word hlds__pred_table__ProcIds_8;
#line 1139 "pred_table.m"
    MR_Integer hlds__pred_table__ProcId0_9;
#line 1137 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18;

#line 1135 "pred_table.m"
    {
#line 1135 "pred_table.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__pred_table__ModuleInfo_4, hlds__pred_table__PredId_5, &hlds__pred_table__PredInfo_7);
    }
#line 1136 "pred_table.m"
    {
#line 1136 "pred_table.m"
      hlds__pred_table__ProcIds_8 = hlds__hlds_pred__pred_info_procids_1_f_0(hlds__pred_table__PredInfo_7);
    }
#line 1137 "pred_table.m"
    hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__ProcIds_8)) == (MR_mktag((MR_Integer) 1)));
#line 1137 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 1137 "pred_table.m"
      {
#line 1137 "pred_table.m"
        hlds__pred_table__ProcId0_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__ProcIds_8, (MR_Integer) 0)));
#line 1137 "pred_table.m"
        hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__ProcIds_8, (MR_Integer) 1)));
#line 1137 "pred_table.m"
        hlds__pred_table__succeeded = (hlds__pred_table__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1137 "pred_table.m"
      }
#line 1139 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 1138 "pred_table.m"
      *hlds__pred_table__ProcId_6 = hlds__pred_table__ProcId0_9;
#line 1139 "pred_table.m"
    else
#line 1140 "pred_table.m"
      {
#line 1140 "pred_table.m"
        MR_String hlds__pred_table__Name_10;
#line 1140 "pred_table.m"
        MR_Word hlds__pred_table__PredOrFunc_11;
#line 1140 "pred_table.m"
        MR_Integer hlds__pred_table__Arity_12;
#line 1140 "pred_table.m"
        MR_String hlds__pred_table__PredOrFuncStr_13;
#line 1140 "pred_table.m"
        MR_String hlds__pred_table__ArityString_14;
#line 1140 "pred_table.m"
        MR_String hlds__pred_table__Message_15;

#line 1140 "pred_table.m"
        {
#line 1140 "pred_table.m"
          hlds__pred_table__Name_10 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__pred_table__PredInfo_7);
        }
#line 1141 "pred_table.m"
        {
#line 1141 "pred_table.m"
          hlds__pred_table__PredOrFunc_11 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__pred_table__PredInfo_7);
        }
#line 1142 "pred_table.m"
        {
#line 1142 "pred_table.m"
          hlds__pred_table__Arity_12 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__pred_table__PredInfo_7);
        }
#line 1143 "pred_table.m"
        {
#line 1143 "pred_table.m"
          hlds__pred_table__PredOrFuncStr_13 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(hlds__pred_table__PredOrFunc_11);
        }
#line 1144 "pred_table.m"
        {
#line 1144 "pred_table.m"
          mercury__string__int_to_string_2_p_0(hlds__pred_table__Arity_12, &hlds__pred_table__ArityString_14);
        }
#line 1152 "pred_table.m"
        if ((hlds__pred_table__ProcIds_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1146 "pred_table.m"
          {
#line 1146 "pred_table.m"
            MR_Word hlds__pred_table__V_35_35;
#line 1146 "pred_table.m"
            MR_Word hlds__pred_table__V_37_37;
#line 1146 "pred_table.m"
            MR_Word hlds__pred_table__V_38_38;
#line 1146 "pred_table.m"
            MR_Word hlds__pred_table__V_40_40;
#line 1146 "pred_table.m"
            MR_Word hlds__pred_table__V_41_41;
#line 1146 "pred_table.m"
            MR_Word hlds__pred_table__V_43_43;

#line 1149 "pred_table.m"
            {
#line 1149 "pred_table.m"
              hlds__pred_table__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_43_43, 0) = ((MR_Box) (hlds__pred_table__ArityString_14));
#line 1149 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[9])));
#line 1149 "pred_table.m"
            }
#line 1149 "pred_table.m"
            {
#line 1149 "pred_table.m"
              hlds__pred_table__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_41_41, 0) = ((MR_Box) ((MR_String) "/"));
#line 1149 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_41_41, 1) = ((MR_Box) (hlds__pred_table__V_43_43));
#line 1149 "pred_table.m"
            }
#line 1149 "pred_table.m"
            {
#line 1149 "pred_table.m"
              hlds__pred_table__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_40_40, 0) = ((MR_Box) (hlds__pred_table__Name_10));
#line 1149 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_40_40, 1) = ((MR_Box) (hlds__pred_table__V_41_41));
#line 1149 "pred_table.m"
            }
#line 1149 "pred_table.m"
            {
#line 1149 "pred_table.m"
              hlds__pred_table__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_38_38, 0) = ((MR_Box) ((MR_String) "\n\140"));
#line 1149 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_38_38, 1) = ((MR_Box) (hlds__pred_table__V_40_40));
#line 1149 "pred_table.m"
            }
#line 1148 "pred_table.m"
            {
#line 1148 "pred_table.m"
              hlds__pred_table__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_37_37, 0) = ((MR_Box) (hlds__pred_table__PredOrFuncStr_13));
#line 1148 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_37_37, 1) = ((MR_Box) (hlds__pred_table__V_38_38));
#line 1148 "pred_table.m"
            }
#line 1148 "pred_table.m"
            {
#line 1148 "pred_table.m"
              hlds__pred_table__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_35_35, 0) = ((MR_Box) ((MR_String) "cannot take address of "));
#line 1148 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_35_35, 1) = ((MR_Box) (hlds__pred_table__V_37_37));
#line 1148 "pred_table.m"
            }
#line 1147 "pred_table.m"
            {
#line 1147 "pred_table.m"
              mercury__string__append_list_2_p_0(hlds__pred_table__V_35_35, &hlds__pred_table__Message_15);
            }
#line 1146 "pred_table.m"
          }
#line 1152 "pred_table.m"
        else
#line 1153 "pred_table.m"
          {
#line 1153 "pred_table.m"
            MR_Word hlds__pred_table__V_19_19;
#line 1153 "pred_table.m"
            MR_Word hlds__pred_table__V_21_21;
#line 1153 "pred_table.m"
            MR_Word hlds__pred_table__V_23_23;
#line 1153 "pred_table.m"
            MR_Word hlds__pred_table__V_24_24;
#line 1153 "pred_table.m"
            MR_Word hlds__pred_table__V_26_26;
#line 1153 "pred_table.m"
            MR_Word hlds__pred_table__V_27_27;
#line 1153 "pred_table.m"
            MR_Word hlds__pred_table__V_29_29;

#line 1157 "pred_table.m"
            {
#line 1157 "pred_table.m"
              hlds__pred_table__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1157 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_29_29, 0) = ((MR_Box) (hlds__pred_table__ArityString_14));
#line 1157 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[11])));
#line 1157 "pred_table.m"
            }
#line 1157 "pred_table.m"
            {
#line 1157 "pred_table.m"
              hlds__pred_table__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1157 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_27_27, 0) = ((MR_Box) ((MR_String) "/"));
#line 1157 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_27_27, 1) = ((MR_Box) (hlds__pred_table__V_29_29));
#line 1157 "pred_table.m"
            }
#line 1157 "pred_table.m"
            {
#line 1157 "pred_table.m"
              hlds__pred_table__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1157 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_26_26, 0) = ((MR_Box) (hlds__pred_table__Name_10));
#line 1157 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_26_26, 1) = ((MR_Box) (hlds__pred_table__V_27_27));
#line 1157 "pred_table.m"
            }
#line 1157 "pred_table.m"
            {
#line 1157 "pred_table.m"
              hlds__pred_table__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1157 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_24_24, 0) = ((MR_Box) ((MR_String) "\n\140"));
#line 1157 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_24_24, 1) = ((MR_Box) (hlds__pred_table__V_26_26));
#line 1157 "pred_table.m"
            }
#line 1156 "pred_table.m"
            {
#line 1156 "pred_table.m"
              hlds__pred_table__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1156 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_23_23, 0) = ((MR_Box) (hlds__pred_table__PredOrFuncStr_13));
#line 1156 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_23_23, 1) = ((MR_Box) (hlds__pred_table__V_24_24));
#line 1156 "pred_table.m"
            }
#line 1156 "pred_table.m"
            {
#line 1156 "pred_table.m"
              hlds__pred_table__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1156 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_21_21, 0) = ((MR_Box) ((MR_String) "taking address of "));
#line 1156 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_21_21, 1) = ((MR_Box) (hlds__pred_table__V_23_23));
#line 1156 "pred_table.m"
            }
#line 1155 "pred_table.m"
            {
#line 1155 "pred_table.m"
              hlds__pred_table__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1155 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_19_19, 0) = ((MR_Box) ((MR_String) "sorry, not implemented: "));
#line 1155 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_19_19, 1) = ((MR_Box) (hlds__pred_table__V_21_21));
#line 1155 "pred_table.m"
            }
#line 1154 "pred_table.m"
            {
#line 1154 "pred_table.m"
              mercury__string__append_list_2_p_0(hlds__pred_table__V_19_19, &hlds__pred_table__Message_15);
            }
#line 1153 "pred_table.m"
          }
#line 1161 "pred_table.m"
        {
#line 1161 "pred_table.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.get_proc_id\'/3", hlds__pred_table__Message_15);
#line 1161 "pred_table.m"
          return;
        }
#line 1140 "pred_table.m"
      }
#line 1134 "pred_table.m"
  }
#line 298 "pred_table.m"
}

#line 290 "pred_table.m"
MR_bool MR_CALL 
hlds__pred_table__get_pred_id_by_types_10_p_0(
#line 290 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_11,
#line 290 "pred_table.m"
  MR_Word hlds__pred_table__SymName_12,
#line 290 "pred_table.m"
  MR_Word hlds__pred_table__PredOrFunc_13,
#line 290 "pred_table.m"
  MR_Word hlds__pred_table__TVarSet_14,
#line 290 "pred_table.m"
  MR_Word hlds__pred_table__ExistQTVars_15,
#line 290 "pred_table.m"
  MR_Word hlds__pred_table__ArgTypes_16,
#line 290 "pred_table.m"
  MR_Word hlds__pred_table__HeadTypeParams_17,
#line 290 "pred_table.m"
  MR_Word hlds__pred_table__ModuleInfo_18,
#line 290 "pred_table.m"
  MR_Word hlds__pred_table__Context_19,
#line 290 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_20)
#line 290 "pred_table.m"
{
#line 1096 "pred_table.m"
  {
#line 1096 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 1096 "pred_table.m"
    MR_Word hlds__pred_table__PredicateTable_21;
#line 1096 "pred_table.m"
    MR_Integer hlds__pred_table__Arity_22;
#line 1096 "pred_table.m"
    MR_Word hlds__pred_table__PredIds_23;
#line 1103 "pred_table.m"
    MR_Word hlds__pred_table___PredName_25;

#line 1097 "pred_table.m"
    {
#line 1097 "pred_table.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__pred_table__ModuleInfo_18, &hlds__pred_table__PredicateTable_21);
    }
#line 1098 "pred_table.m"
    {
#line 1098 "pred_table.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__pred_table__ArgTypes_16, &hlds__pred_table__Arity_22);
    }
#line 1099 "pred_table.m"
    {
#line 1099 "pred_table.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__pred_table__PredicateTable_21, hlds__pred_table__IsFullyQualified_11, hlds__pred_table__PredOrFunc_13, hlds__pred_table__SymName_12, hlds__pred_table__Arity_22, &hlds__pred_table__PredIds_23);
    }
#line 1103 "pred_table.m"
    {
#line 1103 "pred_table.m"
      hlds__pred_table__succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(hlds__pred_table__ModuleInfo_18, hlds__pred_table__PredIds_23, hlds__pred_table__TVarSet_14, hlds__pred_table__ExistQTVars_15, hlds__pred_table__ArgTypes_16, hlds__pred_table__HeadTypeParams_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__pred_table__Context_19, hlds__pred_table__PredId_20, &hlds__pred_table___PredName_25);
    }
#line 1096 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 1096 "pred_table.m"
  }
#line 290 "pred_table.m"
}

#line 282 "pred_table.m"
void MR_CALL 
hlds__pred_table__get_pred_id_and_proc_id_by_types_11_p_0(
#line 282 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_12,
#line 282 "pred_table.m"
  MR_Word hlds__pred_table__SymName_13,
#line 282 "pred_table.m"
  MR_Word hlds__pred_table__PredOrFunc_14,
#line 282 "pred_table.m"
  MR_Word hlds__pred_table__TVarSet_15,
#line 282 "pred_table.m"
  MR_Word hlds__pred_table__ExistQTVars_16,
#line 282 "pred_table.m"
  MR_Word hlds__pred_table__ArgTypes_17,
#line 282 "pred_table.m"
  MR_Word hlds__pred_table__HeadTypeParams_18,
#line 282 "pred_table.m"
  MR_Word hlds__pred_table__ModuleInfo_19,
#line 282 "pred_table.m"
  MR_Word hlds__pred_table__Context_20,
#line 282 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_21,
#line 282 "pred_table.m"
  MR_Integer * hlds__pred_table__ProcId_22)
#line 282 "pred_table.m"
{
#line 1114 "pred_table.m"
  {
#line 1114 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 1121 "pred_table.m"
    MR_Word hlds__pred_table__PredId0_23;
#line 1096 "pred_table.m"
    MR_Word hlds__pred_table__PredicateTable_54;
#line 1096 "pred_table.m"
    MR_Integer hlds__pred_table__Arity_55;
#line 1096 "pred_table.m"
    MR_Word hlds__pred_table__PredIds_56;
#line 1103 "pred_table.m"
    MR_Word hlds__pred_table___PredName_58;

#line 1097 "pred_table.m"
    {
#line 1097 "pred_table.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__pred_table__ModuleInfo_19, &hlds__pred_table__PredicateTable_54);
    }
#line 1098 "pred_table.m"
    {
#line 1098 "pred_table.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__pred_table__ArgTypes_17, &hlds__pred_table__Arity_55);
    }
#line 1099 "pred_table.m"
    {
#line 1099 "pred_table.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__pred_table__PredicateTable_54, hlds__pred_table__IsFullyQualified_12, hlds__pred_table__PredOrFunc_14, hlds__pred_table__SymName_13, hlds__pred_table__Arity_55, &hlds__pred_table__PredIds_56);
    }
#line 1103 "pred_table.m"
    {
#line 1103 "pred_table.m"
      hlds__pred_table__succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(hlds__pred_table__ModuleInfo_19, hlds__pred_table__PredIds_56, hlds__pred_table__TVarSet_15, hlds__pred_table__ExistQTVars_16, hlds__pred_table__ArgTypes_17, hlds__pred_table__HeadTypeParams_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__pred_table__Context_20, &hlds__pred_table__PredId0_23, &hlds__pred_table___PredName_58);
    }
#line 1121 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 1120 "pred_table.m"
      *hlds__pred_table__PredId_21 = hlds__pred_table__PredId0_23;
#line 1121 "pred_table.m"
    else
#line 1124 "pred_table.m"
      {
#line 1124 "pred_table.m"
        MR_Integer hlds__pred_table__Arity_24;
#line 1124 "pred_table.m"
        MR_String hlds__pred_table__PredOrFuncStr_25;
#line 1124 "pred_table.m"
        MR_String hlds__pred_table__NameStr_26;
#line 1124 "pred_table.m"
        MR_String hlds__pred_table__ArityString_27;
#line 1124 "pred_table.m"
        MR_String hlds__pred_table__Msg_28;
#line 1124 "pred_table.m"
        MR_Word hlds__pred_table__V_29_29;
#line 1124 "pred_table.m"
        MR_Word hlds__pred_table__V_31_31;
#line 1124 "pred_table.m"
        MR_Word hlds__pred_table__V_32_32;
#line 1124 "pred_table.m"
        MR_Word hlds__pred_table__V_34_34;
#line 1124 "pred_table.m"
        MR_Word hlds__pred_table__V_35_35;
#line 1124 "pred_table.m"
        MR_Word hlds__pred_table__V_37_37;

#line 1124 "pred_table.m"
        {
#line 1124 "pred_table.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__pred_table__ArgTypes_17, &hlds__pred_table__Arity_24);
        }
#line 1125 "pred_table.m"
        {
#line 1125 "pred_table.m"
          hlds__pred_table__PredOrFuncStr_25 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(hlds__pred_table__PredOrFunc_14);
        }
#line 1126 "pred_table.m"
        {
#line 1126 "pred_table.m"
          hlds__pred_table__NameStr_26 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__pred_table__SymName_13);
        }
#line 1127 "pred_table.m"
        {
#line 1127 "pred_table.m"
          mercury__string__int_to_string_2_p_0(hlds__pred_table__Arity_24, &hlds__pred_table__ArityString_27);
        }
#line 1129 "pred_table.m"
        {
#line 1129 "pred_table.m"
          hlds__pred_table__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1129 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_37_37, 0) = ((MR_Box) (hlds__pred_table__ArityString_27));
#line 1129 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[14])));
#line 1129 "pred_table.m"
        }
#line 1129 "pred_table.m"
        {
#line 1129 "pred_table.m"
          hlds__pred_table__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1129 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_35_35, 0) = ((MR_Box) ((MR_String) "/"));
#line 1129 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_35_35, 1) = ((MR_Box) (hlds__pred_table__V_37_37));
#line 1129 "pred_table.m"
        }
#line 1129 "pred_table.m"
        {
#line 1129 "pred_table.m"
          hlds__pred_table__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1129 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_34_34, 0) = ((MR_Box) (hlds__pred_table__NameStr_26));
#line 1129 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_34_34, 1) = ((MR_Box) (hlds__pred_table__V_35_35));
#line 1129 "pred_table.m"
        }
#line 1129 "pred_table.m"
        {
#line 1129 "pred_table.m"
          hlds__pred_table__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1129 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_32_32, 0) = ((MR_Box) ((MR_String) "\n\140"));
#line 1129 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_32_32, 1) = ((MR_Box) (hlds__pred_table__V_34_34));
#line 1129 "pred_table.m"
        }
#line 1128 "pred_table.m"
        {
#line 1128 "pred_table.m"
          hlds__pred_table__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1128 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_31_31, 0) = ((MR_Box) (hlds__pred_table__PredOrFuncStr_25));
#line 1128 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_31_31, 1) = ((MR_Box) (hlds__pred_table__V_32_32));
#line 1128 "pred_table.m"
        }
#line 1128 "pred_table.m"
        {
#line 1128 "pred_table.m"
          hlds__pred_table__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1128 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_29_29, 0) = ((MR_Box) ((MR_String) "undefined/invalid "));
#line 1128 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_29_29, 1) = ((MR_Box) (hlds__pred_table__V_31_31));
#line 1128 "pred_table.m"
        }
#line 1128 "pred_table.m"
        {
#line 1128 "pred_table.m"
          mercury__string__append_list_2_p_0(hlds__pred_table__V_29_29, &hlds__pred_table__Msg_28);
        }
#line 1130 "pred_table.m"
        {
#line 1130 "pred_table.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.get_pred_id_and_proc_id_by_types\'/11", hlds__pred_table__Msg_28);
#line 1130 "pred_table.m"
          return;
        }
#line 1124 "pred_table.m"
      }
#line 1132 "pred_table.m"
    {
#line 1132 "pred_table.m"
      hlds__pred_table__get_proc_id_3_p_0(hlds__pred_table__ModuleInfo_19, *hlds__pred_table__PredId_21, hlds__pred_table__ProcId_22);
#line 1132 "pred_table.m"
      return;
    }
#line 1114 "pred_table.m"
  }
#line 282 "pred_table.m"
}

#line 268 "pred_table.m"
MR_bool MR_CALL 
hlds__pred_table__find_matching_pred_id_10_p_0(
#line 268 "pred_table.m"
  MR_Word hlds__pred_table__ModuleInfo_11,
#line 268 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 268 "pred_table.m"
  MR_Word hlds__pred_table__TVarSet_14,
#line 268 "pred_table.m"
  MR_Word hlds__pred_table__ExistQTVars_15,
#line 268 "pred_table.m"
  MR_Word hlds__pred_table__ArgTypes_16,
#line 268 "pred_table.m"
  MR_Word hlds__pred_table__HeadTypeParams_17,
#line 268 "pred_table.m"
  MR_Word hlds__pred_table__MaybeConstraintSearch_18,
#line 268 "pred_table.m"
  MR_Word hlds__pred_table__Context_19,
#line 268 "pred_table.m"
  MR_Word * hlds__pred_table__ThePredId_20,
#line 268 "pred_table.m"
  MR_Word * hlds__pred_table__PredName_21)
#line 268 "pred_table.m"
{
#line 1014 "pred_table.m"
  while (MR_TRUE)
#line 1014 "pred_table.m"
    {
#line 1014 "pred_table.m"
      /* tailcall optimized into a loop */
#line 1014 "pred_table.m"
      {
#line 1014 "pred_table.m"
        MR_bool hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1014 "pred_table.m"
        MR_Word hlds__pred_table__PredId_12;
#line 1014 "pred_table.m"
        MR_Word hlds__pred_table__PredIds_13;
#line 1068 "pred_table.m"
        MR_Word hlds__pred_table__PredInfo_22;
#line 1019 "pred_table.m"
        MR_Word hlds__pred_table__PredTVarSet_23;
#line 1019 "pred_table.m"
        MR_Word hlds__pred_table__PredExistQVars0_24;
#line 1019 "pred_table.m"
        MR_Word hlds__pred_table__PredArgTypes0_25;
#line 1019 "pred_table.m"
        MR_Word hlds__pred_table__PredKindMap_26;

#line 1012 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 1012 "pred_table.m"
          {
#line 1012 "pred_table.m"
            hlds__pred_table__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 1012 "pred_table.m"
            hlds__pred_table__PredIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));
#line 1019 "pred_table.m"
            {
#line 1019 "pred_table.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(hlds__pred_table__ModuleInfo_11, hlds__pred_table__PredId_12, &hlds__pred_table__PredInfo_22);
            }
#line 1020 "pred_table.m"
            {
#line 1020 "pred_table.m"
              hlds__hlds_pred__pred_info_get_arg_types_4_p_0(hlds__pred_table__PredInfo_22, &hlds__pred_table__PredTVarSet_23, &hlds__pred_table__PredExistQVars0_24, &hlds__pred_table__PredArgTypes0_25);
            }
#line 1022 "pred_table.m"
            {
#line 1022 "pred_table.m"
              hlds__hlds_pred__pred_info_get_tvar_kind_map_2_p_0(hlds__pred_table__PredInfo_22, &hlds__pred_table__PredKindMap_26);
            }
#line 1024 "pred_table.m"
            {
#line 1024 "pred_table.m"
              hlds__pred_table__succeeded = parse_tree__prog_type__arg_type_list_subsumes_8_p_0(hlds__pred_table__TVarSet_14, hlds__pred_table__ExistQTVars_15, hlds__pred_table__ArgTypes_16, hlds__pred_table__HeadTypeParams_17, hlds__pred_table__PredTVarSet_23, hlds__pred_table__PredKindMap_26, hlds__pred_table__PredExistQVars0_24, hlds__pred_table__PredArgTypes0_25);
            }
#line 1019 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 1029 "pred_table.m"
              {
#line 1029 "pred_table.m"
                if ((hlds__pred_table__MaybeConstraintSearch_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1028 "pred_table.m"
                  hlds__pred_table__succeeded = MR_TRUE;
#line 1029 "pred_table.m"
                else
#line 1030 "pred_table.m"
                  {
#line 1030 "pred_table.m"
                    MR_Word hlds__pred_table__ConstraintSearch_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__MaybeConstraintSearch_18, (MR_Integer) 0)));
#line 1030 "pred_table.m"
                    MR_Word hlds__pred_table__ProgConstraints_28;
#line 1030 "pred_table.m"
                    MR_Word hlds__pred_table__UnivConstraints_29;
#line 1030 "pred_table.m"
                    MR_Integer hlds__pred_table__NumConstraints_31;
#line 1030 "pred_table.m"
                    MR_Word hlds__pred_table__ProvenConstraints_32;
#line 1033 "pred_table.m"
                    MR_Word hlds__pred_table__V_30_30;
#line 1035 "pred_table.m"
                    MR_bool MR_CALL (* hlds__pred_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 1035 "pred_table.m"
                    MR_Box hlds__pred_table__conv1_ProvenConstraints_32;

#line 1032 "pred_table.m"
                    {
#line 1032 "pred_table.m"
                      hlds__hlds_pred__pred_info_get_class_context_2_p_0(hlds__pred_table__PredInfo_22, &hlds__pred_table__ProgConstraints_28);
                    }
#line 1033 "pred_table.m"
                    hlds__pred_table__UnivConstraints_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__ProgConstraints_28, (MR_Integer) 0)));
#line 1033 "pred_table.m"
                    hlds__pred_table__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__ProgConstraints_28, (MR_Integer) 1)));
#line 1034 "pred_table.m"
                    {
#line 1034 "pred_table.m"
                      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__pred_table__UnivConstraints_29, &hlds__pred_table__NumConstraints_31);
                    }
#line 1035 "pred_table.m"
                    hlds__pred_table__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__pred_table__ConstraintSearch_27, (MR_Integer) 1)));
#line 1035 "pred_table.m"
                    {
#line 1035 "pred_table.m"
                      hlds__pred_table__succeeded = hlds__pred_table__func_0(((MR_Box) hlds__pred_table__ConstraintSearch_27), ((MR_Box) (hlds__pred_table__NumConstraints_31)), &hlds__pred_table__conv1_ProvenConstraints_32);
                    }
#line 1035 "pred_table.m"
                    if (hlds__pred_table__succeeded)
#line 1035 "pred_table.m"
                      {
#line 1035 "pred_table.m"
                        hlds__pred_table__ProvenConstraints_32 = ((MR_Word) hlds__pred_table__conv1_ProvenConstraints_32);
#line 1035 "pred_table.m"
                        hlds__pred_table__succeeded = MR_TRUE;
#line 1035 "pred_table.m"
                      }
#line 1030 "pred_table.m"
                    if (hlds__pred_table__succeeded)
#line 1036 "pred_table.m"
                      {
#line 1036 "pred_table.m"
                        hlds__pred_table__succeeded = hlds__pred_table__univ_constraints_match_2_p_0(hlds__pred_table__ProvenConstraints_32, hlds__pred_table__UnivConstraints_29);
                      }
#line 1030 "pred_table.m"
                  }
#line 1029 "pred_table.m"
              }
#line 1068 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 1042 "pred_table.m"
              {
#line 1042 "pred_table.m"
                MR_String hlds__pred_table__PName_33;
#line 1042 "pred_table.m"
                MR_Word hlds__pred_table__Module_34;
#line 1065 "pred_table.m"
                MR_Word hlds__pred_table__OtherPredId_35;
#line 1046 "pred_table.m"
                MR_Word hlds__pred_table___OtherPredName_36;

#line 1042 "pred_table.m"
                {
#line 1042 "pred_table.m"
                  hlds__pred_table__PName_33 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__pred_table__PredInfo_22);
                }
#line 1043 "pred_table.m"
                {
#line 1043 "pred_table.m"
                  hlds__pred_table__Module_34 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__pred_table__PredInfo_22);
                }
#line 1044 "pred_table.m"
                {
#line 1044 "pred_table.m"
                  MR_Word base;
#line 1044 "pred_table.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1044 "pred_table.m"
                  *hlds__pred_table__PredName_21 = base;
#line 1044 "pred_table.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__pred_table__Module_34));
#line 1044 "pred_table.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__pred_table__PName_33));
#line 1044 "pred_table.m"
                }
#line 1046 "pred_table.m"
                {
#line 1046 "pred_table.m"
                  hlds__pred_table__succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(hlds__pred_table__ModuleInfo_11, hlds__pred_table__PredIds_13, hlds__pred_table__TVarSet_14, hlds__pred_table__ExistQTVars_15, hlds__pred_table__ArgTypes_16, hlds__pred_table__HeadTypeParams_17, hlds__pred_table__MaybeConstraintSearch_18, hlds__pred_table__Context_19, &hlds__pred_table__OtherPredId_35, &hlds__pred_table___OtherPredName_36);
                }
#line 1065 "pred_table.m"
                if (hlds__pred_table__succeeded)
#line 1050 "pred_table.m"
                  {
#line 1050 "pred_table.m"
                    MR_Word hlds__pred_table__OtherPredInfo_37;
#line 1050 "pred_table.m"
                    MR_Word hlds__pred_table__PredCallId_38;
#line 1050 "pred_table.m"
                    MR_Word hlds__pred_table__OtherPredCallId_39;
#line 1054 "pred_table.m"
                    MR_Word hlds__pred_table__Globals_41;
#line 1054 "pred_table.m"
                    MR_Word hlds__pred_table__Pieces_42;
#line 1054 "pred_table.m"
                    MR_Word hlds__pred_table__V_46_46;
#line 1054 "pred_table.m"
                    MR_Word hlds__pred_table__V_47_47;
#line 1054 "pred_table.m"
                    MR_Word hlds__pred_table__V_48_48;
#line 1054 "pred_table.m"
                    MR_Word hlds__pred_table__V_51_51;
#line 1054 "pred_table.m"
                    MR_Word hlds__pred_table__V_52_52;

#line 1050 "pred_table.m"
                    {
#line 1050 "pred_table.m"
                      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__pred_table__ModuleInfo_11, hlds__pred_table__OtherPredId_35, &hlds__pred_table__OtherPredInfo_37);
                    }
#line 1051 "pred_table.m"
                    {
#line 1051 "pred_table.m"
                      hlds__hlds_pred__pred_info_get_call_id_2_p_0(hlds__pred_table__PredInfo_22, &hlds__pred_table__PredCallId_38);
                    }
#line 1052 "pred_table.m"
                    {
#line 1052 "pred_table.m"
                      hlds__hlds_pred__pred_info_get_call_id_2_p_0(hlds__pred_table__OtherPredInfo_37, &hlds__pred_table__OtherPredCallId_39);
                    }
#line 1055 "pred_table.m"
                    {
#line 1055 "pred_table.m"
                      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__pred_table__ModuleInfo_11, &hlds__pred_table__Globals_41);
                    }
#line 1058 "pred_table.m"
                    {
#line 1058 "pred_table.m"
                      hlds__pred_table__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1058 "pred_table.m"
                      MR_hl_field(MR_mktag(3), hlds__pred_table__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 1058 "pred_table.m"
                      MR_hl_field(MR_mktag(3), hlds__pred_table__V_47_47, 1) = ((MR_Box) (hlds__pred_table__PredCallId_38));
#line 1058 "pred_table.m"
                    }
#line 1059 "pred_table.m"
                    {
#line 1059 "pred_table.m"
                      hlds__pred_table__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1059 "pred_table.m"
                      MR_hl_field(MR_mktag(3), hlds__pred_table__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 1059 "pred_table.m"
                      MR_hl_field(MR_mktag(3), hlds__pred_table__V_52_52, 1) = ((MR_Box) (hlds__pred_table__OtherPredCallId_39));
#line 1059 "pred_table.m"
                    }
#line 1059 "pred_table.m"
                    {
#line 1059 "pred_table.m"
                      hlds__pred_table__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1059 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_51_51, 0) = ((MR_Box) (hlds__pred_table__V_52_52));
#line 1059 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[7])));
#line 1059 "pred_table.m"
                    }
#line 1058 "pred_table.m"
                    {
#line 1058 "pred_table.m"
                      hlds__pred_table__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1058 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_48_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__pred_table_scalar_common_1[13])));
#line 1058 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_48_48, 1) = ((MR_Box) (hlds__pred_table__V_51_51));
#line 1058 "pred_table.m"
                    }
#line 1058 "pred_table.m"
                    {
#line 1058 "pred_table.m"
                      hlds__pred_table__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1058 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_46_46, 0) = ((MR_Box) (hlds__pred_table__V_47_47));
#line 1058 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_46_46, 1) = ((MR_Box) (hlds__pred_table__V_48_48));
#line 1058 "pred_table.m"
                    }
#line 1057 "pred_table.m"
                    {
#line 1057 "pred_table.m"
                      hlds__pred_table__Pieces_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1057 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__Pieces_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__pred_table_scalar_common_1[12])));
#line 1057 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__Pieces_42, 1) = ((MR_Box) (hlds__pred_table__V_46_46));
#line 1057 "pred_table.m"
                    }
#line 1062 "pred_table.m"
                    {
#line 1062 "pred_table.m"
                      parse_tree__error_util__write_error_pieces_6_p_0(hlds__pred_table__Globals_41, hlds__pred_table__Context_19, (MR_Integer) 0, hlds__pred_table__Pieces_42);
                    }
#line 1064 "pred_table.m"
                    {
#line 1064 "pred_table.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.find_matching_pred_id\'/10", (MR_String) "unresolvable predicate overloading");
                    }
#line 1050 "pred_table.m"
                  }
#line 1065 "pred_table.m"
                else
#line 1066 "pred_table.m"
                  *hlds__pred_table__ThePredId_20 = hlds__pred_table__PredId_12;
#line 1042 "pred_table.m"
                hlds__pred_table__succeeded = MR_TRUE;
#line 1042 "pred_table.m"
              }
#line 1068 "pred_table.m"
            else
#line 1069 "pred_table.m"
              {
#line 1069 "pred_table.m"
                /* direct tailcall eliminated */
#line 1069 "pred_table.m"
                {
#line 1069 "pred_table.m"
                  MR_Word hlds__pred_table__HeadVar__2__tmp_copy_2 = hlds__pred_table__PredIds_13;

#line 1069 "pred_table.m"
                  hlds__pred_table__HeadVar__2_2 = hlds__pred_table__HeadVar__2__tmp_copy_2;
#line 1069 "pred_table.m"
                }
#line 1069 "pred_table.m"
                continue;
#line 1069 "pred_table.m"
              }
#line 1012 "pred_table.m"
          }
#line 1014 "pred_table.m"
        return hlds__pred_table__succeeded;
#line 1014 "pred_table.m"
      }
#line 1014 "pred_table.m"
      break;
#line 1014 "pred_table.m"
    }
#line 268 "pred_table.m"
}

#line 258 "pred_table.m"
void MR_CALL 
hlds__pred_table__resolve_pred_overloading_10_p_0(
#line 258 "pred_table.m"
  MR_Word hlds__pred_table__ModuleInfo_11,
#line 258 "pred_table.m"
  MR_Word hlds__pred_table__CallerMarkers_12,
#line 258 "pred_table.m"
  MR_Word hlds__pred_table__TVarSet_13,
#line 258 "pred_table.m"
  MR_Word hlds__pred_table__ExistQTVars_14,
#line 258 "pred_table.m"
  MR_Word hlds__pred_table__ArgTypes_15,
#line 258 "pred_table.m"
  MR_Word hlds__pred_table__HeadTypeParams_16,
#line 258 "pred_table.m"
  MR_Word hlds__pred_table__Context_17,
#line 258 "pred_table.m"
  MR_Word hlds__pred_table__PredName0_18,
#line 258 "pred_table.m"
  MR_Word * hlds__pred_table__PredName_19,
#line 258 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_20)
#line 258 "pred_table.m"
{
#line 988 "pred_table.m"
  {
#line 988 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 988 "pred_table.m"
    MR_Word hlds__pred_table__PredTable_21;
#line 988 "pred_table.m"
    MR_Word hlds__pred_table__IsFullyQualified_22;
#line 988 "pred_table.m"
    MR_Word hlds__pred_table__PredIds_23;
#line 1006 "pred_table.m"
    MR_Word hlds__pred_table__PredId1_24;
#line 1006 "pred_table.m"
    MR_Word hlds__pred_table__PredName1_25;

#line 993 "pred_table.m"
    {
#line 993 "pred_table.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__pred_table__ModuleInfo_11, &hlds__pred_table__PredTable_21);
    }
#line 994 "pred_table.m"
    {
#line 994 "pred_table.m"
      hlds__pred_table__IsFullyQualified_22 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(hlds__pred_table__CallerMarkers_12);
    }
#line 995 "pred_table.m"
    {
#line 995 "pred_table.m"
      hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0(hlds__pred_table__PredTable_21, hlds__pred_table__IsFullyQualified_22, hlds__pred_table__PredName0_18, &hlds__pred_table__PredIds_23);
    }
#line 1001 "pred_table.m"
    {
#line 1001 "pred_table.m"
      hlds__pred_table__succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(hlds__pred_table__ModuleInfo_11, hlds__pred_table__PredIds_23, hlds__pred_table__TVarSet_13, hlds__pred_table__ExistQTVars_14, hlds__pred_table__ArgTypes_15, hlds__pred_table__HeadTypeParams_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__pred_table__Context_17, &hlds__pred_table__PredId1_24, &hlds__pred_table__PredName1_25);
    }
#line 1006 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 1004 "pred_table.m"
      {
#line 1004 "pred_table.m"
        *hlds__pred_table__PredId_20 = hlds__pred_table__PredId1_24;
#line 1005 "pred_table.m"
        *hlds__pred_table__PredName_19 = hlds__pred_table__PredName1_25;
#line 1004 "pred_table.m"
      }
#line 1006 "pred_table.m"
    else
#line 1009 "pred_table.m"
      {
#line 1009 "pred_table.m"
        {
#line 1009 "pred_table.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.resolve_pred_overloading\'/10", (MR_String) "type error in pred call: no matching pred");
#line 1009 "pred_table.m"
          return;
        }
#line 1009 "pred_table.m"
      }
#line 988 "pred_table.m"
  }
#line 258 "pred_table.m"
}

#line 251 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_insert_4_p_0(
#line 251 "pred_table.m"
  MR_Word hlds__pred_table__PredInfo_5,
#line 251 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_6,
#line 251 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8,
#line 251 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_9)
#line 251 "pred_table.m"
{
#line 859 "pred_table.m"
  {
#line 859 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 860 "pred_table.m"
    {
#line 860 "pred_table.m"
      hlds__pred_table__do_predicate_table_insert_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__pred_table__PredInfo_5, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__pred_table__PredId_6, hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, hlds__pred_table__STATE_VARIABLE_PredicateTable_9);
#line 860 "pred_table.m"
      return;
    }
#line 859 "pred_table.m"
  }
#line 251 "pred_table.m"
}

#line 242 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_insert_qual_6_p_0(
#line 242 "pred_table.m"
  MR_Word hlds__pred_table__PredInfo_7,
#line 242 "pred_table.m"
  MR_Word hlds__pred_table__NeedQual_8,
#line 242 "pred_table.m"
  MR_Word hlds__pred_table__QualInfo_9,
#line 242 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_10,
#line 242 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_12,
#line 242 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_13)
#line 242 "pred_table.m"
{
#line 864 "pred_table.m"
  {
#line 864 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 864 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15;

#line 865 "pred_table.m"
    {
#line 865 "pred_table.m"
      hlds__pred_table__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 865 "pred_table.m"
      MR_hl_field(MR_mktag(1), hlds__pred_table__V_15_15, 0) = ((MR_Box) (hlds__pred_table__QualInfo_9));
#line 865 "pred_table.m"
    }
#line 865 "pred_table.m"
    {
#line 865 "pred_table.m"
      hlds__pred_table__do_predicate_table_insert_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__pred_table__PredInfo_7, hlds__pred_table__NeedQual_8, hlds__pred_table__V_15_15, hlds__pred_table__PredId_10, hlds__pred_table__STATE_VARIABLE_PredicateTable_0_12, hlds__pred_table__STATE_VARIABLE_PredicateTable_13);
#line 865 "pred_table.m"
      return;
    }
#line 864 "pred_table.m"
  }
#line 242 "pred_table.m"
}

#line 231 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pf_sym_5_p_0(
#line 231 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_6,
#line 231 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_7,
#line 231 "pred_table.m"
  MR_Word hlds__pred_table__PredOrFunc_8,
#line 231 "pred_table.m"
  MR_Word hlds__pred_table__SymName_9,
#line 231 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_10)
#line 231 "pred_table.m"
{
#line 802 "pred_table.m"
  {
#line 802 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 802 "pred_table.m"
    if ((hlds__pred_table__PredOrFunc_8 == (MR_Integer) 1))
#line 807 "pred_table.m"
      {
#line 807 "pred_table.m"
        hlds__pred_table__predicate_table_lookup_func_sym_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__IsFullyQualified_7, hlds__pred_table__SymName_9, hlds__pred_table__PredIds_10);
#line 807 "pred_table.m"
        return;
      }
#line 802 "pred_table.m"
    else
#line 803 "pred_table.m"
      {
#line 803 "pred_table.m"
        hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__IsFullyQualified_7, hlds__pred_table__SymName_9, hlds__pred_table__PredIds_10);
#line 803 "pred_table.m"
        return;
      }
#line 802 "pred_table.m"
  }
#line 231 "pred_table.m"
}

#line 224 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(
#line 224 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_7,
#line 224 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_8,
#line 224 "pred_table.m"
  MR_Word hlds__pred_table__PredOrFunc_9,
#line 224 "pred_table.m"
  MR_Word hlds__pred_table__SymName_10,
#line 224 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_11,
#line 224 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_12)
#line 224 "pred_table.m"
{
#line 784 "pred_table.m"
  {
#line 784 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 784 "pred_table.m"
    if (((MR_tag((MR_Word) hlds__pred_table__SymName_10)) == (MR_mktag((MR_Integer) 1))))
#line 784 "pred_table.m"
      {
#line 784 "pred_table.m"
        MR_Word hlds__pred_table__Module_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_10, (MR_Integer) 0)));
#line 784 "pred_table.m"
        MR_String hlds__pred_table__Name_14 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_10, (MR_Integer) 1)));

#line 758 "pred_table.m"
        if ((hlds__pred_table__PredOrFunc_9 == (MR_Integer) 1))
#line 762 "pred_table.m"
          {
#line 762 "pred_table.m"
            MR_Integer hlds__pred_table__FuncArity_23 = (hlds__pred_table__Arity_11 - (MR_Integer) 1);

#line 764 "pred_table.m"
            {
#line 764 "pred_table.m"
              hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredicateTable_7, hlds__pred_table__IsFullyQualified_8, hlds__pred_table__Module_13, hlds__pred_table__Name_14, hlds__pred_table__FuncArity_23, hlds__pred_table__PredIds_12);
#line 764 "pred_table.m"
              return;
            }
#line 762 "pred_table.m"
          }
#line 758 "pred_table.m"
        else
#line 759 "pred_table.m"
          {
#line 759 "pred_table.m"
            hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredicateTable_7, hlds__pred_table__IsFullyQualified_8, hlds__pred_table__Module_13, hlds__pred_table__Name_14, hlds__pred_table__Arity_11, hlds__pred_table__PredIds_12);
#line 759 "pred_table.m"
            return;
          }
#line 784 "pred_table.m"
      }
#line 784 "pred_table.m"
    else
#line 788 "pred_table.m"
      {
#line 788 "pred_table.m"
        MR_String hlds__pred_table__Name_15 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_10, (MR_Integer) 0)));

#line 793 "pred_table.m"
        if ((hlds__pred_table__IsFullyQualified_8 == (MR_Integer) 0))
#line 795 "pred_table.m"
          *hlds__pred_table__PredIds_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 793 "pred_table.m"
        else
#line 771 "pred_table.m"
          if ((hlds__pred_table__PredOrFunc_9 == (MR_Integer) 1))
#line 775 "pred_table.m"
            {
#line 775 "pred_table.m"
              MR_Integer hlds__pred_table__FuncArity_30 = (hlds__pred_table__Arity_11 - (MR_Integer) 1);

#line 777 "pred_table.m"
              {
#line 777 "pred_table.m"
                hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(hlds__pred_table__PredicateTable_7, hlds__pred_table__Name_15, hlds__pred_table__FuncArity_30, hlds__pred_table__PredIds_12);
#line 777 "pred_table.m"
                return;
              }
#line 775 "pred_table.m"
            }
#line 771 "pred_table.m"
          else
#line 772 "pred_table.m"
            {
#line 772 "pred_table.m"
              hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(hlds__pred_table__PredicateTable_7, hlds__pred_table__Name_15, hlds__pred_table__Arity_11, hlds__pred_table__PredIds_12);
#line 772 "pred_table.m"
              return;
            }
#line 788 "pred_table.m"
      }
#line 784 "pred_table.m"
  }
#line 224 "pred_table.m"
}

#line 214 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pf_name_arity_5_p_0(
#line 214 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_6,
#line 214 "pred_table.m"
  MR_Word hlds__pred_table__PredOrFunc_7,
#line 214 "pred_table.m"
  MR_String hlds__pred_table__Name_8,
#line 214 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_9,
#line 214 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_10)
#line 214 "pred_table.m"
{
#line 771 "pred_table.m"
  {
#line 771 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 771 "pred_table.m"
    if ((hlds__pred_table__PredOrFunc_7 == (MR_Integer) 1))
#line 775 "pred_table.m"
      {
#line 775 "pred_table.m"
        MR_Integer hlds__pred_table__FuncArity_11 = (hlds__pred_table__Arity_9 - (MR_Integer) 1);

#line 777 "pred_table.m"
        {
#line 777 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__Name_8, hlds__pred_table__FuncArity_11, hlds__pred_table__PredIds_10);
#line 777 "pred_table.m"
          return;
        }
#line 775 "pred_table.m"
      }
#line 771 "pred_table.m"
    else
#line 772 "pred_table.m"
      {
#line 772 "pred_table.m"
        hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__Name_8, hlds__pred_table__Arity_9, hlds__pred_table__PredIds_10);
#line 772 "pred_table.m"
        return;
      }
#line 771 "pred_table.m"
  }
#line 214 "pred_table.m"
}

#line 203 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pf_m_n_a_7_p_0(
#line 203 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_8,
#line 203 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_9,
#line 203 "pred_table.m"
  MR_Word hlds__pred_table__PredOrFunc_10,
#line 203 "pred_table.m"
  MR_Word hlds__pred_table__Module_11,
#line 203 "pred_table.m"
  MR_String hlds__pred_table__Name_12,
#line 203 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_13,
#line 203 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_14)
#line 203 "pred_table.m"
{
#line 758 "pred_table.m"
  {
#line 758 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 758 "pred_table.m"
    if ((hlds__pred_table__PredOrFunc_10 == (MR_Integer) 1))
#line 762 "pred_table.m"
      {
#line 762 "pred_table.m"
        MR_Integer hlds__pred_table__FuncArity_15 = (hlds__pred_table__Arity_13 - (MR_Integer) 1);

#line 764 "pred_table.m"
        {
#line 764 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredicateTable_8, hlds__pred_table__IsFullyQualified_9, hlds__pred_table__Module_11, hlds__pred_table__Name_12, hlds__pred_table__FuncArity_15, hlds__pred_table__PredIds_14);
#line 764 "pred_table.m"
          return;
        }
#line 762 "pred_table.m"
      }
#line 758 "pred_table.m"
    else
#line 759 "pred_table.m"
      {
#line 759 "pred_table.m"
        hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredicateTable_8, hlds__pred_table__IsFullyQualified_9, hlds__pred_table__Module_11, hlds__pred_table__Name_12, hlds__pred_table__Arity_13, hlds__pred_table__PredIds_14);
#line 759 "pred_table.m"
        return;
      }
#line 758 "pred_table.m"
  }
#line 203 "pred_table.m"
}

#line 744 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0_1(
#line 744 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 744 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1)
#line 744 "pred_table.m"
{
#line 744 "pred_table.m"
  {
#line 744 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 744 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;

#line 744 "pred_table.m"
    {
#line 744 "pred_table.m"
      return hlds__pred_table__succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) hlds__pred_table__wrapper_arg_1));
    }
#line 744 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 744 "pred_table.m"
  }
#line 744 "pred_table.m"
}

#line 192 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(
#line 192 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_7,
#line 192 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_8,
#line 192 "pred_table.m"
  MR_Word hlds__pred_table__Module_9,
#line 192 "pred_table.m"
  MR_String hlds__pred_table__FuncName_10,
#line 192 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_11,
#line 192 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredIds_15)
#line 192 "pred_table.m"
{
#line 723 "pred_table.m"
  {
#line 723 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 723 "pred_table.m"
    MR_Word hlds__pred_table__F_MNA_Index_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 9)));
#line 724 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 0)));
#line 724 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 1)));
#line 724 "pred_table.m"
    MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 2)));
#line 724 "pred_table.m"
    MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 3)));
#line 724 "pred_table.m"
    MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 4)));
#line 724 "pred_table.m"
    MR_Word hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 5)));
#line 724 "pred_table.m"
    MR_Word hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 6)));
#line 724 "pred_table.m"
    MR_Word hlds__pred_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 7)));
#line 724 "pred_table.m"
    MR_Word hlds__pred_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 8)));
#line 731 "pred_table.m"
    MR_Word hlds__pred_table__STATE_VARIABLE_PredIds_17_17;
#line 726 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_32_32;
#line 726 "pred_table.m"
    MR_Word hlds__pred_table__ArityIndex_14;
#line 726 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16;
#line 726 "pred_table.m"
    MR_Box hlds__pred_table__conv0_ArityIndex_14;
#line 727 "pred_table.m"
    MR_Box hlds__pred_table__conv1_STATE_VARIABLE_PredIds_17_17;

#line 726 "pred_table.m"
    {
#line 726 "pred_table.m"
      hlds__pred_table__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 726 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_16_16, 0) = ((MR_Box) (hlds__pred_table__Module_9));
#line 726 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_16_16, 1) = ((MR_Box) (hlds__pred_table__FuncName_10));
#line 726 "pred_table.m"
    }
#line 726 "pred_table.m"
    {
#line 726 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__F_MNA_Index_13, ((MR_Box) (hlds__pred_table__V_16_16)), &hlds__pred_table__conv0_ArityIndex_14);
    }
#line 726 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 726 "pred_table.m"
      {
#line 726 "pred_table.m"
        hlds__pred_table__ArityIndex_14 = ((MR_Word) hlds__pred_table__conv0_ArityIndex_14);
#line 726 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 726 "pred_table.m"
      }
#line 726 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 726 "pred_table.m"
      {
#line 6951 "hlds.pred_table.c"
        hlds__pred_table__TypeInfo_32_32 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
#line 727 "pred_table.m"
        {
#line 727 "pred_table.m"
          hlds__pred_table__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__pred_table__TypeInfo_32_32, hlds__pred_table__ArityIndex_14, hlds__pred_table__Arity_11, &hlds__pred_table__conv1_STATE_VARIABLE_PredIds_17_17);
        }
#line 727 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 727 "pred_table.m"
          {
#line 727 "pred_table.m"
            hlds__pred_table__STATE_VARIABLE_PredIds_17_17 = ((MR_Word) hlds__pred_table__conv1_STATE_VARIABLE_PredIds_17_17);
#line 727 "pred_table.m"
            hlds__pred_table__succeeded = MR_TRUE;
#line 727 "pred_table.m"
          }
#line 726 "pred_table.m"
      }
#line 731 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 739 "pred_table.m"
      if ((hlds__pred_table__IsFullyQualified_8 == (MR_Integer) 0))
#line 742 "pred_table.m"
        {
#line 742 "pred_table.m"
          MR_Word hlds__pred_table__Preds_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 0)));
#line 742 "pred_table.m"
          MR_Word hlds__pred_table__V_44_44;
#line 399 "pred_table.m"
          MR_Word hlds__pred_table__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 1)));
#line 399 "pred_table.m"
          MR_Word hlds__pred_table__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 2)));
#line 399 "pred_table.m"
          MR_Word hlds__pred_table__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 3)));
#line 399 "pred_table.m"
          MR_Word hlds__pred_table__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 4)));
#line 399 "pred_table.m"
          MR_Word hlds__pred_table__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 5)));
#line 399 "pred_table.m"
          MR_Word hlds__pred_table__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 6)));
#line 399 "pred_table.m"
          MR_Word hlds__pred_table__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 7)));
#line 399 "pred_table.m"
          MR_Word hlds__pred_table__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 8)));
#line 399 "pred_table.m"
          MR_Word hlds__pred_table__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 9)));

#line 744 "pred_table.m"
          {
#line 744 "pred_table.m"
            hlds__pred_table__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 744 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
#line 744 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0_1));
#line 744 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 744 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 3) = ((MR_Box) (hlds__pred_table__Preds_41));
#line 744 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 4) = ((MR_Box) (hlds__pred_table__Module_9));
#line 744 "pred_table.m"
          }
#line 744 "pred_table.m"
          {
#line 744 "pred_table.m"
            mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__V_44_44, hlds__pred_table__STATE_VARIABLE_PredIds_17_17, hlds__pred_table__STATE_VARIABLE_PredIds_15);
#line 744 "pred_table.m"
            return;
          }
#line 742 "pred_table.m"
        }
#line 739 "pred_table.m"
      else
#line 740 "pred_table.m"
        *hlds__pred_table__STATE_VARIABLE_PredIds_15 = hlds__pred_table__STATE_VARIABLE_PredIds_17_17;
#line 731 "pred_table.m"
    else
#line 732 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_PredIds_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 723 "pred_table.m"
  }
#line 192 "pred_table.m"
}

#line 744 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0_1(
#line 744 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 744 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1)
#line 744 "pred_table.m"
{
#line 744 "pred_table.m"
  {
#line 744 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 744 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;

#line 744 "pred_table.m"
    {
#line 744 "pred_table.m"
      return hlds__pred_table__succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) hlds__pred_table__wrapper_arg_1));
    }
#line 744 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 744 "pred_table.m"
  }
#line 744 "pred_table.m"
}

#line 188 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(
#line 188 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_7,
#line 188 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_8,
#line 188 "pred_table.m"
  MR_Word hlds__pred_table__Module_9,
#line 188 "pred_table.m"
  MR_String hlds__pred_table__PredName_10,
#line 188 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_11,
#line 188 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredIds_15)
#line 188 "pred_table.m"
{
#line 710 "pred_table.m"
  {
#line 710 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 710 "pred_table.m"
    MR_Word hlds__pred_table__P_MNA_Index_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 6)));
#line 711 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 0)));
#line 711 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 1)));
#line 711 "pred_table.m"
    MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 2)));
#line 711 "pred_table.m"
    MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 3)));
#line 711 "pred_table.m"
    MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 4)));
#line 711 "pred_table.m"
    MR_Word hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 5)));
#line 711 "pred_table.m"
    MR_Word hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 7)));
#line 711 "pred_table.m"
    MR_Word hlds__pred_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 8)));
#line 711 "pred_table.m"
    MR_Word hlds__pred_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 9)));
#line 718 "pred_table.m"
    MR_Word hlds__pred_table__STATE_VARIABLE_PredIds_17_17;
#line 713 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_32_32;
#line 713 "pred_table.m"
    MR_Word hlds__pred_table__ArityIndex_14;
#line 713 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16;
#line 713 "pred_table.m"
    MR_Box hlds__pred_table__conv0_ArityIndex_14;
#line 714 "pred_table.m"
    MR_Box hlds__pred_table__conv1_STATE_VARIABLE_PredIds_17_17;

#line 713 "pred_table.m"
    {
#line 713 "pred_table.m"
      hlds__pred_table__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 713 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_16_16, 0) = ((MR_Box) (hlds__pred_table__Module_9));
#line 713 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_16_16, 1) = ((MR_Box) (hlds__pred_table__PredName_10));
#line 713 "pred_table.m"
    }
#line 713 "pred_table.m"
    {
#line 713 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__P_MNA_Index_13, ((MR_Box) (hlds__pred_table__V_16_16)), &hlds__pred_table__conv0_ArityIndex_14);
    }
#line 713 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 713 "pred_table.m"
      {
#line 713 "pred_table.m"
        hlds__pred_table__ArityIndex_14 = ((MR_Word) hlds__pred_table__conv0_ArityIndex_14);
#line 713 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 713 "pred_table.m"
      }
#line 713 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 713 "pred_table.m"
      {
#line 7148 "hlds.pred_table.c"
        hlds__pred_table__TypeInfo_32_32 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
#line 714 "pred_table.m"
        {
#line 714 "pred_table.m"
          hlds__pred_table__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__pred_table__TypeInfo_32_32, hlds__pred_table__ArityIndex_14, hlds__pred_table__Arity_11, &hlds__pred_table__conv1_STATE_VARIABLE_PredIds_17_17);
        }
#line 714 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 714 "pred_table.m"
          {
#line 714 "pred_table.m"
            hlds__pred_table__STATE_VARIABLE_PredIds_17_17 = ((MR_Word) hlds__pred_table__conv1_STATE_VARIABLE_PredIds_17_17);
#line 714 "pred_table.m"
            hlds__pred_table__succeeded = MR_TRUE;
#line 714 "pred_table.m"
          }
#line 713 "pred_table.m"
      }
#line 718 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 739 "pred_table.m"
      if ((hlds__pred_table__IsFullyQualified_8 == (MR_Integer) 0))
#line 742 "pred_table.m"
        {
#line 742 "pred_table.m"
          MR_Word hlds__pred_table__Preds_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 0)));
#line 742 "pred_table.m"
          MR_Word hlds__pred_table__V_44_44;
#line 399 "pred_table.m"
          MR_Word hlds__pred_table__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 1)));
#line 399 "pred_table.m"
          MR_Word hlds__pred_table__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 2)));
#line 399 "pred_table.m"
          MR_Word hlds__pred_table__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 3)));
#line 399 "pred_table.m"
          MR_Word hlds__pred_table__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 4)));
#line 399 "pred_table.m"
          MR_Word hlds__pred_table__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 5)));
#line 399 "pred_table.m"
          MR_Word hlds__pred_table__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 6)));
#line 399 "pred_table.m"
          MR_Word hlds__pred_table__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 7)));
#line 399 "pred_table.m"
          MR_Word hlds__pred_table__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 8)));
#line 399 "pred_table.m"
          MR_Word hlds__pred_table__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 9)));

#line 744 "pred_table.m"
          {
#line 744 "pred_table.m"
            hlds__pred_table__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 744 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
#line 744 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0_1));
#line 744 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 744 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 3) = ((MR_Box) (hlds__pred_table__Preds_41));
#line 744 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 4) = ((MR_Box) (hlds__pred_table__Module_9));
#line 744 "pred_table.m"
          }
#line 744 "pred_table.m"
          {
#line 744 "pred_table.m"
            mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__V_44_44, hlds__pred_table__STATE_VARIABLE_PredIds_17_17, hlds__pred_table__STATE_VARIABLE_PredIds_15);
#line 744 "pred_table.m"
            return;
          }
#line 742 "pred_table.m"
        }
#line 739 "pred_table.m"
      else
#line 740 "pred_table.m"
        *hlds__pred_table__STATE_VARIABLE_PredIds_15 = hlds__pred_table__STATE_VARIABLE_PredIds_17_17;
#line 718 "pred_table.m"
    else
#line 719 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_PredIds_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 710 "pred_table.m"
  }
#line 188 "pred_table.m"
}

#line 184 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_m_n_a_6_p_0(
#line 184 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_7,
#line 184 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_8,
#line 184 "pred_table.m"
  MR_Word hlds__pred_table__Module_9,
#line 184 "pred_table.m"
  MR_String hlds__pred_table__Name_10,
#line 184 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_11,
#line 184 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_12)
#line 184 "pred_table.m"
{
#line 702 "pred_table.m"
  {
#line 702 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 702 "pred_table.m"
    MR_Word hlds__pred_table__PredPredIds_13;
#line 702 "pred_table.m"
    MR_Word hlds__pred_table__FuncPredIds_14;

#line 703 "pred_table.m"
    {
#line 703 "pred_table.m"
      hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredicateTable_7, hlds__pred_table__IsFullyQualified_8, hlds__pred_table__Module_9, hlds__pred_table__Name_10, hlds__pred_table__Arity_11, &hlds__pred_table__PredPredIds_13);
    }
#line 705 "pred_table.m"
    {
#line 705 "pred_table.m"
      hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredicateTable_7, hlds__pred_table__IsFullyQualified_8, hlds__pred_table__Module_9, hlds__pred_table__Name_10, hlds__pred_table__Arity_11, &hlds__pred_table__FuncPredIds_14);
    }
#line 707 "pred_table.m"
    {
#line 707 "pred_table.m"
      *hlds__pred_table__PredIds_12 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__FuncPredIds_14, hlds__pred_table__PredPredIds_13);
    }
#line 702 "pred_table.m"
  }
#line 184 "pred_table.m"
}

#line 160 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(
#line 160 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_5,
#line 160 "pred_table.m"
  MR_String hlds__pred_table__FuncName_6,
#line 160 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_7,
#line 160 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_8)
#line 160 "pred_table.m"
{
#line 691 "pred_table.m"
  {
#line 691 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 691 "pred_table.m"
    MR_Word hlds__pred_table__FuncNameArityIndex_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 692 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 692 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 692 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 692 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 692 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 692 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 692 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 692 "pred_table.m"
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 692 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 695 "pred_table.m"
    MR_Word hlds__pred_table__PredIdsPrime_10;
#line 693 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11;
#line 693 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredIdsPrime_10;

#line 693 "pred_table.m"
    {
#line 693 "pred_table.m"
      hlds__pred_table__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 693 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_11_11, 0) = ((MR_Box) (hlds__pred_table__FuncName_6));
#line 693 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_11_11, 1) = ((MR_Box) (hlds__pred_table__Arity_7));
#line 693 "pred_table.m"
    }
#line 693 "pred_table.m"
    {
#line 693 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__FuncNameArityIndex_9, ((MR_Box) (hlds__pred_table__V_11_11)), &hlds__pred_table__conv0_PredIdsPrime_10);
    }
#line 693 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 693 "pred_table.m"
      {
#line 693 "pred_table.m"
        hlds__pred_table__PredIdsPrime_10 = ((MR_Word) hlds__pred_table__conv0_PredIdsPrime_10);
#line 693 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 693 "pred_table.m"
      }
#line 695 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 694 "pred_table.m"
      *hlds__pred_table__PredIds_8 = hlds__pred_table__PredIdsPrime_10;
#line 695 "pred_table.m"
    else
#line 696 "pred_table.m"
      *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 691 "pred_table.m"
  }
#line 160 "pred_table.m"
}

#line 157 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(
#line 157 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_5,
#line 157 "pred_table.m"
  MR_String hlds__pred_table__PredName_6,
#line 157 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_7,
#line 157 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_8)
#line 157 "pred_table.m"
{
#line 682 "pred_table.m"
  {
#line 682 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 682 "pred_table.m"
    MR_Word hlds__pred_table__PredNameArityIndex_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 683 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 683 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 683 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 683 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 683 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 683 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 683 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 683 "pred_table.m"
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 683 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 686 "pred_table.m"
    MR_Word hlds__pred_table__PredIdsPrime_10;
#line 684 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11;
#line 684 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredIdsPrime_10;

#line 684 "pred_table.m"
    {
#line 684 "pred_table.m"
      hlds__pred_table__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 684 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_11_11, 0) = ((MR_Box) (hlds__pred_table__PredName_6));
#line 684 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_11_11, 1) = ((MR_Box) (hlds__pred_table__Arity_7));
#line 684 "pred_table.m"
    }
#line 684 "pred_table.m"
    {
#line 684 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__PredNameArityIndex_9, ((MR_Box) (hlds__pred_table__V_11_11)), &hlds__pred_table__conv0_PredIdsPrime_10);
    }
#line 684 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 684 "pred_table.m"
      {
#line 684 "pred_table.m"
        hlds__pred_table__PredIdsPrime_10 = ((MR_Word) hlds__pred_table__conv0_PredIdsPrime_10);
#line 684 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 684 "pred_table.m"
      }
#line 686 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 685 "pred_table.m"
      *hlds__pred_table__PredIds_8 = hlds__pred_table__PredIdsPrime_10;
#line 686 "pred_table.m"
    else
#line 687 "pred_table.m"
      *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 682 "pred_table.m"
  }
#line 157 "pred_table.m"
}

#line 154 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_name_arity_4_p_0(
#line 154 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_5,
#line 154 "pred_table.m"
  MR_String hlds__pred_table__Name_6,
#line 154 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_7,
#line 154 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_8)
#line 154 "pred_table.m"
{
#line 674 "pred_table.m"
  {
#line 674 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 674 "pred_table.m"
    MR_Word hlds__pred_table__PredPredIds_9;
#line 674 "pred_table.m"
    MR_Word hlds__pred_table__FuncPredIds_10;

#line 675 "pred_table.m"
    {
#line 675 "pred_table.m"
      hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(hlds__pred_table__PredicateTable_5, hlds__pred_table__Name_6, hlds__pred_table__Arity_7, &hlds__pred_table__PredPredIds_9);
    }
#line 677 "pred_table.m"
    {
#line 677 "pred_table.m"
      hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(hlds__pred_table__PredicateTable_5, hlds__pred_table__Name_6, hlds__pred_table__Arity_7, &hlds__pred_table__FuncPredIds_10);
    }
#line 679 "pred_table.m"
    {
#line 679 "pred_table.m"
      *hlds__pred_table__PredIds_8 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__FuncPredIds_10, hlds__pred_table__PredPredIds_9);
    }
#line 674 "pred_table.m"
  }
#line 154 "pred_table.m"
}

#line 146 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_name_3_p_0(
#line 146 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_4,
#line 146 "pred_table.m"
  MR_String hlds__pred_table__FuncName_5,
#line 146 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_6)
#line 146 "pred_table.m"
{
#line 622 "pred_table.m"
  {
#line 622 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 622 "pred_table.m"
    MR_Word hlds__pred_table__PredIdsPrime_7;
#line 620 "pred_table.m"
    MR_Word hlds__pred_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 7)));
#line 620 "pred_table.m"
    MR_Word hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 0)));
#line 620 "pred_table.m"
    MR_Word hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 1)));
#line 620 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 2)));
#line 620 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 3)));
#line 620 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 4)));
#line 620 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 5)));
#line 620 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 6)));
#line 620 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 8)));
#line 620 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 9)));
#line 620 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredIdsPrime_7;

#line 620 "pred_table.m"
    {
#line 620 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__V_8_8, ((MR_Box) (hlds__pred_table__FuncName_5)), &hlds__pred_table__conv0_PredIdsPrime_7);
    }
#line 620 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 620 "pred_table.m"
      {
#line 620 "pred_table.m"
        hlds__pred_table__PredIdsPrime_7 = ((MR_Word) hlds__pred_table__conv0_PredIdsPrime_7);
#line 620 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 620 "pred_table.m"
      }
#line 622 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 621 "pred_table.m"
      *hlds__pred_table__PredIds_6 = hlds__pred_table__PredIdsPrime_7;
#line 622 "pred_table.m"
    else
#line 623 "pred_table.m"
      *hlds__pred_table__PredIds_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 622 "pred_table.m"
  }
#line 146 "pred_table.m"
}

#line 143 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_name_3_p_0(
#line 143 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_4,
#line 143 "pred_table.m"
  MR_String hlds__pred_table__PredName_5,
#line 143 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_6)
#line 143 "pred_table.m"
{
#line 615 "pred_table.m"
  {
#line 615 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 615 "pred_table.m"
    MR_Word hlds__pred_table__PredIdsPrime_7;
#line 613 "pred_table.m"
    MR_Word hlds__pred_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 4)));
#line 613 "pred_table.m"
    MR_Word hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 0)));
#line 613 "pred_table.m"
    MR_Word hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 1)));
#line 613 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 2)));
#line 613 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 3)));
#line 613 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 5)));
#line 613 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 6)));
#line 613 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 7)));
#line 613 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 8)));
#line 613 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 9)));
#line 613 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredIdsPrime_7;

#line 613 "pred_table.m"
    {
#line 613 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__V_8_8, ((MR_Box) (hlds__pred_table__PredName_5)), &hlds__pred_table__conv0_PredIdsPrime_7);
    }
#line 613 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 613 "pred_table.m"
      {
#line 613 "pred_table.m"
        hlds__pred_table__PredIdsPrime_7 = ((MR_Word) hlds__pred_table__conv0_PredIdsPrime_7);
#line 613 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 613 "pred_table.m"
      }
#line 615 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 614 "pred_table.m"
      *hlds__pred_table__PredIds_6 = hlds__pred_table__PredIdsPrime_7;
#line 615 "pred_table.m"
    else
#line 616 "pred_table.m"
      *hlds__pred_table__PredIds_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 615 "pred_table.m"
  }
#line 143 "pred_table.m"
}

#line 140 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_name_3_p_0(
#line 140 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_4,
#line 140 "pred_table.m"
  MR_String hlds__pred_table__Name_5,
#line 140 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_6)
#line 140 "pred_table.m"
{
#line 607 "pred_table.m"
  {
#line 607 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 607 "pred_table.m"
    MR_Word hlds__pred_table__PredPredIds_7;
#line 607 "pred_table.m"
    MR_Word hlds__pred_table__FuncPredIds_8;
#line 615 "pred_table.m"
    MR_Word hlds__pred_table__PredIdsPrime_13;
#line 613 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 4)));
#line 613 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 0)));
#line 613 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 1)));
#line 613 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 2)));
#line 613 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 3)));
#line 613 "pred_table.m"
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 5)));
#line 613 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 6)));
#line 613 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 7)));
#line 613 "pred_table.m"
    MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 8)));
#line 613 "pred_table.m"
    MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 9)));
#line 613 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredIdsPrime_13;
#line 622 "pred_table.m"
    MR_Word hlds__pred_table__PredIdsPrime_29;
#line 620 "pred_table.m"
    MR_Word hlds__pred_table__V_30_30;
#line 620 "pred_table.m"
    MR_Word hlds__pred_table__V_31_31;
#line 620 "pred_table.m"
    MR_Word hlds__pred_table__V_32_32;
#line 620 "pred_table.m"
    MR_Word hlds__pred_table__V_33_33;
#line 620 "pred_table.m"
    MR_Word hlds__pred_table__V_34_34;
#line 620 "pred_table.m"
    MR_Word hlds__pred_table__V_35_35;
#line 620 "pred_table.m"
    MR_Word hlds__pred_table__V_36_36;
#line 620 "pred_table.m"
    MR_Word hlds__pred_table__V_37_37;
#line 620 "pred_table.m"
    MR_Word hlds__pred_table__V_38_38;
#line 620 "pred_table.m"
    MR_Word hlds__pred_table__V_39_39;
#line 620 "pred_table.m"
    MR_Box hlds__pred_table__conv1_PredIdsPrime_29;

#line 613 "pred_table.m"
    {
#line 613 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__V_14_14, ((MR_Box) (hlds__pred_table__Name_5)), &hlds__pred_table__conv0_PredIdsPrime_13);
    }
#line 613 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 613 "pred_table.m"
      {
#line 613 "pred_table.m"
        hlds__pred_table__PredIdsPrime_13 = ((MR_Word) hlds__pred_table__conv0_PredIdsPrime_13);
#line 613 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 613 "pred_table.m"
      }
#line 615 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 614 "pred_table.m"
      hlds__pred_table__PredPredIds_7 = hlds__pred_table__PredIdsPrime_13;
#line 615 "pred_table.m"
    else
#line 616 "pred_table.m"
      hlds__pred_table__PredPredIds_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 620 "pred_table.m"
    hlds__pred_table__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 0)));
#line 620 "pred_table.m"
    hlds__pred_table__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 1)));
#line 620 "pred_table.m"
    hlds__pred_table__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 2)));
#line 620 "pred_table.m"
    hlds__pred_table__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 3)));
#line 620 "pred_table.m"
    hlds__pred_table__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 4)));
#line 620 "pred_table.m"
    hlds__pred_table__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 5)));
#line 620 "pred_table.m"
    hlds__pred_table__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 6)));
#line 620 "pred_table.m"
    hlds__pred_table__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 7)));
#line 620 "pred_table.m"
    hlds__pred_table__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 8)));
#line 620 "pred_table.m"
    hlds__pred_table__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 9)));
#line 620 "pred_table.m"
    {
#line 620 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__V_30_30, ((MR_Box) (hlds__pred_table__Name_5)), &hlds__pred_table__conv1_PredIdsPrime_29);
    }
#line 620 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 620 "pred_table.m"
      {
#line 620 "pred_table.m"
        hlds__pred_table__PredIdsPrime_29 = ((MR_Word) hlds__pred_table__conv1_PredIdsPrime_29);
#line 620 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 620 "pred_table.m"
      }
#line 622 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 621 "pred_table.m"
      hlds__pred_table__FuncPredIds_8 = hlds__pred_table__PredIdsPrime_29;
#line 622 "pred_table.m"
    else
#line 623 "pred_table.m"
      hlds__pred_table__FuncPredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 610 "pred_table.m"
    {
#line 610 "pred_table.m"
      *hlds__pred_table__PredIds_6 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__FuncPredIds_8, hlds__pred_table__PredPredIds_7);
    }
#line 607 "pred_table.m"
  }
#line 140 "pred_table.m"
}

#line 133 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(
#line 133 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_6,
#line 133 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_7,
#line 133 "pred_table.m"
  MR_Word hlds__pred_table__SymName_8,
#line 133 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_9,
#line 133 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_10)
#line 133 "pred_table.m"
{
#line 590 "pred_table.m"
  {
#line 590 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 590 "pred_table.m"
    if (((MR_tag((MR_Word) hlds__pred_table__SymName_8)) == (MR_mktag((MR_Integer) 1))))
#line 600 "pred_table.m"
      {
#line 600 "pred_table.m"
        MR_Word hlds__pred_table__Module_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_8, (MR_Integer) 0)));
#line 600 "pred_table.m"
        MR_String hlds__pred_table__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_8, (MR_Integer) 1)));

#line 601 "pred_table.m"
        {
#line 601 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__IsFullyQualified_7, hlds__pred_table__Module_12, hlds__pred_table__Name_13, hlds__pred_table__Arity_9, hlds__pred_table__PredIds_10);
#line 601 "pred_table.m"
          return;
        }
#line 600 "pred_table.m"
      }
#line 590 "pred_table.m"
    else
#line 590 "pred_table.m"
      {
#line 590 "pred_table.m"
        MR_String hlds__pred_table__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_8, (MR_Integer) 0)));

#line 595 "pred_table.m"
        if ((hlds__pred_table__IsFullyQualified_7 == (MR_Integer) 0))
#line 597 "pred_table.m"
          *hlds__pred_table__PredIds_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 595 "pred_table.m"
        else
#line 593 "pred_table.m"
          {
#line 593 "pred_table.m"
            hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__Name_11, hlds__pred_table__Arity_9, hlds__pred_table__PredIds_10);
#line 593 "pred_table.m"
            return;
          }
#line 590 "pred_table.m"
      }
#line 590 "pred_table.m"
  }
#line 133 "pred_table.m"
}

#line 129 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_sym_arity_5_p_0(
#line 129 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_6,
#line 129 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_7,
#line 129 "pred_table.m"
  MR_Word hlds__pred_table__SymName_8,
#line 129 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_9,
#line 129 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_10)
#line 129 "pred_table.m"
{
#line 572 "pred_table.m"
  {
#line 572 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 572 "pred_table.m"
    if (((MR_tag((MR_Word) hlds__pred_table__SymName_8)) == (MR_mktag((MR_Integer) 1))))
#line 582 "pred_table.m"
      {
#line 582 "pred_table.m"
        MR_Word hlds__pred_table__Module_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_8, (MR_Integer) 0)));
#line 582 "pred_table.m"
        MR_String hlds__pred_table__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_8, (MR_Integer) 1)));

#line 583 "pred_table.m"
        {
#line 583 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__IsFullyQualified_7, hlds__pred_table__Module_12, hlds__pred_table__Name_13, hlds__pred_table__Arity_9, hlds__pred_table__PredIds_10);
#line 583 "pred_table.m"
          return;
        }
#line 582 "pred_table.m"
      }
#line 572 "pred_table.m"
    else
#line 572 "pred_table.m"
      {
#line 572 "pred_table.m"
        MR_String hlds__pred_table__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_8, (MR_Integer) 0)));

#line 577 "pred_table.m"
        if ((hlds__pred_table__IsFullyQualified_7 == (MR_Integer) 0))
#line 579 "pred_table.m"
          *hlds__pred_table__PredIds_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 577 "pred_table.m"
        else
#line 575 "pred_table.m"
          {
#line 575 "pred_table.m"
            hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__Name_11, hlds__pred_table__Arity_9, hlds__pred_table__PredIds_10);
#line 575 "pred_table.m"
            return;
          }
#line 572 "pred_table.m"
      }
#line 572 "pred_table.m"
  }
#line 129 "pred_table.m"
}

#line 125 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(
#line 125 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_6,
#line 125 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_7,
#line 125 "pred_table.m"
  MR_Word hlds__pred_table__SymName_8,
#line 125 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_9,
#line 125 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_10)
#line 125 "pred_table.m"
{
#line 554 "pred_table.m"
  {
#line 554 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 554 "pred_table.m"
    if (((MR_tag((MR_Word) hlds__pred_table__SymName_8)) == (MR_mktag((MR_Integer) 1))))
#line 564 "pred_table.m"
      {
#line 564 "pred_table.m"
        MR_Word hlds__pred_table__Module_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_8, (MR_Integer) 0)));
#line 564 "pred_table.m"
        MR_String hlds__pred_table__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_8, (MR_Integer) 1)));
#line 564 "pred_table.m"
        MR_Word hlds__pred_table__PredPredIds_20;
#line 564 "pred_table.m"
        MR_Word hlds__pred_table__FuncPredIds_21;

#line 703 "pred_table.m"
        {
#line 703 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__IsFullyQualified_7, hlds__pred_table__Module_12, hlds__pred_table__Name_13, hlds__pred_table__Arity_9, &hlds__pred_table__PredPredIds_20);
        }
#line 705 "pred_table.m"
        {
#line 705 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__IsFullyQualified_7, hlds__pred_table__Module_12, hlds__pred_table__Name_13, hlds__pred_table__Arity_9, &hlds__pred_table__FuncPredIds_21);
        }
#line 707 "pred_table.m"
        {
#line 707 "pred_table.m"
          *hlds__pred_table__PredIds_10 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__FuncPredIds_21, hlds__pred_table__PredPredIds_20);
        }
#line 564 "pred_table.m"
      }
#line 554 "pred_table.m"
    else
#line 554 "pred_table.m"
      {
#line 554 "pred_table.m"
        MR_String hlds__pred_table__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_8, (MR_Integer) 0)));

#line 559 "pred_table.m"
        if ((hlds__pred_table__IsFullyQualified_7 == (MR_Integer) 0))
#line 561 "pred_table.m"
          *hlds__pred_table__PredIds_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 559 "pred_table.m"
        else
#line 674 "pred_table.m"
          {
#line 674 "pred_table.m"
            MR_Word hlds__pred_table__PredPredIds_27;
#line 674 "pred_table.m"
            MR_Word hlds__pred_table__FuncPredIds_28;

#line 675 "pred_table.m"
            {
#line 675 "pred_table.m"
              hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__Name_11, hlds__pred_table__Arity_9, &hlds__pred_table__PredPredIds_27);
            }
#line 677 "pred_table.m"
            {
#line 677 "pred_table.m"
              hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__Name_11, hlds__pred_table__Arity_9, &hlds__pred_table__FuncPredIds_28);
            }
#line 679 "pred_table.m"
            {
#line 679 "pred_table.m"
              *hlds__pred_table__PredIds_10 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__FuncPredIds_28, hlds__pred_table__PredPredIds_27);
            }
#line 674 "pred_table.m"
          }
#line 554 "pred_table.m"
      }
#line 554 "pred_table.m"
  }
#line 125 "pred_table.m"
}

#line 744 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_sym_4_p_0_1(
#line 744 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 744 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1)
#line 744 "pred_table.m"
{
#line 744 "pred_table.m"
  {
#line 744 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 744 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;

#line 744 "pred_table.m"
    {
#line 744 "pred_table.m"
      return hlds__pred_table__succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) hlds__pred_table__wrapper_arg_1));
    }
#line 744 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 744 "pred_table.m"
  }
#line 744 "pred_table.m"
}

#line 118 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_sym_4_p_0(
#line 118 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_5,
#line 118 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_6,
#line 118 "pred_table.m"
  MR_Word hlds__pred_table__SymName_7,
#line 118 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_8)
#line 118 "pred_table.m"
{
#line 535 "pred_table.m"
  {
#line 535 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 535 "pred_table.m"
    if (((MR_tag((MR_Word) hlds__pred_table__SymName_7)) == (MR_mktag((MR_Integer) 1))))
#line 544 "pred_table.m"
      {
#line 544 "pred_table.m"
        MR_Word hlds__pred_table__Module_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_7, (MR_Integer) 0)));
#line 544 "pred_table.m"
        MR_String hlds__pred_table__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_7, (MR_Integer) 1)));
#line 544 "pred_table.m"
        MR_Word hlds__pred_table__Func_MNA_Index_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 662 "pred_table.m"
        MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 662 "pred_table.m"
        MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 662 "pred_table.m"
        MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 662 "pred_table.m"
        MR_Word hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 662 "pred_table.m"
        MR_Word hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 662 "pred_table.m"
        MR_Word hlds__pred_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 662 "pred_table.m"
        MR_Word hlds__pred_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 662 "pred_table.m"
        MR_Word hlds__pred_table__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 662 "pred_table.m"
        MR_Word hlds__pred_table__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 668 "pred_table.m"
        MR_Word hlds__pred_table__Arities_18;
#line 663 "pred_table.m"
        MR_Word hlds__pred_table__V_21_21;
#line 663 "pred_table.m"
        MR_Box hlds__pred_table__conv0_Arities_18;

#line 663 "pred_table.m"
        {
#line 663 "pred_table.m"
          hlds__pred_table__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 663 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_21_21, 0) = ((MR_Box) (hlds__pred_table__Module_10));
#line 663 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_21_21, 1) = ((MR_Box) (hlds__pred_table__Name_11));
#line 663 "pred_table.m"
        }
#line 663 "pred_table.m"
        {
#line 663 "pred_table.m"
          hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__Func_MNA_Index_17, ((MR_Box) (hlds__pred_table__V_21_21)), &hlds__pred_table__conv0_Arities_18);
        }
#line 663 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 663 "pred_table.m"
          {
#line 663 "pred_table.m"
            hlds__pred_table__Arities_18 = ((MR_Word) hlds__pred_table__conv0_Arities_18);
#line 663 "pred_table.m"
            hlds__pred_table__succeeded = MR_TRUE;
#line 663 "pred_table.m"
          }
#line 668 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 664 "pred_table.m"
          {
#line 664 "pred_table.m"
            MR_Word hlds__pred_table__PredIdLists_19;
#line 664 "pred_table.m"
            MR_Word hlds__pred_table__PredIds0_20;

#line 664 "pred_table.m"
            {
#line 664 "pred_table.m"
              mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__Arities_18, &hlds__pred_table__PredIdLists_19);
            }
#line 665 "pred_table.m"
            {
#line 665 "pred_table.m"
              mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__PredIdLists_19, &hlds__pred_table__PredIds0_20);
            }
#line 739 "pred_table.m"
            if ((hlds__pred_table__IsFullyQualified_6 == (MR_Integer) 0))
#line 742 "pred_table.m"
              {
#line 742 "pred_table.m"
                MR_Word hlds__pred_table__Preds_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 742 "pred_table.m"
                MR_Word hlds__pred_table__V_47_47;
#line 399 "pred_table.m"
                MR_Word hlds__pred_table__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 399 "pred_table.m"
                MR_Word hlds__pred_table__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 399 "pred_table.m"
                MR_Word hlds__pred_table__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 399 "pred_table.m"
                MR_Word hlds__pred_table__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 399 "pred_table.m"
                MR_Word hlds__pred_table__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 399 "pred_table.m"
                MR_Word hlds__pred_table__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 399 "pred_table.m"
                MR_Word hlds__pred_table__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 399 "pred_table.m"
                MR_Word hlds__pred_table__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 399 "pred_table.m"
                MR_Word hlds__pred_table__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));

#line 744 "pred_table.m"
                {
#line 744 "pred_table.m"
                  hlds__pred_table__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 744 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
#line 744 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_func_sym_4_p_0_1));
#line 744 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 744 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 3) = ((MR_Box) (hlds__pred_table__Preds_44));
#line 744 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 4) = ((MR_Box) (hlds__pred_table__Module_10));
#line 744 "pred_table.m"
                }
#line 744 "pred_table.m"
                {
#line 744 "pred_table.m"
                  mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__V_47_47, hlds__pred_table__PredIds0_20, hlds__pred_table__PredIds_8);
#line 744 "pred_table.m"
                  return;
                }
#line 742 "pred_table.m"
              }
#line 739 "pred_table.m"
            else
#line 740 "pred_table.m"
              *hlds__pred_table__PredIds_8 = hlds__pred_table__PredIds0_20;
#line 664 "pred_table.m"
          }
#line 668 "pred_table.m"
        else
#line 669 "pred_table.m"
          *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 544 "pred_table.m"
      }
#line 535 "pred_table.m"
    else
#line 535 "pred_table.m"
      {
#line 535 "pred_table.m"
        MR_String hlds__pred_table__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_7, (MR_Integer) 0)));

#line 539 "pred_table.m"
        if ((hlds__pred_table__IsFullyQualified_6 == (MR_Integer) 0))
#line 541 "pred_table.m"
          *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 539 "pred_table.m"
        else
#line 622 "pred_table.m"
          {
#line 622 "pred_table.m"
            MR_Word hlds__pred_table__PredIdsPrime_64;
#line 620 "pred_table.m"
            MR_Word hlds__pred_table__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 620 "pred_table.m"
            MR_Word hlds__pred_table__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 620 "pred_table.m"
            MR_Word hlds__pred_table__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 620 "pred_table.m"
            MR_Word hlds__pred_table__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 620 "pred_table.m"
            MR_Word hlds__pred_table__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 620 "pred_table.m"
            MR_Word hlds__pred_table__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 620 "pred_table.m"
            MR_Word hlds__pred_table__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 620 "pred_table.m"
            MR_Word hlds__pred_table__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 620 "pred_table.m"
            MR_Word hlds__pred_table__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 620 "pred_table.m"
            MR_Word hlds__pred_table__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 620 "pred_table.m"
            MR_Box hlds__pred_table__conv1_PredIdsPrime_64;

#line 620 "pred_table.m"
            {
#line 620 "pred_table.m"
              hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__V_65_65, ((MR_Box) (hlds__pred_table__Name_9)), &hlds__pred_table__conv1_PredIdsPrime_64);
            }
#line 620 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 620 "pred_table.m"
              {
#line 620 "pred_table.m"
                hlds__pred_table__PredIdsPrime_64 = ((MR_Word) hlds__pred_table__conv1_PredIdsPrime_64);
#line 620 "pred_table.m"
                hlds__pred_table__succeeded = MR_TRUE;
#line 620 "pred_table.m"
              }
#line 622 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 621 "pred_table.m"
              *hlds__pred_table__PredIds_8 = hlds__pred_table__PredIdsPrime_64;
#line 622 "pred_table.m"
            else
#line 623 "pred_table.m"
              *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 622 "pred_table.m"
          }
#line 535 "pred_table.m"
      }
#line 535 "pred_table.m"
  }
#line 118 "pred_table.m"
}

#line 744 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0_1(
#line 744 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 744 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1)
#line 744 "pred_table.m"
{
#line 744 "pred_table.m"
  {
#line 744 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 744 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;

#line 744 "pred_table.m"
    {
#line 744 "pred_table.m"
      return hlds__pred_table__succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) hlds__pred_table__wrapper_arg_1));
    }
#line 744 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 744 "pred_table.m"
  }
#line 744 "pred_table.m"
}

#line 115 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0(
#line 115 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_5,
#line 115 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_6,
#line 115 "pred_table.m"
  MR_Word hlds__pred_table__SymName_7,
#line 115 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_8)
#line 115 "pred_table.m"
{
#line 518 "pred_table.m"
  {
#line 518 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 518 "pred_table.m"
    if (((MR_tag((MR_Word) hlds__pred_table__SymName_7)) == (MR_mktag((MR_Integer) 1))))
#line 527 "pred_table.m"
      {
#line 527 "pred_table.m"
        MR_Word hlds__pred_table__Module_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_7, (MR_Integer) 0)));
#line 527 "pred_table.m"
        MR_String hlds__pred_table__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_7, (MR_Integer) 1)));
#line 527 "pred_table.m"
        MR_Word hlds__pred_table__Pred_MNA_Index_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 646 "pred_table.m"
        MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 646 "pred_table.m"
        MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 646 "pred_table.m"
        MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 646 "pred_table.m"
        MR_Word hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 646 "pred_table.m"
        MR_Word hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 646 "pred_table.m"
        MR_Word hlds__pred_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 646 "pred_table.m"
        MR_Word hlds__pred_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 646 "pred_table.m"
        MR_Word hlds__pred_table__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 646 "pred_table.m"
        MR_Word hlds__pred_table__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 652 "pred_table.m"
        MR_Word hlds__pred_table__Arities_18;
#line 647 "pred_table.m"
        MR_Word hlds__pred_table__V_21_21;
#line 647 "pred_table.m"
        MR_Box hlds__pred_table__conv0_Arities_18;

#line 647 "pred_table.m"
        {
#line 647 "pred_table.m"
          hlds__pred_table__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 647 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_21_21, 0) = ((MR_Box) (hlds__pred_table__Module_10));
#line 647 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_21_21, 1) = ((MR_Box) (hlds__pred_table__Name_11));
#line 647 "pred_table.m"
        }
#line 647 "pred_table.m"
        {
#line 647 "pred_table.m"
          hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__Pred_MNA_Index_17, ((MR_Box) (hlds__pred_table__V_21_21)), &hlds__pred_table__conv0_Arities_18);
        }
#line 647 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 647 "pred_table.m"
          {
#line 647 "pred_table.m"
            hlds__pred_table__Arities_18 = ((MR_Word) hlds__pred_table__conv0_Arities_18);
#line 647 "pred_table.m"
            hlds__pred_table__succeeded = MR_TRUE;
#line 647 "pred_table.m"
          }
#line 652 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 648 "pred_table.m"
          {
#line 648 "pred_table.m"
            MR_Word hlds__pred_table__PredIdLists_19;
#line 648 "pred_table.m"
            MR_Word hlds__pred_table__PredIds0_20;

#line 648 "pred_table.m"
            {
#line 648 "pred_table.m"
              mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__Arities_18, &hlds__pred_table__PredIdLists_19);
            }
#line 649 "pred_table.m"
            {
#line 649 "pred_table.m"
              mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__PredIdLists_19, &hlds__pred_table__PredIds0_20);
            }
#line 739 "pred_table.m"
            if ((hlds__pred_table__IsFullyQualified_6 == (MR_Integer) 0))
#line 742 "pred_table.m"
              {
#line 742 "pred_table.m"
                MR_Word hlds__pred_table__Preds_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 742 "pred_table.m"
                MR_Word hlds__pred_table__V_47_47;
#line 399 "pred_table.m"
                MR_Word hlds__pred_table__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 399 "pred_table.m"
                MR_Word hlds__pred_table__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 399 "pred_table.m"
                MR_Word hlds__pred_table__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 399 "pred_table.m"
                MR_Word hlds__pred_table__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 399 "pred_table.m"
                MR_Word hlds__pred_table__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 399 "pred_table.m"
                MR_Word hlds__pred_table__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 399 "pred_table.m"
                MR_Word hlds__pred_table__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 399 "pred_table.m"
                MR_Word hlds__pred_table__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 399 "pred_table.m"
                MR_Word hlds__pred_table__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));

#line 744 "pred_table.m"
                {
#line 744 "pred_table.m"
                  hlds__pred_table__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 744 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
#line 744 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0_1));
#line 744 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 744 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 3) = ((MR_Box) (hlds__pred_table__Preds_44));
#line 744 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 4) = ((MR_Box) (hlds__pred_table__Module_10));
#line 744 "pred_table.m"
                }
#line 744 "pred_table.m"
                {
#line 744 "pred_table.m"
                  mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__V_47_47, hlds__pred_table__PredIds0_20, hlds__pred_table__PredIds_8);
#line 744 "pred_table.m"
                  return;
                }
#line 742 "pred_table.m"
              }
#line 739 "pred_table.m"
            else
#line 740 "pred_table.m"
              *hlds__pred_table__PredIds_8 = hlds__pred_table__PredIds0_20;
#line 648 "pred_table.m"
          }
#line 652 "pred_table.m"
        else
#line 653 "pred_table.m"
          *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 527 "pred_table.m"
      }
#line 518 "pred_table.m"
    else
#line 518 "pred_table.m"
      {
#line 518 "pred_table.m"
        MR_String hlds__pred_table__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_7, (MR_Integer) 0)));

#line 522 "pred_table.m"
        if ((hlds__pred_table__IsFullyQualified_6 == (MR_Integer) 0))
#line 524 "pred_table.m"
          *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 522 "pred_table.m"
        else
#line 615 "pred_table.m"
          {
#line 615 "pred_table.m"
            MR_Word hlds__pred_table__PredIdsPrime_64;
#line 613 "pred_table.m"
            MR_Word hlds__pred_table__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 613 "pred_table.m"
            MR_Word hlds__pred_table__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 613 "pred_table.m"
            MR_Word hlds__pred_table__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 613 "pred_table.m"
            MR_Word hlds__pred_table__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 613 "pred_table.m"
            MR_Word hlds__pred_table__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 613 "pred_table.m"
            MR_Word hlds__pred_table__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 613 "pred_table.m"
            MR_Word hlds__pred_table__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 613 "pred_table.m"
            MR_Word hlds__pred_table__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 613 "pred_table.m"
            MR_Word hlds__pred_table__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 613 "pred_table.m"
            MR_Word hlds__pred_table__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 613 "pred_table.m"
            MR_Box hlds__pred_table__conv1_PredIdsPrime_64;

#line 613 "pred_table.m"
            {
#line 613 "pred_table.m"
              hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__V_65_65, ((MR_Box) (hlds__pred_table__Name_9)), &hlds__pred_table__conv1_PredIdsPrime_64);
            }
#line 613 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 613 "pred_table.m"
              {
#line 613 "pred_table.m"
                hlds__pred_table__PredIdsPrime_64 = ((MR_Word) hlds__pred_table__conv1_PredIdsPrime_64);
#line 613 "pred_table.m"
                hlds__pred_table__succeeded = MR_TRUE;
#line 613 "pred_table.m"
              }
#line 615 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 614 "pred_table.m"
              *hlds__pred_table__PredIds_8 = hlds__pred_table__PredIdsPrime_64;
#line 615 "pred_table.m"
            else
#line 616 "pred_table.m"
              *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 615 "pred_table.m"
          }
#line 518 "pred_table.m"
      }
#line 518 "pred_table.m"
  }
#line 115 "pred_table.m"
}

#line 744 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_sym_4_p_0_1(
#line 744 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 744 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1)
#line 744 "pred_table.m"
{
#line 744 "pred_table.m"
  {
#line 744 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 744 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;

#line 744 "pred_table.m"
    {
#line 744 "pred_table.m"
      return hlds__pred_table__succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) hlds__pred_table__wrapper_arg_1));
    }
#line 744 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 744 "pred_table.m"
  }
#line 744 "pred_table.m"
}

#line 112 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_sym_4_p_0(
#line 112 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_5,
#line 112 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_6,
#line 112 "pred_table.m"
  MR_Word hlds__pred_table__SymName_7,
#line 112 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_8)
#line 112 "pred_table.m"
{
#line 501 "pred_table.m"
  {
#line 501 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 501 "pred_table.m"
    if (((MR_tag((MR_Word) hlds__pred_table__SymName_7)) == (MR_mktag((MR_Integer) 1))))
#line 510 "pred_table.m"
      {
#line 510 "pred_table.m"
        MR_Word hlds__pred_table__Module_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_7, (MR_Integer) 0)));
#line 510 "pred_table.m"
        MR_String hlds__pred_table__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_7, (MR_Integer) 1)));
#line 510 "pred_table.m"
        MR_Word hlds__pred_table__PredPredIds_17;
#line 510 "pred_table.m"
        MR_Word hlds__pred_table__FuncPredIds_18;
#line 510 "pred_table.m"
        MR_Word hlds__pred_table__Pred_MNA_Index_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 646 "pred_table.m"
        MR_Word hlds__pred_table__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 646 "pred_table.m"
        MR_Word hlds__pred_table__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 646 "pred_table.m"
        MR_Word hlds__pred_table__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 646 "pred_table.m"
        MR_Word hlds__pred_table__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 646 "pred_table.m"
        MR_Word hlds__pred_table__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 646 "pred_table.m"
        MR_Word hlds__pred_table__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 646 "pred_table.m"
        MR_Word hlds__pred_table__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 646 "pred_table.m"
        MR_Word hlds__pred_table__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 646 "pred_table.m"
        MR_Word hlds__pred_table__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 652 "pred_table.m"
        MR_Word hlds__pred_table__Arities_26;
#line 647 "pred_table.m"
        MR_Word hlds__pred_table__V_29_29;
#line 647 "pred_table.m"
        MR_Box hlds__pred_table__conv0_Arities_26;

#line 647 "pred_table.m"
        {
#line 647 "pred_table.m"
          hlds__pred_table__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 647 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_29_29, 0) = ((MR_Box) (hlds__pred_table__Module_10));
#line 647 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_29_29, 1) = ((MR_Box) (hlds__pred_table__Name_11));
#line 647 "pred_table.m"
        }
#line 647 "pred_table.m"
        {
#line 647 "pred_table.m"
          hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__Pred_MNA_Index_25, ((MR_Box) (hlds__pred_table__V_29_29)), &hlds__pred_table__conv0_Arities_26);
        }
#line 647 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 647 "pred_table.m"
          {
#line 647 "pred_table.m"
            hlds__pred_table__Arities_26 = ((MR_Word) hlds__pred_table__conv0_Arities_26);
#line 647 "pred_table.m"
            hlds__pred_table__succeeded = MR_TRUE;
#line 647 "pred_table.m"
          }
#line 652 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 648 "pred_table.m"
          {
#line 648 "pred_table.m"
            MR_Word hlds__pred_table__PredIdLists_27;
#line 648 "pred_table.m"
            MR_Word hlds__pred_table__PredIds0_28;

#line 648 "pred_table.m"
            {
#line 648 "pred_table.m"
              mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__Arities_26, &hlds__pred_table__PredIdLists_27);
            }
#line 649 "pred_table.m"
            {
#line 649 "pred_table.m"
              mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__PredIdLists_27, &hlds__pred_table__PredIds0_28);
            }
#line 739 "pred_table.m"
            if ((hlds__pred_table__IsFullyQualified_6 == (MR_Integer) 0))
#line 742 "pred_table.m"
              {
#line 742 "pred_table.m"
                MR_Word hlds__pred_table__Preds_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 742 "pred_table.m"
                MR_Word hlds__pred_table__V_55_55;
#line 399 "pred_table.m"
                MR_Word hlds__pred_table__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 399 "pred_table.m"
                MR_Word hlds__pred_table__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 399 "pred_table.m"
                MR_Word hlds__pred_table__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 399 "pred_table.m"
                MR_Word hlds__pred_table__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 399 "pred_table.m"
                MR_Word hlds__pred_table__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 399 "pred_table.m"
                MR_Word hlds__pred_table__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 399 "pred_table.m"
                MR_Word hlds__pred_table__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 399 "pred_table.m"
                MR_Word hlds__pred_table__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 399 "pred_table.m"
                MR_Word hlds__pred_table__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));

#line 744 "pred_table.m"
                {
#line 744 "pred_table.m"
                  hlds__pred_table__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 744 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_55_55, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
#line 744 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_55_55, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_sym_4_p_0_1));
#line 744 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 744 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_55_55, 3) = ((MR_Box) (hlds__pred_table__Preds_52));
#line 744 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_55_55, 4) = ((MR_Box) (hlds__pred_table__Module_10));
#line 744 "pred_table.m"
                }
#line 744 "pred_table.m"
                {
#line 744 "pred_table.m"
                  mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__V_55_55, hlds__pred_table__PredIds0_28, &hlds__pred_table__PredPredIds_17);
                }
#line 742 "pred_table.m"
              }
#line 739 "pred_table.m"
            else
#line 740 "pred_table.m"
              hlds__pred_table__PredPredIds_17 = hlds__pred_table__PredIds0_28;
#line 648 "pred_table.m"
          }
#line 652 "pred_table.m"
        else
#line 653 "pred_table.m"
          hlds__pred_table__PredPredIds_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 636 "pred_table.m"
        {
#line 636 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0(hlds__pred_table__PredicateTable_5, hlds__pred_table__IsFullyQualified_6, hlds__pred_table__Module_10, hlds__pred_table__Name_11, &hlds__pred_table__FuncPredIds_18);
        }
#line 638 "pred_table.m"
        {
#line 638 "pred_table.m"
          *hlds__pred_table__PredIds_8 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__FuncPredIds_18, hlds__pred_table__PredPredIds_17);
        }
#line 510 "pred_table.m"
      }
#line 501 "pred_table.m"
    else
#line 501 "pred_table.m"
      {
#line 501 "pred_table.m"
        MR_String hlds__pred_table__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_7, (MR_Integer) 0)));

#line 505 "pred_table.m"
        if ((hlds__pred_table__IsFullyQualified_6 == (MR_Integer) 0))
#line 507 "pred_table.m"
          *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 505 "pred_table.m"
        else
#line 504 "pred_table.m"
          {
#line 504 "pred_table.m"
            hlds__pred_table__predicate_table_lookup_name_3_p_0(hlds__pred_table__PredicateTable_5, hlds__pred_table__Name_9, hlds__pred_table__PredIds_8);
#line 504 "pred_table.m"
            return;
          }
#line 501 "pred_table.m"
      }
#line 501 "pred_table.m"
  }
#line 112 "pred_table.m"
}

#line 106 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_remove_predicate_3_p_0(
#line 106 "pred_table.m"
  MR_Word hlds__pred_table__PredId_4,
#line 106 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable0_5,
#line 106 "pred_table.m"
  MR_Word * hlds__pred_table__PredicateTable_6)
#line 106 "pred_table.m"
{
#line 417 "pred_table.m"
  {
#line 417 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 417 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_34_34 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 417 "pred_table.m"
    MR_Word hlds__pred_table__Preds0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 0)));
#line 417 "pred_table.m"
    MR_Word hlds__pred_table__NextPredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 1)));
#line 417 "pred_table.m"
    MR_Word hlds__pred_table__ValidPredIds0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 2)));
#line 417 "pred_table.m"
    MR_Word hlds__pred_table__AccessibilityTable0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 3)));
#line 417 "pred_table.m"
    MR_Word hlds__pred_table__PredN0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 4)));
#line 417 "pred_table.m"
    MR_Word hlds__pred_table__PredNA0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 5)));
#line 417 "pred_table.m"
    MR_Word hlds__pred_table__PredMNA0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 6)));
#line 417 "pred_table.m"
    MR_Word hlds__pred_table__FuncN0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 7)));
#line 417 "pred_table.m"
    MR_Word hlds__pred_table__FuncNA0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 8)));
#line 417 "pred_table.m"
    MR_Word hlds__pred_table__FuncMNA0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 9)));
#line 417 "pred_table.m"
    MR_Word hlds__pred_table__ValidPredIds_17;
#line 417 "pred_table.m"
    MR_Word hlds__pred_table__PredInfo_18;
#line 417 "pred_table.m"
    MR_Word hlds__pred_table__Preds_19;
#line 417 "pred_table.m"
    MR_Word hlds__pred_table__AccessibilityTable_21;
#line 417 "pred_table.m"
    MR_Word hlds__pred_table__Module_22;
#line 417 "pred_table.m"
    MR_String hlds__pred_table__Name_23;
#line 417 "pred_table.m"
    MR_Integer hlds__pred_table__Arity_24;
#line 417 "pred_table.m"
    MR_Word hlds__pred_table__IsPredOrFunc_25;
#line 422 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredInfo_18;
#line 423 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20;
#line 423 "pred_table.m"
    MR_Box hlds__pred_table__conv1_V_20_20;

#line 421 "pred_table.m"
    {
#line 421 "pred_table.m"
      mercury__set_tree234__delete_3_p_0(hlds__pred_table__TypeCtorInfo_34_34, ((MR_Box) (hlds__pred_table__PredId_4)), hlds__pred_table__ValidPredIds0_9, &hlds__pred_table__ValidPredIds_17);
    }
#line 422 "pred_table.m"
    {
#line 422 "pred_table.m"
      mercury__map__det_remove_4_p_0(hlds__pred_table__TypeCtorInfo_34_34, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ((MR_Box) (hlds__pred_table__PredId_4)), &hlds__pred_table__conv0_PredInfo_18, hlds__pred_table__Preds0_7, &hlds__pred_table__Preds_19);
    }
#line 422 "pred_table.m"
    hlds__pred_table__PredInfo_18 = ((MR_Word) hlds__pred_table__conv0_PredInfo_18);
#line 423 "pred_table.m"
    {
#line 423 "pred_table.m"
      mercury__map__det_remove_4_p_0(hlds__pred_table__TypeCtorInfo_34_34, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0, ((MR_Box) (hlds__pred_table__PredId_4)), &hlds__pred_table__conv1_V_20_20, hlds__pred_table__AccessibilityTable0_10, &hlds__pred_table__AccessibilityTable_21);
    }
#line 423 "pred_table.m"
    hlds__pred_table__V_20_20 = ((MR_Word) hlds__pred_table__conv1_V_20_20);
#line 424 "pred_table.m"
    {
#line 424 "pred_table.m"
      hlds__pred_table__Module_22 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__pred_table__PredInfo_18);
    }
#line 425 "pred_table.m"
    {
#line 425 "pred_table.m"
      hlds__pred_table__Name_23 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__pred_table__PredInfo_18);
    }
#line 426 "pred_table.m"
    {
#line 426 "pred_table.m"
      hlds__pred_table__Arity_24 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__pred_table__PredInfo_18);
    }
#line 427 "pred_table.m"
    {
#line 427 "pred_table.m"
      hlds__pred_table__IsPredOrFunc_25 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__pred_table__PredInfo_18);
    }
#line 435 "pred_table.m"
    if ((hlds__pred_table__IsPredOrFunc_25 == (MR_Integer) 1))
#line 436 "pred_table.m"
      {
#line 436 "pred_table.m"
        MR_Integer hlds__pred_table__FuncArity_29 = (hlds__pred_table__Arity_24 - (MR_Integer) 1);
#line 436 "pred_table.m"
        MR_Word hlds__pred_table__FuncN_30;
#line 436 "pred_table.m"
        MR_Word hlds__pred_table__FuncNA_31;
#line 436 "pred_table.m"
        MR_Word hlds__pred_table__FuncMNA_32;

#line 438 "pred_table.m"
        {
#line 438 "pred_table.m"
          hlds__pred_table__predicate_table_remove_from_index_10_p_0(hlds__pred_table__Module_22, hlds__pred_table__Name_23, hlds__pred_table__FuncArity_29, hlds__pred_table__PredId_4, hlds__pred_table__FuncN0_14, &hlds__pred_table__FuncN_30, hlds__pred_table__FuncNA0_15, &hlds__pred_table__FuncNA_31, hlds__pred_table__FuncMNA0_16, &hlds__pred_table__FuncMNA_32);
        }
#line 441 "pred_table.m"
        {
#line 441 "pred_table.m"
          MR_Word base;
#line 441 "pred_table.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 441 "pred_table.m"
          *hlds__pred_table__PredicateTable_6 = base;
#line 441 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__Preds_19));
#line 441 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__NextPredId_8));
#line 441 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__ValidPredIds_17));
#line 441 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__AccessibilityTable_21));
#line 441 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__PredN0_11));
#line 441 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__PredNA0_12));
#line 441 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__PredMNA0_13));
#line 441 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__FuncN_30));
#line 441 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__FuncNA_31));
#line 441 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__FuncMNA_32));
#line 441 "pred_table.m"
        }
#line 436 "pred_table.m"
      }
#line 435 "pred_table.m"
    else
#line 429 "pred_table.m"
      {
#line 429 "pred_table.m"
        MR_Word hlds__pred_table__PredN_26;
#line 429 "pred_table.m"
        MR_Word hlds__pred_table__PredNA_27;
#line 429 "pred_table.m"
        MR_Word hlds__pred_table__PredMNA_28;

#line 430 "pred_table.m"
        {
#line 430 "pred_table.m"
          hlds__pred_table__predicate_table_remove_from_index_10_p_0(hlds__pred_table__Module_22, hlds__pred_table__Name_23, hlds__pred_table__Arity_24, hlds__pred_table__PredId_4, hlds__pred_table__PredN0_11, &hlds__pred_table__PredN_26, hlds__pred_table__PredNA0_12, &hlds__pred_table__PredNA_27, hlds__pred_table__PredMNA0_13, &hlds__pred_table__PredMNA_28);
        }
#line 432 "pred_table.m"
        {
#line 432 "pred_table.m"
          MR_Word base;
#line 432 "pred_table.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 432 "pred_table.m"
          *hlds__pred_table__PredicateTable_6 = base;
#line 432 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__Preds_19));
#line 432 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__NextPredId_8));
#line 432 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__ValidPredIds_17));
#line 432 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__AccessibilityTable_21));
#line 432 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__PredN_26));
#line 432 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__PredNA_27));
#line 432 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__PredMNA_28));
#line 432 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__FuncN0_14));
#line 432 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__FuncNA0_15));
#line 432 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__FuncMNA0_16));
#line 432 "pred_table.m"
        }
#line 429 "pred_table.m"
      }
#line 417 "pred_table.m"
  }
#line 106 "pred_table.m"
}

#line 103 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_make_pred_ids_invalid_3_p_0(
#line 103 "pred_table.m"
  MR_Word hlds__pred_table__InvalidPredIds_4,
#line 103 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8,
#line 103 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_9)
#line 103 "pred_table.m"
{
#line 412 "pred_table.m"
  {
#line 412 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 412 "pred_table.m"
    MR_Word hlds__pred_table__ValidPredIds0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 2)));
#line 412 "pred_table.m"
    MR_Word hlds__pred_table__ValidPredIds_7;
#line 413 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 0)));
#line 413 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 1)));
#line 413 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 3)));
#line 413 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 4)));
#line 413 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 5)));
#line 413 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 6)));
#line 413 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 7)));
#line 413 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 8)));
#line 413 "pred_table.m"
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 9)));
#line 415 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20;
#line 415 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21;
#line 415 "pred_table.m"
    MR_Word hlds__pred_table__V_23_23;
#line 415 "pred_table.m"
    MR_Word hlds__pred_table__V_24_24;
#line 415 "pred_table.m"
    MR_Word hlds__pred_table__V_25_25;
#line 415 "pred_table.m"
    MR_Word hlds__pred_table__V_26_26;
#line 415 "pred_table.m"
    MR_Word hlds__pred_table__V_27_27;
#line 415 "pred_table.m"
    MR_Word hlds__pred_table__V_28_28;
#line 415 "pred_table.m"
    MR_Word hlds__pred_table__V_29_29;
#line 415 "pred_table.m"
    MR_Word hlds__pred_table__V_22_22;

#line 414 "pred_table.m"
    {
#line 414 "pred_table.m"
      mercury__set_tree234__delete_list_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__InvalidPredIds_4, hlds__pred_table__ValidPredIds0_6, &hlds__pred_table__ValidPredIds_7);
    }
#line 415 "pred_table.m"
    hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 0)));
#line 415 "pred_table.m"
    hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 1)));
#line 415 "pred_table.m"
    hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 2)));
#line 415 "pred_table.m"
    hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 3)));
#line 415 "pred_table.m"
    hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 4)));
#line 415 "pred_table.m"
    hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 5)));
#line 415 "pred_table.m"
    hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 6)));
#line 415 "pred_table.m"
    hlds__pred_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 7)));
#line 415 "pred_table.m"
    hlds__pred_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 8)));
#line 415 "pred_table.m"
    hlds__pred_table__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 9)));
#line 415 "pred_table.m"
    {
#line 415 "pred_table.m"
      MR_Word base;
#line 415 "pred_table.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 415 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_PredicateTable_9 = base;
#line 415 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__V_20_20));
#line 415 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__V_21_21));
#line 415 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__ValidPredIds_7));
#line 415 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__V_23_23));
#line 415 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__V_24_24));
#line 415 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__V_25_25));
#line 415 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__V_26_26));
#line 415 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__V_27_27));
#line 415 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__V_28_28));
#line 415 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__V_29_29));
#line 415 "pred_table.m"
    }
#line 412 "pred_table.m"
  }
#line 103 "pred_table.m"
}

#line 101 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_make_pred_id_invalid_3_p_0(
#line 101 "pred_table.m"
  MR_Word hlds__pred_table__InvalidPredId_4,
#line 101 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8,
#line 101 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_9)
#line 101 "pred_table.m"
{
#line 407 "pred_table.m"
  {
#line 407 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 407 "pred_table.m"
    MR_Word hlds__pred_table__ValidPredIds0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 2)));
#line 407 "pred_table.m"
    MR_Word hlds__pred_table__ValidPredIds_7;
#line 408 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 0)));
#line 408 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 1)));
#line 408 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 3)));
#line 408 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 4)));
#line 408 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 5)));
#line 408 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 6)));
#line 408 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 7)));
#line 408 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 8)));
#line 408 "pred_table.m"
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 9)));
#line 410 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20;
#line 410 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21;
#line 410 "pred_table.m"
    MR_Word hlds__pred_table__V_23_23;
#line 410 "pred_table.m"
    MR_Word hlds__pred_table__V_24_24;
#line 410 "pred_table.m"
    MR_Word hlds__pred_table__V_25_25;
#line 410 "pred_table.m"
    MR_Word hlds__pred_table__V_26_26;
#line 410 "pred_table.m"
    MR_Word hlds__pred_table__V_27_27;
#line 410 "pred_table.m"
    MR_Word hlds__pred_table__V_28_28;
#line 410 "pred_table.m"
    MR_Word hlds__pred_table__V_29_29;
#line 410 "pred_table.m"
    MR_Word hlds__pred_table__V_22_22;

#line 409 "pred_table.m"
    {
#line 409 "pred_table.m"
      mercury__set_tree234__delete_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (hlds__pred_table__InvalidPredId_4)), hlds__pred_table__ValidPredIds0_6, &hlds__pred_table__ValidPredIds_7);
    }
#line 410 "pred_table.m"
    hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 0)));
#line 410 "pred_table.m"
    hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 1)));
#line 410 "pred_table.m"
    hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 2)));
#line 410 "pred_table.m"
    hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 3)));
#line 410 "pred_table.m"
    hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 4)));
#line 410 "pred_table.m"
    hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 5)));
#line 410 "pred_table.m"
    hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 6)));
#line 410 "pred_table.m"
    hlds__pred_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 7)));
#line 410 "pred_table.m"
    hlds__pred_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 8)));
#line 410 "pred_table.m"
    hlds__pred_table__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 9)));
#line 410 "pred_table.m"
    {
#line 410 "pred_table.m"
      MR_Word base;
#line 410 "pred_table.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 410 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_PredicateTable_9 = base;
#line 410 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__V_20_20));
#line 410 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__V_21_21));
#line 410 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__ValidPredIds_7));
#line 410 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__V_23_23));
#line 410 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__V_24_24));
#line 410 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__V_25_25));
#line 410 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__V_26_26));
#line 410 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__V_27_27));
#line 410 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__V_28_28));
#line 410 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__V_29_29));
#line 410 "pred_table.m"
    }
#line 407 "pred_table.m"
  }
#line 101 "pred_table.m"
}

#line 96 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_get_valid_pred_id_set_2_p_0(
#line 96 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_3,
#line 96 "pred_table.m"
  MR_Word * hlds__pred_table__ValidPredIds_4)
#line 96 "pred_table.m"
{
#line 405 "pred_table.m"
  {
#line 405 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 405 "pred_table.m"
    MR_Word hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 0)));
#line 405 "pred_table.m"
    MR_Word hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 1)));
#line 405 "pred_table.m"
    MR_Word hlds__pred_table__V_7_7;
#line 405 "pred_table.m"
    MR_Word hlds__pred_table__V_8_8;
#line 405 "pred_table.m"
    MR_Word hlds__pred_table__V_9_9;
#line 405 "pred_table.m"
    MR_Word hlds__pred_table__V_10_10;
#line 405 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11;
#line 405 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12;
#line 405 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13;

#line 405 "pred_table.m"
    *hlds__pred_table__ValidPredIds_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 2)));
#line 405 "pred_table.m"
    hlds__pred_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 3)));
#line 405 "pred_table.m"
    hlds__pred_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 4)));
#line 405 "pred_table.m"
    hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 5)));
#line 405 "pred_table.m"
    hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 6)));
#line 405 "pred_table.m"
    hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 7)));
#line 405 "pred_table.m"
    hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 8)));
#line 405 "pred_table.m"
    hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 9)));
#line 405 "pred_table.m"
  }
#line 96 "pred_table.m"
}

#line 88 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_set_preds_3_p_0(
#line 88 "pred_table.m"
  MR_Word hlds__pred_table__Preds_4,
#line 88 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6,
#line 88 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_7)
#line 88 "pred_table.m"
{
#line 402 "pred_table.m"
  {
#line 402 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 402 "pred_table.m"
    MR_Word hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 1)));
#line 402 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 2)));
#line 402 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 3)));
#line 402 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 4)));
#line 402 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 5)));
#line 402 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 6)));
#line 402 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 7)));
#line 402 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 8)));
#line 402 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 9)));
#line 402 "pred_table.m"
    MR_Word hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 0)));

#line 402 "pred_table.m"
    {
#line 402 "pred_table.m"
      MR_Word base;
#line 402 "pred_table.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 402 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_PredicateTable_7 = base;
#line 402 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__Preds_4));
#line 402 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__V_10_10));
#line 402 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__V_11_11));
#line 402 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__V_12_12));
#line 402 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__V_13_13));
#line 402 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__V_14_14));
#line 402 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__V_15_15));
#line 402 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__V_16_16));
#line 402 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__V_17_17));
#line 402 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__V_18_18));
#line 402 "pred_table.m"
    }
#line 402 "pred_table.m"
  }
#line 88 "pred_table.m"
}

#line 819 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_restrict_4_p_0_1(
#line 819 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 819 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 819 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 819 "pred_table.m"
  MR_Box * hlds__pred_table__wrapper_arg_3)
#line 819 "pred_table.m"
{
#line 819 "pred_table.m"
  {
#line 819 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;
#line 819 "pred_table.m"
    MR_Word hlds__pred_table__conv0_STATE_VARIABLE_PredicateTable_20;

#line 819 "pred_table.m"
    {
#line 819 "pred_table.m"
      hlds__pred_table__reinsert_for_restrict_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 5))), ((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2), &hlds__pred_table__conv0_STATE_VARIABLE_PredicateTable_20);
    }
#line 819 "pred_table.m"
    *hlds__pred_table__wrapper_arg_3 = ((MR_Box) (hlds__pred_table__conv0_STATE_VARIABLE_PredicateTable_20));
#line 819 "pred_table.m"
  }
#line 819 "pred_table.m"
}

#line 80 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_restrict_4_p_0(
#line 80 "pred_table.m"
  MR_Word hlds__pred_table__PartialQualInfo_5,
#line 80 "pred_table.m"
  MR_Word hlds__pred_table__PredIds_6,
#line 80 "pred_table.m"
  MR_Word hlds__pred_table__OrigPredicateTable_7,
#line 80 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_11)
#line 80 "pred_table.m"
{
#line 814 "pred_table.m"
  {
#line 814 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 814 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_24_50 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 814 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_27_53;
#line 814 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_28_54;
#line 814 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_29_55;
#line 814 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_30_56;
#line 814 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_31_57;
#line 814 "pred_table.m"
    MR_Word hlds__pred_table__Preds_9;
#line 814 "pred_table.m"
    MR_Word hlds__pred_table__AccessibilityTable_10;
#line 814 "pred_table.m"
    MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12;
#line 814 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13;
#line 814 "pred_table.m"
    MR_Word hlds__pred_table__NextPredId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 1)));
#line 814 "pred_table.m"
    MR_Word hlds__pred_table__V_32_32;
#line 814 "pred_table.m"
    MR_Word hlds__pred_table__V_33_33;
#line 814 "pred_table.m"
    MR_Word hlds__pred_table__V_34_34;
#line 814 "pred_table.m"
    MR_Word hlds__pred_table__V_35_35;
#line 814 "pred_table.m"
    MR_Word hlds__pred_table__V_36_36;
#line 814 "pred_table.m"
    MR_Word hlds__pred_table__V_37_37;
#line 814 "pred_table.m"
    MR_Word hlds__pred_table__V_38_38;
#line 814 "pred_table.m"
    MR_Word hlds__pred_table__V_39_39;
#line 814 "pred_table.m"
    MR_Word hlds__pred_table__V_40_40;
#line 852 "pred_table.m"
    MR_Word hlds__pred_table__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 0)));
#line 852 "pred_table.m"
    MR_Word hlds__pred_table__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 2)));
#line 852 "pred_table.m"
    MR_Word hlds__pred_table__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 3)));
#line 852 "pred_table.m"
    MR_Word hlds__pred_table__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 4)));
#line 852 "pred_table.m"
    MR_Word hlds__pred_table__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 5)));
#line 852 "pred_table.m"
    MR_Word hlds__pred_table__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 6)));
#line 852 "pred_table.m"
    MR_Word hlds__pred_table__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 7)));
#line 852 "pred_table.m"
    MR_Word hlds__pred_table__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 8)));
#line 852 "pred_table.m"
    MR_Word hlds__pred_table__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 9)));
#line 399 "pred_table.m"
    MR_Word hlds__pred_table__V_59_59;
#line 399 "pred_table.m"
    MR_Word hlds__pred_table__V_60_60;
#line 399 "pred_table.m"
    MR_Word hlds__pred_table__V_62_62;
#line 399 "pred_table.m"
    MR_Word hlds__pred_table__V_63_63;
#line 399 "pred_table.m"
    MR_Word hlds__pred_table__V_64_64;
#line 399 "pred_table.m"
    MR_Word hlds__pred_table__V_65_65;
#line 399 "pred_table.m"
    MR_Word hlds__pred_table__V_66_66;
#line 399 "pred_table.m"
    MR_Word hlds__pred_table__V_67_67;
#line 818 "pred_table.m"
    MR_Box hlds__pred_table__conv1_STATE_VARIABLE_PredicateTable_11;

#line 853 "pred_table.m"
    {
#line 853 "pred_table.m"
      hlds__pred_table__V_32_32 = mercury__map__init_0_f_0(hlds__pred_table__TypeCtorInfo_24_50, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0);
    }
#line 854 "pred_table.m"
    {
#line 854 "pred_table.m"
      hlds__pred_table__V_33_33 = mercury__set_tree234__init_0_f_0(hlds__pred_table__TypeCtorInfo_24_50);
    }
#line 854 "pred_table.m"
    {
#line 854 "pred_table.m"
      hlds__pred_table__V_34_34 = mercury__map__init_0_f_0(hlds__pred_table__TypeCtorInfo_24_50, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0);
    }
#line 9443 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_27_53 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 9445 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_28_54 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
#line 855 "pred_table.m"
    {
#line 855 "pred_table.m"
      hlds__pred_table__V_35_35 = mercury__map__init_0_f_0(hlds__pred_table__TypeCtorInfo_27_53, hlds__pred_table__TypeInfo_28_54);
    }
#line 9452 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_29_55 = (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0;
#line 855 "pred_table.m"
    {
#line 855 "pred_table.m"
      hlds__pred_table__V_36_36 = mercury__map__init_0_f_0(hlds__pred_table__TypeCtorInfo_29_55, hlds__pred_table__TypeInfo_28_54);
    }
#line 9459 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_30_56 = (MR_Word) &hlds__pred_table_scalar_common_2[0];
#line 9461 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_31_57 = (MR_Word) &hlds__pred_table_scalar_common_2[1];
#line 855 "pred_table.m"
    {
#line 855 "pred_table.m"
      hlds__pred_table__V_37_37 = mercury__map__init_0_f_0(hlds__pred_table__TypeInfo_30_56, hlds__pred_table__TypeInfo_31_57);
    }
#line 855 "pred_table.m"
    {
#line 855 "pred_table.m"
      hlds__pred_table__V_38_38 = mercury__map__init_0_f_0(hlds__pred_table__TypeCtorInfo_27_53, hlds__pred_table__TypeInfo_28_54);
    }
#line 855 "pred_table.m"
    {
#line 855 "pred_table.m"
      hlds__pred_table__V_39_39 = mercury__map__init_0_f_0(hlds__pred_table__TypeCtorInfo_29_55, hlds__pred_table__TypeInfo_28_54);
    }
#line 855 "pred_table.m"
    {
#line 855 "pred_table.m"
      hlds__pred_table__V_40_40 = mercury__map__init_0_f_0(hlds__pred_table__TypeInfo_30_56, hlds__pred_table__TypeInfo_31_57);
    }
#line 853 "pred_table.m"
    {
#line 853 "pred_table.m"
      hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 853 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 0) = ((MR_Box) (hlds__pred_table__V_32_32));
#line 853 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 1) = ((MR_Box) (hlds__pred_table__NextPredId_31));
#line 853 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 2) = ((MR_Box) (hlds__pred_table__V_33_33));
#line 853 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 3) = ((MR_Box) (hlds__pred_table__V_34_34));
#line 853 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 4) = ((MR_Box) (hlds__pred_table__V_35_35));
#line 853 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 5) = ((MR_Box) (hlds__pred_table__V_36_36));
#line 853 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 6) = ((MR_Box) (hlds__pred_table__V_37_37));
#line 853 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 7) = ((MR_Box) (hlds__pred_table__V_38_38));
#line 853 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 8) = ((MR_Box) (hlds__pred_table__V_39_39));
#line 853 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 9) = ((MR_Box) (hlds__pred_table__V_40_40));
#line 853 "pred_table.m"
    }
#line 399 "pred_table.m"
    hlds__pred_table__Preds_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 0)));
#line 399 "pred_table.m"
    hlds__pred_table__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 1)));
#line 399 "pred_table.m"
    hlds__pred_table__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 2)));
#line 399 "pred_table.m"
    hlds__pred_table__AccessibilityTable_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 3)));
#line 399 "pred_table.m"
    hlds__pred_table__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 4)));
#line 399 "pred_table.m"
    hlds__pred_table__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 5)));
#line 399 "pred_table.m"
    hlds__pred_table__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 6)));
#line 399 "pred_table.m"
    hlds__pred_table__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 7)));
#line 399 "pred_table.m"
    hlds__pred_table__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 8)));
#line 399 "pred_table.m"
    hlds__pred_table__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 9)));
#line 819 "pred_table.m"
    {
#line 819 "pred_table.m"
      hlds__pred_table__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 819 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_13_13, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_4[0]));
#line 819 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_13_13, 1) = ((MR_Box) (hlds__pred_table__predicate_table_restrict_4_p_0_1));
#line 819 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 819 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_13_13, 3) = ((MR_Box) (hlds__pred_table__PartialQualInfo_5));
#line 819 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_13_13, 4) = ((MR_Box) (hlds__pred_table__Preds_9));
#line 819 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_13_13, 5) = ((MR_Box) (hlds__pred_table__AccessibilityTable_10));
#line 819 "pred_table.m"
    }
#line 818 "pred_table.m"
    {
#line 818 "pred_table.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_predicate_table_0, hlds__pred_table__V_13_13, hlds__pred_table__PredIds_6, ((MR_Box) (hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12)), &hlds__pred_table__conv1_STATE_VARIABLE_PredicateTable_11);
    }
#line 818 "pred_table.m"
    *hlds__pred_table__STATE_VARIABLE_PredicateTable_11 = ((MR_Word) hlds__pred_table__conv1_STATE_VARIABLE_PredicateTable_11);
#line 814 "pred_table.m"
  }
#line 80 "pred_table.m"
}

#line 73 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_get_preds_2_p_0(
#line 73 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_3,
#line 73 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__2_2)
#line 73 "pred_table.m"
{
#line 399 "pred_table.m"
  {
#line 399 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 399 "pred_table.m"
    MR_Word hlds__pred_table__V_4_4;
#line 399 "pred_table.m"
    MR_Word hlds__pred_table__V_5_5;
#line 399 "pred_table.m"
    MR_Word hlds__pred_table__V_6_6;
#line 399 "pred_table.m"
    MR_Word hlds__pred_table__V_7_7;
#line 399 "pred_table.m"
    MR_Word hlds__pred_table__V_8_8;
#line 399 "pred_table.m"
    MR_Word hlds__pred_table__V_9_9;
#line 399 "pred_table.m"
    MR_Word hlds__pred_table__V_10_10;
#line 399 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11;
#line 399 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12;

#line 399 "pred_table.m"
    *hlds__pred_table__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 0)));
#line 399 "pred_table.m"
    hlds__pred_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 1)));
#line 399 "pred_table.m"
    hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 2)));
#line 399 "pred_table.m"
    hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 3)));
#line 399 "pred_table.m"
    hlds__pred_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 4)));
#line 399 "pred_table.m"
    hlds__pred_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 5)));
#line 399 "pred_table.m"
    hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 6)));
#line 399 "pred_table.m"
    hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 7)));
#line 399 "pred_table.m"
    hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 8)));
#line 399 "pred_table.m"
    hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 9)));
#line 399 "pred_table.m"
  }
#line 73 "pred_table.m"
}

#line 68 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_optimize_2_p_0(
#line 68 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable0_3,
#line 68 "pred_table.m"
  MR_Word * hlds__pred_table__PredicateTable_4)
#line 68 "pred_table.m"
{
#line 383 "pred_table.m"
  {
#line 383 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 383 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 383 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_22_22 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
#line 383 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_23_23;
#line 383 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_24_24;
#line 383 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_25_25;
#line 383 "pred_table.m"
    MR_Word hlds__pred_table__Preds_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 0)));
#line 383 "pred_table.m"
    MR_Word hlds__pred_table__NextPredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 1)));
#line 383 "pred_table.m"
    MR_Word hlds__pred_table__ValidPredIds_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 2)));
#line 383 "pred_table.m"
    MR_Word hlds__pred_table__AccessibilityTable_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 3)));
#line 383 "pred_table.m"
    MR_Word hlds__pred_table__Pred_N_Index0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 4)));
#line 383 "pred_table.m"
    MR_Word hlds__pred_table__Pred_NA_Index0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 5)));
#line 383 "pred_table.m"
    MR_Word hlds__pred_table__Pred_MNA_Index0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 6)));
#line 383 "pred_table.m"
    MR_Word hlds__pred_table__Func_N_Index0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 7)));
#line 383 "pred_table.m"
    MR_Word hlds__pred_table__Func_NA_Index0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 8)));
#line 383 "pred_table.m"
    MR_Word hlds__pred_table__Func_MNA_Index0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 9)));
#line 383 "pred_table.m"
    MR_Word hlds__pred_table__Pred_N_Index_15;
#line 383 "pred_table.m"
    MR_Word hlds__pred_table__Pred_NA_Index_16;
#line 383 "pred_table.m"
    MR_Word hlds__pred_table__Pred_MNA_Index_17;
#line 383 "pred_table.m"
    MR_Word hlds__pred_table__Func_N_Index_18;
#line 383 "pred_table.m"
    MR_Word hlds__pred_table__Func_NA_Index_19;
#line 383 "pred_table.m"
    MR_Word hlds__pred_table__Func_MNA_Index_20;

#line 388 "pred_table.m"
    {
#line 388 "pred_table.m"
      mercury__map__optimize_2_p_0(hlds__pred_table__TypeCtorInfo_21_21, hlds__pred_table__TypeInfo_22_22, hlds__pred_table__Pred_N_Index0_9, &hlds__pred_table__Pred_N_Index_15);
    }
#line 9677 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_23_23 = (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0;
#line 389 "pred_table.m"
    {
#line 389 "pred_table.m"
      mercury__map__optimize_2_p_0(hlds__pred_table__TypeCtorInfo_23_23, hlds__pred_table__TypeInfo_22_22, hlds__pred_table__Pred_NA_Index0_10, &hlds__pred_table__Pred_NA_Index_16);
    }
#line 9684 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_24_24 = (MR_Word) &hlds__pred_table_scalar_common_2[0];
#line 9686 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_25_25 = (MR_Word) &hlds__pred_table_scalar_common_2[1];
#line 390 "pred_table.m"
    {
#line 390 "pred_table.m"
      mercury__map__optimize_2_p_0(hlds__pred_table__TypeInfo_24_24, hlds__pred_table__TypeInfo_25_25, hlds__pred_table__Pred_MNA_Index0_11, &hlds__pred_table__Pred_MNA_Index_17);
    }
#line 391 "pred_table.m"
    {
#line 391 "pred_table.m"
      mercury__map__optimize_2_p_0(hlds__pred_table__TypeCtorInfo_21_21, hlds__pred_table__TypeInfo_22_22, hlds__pred_table__Func_N_Index0_12, &hlds__pred_table__Func_N_Index_18);
    }
#line 392 "pred_table.m"
    {
#line 392 "pred_table.m"
      mercury__map__optimize_2_p_0(hlds__pred_table__TypeCtorInfo_23_23, hlds__pred_table__TypeInfo_22_22, hlds__pred_table__Func_NA_Index0_13, &hlds__pred_table__Func_NA_Index_19);
    }
#line 393 "pred_table.m"
    {
#line 393 "pred_table.m"
      mercury__map__optimize_2_p_0(hlds__pred_table__TypeInfo_24_24, hlds__pred_table__TypeInfo_25_25, hlds__pred_table__Func_MNA_Index0_14, &hlds__pred_table__Func_MNA_Index_20);
    }
#line 394 "pred_table.m"
    {
#line 394 "pred_table.m"
      MR_Word base;
#line 394 "pred_table.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 394 "pred_table.m"
      *hlds__pred_table__PredicateTable_4 = base;
#line 394 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__Preds_5));
#line 394 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__NextPredId_6));
#line 394 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__ValidPredIds_7));
#line 394 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__AccessibilityTable_8));
#line 394 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__Pred_N_Index_15));
#line 394 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__Pred_NA_Index_16));
#line 394 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__Pred_MNA_Index_17));
#line 394 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__Func_N_Index_18));
#line 394 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__Func_NA_Index_19));
#line 394 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__Func_MNA_Index_20));
#line 394 "pred_table.m"
    }
#line 383 "pred_table.m"
  }
#line 68 "pred_table.m"
}

#line 64 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_init_1_p_0(
#line 64 "pred_table.m"
  MR_Word * hlds__pred_table__PredicateTable_2)
#line 64 "pred_table.m"
{
#line 367 "pred_table.m"
  {
#line 367 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 367 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_13_13 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 367 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_16_16;
#line 367 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_17_17;
#line 367 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_18_18;
#line 367 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_19_19;
#line 367 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_20_20;
#line 367 "pred_table.m"
    MR_Word hlds__pred_table__Preds_3;
#line 367 "pred_table.m"
    MR_Word hlds__pred_table__NextPredId_4;
#line 367 "pred_table.m"
    MR_Word hlds__pred_table__ValidPredIds_5;
#line 367 "pred_table.m"
    MR_Word hlds__pred_table__AccessibilityTable_6;
#line 367 "pred_table.m"
    MR_Word hlds__pred_table__Pred_N_Index_7;
#line 367 "pred_table.m"
    MR_Word hlds__pred_table__Pred_NA_Index_8;
#line 367 "pred_table.m"
    MR_Word hlds__pred_table__Pred_MNA_Index_9;
#line 367 "pred_table.m"
    MR_Word hlds__pred_table__Func_N_Index_10;
#line 367 "pred_table.m"
    MR_Word hlds__pred_table__Func_NA_Index_11;
#line 367 "pred_table.m"
    MR_Word hlds__pred_table__Func_MNA_Index_12;

#line 368 "pred_table.m"
    {
#line 368 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeCtorInfo_13_13, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, &hlds__pred_table__Preds_3);
    }
#line 369 "pred_table.m"
    {
#line 369 "pred_table.m"
      hlds__pred_table__NextPredId_4 = hlds__hlds_pred__initial_pred_id_0_f_0();
    }
#line 370 "pred_table.m"
    {
#line 370 "pred_table.m"
      hlds__pred_table__ValidPredIds_5 = mercury__set_tree234__init_0_f_0(hlds__pred_table__TypeCtorInfo_13_13);
    }
#line 371 "pred_table.m"
    {
#line 371 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeCtorInfo_13_13, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0, &hlds__pred_table__AccessibilityTable_6);
    }
#line 9807 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 9809 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_17_17 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
#line 372 "pred_table.m"
    {
#line 372 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeCtorInfo_16_16, hlds__pred_table__TypeInfo_17_17, &hlds__pred_table__Pred_N_Index_7);
    }
#line 9816 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_18_18 = (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0;
#line 373 "pred_table.m"
    {
#line 373 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeCtorInfo_18_18, hlds__pred_table__TypeInfo_17_17, &hlds__pred_table__Pred_NA_Index_8);
    }
#line 9823 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_19_19 = (MR_Word) &hlds__pred_table_scalar_common_2[0];
#line 9825 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_20_20 = (MR_Word) &hlds__pred_table_scalar_common_2[1];
#line 374 "pred_table.m"
    {
#line 374 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeInfo_19_19, hlds__pred_table__TypeInfo_20_20, &hlds__pred_table__Pred_MNA_Index_9);
    }
#line 375 "pred_table.m"
    {
#line 375 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeCtorInfo_16_16, hlds__pred_table__TypeInfo_17_17, &hlds__pred_table__Func_N_Index_10);
    }
#line 376 "pred_table.m"
    {
#line 376 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeCtorInfo_18_18, hlds__pred_table__TypeInfo_17_17, &hlds__pred_table__Func_NA_Index_11);
    }
#line 377 "pred_table.m"
    {
#line 377 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeInfo_19_19, hlds__pred_table__TypeInfo_20_20, &hlds__pred_table__Func_MNA_Index_12);
    }
#line 378 "pred_table.m"
    {
#line 378 "pred_table.m"
      MR_Word base;
#line 378 "pred_table.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 378 "pred_table.m"
      *hlds__pred_table__PredicateTable_2 = base;
#line 378 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__Preds_3));
#line 378 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__NextPredId_4));
#line 378 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__ValidPredIds_5));
#line 378 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__AccessibilityTable_6));
#line 378 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__Pred_N_Index_7));
#line 378 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__Pred_NA_Index_8));
#line 378 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__Pred_MNA_Index_9));
#line 378 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__Func_N_Index_10));
#line 378 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__Func_NA_Index_11));
#line 378 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__Func_MNA_Index_12));
#line 378 "pred_table.m"
    }
#line 367 "pred_table.m"
  }
#line 64 "pred_table.m"
}

void mercury__hlds__pred_table__init(void)
{
}

void mercury__hlds__pred_table__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__pred_table__hlds__pred_table__type_ctor_info_accessibility_table_0);
	MR_register_type_ctor_info(&hlds__pred_table__hlds__pred_table__type_ctor_info_constraint_search_0);
	MR_register_type_ctor_info(&hlds__pred_table__hlds__pred_table__type_ctor_info_is_fully_qualified_0);
	MR_register_type_ctor_info(&hlds__pred_table__hlds__pred_table__type_ctor_info_mode_no_0);
	MR_register_type_ctor_info(&hlds__pred_table__hlds__pred_table__type_ctor_info_module_name_arity_index_0);
	MR_register_type_ctor_info(&hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0);
	MR_register_type_ctor_info(&hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0);
	MR_register_type_ctor_info(&hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_index_0);
	MR_register_type_ctor_info(&hlds__pred_table__hlds__pred_table__type_ctor_info_name_index_0);
	MR_register_type_ctor_info(&hlds__pred_table__hlds__pred_table__type_ctor_info_pred_table_0);
	MR_register_type_ctor_info(&hlds__pred_table__hlds__pred_table__type_ctor_info_predicate_table_0);
}

void mercury__hlds__pred_table__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.pred_table. */
