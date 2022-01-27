/*
** Automatically generated from `pred_table.m'
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


/* :- module hlds.pred_table. */
/* :- implementation. */

/*
INIT mercury__hlds__pred_table__init
ENDINIT
*/

#include "hlds.pred_table.mih"


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
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




#line 144 "hlds.pred_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

#line 147 "hlds.pred_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__pred_table__type_ctor_info_name_accessibility_0;

#line 150 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

#line 153 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct1 hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 156 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 159 "hlds.pred_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 162 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__pred_table__type_ctor_info_name_accessibility_0;

#line 165 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct1 hlds__pred_table__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 168 "hlds.pred_table.c"
static const MR_VA_TypeInfo_Struct2 hlds__pred_table____vti_pred_2builtin__type_ctor_info_int_0list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 171 "hlds.pred_table.c"
static const MR_EnumFunctorDesc hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_0;

#line 174 "hlds.pred_table.c"
static const MR_EnumFunctorDesc hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_1;

#line 177 "hlds.pred_table.c"
static const MR_EnumFunctorDescPtr hlds__pred_table__hlds__pred_table__enum_value_ordered_is_fully_qualified_0[2];

#line 180 "hlds.pred_table.c"
static const MR_EnumFunctorDescPtr hlds__pred_table__hlds__pred_table__enum_name_ordered_is_fully_qualified_0[2];

#line 183 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_is_fully_qualified_0[2];

#line 186 "hlds.pred_table.c"
static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_0;

#line 189 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_mode_no_0_1[1];

#line 192 "hlds.pred_table.c"
static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_1;

#line 195 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_mode_no_0_0[1];

#line 198 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_mode_no_0_1[1];

#line 201 "hlds.pred_table.c"
static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_mode_no_0[2];

#line 204 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_mode_no_0[2];

#line 207 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_mode_no_0[2];

#line 210 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 213 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_name_accessibility_0_0[2];

#line 216 "hlds.pred_table.c"
static const MR_ConstString hlds__pred_table__hlds__pred_table__field_names_name_accessibility_0_0[2];

#line 219 "hlds.pred_table.c"
static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_name_accessibility_0_0;

#line 222 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_name_accessibility_0_0[1];

#line 225 "hlds.pred_table.c"
static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_name_accessibility_0[1];

#line 228 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_name_accessibility_0[1];

#line 231 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_name_accessibility_0[1];

#line 234 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_name_arity_0_0[2];

#line 237 "hlds.pred_table.c"
static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_name_arity_0_0;

#line 240 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_name_arity_0_0[1];

#line 243 "hlds.pred_table.c"
static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_name_arity_0[1];

#line 246 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_name_arity_0[1];

#line 249 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_name_arity_0[1];

#line 252 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__pred_table__type_ctor_info_name_arity_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 255 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 258 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0;

#line 261 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct1 hlds__pred_table__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 264 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_predicate_table_0_0[10];

#line 267 "hlds.pred_table.c"
static const MR_ConstString hlds__pred_table__hlds__pred_table__field_names_predicate_table_0_0[10];

#line 270 "hlds.pred_table.c"
static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_predicate_table_0_0;

#line 273 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_predicate_table_0_0[1];

#line 276 "hlds.pred_table.c"
static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_predicate_table_0[1];

#line 279 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_predicate_table_0[1];

#line 282 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_predicate_table_0[1];

#line 285 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____accessibility_table_0_0_10001(
#line 288 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 290 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 293 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____accessibility_table_0_0_10001(
#line 296 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 298 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 300 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 303 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____constraint_search_0_0_10001(
#line 306 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 308 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 311 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____constraint_search_0_0_10001(
#line 314 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 316 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 318 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 321 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____is_fully_qualified_0_0_10001(
#line 324 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 326 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 329 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____is_fully_qualified_0_0_10001(
#line 332 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 334 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 336 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 339 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____mode_no_0_0_10001(
#line 342 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 344 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 347 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____mode_no_0_0_10001(
#line 350 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 352 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 354 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 357 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____module_name_arity_index_0_0_10001(
#line 360 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 362 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 365 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____module_name_arity_index_0_0_10001(
#line 368 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 370 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 372 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 375 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_accessibility_0_0_10001(
#line 378 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 380 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 383 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_accessibility_0_0_10001(
#line 386 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 388 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 390 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 393 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_0_0_10001(
#line 396 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 398 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 401 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_0_0_10001(
#line 404 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 406 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 408 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 411 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_index_0_0_10001(
#line 414 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 416 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 419 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_index_0_0_10001(
#line 422 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 424 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 426 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 429 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_index_0_0_10001(
#line 432 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 434 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 437 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_index_0_0_10001(
#line 440 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 442 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 444 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 447 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____pred_table_0_0_10001(
#line 450 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 452 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 455 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____pred_table_0_0_10001(
#line 458 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 460 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 462 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 465 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____predicate_table_0_0_10001(
#line 468 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 470 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 473 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____predicate_table_0_0_10001(
#line 476 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 478 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 480 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 345 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_index_0_0(
#line 345 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 345 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 345 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3);

#line 345 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_index_0_0(
#line 345 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 345 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2);

#line 347 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_index_0_0(
#line 347 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 347 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 347 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3);

#line 347 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_index_0_0(
#line 347 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 347 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2);

#line 348 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_0_0(
#line 348 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 348 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 348 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3);

#line 348 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_0_0(
#line 348 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 348 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2);

#line 335 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_accessibility_0_0(
#line 335 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 335 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 335 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3);

#line 335 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_accessibility_0_0(
#line 335 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 335 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2);

#line 354 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____module_name_arity_index_0_0(
#line 354 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 354 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 354 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3);

#line 354 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____module_name_arity_index_0_0(
#line 354 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 354 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2);

#line 333 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____accessibility_table_0_0(
#line 333 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 333 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 333 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3);

#line 333 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____accessibility_table_0_0(
#line 333 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 333 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2);

#line 1074 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__univ_constraints_match_2_p_0(
#line 1074 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 1074 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2);

#line 964 "pred_table.m"
static void MR_CALL 
hlds__pred_table__insert_into_mna_index_6_p_0(
#line 964 "pred_table.m"
  MR_String hlds__pred_table__Name_7,
#line 964 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_8,
#line 964 "pred_table.m"
  MR_Word hlds__pred_table__PredId_9,
#line 964 "pred_table.m"
  MR_Word hlds__pred_table__Module_10,
#line 964 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_MNA_Index_0_14,
#line 964 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_MNA_Index_15);

#line 950 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_do_insert_14_p_0_1(
#line 950 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 950 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 950 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 950 "pred_table.m"
  MR_Box * hlds__pred_table__wrapper_arg_3);

#line 921 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_do_insert_14_p_0(
#line 921 "pred_table.m"
  MR_Word hlds__pred_table__Module_15,
#line 921 "pred_table.m"
  MR_String hlds__pred_table__Name_16,
#line 921 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_17,
#line 921 "pred_table.m"
  MR_Word hlds__pred_table__NeedQual_18,
#line 921 "pred_table.m"
  MR_Word hlds__pred_table__MaybeQualInfo_19,
#line 921 "pred_table.m"
  MR_Word hlds__pred_table__PredId_20,
#line 921 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_AccessibilityTable_0_31,
#line 921 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_AccessibilityTable_32,
#line 921 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_N_Index_0_33,
#line 921 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_N_Index_34,
#line 921 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_NA_Index_0_35,
#line 921 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_NA_Index_36,
#line 921 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_MNA_Index_0_37,
#line 921 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_MNA_Index_38);

#line 950 "pred_table.m"
static void MR_CALL 
hlds__pred_table__do_predicate_table_insert_7_p_0_1(
#line 950 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 950 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 950 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 950 "pred_table.m"
  MR_Box * hlds__pred_table__wrapper_arg_3);

#line 860 "pred_table.m"
static void MR_CALL 
hlds__pred_table__do_predicate_table_insert_7_p_0(
#line 860 "pred_table.m"
  MR_Word hlds__pred_table__MaybePredId_8,
#line 860 "pred_table.m"
  MR_Word hlds__pred_table__PredInfo_9,
#line 860 "pred_table.m"
  MR_Word hlds__pred_table__NeedQual_10,
#line 860 "pred_table.m"
  MR_Word hlds__pred_table__MaybeQualInfo_11,
#line 860 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_12,
#line 860 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39,
#line 860 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_40);

#line 814 "pred_table.m"
static void MR_CALL 
hlds__pred_table__reinsert_for_restrict_6_p_0(
#line 814 "pred_table.m"
  MR_Word hlds__pred_table__PartialQualInfo_7,
#line 814 "pred_table.m"
  MR_Word hlds__pred_table__Preds_8,
#line 814 "pred_table.m"
  MR_Word hlds__pred_table__AccessibilityTable_9,
#line 814 "pred_table.m"
  MR_Word hlds__pred_table__PredId_10,
#line 814 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_19,
#line 814 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_20);

#line 738 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__pred_id_matches_module_3_p_0(
#line 738 "pred_table.m"
  MR_Word hlds__pred_table__Preds_4,
#line 738 "pred_table.m"
  MR_Word hlds__pred_table__ModuleName_5,
#line 738 "pred_table.m"
  MR_Word hlds__pred_table__PredId_6);

#line 736 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0_1(
#line 736 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 736 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1);

#line 648 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0(
#line 648 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_6,
#line 648 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_7,
#line 648 "pred_table.m"
  MR_Word hlds__pred_table__Module_8,
#line 648 "pred_table.m"
  MR_String hlds__pred_table__FuncName_9,
#line 648 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_10);

#line 436 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_remove_from_index_10_p_0(
#line 436 "pred_table.m"
  MR_Word hlds__pred_table__Module_11,
#line 436 "pred_table.m"
  MR_String hlds__pred_table__Name_12,
#line 436 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_13,
#line 436 "pred_table.m"
  MR_Word hlds__pred_table__PredId_14,
#line 436 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_N_0_18,
#line 436 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_N_19,
#line 436 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_NA_0_20,
#line 436 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_NA_21,
#line 436 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_MNA_0_22,
#line 436 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_MNA_23);

#line 736 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0_1(
#line 736 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 736 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1);

#line 736 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0_1(
#line 736 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 736 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1);

#line 736 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_sym_4_p_0_1(
#line 736 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 736 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1);

#line 736 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0_1(
#line 736 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 736 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1);

#line 736 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_sym_4_p_0_1(
#line 736 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 736 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1);

#line 811 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_restrict_4_p_0_1(
#line 811 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 811 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 811 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 811 "pred_table.m"
  MR_Box * hlds__pred_table__wrapper_arg_3);


static /* final */ const MR_Box hlds__pred_table_scalar_common_1[16][2];

static /* final */ const MR_Box hlds__pred_table_scalar_common_2[7][3];

static /* final */ const MR_Box hlds__pred_table_scalar_common_3[1][4];

static /* final */ const MR_Box hlds__pred_table_scalar_common_4[2][9];

static /* final */ const MR_Box hlds__pred_table_scalar_common_5[1][6];

static /* final */ const MR_Box hlds__pred_table_scalar_common_6[1][1];




static /* final */ const MR_Box hlds__pred_table_scalar_common_1[16][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "You need to use an explicit module qualifier."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__pred_table_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: unresolved predicate overloading,"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "matched"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 15 */
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1022 "hlds.pred_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

#line 1031 "hlds.pred_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__pred_table__type_ctor_info_name_accessibility_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0
  }
};

#line 1040 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1049 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct1 hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1057 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1066 "hlds.pred_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__pred_table__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1075 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__pred_table__type_ctor_info_name_accessibility_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0
  }
};

#line 1084 "hlds.pred_table.c"
const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_accessibility_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pred_table____Unify____accessibility_table_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____accessibility_table_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "accessibility_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__pred_table__type_ctor_info_name_accessibility_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1101 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct1 hlds__pred_table__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1109 "hlds.pred_table.c"
static const MR_VA_TypeInfo_Struct2 hlds__pred_table____vti_pred_2builtin__type_ctor_info_int_0list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &hlds__pred_table__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1119 "hlds.pred_table.c"
const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_constraint_search_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pred_table____Unify____constraint_search_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____constraint_search_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "constraint_search",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__pred_table____vti_pred_2builtin__type_ctor_info_int_0list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1136 "hlds.pred_table.c"
static const MR_EnumFunctorDesc hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_0 = {
  (MR_String) "is_fully_qualified",
  (MR_Integer) 0
};

#line 1142 "hlds.pred_table.c"
static const MR_EnumFunctorDesc hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_1 = {
  (MR_String) "may_be_partially_qualified",
  (MR_Integer) 1
};

#line 1148 "hlds.pred_table.c"
static const MR_EnumFunctorDescPtr hlds__pred_table__hlds__pred_table__enum_value_ordered_is_fully_qualified_0[2] = {
  &hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_0,
  &hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_1
};

#line 1154 "hlds.pred_table.c"
static const MR_EnumFunctorDescPtr hlds__pred_table__hlds__pred_table__enum_name_ordered_is_fully_qualified_0[2] = {
  &hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_0,
  &hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_1
};

#line 1160 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_is_fully_qualified_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1166 "hlds.pred_table.c"
const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_is_fully_qualified_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__pred_table____Unify____is_fully_qualified_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____is_fully_qualified_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "is_fully_qualified",
  {     hlds__pred_table__hlds__pred_table__enum_name_ordered_is_fully_qualified_0 },
  {     hlds__pred_table__hlds__pred_table__enum_value_ordered_is_fully_qualified_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__pred_table__hlds__pred_table__functor_number_map_is_fully_qualified_0
};

#line 1183 "hlds.pred_table.c"
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

#line 1198 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_mode_no_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1203 "hlds.pred_table.c"
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

#line 1218 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_mode_no_0_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_0
};

#line 1223 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_mode_no_0_1[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_1
};

#line 1228 "hlds.pred_table.c"
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

#line 1242 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_mode_no_0[2] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_1,
  &hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_0
};

#line 1248 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_mode_no_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1254 "hlds.pred_table.c"
const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_mode_no_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__pred_table____Unify____mode_no_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____mode_no_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "mode_no",
  {     hlds__pred_table__hlds__pred_table__du_name_ordered_mode_no_0 },
  {     hlds__pred_table__hlds__pred_table__du_ptag_ordered_mode_no_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__pred_table__hlds__pred_table__functor_number_map_mode_no_0
};

#line 1271 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__pred_table__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1280 "hlds.pred_table.c"
const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_module_name_arity_index_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pred_table____Unify____module_name_arity_index_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____module_name_arity_index_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "module_name_arity_index",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1297 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_name_accessibility_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1303 "hlds.pred_table.c"
static const MR_ConstString hlds__pred_table__hlds__pred_table__field_names_name_accessibility_0_0[2] = {
  (MR_String) "accessible_by_unqualifed_name",
  (MR_String) "accessible_by_partially_qualified_names"
};

#line 1309 "hlds.pred_table.c"
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

#line 1324 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_name_accessibility_0_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_name_accessibility_0_0
};

#line 1329 "hlds.pred_table.c"
static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_name_accessibility_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__pred_table__hlds__pred_table__du_stag_ordered_name_accessibility_0_0
  }
};

#line 1338 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_name_accessibility_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_name_accessibility_0_0
};

#line 1343 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_name_accessibility_0[1] = {
  (MR_Integer) 0
};

#line 1348 "hlds.pred_table.c"
const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__pred_table____Unify____name_accessibility_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____name_accessibility_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "name_accessibility",
  {     hlds__pred_table__hlds__pred_table__du_name_ordered_name_accessibility_0 },
  {     hlds__pred_table__hlds__pred_table__du_ptag_ordered_name_accessibility_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__pred_table__hlds__pred_table__functor_number_map_name_accessibility_0
};

#line 1365 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_name_arity_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1371 "hlds.pred_table.c"
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

#line 1386 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_name_arity_0_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_name_arity_0_0
};

#line 1391 "hlds.pred_table.c"
static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_name_arity_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__pred_table__hlds__pred_table__du_stag_ordered_name_arity_0_0
  }
};

#line 1400 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_name_arity_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_name_arity_0_0
};

#line 1405 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_name_arity_0[1] = {
  (MR_Integer) 0
};

#line 1410 "hlds.pred_table.c"
const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__pred_table____Unify____name_arity_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____name_arity_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "name_arity",
  {     hlds__pred_table__hlds__pred_table__du_name_ordered_name_arity_0 },
  {     hlds__pred_table__hlds__pred_table__du_ptag_ordered_name_arity_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__pred_table__hlds__pred_table__functor_number_map_name_arity_0
};

#line 1427 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__pred_table__type_ctor_info_name_arity_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0,
    (MR_TypeInfo) &hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1436 "hlds.pred_table.c"
const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_index_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pred_table____Unify____name_arity_index_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____name_arity_index_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "name_arity_index",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2hlds__pred_table__type_ctor_info_name_arity_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1453 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1462 "hlds.pred_table.c"
const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_name_index_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pred_table____Unify____name_index_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____name_index_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "name_index",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1479 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

#line 1488 "hlds.pred_table.c"
const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_pred_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pred_table____Unify____pred_table_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____pred_table_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "pred_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1505 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct1 hlds__pred_table__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1513 "hlds.pred_table.c"
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

#line 1527 "hlds.pred_table.c"
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

#line 1541 "hlds.pred_table.c"
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

#line 1556 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_predicate_table_0_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_predicate_table_0_0
};

#line 1561 "hlds.pred_table.c"
static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_predicate_table_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__pred_table__hlds__pred_table__du_stag_ordered_predicate_table_0_0
  }
};

#line 1570 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_predicate_table_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_predicate_table_0_0
};

#line 1575 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_predicate_table_0[1] = {
  (MR_Integer) 0
};

#line 1580 "hlds.pred_table.c"
const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_predicate_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__pred_table____Unify____predicate_table_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____predicate_table_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "predicate_table",
  {     hlds__pred_table__hlds__pred_table__du_name_ordered_predicate_table_0 },
  {     hlds__pred_table__hlds__pred_table__du_ptag_ordered_predicate_table_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__pred_table__hlds__pred_table__functor_number_map_predicate_table_0
};

#line 1597 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____accessibility_table_0_0_10001(
#line 1600 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1602 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1604 "hlds.pred_table.c"
{
#line 1606 "hlds.pred_table.c"
  {
#line 1608 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1611 "hlds.pred_table.c"
    {
#line 1613 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____accessibility_table_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1616 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1618 "hlds.pred_table.c"
  }
#line 1620 "hlds.pred_table.c"
}

#line 1623 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____accessibility_table_0_0_10001(
#line 1626 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 1628 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 1630 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 1632 "hlds.pred_table.c"
{
#line 1634 "hlds.pred_table.c"
  {
#line 1636 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 1639 "hlds.pred_table.c"
    {
#line 1641 "hlds.pred_table.c"
      hlds__pred_table____Compare____accessibility_table_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 1644 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 1646 "hlds.pred_table.c"
  }
#line 1648 "hlds.pred_table.c"
}

#line 1651 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____constraint_search_0_0_10001(
#line 1654 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1656 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1658 "hlds.pred_table.c"
{
#line 1660 "hlds.pred_table.c"
  {
#line 1662 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1665 "hlds.pred_table.c"
    {
#line 1667 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____constraint_search_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1670 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1672 "hlds.pred_table.c"
  }
#line 1674 "hlds.pred_table.c"
}

#line 1677 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____constraint_search_0_0_10001(
#line 1680 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 1682 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 1684 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 1686 "hlds.pred_table.c"
{
#line 1688 "hlds.pred_table.c"
  {
#line 1690 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 1693 "hlds.pred_table.c"
    {
#line 1695 "hlds.pred_table.c"
      hlds__pred_table____Compare____constraint_search_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 1698 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 1700 "hlds.pred_table.c"
  }
#line 1702 "hlds.pred_table.c"
}

#line 1705 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____is_fully_qualified_0_0_10001(
#line 1708 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1710 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1712 "hlds.pred_table.c"
{
#line 1714 "hlds.pred_table.c"
  {
#line 1716 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1719 "hlds.pred_table.c"
    {
#line 1721 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____is_fully_qualified_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1724 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1726 "hlds.pred_table.c"
  }
#line 1728 "hlds.pred_table.c"
}

#line 1731 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____is_fully_qualified_0_0_10001(
#line 1734 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 1736 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 1738 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 1740 "hlds.pred_table.c"
{
#line 1742 "hlds.pred_table.c"
  {
#line 1744 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 1747 "hlds.pred_table.c"
    {
#line 1749 "hlds.pred_table.c"
      hlds__pred_table____Compare____is_fully_qualified_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 1752 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 1754 "hlds.pred_table.c"
  }
#line 1756 "hlds.pred_table.c"
}

#line 1759 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____mode_no_0_0_10001(
#line 1762 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1764 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1766 "hlds.pred_table.c"
{
#line 1768 "hlds.pred_table.c"
  {
#line 1770 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1773 "hlds.pred_table.c"
    {
#line 1775 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____mode_no_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1778 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1780 "hlds.pred_table.c"
  }
#line 1782 "hlds.pred_table.c"
}

#line 1785 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____mode_no_0_0_10001(
#line 1788 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 1790 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 1792 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 1794 "hlds.pred_table.c"
{
#line 1796 "hlds.pred_table.c"
  {
#line 1798 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 1801 "hlds.pred_table.c"
    {
#line 1803 "hlds.pred_table.c"
      hlds__pred_table____Compare____mode_no_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 1806 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 1808 "hlds.pred_table.c"
  }
#line 1810 "hlds.pred_table.c"
}

#line 1813 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____module_name_arity_index_0_0_10001(
#line 1816 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1818 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1820 "hlds.pred_table.c"
{
#line 1822 "hlds.pred_table.c"
  {
#line 1824 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1827 "hlds.pred_table.c"
    {
#line 1829 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____module_name_arity_index_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1832 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1834 "hlds.pred_table.c"
  }
#line 1836 "hlds.pred_table.c"
}

#line 1839 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____module_name_arity_index_0_0_10001(
#line 1842 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 1844 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 1846 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 1848 "hlds.pred_table.c"
{
#line 1850 "hlds.pred_table.c"
  {
#line 1852 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 1855 "hlds.pred_table.c"
    {
#line 1857 "hlds.pred_table.c"
      hlds__pred_table____Compare____module_name_arity_index_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 1860 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 1862 "hlds.pred_table.c"
  }
#line 1864 "hlds.pred_table.c"
}

#line 1867 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_accessibility_0_0_10001(
#line 1870 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1872 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1874 "hlds.pred_table.c"
{
#line 1876 "hlds.pred_table.c"
  {
#line 1878 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1881 "hlds.pred_table.c"
    {
#line 1883 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____name_accessibility_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1886 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1888 "hlds.pred_table.c"
  }
#line 1890 "hlds.pred_table.c"
}

#line 1893 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_accessibility_0_0_10001(
#line 1896 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 1898 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 1900 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 1902 "hlds.pred_table.c"
{
#line 1904 "hlds.pred_table.c"
  {
#line 1906 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 1909 "hlds.pred_table.c"
    {
#line 1911 "hlds.pred_table.c"
      hlds__pred_table____Compare____name_accessibility_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 1914 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 1916 "hlds.pred_table.c"
  }
#line 1918 "hlds.pred_table.c"
}

#line 1921 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_0_0_10001(
#line 1924 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1926 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1928 "hlds.pred_table.c"
{
#line 1930 "hlds.pred_table.c"
  {
#line 1932 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1935 "hlds.pred_table.c"
    {
#line 1937 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____name_arity_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1940 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1942 "hlds.pred_table.c"
  }
#line 1944 "hlds.pred_table.c"
}

#line 1947 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_0_0_10001(
#line 1950 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 1952 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 1954 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 1956 "hlds.pred_table.c"
{
#line 1958 "hlds.pred_table.c"
  {
#line 1960 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 1963 "hlds.pred_table.c"
    {
#line 1965 "hlds.pred_table.c"
      hlds__pred_table____Compare____name_arity_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 1968 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 1970 "hlds.pred_table.c"
  }
#line 1972 "hlds.pred_table.c"
}

#line 1975 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_index_0_0_10001(
#line 1978 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1980 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1982 "hlds.pred_table.c"
{
#line 1984 "hlds.pred_table.c"
  {
#line 1986 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1989 "hlds.pred_table.c"
    {
#line 1991 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____name_arity_index_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1994 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1996 "hlds.pred_table.c"
  }
#line 1998 "hlds.pred_table.c"
}

#line 2001 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_index_0_0_10001(
#line 2004 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 2006 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 2008 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 2010 "hlds.pred_table.c"
{
#line 2012 "hlds.pred_table.c"
  {
#line 2014 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 2017 "hlds.pred_table.c"
    {
#line 2019 "hlds.pred_table.c"
      hlds__pred_table____Compare____name_arity_index_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 2022 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 2024 "hlds.pred_table.c"
  }
#line 2026 "hlds.pred_table.c"
}

#line 2029 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_index_0_0_10001(
#line 2032 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 2034 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 2036 "hlds.pred_table.c"
{
#line 2038 "hlds.pred_table.c"
  {
#line 2040 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 2043 "hlds.pred_table.c"
    {
#line 2045 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____name_index_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 2048 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 2050 "hlds.pred_table.c"
  }
#line 2052 "hlds.pred_table.c"
}

#line 2055 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_index_0_0_10001(
#line 2058 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 2060 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 2062 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 2064 "hlds.pred_table.c"
{
#line 2066 "hlds.pred_table.c"
  {
#line 2068 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 2071 "hlds.pred_table.c"
    {
#line 2073 "hlds.pred_table.c"
      hlds__pred_table____Compare____name_index_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 2076 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 2078 "hlds.pred_table.c"
  }
#line 2080 "hlds.pred_table.c"
}

#line 2083 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____pred_table_0_0_10001(
#line 2086 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 2088 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 2090 "hlds.pred_table.c"
{
#line 2092 "hlds.pred_table.c"
  {
#line 2094 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 2097 "hlds.pred_table.c"
    {
#line 2099 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____pred_table_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 2102 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 2104 "hlds.pred_table.c"
  }
#line 2106 "hlds.pred_table.c"
}

#line 2109 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____pred_table_0_0_10001(
#line 2112 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 2114 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 2116 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 2118 "hlds.pred_table.c"
{
#line 2120 "hlds.pred_table.c"
  {
#line 2122 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 2125 "hlds.pred_table.c"
    {
#line 2127 "hlds.pred_table.c"
      hlds__pred_table____Compare____pred_table_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 2130 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 2132 "hlds.pred_table.c"
  }
#line 2134 "hlds.pred_table.c"
}

#line 2137 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____predicate_table_0_0_10001(
#line 2140 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 2142 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 2144 "hlds.pred_table.c"
{
#line 2146 "hlds.pred_table.c"
  {
#line 2148 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 2151 "hlds.pred_table.c"
    {
#line 2153 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____predicate_table_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 2156 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 2158 "hlds.pred_table.c"
  }
#line 2160 "hlds.pred_table.c"
}

#line 2163 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____predicate_table_0_0_10001(
#line 2166 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 2168 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 2170 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 2172 "hlds.pred_table.c"
{
#line 2174 "hlds.pred_table.c"
  {
#line 2176 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 2179 "hlds.pred_table.c"
    {
#line 2181 "hlds.pred_table.c"
      hlds__pred_table____Compare____predicate_table_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 2184 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 2186 "hlds.pred_table.c"
  }
#line 2188 "hlds.pred_table.c"
}

#line 304 "pred_table.m"
void MR_CALL 
hlds__pred_table____Compare____predicate_table_0_0(
#line 304 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 304 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 304 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 304 "pred_table.m"
{
#line 304 "pred_table.m"
  {
#line 304 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 304 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_33 = (MR_Integer) hlds__pred_table__HeadVar__2_2;
#line 304 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_34 = (MR_Integer) hlds__pred_table__HeadVar__3_3;

#line 304 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_33 == hlds__pred_table__CastY_34);
#line 304 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 2215 "hlds.pred_table.c"
      *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 0;
#line 304 "pred_table.m"
    else
#line 304 "pred_table.m"
      {
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 2)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 3)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 4)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 5)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 6)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 7)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 8)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 9)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 0)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 1)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 2)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 3)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 4)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 5)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 6)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 7)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 8)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 9)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_24_24;

#line 304 "pred_table.m"
        {
#line 304 "pred_table.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[6], &hlds__pred_table__V_24_24, ((MR_Box) (hlds__pred_table__V_4_4)), ((MR_Box) (hlds__pred_table__V_14_14)));
        }
#line 2269 "hlds.pred_table.c"
        hlds__pred_table__succeeded = (hlds__pred_table__V_24_24 == (MR_Integer) 0);
#line 304 "pred_table.m"
        hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 304 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 304 "pred_table.m"
          *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_24_24;
#line 304 "pred_table.m"
        else
#line 304 "pred_table.m"
          {
#line 304 "pred_table.m"
            MR_Word hlds__pred_table__V_25_25;

#line 304 "pred_table.m"
            {
#line 304 "pred_table.m"
              hlds__hlds_pred____Compare____pred_id_0_0(&hlds__pred_table__V_25_25, hlds__pred_table__V_5_5, hlds__pred_table__V_15_15);
            }
#line 2289 "hlds.pred_table.c"
            hlds__pred_table__succeeded = (hlds__pred_table__V_25_25 == (MR_Integer) 0);
#line 304 "pred_table.m"
            hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 304 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 304 "pred_table.m"
              *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_25_25;
#line 304 "pred_table.m"
            else
#line 304 "pred_table.m"
              {
#line 304 "pred_table.m"
                MR_Word hlds__pred_table__V_26_26;

#line 304 "pred_table.m"
                {
#line 304 "pred_table.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_1[2], &hlds__pred_table__V_26_26, ((MR_Box) (hlds__pred_table__V_6_6)), ((MR_Box) (hlds__pred_table__V_16_16)));
                }
#line 2309 "hlds.pred_table.c"
                hlds__pred_table__succeeded = (hlds__pred_table__V_26_26 == (MR_Integer) 0);
#line 304 "pred_table.m"
                hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 304 "pred_table.m"
                if (hlds__pred_table__succeeded)
#line 304 "pred_table.m"
                  *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_26_26;
#line 304 "pred_table.m"
                else
#line 304 "pred_table.m"
                  {
#line 304 "pred_table.m"
                    MR_Word hlds__pred_table__V_27_27;

#line 304 "pred_table.m"
                    {
#line 304 "pred_table.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[3], &hlds__pred_table__V_27_27, ((MR_Box) (hlds__pred_table__V_7_7)), ((MR_Box) (hlds__pred_table__V_17_17)));
                    }
#line 2329 "hlds.pred_table.c"
                    hlds__pred_table__succeeded = (hlds__pred_table__V_27_27 == (MR_Integer) 0);
#line 304 "pred_table.m"
                    hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 304 "pred_table.m"
                    if (hlds__pred_table__succeeded)
#line 304 "pred_table.m"
                      *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_27_27;
#line 304 "pred_table.m"
                    else
#line 304 "pred_table.m"
                      {
#line 304 "pred_table.m"
                        MR_Word hlds__pred_table__V_28_28;

#line 304 "pred_table.m"
                        {
#line 304 "pred_table.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[5], &hlds__pred_table__V_28_28, ((MR_Box) (hlds__pred_table__V_8_8)), ((MR_Box) (hlds__pred_table__V_18_18)));
                        }
#line 2349 "hlds.pred_table.c"
                        hlds__pred_table__succeeded = (hlds__pred_table__V_28_28 == (MR_Integer) 0);
#line 304 "pred_table.m"
                        hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 304 "pred_table.m"
                        if (hlds__pred_table__succeeded)
#line 304 "pred_table.m"
                          *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_28_28;
#line 304 "pred_table.m"
                        else
#line 304 "pred_table.m"
                          {
#line 304 "pred_table.m"
                            MR_Word hlds__pred_table__V_29_29;

#line 304 "pred_table.m"
                            {
#line 304 "pred_table.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[4], &hlds__pred_table__V_29_29, ((MR_Box) (hlds__pred_table__V_9_9)), ((MR_Box) (hlds__pred_table__V_19_19)));
                            }
#line 2369 "hlds.pred_table.c"
                            hlds__pred_table__succeeded = (hlds__pred_table__V_29_29 == (MR_Integer) 0);
#line 304 "pred_table.m"
                            hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 304 "pred_table.m"
                            if (hlds__pred_table__succeeded)
#line 304 "pred_table.m"
                              *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_29_29;
#line 304 "pred_table.m"
                            else
#line 304 "pred_table.m"
                              {
#line 304 "pred_table.m"
                                MR_Word hlds__pred_table__V_30_30;

#line 304 "pred_table.m"
                                {
#line 304 "pred_table.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[2], &hlds__pred_table__V_30_30, ((MR_Box) (hlds__pred_table__V_10_10)), ((MR_Box) (hlds__pred_table__V_20_20)));
                                }
#line 2389 "hlds.pred_table.c"
                                hlds__pred_table__succeeded = (hlds__pred_table__V_30_30 == (MR_Integer) 0);
#line 304 "pred_table.m"
                                hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 304 "pred_table.m"
                                if (hlds__pred_table__succeeded)
#line 304 "pred_table.m"
                                  *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_30_30;
#line 304 "pred_table.m"
                                else
#line 304 "pred_table.m"
                                  {
#line 304 "pred_table.m"
                                    MR_Word hlds__pred_table__V_31_31;

#line 304 "pred_table.m"
                                    {
#line 304 "pred_table.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[5], &hlds__pred_table__V_31_31, ((MR_Box) (hlds__pred_table__V_11_11)), ((MR_Box) (hlds__pred_table__V_21_21)));
                                    }
#line 2409 "hlds.pred_table.c"
                                    hlds__pred_table__succeeded = (hlds__pred_table__V_31_31 == (MR_Integer) 0);
#line 304 "pred_table.m"
                                    hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 304 "pred_table.m"
                                    if (hlds__pred_table__succeeded)
#line 304 "pred_table.m"
                                      *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_31_31;
#line 304 "pred_table.m"
                                    else
#line 304 "pred_table.m"
                                      {
#line 304 "pred_table.m"
                                        MR_Word hlds__pred_table__V_32_32;

#line 304 "pred_table.m"
                                        {
#line 304 "pred_table.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[4], &hlds__pred_table__V_32_32, ((MR_Box) (hlds__pred_table__V_12_12)), ((MR_Box) (hlds__pred_table__V_22_22)));
                                        }
#line 2429 "hlds.pred_table.c"
                                        hlds__pred_table__succeeded = (hlds__pred_table__V_32_32 == (MR_Integer) 0);
#line 304 "pred_table.m"
                                        hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 304 "pred_table.m"
                                        if (hlds__pred_table__succeeded)
#line 304 "pred_table.m"
                                          *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_32_32;
#line 304 "pred_table.m"
                                        else
#line 304 "pred_table.m"
                                          {
#line 304 "pred_table.m"
                                            {
#line 304 "pred_table.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[2], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__V_13_13)), ((MR_Box) (hlds__pred_table__V_23_23)));
                                            }
#line 304 "pred_table.m"
                                          }
#line 304 "pred_table.m"
                                      }
#line 304 "pred_table.m"
                                  }
#line 304 "pred_table.m"
                              }
#line 304 "pred_table.m"
                          }
#line 304 "pred_table.m"
                      }
#line 304 "pred_table.m"
                  }
#line 304 "pred_table.m"
              }
#line 304 "pred_table.m"
          }
#line 304 "pred_table.m"
      }
#line 304 "pred_table.m"
  }
#line 304 "pred_table.m"
}

#line 304 "pred_table.m"
MR_bool MR_CALL 
hlds__pred_table____Unify____predicate_table_0_0(
#line 304 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 304 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 304 "pred_table.m"
{
#line 304 "pred_table.m"
  {
#line 304 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 304 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_23 = (MR_Integer) hlds__pred_table__HeadVar__1_1;
#line 304 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_24 = (MR_Integer) hlds__pred_table__HeadVar__2_2;

#line 304 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_23 == hlds__pred_table__CastY_24);
#line 304 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 304 "pred_table.m"
      hlds__pred_table__succeeded = MR_TRUE;
#line 304 "pred_table.m"
    else
#line 304 "pred_table.m"
      {
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_27_27;
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_28_28;
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_29_29;
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_30_30;
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_31_31;
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_32_32;
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_33_33;
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_34_34;
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 0)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 1)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 2)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 3)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 4)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 5)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 6)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 7)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 8)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 9)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 2)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 3)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 4)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 5)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 6)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 7)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 8)));
#line 304 "pred_table.m"
        MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 9)));

