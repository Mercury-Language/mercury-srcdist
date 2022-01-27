/*
** Automatically generated from `pred_table.m'
** by the Mercury compiler,
** version 14.01.2-beta-2015-02-18, configured for x86_64-apple-darwin13.4.0.
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 132 "hlds.pred_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

#line 135 "hlds.pred_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__pred_table__type_ctor_info_name_accessibility_0;

#line 138 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

#line 141 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct1 hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 144 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 147 "hlds.pred_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 150 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__pred_table__type_ctor_info_name_accessibility_0;

#line 153 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct1 hlds__pred_table__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 156 "hlds.pred_table.c"
static const MR_VA_TypeInfo_Struct2 hlds__pred_table____vti_pred_2builtin__type_ctor_info_int_0list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 159 "hlds.pred_table.c"
static const MR_EnumFunctorDesc hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_0;

#line 162 "hlds.pred_table.c"
static const MR_EnumFunctorDesc hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_1;

#line 165 "hlds.pred_table.c"
static const MR_EnumFunctorDescPtr hlds__pred_table__hlds__pred_table__enum_value_ordered_is_fully_qualified_0[2];

#line 168 "hlds.pred_table.c"
static const MR_EnumFunctorDescPtr hlds__pred_table__hlds__pred_table__enum_name_ordered_is_fully_qualified_0[2];

#line 171 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_is_fully_qualified_0[2];

#line 174 "hlds.pred_table.c"
static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_0;

#line 177 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_mode_no_0_1[1];

#line 180 "hlds.pred_table.c"
static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_1;

#line 183 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_mode_no_0_0[1];

#line 186 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_mode_no_0_1[1];

#line 189 "hlds.pred_table.c"
static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_mode_no_0[2];

#line 192 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_mode_no_0[2];

#line 195 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_mode_no_0[2];

#line 198 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 201 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_name_accessibility_0_0[2];

#line 204 "hlds.pred_table.c"
static const MR_ConstString hlds__pred_table__hlds__pred_table__field_names_name_accessibility_0_0[2];

#line 207 "hlds.pred_table.c"
static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_name_accessibility_0_0;

#line 210 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_name_accessibility_0_0[1];

#line 213 "hlds.pred_table.c"
static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_name_accessibility_0[1];

#line 216 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_name_accessibility_0[1];

#line 219 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_name_accessibility_0[1];

#line 222 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_name_arity_0_0[2];

#line 225 "hlds.pred_table.c"
static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_name_arity_0_0;

#line 228 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_name_arity_0_0[1];

#line 231 "hlds.pred_table.c"
static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_name_arity_0[1];

#line 234 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_name_arity_0[1];

#line 237 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_name_arity_0[1];

#line 240 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__pred_table__type_ctor_info_name_arity_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 243 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 246 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0;

#line 249 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_predicate_table_0_0[11];

#line 252 "hlds.pred_table.c"
static const MR_ConstString hlds__pred_table__hlds__pred_table__field_names_predicate_table_0_0[11];

#line 255 "hlds.pred_table.c"
static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_predicate_table_0_0;

#line 258 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_predicate_table_0_0[1];

#line 261 "hlds.pred_table.c"
static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_predicate_table_0[1];

#line 264 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_predicate_table_0[1];

#line 267 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_predicate_table_0[1];

#line 270 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____accessibility_table_0_0_10001(
#line 273 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 275 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 278 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____accessibility_table_0_0_10001(
#line 281 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 283 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 285 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 288 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____constraint_search_0_0_10001(
#line 291 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 293 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 296 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____constraint_search_0_0_10001(
#line 299 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 301 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 303 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 306 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____is_fully_qualified_0_0_10001(
#line 309 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 311 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 314 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____is_fully_qualified_0_0_10001(
#line 317 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 319 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 321 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 324 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____mode_no_0_0_10001(
#line 327 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 329 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 332 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____mode_no_0_0_10001(
#line 335 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 337 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 339 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 342 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____module_name_arity_index_0_0_10001(
#line 345 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 347 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 350 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____module_name_arity_index_0_0_10001(
#line 353 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 355 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 357 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 360 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_accessibility_0_0_10001(
#line 363 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 365 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 368 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_accessibility_0_0_10001(
#line 371 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 373 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 375 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 378 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_0_0_10001(
#line 381 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 383 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 386 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_0_0_10001(
#line 389 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 391 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 393 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 396 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_index_0_0_10001(
#line 399 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 401 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 404 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_index_0_0_10001(
#line 407 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 409 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 411 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 414 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_index_0_0_10001(
#line 417 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 419 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 422 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_index_0_0_10001(
#line 425 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 427 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 429 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 432 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____pred_table_0_0_10001(
#line 435 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 437 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 440 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____pred_table_0_0_10001(
#line 443 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 445 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 447 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 450 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____predicate_table_0_0_10001(
#line 453 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 455 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 458 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____predicate_table_0_0_10001(
#line 461 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 463 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 465 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 362 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_index_0_0(
#line 362 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 362 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 362 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3);

#line 362 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_index_0_0(
#line 362 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 362 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2);

#line 364 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_index_0_0(
#line 364 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 364 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 364 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3);

#line 364 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_index_0_0(
#line 364 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 364 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2);

#line 365 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_0_0(
#line 365 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 365 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 365 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3);

#line 365 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_0_0(
#line 365 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 365 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2);

#line 352 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_accessibility_0_0(
#line 352 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 352 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 352 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3);

#line 352 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_accessibility_0_0(
#line 352 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 352 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2);

#line 371 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____module_name_arity_index_0_0(
#line 371 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 371 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 371 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3);

#line 371 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____module_name_arity_index_0_0(
#line 371 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 371 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2);

#line 350 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____accessibility_table_0_0(
#line 350 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 350 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 350 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3);

#line 350 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____accessibility_table_0_0(
#line 350 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 350 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2);

#line 1109 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__univ_constraints_match_2_p_0(
#line 1109 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 1109 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2);

#line 998 "pred_table.m"
static void MR_CALL 
hlds__pred_table__insert_into_mna_index_6_p_0(
#line 998 "pred_table.m"
  MR_String hlds__pred_table__Name_7,
#line 998 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_8,
#line 998 "pred_table.m"
  MR_Word hlds__pred_table__PredId_9,
#line 998 "pred_table.m"
  MR_Word hlds__pred_table__Module_10,
#line 998 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_MNA_Index_0_14,
#line 998 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_MNA_Index_15);

#line 984 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_do_insert_14_p_0_1(
#line 984 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 984 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 984 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 984 "pred_table.m"
  MR_Box * hlds__pred_table__wrapper_arg_3);

#line 955 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_do_insert_14_p_0(
#line 955 "pred_table.m"
  MR_Word hlds__pred_table__Module_15,
#line 955 "pred_table.m"
  MR_String hlds__pred_table__Name_16,
#line 955 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_17,
#line 955 "pred_table.m"
  MR_Word hlds__pred_table__NeedQual_18,
#line 955 "pred_table.m"
  MR_Word hlds__pred_table__MaybeQualInfo_19,
#line 955 "pred_table.m"
  MR_Word hlds__pred_table__PredId_20,
#line 955 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_AccessibilityTable_0_31,
#line 955 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_AccessibilityTable_32,
#line 955 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_N_Index_0_33,
#line 955 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_N_Index_34,
#line 955 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_NA_Index_0_35,
#line 955 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_NA_Index_36,
#line 955 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_MNA_Index_0_37,
#line 955 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_MNA_Index_38);

#line 984 "pred_table.m"
static void MR_CALL 
hlds__pred_table__do_predicate_table_insert_7_p_0_1(
#line 984 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 984 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 984 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 984 "pred_table.m"
  MR_Box * hlds__pred_table__wrapper_arg_3);

#line 892 "pred_table.m"
static void MR_CALL 
hlds__pred_table__do_predicate_table_insert_7_p_0(
#line 892 "pred_table.m"
  MR_Word hlds__pred_table__MaybePredId_8,
#line 892 "pred_table.m"
  MR_Word hlds__pred_table__PredInfo_9,
#line 892 "pred_table.m"
  MR_Word hlds__pred_table__NeedQual_10,
#line 892 "pred_table.m"
  MR_Word hlds__pred_table__MaybeQualInfo_11,
#line 892 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_12,
#line 892 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_40,
#line 892 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_41);

#line 847 "pred_table.m"
static void MR_CALL 
hlds__pred_table__reinsert_for_restrict_6_p_0(
#line 847 "pred_table.m"
  MR_Word hlds__pred_table__PartialQualInfo_7,
#line 847 "pred_table.m"
  MR_Word hlds__pred_table__Preds_8,
#line 847 "pred_table.m"
  MR_Word hlds__pred_table__AccessibilityTable_9,
#line 847 "pred_table.m"
  MR_Word hlds__pred_table__PredId_10,
#line 847 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_19,
#line 847 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_20);

#line 767 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__pred_id_matches_module_3_p_0(
#line 767 "pred_table.m"
  MR_Word hlds__pred_table__Preds_4,
#line 767 "pred_table.m"
  MR_Word hlds__pred_table__ModuleName_5,
#line 767 "pred_table.m"
  MR_Word hlds__pred_table__PredId_6);

#line 765 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0_1(
#line 765 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 765 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1);

#line 677 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0(
#line 677 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_6,
#line 677 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_7,
#line 677 "pred_table.m"
  MR_Word hlds__pred_table__Module_8,
#line 677 "pred_table.m"
  MR_String hlds__pred_table__FuncName_9,
#line 677 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_10);

#line 467 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_remove_from_index_10_p_0(
#line 467 "pred_table.m"
  MR_Word hlds__pred_table__Module_11,
#line 467 "pred_table.m"
  MR_String hlds__pred_table__Name_12,
#line 467 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_13,
#line 467 "pred_table.m"
  MR_Word hlds__pred_table__PredId_14,
#line 467 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_N_0_18,
#line 467 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_N_19,
#line 467 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_NA_0_20,
#line 467 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_NA_21,
#line 467 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_MNA_0_22,
#line 467 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_MNA_23);

#line 765 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0_1(
#line 765 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 765 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1);

#line 765 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0_1(
#line 765 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 765 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1);

#line 765 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_sym_4_p_0_1(
#line 765 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 765 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1);

#line 765 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0_1(
#line 765 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 765 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1);

#line 765 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_sym_4_p_0_1(
#line 765 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 765 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1);

#line 839 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_restrict_4_p_0_1(
#line 839 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 839 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 839 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 839 "pred_table.m"
  MR_Box * hlds__pred_table__wrapper_arg_3);


static /* final */ const MR_Box hlds__pred_table_scalar_common_1[14][2];

static /* final */ const MR_Box hlds__pred_table_scalar_common_2[7][3];

static /* final */ const MR_Box hlds__pred_table_scalar_common_3[1][4];

static /* final */ const MR_Box hlds__pred_table_scalar_common_4[2][9];

static /* final */ const MR_Box hlds__pred_table_scalar_common_5[1][6];




static /* final */ const MR_Box hlds__pred_table_scalar_common_1[14][2] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "You need to use an explicit module qualifier."))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__pred_table_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[2])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__pred_table_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "(Sorry, confused by earlier errors -- bailing out.)")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "\' with no modes.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "(use an explicit lambda expression instead)")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "\' with multiple modes.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: unresolved predicate overloading, matched"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "\'")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__pred_table_scalar_common_2[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
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
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__pred_table__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__pred_table__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};

static /* final */ const MR_Box hlds__pred_table_scalar_common_5[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__pred_table__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
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



#line 996 "hlds.pred_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

#line 1005 "hlds.pred_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__pred_table__type_ctor_info_name_accessibility_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0
  }
};

#line 1014 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1023 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct1 hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1031 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1040 "hlds.pred_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__pred_table__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1049 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__pred_table__type_ctor_info_name_accessibility_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0
  }
};

#line 1058 "hlds.pred_table.c"
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

#line 1079 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct1 hlds__pred_table__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1087 "hlds.pred_table.c"
static const MR_VA_TypeInfo_Struct2 hlds__pred_table____vti_pred_2builtin__type_ctor_info_int_0list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &hlds__pred_table__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1097 "hlds.pred_table.c"
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

#line 1118 "hlds.pred_table.c"
static const MR_EnumFunctorDesc hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_0 = {
  (MR_String) "is_fully_qualified",
  (MR_Integer) 0
};

#line 1124 "hlds.pred_table.c"
static const MR_EnumFunctorDesc hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_1 = {
  (MR_String) "may_be_partially_qualified",
  (MR_Integer) 1
};

#line 1130 "hlds.pred_table.c"
static const MR_EnumFunctorDescPtr hlds__pred_table__hlds__pred_table__enum_value_ordered_is_fully_qualified_0[2] = {
  &hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_0,
  &hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_1
};

#line 1136 "hlds.pred_table.c"
static const MR_EnumFunctorDescPtr hlds__pred_table__hlds__pred_table__enum_name_ordered_is_fully_qualified_0[2] = {
  &hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_0,
  &hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_1
};

#line 1142 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_is_fully_qualified_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1148 "hlds.pred_table.c"
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

#line 1169 "hlds.pred_table.c"
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

#line 1184 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_mode_no_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1189 "hlds.pred_table.c"
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

#line 1204 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_mode_no_0_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_0
};

#line 1209 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_mode_no_0_1[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_1
};

#line 1214 "hlds.pred_table.c"
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

#line 1228 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_mode_no_0[2] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_1,
  &hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_0
};

#line 1234 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_mode_no_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1240 "hlds.pred_table.c"
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

#line 1261 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__pred_table__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1270 "hlds.pred_table.c"
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
    (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1291 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_name_accessibility_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1297 "hlds.pred_table.c"
static const MR_ConstString hlds__pred_table__hlds__pred_table__field_names_name_accessibility_0_0[2] = {
  (MR_String) "accessible_by_unqualifed_name",
  (MR_String) "accessible_by_partially_qualified_names"
};

#line 1303 "hlds.pred_table.c"
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

#line 1318 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_name_accessibility_0_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_name_accessibility_0_0
};

#line 1323 "hlds.pred_table.c"
static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_name_accessibility_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__pred_table__hlds__pred_table__du_stag_ordered_name_accessibility_0_0
  }
};

#line 1332 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_name_accessibility_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_name_accessibility_0_0
};

#line 1337 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_name_accessibility_0[1] = {
  (MR_Integer) 0
};

#line 1342 "hlds.pred_table.c"
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

#line 1363 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_name_arity_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1369 "hlds.pred_table.c"
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

#line 1384 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_name_arity_0_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_name_arity_0_0
};

#line 1389 "hlds.pred_table.c"
static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_name_arity_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__pred_table__hlds__pred_table__du_stag_ordered_name_arity_0_0
  }
};

#line 1398 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_name_arity_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_name_arity_0_0
};

#line 1403 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_name_arity_0[1] = {
  (MR_Integer) 0
};

#line 1408 "hlds.pred_table.c"
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

#line 1429 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__pred_table__type_ctor_info_name_arity_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0,
    (MR_TypeInfo) &hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1438 "hlds.pred_table.c"
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

#line 1459 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1468 "hlds.pred_table.c"
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

#line 1489 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

#line 1498 "hlds.pred_table.c"
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

#line 1519 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_predicate_table_0_0[11] = {
  (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__pred_table__type_ctor_info_name_accessibility_0,
  (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2hlds__pred_table__type_ctor_info_name_arity_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2hlds__pred_table__type_ctor_info_name_arity_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
};

#line 1534 "hlds.pred_table.c"
static const MR_ConstString hlds__pred_table__hlds__pred_table__field_names_predicate_table_0_0[11] = {
  (MR_String) "preds",
  (MR_String) "next_pred_id",
  (MR_String) "old_pred_ids",
  (MR_String) "new_rev_pred_ids",
  (MR_String) "accessibility_table",
  (MR_String) "pred_name_index",
  (MR_String) "pred_name_arity_index",
  (MR_String) "pred_module_name_arity_index",
  (MR_String) "func_name_index",
  (MR_String) "func_name_arity_index",
  (MR_String) "func_module_name_arity_index"
};

#line 1549 "hlds.pred_table.c"
static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_predicate_table_0_0 = {
  (MR_String) "predicate_table",
  (MR_Integer) 11,
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

#line 1564 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_predicate_table_0_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_predicate_table_0_0
};

#line 1569 "hlds.pred_table.c"
static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_predicate_table_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__pred_table__hlds__pred_table__du_stag_ordered_predicate_table_0_0
  }
};

#line 1578 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_predicate_table_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_predicate_table_0_0
};

#line 1583 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_predicate_table_0[1] = {
  (MR_Integer) 0
};

#line 1588 "hlds.pred_table.c"
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

#line 1609 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____accessibility_table_0_0_10001(
#line 1612 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1614 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1616 "hlds.pred_table.c"
{
#line 1618 "hlds.pred_table.c"
  {
#line 1620 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1623 "hlds.pred_table.c"
    {
#line 1625 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____accessibility_table_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1628 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1630 "hlds.pred_table.c"
  }
#line 1632 "hlds.pred_table.c"
}

#line 1635 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____accessibility_table_0_0_10001(
#line 1638 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 1640 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 1642 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 1644 "hlds.pred_table.c"
{
#line 1646 "hlds.pred_table.c"
  {
#line 1648 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 1651 "hlds.pred_table.c"
    {
#line 1653 "hlds.pred_table.c"
      hlds__pred_table____Compare____accessibility_table_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 1656 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 1658 "hlds.pred_table.c"
  }
#line 1660 "hlds.pred_table.c"
}

#line 1663 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____constraint_search_0_0_10001(
#line 1666 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1668 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1670 "hlds.pred_table.c"
{
#line 1672 "hlds.pred_table.c"
  {
#line 1674 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1677 "hlds.pred_table.c"
    {
#line 1679 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____constraint_search_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1682 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1684 "hlds.pred_table.c"
  }
#line 1686 "hlds.pred_table.c"
}

#line 1689 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____constraint_search_0_0_10001(
#line 1692 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 1694 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 1696 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 1698 "hlds.pred_table.c"
{
#line 1700 "hlds.pred_table.c"
  {
#line 1702 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 1705 "hlds.pred_table.c"
    {
#line 1707 "hlds.pred_table.c"
      hlds__pred_table____Compare____constraint_search_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 1710 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 1712 "hlds.pred_table.c"
  }
#line 1714 "hlds.pred_table.c"
}

#line 1717 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____is_fully_qualified_0_0_10001(
#line 1720 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1722 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1724 "hlds.pred_table.c"
{
#line 1726 "hlds.pred_table.c"
  {
#line 1728 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1731 "hlds.pred_table.c"
    {
#line 1733 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____is_fully_qualified_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1736 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1738 "hlds.pred_table.c"
  }
#line 1740 "hlds.pred_table.c"
}

#line 1743 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____is_fully_qualified_0_0_10001(
#line 1746 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 1748 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 1750 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 1752 "hlds.pred_table.c"
{
#line 1754 "hlds.pred_table.c"
  {
#line 1756 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 1759 "hlds.pred_table.c"
    {
#line 1761 "hlds.pred_table.c"
      hlds__pred_table____Compare____is_fully_qualified_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 1764 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 1766 "hlds.pred_table.c"
  }
#line 1768 "hlds.pred_table.c"
}

#line 1771 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____mode_no_0_0_10001(
#line 1774 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1776 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1778 "hlds.pred_table.c"
{
#line 1780 "hlds.pred_table.c"
  {
#line 1782 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1785 "hlds.pred_table.c"
    {
#line 1787 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____mode_no_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1790 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1792 "hlds.pred_table.c"
  }
#line 1794 "hlds.pred_table.c"
}

#line 1797 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____mode_no_0_0_10001(
#line 1800 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 1802 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 1804 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 1806 "hlds.pred_table.c"
{
#line 1808 "hlds.pred_table.c"
  {
#line 1810 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 1813 "hlds.pred_table.c"
    {
#line 1815 "hlds.pred_table.c"
      hlds__pred_table____Compare____mode_no_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 1818 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 1820 "hlds.pred_table.c"
  }
#line 1822 "hlds.pred_table.c"
}

#line 1825 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____module_name_arity_index_0_0_10001(
#line 1828 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1830 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1832 "hlds.pred_table.c"
{
#line 1834 "hlds.pred_table.c"
  {
#line 1836 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1839 "hlds.pred_table.c"
    {
#line 1841 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____module_name_arity_index_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1844 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1846 "hlds.pred_table.c"
  }
#line 1848 "hlds.pred_table.c"
}

#line 1851 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____module_name_arity_index_0_0_10001(
#line 1854 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 1856 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 1858 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 1860 "hlds.pred_table.c"
{
#line 1862 "hlds.pred_table.c"
  {
#line 1864 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 1867 "hlds.pred_table.c"
    {
#line 1869 "hlds.pred_table.c"
      hlds__pred_table____Compare____module_name_arity_index_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 1872 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 1874 "hlds.pred_table.c"
  }
#line 1876 "hlds.pred_table.c"
}

#line 1879 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_accessibility_0_0_10001(
#line 1882 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1884 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1886 "hlds.pred_table.c"
{
#line 1888 "hlds.pred_table.c"
  {
#line 1890 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1893 "hlds.pred_table.c"
    {
#line 1895 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____name_accessibility_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1898 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1900 "hlds.pred_table.c"
  }
#line 1902 "hlds.pred_table.c"
}

#line 1905 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_accessibility_0_0_10001(
#line 1908 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 1910 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 1912 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 1914 "hlds.pred_table.c"
{
#line 1916 "hlds.pred_table.c"
  {
#line 1918 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 1921 "hlds.pred_table.c"
    {
#line 1923 "hlds.pred_table.c"
      hlds__pred_table____Compare____name_accessibility_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 1926 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 1928 "hlds.pred_table.c"
  }
#line 1930 "hlds.pred_table.c"
}

#line 1933 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_0_0_10001(
#line 1936 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1938 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1940 "hlds.pred_table.c"
{
#line 1942 "hlds.pred_table.c"
  {
#line 1944 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1947 "hlds.pred_table.c"
    {
#line 1949 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____name_arity_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1952 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1954 "hlds.pred_table.c"
  }
#line 1956 "hlds.pred_table.c"
}

#line 1959 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_0_0_10001(
#line 1962 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 1964 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 1966 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 1968 "hlds.pred_table.c"
{
#line 1970 "hlds.pred_table.c"
  {
#line 1972 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 1975 "hlds.pred_table.c"
    {
#line 1977 "hlds.pred_table.c"
      hlds__pred_table____Compare____name_arity_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 1980 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 1982 "hlds.pred_table.c"
  }
#line 1984 "hlds.pred_table.c"
}

#line 1987 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_index_0_0_10001(
#line 1990 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1992 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1994 "hlds.pred_table.c"
{
#line 1996 "hlds.pred_table.c"
  {
#line 1998 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 2001 "hlds.pred_table.c"
    {
#line 2003 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____name_arity_index_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 2006 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 2008 "hlds.pred_table.c"
  }
#line 2010 "hlds.pred_table.c"
}

#line 2013 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_index_0_0_10001(
#line 2016 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 2018 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 2020 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 2022 "hlds.pred_table.c"
{
#line 2024 "hlds.pred_table.c"
  {
#line 2026 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 2029 "hlds.pred_table.c"
    {
#line 2031 "hlds.pred_table.c"
      hlds__pred_table____Compare____name_arity_index_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 2034 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 2036 "hlds.pred_table.c"
  }
#line 2038 "hlds.pred_table.c"
}

#line 2041 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_index_0_0_10001(
#line 2044 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 2046 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 2048 "hlds.pred_table.c"
{
#line 2050 "hlds.pred_table.c"
  {
#line 2052 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 2055 "hlds.pred_table.c"
    {
#line 2057 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____name_index_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 2060 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 2062 "hlds.pred_table.c"
  }
#line 2064 "hlds.pred_table.c"
}

#line 2067 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_index_0_0_10001(
#line 2070 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 2072 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 2074 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 2076 "hlds.pred_table.c"
{
#line 2078 "hlds.pred_table.c"
  {
#line 2080 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 2083 "hlds.pred_table.c"
    {
#line 2085 "hlds.pred_table.c"
      hlds__pred_table____Compare____name_index_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 2088 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 2090 "hlds.pred_table.c"
  }
#line 2092 "hlds.pred_table.c"
}

#line 2095 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____pred_table_0_0_10001(
#line 2098 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 2100 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 2102 "hlds.pred_table.c"
{
#line 2104 "hlds.pred_table.c"
  {
#line 2106 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 2109 "hlds.pred_table.c"
    {
#line 2111 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____pred_table_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 2114 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 2116 "hlds.pred_table.c"
  }
#line 2118 "hlds.pred_table.c"
}

#line 2121 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____pred_table_0_0_10001(
#line 2124 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 2126 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 2128 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 2130 "hlds.pred_table.c"
{
#line 2132 "hlds.pred_table.c"
  {
#line 2134 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 2137 "hlds.pred_table.c"
    {
#line 2139 "hlds.pred_table.c"
      hlds__pred_table____Compare____pred_table_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 2142 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 2144 "hlds.pred_table.c"
  }
#line 2146 "hlds.pred_table.c"
}

#line 2149 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____predicate_table_0_0_10001(
#line 2152 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 2154 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 2156 "hlds.pred_table.c"
{
#line 2158 "hlds.pred_table.c"
  {
#line 2160 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 2163 "hlds.pred_table.c"
    {
#line 2165 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____predicate_table_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 2168 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 2170 "hlds.pred_table.c"
  }
#line 2172 "hlds.pred_table.c"
}

#line 2175 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____predicate_table_0_0_10001(
#line 2178 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 2180 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 2182 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 2184 "hlds.pred_table.c"
{
#line 2186 "hlds.pred_table.c"
  {
#line 2188 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 2191 "hlds.pred_table.c"
    {
#line 2193 "hlds.pred_table.c"
      hlds__pred_table____Compare____predicate_table_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 2196 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 2198 "hlds.pred_table.c"
  }
#line 2200 "hlds.pred_table.c"
}

#line 319 "pred_table.m"
void MR_CALL 
hlds__pred_table____Compare____predicate_table_0_0(
#line 319 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 319 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 319 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 319 "pred_table.m"
{
#line 319 "pred_table.m"
  {
#line 319 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 319 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_36 = (MR_Integer) hlds__pred_table__HeadVar__2_2;
#line 319 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_37 = (MR_Integer) hlds__pred_table__HeadVar__3_3;

#line 319 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_36 == hlds__pred_table__CastY_37);
#line 319 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 2227 "hlds.pred_table.c"
      *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 0;
#line 319 "pred_table.m"
    else
#line 319 "pred_table.m"
      {
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 2)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 3)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 4)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 5)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 6)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 7)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 8)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 9)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 10)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 0)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 1)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 2)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 3)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 4)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 5)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 6)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 7)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 8)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 9)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 10)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_26_26;

#line 319 "pred_table.m"
        {
#line 319 "pred_table.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[6], &hlds__pred_table__V_26_26, ((MR_Box) (hlds__pred_table__V_4_4)), ((MR_Box) (hlds__pred_table__V_15_15)));
        }
#line 2285 "hlds.pred_table.c"
        hlds__pred_table__succeeded = (hlds__pred_table__V_26_26 == (MR_Integer) 0);
#line 319 "pred_table.m"
        hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 319 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 319 "pred_table.m"
          *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_26_26;
#line 319 "pred_table.m"
        else
#line 319 "pred_table.m"
          {
#line 319 "pred_table.m"
            MR_Word hlds__pred_table__V_27_27;

#line 319 "pred_table.m"
            {
#line 319 "pred_table.m"
              hlds__hlds_pred____Compare____pred_id_0_0(&hlds__pred_table__V_27_27, hlds__pred_table__V_5_5, hlds__pred_table__V_16_16);
            }
#line 2305 "hlds.pred_table.c"
            hlds__pred_table__succeeded = (hlds__pred_table__V_27_27 == (MR_Integer) 0);
#line 319 "pred_table.m"
            hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 319 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 319 "pred_table.m"
              *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_27_27;
#line 319 "pred_table.m"
            else
#line 319 "pred_table.m"
              {
#line 319 "pred_table.m"
                MR_Word hlds__pred_table__V_28_28;

#line 319 "pred_table.m"
                {
#line 319 "pred_table.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_1[0], &hlds__pred_table__V_28_28, ((MR_Box) (hlds__pred_table__V_6_6)), ((MR_Box) (hlds__pred_table__V_17_17)));
                }
#line 2325 "hlds.pred_table.c"
                hlds__pred_table__succeeded = (hlds__pred_table__V_28_28 == (MR_Integer) 0);
#line 319 "pred_table.m"
                hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 319 "pred_table.m"
                if (hlds__pred_table__succeeded)
#line 319 "pred_table.m"
                  *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_28_28;
#line 319 "pred_table.m"
                else
#line 319 "pred_table.m"
                  {
#line 319 "pred_table.m"
                    MR_Word hlds__pred_table__V_29_29;

#line 319 "pred_table.m"
                    {
#line 319 "pred_table.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_1[0], &hlds__pred_table__V_29_29, ((MR_Box) (hlds__pred_table__V_7_7)), ((MR_Box) (hlds__pred_table__V_18_18)));
                    }
#line 2345 "hlds.pred_table.c"
                    hlds__pred_table__succeeded = (hlds__pred_table__V_29_29 == (MR_Integer) 0);
#line 319 "pred_table.m"
                    hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 319 "pred_table.m"
                    if (hlds__pred_table__succeeded)
#line 319 "pred_table.m"
                      *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_29_29;
#line 319 "pred_table.m"
                    else
#line 319 "pred_table.m"
                      {
#line 319 "pred_table.m"
                        MR_Word hlds__pred_table__V_30_30;

#line 319 "pred_table.m"
                        {
#line 319 "pred_table.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[3], &hlds__pred_table__V_30_30, ((MR_Box) (hlds__pred_table__V_8_8)), ((MR_Box) (hlds__pred_table__V_19_19)));
                        }
#line 2365 "hlds.pred_table.c"
                        hlds__pred_table__succeeded = (hlds__pred_table__V_30_30 == (MR_Integer) 0);
#line 319 "pred_table.m"
                        hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 319 "pred_table.m"
                        if (hlds__pred_table__succeeded)
#line 319 "pred_table.m"
                          *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_30_30;
#line 319 "pred_table.m"
                        else
#line 319 "pred_table.m"
                          {
#line 319 "pred_table.m"
                            MR_Word hlds__pred_table__V_31_31;

#line 319 "pred_table.m"
                            {
#line 319 "pred_table.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[5], &hlds__pred_table__V_31_31, ((MR_Box) (hlds__pred_table__V_9_9)), ((MR_Box) (hlds__pred_table__V_20_20)));
                            }
#line 2385 "hlds.pred_table.c"
                            hlds__pred_table__succeeded = (hlds__pred_table__V_31_31 == (MR_Integer) 0);
#line 319 "pred_table.m"
                            hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 319 "pred_table.m"
                            if (hlds__pred_table__succeeded)
#line 319 "pred_table.m"
                              *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_31_31;
#line 319 "pred_table.m"
                            else
#line 319 "pred_table.m"
                              {
#line 319 "pred_table.m"
                                MR_Word hlds__pred_table__V_32_32;

#line 319 "pred_table.m"
                                {
#line 319 "pred_table.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[4], &hlds__pred_table__V_32_32, ((MR_Box) (hlds__pred_table__V_10_10)), ((MR_Box) (hlds__pred_table__V_21_21)));
                                }
#line 2405 "hlds.pred_table.c"
                                hlds__pred_table__succeeded = (hlds__pred_table__V_32_32 == (MR_Integer) 0);
#line 319 "pred_table.m"
                                hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 319 "pred_table.m"
                                if (hlds__pred_table__succeeded)
#line 319 "pred_table.m"
                                  *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_32_32;
#line 319 "pred_table.m"
                                else
#line 319 "pred_table.m"
                                  {
#line 319 "pred_table.m"
                                    MR_Word hlds__pred_table__V_33_33;

#line 319 "pred_table.m"
                                    {
#line 319 "pred_table.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[2], &hlds__pred_table__V_33_33, ((MR_Box) (hlds__pred_table__V_11_11)), ((MR_Box) (hlds__pred_table__V_22_22)));
                                    }
#line 2425 "hlds.pred_table.c"
                                    hlds__pred_table__succeeded = (hlds__pred_table__V_33_33 == (MR_Integer) 0);
#line 319 "pred_table.m"
                                    hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 319 "pred_table.m"
                                    if (hlds__pred_table__succeeded)
#line 319 "pred_table.m"
                                      *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_33_33;
#line 319 "pred_table.m"
                                    else
#line 319 "pred_table.m"
                                      {
#line 319 "pred_table.m"
                                        MR_Word hlds__pred_table__V_34_34;

#line 319 "pred_table.m"
                                        {
#line 319 "pred_table.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[5], &hlds__pred_table__V_34_34, ((MR_Box) (hlds__pred_table__V_12_12)), ((MR_Box) (hlds__pred_table__V_23_23)));
                                        }
#line 2445 "hlds.pred_table.c"
                                        hlds__pred_table__succeeded = (hlds__pred_table__V_34_34 == (MR_Integer) 0);
#line 319 "pred_table.m"
                                        hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 319 "pred_table.m"
                                        if (hlds__pred_table__succeeded)
#line 319 "pred_table.m"
                                          *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_34_34;
#line 319 "pred_table.m"
                                        else
#line 319 "pred_table.m"
                                          {
#line 319 "pred_table.m"
                                            MR_Word hlds__pred_table__V_35_35;

#line 319 "pred_table.m"
                                            {
#line 319 "pred_table.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[4], &hlds__pred_table__V_35_35, ((MR_Box) (hlds__pred_table__V_13_13)), ((MR_Box) (hlds__pred_table__V_24_24)));
                                            }
#line 2465 "hlds.pred_table.c"
                                            hlds__pred_table__succeeded = (hlds__pred_table__V_35_35 == (MR_Integer) 0);
#line 319 "pred_table.m"
                                            hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 319 "pred_table.m"
                                            if (hlds__pred_table__succeeded)
#line 319 "pred_table.m"
                                              *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_35_35;
#line 319 "pred_table.m"
                                            else
#line 319 "pred_table.m"
                                              {
#line 319 "pred_table.m"
                                                {
#line 319 "pred_table.m"
                                                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[2], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__V_14_14)), ((MR_Box) (hlds__pred_table__V_25_25)));
#line 319 "pred_table.m"
                                                  return;
                                                }
#line 319 "pred_table.m"
                                              }
#line 319 "pred_table.m"
                                          }
#line 319 "pred_table.m"
                                      }
#line 319 "pred_table.m"
                                  }
#line 319 "pred_table.m"
                              }
#line 319 "pred_table.m"
                          }
#line 319 "pred_table.m"
                      }
#line 319 "pred_table.m"
                  }
#line 319 "pred_table.m"
              }
#line 319 "pred_table.m"
          }
#line 319 "pred_table.m"
      }
#line 319 "pred_table.m"
  }
#line 319 "pred_table.m"
}