#line 2556 "hlds.pred_table.c"
        {
#line 2558 "hlds.pred_table.c"
          hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pred_table_scalar_common_2[6], ((MR_Box) (hlds__pred_table__V_3_3)), ((MR_Box) (hlds__pred_table__V_13_13)));
        }
#line 304 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 304 "pred_table.m"
          {
#line 2565 "hlds.pred_table.c"
            {
#line 2567 "hlds.pred_table.c"
              hlds__pred_table__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__pred_table__V_4_4, hlds__pred_table__V_14_14);
            }
#line 304 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 304 "pred_table.m"
              {
#line 2574 "hlds.pred_table.c"
                hlds__pred_table__TypeInfo_27_27 = (MR_Word) &hlds__pred_table_scalar_common_1[2];
#line 2576 "hlds.pred_table.c"
                {
#line 2578 "hlds.pred_table.c"
                  hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_27_27, ((MR_Box) (hlds__pred_table__V_5_5)), ((MR_Box) (hlds__pred_table__V_15_15)));
                }
#line 304 "pred_table.m"
                if (hlds__pred_table__succeeded)
#line 304 "pred_table.m"
                  {
#line 2585 "hlds.pred_table.c"
                    hlds__pred_table__TypeInfo_28_28 = (MR_Word) &hlds__pred_table_scalar_common_2[3];
#line 2587 "hlds.pred_table.c"
                    {
#line 2589 "hlds.pred_table.c"
                      hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_28_28, ((MR_Box) (hlds__pred_table__V_6_6)), ((MR_Box) (hlds__pred_table__V_16_16)));
                    }
#line 304 "pred_table.m"
                    if (hlds__pred_table__succeeded)
#line 304 "pred_table.m"
                      {
#line 2596 "hlds.pred_table.c"
                        hlds__pred_table__TypeInfo_29_29 = (MR_Word) &hlds__pred_table_scalar_common_2[5];
#line 2598 "hlds.pred_table.c"
                        {
#line 2600 "hlds.pred_table.c"
                          hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_29_29, ((MR_Box) (hlds__pred_table__V_7_7)), ((MR_Box) (hlds__pred_table__V_17_17)));
                        }
#line 304 "pred_table.m"
                        if (hlds__pred_table__succeeded)
#line 304 "pred_table.m"
                          {
#line 2607 "hlds.pred_table.c"
                            hlds__pred_table__TypeInfo_30_30 = (MR_Word) &hlds__pred_table_scalar_common_2[4];
#line 2609 "hlds.pred_table.c"
                            {
#line 2611 "hlds.pred_table.c"
                              hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_30_30, ((MR_Box) (hlds__pred_table__V_8_8)), ((MR_Box) (hlds__pred_table__V_18_18)));
                            }
#line 304 "pred_table.m"
                            if (hlds__pred_table__succeeded)
#line 304 "pred_table.m"
                              {
#line 2618 "hlds.pred_table.c"
                                hlds__pred_table__TypeInfo_31_31 = (MR_Word) &hlds__pred_table_scalar_common_2[2];
#line 2620 "hlds.pred_table.c"
                                {
#line 2622 "hlds.pred_table.c"
                                  hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_31_31, ((MR_Box) (hlds__pred_table__V_9_9)), ((MR_Box) (hlds__pred_table__V_19_19)));
                                }
#line 304 "pred_table.m"
                                if (hlds__pred_table__succeeded)
#line 304 "pred_table.m"
                                  {
#line 2629 "hlds.pred_table.c"
                                    hlds__pred_table__TypeInfo_32_32 = (MR_Word) &hlds__pred_table_scalar_common_2[5];
#line 2631 "hlds.pred_table.c"
                                    {
#line 2633 "hlds.pred_table.c"
                                      hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_32_32, ((MR_Box) (hlds__pred_table__V_10_10)), ((MR_Box) (hlds__pred_table__V_20_20)));
                                    }
#line 304 "pred_table.m"
                                    if (hlds__pred_table__succeeded)
#line 304 "pred_table.m"
                                      {
#line 2640 "hlds.pred_table.c"
                                        hlds__pred_table__TypeInfo_33_33 = (MR_Word) &hlds__pred_table_scalar_common_2[4];
#line 2642 "hlds.pred_table.c"
                                        {
#line 2644 "hlds.pred_table.c"
                                          hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_33_33, ((MR_Box) (hlds__pred_table__V_11_11)), ((MR_Box) (hlds__pred_table__V_21_21)));
                                        }
#line 304 "pred_table.m"
                                        if (hlds__pred_table__succeeded)
#line 304 "pred_table.m"
                                          {
#line 2651 "hlds.pred_table.c"
                                            hlds__pred_table__TypeInfo_34_34 = (MR_Word) &hlds__pred_table_scalar_common_2[2];
#line 2653 "hlds.pred_table.c"
                                            {
#line 2655 "hlds.pred_table.c"
                                              hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_34_34, ((MR_Box) (hlds__pred_table__V_12_12)), ((MR_Box) (hlds__pred_table__V_22_22)));
                                            }
#line 304 "pred_table.m"
                                          }
#line 304 "pred_table.m"
                                      }
#line 304 "pred_table.m"
                                  }
#line 304 "pred_table.m"
                              }
#line 304 "pred_table.m"
                          }
#line 304 "pred_table.m"
                      }
#line 304 "pred_table.m"
                  }
#line 304 "pred_table.m"
              }
#line 304 "pred_table.m"
          }
#line 304 "pred_table.m"
      }
#line 304 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 304 "pred_table.m"
  }
#line 304 "pred_table.m"
}

#line 37 "pred_table.m"
void MR_CALL 
hlds__pred_table____Compare____pred_table_0_0(
#line 37 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 37 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 37 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 37 "pred_table.m"
{
#line 37 "pred_table.m"
  {
#line 37 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 37 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_4 = hlds__pred_table__HeadVar__2_2;
#line 37 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_5 = hlds__pred_table__HeadVar__3_3;

#line 37 "pred_table.m"
    {
#line 37 "pred_table.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[6], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__Cast_HeadVar1_4)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_5)));
    }
#line 37 "pred_table.m"
  }
#line 37 "pred_table.m"
}

#line 37 "pred_table.m"
MR_bool MR_CALL 
hlds__pred_table____Unify____pred_table_0_0(
#line 37 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 37 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 37 "pred_table.m"
{
#line 37 "pred_table.m"
  {
#line 37 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 37 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_3 = hlds__pred_table__HeadVar__1_1;
#line 37 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_4 = hlds__pred_table__HeadVar__2_2;

#line 37 "pred_table.m"
    {
#line 37 "pred_table.m"
      hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pred_table_scalar_common_2[6], ((MR_Box) (hlds__pred_table__Cast_HeadVar1_3)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_4)));
    }
#line 37 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 37 "pred_table.m"
  }
#line 37 "pred_table.m"
}

#line 345 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_index_0_0(
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
    MR_Word hlds__pred_table__Cast_HeadVar1_4 = hlds__pred_table__HeadVar__2_2;
#line 345 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_5 = hlds__pred_table__HeadVar__3_3;

#line 345 "pred_table.m"
    {
#line 345 "pred_table.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[5], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__Cast_HeadVar1_4)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_5)));
    }
#line 345 "pred_table.m"
  }
#line 345 "pred_table.m"
}

#line 345 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_index_0_0(
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
    MR_Word hlds__pred_table__Cast_HeadVar1_3 = hlds__pred_table__HeadVar__1_1;
#line 345 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_4 = hlds__pred_table__HeadVar__2_2;

#line 345 "pred_table.m"
    {
#line 345 "pred_table.m"
      hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pred_table_scalar_common_2[5], ((MR_Box) (hlds__pred_table__Cast_HeadVar1_3)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_4)));
    }
#line 345 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 345 "pred_table.m"
  }
#line 345 "pred_table.m"
}

#line 347 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_index_0_0(
#line 347 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 347 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 347 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 347 "pred_table.m"
{
#line 347 "pred_table.m"
  {
#line 347 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 347 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_4 = hlds__pred_table__HeadVar__2_2;
#line 347 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_5 = hlds__pred_table__HeadVar__3_3;

#line 347 "pred_table.m"
    {
#line 347 "pred_table.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[4], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__Cast_HeadVar1_4)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_5)));
    }
#line 347 "pred_table.m"
  }
#line 347 "pred_table.m"
}

#line 347 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_index_0_0(
#line 347 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 347 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 347 "pred_table.m"
{
#line 347 "pred_table.m"
  {
#line 347 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 347 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_3 = hlds__pred_table__HeadVar__1_1;
#line 347 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_4 = hlds__pred_table__HeadVar__2_2;

#line 347 "pred_table.m"
    {
#line 347 "pred_table.m"
      hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pred_table_scalar_common_2[4], ((MR_Box) (hlds__pred_table__Cast_HeadVar1_3)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_4)));
    }
#line 347 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 347 "pred_table.m"
  }
#line 347 "pred_table.m"
}

#line 348 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_0_0(
#line 348 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 348 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 348 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 348 "pred_table.m"
{
#line 348 "pred_table.m"
  {
#line 348 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 348 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_9 = (MR_Integer) hlds__pred_table__HeadVar__2_2;
#line 348 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_10 = (MR_Integer) hlds__pred_table__HeadVar__3_3;

#line 348 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_9 == hlds__pred_table__CastY_10);
#line 348 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 2889 "hlds.pred_table.c"
      *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 0;
#line 348 "pred_table.m"
    else
#line 348 "pred_table.m"
      {
#line 348 "pred_table.m"
        MR_String hlds__pred_table__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 348 "pred_table.m"
        MR_Integer hlds__pred_table__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));
#line 348 "pred_table.m"
        MR_String hlds__pred_table__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 0)));
#line 348 "pred_table.m"
        MR_Integer hlds__pred_table__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 1)));
#line 348 "pred_table.m"
        MR_Word hlds__pred_table__V_8_8;

#line 348 "pred_table.m"
        {
#line 348 "pred_table.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&hlds__pred_table__V_8_8, hlds__pred_table__V_4_4, hlds__pred_table__V_6_6);
        }
#line 2911 "hlds.pred_table.c"
        hlds__pred_table__succeeded = (hlds__pred_table__V_8_8 == (MR_Integer) 0);
#line 348 "pred_table.m"
        hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 348 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 348 "pred_table.m"
          *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_8_8;
#line 348 "pred_table.m"
        else
#line 348 "pred_table.m"
          {
#line 348 "pred_table.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(hlds__pred_table__HeadVar__1_1, hlds__pred_table__V_5_5, hlds__pred_table__V_7_7);
          }
#line 348 "pred_table.m"
      }
#line 348 "pred_table.m"
  }
#line 348 "pred_table.m"
}

#line 348 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_0_0(
#line 348 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 348 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 348 "pred_table.m"
{
#line 348 "pred_table.m"
  {
#line 348 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 348 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_7 = (MR_Integer) hlds__pred_table__HeadVar__1_1;
#line 348 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_8 = (MR_Integer) hlds__pred_table__HeadVar__2_2;

#line 348 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_7 == hlds__pred_table__CastY_8);
#line 348 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 348 "pred_table.m"
      hlds__pred_table__succeeded = MR_TRUE;
#line 348 "pred_table.m"
    else
#line 348 "pred_table.m"
      {
#line 348 "pred_table.m"
        MR_String hlds__pred_table__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 0)));
#line 348 "pred_table.m"
        MR_Integer hlds__pred_table__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 1)));
#line 348 "pred_table.m"
        MR_String hlds__pred_table__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 348 "pred_table.m"
        MR_Integer hlds__pred_table__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));

#line 2970 "hlds.pred_table.c"
        hlds__pred_table__succeeded = (strcmp(hlds__pred_table__V_3_3, hlds__pred_table__V_5_5) == 0);
#line 348 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 2974 "hlds.pred_table.c"
          hlds__pred_table__succeeded = (hlds__pred_table__V_4_4 == hlds__pred_table__V_6_6);
#line 348 "pred_table.m"
      }
#line 348 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 348 "pred_table.m"
  }
#line 348 "pred_table.m"
}

#line 335 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_accessibility_0_0(
#line 335 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 335 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 335 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 335 "pred_table.m"
{
#line 335 "pred_table.m"
  {
#line 335 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 335 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_9 = (MR_Integer) hlds__pred_table__HeadVar__2_2;
#line 335 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_10 = (MR_Integer) hlds__pred_table__HeadVar__3_3;

#line 335 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_9 == hlds__pred_table__CastY_10);
#line 335 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 3009 "hlds.pred_table.c"
      *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 0;
#line 335 "pred_table.m"
    else
#line 335 "pred_table.m"
      {
#line 335 "pred_table.m"
        MR_Word hlds__pred_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 335 "pred_table.m"
        MR_Word hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));
#line 335 "pred_table.m"
        MR_Word hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 0)));
#line 335 "pred_table.m"
        MR_Word hlds__pred_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 1)));
#line 335 "pred_table.m"
        MR_Word hlds__pred_table__V_8_8;
#line 335 "pred_table.m"
        MR_Integer hlds__pred_table__V_13_13 = (MR_Integer) hlds__pred_table__V_4_4;
#line 335 "pred_table.m"
        MR_Integer hlds__pred_table__V_14_14 = (MR_Integer) hlds__pred_table__V_6_6;

#line 335 "pred_table.m"
        {
#line 335 "pred_table.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__pred_table__V_8_8, hlds__pred_table__V_13_13, hlds__pred_table__V_14_14);
        }
#line 3035 "hlds.pred_table.c"
        hlds__pred_table__succeeded = (hlds__pred_table__V_8_8 == (MR_Integer) 0);
#line 335 "pred_table.m"
        hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 335 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 335 "pred_table.m"
          *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_8_8;
#line 335 "pred_table.m"
        else
#line 335 "pred_table.m"
          {
#line 335 "pred_table.m"
            MR_Integer hlds__pred_table__V_15_15 = (MR_Integer) hlds__pred_table__V_5_5;
#line 335 "pred_table.m"
            MR_Integer hlds__pred_table__V_16_16 = (MR_Integer) hlds__pred_table__V_7_7;

#line 335 "pred_table.m"
            {
#line 335 "pred_table.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(hlds__pred_table__HeadVar__1_1, hlds__pred_table__V_15_15, hlds__pred_table__V_16_16);
            }
#line 335 "pred_table.m"
          }
#line 335 "pred_table.m"
      }
#line 335 "pred_table.m"
  }
#line 335 "pred_table.m"
}

#line 335 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_accessibility_0_0(
#line 335 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 335 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 335 "pred_table.m"
{
#line 335 "pred_table.m"
  {
#line 335 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 335 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_7 = (MR_Integer) hlds__pred_table__HeadVar__1_1;
#line 335 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_8 = (MR_Integer) hlds__pred_table__HeadVar__2_2;

#line 335 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_7 == hlds__pred_table__CastY_8);
#line 335 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 335 "pred_table.m"
      hlds__pred_table__succeeded = MR_TRUE;
#line 335 "pred_table.m"
    else
#line 335 "pred_table.m"
      {
#line 335 "pred_table.m"
        MR_Word hlds__pred_table__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 0)));
#line 335 "pred_table.m"
        MR_Word hlds__pred_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 1)));
#line 335 "pred_table.m"
        MR_Word hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 335 "pred_table.m"
        MR_Word hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));

#line 3103 "hlds.pred_table.c"
        hlds__pred_table__succeeded = (hlds__pred_table__V_3_3 == hlds__pred_table__V_5_5);
#line 335 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 3107 "hlds.pred_table.c"
          hlds__pred_table__succeeded = (hlds__pred_table__V_4_4 == hlds__pred_table__V_6_6);
#line 335 "pred_table.m"
      }
#line 335 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 335 "pred_table.m"
  }
#line 335 "pred_table.m"
}

#line 354 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____module_name_arity_index_0_0(
#line 354 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 354 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 354 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 354 "pred_table.m"
{
#line 354 "pred_table.m"
  {
#line 354 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 354 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_4 = hlds__pred_table__HeadVar__2_2;
#line 354 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_5 = hlds__pred_table__HeadVar__3_3;

#line 354 "pred_table.m"
    {
#line 354 "pred_table.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[2], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__Cast_HeadVar1_4)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_5)));
    }
#line 354 "pred_table.m"
  }
#line 354 "pred_table.m"
}

#line 354 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____module_name_arity_index_0_0(
#line 354 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 354 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 354 "pred_table.m"
{
#line 354 "pred_table.m"
  {
#line 354 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 354 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_3 = hlds__pred_table__HeadVar__1_1;
#line 354 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_4 = hlds__pred_table__HeadVar__2_2;

#line 354 "pred_table.m"
    {
#line 354 "pred_table.m"
      hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pred_table_scalar_common_2[2], ((MR_Box) (hlds__pred_table__Cast_HeadVar1_3)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_4)));
    }
#line 354 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 354 "pred_table.m"
  }
#line 354 "pred_table.m"
}

#line 279 "pred_table.m"
void MR_CALL 
hlds__pred_table____Compare____mode_no_0_0(
#line 279 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 279 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 279 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 279 "pred_table.m"
{
#line 279 "pred_table.m"
  {
#line 279 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 279 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_8 = (MR_Integer) hlds__pred_table__HeadVar__2_2;
#line 279 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_9 = (MR_Integer) hlds__pred_table__HeadVar__3_3;

#line 279 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_8 == hlds__pred_table__CastY_9);
#line 279 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 3202 "hlds.pred_table.c"
      *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 0;
#line 279 "pred_table.m"
    else
#line 279 "pred_table.m"
    if ((hlds__pred_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 279 "pred_table.m"
      if ((hlds__pred_table__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 279 "pred_table.m"
        *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 0;
#line 279 "pred_table.m"
      else
#line 3214 "hlds.pred_table.c"
        *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 1;
#line 279 "pred_table.m"
    else
#line 279 "pred_table.m"
      {
#line 279 "pred_table.m"
        MR_Integer hlds__pred_table__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));

#line 279 "pred_table.m"
        if ((hlds__pred_table__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3225 "hlds.pred_table.c"
          *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 2;
#line 279 "pred_table.m"
        else
#line 279 "pred_table.m"
          {
#line 279 "pred_table.m"
            MR_Integer hlds__pred_table__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__3_3, (MR_Integer) 0)));

#line 279 "pred_table.m"
            {
#line 279 "pred_table.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(hlds__pred_table__HeadVar__1_1, hlds__pred_table__V_11_11, hlds__pred_table__V_7_7);
            }
#line 279 "pred_table.m"
          }
#line 279 "pred_table.m"
      }
#line 279 "pred_table.m"
  }
#line 279 "pred_table.m"
}

#line 279 "pred_table.m"
MR_bool MR_CALL 
hlds__pred_table____Unify____mode_no_0_0(
#line 279 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 279 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 279 "pred_table.m"
{
#line 279 "pred_table.m"
  {
#line 279 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 279 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_7 = (MR_Integer) hlds__pred_table__HeadVar__1_1;
#line 279 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_8 = (MR_Integer) hlds__pred_table__HeadVar__2_2;

#line 279 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_7 == hlds__pred_table__CastY_8);
#line 279 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 279 "pred_table.m"
      hlds__pred_table__succeeded = MR_TRUE;
#line 279 "pred_table.m"
    else
#line 279 "pred_table.m"
    if ((hlds__pred_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 279 "pred_table.m"
      {
#line 279 "pred_table.m"
        MR_Integer hlds__pred_table__CastX_3 = (MR_Integer) hlds__pred_table__HeadVar__1_1;
#line 279 "pred_table.m"
        MR_Integer hlds__pred_table__CastY_4 = (MR_Integer) hlds__pred_table__HeadVar__2_2;

#line 279 "pred_table.m"
        hlds__pred_table__succeeded = (hlds__pred_table__CastY_4 == hlds__pred_table__CastX_3);
#line 279 "pred_table.m"
      }
#line 279 "pred_table.m"
    else
#line 279 "pred_table.m"
      {
#line 279 "pred_table.m"
        MR_Integer hlds__pred_table__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__1_1, (MR_Integer) 0)));
#line 279 "pred_table.m"
        MR_Integer hlds__pred_table__V_6_6;

#line 279 "pred_table.m"
        hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 279 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 279 "pred_table.m"
          {
#line 279 "pred_table.m"
            hlds__pred_table__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 3304 "hlds.pred_table.c"
            hlds__pred_table__succeeded = (hlds__pred_table__V_5_5 == hlds__pred_table__V_6_6);
#line 279 "pred_table.m"
          }
#line 279 "pred_table.m"
      }
#line 279 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 279 "pred_table.m"
  }
#line 279 "pred_table.m"
}

#line 147 "pred_table.m"
void MR_CALL 
hlds__pred_table____Compare____is_fully_qualified_0_0(
#line 147 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 147 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 147 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 147 "pred_table.m"
{
#line 147 "pred_table.m"
  {
#line 147 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 147 "pred_table.m"
    MR_Integer hlds__pred_table__Cast_HeadVar1_4 = (MR_Integer) hlds__pred_table__HeadVar__2_2;
#line 147 "pred_table.m"
    MR_Integer hlds__pred_table__Cast_HeadVar2_5 = (MR_Integer) hlds__pred_table__HeadVar__3_3;

#line 147 "pred_table.m"
    {
#line 147 "pred_table.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__pred_table__HeadVar__1_1, hlds__pred_table__Cast_HeadVar1_4, hlds__pred_table__Cast_HeadVar2_5);
    }
#line 147 "pred_table.m"
  }
#line 147 "pred_table.m"
}

#line 147 "pred_table.m"
MR_bool MR_CALL 
hlds__pred_table____Unify____is_fully_qualified_0_0(
#line 147 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_1,
#line 147 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 147 "pred_table.m"
{
#line 3356 "hlds.pred_table.c"
  {
#line 3358 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded = (hlds__pred_table__HeadVar__2_1 == hlds__pred_table__HeadVar__2_2);

#line 3361 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 3363 "hlds.pred_table.c"
  }
#line 147 "pred_table.m"
}

#line 255 "pred_table.m"
void MR_CALL 
hlds__pred_table____Compare____constraint_search_0_0(
#line 255 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 255 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 255 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 255 "pred_table.m"
{
#line 255 "pred_table.m"
  {
#line 255 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 255 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_4 = hlds__pred_table__HeadVar__2_2;
#line 255 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_5 = hlds__pred_table__HeadVar__3_3;

#line 255 "pred_table.m"
    {
#line 255 "pred_table.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_3[0], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__Cast_HeadVar1_4)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_5)));
    }
#line 255 "pred_table.m"
  }
#line 255 "pred_table.m"
}

#line 255 "pred_table.m"
MR_bool MR_CALL 
hlds__pred_table____Unify____constraint_search_0_0(
#line 255 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 255 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 255 "pred_table.m"
{
#line 255 "pred_table.m"
  {
#line 255 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 255 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_3 = hlds__pred_table__HeadVar__1_1;
#line 255 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_4 = hlds__pred_table__HeadVar__2_2;

#line 255 "pred_table.m"
    {
#line 255 "pred_table.m"
      hlds__pred_table__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__pred_table__Cast_HeadVar1_3, (MR_Word) hlds__pred_table__Cast_HeadVar2_4);
    }
#line 255 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 255 "pred_table.m"
  }
#line 255 "pred_table.m"
}

#line 333 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____accessibility_table_0_0(
#line 333 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 333 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 333 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 333 "pred_table.m"
{
#line 333 "pred_table.m"
  {
#line 333 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 333 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_4 = hlds__pred_table__HeadVar__2_2;
#line 333 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_5 = hlds__pred_table__HeadVar__3_3;

#line 333 "pred_table.m"
    {
#line 333 "pred_table.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[3], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__Cast_HeadVar1_4)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_5)));
    }
#line 333 "pred_table.m"
  }
#line 333 "pred_table.m"
}

#line 333 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____accessibility_table_0_0(
#line 333 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 333 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 333 "pred_table.m"
{
#line 333 "pred_table.m"
  {
#line 333 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 333 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_3 = hlds__pred_table__HeadVar__1_1;
#line 333 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_4 = hlds__pred_table__HeadVar__2_2;

#line 333 "pred_table.m"
    {
#line 333 "pred_table.m"
      hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pred_table_scalar_common_2[3], ((MR_Box) (hlds__pred_table__Cast_HeadVar1_3)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_4)));
    }
#line 333 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 333 "pred_table.m"
  }
#line 333 "pred_table.m"
}

#line 1074 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__univ_constraints_match_2_p_0(
#line 1074 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 1074 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 1074 "pred_table.m"
{
#line 1077 "pred_table.m"
  while (MR_TRUE)
#line 1077 "pred_table.m"
    {
#line 1077 "pred_table.m"
      /* tailcall optimized into a loop */
#line 1077 "pred_table.m"
      {
#line 1077 "pred_table.m"
        MR_bool hlds__pred_table__succeeded;

#line 1077 "pred_table.m"
        if ((hlds__pred_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1077 "pred_table.m"
          hlds__pred_table__succeeded = (hlds__pred_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1077 "pred_table.m"
        else
#line 1079 "pred_table.m"
          {
#line 1079 "pred_table.m"
            MR_Word hlds__pred_table__TypeCtorInfo_11_11;
#line 1079 "pred_table.m"
            MR_Word hlds__pred_table__ProvenConstraint_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__1_1, (MR_Integer) 0)));
#line 1079 "pred_table.m"
            MR_Word hlds__pred_table__ProvenConstraints_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__1_1, (MR_Integer) 1)));
#line 1079 "pred_table.m"
            MR_Word hlds__pred_table__CalleeConstraint_5;
#line 1079 "pred_table.m"
            MR_Word hlds__pred_table__CalleeConstraints_6;
#line 1079 "pred_table.m"
            MR_Word hlds__pred_table__ClassName_7;
#line 1079 "pred_table.m"
            MR_Word hlds__pred_table__ProvenArgTypes_8;
#line 1079 "pred_table.m"
            MR_Integer hlds__pred_table__Arity_9;
#line 1079 "pred_table.m"
            MR_Word hlds__pred_table__CalleeArgTypes_10;
#line 1079 "pred_table.m"
            MR_Word hlds__pred_table__V_12_12;
#line 1079 "pred_table.m"
            MR_Integer hlds__pred_table__V_13_13;

#line 1079 "pred_table.m"
            hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1079 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 1079 "pred_table.m"
              {
#line 1079 "pred_table.m"
                hlds__pred_table__CalleeConstraint_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 1079 "pred_table.m"
                hlds__pred_table__CalleeConstraints_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));
#line 1080 "pred_table.m"
                hlds__pred_table__ClassName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__ProvenConstraint_3, (MR_Integer) 0)));
#line 1080 "pred_table.m"
                hlds__pred_table__ProvenArgTypes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__ProvenConstraint_3, (MR_Integer) 1)));
#line 3553 "hlds.pred_table.c"
                hlds__pred_table__TypeCtorInfo_11_11 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1081 "pred_table.m"
                {
#line 1081 "pred_table.m"
                  mercury__list__length_2_p_0(hlds__pred_table__TypeCtorInfo_11_11, hlds__pred_table__ProvenArgTypes_8, &hlds__pred_table__Arity_9);
                }
#line 1082 "pred_table.m"
                hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__CalleeConstraint_5, (MR_Integer) 0)));
#line 1082 "pred_table.m"
                hlds__pred_table__CalleeArgTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__CalleeConstraint_5, (MR_Integer) 1)));
#line 1082 "pred_table.m"
                {
#line 1082 "pred_table.m"
                  hlds__pred_table__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__pred_table__ClassName_7, hlds__pred_table__V_12_12);
                }
#line 1079 "pred_table.m"
                if (hlds__pred_table__succeeded)
#line 1079 "pred_table.m"
                  {
#line 1083 "pred_table.m"
                    {
#line 1083 "pred_table.m"
                      mercury__list__length_2_p_0(hlds__pred_table__TypeCtorInfo_11_11, hlds__pred_table__CalleeArgTypes_10, &hlds__pred_table__V_13_13);
                    }
#line 1083 "pred_table.m"
                    hlds__pred_table__succeeded = (hlds__pred_table__Arity_9 == hlds__pred_table__V_13_13);
#line 1079 "pred_table.m"
                    if (hlds__pred_table__succeeded)
#line 1084 "pred_table.m"
                      {
#line 1084 "pred_table.m"
                        /* direct tailcall eliminated */
#line 1084 "pred_table.m"
                        {
#line 1084 "pred_table.m"
                          MR_Word hlds__pred_table__HeadVar__1__tmp_copy_1 = hlds__pred_table__ProvenConstraints_4;
#line 1084 "pred_table.m"
                          MR_Word hlds__pred_table__HeadVar__2__tmp_copy_2 = hlds__pred_table__CalleeConstraints_6;

#line 1084 "pred_table.m"
                          hlds__pred_table__HeadVar__2_2 = hlds__pred_table__HeadVar__2__tmp_copy_2;
#line 1084 "pred_table.m"
                          hlds__pred_table__HeadVar__1_1 = hlds__pred_table__HeadVar__1__tmp_copy_1;
#line 1084 "pred_table.m"
                        }
#line 1084 "pred_table.m"
                        continue;
#line 1084 "pred_table.m"
                      }
#line 1079 "pred_table.m"
                  }
#line 1079 "pred_table.m"
              }
#line 1079 "pred_table.m"
          }
#line 1077 "pred_table.m"
        return hlds__pred_table__succeeded;
#line 1077 "pred_table.m"
      }
#line 1077 "pred_table.m"
      break;
#line 1077 "pred_table.m"
    }
#line 1074 "pred_table.m"
}

#line 964 "pred_table.m"
static void MR_CALL 
hlds__pred_table__insert_into_mna_index_6_p_0(
#line 964 "pred_table.m"
  MR_String hlds__pred_table__Name_7,
#line 964 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_8,
#line 964 "pred_table.m"
  MR_Word hlds__pred_table__PredId_9,
#line 964 "pred_table.m"
  MR_Word hlds__pred_table__Module_10,
#line 964 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_MNA_Index_0_14,
#line 964 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_MNA_Index_15)
#line 964 "pred_table.m"
{
#line 969 "pred_table.m"
  {
#line 969 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 969 "pred_table.m"
    MR_Word hlds__pred_table__MN_Arities0_12;
#line 969 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16;
#line 969 "pred_table.m"
    MR_Box hlds__pred_table__conv0_MN_Arities0_12;

#line 969 "pred_table.m"
    {
#line 969 "pred_table.m"
      hlds__pred_table__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 969 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_16_16, 0) = ((MR_Box) (hlds__pred_table__Module_10));
#line 969 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_16_16, 1) = ((MR_Box) (hlds__pred_table__Name_7));
#line 969 "pred_table.m"
    }
#line 969 "pred_table.m"
    {
#line 969 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__STATE_VARIABLE_MNA_Index_0_14, ((MR_Box) (hlds__pred_table__V_16_16)), &hlds__pred_table__conv0_MN_Arities0_12);
    }
#line 969 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 969 "pred_table.m"
      {
#line 969 "pred_table.m"
        hlds__pred_table__MN_Arities0_12 = ((MR_Word) hlds__pred_table__conv0_MN_Arities0_12);
#line 969 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 969 "pred_table.m"
      }
#line 969 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 970 "pred_table.m"
      {
#line 970 "pred_table.m"
        MR_Word hlds__pred_table__MN_Arities_13;

#line 970 "pred_table.m"
        {
#line 970 "pred_table.m"
          mercury__multi_map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (hlds__pred_table__Arity_8)), ((MR_Box) (hlds__pred_table__PredId_9)), hlds__pred_table__MN_Arities0_12, &hlds__pred_table__MN_Arities_13);
        }
#line 971 "pred_table.m"
        {
#line 971 "pred_table.m"
          mercury__map__det_update_4_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], ((MR_Box) (hlds__pred_table__V_16_16)), ((MR_Box) (hlds__pred_table__MN_Arities_13)), hlds__pred_table__STATE_VARIABLE_MNA_Index_0_14, hlds__pred_table__STATE_VARIABLE_MNA_Index_15);
        }
#line 970 "pred_table.m"
      }
#line 969 "pred_table.m"
    else
#line 973 "pred_table.m"
      {
#line 973 "pred_table.m"
        MR_Word hlds__pred_table__V_19_19;
#line 973 "pred_table.m"
        MR_Word hlds__pred_table__V_21_21;
#line 973 "pred_table.m"
        MR_Word hlds__pred_table__MN_Arities_23;

#line 973 "pred_table.m"
        {
#line 973 "pred_table.m"
          hlds__pred_table__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 973 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_19_19, 0) = ((MR_Box) (hlds__pred_table__PredId_9));
#line 973 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 973 "pred_table.m"
        }
#line 973 "pred_table.m"
        {
#line 973 "pred_table.m"
          hlds__pred_table__MN_Arities_23 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], ((MR_Box) (hlds__pred_table__Arity_8)), ((MR_Box) (hlds__pred_table__V_19_19)));
        }
#line 974 "pred_table.m"
        {
#line 974 "pred_table.m"
          hlds__pred_table__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 974 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_21_21, 0) = ((MR_Box) (hlds__pred_table__Module_10));
#line 974 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_21_21, 1) = ((MR_Box) (hlds__pred_table__Name_7));
#line 974 "pred_table.m"
        }
#line 974 "pred_table.m"
        {
#line 974 "pred_table.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], ((MR_Box) (hlds__pred_table__V_21_21)), ((MR_Box) (hlds__pred_table__MN_Arities_23)), hlds__pred_table__STATE_VARIABLE_MNA_Index_0_14, hlds__pred_table__STATE_VARIABLE_MNA_Index_15);
        }
#line 973 "pred_table.m"
      }
#line 969 "pred_table.m"
  }
#line 964 "pred_table.m"
}

#line 950 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_do_insert_14_p_0_1(
#line 950 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 950 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 950 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 950 "pred_table.m"
  MR_Box * hlds__pred_table__wrapper_arg_3)
#line 950 "pred_table.m"
{
#line 950 "pred_table.m"
  {
#line 950 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;
#line 950 "pred_table.m"
    MR_Word hlds__pred_table__conv0_STATE_VARIABLE_MNA_Index_15;

#line 950 "pred_table.m"
    {
#line 950 "pred_table.m"
      hlds__pred_table__insert_into_mna_index_6_p_0(((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 5))), ((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2), &hlds__pred_table__conv0_STATE_VARIABLE_MNA_Index_15);
    }
#line 950 "pred_table.m"
    *hlds__pred_table__wrapper_arg_3 = ((MR_Box) (hlds__pred_table__conv0_STATE_VARIABLE_MNA_Index_15));
#line 950 "pred_table.m"
  }
#line 950 "pred_table.m"
}

#line 921 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_do_insert_14_p_0(
#line 921 "pred_table.m"
  MR_Word hlds__pred_table__Module_15,
#line 921 "pred_table.m"
  MR_String hlds__pred_table__Name_16,
#line 921 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_17,
#line 921 "pred_table.m"
  MR_Word hlds__pred_table__NeedQual_18,
#line 921 "pred_table.m"
  MR_Word hlds__pred_table__MaybeQualInfo_19,
#line 921 "pred_table.m"
  MR_Word hlds__pred_table__PredId_20,
#line 921 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_AccessibilityTable_0_31,
#line 921 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_AccessibilityTable_32,
#line 921 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_N_Index_0_33,
#line 921 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_N_Index_34,
#line 921 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_NA_Index_0_35,
#line 921 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_NA_Index_36,
#line 921 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_MNA_Index_0_37,
#line 921 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_MNA_Index_38)
#line 921 "pred_table.m"
{
#line 929 "pred_table.m"
  {
#line 929 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 929 "pred_table.m"
    MR_Word hlds__pred_table__AccessibleByUnqualifiedName_26;
#line 929 "pred_table.m"
    MR_Word hlds__pred_table__AccessibleByPartiallyQualifiedNames_29;
#line 929 "pred_table.m"
    MR_Word hlds__pred_table__Access_30;
#line 929 "pred_table.m"
    MR_Word hlds__pred_table__STATE_VARIABLE_MNA_Index_42_42;

#line 940 "pred_table.m"
#line 940 "pred_table.m"
    switch (hlds__pred_table__NeedQual_18) {
#line 940 "pred_table.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 940 "pred_table.m"
      case (MR_Integer) 1:
#line 931 "pred_table.m"
        {
#line 931 "pred_table.m"
          MR_Word hlds__pred_table__TypeCtorInfo_46_46 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 931 "pred_table.m"
          MR_Word hlds__pred_table__NA_25;

#line 933 "pred_table.m"
          {
#line 933 "pred_table.m"
            mercury__multi_map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__pred_table__TypeCtorInfo_46_46, ((MR_Box) (hlds__pred_table__Name_16)), ((MR_Box) (hlds__pred_table__PredId_20)), hlds__pred_table__STATE_VARIABLE_N_Index_0_33, hlds__pred_table__STATE_VARIABLE_N_Index_34);
          }
#line 936 "pred_table.m"
          {
#line 936 "pred_table.m"
            hlds__pred_table__NA_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 936 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__NA_25, 0) = ((MR_Box) (hlds__pred_table__Name_16));
#line 936 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__NA_25, 1) = ((MR_Box) (hlds__pred_table__Arity_17));
#line 936 "pred_table.m"
          }
#line 937 "pred_table.m"
          {
#line 937 "pred_table.m"
            mercury__multi_map__set_4_p_0((MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0, hlds__pred_table__TypeCtorInfo_46_46, ((MR_Box) (hlds__pred_table__NA_25)), ((MR_Box) (hlds__pred_table__PredId_20)), hlds__pred_table__STATE_VARIABLE_NA_Index_0_35, hlds__pred_table__STATE_VARIABLE_NA_Index_36);
          }
#line 939 "pred_table.m"
          hlds__pred_table__AccessibleByUnqualifiedName_26 = (MR_Integer) 1;
#line 931 "pred_table.m"
        }
#line 940 "pred_table.m"
        break;
#line 940 "pred_table.m"
      case (MR_Integer) 0:
#line 941 "pred_table.m"
        {
#line 942 "pred_table.m"
          hlds__pred_table__AccessibleByUnqualifiedName_26 = (MR_Integer) 0;
#line 941 "pred_table.m"
          *hlds__pred_table__STATE_VARIABLE_N_Index_34 = hlds__pred_table__STATE_VARIABLE_N_Index_0_33;
#line 941 "pred_table.m"
          *hlds__pred_table__STATE_VARIABLE_NA_Index_36 = hlds__pred_table__STATE_VARIABLE_NA_Index_0_35;
#line 941 "pred_table.m"
        }
#line 940 "pred_table.m"
        break;
#line 940 "pred_table.m"
    }
#line 954 "pred_table.m"
    if ((hlds__pred_table__MaybeQualInfo_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 955 "pred_table.m"
      {
#line 956 "pred_table.m"
        hlds__pred_table__AccessibleByPartiallyQualifiedNames_29 = (MR_Integer) 0;
#line 955 "pred_table.m"
        hlds__pred_table__STATE_VARIABLE_MNA_Index_42_42 = hlds__pred_table__STATE_VARIABLE_MNA_Index_0_37;
#line 955 "pred_table.m"
      }
#line 954 "pred_table.m"
    else
#line 945 "pred_table.m"
      {
#line 945 "pred_table.m"
        MR_Word hlds__pred_table__QualInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__MaybeQualInfo_19, (MR_Integer) 0)));
#line 945 "pred_table.m"
        MR_Word hlds__pred_table__PartialQuals_28;
#line 945 "pred_table.m"
        MR_Word hlds__pred_table__V_41_41;
#line 950 "pred_table.m"
        MR_Box hlds__pred_table__conv1_STATE_VARIABLE_MNA_Index_42_42;

#line 949 "pred_table.m"
        {
#line 949 "pred_table.m"
          parse_tree__module_qual__get_partial_qualifiers_3_p_0(hlds__pred_table__Module_15, hlds__pred_table__QualInfo_27, &hlds__pred_table__PartialQuals_28);
        }
#line 950 "pred_table.m"
        {
#line 950 "pred_table.m"
          hlds__pred_table__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 950 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_4[1]));
#line 950 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 1) = ((MR_Box) (hlds__pred_table__predicate_table_do_insert_14_p_0_1));
#line 950 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 950 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 3) = ((MR_Box) (hlds__pred_table__Name_16));
#line 950 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 4) = ((MR_Box) (hlds__pred_table__Arity_17));
#line 950 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 5) = ((MR_Box) (hlds__pred_table__PredId_20));
#line 950 "pred_table.m"
        }
#line 950 "pred_table.m"
        {
#line 950 "pred_table.m"
          mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__pred_table_scalar_common_2[2], hlds__pred_table__V_41_41, hlds__pred_table__PartialQuals_28, ((MR_Box) (hlds__pred_table__STATE_VARIABLE_MNA_Index_0_37)), &hlds__pred_table__conv1_STATE_VARIABLE_MNA_Index_42_42);
        }
#line 950 "pred_table.m"
        hlds__pred_table__STATE_VARIABLE_MNA_Index_42_42 = ((MR_Word) hlds__pred_table__conv1_STATE_VARIABLE_MNA_Index_42_42);
#line 953 "pred_table.m"
        hlds__pred_table__AccessibleByPartiallyQualifiedNames_29 = (MR_Integer) 1;
#line 945 "pred_table.m"
      }
#line 959 "pred_table.m"
    {
#line 959 "pred_table.m"
      hlds__pred_table__insert_into_mna_index_6_p_0(hlds__pred_table__Name_16, hlds__pred_table__Arity_17, hlds__pred_table__PredId_20, hlds__pred_table__Module_15, hlds__pred_table__STATE_VARIABLE_MNA_Index_42_42, hlds__pred_table__STATE_VARIABLE_MNA_Index_38);
    }
#line 960 "pred_table.m"
    {
#line 960 "pred_table.m"
      hlds__pred_table__Access_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 960 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__Access_30, 0) = ((MR_Box) (hlds__pred_table__AccessibleByUnqualifiedName_26));
#line 960 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__Access_30, 1) = ((MR_Box) (hlds__pred_table__AccessibleByPartiallyQualifiedNames_29));
#line 960 "pred_table.m"
    }
#line 962 "pred_table.m"
    {
#line 962 "pred_table.m"
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0, ((MR_Box) (hlds__pred_table__PredId_20)), ((MR_Box) (hlds__pred_table__Access_30)), hlds__pred_table__STATE_VARIABLE_AccessibilityTable_0_31, hlds__pred_table__STATE_VARIABLE_AccessibilityTable_32);
    }
#line 929 "pred_table.m"
  }
#line 921 "pred_table.m"
}

#line 950 "pred_table.m"
static void MR_CALL 
hlds__pred_table__do_predicate_table_insert_7_p_0_1(
#line 950 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 950 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 950 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 950 "pred_table.m"
  MR_Box * hlds__pred_table__wrapper_arg_3)
#line 950 "pred_table.m"
{
#line 950 "pred_table.m"
  {
#line 950 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;
#line 950 "pred_table.m"
    MR_Word hlds__pred_table__conv0_STATE_VARIABLE_MNA_Index_15;

#line 950 "pred_table.m"
    {
#line 950 "pred_table.m"
      hlds__pred_table__insert_into_mna_index_6_p_0(((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 5))), ((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2), &hlds__pred_table__conv0_STATE_VARIABLE_MNA_Index_15);
    }
#line 950 "pred_table.m"
    *hlds__pred_table__wrapper_arg_3 = ((MR_Box) (hlds__pred_table__conv0_STATE_VARIABLE_MNA_Index_15));
#line 950 "pred_table.m"
  }
#line 950 "pred_table.m"
}

#line 860 "pred_table.m"
static void MR_CALL 
hlds__pred_table__do_predicate_table_insert_7_p_0(
#line 860 "pred_table.m"
  MR_Word hlds__pred_table__MaybePredId_8,
#line 860 "pred_table.m"
  MR_Word hlds__pred_table__PredInfo_9,
#line 860 "pred_table.m"
  MR_Word hlds__pred_table__NeedQual_10,
#line 860 "pred_table.m"
  MR_Word hlds__pred_table__MaybeQualInfo_11,
#line 860 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_12,
#line 860 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39,
#line 860 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_40)
#line 860 "pred_table.m"
{
#line 865 "pred_table.m"
  {
#line 865 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 865 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_43_43;
#line 865 "pred_table.m"
    MR_Word hlds__pred_table__Preds0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 0)));
#line 865 "pred_table.m"
    MR_Word hlds__pred_table__NextPredId0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 1)));
#line 865 "pred_table.m"
    MR_Word hlds__pred_table__ValidPredIds0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 2)));
#line 865 "pred_table.m"
    MR_Word hlds__pred_table__AccessibilityTable0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 3)));
#line 865 "pred_table.m"
    MR_Word hlds__pred_table__Pred_N_Index0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 4)));
#line 865 "pred_table.m"
    MR_Word hlds__pred_table__Pred_NA_Index0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 5)));
#line 865 "pred_table.m"
    MR_Word hlds__pred_table__Pred_MNA_Index0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 6)));
#line 865 "pred_table.m"
    MR_Word hlds__pred_table__Func_N_Index0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 7)));
#line 865 "pred_table.m"
    MR_Word hlds__pred_table__Func_NA_Index0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 8)));
#line 865 "pred_table.m"
    MR_Word hlds__pred_table__Func_MNA_Index0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 9)));
#line 865 "pred_table.m"
    MR_Word hlds__pred_table__Module_24;
#line 865 "pred_table.m"
    MR_String hlds__pred_table__Name_25;
#line 865 "pred_table.m"
    MR_Integer hlds__pred_table__Arity_26;
#line 865 "pred_table.m"
    MR_Word hlds__pred_table__NextPredId_27;
#line 865 "pred_table.m"
    MR_Word hlds__pred_table__PredOrFunc_28;
#line 865 "pred_table.m"
    MR_Word hlds__pred_table__AccessibilityTable_29;
#line 865 "pred_table.m"
    MR_Word hlds__pred_table__Pred_N_Index_30;
#line 865 "pred_table.m"
    MR_Word hlds__pred_table__Pred_NA_Index_31;
#line 865 "pred_table.m"
    MR_Word hlds__pred_table__Pred_MNA_Index_32;
#line 865 "pred_table.m"
    MR_Word hlds__pred_table__Func_N_Index_33;
#line 865 "pred_table.m"
    MR_Word hlds__pred_table__Func_NA_Index_34;
#line 865 "pred_table.m"
    MR_Word hlds__pred_table__Func_MNA_Index_35;
#line 865 "pred_table.m"
    MR_Word hlds__pred_table__Preds_37;
#line 865 "pred_table.m"
    MR_Word hlds__pred_table__ValidPredIds_38;

#line 870 "pred_table.m"
    {
#line 870 "pred_table.m"
      hlds__pred_table__Module_24 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__pred_table__PredInfo_9);
    }
#line 871 "pred_table.m"
    {
#line 871 "pred_table.m"
      hlds__pred_table__Name_25 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__pred_table__PredInfo_9);
    }
#line 872 "pred_table.m"
    {
#line 872 "pred_table.m"
      hlds__pred_table__Arity_26 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__pred_table__PredInfo_9);
    }
#line 876 "pred_table.m"
    if ((hlds__pred_table__MaybePredId_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 878 "pred_table.m"
      {
#line 879 "pred_table.m"
        *hlds__pred_table__PredId_12 = hlds__pred_table__NextPredId0_15;
#line 880 "pred_table.m"
        {
#line 880 "pred_table.m"
          hlds__hlds_pred__next_pred_id_2_p_0(*hlds__pred_table__PredId_12, &hlds__pred_table__NextPredId_27);
        }
#line 878 "pred_table.m"
      }
#line 876 "pred_table.m"
    else
#line 874 "pred_table.m"
      {
#line 874 "pred_table.m"
        *hlds__pred_table__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__MaybePredId_8, (MR_Integer) 0)));
#line 875 "pred_table.m"
        hlds__pred_table__NextPredId_27 = hlds__pred_table__NextPredId0_15;
#line 874 "pred_table.m"
      }
#line 884 "pred_table.m"
    {
#line 884 "pred_table.m"
      hlds__pred_table__PredOrFunc_28 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__pred_table__PredInfo_9);
    }
#line 897 "pred_table.m"
#line 897 "pred_table.m"
    switch (hlds__pred_table__PredOrFunc_28) {
#line 897 "pred_table.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 897 "pred_table.m"
      case (MR_Integer) 1:
#line 898 "pred_table.m"
        {
#line 898 "pred_table.m"
          MR_Integer hlds__pred_table__FuncArity_36 = (hlds__pred_table__Arity_26 - (MR_Integer) 1);
#line 898 "pred_table.m"
          MR_Word hlds__pred_table__AccessibleByUnqualifiedName_64;
#line 898 "pred_table.m"
          MR_Word hlds__pred_table__AccessibleByPartiallyQualifiedNames_67;
#line 898 "pred_table.m"
          MR_Word hlds__pred_table__Access_68;
#line 898 "pred_table.m"
          MR_Word hlds__pred_table__STATE_VARIABLE_MNA_Index_42_72;

#line 940 "pred_table.m"
#line 940 "pred_table.m"
          switch (hlds__pred_table__NeedQual_10) {
#line 940 "pred_table.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 940 "pred_table.m"
            case (MR_Integer) 1:
#line 931 "pred_table.m"
              {
#line 931 "pred_table.m"
                MR_Word hlds__pred_table__TypeCtorInfo_46_76 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 931 "pred_table.m"
                MR_Word hlds__pred_table__NA_63;

#line 933 "pred_table.m"
                {
#line 933 "pred_table.m"
                  mercury__multi_map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__pred_table__TypeCtorInfo_46_76, ((MR_Box) (hlds__pred_table__Name_25)), ((MR_Box) (*hlds__pred_table__PredId_12)), hlds__pred_table__Func_N_Index0_21, &hlds__pred_table__Func_N_Index_33);
                }
#line 936 "pred_table.m"
                {
#line 936 "pred_table.m"
                  hlds__pred_table__NA_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 936 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__NA_63, 0) = ((MR_Box) (hlds__pred_table__Name_25));
#line 936 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__NA_63, 1) = ((MR_Box) (hlds__pred_table__FuncArity_36));
#line 936 "pred_table.m"
                }
#line 937 "pred_table.m"
                {
#line 937 "pred_table.m"
                  mercury__multi_map__set_4_p_0((MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0, hlds__pred_table__TypeCtorInfo_46_76, ((MR_Box) (hlds__pred_table__NA_63)), ((MR_Box) (*hlds__pred_table__PredId_12)), hlds__pred_table__Func_NA_Index0_22, &hlds__pred_table__Func_NA_Index_34);
                }
#line 939 "pred_table.m"
                hlds__pred_table__AccessibleByUnqualifiedName_64 = (MR_Integer) 1;
#line 931 "pred_table.m"
              }
#line 940 "pred_table.m"
              break;
#line 940 "pred_table.m"
            case (MR_Integer) 0:
#line 941 "pred_table.m"
              {
#line 942 "pred_table.m"
                hlds__pred_table__AccessibleByUnqualifiedName_64 = (MR_Integer) 0;
#line 941 "pred_table.m"
                hlds__pred_table__Func_N_Index_33 = hlds__pred_table__Func_N_Index0_21;
#line 941 "pred_table.m"
                hlds__pred_table__Func_NA_Index_34 = hlds__pred_table__Func_NA_Index0_22;
#line 941 "pred_table.m"
              }
#line 940 "pred_table.m"
              break;
#line 940 "pred_table.m"
          }
#line 954 "pred_table.m"
          if ((hlds__pred_table__MaybeQualInfo_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 955 "pred_table.m"
            {
#line 956 "pred_table.m"
              hlds__pred_table__AccessibleByPartiallyQualifiedNames_67 = (MR_Integer) 0;
#line 955 "pred_table.m"
              hlds__pred_table__STATE_VARIABLE_MNA_Index_42_72 = hlds__pred_table__Func_MNA_Index0_23;
#line 955 "pred_table.m"
            }
#line 954 "pred_table.m"
          else
#line 945 "pred_table.m"
            {
#line 945 "pred_table.m"
              MR_Word hlds__pred_table__QualInfo_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__MaybeQualInfo_11, (MR_Integer) 0)));
#line 945 "pred_table.m"
              MR_Word hlds__pred_table__PartialQuals_66;
#line 945 "pred_table.m"
              MR_Word hlds__pred_table__V_71_71;
#line 950 "pred_table.m"
              MR_Box hlds__pred_table__conv1_STATE_VARIABLE_MNA_Index_42_72;

#line 949 "pred_table.m"
              {
#line 949 "pred_table.m"
                parse_tree__module_qual__get_partial_qualifiers_3_p_0(hlds__pred_table__Module_24, hlds__pred_table__QualInfo_65, &hlds__pred_table__PartialQuals_66);
              }
#line 950 "pred_table.m"
              {
#line 950 "pred_table.m"
                hlds__pred_table__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 950 "pred_table.m"
                MR_hl_field(MR_mktag(0), hlds__pred_table__V_71_71, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_4[1]));
#line 950 "pred_table.m"
                MR_hl_field(MR_mktag(0), hlds__pred_table__V_71_71, 1) = ((MR_Box) (hlds__pred_table__do_predicate_table_insert_7_p_0_1));
#line 950 "pred_table.m"
                MR_hl_field(MR_mktag(0), hlds__pred_table__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 950 "pred_table.m"
                MR_hl_field(MR_mktag(0), hlds__pred_table__V_71_71, 3) = ((MR_Box) (hlds__pred_table__Name_25));
#line 950 "pred_table.m"
                MR_hl_field(MR_mktag(0), hlds__pred_table__V_71_71, 4) = ((MR_Box) (hlds__pred_table__FuncArity_36));
#line 950 "pred_table.m"
                MR_hl_field(MR_mktag(0), hlds__pred_table__V_71_71, 5) = ((MR_Box) (*hlds__pred_table__PredId_12));
#line 950 "pred_table.m"
              }
#line 950 "pred_table.m"
              {
#line 950 "pred_table.m"
                mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__pred_table_scalar_common_2[2], hlds__pred_table__V_71_71, hlds__pred_table__PartialQuals_66, ((MR_Box) (hlds__pred_table__Func_MNA_Index0_23)), &hlds__pred_table__conv1_STATE_VARIABLE_MNA_Index_42_72);
              }
#line 950 "pred_table.m"
              hlds__pred_table__STATE_VARIABLE_MNA_Index_42_72 = ((MR_Word) hlds__pred_table__conv1_STATE_VARIABLE_MNA_Index_42_72);
#line 953 "pred_table.m"
              hlds__pred_table__AccessibleByPartiallyQualifiedNames_67 = (MR_Integer) 1;
#line 945 "pred_table.m"
            }
#line 959 "pred_table.m"
          {
#line 959 "pred_table.m"
            hlds__pred_table__insert_into_mna_index_6_p_0(hlds__pred_table__Name_25, hlds__pred_table__FuncArity_36, *hlds__pred_table__PredId_12, hlds__pred_table__Module_24, hlds__pred_table__STATE_VARIABLE_MNA_Index_42_72, &hlds__pred_table__Func_MNA_Index_35);
          }
#line 960 "pred_table.m"
          {
#line 960 "pred_table.m"
            hlds__pred_table__Access_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 960 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__Access_68, 0) = ((MR_Box) (hlds__pred_table__AccessibleByUnqualifiedName_64));
#line 960 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__Access_68, 1) = ((MR_Box) (hlds__pred_table__AccessibleByPartiallyQualifiedNames_67));
#line 960 "pred_table.m"
          }
#line 962 "pred_table.m"
          {
#line 962 "pred_table.m"
            mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0, ((MR_Box) (*hlds__pred_table__PredId_12)), ((MR_Box) (hlds__pred_table__Access_68)), hlds__pred_table__AccessibilityTable0_17, &hlds__pred_table__AccessibilityTable_29);
          }
#line 907 "pred_table.m"
          hlds__pred_table__Pred_N_Index_30 = hlds__pred_table__Pred_N_Index0_18;
#line 908 "pred_table.m"
          hlds__pred_table__Pred_NA_Index_31 = hlds__pred_table__Pred_NA_Index0_19;
#line 909 "pred_table.m"
          hlds__pred_table__Pred_MNA_Index_32 = hlds__pred_table__Pred_MNA_Index0_20;
#line 898 "pred_table.m"
        }
#line 897 "pred_table.m"
        break;
#line 897 "pred_table.m"
      case (MR_Integer) 0:
#line 886 "pred_table.m"
        {
#line 887 "pred_table.m"
          {
#line 887 "pred_table.m"
            hlds__pred_table__predicate_table_do_insert_14_p_0(hlds__pred_table__Module_24, hlds__pred_table__Name_25, hlds__pred_table__Arity_26, hlds__pred_table__NeedQual_10, hlds__pred_table__MaybeQualInfo_11, *hlds__pred_table__PredId_12, hlds__pred_table__AccessibilityTable0_17, &hlds__pred_table__AccessibilityTable_29, hlds__pred_table__Pred_N_Index0_18, &hlds__pred_table__Pred_N_Index_30, hlds__pred_table__Pred_NA_Index0_19, &hlds__pred_table__Pred_NA_Index_31, hlds__pred_table__Pred_MNA_Index0_20, &hlds__pred_table__Pred_MNA_Index_32);
          }
#line 894 "pred_table.m"
          hlds__pred_table__Func_N_Index_33 = hlds__pred_table__Func_N_Index0_21;
#line 895 "pred_table.m"
          hlds__pred_table__Func_NA_Index_34 = hlds__pred_table__Func_NA_Index0_22;
#line 896 "pred_table.m"
          hlds__pred_table__Func_MNA_Index_35 = hlds__pred_table__Func_MNA_Index0_23;
#line 886 "pred_table.m"
        }
#line 897 "pred_table.m"
        break;
#line 897 "pred_table.m"
    }
#line 4289 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_43_43 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 913 "pred_table.m"
    {
#line 913 "pred_table.m"
      mercury__map__det_insert_4_p_0(hlds__pred_table__TypeCtorInfo_43_43, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ((MR_Box) (*hlds__pred_table__PredId_12)), ((MR_Box) (hlds__pred_table__PredInfo_9)), hlds__pred_table__Preds0_14, &hlds__pred_table__Preds_37);
    }
#line 914 "pred_table.m"
    {
#line 914 "pred_table.m"
      mercury__set_tree234__insert_3_p_0(hlds__pred_table__TypeCtorInfo_43_43, ((MR_Box) (*hlds__pred_table__PredId_12)), hlds__pred_table__ValidPredIds0_16, &hlds__pred_table__ValidPredIds_38);
    }
#line 916 "pred_table.m"
    {
#line 916 "pred_table.m"
      MR_Word base;
#line 916 "pred_table.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 916 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_PredicateTable_40 = base;
#line 916 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__Preds_37));
#line 916 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__NextPredId_27));
#line 916 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__ValidPredIds_38));
#line 916 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__AccessibilityTable_29));
#line 916 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__Pred_N_Index_30));
#line 916 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__Pred_NA_Index_31));
#line 916 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__Pred_MNA_Index_32));
#line 916 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__Func_N_Index_33));
#line 916 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__Func_NA_Index_34));
#line 916 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__Func_MNA_Index_35));
#line 916 "pred_table.m"
    }
#line 865 "pred_table.m"
  }
#line 860 "pred_table.m"
}

#line 814 "pred_table.m"
static void MR_CALL 
hlds__pred_table__reinsert_for_restrict_6_p_0(
#line 814 "pred_table.m"
  MR_Word hlds__pred_table__PartialQualInfo_7,
#line 814 "pred_table.m"
  MR_Word hlds__pred_table__Preds_8,
#line 814 "pred_table.m"
  MR_Word hlds__pred_table__AccessibilityTable_9,
#line 814 "pred_table.m"
  MR_Word hlds__pred_table__PredId_10,
#line 814 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_19,
#line 814 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_20)
#line 814 "pred_table.m"
{
#line 819 "pred_table.m"
  {
#line 819 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 819 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 819 "pred_table.m"
    MR_Word hlds__pred_table__PredInfo_12;
#line 819 "pred_table.m"
    MR_Word hlds__pred_table__Access_13;
#line 819 "pred_table.m"
    MR_Word hlds__pred_table__Unqualified_14;
#line 819 "pred_table.m"
    MR_Word hlds__pred_table__PartiallyQualified_15;
#line 819 "pred_table.m"
    MR_Word hlds__pred_table__NeedQual_16;
#line 819 "pred_table.m"
    MR_Word hlds__pred_table__MaybeQualInfo_17;
#line 819 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21;
#line 820 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredInfo_12;
#line 821 "pred_table.m"
    MR_Box hlds__pred_table__conv1_Access_13;
#line 837 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18;

#line 820 "pred_table.m"
    {
#line 820 "pred_table.m"
      hlds__pred_table__conv0_PredInfo_12 = mercury__map__lookup_2_f_0(hlds__pred_table__TypeCtorInfo_23_23, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__pred_table__Preds_8, ((MR_Box) (hlds__pred_table__PredId_10)));
    }
#line 820 "pred_table.m"
    hlds__pred_table__PredInfo_12 = ((MR_Word) hlds__pred_table__conv0_PredInfo_12);
#line 821 "pred_table.m"
    {
#line 821 "pred_table.m"
      hlds__pred_table__conv1_Access_13 = mercury__map__lookup_2_f_0(hlds__pred_table__TypeCtorInfo_23_23, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0, hlds__pred_table__AccessibilityTable_9, ((MR_Box) (hlds__pred_table__PredId_10)));
    }
#line 821 "pred_table.m"
    hlds__pred_table__Access_13 = ((MR_Word) hlds__pred_table__conv1_Access_13);
#line 822 "pred_table.m"
    hlds__pred_table__Unqualified_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__Access_13, (MR_Integer) 0)));
#line 822 "pred_table.m"
    hlds__pred_table__PartiallyQualified_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__Access_13, (MR_Integer) 1)));
#line 826 "pred_table.m"
#line 826 "pred_table.m"
    switch (hlds__pred_table__Unqualified_14) {
#line 826 "pred_table.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 826 "pred_table.m"
      case (MR_Integer) 0:
#line 828 "pred_table.m"
        hlds__pred_table__NeedQual_16 = (MR_Integer) 0;
#line 826 "pred_table.m"
        break;
#line 826 "pred_table.m"
      case (MR_Integer) 1:
#line 825 "pred_table.m"
        hlds__pred_table__NeedQual_16 = (MR_Integer) 1;
#line 826 "pred_table.m"
        break;
#line 826 "pred_table.m"
    }
#line 833 "pred_table.m"
#line 833 "pred_table.m"
    switch (hlds__pred_table__PartiallyQualified_15) {
#line 833 "pred_table.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 833 "pred_table.m"
      case (MR_Integer) 0:
#line 835 "pred_table.m"
        hlds__pred_table__MaybeQualInfo_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 833 "pred_table.m"
        break;
#line 833 "pred_table.m"
      case (MR_Integer) 1:
#line 832 "pred_table.m"
        {
#line 832 "pred_table.m"
          hlds__pred_table__MaybeQualInfo_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 832 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__MaybeQualInfo_17, 0) = ((MR_Box) (hlds__pred_table__PartialQualInfo_7));
#line 832 "pred_table.m"
        }
#line 833 "pred_table.m"
        break;
#line 833 "pred_table.m"
    }
#line 837 "pred_table.m"
    {
#line 837 "pred_table.m"
      hlds__pred_table__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 837 "pred_table.m"
      MR_hl_field(MR_mktag(1), hlds__pred_table__V_21_21, 0) = ((MR_Box) (hlds__pred_table__PredId_10));
#line 837 "pred_table.m"
    }
#line 837 "pred_table.m"
    {
#line 837 "pred_table.m"
      hlds__pred_table__do_predicate_table_insert_7_p_0(hlds__pred_table__V_21_21, hlds__pred_table__PredInfo_12, hlds__pred_table__NeedQual_16, hlds__pred_table__MaybeQualInfo_17, &hlds__pred_table__V_18_18, hlds__pred_table__STATE_VARIABLE_PredicateTable_0_19, hlds__pred_table__STATE_VARIABLE_PredicateTable_20);
    }
#line 819 "pred_table.m"
  }
#line 814 "pred_table.m"
}

#line 738 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__pred_id_matches_module_3_p_0(
#line 738 "pred_table.m"
  MR_Word hlds__pred_table__Preds_4,
#line 738 "pred_table.m"
  MR_Word hlds__pred_table__ModuleName_5,
#line 738 "pred_table.m"
  MR_Word hlds__pred_table__PredId_6)
#line 738 "pred_table.m"
{
#line 741 "pred_table.m"
  {
#line 741 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 741 "pred_table.m"
    MR_Word hlds__pred_table__PredInfo_7;
#line 741 "pred_table.m"
    MR_Word hlds__pred_table__V_10_10;
#line 742 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredInfo_7;

#line 742 "pred_table.m"
    {
#line 742 "pred_table.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__pred_table__Preds_4, ((MR_Box) (hlds__pred_table__PredId_6)), &hlds__pred_table__conv0_PredInfo_7);
    }
#line 742 "pred_table.m"
    hlds__pred_table__PredInfo_7 = ((MR_Word) hlds__pred_table__conv0_PredInfo_7);
#line 743 "pred_table.m"
    {
#line 743 "pred_table.m"
      hlds__pred_table__V_10_10 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__pred_table__PredInfo_7);
    }
#line 743 "pred_table.m"
    {
#line 743 "pred_table.m"
      hlds__pred_table__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__pred_table__ModuleName_5, hlds__pred_table__V_10_10);
    }
#line 741 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 741 "pred_table.m"
  }
#line 738 "pred_table.m"
}

#line 736 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0_1(
#line 736 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 736 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1)
#line 736 "pred_table.m"
{
#line 736 "pred_table.m"
  {
#line 736 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 736 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;

#line 736 "pred_table.m"
    {
#line 736 "pred_table.m"
      hlds__pred_table__succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) hlds__pred_table__wrapper_arg_1));
    }
#line 736 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 736 "pred_table.m"
  }
#line 736 "pred_table.m"
}

#line 648 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0(
#line 648 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_6,
#line 648 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_7,
#line 648 "pred_table.m"
  MR_Word hlds__pred_table__Module_8,
#line 648 "pred_table.m"
  MR_String hlds__pred_table__FuncName_9,
#line 648 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_10)
#line 648 "pred_table.m"
{
#line 653 "pred_table.m"
  {
#line 653 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 653 "pred_table.m"
    MR_Word hlds__pred_table__Func_MNA_Index_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 9)));
#line 654 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 0)));
#line 654 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 1)));
#line 654 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 2)));
#line 654 "pred_table.m"
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 3)));
#line 654 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 4)));
#line 654 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 5)));
#line 654 "pred_table.m"
    MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 6)));
#line 654 "pred_table.m"
    MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 7)));
#line 654 "pred_table.m"
    MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 8)));
#line 655 "pred_table.m"
    MR_Word hlds__pred_table__Arities_12;
#line 655 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15;
#line 655 "pred_table.m"
    MR_Box hlds__pred_table__conv0_Arities_12;

#line 655 "pred_table.m"
    {
#line 655 "pred_table.m"
      hlds__pred_table__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 655 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_15_15, 0) = ((MR_Box) (hlds__pred_table__Module_8));
#line 655 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_15_15, 1) = ((MR_Box) (hlds__pred_table__FuncName_9));
#line 655 "pred_table.m"
    }
#line 655 "pred_table.m"
    {
#line 655 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__Func_MNA_Index_11, ((MR_Box) (hlds__pred_table__V_15_15)), &hlds__pred_table__conv0_Arities_12);
    }
#line 655 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 655 "pred_table.m"
      {
#line 655 "pred_table.m"
        hlds__pred_table__Arities_12 = ((MR_Word) hlds__pred_table__conv0_Arities_12);
#line 655 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 655 "pred_table.m"
      }
#line 655 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 656 "pred_table.m"
      {
#line 656 "pred_table.m"
        MR_Word hlds__pred_table__PredIdLists_13;
#line 656 "pred_table.m"
        MR_Word hlds__pred_table__PredIds0_14;

#line 656 "pred_table.m"
        {
#line 656 "pred_table.m"
          mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__Arities_12, &hlds__pred_table__PredIdLists_13);
        }
#line 657 "pred_table.m"
        {
#line 657 "pred_table.m"
          mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__PredIdLists_13, &hlds__pred_table__PredIds0_14);
        }
#line 731 "pred_table.m"
#line 731 "pred_table.m"
        switch (hlds__pred_table__IsFullyQualified_7) {
#line 731 "pred_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 731 "pred_table.m"
          case (MR_Integer) 0:
#line 734 "pred_table.m"
            {
#line 734 "pred_table.m"
              MR_Word hlds__pred_table__Preds_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 0)));
#line 734 "pred_table.m"
              MR_Word hlds__pred_table__V_41_41;
#line 389 "pred_table.m"
              MR_Word hlds__pred_table__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 1)));
#line 389 "pred_table.m"
              MR_Word hlds__pred_table__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 2)));
#line 389 "pred_table.m"
              MR_Word hlds__pred_table__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 3)));
#line 389 "pred_table.m"
              MR_Word hlds__pred_table__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 4)));
#line 389 "pred_table.m"
              MR_Word hlds__pred_table__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 5)));
#line 389 "pred_table.m"
              MR_Word hlds__pred_table__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 6)));
#line 389 "pred_table.m"
              MR_Word hlds__pred_table__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 7)));
#line 389 "pred_table.m"
              MR_Word hlds__pred_table__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 8)));
#line 389 "pred_table.m"
              MR_Word hlds__pred_table__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 9)));

#line 736 "pred_table.m"
              {
#line 736 "pred_table.m"
                hlds__pred_table__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 736 "pred_table.m"
                MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
#line 736 "pred_table.m"
                MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0_1));
#line 736 "pred_table.m"
                MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 736 "pred_table.m"
                MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 3) = ((MR_Box) (hlds__pred_table__Preds_38));
#line 736 "pred_table.m"
                MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 4) = ((MR_Box) (hlds__pred_table__Module_8));