#line 319 "pred_table.m"
MR_bool MR_CALL 
hlds__pred_table____Unify____predicate_table_0_0(
#line 319 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 319 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 319 "pred_table.m"
{
#line 319 "pred_table.m"
  {
#line 319 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 319 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_25 = (MR_Integer) hlds__pred_table__HeadVar__1_1;
#line 319 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_26 = (MR_Integer) hlds__pred_table__HeadVar__2_2;

#line 319 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_25 == hlds__pred_table__CastY_26);
#line 319 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 319 "pred_table.m"
      hlds__pred_table__succeeded = MR_TRUE;
#line 319 "pred_table.m"
    else
#line 319 "pred_table.m"
      {
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_29_29;
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_30_30;
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_31_31;
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_32_32;
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_33_33;
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_34_34;
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_35_35;
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_36_36;
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_37_37;
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 0)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 1)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 2)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 3)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 4)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 5)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 6)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 7)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 8)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 9)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 10)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 2)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 3)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 4)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 5)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 6)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 7)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 8)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 9)));
#line 319 "pred_table.m"
        MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 10)));

#line 2602 "hlds.pred_table.c"
        {
#line 2604 "hlds.pred_table.c"
          hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pred_table_scalar_common_2[6], ((MR_Box) (hlds__pred_table__V_3_3)), ((MR_Box) (hlds__pred_table__V_14_14)));
        }
#line 319 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 319 "pred_table.m"
          {
#line 2611 "hlds.pred_table.c"
            {
#line 2613 "hlds.pred_table.c"
              hlds__pred_table__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__pred_table__V_4_4, hlds__pred_table__V_15_15);
            }
#line 319 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 319 "pred_table.m"
              {
#line 2620 "hlds.pred_table.c"
                hlds__pred_table__TypeInfo_29_29 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
#line 2622 "hlds.pred_table.c"
                {
#line 2624 "hlds.pred_table.c"
                  hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_29_29, ((MR_Box) (hlds__pred_table__V_5_5)), ((MR_Box) (hlds__pred_table__V_16_16)));
                }
#line 319 "pred_table.m"
                if (hlds__pred_table__succeeded)
#line 319 "pred_table.m"
                  {
#line 2631 "hlds.pred_table.c"
                    hlds__pred_table__TypeInfo_30_30 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
#line 2633 "hlds.pred_table.c"
                    {
#line 2635 "hlds.pred_table.c"
                      hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_30_30, ((MR_Box) (hlds__pred_table__V_6_6)), ((MR_Box) (hlds__pred_table__V_17_17)));
                    }
#line 319 "pred_table.m"
                    if (hlds__pred_table__succeeded)
#line 319 "pred_table.m"
                      {
#line 2642 "hlds.pred_table.c"
                        hlds__pred_table__TypeInfo_31_31 = (MR_Word) &hlds__pred_table_scalar_common_2[3];
#line 2644 "hlds.pred_table.c"
                        {
#line 2646 "hlds.pred_table.c"
                          hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_31_31, ((MR_Box) (hlds__pred_table__V_7_7)), ((MR_Box) (hlds__pred_table__V_18_18)));
                        }
#line 319 "pred_table.m"
                        if (hlds__pred_table__succeeded)
#line 319 "pred_table.m"
                          {
#line 2653 "hlds.pred_table.c"
                            hlds__pred_table__TypeInfo_32_32 = (MR_Word) &hlds__pred_table_scalar_common_2[5];
#line 2655 "hlds.pred_table.c"
                            {
#line 2657 "hlds.pred_table.c"
                              hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_32_32, ((MR_Box) (hlds__pred_table__V_8_8)), ((MR_Box) (hlds__pred_table__V_19_19)));
                            }
#line 319 "pred_table.m"
                            if (hlds__pred_table__succeeded)
#line 319 "pred_table.m"
                              {
#line 2664 "hlds.pred_table.c"
                                hlds__pred_table__TypeInfo_33_33 = (MR_Word) &hlds__pred_table_scalar_common_2[4];
#line 2666 "hlds.pred_table.c"
                                {
#line 2668 "hlds.pred_table.c"
                                  hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_33_33, ((MR_Box) (hlds__pred_table__V_9_9)), ((MR_Box) (hlds__pred_table__V_20_20)));
                                }
#line 319 "pred_table.m"
                                if (hlds__pred_table__succeeded)
#line 319 "pred_table.m"
                                  {
#line 2675 "hlds.pred_table.c"
                                    hlds__pred_table__TypeInfo_34_34 = (MR_Word) &hlds__pred_table_scalar_common_2[2];
#line 2677 "hlds.pred_table.c"
                                    {
#line 2679 "hlds.pred_table.c"
                                      hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_34_34, ((MR_Box) (hlds__pred_table__V_10_10)), ((MR_Box) (hlds__pred_table__V_21_21)));
                                    }
#line 319 "pred_table.m"
                                    if (hlds__pred_table__succeeded)
#line 319 "pred_table.m"
                                      {
#line 2686 "hlds.pred_table.c"
                                        hlds__pred_table__TypeInfo_35_35 = (MR_Word) &hlds__pred_table_scalar_common_2[5];
#line 2688 "hlds.pred_table.c"
                                        {
#line 2690 "hlds.pred_table.c"
                                          hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_35_35, ((MR_Box) (hlds__pred_table__V_11_11)), ((MR_Box) (hlds__pred_table__V_22_22)));
                                        }
#line 319 "pred_table.m"
                                        if (hlds__pred_table__succeeded)
#line 319 "pred_table.m"
                                          {
#line 2697 "hlds.pred_table.c"
                                            hlds__pred_table__TypeInfo_36_36 = (MR_Word) &hlds__pred_table_scalar_common_2[4];
#line 2699 "hlds.pred_table.c"
                                            {
#line 2701 "hlds.pred_table.c"
                                              hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_36_36, ((MR_Box) (hlds__pred_table__V_12_12)), ((MR_Box) (hlds__pred_table__V_23_23)));
                                            }
#line 319 "pred_table.m"
                                            if (hlds__pred_table__succeeded)
#line 319 "pred_table.m"
                                              {
#line 2708 "hlds.pred_table.c"
                                                hlds__pred_table__TypeInfo_37_37 = (MR_Word) &hlds__pred_table_scalar_common_2[2];
#line 2710 "hlds.pred_table.c"
                                                {
#line 2712 "hlds.pred_table.c"
                                                  return hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_37_37, ((MR_Box) (hlds__pred_table__V_13_13)), ((MR_Box) (hlds__pred_table__V_24_24)));
                                                }
#line 319 "pred_table.m"
                                              }
#line 319 "pred_table.m"
                                          }
#line 319 "pred_table.m"
                                      }
#line 319 "pred_table.m"
                                  }
#line 319 "pred_table.m"
                              }
#line 319 "pred_table.m"
                          }
#line 319 "pred_table.m"
                      }
#line 319 "pred_table.m"
                  }
#line 319 "pred_table.m"
              }
#line 319 "pred_table.m"
          }
#line 319 "pred_table.m"
      }
#line 319 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 319 "pred_table.m"
  }
#line 319 "pred_table.m"
}

#line 50 "pred_table.m"
void MR_CALL 
hlds__pred_table____Compare____pred_table_0_0(
#line 50 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 50 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 50 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 50 "pred_table.m"
{
#line 50 "pred_table.m"
  {
#line 50 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 50 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_4 = hlds__pred_table__HeadVar__2_2;
#line 50 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_5 = hlds__pred_table__HeadVar__3_3;

#line 50 "pred_table.m"
    {
#line 50 "pred_table.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[6], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__Cast_HeadVar1_4)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_5)));
#line 50 "pred_table.m"
      return;
    }
#line 50 "pred_table.m"
  }
#line 50 "pred_table.m"
}

#line 50 "pred_table.m"
MR_bool MR_CALL 
hlds__pred_table____Unify____pred_table_0_0(
#line 50 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 50 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 50 "pred_table.m"
{
#line 50 "pred_table.m"
  {
#line 50 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 50 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_3 = hlds__pred_table__HeadVar__1_1;
#line 50 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_4 = hlds__pred_table__HeadVar__2_2;

#line 50 "pred_table.m"
    {
#line 50 "pred_table.m"
      return hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pred_table_scalar_common_2[6], ((MR_Box) (hlds__pred_table__Cast_HeadVar1_3)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_4)));
    }
#line 50 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 50 "pred_table.m"
  }
#line 50 "pred_table.m"
}

#line 362 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_index_0_0(
#line 362 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 362 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 362 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 362 "pred_table.m"
{
#line 362 "pred_table.m"
  {
#line 362 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 362 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_4 = hlds__pred_table__HeadVar__2_2;
#line 362 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_5 = hlds__pred_table__HeadVar__3_3;

#line 362 "pred_table.m"
    {
#line 362 "pred_table.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[5], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__Cast_HeadVar1_4)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_5)));
#line 362 "pred_table.m"
      return;
    }
#line 362 "pred_table.m"
  }
#line 362 "pred_table.m"
}

#line 362 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_index_0_0(
#line 362 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 362 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 362 "pred_table.m"
{
#line 362 "pred_table.m"
  {
#line 362 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 362 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_3 = hlds__pred_table__HeadVar__1_1;
#line 362 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_4 = hlds__pred_table__HeadVar__2_2;

#line 362 "pred_table.m"
    {
#line 362 "pred_table.m"
      return hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pred_table_scalar_common_2[5], ((MR_Box) (hlds__pred_table__Cast_HeadVar1_3)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_4)));
    }
#line 362 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 362 "pred_table.m"
  }
#line 362 "pred_table.m"
}

#line 364 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_index_0_0(
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
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[4], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__Cast_HeadVar1_4)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_5)));
#line 364 "pred_table.m"
      return;
    }
#line 364 "pred_table.m"
  }
#line 364 "pred_table.m"
}

#line 364 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_index_0_0(
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
      return hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pred_table_scalar_common_2[4], ((MR_Box) (hlds__pred_table__Cast_HeadVar1_3)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_4)));
    }
#line 364 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 364 "pred_table.m"
  }
#line 364 "pred_table.m"
}

#line 365 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_0_0(
#line 365 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 365 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 365 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 365 "pred_table.m"
{
#line 365 "pred_table.m"
  {
#line 365 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 365 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_9 = (MR_Integer) hlds__pred_table__HeadVar__2_2;
#line 365 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_10 = (MR_Integer) hlds__pred_table__HeadVar__3_3;

#line 365 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_9 == hlds__pred_table__CastY_10);
#line 365 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 2954 "hlds.pred_table.c"
      *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 0;
#line 365 "pred_table.m"
    else
#line 365 "pred_table.m"
      {
#line 365 "pred_table.m"
        MR_String hlds__pred_table__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 365 "pred_table.m"
        MR_Integer hlds__pred_table__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));
#line 365 "pred_table.m"
        MR_String hlds__pred_table__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 0)));
#line 365 "pred_table.m"
        MR_Integer hlds__pred_table__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 1)));
#line 365 "pred_table.m"
        MR_Word hlds__pred_table__V_8_8;

#line 365 "pred_table.m"
        {
#line 365 "pred_table.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&hlds__pred_table__V_8_8, hlds__pred_table__V_4_4, hlds__pred_table__V_6_6);
        }
#line 2976 "hlds.pred_table.c"
        hlds__pred_table__succeeded = (hlds__pred_table__V_8_8 == (MR_Integer) 0);
#line 365 "pred_table.m"
        hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 365 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 365 "pred_table.m"
          *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_8_8;
#line 365 "pred_table.m"
        else
#line 365 "pred_table.m"
          {
#line 365 "pred_table.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(hlds__pred_table__HeadVar__1_1, hlds__pred_table__V_5_5, hlds__pred_table__V_7_7);
#line 365 "pred_table.m"
            return;
          }
#line 365 "pred_table.m"
      }
#line 365 "pred_table.m"
  }
#line 365 "pred_table.m"
}

#line 365 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_0_0(
#line 365 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 365 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 365 "pred_table.m"
{
#line 365 "pred_table.m"
  {
#line 365 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 365 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_7 = (MR_Integer) hlds__pred_table__HeadVar__1_1;
#line 365 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_8 = (MR_Integer) hlds__pred_table__HeadVar__2_2;

#line 365 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_7 == hlds__pred_table__CastY_8);
#line 365 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 365 "pred_table.m"
      hlds__pred_table__succeeded = MR_TRUE;
#line 365 "pred_table.m"
    else
#line 365 "pred_table.m"
      {
#line 365 "pred_table.m"
        MR_String hlds__pred_table__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 0)));
#line 365 "pred_table.m"
        MR_Integer hlds__pred_table__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 1)));
#line 365 "pred_table.m"
        MR_String hlds__pred_table__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 365 "pred_table.m"
        MR_Integer hlds__pred_table__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));

#line 3037 "hlds.pred_table.c"
        hlds__pred_table__succeeded = (strcmp(hlds__pred_table__V_3_3, hlds__pred_table__V_5_5) == 0);
#line 365 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 3041 "hlds.pred_table.c"
          hlds__pred_table__succeeded = (hlds__pred_table__V_4_4 == hlds__pred_table__V_6_6);
#line 365 "pred_table.m"
      }
#line 365 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 365 "pred_table.m"
  }
#line 365 "pred_table.m"
}

#line 352 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_accessibility_0_0(
#line 352 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 352 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 352 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 352 "pred_table.m"
{
#line 352 "pred_table.m"
  {
#line 352 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 352 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_9 = (MR_Integer) hlds__pred_table__HeadVar__2_2;
#line 352 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_10 = (MR_Integer) hlds__pred_table__HeadVar__3_3;

#line 352 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_9 == hlds__pred_table__CastY_10);
#line 352 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 3076 "hlds.pred_table.c"
      *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 0;
#line 352 "pred_table.m"
    else
#line 352 "pred_table.m"
      {
#line 352 "pred_table.m"
        MR_Word hlds__pred_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 352 "pred_table.m"
        MR_Word hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));
#line 352 "pred_table.m"
        MR_Word hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 0)));
#line 352 "pred_table.m"
        MR_Word hlds__pred_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 1)));
#line 352 "pred_table.m"
        MR_Word hlds__pred_table__V_8_8;
#line 352 "pred_table.m"
        MR_Integer hlds__pred_table__V_13_13 = (MR_Integer) hlds__pred_table__V_4_4;
#line 352 "pred_table.m"
        MR_Integer hlds__pred_table__V_14_14 = (MR_Integer) hlds__pred_table__V_6_6;

#line 352 "pred_table.m"
        {
#line 352 "pred_table.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__pred_table__V_8_8, hlds__pred_table__V_13_13, hlds__pred_table__V_14_14);
        }
#line 3102 "hlds.pred_table.c"
        hlds__pred_table__succeeded = (hlds__pred_table__V_8_8 == (MR_Integer) 0);
#line 352 "pred_table.m"
        hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 352 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 352 "pred_table.m"
          *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_8_8;
#line 352 "pred_table.m"
        else
#line 352 "pred_table.m"
          {
#line 352 "pred_table.m"
            MR_Integer hlds__pred_table__V_15_15 = (MR_Integer) hlds__pred_table__V_5_5;
#line 352 "pred_table.m"
            MR_Integer hlds__pred_table__V_16_16 = (MR_Integer) hlds__pred_table__V_7_7;

#line 352 "pred_table.m"
            {
#line 352 "pred_table.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(hlds__pred_table__HeadVar__1_1, hlds__pred_table__V_15_15, hlds__pred_table__V_16_16);
#line 352 "pred_table.m"
              return;
            }
#line 352 "pred_table.m"
          }
#line 352 "pred_table.m"
      }
#line 352 "pred_table.m"
  }
#line 352 "pred_table.m"
}

#line 352 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_accessibility_0_0(
#line 352 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 352 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 352 "pred_table.m"
{
#line 352 "pred_table.m"
  {
#line 352 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 352 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_7 = (MR_Integer) hlds__pred_table__HeadVar__1_1;
#line 352 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_8 = (MR_Integer) hlds__pred_table__HeadVar__2_2;

#line 352 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_7 == hlds__pred_table__CastY_8);
#line 352 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 352 "pred_table.m"
      hlds__pred_table__succeeded = MR_TRUE;
#line 352 "pred_table.m"
    else
#line 352 "pred_table.m"
      {
#line 352 "pred_table.m"
        MR_Word hlds__pred_table__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 0)));
#line 352 "pred_table.m"
        MR_Word hlds__pred_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 1)));
#line 352 "pred_table.m"
        MR_Word hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 352 "pred_table.m"
        MR_Word hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));

#line 3172 "hlds.pred_table.c"
        hlds__pred_table__succeeded = (hlds__pred_table__V_3_3 == hlds__pred_table__V_5_5);
#line 352 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 3176 "hlds.pred_table.c"
          hlds__pred_table__succeeded = (hlds__pred_table__V_4_4 == hlds__pred_table__V_6_6);
#line 352 "pred_table.m"
      }
#line 352 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 352 "pred_table.m"
  }
#line 352 "pred_table.m"
}

#line 371 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____module_name_arity_index_0_0(
#line 371 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 371 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 371 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 371 "pred_table.m"
{
#line 371 "pred_table.m"
  {
#line 371 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 371 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_4 = hlds__pred_table__HeadVar__2_2;
#line 371 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_5 = hlds__pred_table__HeadVar__3_3;

#line 371 "pred_table.m"
    {
#line 371 "pred_table.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[2], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__Cast_HeadVar1_4)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_5)));
#line 371 "pred_table.m"
      return;
    }
#line 371 "pred_table.m"
  }
#line 371 "pred_table.m"
}

#line 371 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____module_name_arity_index_0_0(
#line 371 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 371 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 371 "pred_table.m"
{
#line 371 "pred_table.m"
  {
#line 371 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 371 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_3 = hlds__pred_table__HeadVar__1_1;
#line 371 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_4 = hlds__pred_table__HeadVar__2_2;

#line 371 "pred_table.m"
    {
#line 371 "pred_table.m"
      return hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pred_table_scalar_common_2[2], ((MR_Box) (hlds__pred_table__Cast_HeadVar1_3)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_4)));
    }
#line 371 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 371 "pred_table.m"
  }
#line 371 "pred_table.m"
}

#line 305 "pred_table.m"
void MR_CALL 
hlds__pred_table____Compare____mode_no_0_0(
#line 305 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 305 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 305 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 305 "pred_table.m"
{
#line 305 "pred_table.m"
  {
#line 305 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 305 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_8 = (MR_Integer) hlds__pred_table__HeadVar__2_2;
#line 305 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_9 = (MR_Integer) hlds__pred_table__HeadVar__3_3;

#line 305 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_8 == hlds__pred_table__CastY_9);
#line 305 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 3273 "hlds.pred_table.c"
      *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 0;
#line 305 "pred_table.m"
    else
#line 305 "pred_table.m"
      if ((hlds__pred_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 305 "pred_table.m"
        if ((hlds__pred_table__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 305 "pred_table.m"
          *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 0;
#line 305 "pred_table.m"
        else
#line 3285 "hlds.pred_table.c"
          *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 1;
#line 305 "pred_table.m"
      else
#line 305 "pred_table.m"
        {
#line 305 "pred_table.m"
          MR_Integer hlds__pred_table__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));

#line 305 "pred_table.m"
          if ((hlds__pred_table__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3296 "hlds.pred_table.c"
            *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 2;
#line 305 "pred_table.m"
          else
#line 305 "pred_table.m"
            {
#line 305 "pred_table.m"
              MR_Integer hlds__pred_table__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__3_3, (MR_Integer) 0)));

#line 305 "pred_table.m"
              {
#line 305 "pred_table.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(hlds__pred_table__HeadVar__1_1, hlds__pred_table__V_11_11, hlds__pred_table__V_7_7);
#line 305 "pred_table.m"
                return;
              }
#line 305 "pred_table.m"
            }
#line 305 "pred_table.m"
        }
#line 305 "pred_table.m"
  }
#line 305 "pred_table.m"
}

#line 305 "pred_table.m"
MR_bool MR_CALL 
hlds__pred_table____Unify____mode_no_0_0(
#line 305 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 305 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 305 "pred_table.m"
{
#line 305 "pred_table.m"
  {
#line 305 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 305 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_7 = (MR_Integer) hlds__pred_table__HeadVar__1_1;
#line 305 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_8 = (MR_Integer) hlds__pred_table__HeadVar__2_2;

#line 305 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_7 == hlds__pred_table__CastY_8);
#line 305 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 305 "pred_table.m"
      hlds__pred_table__succeeded = MR_TRUE;
#line 305 "pred_table.m"
    else
#line 305 "pred_table.m"
      if ((hlds__pred_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 305 "pred_table.m"
        {
#line 305 "pred_table.m"
          MR_Integer hlds__pred_table__CastX_3 = (MR_Integer) hlds__pred_table__HeadVar__1_1;
#line 305 "pred_table.m"
          MR_Integer hlds__pred_table__CastY_4 = (MR_Integer) hlds__pred_table__HeadVar__2_2;

#line 305 "pred_table.m"
          hlds__pred_table__succeeded = (hlds__pred_table__CastY_4 == hlds__pred_table__CastX_3);
#line 305 "pred_table.m"
        }
#line 305 "pred_table.m"
      else
#line 305 "pred_table.m"
        {
#line 305 "pred_table.m"
          MR_Integer hlds__pred_table__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__1_1, (MR_Integer) 0)));
#line 305 "pred_table.m"
          MR_Integer hlds__pred_table__V_6_6;

#line 305 "pred_table.m"
          hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 305 "pred_table.m"
          if (hlds__pred_table__succeeded)
#line 305 "pred_table.m"
            {
#line 305 "pred_table.m"
              hlds__pred_table__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 3377 "hlds.pred_table.c"
              hlds__pred_table__succeeded = (hlds__pred_table__V_5_5 == hlds__pred_table__V_6_6);
#line 305 "pred_table.m"
            }
#line 305 "pred_table.m"
        }
#line 305 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 305 "pred_table.m"
  }
#line 305 "pred_table.m"
}

#line 170 "pred_table.m"
void MR_CALL 
hlds__pred_table____Compare____is_fully_qualified_0_0(
#line 170 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 170 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 170 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 170 "pred_table.m"
{
#line 170 "pred_table.m"
  {
#line 170 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 170 "pred_table.m"
    MR_Integer hlds__pred_table__Cast_HeadVar1_4 = (MR_Integer) hlds__pred_table__HeadVar__2_2;
#line 170 "pred_table.m"
    MR_Integer hlds__pred_table__Cast_HeadVar2_5 = (MR_Integer) hlds__pred_table__HeadVar__3_3;

#line 170 "pred_table.m"
    {
#line 170 "pred_table.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__pred_table__HeadVar__1_1, hlds__pred_table__Cast_HeadVar1_4, hlds__pred_table__Cast_HeadVar2_5);
#line 170 "pred_table.m"
      return;
    }
#line 170 "pred_table.m"
  }
#line 170 "pred_table.m"
}

#line 170 "pred_table.m"
MR_bool MR_CALL 
hlds__pred_table____Unify____is_fully_qualified_0_0(
#line 170 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_1,
#line 170 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 170 "pred_table.m"
{
#line 3431 "hlds.pred_table.c"
  {
#line 3433 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded = (hlds__pred_table__HeadVar__2_1 == hlds__pred_table__HeadVar__2_2);

#line 3436 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 3438 "hlds.pred_table.c"
  }
#line 170 "pred_table.m"
}

#line 281 "pred_table.m"
void MR_CALL 
hlds__pred_table____Compare____constraint_search_0_0(
#line 281 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 281 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 281 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 281 "pred_table.m"
{
#line 281 "pred_table.m"
  {
#line 281 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 281 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_4 = hlds__pred_table__HeadVar__2_2;
#line 281 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_5 = hlds__pred_table__HeadVar__3_3;

#line 281 "pred_table.m"
    {
#line 281 "pred_table.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_3[0], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__Cast_HeadVar1_4)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_5)));
#line 281 "pred_table.m"
      return;
    }
#line 281 "pred_table.m"
  }
#line 281 "pred_table.m"
}

#line 281 "pred_table.m"
MR_bool MR_CALL 
hlds__pred_table____Unify____constraint_search_0_0(
#line 281 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 281 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 281 "pred_table.m"
{
#line 281 "pred_table.m"
  {
#line 281 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 281 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_3 = hlds__pred_table__HeadVar__1_1;
#line 281 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_4 = hlds__pred_table__HeadVar__2_2;

#line 281 "pred_table.m"
    {
#line 281 "pred_table.m"
      return hlds__pred_table__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__pred_table__Cast_HeadVar1_3, (MR_Word) hlds__pred_table__Cast_HeadVar2_4);
    }
#line 281 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 281 "pred_table.m"
  }
#line 281 "pred_table.m"
}

#line 350 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____accessibility_table_0_0(
#line 350 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 350 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 350 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 350 "pred_table.m"
{
#line 350 "pred_table.m"
  {
#line 350 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 350 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_4 = hlds__pred_table__HeadVar__2_2;
#line 350 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_5 = hlds__pred_table__HeadVar__3_3;

#line 350 "pred_table.m"
    {
#line 350 "pred_table.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[3], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__Cast_HeadVar1_4)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_5)));
#line 350 "pred_table.m"
      return;
    }
#line 350 "pred_table.m"
  }
#line 350 "pred_table.m"
}

#line 350 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____accessibility_table_0_0(
#line 350 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 350 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 350 "pred_table.m"
{
#line 350 "pred_table.m"
  {
#line 350 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 350 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_3 = hlds__pred_table__HeadVar__1_1;
#line 350 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_4 = hlds__pred_table__HeadVar__2_2;

#line 350 "pred_table.m"
    {
#line 350 "pred_table.m"
      return hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pred_table_scalar_common_2[3], ((MR_Box) (hlds__pred_table__Cast_HeadVar1_3)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_4)));
    }
#line 350 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 350 "pred_table.m"
  }
#line 350 "pred_table.m"
}

#line 1109 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__univ_constraints_match_2_p_0(
#line 1109 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 1109 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 1109 "pred_table.m"
{
#line 1112 "pred_table.m"
  while (MR_TRUE)
#line 1112 "pred_table.m"
    {
#line 1112 "pred_table.m"
      /* tailcall optimized into a loop */
#line 1112 "pred_table.m"
      {
#line 1112 "pred_table.m"
        MR_bool hlds__pred_table__succeeded;

#line 1112 "pred_table.m"
        if ((hlds__pred_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1112 "pred_table.m"
          hlds__pred_table__succeeded = (hlds__pred_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1112 "pred_table.m"
        else
#line 1114 "pred_table.m"
          {
#line 1114 "pred_table.m"
            MR_Word hlds__pred_table__TypeCtorInfo_11_11;
#line 1114 "pred_table.m"
            MR_Word hlds__pred_table__ProvenConstraint_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__1_1, (MR_Integer) 0)));
#line 1114 "pred_table.m"
            MR_Word hlds__pred_table__ProvenConstraints_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__1_1, (MR_Integer) 1)));
#line 1114 "pred_table.m"
            MR_Word hlds__pred_table__CalleeConstraint_5;
#line 1114 "pred_table.m"
            MR_Word hlds__pred_table__CalleeConstraints_6;
#line 1114 "pred_table.m"
            MR_Word hlds__pred_table__Name_7;
#line 1114 "pred_table.m"
            MR_Word hlds__pred_table__ProvenArgs_8;
#line 1114 "pred_table.m"
            MR_Integer hlds__pred_table__Arity_9;
#line 1114 "pred_table.m"
            MR_Word hlds__pred_table__CalleeArgs_10;
#line 1114 "pred_table.m"
            MR_Word hlds__pred_table__V_12_12;
#line 1114 "pred_table.m"
            MR_Integer hlds__pred_table__V_13_13;

#line 1114 "pred_table.m"
            hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1114 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 1114 "pred_table.m"
              {
#line 1114 "pred_table.m"
                hlds__pred_table__CalleeConstraint_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 1114 "pred_table.m"
                hlds__pred_table__CalleeConstraints_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));
#line 1115 "pred_table.m"
                hlds__pred_table__Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__ProvenConstraint_3, (MR_Integer) 0)));
#line 1115 "pred_table.m"
                hlds__pred_table__ProvenArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__ProvenConstraint_3, (MR_Integer) 1)));
#line 3632 "hlds.pred_table.c"
                hlds__pred_table__TypeCtorInfo_11_11 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1116 "pred_table.m"
                {
#line 1116 "pred_table.m"
                  mercury__list__length_2_p_0(hlds__pred_table__TypeCtorInfo_11_11, hlds__pred_table__ProvenArgs_8, &hlds__pred_table__Arity_9);
                }
#line 1117 "pred_table.m"
                hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__CalleeConstraint_5, (MR_Integer) 0)));
#line 1117 "pred_table.m"
                hlds__pred_table__CalleeArgs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__CalleeConstraint_5, (MR_Integer) 1)));
#line 1117 "pred_table.m"
                {
#line 1117 "pred_table.m"
                  hlds__pred_table__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(hlds__pred_table__Name_7, hlds__pred_table__V_12_12);
                }
#line 1114 "pred_table.m"
                if (hlds__pred_table__succeeded)
#line 1114 "pred_table.m"
                  {
#line 1118 "pred_table.m"
                    {
#line 1118 "pred_table.m"
                      mercury__list__length_2_p_0(hlds__pred_table__TypeCtorInfo_11_11, hlds__pred_table__CalleeArgs_10, &hlds__pred_table__V_13_13);
                    }
#line 1118 "pred_table.m"
                    hlds__pred_table__succeeded = (hlds__pred_table__Arity_9 == hlds__pred_table__V_13_13);
#line 1114 "pred_table.m"
                    if (hlds__pred_table__succeeded)
#line 1119 "pred_table.m"
                      {
#line 1119 "pred_table.m"
                        /* direct tailcall eliminated */
#line 1119 "pred_table.m"
                        {
#line 1119 "pred_table.m"
                          MR_Word hlds__pred_table__HeadVar__1__tmp_copy_1 = hlds__pred_table__ProvenConstraints_4;
#line 1119 "pred_table.m"
                          MR_Word hlds__pred_table__HeadVar__2__tmp_copy_2 = hlds__pred_table__CalleeConstraints_6;

#line 1119 "pred_table.m"
                          hlds__pred_table__HeadVar__2_2 = hlds__pred_table__HeadVar__2__tmp_copy_2;
#line 1119 "pred_table.m"
                          hlds__pred_table__HeadVar__1_1 = hlds__pred_table__HeadVar__1__tmp_copy_1;
#line 1119 "pred_table.m"
                        }
#line 1119 "pred_table.m"
                        continue;
#line 1119 "pred_table.m"
                      }
#line 1114 "pred_table.m"
                  }
#line 1114 "pred_table.m"
              }
#line 1114 "pred_table.m"
          }
#line 1112 "pred_table.m"
        return hlds__pred_table__succeeded;
#line 1112 "pred_table.m"
      }
#line 1112 "pred_table.m"
      break;
#line 1112 "pred_table.m"
    }
#line 1109 "pred_table.m"
}

#line 998 "pred_table.m"
static void MR_CALL 
hlds__pred_table__insert_into_mna_index_6_p_0(
#line 998 "pred_table.m"
  MR_String hlds__pred_table__Name_7,
#line 998 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_8,
#line 998 "pred_table.m"
  MR_Word hlds__pred_table__PredId_9,
#line 998 "pred_table.m"
  MR_Word hlds__pred_table__Module_10,
#line 998 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_MNA_Index_0_14,
#line 998 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_MNA_Index_15)
#line 998 "pred_table.m"
{
#line 1006 "pred_table.m"
  {
#line 1006 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 1006 "pred_table.m"
    MR_Word hlds__pred_table__MN_Arities0_12;
#line 1006 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16;
#line 1003 "pred_table.m"
    MR_Box hlds__pred_table__conv0_MN_Arities0_12;

#line 1003 "pred_table.m"
    {
#line 1003 "pred_table.m"
      hlds__pred_table__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1003 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_16_16, 0) = ((MR_Box) (hlds__pred_table__Module_10));
#line 1003 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_16_16, 1) = ((MR_Box) (hlds__pred_table__Name_7));
#line 1003 "pred_table.m"
    }
#line 1003 "pred_table.m"
    {
#line 1003 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__STATE_VARIABLE_MNA_Index_0_14, ((MR_Box) (hlds__pred_table__V_16_16)), &hlds__pred_table__conv0_MN_Arities0_12);
    }
#line 1003 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 1003 "pred_table.m"
      {
#line 1003 "pred_table.m"
        hlds__pred_table__MN_Arities0_12 = ((MR_Word) hlds__pred_table__conv0_MN_Arities0_12);
#line 1003 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 1003 "pred_table.m"
      }
#line 1006 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 1004 "pred_table.m"
      {
#line 1004 "pred_table.m"
        MR_Word hlds__pred_table__MN_Arities_13;

#line 1004 "pred_table.m"
        {
#line 1004 "pred_table.m"
          mercury__multi_map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (hlds__pred_table__Arity_8)), ((MR_Box) (hlds__pred_table__PredId_9)), hlds__pred_table__MN_Arities0_12, &hlds__pred_table__MN_Arities_13);
        }
#line 1005 "pred_table.m"
        {
#line 1005 "pred_table.m"
          mercury__map__det_update_4_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], ((MR_Box) (hlds__pred_table__V_16_16)), ((MR_Box) (hlds__pred_table__MN_Arities_13)), hlds__pred_table__STATE_VARIABLE_MNA_Index_0_14, hlds__pred_table__STATE_VARIABLE_MNA_Index_15);
#line 1005 "pred_table.m"
          return;
        }
#line 1004 "pred_table.m"
      }
#line 1006 "pred_table.m"
    else
#line 1007 "pred_table.m"
      {
#line 1007 "pred_table.m"
        MR_Word hlds__pred_table__V_19_19;
#line 1007 "pred_table.m"
        MR_Word hlds__pred_table__V_21_21;
#line 1007 "pred_table.m"
        MR_Word hlds__pred_table__MN_Arities_23;

#line 1007 "pred_table.m"
        {
#line 1007 "pred_table.m"
          hlds__pred_table__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1007 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_19_19, 0) = ((MR_Box) (hlds__pred_table__PredId_9));
#line 1007 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1007 "pred_table.m"
        }
#line 1007 "pred_table.m"
        {
#line 1007 "pred_table.m"
          hlds__pred_table__MN_Arities_23 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], ((MR_Box) (hlds__pred_table__Arity_8)), ((MR_Box) (hlds__pred_table__V_19_19)));
        }
#line 1008 "pred_table.m"
        {
#line 1008 "pred_table.m"
          hlds__pred_table__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1008 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_21_21, 0) = ((MR_Box) (hlds__pred_table__Module_10));
#line 1008 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_21_21, 1) = ((MR_Box) (hlds__pred_table__Name_7));
#line 1008 "pred_table.m"
        }
#line 1008 "pred_table.m"
        {
#line 1008 "pred_table.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], ((MR_Box) (hlds__pred_table__V_21_21)), ((MR_Box) (hlds__pred_table__MN_Arities_23)), hlds__pred_table__STATE_VARIABLE_MNA_Index_0_14, hlds__pred_table__STATE_VARIABLE_MNA_Index_15);
#line 1008 "pred_table.m"
          return;
        }
#line 1007 "pred_table.m"
      }
#line 1006 "pred_table.m"
  }
#line 998 "pred_table.m"
}

#line 984 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_do_insert_14_p_0_1(
#line 984 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 984 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 984 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 984 "pred_table.m"
  MR_Box * hlds__pred_table__wrapper_arg_3)
#line 984 "pred_table.m"
{
#line 984 "pred_table.m"
  {
#line 984 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;
#line 984 "pred_table.m"
    MR_Word hlds__pred_table__conv0_STATE_VARIABLE_MNA_Index_15;

#line 984 "pred_table.m"
    {
#line 984 "pred_table.m"
      hlds__pred_table__insert_into_mna_index_6_p_0(((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 5))), ((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2), &hlds__pred_table__conv0_STATE_VARIABLE_MNA_Index_15);
    }
#line 984 "pred_table.m"
    *hlds__pred_table__wrapper_arg_3 = ((MR_Box) (hlds__pred_table__conv0_STATE_VARIABLE_MNA_Index_15));
#line 984 "pred_table.m"
  }
#line 984 "pred_table.m"
}

#line 955 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_do_insert_14_p_0(
#line 955 "pred_table.m"
  MR_Word hlds__pred_table__Module_15,
#line 955 "pred_table.m"
  MR_String hlds__pred_table__Name_16,
#line 955 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_17,
#line 955 "pred_table.m"
  MR_Word hlds__pred_table__NeedQual_18,
#line 955 "pred_table.m"
  MR_Word hlds__pred_table__MaybeQualInfo_19,
#line 955 "pred_table.m"
  MR_Word hlds__pred_table__PredId_20,
#line 955 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_AccessibilityTable_0_31,
#line 955 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_AccessibilityTable_32,
#line 955 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_N_Index_0_33,
#line 955 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_N_Index_34,
#line 955 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_NA_Index_0_35,
#line 955 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_NA_Index_36,
#line 955 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_MNA_Index_0_37,
#line 955 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_MNA_Index_38)
#line 955 "pred_table.m"
{
#line 963 "pred_table.m"
  {
#line 963 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 963 "pred_table.m"
    MR_Word hlds__pred_table__AccessibleByUnqualifiedName_26;
#line 963 "pred_table.m"
    MR_Word hlds__pred_table__AccessibleByPartiallyQualifiedNames_29;
#line 963 "pred_table.m"
    MR_Word hlds__pred_table__Access_30;
#line 963 "pred_table.m"
    MR_Word hlds__pred_table__STATE_VARIABLE_MNA_Index_42_42;

#line 974 "pred_table.m"
    if ((hlds__pred_table__NeedQual_18 == (MR_Integer) 1))
#line 965 "pred_table.m"
      {
#line 965 "pred_table.m"
        MR_Word hlds__pred_table__TypeCtorInfo_46_46 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 965 "pred_table.m"
        MR_Word hlds__pred_table__NA_25;

#line 967 "pred_table.m"
        {
#line 967 "pred_table.m"
          mercury__multi_map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__pred_table__TypeCtorInfo_46_46, ((MR_Box) (hlds__pred_table__Name_16)), ((MR_Box) (hlds__pred_table__PredId_20)), hlds__pred_table__STATE_VARIABLE_N_Index_0_33, hlds__pred_table__STATE_VARIABLE_N_Index_34);
        }
#line 970 "pred_table.m"
        {
#line 970 "pred_table.m"
          hlds__pred_table__NA_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 970 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__NA_25, 0) = ((MR_Box) (hlds__pred_table__Name_16));
#line 970 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__NA_25, 1) = ((MR_Box) (hlds__pred_table__Arity_17));
#line 970 "pred_table.m"
        }
#line 971 "pred_table.m"
        {
#line 971 "pred_table.m"
          mercury__multi_map__set_4_p_0((MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0, hlds__pred_table__TypeCtorInfo_46_46, ((MR_Box) (hlds__pred_table__NA_25)), ((MR_Box) (hlds__pred_table__PredId_20)), hlds__pred_table__STATE_VARIABLE_NA_Index_0_35, hlds__pred_table__STATE_VARIABLE_NA_Index_36);
        }
#line 973 "pred_table.m"
        hlds__pred_table__AccessibleByUnqualifiedName_26 = (MR_Integer) 1;
#line 965 "pred_table.m"
      }
#line 974 "pred_table.m"
    else
#line 975 "pred_table.m"
      {
#line 976 "pred_table.m"
        hlds__pred_table__AccessibleByUnqualifiedName_26 = (MR_Integer) 0;
#line 976 "pred_table.m"
        *hlds__pred_table__STATE_VARIABLE_N_Index_34 = hlds__pred_table__STATE_VARIABLE_N_Index_0_33;
#line 976 "pred_table.m"
        *hlds__pred_table__STATE_VARIABLE_NA_Index_36 = hlds__pred_table__STATE_VARIABLE_NA_Index_0_35;
#line 975 "pred_table.m"
      }
#line 988 "pred_table.m"
    if ((hlds__pred_table__MaybeQualInfo_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 989 "pred_table.m"
      {
#line 990 "pred_table.m"
        hlds__pred_table__AccessibleByPartiallyQualifiedNames_29 = (MR_Integer) 0;
#line 990 "pred_table.m"
        hlds__pred_table__STATE_VARIABLE_MNA_Index_42_42 = hlds__pred_table__STATE_VARIABLE_MNA_Index_0_37;
#line 989 "pred_table.m"
      }
#line 988 "pred_table.m"
    else
#line 979 "pred_table.m"
      {
#line 979 "pred_table.m"
        MR_Word hlds__pred_table__QualInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__MaybeQualInfo_19, (MR_Integer) 0)));
#line 979 "pred_table.m"
        MR_Word hlds__pred_table__PartialQuals_28;
#line 979 "pred_table.m"
        MR_Word hlds__pred_table__V_41_41;
#line 984 "pred_table.m"
        MR_Box hlds__pred_table__conv1_STATE_VARIABLE_MNA_Index_42_42;

#line 983 "pred_table.m"
        {
#line 983 "pred_table.m"
          parse_tree__module_qual__get_partial_qualifiers_3_p_0(hlds__pred_table__Module_15, hlds__pred_table__QualInfo_27, &hlds__pred_table__PartialQuals_28);
        }
#line 984 "pred_table.m"
        {
#line 984 "pred_table.m"
          hlds__pred_table__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 984 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_4[1]));
#line 984 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 1) = ((MR_Box) (hlds__pred_table__predicate_table_do_insert_14_p_0_1));
#line 984 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 984 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 3) = ((MR_Box) (hlds__pred_table__Name_16));
#line 984 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 4) = ((MR_Box) (hlds__pred_table__Arity_17));
#line 984 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 5) = ((MR_Box) (hlds__pred_table__PredId_20));
#line 984 "pred_table.m"
        }
#line 984 "pred_table.m"
        {
#line 984 "pred_table.m"
          mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &hlds__pred_table_scalar_common_2[2], hlds__pred_table__V_41_41, hlds__pred_table__PartialQuals_28, ((MR_Box) (hlds__pred_table__STATE_VARIABLE_MNA_Index_0_37)), &hlds__pred_table__conv1_STATE_VARIABLE_MNA_Index_42_42);
        }
#line 984 "pred_table.m"
        hlds__pred_table__STATE_VARIABLE_MNA_Index_42_42 = ((MR_Word) hlds__pred_table__conv1_STATE_VARIABLE_MNA_Index_42_42);
#line 987 "pred_table.m"
        hlds__pred_table__AccessibleByPartiallyQualifiedNames_29 = (MR_Integer) 1;
#line 979 "pred_table.m"
      }
#line 993 "pred_table.m"
    {
#line 993 "pred_table.m"
      hlds__pred_table__insert_into_mna_index_6_p_0(hlds__pred_table__Name_16, hlds__pred_table__Arity_17, hlds__pred_table__PredId_20, hlds__pred_table__Module_15, hlds__pred_table__STATE_VARIABLE_MNA_Index_42_42, hlds__pred_table__STATE_VARIABLE_MNA_Index_38);
    }
#line 994 "pred_table.m"
    {
#line 994 "pred_table.m"
      hlds__pred_table__Access_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 994 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__Access_30, 0) = ((MR_Box) (hlds__pred_table__AccessibleByUnqualifiedName_26));
#line 994 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__Access_30, 1) = ((MR_Box) (hlds__pred_table__AccessibleByPartiallyQualifiedNames_29));
#line 994 "pred_table.m"
    }
#line 996 "pred_table.m"
    {
#line 996 "pred_table.m"
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0, ((MR_Box) (hlds__pred_table__PredId_20)), ((MR_Box) (hlds__pred_table__Access_30)), hlds__pred_table__STATE_VARIABLE_AccessibilityTable_0_31, hlds__pred_table__STATE_VARIABLE_AccessibilityTable_32);
#line 996 "pred_table.m"
      return;
    }
#line 963 "pred_table.m"
  }
#line 955 "pred_table.m"
}

#line 984 "pred_table.m"
static void MR_CALL 
hlds__pred_table__do_predicate_table_insert_7_p_0_1(
#line 984 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 984 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 984 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 984 "pred_table.m"
  MR_Box * hlds__pred_table__wrapper_arg_3)
#line 984 "pred_table.m"
{
#line 984 "pred_table.m"
  {
#line 984 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;
#line 984 "pred_table.m"
    MR_Word hlds__pred_table__conv0_STATE_VARIABLE_MNA_Index_15;

#line 984 "pred_table.m"
    {
#line 984 "pred_table.m"
      hlds__pred_table__insert_into_mna_index_6_p_0(((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 5))), ((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2), &hlds__pred_table__conv0_STATE_VARIABLE_MNA_Index_15);
    }
#line 984 "pred_table.m"
    *hlds__pred_table__wrapper_arg_3 = ((MR_Box) (hlds__pred_table__conv0_STATE_VARIABLE_MNA_Index_15));
#line 984 "pred_table.m"
  }
#line 984 "pred_table.m"
}

#line 892 "pred_table.m"
static void MR_CALL 
hlds__pred_table__do_predicate_table_insert_7_p_0(
#line 892 "pred_table.m"
  MR_Word hlds__pred_table__MaybePredId_8,
#line 892 "pred_table.m"
  MR_Word hlds__pred_table__PredInfo_9,
#line 892 "pred_table.m"
  MR_Word hlds__pred_table__NeedQual_10,
#line 892 "pred_table.m"
  MR_Word hlds__pred_table__MaybeQualInfo_11,
#line 892 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_12,
#line 892 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_40,
#line 892 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_41)
#line 892 "pred_table.m"
{
#line 897 "pred_table.m"
  {
#line 897 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 897 "pred_table.m"
    MR_Word hlds__pred_table__Preds0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_40, (MR_Integer) 0)));
#line 897 "pred_table.m"
    MR_Word hlds__pred_table__NextPredId0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_40, (MR_Integer) 1)));
#line 897 "pred_table.m"
    MR_Word hlds__pred_table__OldPredIds0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_40, (MR_Integer) 2)));
#line 897 "pred_table.m"
    MR_Word hlds__pred_table__NewRevPredIds0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_40, (MR_Integer) 3)));
#line 897 "pred_table.m"
    MR_Word hlds__pred_table__AccessibilityTable0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_40, (MR_Integer) 4)));
#line 897 "pred_table.m"
    MR_Word hlds__pred_table__Pred_N_Index0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_40, (MR_Integer) 5)));
#line 897 "pred_table.m"
    MR_Word hlds__pred_table__Pred_NA_Index0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_40, (MR_Integer) 6)));
#line 897 "pred_table.m"
    MR_Word hlds__pred_table__Pred_MNA_Index0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_40, (MR_Integer) 7)));
#line 897 "pred_table.m"
    MR_Word hlds__pred_table__Func_N_Index0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_40, (MR_Integer) 8)));
#line 897 "pred_table.m"
    MR_Word hlds__pred_table__Func_NA_Index0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_40, (MR_Integer) 9)));
#line 897 "pred_table.m"
    MR_Word hlds__pred_table__Func_MNA_Index0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_40, (MR_Integer) 10)));
#line 897 "pred_table.m"
    MR_Word hlds__pred_table__Module_25;
#line 897 "pred_table.m"
    MR_String hlds__pred_table__Name_26;
#line 897 "pred_table.m"
    MR_Integer hlds__pred_table__Arity_27;
#line 897 "pred_table.m"
    MR_Word hlds__pred_table__NextPredId_28;
#line 897 "pred_table.m"
    MR_Word hlds__pred_table__PredOrFunc_29;
#line 897 "pred_table.m"
    MR_Word hlds__pred_table__AccessibilityTable_30;
#line 897 "pred_table.m"
    MR_Word hlds__pred_table__Pred_N_Index_31;
#line 897 "pred_table.m"
    MR_Word hlds__pred_table__Pred_NA_Index_32;
#line 897 "pred_table.m"
    MR_Word hlds__pred_table__Pred_MNA_Index_33;
#line 897 "pred_table.m"
    MR_Word hlds__pred_table__Func_N_Index_34;
#line 897 "pred_table.m"
    MR_Word hlds__pred_table__Func_NA_Index_35;
#line 897 "pred_table.m"
    MR_Word hlds__pred_table__Func_MNA_Index_36;
#line 897 "pred_table.m"
    MR_Word hlds__pred_table__NewRevPredIds_38;
#line 897 "pred_table.m"
    MR_Word hlds__pred_table__Preds_39;

#line 902 "pred_table.m"
    {
#line 902 "pred_table.m"
      hlds__pred_table__Module_25 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__pred_table__PredInfo_9);
    }
#line 903 "pred_table.m"
    {
#line 903 "pred_table.m"
      hlds__pred_table__Name_26 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__pred_table__PredInfo_9);
    }
#line 904 "pred_table.m"
    {
#line 904 "pred_table.m"
      hlds__pred_table__Arity_27 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__pred_table__PredInfo_9);
    }
#line 908 "pred_table.m"
    if ((hlds__pred_table__MaybePredId_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 910 "pred_table.m"
      {
#line 911 "pred_table.m"
        *hlds__pred_table__PredId_12 = hlds__pred_table__NextPredId0_15;
#line 912 "pred_table.m"
        {
#line 912 "pred_table.m"
          hlds__hlds_pred__next_pred_id_2_p_0(*hlds__pred_table__PredId_12, &hlds__pred_table__NextPredId_28);
        }
#line 910 "pred_table.m"
      }
#line 908 "pred_table.m"
    else
#line 906 "pred_table.m"
      {
#line 906 "pred_table.m"
        *hlds__pred_table__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__MaybePredId_8, (MR_Integer) 0)));
#line 907 "pred_table.m"
        hlds__pred_table__NextPredId_28 = hlds__pred_table__NextPredId0_15;
#line 906 "pred_table.m"
      }
#line 916 "pred_table.m"
    {
#line 916 "pred_table.m"
      hlds__pred_table__PredOrFunc_29 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__pred_table__PredInfo_9);
    }
#line 929 "pred_table.m"
    if ((hlds__pred_table__PredOrFunc_29 == (MR_Integer) 1))
#line 930 "pred_table.m"
      {
#line 930 "pred_table.m"
        MR_Integer hlds__pred_table__FuncArity_37 = (hlds__pred_table__Arity_27 - (MR_Integer) 1);
#line 930 "pred_table.m"
        MR_Word hlds__pred_table__AccessibleByUnqualifiedName_65;
#line 930 "pred_table.m"
        MR_Word hlds__pred_table__AccessibleByPartiallyQualifiedNames_68;
#line 930 "pred_table.m"
        MR_Word hlds__pred_table__Access_69;
#line 930 "pred_table.m"
        MR_Word hlds__pred_table__STATE_VARIABLE_MNA_Index_42_73;

#line 974 "pred_table.m"
        if ((hlds__pred_table__NeedQual_10 == (MR_Integer) 1))
#line 965 "pred_table.m"
          {
#line 965 "pred_table.m"
            MR_Word hlds__pred_table__TypeCtorInfo_46_77 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 965 "pred_table.m"
            MR_Word hlds__pred_table__NA_64;

#line 967 "pred_table.m"
            {
#line 967 "pred_table.m"
              mercury__multi_map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__pred_table__TypeCtorInfo_46_77, ((MR_Box) (hlds__pred_table__Name_26)), ((MR_Box) (*hlds__pred_table__PredId_12)), hlds__pred_table__Func_N_Index0_22, &hlds__pred_table__Func_N_Index_34);
            }
#line 970 "pred_table.m"
            {
#line 970 "pred_table.m"
              hlds__pred_table__NA_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 970 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__NA_64, 0) = ((MR_Box) (hlds__pred_table__Name_26));
#line 970 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__NA_64, 1) = ((MR_Box) (hlds__pred_table__FuncArity_37));
#line 970 "pred_table.m"
            }
#line 971 "pred_table.m"
            {
#line 971 "pred_table.m"
              mercury__multi_map__set_4_p_0((MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0, hlds__pred_table__TypeCtorInfo_46_77, ((MR_Box) (hlds__pred_table__NA_64)), ((MR_Box) (*hlds__pred_table__PredId_12)), hlds__pred_table__Func_NA_Index0_23, &hlds__pred_table__Func_NA_Index_35);
            }
#line 973 "pred_table.m"
            hlds__pred_table__AccessibleByUnqualifiedName_65 = (MR_Integer) 1;
#line 965 "pred_table.m"
          }
#line 974 "pred_table.m"
        else
#line 975 "pred_table.m"
          {
#line 976 "pred_table.m"
            hlds__pred_table__AccessibleByUnqualifiedName_65 = (MR_Integer) 0;
#line 976 "pred_table.m"
            hlds__pred_table__Func_N_Index_34 = hlds__pred_table__Func_N_Index0_22;
#line 976 "pred_table.m"
            hlds__pred_table__Func_NA_Index_35 = hlds__pred_table__Func_NA_Index0_23;
#line 975 "pred_table.m"
          }
#line 988 "pred_table.m"
        if ((hlds__pred_table__MaybeQualInfo_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 989 "pred_table.m"
          {
#line 990 "pred_table.m"
            hlds__pred_table__AccessibleByPartiallyQualifiedNames_68 = (MR_Integer) 0;
#line 990 "pred_table.m"
            hlds__pred_table__STATE_VARIABLE_MNA_Index_42_73 = hlds__pred_table__Func_MNA_Index0_24;
#line 989 "pred_table.m"
          }
#line 988 "pred_table.m"
        else
#line 979 "pred_table.m"
          {
#line 979 "pred_table.m"
            MR_Word hlds__pred_table__QualInfo_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__MaybeQualInfo_11, (MR_Integer) 0)));
#line 979 "pred_table.m"
            MR_Word hlds__pred_table__PartialQuals_67;
#line 979 "pred_table.m"
            MR_Word hlds__pred_table__V_72_72;
#line 984 "pred_table.m"
            MR_Box hlds__pred_table__conv1_STATE_VARIABLE_MNA_Index_42_73;

#line 983 "pred_table.m"
            {
#line 983 "pred_table.m"
              parse_tree__module_qual__get_partial_qualifiers_3_p_0(hlds__pred_table__Module_25, hlds__pred_table__QualInfo_66, &hlds__pred_table__PartialQuals_67);
            }
#line 984 "pred_table.m"
            {
#line 984 "pred_table.m"
              hlds__pred_table__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 984 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_72_72, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_4[1]));
#line 984 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_72_72, 1) = ((MR_Box) (hlds__pred_table__do_predicate_table_insert_7_p_0_1));
#line 984 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 984 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_72_72, 3) = ((MR_Box) (hlds__pred_table__Name_26));
#line 984 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_72_72, 4) = ((MR_Box) (hlds__pred_table__FuncArity_37));
#line 984 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_72_72, 5) = ((MR_Box) (*hlds__pred_table__PredId_12));
#line 984 "pred_table.m"
            }
#line 984 "pred_table.m"
            {
#line 984 "pred_table.m"
              mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &hlds__pred_table_scalar_common_2[2], hlds__pred_table__V_72_72, hlds__pred_table__PartialQuals_67, ((MR_Box) (hlds__pred_table__Func_MNA_Index0_24)), &hlds__pred_table__conv1_STATE_VARIABLE_MNA_Index_42_73);
            }
#line 984 "pred_table.m"
            hlds__pred_table__STATE_VARIABLE_MNA_Index_42_73 = ((MR_Word) hlds__pred_table__conv1_STATE_VARIABLE_MNA_Index_42_73);
#line 987 "pred_table.m"
            hlds__pred_table__AccessibleByPartiallyQualifiedNames_68 = (MR_Integer) 1;
#line 979 "pred_table.m"
          }
#line 993 "pred_table.m"
        {
#line 993 "pred_table.m"
          hlds__pred_table__insert_into_mna_index_6_p_0(hlds__pred_table__Name_26, hlds__pred_table__FuncArity_37, *hlds__pred_table__PredId_12, hlds__pred_table__Module_25, hlds__pred_table__STATE_VARIABLE_MNA_Index_42_73, &hlds__pred_table__Func_MNA_Index_36);
        }
#line 994 "pred_table.m"
        {
#line 994 "pred_table.m"
          hlds__pred_table__Access_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 994 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__Access_69, 0) = ((MR_Box) (hlds__pred_table__AccessibleByUnqualifiedName_65));
#line 994 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__Access_69, 1) = ((MR_Box) (hlds__pred_table__AccessibleByPartiallyQualifiedNames_68));
#line 994 "pred_table.m"
        }
#line 996 "pred_table.m"
        {
#line 996 "pred_table.m"
          mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0, ((MR_Box) (*hlds__pred_table__PredId_12)), ((MR_Box) (hlds__pred_table__Access_69)), hlds__pred_table__AccessibilityTable0_18, &hlds__pred_table__AccessibilityTable_30);
        }
#line 939 "pred_table.m"
        hlds__pred_table__Pred_N_Index_31 = hlds__pred_table__Pred_N_Index0_19;
#line 940 "pred_table.m"
        hlds__pred_table__Pred_NA_Index_32 = hlds__pred_table__Pred_NA_Index0_20;
#line 941 "pred_table.m"
        hlds__pred_table__Pred_MNA_Index_33 = hlds__pred_table__Pred_MNA_Index0_21;
#line 930 "pred_table.m"
      }
#line 929 "pred_table.m"
    else
#line 918 "pred_table.m"
      {
#line 919 "pred_table.m"
        {
#line 919 "pred_table.m"
          hlds__pred_table__predicate_table_do_insert_14_p_0(hlds__pred_table__Module_25, hlds__pred_table__Name_26, hlds__pred_table__Arity_27, hlds__pred_table__NeedQual_10, hlds__pred_table__MaybeQualInfo_11, *hlds__pred_table__PredId_12, hlds__pred_table__AccessibilityTable0_18, &hlds__pred_table__AccessibilityTable_30, hlds__pred_table__Pred_N_Index0_19, &hlds__pred_table__Pred_N_Index_31, hlds__pred_table__Pred_NA_Index0_20, &hlds__pred_table__Pred_NA_Index_32, hlds__pred_table__Pred_MNA_Index0_21, &hlds__pred_table__Pred_MNA_Index_33);
        }
#line 926 "pred_table.m"
        hlds__pred_table__Func_N_Index_34 = hlds__pred_table__Func_N_Index0_22;
#line 927 "pred_table.m"
        hlds__pred_table__Func_NA_Index_35 = hlds__pred_table__Func_NA_Index0_23;
#line 928 "pred_table.m"
        hlds__pred_table__Func_MNA_Index_36 = hlds__pred_table__Func_MNA_Index0_24;
#line 918 "pred_table.m"
      }
#line 945 "pred_table.m"
    {
#line 945 "pred_table.m"
      hlds__pred_table__NewRevPredIds_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 945 "pred_table.m"
      MR_hl_field(MR_mktag(1), hlds__pred_table__NewRevPredIds_38, 0) = ((MR_Box) (*hlds__pred_table__PredId_12));
#line 945 "pred_table.m"
      MR_hl_field(MR_mktag(1), hlds__pred_table__NewRevPredIds_38, 1) = ((MR_Box) (hlds__pred_table__NewRevPredIds0_17));
#line 945 "pred_table.m"
    }
#line 948 "pred_table.m"
    {
#line 948 "pred_table.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ((MR_Box) (*hlds__pred_table__PredId_12)), ((MR_Box) (hlds__pred_table__PredInfo_9)), hlds__pred_table__Preds0_14, &hlds__pred_table__Preds_39);
    }
#line 950 "pred_table.m"
    {
#line 950 "pred_table.m"
      MR_Word base;
#line 950 "pred_table.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 950 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_PredicateTable_41 = base;
#line 950 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__Preds_39));
#line 950 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__NextPredId_28));
#line 950 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__OldPredIds0_16));
#line 950 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__NewRevPredIds_38));
#line 950 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__AccessibilityTable_30));
#line 950 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__Pred_N_Index_31));
#line 950 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__Pred_NA_Index_32));
#line 950 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__Pred_MNA_Index_33));
#line 950 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__Func_N_Index_34));
#line 950 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__Func_NA_Index_35));
#line 950 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__pred_table__Func_MNA_Index_36));
#line 950 "pred_table.m"
    }
#line 897 "pred_table.m"
  }
#line 892 "pred_table.m"
}

#line 847 "pred_table.m"
static void MR_CALL 
hlds__pred_table__reinsert_for_restrict_6_p_0(
#line 847 "pred_table.m"
  MR_Word hlds__pred_table__PartialQualInfo_7,
#line 847 "pred_table.m"
  MR_Word hlds__pred_table__Preds_8,
#line 847 "pred_table.m"
  MR_Word hlds__pred_table__AccessibilityTable_9,
#line 847 "pred_table.m"
  MR_Word hlds__pred_table__PredId_10,
#line 847 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_19,
#line 847 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_20)
#line 847 "pred_table.m"
{
#line 852 "pred_table.m"
  {
#line 852 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 852 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 852 "pred_table.m"
    MR_Word hlds__pred_table__PredInfo_12;
#line 852 "pred_table.m"
    MR_Word hlds__pred_table__Access_13;
#line 852 "pred_table.m"
    MR_Word hlds__pred_table__Unqualified_14;
#line 852 "pred_table.m"
    MR_Word hlds__pred_table__PartiallyQualified_15;
#line 852 "pred_table.m"
    MR_Word hlds__pred_table__NeedQual_16;
#line 852 "pred_table.m"
    MR_Word hlds__pred_table__MaybeQualInfo_17;
#line 852 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21;
#line 853 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredInfo_12;
#line 854 "pred_table.m"
    MR_Box hlds__pred_table__conv1_Access_13;
#line 870 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18;

#line 853 "pred_table.m"
    {
#line 853 "pred_table.m"
      hlds__pred_table__conv0_PredInfo_12 = mercury__map__lookup_2_f_0(hlds__pred_table__TypeCtorInfo_23_23, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__pred_table__Preds_8, ((MR_Box) (hlds__pred_table__PredId_10)));
    }
#line 853 "pred_table.m"
    hlds__pred_table__PredInfo_12 = ((MR_Word) hlds__pred_table__conv0_PredInfo_12);
#line 854 "pred_table.m"
    {
#line 854 "pred_table.m"
      hlds__pred_table__conv1_Access_13 = mercury__map__lookup_2_f_0(hlds__pred_table__TypeCtorInfo_23_23, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0, hlds__pred_table__AccessibilityTable_9, ((MR_Box) (hlds__pred_table__PredId_10)));
    }
#line 854 "pred_table.m"
    hlds__pred_table__Access_13 = ((MR_Word) hlds__pred_table__conv1_Access_13);
#line 855 "pred_table.m"
    hlds__pred_table__Unqualified_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__Access_13, (MR_Integer) 0)));
#line 855 "pred_table.m"
    hlds__pred_table__PartiallyQualified_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__Access_13, (MR_Integer) 1)));
#line 859 "pred_table.m"
    if ((hlds__pred_table__Unqualified_14 == (MR_Integer) 0))
#line 861 "pred_table.m"
      hlds__pred_table__NeedQual_16 = (MR_Integer) 0;
#line 859 "pred_table.m"
    else
#line 858 "pred_table.m"
      hlds__pred_table__NeedQual_16 = (MR_Integer) 1;
#line 866 "pred_table.m"
    if ((hlds__pred_table__PartiallyQualified_15 == (MR_Integer) 0))
#line 868 "pred_table.m"
      hlds__pred_table__MaybeQualInfo_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 866 "pred_table.m"
    else
#line 865 "pred_table.m"
      {
#line 865 "pred_table.m"
        hlds__pred_table__MaybeQualInfo_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 865 "pred_table.m"
        MR_hl_field(MR_mktag(1), hlds__pred_table__MaybeQualInfo_17, 0) = ((MR_Box) (hlds__pred_table__PartialQualInfo_7));
#line 865 "pred_table.m"
      }
#line 870 "pred_table.m"
    {
#line 870 "pred_table.m"
      hlds__pred_table__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 870 "pred_table.m"
      MR_hl_field(MR_mktag(1), hlds__pred_table__V_21_21, 0) = ((MR_Box) (hlds__pred_table__PredId_10));
#line 870 "pred_table.m"
    }
#line 870 "pred_table.m"
    {
#line 870 "pred_table.m"
      hlds__pred_table__do_predicate_table_insert_7_p_0(hlds__pred_table__V_21_21, hlds__pred_table__PredInfo_12, hlds__pred_table__NeedQual_16, hlds__pred_table__MaybeQualInfo_17, &hlds__pred_table__V_18_18, hlds__pred_table__STATE_VARIABLE_PredicateTable_0_19, hlds__pred_table__STATE_VARIABLE_PredicateTable_20);
    }
#line 852 "pred_table.m"
  }
#line 847 "pred_table.m"
}

#line 767 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__pred_id_matches_module_3_p_0(
#line 767 "pred_table.m"
  MR_Word hlds__pred_table__Preds_4,
#line 767 "pred_table.m"
  MR_Word hlds__pred_table__ModuleName_5,
#line 767 "pred_table.m"
  MR_Word hlds__pred_table__PredId_6)
#line 767 "pred_table.m"
{
#line 770 "pred_table.m"
  {
#line 770 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 770 "pred_table.m"
    MR_Word hlds__pred_table__PredInfo_7;
#line 770 "pred_table.m"
    MR_Word hlds__pred_table__V_10_10;
#line 771 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredInfo_7;

#line 771 "pred_table.m"
    {
#line 771 "pred_table.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__pred_table__Preds_4, ((MR_Box) (hlds__pred_table__PredId_6)), &hlds__pred_table__conv0_PredInfo_7);
    }
#line 771 "pred_table.m"
    hlds__pred_table__PredInfo_7 = ((MR_Word) hlds__pred_table__conv0_PredInfo_7);
#line 772 "pred_table.m"
    {
#line 772 "pred_table.m"
      hlds__pred_table__V_10_10 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__pred_table__PredInfo_7);
    }
#line 772 "pred_table.m"
    {
#line 772 "pred_table.m"
      return hlds__pred_table__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(hlds__pred_table__ModuleName_5, hlds__pred_table__V_10_10);
    }
#line 770 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 770 "pred_table.m"
  }
#line 767 "pred_table.m"
}

#line 765 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0_1(
#line 765 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 765 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1)
#line 765 "pred_table.m"
{
#line 765 "pred_table.m"
  {
#line 765 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 765 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;

#line 765 "pred_table.m"
    {
#line 765 "pred_table.m"
      return hlds__pred_table__succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) hlds__pred_table__wrapper_arg_1));
    }
#line 765 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 765 "pred_table.m"
  }
#line 765 "pred_table.m"
}

#line 677 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0(
#line 677 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_6,
#line 677 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_7,
#line 677 "pred_table.m"
  MR_Word hlds__pred_table__Module_8,
#line 677 "pred_table.m"
  MR_String hlds__pred_table__FuncName_9,
#line 677 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_10)
#line 677 "pred_table.m"
{
#line 682 "pred_table.m"
  {
#line 682 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 682 "pred_table.m"
    MR_Word hlds__pred_table__Func_MNA_Index_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 10)));
#line 683 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 0)));
#line 683 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 1)));
#line 683 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 2)));
#line 683 "pred_table.m"
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 3)));
#line 683 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 4)));
#line 683 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 5)));
#line 683 "pred_table.m"
    MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 6)));
#line 683 "pred_table.m"
    MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 7)));
#line 683 "pred_table.m"
    MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 8)));
#line 683 "pred_table.m"
    MR_Word hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 9)));
#line 689 "pred_table.m"
    MR_Word hlds__pred_table__Arities_12;
#line 684 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15;
#line 684 "pred_table.m"
    MR_Box hlds__pred_table__conv0_Arities_12;

#line 684 "pred_table.m"
    {
#line 684 "pred_table.m"
      hlds__pred_table__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 684 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_15_15, 0) = ((MR_Box) (hlds__pred_table__Module_8));
#line 684 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_15_15, 1) = ((MR_Box) (hlds__pred_table__FuncName_9));
#line 684 "pred_table.m"
    }
#line 684 "pred_table.m"
    {
#line 684 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__Func_MNA_Index_11, ((MR_Box) (hlds__pred_table__V_15_15)), &hlds__pred_table__conv0_Arities_12);
    }
#line 684 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 684 "pred_table.m"
      {
#line 684 "pred_table.m"
        hlds__pred_table__Arities_12 = ((MR_Word) hlds__pred_table__conv0_Arities_12);
#line 684 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 684 "pred_table.m"
      }
#line 689 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 685 "pred_table.m"
      {
#line 685 "pred_table.m"
        MR_Word hlds__pred_table__PredIdLists_13;
#line 685 "pred_table.m"
        MR_Word hlds__pred_table__PredIds0_14;

#line 685 "pred_table.m"
        {
#line 685 "pred_table.m"
          mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__Arities_12, &hlds__pred_table__PredIdLists_13);
        }
#line 686 "pred_table.m"
        {
#line 686 "pred_table.m"
          mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__PredIdLists_13, &hlds__pred_table__PredIds0_14);
        }
#line 760 "pred_table.m"
        if ((hlds__pred_table__IsFullyQualified_7 == (MR_Integer) 0))
#line 763 "pred_table.m"
          {
#line 763 "pred_table.m"
            MR_Word hlds__pred_table__Preds_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 0)));
#line 763 "pred_table.m"
            MR_Word hlds__pred_table__V_42_42;
#line 407 "pred_table.m"
            MR_Word hlds__pred_table__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 1)));
#line 407 "pred_table.m"
            MR_Word hlds__pred_table__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 2)));
#line 407 "pred_table.m"
            MR_Word hlds__pred_table__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 3)));
#line 407 "pred_table.m"
            MR_Word hlds__pred_table__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 4)));
#line 407 "pred_table.m"
            MR_Word hlds__pred_table__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 5)));
#line 407 "pred_table.m"
            MR_Word hlds__pred_table__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 6)));
#line 407 "pred_table.m"
            MR_Word hlds__pred_table__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 7)));
#line 407 "pred_table.m"
            MR_Word hlds__pred_table__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 8)));
#line 407 "pred_table.m"
            MR_Word hlds__pred_table__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 9)));
#line 407 "pred_table.m"
            MR_Word hlds__pred_table__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 10)));

#line 765 "pred_table.m"
            {
#line 765 "pred_table.m"
              hlds__pred_table__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 765 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_42_42, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
#line 765 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_42_42, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0_1));
#line 765 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 765 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_42_42, 3) = ((MR_Box) (hlds__pred_table__Preds_39));
#line 765 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_42_42, 4) = ((MR_Box) (hlds__pred_table__Module_8));
#line 765 "pred_table.m"
            }
#line 765 "pred_table.m"
            {
#line 765 "pred_table.m"
              mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__V_42_42, hlds__pred_table__PredIds0_14, hlds__pred_table__PredIds_10);