#line 736 "pred_table.m"
              }
#line 736 "pred_table.m"
              {
#line 736 "pred_table.m"
                mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__V_41_41, hlds__pred_table__PredIds0_14, hlds__pred_table__PredIds_10);
              }
#line 734 "pred_table.m"
            }
#line 731 "pred_table.m"
            break;
#line 731 "pred_table.m"
          case (MR_Integer) 1:
#line 732 "pred_table.m"
            *hlds__pred_table__PredIds_10 = hlds__pred_table__PredIds0_14;
#line 731 "pred_table.m"
            break;
#line 731 "pred_table.m"
        }
#line 656 "pred_table.m"
      }
#line 655 "pred_table.m"
    else
#line 661 "pred_table.m"
      *hlds__pred_table__PredIds_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 653 "pred_table.m"
  }
#line 648 "pred_table.m"
}

#line 436 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_remove_from_index_10_p_0(
#line 436 "pred_table.m"
  MR_Word hlds__pred_table__Module_11,
#line 436 "pred_table.m"
  MR_String hlds__pred_table__Name_12,
#line 436 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_13,
#line 436 "pred_table.m"
  MR_Word hlds__pred_table__PredId_14,
#line 436 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_N_0_18,
#line 436 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_N_19,
#line 436 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_NA_0_20,
#line 436 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_NA_21,
#line 436 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_MNA_0_22,
#line 436 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_MNA_23)
#line 436 "pred_table.m"
{
#line 442 "pred_table.m"
  {
#line 442 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 442 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_28_28 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 442 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_29_29;
#line 442 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_28_81;
#line 442 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_29_82;
#line 442 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_30_83;
#line 442 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_31_84;
#line 442 "pred_table.m"
    MR_Word hlds__pred_table__V_25_25;
#line 442 "pred_table.m"
    MR_Word hlds__pred_table__Arities0_67;
#line 442 "pred_table.m"
    MR_Word hlds__pred_table__PredIds0_68;
#line 442 "pred_table.m"
    MR_Word hlds__pred_table__PredIds_69;
#line 442 "pred_table.m"
    MR_Word hlds__pred_table__V_73_73;
#line 451 "pred_table.m"
    MR_Word hlds__pred_table__NamePredIds0_35;
#line 451 "pred_table.m"
    MR_Box hlds__pred_table__conv0_NamePredIds0_35;
#line 451 "pred_table.m"
    MR_Word hlds__pred_table__NamePredIds0_50;
#line 451 "pred_table.m"
    MR_Box hlds__pred_table__conv1_NamePredIds0_50;
#line 469 "pred_table.m"
    MR_Box hlds__pred_table__conv2_Arities0_67;
#line 470 "pred_table.m"
    MR_Box hlds__pred_table__conv3_PredIds0_68;

#line 451 "pred_table.m"
    {
#line 451 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0(hlds__pred_table__TypeCtorInfo_28_28, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__STATE_VARIABLE_N_0_18, ((MR_Box) (hlds__pred_table__Name_12)), &hlds__pred_table__conv0_NamePredIds0_35);
    }
#line 451 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 451 "pred_table.m"
      {
#line 451 "pred_table.m"
        hlds__pred_table__NamePredIds0_35 = ((MR_Word) hlds__pred_table__conv0_NamePredIds0_35);
#line 451 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 451 "pred_table.m"
      }
#line 451 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 452 "pred_table.m"
      {
#line 452 "pred_table.m"
        MR_Word hlds__pred_table__NamePredIds_36;

#line 452 "pred_table.m"
        {
#line 452 "pred_table.m"
          mercury__list__delete_all_3_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__NamePredIds0_35, ((MR_Box) (hlds__pred_table__PredId_14)), &hlds__pred_table__NamePredIds_36);
        }
#line 456 "pred_table.m"
        if ((hlds__pred_table__NamePredIds_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 454 "pred_table.m"
          {
#line 455 "pred_table.m"
            {
#line 455 "pred_table.m"
              mercury__map__delete_3_p_0(hlds__pred_table__TypeCtorInfo_28_28, (MR_Word) &hlds__pred_table_scalar_common_1[0], ((MR_Box) (hlds__pred_table__Name_12)), hlds__pred_table__STATE_VARIABLE_N_0_18, hlds__pred_table__STATE_VARIABLE_N_19);
            }
#line 454 "pred_table.m"
          }
#line 456 "pred_table.m"
        else
#line 457 "pred_table.m"
          {
#line 458 "pred_table.m"
            {
#line 458 "pred_table.m"
              mercury__map__det_update_4_p_0(hlds__pred_table__TypeCtorInfo_28_28, (MR_Word) &hlds__pred_table_scalar_common_1[0], ((MR_Box) (hlds__pred_table__Name_12)), ((MR_Box) (hlds__pred_table__NamePredIds_36)), hlds__pred_table__STATE_VARIABLE_N_0_18, hlds__pred_table__STATE_VARIABLE_N_19);
            }
#line 457 "pred_table.m"
          }
#line 452 "pred_table.m"
      }
#line 451 "pred_table.m"
    else
#line 451 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_N_19 = hlds__pred_table__STATE_VARIABLE_N_0_18;
#line 444 "pred_table.m"
    {
#line 444 "pred_table.m"
      hlds__pred_table__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_25_25, 0) = ((MR_Box) (hlds__pred_table__Name_12));
#line 444 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_25_25, 1) = ((MR_Box) (hlds__pred_table__Arity_13));
#line 444 "pred_table.m"
    }
#line 4829 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_29_29 = (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0;
#line 451 "pred_table.m"
    {
#line 451 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0(hlds__pred_table__TypeCtorInfo_29_29, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__STATE_VARIABLE_NA_0_20, ((MR_Box) (hlds__pred_table__V_25_25)), &hlds__pred_table__conv1_NamePredIds0_50);
    }
#line 451 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 451 "pred_table.m"
      {
#line 451 "pred_table.m"
        hlds__pred_table__NamePredIds0_50 = ((MR_Word) hlds__pred_table__conv1_NamePredIds0_50);
#line 451 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 451 "pred_table.m"
      }
#line 451 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 452 "pred_table.m"
      {
#line 452 "pred_table.m"
        MR_Word hlds__pred_table__NamePredIds_51;

#line 452 "pred_table.m"
        {
#line 452 "pred_table.m"
          mercury__list__delete_all_3_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__NamePredIds0_50, ((MR_Box) (hlds__pred_table__PredId_14)), &hlds__pred_table__NamePredIds_51);
        }
#line 456 "pred_table.m"
        if ((hlds__pred_table__NamePredIds_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 454 "pred_table.m"
          {
#line 455 "pred_table.m"
            {
#line 455 "pred_table.m"
              mercury__map__delete_3_p_0(hlds__pred_table__TypeCtorInfo_29_29, (MR_Word) &hlds__pred_table_scalar_common_1[0], ((MR_Box) (hlds__pred_table__V_25_25)), hlds__pred_table__STATE_VARIABLE_NA_0_20, hlds__pred_table__STATE_VARIABLE_NA_21);
            }
#line 454 "pred_table.m"
          }
#line 456 "pred_table.m"
        else
#line 457 "pred_table.m"
          {
#line 458 "pred_table.m"
            {
#line 458 "pred_table.m"
              mercury__map__det_update_4_p_0(hlds__pred_table__TypeCtorInfo_29_29, (MR_Word) &hlds__pred_table_scalar_common_1[0], ((MR_Box) (hlds__pred_table__V_25_25)), ((MR_Box) (hlds__pred_table__NamePredIds_51)), hlds__pred_table__STATE_VARIABLE_NA_0_20, hlds__pred_table__STATE_VARIABLE_NA_21);
            }
#line 457 "pred_table.m"
          }
#line 452 "pred_table.m"
      }
#line 451 "pred_table.m"
    else
#line 451 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_NA_21 = hlds__pred_table__STATE_VARIABLE_NA_0_20;
#line 469 "pred_table.m"
    {
#line 469 "pred_table.m"
      hlds__pred_table__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 469 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_73_73, 0) = ((MR_Box) (hlds__pred_table__Module_11));
#line 469 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_73_73, 1) = ((MR_Box) (hlds__pred_table__Name_12));
#line 469 "pred_table.m"
    }
#line 4896 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_28_81 = (MR_Word) &hlds__pred_table_scalar_common_2[0];
#line 4898 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_29_82 = (MR_Word) &hlds__pred_table_scalar_common_2[1];
#line 469 "pred_table.m"
    {
#line 469 "pred_table.m"
      mercury__map__lookup_3_p_0(hlds__pred_table__TypeInfo_28_81, hlds__pred_table__TypeInfo_29_82, hlds__pred_table__STATE_VARIABLE_MNA_0_22, ((MR_Box) (hlds__pred_table__V_73_73)), &hlds__pred_table__conv2_Arities0_67);
    }
#line 469 "pred_table.m"
    hlds__pred_table__Arities0_67 = ((MR_Word) hlds__pred_table__conv2_Arities0_67);
#line 4907 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_30_83 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 4909 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_31_84 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
#line 470 "pred_table.m"
    {
#line 470 "pred_table.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__pred_table__TypeInfo_31_84, hlds__pred_table__Arities0_67, hlds__pred_table__Arity_13, &hlds__pred_table__conv3_PredIds0_68);
    }
#line 470 "pred_table.m"
    hlds__pred_table__PredIds0_68 = ((MR_Word) hlds__pred_table__conv3_PredIds0_68);
#line 471 "pred_table.m"
    {
#line 471 "pred_table.m"
      mercury__list__delete_all_3_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__PredIds0_68, ((MR_Box) (hlds__pred_table__PredId_14)), &hlds__pred_table__PredIds_69);
    }
#line 480 "pred_table.m"
    if ((hlds__pred_table__PredIds_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 473 "pred_table.m"
      {
#line 473 "pred_table.m"
        MR_Word hlds__pred_table__Arities_70;

#line 474 "pred_table.m"
        {
#line 474 "pred_table.m"
          mercury__map__delete_3_p_0(hlds__pred_table__TypeCtorInfo_30_83, hlds__pred_table__TypeInfo_31_84, ((MR_Box) (hlds__pred_table__Arity_13)), hlds__pred_table__Arities0_67, &hlds__pred_table__Arities_70);
        }
#line 475 "pred_table.m"
        {
#line 475 "pred_table.m"
          hlds__pred_table__succeeded = mercury__map__is_empty_1_p_0(hlds__pred_table__TypeCtorInfo_30_83, hlds__pred_table__TypeInfo_31_84, hlds__pred_table__Arities_70);
        }
#line 475 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 476 "pred_table.m"
          {
#line 476 "pred_table.m"
            mercury__map__delete_3_p_0(hlds__pred_table__TypeInfo_28_81, hlds__pred_table__TypeInfo_29_82, ((MR_Box) (hlds__pred_table__V_73_73)), hlds__pred_table__STATE_VARIABLE_MNA_0_22, hlds__pred_table__STATE_VARIABLE_MNA_23);
          }
#line 475 "pred_table.m"
        else
#line 478 "pred_table.m"
          {
#line 478 "pred_table.m"
            mercury__map__det_update_4_p_0(hlds__pred_table__TypeInfo_28_81, hlds__pred_table__TypeInfo_29_82, ((MR_Box) (hlds__pred_table__V_73_73)), ((MR_Box) (hlds__pred_table__Arities_70)), hlds__pred_table__STATE_VARIABLE_MNA_0_22, hlds__pred_table__STATE_VARIABLE_MNA_23);
          }
#line 473 "pred_table.m"
      }
#line 480 "pred_table.m"
    else
#line 481 "pred_table.m"
      {
#line 481 "pred_table.m"
        MR_Word hlds__pred_table__Arities_80;

#line 482 "pred_table.m"
        {
#line 482 "pred_table.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(hlds__pred_table__TypeInfo_31_84, hlds__pred_table__Arity_13, ((MR_Box) (hlds__pred_table__PredIds_69)), hlds__pred_table__Arities0_67, &hlds__pred_table__Arities_80);
        }
#line 483 "pred_table.m"
        {
#line 483 "pred_table.m"
          mercury__map__det_update_4_p_0(hlds__pred_table__TypeInfo_28_81, hlds__pred_table__TypeInfo_29_82, ((MR_Box) (hlds__pred_table__V_73_73)), ((MR_Box) (hlds__pred_table__Arities_80)), hlds__pred_table__STATE_VARIABLE_MNA_0_22, hlds__pred_table__STATE_VARIABLE_MNA_23);
        }
#line 481 "pred_table.m"
      }
#line 442 "pred_table.m"
  }
#line 436 "pred_table.m"
}

#line 287 "pred_table.m"
void MR_CALL 
hlds__pred_table__get_next_pred_id_2_p_0(
#line 287 "pred_table.m"
  MR_Word hlds__pred_table__PredTable_3,
#line 287 "pred_table.m"
  MR_Word * hlds__pred_table__NextPredId_4)
#line 287 "pred_table.m"
{
#line 1220 "pred_table.m"
  {
#line 1220 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 1220 "pred_table.m"
    MR_Word hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 0)));
#line 1220 "pred_table.m"
    MR_Word hlds__pred_table__V_6_6;
#line 1220 "pred_table.m"
    MR_Word hlds__pred_table__V_7_7;
#line 1220 "pred_table.m"
    MR_Word hlds__pred_table__V_8_8;
#line 1220 "pred_table.m"
    MR_Word hlds__pred_table__V_9_9;
#line 1220 "pred_table.m"
    MR_Word hlds__pred_table__V_10_10;
#line 1220 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11;
#line 1220 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12;
#line 1220 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13;

#line 1220 "pred_table.m"
    *hlds__pred_table__NextPredId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 1)));
#line 1220 "pred_table.m"
    hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 2)));
#line 1220 "pred_table.m"
    hlds__pred_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 3)));
#line 1220 "pred_table.m"
    hlds__pred_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 4)));
#line 1220 "pred_table.m"
    hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 5)));
#line 1220 "pred_table.m"
    hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 6)));
#line 1220 "pred_table.m"
    hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 7)));
#line 1220 "pred_table.m"
    hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 8)));
#line 1220 "pred_table.m"
    hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 9)));
#line 1220 "pred_table.m"
  }
#line 287 "pred_table.m"
}

#line 283 "pred_table.m"
void MR_CALL 
hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(
#line 283 "pred_table.m"
  MR_Word hlds__pred_table__Module_9,
#line 283 "pred_table.m"
  MR_Word hlds__pred_table__ModuleName_10,
#line 283 "pred_table.m"
  MR_String hlds__pred_table__ProcName_11,
#line 283 "pred_table.m"
  MR_Word hlds__pred_table__PredOrFunc_12,
#line 283 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_13,
#line 283 "pred_table.m"
  MR_Word hlds__pred_table__ModeNo_14,
#line 283 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_15,
#line 283 "pred_table.m"
  MR_Integer * hlds__pred_table__ProcId_16)
#line 283 "pred_table.m"
{
#line 1156 "pred_table.m"
  {
#line 1156 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 1156 "pred_table.m"
    MR_Word hlds__pred_table__PredTable_17;
#line 1156 "pred_table.m"
    MR_Word hlds__pred_table__PredInfo_20;
#line 1156 "pred_table.m"
    MR_Word hlds__pred_table__ProcIds_21;
#line 1158 "pred_table.m"
    MR_Word hlds__pred_table__PredIdPrime_19;
#line 1167 "pred_table.m"
    MR_Word hlds__pred_table__PredIds_18;
#line 1167 "pred_table.m"
    MR_Word hlds__pred_table__V_26_26;

#line 1157 "pred_table.m"
    {
#line 1157 "pred_table.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__pred_table__Module_9, &hlds__pred_table__PredTable_17);
    }
#line 1163 "pred_table.m"
#line 1163 "pred_table.m"
    switch (hlds__pred_table__PredOrFunc_12) {
#line 1163 "pred_table.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1163 "pred_table.m"
      case (MR_Integer) 1:
#line 1164 "pred_table.m"
        {
#line 1165 "pred_table.m"
          {
#line 1165 "pred_table.m"
            hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredTable_17, (MR_Integer) 0, hlds__pred_table__ModuleName_10, hlds__pred_table__ProcName_11, hlds__pred_table__Arity_13, &hlds__pred_table__PredIds_18);
          }
#line 1164 "pred_table.m"
        }
#line 1163 "pred_table.m"
        break;
#line 1163 "pred_table.m"
      case (MR_Integer) 0:
#line 1160 "pred_table.m"
        {
#line 1161 "pred_table.m"
          {
#line 1161 "pred_table.m"
            hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredTable_17, (MR_Integer) 0, hlds__pred_table__ModuleName_10, hlds__pred_table__ProcName_11, hlds__pred_table__Arity_13, &hlds__pred_table__PredIds_18);
          }
#line 1160 "pred_table.m"
        }
#line 1163 "pred_table.m"
        break;
#line 1163 "pred_table.m"
    }
#line 1168 "pred_table.m"
    hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__PredIds_18)) == (MR_mktag((MR_Integer) 1)));
#line 1168 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 1168 "pred_table.m"
      {
#line 1168 "pred_table.m"
        hlds__pred_table__PredIdPrime_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__PredIds_18, (MR_Integer) 0)));
#line 1168 "pred_table.m"
        hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__PredIds_18, (MR_Integer) 1)));
#line 1168 "pred_table.m"
        hlds__pred_table__succeeded = (hlds__pred_table__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1168 "pred_table.m"
      }
#line 1158 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 1170 "pred_table.m"
      *hlds__pred_table__PredId_15 = hlds__pred_table__PredIdPrime_19;
#line 1158 "pred_table.m"
    else
#line 1171 "pred_table.m"
      {
#line 1171 "pred_table.m"
        MR_Word hlds__pred_table__PredIdPrime_75;
#line 1186 "pred_table.m"
        MR_Word hlds__pred_table__V_33_33;
#line 1186 "pred_table.m"
        MR_Word hlds__pred_table__PredIds_73;

#line 1182 "pred_table.m"
#line 1182 "pred_table.m"
        switch (hlds__pred_table__PredOrFunc_12) {
#line 1182 "pred_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1182 "pred_table.m"
          case (MR_Integer) 1:
#line 1183 "pred_table.m"
            {
#line 1183 "pred_table.m"
              MR_Integer hlds__pred_table__V_28_28 = (hlds__pred_table__Arity_13 - (MR_Integer) 1);

#line 1184 "pred_table.m"
              {
#line 1184 "pred_table.m"
                hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredTable_17, (MR_Integer) 0, hlds__pred_table__ModuleName_10, hlds__pred_table__ProcName_11, hlds__pred_table__V_28_28, &hlds__pred_table__PredIds_73);
              }
#line 1183 "pred_table.m"
            }
#line 1182 "pred_table.m"
            break;
#line 1182 "pred_table.m"
          case (MR_Integer) 0:
#line 1179 "pred_table.m"
            {
#line 1179 "pred_table.m"
              MR_Integer hlds__pred_table__V_31_31 = (hlds__pred_table__Arity_13 - (MR_Integer) 1);

#line 1180 "pred_table.m"
              {
#line 1180 "pred_table.m"
                hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredTable_17, (MR_Integer) 0, hlds__pred_table__ModuleName_10, hlds__pred_table__ProcName_11, hlds__pred_table__V_31_31, &hlds__pred_table__PredIds_73);
              }
#line 1179 "pred_table.m"
            }
#line 1182 "pred_table.m"
            break;
#line 1182 "pred_table.m"
        }
#line 1187 "pred_table.m"
        hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__PredIds_73)) == (MR_mktag((MR_Integer) 1)));
#line 1187 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 1187 "pred_table.m"
          {
#line 1187 "pred_table.m"
            hlds__pred_table__PredIdPrime_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__PredIds_73, (MR_Integer) 0)));
#line 1187 "pred_table.m"
            hlds__pred_table__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__PredIds_73, (MR_Integer) 1)));
#line 1187 "pred_table.m"
            hlds__pred_table__succeeded = (hlds__pred_table__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1187 "pred_table.m"
          }
#line 1171 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 1189 "pred_table.m"
          *hlds__pred_table__PredId_15 = hlds__pred_table__PredIdPrime_75;
#line 1171 "pred_table.m"
        else
#line 1191 "pred_table.m"
          {
#line 1191 "pred_table.m"
            MR_String hlds__pred_table__V_36_36;
#line 1191 "pred_table.m"
            MR_String hlds__pred_table__V_40_40;
#line 1191 "pred_table.m"
            MR_String hlds__pred_table__V_79_79;
#line 1191 "pred_table.m"
            MR_Word hlds__pred_table__V_85_85;
#line 1191 "pred_table.m"
            MR_String hlds__pred_table__V_87_87;
#line 1191 "pred_table.m"
            MR_String hlds__pred_table__V_88_88;
#line 1191 "pred_table.m"
            MR_String hlds__pred_table__V_95_95;
#line 1191 "pred_table.m"
            MR_String hlds__pred_table__V_97_97;
#line 1191 "pred_table.m"
            MR_String hlds__pred_table__V_98_98;
#line 1191 "pred_table.m"
            MR_String hlds__pred_table__V_105_105;

#line 1193 "pred_table.m"
            {
#line 1193 "pred_table.m"
              hlds__pred_table__V_40_40 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__pred_table__ModuleName_10);
            }
#line 5227 "hlds.pred_table.c"
            hlds__pred_table__V_85_85 = (MR_Word) &hlds__pred_table_scalar_common_6[0];
#line 1193 "pred_table.m"
            {
#line 1193 "pred_table.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__pred_table__V_85_85, hlds__pred_table__Arity_13, &hlds__pred_table__V_79_79);
            }
#line 1192 "pred_table.m"
            {
#line 1192 "pred_table.m"
              hlds__pred_table__V_87_87 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__pred_table__V_79_79);
            }
#line 1193 "pred_table.m"
            {
#line 1193 "pred_table.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__pred_table__V_85_85, hlds__pred_table__ProcName_11, &hlds__pred_table__V_88_88);
            }
#line 1192 "pred_table.m"
            {
#line 1192 "pred_table.m"
              hlds__pred_table__V_95_95 = mercury__string__f_43_43_2_f_0(hlds__pred_table__V_88_88, hlds__pred_table__V_87_87);
            }
#line 1192 "pred_table.m"
            {
#line 1192 "pred_table.m"
              hlds__pred_table__V_97_97 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__pred_table__V_95_95);
            }
#line 1193 "pred_table.m"
            {
#line 1193 "pred_table.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__pred_table__V_85_85, hlds__pred_table__V_40_40, &hlds__pred_table__V_98_98);
            }
#line 1192 "pred_table.m"
            {
#line 1192 "pred_table.m"
              hlds__pred_table__V_105_105 = mercury__string__f_43_43_2_f_0(hlds__pred_table__V_98_98, hlds__pred_table__V_97_97);
            }
#line 1192 "pred_table.m"
            {
#line 1192 "pred_table.m"
              hlds__pred_table__V_36_36 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t locate ", hlds__pred_table__V_105_105);
            }
#line 1191 "pred_table.m"
            {
#line 1191 "pred_table.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.lookup_builtin_pred_proc_id\'/8", hlds__pred_table__V_36_36);
#line 1191 "pred_table.m"
              return;
            }
#line 1191 "pred_table.m"
          }
#line 1171 "pred_table.m"
      }
#line 1195 "pred_table.m"
    {
#line 1195 "pred_table.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__pred_table__Module_9, *hlds__pred_table__PredId_15, &hlds__pred_table__PredInfo_20);
    }
#line 1196 "pred_table.m"
    {
#line 1196 "pred_table.m"
      hlds__pred_table__ProcIds_21 = hlds__hlds_pred__pred_info_procids_1_f_0(hlds__pred_table__PredInfo_20);
    }
#line 1207 "pred_table.m"
    if ((hlds__pred_table__ModeNo_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1199 "pred_table.m"
      {
#line 1199 "pred_table.m"
        MR_Integer hlds__pred_table__ProcId0_22;
#line 1199 "pred_table.m"
        MR_Word hlds__pred_table__V_60_60;

#line 1199 "pred_table.m"
        hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__ProcIds_21)) == (MR_mktag((MR_Integer) 1)));
#line 1199 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 1199 "pred_table.m"
          {
#line 1199 "pred_table.m"
            hlds__pred_table__ProcId0_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__ProcIds_21, (MR_Integer) 0)));
#line 1199 "pred_table.m"
            hlds__pred_table__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__ProcIds_21, (MR_Integer) 1)));
#line 1199 "pred_table.m"
            hlds__pred_table__succeeded = (hlds__pred_table__V_60_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1199 "pred_table.m"
          }
#line 1199 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 1200 "pred_table.m"
          *hlds__pred_table__ProcId_16 = hlds__pred_table__ProcId0_22;
#line 1199 "pred_table.m"
        else
#line 1202 "pred_table.m"
          {
#line 1202 "pred_table.m"
            MR_String hlds__pred_table__V_63_63;
#line 1202 "pred_table.m"
            MR_String hlds__pred_table__V_67_67;
#line 1202 "pred_table.m"
            MR_String hlds__pred_table__V_107_107;
#line 1202 "pred_table.m"
            MR_Word hlds__pred_table__V_113_113;
#line 1202 "pred_table.m"
            MR_String hlds__pred_table__V_115_115;
#line 1202 "pred_table.m"
            MR_String hlds__pred_table__V_116_116;
#line 1202 "pred_table.m"
            MR_String hlds__pred_table__V_123_123;
#line 1202 "pred_table.m"
            MR_String hlds__pred_table__V_125_125;
#line 1202 "pred_table.m"
            MR_String hlds__pred_table__V_126_126;
#line 1202 "pred_table.m"
            MR_String hlds__pred_table__V_133_133;

#line 1204 "pred_table.m"
            {
#line 1204 "pred_table.m"
              hlds__pred_table__V_67_67 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__pred_table__ModuleName_10);
            }
#line 5347 "hlds.pred_table.c"
            hlds__pred_table__V_113_113 = (MR_Word) &hlds__pred_table_scalar_common_6[0];
#line 1205 "pred_table.m"
            {
#line 1205 "pred_table.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__pred_table__V_113_113, hlds__pred_table__Arity_13, &hlds__pred_table__V_107_107);
            }
#line 1203 "pred_table.m"
            {
#line 1203 "pred_table.m"
              hlds__pred_table__V_115_115 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__pred_table__V_107_107);
            }
#line 1205 "pred_table.m"
            {
#line 1205 "pred_table.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__pred_table__V_113_113, hlds__pred_table__ProcName_11, &hlds__pred_table__V_116_116);
            }
#line 1203 "pred_table.m"
            {
#line 1203 "pred_table.m"
              hlds__pred_table__V_123_123 = mercury__string__f_43_43_2_f_0(hlds__pred_table__V_116_116, hlds__pred_table__V_115_115);
            }
#line 1203 "pred_table.m"
            {
#line 1203 "pred_table.m"
              hlds__pred_table__V_125_125 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__pred_table__V_123_123);
            }
#line 1204 "pred_table.m"
            {
#line 1204 "pred_table.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__pred_table__V_113_113, hlds__pred_table__V_67_67, &hlds__pred_table__V_126_126);
            }
#line 1203 "pred_table.m"
            {
#line 1203 "pred_table.m"
              hlds__pred_table__V_133_133 = mercury__string__f_43_43_2_f_0(hlds__pred_table__V_126_126, hlds__pred_table__V_125_125);
            }
#line 1203 "pred_table.m"
            {
#line 1203 "pred_table.m"
              hlds__pred_table__V_63_63 = mercury__string__f_43_43_2_f_0((MR_String) "expected single mode for ", hlds__pred_table__V_133_133);
            }
#line 1202 "pred_table.m"
            {
#line 1202 "pred_table.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.lookup_builtin_pred_proc_id\'/8", hlds__pred_table__V_63_63);
#line 1202 "pred_table.m"
              return;
            }
#line 1202 "pred_table.m"
          }
#line 1199 "pred_table.m"
      }
#line 1207 "pred_table.m"
    else
#line 1208 "pred_table.m"
      {
#line 1208 "pred_table.m"
        MR_Integer hlds__pred_table__N_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__ModeNo_14, (MR_Integer) 0)));
#line 1209 "pred_table.m"
        MR_Integer hlds__pred_table__ProcId0_76;
#line 1209 "pred_table.m"
        MR_Box hlds__pred_table__conv0_ProcId0_76;

#line 1209 "pred_table.m"
        {
#line 1209 "pred_table.m"
          hlds__pred_table__succeeded = mercury__list__index0_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, hlds__pred_table__ProcIds_21, hlds__pred_table__N_23, &hlds__pred_table__conv0_ProcId0_76);
        }
#line 1209 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 1209 "pred_table.m"
          {
#line 1209 "pred_table.m"
            hlds__pred_table__ProcId0_76 = ((MR_Integer) hlds__pred_table__conv0_ProcId0_76);
#line 1209 "pred_table.m"
            hlds__pred_table__succeeded = MR_TRUE;
#line 1209 "pred_table.m"
          }
#line 1209 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 1210 "pred_table.m"
          *hlds__pred_table__ProcId_16 = hlds__pred_table__ProcId0_76;
#line 1209 "pred_table.m"
        else
#line 1212 "pred_table.m"
          {
#line 1212 "pred_table.m"
            MR_String hlds__pred_table__V_48_48;
#line 1212 "pred_table.m"
            MR_String hlds__pred_table__V_54_54;
#line 1212 "pred_table.m"
            MR_String hlds__pred_table__V_135_135;
#line 1212 "pred_table.m"
            MR_Word hlds__pred_table__V_141_141;
#line 1212 "pred_table.m"
            MR_String hlds__pred_table__V_143_143;
#line 1212 "pred_table.m"
            MR_String hlds__pred_table__V_144_144;
#line 1212 "pred_table.m"
            MR_String hlds__pred_table__V_151_151;
#line 1212 "pred_table.m"
            MR_String hlds__pred_table__V_153_153;
#line 1212 "pred_table.m"
            MR_String hlds__pred_table__V_154_154;
#line 1212 "pred_table.m"
            MR_String hlds__pred_table__V_161_161;
#line 1212 "pred_table.m"
            MR_String hlds__pred_table__V_163_163;
#line 1212 "pred_table.m"
            MR_String hlds__pred_table__V_164_164;
#line 1212 "pred_table.m"
            MR_String hlds__pred_table__V_171_171;

#line 1214 "pred_table.m"
            {
#line 1214 "pred_table.m"
              hlds__pred_table__V_54_54 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__pred_table__ModuleName_10);
            }
#line 5466 "hlds.pred_table.c"
            hlds__pred_table__V_141_141 = (MR_Word) &hlds__pred_table_scalar_common_6[0];
#line 1215 "pred_table.m"
            {
#line 1215 "pred_table.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__pred_table__V_141_141, hlds__pred_table__Arity_13, &hlds__pred_table__V_135_135);
            }
#line 1213 "pred_table.m"
            {
#line 1213 "pred_table.m"
              hlds__pred_table__V_143_143 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__pred_table__V_135_135);
            }
#line 1215 "pred_table.m"
            {
#line 1215 "pred_table.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__pred_table__V_141_141, hlds__pred_table__ProcName_11, &hlds__pred_table__V_144_144);
            }
#line 1213 "pred_table.m"
            {
#line 1213 "pred_table.m"
              hlds__pred_table__V_151_151 = mercury__string__f_43_43_2_f_0(hlds__pred_table__V_144_144, hlds__pred_table__V_143_143);
            }
#line 1213 "pred_table.m"
            {
#line 1213 "pred_table.m"
              hlds__pred_table__V_153_153 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__pred_table__V_151_151);
            }
#line 1214 "pred_table.m"
            {
#line 1214 "pred_table.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__pred_table__V_141_141, hlds__pred_table__V_54_54, &hlds__pred_table__V_154_154);
            }
#line 1213 "pred_table.m"
            {
#line 1213 "pred_table.m"
              hlds__pred_table__V_161_161 = mercury__string__f_43_43_2_f_0(hlds__pred_table__V_154_154, hlds__pred_table__V_153_153);
            }
#line 1213 "pred_table.m"
            {
#line 1213 "pred_table.m"
              hlds__pred_table__V_163_163 = mercury__string__f_43_43_2_f_0((MR_String) " for ", hlds__pred_table__V_161_161);
            }
#line 1214 "pred_table.m"
            {
#line 1214 "pred_table.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__pred_table__V_141_141, hlds__pred_table__N_23, &hlds__pred_table__V_164_164);
            }
#line 1213 "pred_table.m"
            {
#line 1213 "pred_table.m"
              hlds__pred_table__V_171_171 = mercury__string__f_43_43_2_f_0(hlds__pred_table__V_164_164, hlds__pred_table__V_163_163);
            }
#line 1213 "pred_table.m"
            {
#line 1213 "pred_table.m"
              hlds__pred_table__V_48_48 = mercury__string__f_43_43_2_f_0((MR_String) "there is no mode ", hlds__pred_table__V_171_171);
            }
#line 1212 "pred_table.m"
            {
#line 1212 "pred_table.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.lookup_builtin_pred_proc_id\'/8", hlds__pred_table__V_48_48);
#line 1212 "pred_table.m"
              return;
            }
#line 1212 "pred_table.m"
          }
#line 1208 "pred_table.m"
      }
#line 1156 "pred_table.m"
  }
#line 283 "pred_table.m"
}

#line 277 "pred_table.m"
void MR_CALL 
hlds__pred_table__get_proc_id_3_p_0(
#line 277 "pred_table.m"
  MR_Word hlds__pred_table__ModuleInfo_4,
#line 277 "pred_table.m"
  MR_Word hlds__pred_table__PredId_5,
#line 277 "pred_table.m"
  MR_Integer * hlds__pred_table__ProcId_6)
#line 277 "pred_table.m"
{
#line 1125 "pred_table.m"
  {
#line 1125 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 1125 "pred_table.m"
    MR_Word hlds__pred_table__PredInfo_7;
#line 1125 "pred_table.m"
    MR_Word hlds__pred_table__ProcIds_8;
#line 1128 "pred_table.m"
    MR_Integer hlds__pred_table__ProcId0_9;
#line 1128 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18;

#line 1126 "pred_table.m"
    {
#line 1126 "pred_table.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__pred_table__ModuleInfo_4, hlds__pred_table__PredId_5, &hlds__pred_table__PredInfo_7);
    }
#line 1127 "pred_table.m"
    {
#line 1127 "pred_table.m"
      hlds__pred_table__ProcIds_8 = hlds__hlds_pred__pred_info_procids_1_f_0(hlds__pred_table__PredInfo_7);
    }
#line 1128 "pred_table.m"
    hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__ProcIds_8)) == (MR_mktag((MR_Integer) 1)));
#line 1128 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 1128 "pred_table.m"
      {
#line 1128 "pred_table.m"
        hlds__pred_table__ProcId0_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__ProcIds_8, (MR_Integer) 0)));
#line 1128 "pred_table.m"
        hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__ProcIds_8, (MR_Integer) 1)));
#line 1128 "pred_table.m"
        hlds__pred_table__succeeded = (hlds__pred_table__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1128 "pred_table.m"
      }
#line 1128 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 1129 "pred_table.m"
      *hlds__pred_table__ProcId_6 = hlds__pred_table__ProcId0_9;
#line 1128 "pred_table.m"
    else