#line 765 "pred_table.m"
              return;
            }
#line 763 "pred_table.m"
          }
#line 760 "pred_table.m"
        else
#line 760 "pred_table.m"
          *hlds__pred_table__PredIds_10 = hlds__pred_table__PredIds0_14;
#line 685 "pred_table.m"
      }
#line 689 "pred_table.m"
    else
#line 690 "pred_table.m"
      *hlds__pred_table__PredIds_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 682 "pred_table.m"
  }
#line 677 "pred_table.m"
}

#line 467 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_remove_from_index_10_p_0(
#line 467 "pred_table.m"
  MR_Word hlds__pred_table__Module_11,
#line 467 "pred_table.m"
  MR_String hlds__pred_table__Name_12,
#line 467 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_13,
#line 467 "pred_table.m"
  MR_Word hlds__pred_table__PredId_14,
#line 467 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_N_0_18,
#line 467 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_N_19,
#line 467 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_NA_0_20,
#line 467 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_NA_21,
#line 467 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_MNA_0_22,
#line 467 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_MNA_23)
#line 467 "pred_table.m"
{
#line 473 "pred_table.m"
  {
#line 473 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 473 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_28_28 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 473 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_29_29;
#line 473 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_24_71;
#line 473 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_25_72;
#line 473 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_26_73;
#line 473 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_27_74;
#line 473 "pred_table.m"
    MR_Word hlds__pred_table__V_25_25;
#line 473 "pred_table.m"
    MR_Word hlds__pred_table__Arities0_60;
#line 473 "pred_table.m"
    MR_Word hlds__pred_table__PredIds0_61;
#line 473 "pred_table.m"
    MR_Word hlds__pred_table__PredIds_62;
#line 473 "pred_table.m"
    MR_Word hlds__pred_table__V_66_66;
#line 491 "pred_table.m"
    MR_Word hlds__pred_table__NamePredIds0_34;
#line 482 "pred_table.m"
    MR_Box hlds__pred_table__conv0_NamePredIds0_34;
#line 491 "pred_table.m"
    MR_Word hlds__pred_table__NamePredIds0_46;
#line 482 "pred_table.m"
    MR_Box hlds__pred_table__conv1_NamePredIds0_46;
#line 500 "pred_table.m"
    MR_Box hlds__pred_table__conv2_Arities0_60;
#line 501 "pred_table.m"
    MR_Box hlds__pred_table__conv3_PredIds0_61;

#line 482 "pred_table.m"
    {
#line 482 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0(hlds__pred_table__TypeCtorInfo_28_28, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__STATE_VARIABLE_N_0_18, ((MR_Box) (hlds__pred_table__Name_12)), &hlds__pred_table__conv0_NamePredIds0_34);
    }
#line 482 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 482 "pred_table.m"
      {
#line 482 "pred_table.m"
        hlds__pred_table__NamePredIds0_34 = ((MR_Word) hlds__pred_table__conv0_NamePredIds0_34);
#line 482 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 482 "pred_table.m"
      }
#line 491 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 483 "pred_table.m"
      {
#line 483 "pred_table.m"
        MR_Word hlds__pred_table__NamePredIds_35;

#line 483 "pred_table.m"
        {
#line 483 "pred_table.m"
          mercury__list__delete_all_3_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__NamePredIds0_34, ((MR_Box) (hlds__pred_table__PredId_14)), &hlds__pred_table__NamePredIds_35);
        }
#line 487 "pred_table.m"
        if ((hlds__pred_table__NamePredIds_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 485 "pred_table.m"
          {
#line 486 "pred_table.m"
            {
#line 486 "pred_table.m"
              mercury__map__delete_3_p_0(hlds__pred_table__TypeCtorInfo_28_28, (MR_Word) &hlds__pred_table_scalar_common_1[0], ((MR_Box) (hlds__pred_table__Name_12)), hlds__pred_table__STATE_VARIABLE_N_0_18, hlds__pred_table__STATE_VARIABLE_N_19);
            }
#line 485 "pred_table.m"
          }
#line 487 "pred_table.m"
        else
#line 488 "pred_table.m"
          {
#line 489 "pred_table.m"
            {
#line 489 "pred_table.m"
              mercury__map__det_update_4_p_0(hlds__pred_table__TypeCtorInfo_28_28, (MR_Word) &hlds__pred_table_scalar_common_1[0], ((MR_Box) (hlds__pred_table__Name_12)), ((MR_Box) (hlds__pred_table__NamePredIds_35)), hlds__pred_table__STATE_VARIABLE_N_0_18, hlds__pred_table__STATE_VARIABLE_N_19);
            }
#line 488 "pred_table.m"
          }
#line 483 "pred_table.m"
      }
#line 491 "pred_table.m"
    else
#line 492 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_N_19 = hlds__pred_table__STATE_VARIABLE_N_0_18;
#line 475 "pred_table.m"
    {
#line 475 "pred_table.m"
      hlds__pred_table__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 475 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_25_25, 0) = ((MR_Box) (hlds__pred_table__Name_12));
#line 475 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_25_25, 1) = ((MR_Box) (hlds__pred_table__Arity_13));
#line 475 "pred_table.m"
    }
#line 4859 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_29_29 = (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0;
#line 482 "pred_table.m"
    {
#line 482 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0(hlds__pred_table__TypeCtorInfo_29_29, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__STATE_VARIABLE_NA_0_20, ((MR_Box) (hlds__pred_table__V_25_25)), &hlds__pred_table__conv1_NamePredIds0_46);
    }
#line 482 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 482 "pred_table.m"
      {
#line 482 "pred_table.m"
        hlds__pred_table__NamePredIds0_46 = ((MR_Word) hlds__pred_table__conv1_NamePredIds0_46);
#line 482 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 482 "pred_table.m"
      }
#line 491 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 483 "pred_table.m"
      {
#line 483 "pred_table.m"
        MR_Word hlds__pred_table__NamePredIds_47;

#line 483 "pred_table.m"
        {
#line 483 "pred_table.m"
          mercury__list__delete_all_3_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__NamePredIds0_46, ((MR_Box) (hlds__pred_table__PredId_14)), &hlds__pred_table__NamePredIds_47);
        }
#line 487 "pred_table.m"
        if ((hlds__pred_table__NamePredIds_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 485 "pred_table.m"
          {
#line 486 "pred_table.m"
            {
#line 486 "pred_table.m"
              mercury__map__delete_3_p_0(hlds__pred_table__TypeCtorInfo_29_29, (MR_Word) &hlds__pred_table_scalar_common_1[0], ((MR_Box) (hlds__pred_table__V_25_25)), hlds__pred_table__STATE_VARIABLE_NA_0_20, hlds__pred_table__STATE_VARIABLE_NA_21);
            }
#line 485 "pred_table.m"
          }
#line 487 "pred_table.m"
        else
#line 488 "pred_table.m"
          {
#line 489 "pred_table.m"
            {
#line 489 "pred_table.m"
              mercury__map__det_update_4_p_0(hlds__pred_table__TypeCtorInfo_29_29, (MR_Word) &hlds__pred_table_scalar_common_1[0], ((MR_Box) (hlds__pred_table__V_25_25)), ((MR_Box) (hlds__pred_table__NamePredIds_47)), hlds__pred_table__STATE_VARIABLE_NA_0_20, hlds__pred_table__STATE_VARIABLE_NA_21);
            }
#line 488 "pred_table.m"
          }
#line 483 "pred_table.m"
      }
#line 491 "pred_table.m"
    else
#line 492 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_NA_21 = hlds__pred_table__STATE_VARIABLE_NA_0_20;
#line 500 "pred_table.m"
    {
#line 500 "pred_table.m"
      hlds__pred_table__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 500 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_66_66, 0) = ((MR_Box) (hlds__pred_table__Module_11));
#line 500 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_66_66, 1) = ((MR_Box) (hlds__pred_table__Name_12));
#line 500 "pred_table.m"
    }
#line 4926 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_24_71 = (MR_Word) &hlds__pred_table_scalar_common_2[0];
#line 4928 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_25_72 = (MR_Word) &hlds__pred_table_scalar_common_2[1];
#line 500 "pred_table.m"
    {
#line 500 "pred_table.m"
      mercury__map__lookup_3_p_0(hlds__pred_table__TypeInfo_24_71, hlds__pred_table__TypeInfo_25_72, hlds__pred_table__STATE_VARIABLE_MNA_0_22, ((MR_Box) (hlds__pred_table__V_66_66)), &hlds__pred_table__conv2_Arities0_60);
    }
#line 500 "pred_table.m"
    hlds__pred_table__Arities0_60 = ((MR_Word) hlds__pred_table__conv2_Arities0_60);
#line 4937 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_26_73 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 4939 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_27_74 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
#line 501 "pred_table.m"
    {
#line 501 "pred_table.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__pred_table__TypeInfo_27_74, hlds__pred_table__Arities0_60, hlds__pred_table__Arity_13, &hlds__pred_table__conv3_PredIds0_61);
    }
#line 501 "pred_table.m"
    hlds__pred_table__PredIds0_61 = ((MR_Word) hlds__pred_table__conv3_PredIds0_61);
#line 502 "pred_table.m"
    {
#line 502 "pred_table.m"
      mercury__list__delete_all_3_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__PredIds0_61, ((MR_Box) (hlds__pred_table__PredId_14)), &hlds__pred_table__PredIds_62);
    }
#line 511 "pred_table.m"
    if ((hlds__pred_table__PredIds_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 504 "pred_table.m"
      {
#line 504 "pred_table.m"
        MR_Word hlds__pred_table__Arities_63;

#line 505 "pred_table.m"
        {
#line 505 "pred_table.m"
          mercury__map__delete_3_p_0(hlds__pred_table__TypeCtorInfo_26_73, hlds__pred_table__TypeInfo_27_74, ((MR_Box) (hlds__pred_table__Arity_13)), hlds__pred_table__Arities0_60, &hlds__pred_table__Arities_63);
        }
#line 506 "pred_table.m"
        {
#line 506 "pred_table.m"
          hlds__pred_table__succeeded = mercury__map__is_empty_1_p_0(hlds__pred_table__TypeCtorInfo_26_73, hlds__pred_table__TypeInfo_27_74, hlds__pred_table__Arities_63);
        }
#line 508 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 507 "pred_table.m"
          {
#line 507 "pred_table.m"
            mercury__map__delete_3_p_0(hlds__pred_table__TypeInfo_24_71, hlds__pred_table__TypeInfo_25_72, ((MR_Box) (hlds__pred_table__V_66_66)), hlds__pred_table__STATE_VARIABLE_MNA_0_22, hlds__pred_table__STATE_VARIABLE_MNA_23);
#line 507 "pred_table.m"
            return;
          }
#line 508 "pred_table.m"
        else
#line 509 "pred_table.m"
          {
#line 509 "pred_table.m"
            mercury__map__det_update_4_p_0(hlds__pred_table__TypeInfo_24_71, hlds__pred_table__TypeInfo_25_72, ((MR_Box) (hlds__pred_table__V_66_66)), ((MR_Box) (hlds__pred_table__Arities_63)), hlds__pred_table__STATE_VARIABLE_MNA_0_22, hlds__pred_table__STATE_VARIABLE_MNA_23);
#line 509 "pred_table.m"
            return;
          }
#line 504 "pred_table.m"
      }
#line 511 "pred_table.m"
    else
#line 512 "pred_table.m"
      {
#line 512 "pred_table.m"
        MR_Word hlds__pred_table__Arities_70;

#line 513 "pred_table.m"
        {
#line 513 "pred_table.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(hlds__pred_table__TypeInfo_27_74, hlds__pred_table__Arity_13, ((MR_Box) (hlds__pred_table__PredIds_62)), hlds__pred_table__Arities0_60, &hlds__pred_table__Arities_70);
        }
#line 514 "pred_table.m"
        {
#line 514 "pred_table.m"
          mercury__map__det_update_4_p_0(hlds__pred_table__TypeInfo_24_71, hlds__pred_table__TypeInfo_25_72, ((MR_Box) (hlds__pred_table__V_66_66)), ((MR_Box) (hlds__pred_table__Arities_70)), hlds__pred_table__STATE_VARIABLE_MNA_0_22, hlds__pred_table__STATE_VARIABLE_MNA_23);
#line 514 "pred_table.m"
          return;
        }
#line 512 "pred_table.m"
      }
#line 473 "pred_table.m"
  }
#line 467 "pred_table.m"
}

#line 313 "pred_table.m"
void MR_CALL 
hlds__pred_table__get_next_pred_id_2_p_0(
#line 313 "pred_table.m"
  MR_Word hlds__pred_table__PredTable_3,
#line 313 "pred_table.m"
  MR_Word * hlds__pred_table__NextPredId_4)
#line 313 "pred_table.m"
{
#line 1253 "pred_table.m"
  {
#line 1253 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 1253 "pred_table.m"
    MR_Word hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 0)));
#line 1253 "pred_table.m"
    MR_Word hlds__pred_table__V_6_6;
#line 1253 "pred_table.m"
    MR_Word hlds__pred_table__V_7_7;
#line 1253 "pred_table.m"
    MR_Word hlds__pred_table__V_8_8;
#line 1253 "pred_table.m"
    MR_Word hlds__pred_table__V_9_9;
#line 1253 "pred_table.m"
    MR_Word hlds__pred_table__V_10_10;
#line 1253 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11;
#line 1253 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12;
#line 1253 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13;
#line 1253 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14;

#line 1253 "pred_table.m"
    *hlds__pred_table__NextPredId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 1)));
#line 1253 "pred_table.m"
    hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 2)));
#line 1253 "pred_table.m"
    hlds__pred_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 3)));
#line 1253 "pred_table.m"
    hlds__pred_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 4)));
#line 1253 "pred_table.m"
    hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 5)));
#line 1253 "pred_table.m"
    hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 6)));
#line 1253 "pred_table.m"
    hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 7)));
#line 1253 "pred_table.m"
    hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 8)));
#line 1253 "pred_table.m"
    hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 9)));
#line 1253 "pred_table.m"
    hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 10)));
#line 1253 "pred_table.m"
  }
#line 313 "pred_table.m"
}

#line 309 "pred_table.m"
void MR_CALL 
hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(
#line 309 "pred_table.m"
  MR_Word hlds__pred_table__Module_9,
#line 309 "pred_table.m"
  MR_Word hlds__pred_table__ModuleName_10,
#line 309 "pred_table.m"
  MR_String hlds__pred_table__ProcName_11,
#line 309 "pred_table.m"
  MR_Word hlds__pred_table__PredOrFunc_12,
#line 309 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_13,
#line 309 "pred_table.m"
  MR_Word hlds__pred_table__ModeNo_14,
#line 309 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_15,
#line 309 "pred_table.m"
  MR_Integer * hlds__pred_table__ProcId_16)
#line 309 "pred_table.m"
{
#line 1191 "pred_table.m"
  {
#line 1191 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 1191 "pred_table.m"
    MR_Word hlds__pred_table__PredTable_17;
#line 1191 "pred_table.m"
    MR_Word hlds__pred_table__PredInfo_21;
#line 1191 "pred_table.m"
    MR_Word hlds__pred_table__ProcIds_22;
#line 1206 "pred_table.m"
    MR_Word hlds__pred_table__PredIdPrime_19;
#line 1202 "pred_table.m"
    MR_Word hlds__pred_table__PredIds_18;
#line 1202 "pred_table.m"
    MR_Word hlds__pred_table__V_27_27;

#line 1192 "pred_table.m"
    {
#line 1192 "pred_table.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__pred_table__Module_9, &hlds__pred_table__PredTable_17);
    }
#line 1198 "pred_table.m"
    if ((hlds__pred_table__PredOrFunc_12 == (MR_Integer) 1))
#line 1199 "pred_table.m"
      {
#line 1200 "pred_table.m"
        {
#line 1200 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredTable_17, (MR_Integer) 0, hlds__pred_table__ModuleName_10, hlds__pred_table__ProcName_11, hlds__pred_table__Arity_13, &hlds__pred_table__PredIds_18);
        }
#line 1199 "pred_table.m"
      }
#line 1198 "pred_table.m"
    else
#line 1195 "pred_table.m"
      {
#line 1196 "pred_table.m"
        {
#line 1196 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredTable_17, (MR_Integer) 0, hlds__pred_table__ModuleName_10, hlds__pred_table__ProcName_11, hlds__pred_table__Arity_13, &hlds__pred_table__PredIds_18);
        }
#line 1195 "pred_table.m"
      }
#line 1203 "pred_table.m"
    hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__PredIds_18)) == (MR_mktag((MR_Integer) 1)));
#line 1203 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 1203 "pred_table.m"
      {
#line 1203 "pred_table.m"
        hlds__pred_table__PredIdPrime_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__PredIds_18, (MR_Integer) 0)));
#line 1203 "pred_table.m"
        hlds__pred_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__PredIds_18, (MR_Integer) 1)));
#line 1203 "pred_table.m"
        hlds__pred_table__succeeded = (hlds__pred_table__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1203 "pred_table.m"
      }
#line 1206 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 1205 "pred_table.m"
      *hlds__pred_table__PredId_15 = hlds__pred_table__PredIdPrime_19;
#line 1206 "pred_table.m"
    else
#line 1225 "pred_table.m"
      {
#line 1225 "pred_table.m"
        MR_Word hlds__pred_table__PredIdPrime_65;
#line 1221 "pred_table.m"
        MR_Word hlds__pred_table__V_34_34;
#line 1221 "pred_table.m"
        MR_Word hlds__pred_table__PredIds_63;

#line 1217 "pred_table.m"
        if ((hlds__pred_table__PredOrFunc_12 == (MR_Integer) 1))
#line 1218 "pred_table.m"
          {
#line 1218 "pred_table.m"
            MR_Integer hlds__pred_table__V_29_29 = (hlds__pred_table__Arity_13 - (MR_Integer) 1);

#line 1219 "pred_table.m"
            {
#line 1219 "pred_table.m"
              hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredTable_17, (MR_Integer) 0, hlds__pred_table__ModuleName_10, hlds__pred_table__ProcName_11, hlds__pred_table__V_29_29, &hlds__pred_table__PredIds_63);
            }
#line 1218 "pred_table.m"
          }
#line 1217 "pred_table.m"
        else
#line 1214 "pred_table.m"
          {
#line 1214 "pred_table.m"
            MR_Integer hlds__pred_table__V_32_32 = (hlds__pred_table__Arity_13 - (MR_Integer) 1);

#line 1215 "pred_table.m"
            {
#line 1215 "pred_table.m"
              hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredTable_17, (MR_Integer) 0, hlds__pred_table__ModuleName_10, hlds__pred_table__ProcName_11, hlds__pred_table__V_32_32, &hlds__pred_table__PredIds_63);
            }
#line 1214 "pred_table.m"
          }
#line 1222 "pred_table.m"
        hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__PredIds_63)) == (MR_mktag((MR_Integer) 1)));
#line 1222 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 1222 "pred_table.m"
          {
#line 1222 "pred_table.m"
            hlds__pred_table__PredIdPrime_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__PredIds_63, (MR_Integer) 0)));
#line 1222 "pred_table.m"
            hlds__pred_table__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__PredIds_63, (MR_Integer) 1)));
#line 1222 "pred_table.m"
            hlds__pred_table__succeeded = (hlds__pred_table__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1222 "pred_table.m"
          }
#line 1225 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 1224 "pred_table.m"
          *hlds__pred_table__PredId_15 = hlds__pred_table__PredIdPrime_65;
#line 1225 "pred_table.m"
        else
#line 1226 "pred_table.m"
          {
#line 1226 "pred_table.m"
            MR_String hlds__pred_table__ArityStr_20;
#line 1226 "pred_table.m"
            MR_String hlds__pred_table__V_37_37;
#line 1226 "pred_table.m"
            MR_String hlds__pred_table__V_39_39;
#line 1226 "pred_table.m"
            MR_String hlds__pred_table__V_40_40;

#line 1226 "pred_table.m"
            {
#line 1226 "pred_table.m"
              mercury__string__int_to_string_2_p_0(hlds__pred_table__Arity_13, &hlds__pred_table__ArityStr_20);
            }
#line 1228 "pred_table.m"
            {
#line 1228 "pred_table.m"
              hlds__pred_table__V_40_40 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__pred_table__ArityStr_20);
            }
#line 1228 "pred_table.m"
            {
#line 1228 "pred_table.m"
              hlds__pred_table__V_39_39 = mercury__string__f_43_43_2_f_0(hlds__pred_table__ProcName_11, hlds__pred_table__V_40_40);
            }
#line 1227 "pred_table.m"
            {
#line 1227 "pred_table.m"
              hlds__pred_table__V_37_37 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t locate ", hlds__pred_table__V_39_39);
            }
#line 1227 "pred_table.m"
            {
#line 1227 "pred_table.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.lookup_builtin_pred_proc_id\'/8", hlds__pred_table__V_37_37);
#line 1227 "pred_table.m"
              return;
            }
#line 1226 "pred_table.m"
          }
#line 1225 "pred_table.m"
      }
#line 1230 "pred_table.m"
    {
#line 1230 "pred_table.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__pred_table__Module_9, *hlds__pred_table__PredId_15, &hlds__pred_table__PredInfo_21);
    }
#line 1231 "pred_table.m"
    {
#line 1231 "pred_table.m"
      hlds__pred_table__ProcIds_22 = hlds__hlds_pred__pred_info_procids_1_f_0(hlds__pred_table__PredInfo_21);
    }
#line 1241 "pred_table.m"
    if ((hlds__pred_table__ModeNo_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1236 "pred_table.m"
      {
#line 1236 "pred_table.m"
        MR_Integer hlds__pred_table__ProcId0_23;
#line 1234 "pred_table.m"
        MR_Word hlds__pred_table__V_53_53;

#line 1234 "pred_table.m"
        hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__ProcIds_22)) == (MR_mktag((MR_Integer) 1)));
#line 1234 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 1234 "pred_table.m"
          {
#line 1234 "pred_table.m"
            hlds__pred_table__ProcId0_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__ProcIds_22, (MR_Integer) 0)));
#line 1234 "pred_table.m"
            hlds__pred_table__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__ProcIds_22, (MR_Integer) 1)));
#line 1234 "pred_table.m"
            hlds__pred_table__succeeded = (hlds__pred_table__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1234 "pred_table.m"
          }
#line 1236 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 1235 "pred_table.m"
          *hlds__pred_table__ProcId_16 = hlds__pred_table__ProcId0_23;
#line 1236 "pred_table.m"
        else
#line 1237 "pred_table.m"
          {
#line 1237 "pred_table.m"
            MR_String hlds__pred_table__V_56_56;
#line 1237 "pred_table.m"
            MR_String hlds__pred_table__V_78_78;
#line 1237 "pred_table.m"
            MR_String hlds__pred_table__V_80_80;
#line 1237 "pred_table.m"
            MR_String hlds__pred_table__V_81_81;

#line 5309 "hlds.pred_table.c"
            {
#line 5311 "hlds.pred_table.c"
              hlds__pred_table__V_78_78 = mercury__string__int_to_string_1_f_0(hlds__pred_table__Arity_13);
            }
#line 5314 "hlds.pred_table.c"
            {
#line 5316 "hlds.pred_table.c"
              hlds__pred_table__V_80_80 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__pred_table__V_78_78);
            }
#line 5319 "hlds.pred_table.c"
            {
#line 5321 "hlds.pred_table.c"
              hlds__pred_table__V_81_81 = mercury__string__f_43_43_2_f_0(hlds__pred_table__ProcName_11, hlds__pred_table__V_80_80);
            }
#line 5324 "hlds.pred_table.c"
            {
#line 5326 "hlds.pred_table.c"
              hlds__pred_table__V_56_56 = mercury__string__f_43_43_2_f_0((MR_String) "expected single mode for ", hlds__pred_table__V_81_81);
            }
#line 1237 "pred_table.m"
            {
#line 1237 "pred_table.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.lookup_builtin_pred_proc_id\'/8", hlds__pred_table__V_56_56);
#line 1237 "pred_table.m"
              return;
            }
#line 1237 "pred_table.m"
          }
#line 1236 "pred_table.m"
      }
#line 1241 "pred_table.m"
    else
#line 1242 "pred_table.m"
      {
#line 1242 "pred_table.m"
        MR_Integer hlds__pred_table__N_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__ModeNo_14, (MR_Integer) 0)));
#line 1245 "pred_table.m"
        MR_Integer hlds__pred_table__ProcId0_66;
#line 1243 "pred_table.m"
        MR_Box hlds__pred_table__conv0_ProcId0_66;

#line 1243 "pred_table.m"
        {
#line 1243 "pred_table.m"
          hlds__pred_table__succeeded = mercury__list__index0_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, hlds__pred_table__ProcIds_22, hlds__pred_table__N_24, &hlds__pred_table__conv0_ProcId0_66);
        }
#line 1243 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 1243 "pred_table.m"
          {
#line 1243 "pred_table.m"
            hlds__pred_table__ProcId0_66 = ((MR_Integer) hlds__pred_table__conv0_ProcId0_66);
#line 1243 "pred_table.m"
            hlds__pred_table__succeeded = MR_TRUE;
#line 1243 "pred_table.m"
          }
#line 1245 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 1244 "pred_table.m"
          *hlds__pred_table__ProcId_16 = hlds__pred_table__ProcId0_66;
#line 1245 "pred_table.m"
        else
#line 1246 "pred_table.m"
          {
#line 1246 "pred_table.m"
            MR_String hlds__pred_table__V_44_44;
#line 1246 "pred_table.m"
            MR_String hlds__pred_table__V_69_69;
#line 1246 "pred_table.m"
            MR_String hlds__pred_table__V_71_71;
#line 1246 "pred_table.m"
            MR_String hlds__pred_table__V_72_72;
#line 1246 "pred_table.m"
            MR_String hlds__pred_table__V_74_74;
#line 1246 "pred_table.m"
            MR_String hlds__pred_table__V_75_75;
#line 1246 "pred_table.m"
            MR_String hlds__pred_table__V_76_76;

#line 5389 "hlds.pred_table.c"
            {
#line 5391 "hlds.pred_table.c"
              hlds__pred_table__V_69_69 = mercury__string__int_to_string_1_f_0(hlds__pred_table__Arity_13);
            }
#line 5394 "hlds.pred_table.c"
            {
#line 5396 "hlds.pred_table.c"
              hlds__pred_table__V_71_71 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__pred_table__V_69_69);
            }
#line 5399 "hlds.pred_table.c"
            {
#line 5401 "hlds.pred_table.c"
              hlds__pred_table__V_72_72 = mercury__string__f_43_43_2_f_0(hlds__pred_table__ProcName_11, hlds__pred_table__V_71_71);
            }
#line 5404 "hlds.pred_table.c"
            {
#line 5406 "hlds.pred_table.c"
              hlds__pred_table__V_74_74 = mercury__string__f_43_43_2_f_0((MR_String) " for ", hlds__pred_table__V_72_72);
            }
#line 5409 "hlds.pred_table.c"
            {
#line 5411 "hlds.pred_table.c"
              hlds__pred_table__V_75_75 = mercury__string__int_to_string_1_f_0(hlds__pred_table__N_24);
            }
#line 5414 "hlds.pred_table.c"
            {
#line 5416 "hlds.pred_table.c"
              hlds__pred_table__V_76_76 = mercury__string__f_43_43_2_f_0(hlds__pred_table__V_75_75, hlds__pred_table__V_74_74);
            }
#line 5419 "hlds.pred_table.c"
            {
#line 5421 "hlds.pred_table.c"
              hlds__pred_table__V_44_44 = mercury__string__f_43_43_2_f_0((MR_String) "there is no mode ", hlds__pred_table__V_76_76);
            }
#line 1246 "pred_table.m"
            {
#line 1246 "pred_table.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.lookup_builtin_pred_proc_id\'/8", hlds__pred_table__V_44_44);
#line 1246 "pred_table.m"
              return;
            }
#line 1246 "pred_table.m"
          }
#line 1242 "pred_table.m"
      }
#line 1191 "pred_table.m"
  }
#line 309 "pred_table.m"
}

#line 303 "pred_table.m"
void MR_CALL 
hlds__pred_table__get_proc_id_3_p_0(
#line 303 "pred_table.m"
  MR_Word hlds__pred_table__ModuleInfo_4,
#line 303 "pred_table.m"
  MR_Word hlds__pred_table__PredId_5,
#line 303 "pred_table.m"
  MR_Integer * hlds__pred_table__ProcId_6)
#line 303 "pred_table.m"
{
#line 1160 "pred_table.m"
  {
#line 1160 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 1160 "pred_table.m"
    MR_Word hlds__pred_table__PredInfo_7;
#line 1160 "pred_table.m"
    MR_Word hlds__pred_table__ProcIds_8;
#line 1165 "pred_table.m"
    MR_Integer hlds__pred_table__ProcId0_9;
#line 1163 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18;

#line 1161 "pred_table.m"
    {
#line 1161 "pred_table.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__pred_table__ModuleInfo_4, hlds__pred_table__PredId_5, &hlds__pred_table__PredInfo_7);
    }
#line 1162 "pred_table.m"
    {
#line 1162 "pred_table.m"
      hlds__pred_table__ProcIds_8 = hlds__hlds_pred__pred_info_procids_1_f_0(hlds__pred_table__PredInfo_7);
    }
#line 1163 "pred_table.m"
    hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__ProcIds_8)) == (MR_mktag((MR_Integer) 1)));
#line 1163 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 1163 "pred_table.m"
      {
#line 1163 "pred_table.m"
        hlds__pred_table__ProcId0_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__ProcIds_8, (MR_Integer) 0)));
#line 1163 "pred_table.m"
        hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__ProcIds_8, (MR_Integer) 1)));
#line 1163 "pred_table.m"
        hlds__pred_table__succeeded = (hlds__pred_table__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1163 "pred_table.m"
      }
#line 1165 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 1164 "pred_table.m"
      *hlds__pred_table__ProcId_6 = hlds__pred_table__ProcId0_9;
#line 1165 "pred_table.m"
    else
#line 1166 "pred_table.m"
      {
#line 1166 "pred_table.m"
        MR_String hlds__pred_table__Name_10;
#line 1166 "pred_table.m"
        MR_Word hlds__pred_table__PredOrFunc_11;
#line 1166 "pred_table.m"
        MR_Integer hlds__pred_table__Arity_12;
#line 1166 "pred_table.m"
        MR_String hlds__pred_table__PredOrFuncStr_13;
#line 1166 "pred_table.m"
        MR_String hlds__pred_table__ArityString_14;
#line 1166 "pred_table.m"
        MR_String hlds__pred_table__Message_15;

#line 1166 "pred_table.m"
        {
#line 1166 "pred_table.m"
          hlds__pred_table__Name_10 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__pred_table__PredInfo_7);
        }
#line 1167 "pred_table.m"
        {
#line 1167 "pred_table.m"
          hlds__pred_table__PredOrFunc_11 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__pred_table__PredInfo_7);
        }
#line 1168 "pred_table.m"
        {
#line 1168 "pred_table.m"
          hlds__pred_table__Arity_12 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__pred_table__PredInfo_7);
        }
#line 1169 "pred_table.m"
        {
#line 1169 "pred_table.m"
          hlds__pred_table__PredOrFuncStr_13 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(hlds__pred_table__PredOrFunc_11);
        }
#line 1170 "pred_table.m"
        {
#line 1170 "pred_table.m"
          mercury__string__int_to_string_2_p_0(hlds__pred_table__Arity_12, &hlds__pred_table__ArityString_14);
        }
#line 1178 "pred_table.m"
        if ((hlds__pred_table__ProcIds_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1172 "pred_table.m"
          {
#line 1172 "pred_table.m"
            MR_Word hlds__pred_table__V_35_35;
#line 1172 "pred_table.m"
            MR_Word hlds__pred_table__V_37_37;
#line 1172 "pred_table.m"
            MR_Word hlds__pred_table__V_38_38;
#line 1172 "pred_table.m"
            MR_Word hlds__pred_table__V_40_40;
#line 1172 "pred_table.m"
            MR_Word hlds__pred_table__V_41_41;
#line 1172 "pred_table.m"
            MR_Word hlds__pred_table__V_43_43;

#line 1175 "pred_table.m"
            {
#line 1175 "pred_table.m"
              hlds__pred_table__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1175 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_43_43, 0) = ((MR_Box) (hlds__pred_table__ArityString_14));
#line 1175 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[8])));
#line 1175 "pred_table.m"
            }
#line 1175 "pred_table.m"
            {
#line 1175 "pred_table.m"
              hlds__pred_table__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1175 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_41_41, 0) = ((MR_Box) ((MR_String) "/"));
#line 1175 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_41_41, 1) = ((MR_Box) (hlds__pred_table__V_43_43));
#line 1175 "pred_table.m"
            }
#line 1175 "pred_table.m"
            {
#line 1175 "pred_table.m"
              hlds__pred_table__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1175 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_40_40, 0) = ((MR_Box) (hlds__pred_table__Name_10));
#line 1175 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_40_40, 1) = ((MR_Box) (hlds__pred_table__V_41_41));
#line 1175 "pred_table.m"
            }
#line 1174 "pred_table.m"
            {
#line 1174 "pred_table.m"
              hlds__pred_table__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1174 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_38_38, 0) = ((MR_Box) ((MR_String) "\n\140"));
#line 1174 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_38_38, 1) = ((MR_Box) (hlds__pred_table__V_40_40));
#line 1174 "pred_table.m"
            }
#line 1174 "pred_table.m"
            {
#line 1174 "pred_table.m"
              hlds__pred_table__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1174 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_37_37, 0) = ((MR_Box) (hlds__pred_table__PredOrFuncStr_13));
#line 1174 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_37_37, 1) = ((MR_Box) (hlds__pred_table__V_38_38));
#line 1174 "pred_table.m"
            }
#line 1173 "pred_table.m"
            {
#line 1173 "pred_table.m"
              hlds__pred_table__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1173 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_35_35, 0) = ((MR_Box) ((MR_String) "cannot take address of "));
#line 1173 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_35_35, 1) = ((MR_Box) (hlds__pred_table__V_37_37));
#line 1173 "pred_table.m"
            }
#line 1173 "pred_table.m"
            {
#line 1173 "pred_table.m"
              mercury__string__append_list_2_p_0(hlds__pred_table__V_35_35, &hlds__pred_table__Message_15);
            }
#line 1172 "pred_table.m"
          }
#line 1178 "pred_table.m"
        else
#line 1179 "pred_table.m"
          {
#line 1179 "pred_table.m"
            MR_Word hlds__pred_table__V_19_19;
#line 1179 "pred_table.m"
            MR_Word hlds__pred_table__V_21_21;
#line 1179 "pred_table.m"
            MR_Word hlds__pred_table__V_23_23;
#line 1179 "pred_table.m"
            MR_Word hlds__pred_table__V_24_24;
#line 1179 "pred_table.m"
            MR_Word hlds__pred_table__V_26_26;
#line 1179 "pred_table.m"
            MR_Word hlds__pred_table__V_27_27;
#line 1179 "pred_table.m"
            MR_Word hlds__pred_table__V_29_29;

#line 1183 "pred_table.m"
            {
#line 1183 "pred_table.m"
              hlds__pred_table__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1183 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_29_29, 0) = ((MR_Box) (hlds__pred_table__ArityString_14));
#line 1183 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[10])));
#line 1183 "pred_table.m"
            }