#line 1131 "pred_table.m"
      {
#line 1131 "pred_table.m"
        MR_String hlds__pred_table__Name_10;
#line 1131 "pred_table.m"
        MR_Word hlds__pred_table__PredOrFunc_11;
#line 1131 "pred_table.m"
        MR_Integer hlds__pred_table__Arity_12;
#line 1131 "pred_table.m"
        MR_String hlds__pred_table__PredOrFuncStr_13;
#line 1131 "pred_table.m"
        MR_String hlds__pred_table__ArityString_14;
#line 1131 "pred_table.m"
        MR_String hlds__pred_table__Message_15;

#line 1131 "pred_table.m"
        {
#line 1131 "pred_table.m"
          hlds__pred_table__Name_10 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__pred_table__PredInfo_7);
        }
#line 1132 "pred_table.m"
        {
#line 1132 "pred_table.m"
          hlds__pred_table__PredOrFunc_11 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__pred_table__PredInfo_7);
        }
#line 1133 "pred_table.m"
        {
#line 1133 "pred_table.m"
          hlds__pred_table__Arity_12 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__pred_table__PredInfo_7);
        }
#line 1134 "pred_table.m"
        {
#line 1134 "pred_table.m"
          hlds__pred_table__PredOrFuncStr_13 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(hlds__pred_table__PredOrFunc_11);
        }
#line 1135 "pred_table.m"
        {
#line 1135 "pred_table.m"
          mercury__string__int_to_string_2_p_0(hlds__pred_table__Arity_12, &hlds__pred_table__ArityString_14);
        }
#line 1143 "pred_table.m"
        if ((hlds__pred_table__ProcIds_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1137 "pred_table.m"
          {
#line 1137 "pred_table.m"
            MR_Word hlds__pred_table__V_35_35;
#line 1137 "pred_table.m"
            MR_Word hlds__pred_table__V_37_37;
#line 1137 "pred_table.m"
            MR_Word hlds__pred_table__V_38_38;
#line 1137 "pred_table.m"
            MR_Word hlds__pred_table__V_40_40;
#line 1137 "pred_table.m"
            MR_Word hlds__pred_table__V_41_41;
#line 1137 "pred_table.m"
            MR_Word hlds__pred_table__V_43_43;

#line 1140 "pred_table.m"
            {
#line 1140 "pred_table.m"
              hlds__pred_table__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1140 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_43_43, 0) = ((MR_Box) (hlds__pred_table__ArityString_14));
#line 1140 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[9])));
#line 1140 "pred_table.m"
            }
#line 1140 "pred_table.m"
            {
#line 1140 "pred_table.m"
              hlds__pred_table__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1140 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_41_41, 0) = ((MR_Box) ((MR_String) "/"));
#line 1140 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_41_41, 1) = ((MR_Box) (hlds__pred_table__V_43_43));
#line 1140 "pred_table.m"
            }
#line 1140 "pred_table.m"
            {
#line 1140 "pred_table.m"
              hlds__pred_table__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1140 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_40_40, 0) = ((MR_Box) (hlds__pred_table__Name_10));
#line 1140 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_40_40, 1) = ((MR_Box) (hlds__pred_table__V_41_41));
#line 1140 "pred_table.m"
            }
#line 1140 "pred_table.m"
            {
#line 1140 "pred_table.m"
              hlds__pred_table__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1140 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_38_38, 0) = ((MR_Box) ((MR_String) "\n\140"));
#line 1140 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_38_38, 1) = ((MR_Box) (hlds__pred_table__V_40_40));
#line 1140 "pred_table.m"
            }
#line 1139 "pred_table.m"
            {
#line 1139 "pred_table.m"
              hlds__pred_table__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1139 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_37_37, 0) = ((MR_Box) (hlds__pred_table__PredOrFuncStr_13));
#line 1139 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_37_37, 1) = ((MR_Box) (hlds__pred_table__V_38_38));
#line 1139 "pred_table.m"
            }
#line 1139 "pred_table.m"
            {
#line 1139 "pred_table.m"
              hlds__pred_table__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1139 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_35_35, 0) = ((MR_Box) ((MR_String) "cannot take address of "));
#line 1139 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_35_35, 1) = ((MR_Box) (hlds__pred_table__V_37_37));
#line 1139 "pred_table.m"
            }
#line 1138 "pred_table.m"
            {
#line 1138 "pred_table.m"
              mercury__string__append_list_2_p_0(hlds__pred_table__V_35_35, &hlds__pred_table__Message_15);
            }
#line 1137 "pred_table.m"
          }
#line 1143 "pred_table.m"
        else
#line 1144 "pred_table.m"
          {
#line 1144 "pred_table.m"
            MR_Word hlds__pred_table__V_19_19;
#line 1144 "pred_table.m"
            MR_Word hlds__pred_table__V_21_21;
#line 1144 "pred_table.m"
            MR_Word hlds__pred_table__V_23_23;
#line 1144 "pred_table.m"
            MR_Word hlds__pred_table__V_24_24;
#line 1144 "pred_table.m"
            MR_Word hlds__pred_table__V_26_26;
#line 1144 "pred_table.m"
            MR_Word hlds__pred_table__V_27_27;
#line 1144 "pred_table.m"
            MR_Word hlds__pred_table__V_29_29;

#line 1148 "pred_table.m"
            {
#line 1148 "pred_table.m"
              hlds__pred_table__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_29_29, 0) = ((MR_Box) (hlds__pred_table__ArityString_14));
#line 1148 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[11])));
#line 1148 "pred_table.m"
            }
#line 1148 "pred_table.m"
            {
#line 1148 "pred_table.m"
              hlds__pred_table__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_27_27, 0) = ((MR_Box) ((MR_String) "/"));
#line 1148 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_27_27, 1) = ((MR_Box) (hlds__pred_table__V_29_29));
#line 1148 "pred_table.m"
            }
#line 1148 "pred_table.m"
            {
#line 1148 "pred_table.m"
              hlds__pred_table__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_26_26, 0) = ((MR_Box) (hlds__pred_table__Name_10));
#line 1148 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_26_26, 1) = ((MR_Box) (hlds__pred_table__V_27_27));
#line 1148 "pred_table.m"
            }
#line 1148 "pred_table.m"
            {
#line 1148 "pred_table.m"
              hlds__pred_table__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_24_24, 0) = ((MR_Box) ((MR_String) "\n\140"));
#line 1148 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_24_24, 1) = ((MR_Box) (hlds__pred_table__V_26_26));
#line 1148 "pred_table.m"
            }
#line 1147 "pred_table.m"
            {
#line 1147 "pred_table.m"
              hlds__pred_table__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_23_23, 0) = ((MR_Box) (hlds__pred_table__PredOrFuncStr_13));
#line 1147 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_23_23, 1) = ((MR_Box) (hlds__pred_table__V_24_24));
#line 1147 "pred_table.m"
            }
#line 1147 "pred_table.m"
            {
#line 1147 "pred_table.m"
              hlds__pred_table__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_21_21, 0) = ((MR_Box) ((MR_String) "taking address of "));
#line 1147 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_21_21, 1) = ((MR_Box) (hlds__pred_table__V_23_23));
#line 1147 "pred_table.m"
            }
#line 1146 "pred_table.m"
            {
#line 1146 "pred_table.m"
              hlds__pred_table__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1146 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_19_19, 0) = ((MR_Box) ((MR_String) "sorry, not implemented: "));
#line 1146 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_19_19, 1) = ((MR_Box) (hlds__pred_table__V_21_21));
#line 1146 "pred_table.m"
            }
#line 1145 "pred_table.m"
            {
#line 1145 "pred_table.m"
              mercury__string__append_list_2_p_0(hlds__pred_table__V_19_19, &hlds__pred_table__Message_15);
            }
#line 1144 "pred_table.m"
          }
#line 1152 "pred_table.m"
        {
#line 1152 "pred_table.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.get_proc_id\'/3", hlds__pred_table__Message_15);
#line 1152 "pred_table.m"
          return;
        }
#line 1131 "pred_table.m"
      }
#line 1125 "pred_table.m"
  }
#line 277 "pred_table.m"
}

#line 269 "pred_table.m"
MR_bool MR_CALL 
hlds__pred_table__get_pred_id_by_types_10_p_0(
#line 269 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_11,
#line 269 "pred_table.m"
  MR_Word hlds__pred_table__SymName_12,
#line 269 "pred_table.m"
  MR_Word hlds__pred_table__PredOrFunc_13,
#line 269 "pred_table.m"
  MR_Word hlds__pred_table__TVarSet_14,
#line 269 "pred_table.m"
  MR_Word hlds__pred_table__ExistQTVars_15,
#line 269 "pred_table.m"
  MR_Word hlds__pred_table__ArgTypes_16,
#line 269 "pred_table.m"
  MR_Word hlds__pred_table__HeadTypeParams_17,
#line 269 "pred_table.m"
  MR_Word hlds__pred_table__ModuleInfo_18,
#line 269 "pred_table.m"
  MR_Word hlds__pred_table__Context_19,
#line 269 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_20)
#line 269 "pred_table.m"
{
#line 1087 "pred_table.m"
  {
#line 1087 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 1087 "pred_table.m"
    MR_Word hlds__pred_table__PredicateTable_21;
#line 1087 "pred_table.m"
    MR_Integer hlds__pred_table__Arity_22;
#line 1087 "pred_table.m"
    MR_Word hlds__pred_table__PredIds_23;
#line 1094 "pred_table.m"
    MR_Word hlds__pred_table___PredName_25;

#line 1088 "pred_table.m"
    {
#line 1088 "pred_table.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__pred_table__ModuleInfo_18, &hlds__pred_table__PredicateTable_21);
    }
#line 1089 "pred_table.m"
    {
#line 1089 "pred_table.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__pred_table__ArgTypes_16, &hlds__pred_table__Arity_22);
    }
#line 1090 "pred_table.m"
    {
#line 1090 "pred_table.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__pred_table__PredicateTable_21, hlds__pred_table__IsFullyQualified_11, hlds__pred_table__PredOrFunc_13, hlds__pred_table__SymName_12, hlds__pred_table__Arity_22, &hlds__pred_table__PredIds_23);
    }
#line 1094 "pred_table.m"
    {
#line 1094 "pred_table.m"
      hlds__pred_table__succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(hlds__pred_table__ModuleInfo_18, hlds__pred_table__PredIds_23, hlds__pred_table__TVarSet_14, hlds__pred_table__ExistQTVars_15, hlds__pred_table__ArgTypes_16, hlds__pred_table__HeadTypeParams_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__pred_table__Context_19, hlds__pred_table__PredId_20, &hlds__pred_table___PredName_25);
    }
#line 1087 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 1087 "pred_table.m"
  }
#line 269 "pred_table.m"
}

#line 261 "pred_table.m"
void MR_CALL 
hlds__pred_table__get_pred_id_and_proc_id_by_types_11_p_0(
#line 261 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_12,
#line 261 "pred_table.m"
  MR_Word hlds__pred_table__SymName_13,
#line 261 "pred_table.m"
  MR_Word hlds__pred_table__PredOrFunc_14,
#line 261 "pred_table.m"
  MR_Word hlds__pred_table__TVarSet_15,
#line 261 "pred_table.m"
  MR_Word hlds__pred_table__ExistQTVars_16,
#line 261 "pred_table.m"
  MR_Word hlds__pred_table__ArgTypes_17,
#line 261 "pred_table.m"
  MR_Word hlds__pred_table__HeadTypeParams_18,
#line 261 "pred_table.m"
  MR_Word hlds__pred_table__ModuleInfo_19,
#line 261 "pred_table.m"
  MR_Word hlds__pred_table__Context_20,
#line 261 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_21,
#line 261 "pred_table.m"
  MR_Integer * hlds__pred_table__ProcId_22)
#line 261 "pred_table.m"
{
#line 1105 "pred_table.m"
  {
#line 1105 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 1106 "pred_table.m"
    MR_Word hlds__pred_table__PredId0_23;
#line 1087 "pred_table.m"
    MR_Word hlds__pred_table__PredicateTable_54;
#line 1087 "pred_table.m"
    MR_Integer hlds__pred_table__Arity_55;
#line 1087 "pred_table.m"
    MR_Word hlds__pred_table__PredIds_56;
#line 1094 "pred_table.m"
    MR_Word hlds__pred_table___PredName_58;

#line 1088 "pred_table.m"
    {
#line 1088 "pred_table.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__pred_table__ModuleInfo_19, &hlds__pred_table__PredicateTable_54);
    }
#line 1089 "pred_table.m"
    {
#line 1089 "pred_table.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__pred_table__ArgTypes_17, &hlds__pred_table__Arity_55);
    }
#line 1090 "pred_table.m"
    {
#line 1090 "pred_table.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__pred_table__PredicateTable_54, hlds__pred_table__IsFullyQualified_12, hlds__pred_table__PredOrFunc_14, hlds__pred_table__SymName_13, hlds__pred_table__Arity_55, &hlds__pred_table__PredIds_56);
    }
#line 1094 "pred_table.m"
    {
#line 1094 "pred_table.m"
      hlds__pred_table__succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(hlds__pred_table__ModuleInfo_19, hlds__pred_table__PredIds_56, hlds__pred_table__TVarSet_15, hlds__pred_table__ExistQTVars_16, hlds__pred_table__ArgTypes_17, hlds__pred_table__HeadTypeParams_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__pred_table__Context_20, &hlds__pred_table__PredId0_23, &hlds__pred_table___PredName_58);
    }
#line 1106 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 1111 "pred_table.m"
      *hlds__pred_table__PredId_21 = hlds__pred_table__PredId0_23;
#line 1106 "pred_table.m"
    else
#line 1115 "pred_table.m"
      {
#line 1115 "pred_table.m"
        MR_Integer hlds__pred_table__Arity_24;
#line 1115 "pred_table.m"
        MR_String hlds__pred_table__PredOrFuncStr_25;
#line 1115 "pred_table.m"
        MR_String hlds__pred_table__NameStr_26;
#line 1115 "pred_table.m"
        MR_String hlds__pred_table__ArityString_27;
#line 1115 "pred_table.m"
        MR_String hlds__pred_table__Msg_28;
#line 1115 "pred_table.m"
        MR_Word hlds__pred_table__V_29_29;
#line 1115 "pred_table.m"
        MR_Word hlds__pred_table__V_31_31;
#line 1115 "pred_table.m"
        MR_Word hlds__pred_table__V_32_32;
#line 1115 "pred_table.m"
        MR_Word hlds__pred_table__V_34_34;
#line 1115 "pred_table.m"
        MR_Word hlds__pred_table__V_35_35;
#line 1115 "pred_table.m"
        MR_Word hlds__pred_table__V_37_37;

#line 1115 "pred_table.m"
        {
#line 1115 "pred_table.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__pred_table__ArgTypes_17, &hlds__pred_table__Arity_24);
        }
#line 1116 "pred_table.m"
        {
#line 1116 "pred_table.m"
          hlds__pred_table__PredOrFuncStr_25 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(hlds__pred_table__PredOrFunc_14);
        }
#line 1117 "pred_table.m"
        {
#line 1117 "pred_table.m"
          hlds__pred_table__NameStr_26 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__pred_table__SymName_13);
        }
#line 1118 "pred_table.m"
        {
#line 1118 "pred_table.m"
          mercury__string__int_to_string_2_p_0(hlds__pred_table__Arity_24, &hlds__pred_table__ArityString_27);
        }
#line 1120 "pred_table.m"
        {
#line 1120 "pred_table.m"
          hlds__pred_table__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1120 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_37_37, 0) = ((MR_Box) (hlds__pred_table__ArityString_27));
#line 1120 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[15])));
#line 1120 "pred_table.m"
        }
#line 1120 "pred_table.m"
        {
#line 1120 "pred_table.m"
          hlds__pred_table__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1120 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_35_35, 0) = ((MR_Box) ((MR_String) "/"));
#line 1120 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_35_35, 1) = ((MR_Box) (hlds__pred_table__V_37_37));
#line 1120 "pred_table.m"
        }
#line 1120 "pred_table.m"
        {
#line 1120 "pred_table.m"
          hlds__pred_table__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1120 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_34_34, 0) = ((MR_Box) (hlds__pred_table__NameStr_26));
#line 1120 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_34_34, 1) = ((MR_Box) (hlds__pred_table__V_35_35));
#line 1120 "pred_table.m"
        }
#line 1120 "pred_table.m"
        {
#line 1120 "pred_table.m"
          hlds__pred_table__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1120 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_32_32, 0) = ((MR_Box) ((MR_String) "\n\140"));
#line 1120 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_32_32, 1) = ((MR_Box) (hlds__pred_table__V_34_34));
#line 1120 "pred_table.m"
        }
#line 1119 "pred_table.m"
        {
#line 1119 "pred_table.m"
          hlds__pred_table__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1119 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_31_31, 0) = ((MR_Box) (hlds__pred_table__PredOrFuncStr_25));
#line 1119 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_31_31, 1) = ((MR_Box) (hlds__pred_table__V_32_32));
#line 1119 "pred_table.m"
        }
#line 1119 "pred_table.m"
        {
#line 1119 "pred_table.m"
          hlds__pred_table__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1119 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_29_29, 0) = ((MR_Box) ((MR_String) "undefined/invalid "));
#line 1119 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_29_29, 1) = ((MR_Box) (hlds__pred_table__V_31_31));
#line 1119 "pred_table.m"
        }
#line 1119 "pred_table.m"
        {
#line 1119 "pred_table.m"
          mercury__string__append_list_2_p_0(hlds__pred_table__V_29_29, &hlds__pred_table__Msg_28);
        }
#line 1121 "pred_table.m"
        {
#line 1121 "pred_table.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.get_pred_id_and_proc_id_by_types\'/11", hlds__pred_table__Msg_28);
#line 1121 "pred_table.m"
          return;
        }
#line 1115 "pred_table.m"
      }
#line 1123 "pred_table.m"
    {
#line 1123 "pred_table.m"
      hlds__pred_table__get_proc_id_3_p_0(hlds__pred_table__ModuleInfo_19, *hlds__pred_table__PredId_21, hlds__pred_table__ProcId_22);
    }
#line 1105 "pred_table.m"
  }
#line 261 "pred_table.m"
}

#line 247 "pred_table.m"
MR_bool MR_CALL 
hlds__pred_table__find_matching_pred_id_10_p_0(
#line 247 "pred_table.m"
  MR_Word hlds__pred_table__ModuleInfo_11,
#line 247 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 247 "pred_table.m"
  MR_Word hlds__pred_table__TVarSet_14,
#line 247 "pred_table.m"
  MR_Word hlds__pred_table__ExistQTVars_15,
#line 247 "pred_table.m"
  MR_Word hlds__pred_table__ArgTypes_16,
#line 247 "pred_table.m"
  MR_Word hlds__pred_table__HeadTypeParams_17,
#line 247 "pred_table.m"
  MR_Word hlds__pred_table__MaybeConstraintSearch_18,
#line 247 "pred_table.m"
  MR_Word hlds__pred_table__Context_19,
#line 247 "pred_table.m"
  MR_Word * hlds__pred_table__ThePredId_20,
#line 247 "pred_table.m"
  MR_Word * hlds__pred_table__PredName_21)
#line 247 "pred_table.m"
{
#line 1006 "pred_table.m"
  while (MR_TRUE)
#line 1006 "pred_table.m"
    {
#line 1006 "pred_table.m"
      /* tailcall optimized into a loop */
#line 1006 "pred_table.m"
      {
#line 1006 "pred_table.m"
        MR_bool hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1006 "pred_table.m"
        MR_Word hlds__pred_table__PredId_12;
#line 1006 "pred_table.m"
        MR_Word hlds__pred_table__PredIds_13;
#line 1007 "pred_table.m"
        MR_Word hlds__pred_table__PredInfo_22;
#line 1011 "pred_table.m"
        MR_Word hlds__pred_table__PredTVarSet_23;
#line 1011 "pred_table.m"
        MR_Word hlds__pred_table__PredExistQVars0_24;
#line 1011 "pred_table.m"
        MR_Word hlds__pred_table__PredArgTypes0_25;
#line 1011 "pred_table.m"
        MR_Word hlds__pred_table__PredKindMap_26;

#line 1004 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 1004 "pred_table.m"
          {
#line 1004 "pred_table.m"
            hlds__pred_table__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 1004 "pred_table.m"
            hlds__pred_table__PredIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));
#line 1011 "pred_table.m"
            {
#line 1011 "pred_table.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(hlds__pred_table__ModuleInfo_11, hlds__pred_table__PredId_12, &hlds__pred_table__PredInfo_22);
            }
#line 1012 "pred_table.m"
            {
#line 1012 "pred_table.m"
              hlds__hlds_pred__pred_info_get_arg_types_4_p_0(hlds__pred_table__PredInfo_22, &hlds__pred_table__PredTVarSet_23, &hlds__pred_table__PredExistQVars0_24, &hlds__pred_table__PredArgTypes0_25);
            }
#line 1014 "pred_table.m"
            {
#line 1014 "pred_table.m"
              hlds__hlds_pred__pred_info_get_tvar_kind_map_2_p_0(hlds__pred_table__PredInfo_22, &hlds__pred_table__PredKindMap_26);
            }
#line 1016 "pred_table.m"
            {
#line 1016 "pred_table.m"
              hlds__pred_table__succeeded = parse_tree__prog_type__arg_type_list_subsumes_8_p_0(hlds__pred_table__TVarSet_14, hlds__pred_table__ExistQTVars_15, hlds__pred_table__ArgTypes_16, hlds__pred_table__HeadTypeParams_17, hlds__pred_table__PredTVarSet_23, hlds__pred_table__PredKindMap_26, hlds__pred_table__PredExistQVars0_24, hlds__pred_table__PredArgTypes0_25);
            }
#line 1011 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 1021 "pred_table.m"
              {
#line 1021 "pred_table.m"
                if ((hlds__pred_table__MaybeConstraintSearch_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1020 "pred_table.m"
                  hlds__pred_table__succeeded = MR_TRUE;
#line 1021 "pred_table.m"
                else
#line 1022 "pred_table.m"
                  {
#line 1022 "pred_table.m"
                    MR_Word hlds__pred_table__ConstraintSearch_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__MaybeConstraintSearch_18, (MR_Integer) 0)));
#line 1022 "pred_table.m"
                    MR_Word hlds__pred_table__ProgConstraints_28;
#line 1022 "pred_table.m"
                    MR_Word hlds__pred_table__UnivConstraints_29;
#line 1022 "pred_table.m"
                    MR_Integer hlds__pred_table__NumConstraints_31;
#line 1022 "pred_table.m"
                    MR_Word hlds__pred_table__ProvenConstraints_32;
#line 1025 "pred_table.m"
                    MR_Word hlds__pred_table__V_30_30;
#line 1027 "pred_table.m"
                    MR_bool MR_CALL (* hlds__pred_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 1027 "pred_table.m"
                    MR_Box hlds__pred_table__conv1_ProvenConstraints_32;

#line 1024 "pred_table.m"
                    {
#line 1024 "pred_table.m"
                      hlds__hlds_pred__pred_info_get_class_context_2_p_0(hlds__pred_table__PredInfo_22, &hlds__pred_table__ProgConstraints_28);
                    }
#line 1025 "pred_table.m"
                    hlds__pred_table__UnivConstraints_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__ProgConstraints_28, (MR_Integer) 0)));
#line 1025 "pred_table.m"
                    hlds__pred_table__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__ProgConstraints_28, (MR_Integer) 1)));
#line 1026 "pred_table.m"
                    {
#line 1026 "pred_table.m"
                      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__pred_table__UnivConstraints_29, &hlds__pred_table__NumConstraints_31);
                    }
#line 1027 "pred_table.m"
                    hlds__pred_table__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__pred_table__ConstraintSearch_27, (MR_Integer) 1)));
#line 1027 "pred_table.m"
                    {
#line 1027 "pred_table.m"
                      hlds__pred_table__succeeded = hlds__pred_table__func_0(((MR_Box) hlds__pred_table__ConstraintSearch_27), ((MR_Box) (hlds__pred_table__NumConstraints_31)), &hlds__pred_table__conv1_ProvenConstraints_32);
                    }
#line 1027 "pred_table.m"
                    if (hlds__pred_table__succeeded)
#line 1027 "pred_table.m"
                      {
#line 1027 "pred_table.m"
                        hlds__pred_table__ProvenConstraints_32 = ((MR_Word) hlds__pred_table__conv1_ProvenConstraints_32);
#line 1027 "pred_table.m"
                        hlds__pred_table__succeeded = MR_TRUE;
#line 1027 "pred_table.m"
                      }
#line 1022 "pred_table.m"
                    if (hlds__pred_table__succeeded)
#line 1028 "pred_table.m"
                      {
#line 1028 "pred_table.m"
                        hlds__pred_table__succeeded = hlds__pred_table__univ_constraints_match_2_p_0(hlds__pred_table__ProvenConstraints_32, hlds__pred_table__UnivConstraints_29);
                      }
#line 1022 "pred_table.m"
                  }
#line 1021 "pred_table.m"
              }
#line 1007 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 1034 "pred_table.m"
              {
#line 1034 "pred_table.m"
                MR_String hlds__pred_table__PName_33;
#line 1034 "pred_table.m"
                MR_Word hlds__pred_table__Module_34;
#line 1037 "pred_table.m"
                MR_Word hlds__pred_table__OtherPredId_35;
#line 1038 "pred_table.m"
                MR_Word hlds__pred_table___OtherPredName_36;

#line 1034 "pred_table.m"
                {
#line 1034 "pred_table.m"
                  hlds__pred_table__PName_33 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__pred_table__PredInfo_22);
                }
#line 1035 "pred_table.m"
                {
#line 1035 "pred_table.m"
                  hlds__pred_table__Module_34 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__pred_table__PredInfo_22);
                }
#line 1036 "pred_table.m"
                {
#line 1036 "pred_table.m"
                  MR_Word base;
#line 1036 "pred_table.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1036 "pred_table.m"
                  *hlds__pred_table__PredName_21 = base;
#line 1036 "pred_table.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__pred_table__Module_34));
#line 1036 "pred_table.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__pred_table__PName_33));
#line 1036 "pred_table.m"
                }
#line 1038 "pred_table.m"
                {
#line 1038 "pred_table.m"
                  hlds__pred_table__succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(hlds__pred_table__ModuleInfo_11, hlds__pred_table__PredIds_13, hlds__pred_table__TVarSet_14, hlds__pred_table__ExistQTVars_15, hlds__pred_table__ArgTypes_16, hlds__pred_table__HeadTypeParams_17, hlds__pred_table__MaybeConstraintSearch_18, hlds__pred_table__Context_19, &hlds__pred_table__OtherPredId_35, &hlds__pred_table___OtherPredName_36);
                }
#line 1037 "pred_table.m"
                if (hlds__pred_table__succeeded)
#line 1042 "pred_table.m"
                  {
#line 1042 "pred_table.m"
                    MR_Word hlds__pred_table__OtherPredInfo_37;
#line 1042 "pred_table.m"
                    MR_Word hlds__pred_table__PredCallId_38;
#line 1042 "pred_table.m"
                    MR_Word hlds__pred_table__OtherPredCallId_39;
#line 1046 "pred_table.m"
                    MR_Word hlds__pred_table__Globals_41;
#line 1046 "pred_table.m"
                    MR_Word hlds__pred_table__Pieces_42;
#line 1046 "pred_table.m"
                    MR_Word hlds__pred_table__V_46_46;
#line 1046 "pred_table.m"
                    MR_Word hlds__pred_table__V_49_49;
#line 1046 "pred_table.m"
                    MR_Word hlds__pred_table__V_50_50;
#line 1046 "pred_table.m"
                    MR_Word hlds__pred_table__V_51_51;
#line 1046 "pred_table.m"
                    MR_Word hlds__pred_table__V_54_54;
#line 1046 "pred_table.m"
                    MR_Word hlds__pred_table__V_55_55;

#line 1042 "pred_table.m"
                    {
#line 1042 "pred_table.m"
                      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__pred_table__ModuleInfo_11, hlds__pred_table__OtherPredId_35, &hlds__pred_table__OtherPredInfo_37);
                    }
#line 1043 "pred_table.m"
                    {
#line 1043 "pred_table.m"
                      hlds__hlds_pred__pred_info_get_call_id_2_p_0(hlds__pred_table__PredInfo_22, &hlds__pred_table__PredCallId_38);
                    }
#line 1044 "pred_table.m"
                    {
#line 1044 "pred_table.m"
                      hlds__hlds_pred__pred_info_get_call_id_2_p_0(hlds__pred_table__OtherPredInfo_37, &hlds__pred_table__OtherPredCallId_39);
                    }
#line 1047 "pred_table.m"
                    {
#line 1047 "pred_table.m"
                      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__pred_table__ModuleInfo_11, &hlds__pred_table__Globals_41);
                    }
#line 1049 "pred_table.m"
                    {
#line 1049 "pred_table.m"
                      hlds__pred_table__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1049 "pred_table.m"
                      MR_hl_field(MR_mktag(3), hlds__pred_table__V_50_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 1049 "pred_table.m"
                      MR_hl_field(MR_mktag(3), hlds__pred_table__V_50_50, 1) = ((MR_Box) (hlds__pred_table__PredCallId_38));
#line 1049 "pred_table.m"
                    }
#line 1050 "pred_table.m"
                    {
#line 1050 "pred_table.m"
                      hlds__pred_table__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1050 "pred_table.m"
                      MR_hl_field(MR_mktag(3), hlds__pred_table__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 1050 "pred_table.m"
                      MR_hl_field(MR_mktag(3), hlds__pred_table__V_55_55, 1) = ((MR_Box) (hlds__pred_table__OtherPredCallId_39));
#line 1050 "pred_table.m"
                    }
#line 1050 "pred_table.m"
                    {
#line 1050 "pred_table.m"
                      hlds__pred_table__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1050 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_54_54, 0) = ((MR_Box) (hlds__pred_table__V_55_55));
#line 1050 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[7])));
#line 1050 "pred_table.m"
                    }
#line 1049 "pred_table.m"
                    {
#line 1049 "pred_table.m"
                      hlds__pred_table__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1049 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_51_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__pred_table_scalar_common_1[14])));
#line 1049 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_51_51, 1) = ((MR_Box) (hlds__pred_table__V_54_54));
#line 1049 "pred_table.m"
                    }
#line 1049 "pred_table.m"
                    {
#line 1049 "pred_table.m"
                      hlds__pred_table__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1049 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_49_49, 0) = ((MR_Box) (hlds__pred_table__V_50_50));
#line 1049 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_49_49, 1) = ((MR_Box) (hlds__pred_table__V_51_51));
#line 1049 "pred_table.m"
                    }
#line 1049 "pred_table.m"
                    {
#line 1049 "pred_table.m"
                      hlds__pred_table__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1049 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_46_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__pred_table_scalar_common_1[13])));
#line 1049 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_46_46, 1) = ((MR_Box) (hlds__pred_table__V_49_49));
#line 1049 "pred_table.m"
                    }
#line 1048 "pred_table.m"
                    {
#line 1048 "pred_table.m"
                      hlds__pred_table__Pieces_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1048 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__Pieces_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__pred_table_scalar_common_1[12])));
#line 1048 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__Pieces_42, 1) = ((MR_Box) (hlds__pred_table__V_46_46));
#line 1048 "pred_table.m"
                    }
#line 1053 "pred_table.m"
                    {
#line 1053 "pred_table.m"
                      parse_tree__error_util__write_error_pieces_6_p_0(hlds__pred_table__Globals_41, hlds__pred_table__Context_19, (MR_Integer) 0, hlds__pred_table__Pieces_42);
                    }
#line 1055 "pred_table.m"
                    {
#line 1055 "pred_table.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.find_matching_pred_id\'/10", (MR_String) "unresolvable predicate overloading");
                    }
#line 1042 "pred_table.m"
                  }
#line 1037 "pred_table.m"
                else
#line 1057 "pred_table.m"
                  *hlds__pred_table__ThePredId_20 = hlds__pred_table__PredId_12;
#line 1034 "pred_table.m"
                hlds__pred_table__succeeded = MR_TRUE;
#line 1034 "pred_table.m"
              }
#line 1007 "pred_table.m"
            else
#line 1060 "pred_table.m"
              {
#line 1060 "pred_table.m"
                /* direct tailcall eliminated */
#line 1060 "pred_table.m"
                {
#line 1060 "pred_table.m"
                  MR_Word hlds__pred_table__HeadVar__2__tmp_copy_2 = hlds__pred_table__PredIds_13;

#line 1060 "pred_table.m"
                  hlds__pred_table__HeadVar__2_2 = hlds__pred_table__HeadVar__2__tmp_copy_2;
#line 1060 "pred_table.m"
                }
#line 1060 "pred_table.m"
                continue;
#line 1060 "pred_table.m"
              }
#line 1004 "pred_table.m"
          }
#line 1006 "pred_table.m"
        return hlds__pred_table__succeeded;
#line 1006 "pred_table.m"
      }
#line 1006 "pred_table.m"
      break;
#line 1006 "pred_table.m"
    }
#line 247 "pred_table.m"
}

#line 237 "pred_table.m"
void MR_CALL 
hlds__pred_table__resolve_pred_overloading_10_p_0(
#line 237 "pred_table.m"
  MR_Word hlds__pred_table__ModuleInfo_11,
#line 237 "pred_table.m"
  MR_Word hlds__pred_table__CallerMarkers_12,
#line 237 "pred_table.m"
  MR_Word hlds__pred_table__TVarSet_13,
#line 237 "pred_table.m"
  MR_Word hlds__pred_table__ExistQTVars_14,
#line 237 "pred_table.m"
  MR_Word hlds__pred_table__ArgTypes_15,
#line 237 "pred_table.m"
  MR_Word hlds__pred_table__HeadTypeParams_16,
#line 237 "pred_table.m"
  MR_Word hlds__pred_table__Context_17,
#line 237 "pred_table.m"
  MR_Word hlds__pred_table__PredName0_18,
#line 237 "pred_table.m"
  MR_Word * hlds__pred_table__PredName_19,
#line 237 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_20)
#line 237 "pred_table.m"
{
#line 980 "pred_table.m"
  {
#line 980 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 980 "pred_table.m"
    MR_Word hlds__pred_table__PredTable_21;
#line 980 "pred_table.m"
    MR_Word hlds__pred_table__IsFullyQualified_22;
#line 980 "pred_table.m"
    MR_Word hlds__pred_table__PredIds_23;
#line 992 "pred_table.m"
    MR_Word hlds__pred_table__PredId1_24;
#line 992 "pred_table.m"
    MR_Word hlds__pred_table__PredName1_25;

#line 985 "pred_table.m"
    {
#line 985 "pred_table.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__pred_table__ModuleInfo_11, &hlds__pred_table__PredTable_21);
    }
#line 986 "pred_table.m"
    {
#line 986 "pred_table.m"
      hlds__pred_table__IsFullyQualified_22 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(hlds__pred_table__CallerMarkers_12);
    }
#line 987 "pred_table.m"
    {
#line 987 "pred_table.m"
      hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0(hlds__pred_table__PredTable_21, hlds__pred_table__IsFullyQualified_22, hlds__pred_table__PredName0_18, &hlds__pred_table__PredIds_23);
    }
#line 993 "pred_table.m"
    {
#line 993 "pred_table.m"
      hlds__pred_table__succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(hlds__pred_table__ModuleInfo_11, hlds__pred_table__PredIds_23, hlds__pred_table__TVarSet_13, hlds__pred_table__ExistQTVars_14, hlds__pred_table__ArgTypes_15, hlds__pred_table__HeadTypeParams_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__pred_table__Context_17, &hlds__pred_table__PredId1_24, &hlds__pred_table__PredName1_25);
    }
#line 992 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 996 "pred_table.m"
      {
#line 996 "pred_table.m"
        *hlds__pred_table__PredId_20 = hlds__pred_table__PredId1_24;
#line 997 "pred_table.m"
        *hlds__pred_table__PredName_19 = hlds__pred_table__PredName1_25;
#line 996 "pred_table.m"
      }
#line 992 "pred_table.m"
    else
#line 1001 "pred_table.m"
      {
#line 1001 "pred_table.m"
        {
#line 1001 "pred_table.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.resolve_pred_overloading\'/10", (MR_String) "type error in pred call: no matching pred");
#line 1001 "pred_table.m"
          return;
        }
#line 1001 "pred_table.m"
      }
#line 980 "pred_table.m"
  }
#line 237 "pred_table.m"
}

#line 230 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_insert_4_p_0(
#line 230 "pred_table.m"
  MR_Word hlds__pred_table__PredInfo_5,
#line 230 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_6,
#line 230 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8,
#line 230 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_9)
#line 230 "pred_table.m"
{
#line 851 "pred_table.m"
  {
#line 851 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 852 "pred_table.m"
    {
#line 852 "pred_table.m"
      hlds__pred_table__do_predicate_table_insert_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__pred_table__PredInfo_5, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__pred_table__PredId_6, hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, hlds__pred_table__STATE_VARIABLE_PredicateTable_9);
    }
#line 851 "pred_table.m"
  }
#line 230 "pred_table.m"
}