#line 1183 "pred_table.m"
            {
#line 1183 "pred_table.m"
              hlds__pred_table__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1183 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_27_27, 0) = ((MR_Box) ((MR_String) "/"));
#line 1183 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_27_27, 1) = ((MR_Box) (hlds__pred_table__V_29_29));
#line 1183 "pred_table.m"
            }
#line 1183 "pred_table.m"
            {
#line 1183 "pred_table.m"
              hlds__pred_table__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1183 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_26_26, 0) = ((MR_Box) (hlds__pred_table__Name_10));
#line 1183 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_26_26, 1) = ((MR_Box) (hlds__pred_table__V_27_27));
#line 1183 "pred_table.m"
            }
#line 1182 "pred_table.m"
            {
#line 1182 "pred_table.m"
              hlds__pred_table__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1182 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_24_24, 0) = ((MR_Box) ((MR_String) "\n\140"));
#line 1182 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_24_24, 1) = ((MR_Box) (hlds__pred_table__V_26_26));
#line 1182 "pred_table.m"
            }
#line 1182 "pred_table.m"
            {
#line 1182 "pred_table.m"
              hlds__pred_table__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1182 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_23_23, 0) = ((MR_Box) (hlds__pred_table__PredOrFuncStr_13));
#line 1182 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_23_23, 1) = ((MR_Box) (hlds__pred_table__V_24_24));
#line 1182 "pred_table.m"
            }
#line 1181 "pred_table.m"
            {
#line 1181 "pred_table.m"
              hlds__pred_table__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1181 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_21_21, 0) = ((MR_Box) ((MR_String) "taking address of "));
#line 1181 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_21_21, 1) = ((MR_Box) (hlds__pred_table__V_23_23));
#line 1181 "pred_table.m"
            }
#line 1180 "pred_table.m"
            {
#line 1180 "pred_table.m"
              hlds__pred_table__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1180 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_19_19, 0) = ((MR_Box) ((MR_String) "sorry, not implemented: "));
#line 1180 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_19_19, 1) = ((MR_Box) (hlds__pred_table__V_21_21));
#line 1180 "pred_table.m"
            }
#line 1180 "pred_table.m"
            {
#line 1180 "pred_table.m"
              mercury__string__append_list_2_p_0(hlds__pred_table__V_19_19, &hlds__pred_table__Message_15);
            }
#line 1179 "pred_table.m"
          }
#line 1187 "pred_table.m"
        {
#line 1187 "pred_table.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.get_proc_id\'/3", hlds__pred_table__Message_15);
#line 1187 "pred_table.m"
          return;
        }
#line 1166 "pred_table.m"
      }
#line 1160 "pred_table.m"
  }
#line 303 "pred_table.m"
}

#line 295 "pred_table.m"
MR_bool MR_CALL 
hlds__pred_table__get_pred_id_by_types_10_p_0(
#line 295 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_11,
#line 295 "pred_table.m"
  MR_Word hlds__pred_table__SymName_12,
#line 295 "pred_table.m"
  MR_Word hlds__pred_table__PredOrFunc_13,
#line 295 "pred_table.m"
  MR_Word hlds__pred_table__TVarSet_14,
#line 295 "pred_table.m"
  MR_Word hlds__pred_table__ExistQTVars_15,
#line 295 "pred_table.m"
  MR_Word hlds__pred_table__ArgTypes_16,
#line 295 "pred_table.m"
  MR_Word hlds__pred_table__HeadTypeParams_17,
#line 295 "pred_table.m"
  MR_Word hlds__pred_table__ModuleInfo_18,
#line 295 "pred_table.m"
  MR_Word hlds__pred_table__Context_19,
#line 295 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_20)
#line 295 "pred_table.m"
{
#line 1122 "pred_table.m"
  {
#line 1122 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 1122 "pred_table.m"
    MR_Word hlds__pred_table__PredicateTable_21;
#line 1122 "pred_table.m"
    MR_Integer hlds__pred_table__Arity_22;
#line 1122 "pred_table.m"
    MR_Word hlds__pred_table__PredIds_23;
#line 1129 "pred_table.m"
    MR_Word hlds__pred_table___PredName_25;

#line 1123 "pred_table.m"
    {
#line 1123 "pred_table.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__pred_table__ModuleInfo_18, &hlds__pred_table__PredicateTable_21);
    }
#line 1124 "pred_table.m"
    {
#line 1124 "pred_table.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__pred_table__ArgTypes_16, &hlds__pred_table__Arity_22);
    }
#line 1125 "pred_table.m"
    {
#line 1125 "pred_table.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__pred_table__PredicateTable_21, hlds__pred_table__IsFullyQualified_11, hlds__pred_table__PredOrFunc_13, hlds__pred_table__SymName_12, hlds__pred_table__Arity_22, &hlds__pred_table__PredIds_23);
    }
#line 1129 "pred_table.m"
    {
#line 1129 "pred_table.m"
      hlds__pred_table__succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(hlds__pred_table__ModuleInfo_18, hlds__pred_table__PredIds_23, hlds__pred_table__TVarSet_14, hlds__pred_table__ExistQTVars_15, hlds__pred_table__ArgTypes_16, hlds__pred_table__HeadTypeParams_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__pred_table__Context_19, hlds__pred_table__PredId_20, &hlds__pred_table___PredName_25);
    }
#line 1122 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 1122 "pred_table.m"
  }
#line 295 "pred_table.m"
}

#line 287 "pred_table.m"
void MR_CALL 
hlds__pred_table__get_pred_id_and_proc_id_by_types_11_p_0(
#line 287 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_12,
#line 287 "pred_table.m"
  MR_Word hlds__pred_table__SymName_13,
#line 287 "pred_table.m"
  MR_Word hlds__pred_table__PredOrFunc_14,
#line 287 "pred_table.m"
  MR_Word hlds__pred_table__TVarSet_15,
#line 287 "pred_table.m"
  MR_Word hlds__pred_table__ExistQTVars_16,
#line 287 "pred_table.m"
  MR_Word hlds__pred_table__ArgTypes_17,
#line 287 "pred_table.m"
  MR_Word hlds__pred_table__HeadTypeParams_18,
#line 287 "pred_table.m"
  MR_Word hlds__pred_table__ModuleInfo_19,
#line 287 "pred_table.m"
  MR_Word hlds__pred_table__Context_20,
#line 287 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_21,
#line 287 "pred_table.m"
  MR_Integer * hlds__pred_table__ProcId_22)
#line 287 "pred_table.m"
{
#line 1140 "pred_table.m"
  {
#line 1140 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 1147 "pred_table.m"
    MR_Word hlds__pred_table__PredId0_23;
#line 1122 "pred_table.m"
    MR_Word hlds__pred_table__PredicateTable_54;
#line 1122 "pred_table.m"
    MR_Integer hlds__pred_table__Arity_55;
#line 1122 "pred_table.m"
    MR_Word hlds__pred_table__PredIds_56;
#line 1129 "pred_table.m"
    MR_Word hlds__pred_table___PredName_58;

#line 1123 "pred_table.m"
    {
#line 1123 "pred_table.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__pred_table__ModuleInfo_19, &hlds__pred_table__PredicateTable_54);
    }
#line 1124 "pred_table.m"
    {
#line 1124 "pred_table.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__pred_table__ArgTypes_17, &hlds__pred_table__Arity_55);
    }
#line 1125 "pred_table.m"
    {
#line 1125 "pred_table.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__pred_table__PredicateTable_54, hlds__pred_table__IsFullyQualified_12, hlds__pred_table__PredOrFunc_14, hlds__pred_table__SymName_13, hlds__pred_table__Arity_55, &hlds__pred_table__PredIds_56);
    }
#line 1129 "pred_table.m"
    {
#line 1129 "pred_table.m"
      hlds__pred_table__succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(hlds__pred_table__ModuleInfo_19, hlds__pred_table__PredIds_56, hlds__pred_table__TVarSet_15, hlds__pred_table__ExistQTVars_16, hlds__pred_table__ArgTypes_17, hlds__pred_table__HeadTypeParams_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__pred_table__Context_20, &hlds__pred_table__PredId0_23, &hlds__pred_table___PredName_58);
    }
#line 1147 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 1146 "pred_table.m"
      *hlds__pred_table__PredId_21 = hlds__pred_table__PredId0_23;
#line 1147 "pred_table.m"
    else
#line 1150 "pred_table.m"
      {
#line 1150 "pred_table.m"
        MR_Integer hlds__pred_table__Arity_24;
#line 1150 "pred_table.m"
        MR_String hlds__pred_table__PredOrFuncStr_25;
#line 1150 "pred_table.m"
        MR_String hlds__pred_table__NameStr_26;
#line 1150 "pred_table.m"
        MR_String hlds__pred_table__ArityString_27;
#line 1150 "pred_table.m"
        MR_String hlds__pred_table__Msg_28;
#line 1150 "pred_table.m"
        MR_Word hlds__pred_table__V_29_29;
#line 1150 "pred_table.m"
        MR_Word hlds__pred_table__V_31_31;
#line 1150 "pred_table.m"
        MR_Word hlds__pred_table__V_32_32;
#line 1150 "pred_table.m"
        MR_Word hlds__pred_table__V_34_34;
#line 1150 "pred_table.m"
        MR_Word hlds__pred_table__V_35_35;
#line 1150 "pred_table.m"
        MR_Word hlds__pred_table__V_37_37;

#line 1150 "pred_table.m"
        {
#line 1150 "pred_table.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__pred_table__ArgTypes_17, &hlds__pred_table__Arity_24);
        }
#line 1151 "pred_table.m"
        {
#line 1151 "pred_table.m"
          hlds__pred_table__PredOrFuncStr_25 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(hlds__pred_table__PredOrFunc_14);
        }
#line 1152 "pred_table.m"
        {
#line 1152 "pred_table.m"
          hlds__pred_table__NameStr_26 = mdbcomp__prim_data__sym_name_to_string_1_f_0(hlds__pred_table__SymName_13);
        }
#line 1153 "pred_table.m"
        {
#line 1153 "pred_table.m"
          mercury__string__int_to_string_2_p_0(hlds__pred_table__Arity_24, &hlds__pred_table__ArityString_27);
        }
#line 1155 "pred_table.m"
        {
#line 1155 "pred_table.m"
          hlds__pred_table__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1155 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_37_37, 0) = ((MR_Box) (hlds__pred_table__ArityString_27));
#line 1155 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[13])));
#line 1155 "pred_table.m"
        }
#line 1155 "pred_table.m"
        {
#line 1155 "pred_table.m"
          hlds__pred_table__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1155 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_35_35, 0) = ((MR_Box) ((MR_String) "/"));
#line 1155 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_35_35, 1) = ((MR_Box) (hlds__pred_table__V_37_37));
#line 1155 "pred_table.m"
        }
#line 1155 "pred_table.m"
        {
#line 1155 "pred_table.m"
          hlds__pred_table__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1155 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_34_34, 0) = ((MR_Box) (hlds__pred_table__NameStr_26));
#line 1155 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_34_34, 1) = ((MR_Box) (hlds__pred_table__V_35_35));
#line 1155 "pred_table.m"
        }
#line 1154 "pred_table.m"
        {
#line 1154 "pred_table.m"
          hlds__pred_table__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1154 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_32_32, 0) = ((MR_Box) ((MR_String) "\n\140"));
#line 1154 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_32_32, 1) = ((MR_Box) (hlds__pred_table__V_34_34));
#line 1154 "pred_table.m"
        }
#line 1154 "pred_table.m"
        {
#line 1154 "pred_table.m"
          hlds__pred_table__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1154 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_31_31, 0) = ((MR_Box) (hlds__pred_table__PredOrFuncStr_25));
#line 1154 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_31_31, 1) = ((MR_Box) (hlds__pred_table__V_32_32));
#line 1154 "pred_table.m"
        }
#line 1154 "pred_table.m"
        {
#line 1154 "pred_table.m"
          hlds__pred_table__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1154 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_29_29, 0) = ((MR_Box) ((MR_String) "undefined/invalid "));
#line 1154 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_29_29, 1) = ((MR_Box) (hlds__pred_table__V_31_31));
#line 1154 "pred_table.m"
        }
#line 1154 "pred_table.m"
        {
#line 1154 "pred_table.m"
          mercury__string__append_list_2_p_0(hlds__pred_table__V_29_29, &hlds__pred_table__Msg_28);
        }
#line 1156 "pred_table.m"
        {
#line 1156 "pred_table.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.get_pred_id_and_proc_id_by_types\'/11", hlds__pred_table__Msg_28);
#line 1156 "pred_table.m"
          return;
        }
#line 1150 "pred_table.m"
      }
#line 1158 "pred_table.m"
    {
#line 1158 "pred_table.m"
      hlds__pred_table__get_proc_id_3_p_0(hlds__pred_table__ModuleInfo_19, *hlds__pred_table__PredId_21, hlds__pred_table__ProcId_22);
#line 1158 "pred_table.m"
      return;
    }
#line 1140 "pred_table.m"
  }
#line 287 "pred_table.m"
}

#line 273 "pred_table.m"
MR_bool MR_CALL 
hlds__pred_table__find_matching_pred_id_10_p_0(
#line 273 "pred_table.m"
  MR_Word hlds__pred_table__ModuleInfo_11,
#line 273 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 273 "pred_table.m"
  MR_Word hlds__pred_table__TVarSet_14,
#line 273 "pred_table.m"
  MR_Word hlds__pred_table__ExistQTVars_15,
#line 273 "pred_table.m"
  MR_Word hlds__pred_table__ArgTypes_16,
#line 273 "pred_table.m"
  MR_Word hlds__pred_table__HeadTypeParams_17,
#line 273 "pred_table.m"
  MR_Word hlds__pred_table__MaybeConstraintSearch_18,
#line 273 "pred_table.m"
  MR_Word hlds__pred_table__Context_19,
#line 273 "pred_table.m"
  MR_Word * hlds__pred_table__ThePredId_20,
#line 273 "pred_table.m"
  MR_Word * hlds__pred_table__PredName_21)
#line 273 "pred_table.m"
{
#line 1040 "pred_table.m"
  while (MR_TRUE)
#line 1040 "pred_table.m"
    {
#line 1040 "pred_table.m"
      /* tailcall optimized into a loop */
#line 1040 "pred_table.m"
      {
#line 1040 "pred_table.m"
        MR_bool hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1040 "pred_table.m"
        MR_Word hlds__pred_table__PredId_12;
#line 1040 "pred_table.m"
        MR_Word hlds__pred_table__PredIds_13;
#line 1094 "pred_table.m"
        MR_Word hlds__pred_table__PredInfo_22;
#line 1045 "pred_table.m"
        MR_Word hlds__pred_table__PredTVarSet_23;
#line 1045 "pred_table.m"
        MR_Word hlds__pred_table__PredExistQVars0_24;
#line 1045 "pred_table.m"
        MR_Word hlds__pred_table__PredArgTypes0_25;
#line 1045 "pred_table.m"
        MR_Word hlds__pred_table__PredKindMap_26;

#line 1040 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 1040 "pred_table.m"
          {
#line 1040 "pred_table.m"
            hlds__pred_table__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 1040 "pred_table.m"
            hlds__pred_table__PredIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));
#line 1045 "pred_table.m"
            {
#line 1045 "pred_table.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(hlds__pred_table__ModuleInfo_11, hlds__pred_table__PredId_12, &hlds__pred_table__PredInfo_22);
            }
#line 1046 "pred_table.m"
            {
#line 1046 "pred_table.m"
              hlds__hlds_pred__pred_info_get_arg_types_4_p_0(hlds__pred_table__PredInfo_22, &hlds__pred_table__PredTVarSet_23, &hlds__pred_table__PredExistQVars0_24, &hlds__pred_table__PredArgTypes0_25);
            }
#line 1048 "pred_table.m"
            {
#line 1048 "pred_table.m"
              hlds__hlds_pred__pred_info_get_tvar_kinds_2_p_0(hlds__pred_table__PredInfo_22, &hlds__pred_table__PredKindMap_26);
            }
#line 1050 "pred_table.m"
            {
#line 1050 "pred_table.m"
              hlds__pred_table__succeeded = parse_tree__prog_type__arg_type_list_subsumes_8_p_0(hlds__pred_table__TVarSet_14, hlds__pred_table__ExistQTVars_15, hlds__pred_table__ArgTypes_16, hlds__pred_table__HeadTypeParams_17, hlds__pred_table__PredTVarSet_23, hlds__pred_table__PredKindMap_26, hlds__pred_table__PredExistQVars0_24, hlds__pred_table__PredArgTypes0_25);
            }
#line 1045 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 1055 "pred_table.m"
              {
#line 1055 "pred_table.m"
                if ((hlds__pred_table__MaybeConstraintSearch_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1054 "pred_table.m"
                  hlds__pred_table__succeeded = MR_TRUE;
#line 1055 "pred_table.m"
                else
#line 1056 "pred_table.m"
                  {
#line 1056 "pred_table.m"
                    MR_Word hlds__pred_table__ConstraintSearch_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__MaybeConstraintSearch_18, (MR_Integer) 0)));
#line 1056 "pred_table.m"
                    MR_Word hlds__pred_table__ProgConstraints_28;
#line 1056 "pred_table.m"
                    MR_Word hlds__pred_table__UnivConstraints_29;
#line 1056 "pred_table.m"
                    MR_Integer hlds__pred_table__NumConstraints_31;
#line 1056 "pred_table.m"
                    MR_Word hlds__pred_table__ProvenConstraints_32;
#line 1059 "pred_table.m"
                    MR_Word hlds__pred_table__V_30_30;
#line 1061 "pred_table.m"
                    MR_bool MR_CALL (* hlds__pred_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 1061 "pred_table.m"
                    MR_Box hlds__pred_table__conv1_ProvenConstraints_32;

#line 1058 "pred_table.m"
                    {
#line 1058 "pred_table.m"
                      hlds__hlds_pred__pred_info_get_class_context_2_p_0(hlds__pred_table__PredInfo_22, &hlds__pred_table__ProgConstraints_28);
                    }
#line 1059 "pred_table.m"
                    hlds__pred_table__UnivConstraints_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__ProgConstraints_28, (MR_Integer) 0)));
#line 1059 "pred_table.m"
                    hlds__pred_table__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__ProgConstraints_28, (MR_Integer) 1)));
#line 1060 "pred_table.m"
                    {
#line 1060 "pred_table.m"
                      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__pred_table__UnivConstraints_29, &hlds__pred_table__NumConstraints_31);
                    }
#line 1061 "pred_table.m"
                    hlds__pred_table__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__pred_table__ConstraintSearch_27, (MR_Integer) 1)));
#line 1061 "pred_table.m"
                    {
#line 1061 "pred_table.m"
                      hlds__pred_table__succeeded = hlds__pred_table__func_0(((MR_Box) hlds__pred_table__ConstraintSearch_27), ((MR_Box) (hlds__pred_table__NumConstraints_31)), &hlds__pred_table__conv1_ProvenConstraints_32);
                    }
#line 1061 "pred_table.m"
                    if (hlds__pred_table__succeeded)
#line 1061 "pred_table.m"
                      {
#line 1061 "pred_table.m"
                        hlds__pred_table__ProvenConstraints_32 = ((MR_Word) hlds__pred_table__conv1_ProvenConstraints_32);
#line 1061 "pred_table.m"
                        hlds__pred_table__succeeded = MR_TRUE;
#line 1061 "pred_table.m"
                      }
#line 1056 "pred_table.m"
                    if (hlds__pred_table__succeeded)
#line 1062 "pred_table.m"
                      {
#line 1062 "pred_table.m"
                        hlds__pred_table__succeeded = hlds__pred_table__univ_constraints_match_2_p_0(hlds__pred_table__ProvenConstraints_32, hlds__pred_table__UnivConstraints_29);
                      }
#line 1056 "pred_table.m"
                  }
#line 1055 "pred_table.m"
              }
#line 1094 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 1068 "pred_table.m"
              {
#line 1068 "pred_table.m"
                MR_String hlds__pred_table__PName_33;
#line 1068 "pred_table.m"
                MR_Word hlds__pred_table__Module_34;
#line 1091 "pred_table.m"
                MR_Word hlds__pred_table__OtherPredId_35;
#line 1072 "pred_table.m"
                MR_Word hlds__pred_table___OtherPredName_36;

#line 1068 "pred_table.m"
                {
#line 1068 "pred_table.m"
                  hlds__pred_table__PName_33 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__pred_table__PredInfo_22);
                }
#line 1069 "pred_table.m"
                {
#line 1069 "pred_table.m"
                  hlds__pred_table__Module_34 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__pred_table__PredInfo_22);
                }
#line 1070 "pred_table.m"
                {
#line 1070 "pred_table.m"
                  MR_Word base;
#line 1070 "pred_table.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1070 "pred_table.m"
                  *hlds__pred_table__PredName_21 = base;
#line 1070 "pred_table.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__pred_table__Module_34));
#line 1070 "pred_table.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__pred_table__PName_33));
#line 1070 "pred_table.m"
                }
#line 1072 "pred_table.m"
                {
#line 1072 "pred_table.m"
                  hlds__pred_table__succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(hlds__pred_table__ModuleInfo_11, hlds__pred_table__PredIds_13, hlds__pred_table__TVarSet_14, hlds__pred_table__ExistQTVars_15, hlds__pred_table__ArgTypes_16, hlds__pred_table__HeadTypeParams_17, hlds__pred_table__MaybeConstraintSearch_18, hlds__pred_table__Context_19, &hlds__pred_table__OtherPredId_35, &hlds__pred_table___OtherPredName_36);
                }
#line 1091 "pred_table.m"
                if (hlds__pred_table__succeeded)
#line 1076 "pred_table.m"
                  {
#line 1076 "pred_table.m"
                    MR_Word hlds__pred_table__OtherPredInfo_37;
#line 1076 "pred_table.m"
                    MR_Word hlds__pred_table__PredCallId_38;
#line 1076 "pred_table.m"
                    MR_Word hlds__pred_table__OtherPredCallId_39;
#line 1080 "pred_table.m"
                    MR_Word hlds__pred_table__Globals_41;
#line 1080 "pred_table.m"
                    MR_Word hlds__pred_table__Pieces_42;
#line 1080 "pred_table.m"
                    MR_Word hlds__pred_table__V_46_46;
#line 1080 "pred_table.m"
                    MR_Word hlds__pred_table__V_47_47;
#line 1080 "pred_table.m"
                    MR_Word hlds__pred_table__V_48_48;
#line 1080 "pred_table.m"
                    MR_Word hlds__pred_table__V_51_51;
#line 1080 "pred_table.m"
                    MR_Word hlds__pred_table__V_52_52;

#line 1076 "pred_table.m"
                    {
#line 1076 "pred_table.m"
                      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__pred_table__ModuleInfo_11, hlds__pred_table__OtherPredId_35, &hlds__pred_table__OtherPredInfo_37);
                    }
#line 1077 "pred_table.m"
                    {
#line 1077 "pred_table.m"
                      hlds__hlds_pred__pred_info_get_call_id_2_p_0(hlds__pred_table__PredInfo_22, &hlds__pred_table__PredCallId_38);
                    }
#line 1078 "pred_table.m"
                    {
#line 1078 "pred_table.m"
                      hlds__hlds_pred__pred_info_get_call_id_2_p_0(hlds__pred_table__OtherPredInfo_37, &hlds__pred_table__OtherPredCallId_39);
                    }
#line 1081 "pred_table.m"
                    {
#line 1081 "pred_table.m"
                      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__pred_table__ModuleInfo_11, &hlds__pred_table__Globals_41);
                    }
#line 1084 "pred_table.m"
                    {
#line 1084 "pred_table.m"
                      hlds__pred_table__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1084 "pred_table.m"
                      MR_hl_field(MR_mktag(3), hlds__pred_table__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 1084 "pred_table.m"
                      MR_hl_field(MR_mktag(3), hlds__pred_table__V_47_47, 1) = ((MR_Box) (hlds__pred_table__PredCallId_38));
#line 1084 "pred_table.m"
                    }
#line 1085 "pred_table.m"
                    {
#line 1085 "pred_table.m"
                      hlds__pred_table__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1085 "pred_table.m"
                      MR_hl_field(MR_mktag(3), hlds__pred_table__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 1085 "pred_table.m"
                      MR_hl_field(MR_mktag(3), hlds__pred_table__V_52_52, 1) = ((MR_Box) (hlds__pred_table__OtherPredCallId_39));
#line 1085 "pred_table.m"
                    }
#line 1084 "pred_table.m"
                    {
#line 1084 "pred_table.m"
                      hlds__pred_table__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1084 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_51_51, 0) = ((MR_Box) (hlds__pred_table__V_52_52));
#line 1084 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[6])));
#line 1084 "pred_table.m"
                    }
#line 1084 "pred_table.m"
                    {
#line 1084 "pred_table.m"
                      hlds__pred_table__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1084 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_48_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__pred_table_scalar_common_1[12])));
#line 1084 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_48_48, 1) = ((MR_Box) (hlds__pred_table__V_51_51));
#line 1084 "pred_table.m"
                    }
#line 1083 "pred_table.m"
                    {
#line 1083 "pred_table.m"
                      hlds__pred_table__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1083 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_46_46, 0) = ((MR_Box) (hlds__pred_table__V_47_47));
#line 1083 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_46_46, 1) = ((MR_Box) (hlds__pred_table__V_48_48));
#line 1083 "pred_table.m"
                    }
#line 1082 "pred_table.m"
                    {
#line 1082 "pred_table.m"
                      hlds__pred_table__Pieces_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1082 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__Pieces_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__pred_table_scalar_common_1[11])));
#line 1082 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__Pieces_42, 1) = ((MR_Box) (hlds__pred_table__V_46_46));
#line 1082 "pred_table.m"
                    }
#line 1088 "pred_table.m"
                    {
#line 1088 "pred_table.m"
                      parse_tree__error_util__write_error_pieces_6_p_0(hlds__pred_table__Globals_41, hlds__pred_table__Context_19, (MR_Integer) 0, hlds__pred_table__Pieces_42);
                    }
#line 1090 "pred_table.m"
                    {
#line 1090 "pred_table.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.find_matching_pred_id\'/10", (MR_String) "unresolvable predicate overloading");
                    }
#line 1076 "pred_table.m"
                  }
#line 1091 "pred_table.m"
                else
#line 1092 "pred_table.m"
                  *hlds__pred_table__ThePredId_20 = hlds__pred_table__PredId_12;
#line 1068 "pred_table.m"
                hlds__pred_table__succeeded = MR_TRUE;
#line 1068 "pred_table.m"
              }
#line 1094 "pred_table.m"
            else
#line 1095 "pred_table.m"
              {
#line 1095 "pred_table.m"
                /* direct tailcall eliminated */
#line 1095 "pred_table.m"
                {
#line 1095 "pred_table.m"
                  MR_Word hlds__pred_table__HeadVar__2__tmp_copy_2 = hlds__pred_table__PredIds_13;

#line 1095 "pred_table.m"
                  hlds__pred_table__HeadVar__2_2 = hlds__pred_table__HeadVar__2__tmp_copy_2;
#line 1095 "pred_table.m"
                }
#line 1095 "pred_table.m"
                continue;
#line 1095 "pred_table.m"
              }
#line 1040 "pred_table.m"
          }
#line 1040 "pred_table.m"
        return hlds__pred_table__succeeded;
#line 1040 "pred_table.m"
      }
#line 1040 "pred_table.m"
      break;
#line 1040 "pred_table.m"
    }
#line 273 "pred_table.m"
}

#line 263 "pred_table.m"
void MR_CALL 
hlds__pred_table__resolve_pred_overloading_10_p_0(
#line 263 "pred_table.m"
  MR_Word hlds__pred_table__ModuleInfo_11,
#line 263 "pred_table.m"
  MR_Word hlds__pred_table__CallerMarkers_12,
#line 263 "pred_table.m"
  MR_Word hlds__pred_table__TVarSet_13,
#line 263 "pred_table.m"
  MR_Word hlds__pred_table__ExistQTVars_14,
#line 263 "pred_table.m"
  MR_Word hlds__pred_table__ArgTypes_15,
#line 263 "pred_table.m"
  MR_Word hlds__pred_table__HeadTypeParams_16,
#line 263 "pred_table.m"
  MR_Word hlds__pred_table__Context_17,
#line 263 "pred_table.m"
  MR_Word hlds__pred_table__PredName0_18,
#line 263 "pred_table.m"
  MR_Word * hlds__pred_table__PredName_19,
#line 263 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_20)
#line 263 "pred_table.m"
{
#line 1014 "pred_table.m"
  {
#line 1014 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 1014 "pred_table.m"
    MR_Word hlds__pred_table__PredTable_21;
#line 1014 "pred_table.m"
    MR_Word hlds__pred_table__IsFullyQualified_22;
#line 1014 "pred_table.m"
    MR_Word hlds__pred_table__PredIds_23;
#line 1032 "pred_table.m"
    MR_Word hlds__pred_table__PredId1_24;
#line 1032 "pred_table.m"
    MR_Word hlds__pred_table__PredName1_25;

#line 1019 "pred_table.m"
    {
#line 1019 "pred_table.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__pred_table__ModuleInfo_11, &hlds__pred_table__PredTable_21);
    }
#line 1020 "pred_table.m"
    {
#line 1020 "pred_table.m"
      hlds__pred_table__IsFullyQualified_22 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(hlds__pred_table__CallerMarkers_12);
    }
#line 1021 "pred_table.m"
    {
#line 1021 "pred_table.m"
      hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0(hlds__pred_table__PredTable_21, hlds__pred_table__IsFullyQualified_22, hlds__pred_table__PredName0_18, &hlds__pred_table__PredIds_23);
    }
#line 1027 "pred_table.m"
    {
#line 1027 "pred_table.m"
      hlds__pred_table__succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(hlds__pred_table__ModuleInfo_11, hlds__pred_table__PredIds_23, hlds__pred_table__TVarSet_13, hlds__pred_table__ExistQTVars_14, hlds__pred_table__ArgTypes_15, hlds__pred_table__HeadTypeParams_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__pred_table__Context_17, &hlds__pred_table__PredId1_24, &hlds__pred_table__PredName1_25);
    }
#line 1032 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 1030 "pred_table.m"
      {
#line 1030 "pred_table.m"
        *hlds__pred_table__PredId_20 = hlds__pred_table__PredId1_24;
#line 1031 "pred_table.m"
        *hlds__pred_table__PredName_19 = hlds__pred_table__PredName1_25;
#line 1030 "pred_table.m"
      }
#line 1032 "pred_table.m"
    else
#line 1035 "pred_table.m"
      {
#line 1035 "pred_table.m"
        {
#line 1035 "pred_table.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.resolve_pred_overloading\'/10", (MR_String) "type error in pred call: no matching pred");
#line 1035 "pred_table.m"
          return;
        }
#line 1035 "pred_table.m"
      }
#line 1014 "pred_table.m"
  }
#line 263 "pred_table.m"
}

#line 256 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_insert_4_p_0(
#line 256 "pred_table.m"
  MR_Word hlds__pred_table__PredInfo_5,
#line 256 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_6,
#line 256 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8,
#line 256 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_9)
#line 256 "pred_table.m"
{
#line 883 "pred_table.m"
  {
#line 883 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 884 "pred_table.m"
    {
#line 884 "pred_table.m"
      hlds__pred_table__do_predicate_table_insert_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__pred_table__PredInfo_5, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__pred_table__PredId_6, hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, hlds__pred_table__STATE_VARIABLE_PredicateTable_9);
#line 884 "pred_table.m"
      return;
    }
#line 883 "pred_table.m"
  }
#line 256 "pred_table.m"
}

#line 247 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_insert_qual_6_p_0(
#line 247 "pred_table.m"
  MR_Word hlds__pred_table__PredInfo_7,
#line 247 "pred_table.m"
  MR_Word hlds__pred_table__NeedQual_8,
#line 247 "pred_table.m"
  MR_Word hlds__pred_table__QualInfo_9,
#line 247 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_10,
#line 247 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_12,
#line 247 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_13)
#line 247 "pred_table.m"
{
#line 888 "pred_table.m"
  {
#line 888 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 888 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15;

#line 889 "pred_table.m"
    {
#line 889 "pred_table.m"
      hlds__pred_table__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 889 "pred_table.m"
      MR_hl_field(MR_mktag(1), hlds__pred_table__V_15_15, 0) = ((MR_Box) (hlds__pred_table__QualInfo_9));
#line 889 "pred_table.m"
    }
#line 889 "pred_table.m"
    {
#line 889 "pred_table.m"
      hlds__pred_table__do_predicate_table_insert_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__pred_table__PredInfo_7, hlds__pred_table__NeedQual_8, hlds__pred_table__V_15_15, hlds__pred_table__PredId_10, hlds__pred_table__STATE_VARIABLE_PredicateTable_0_12, hlds__pred_table__STATE_VARIABLE_PredicateTable_13);
#line 889 "pred_table.m"
      return;
    }
#line 888 "pred_table.m"
  }
#line 247 "pred_table.m"
}

#line 236 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pf_sym_5_p_0(
#line 236 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_6,
#line 236 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_7,
#line 236 "pred_table.m"
  MR_Word hlds__pred_table__PredOrFunc_8,
#line 236 "pred_table.m"
  MR_Word hlds__pred_table__SymName_9,
#line 236 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_10)
#line 236 "pred_table.m"
{
#line 823 "pred_table.m"
  {
#line 823 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 823 "pred_table.m"
    if ((hlds__pred_table__PredOrFunc_8 == (MR_Integer) 1))
#line 828 "pred_table.m"
      {
#line 828 "pred_table.m"
        hlds__pred_table__predicate_table_lookup_func_sym_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__IsFullyQualified_7, hlds__pred_table__SymName_9, hlds__pred_table__PredIds_10);
#line 828 "pred_table.m"
        return;
      }
#line 823 "pred_table.m"
    else
#line 824 "pred_table.m"
      {
#line 824 "pred_table.m"
        hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__IsFullyQualified_7, hlds__pred_table__SymName_9, hlds__pred_table__PredIds_10);
#line 824 "pred_table.m"
        return;
      }
#line 823 "pred_table.m"
  }
#line 236 "pred_table.m"
}

#line 229 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(
#line 229 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_7,
#line 229 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_8,
#line 229 "pred_table.m"
  MR_Word hlds__pred_table__PredOrFunc_9,
#line 229 "pred_table.m"
  MR_Word hlds__pred_table__SymName_10,
#line 229 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_11,
#line 229 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_12)
#line 229 "pred_table.m"
{
#line 805 "pred_table.m"
  {
#line 805 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 805 "pred_table.m"
    if (((MR_tag((MR_Word) hlds__pred_table__SymName_10)) == (MR_mktag((MR_Integer) 1))))
#line 805 "pred_table.m"
      {
#line 805 "pred_table.m"
        MR_Word hlds__pred_table__Module_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_10, (MR_Integer) 0)));
#line 805 "pred_table.m"
        MR_String hlds__pred_table__Name_14 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_10, (MR_Integer) 1)));

#line 779 "pred_table.m"
        if ((hlds__pred_table__PredOrFunc_9 == (MR_Integer) 1))