#line 221 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_insert_qual_6_p_0(
#line 221 "pred_table.m"
  MR_Word hlds__pred_table__PredInfo_7,
#line 221 "pred_table.m"
  MR_Word hlds__pred_table__NeedQual_8,
#line 221 "pred_table.m"
  MR_Word hlds__pred_table__QualInfo_9,
#line 221 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_10,
#line 221 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_12,
#line 221 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_13)
#line 221 "pred_table.m"
{
#line 856 "pred_table.m"
  {
#line 856 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 856 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15;

#line 857 "pred_table.m"
    {
#line 857 "pred_table.m"
      hlds__pred_table__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 857 "pred_table.m"
      MR_hl_field(MR_mktag(1), hlds__pred_table__V_15_15, 0) = ((MR_Box) (hlds__pred_table__QualInfo_9));
#line 857 "pred_table.m"
    }
#line 857 "pred_table.m"
    {
#line 857 "pred_table.m"
      hlds__pred_table__do_predicate_table_insert_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__pred_table__PredInfo_7, hlds__pred_table__NeedQual_8, hlds__pred_table__V_15_15, hlds__pred_table__PredId_10, hlds__pred_table__STATE_VARIABLE_PredicateTable_0_12, hlds__pred_table__STATE_VARIABLE_PredicateTable_13);
    }
#line 856 "pred_table.m"
  }
#line 221 "pred_table.m"
}

#line 210 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pf_sym_5_p_0(
#line 210 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_6,
#line 210 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_7,
#line 210 "pred_table.m"
  MR_Word hlds__pred_table__PredOrFunc_8,
#line 210 "pred_table.m"
  MR_Word hlds__pred_table__SymName_9,
#line 210 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_10)
#line 210 "pred_table.m"
{
#line 794 "pred_table.m"
  {
#line 794 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 794 "pred_table.m"
#line 794 "pred_table.m"
    switch (hlds__pred_table__PredOrFunc_8) {
#line 794 "pred_table.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 794 "pred_table.m"
      case (MR_Integer) 1:
#line 799 "pred_table.m"
        {
#line 799 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_func_sym_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__IsFullyQualified_7, hlds__pred_table__SymName_9, hlds__pred_table__PredIds_10);
        }
#line 794 "pred_table.m"
        break;
#line 794 "pred_table.m"
      case (MR_Integer) 0:
#line 795 "pred_table.m"
        {
#line 795 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__IsFullyQualified_7, hlds__pred_table__SymName_9, hlds__pred_table__PredIds_10);
        }
#line 794 "pred_table.m"
        break;
#line 794 "pred_table.m"
    }
#line 794 "pred_table.m"
  }
#line 210 "pred_table.m"
}

#line 203 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(
#line 203 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_7,
#line 203 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_8,
#line 203 "pred_table.m"
  MR_Word hlds__pred_table__PredOrFunc_9,
#line 203 "pred_table.m"
  MR_Word hlds__pred_table__SymName_10,
#line 203 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_11,
#line 203 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_12)
#line 203 "pred_table.m"
{
#line 776 "pred_table.m"
  {
#line 776 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 776 "pred_table.m"
    if (((MR_tag((MR_Word) hlds__pred_table__SymName_10)) == (MR_mktag((MR_Integer) 1))))
#line 776 "pred_table.m"
      {
#line 776 "pred_table.m"
        MR_Word hlds__pred_table__Module_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_10, (MR_Integer) 0)));
#line 776 "pred_table.m"
        MR_String hlds__pred_table__Name_14 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_10, (MR_Integer) 1)));

#line 750 "pred_table.m"
#line 750 "pred_table.m"
        switch (hlds__pred_table__PredOrFunc_9) {
#line 750 "pred_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 750 "pred_table.m"
          case (MR_Integer) 1:
#line 754 "pred_table.m"
            {
#line 754 "pred_table.m"
              MR_Integer hlds__pred_table__FuncArity_23 = (hlds__pred_table__Arity_11 - (MR_Integer) 1);

#line 756 "pred_table.m"
              {
#line 756 "pred_table.m"
                hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredicateTable_7, hlds__pred_table__IsFullyQualified_8, hlds__pred_table__Module_13, hlds__pred_table__Name_14, hlds__pred_table__FuncArity_23, hlds__pred_table__PredIds_12);
              }
#line 754 "pred_table.m"
            }
#line 750 "pred_table.m"
            break;
#line 750 "pred_table.m"
          case (MR_Integer) 0:
#line 751 "pred_table.m"
            {
#line 751 "pred_table.m"
              hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredicateTable_7, hlds__pred_table__IsFullyQualified_8, hlds__pred_table__Module_13, hlds__pred_table__Name_14, hlds__pred_table__Arity_11, hlds__pred_table__PredIds_12);
            }
#line 750 "pred_table.m"
            break;
#line 750 "pred_table.m"
        }
#line 776 "pred_table.m"
      }
#line 776 "pred_table.m"
    else
#line 780 "pred_table.m"
      {
#line 780 "pred_table.m"
        MR_String hlds__pred_table__Name_15 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_10, (MR_Integer) 0)));

#line 785 "pred_table.m"
#line 785 "pred_table.m"
        switch (hlds__pred_table__IsFullyQualified_8) {
#line 785 "pred_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 785 "pred_table.m"
          case (MR_Integer) 0:
#line 787 "pred_table.m"
            *hlds__pred_table__PredIds_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 785 "pred_table.m"
            break;
#line 785 "pred_table.m"
          case (MR_Integer) 1:
#line 763 "pred_table.m"
#line 763 "pred_table.m"
            switch (hlds__pred_table__PredOrFunc_9) {
#line 763 "pred_table.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 763 "pred_table.m"
              case (MR_Integer) 1:
#line 767 "pred_table.m"
                {
#line 767 "pred_table.m"
                  MR_Integer hlds__pred_table__FuncArity_30 = (hlds__pred_table__Arity_11 - (MR_Integer) 1);

#line 769 "pred_table.m"
                  {
#line 769 "pred_table.m"
                    hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(hlds__pred_table__PredicateTable_7, hlds__pred_table__Name_15, hlds__pred_table__FuncArity_30, hlds__pred_table__PredIds_12);
                  }
#line 767 "pred_table.m"
                }
#line 763 "pred_table.m"
                break;
#line 763 "pred_table.m"
              case (MR_Integer) 0:
#line 764 "pred_table.m"
                {
#line 764 "pred_table.m"
                  hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(hlds__pred_table__PredicateTable_7, hlds__pred_table__Name_15, hlds__pred_table__Arity_11, hlds__pred_table__PredIds_12);
                }
#line 763 "pred_table.m"
                break;
#line 763 "pred_table.m"
            }
#line 785 "pred_table.m"
            break;
#line 785 "pred_table.m"
        }
#line 780 "pred_table.m"
      }
#line 776 "pred_table.m"
  }
#line 203 "pred_table.m"
}

#line 193 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pf_name_arity_5_p_0(
#line 193 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_6,
#line 193 "pred_table.m"
  MR_Word hlds__pred_table__PredOrFunc_7,
#line 193 "pred_table.m"
  MR_String hlds__pred_table__Name_8,
#line 193 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_9,
#line 193 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_10)
#line 193 "pred_table.m"
{
#line 763 "pred_table.m"
  {
#line 763 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 763 "pred_table.m"
#line 763 "pred_table.m"
    switch (hlds__pred_table__PredOrFunc_7) {
#line 763 "pred_table.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 763 "pred_table.m"
      case (MR_Integer) 1:
#line 767 "pred_table.m"
        {
#line 767 "pred_table.m"
          MR_Integer hlds__pred_table__FuncArity_11 = (hlds__pred_table__Arity_9 - (MR_Integer) 1);

#line 769 "pred_table.m"
          {
#line 769 "pred_table.m"
            hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__Name_8, hlds__pred_table__FuncArity_11, hlds__pred_table__PredIds_10);
          }
#line 767 "pred_table.m"
        }
#line 763 "pred_table.m"
        break;
#line 763 "pred_table.m"
      case (MR_Integer) 0:
#line 764 "pred_table.m"
        {
#line 764 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__Name_8, hlds__pred_table__Arity_9, hlds__pred_table__PredIds_10);
        }
#line 763 "pred_table.m"
        break;
#line 763 "pred_table.m"
    }
#line 763 "pred_table.m"
  }
#line 193 "pred_table.m"
}

#line 182 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pf_m_n_a_7_p_0(
#line 182 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_8,
#line 182 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_9,
#line 182 "pred_table.m"
  MR_Word hlds__pred_table__PredOrFunc_10,
#line 182 "pred_table.m"
  MR_Word hlds__pred_table__Module_11,
#line 182 "pred_table.m"
  MR_String hlds__pred_table__Name_12,
#line 182 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_13,
#line 182 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_14)
#line 182 "pred_table.m"
{
#line 750 "pred_table.m"
  {
#line 750 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 750 "pred_table.m"
#line 750 "pred_table.m"
    switch (hlds__pred_table__PredOrFunc_10) {
#line 750 "pred_table.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 750 "pred_table.m"
      case (MR_Integer) 1:
#line 754 "pred_table.m"
        {
#line 754 "pred_table.m"
          MR_Integer hlds__pred_table__FuncArity_15 = (hlds__pred_table__Arity_13 - (MR_Integer) 1);

#line 756 "pred_table.m"
          {
#line 756 "pred_table.m"
            hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredicateTable_8, hlds__pred_table__IsFullyQualified_9, hlds__pred_table__Module_11, hlds__pred_table__Name_12, hlds__pred_table__FuncArity_15, hlds__pred_table__PredIds_14);
          }
#line 754 "pred_table.m"
        }
#line 750 "pred_table.m"
        break;
#line 750 "pred_table.m"
      case (MR_Integer) 0:
#line 751 "pred_table.m"
        {
#line 751 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredicateTable_8, hlds__pred_table__IsFullyQualified_9, hlds__pred_table__Module_11, hlds__pred_table__Name_12, hlds__pred_table__Arity_13, hlds__pred_table__PredIds_14);
        }
#line 750 "pred_table.m"
        break;
#line 750 "pred_table.m"
    }
#line 750 "pred_table.m"
  }
#line 182 "pred_table.m"
}

#line 736 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0_1(
#line 736 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 736 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1)
#line 736 "pred_table.m"
{
#line 736 "pred_table.m"
  {
#line 736 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 736 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;

#line 736 "pred_table.m"
    {
#line 736 "pred_table.m"
      hlds__pred_table__succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) hlds__pred_table__wrapper_arg_1));
    }
#line 736 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 736 "pred_table.m"
  }
#line 736 "pred_table.m"
}

#line 171 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(
#line 171 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_7,
#line 171 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_8,
#line 171 "pred_table.m"
  MR_Word hlds__pred_table__Module_9,
#line 171 "pred_table.m"
  MR_String hlds__pred_table__FuncName_10,
#line 171 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_11,
#line 171 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredIds_15)
#line 171 "pred_table.m"
{
#line 715 "pred_table.m"
  {
#line 715 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 715 "pred_table.m"
    MR_Word hlds__pred_table__F_MNA_Index_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 9)));
#line 716 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 0)));
#line 716 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 1)));
#line 716 "pred_table.m"
    MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 2)));
#line 716 "pred_table.m"
    MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 3)));
#line 716 "pred_table.m"
    MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 4)));
#line 716 "pred_table.m"
    MR_Word hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 5)));
#line 716 "pred_table.m"
    MR_Word hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 6)));
#line 716 "pred_table.m"
    MR_Word hlds__pred_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 7)));
#line 716 "pred_table.m"
    MR_Word hlds__pred_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 8)));
#line 717 "pred_table.m"
    MR_Word hlds__pred_table__STATE_VARIABLE_PredIds_17_17;
#line 718 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_32_32;
#line 718 "pred_table.m"
    MR_Word hlds__pred_table__ArityIndex_14;
#line 718 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16;
#line 718 "pred_table.m"
    MR_Box hlds__pred_table__conv0_ArityIndex_14;
#line 719 "pred_table.m"
    MR_Box hlds__pred_table__conv1_STATE_VARIABLE_PredIds_17_17;

#line 718 "pred_table.m"
    {
#line 718 "pred_table.m"
      hlds__pred_table__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 718 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_16_16, 0) = ((MR_Box) (hlds__pred_table__Module_9));
#line 718 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_16_16, 1) = ((MR_Box) (hlds__pred_table__FuncName_10));
#line 718 "pred_table.m"
    }
#line 718 "pred_table.m"
    {
#line 718 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__F_MNA_Index_13, ((MR_Box) (hlds__pred_table__V_16_16)), &hlds__pred_table__conv0_ArityIndex_14);
    }
#line 718 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 718 "pred_table.m"
      {
#line 718 "pred_table.m"
        hlds__pred_table__ArityIndex_14 = ((MR_Word) hlds__pred_table__conv0_ArityIndex_14);
#line 718 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 718 "pred_table.m"
      }
#line 718 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 718 "pred_table.m"
      {
#line 7014 "hlds.pred_table.c"
        hlds__pred_table__TypeInfo_32_32 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
#line 719 "pred_table.m"
        {
#line 719 "pred_table.m"
          hlds__pred_table__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__pred_table__TypeInfo_32_32, hlds__pred_table__ArityIndex_14, hlds__pred_table__Arity_11, &hlds__pred_table__conv1_STATE_VARIABLE_PredIds_17_17);
        }
#line 719 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 719 "pred_table.m"
          {
#line 719 "pred_table.m"
            hlds__pred_table__STATE_VARIABLE_PredIds_17_17 = ((MR_Word) hlds__pred_table__conv1_STATE_VARIABLE_PredIds_17_17);
#line 719 "pred_table.m"
            hlds__pred_table__succeeded = MR_TRUE;
#line 719 "pred_table.m"
          }
#line 718 "pred_table.m"
      }
#line 717 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 731 "pred_table.m"
#line 731 "pred_table.m"
      switch (hlds__pred_table__IsFullyQualified_8) {
#line 731 "pred_table.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 731 "pred_table.m"
        case (MR_Integer) 0:
#line 734 "pred_table.m"
          {
#line 734 "pred_table.m"
            MR_Word hlds__pred_table__Preds_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 0)));
#line 734 "pred_table.m"
            MR_Word hlds__pred_table__V_44_44;
#line 389 "pred_table.m"
            MR_Word hlds__pred_table__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 1)));
#line 389 "pred_table.m"
            MR_Word hlds__pred_table__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 2)));
#line 389 "pred_table.m"
            MR_Word hlds__pred_table__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 3)));
#line 389 "pred_table.m"
            MR_Word hlds__pred_table__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 4)));
#line 389 "pred_table.m"
            MR_Word hlds__pred_table__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 5)));
#line 389 "pred_table.m"
            MR_Word hlds__pred_table__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 6)));
#line 389 "pred_table.m"
            MR_Word hlds__pred_table__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 7)));
#line 389 "pred_table.m"
            MR_Word hlds__pred_table__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 8)));
#line 389 "pred_table.m"
            MR_Word hlds__pred_table__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 9)));

#line 736 "pred_table.m"
            {
#line 736 "pred_table.m"
              hlds__pred_table__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 736 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
#line 736 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0_1));
#line 736 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 736 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 3) = ((MR_Box) (hlds__pred_table__Preds_41));
#line 736 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 4) = ((MR_Box) (hlds__pred_table__Module_9));
#line 736 "pred_table.m"
            }
#line 736 "pred_table.m"
            {
#line 736 "pred_table.m"
              mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__V_44_44, hlds__pred_table__STATE_VARIABLE_PredIds_17_17, hlds__pred_table__STATE_VARIABLE_PredIds_15);
            }
#line 734 "pred_table.m"
          }
#line 731 "pred_table.m"
          break;
#line 731 "pred_table.m"
        case (MR_Integer) 1:
#line 732 "pred_table.m"
          *hlds__pred_table__STATE_VARIABLE_PredIds_15 = hlds__pred_table__STATE_VARIABLE_PredIds_17_17;
#line 731 "pred_table.m"
          break;
#line 731 "pred_table.m"
      }
#line 717 "pred_table.m"
    else
#line 724 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_PredIds_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 715 "pred_table.m"
  }
#line 171 "pred_table.m"
}

#line 736 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0_1(
#line 736 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 736 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1)
#line 736 "pred_table.m"
{
#line 736 "pred_table.m"
  {
#line 736 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 736 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;

#line 736 "pred_table.m"
    {
#line 736 "pred_table.m"
      hlds__pred_table__succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) hlds__pred_table__wrapper_arg_1));
    }
#line 736 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 736 "pred_table.m"
  }
#line 736 "pred_table.m"
}

#line 168 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(
#line 168 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_7,
#line 168 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_8,
#line 168 "pred_table.m"
  MR_Word hlds__pred_table__Module_9,
#line 168 "pred_table.m"
  MR_String hlds__pred_table__PredName_10,
#line 168 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_11,
#line 168 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredIds_15)
#line 168 "pred_table.m"
{
#line 702 "pred_table.m"
  {
#line 702 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 702 "pred_table.m"
    MR_Word hlds__pred_table__P_MNA_Index_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 6)));
#line 703 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 0)));
#line 703 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 1)));
#line 703 "pred_table.m"
    MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 2)));
#line 703 "pred_table.m"
    MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 3)));
#line 703 "pred_table.m"
    MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 4)));
#line 703 "pred_table.m"
    MR_Word hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 5)));
#line 703 "pred_table.m"
    MR_Word hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 7)));
#line 703 "pred_table.m"
    MR_Word hlds__pred_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 8)));
#line 703 "pred_table.m"
    MR_Word hlds__pred_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 9)));
#line 704 "pred_table.m"
    MR_Word hlds__pred_table__STATE_VARIABLE_PredIds_17_17;
#line 705 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_32_32;
#line 705 "pred_table.m"
    MR_Word hlds__pred_table__ArityIndex_14;
#line 705 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16;
#line 705 "pred_table.m"
    MR_Box hlds__pred_table__conv0_ArityIndex_14;
#line 706 "pred_table.m"
    MR_Box hlds__pred_table__conv1_STATE_VARIABLE_PredIds_17_17;

#line 705 "pred_table.m"
    {
#line 705 "pred_table.m"
      hlds__pred_table__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 705 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_16_16, 0) = ((MR_Box) (hlds__pred_table__Module_9));
#line 705 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_16_16, 1) = ((MR_Box) (hlds__pred_table__PredName_10));
#line 705 "pred_table.m"
    }
#line 705 "pred_table.m"
    {
#line 705 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__P_MNA_Index_13, ((MR_Box) (hlds__pred_table__V_16_16)), &hlds__pred_table__conv0_ArityIndex_14);
    }
#line 705 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 705 "pred_table.m"
      {
#line 705 "pred_table.m"
        hlds__pred_table__ArityIndex_14 = ((MR_Word) hlds__pred_table__conv0_ArityIndex_14);
#line 705 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 705 "pred_table.m"
      }
#line 705 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 705 "pred_table.m"
      {
#line 7220 "hlds.pred_table.c"
        hlds__pred_table__TypeInfo_32_32 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
#line 706 "pred_table.m"
        {
#line 706 "pred_table.m"
          hlds__pred_table__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__pred_table__TypeInfo_32_32, hlds__pred_table__ArityIndex_14, hlds__pred_table__Arity_11, &hlds__pred_table__conv1_STATE_VARIABLE_PredIds_17_17);
        }
#line 706 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 706 "pred_table.m"
          {
#line 706 "pred_table.m"
            hlds__pred_table__STATE_VARIABLE_PredIds_17_17 = ((MR_Word) hlds__pred_table__conv1_STATE_VARIABLE_PredIds_17_17);
#line 706 "pred_table.m"
            hlds__pred_table__succeeded = MR_TRUE;
#line 706 "pred_table.m"
          }
#line 705 "pred_table.m"
      }
#line 704 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 731 "pred_table.m"
#line 731 "pred_table.m"
      switch (hlds__pred_table__IsFullyQualified_8) {
#line 731 "pred_table.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 731 "pred_table.m"
        case (MR_Integer) 0:
#line 734 "pred_table.m"
          {
#line 734 "pred_table.m"
            MR_Word hlds__pred_table__Preds_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 0)));
#line 734 "pred_table.m"
            MR_Word hlds__pred_table__V_44_44;
#line 389 "pred_table.m"
            MR_Word hlds__pred_table__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 1)));
#line 389 "pred_table.m"
            MR_Word hlds__pred_table__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 2)));
#line 389 "pred_table.m"
            MR_Word hlds__pred_table__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 3)));
#line 389 "pred_table.m"
            MR_Word hlds__pred_table__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 4)));
#line 389 "pred_table.m"
            MR_Word hlds__pred_table__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 5)));
#line 389 "pred_table.m"
            MR_Word hlds__pred_table__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 6)));
#line 389 "pred_table.m"
            MR_Word hlds__pred_table__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 7)));
#line 389 "pred_table.m"
            MR_Word hlds__pred_table__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 8)));
#line 389 "pred_table.m"
            MR_Word hlds__pred_table__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 9)));

#line 736 "pred_table.m"
            {
#line 736 "pred_table.m"
              hlds__pred_table__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 736 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
#line 736 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0_1));
#line 736 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 736 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 3) = ((MR_Box) (hlds__pred_table__Preds_41));
#line 736 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 4) = ((MR_Box) (hlds__pred_table__Module_9));
#line 736 "pred_table.m"
            }
#line 736 "pred_table.m"
            {
#line 736 "pred_table.m"
              mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__V_44_44, hlds__pred_table__STATE_VARIABLE_PredIds_17_17, hlds__pred_table__STATE_VARIABLE_PredIds_15);
            }
#line 734 "pred_table.m"
          }
#line 731 "pred_table.m"
          break;
#line 731 "pred_table.m"
        case (MR_Integer) 1:
#line 732 "pred_table.m"
          *hlds__pred_table__STATE_VARIABLE_PredIds_15 = hlds__pred_table__STATE_VARIABLE_PredIds_17_17;
#line 731 "pred_table.m"
          break;
#line 731 "pred_table.m"
      }
#line 704 "pred_table.m"
    else
#line 711 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_PredIds_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 702 "pred_table.m"
  }
#line 168 "pred_table.m"
}

#line 165 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_m_n_a_6_p_0(
#line 165 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_7,
#line 165 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_8,
#line 165 "pred_table.m"
  MR_Word hlds__pred_table__Module_9,
#line 165 "pred_table.m"
  MR_String hlds__pred_table__Name_10,
#line 165 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_11,
#line 165 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_12)
#line 165 "pred_table.m"
{
#line 694 "pred_table.m"
  {
#line 694 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 694 "pred_table.m"
    MR_Word hlds__pred_table__PredPredIds_13;
#line 694 "pred_table.m"
    MR_Word hlds__pred_table__FuncPredIds_14;

#line 695 "pred_table.m"
    {
#line 695 "pred_table.m"
      hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredicateTable_7, hlds__pred_table__IsFullyQualified_8, hlds__pred_table__Module_9, hlds__pred_table__Name_10, hlds__pred_table__Arity_11, &hlds__pred_table__PredPredIds_13);
    }
#line 697 "pred_table.m"
    {
#line 697 "pred_table.m"
      hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredicateTable_7, hlds__pred_table__IsFullyQualified_8, hlds__pred_table__Module_9, hlds__pred_table__Name_10, hlds__pred_table__Arity_11, &hlds__pred_table__FuncPredIds_14);
    }
#line 699 "pred_table.m"
    {
#line 699 "pred_table.m"
      *hlds__pred_table__PredIds_12 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__FuncPredIds_14, hlds__pred_table__PredPredIds_13);
    }
#line 694 "pred_table.m"
  }
#line 165 "pred_table.m"
}

#line 142 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(
#line 142 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_5,
#line 142 "pred_table.m"
  MR_String hlds__pred_table__FuncName_6,
#line 142 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_7,
#line 142 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_8)
#line 142 "pred_table.m"
{
#line 683 "pred_table.m"
  {
#line 683 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 683 "pred_table.m"
    MR_Word hlds__pred_table__FuncNameArityIndex_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 684 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 684 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 684 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 684 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 684 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 684 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 684 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 684 "pred_table.m"
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 684 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 685 "pred_table.m"
    MR_Word hlds__pred_table__PredIdsPrime_10;
#line 685 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11;
#line 685 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredIdsPrime_10;

#line 685 "pred_table.m"
    {
#line 685 "pred_table.m"
      hlds__pred_table__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 685 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_11_11, 0) = ((MR_Box) (hlds__pred_table__FuncName_6));
#line 685 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_11_11, 1) = ((MR_Box) (hlds__pred_table__Arity_7));
#line 685 "pred_table.m"
    }
#line 685 "pred_table.m"
    {
#line 685 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__FuncNameArityIndex_9, ((MR_Box) (hlds__pred_table__V_11_11)), &hlds__pred_table__conv0_PredIdsPrime_10);
    }
#line 685 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 685 "pred_table.m"
      {
#line 685 "pred_table.m"
        hlds__pred_table__PredIdsPrime_10 = ((MR_Word) hlds__pred_table__conv0_PredIdsPrime_10);
#line 685 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 685 "pred_table.m"
      }
#line 685 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 686 "pred_table.m"
      *hlds__pred_table__PredIds_8 = hlds__pred_table__PredIdsPrime_10;
#line 685 "pred_table.m"
    else
#line 688 "pred_table.m"
      *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 683 "pred_table.m"
  }
#line 142 "pred_table.m"
}

#line 140 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(
#line 140 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_5,
#line 140 "pred_table.m"
  MR_String hlds__pred_table__PredName_6,
#line 140 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_7,
#line 140 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_8)
#line 140 "pred_table.m"
{
#line 674 "pred_table.m"
  {
#line 674 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 674 "pred_table.m"
    MR_Word hlds__pred_table__PredNameArityIndex_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 675 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 675 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 675 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 675 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 675 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 675 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 675 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 675 "pred_table.m"
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 675 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 676 "pred_table.m"
    MR_Word hlds__pred_table__PredIdsPrime_10;
#line 676 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11;
#line 676 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredIdsPrime_10;

#line 676 "pred_table.m"
    {
#line 676 "pred_table.m"
      hlds__pred_table__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 676 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_11_11, 0) = ((MR_Box) (hlds__pred_table__PredName_6));
#line 676 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_11_11, 1) = ((MR_Box) (hlds__pred_table__Arity_7));
#line 676 "pred_table.m"
    }
#line 676 "pred_table.m"
    {
#line 676 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__PredNameArityIndex_9, ((MR_Box) (hlds__pred_table__V_11_11)), &hlds__pred_table__conv0_PredIdsPrime_10);
    }
#line 676 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 676 "pred_table.m"
      {
#line 676 "pred_table.m"
        hlds__pred_table__PredIdsPrime_10 = ((MR_Word) hlds__pred_table__conv0_PredIdsPrime_10);
#line 676 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 676 "pred_table.m"
      }
#line 676 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 677 "pred_table.m"
      *hlds__pred_table__PredIds_8 = hlds__pred_table__PredIdsPrime_10;
#line 676 "pred_table.m"
    else
#line 679 "pred_table.m"
      *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 674 "pred_table.m"
  }
#line 140 "pred_table.m"
}

#line 138 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_name_arity_4_p_0(
#line 138 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_5,
#line 138 "pred_table.m"
  MR_String hlds__pred_table__Name_6,
#line 138 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_7,
#line 138 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_8)
#line 138 "pred_table.m"
{
#line 666 "pred_table.m"
  {
#line 666 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 666 "pred_table.m"
    MR_Word hlds__pred_table__PredPredIds_9;
#line 666 "pred_table.m"
    MR_Word hlds__pred_table__FuncPredIds_10;

#line 667 "pred_table.m"
    {
#line 667 "pred_table.m"
      hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(hlds__pred_table__PredicateTable_5, hlds__pred_table__Name_6, hlds__pred_table__Arity_7, &hlds__pred_table__PredPredIds_9);
    }
#line 669 "pred_table.m"
    {
#line 669 "pred_table.m"
      hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(hlds__pred_table__PredicateTable_5, hlds__pred_table__Name_6, hlds__pred_table__Arity_7, &hlds__pred_table__FuncPredIds_10);
    }
#line 671 "pred_table.m"
    {
#line 671 "pred_table.m"
      *hlds__pred_table__PredIds_8 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__FuncPredIds_10, hlds__pred_table__PredPredIds_9);
    }
#line 666 "pred_table.m"
  }
#line 138 "pred_table.m"
}

#line 130 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_name_3_p_0(
#line 130 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_4,
#line 130 "pred_table.m"
  MR_String hlds__pred_table__FuncName_5,
#line 130 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_6)
#line 130 "pred_table.m"
{
#line 610 "pred_table.m"
  {
#line 610 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 610 "pred_table.m"
    MR_Word hlds__pred_table__FuncNameIndex_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 7)));
#line 611 "pred_table.m"
    MR_Word hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 0)));
#line 611 "pred_table.m"
    MR_Word hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 1)));
#line 611 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 2)));
#line 611 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 3)));
#line 611 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 4)));
#line 611 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 5)));
#line 611 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 6)));
#line 611 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 8)));
#line 611 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 9)));
#line 612 "pred_table.m"
    MR_Word hlds__pred_table__PredIdsPrime_8;
#line 612 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredIdsPrime_8;

#line 612 "pred_table.m"
    {
#line 612 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__FuncNameIndex_7, ((MR_Box) (hlds__pred_table__FuncName_5)), &hlds__pred_table__conv0_PredIdsPrime_8);
    }
#line 612 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 612 "pred_table.m"
      {
#line 612 "pred_table.m"
        hlds__pred_table__PredIdsPrime_8 = ((MR_Word) hlds__pred_table__conv0_PredIdsPrime_8);
#line 612 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 612 "pred_table.m"
      }
#line 612 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 613 "pred_table.m"
      *hlds__pred_table__PredIds_6 = hlds__pred_table__PredIdsPrime_8;
#line 612 "pred_table.m"
    else
#line 615 "pred_table.m"
      *hlds__pred_table__PredIds_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 610 "pred_table.m"
  }
#line 130 "pred_table.m"
}

#line 128 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_name_3_p_0(
#line 128 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_4,
#line 128 "pred_table.m"
  MR_String hlds__pred_table__PredName_5,
#line 128 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_6)
#line 128 "pred_table.m"
{
#line 602 "pred_table.m"
  {
#line 602 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 602 "pred_table.m"
    MR_Word hlds__pred_table__PredNameIndex_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 4)));
#line 603 "pred_table.m"
    MR_Word hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 0)));
#line 603 "pred_table.m"
    MR_Word hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 1)));
#line 603 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 2)));
#line 603 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 3)));
#line 603 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 5)));
#line 603 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 6)));
#line 603 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 7)));
#line 603 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 8)));
#line 603 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 9)));
#line 604 "pred_table.m"
    MR_Word hlds__pred_table__PredIdsPrime_8;
#line 604 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredIdsPrime_8;

#line 604 "pred_table.m"
    {
#line 604 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__PredNameIndex_7, ((MR_Box) (hlds__pred_table__PredName_5)), &hlds__pred_table__conv0_PredIdsPrime_8);
    }
#line 604 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 604 "pred_table.m"
      {
#line 604 "pred_table.m"
        hlds__pred_table__PredIdsPrime_8 = ((MR_Word) hlds__pred_table__conv0_PredIdsPrime_8);
#line 604 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 604 "pred_table.m"
      }
#line 604 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 605 "pred_table.m"
      *hlds__pred_table__PredIds_6 = hlds__pred_table__PredIdsPrime_8;
#line 604 "pred_table.m"
    else
#line 607 "pred_table.m"
      *hlds__pred_table__PredIds_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 602 "pred_table.m"
  }
#line 128 "pred_table.m"
}

#line 126 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_name_3_p_0(
#line 126 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_4,
#line 126 "pred_table.m"
  MR_String hlds__pred_table__Name_5,
#line 126 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_6)
#line 126 "pred_table.m"
{
#line 597 "pred_table.m"
  {
#line 597 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 597 "pred_table.m"
    MR_Word hlds__pred_table__PredPredIds_7;
#line 597 "pred_table.m"
    MR_Word hlds__pred_table__FuncPredIds_8;
#line 597 "pred_table.m"
    MR_Word hlds__pred_table__PredNameIndex_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 4)));
#line 597 "pred_table.m"
    MR_Word hlds__pred_table__FuncNameIndex_29;
#line 603 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 0)));
#line 603 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 1)));
#line 603 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 2)));
#line 603 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 3)));
#line 603 "pred_table.m"
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 5)));
#line 603 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 6)));
#line 603 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 7)));
#line 603 "pred_table.m"
    MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 8)));
#line 603 "pred_table.m"
    MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 9)));
#line 604 "pred_table.m"
    MR_Word hlds__pred_table__PredIdsPrime_14;
#line 604 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredIdsPrime_14;
#line 611 "pred_table.m"
    MR_Word hlds__pred_table__V_31_31;
#line 611 "pred_table.m"
    MR_Word hlds__pred_table__V_32_32;
#line 611 "pred_table.m"
    MR_Word hlds__pred_table__V_33_33;
#line 611 "pred_table.m"
    MR_Word hlds__pred_table__V_34_34;
#line 611 "pred_table.m"
    MR_Word hlds__pred_table__V_35_35;
#line 611 "pred_table.m"
    MR_Word hlds__pred_table__V_36_36;
#line 611 "pred_table.m"
    MR_Word hlds__pred_table__V_37_37;
#line 611 "pred_table.m"
    MR_Word hlds__pred_table__V_38_38;
#line 611 "pred_table.m"
    MR_Word hlds__pred_table__V_39_39;
#line 612 "pred_table.m"
    MR_Word hlds__pred_table__PredIdsPrime_30;
#line 612 "pred_table.m"
    MR_Box hlds__pred_table__conv1_PredIdsPrime_30;

#line 604 "pred_table.m"
    {
#line 604 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__PredNameIndex_13, ((MR_Box) (hlds__pred_table__Name_5)), &hlds__pred_table__conv0_PredIdsPrime_14);
    }
#line 604 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 604 "pred_table.m"
      {
#line 604 "pred_table.m"
        hlds__pred_table__PredIdsPrime_14 = ((MR_Word) hlds__pred_table__conv0_PredIdsPrime_14);
#line 604 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 604 "pred_table.m"
      }
#line 604 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 605 "pred_table.m"
      hlds__pred_table__PredPredIds_7 = hlds__pred_table__PredIdsPrime_14;
#line 604 "pred_table.m"
    else
#line 607 "pred_table.m"
      hlds__pred_table__PredPredIds_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 611 "pred_table.m"
    hlds__pred_table__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 0)));
#line 611 "pred_table.m"
    hlds__pred_table__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 1)));
#line 611 "pred_table.m"
    hlds__pred_table__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 2)));
#line 611 "pred_table.m"
    hlds__pred_table__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 3)));
#line 611 "pred_table.m"
    hlds__pred_table__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 4)));
#line 611 "pred_table.m"
    hlds__pred_table__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 5)));
#line 611 "pred_table.m"
    hlds__pred_table__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 6)));
#line 611 "pred_table.m"
    hlds__pred_table__FuncNameIndex_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 7)));
#line 611 "pred_table.m"
    hlds__pred_table__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 8)));
#line 611 "pred_table.m"
    hlds__pred_table__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 9)));
#line 612 "pred_table.m"
    {
#line 612 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__FuncNameIndex_29, ((MR_Box) (hlds__pred_table__Name_5)), &hlds__pred_table__conv1_PredIdsPrime_30);
    }
#line 612 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 612 "pred_table.m"
      {
#line 612 "pred_table.m"
        hlds__pred_table__PredIdsPrime_30 = ((MR_Word) hlds__pred_table__conv1_PredIdsPrime_30);
#line 612 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 612 "pred_table.m"
      }
#line 612 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 613 "pred_table.m"
      hlds__pred_table__FuncPredIds_8 = hlds__pred_table__PredIdsPrime_30;
#line 612 "pred_table.m"
    else
#line 615 "pred_table.m"
      hlds__pred_table__FuncPredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 600 "pred_table.m"
    {
#line 600 "pred_table.m"
      *hlds__pred_table__PredIds_6 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__FuncPredIds_8, hlds__pred_table__PredPredIds_7);
    }
#line 597 "pred_table.m"
  }
#line 126 "pred_table.m"
}

#line 118 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(
#line 118 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_6,
#line 118 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_7,
#line 118 "pred_table.m"
  MR_Word hlds__pred_table__SymName_8,
#line 118 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_9,
#line 118 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_10)
#line 118 "pred_table.m"
{
#line 580 "pred_table.m"
  {
#line 580 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 580 "pred_table.m"
    if (((MR_tag((MR_Word) hlds__pred_table__SymName_8)) == (MR_mktag((MR_Integer) 1))))
#line 590 "pred_table.m"
      {
#line 590 "pred_table.m"
        MR_Word hlds__pred_table__Module_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_8, (MR_Integer) 0)));
#line 590 "pred_table.m"
        MR_String hlds__pred_table__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_8, (MR_Integer) 1)));

#line 591 "pred_table.m"
        {
#line 591 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__IsFullyQualified_7, hlds__pred_table__Module_12, hlds__pred_table__Name_13, hlds__pred_table__Arity_9, hlds__pred_table__PredIds_10);
        }
#line 590 "pred_table.m"
      }
#line 580 "pred_table.m"
    else
#line 580 "pred_table.m"
      {
#line 580 "pred_table.m"
        MR_String hlds__pred_table__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_8, (MR_Integer) 0)));

#line 585 "pred_table.m"
#line 585 "pred_table.m"
        switch (hlds__pred_table__IsFullyQualified_7) {
#line 585 "pred_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 585 "pred_table.m"
          case (MR_Integer) 0:
#line 587 "pred_table.m"
            *hlds__pred_table__PredIds_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 585 "pred_table.m"
            break;
#line 585 "pred_table.m"
          case (MR_Integer) 1:
#line 583 "pred_table.m"
            {
#line 583 "pred_table.m"
              hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__Name_11, hlds__pred_table__Arity_9, hlds__pred_table__PredIds_10);
            }
#line 585 "pred_table.m"
            break;
#line 585 "pred_table.m"
        }
#line 580 "pred_table.m"
      }
#line 580 "pred_table.m"
  }
#line 118 "pred_table.m"
}

#line 115 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_sym_arity_5_p_0(
#line 115 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_6,
#line 115 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_7,
#line 115 "pred_table.m"
  MR_Word hlds__pred_table__SymName_8,
#line 115 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_9,
#line 115 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_10)
#line 115 "pred_table.m"
{
#line 562 "pred_table.m"
  {
#line 562 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 562 "pred_table.m"
    if (((MR_tag((MR_Word) hlds__pred_table__SymName_8)) == (MR_mktag((MR_Integer) 1))))
#line 572 "pred_table.m"
      {
#line 572 "pred_table.m"
        MR_Word hlds__pred_table__Module_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_8, (MR_Integer) 0)));
#line 572 "pred_table.m"
        MR_String hlds__pred_table__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_8, (MR_Integer) 1)));

#line 573 "pred_table.m"
        {
#line 573 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__IsFullyQualified_7, hlds__pred_table__Module_12, hlds__pred_table__Name_13, hlds__pred_table__Arity_9, hlds__pred_table__PredIds_10);
        }
#line 572 "pred_table.m"
      }
#line 562 "pred_table.m"
    else
#line 562 "pred_table.m"
      {
#line 562 "pred_table.m"
        MR_String hlds__pred_table__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_8, (MR_Integer) 0)));

#line 567 "pred_table.m"
#line 567 "pred_table.m"
        switch (hlds__pred_table__IsFullyQualified_7) {
#line 567 "pred_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 567 "pred_table.m"
          case (MR_Integer) 0:
#line 569 "pred_table.m"
            *hlds__pred_table__PredIds_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 567 "pred_table.m"
            break;
#line 567 "pred_table.m"
          case (MR_Integer) 1:
#line 565 "pred_table.m"
            {
#line 565 "pred_table.m"
              hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__Name_11, hlds__pred_table__Arity_9, hlds__pred_table__PredIds_10);
            }
#line 567 "pred_table.m"
            break;
#line 567 "pred_table.m"
        }
#line 562 "pred_table.m"
      }
#line 562 "pred_table.m"
  }
#line 115 "pred_table.m"
}

#line 112 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(
#line 112 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_6,
#line 112 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_7,
#line 112 "pred_table.m"
  MR_Word hlds__pred_table__SymName_8,
#line 112 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_9,
#line 112 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_10)
#line 112 "pred_table.m"
{
#line 544 "pred_table.m"
  {
#line 544 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 544 "pred_table.m"
    if (((MR_tag((MR_Word) hlds__pred_table__SymName_8)) == (MR_mktag((MR_Integer) 1))))
#line 554 "pred_table.m"
      {
#line 554 "pred_table.m"
        MR_Word hlds__pred_table__Module_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_8, (MR_Integer) 0)));
#line 554 "pred_table.m"
        MR_String hlds__pred_table__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_8, (MR_Integer) 1)));
#line 554 "pred_table.m"
        MR_Word hlds__pred_table__PredPredIds_20;
#line 554 "pred_table.m"
        MR_Word hlds__pred_table__FuncPredIds_21;

#line 695 "pred_table.m"
        {
#line 695 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__IsFullyQualified_7, hlds__pred_table__Module_12, hlds__pred_table__Name_13, hlds__pred_table__Arity_9, &hlds__pred_table__PredPredIds_20);
        }
#line 697 "pred_table.m"
        {
#line 697 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__IsFullyQualified_7, hlds__pred_table__Module_12, hlds__pred_table__Name_13, hlds__pred_table__Arity_9, &hlds__pred_table__FuncPredIds_21);
        }
#line 699 "pred_table.m"
        {
#line 699 "pred_table.m"
          *hlds__pred_table__PredIds_10 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__FuncPredIds_21, hlds__pred_table__PredPredIds_20);
        }
#line 554 "pred_table.m"
      }
#line 544 "pred_table.m"
    else
#line 544 "pred_table.m"
      {
#line 544 "pred_table.m"
        MR_String hlds__pred_table__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_8, (MR_Integer) 0)));

#line 549 "pred_table.m"
#line 549 "pred_table.m"
        switch (hlds__pred_table__IsFullyQualified_7) {
#line 549 "pred_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 549 "pred_table.m"
          case (MR_Integer) 0:
#line 551 "pred_table.m"
            *hlds__pred_table__PredIds_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 549 "pred_table.m"
            break;
#line 549 "pred_table.m"
          case (MR_Integer) 1:
#line 666 "pred_table.m"
            {
#line 666 "pred_table.m"
              MR_Word hlds__pred_table__PredPredIds_27;
#line 666 "pred_table.m"
              MR_Word hlds__pred_table__FuncPredIds_28;

#line 667 "pred_table.m"
              {
#line 667 "pred_table.m"
                hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__Name_11, hlds__pred_table__Arity_9, &hlds__pred_table__PredPredIds_27);
              }
#line 669 "pred_table.m"
              {
#line 669 "pred_table.m"
                hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__Name_11, hlds__pred_table__Arity_9, &hlds__pred_table__FuncPredIds_28);
              }
#line 671 "pred_table.m"
              {
#line 671 "pred_table.m"
                *hlds__pred_table__PredIds_10 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__FuncPredIds_28, hlds__pred_table__PredPredIds_27);
              }
#line 666 "pred_table.m"
            }
#line 549 "pred_table.m"
            break;
#line 549 "pred_table.m"
        }
#line 544 "pred_table.m"
      }
#line 544 "pred_table.m"
  }
#line 112 "pred_table.m"
}

#line 736 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_sym_4_p_0_1(
#line 736 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 736 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1)
#line 736 "pred_table.m"
{
#line 736 "pred_table.m"
  {
#line 736 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 736 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;

#line 736 "pred_table.m"
    {
#line 736 "pred_table.m"
      hlds__pred_table__succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) hlds__pred_table__wrapper_arg_1));
    }
#line 736 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 736 "pred_table.m"
  }
#line 736 "pred_table.m"
}

#line 103 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_sym_4_p_0(
#line 103 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_5,
#line 103 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_6,
#line 103 "pred_table.m"
  MR_Word hlds__pred_table__SymName_7,
#line 103 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_8)
#line 103 "pred_table.m"
{
#line 525 "pred_table.m"
  {
#line 525 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 525 "pred_table.m"
    if (((MR_tag((MR_Word) hlds__pred_table__SymName_7)) == (MR_mktag((MR_Integer) 1))))
#line 534 "pred_table.m"
      {
#line 534 "pred_table.m"
        MR_Word hlds__pred_table__Module_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_7, (MR_Integer) 0)));
#line 534 "pred_table.m"
        MR_String hlds__pred_table__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_7, (MR_Integer) 1)));
#line 534 "pred_table.m"
        MR_Word hlds__pred_table__Func_MNA_Index_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 654 "pred_table.m"
        MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 654 "pred_table.m"
        MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 654 "pred_table.m"
        MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 654 "pred_table.m"
        MR_Word hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 654 "pred_table.m"
        MR_Word hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 654 "pred_table.m"
        MR_Word hlds__pred_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 654 "pred_table.m"
        MR_Word hlds__pred_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 654 "pred_table.m"
        MR_Word hlds__pred_table__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 654 "pred_table.m"
        MR_Word hlds__pred_table__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 655 "pred_table.m"
        MR_Word hlds__pred_table__Arities_18;
#line 655 "pred_table.m"
        MR_Word hlds__pred_table__V_21_21;
#line 655 "pred_table.m"
        MR_Box hlds__pred_table__conv0_Arities_18;

#line 655 "pred_table.m"
        {
#line 655 "pred_table.m"
          hlds__pred_table__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 655 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_21_21, 0) = ((MR_Box) (hlds__pred_table__Module_10));
#line 655 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_21_21, 1) = ((MR_Box) (hlds__pred_table__Name_11));
#line 655 "pred_table.m"
        }
#line 655 "pred_table.m"
        {
#line 655 "pred_table.m"
          hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__Func_MNA_Index_17, ((MR_Box) (hlds__pred_table__V_21_21)), &hlds__pred_table__conv0_Arities_18);
        }
#line 655 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 655 "pred_table.m"
          {
#line 655 "pred_table.m"
            hlds__pred_table__Arities_18 = ((MR_Word) hlds__pred_table__conv0_Arities_18);
#line 655 "pred_table.m"
            hlds__pred_table__succeeded = MR_TRUE;
#line 655 "pred_table.m"
          }
#line 655 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 656 "pred_table.m"
          {
#line 656 "pred_table.m"
            MR_Word hlds__pred_table__PredIdLists_19;
#line 656 "pred_table.m"
            MR_Word hlds__pred_table__PredIds0_20;

#line 656 "pred_table.m"
            {
#line 656 "pred_table.m"
              mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__Arities_18, &hlds__pred_table__PredIdLists_19);
            }
#line 657 "pred_table.m"
            {
#line 657 "pred_table.m"
              mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__PredIdLists_19, &hlds__pred_table__PredIds0_20);
            }
#line 731 "pred_table.m"
#line 731 "pred_table.m"
            switch (hlds__pred_table__IsFullyQualified_6) {
#line 731 "pred_table.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 731 "pred_table.m"
              case (MR_Integer) 0:
#line 734 "pred_table.m"
                {
#line 734 "pred_table.m"
                  MR_Word hlds__pred_table__Preds_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 734 "pred_table.m"
                  MR_Word hlds__pred_table__V_47_47;
#line 389 "pred_table.m"
                  MR_Word hlds__pred_table__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 389 "pred_table.m"
                  MR_Word hlds__pred_table__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 389 "pred_table.m"
                  MR_Word hlds__pred_table__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 389 "pred_table.m"
                  MR_Word hlds__pred_table__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 389 "pred_table.m"
                  MR_Word hlds__pred_table__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 389 "pred_table.m"
                  MR_Word hlds__pred_table__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 389 "pred_table.m"
                  MR_Word hlds__pred_table__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 389 "pred_table.m"
                  MR_Word hlds__pred_table__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 389 "pred_table.m"
                  MR_Word hlds__pred_table__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));

#line 736 "pred_table.m"
                  {
#line 736 "pred_table.m"
                    hlds__pred_table__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 736 "pred_table.m"
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
#line 736 "pred_table.m"
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_func_sym_4_p_0_1));
#line 736 "pred_table.m"
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 736 "pred_table.m"
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 3) = ((MR_Box) (hlds__pred_table__Preds_44));
#line 736 "pred_table.m"
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 4) = ((MR_Box) (hlds__pred_table__Module_10));
#line 736 "pred_table.m"
                  }
#line 736 "pred_table.m"
                  {
#line 736 "pred_table.m"
                    mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__V_47_47, hlds__pred_table__PredIds0_20, hlds__pred_table__PredIds_8);
                  }
#line 734 "pred_table.m"
                }
#line 731 "pred_table.m"
                break;
#line 731 "pred_table.m"
              case (MR_Integer) 1:
#line 732 "pred_table.m"
                *hlds__pred_table__PredIds_8 = hlds__pred_table__PredIds0_20;
#line 731 "pred_table.m"
                break;
#line 731 "pred_table.m"
            }
#line 656 "pred_table.m"
          }
#line 655 "pred_table.m"
        else
#line 661 "pred_table.m"
          *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 534 "pred_table.m"
      }
#line 525 "pred_table.m"
    else
#line 525 "pred_table.m"
      {
#line 525 "pred_table.m"
        MR_String hlds__pred_table__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_7, (MR_Integer) 0)));

#line 529 "pred_table.m"
#line 529 "pred_table.m"
        switch (hlds__pred_table__IsFullyQualified_6) {
#line 529 "pred_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 529 "pred_table.m"
          case (MR_Integer) 0:
#line 531 "pred_table.m"
            *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 529 "pred_table.m"
            break;
#line 529 "pred_table.m"
          case (MR_Integer) 1:
#line 610 "pred_table.m"
            {
#line 610 "pred_table.m"
              MR_Word hlds__pred_table__FuncNameIndex_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 611 "pred_table.m"
              MR_Word hlds__pred_table__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 611 "pred_table.m"
              MR_Word hlds__pred_table__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 611 "pred_table.m"
              MR_Word hlds__pred_table__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 611 "pred_table.m"
              MR_Word hlds__pred_table__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 611 "pred_table.m"
              MR_Word hlds__pred_table__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 611 "pred_table.m"
              MR_Word hlds__pred_table__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 611 "pred_table.m"
              MR_Word hlds__pred_table__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 611 "pred_table.m"
              MR_Word hlds__pred_table__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 611 "pred_table.m"
              MR_Word hlds__pred_table__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 612 "pred_table.m"
              MR_Word hlds__pred_table__PredIdsPrime_65;
#line 612 "pred_table.m"
              MR_Box hlds__pred_table__conv1_PredIdsPrime_65;

#line 612 "pred_table.m"
              {
#line 612 "pred_table.m"
                hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__FuncNameIndex_64, ((MR_Box) (hlds__pred_table__Name_9)), &hlds__pred_table__conv1_PredIdsPrime_65);
              }
#line 612 "pred_table.m"
              if (hlds__pred_table__succeeded)
#line 612 "pred_table.m"
                {
#line 612 "pred_table.m"
                  hlds__pred_table__PredIdsPrime_65 = ((MR_Word) hlds__pred_table__conv1_PredIdsPrime_65);
#line 612 "pred_table.m"
                  hlds__pred_table__succeeded = MR_TRUE;
#line 612 "pred_table.m"
                }
#line 612 "pred_table.m"
              if (hlds__pred_table__succeeded)
#line 613 "pred_table.m"
                *hlds__pred_table__PredIds_8 = hlds__pred_table__PredIdsPrime_65;
#line 612 "pred_table.m"
              else
#line 615 "pred_table.m"
                *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 610 "pred_table.m"
            }
#line 529 "pred_table.m"
            break;
#line 529 "pred_table.m"
        }
#line 525 "pred_table.m"
      }
#line 525 "pred_table.m"
  }
#line 103 "pred_table.m"
}

#line 736 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0_1(
#line 736 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 736 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1)
#line 736 "pred_table.m"
{
#line 736 "pred_table.m"
  {
#line 736 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 736 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;

#line 736 "pred_table.m"
    {
#line 736 "pred_table.m"
      hlds__pred_table__succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) hlds__pred_table__wrapper_arg_1));
    }
#line 736 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 736 "pred_table.m"
  }
#line 736 "pred_table.m"
}

#line 101 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0(
#line 101 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_5,
#line 101 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_6,
#line 101 "pred_table.m"
  MR_Word hlds__pred_table__SymName_7,
#line 101 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_8)
#line 101 "pred_table.m"
{
#line 508 "pred_table.m"
  {
#line 508 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 508 "pred_table.m"
    if (((MR_tag((MR_Word) hlds__pred_table__SymName_7)) == (MR_mktag((MR_Integer) 1))))
#line 517 "pred_table.m"
      {
#line 517 "pred_table.m"
        MR_Word hlds__pred_table__Module_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_7, (MR_Integer) 0)));
#line 517 "pred_table.m"
        MR_String hlds__pred_table__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_7, (MR_Integer) 1)));
#line 517 "pred_table.m"
        MR_Word hlds__pred_table__Pred_MNA_Index_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 638 "pred_table.m"
        MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 638 "pred_table.m"
        MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 638 "pred_table.m"
        MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 638 "pred_table.m"
        MR_Word hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 638 "pred_table.m"
        MR_Word hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 638 "pred_table.m"
        MR_Word hlds__pred_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 638 "pred_table.m"
        MR_Word hlds__pred_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 638 "pred_table.m"
        MR_Word hlds__pred_table__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 638 "pred_table.m"
        MR_Word hlds__pred_table__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 639 "pred_table.m"
        MR_Word hlds__pred_table__Arities_18;
#line 639 "pred_table.m"
        MR_Word hlds__pred_table__V_21_21;
#line 639 "pred_table.m"
        MR_Box hlds__pred_table__conv0_Arities_18;

#line 639 "pred_table.m"
        {
#line 639 "pred_table.m"
          hlds__pred_table__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 639 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_21_21, 0) = ((MR_Box) (hlds__pred_table__Module_10));
#line 639 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_21_21, 1) = ((MR_Box) (hlds__pred_table__Name_11));
#line 639 "pred_table.m"
        }
#line 639 "pred_table.m"
        {
#line 639 "pred_table.m"
          hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__Pred_MNA_Index_17, ((MR_Box) (hlds__pred_table__V_21_21)), &hlds__pred_table__conv0_Arities_18);
        }
#line 639 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 639 "pred_table.m"
          {
#line 639 "pred_table.m"
            hlds__pred_table__Arities_18 = ((MR_Word) hlds__pred_table__conv0_Arities_18);
#line 639 "pred_table.m"
            hlds__pred_table__succeeded = MR_TRUE;
#line 639 "pred_table.m"
          }
#line 639 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 640 "pred_table.m"
          {
#line 640 "pred_table.m"
            MR_Word hlds__pred_table__PredIdLists_19;
#line 640 "pred_table.m"
            MR_Word hlds__pred_table__PredIds0_20;

#line 640 "pred_table.m"
            {
#line 640 "pred_table.m"
              mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__Arities_18, &hlds__pred_table__PredIdLists_19);
            }
#line 641 "pred_table.m"
            {
#line 641 "pred_table.m"
              mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__PredIdLists_19, &hlds__pred_table__PredIds0_20);
            }
#line 731 "pred_table.m"
#line 731 "pred_table.m"
            switch (hlds__pred_table__IsFullyQualified_6) {
#line 731 "pred_table.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 731 "pred_table.m"
              case (MR_Integer) 0:
#line 734 "pred_table.m"
                {
#line 734 "pred_table.m"
                  MR_Word hlds__pred_table__Preds_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 734 "pred_table.m"
                  MR_Word hlds__pred_table__V_47_47;
#line 389 "pred_table.m"
                  MR_Word hlds__pred_table__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 389 "pred_table.m"
                  MR_Word hlds__pred_table__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 389 "pred_table.m"
                  MR_Word hlds__pred_table__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 389 "pred_table.m"
                  MR_Word hlds__pred_table__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 389 "pred_table.m"
                  MR_Word hlds__pred_table__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 389 "pred_table.m"
                  MR_Word hlds__pred_table__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 389 "pred_table.m"
                  MR_Word hlds__pred_table__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 389 "pred_table.m"
                  MR_Word hlds__pred_table__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 389 "pred_table.m"
                  MR_Word hlds__pred_table__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));

#line 736 "pred_table.m"
                  {
#line 736 "pred_table.m"
                    hlds__pred_table__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 736 "pred_table.m"
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
#line 736 "pred_table.m"
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0_1));
#line 736 "pred_table.m"
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 736 "pred_table.m"
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 3) = ((MR_Box) (hlds__pred_table__Preds_44));
#line 736 "pred_table.m"
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 4) = ((MR_Box) (hlds__pred_table__Module_10));
#line 736 "pred_table.m"
                  }
#line 736 "pred_table.m"
                  {
#line 736 "pred_table.m"
                    mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__V_47_47, hlds__pred_table__PredIds0_20, hlds__pred_table__PredIds_8);
                  }
#line 734 "pred_table.m"
                }
#line 731 "pred_table.m"
                break;
#line 731 "pred_table.m"
              case (MR_Integer) 1:
#line 732 "pred_table.m"
                *hlds__pred_table__PredIds_8 = hlds__pred_table__PredIds0_20;
#line 731 "pred_table.m"
                break;
#line 731 "pred_table.m"
            }
#line 640 "pred_table.m"
          }
#line 639 "pred_table.m"
        else
#line 645 "pred_table.m"
          *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 517 "pred_table.m"
      }
#line 508 "pred_table.m"
    else
#line 508 "pred_table.m"
      {
#line 508 "pred_table.m"
        MR_String hlds__pred_table__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_7, (MR_Integer) 0)));

#line 512 "pred_table.m"
#line 512 "pred_table.m"
        switch (hlds__pred_table__IsFullyQualified_6) {
#line 512 "pred_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 512 "pred_table.m"
          case (MR_Integer) 0:
#line 514 "pred_table.m"
            *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 512 "pred_table.m"
            break;
#line 512 "pred_table.m"
          case (MR_Integer) 1:
#line 602 "pred_table.m"
            {
#line 602 "pred_table.m"
              MR_Word hlds__pred_table__PredNameIndex_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 603 "pred_table.m"
              MR_Word hlds__pred_table__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 603 "pred_table.m"
              MR_Word hlds__pred_table__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 603 "pred_table.m"
              MR_Word hlds__pred_table__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 603 "pred_table.m"
              MR_Word hlds__pred_table__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 603 "pred_table.m"
              MR_Word hlds__pred_table__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 603 "pred_table.m"
              MR_Word hlds__pred_table__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 603 "pred_table.m"
              MR_Word hlds__pred_table__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 603 "pred_table.m"
              MR_Word hlds__pred_table__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 603 "pred_table.m"
              MR_Word hlds__pred_table__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 604 "pred_table.m"
              MR_Word hlds__pred_table__PredIdsPrime_65;
#line 604 "pred_table.m"
              MR_Box hlds__pred_table__conv1_PredIdsPrime_65;

#line 604 "pred_table.m"
              {
#line 604 "pred_table.m"
                hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__PredNameIndex_64, ((MR_Box) (hlds__pred_table__Name_9)), &hlds__pred_table__conv1_PredIdsPrime_65);
              }
#line 604 "pred_table.m"
              if (hlds__pred_table__succeeded)
#line 604 "pred_table.m"
                {
#line 604 "pred_table.m"
                  hlds__pred_table__PredIdsPrime_65 = ((MR_Word) hlds__pred_table__conv1_PredIdsPrime_65);
#line 604 "pred_table.m"
                  hlds__pred_table__succeeded = MR_TRUE;
#line 604 "pred_table.m"
                }
#line 604 "pred_table.m"
              if (hlds__pred_table__succeeded)
#line 605 "pred_table.m"
                *hlds__pred_table__PredIds_8 = hlds__pred_table__PredIdsPrime_65;
#line 604 "pred_table.m"
              else
#line 607 "pred_table.m"
                *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 602 "pred_table.m"
            }
#line 512 "pred_table.m"
            break;
#line 512 "pred_table.m"
        }
#line 508 "pred_table.m"
      }
#line 508 "pred_table.m"
  }
#line 101 "pred_table.m"
}

#line 736 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_sym_4_p_0_1(
#line 736 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 736 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1)
#line 736 "pred_table.m"
{
#line 736 "pred_table.m"
  {
#line 736 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 736 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;

#line 736 "pred_table.m"
    {
#line 736 "pred_table.m"
      hlds__pred_table__succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) hlds__pred_table__wrapper_arg_1));
    }
#line 736 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 736 "pred_table.m"
  }
#line 736 "pred_table.m"
}

#line 99 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_sym_4_p_0(
#line 99 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_5,
#line 99 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_6,
#line 99 "pred_table.m"
  MR_Word hlds__pred_table__SymName_7,
#line 99 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_8)
#line 99 "pred_table.m"
{
#line 491 "pred_table.m"
  {
#line 491 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 491 "pred_table.m"
    if (((MR_tag((MR_Word) hlds__pred_table__SymName_7)) == (MR_mktag((MR_Integer) 1))))
#line 500 "pred_table.m"
      {
#line 500 "pred_table.m"
        MR_Word hlds__pred_table__Module_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_7, (MR_Integer) 0)));
#line 500 "pred_table.m"
        MR_String hlds__pred_table__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_7, (MR_Integer) 1)));
#line 500 "pred_table.m"
        MR_Word hlds__pred_table__PredPredIds_17;
#line 500 "pred_table.m"
        MR_Word hlds__pred_table__FuncPredIds_18;
#line 500 "pred_table.m"
        MR_Word hlds__pred_table__Pred_MNA_Index_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 638 "pred_table.m"
        MR_Word hlds__pred_table__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 638 "pred_table.m"
        MR_Word hlds__pred_table__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 638 "pred_table.m"
        MR_Word hlds__pred_table__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 638 "pred_table.m"
        MR_Word hlds__pred_table__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 638 "pred_table.m"
        MR_Word hlds__pred_table__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 638 "pred_table.m"
        MR_Word hlds__pred_table__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 638 "pred_table.m"
        MR_Word hlds__pred_table__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 638 "pred_table.m"
        MR_Word hlds__pred_table__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 638 "pred_table.m"
        MR_Word hlds__pred_table__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 639 "pred_table.m"
        MR_Word hlds__pred_table__Arities_26;
#line 639 "pred_table.m"
        MR_Word hlds__pred_table__V_29_29;
#line 639 "pred_table.m"
        MR_Box hlds__pred_table__conv0_Arities_26;

#line 639 "pred_table.m"
        {
#line 639 "pred_table.m"
          hlds__pred_table__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 639 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_29_29, 0) = ((MR_Box) (hlds__pred_table__Module_10));
#line 639 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_29_29, 1) = ((MR_Box) (hlds__pred_table__Name_11));
#line 639 "pred_table.m"
        }
#line 639 "pred_table.m"
        {
#line 639 "pred_table.m"
          hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__Pred_MNA_Index_25, ((MR_Box) (hlds__pred_table__V_29_29)), &hlds__pred_table__conv0_Arities_26);
        }
#line 639 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 639 "pred_table.m"
          {
#line 639 "pred_table.m"
            hlds__pred_table__Arities_26 = ((MR_Word) hlds__pred_table__conv0_Arities_26);
#line 639 "pred_table.m"
            hlds__pred_table__succeeded = MR_TRUE;
#line 639 "pred_table.m"
          }
#line 639 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 640 "pred_table.m"
          {
#line 640 "pred_table.m"
            MR_Word hlds__pred_table__PredIdLists_27;
#line 640 "pred_table.m"
            MR_Word hlds__pred_table__PredIds0_28;

#line 640 "pred_table.m"
            {
#line 640 "pred_table.m"
              mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__Arities_26, &hlds__pred_table__PredIdLists_27);
            }
#line 641 "pred_table.m"
            {
#line 641 "pred_table.m"
              mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__PredIdLists_27, &hlds__pred_table__PredIds0_28);
            }
#line 731 "pred_table.m"
#line 731 "pred_table.m"
            switch (hlds__pred_table__IsFullyQualified_6) {
#line 731 "pred_table.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 731 "pred_table.m"
              case (MR_Integer) 0:
#line 734 "pred_table.m"
                {
#line 734 "pred_table.m"
                  MR_Word hlds__pred_table__Preds_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 734 "pred_table.m"
                  MR_Word hlds__pred_table__V_55_55;
#line 389 "pred_table.m"
                  MR_Word hlds__pred_table__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 389 "pred_table.m"
                  MR_Word hlds__pred_table__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 389 "pred_table.m"
                  MR_Word hlds__pred_table__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 389 "pred_table.m"
                  MR_Word hlds__pred_table__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 389 "pred_table.m"
                  MR_Word hlds__pred_table__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 389 "pred_table.m"
                  MR_Word hlds__pred_table__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 389 "pred_table.m"
                  MR_Word hlds__pred_table__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 389 "pred_table.m"
                  MR_Word hlds__pred_table__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 389 "pred_table.m"
                  MR_Word hlds__pred_table__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));

#line 736 "pred_table.m"
                  {
#line 736 "pred_table.m"
                    hlds__pred_table__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 736 "pred_table.m"
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_55_55, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
#line 736 "pred_table.m"
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_55_55, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_sym_4_p_0_1));
#line 736 "pred_table.m"
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 736 "pred_table.m"
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_55_55, 3) = ((MR_Box) (hlds__pred_table__Preds_52));
#line 736 "pred_table.m"
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_55_55, 4) = ((MR_Box) (hlds__pred_table__Module_10));
#line 736 "pred_table.m"
                  }
#line 736 "pred_table.m"
                  {
#line 736 "pred_table.m"
                    mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__V_55_55, hlds__pred_table__PredIds0_28, &hlds__pred_table__PredPredIds_17);
                  }
#line 734 "pred_table.m"
                }
#line 731 "pred_table.m"
                break;
#line 731 "pred_table.m"
              case (MR_Integer) 1:
#line 732 "pred_table.m"
                hlds__pred_table__PredPredIds_17 = hlds__pred_table__PredIds0_28;
#line 731 "pred_table.m"
                break;
#line 731 "pred_table.m"
            }
#line 640 "pred_table.m"
          }
#line 639 "pred_table.m"
        else
#line 645 "pred_table.m"
          hlds__pred_table__PredPredIds_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 628 "pred_table.m"
        {
#line 628 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0(hlds__pred_table__PredicateTable_5, hlds__pred_table__IsFullyQualified_6, hlds__pred_table__Module_10, hlds__pred_table__Name_11, &hlds__pred_table__FuncPredIds_18);
        }
#line 630 "pred_table.m"
        {
#line 630 "pred_table.m"
          *hlds__pred_table__PredIds_8 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__FuncPredIds_18, hlds__pred_table__PredPredIds_17);
        }
#line 500 "pred_table.m"
      }
#line 491 "pred_table.m"
    else
#line 491 "pred_table.m"
      {
#line 491 "pred_table.m"
        MR_String hlds__pred_table__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_7, (MR_Integer) 0)));

#line 495 "pred_table.m"
#line 495 "pred_table.m"
        switch (hlds__pred_table__IsFullyQualified_6) {
#line 495 "pred_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 495 "pred_table.m"
          case (MR_Integer) 0:
#line 497 "pred_table.m"
            *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 495 "pred_table.m"
            break;
#line 495 "pred_table.m"
          case (MR_Integer) 1:
#line 494 "pred_table.m"
            {
#line 494 "pred_table.m"
              hlds__pred_table__predicate_table_lookup_name_3_p_0(hlds__pred_table__PredicateTable_5, hlds__pred_table__Name_9, hlds__pred_table__PredIds_8);
            }
#line 495 "pred_table.m"
            break;
#line 495 "pred_table.m"
        }
#line 491 "pred_table.m"
      }
#line 491 "pred_table.m"
  }
#line 99 "pred_table.m"
}

#line 90 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_remove_predicate_3_p_0(
#line 90 "pred_table.m"
  MR_Word hlds__pred_table__PredId_4,
#line 90 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable0_5,
#line 90 "pred_table.m"
  MR_Word * hlds__pred_table__PredicateTable_6)
#line 90 "pred_table.m"
{
#line 407 "pred_table.m"
  {
#line 407 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 407 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_34_34 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 407 "pred_table.m"
    MR_Word hlds__pred_table__Preds0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 0)));
#line 407 "pred_table.m"
    MR_Word hlds__pred_table__NextPredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 1)));
#line 407 "pred_table.m"
    MR_Word hlds__pred_table__ValidPredIds0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 2)));
#line 407 "pred_table.m"
    MR_Word hlds__pred_table__AccessibilityTable0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 3)));
#line 407 "pred_table.m"
    MR_Word hlds__pred_table__PredN0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 4)));
#line 407 "pred_table.m"
    MR_Word hlds__pred_table__PredNA0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 5)));
#line 407 "pred_table.m"
    MR_Word hlds__pred_table__PredMNA0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 6)));
#line 407 "pred_table.m"
    MR_Word hlds__pred_table__FuncN0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 7)));
#line 407 "pred_table.m"
    MR_Word hlds__pred_table__FuncNA0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 8)));
#line 407 "pred_table.m"
    MR_Word hlds__pred_table__FuncMNA0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 9)));
#line 407 "pred_table.m"
    MR_Word hlds__pred_table__ValidPredIds_17;
#line 407 "pred_table.m"
    MR_Word hlds__pred_table__PredInfo_18;
#line 407 "pred_table.m"
    MR_Word hlds__pred_table__Preds_19;
#line 407 "pred_table.m"
    MR_Word hlds__pred_table__AccessibilityTable_21;
#line 407 "pred_table.m"
    MR_Word hlds__pred_table__Module_22;