#line 783 "pred_table.m"
          {
#line 783 "pred_table.m"
            MR_Integer hlds__pred_table__FuncArity_23 = (hlds__pred_table__Arity_11 - (MR_Integer) 1);

#line 785 "pred_table.m"
            {
#line 785 "pred_table.m"
              hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredicateTable_7, hlds__pred_table__IsFullyQualified_8, hlds__pred_table__Module_13, hlds__pred_table__Name_14, hlds__pred_table__FuncArity_23, hlds__pred_table__PredIds_12);
#line 785 "pred_table.m"
              return;
            }
#line 783 "pred_table.m"
          }
#line 779 "pred_table.m"
        else
#line 780 "pred_table.m"
          {
#line 780 "pred_table.m"
            hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredicateTable_7, hlds__pred_table__IsFullyQualified_8, hlds__pred_table__Module_13, hlds__pred_table__Name_14, hlds__pred_table__Arity_11, hlds__pred_table__PredIds_12);
#line 780 "pred_table.m"
            return;
          }
#line 805 "pred_table.m"
      }
#line 805 "pred_table.m"
    else
#line 809 "pred_table.m"
      {
#line 809 "pred_table.m"
        MR_String hlds__pred_table__Name_15 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_10, (MR_Integer) 0)));

#line 814 "pred_table.m"
        if ((hlds__pred_table__IsFullyQualified_8 == (MR_Integer) 0))
#line 816 "pred_table.m"
          *hlds__pred_table__PredIds_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 814 "pred_table.m"
        else
#line 792 "pred_table.m"
          if ((hlds__pred_table__PredOrFunc_9 == (MR_Integer) 1))
#line 796 "pred_table.m"
            {
#line 796 "pred_table.m"
              MR_Integer hlds__pred_table__FuncArity_30 = (hlds__pred_table__Arity_11 - (MR_Integer) 1);

#line 798 "pred_table.m"
              {
#line 798 "pred_table.m"
                hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(hlds__pred_table__PredicateTable_7, hlds__pred_table__Name_15, hlds__pred_table__FuncArity_30, hlds__pred_table__PredIds_12);
#line 798 "pred_table.m"
                return;
              }
#line 796 "pred_table.m"
            }
#line 792 "pred_table.m"
          else
#line 793 "pred_table.m"
            {
#line 793 "pred_table.m"
              hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(hlds__pred_table__PredicateTable_7, hlds__pred_table__Name_15, hlds__pred_table__Arity_11, hlds__pred_table__PredIds_12);
#line 793 "pred_table.m"
              return;
            }
#line 809 "pred_table.m"
      }
#line 805 "pred_table.m"
  }
#line 229 "pred_table.m"
}

#line 219 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pf_name_arity_5_p_0(
#line 219 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_6,
#line 219 "pred_table.m"
  MR_Word hlds__pred_table__PredOrFunc_7,
#line 219 "pred_table.m"
  MR_String hlds__pred_table__Name_8,
#line 219 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_9,
#line 219 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_10)
#line 219 "pred_table.m"
{
#line 792 "pred_table.m"
  {
#line 792 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 792 "pred_table.m"
    if ((hlds__pred_table__PredOrFunc_7 == (MR_Integer) 1))
#line 796 "pred_table.m"
      {
#line 796 "pred_table.m"
        MR_Integer hlds__pred_table__FuncArity_11 = (hlds__pred_table__Arity_9 - (MR_Integer) 1);

#line 798 "pred_table.m"
        {
#line 798 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__Name_8, hlds__pred_table__FuncArity_11, hlds__pred_table__PredIds_10);
#line 798 "pred_table.m"
          return;
        }
#line 796 "pred_table.m"
      }
#line 792 "pred_table.m"
    else
#line 793 "pred_table.m"
      {
#line 793 "pred_table.m"
        hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__Name_8, hlds__pred_table__Arity_9, hlds__pred_table__PredIds_10);
#line 793 "pred_table.m"
        return;
      }
#line 792 "pred_table.m"
  }
#line 219 "pred_table.m"
}

#line 208 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pf_m_n_a_7_p_0(
#line 208 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_8,
#line 208 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_9,
#line 208 "pred_table.m"
  MR_Word hlds__pred_table__PredOrFunc_10,
#line 208 "pred_table.m"
  MR_Word hlds__pred_table__Module_11,
#line 208 "pred_table.m"
  MR_String hlds__pred_table__Name_12,
#line 208 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_13,
#line 208 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_14)
#line 208 "pred_table.m"
{
#line 779 "pred_table.m"
  {
#line 779 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 779 "pred_table.m"
    if ((hlds__pred_table__PredOrFunc_10 == (MR_Integer) 1))
#line 783 "pred_table.m"
      {
#line 783 "pred_table.m"
        MR_Integer hlds__pred_table__FuncArity_15 = (hlds__pred_table__Arity_13 - (MR_Integer) 1);

#line 785 "pred_table.m"
        {
#line 785 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredicateTable_8, hlds__pred_table__IsFullyQualified_9, hlds__pred_table__Module_11, hlds__pred_table__Name_12, hlds__pred_table__FuncArity_15, hlds__pred_table__PredIds_14);
#line 785 "pred_table.m"
          return;
        }
#line 783 "pred_table.m"
      }
#line 779 "pred_table.m"
    else
#line 780 "pred_table.m"
      {
#line 780 "pred_table.m"
        hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredicateTable_8, hlds__pred_table__IsFullyQualified_9, hlds__pred_table__Module_11, hlds__pred_table__Name_12, hlds__pred_table__Arity_13, hlds__pred_table__PredIds_14);
#line 780 "pred_table.m"
        return;
      }
#line 779 "pred_table.m"
  }
#line 208 "pred_table.m"
}

#line 765 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0_1(
#line 765 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 765 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1)
#line 765 "pred_table.m"
{
#line 765 "pred_table.m"
  {
#line 765 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 765 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;

#line 765 "pred_table.m"
    {
#line 765 "pred_table.m"
      return hlds__pred_table__succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) hlds__pred_table__wrapper_arg_1));
    }
#line 765 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 765 "pred_table.m"
  }
#line 765 "pred_table.m"
}

#line 197 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(
#line 197 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_7,
#line 197 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_8,
#line 197 "pred_table.m"
  MR_Word hlds__pred_table__Module_9,
#line 197 "pred_table.m"
  MR_String hlds__pred_table__FuncName_10,
#line 197 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_11,
#line 197 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredIds_15)
#line 197 "pred_table.m"
{
#line 744 "pred_table.m"
  {
#line 744 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 744 "pred_table.m"
    MR_Word hlds__pred_table__F_MNA_Index_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 10)));
#line 745 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 0)));
#line 745 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 1)));
#line 745 "pred_table.m"
    MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 2)));
#line 745 "pred_table.m"
    MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 3)));
#line 745 "pred_table.m"
    MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 4)));
#line 745 "pred_table.m"
    MR_Word hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 5)));
#line 745 "pred_table.m"
    MR_Word hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 6)));
#line 745 "pred_table.m"
    MR_Word hlds__pred_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 7)));
#line 745 "pred_table.m"
    MR_Word hlds__pred_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 8)));
#line 745 "pred_table.m"
    MR_Word hlds__pred_table__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 9)));
#line 752 "pred_table.m"
    MR_Word hlds__pred_table__STATE_VARIABLE_PredIds_17_17;
#line 747 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_33_33;
#line 747 "pred_table.m"
    MR_Word hlds__pred_table__ArityIndex_14;
#line 747 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16;
#line 747 "pred_table.m"
    MR_Box hlds__pred_table__conv0_ArityIndex_14;
#line 748 "pred_table.m"
    MR_Box hlds__pred_table__conv1_STATE_VARIABLE_PredIds_17_17;

#line 747 "pred_table.m"
    {
#line 747 "pred_table.m"
      hlds__pred_table__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 747 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_16_16, 0) = ((MR_Box) (hlds__pred_table__Module_9));
#line 747 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_16_16, 1) = ((MR_Box) (hlds__pred_table__FuncName_10));
#line 747 "pred_table.m"
    }
#line 747 "pred_table.m"
    {
#line 747 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__F_MNA_Index_13, ((MR_Box) (hlds__pred_table__V_16_16)), &hlds__pred_table__conv0_ArityIndex_14);
    }
#line 747 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 747 "pred_table.m"
      {
#line 747 "pred_table.m"
        hlds__pred_table__ArityIndex_14 = ((MR_Word) hlds__pred_table__conv0_ArityIndex_14);
#line 747 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 747 "pred_table.m"
      }
#line 747 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 747 "pred_table.m"
      {
#line 6865 "hlds.pred_table.c"
        hlds__pred_table__TypeInfo_33_33 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
#line 748 "pred_table.m"
        {
#line 748 "pred_table.m"
          hlds__pred_table__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__pred_table__TypeInfo_33_33, hlds__pred_table__ArityIndex_14, hlds__pred_table__Arity_11, &hlds__pred_table__conv1_STATE_VARIABLE_PredIds_17_17);
        }
#line 748 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 748 "pred_table.m"
          {
#line 748 "pred_table.m"
            hlds__pred_table__STATE_VARIABLE_PredIds_17_17 = ((MR_Word) hlds__pred_table__conv1_STATE_VARIABLE_PredIds_17_17);
#line 748 "pred_table.m"
            hlds__pred_table__succeeded = MR_TRUE;
#line 748 "pred_table.m"
          }
#line 747 "pred_table.m"
      }
#line 752 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 760 "pred_table.m"
      if ((hlds__pred_table__IsFullyQualified_8 == (MR_Integer) 0))
#line 763 "pred_table.m"
        {
#line 763 "pred_table.m"
          MR_Word hlds__pred_table__Preds_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 0)));
#line 763 "pred_table.m"
          MR_Word hlds__pred_table__V_45_45;
#line 407 "pred_table.m"
          MR_Word hlds__pred_table__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 1)));
#line 407 "pred_table.m"
          MR_Word hlds__pred_table__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 2)));
#line 407 "pred_table.m"
          MR_Word hlds__pred_table__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 3)));
#line 407 "pred_table.m"
          MR_Word hlds__pred_table__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 4)));
#line 407 "pred_table.m"
          MR_Word hlds__pred_table__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 5)));
#line 407 "pred_table.m"
          MR_Word hlds__pred_table__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 6)));
#line 407 "pred_table.m"
          MR_Word hlds__pred_table__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 7)));
#line 407 "pred_table.m"
          MR_Word hlds__pred_table__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 8)));
#line 407 "pred_table.m"
          MR_Word hlds__pred_table__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 9)));
#line 407 "pred_table.m"
          MR_Word hlds__pred_table__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 10)));

#line 765 "pred_table.m"
          {
#line 765 "pred_table.m"
            hlds__pred_table__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 765 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__V_45_45, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
#line 765 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__V_45_45, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0_1));
#line 765 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 765 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__V_45_45, 3) = ((MR_Box) (hlds__pred_table__Preds_42));
#line 765 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__V_45_45, 4) = ((MR_Box) (hlds__pred_table__Module_9));
#line 765 "pred_table.m"
          }
#line 765 "pred_table.m"
          {
#line 765 "pred_table.m"
            mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__V_45_45, hlds__pred_table__STATE_VARIABLE_PredIds_17_17, hlds__pred_table__STATE_VARIABLE_PredIds_15);
#line 765 "pred_table.m"
            return;
          }
#line 763 "pred_table.m"
        }
#line 760 "pred_table.m"
      else
#line 760 "pred_table.m"
        *hlds__pred_table__STATE_VARIABLE_PredIds_15 = hlds__pred_table__STATE_VARIABLE_PredIds_17_17;
#line 752 "pred_table.m"
    else
#line 753 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_PredIds_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 744 "pred_table.m"
  }
#line 197 "pred_table.m"
}

#line 765 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0_1(
#line 765 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 765 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1)
#line 765 "pred_table.m"
{
#line 765 "pred_table.m"
  {
#line 765 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 765 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;

#line 765 "pred_table.m"
    {
#line 765 "pred_table.m"
      return hlds__pred_table__succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) hlds__pred_table__wrapper_arg_1));
    }
#line 765 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 765 "pred_table.m"
  }
#line 765 "pred_table.m"
}

#line 193 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(
#line 193 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_7,
#line 193 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_8,
#line 193 "pred_table.m"
  MR_Word hlds__pred_table__Module_9,
#line 193 "pred_table.m"
  MR_String hlds__pred_table__PredName_10,
#line 193 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_11,
#line 193 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredIds_15)
#line 193 "pred_table.m"
{
#line 731 "pred_table.m"
  {
#line 731 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 731 "pred_table.m"
    MR_Word hlds__pred_table__P_MNA_Index_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 7)));
#line 732 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 0)));
#line 732 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 1)));
#line 732 "pred_table.m"
    MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 2)));
#line 732 "pred_table.m"
    MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 3)));
#line 732 "pred_table.m"
    MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 4)));
#line 732 "pred_table.m"
    MR_Word hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 5)));
#line 732 "pred_table.m"
    MR_Word hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 6)));
#line 732 "pred_table.m"
    MR_Word hlds__pred_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 8)));
#line 732 "pred_table.m"
    MR_Word hlds__pred_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 9)));
#line 732 "pred_table.m"
    MR_Word hlds__pred_table__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 10)));
#line 739 "pred_table.m"
    MR_Word hlds__pred_table__STATE_VARIABLE_PredIds_17_17;
#line 734 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_33_33;
#line 734 "pred_table.m"
    MR_Word hlds__pred_table__ArityIndex_14;
#line 734 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16;
#line 734 "pred_table.m"
    MR_Box hlds__pred_table__conv0_ArityIndex_14;
#line 735 "pred_table.m"
    MR_Box hlds__pred_table__conv1_STATE_VARIABLE_PredIds_17_17;

#line 734 "pred_table.m"
    {
#line 734 "pred_table.m"
      hlds__pred_table__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 734 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_16_16, 0) = ((MR_Box) (hlds__pred_table__Module_9));
#line 734 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_16_16, 1) = ((MR_Box) (hlds__pred_table__PredName_10));
#line 734 "pred_table.m"
    }
#line 734 "pred_table.m"
    {
#line 734 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__P_MNA_Index_13, ((MR_Box) (hlds__pred_table__V_16_16)), &hlds__pred_table__conv0_ArityIndex_14);
    }
#line 734 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 734 "pred_table.m"
      {
#line 734 "pred_table.m"
        hlds__pred_table__ArityIndex_14 = ((MR_Word) hlds__pred_table__conv0_ArityIndex_14);
#line 734 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 734 "pred_table.m"
      }
#line 734 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 734 "pred_table.m"
      {
#line 7066 "hlds.pred_table.c"
        hlds__pred_table__TypeInfo_33_33 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
#line 735 "pred_table.m"
        {
#line 735 "pred_table.m"
          hlds__pred_table__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__pred_table__TypeInfo_33_33, hlds__pred_table__ArityIndex_14, hlds__pred_table__Arity_11, &hlds__pred_table__conv1_STATE_VARIABLE_PredIds_17_17);
        }
#line 735 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 735 "pred_table.m"
          {
#line 735 "pred_table.m"
            hlds__pred_table__STATE_VARIABLE_PredIds_17_17 = ((MR_Word) hlds__pred_table__conv1_STATE_VARIABLE_PredIds_17_17);
#line 735 "pred_table.m"
            hlds__pred_table__succeeded = MR_TRUE;
#line 735 "pred_table.m"
          }
#line 734 "pred_table.m"
      }
#line 739 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 760 "pred_table.m"
      if ((hlds__pred_table__IsFullyQualified_8 == (MR_Integer) 0))
#line 763 "pred_table.m"
        {
#line 763 "pred_table.m"
          MR_Word hlds__pred_table__Preds_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 0)));
#line 763 "pred_table.m"
          MR_Word hlds__pred_table__V_45_45;
#line 407 "pred_table.m"
          MR_Word hlds__pred_table__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 1)));
#line 407 "pred_table.m"
          MR_Word hlds__pred_table__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 2)));
#line 407 "pred_table.m"
          MR_Word hlds__pred_table__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 3)));
#line 407 "pred_table.m"
          MR_Word hlds__pred_table__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 4)));
#line 407 "pred_table.m"
          MR_Word hlds__pred_table__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 5)));
#line 407 "pred_table.m"
          MR_Word hlds__pred_table__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 6)));
#line 407 "pred_table.m"
          MR_Word hlds__pred_table__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 7)));
#line 407 "pred_table.m"
          MR_Word hlds__pred_table__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 8)));
#line 407 "pred_table.m"
          MR_Word hlds__pred_table__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 9)));
#line 407 "pred_table.m"
          MR_Word hlds__pred_table__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 10)));

#line 765 "pred_table.m"
          {
#line 765 "pred_table.m"
            hlds__pred_table__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 765 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__V_45_45, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
#line 765 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__V_45_45, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0_1));
#line 765 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 765 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__V_45_45, 3) = ((MR_Box) (hlds__pred_table__Preds_42));
#line 765 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__V_45_45, 4) = ((MR_Box) (hlds__pred_table__Module_9));
#line 765 "pred_table.m"
          }
#line 765 "pred_table.m"
          {
#line 765 "pred_table.m"
            mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__V_45_45, hlds__pred_table__STATE_VARIABLE_PredIds_17_17, hlds__pred_table__STATE_VARIABLE_PredIds_15);
#line 765 "pred_table.m"
            return;
          }
#line 763 "pred_table.m"
        }
#line 760 "pred_table.m"
      else
#line 760 "pred_table.m"
        *hlds__pred_table__STATE_VARIABLE_PredIds_15 = hlds__pred_table__STATE_VARIABLE_PredIds_17_17;
#line 739 "pred_table.m"
    else
#line 740 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_PredIds_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 731 "pred_table.m"
  }
#line 193 "pred_table.m"
}

#line 189 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_m_n_a_6_p_0(
#line 189 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_7,
#line 189 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_8,
#line 189 "pred_table.m"
  MR_Word hlds__pred_table__Module_9,
#line 189 "pred_table.m"
  MR_String hlds__pred_table__Name_10,
#line 189 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_11,
#line 189 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_12)
#line 189 "pred_table.m"
{
#line 723 "pred_table.m"
  {
#line 723 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 723 "pred_table.m"
    MR_Word hlds__pred_table__PredPredIds_13;
#line 723 "pred_table.m"
    MR_Word hlds__pred_table__FuncPredIds_14;

#line 724 "pred_table.m"
    {
#line 724 "pred_table.m"
      hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredicateTable_7, hlds__pred_table__IsFullyQualified_8, hlds__pred_table__Module_9, hlds__pred_table__Name_10, hlds__pred_table__Arity_11, &hlds__pred_table__PredPredIds_13);
    }
#line 726 "pred_table.m"
    {
#line 726 "pred_table.m"
      hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredicateTable_7, hlds__pred_table__IsFullyQualified_8, hlds__pred_table__Module_9, hlds__pred_table__Name_10, hlds__pred_table__Arity_11, &hlds__pred_table__FuncPredIds_14);
    }
#line 728 "pred_table.m"
    {
#line 728 "pred_table.m"
      *hlds__pred_table__PredIds_12 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__FuncPredIds_14, hlds__pred_table__PredPredIds_13);
    }
#line 723 "pred_table.m"
  }
#line 189 "pred_table.m"
}

#line 165 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(
#line 165 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_5,
#line 165 "pred_table.m"
  MR_String hlds__pred_table__FuncName_6,
#line 165 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_7,
#line 165 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_8)
#line 165 "pred_table.m"
{
#line 712 "pred_table.m"
  {
#line 712 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 712 "pred_table.m"
    MR_Word hlds__pred_table__FuncNameArityIndex_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 713 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 713 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 713 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 713 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 713 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 713 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 713 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 713 "pred_table.m"
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 713 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 713 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 10)));
#line 716 "pred_table.m"
    MR_Word hlds__pred_table__PredIdsPrime_10;
#line 714 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11;
#line 714 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredIdsPrime_10;

#line 714 "pred_table.m"
    {
#line 714 "pred_table.m"
      hlds__pred_table__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 714 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_11_11, 0) = ((MR_Box) (hlds__pred_table__FuncName_6));
#line 714 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_11_11, 1) = ((MR_Box) (hlds__pred_table__Arity_7));
#line 714 "pred_table.m"
    }
#line 714 "pred_table.m"
    {
#line 714 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__FuncNameArityIndex_9, ((MR_Box) (hlds__pred_table__V_11_11)), &hlds__pred_table__conv0_PredIdsPrime_10);
    }
#line 714 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 714 "pred_table.m"
      {
#line 714 "pred_table.m"
        hlds__pred_table__PredIdsPrime_10 = ((MR_Word) hlds__pred_table__conv0_PredIdsPrime_10);
#line 714 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 714 "pred_table.m"
      }
#line 716 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 715 "pred_table.m"
      *hlds__pred_table__PredIds_8 = hlds__pred_table__PredIdsPrime_10;
#line 716 "pred_table.m"
    else
#line 717 "pred_table.m"
      *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 712 "pred_table.m"
  }
#line 165 "pred_table.m"
}

#line 162 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(
#line 162 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_5,
#line 162 "pred_table.m"
  MR_String hlds__pred_table__PredName_6,
#line 162 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_7,
#line 162 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_8)
#line 162 "pred_table.m"
{
#line 703 "pred_table.m"
  {
#line 703 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 703 "pred_table.m"
    MR_Word hlds__pred_table__PredNameArityIndex_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 704 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 704 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 704 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 704 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 704 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 704 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 704 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 704 "pred_table.m"
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 704 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 704 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 10)));
#line 707 "pred_table.m"
    MR_Word hlds__pred_table__PredIdsPrime_10;
#line 705 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11;
#line 705 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredIdsPrime_10;

#line 705 "pred_table.m"
    {
#line 705 "pred_table.m"
      hlds__pred_table__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 705 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_11_11, 0) = ((MR_Box) (hlds__pred_table__PredName_6));
#line 705 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_11_11, 1) = ((MR_Box) (hlds__pred_table__Arity_7));
#line 705 "pred_table.m"
    }
#line 705 "pred_table.m"
    {
#line 705 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__PredNameArityIndex_9, ((MR_Box) (hlds__pred_table__V_11_11)), &hlds__pred_table__conv0_PredIdsPrime_10);
    }
#line 705 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 705 "pred_table.m"
      {
#line 705 "pred_table.m"
        hlds__pred_table__PredIdsPrime_10 = ((MR_Word) hlds__pred_table__conv0_PredIdsPrime_10);
#line 705 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 705 "pred_table.m"
      }
#line 707 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 706 "pred_table.m"
      *hlds__pred_table__PredIds_8 = hlds__pred_table__PredIdsPrime_10;
#line 707 "pred_table.m"
    else
#line 708 "pred_table.m"
      *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 703 "pred_table.m"
  }
#line 162 "pred_table.m"
}

#line 159 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_name_arity_4_p_0(
#line 159 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_5,
#line 159 "pred_table.m"
  MR_String hlds__pred_table__Name_6,
#line 159 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_7,
#line 159 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_8)
#line 159 "pred_table.m"
{
#line 695 "pred_table.m"
  {
#line 695 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 695 "pred_table.m"
    MR_Word hlds__pred_table__PredPredIds_9;
#line 695 "pred_table.m"
    MR_Word hlds__pred_table__FuncPredIds_10;

#line 696 "pred_table.m"
    {
#line 696 "pred_table.m"
      hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(hlds__pred_table__PredicateTable_5, hlds__pred_table__Name_6, hlds__pred_table__Arity_7, &hlds__pred_table__PredPredIds_9);
    }
#line 698 "pred_table.m"
    {
#line 698 "pred_table.m"
      hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(hlds__pred_table__PredicateTable_5, hlds__pred_table__Name_6, hlds__pred_table__Arity_7, &hlds__pred_table__FuncPredIds_10);
    }
#line 700 "pred_table.m"
    {
#line 700 "pred_table.m"
      *hlds__pred_table__PredIds_8 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__FuncPredIds_10, hlds__pred_table__PredPredIds_9);
    }
#line 695 "pred_table.m"
  }
#line 159 "pred_table.m"
}

#line 151 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_name_3_p_0(
#line 151 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_4,
#line 151 "pred_table.m"
  MR_String hlds__pred_table__FuncName_5,
#line 151 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_6)
#line 151 "pred_table.m"
{
#line 643 "pred_table.m"
  {
#line 643 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 643 "pred_table.m"
    MR_Word hlds__pred_table__PredIdsPrime_7;
#line 641 "pred_table.m"
    MR_Word hlds__pred_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 8)));
#line 641 "pred_table.m"
    MR_Word hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 0)));
#line 641 "pred_table.m"
    MR_Word hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 1)));
#line 641 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 2)));
#line 641 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 3)));
#line 641 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 4)));
#line 641 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 5)));
#line 641 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 6)));
#line 641 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 7)));
#line 641 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 9)));
#line 641 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 10)));
#line 641 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredIdsPrime_7;

#line 641 "pred_table.m"
    {
#line 641 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__V_8_8, ((MR_Box) (hlds__pred_table__FuncName_5)), &hlds__pred_table__conv0_PredIdsPrime_7);
    }
#line 641 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 641 "pred_table.m"
      {
#line 641 "pred_table.m"
        hlds__pred_table__PredIdsPrime_7 = ((MR_Word) hlds__pred_table__conv0_PredIdsPrime_7);
#line 641 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 641 "pred_table.m"
      }
#line 643 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 642 "pred_table.m"
      *hlds__pred_table__PredIds_6 = hlds__pred_table__PredIdsPrime_7;
#line 643 "pred_table.m"
    else
#line 644 "pred_table.m"
      *hlds__pred_table__PredIds_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 643 "pred_table.m"
  }
#line 151 "pred_table.m"
}

#line 148 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_name_3_p_0(
#line 148 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_4,
#line 148 "pred_table.m"
  MR_String hlds__pred_table__PredName_5,
#line 148 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_6)
#line 148 "pred_table.m"
{
#line 636 "pred_table.m"
  {
#line 636 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 636 "pred_table.m"
    MR_Word hlds__pred_table__PredIdsPrime_7;
#line 634 "pred_table.m"
    MR_Word hlds__pred_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 5)));
#line 634 "pred_table.m"
    MR_Word hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 0)));
#line 634 "pred_table.m"
    MR_Word hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 1)));
#line 634 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 2)));
#line 634 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 3)));
#line 634 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 4)));
#line 634 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 6)));
#line 634 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 7)));
#line 634 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 8)));
#line 634 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 9)));
#line 634 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 10)));
#line 634 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredIdsPrime_7;

#line 634 "pred_table.m"
    {
#line 634 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__V_8_8, ((MR_Box) (hlds__pred_table__PredName_5)), &hlds__pred_table__conv0_PredIdsPrime_7);
    }
#line 634 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 634 "pred_table.m"
      {
#line 634 "pred_table.m"
        hlds__pred_table__PredIdsPrime_7 = ((MR_Word) hlds__pred_table__conv0_PredIdsPrime_7);
#line 634 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 634 "pred_table.m"
      }
#line 636 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 635 "pred_table.m"
      *hlds__pred_table__PredIds_6 = hlds__pred_table__PredIdsPrime_7;
#line 636 "pred_table.m"
    else
#line 637 "pred_table.m"
      *hlds__pred_table__PredIds_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 636 "pred_table.m"
  }
#line 148 "pred_table.m"
}

#line 145 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_name_3_p_0(
#line 145 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_4,
#line 145 "pred_table.m"
  MR_String hlds__pred_table__Name_5,
#line 145 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_6)
#line 145 "pred_table.m"
{
#line 628 "pred_table.m"
  {
#line 628 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 628 "pred_table.m"
    MR_Word hlds__pred_table__PredPredIds_7;
#line 628 "pred_table.m"
    MR_Word hlds__pred_table__FuncPredIds_8;
#line 636 "pred_table.m"
    MR_Word hlds__pred_table__PredIdsPrime_13;
#line 634 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 5)));
#line 634 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 0)));
#line 634 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 1)));
#line 634 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 2)));
#line 634 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 3)));
#line 634 "pred_table.m"
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 4)));
#line 634 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 6)));
#line 634 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 7)));
#line 634 "pred_table.m"
    MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 8)));
#line 634 "pred_table.m"
    MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 9)));
#line 634 "pred_table.m"
    MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 10)));
#line 634 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredIdsPrime_13;
#line 643 "pred_table.m"
    MR_Word hlds__pred_table__PredIdsPrime_30;
#line 641 "pred_table.m"
    MR_Word hlds__pred_table__V_31_31;
#line 641 "pred_table.m"
    MR_Word hlds__pred_table__V_32_32;
#line 641 "pred_table.m"
    MR_Word hlds__pred_table__V_33_33;
#line 641 "pred_table.m"
    MR_Word hlds__pred_table__V_34_34;
#line 641 "pred_table.m"
    MR_Word hlds__pred_table__V_35_35;
#line 641 "pred_table.m"
    MR_Word hlds__pred_table__V_36_36;
#line 641 "pred_table.m"
    MR_Word hlds__pred_table__V_37_37;
#line 641 "pred_table.m"
    MR_Word hlds__pred_table__V_38_38;
#line 641 "pred_table.m"
    MR_Word hlds__pred_table__V_39_39;
#line 641 "pred_table.m"
    MR_Word hlds__pred_table__V_40_40;
#line 641 "pred_table.m"
    MR_Word hlds__pred_table__V_41_41;
#line 641 "pred_table.m"
    MR_Box hlds__pred_table__conv1_PredIdsPrime_30;

#line 634 "pred_table.m"
    {
#line 634 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__V_14_14, ((MR_Box) (hlds__pred_table__Name_5)), &hlds__pred_table__conv0_PredIdsPrime_13);
    }
#line 634 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 634 "pred_table.m"
      {
#line 634 "pred_table.m"
        hlds__pred_table__PredIdsPrime_13 = ((MR_Word) hlds__pred_table__conv0_PredIdsPrime_13);
#line 634 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 634 "pred_table.m"
      }
#line 636 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 635 "pred_table.m"
      hlds__pred_table__PredPredIds_7 = hlds__pred_table__PredIdsPrime_13;
#line 636 "pred_table.m"
    else
#line 637 "pred_table.m"
      hlds__pred_table__PredPredIds_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 641 "pred_table.m"
    hlds__pred_table__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 0)));
#line 641 "pred_table.m"
    hlds__pred_table__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 1)));
#line 641 "pred_table.m"
    hlds__pred_table__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 2)));
#line 641 "pred_table.m"
    hlds__pred_table__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 3)));
#line 641 "pred_table.m"
    hlds__pred_table__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 4)));
#line 641 "pred_table.m"
    hlds__pred_table__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 5)));
#line 641 "pred_table.m"
    hlds__pred_table__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 6)));
#line 641 "pred_table.m"
    hlds__pred_table__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 7)));
#line 641 "pred_table.m"
    hlds__pred_table__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 8)));
#line 641 "pred_table.m"
    hlds__pred_table__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 9)));
#line 641 "pred_table.m"
    hlds__pred_table__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 10)));
#line 641 "pred_table.m"
    {
#line 641 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__V_31_31, ((MR_Box) (hlds__pred_table__Name_5)), &hlds__pred_table__conv1_PredIdsPrime_30);
    }
#line 641 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 641 "pred_table.m"
      {
#line 641 "pred_table.m"
        hlds__pred_table__PredIdsPrime_30 = ((MR_Word) hlds__pred_table__conv1_PredIdsPrime_30);
#line 641 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 641 "pred_table.m"
      }
#line 643 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 642 "pred_table.m"
      hlds__pred_table__FuncPredIds_8 = hlds__pred_table__PredIdsPrime_30;
#line 643 "pred_table.m"
    else
#line 644 "pred_table.m"
      hlds__pred_table__FuncPredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 631 "pred_table.m"
    {
#line 631 "pred_table.m"
      *hlds__pred_table__PredIds_6 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__FuncPredIds_8, hlds__pred_table__PredPredIds_7);
    }
#line 628 "pred_table.m"
  }
#line 145 "pred_table.m"
}

#line 138 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(
#line 138 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_6,
#line 138 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_7,
#line 138 "pred_table.m"
  MR_Word hlds__pred_table__SymName_8,
#line 138 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_9,
#line 138 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_10)
#line 138 "pred_table.m"
{
#line 611 "pred_table.m"
  {
#line 611 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 611 "pred_table.m"
    if (((MR_tag((MR_Word) hlds__pred_table__SymName_8)) == (MR_mktag((MR_Integer) 1))))
#line 621 "pred_table.m"
      {
#line 621 "pred_table.m"
        MR_Word hlds__pred_table__Module_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_8, (MR_Integer) 0)));
#line 621 "pred_table.m"
        MR_String hlds__pred_table__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_8, (MR_Integer) 1)));

#line 622 "pred_table.m"
        {
#line 622 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__IsFullyQualified_7, hlds__pred_table__Module_12, hlds__pred_table__Name_13, hlds__pred_table__Arity_9, hlds__pred_table__PredIds_10);
#line 622 "pred_table.m"
          return;
        }
#line 621 "pred_table.m"
      }
#line 611 "pred_table.m"
    else
#line 611 "pred_table.m"
      {
#line 611 "pred_table.m"
        MR_String hlds__pred_table__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_8, (MR_Integer) 0)));

#line 616 "pred_table.m"
        if ((hlds__pred_table__IsFullyQualified_7 == (MR_Integer) 0))
#line 618 "pred_table.m"
          *hlds__pred_table__PredIds_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 616 "pred_table.m"
        else
#line 614 "pred_table.m"
          {
#line 614 "pred_table.m"
            hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__Name_11, hlds__pred_table__Arity_9, hlds__pred_table__PredIds_10);
#line 614 "pred_table.m"
            return;
          }
#line 611 "pred_table.m"
      }
#line 611 "pred_table.m"
  }
#line 138 "pred_table.m"
}

#line 134 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_sym_arity_5_p_0(
#line 134 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_6,
#line 134 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_7,
#line 134 "pred_table.m"
  MR_Word hlds__pred_table__SymName_8,
#line 134 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_9,
#line 134 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_10)
#line 134 "pred_table.m"
{
#line 593 "pred_table.m"
  {
#line 593 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 593 "pred_table.m"
    if (((MR_tag((MR_Word) hlds__pred_table__SymName_8)) == (MR_mktag((MR_Integer) 1))))
#line 603 "pred_table.m"
      {
#line 603 "pred_table.m"
        MR_Word hlds__pred_table__Module_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_8, (MR_Integer) 0)));
#line 603 "pred_table.m"
        MR_String hlds__pred_table__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_8, (MR_Integer) 1)));

#line 604 "pred_table.m"
        {
#line 604 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__IsFullyQualified_7, hlds__pred_table__Module_12, hlds__pred_table__Name_13, hlds__pred_table__Arity_9, hlds__pred_table__PredIds_10);
#line 604 "pred_table.m"
          return;
        }
#line 603 "pred_table.m"
      }
#line 593 "pred_table.m"
    else
#line 593 "pred_table.m"
      {
#line 593 "pred_table.m"
        MR_String hlds__pred_table__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_8, (MR_Integer) 0)));

#line 598 "pred_table.m"
        if ((hlds__pred_table__IsFullyQualified_7 == (MR_Integer) 0))
#line 600 "pred_table.m"
          *hlds__pred_table__PredIds_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 598 "pred_table.m"
        else
#line 596 "pred_table.m"
          {
#line 596 "pred_table.m"
            hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__Name_11, hlds__pred_table__Arity_9, hlds__pred_table__PredIds_10);