#line 407 "pred_table.m"
    MR_String hlds__pred_table__Name_23;
#line 407 "pred_table.m"
    MR_Integer hlds__pred_table__Arity_24;
#line 407 "pred_table.m"
    MR_Word hlds__pred_table__IsPredOrFunc_25;
#line 412 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredInfo_18;
#line 413 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20;
#line 413 "pred_table.m"
    MR_Box hlds__pred_table__conv1_V_20_20;

#line 411 "pred_table.m"
    {
#line 411 "pred_table.m"
      mercury__set_tree234__delete_3_p_0(hlds__pred_table__TypeCtorInfo_34_34, ((MR_Box) (hlds__pred_table__PredId_4)), hlds__pred_table__ValidPredIds0_9, &hlds__pred_table__ValidPredIds_17);
    }
#line 412 "pred_table.m"
    {
#line 412 "pred_table.m"
      mercury__map__det_remove_4_p_0(hlds__pred_table__TypeCtorInfo_34_34, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ((MR_Box) (hlds__pred_table__PredId_4)), &hlds__pred_table__conv0_PredInfo_18, hlds__pred_table__Preds0_7, &hlds__pred_table__Preds_19);
    }
#line 412 "pred_table.m"
    hlds__pred_table__PredInfo_18 = ((MR_Word) hlds__pred_table__conv0_PredInfo_18);
#line 413 "pred_table.m"
    {
#line 413 "pred_table.m"
      mercury__map__det_remove_4_p_0(hlds__pred_table__TypeCtorInfo_34_34, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0, ((MR_Box) (hlds__pred_table__PredId_4)), &hlds__pred_table__conv1_V_20_20, hlds__pred_table__AccessibilityTable0_10, &hlds__pred_table__AccessibilityTable_21);
    }
#line 413 "pred_table.m"
    hlds__pred_table__V_20_20 = ((MR_Word) hlds__pred_table__conv1_V_20_20);
#line 414 "pred_table.m"
    {
#line 414 "pred_table.m"
      hlds__pred_table__Module_22 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__pred_table__PredInfo_18);
    }
#line 415 "pred_table.m"
    {
#line 415 "pred_table.m"
      hlds__pred_table__Name_23 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__pred_table__PredInfo_18);
    }
#line 416 "pred_table.m"
    {
#line 416 "pred_table.m"
      hlds__pred_table__Arity_24 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__pred_table__PredInfo_18);
    }
#line 417 "pred_table.m"
    {
#line 417 "pred_table.m"
      hlds__pred_table__IsPredOrFunc_25 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__pred_table__PredInfo_18);
    }
#line 425 "pred_table.m"
#line 425 "pred_table.m"
    switch (hlds__pred_table__IsPredOrFunc_25) {
#line 425 "pred_table.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 425 "pred_table.m"
      case (MR_Integer) 1:
#line 426 "pred_table.m"
        {
#line 426 "pred_table.m"
          MR_Integer hlds__pred_table__FuncArity_29 = (hlds__pred_table__Arity_24 - (MR_Integer) 1);
#line 426 "pred_table.m"
          MR_Word hlds__pred_table__FuncN_30;
#line 426 "pred_table.m"
          MR_Word hlds__pred_table__FuncNA_31;
#line 426 "pred_table.m"
          MR_Word hlds__pred_table__FuncMNA_32;

#line 428 "pred_table.m"
          {
#line 428 "pred_table.m"
            hlds__pred_table__predicate_table_remove_from_index_10_p_0(hlds__pred_table__Module_22, hlds__pred_table__Name_23, hlds__pred_table__FuncArity_29, hlds__pred_table__PredId_4, hlds__pred_table__FuncN0_14, &hlds__pred_table__FuncN_30, hlds__pred_table__FuncNA0_15, &hlds__pred_table__FuncNA_31, hlds__pred_table__FuncMNA0_16, &hlds__pred_table__FuncMNA_32);
          }
#line 431 "pred_table.m"
          {
#line 431 "pred_table.m"
            MR_Word base;
#line 431 "pred_table.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 431 "pred_table.m"
            *hlds__pred_table__PredicateTable_6 = base;
#line 431 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__Preds_19));
#line 431 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__NextPredId_8));
#line 431 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__ValidPredIds_17));
#line 431 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__AccessibilityTable_21));
#line 431 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__PredN0_11));
#line 431 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__PredNA0_12));
#line 431 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__PredMNA0_13));
#line 431 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__FuncN_30));
#line 431 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__FuncNA_31));
#line 431 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__FuncMNA_32));
#line 431 "pred_table.m"
          }
#line 426 "pred_table.m"
        }
#line 425 "pred_table.m"
        break;
#line 425 "pred_table.m"
      case (MR_Integer) 0:
#line 419 "pred_table.m"
        {
#line 419 "pred_table.m"
          MR_Word hlds__pred_table__PredN_26;
#line 419 "pred_table.m"
          MR_Word hlds__pred_table__PredNA_27;
#line 419 "pred_table.m"
          MR_Word hlds__pred_table__PredMNA_28;

#line 420 "pred_table.m"
          {
#line 420 "pred_table.m"
            hlds__pred_table__predicate_table_remove_from_index_10_p_0(hlds__pred_table__Module_22, hlds__pred_table__Name_23, hlds__pred_table__Arity_24, hlds__pred_table__PredId_4, hlds__pred_table__PredN0_11, &hlds__pred_table__PredN_26, hlds__pred_table__PredNA0_12, &hlds__pred_table__PredNA_27, hlds__pred_table__PredMNA0_13, &hlds__pred_table__PredMNA_28);
          }
#line 422 "pred_table.m"
          {
#line 422 "pred_table.m"
            MR_Word base;
#line 422 "pred_table.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 422 "pred_table.m"
            *hlds__pred_table__PredicateTable_6 = base;
#line 422 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__Preds_19));
#line 422 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__NextPredId_8));
#line 422 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__ValidPredIds_17));
#line 422 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__AccessibilityTable_21));
#line 422 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__PredN_26));
#line 422 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__PredNA_27));
#line 422 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__PredMNA_28));
#line 422 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__FuncN0_14));
#line 422 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__FuncNA0_15));
#line 422 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__FuncMNA0_16));
#line 422 "pred_table.m"
          }
#line 419 "pred_table.m"
        }
#line 425 "pred_table.m"
        break;
#line 425 "pred_table.m"
    }
#line 407 "pred_table.m"
  }
#line 90 "pred_table.m"
}

#line 87 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_make_pred_ids_invalid_3_p_0(
#line 87 "pred_table.m"
  MR_Word hlds__pred_table__InvalidPredIds_4,
#line 87 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8,
#line 87 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_9)
#line 87 "pred_table.m"
{
#line 402 "pred_table.m"
  {
#line 402 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 402 "pred_table.m"
    MR_Word hlds__pred_table__ValidPredIds0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 2)));
#line 402 "pred_table.m"
    MR_Word hlds__pred_table__ValidPredIds_7;
#line 403 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 0)));
#line 403 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 1)));
#line 403 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 3)));
#line 403 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 4)));
#line 403 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 5)));
#line 403 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 6)));
#line 403 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 7)));
#line 403 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 8)));
#line 403 "pred_table.m"
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 9)));
#line 405 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20;
#line 405 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21;
#line 405 "pred_table.m"
    MR_Word hlds__pred_table__V_23_23;
#line 405 "pred_table.m"
    MR_Word hlds__pred_table__V_24_24;
#line 405 "pred_table.m"
    MR_Word hlds__pred_table__V_25_25;
#line 405 "pred_table.m"
    MR_Word hlds__pred_table__V_26_26;
#line 405 "pred_table.m"
    MR_Word hlds__pred_table__V_27_27;
#line 405 "pred_table.m"
    MR_Word hlds__pred_table__V_28_28;
#line 405 "pred_table.m"
    MR_Word hlds__pred_table__V_29_29;
#line 405 "pred_table.m"
    MR_Word hlds__pred_table__V_22_22;

#line 404 "pred_table.m"
    {
#line 404 "pred_table.m"
      mercury__set_tree234__delete_list_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__InvalidPredIds_4, hlds__pred_table__ValidPredIds0_6, &hlds__pred_table__ValidPredIds_7);
    }
#line 405 "pred_table.m"
    hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 0)));
#line 405 "pred_table.m"
    hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 1)));
#line 405 "pred_table.m"
    hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 2)));
#line 405 "pred_table.m"
    hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 3)));
#line 405 "pred_table.m"
    hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 4)));
#line 405 "pred_table.m"
    hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 5)));
#line 405 "pred_table.m"
    hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 6)));
#line 405 "pred_table.m"
    hlds__pred_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 7)));
#line 405 "pred_table.m"
    hlds__pred_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 8)));
#line 405 "pred_table.m"
    hlds__pred_table__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 9)));
#line 405 "pred_table.m"
    {
#line 405 "pred_table.m"
      MR_Word base;
#line 405 "pred_table.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 405 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_PredicateTable_9 = base;
#line 405 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__V_20_20));
#line 405 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__V_21_21));
#line 405 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__ValidPredIds_7));
#line 405 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__V_23_23));
#line 405 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__V_24_24));
#line 405 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__V_25_25));
#line 405 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__V_26_26));
#line 405 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__V_27_27));
#line 405 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__V_28_28));
#line 405 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__V_29_29));
#line 405 "pred_table.m"
    }
#line 402 "pred_table.m"
  }
#line 87 "pred_table.m"
}

#line 85 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_make_pred_id_invalid_3_p_0(
#line 85 "pred_table.m"
  MR_Word hlds__pred_table__InvalidPredId_4,
#line 85 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8,
#line 85 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_9)
#line 85 "pred_table.m"
{
#line 397 "pred_table.m"
  {
#line 397 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 397 "pred_table.m"
    MR_Word hlds__pred_table__ValidPredIds0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 2)));
#line 397 "pred_table.m"
    MR_Word hlds__pred_table__ValidPredIds_7;
#line 398 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 0)));
#line 398 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 1)));
#line 398 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 3)));
#line 398 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 4)));
#line 398 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 5)));
#line 398 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 6)));
#line 398 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 7)));
#line 398 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 8)));
#line 398 "pred_table.m"
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 9)));
#line 400 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20;
#line 400 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21;
#line 400 "pred_table.m"
    MR_Word hlds__pred_table__V_23_23;
#line 400 "pred_table.m"
    MR_Word hlds__pred_table__V_24_24;
#line 400 "pred_table.m"
    MR_Word hlds__pred_table__V_25_25;
#line 400 "pred_table.m"
    MR_Word hlds__pred_table__V_26_26;
#line 400 "pred_table.m"
    MR_Word hlds__pred_table__V_27_27;
#line 400 "pred_table.m"
    MR_Word hlds__pred_table__V_28_28;
#line 400 "pred_table.m"
    MR_Word hlds__pred_table__V_29_29;
#line 400 "pred_table.m"
    MR_Word hlds__pred_table__V_22_22;

#line 399 "pred_table.m"
    {
#line 399 "pred_table.m"
      mercury__set_tree234__delete_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (hlds__pred_table__InvalidPredId_4)), hlds__pred_table__ValidPredIds0_6, &hlds__pred_table__ValidPredIds_7);
    }
#line 400 "pred_table.m"
    hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 0)));
#line 400 "pred_table.m"
    hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 1)));
#line 400 "pred_table.m"
    hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 2)));
#line 400 "pred_table.m"
    hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 3)));
#line 400 "pred_table.m"
    hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 4)));
#line 400 "pred_table.m"
    hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 5)));
#line 400 "pred_table.m"
    hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 6)));
#line 400 "pred_table.m"
    hlds__pred_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 7)));
#line 400 "pred_table.m"
    hlds__pred_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 8)));
#line 400 "pred_table.m"
    hlds__pred_table__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 9)));
#line 400 "pred_table.m"
    {
#line 400 "pred_table.m"
      MR_Word base;
#line 400 "pred_table.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 400 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_PredicateTable_9 = base;
#line 400 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__V_20_20));
#line 400 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__V_21_21));
#line 400 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__ValidPredIds_7));
#line 400 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__V_23_23));
#line 400 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__V_24_24));
#line 400 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__V_25_25));
#line 400 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__V_26_26));
#line 400 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__V_27_27));
#line 400 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__V_28_28));
#line 400 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__V_29_29));
#line 400 "pred_table.m"
    }
#line 397 "pred_table.m"
  }
#line 85 "pred_table.m"
}

#line 80 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_get_valid_pred_id_set_2_p_0(
#line 80 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_3,
#line 80 "pred_table.m"
  MR_Word * hlds__pred_table__ValidPredIds_4)
#line 80 "pred_table.m"
{
#line 395 "pred_table.m"
  {
#line 395 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 395 "pred_table.m"
    MR_Word hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 0)));
#line 395 "pred_table.m"
    MR_Word hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 1)));
#line 395 "pred_table.m"
    MR_Word hlds__pred_table__V_7_7;
#line 395 "pred_table.m"
    MR_Word hlds__pred_table__V_8_8;
#line 395 "pred_table.m"
    MR_Word hlds__pred_table__V_9_9;
#line 395 "pred_table.m"
    MR_Word hlds__pred_table__V_10_10;
#line 395 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11;
#line 395 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12;
#line 395 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13;

#line 395 "pred_table.m"
    *hlds__pred_table__ValidPredIds_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 2)));
#line 395 "pred_table.m"
    hlds__pred_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 3)));
#line 395 "pred_table.m"
    hlds__pred_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 4)));
#line 395 "pred_table.m"
    hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 5)));
#line 395 "pred_table.m"
    hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 6)));
#line 395 "pred_table.m"
    hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 7)));
#line 395 "pred_table.m"
    hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 8)));
#line 395 "pred_table.m"
    hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 9)));
#line 395 "pred_table.m"
  }
#line 80 "pred_table.m"
}

#line 72 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_set_preds_3_p_0(
#line 72 "pred_table.m"
  MR_Word hlds__pred_table__Preds_4,
#line 72 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6,
#line 72 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_7)
#line 72 "pred_table.m"
{
#line 392 "pred_table.m"
  {
#line 392 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 392 "pred_table.m"
    MR_Word hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 1)));
#line 392 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 2)));
#line 392 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 3)));
#line 392 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 4)));
#line 392 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 5)));
#line 392 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 6)));
#line 392 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 7)));
#line 392 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 8)));
#line 392 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 9)));
#line 392 "pred_table.m"
    MR_Word hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 0)));

#line 392 "pred_table.m"
    {
#line 392 "pred_table.m"
      MR_Word base;
#line 392 "pred_table.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 392 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_PredicateTable_7 = base;
#line 392 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__Preds_4));
#line 392 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__V_10_10));
#line 392 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__V_11_11));
#line 392 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__V_12_12));
#line 392 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__V_13_13));
#line 392 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__V_14_14));
#line 392 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__V_15_15));
#line 392 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__V_16_16));
#line 392 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__V_17_17));
#line 392 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__V_18_18));
#line 392 "pred_table.m"
    }
#line 392 "pred_table.m"
  }
#line 72 "pred_table.m"
}

#line 811 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_restrict_4_p_0_1(
#line 811 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 811 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 811 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 811 "pred_table.m"
  MR_Box * hlds__pred_table__wrapper_arg_3)
#line 811 "pred_table.m"
{
#line 811 "pred_table.m"
  {
#line 811 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;
#line 811 "pred_table.m"
    MR_Word hlds__pred_table__conv0_STATE_VARIABLE_PredicateTable_20;

#line 811 "pred_table.m"
    {
#line 811 "pred_table.m"
      hlds__pred_table__reinsert_for_restrict_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 5))), ((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2), &hlds__pred_table__conv0_STATE_VARIABLE_PredicateTable_20);
    }
#line 811 "pred_table.m"
    *hlds__pred_table__wrapper_arg_3 = ((MR_Box) (hlds__pred_table__conv0_STATE_VARIABLE_PredicateTable_20));
#line 811 "pred_table.m"
  }
#line 811 "pred_table.m"
}

#line 64 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_restrict_4_p_0(
#line 64 "pred_table.m"
  MR_Word hlds__pred_table__PartialQualInfo_5,
#line 64 "pred_table.m"
  MR_Word hlds__pred_table__PredIds_6,
#line 64 "pred_table.m"
  MR_Word hlds__pred_table__OrigPredicateTable_7,
#line 64 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_11)
#line 64 "pred_table.m"
{
#line 806 "pred_table.m"
  {
#line 806 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 806 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_24_50 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 806 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_27_53;
#line 806 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_28_54;
#line 806 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_29_55;
#line 806 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_30_56;
#line 806 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_31_57;
#line 806 "pred_table.m"
    MR_Word hlds__pred_table__Preds_9;
#line 806 "pred_table.m"
    MR_Word hlds__pred_table__AccessibilityTable_10;
#line 806 "pred_table.m"
    MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12;
#line 806 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13;
#line 806 "pred_table.m"
    MR_Word hlds__pred_table__NextPredId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 1)));
#line 806 "pred_table.m"
    MR_Word hlds__pred_table__V_32_32;
#line 806 "pred_table.m"
    MR_Word hlds__pred_table__V_33_33;
#line 806 "pred_table.m"
    MR_Word hlds__pred_table__V_34_34;
#line 806 "pred_table.m"
    MR_Word hlds__pred_table__V_35_35;
#line 806 "pred_table.m"
    MR_Word hlds__pred_table__V_36_36;
#line 806 "pred_table.m"
    MR_Word hlds__pred_table__V_37_37;
#line 806 "pred_table.m"
    MR_Word hlds__pred_table__V_38_38;
#line 806 "pred_table.m"
    MR_Word hlds__pred_table__V_39_39;
#line 806 "pred_table.m"
    MR_Word hlds__pred_table__V_40_40;
#line 844 "pred_table.m"
    MR_Word hlds__pred_table__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 0)));
#line 844 "pred_table.m"
    MR_Word hlds__pred_table__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 2)));
#line 844 "pred_table.m"
    MR_Word hlds__pred_table__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 3)));
#line 844 "pred_table.m"
    MR_Word hlds__pred_table__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 4)));
#line 844 "pred_table.m"
    MR_Word hlds__pred_table__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 5)));
#line 844 "pred_table.m"
    MR_Word hlds__pred_table__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 6)));
#line 844 "pred_table.m"
    MR_Word hlds__pred_table__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 7)));
#line 844 "pred_table.m"
    MR_Word hlds__pred_table__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 8)));
#line 844 "pred_table.m"
    MR_Word hlds__pred_table__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 9)));
#line 389 "pred_table.m"
    MR_Word hlds__pred_table__V_59_59;
#line 389 "pred_table.m"
    MR_Word hlds__pred_table__V_60_60;
#line 389 "pred_table.m"
    MR_Word hlds__pred_table__V_62_62;
#line 389 "pred_table.m"
    MR_Word hlds__pred_table__V_63_63;
#line 389 "pred_table.m"
    MR_Word hlds__pred_table__V_64_64;
#line 389 "pred_table.m"
    MR_Word hlds__pred_table__V_65_65;
#line 389 "pred_table.m"
    MR_Word hlds__pred_table__V_66_66;
#line 389 "pred_table.m"
    MR_Word hlds__pred_table__V_67_67;
#line 810 "pred_table.m"
    MR_Box hlds__pred_table__conv1_STATE_VARIABLE_PredicateTable_11;

#line 845 "pred_table.m"
    {
#line 845 "pred_table.m"
      hlds__pred_table__V_32_32 = mercury__map__init_0_f_0(hlds__pred_table__TypeCtorInfo_24_50, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0);
    }
#line 846 "pred_table.m"
    {
#line 846 "pred_table.m"
      hlds__pred_table__V_33_33 = mercury__set_tree234__init_0_f_0(hlds__pred_table__TypeCtorInfo_24_50);
    }
#line 846 "pred_table.m"
    {
#line 846 "pred_table.m"
      hlds__pred_table__V_34_34 = mercury__map__init_0_f_0(hlds__pred_table__TypeCtorInfo_24_50, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0);
    }
#line 9620 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_27_53 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 9622 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_28_54 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
#line 847 "pred_table.m"
    {
#line 847 "pred_table.m"
      hlds__pred_table__V_35_35 = mercury__map__init_0_f_0(hlds__pred_table__TypeCtorInfo_27_53, hlds__pred_table__TypeInfo_28_54);
    }
#line 9629 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_29_55 = (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0;
#line 847 "pred_table.m"
    {
#line 847 "pred_table.m"
      hlds__pred_table__V_36_36 = mercury__map__init_0_f_0(hlds__pred_table__TypeCtorInfo_29_55, hlds__pred_table__TypeInfo_28_54);
    }
#line 9636 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_30_56 = (MR_Word) &hlds__pred_table_scalar_common_2[0];
#line 9638 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_31_57 = (MR_Word) &hlds__pred_table_scalar_common_2[1];
#line 847 "pred_table.m"
    {
#line 847 "pred_table.m"
      hlds__pred_table__V_37_37 = mercury__map__init_0_f_0(hlds__pred_table__TypeInfo_30_56, hlds__pred_table__TypeInfo_31_57);
    }
#line 847 "pred_table.m"
    {
#line 847 "pred_table.m"
      hlds__pred_table__V_38_38 = mercury__map__init_0_f_0(hlds__pred_table__TypeCtorInfo_27_53, hlds__pred_table__TypeInfo_28_54);
    }
#line 847 "pred_table.m"
    {
#line 847 "pred_table.m"
      hlds__pred_table__V_39_39 = mercury__map__init_0_f_0(hlds__pred_table__TypeCtorInfo_29_55, hlds__pred_table__TypeInfo_28_54);
    }
#line 847 "pred_table.m"
    {
#line 847 "pred_table.m"
      hlds__pred_table__V_40_40 = mercury__map__init_0_f_0(hlds__pred_table__TypeInfo_30_56, hlds__pred_table__TypeInfo_31_57);
    }
#line 845 "pred_table.m"
    {
#line 845 "pred_table.m"
      hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 845 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 0) = ((MR_Box) (hlds__pred_table__V_32_32));
#line 845 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 1) = ((MR_Box) (hlds__pred_table__NextPredId_31));
#line 845 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 2) = ((MR_Box) (hlds__pred_table__V_33_33));
#line 845 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 3) = ((MR_Box) (hlds__pred_table__V_34_34));
#line 845 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 4) = ((MR_Box) (hlds__pred_table__V_35_35));
#line 845 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 5) = ((MR_Box) (hlds__pred_table__V_36_36));
#line 845 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 6) = ((MR_Box) (hlds__pred_table__V_37_37));
#line 845 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 7) = ((MR_Box) (hlds__pred_table__V_38_38));
#line 845 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 8) = ((MR_Box) (hlds__pred_table__V_39_39));
#line 845 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 9) = ((MR_Box) (hlds__pred_table__V_40_40));
#line 845 "pred_table.m"
    }
#line 389 "pred_table.m"
    hlds__pred_table__Preds_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 0)));
#line 389 "pred_table.m"
    hlds__pred_table__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 1)));
#line 389 "pred_table.m"
    hlds__pred_table__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 2)));
#line 389 "pred_table.m"
    hlds__pred_table__AccessibilityTable_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 3)));
#line 389 "pred_table.m"
    hlds__pred_table__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 4)));
#line 389 "pred_table.m"
    hlds__pred_table__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 5)));
#line 389 "pred_table.m"
    hlds__pred_table__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 6)));
#line 389 "pred_table.m"
    hlds__pred_table__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 7)));
#line 389 "pred_table.m"
    hlds__pred_table__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 8)));
#line 389 "pred_table.m"
    hlds__pred_table__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 9)));
#line 811 "pred_table.m"
    {
#line 811 "pred_table.m"
      hlds__pred_table__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 811 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_13_13, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_4[0]));
#line 811 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_13_13, 1) = ((MR_Box) (hlds__pred_table__predicate_table_restrict_4_p_0_1));
#line 811 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 811 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_13_13, 3) = ((MR_Box) (hlds__pred_table__PartialQualInfo_5));
#line 811 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_13_13, 4) = ((MR_Box) (hlds__pred_table__Preds_9));
#line 811 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_13_13, 5) = ((MR_Box) (hlds__pred_table__AccessibilityTable_10));
#line 811 "pred_table.m"
    }
#line 810 "pred_table.m"
    {
#line 810 "pred_table.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_predicate_table_0, hlds__pred_table__V_13_13, hlds__pred_table__PredIds_6, ((MR_Box) (hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12)), &hlds__pred_table__conv1_STATE_VARIABLE_PredicateTable_11);
    }
#line 810 "pred_table.m"
    *hlds__pred_table__STATE_VARIABLE_PredicateTable_11 = ((MR_Word) hlds__pred_table__conv1_STATE_VARIABLE_PredicateTable_11);
#line 806 "pred_table.m"
  }
#line 64 "pred_table.m"
}

#line 57 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_get_preds_2_p_0(
#line 57 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_3,
#line 57 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__2_2)
#line 57 "pred_table.m"
{
#line 389 "pred_table.m"
  {
#line 389 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 389 "pred_table.m"
    MR_Word hlds__pred_table__V_4_4;
#line 389 "pred_table.m"
    MR_Word hlds__pred_table__V_5_5;
#line 389 "pred_table.m"
    MR_Word hlds__pred_table__V_6_6;
#line 389 "pred_table.m"
    MR_Word hlds__pred_table__V_7_7;
#line 389 "pred_table.m"
    MR_Word hlds__pred_table__V_8_8;
#line 389 "pred_table.m"
    MR_Word hlds__pred_table__V_9_9;
#line 389 "pred_table.m"
    MR_Word hlds__pred_table__V_10_10;
#line 389 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11;
#line 389 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12;

#line 389 "pred_table.m"
    *hlds__pred_table__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 0)));
#line 389 "pred_table.m"
    hlds__pred_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 1)));
#line 389 "pred_table.m"
    hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 2)));
#line 389 "pred_table.m"
    hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 3)));
#line 389 "pred_table.m"
    hlds__pred_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 4)));
#line 389 "pred_table.m"
    hlds__pred_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 5)));
#line 389 "pred_table.m"
    hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 6)));
#line 389 "pred_table.m"
    hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 7)));
#line 389 "pred_table.m"
    hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 8)));
#line 389 "pred_table.m"
    hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 9)));
#line 389 "pred_table.m"
  }
#line 57 "pred_table.m"
}

#line 52 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_optimize_2_p_0(
#line 52 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable0_3,
#line 52 "pred_table.m"
  MR_Word * hlds__pred_table__PredicateTable_4)
#line 52 "pred_table.m"
{
#line 373 "pred_table.m"
  {
#line 373 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 373 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 373 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_22_22 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
#line 373 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_23_23;
#line 373 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_24_24;
#line 373 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_25_25;
#line 373 "pred_table.m"
    MR_Word hlds__pred_table__Preds_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 0)));
#line 373 "pred_table.m"
    MR_Word hlds__pred_table__NextPredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 1)));
#line 373 "pred_table.m"
    MR_Word hlds__pred_table__ValidPredIds_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 2)));
#line 373 "pred_table.m"
    MR_Word hlds__pred_table__AccessibilityTable_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 3)));
#line 373 "pred_table.m"
    MR_Word hlds__pred_table__Pred_N_Index0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 4)));
#line 373 "pred_table.m"
    MR_Word hlds__pred_table__Pred_NA_Index0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 5)));
#line 373 "pred_table.m"
    MR_Word hlds__pred_table__Pred_MNA_Index0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 6)));
#line 373 "pred_table.m"
    MR_Word hlds__pred_table__Func_N_Index0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 7)));
#line 373 "pred_table.m"
    MR_Word hlds__pred_table__Func_NA_Index0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 8)));
#line 373 "pred_table.m"
    MR_Word hlds__pred_table__Func_MNA_Index0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 9)));
#line 373 "pred_table.m"
    MR_Word hlds__pred_table__Pred_N_Index_15;
#line 373 "pred_table.m"
    MR_Word hlds__pred_table__Pred_NA_Index_16;
#line 373 "pred_table.m"
    MR_Word hlds__pred_table__Pred_MNA_Index_17;
#line 373 "pred_table.m"
    MR_Word hlds__pred_table__Func_N_Index_18;
#line 373 "pred_table.m"
    MR_Word hlds__pred_table__Func_NA_Index_19;
#line 373 "pred_table.m"
    MR_Word hlds__pred_table__Func_MNA_Index_20;

#line 378 "pred_table.m"
    {
#line 378 "pred_table.m"
      mercury__map__optimize_2_p_0(hlds__pred_table__TypeCtorInfo_21_21, hlds__pred_table__TypeInfo_22_22, hlds__pred_table__Pred_N_Index0_9, &hlds__pred_table__Pred_N_Index_15);
    }
#line 9854 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_23_23 = (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0;
#line 379 "pred_table.m"
    {
#line 379 "pred_table.m"
      mercury__map__optimize_2_p_0(hlds__pred_table__TypeCtorInfo_23_23, hlds__pred_table__TypeInfo_22_22, hlds__pred_table__Pred_NA_Index0_10, &hlds__pred_table__Pred_NA_Index_16);
    }
#line 9861 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_24_24 = (MR_Word) &hlds__pred_table_scalar_common_2[0];
#line 9863 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_25_25 = (MR_Word) &hlds__pred_table_scalar_common_2[1];
#line 380 "pred_table.m"
    {
#line 380 "pred_table.m"
      mercury__map__optimize_2_p_0(hlds__pred_table__TypeInfo_24_24, hlds__pred_table__TypeInfo_25_25, hlds__pred_table__Pred_MNA_Index0_11, &hlds__pred_table__Pred_MNA_Index_17);
    }
#line 381 "pred_table.m"
    {
#line 381 "pred_table.m"
      mercury__map__optimize_2_p_0(hlds__pred_table__TypeCtorInfo_21_21, hlds__pred_table__TypeInfo_22_22, hlds__pred_table__Func_N_Index0_12, &hlds__pred_table__Func_N_Index_18);
    }
#line 382 "pred_table.m"
    {
#line 382 "pred_table.m"
      mercury__map__optimize_2_p_0(hlds__pred_table__TypeCtorInfo_23_23, hlds__pred_table__TypeInfo_22_22, hlds__pred_table__Func_NA_Index0_13, &hlds__pred_table__Func_NA_Index_19);
    }
#line 383 "pred_table.m"
    {
#line 383 "pred_table.m"
      mercury__map__optimize_2_p_0(hlds__pred_table__TypeInfo_24_24, hlds__pred_table__TypeInfo_25_25, hlds__pred_table__Func_MNA_Index0_14, &hlds__pred_table__Func_MNA_Index_20);
    }
#line 384 "pred_table.m"
    {
#line 384 "pred_table.m"
      MR_Word base;
#line 384 "pred_table.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 384 "pred_table.m"
      *hlds__pred_table__PredicateTable_4 = base;
#line 384 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__Preds_5));
#line 384 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__NextPredId_6));
#line 384 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__ValidPredIds_7));
#line 384 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__AccessibilityTable_8));
#line 384 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__Pred_N_Index_15));
#line 384 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__Pred_NA_Index_16));
#line 384 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__Pred_MNA_Index_17));
#line 384 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__Func_N_Index_18));
#line 384 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__Func_NA_Index_19));
#line 384 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__Func_MNA_Index_20));
#line 384 "pred_table.m"
    }
#line 373 "pred_table.m"
  }
#line 52 "pred_table.m"
}

#line 48 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_init_1_p_0(
#line 48 "pred_table.m"
  MR_Word * hlds__pred_table__PredicateTable_2)
#line 48 "pred_table.m"
{
#line 357 "pred_table.m"
  {
#line 357 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 357 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_13_13 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 357 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_16_16;
#line 357 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_17_17;
#line 357 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_18_18;
#line 357 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_19_19;
#line 357 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_20_20;
#line 357 "pred_table.m"
    MR_Word hlds__pred_table__Preds_3;
#line 357 "pred_table.m"
    MR_Word hlds__pred_table__NextPredId_4;
#line 357 "pred_table.m"
    MR_Word hlds__pred_table__ValidPredIds_5;
#line 357 "pred_table.m"
    MR_Word hlds__pred_table__AccessibilityTable_6;
#line 357 "pred_table.m"
    MR_Word hlds__pred_table__Pred_N_Index_7;
#line 357 "pred_table.m"
    MR_Word hlds__pred_table__Pred_NA_Index_8;
#line 357 "pred_table.m"
    MR_Word hlds__pred_table__Pred_MNA_Index_9;
#line 357 "pred_table.m"
    MR_Word hlds__pred_table__Func_N_Index_10;
#line 357 "pred_table.m"
    MR_Word hlds__pred_table__Func_NA_Index_11;
#line 357 "pred_table.m"
    MR_Word hlds__pred_table__Func_MNA_Index_12;

#line 358 "pred_table.m"
    {
#line 358 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeCtorInfo_13_13, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, &hlds__pred_table__Preds_3);
    }
#line 359 "pred_table.m"
    {
#line 359 "pred_table.m"
      hlds__pred_table__NextPredId_4 = hlds__hlds_pred__initial_pred_id_0_f_0();
    }
#line 360 "pred_table.m"
    {
#line 360 "pred_table.m"
      hlds__pred_table__ValidPredIds_5 = mercury__set_tree234__init_0_f_0(hlds__pred_table__TypeCtorInfo_13_13);
    }
#line 361 "pred_table.m"
    {
#line 361 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeCtorInfo_13_13, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0, &hlds__pred_table__AccessibilityTable_6);
    }
#line 9984 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 9986 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_17_17 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
#line 362 "pred_table.m"
    {
#line 362 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeCtorInfo_16_16, hlds__pred_table__TypeInfo_17_17, &hlds__pred_table__Pred_N_Index_7);
    }
#line 9993 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_18_18 = (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0;
#line 363 "pred_table.m"
    {
#line 363 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeCtorInfo_18_18, hlds__pred_table__TypeInfo_17_17, &hlds__pred_table__Pred_NA_Index_8);
    }
#line 10000 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_19_19 = (MR_Word) &hlds__pred_table_scalar_common_2[0];
#line 10002 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_20_20 = (MR_Word) &hlds__pred_table_scalar_common_2[1];
#line 364 "pred_table.m"
    {
#line 364 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeInfo_19_19, hlds__pred_table__TypeInfo_20_20, &hlds__pred_table__Pred_MNA_Index_9);
    }
#line 365 "pred_table.m"
    {
#line 365 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeCtorInfo_16_16, hlds__pred_table__TypeInfo_17_17, &hlds__pred_table__Func_N_Index_10);
    }
#line 366 "pred_table.m"
    {
#line 366 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeCtorInfo_18_18, hlds__pred_table__TypeInfo_17_17, &hlds__pred_table__Func_NA_Index_11);
    }
#line 367 "pred_table.m"
    {
#line 367 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeInfo_19_19, hlds__pred_table__TypeInfo_20_20, &hlds__pred_table__Func_MNA_Index_12);
    }
#line 368 "pred_table.m"
    {
#line 368 "pred_table.m"
      MR_Word base;
#line 368 "pred_table.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 368 "pred_table.m"
      *hlds__pred_table__PredicateTable_2 = base;
#line 368 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__Preds_3));
#line 368 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__NextPredId_4));
#line 368 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__ValidPredIds_5));
#line 368 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__AccessibilityTable_6));
#line 368 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__Pred_N_Index_7));
#line 368 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__Pred_NA_Index_8));
#line 368 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__Pred_MNA_Index_9));
#line 368 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__Func_N_Index_10));
#line 368 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__Func_NA_Index_11));
#line 368 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__Func_MNA_Index_12));
#line 368 "pred_table.m"
    }
#line 357 "pred_table.m"
  }
#line 48 "pred_table.m"
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