#line 596 "pred_table.m"
            return;
          }
#line 593 "pred_table.m"
      }
#line 593 "pred_table.m"
  }
#line 134 "pred_table.m"
}

#line 130 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(
#line 130 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_6,
#line 130 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_7,
#line 130 "pred_table.m"
  MR_Word hlds__pred_table__SymName_8,
#line 130 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_9,
#line 130 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_10)
#line 130 "pred_table.m"
{
#line 575 "pred_table.m"
  {
#line 575 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 575 "pred_table.m"
    if (((MR_tag((MR_Word) hlds__pred_table__SymName_8)) == (MR_mktag((MR_Integer) 1))))
#line 585 "pred_table.m"
      {
#line 585 "pred_table.m"
        MR_Word hlds__pred_table__Module_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_8, (MR_Integer) 0)));
#line 585 "pred_table.m"
        MR_String hlds__pred_table__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_8, (MR_Integer) 1)));
#line 585 "pred_table.m"
        MR_Word hlds__pred_table__PredPredIds_20;
#line 585 "pred_table.m"
        MR_Word hlds__pred_table__FuncPredIds_21;

#line 724 "pred_table.m"
        {
#line 724 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__IsFullyQualified_7, hlds__pred_table__Module_12, hlds__pred_table__Name_13, hlds__pred_table__Arity_9, &hlds__pred_table__PredPredIds_20);
        }
#line 726 "pred_table.m"
        {
#line 726 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__IsFullyQualified_7, hlds__pred_table__Module_12, hlds__pred_table__Name_13, hlds__pred_table__Arity_9, &hlds__pred_table__FuncPredIds_21);
        }
#line 728 "pred_table.m"
        {
#line 728 "pred_table.m"
          *hlds__pred_table__PredIds_10 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__FuncPredIds_21, hlds__pred_table__PredPredIds_20);
        }
#line 585 "pred_table.m"
      }
#line 575 "pred_table.m"
    else
#line 575 "pred_table.m"
      {
#line 575 "pred_table.m"
        MR_String hlds__pred_table__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_8, (MR_Integer) 0)));

#line 580 "pred_table.m"
        if ((hlds__pred_table__IsFullyQualified_7 == (MR_Integer) 0))
#line 582 "pred_table.m"
          *hlds__pred_table__PredIds_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 580 "pred_table.m"
        else
#line 695 "pred_table.m"
          {
#line 695 "pred_table.m"
            MR_Word hlds__pred_table__PredPredIds_27;
#line 695 "pred_table.m"
            MR_Word hlds__pred_table__FuncPredIds_28;

#line 696 "pred_table.m"
            {
#line 696 "pred_table.m"
              hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__Name_11, hlds__pred_table__Arity_9, &hlds__pred_table__PredPredIds_27);
            }
#line 698 "pred_table.m"
            {
#line 698 "pred_table.m"
              hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__Name_11, hlds__pred_table__Arity_9, &hlds__pred_table__FuncPredIds_28);
            }
#line 700 "pred_table.m"
            {
#line 700 "pred_table.m"
              *hlds__pred_table__PredIds_10 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__FuncPredIds_28, hlds__pred_table__PredPredIds_27);
            }
#line 695 "pred_table.m"
          }
#line 575 "pred_table.m"
      }
#line 575 "pred_table.m"
  }
#line 130 "pred_table.m"
}

#line 765 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_sym_4_p_0_1(
#line 765 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 765 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1)
#line 765 "pred_table.m"
{
#line 765 "pred_table.m"
  {
#line 765 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 765 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;

#line 765 "pred_table.m"
    {
#line 765 "pred_table.m"
      return hlds__pred_table__succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) hlds__pred_table__wrapper_arg_1));
    }
#line 765 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 765 "pred_table.m"
  }
#line 765 "pred_table.m"
}

#line 123 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_sym_4_p_0(
#line 123 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_5,
#line 123 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_6,
#line 123 "pred_table.m"
  MR_Word hlds__pred_table__SymName_7,
#line 123 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_8)
#line 123 "pred_table.m"
{
#line 556 "pred_table.m"
  {
#line 556 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 556 "pred_table.m"
    if (((MR_tag((MR_Word) hlds__pred_table__SymName_7)) == (MR_mktag((MR_Integer) 1))))
#line 565 "pred_table.m"
      {
#line 565 "pred_table.m"
        MR_Word hlds__pred_table__Module_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_7, (MR_Integer) 0)));
#line 565 "pred_table.m"
        MR_String hlds__pred_table__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_7, (MR_Integer) 1)));
#line 565 "pred_table.m"
        MR_Word hlds__pred_table__Func_MNA_Index_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 10)));
#line 683 "pred_table.m"
        MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 683 "pred_table.m"
        MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 683 "pred_table.m"
        MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 683 "pred_table.m"
        MR_Word hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 683 "pred_table.m"
        MR_Word hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 683 "pred_table.m"
        MR_Word hlds__pred_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 683 "pred_table.m"
        MR_Word hlds__pred_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 683 "pred_table.m"
        MR_Word hlds__pred_table__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 683 "pred_table.m"
        MR_Word hlds__pred_table__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 683 "pred_table.m"
        MR_Word hlds__pred_table__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 689 "pred_table.m"
        MR_Word hlds__pred_table__Arities_18;
#line 684 "pred_table.m"
        MR_Word hlds__pred_table__V_21_21;
#line 684 "pred_table.m"
        MR_Box hlds__pred_table__conv0_Arities_18;

#line 684 "pred_table.m"
        {
#line 684 "pred_table.m"
          hlds__pred_table__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 684 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_21_21, 0) = ((MR_Box) (hlds__pred_table__Module_10));
#line 684 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_21_21, 1) = ((MR_Box) (hlds__pred_table__Name_11));
#line 684 "pred_table.m"
        }
#line 684 "pred_table.m"
        {
#line 684 "pred_table.m"
          hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__Func_MNA_Index_17, ((MR_Box) (hlds__pred_table__V_21_21)), &hlds__pred_table__conv0_Arities_18);
        }
#line 684 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 684 "pred_table.m"
          {
#line 684 "pred_table.m"
            hlds__pred_table__Arities_18 = ((MR_Word) hlds__pred_table__conv0_Arities_18);
#line 684 "pred_table.m"
            hlds__pred_table__succeeded = MR_TRUE;
#line 684 "pred_table.m"
          }
#line 689 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 685 "pred_table.m"
          {
#line 685 "pred_table.m"
            MR_Word hlds__pred_table__PredIdLists_19;
#line 685 "pred_table.m"
            MR_Word hlds__pred_table__PredIds0_20;

#line 685 "pred_table.m"
            {
#line 685 "pred_table.m"
              mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__Arities_18, &hlds__pred_table__PredIdLists_19);
            }
#line 686 "pred_table.m"
            {
#line 686 "pred_table.m"
              mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__PredIdLists_19, &hlds__pred_table__PredIds0_20);
            }
#line 760 "pred_table.m"
            if ((hlds__pred_table__IsFullyQualified_6 == (MR_Integer) 0))
#line 763 "pred_table.m"
              {
#line 763 "pred_table.m"
                MR_Word hlds__pred_table__Preds_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 763 "pred_table.m"
                MR_Word hlds__pred_table__V_48_48;
#line 407 "pred_table.m"
                MR_Word hlds__pred_table__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 407 "pred_table.m"
                MR_Word hlds__pred_table__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 407 "pred_table.m"
                MR_Word hlds__pred_table__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 407 "pred_table.m"
                MR_Word hlds__pred_table__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 407 "pred_table.m"
                MR_Word hlds__pred_table__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 407 "pred_table.m"
                MR_Word hlds__pred_table__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 407 "pred_table.m"
                MR_Word hlds__pred_table__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 407 "pred_table.m"
                MR_Word hlds__pred_table__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 407 "pred_table.m"
                MR_Word hlds__pred_table__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 407 "pred_table.m"
                MR_Word hlds__pred_table__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 10)));

#line 765 "pred_table.m"
                {
#line 765 "pred_table.m"
                  hlds__pred_table__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 765 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_48_48, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
#line 765 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_48_48, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_func_sym_4_p_0_1));
#line 765 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 765 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_48_48, 3) = ((MR_Box) (hlds__pred_table__Preds_45));
#line 765 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_48_48, 4) = ((MR_Box) (hlds__pred_table__Module_10));
#line 765 "pred_table.m"
                }
#line 765 "pred_table.m"
                {
#line 765 "pred_table.m"
                  mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__V_48_48, hlds__pred_table__PredIds0_20, hlds__pred_table__PredIds_8);
#line 765 "pred_table.m"
                  return;
                }
#line 763 "pred_table.m"
              }
#line 760 "pred_table.m"
            else
#line 760 "pred_table.m"
              *hlds__pred_table__PredIds_8 = hlds__pred_table__PredIds0_20;
#line 685 "pred_table.m"
          }
#line 689 "pred_table.m"
        else
#line 690 "pred_table.m"
          *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 565 "pred_table.m"
      }
#line 556 "pred_table.m"
    else
#line 556 "pred_table.m"
      {
#line 556 "pred_table.m"
        MR_String hlds__pred_table__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_7, (MR_Integer) 0)));

#line 560 "pred_table.m"
        if ((hlds__pred_table__IsFullyQualified_6 == (MR_Integer) 0))
#line 562 "pred_table.m"
          *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 560 "pred_table.m"
        else
#line 643 "pred_table.m"
          {
#line 643 "pred_table.m"
            MR_Word hlds__pred_table__PredIdsPrime_66;
#line 641 "pred_table.m"
            MR_Word hlds__pred_table__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 641 "pred_table.m"
            MR_Word hlds__pred_table__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 641 "pred_table.m"
            MR_Word hlds__pred_table__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 641 "pred_table.m"
            MR_Word hlds__pred_table__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 641 "pred_table.m"
            MR_Word hlds__pred_table__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 641 "pred_table.m"
            MR_Word hlds__pred_table__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 641 "pred_table.m"
            MR_Word hlds__pred_table__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 641 "pred_table.m"
            MR_Word hlds__pred_table__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 641 "pred_table.m"
            MR_Word hlds__pred_table__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 641 "pred_table.m"
            MR_Word hlds__pred_table__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 641 "pred_table.m"
            MR_Word hlds__pred_table__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 10)));
#line 641 "pred_table.m"
            MR_Box hlds__pred_table__conv1_PredIdsPrime_66;

#line 641 "pred_table.m"
            {
#line 641 "pred_table.m"
              hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__V_67_67, ((MR_Box) (hlds__pred_table__Name_9)), &hlds__pred_table__conv1_PredIdsPrime_66);
            }
#line 641 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 641 "pred_table.m"
              {
#line 641 "pred_table.m"
                hlds__pred_table__PredIdsPrime_66 = ((MR_Word) hlds__pred_table__conv1_PredIdsPrime_66);
#line 641 "pred_table.m"
                hlds__pred_table__succeeded = MR_TRUE;
#line 641 "pred_table.m"
              }
#line 643 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 642 "pred_table.m"
              *hlds__pred_table__PredIds_8 = hlds__pred_table__PredIdsPrime_66;
#line 643 "pred_table.m"
            else
#line 644 "pred_table.m"
              *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 643 "pred_table.m"
          }
#line 556 "pred_table.m"
      }
#line 556 "pred_table.m"
  }
#line 123 "pred_table.m"
}

#line 765 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0_1(
#line 765 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 765 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1)
#line 765 "pred_table.m"
{
#line 765 "pred_table.m"
  {
#line 765 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 765 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;

#line 765 "pred_table.m"
    {
#line 765 "pred_table.m"
      return hlds__pred_table__succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) hlds__pred_table__wrapper_arg_1));
    }
#line 765 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 765 "pred_table.m"
  }
#line 765 "pred_table.m"
}

#line 120 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0(
#line 120 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_5,
#line 120 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_6,
#line 120 "pred_table.m"
  MR_Word hlds__pred_table__SymName_7,
#line 120 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_8)
#line 120 "pred_table.m"
{
#line 539 "pred_table.m"
  {
#line 539 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 539 "pred_table.m"
    if (((MR_tag((MR_Word) hlds__pred_table__SymName_7)) == (MR_mktag((MR_Integer) 1))))
#line 548 "pred_table.m"
      {
#line 548 "pred_table.m"
        MR_Word hlds__pred_table__Module_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_7, (MR_Integer) 0)));
#line 548 "pred_table.m"
        MR_String hlds__pred_table__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_7, (MR_Integer) 1)));
#line 548 "pred_table.m"
        MR_Word hlds__pred_table__Pred_MNA_Index_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 667 "pred_table.m"
        MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 667 "pred_table.m"
        MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 667 "pred_table.m"
        MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 667 "pred_table.m"
        MR_Word hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 667 "pred_table.m"
        MR_Word hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 667 "pred_table.m"
        MR_Word hlds__pred_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 667 "pred_table.m"
        MR_Word hlds__pred_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 667 "pred_table.m"
        MR_Word hlds__pred_table__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 667 "pred_table.m"
        MR_Word hlds__pred_table__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 667 "pred_table.m"
        MR_Word hlds__pred_table__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 10)));
#line 673 "pred_table.m"
        MR_Word hlds__pred_table__Arities_18;
#line 668 "pred_table.m"
        MR_Word hlds__pred_table__V_21_21;
#line 668 "pred_table.m"
        MR_Box hlds__pred_table__conv0_Arities_18;

#line 668 "pred_table.m"
        {
#line 668 "pred_table.m"
          hlds__pred_table__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 668 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_21_21, 0) = ((MR_Box) (hlds__pred_table__Module_10));
#line 668 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_21_21, 1) = ((MR_Box) (hlds__pred_table__Name_11));
#line 668 "pred_table.m"
        }
#line 668 "pred_table.m"
        {
#line 668 "pred_table.m"
          hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__Pred_MNA_Index_17, ((MR_Box) (hlds__pred_table__V_21_21)), &hlds__pred_table__conv0_Arities_18);
        }
#line 668 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 668 "pred_table.m"
          {
#line 668 "pred_table.m"
            hlds__pred_table__Arities_18 = ((MR_Word) hlds__pred_table__conv0_Arities_18);
#line 668 "pred_table.m"
            hlds__pred_table__succeeded = MR_TRUE;
#line 668 "pred_table.m"
          }
#line 673 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 669 "pred_table.m"
          {
#line 669 "pred_table.m"
            MR_Word hlds__pred_table__PredIdLists_19;
#line 669 "pred_table.m"
            MR_Word hlds__pred_table__PredIds0_20;

#line 669 "pred_table.m"
            {
#line 669 "pred_table.m"
              mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__Arities_18, &hlds__pred_table__PredIdLists_19);
            }
#line 670 "pred_table.m"
            {
#line 670 "pred_table.m"
              mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__PredIdLists_19, &hlds__pred_table__PredIds0_20);
            }
#line 760 "pred_table.m"
            if ((hlds__pred_table__IsFullyQualified_6 == (MR_Integer) 0))
#line 763 "pred_table.m"
              {
#line 763 "pred_table.m"
                MR_Word hlds__pred_table__Preds_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 763 "pred_table.m"
                MR_Word hlds__pred_table__V_48_48;
#line 407 "pred_table.m"
                MR_Word hlds__pred_table__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 407 "pred_table.m"
                MR_Word hlds__pred_table__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 407 "pred_table.m"
                MR_Word hlds__pred_table__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 407 "pred_table.m"
                MR_Word hlds__pred_table__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 407 "pred_table.m"
                MR_Word hlds__pred_table__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 407 "pred_table.m"
                MR_Word hlds__pred_table__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 407 "pred_table.m"
                MR_Word hlds__pred_table__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 407 "pred_table.m"
                MR_Word hlds__pred_table__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 407 "pred_table.m"
                MR_Word hlds__pred_table__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 407 "pred_table.m"
                MR_Word hlds__pred_table__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 10)));

#line 765 "pred_table.m"
                {
#line 765 "pred_table.m"
                  hlds__pred_table__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 765 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_48_48, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
#line 765 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_48_48, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0_1));
#line 765 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 765 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_48_48, 3) = ((MR_Box) (hlds__pred_table__Preds_45));
#line 765 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_48_48, 4) = ((MR_Box) (hlds__pred_table__Module_10));
#line 765 "pred_table.m"
                }
#line 765 "pred_table.m"
                {
#line 765 "pred_table.m"
                  mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__V_48_48, hlds__pred_table__PredIds0_20, hlds__pred_table__PredIds_8);
#line 765 "pred_table.m"
                  return;
                }
#line 763 "pred_table.m"
              }
#line 760 "pred_table.m"
            else
#line 760 "pred_table.m"
              *hlds__pred_table__PredIds_8 = hlds__pred_table__PredIds0_20;
#line 669 "pred_table.m"
          }
#line 673 "pred_table.m"
        else
#line 674 "pred_table.m"
          *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 548 "pred_table.m"
      }
#line 539 "pred_table.m"
    else
#line 539 "pred_table.m"
      {
#line 539 "pred_table.m"
        MR_String hlds__pred_table__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_7, (MR_Integer) 0)));

#line 543 "pred_table.m"
        if ((hlds__pred_table__IsFullyQualified_6 == (MR_Integer) 0))
#line 545 "pred_table.m"
          *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 543 "pred_table.m"
        else
#line 636 "pred_table.m"
          {
#line 636 "pred_table.m"
            MR_Word hlds__pred_table__PredIdsPrime_66;
#line 634 "pred_table.m"
            MR_Word hlds__pred_table__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 634 "pred_table.m"
            MR_Word hlds__pred_table__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 634 "pred_table.m"
            MR_Word hlds__pred_table__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 634 "pred_table.m"
            MR_Word hlds__pred_table__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 634 "pred_table.m"
            MR_Word hlds__pred_table__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 634 "pred_table.m"
            MR_Word hlds__pred_table__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 634 "pred_table.m"
            MR_Word hlds__pred_table__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 634 "pred_table.m"
            MR_Word hlds__pred_table__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 634 "pred_table.m"
            MR_Word hlds__pred_table__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 634 "pred_table.m"
            MR_Word hlds__pred_table__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 634 "pred_table.m"
            MR_Word hlds__pred_table__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 10)));
#line 634 "pred_table.m"
            MR_Box hlds__pred_table__conv1_PredIdsPrime_66;

#line 634 "pred_table.m"
            {
#line 634 "pred_table.m"
              hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__V_67_67, ((MR_Box) (hlds__pred_table__Name_9)), &hlds__pred_table__conv1_PredIdsPrime_66);
            }
#line 634 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 634 "pred_table.m"
              {
#line 634 "pred_table.m"
                hlds__pred_table__PredIdsPrime_66 = ((MR_Word) hlds__pred_table__conv1_PredIdsPrime_66);
#line 634 "pred_table.m"
                hlds__pred_table__succeeded = MR_TRUE;
#line 634 "pred_table.m"
              }
#line 636 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 635 "pred_table.m"
              *hlds__pred_table__PredIds_8 = hlds__pred_table__PredIdsPrime_66;
#line 636 "pred_table.m"
            else
#line 637 "pred_table.m"
              *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 636 "pred_table.m"
          }
#line 539 "pred_table.m"
      }
#line 539 "pred_table.m"
  }
#line 120 "pred_table.m"
}

#line 765 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_sym_4_p_0_1(
#line 765 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 765 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1)
#line 765 "pred_table.m"
{
#line 765 "pred_table.m"
  {
#line 765 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 765 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;

#line 765 "pred_table.m"
    {
#line 765 "pred_table.m"
      return hlds__pred_table__succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) hlds__pred_table__wrapper_arg_1));
    }
#line 765 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 765 "pred_table.m"
  }
#line 765 "pred_table.m"
}

#line 117 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_sym_4_p_0(
#line 117 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_5,
#line 117 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_6,
#line 117 "pred_table.m"
  MR_Word hlds__pred_table__SymName_7,
#line 117 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_8)
#line 117 "pred_table.m"
{
#line 522 "pred_table.m"
  {
#line 522 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 522 "pred_table.m"
    if (((MR_tag((MR_Word) hlds__pred_table__SymName_7)) == (MR_mktag((MR_Integer) 1))))
#line 531 "pred_table.m"
      {
#line 531 "pred_table.m"
        MR_Word hlds__pred_table__Module_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_7, (MR_Integer) 0)));
#line 531 "pred_table.m"
        MR_String hlds__pred_table__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_7, (MR_Integer) 1)));
#line 531 "pred_table.m"
        MR_Word hlds__pred_table__PredPredIds_17;
#line 531 "pred_table.m"
        MR_Word hlds__pred_table__FuncPredIds_18;
#line 531 "pred_table.m"
        MR_Word hlds__pred_table__Pred_MNA_Index_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 667 "pred_table.m"
        MR_Word hlds__pred_table__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 667 "pred_table.m"
        MR_Word hlds__pred_table__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 667 "pred_table.m"
        MR_Word hlds__pred_table__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 667 "pred_table.m"
        MR_Word hlds__pred_table__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 667 "pred_table.m"
        MR_Word hlds__pred_table__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 667 "pred_table.m"
        MR_Word hlds__pred_table__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 667 "pred_table.m"
        MR_Word hlds__pred_table__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 667 "pred_table.m"
        MR_Word hlds__pred_table__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 667 "pred_table.m"
        MR_Word hlds__pred_table__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 667 "pred_table.m"
        MR_Word hlds__pred_table__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 10)));
#line 673 "pred_table.m"
        MR_Word hlds__pred_table__Arities_26;
#line 668 "pred_table.m"
        MR_Word hlds__pred_table__V_29_29;
#line 668 "pred_table.m"
        MR_Box hlds__pred_table__conv0_Arities_26;

#line 668 "pred_table.m"
        {
#line 668 "pred_table.m"
          hlds__pred_table__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 668 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_29_29, 0) = ((MR_Box) (hlds__pred_table__Module_10));
#line 668 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_29_29, 1) = ((MR_Box) (hlds__pred_table__Name_11));
#line 668 "pred_table.m"
        }
#line 668 "pred_table.m"
        {
#line 668 "pred_table.m"
          hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__Pred_MNA_Index_25, ((MR_Box) (hlds__pred_table__V_29_29)), &hlds__pred_table__conv0_Arities_26);
        }
#line 668 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 668 "pred_table.m"
          {
#line 668 "pred_table.m"
            hlds__pred_table__Arities_26 = ((MR_Word) hlds__pred_table__conv0_Arities_26);
#line 668 "pred_table.m"
            hlds__pred_table__succeeded = MR_TRUE;
#line 668 "pred_table.m"
          }
#line 673 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 669 "pred_table.m"
          {
#line 669 "pred_table.m"
            MR_Word hlds__pred_table__PredIdLists_27;
#line 669 "pred_table.m"
            MR_Word hlds__pred_table__PredIds0_28;

#line 669 "pred_table.m"
            {
#line 669 "pred_table.m"
              mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__Arities_26, &hlds__pred_table__PredIdLists_27);
            }
#line 670 "pred_table.m"
            {
#line 670 "pred_table.m"
              mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__PredIdLists_27, &hlds__pred_table__PredIds0_28);
            }
#line 760 "pred_table.m"
            if ((hlds__pred_table__IsFullyQualified_6 == (MR_Integer) 0))
#line 763 "pred_table.m"
              {
#line 763 "pred_table.m"
                MR_Word hlds__pred_table__Preds_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 763 "pred_table.m"
                MR_Word hlds__pred_table__V_56_56;
#line 407 "pred_table.m"
                MR_Word hlds__pred_table__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 407 "pred_table.m"
                MR_Word hlds__pred_table__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 407 "pred_table.m"
                MR_Word hlds__pred_table__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 407 "pred_table.m"
                MR_Word hlds__pred_table__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 407 "pred_table.m"
                MR_Word hlds__pred_table__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 407 "pred_table.m"
                MR_Word hlds__pred_table__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 407 "pred_table.m"
                MR_Word hlds__pred_table__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 407 "pred_table.m"
                MR_Word hlds__pred_table__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 407 "pred_table.m"
                MR_Word hlds__pred_table__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 407 "pred_table.m"
                MR_Word hlds__pred_table__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 10)));

#line 765 "pred_table.m"
                {
#line 765 "pred_table.m"
                  hlds__pred_table__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 765 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_56_56, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
#line 765 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_56_56, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_sym_4_p_0_1));
#line 765 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 765 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_56_56, 3) = ((MR_Box) (hlds__pred_table__Preds_53));
#line 765 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_56_56, 4) = ((MR_Box) (hlds__pred_table__Module_10));
#line 765 "pred_table.m"
                }
#line 765 "pred_table.m"
                {
#line 765 "pred_table.m"
                  mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__V_56_56, hlds__pred_table__PredIds0_28, &hlds__pred_table__PredPredIds_17);
                }
#line 763 "pred_table.m"
              }
#line 760 "pred_table.m"
            else
#line 760 "pred_table.m"
              hlds__pred_table__PredPredIds_17 = hlds__pred_table__PredIds0_28;
#line 669 "pred_table.m"
          }
#line 673 "pred_table.m"
        else
#line 674 "pred_table.m"
          hlds__pred_table__PredPredIds_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 657 "pred_table.m"
        {
#line 657 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0(hlds__pred_table__PredicateTable_5, hlds__pred_table__IsFullyQualified_6, hlds__pred_table__Module_10, hlds__pred_table__Name_11, &hlds__pred_table__FuncPredIds_18);
        }
#line 659 "pred_table.m"
        {
#line 659 "pred_table.m"
          *hlds__pred_table__PredIds_8 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__FuncPredIds_18, hlds__pred_table__PredPredIds_17);
        }
#line 531 "pred_table.m"
      }
#line 522 "pred_table.m"
    else
#line 522 "pred_table.m"
      {
#line 522 "pred_table.m"
        MR_String hlds__pred_table__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_7, (MR_Integer) 0)));

#line 526 "pred_table.m"
        if ((hlds__pred_table__IsFullyQualified_6 == (MR_Integer) 0))
#line 528 "pred_table.m"
          *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 526 "pred_table.m"
        else
#line 525 "pred_table.m"
          {
#line 525 "pred_table.m"
            hlds__pred_table__predicate_table_lookup_name_3_p_0(hlds__pred_table__PredicateTable_5, hlds__pred_table__Name_9, hlds__pred_table__PredIds_8);
#line 525 "pred_table.m"
            return;
          }
#line 522 "pred_table.m"
      }
#line 522 "pred_table.m"
  }
#line 117 "pred_table.m"
}

#line 111 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_remove_predicate_3_p_0(
#line 111 "pred_table.m"
  MR_Word hlds__pred_table__PredId_4,
#line 111 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable0_5,
#line 111 "pred_table.m"
  MR_Word * hlds__pred_table__PredicateTable_6)
#line 111 "pred_table.m"
{
#line 437 "pred_table.m"
  {
#line 437 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 437 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_36_36 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 437 "pred_table.m"
    MR_Word hlds__pred_table__Preds0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 0)));
#line 437 "pred_table.m"
    MR_Word hlds__pred_table__NextPredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 1)));
#line 437 "pred_table.m"
    MR_Word hlds__pred_table__OldPredIds0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 2)));
#line 437 "pred_table.m"
    MR_Word hlds__pred_table__NewRevPredIds0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 3)));
#line 437 "pred_table.m"
    MR_Word hlds__pred_table__AccessibilityTable0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 4)));
#line 437 "pred_table.m"
    MR_Word hlds__pred_table__PredN0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 5)));
#line 437 "pred_table.m"
    MR_Word hlds__pred_table__PredNA0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 6)));
#line 437 "pred_table.m"
    MR_Word hlds__pred_table__PredMNA0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 7)));
#line 437 "pred_table.m"
    MR_Word hlds__pred_table__FuncN0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 8)));
#line 437 "pred_table.m"
    MR_Word hlds__pred_table__FuncNA0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 9)));
#line 437 "pred_table.m"
    MR_Word hlds__pred_table__FuncMNA0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 10)));
#line 437 "pred_table.m"
    MR_Word hlds__pred_table__OldPredIds_18;
#line 437 "pred_table.m"
    MR_Word hlds__pred_table__NewRevPredIds_19;
#line 437 "pred_table.m"
    MR_Word hlds__pred_table__PredInfo_20;
#line 437 "pred_table.m"
    MR_Word hlds__pred_table__Preds_21;
#line 437 "pred_table.m"
    MR_Word hlds__pred_table__AccessibilityTable_23;
#line 437 "pred_table.m"
    MR_Word hlds__pred_table__Module_24;
#line 437 "pred_table.m"
    MR_String hlds__pred_table__Name_25;
#line 437 "pred_table.m"
    MR_Integer hlds__pred_table__Arity_26;
#line 437 "pred_table.m"
    MR_Word hlds__pred_table__IsPredOrFunc_27;
#line 443 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredInfo_20;
#line 444 "pred_table.m"
    MR_Word hlds__pred_table__V_22_22;
#line 444 "pred_table.m"
    MR_Box hlds__pred_table__conv1_V_22_22;

#line 441 "pred_table.m"
    {
#line 441 "pred_table.m"
      mercury__list__delete_all_3_p_1(hlds__pred_table__TypeCtorInfo_36_36, hlds__pred_table__OldPredIds0_9, ((MR_Box) (hlds__pred_table__PredId_4)), &hlds__pred_table__OldPredIds_18);
    }
#line 442 "pred_table.m"
    {
#line 442 "pred_table.m"
      mercury__list__delete_all_3_p_1(hlds__pred_table__TypeCtorInfo_36_36, hlds__pred_table__NewRevPredIds0_10, ((MR_Box) (hlds__pred_table__PredId_4)), &hlds__pred_table__NewRevPredIds_19);
    }
#line 443 "pred_table.m"
    {
#line 443 "pred_table.m"
      mercury__map__det_remove_4_p_0(hlds__pred_table__TypeCtorInfo_36_36, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ((MR_Box) (hlds__pred_table__PredId_4)), &hlds__pred_table__conv0_PredInfo_20, hlds__pred_table__Preds0_7, &hlds__pred_table__Preds_21);
    }
#line 443 "pred_table.m"
    hlds__pred_table__PredInfo_20 = ((MR_Word) hlds__pred_table__conv0_PredInfo_20);
#line 444 "pred_table.m"
    {
#line 444 "pred_table.m"
      mercury__map__det_remove_4_p_0(hlds__pred_table__TypeCtorInfo_36_36, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0, ((MR_Box) (hlds__pred_table__PredId_4)), &hlds__pred_table__conv1_V_22_22, hlds__pred_table__AccessibilityTable0_11, &hlds__pred_table__AccessibilityTable_23);
    }
#line 444 "pred_table.m"
    hlds__pred_table__V_22_22 = ((MR_Word) hlds__pred_table__conv1_V_22_22);
#line 445 "pred_table.m"
    {
#line 445 "pred_table.m"
      hlds__pred_table__Module_24 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__pred_table__PredInfo_20);
    }
#line 446 "pred_table.m"
    {
#line 446 "pred_table.m"
      hlds__pred_table__Name_25 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__pred_table__PredInfo_20);
    }
#line 447 "pred_table.m"
    {
#line 447 "pred_table.m"
      hlds__pred_table__Arity_26 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__pred_table__PredInfo_20);
    }
#line 448 "pred_table.m"
    {
#line 448 "pred_table.m"
      hlds__pred_table__IsPredOrFunc_27 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__pred_table__PredInfo_20);
    }
#line 456 "pred_table.m"
    if ((hlds__pred_table__IsPredOrFunc_27 == (MR_Integer) 1))
#line 457 "pred_table.m"
      {
#line 457 "pred_table.m"
        MR_Integer hlds__pred_table__FuncArity_31 = (hlds__pred_table__Arity_26 - (MR_Integer) 1);
#line 457 "pred_table.m"
        MR_Word hlds__pred_table__FuncN_32;
#line 457 "pred_table.m"
        MR_Word hlds__pred_table__FuncNA_33;
#line 457 "pred_table.m"
        MR_Word hlds__pred_table__FuncMNA_34;

#line 459 "pred_table.m"
        {
#line 459 "pred_table.m"
          hlds__pred_table__predicate_table_remove_from_index_10_p_0(hlds__pred_table__Module_24, hlds__pred_table__Name_25, hlds__pred_table__FuncArity_31, hlds__pred_table__PredId_4, hlds__pred_table__FuncN0_15, &hlds__pred_table__FuncN_32, hlds__pred_table__FuncNA0_16, &hlds__pred_table__FuncNA_33, hlds__pred_table__FuncMNA0_17, &hlds__pred_table__FuncMNA_34);
        }
#line 462 "pred_table.m"
        {
#line 462 "pred_table.m"
          MR_Word base;
#line 462 "pred_table.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 462 "pred_table.m"
          *hlds__pred_table__PredicateTable_6 = base;
#line 462 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__Preds_21));
#line 462 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__NextPredId_8));
#line 462 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__OldPredIds_18));
#line 462 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__NewRevPredIds_19));
#line 462 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__AccessibilityTable_23));
#line 462 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__PredN0_12));
#line 462 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__PredNA0_13));
#line 462 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__PredMNA0_14));
#line 462 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__FuncN_32));
#line 462 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__FuncNA_33));
#line 462 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__pred_table__FuncMNA_34));
#line 462 "pred_table.m"
        }
#line 457 "pred_table.m"
      }
#line 456 "pred_table.m"
    else
#line 450 "pred_table.m"
      {
#line 450 "pred_table.m"
        MR_Word hlds__pred_table__PredN_28;
#line 450 "pred_table.m"
        MR_Word hlds__pred_table__PredNA_29;
#line 450 "pred_table.m"
        MR_Word hlds__pred_table__PredMNA_30;

#line 451 "pred_table.m"
        {
#line 451 "pred_table.m"
          hlds__pred_table__predicate_table_remove_from_index_10_p_0(hlds__pred_table__Module_24, hlds__pred_table__Name_25, hlds__pred_table__Arity_26, hlds__pred_table__PredId_4, hlds__pred_table__PredN0_12, &hlds__pred_table__PredN_28, hlds__pred_table__PredNA0_13, &hlds__pred_table__PredNA_29, hlds__pred_table__PredMNA0_14, &hlds__pred_table__PredMNA_30);
        }
#line 453 "pred_table.m"
        {
#line 453 "pred_table.m"
          MR_Word base;
#line 453 "pred_table.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 453 "pred_table.m"
          *hlds__pred_table__PredicateTable_6 = base;
#line 453 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__Preds_21));
#line 453 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__NextPredId_8));
#line 453 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__OldPredIds_18));
#line 453 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__NewRevPredIds_19));
#line 453 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__AccessibilityTable_23));
#line 453 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__PredN_28));
#line 453 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__PredNA_29));
#line 453 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__PredMNA_30));
#line 453 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__FuncN0_15));
#line 453 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__FuncNA0_16));
#line 453 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__pred_table__FuncMNA0_17));
#line 453 "pred_table.m"
        }
#line 450 "pred_table.m"
      }
#line 437 "pred_table.m"
  }
#line 111 "pred_table.m"
}

#line 109 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_remove_predid_3_p_0(
#line 109 "pred_table.m"
  MR_Word hlds__pred_table__PredId_4,
#line 109 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10,
#line 109 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_11)
#line 109 "pred_table.m"
{
#line 429 "pred_table.m"
  {
#line 429 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 429 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_56_56 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 429 "pred_table.m"
    MR_Word hlds__pred_table__OldPredIds0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 2)));
#line 429 "pred_table.m"
    MR_Word hlds__pred_table__NewRevPredIds0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 3)));
#line 429 "pred_table.m"
    MR_Word hlds__pred_table__OldPredIds_8;
#line 429 "pred_table.m"
    MR_Word hlds__pred_table__NewRevPredIds_9;
#line 429 "pred_table.m"
    MR_Word hlds__pred_table__V_34_34;
#line 429 "pred_table.m"
    MR_Word hlds__pred_table__V_35_35;
#line 429 "pred_table.m"
    MR_Word hlds__pred_table__V_38_38;
#line 429 "pred_table.m"
    MR_Word hlds__pred_table__V_39_39;
#line 429 "pred_table.m"
    MR_Word hlds__pred_table__V_40_40;
#line 429 "pred_table.m"
    MR_Word hlds__pred_table__V_41_41;
#line 429 "pred_table.m"
    MR_Word hlds__pred_table__V_42_42;
#line 429 "pred_table.m"
    MR_Word hlds__pred_table__V_43_43;
#line 429 "pred_table.m"
    MR_Word hlds__pred_table__V_44_44;
#line 430 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 0)));
#line 430 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 1)));
#line 430 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 4)));
#line 430 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 5)));
#line 430 "pred_table.m"
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 6)));
#line 430 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 7)));
#line 430 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 8)));
#line 430 "pred_table.m"
    MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 9)));
#line 430 "pred_table.m"
    MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 10)));
#line 434 "pred_table.m"
    MR_Word hlds__pred_table__V_36_36;
#line 434 "pred_table.m"
    MR_Word hlds__pred_table__V_37_37;

#line 432 "pred_table.m"
    {
#line 432 "pred_table.m"
      mercury__list__delete_all_3_p_1(hlds__pred_table__TypeCtorInfo_56_56, hlds__pred_table__OldPredIds0_6, ((MR_Box) (hlds__pred_table__PredId_4)), &hlds__pred_table__OldPredIds_8);
    }
#line 433 "pred_table.m"
    {
#line 433 "pred_table.m"
      mercury__list__delete_all_3_p_1(hlds__pred_table__TypeCtorInfo_56_56, hlds__pred_table__NewRevPredIds0_7, ((MR_Box) (hlds__pred_table__PredId_4)), &hlds__pred_table__NewRevPredIds_9);
    }
#line 434 "pred_table.m"
    hlds__pred_table__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 0)));
#line 434 "pred_table.m"
    hlds__pred_table__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 1)));
#line 434 "pred_table.m"
    hlds__pred_table__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 2)));
#line 434 "pred_table.m"
    hlds__pred_table__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 3)));
#line 434 "pred_table.m"
    hlds__pred_table__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 4)));
#line 434 "pred_table.m"
    hlds__pred_table__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 5)));
#line 434 "pred_table.m"
    hlds__pred_table__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 6)));
#line 434 "pred_table.m"
    hlds__pred_table__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 7)));
#line 434 "pred_table.m"
    hlds__pred_table__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 8)));
#line 434 "pred_table.m"
    hlds__pred_table__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 9)));
#line 434 "pred_table.m"
    hlds__pred_table__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 10)));
#line 435 "pred_table.m"
    {
#line 435 "pred_table.m"
      MR_Word base;
#line 435 "pred_table.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 435 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_PredicateTable_11 = base;
#line 435 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__V_34_34));
#line 435 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__V_35_35));
#line 435 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__OldPredIds_8));
#line 435 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__NewRevPredIds_9));
#line 435 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__V_38_38));
#line 435 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__V_39_39));
#line 435 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__V_40_40));
#line 435 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__V_41_41));
#line 435 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__V_42_42));
#line 435 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__V_43_43));
#line 435 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__pred_table__V_44_44));
#line 435 "pred_table.m"
    }
#line 429 "pred_table.m"
  }
#line 109 "pred_table.m"
}

#line 104 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_set_valid_predids_3_p_0(
#line 104 "pred_table.m"
  MR_Word hlds__pred_table__PredIds_4,
#line 104 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6,
#line 104 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_7)
#line 104 "pred_table.m"
{
#line 425 "pred_table.m"
  {
#line 425 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 425 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 0)));
#line 425 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 1)));
#line 425 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 4)));
#line 425 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 5)));
#line 425 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 6)));
#line 425 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 7)));
#line 425 "pred_table.m"
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 8)));
#line 425 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 9)));
#line 425 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 10)));
#line 426 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 2)));
#line 426 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 3)));

#line 427 "pred_table.m"
    {
#line 427 "pred_table.m"
      MR_Word base;
#line 427 "pred_table.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 427 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_PredicateTable_7 = base;
#line 427 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__V_11_11));
#line 427 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__V_12_12));
#line 427 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__PredIds_4));
#line 427 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 427 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__V_15_15));
#line 427 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__V_16_16));
#line 427 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__V_17_17));
#line 427 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__V_18_18));
#line 427 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__V_19_19));
#line 427 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__V_20_20));
#line 427 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__pred_table__V_21_21));
#line 427 "pred_table.m"
    }
#line 425 "pred_table.m"
  }
#line 104 "pred_table.m"
}

#line 96 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_get_valid_predids_3_p_0(
#line 96 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_4,
#line 96 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10,
#line 96 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_11)
#line 96 "pred_table.m"
{
#line 412 "pred_table.m"
  {
#line 412 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 412 "pred_table.m"
    MR_Word hlds__pred_table__OldPredIds_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 2)));
#line 412 "pred_table.m"
    MR_Word hlds__pred_table__NewRevPredIds_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 3)));
#line 412 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 0)));
#line 412 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 1)));
#line 412 "pred_table.m"
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 4)));
#line 412 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 5)));
#line 412 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 6)));
#line 412 "pred_table.m"
    MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 7)));
#line 412 "pred_table.m"
    MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 8)));
#line 412 "pred_table.m"
    MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 9)));
#line 412 "pred_table.m"
    MR_Word hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 10)));
#line 412 "pred_table.m"
    MR_Word hlds__pred_table__V_36_36;
#line 412 "pred_table.m"
    MR_Word hlds__pred_table__V_37_37;
#line 412 "pred_table.m"
    MR_Word hlds__pred_table__V_40_40;
#line 412 "pred_table.m"
    MR_Word hlds__pred_table__V_41_41;
#line 412 "pred_table.m"
    MR_Word hlds__pred_table__V_42_42;
#line 412 "pred_table.m"
    MR_Word hlds__pred_table__V_43_43;
#line 412 "pred_table.m"
    MR_Word hlds__pred_table__V_44_44;
#line 412 "pred_table.m"
    MR_Word hlds__pred_table__V_45_45;
#line 412 "pred_table.m"
    MR_Word hlds__pred_table__V_46_46;

#line 418 "pred_table.m"
    if ((hlds__pred_table__NewRevPredIds_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 417 "pred_table.m"
      *hlds__pred_table__PredIds_4 = hlds__pred_table__OldPredIds_6;
#line 418 "pred_table.m"
    else
#line 419 "pred_table.m"
      {
#line 419 "pred_table.m"
        MR_Word hlds__pred_table__TypeCtorInfo_58_58 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 419 "pred_table.m"
        MR_Word hlds__pred_table__V_12_12;

#line 420 "pred_table.m"
        {
#line 420 "pred_table.m"
          hlds__pred_table__V_12_12 = mercury__list__reverse_1_f_0(hlds__pred_table__TypeCtorInfo_58_58, hlds__pred_table__NewRevPredIds_7);
        }
#line 420 "pred_table.m"
        {
#line 420 "pred_table.m"
          *hlds__pred_table__PredIds_4 = mercury__list__f_43_43_2_f_0(hlds__pred_table__TypeCtorInfo_58_58, hlds__pred_table__OldPredIds_6, hlds__pred_table__V_12_12);
        }
#line 419 "pred_table.m"
      }
#line 422 "pred_table.m"
    hlds__pred_table__V_36_36 = hlds__pred_table__V_16_16;
#line 422 "pred_table.m"
    hlds__pred_table__V_37_37 = hlds__pred_table__V_17_17;
#line 422 "pred_table.m"
    hlds__pred_table__V_40_40 = hlds__pred_table__V_19_19;
#line 422 "pred_table.m"
    hlds__pred_table__V_41_41 = hlds__pred_table__V_20_20;
#line 422 "pred_table.m"
    hlds__pred_table__V_42_42 = hlds__pred_table__V_21_21;
#line 422 "pred_table.m"
    hlds__pred_table__V_43_43 = hlds__pred_table__V_22_22;
#line 422 "pred_table.m"
    hlds__pred_table__V_44_44 = hlds__pred_table__V_23_23;
#line 422 "pred_table.m"
    hlds__pred_table__V_45_45 = hlds__pred_table__V_24_24;
#line 422 "pred_table.m"
    hlds__pred_table__V_46_46 = hlds__pred_table__V_25_25;
#line 423 "pred_table.m"
    {
#line 423 "pred_table.m"
      MR_Word base;
#line 423 "pred_table.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 423 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_PredicateTable_11 = base;
#line 423 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__V_36_36));
#line 423 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__V_37_37));
#line 423 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (*hlds__pred_table__PredIds_4));
#line 423 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 423 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__V_40_40));
#line 423 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__V_41_41));
#line 423 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__V_42_42));
#line 423 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__V_43_43));
#line 423 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__V_44_44));
#line 423 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__V_45_45));
#line 423 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__pred_table__V_46_46));
#line 423 "pred_table.m"
    }
#line 412 "pred_table.m"
  }
#line 96 "pred_table.m"
}

#line 85 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_set_preds_3_p_0(
#line 85 "pred_table.m"
  MR_Word hlds__pred_table__Preds_4,
#line 85 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6,
#line 85 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_7)
#line 85 "pred_table.m"
{
#line 410 "pred_table.m"
  {
#line 410 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 410 "pred_table.m"
    MR_Word hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 1)));
#line 410 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 2)));
#line 410 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 3)));
#line 410 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 4)));
#line 410 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 5)));
#line 410 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 6)));
#line 410 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 7)));
#line 410 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 8)));
#line 410 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 9)));
#line 410 "pred_table.m"
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 10)));
#line 410 "pred_table.m"
    MR_Word hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 0)));

#line 410 "pred_table.m"
    {
#line 410 "pred_table.m"
      MR_Word base;
#line 410 "pred_table.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 410 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_PredicateTable_7 = base;
#line 410 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__Preds_4));
#line 410 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__V_10_10));
#line 410 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__V_11_11));
#line 410 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__V_12_12));
#line 410 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__V_13_13));
#line 410 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__V_14_14));
#line 410 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__V_15_15));
#line 410 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__V_16_16));
#line 410 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__V_17_17));
#line 410 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__V_18_18));
#line 410 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__pred_table__V_19_19));
#line 410 "pred_table.m"
    }
#line 410 "pred_table.m"
  }
#line 85 "pred_table.m"
}

#line 839 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_restrict_4_p_0_1(
#line 839 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 839 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 839 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 839 "pred_table.m"
  MR_Box * hlds__pred_table__wrapper_arg_3)
#line 839 "pred_table.m"
{
#line 839 "pred_table.m"
  {
#line 839 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;
#line 839 "pred_table.m"
    MR_Word hlds__pred_table__conv0_STATE_VARIABLE_PredicateTable_20;

#line 839 "pred_table.m"
    {
#line 839 "pred_table.m"
      hlds__pred_table__reinsert_for_restrict_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 5))), ((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2), &hlds__pred_table__conv0_STATE_VARIABLE_PredicateTable_20);
    }
#line 839 "pred_table.m"
    *hlds__pred_table__wrapper_arg_3 = ((MR_Box) (hlds__pred_table__conv0_STATE_VARIABLE_PredicateTable_20));
#line 839 "pred_table.m"
  }
#line 839 "pred_table.m"
}

#line 77 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_restrict_4_p_0(
#line 77 "pred_table.m"
  MR_Word hlds__pred_table__PartialQualInfo_5,
#line 77 "pred_table.m"
  MR_Word hlds__pred_table__PredIds_6,
#line 77 "pred_table.m"
  MR_Word hlds__pred_table__OrigPredicateTable_7,
#line 77 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_13)
#line 77 "pred_table.m"
{
#line 835 "pred_table.m"
  {
#line 835 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 835 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_56_56;
#line 835 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_26_81 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 835 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_29_84;
#line 835 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_30_85;
#line 835 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_31_86;
#line 835 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_32_87;
#line 835 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_33_88;
#line 835 "pred_table.m"
    MR_Word hlds__pred_table__Preds_9;
#line 835 "pred_table.m"
    MR_Word hlds__pred_table__AccessibilityTable_10;
#line 835 "pred_table.m"
    MR_Word hlds__pred_table__NewPredIds_11;
#line 835 "pred_table.m"
    MR_Word hlds__pred_table__SortedNewPredIds_12;
#line 835 "pred_table.m"
    MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_14_14;
#line 835 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15;
#line 835 "pred_table.m"
    MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_16_16;
#line 835 "pred_table.m"
    MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_17_17;
#line 835 "pred_table.m"
    MR_Word hlds__pred_table__V_31_31;
#line 835 "pred_table.m"
    MR_Word hlds__pred_table__V_32_32;
#line 835 "pred_table.m"
    MR_Word hlds__pred_table__V_35_35;
#line 835 "pred_table.m"
    MR_Word hlds__pred_table__V_36_36;
#line 835 "pred_table.m"
    MR_Word hlds__pred_table__V_37_37;
#line 835 "pred_table.m"
    MR_Word hlds__pred_table__V_38_38;
#line 835 "pred_table.m"
    MR_Word hlds__pred_table__V_39_39;
#line 835 "pred_table.m"
    MR_Word hlds__pred_table__V_40_40;
#line 835 "pred_table.m"
    MR_Word hlds__pred_table__V_41_41;
#line 835 "pred_table.m"
    MR_Word hlds__pred_table__NextPredId_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 1)));
#line 835 "pred_table.m"
    MR_Word hlds__pred_table__V_61_61;
#line 835 "pred_table.m"
    MR_Word hlds__pred_table__V_64_64;
#line 835 "pred_table.m"
    MR_Word hlds__pred_table__V_65_65;
#line 835 "pred_table.m"
    MR_Word hlds__pred_table__V_66_66;
#line 835 "pred_table.m"
    MR_Word hlds__pred_table__V_67_67;
#line 835 "pred_table.m"
    MR_Word hlds__pred_table__V_68_68;
#line 835 "pred_table.m"
    MR_Word hlds__pred_table__V_69_69;
#line 835 "pred_table.m"
    MR_Word hlds__pred_table__V_70_70;
#line 877 "pred_table.m"
    MR_Word hlds__pred_table__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 0)));
#line 877 "pred_table.m"
    MR_Word hlds__pred_table__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 2)));
#line 877 "pred_table.m"
    MR_Word hlds__pred_table__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 3)));
#line 877 "pred_table.m"
    MR_Word hlds__pred_table__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 4)));
#line 877 "pred_table.m"
    MR_Word hlds__pred_table__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 5)));
#line 877 "pred_table.m"
    MR_Word hlds__pred_table__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 6)));
#line 877 "pred_table.m"
    MR_Word hlds__pred_table__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 7)));
#line 877 "pred_table.m"
    MR_Word hlds__pred_table__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 8)));
#line 877 "pred_table.m"
    MR_Word hlds__pred_table__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 9)));
#line 877 "pred_table.m"
    MR_Word hlds__pred_table__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 10)));
#line 838 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21;
#line 838 "pred_table.m"
    MR_Word hlds__pred_table__V_22_22;
#line 838 "pred_table.m"
    MR_Word hlds__pred_table__V_23_23;
#line 838 "pred_table.m"
    MR_Word hlds__pred_table__V_24_24;
#line 838 "pred_table.m"
    MR_Word hlds__pred_table__V_25_25;
#line 838 "pred_table.m"
    MR_Word hlds__pred_table__V_26_26;
#line 838 "pred_table.m"
    MR_Word hlds__pred_table__V_27_27;
#line 838 "pred_table.m"
    MR_Word hlds__pred_table__V_28_28;
#line 838 "pred_table.m"
    MR_Word hlds__pred_table__V_29_29;
#line 838 "pred_table.m"
    MR_Word hlds__pred_table__V_30_30;
#line 839 "pred_table.m"
    MR_Box hlds__pred_table__conv1_STATE_VARIABLE_PredicateTable_16_16;
#line 844 "pred_table.m"
    MR_Word hlds__pred_table__V_33_33;
#line 844 "pred_table.m"
    MR_Word hlds__pred_table__V_34_34;

#line 878 "pred_table.m"
    {
#line 878 "pred_table.m"
      hlds__pred_table__V_61_61 = mercury__map__init_0_f_0(hlds__pred_table__TypeCtorInfo_26_81, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0);
    }
#line 878 "pred_table.m"
    {
#line 878 "pred_table.m"
      hlds__pred_table__V_64_64 = mercury__map__init_0_f_0(hlds__pred_table__TypeCtorInfo_26_81, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0);
    }
#line 9498 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_29_84 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 9500 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_30_85 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
#line 878 "pred_table.m"
    {
#line 878 "pred_table.m"
      hlds__pred_table__V_65_65 = mercury__map__init_0_f_0(hlds__pred_table__TypeCtorInfo_29_84, hlds__pred_table__TypeInfo_30_85);
    }
#line 9507 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_31_86 = (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0;
#line 878 "pred_table.m"
    {
#line 878 "pred_table.m"
      hlds__pred_table__V_66_66 = mercury__map__init_0_f_0(hlds__pred_table__TypeCtorInfo_31_86, hlds__pred_table__TypeInfo_30_85);
    }
#line 9514 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_32_87 = (MR_Word) &hlds__pred_table_scalar_common_2[0];
#line 9516 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_33_88 = (MR_Word) &hlds__pred_table_scalar_common_2[1];
#line 878 "pred_table.m"
    {
#line 878 "pred_table.m"
      hlds__pred_table__V_67_67 = mercury__map__init_0_f_0(hlds__pred_table__TypeInfo_32_87, hlds__pred_table__TypeInfo_33_88);
    }
#line 878 "pred_table.m"
    {
#line 878 "pred_table.m"
      hlds__pred_table__V_68_68 = mercury__map__init_0_f_0(hlds__pred_table__TypeCtorInfo_29_84, hlds__pred_table__TypeInfo_30_85);
    }
#line 878 "pred_table.m"
    {
#line 878 "pred_table.m"
      hlds__pred_table__V_69_69 = mercury__map__init_0_f_0(hlds__pred_table__TypeCtorInfo_31_86, hlds__pred_table__TypeInfo_30_85);
    }
#line 878 "pred_table.m"
    {
#line 878 "pred_table.m"
      hlds__pred_table__V_70_70 = mercury__map__init_0_f_0(hlds__pred_table__TypeInfo_32_87, hlds__pred_table__TypeInfo_33_88);
    }
#line 878 "pred_table.m"
    {
#line 878 "pred_table.m"
      hlds__pred_table__STATE_VARIABLE_PredicateTable_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 878 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_14_14, 0) = ((MR_Box) (hlds__pred_table__V_61_61));
#line 878 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_14_14, 1) = ((MR_Box) (hlds__pred_table__NextPredId_60));
#line 878 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_14_14, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 878 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_14_14, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 878 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_14_14, 4) = ((MR_Box) (hlds__pred_table__V_64_64));
#line 878 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_14_14, 5) = ((MR_Box) (hlds__pred_table__V_65_65));
#line 878 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_14_14, 6) = ((MR_Box) (hlds__pred_table__V_66_66));
#line 878 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_14_14, 7) = ((MR_Box) (hlds__pred_table__V_67_67));
#line 878 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_14_14, 8) = ((MR_Box) (hlds__pred_table__V_68_68));
#line 878 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_14_14, 9) = ((MR_Box) (hlds__pred_table__V_69_69));
#line 878 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_14_14, 10) = ((MR_Box) (hlds__pred_table__V_70_70));
#line 878 "pred_table.m"
    }
#line 837 "pred_table.m"
    {
#line 837 "pred_table.m"
      hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__pred_table__OrigPredicateTable_7, &hlds__pred_table__Preds_9);
    }
#line 838 "pred_table.m"
    hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 0)));
#line 838 "pred_table.m"
    hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 1)));
#line 838 "pred_table.m"
    hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 2)));
#line 838 "pred_table.m"
    hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 3)));
#line 838 "pred_table.m"
    hlds__pred_table__AccessibilityTable_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 4)));
#line 838 "pred_table.m"
    hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 5)));
#line 838 "pred_table.m"
    hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 6)));
#line 838 "pred_table.m"
    hlds__pred_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 7)));
#line 838 "pred_table.m"
    hlds__pred_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 8)));
#line 838 "pred_table.m"
    hlds__pred_table__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 9)));
#line 838 "pred_table.m"
    hlds__pred_table__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 10)));
#line 839 "pred_table.m"
    {
#line 839 "pred_table.m"
      hlds__pred_table__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 839 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_15_15, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_4[0]));
#line 839 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_15_15, 1) = ((MR_Box) (hlds__pred_table__predicate_table_restrict_4_p_0_1));
#line 839 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 839 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_15_15, 3) = ((MR_Box) (hlds__pred_table__PartialQualInfo_5));
#line 839 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_15_15, 4) = ((MR_Box) (hlds__pred_table__Preds_9));
#line 839 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_15_15, 5) = ((MR_Box) (hlds__pred_table__AccessibilityTable_10));
#line 839 "pred_table.m"
    }
#line 9611 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_56_56 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 839 "pred_table.m"
    {
#line 839 "pred_table.m"
      mercury__list__foldl_4_p_0(hlds__pred_table__TypeCtorInfo_56_56, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_predicate_table_0, hlds__pred_table__V_15_15, hlds__pred_table__PredIds_6, ((MR_Box) (hlds__pred_table__STATE_VARIABLE_PredicateTable_14_14)), &hlds__pred_table__conv1_STATE_VARIABLE_PredicateTable_16_16);
    }
#line 839 "pred_table.m"
    hlds__pred_table__STATE_VARIABLE_PredicateTable_16_16 = ((MR_Word) hlds__pred_table__conv1_STATE_VARIABLE_PredicateTable_16_16);
#line 842 "pred_table.m"
    {
#line 842 "pred_table.m"
      hlds__pred_table__predicate_table_get_valid_predids_3_p_0(&hlds__pred_table__NewPredIds_11, hlds__pred_table__STATE_VARIABLE_PredicateTable_16_16, &hlds__pred_table__STATE_VARIABLE_PredicateTable_17_17);
    }
#line 843 "pred_table.m"
    {
#line 843 "pred_table.m"
      mercury__list__sort_2_p_0(hlds__pred_table__TypeCtorInfo_56_56, hlds__pred_table__NewPredIds_11, &hlds__pred_table__SortedNewPredIds_12);
    }
#line 844 "pred_table.m"
    hlds__pred_table__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_17_17, (MR_Integer) 0)));
#line 844 "pred_table.m"
    hlds__pred_table__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_17_17, (MR_Integer) 1)));
#line 844 "pred_table.m"
    hlds__pred_table__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_17_17, (MR_Integer) 2)));
#line 844 "pred_table.m"
    hlds__pred_table__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_17_17, (MR_Integer) 3)));
#line 844 "pred_table.m"
    hlds__pred_table__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_17_17, (MR_Integer) 4)));
#line 844 "pred_table.m"
    hlds__pred_table__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_17_17, (MR_Integer) 5)));
#line 844 "pred_table.m"
    hlds__pred_table__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_17_17, (MR_Integer) 6)));
#line 844 "pred_table.m"
    hlds__pred_table__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_17_17, (MR_Integer) 7)));
#line 844 "pred_table.m"
    hlds__pred_table__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_17_17, (MR_Integer) 8)));
#line 844 "pred_table.m"
    hlds__pred_table__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_17_17, (MR_Integer) 9)));
#line 844 "pred_table.m"
    hlds__pred_table__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_17_17, (MR_Integer) 10)));
#line 845 "pred_table.m"
    {
#line 845 "pred_table.m"
      MR_Word base;
#line 845 "pred_table.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 845 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_PredicateTable_13 = base;
#line 845 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__V_31_31));
#line 845 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__V_32_32));
#line 845 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__SortedNewPredIds_12));
#line 845 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 845 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__V_35_35));
#line 845 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__V_36_36));
#line 845 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__V_37_37));
#line 845 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__V_38_38));
#line 845 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__V_39_39));
#line 845 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__V_40_40));
#line 845 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__pred_table__V_41_41));
#line 845 "pred_table.m"
    }
#line 835 "pred_table.m"
  }
#line 77 "pred_table.m"
}

#line 70 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_get_preds_2_p_0(
#line 70 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_3,
#line 70 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__2_2)
#line 70 "pred_table.m"
{
#line 407 "pred_table.m"
  {
#line 407 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 407 "pred_table.m"
    MR_Word hlds__pred_table__V_4_4;
#line 407 "pred_table.m"
    MR_Word hlds__pred_table__V_5_5;
#line 407 "pred_table.m"
    MR_Word hlds__pred_table__V_6_6;
#line 407 "pred_table.m"
    MR_Word hlds__pred_table__V_7_7;
#line 407 "pred_table.m"
    MR_Word hlds__pred_table__V_8_8;
#line 407 "pred_table.m"
    MR_Word hlds__pred_table__V_9_9;
#line 407 "pred_table.m"
    MR_Word hlds__pred_table__V_10_10;
#line 407 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11;
#line 407 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12;
#line 407 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13;

#line 407 "pred_table.m"
    *hlds__pred_table__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 0)));
#line 407 "pred_table.m"
    hlds__pred_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 1)));
#line 407 "pred_table.m"
    hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 2)));
#line 407 "pred_table.m"
    hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 3)));
#line 407 "pred_table.m"
    hlds__pred_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 4)));
#line 407 "pred_table.m"
    hlds__pred_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 5)));
#line 407 "pred_table.m"
    hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 6)));
#line 407 "pred_table.m"
    hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 7)));
#line 407 "pred_table.m"
    hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 8)));
#line 407 "pred_table.m"
    hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 9)));
#line 407 "pred_table.m"
    hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 10)));
#line 407 "pred_table.m"
  }
#line 70 "pred_table.m"
}

#line 65 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_optimize_2_p_0(
#line 65 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable0_3,
#line 65 "pred_table.m"
  MR_Word * hlds__pred_table__PredicateTable_4)
#line 65 "pred_table.m"
{
#line 391 "pred_table.m"
  {
#line 391 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 391 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 391 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_23_23 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
#line 391 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_24_24;
#line 391 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_25_25;
#line 391 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_26_26;
#line 391 "pred_table.m"
    MR_Word hlds__pred_table__Preds_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 0)));
#line 391 "pred_table.m"
    MR_Word hlds__pred_table__NextPredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 1)));
#line 391 "pred_table.m"
    MR_Word hlds__pred_table__OldPredIds_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 2)));
#line 391 "pred_table.m"
    MR_Word hlds__pred_table__NewRevPredIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 3)));
#line 391 "pred_table.m"
    MR_Word hlds__pred_table__Accessibility_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 4)));
#line 391 "pred_table.m"
    MR_Word hlds__pred_table__Pred_N_Index0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 5)));
#line 391 "pred_table.m"
    MR_Word hlds__pred_table__Pred_NA_Index0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 6)));
#line 391 "pred_table.m"
    MR_Word hlds__pred_table__Pred_MNA_Index0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 7)));
#line 391 "pred_table.m"
    MR_Word hlds__pred_table__Func_N_Index0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 8)));
#line 391 "pred_table.m"
    MR_Word hlds__pred_table__Func_NA_Index0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 9)));
#line 391 "pred_table.m"
    MR_Word hlds__pred_table__Func_MNA_Index0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 10)));
#line 391 "pred_table.m"
    MR_Word hlds__pred_table__Pred_N_Index_16;
#line 391 "pred_table.m"
    MR_Word hlds__pred_table__Pred_NA_Index_17;
#line 391 "pred_table.m"
    MR_Word hlds__pred_table__Pred_MNA_Index_18;
#line 391 "pred_table.m"
    MR_Word hlds__pred_table__Func_N_Index_19;
#line 391 "pred_table.m"
    MR_Word hlds__pred_table__Func_NA_Index_20;
#line 391 "pred_table.m"
    MR_Word hlds__pred_table__Func_MNA_Index_21;

#line 396 "pred_table.m"
    {
#line 396 "pred_table.m"
      mercury__map__optimize_2_p_0(hlds__pred_table__TypeCtorInfo_22_22, hlds__pred_table__TypeInfo_23_23, hlds__pred_table__Pred_N_Index0_10, &hlds__pred_table__Pred_N_Index_16);
    }
#line 9813 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_24_24 = (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0;
#line 397 "pred_table.m"
    {
#line 397 "pred_table.m"
      mercury__map__optimize_2_p_0(hlds__pred_table__TypeCtorInfo_24_24, hlds__pred_table__TypeInfo_23_23, hlds__pred_table__Pred_NA_Index0_11, &hlds__pred_table__Pred_NA_Index_17);
    }
#line 9820 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_25_25 = (MR_Word) &hlds__pred_table_scalar_common_2[0];
#line 9822 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_26_26 = (MR_Word) &hlds__pred_table_scalar_common_2[1];
#line 398 "pred_table.m"
    {
#line 398 "pred_table.m"
      mercury__map__optimize_2_p_0(hlds__pred_table__TypeInfo_25_25, hlds__pred_table__TypeInfo_26_26, hlds__pred_table__Pred_MNA_Index0_12, &hlds__pred_table__Pred_MNA_Index_18);
    }
#line 399 "pred_table.m"
    {
#line 399 "pred_table.m"
      mercury__map__optimize_2_p_0(hlds__pred_table__TypeCtorInfo_22_22, hlds__pred_table__TypeInfo_23_23, hlds__pred_table__Func_N_Index0_13, &hlds__pred_table__Func_N_Index_19);
    }
#line 400 "pred_table.m"
    {
#line 400 "pred_table.m"
      mercury__map__optimize_2_p_0(hlds__pred_table__TypeCtorInfo_24_24, hlds__pred_table__TypeInfo_23_23, hlds__pred_table__Func_NA_Index0_14, &hlds__pred_table__Func_NA_Index_20);
    }
#line 401 "pred_table.m"
    {
#line 401 "pred_table.m"
      mercury__map__optimize_2_p_0(hlds__pred_table__TypeInfo_25_25, hlds__pred_table__TypeInfo_26_26, hlds__pred_table__Func_MNA_Index0_15, &hlds__pred_table__Func_MNA_Index_21);
    }
#line 402 "pred_table.m"
    {
#line 402 "pred_table.m"
      MR_Word base;
#line 402 "pred_table.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 402 "pred_table.m"
      *hlds__pred_table__PredicateTable_4 = base;
#line 402 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__Preds_5));
#line 402 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__NextPredId_6));
#line 402 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__OldPredIds_7));
#line 402 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__NewRevPredIds_8));
#line 402 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__Accessibility_9));
#line 402 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__Pred_N_Index_16));
#line 402 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__Pred_NA_Index_17));
#line 402 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__Pred_MNA_Index_18));
#line 402 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__Func_N_Index_19));
#line 402 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__Func_NA_Index_20));
#line 402 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__pred_table__Func_MNA_Index_21));
#line 402 "pred_table.m"
    }
#line 391 "pred_table.m"
  }
#line 65 "pred_table.m"
}

#line 61 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_init_1_p_0(
#line 61 "pred_table.m"
  MR_Word * hlds__pred_table__PredicateTable_2)
#line 61 "pred_table.m"
{
#line 374 "pred_table.m"
  {
#line 374 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 374 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_14_14 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 374 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_17_17;
#line 374 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_18_18;
#line 374 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_19_19;
#line 374 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_20_20;
#line 374 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_21_21;
#line 374 "pred_table.m"
    MR_Word hlds__pred_table__Preds_3;
#line 374 "pred_table.m"
    MR_Word hlds__pred_table__NextPredId_4;
#line 374 "pred_table.m"
    MR_Word hlds__pred_table__AccessibilityTable_7;
#line 374 "pred_table.m"
    MR_Word hlds__pred_table__Pred_N_Index_8;
#line 374 "pred_table.m"
    MR_Word hlds__pred_table__Pred_NA_Index_9;
#line 374 "pred_table.m"
    MR_Word hlds__pred_table__Pred_MNA_Index_10;
#line 374 "pred_table.m"
    MR_Word hlds__pred_table__Func_N_Index_11;
#line 374 "pred_table.m"
    MR_Word hlds__pred_table__Func_NA_Index_12;
#line 374 "pred_table.m"
    MR_Word hlds__pred_table__Func_MNA_Index_13;

#line 375 "pred_table.m"
    {
#line 375 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeCtorInfo_14_14, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, &hlds__pred_table__Preds_3);
    }
#line 376 "pred_table.m"
    {
#line 376 "pred_table.m"
      hlds__pred_table__NextPredId_4 = hlds__hlds_pred__initial_pred_id_0_f_0();
    }
#line 379 "pred_table.m"
    {
#line 379 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeCtorInfo_14_14, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0, &hlds__pred_table__AccessibilityTable_7);
    }
#line 9938 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 9940 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_18_18 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
#line 380 "pred_table.m"
    {
#line 380 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeCtorInfo_17_17, hlds__pred_table__TypeInfo_18_18, &hlds__pred_table__Pred_N_Index_8);
    }
#line 9947 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_19_19 = (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0;
#line 381 "pred_table.m"
    {
#line 381 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeCtorInfo_19_19, hlds__pred_table__TypeInfo_18_18, &hlds__pred_table__Pred_NA_Index_9);
    }
#line 9954 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_20_20 = (MR_Word) &hlds__pred_table_scalar_common_2[0];
#line 9956 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_21_21 = (MR_Word) &hlds__pred_table_scalar_common_2[1];
#line 382 "pred_table.m"
    {
#line 382 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeInfo_20_20, hlds__pred_table__TypeInfo_21_21, &hlds__pred_table__Pred_MNA_Index_10);
    }
#line 383 "pred_table.m"
    {
#line 383 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeCtorInfo_17_17, hlds__pred_table__TypeInfo_18_18, &hlds__pred_table__Func_N_Index_11);
    }
#line 384 "pred_table.m"
    {
#line 384 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeCtorInfo_19_19, hlds__pred_table__TypeInfo_18_18, &hlds__pred_table__Func_NA_Index_12);
    }
#line 385 "pred_table.m"
    {
#line 385 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeInfo_20_20, hlds__pred_table__TypeInfo_21_21, &hlds__pred_table__Func_MNA_Index_13);
    }
#line 386 "pred_table.m"
    {
#line 386 "pred_table.m"
      MR_Word base;
#line 386 "pred_table.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 386 "pred_table.m"
      *hlds__pred_table__PredicateTable_2 = base;
#line 386 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__Preds_3));
#line 386 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__NextPredId_4));
#line 386 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 386 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 386 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__AccessibilityTable_7));
#line 386 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__Pred_N_Index_8));
#line 386 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__Pred_NA_Index_9));
#line 386 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__Pred_MNA_Index_10));
#line 386 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__Func_N_Index_11));
#line 386 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__Func_NA_Index_12));
#line 386 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__pred_table__Func_MNA_Index_13));
#line 386 "pred_table.m"
    }
#line 374 "pred_table.m"
  }
#line 61 "pred_table.m"
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
