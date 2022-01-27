/*
** Automatically generated from `pred_table.m'
** by the Mercury compiler,
** version rotd-2014-10-24
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 134 "hlds.pred_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

#line 137 "hlds.pred_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__pred_table__type_ctor_info_name_accessibility_0;

#line 140 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

#line 143 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct1 hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 146 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 149 "hlds.pred_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 152 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__pred_table__type_ctor_info_name_accessibility_0;

#line 155 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct1 hlds__pred_table__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 158 "hlds.pred_table.c"
static const MR_VA_TypeInfo_Struct2 hlds__pred_table____vti_pred_2builtin__type_ctor_info_int_0list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 161 "hlds.pred_table.c"
static const MR_EnumFunctorDesc hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_0;

#line 164 "hlds.pred_table.c"
static const MR_EnumFunctorDesc hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_1;

#line 167 "hlds.pred_table.c"
static const MR_EnumFunctorDescPtr hlds__pred_table__hlds__pred_table__enum_value_ordered_is_fully_qualified_0[2];

#line 170 "hlds.pred_table.c"
static const MR_EnumFunctorDescPtr hlds__pred_table__hlds__pred_table__enum_name_ordered_is_fully_qualified_0[2];

#line 173 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_is_fully_qualified_0[2];

#line 176 "hlds.pred_table.c"
static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_0;

#line 179 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_mode_no_0_1[1];

#line 182 "hlds.pred_table.c"
static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_1;

#line 185 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_mode_no_0_0[1];

#line 188 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_mode_no_0_1[1];

#line 191 "hlds.pred_table.c"
static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_mode_no_0[2];

#line 194 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_mode_no_0[2];

#line 197 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_mode_no_0[2];

#line 200 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 203 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_name_accessibility_0_0[2];

#line 206 "hlds.pred_table.c"
static const MR_ConstString hlds__pred_table__hlds__pred_table__field_names_name_accessibility_0_0[2];

#line 209 "hlds.pred_table.c"
static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_name_accessibility_0_0;

#line 212 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_name_accessibility_0_0[1];

#line 215 "hlds.pred_table.c"
static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_name_accessibility_0[1];

#line 218 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_name_accessibility_0[1];

#line 221 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_name_accessibility_0[1];

#line 224 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_name_arity_0_0[2];

#line 227 "hlds.pred_table.c"
static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_name_arity_0_0;

#line 230 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_name_arity_0_0[1];

#line 233 "hlds.pred_table.c"
static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_name_arity_0[1];

#line 236 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_name_arity_0[1];

#line 239 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_name_arity_0[1];

#line 242 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__pred_table__type_ctor_info_name_arity_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 245 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 248 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0;

#line 251 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_predicate_table_0_0[11];

#line 254 "hlds.pred_table.c"
static const MR_ConstString hlds__pred_table__hlds__pred_table__field_names_predicate_table_0_0[11];

#line 257 "hlds.pred_table.c"
static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_predicate_table_0_0;

#line 260 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_predicate_table_0_0[1];

#line 263 "hlds.pred_table.c"
static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_predicate_table_0[1];

#line 266 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_predicate_table_0[1];

#line 269 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_predicate_table_0[1];

#line 272 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____accessibility_table_0_0_10001(
#line 275 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 277 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 280 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____accessibility_table_0_0_10001(
#line 283 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 285 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 287 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 290 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____constraint_search_0_0_10001(
#line 293 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 295 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 298 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____constraint_search_0_0_10001(
#line 301 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 303 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 305 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 308 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____is_fully_qualified_0_0_10001(
#line 311 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 313 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 316 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____is_fully_qualified_0_0_10001(
#line 319 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 321 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 323 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 326 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____mode_no_0_0_10001(
#line 329 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 331 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 334 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____mode_no_0_0_10001(
#line 337 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 339 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 341 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 344 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____module_name_arity_index_0_0_10001(
#line 347 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 349 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 352 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____module_name_arity_index_0_0_10001(
#line 355 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 357 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 359 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 362 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_accessibility_0_0_10001(
#line 365 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 367 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 370 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_accessibility_0_0_10001(
#line 373 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 375 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 377 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 380 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_0_0_10001(
#line 383 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 385 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 388 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_0_0_10001(
#line 391 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 393 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 395 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 398 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_index_0_0_10001(
#line 401 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 403 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 406 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_index_0_0_10001(
#line 409 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 411 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 413 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 416 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_index_0_0_10001(
#line 419 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 421 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 424 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_index_0_0_10001(
#line 427 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 429 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 431 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 434 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____pred_table_0_0_10001(
#line 437 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 439 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 442 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____pred_table_0_0_10001(
#line 445 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 447 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 449 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 452 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____predicate_table_0_0_10001(
#line 455 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 457 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 460 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____predicate_table_0_0_10001(
#line 463 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 465 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 467 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 363 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_index_0_0(
#line 363 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 363 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 363 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3);

#line 363 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_index_0_0(
#line 363 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 363 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2);

#line 365 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_index_0_0(
#line 365 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 365 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 365 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3);

#line 365 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_index_0_0(
#line 365 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 365 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2);

#line 366 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_0_0(
#line 366 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 366 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 366 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3);

#line 366 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_0_0(
#line 366 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 366 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2);

#line 353 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_accessibility_0_0(
#line 353 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 353 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 353 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3);

#line 353 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_accessibility_0_0(
#line 353 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 353 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2);

#line 372 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____module_name_arity_index_0_0(
#line 372 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 372 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 372 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3);

#line 372 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____module_name_arity_index_0_0(
#line 372 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 372 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2);

#line 351 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____accessibility_table_0_0(
#line 351 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 351 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 351 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3);

#line 351 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____accessibility_table_0_0(
#line 351 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 351 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2);

#line 1110 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__univ_constraints_match_2_p_0(
#line 1110 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 1110 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2);

#line 999 "pred_table.m"
static void MR_CALL 
hlds__pred_table__insert_into_mna_index_6_p_0(
#line 999 "pred_table.m"
  MR_String hlds__pred_table__Name_7,
#line 999 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_8,
#line 999 "pred_table.m"
  MR_Word hlds__pred_table__PredId_9,
#line 999 "pred_table.m"
  MR_Word hlds__pred_table__Module_10,
#line 999 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_MNA_Index_0_14,
#line 999 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_MNA_Index_15);

#line 985 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_do_insert_14_p_0_1(
#line 985 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 985 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 985 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 985 "pred_table.m"
  MR_Box * hlds__pred_table__wrapper_arg_3);

#line 956 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_do_insert_14_p_0(
#line 956 "pred_table.m"
  MR_Word hlds__pred_table__Module_15,
#line 956 "pred_table.m"
  MR_String hlds__pred_table__Name_16,
#line 956 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_17,
#line 956 "pred_table.m"
  MR_Word hlds__pred_table__NeedQual_18,
#line 956 "pred_table.m"
  MR_Word hlds__pred_table__MaybeQualInfo_19,
#line 956 "pred_table.m"
  MR_Word hlds__pred_table__PredId_20,
#line 956 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_AccessibilityTable_0_31,
#line 956 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_AccessibilityTable_32,
#line 956 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_N_Index_0_33,
#line 956 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_N_Index_34,
#line 956 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_NA_Index_0_35,
#line 956 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_NA_Index_36,
#line 956 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_MNA_Index_0_37,
#line 956 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_MNA_Index_38);

#line 985 "pred_table.m"
static void MR_CALL 
hlds__pred_table__do_predicate_table_insert_7_p_0_1(
#line 985 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 985 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 985 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 985 "pred_table.m"
  MR_Box * hlds__pred_table__wrapper_arg_3);

#line 893 "pred_table.m"
static void MR_CALL 
hlds__pred_table__do_predicate_table_insert_7_p_0(
#line 893 "pred_table.m"
  MR_Word hlds__pred_table__MaybePredId_8,
#line 893 "pred_table.m"
  MR_Word hlds__pred_table__PredInfo_9,
#line 893 "pred_table.m"
  MR_Word hlds__pred_table__NeedQual_10,
#line 893 "pred_table.m"
  MR_Word hlds__pred_table__MaybeQualInfo_11,
#line 893 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_12,
#line 893 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_40,
#line 893 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_41);

#line 848 "pred_table.m"
static void MR_CALL 
hlds__pred_table__reinsert_for_restrict_6_p_0(
#line 848 "pred_table.m"
  MR_Word hlds__pred_table__PartialQualInfo_7,
#line 848 "pred_table.m"
  MR_Word hlds__pred_table__Preds_8,
#line 848 "pred_table.m"
  MR_Word hlds__pred_table__AccessibilityTable_9,
#line 848 "pred_table.m"
  MR_Word hlds__pred_table__PredId_10,
#line 848 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_19,
#line 848 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_20);

#line 768 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__pred_id_matches_module_3_p_0(
#line 768 "pred_table.m"
  MR_Word hlds__pred_table__Preds_4,
#line 768 "pred_table.m"
  MR_Word hlds__pred_table__ModuleName_5,
#line 768 "pred_table.m"
  MR_Word hlds__pred_table__PredId_6);

#line 766 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0_1(
#line 766 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 766 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1);

#line 678 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0(
#line 678 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_6,
#line 678 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_7,
#line 678 "pred_table.m"
  MR_Word hlds__pred_table__Module_8,
#line 678 "pred_table.m"
  MR_String hlds__pred_table__FuncName_9,
#line 678 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_10);

#line 468 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_remove_from_index_10_p_0(
#line 468 "pred_table.m"
  MR_Word hlds__pred_table__Module_11,
#line 468 "pred_table.m"
  MR_String hlds__pred_table__Name_12,
#line 468 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_13,
#line 468 "pred_table.m"
  MR_Word hlds__pred_table__PredId_14,
#line 468 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_N_0_18,
#line 468 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_N_19,
#line 468 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_NA_0_20,
#line 468 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_NA_21,
#line 468 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_MNA_0_22,
#line 468 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_MNA_23);

#line 766 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0_1(
#line 766 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 766 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1);

#line 766 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0_1(
#line 766 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 766 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1);

#line 766 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_sym_4_p_0_1(
#line 766 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 766 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1);

#line 766 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0_1(
#line 766 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 766 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1);

#line 766 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_sym_4_p_0_1(
#line 766 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 766 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1);

#line 841 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_restrict_4_p_0_1(
#line 841 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 841 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 841 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 841 "pred_table.m"
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



#line 998 "hlds.pred_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

#line 1007 "hlds.pred_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__pred_table__type_ctor_info_name_accessibility_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0
  }
};

#line 1016 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1025 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct1 hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1033 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1042 "hlds.pred_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__pred_table__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1051 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__pred_table__type_ctor_info_name_accessibility_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0
  }
};

#line 1060 "hlds.pred_table.c"
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

#line 1081 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct1 hlds__pred_table__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1089 "hlds.pred_table.c"
static const MR_VA_TypeInfo_Struct2 hlds__pred_table____vti_pred_2builtin__type_ctor_info_int_0list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &hlds__pred_table__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1099 "hlds.pred_table.c"
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

#line 1120 "hlds.pred_table.c"
static const MR_EnumFunctorDesc hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_0 = {
  (MR_String) "is_fully_qualified",
  (MR_Integer) 0
};

#line 1126 "hlds.pred_table.c"
static const MR_EnumFunctorDesc hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_1 = {
  (MR_String) "may_be_partially_qualified",
  (MR_Integer) 1
};

#line 1132 "hlds.pred_table.c"
static const MR_EnumFunctorDescPtr hlds__pred_table__hlds__pred_table__enum_value_ordered_is_fully_qualified_0[2] = {
  &hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_0,
  &hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_1
};

#line 1138 "hlds.pred_table.c"
static const MR_EnumFunctorDescPtr hlds__pred_table__hlds__pred_table__enum_name_ordered_is_fully_qualified_0[2] = {
  &hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_0,
  &hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_1
};

#line 1144 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_is_fully_qualified_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1150 "hlds.pred_table.c"
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

#line 1171 "hlds.pred_table.c"
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

#line 1186 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_mode_no_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1191 "hlds.pred_table.c"
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

#line 1206 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_mode_no_0_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_0
};

#line 1211 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_mode_no_0_1[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_1
};

#line 1216 "hlds.pred_table.c"
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

#line 1230 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_mode_no_0[2] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_1,
  &hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_0
};

#line 1236 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_mode_no_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1242 "hlds.pred_table.c"
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

#line 1263 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__pred_table__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1272 "hlds.pred_table.c"
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

#line 1293 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_name_accessibility_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1299 "hlds.pred_table.c"
static const MR_ConstString hlds__pred_table__hlds__pred_table__field_names_name_accessibility_0_0[2] = {
  (MR_String) "accessible_by_unqualifed_name",
  (MR_String) "accessible_by_partially_qualified_names"
};

#line 1305 "hlds.pred_table.c"
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

#line 1320 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_name_accessibility_0_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_name_accessibility_0_0
};

#line 1325 "hlds.pred_table.c"
static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_name_accessibility_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__pred_table__hlds__pred_table__du_stag_ordered_name_accessibility_0_0
  }
};

#line 1334 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_name_accessibility_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_name_accessibility_0_0
};

#line 1339 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_name_accessibility_0[1] = {
  (MR_Integer) 0
};

#line 1344 "hlds.pred_table.c"
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

#line 1431 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__pred_table__type_ctor_info_name_arity_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0,
    (MR_TypeInfo) &hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1440 "hlds.pred_table.c"
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

#line 1461 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1470 "hlds.pred_table.c"
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

#line 1491 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

#line 1500 "hlds.pred_table.c"
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

#line 1521 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_predicate_table_0_0[11] = {
  (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__pred_table__type_ctor_info_name_accessibility_0,
  (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2hlds__pred_table__type_ctor_info_name_arity_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2hlds__pred_table__type_ctor_info_name_arity_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
};

#line 1536 "hlds.pred_table.c"
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

#line 1551 "hlds.pred_table.c"
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

#line 1566 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_predicate_table_0_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_predicate_table_0_0
};

#line 1571 "hlds.pred_table.c"
static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_predicate_table_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__pred_table__hlds__pred_table__du_stag_ordered_predicate_table_0_0
  }
};

#line 1580 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_predicate_table_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_predicate_table_0_0
};

#line 1585 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_predicate_table_0[1] = {
  (MR_Integer) 0
};

#line 1590 "hlds.pred_table.c"
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

#line 1611 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____accessibility_table_0_0_10001(
#line 1614 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1616 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1618 "hlds.pred_table.c"
{
#line 1620 "hlds.pred_table.c"
  {
#line 1622 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1625 "hlds.pred_table.c"
    {
#line 1627 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____accessibility_table_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1630 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1632 "hlds.pred_table.c"
  }
#line 1634 "hlds.pred_table.c"
}

#line 1637 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____accessibility_table_0_0_10001(
#line 1640 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 1642 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 1644 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 1646 "hlds.pred_table.c"
{
#line 1648 "hlds.pred_table.c"
  {
#line 1650 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 1653 "hlds.pred_table.c"
    {
#line 1655 "hlds.pred_table.c"
      hlds__pred_table____Compare____accessibility_table_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 1658 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 1660 "hlds.pred_table.c"
  }
#line 1662 "hlds.pred_table.c"
}

#line 1665 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____constraint_search_0_0_10001(
#line 1668 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1670 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1672 "hlds.pred_table.c"
{
#line 1674 "hlds.pred_table.c"
  {
#line 1676 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1679 "hlds.pred_table.c"
    {
#line 1681 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____constraint_search_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1684 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1686 "hlds.pred_table.c"
  }
#line 1688 "hlds.pred_table.c"
}

#line 1691 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____constraint_search_0_0_10001(
#line 1694 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 1696 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 1698 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 1700 "hlds.pred_table.c"
{
#line 1702 "hlds.pred_table.c"
  {
#line 1704 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 1707 "hlds.pred_table.c"
    {
#line 1709 "hlds.pred_table.c"
      hlds__pred_table____Compare____constraint_search_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 1712 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 1714 "hlds.pred_table.c"
  }
#line 1716 "hlds.pred_table.c"
}

#line 1719 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____is_fully_qualified_0_0_10001(
#line 1722 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1724 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1726 "hlds.pred_table.c"
{
#line 1728 "hlds.pred_table.c"
  {
#line 1730 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1733 "hlds.pred_table.c"
    {
#line 1735 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____is_fully_qualified_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1738 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1740 "hlds.pred_table.c"
  }
#line 1742 "hlds.pred_table.c"
}

#line 1745 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____is_fully_qualified_0_0_10001(
#line 1748 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 1750 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 1752 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 1754 "hlds.pred_table.c"
{
#line 1756 "hlds.pred_table.c"
  {
#line 1758 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 1761 "hlds.pred_table.c"
    {
#line 1763 "hlds.pred_table.c"
      hlds__pred_table____Compare____is_fully_qualified_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 1766 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 1768 "hlds.pred_table.c"
  }
#line 1770 "hlds.pred_table.c"
}

#line 1773 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____mode_no_0_0_10001(
#line 1776 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1778 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1780 "hlds.pred_table.c"
{
#line 1782 "hlds.pred_table.c"
  {
#line 1784 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1787 "hlds.pred_table.c"
    {
#line 1789 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____mode_no_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1792 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1794 "hlds.pred_table.c"
  }
#line 1796 "hlds.pred_table.c"
}

#line 1799 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____mode_no_0_0_10001(
#line 1802 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 1804 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 1806 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 1808 "hlds.pred_table.c"
{
#line 1810 "hlds.pred_table.c"
  {
#line 1812 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 1815 "hlds.pred_table.c"
    {
#line 1817 "hlds.pred_table.c"
      hlds__pred_table____Compare____mode_no_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 1820 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 1822 "hlds.pred_table.c"
  }
#line 1824 "hlds.pred_table.c"
}

#line 1827 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____module_name_arity_index_0_0_10001(
#line 1830 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1832 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1834 "hlds.pred_table.c"
{
#line 1836 "hlds.pred_table.c"
  {
#line 1838 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1841 "hlds.pred_table.c"
    {
#line 1843 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____module_name_arity_index_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1846 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1848 "hlds.pred_table.c"
  }
#line 1850 "hlds.pred_table.c"
}

#line 1853 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____module_name_arity_index_0_0_10001(
#line 1856 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 1858 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 1860 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 1862 "hlds.pred_table.c"
{
#line 1864 "hlds.pred_table.c"
  {
#line 1866 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 1869 "hlds.pred_table.c"
    {
#line 1871 "hlds.pred_table.c"
      hlds__pred_table____Compare____module_name_arity_index_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 1874 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 1876 "hlds.pred_table.c"
  }
#line 1878 "hlds.pred_table.c"
}

#line 1881 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_accessibility_0_0_10001(
#line 1884 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1886 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1888 "hlds.pred_table.c"
{
#line 1890 "hlds.pred_table.c"
  {
#line 1892 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1895 "hlds.pred_table.c"
    {
#line 1897 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____name_accessibility_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1900 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1902 "hlds.pred_table.c"
  }
#line 1904 "hlds.pred_table.c"
}

#line 1907 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_accessibility_0_0_10001(
#line 1910 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 1912 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 1914 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 1916 "hlds.pred_table.c"
{
#line 1918 "hlds.pred_table.c"
  {
#line 1920 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 1923 "hlds.pred_table.c"
    {
#line 1925 "hlds.pred_table.c"
      hlds__pred_table____Compare____name_accessibility_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 1928 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 1930 "hlds.pred_table.c"
  }
#line 1932 "hlds.pred_table.c"
}

#line 1935 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_0_0_10001(
#line 1938 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1940 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1942 "hlds.pred_table.c"
{
#line 1944 "hlds.pred_table.c"
  {
#line 1946 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1949 "hlds.pred_table.c"
    {
#line 1951 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____name_arity_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1954 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1956 "hlds.pred_table.c"
  }
#line 1958 "hlds.pred_table.c"
}

#line 1961 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_0_0_10001(
#line 1964 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 1966 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 1968 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 1970 "hlds.pred_table.c"
{
#line 1972 "hlds.pred_table.c"
  {
#line 1974 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 1977 "hlds.pred_table.c"
    {
#line 1979 "hlds.pred_table.c"
      hlds__pred_table____Compare____name_arity_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 1982 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 1984 "hlds.pred_table.c"
  }
#line 1986 "hlds.pred_table.c"
}

#line 1989 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_index_0_0_10001(
#line 1992 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1994 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1996 "hlds.pred_table.c"
{
#line 1998 "hlds.pred_table.c"
  {
#line 2000 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 2003 "hlds.pred_table.c"
    {
#line 2005 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____name_arity_index_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 2008 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 2010 "hlds.pred_table.c"
  }
#line 2012 "hlds.pred_table.c"
}

#line 2015 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_index_0_0_10001(
#line 2018 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 2020 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 2022 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 2024 "hlds.pred_table.c"
{
#line 2026 "hlds.pred_table.c"
  {
#line 2028 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 2031 "hlds.pred_table.c"
    {
#line 2033 "hlds.pred_table.c"
      hlds__pred_table____Compare____name_arity_index_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 2036 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 2038 "hlds.pred_table.c"
  }
#line 2040 "hlds.pred_table.c"
}

#line 2043 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_index_0_0_10001(
#line 2046 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 2048 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 2050 "hlds.pred_table.c"
{
#line 2052 "hlds.pred_table.c"
  {
#line 2054 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 2057 "hlds.pred_table.c"
    {
#line 2059 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____name_index_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 2062 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 2064 "hlds.pred_table.c"
  }
#line 2066 "hlds.pred_table.c"
}

#line 2069 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_index_0_0_10001(
#line 2072 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 2074 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 2076 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 2078 "hlds.pred_table.c"
{
#line 2080 "hlds.pred_table.c"
  {
#line 2082 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 2085 "hlds.pred_table.c"
    {
#line 2087 "hlds.pred_table.c"
      hlds__pred_table____Compare____name_index_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 2090 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 2092 "hlds.pred_table.c"
  }
#line 2094 "hlds.pred_table.c"
}

#line 2097 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____pred_table_0_0_10001(
#line 2100 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 2102 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 2104 "hlds.pred_table.c"
{
#line 2106 "hlds.pred_table.c"
  {
#line 2108 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 2111 "hlds.pred_table.c"
    {
#line 2113 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____pred_table_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 2116 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 2118 "hlds.pred_table.c"
  }
#line 2120 "hlds.pred_table.c"
}

#line 2123 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____pred_table_0_0_10001(
#line 2126 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 2128 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 2130 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 2132 "hlds.pred_table.c"
{
#line 2134 "hlds.pred_table.c"
  {
#line 2136 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 2139 "hlds.pred_table.c"
    {
#line 2141 "hlds.pred_table.c"
      hlds__pred_table____Compare____pred_table_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 2144 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 2146 "hlds.pred_table.c"
  }
#line 2148 "hlds.pred_table.c"
}

#line 2151 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____predicate_table_0_0_10001(
#line 2154 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 2156 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 2158 "hlds.pred_table.c"
{
#line 2160 "hlds.pred_table.c"
  {
#line 2162 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 2165 "hlds.pred_table.c"
    {
#line 2167 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____predicate_table_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 2170 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 2172 "hlds.pred_table.c"
  }
#line 2174 "hlds.pred_table.c"
}

#line 2177 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____predicate_table_0_0_10001(
#line 2180 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 2182 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 2184 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 2186 "hlds.pred_table.c"
{
#line 2188 "hlds.pred_table.c"
  {
#line 2190 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 2193 "hlds.pred_table.c"
    {
#line 2195 "hlds.pred_table.c"
      hlds__pred_table____Compare____predicate_table_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 2198 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 2200 "hlds.pred_table.c"
  }
#line 2202 "hlds.pred_table.c"
}

#line 320 "pred_table.m"
void MR_CALL 
hlds__pred_table____Compare____predicate_table_0_0(
#line 320 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 320 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 320 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 320 "pred_table.m"
{
#line 320 "pred_table.m"
  {
#line 320 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 320 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_36 = (MR_Integer) hlds__pred_table__HeadVar__2_2;
#line 320 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_37 = (MR_Integer) hlds__pred_table__HeadVar__3_3;

#line 320 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_36 == hlds__pred_table__CastY_37);
#line 320 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 2229 "hlds.pred_table.c"
      *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 0;
#line 320 "pred_table.m"
    else
#line 320 "pred_table.m"
      {
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 2)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 3)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 4)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 5)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 6)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 7)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 8)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 9)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 10)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 0)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 1)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 2)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 3)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 4)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 5)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 6)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 7)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 8)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 9)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 10)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_26_26;

#line 320 "pred_table.m"
        {
#line 320 "pred_table.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[6], &hlds__pred_table__V_26_26, ((MR_Box) (hlds__pred_table__V_4_4)), ((MR_Box) (hlds__pred_table__V_15_15)));
        }
#line 2287 "hlds.pred_table.c"
        hlds__pred_table__succeeded = (hlds__pred_table__V_26_26 == (MR_Integer) 0);
#line 320 "pred_table.m"
        hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 320 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 320 "pred_table.m"
          *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_26_26;
#line 320 "pred_table.m"
        else
#line 320 "pred_table.m"
          {
#line 320 "pred_table.m"
            MR_Word hlds__pred_table__V_27_27;

#line 320 "pred_table.m"
            {
#line 320 "pred_table.m"
              hlds__hlds_pred____Compare____pred_id_0_0(&hlds__pred_table__V_27_27, hlds__pred_table__V_5_5, hlds__pred_table__V_16_16);
            }
#line 2307 "hlds.pred_table.c"
            hlds__pred_table__succeeded = (hlds__pred_table__V_27_27 == (MR_Integer) 0);
#line 320 "pred_table.m"
            hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 320 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 320 "pred_table.m"
              *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_27_27;
#line 320 "pred_table.m"
            else
#line 320 "pred_table.m"
              {
#line 320 "pred_table.m"
                MR_Word hlds__pred_table__V_28_28;

#line 320 "pred_table.m"
                {
#line 320 "pred_table.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_1[0], &hlds__pred_table__V_28_28, ((MR_Box) (hlds__pred_table__V_6_6)), ((MR_Box) (hlds__pred_table__V_17_17)));
                }
#line 2327 "hlds.pred_table.c"
                hlds__pred_table__succeeded = (hlds__pred_table__V_28_28 == (MR_Integer) 0);
#line 320 "pred_table.m"
                hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 320 "pred_table.m"
                if (hlds__pred_table__succeeded)
#line 320 "pred_table.m"
                  *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_28_28;
#line 320 "pred_table.m"
                else
#line 320 "pred_table.m"
                  {
#line 320 "pred_table.m"
                    MR_Word hlds__pred_table__V_29_29;

#line 320 "pred_table.m"
                    {
#line 320 "pred_table.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_1[0], &hlds__pred_table__V_29_29, ((MR_Box) (hlds__pred_table__V_7_7)), ((MR_Box) (hlds__pred_table__V_18_18)));
                    }
#line 2347 "hlds.pred_table.c"
                    hlds__pred_table__succeeded = (hlds__pred_table__V_29_29 == (MR_Integer) 0);
#line 320 "pred_table.m"
                    hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 320 "pred_table.m"
                    if (hlds__pred_table__succeeded)
#line 320 "pred_table.m"
                      *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_29_29;
#line 320 "pred_table.m"
                    else
#line 320 "pred_table.m"
                      {
#line 320 "pred_table.m"
                        MR_Word hlds__pred_table__V_30_30;

#line 320 "pred_table.m"
                        {
#line 320 "pred_table.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[3], &hlds__pred_table__V_30_30, ((MR_Box) (hlds__pred_table__V_8_8)), ((MR_Box) (hlds__pred_table__V_19_19)));
                        }
#line 2367 "hlds.pred_table.c"
                        hlds__pred_table__succeeded = (hlds__pred_table__V_30_30 == (MR_Integer) 0);
#line 320 "pred_table.m"
                        hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 320 "pred_table.m"
                        if (hlds__pred_table__succeeded)
#line 320 "pred_table.m"
                          *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_30_30;
#line 320 "pred_table.m"
                        else
#line 320 "pred_table.m"
                          {
#line 320 "pred_table.m"
                            MR_Word hlds__pred_table__V_31_31;

#line 320 "pred_table.m"
                            {
#line 320 "pred_table.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[5], &hlds__pred_table__V_31_31, ((MR_Box) (hlds__pred_table__V_9_9)), ((MR_Box) (hlds__pred_table__V_20_20)));
                            }
#line 2387 "hlds.pred_table.c"
                            hlds__pred_table__succeeded = (hlds__pred_table__V_31_31 == (MR_Integer) 0);
#line 320 "pred_table.m"
                            hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 320 "pred_table.m"
                            if (hlds__pred_table__succeeded)
#line 320 "pred_table.m"
                              *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_31_31;
#line 320 "pred_table.m"
                            else
#line 320 "pred_table.m"
                              {
#line 320 "pred_table.m"
                                MR_Word hlds__pred_table__V_32_32;

#line 320 "pred_table.m"
                                {
#line 320 "pred_table.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[4], &hlds__pred_table__V_32_32, ((MR_Box) (hlds__pred_table__V_10_10)), ((MR_Box) (hlds__pred_table__V_21_21)));
                                }
#line 2407 "hlds.pred_table.c"
                                hlds__pred_table__succeeded = (hlds__pred_table__V_32_32 == (MR_Integer) 0);
#line 320 "pred_table.m"
                                hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 320 "pred_table.m"
                                if (hlds__pred_table__succeeded)
#line 320 "pred_table.m"
                                  *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_32_32;
#line 320 "pred_table.m"
                                else
#line 320 "pred_table.m"
                                  {
#line 320 "pred_table.m"
                                    MR_Word hlds__pred_table__V_33_33;

#line 320 "pred_table.m"
                                    {
#line 320 "pred_table.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[2], &hlds__pred_table__V_33_33, ((MR_Box) (hlds__pred_table__V_11_11)), ((MR_Box) (hlds__pred_table__V_22_22)));
                                    }
#line 2427 "hlds.pred_table.c"
                                    hlds__pred_table__succeeded = (hlds__pred_table__V_33_33 == (MR_Integer) 0);
#line 320 "pred_table.m"
                                    hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 320 "pred_table.m"
                                    if (hlds__pred_table__succeeded)
#line 320 "pred_table.m"
                                      *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_33_33;
#line 320 "pred_table.m"
                                    else
#line 320 "pred_table.m"
                                      {
#line 320 "pred_table.m"
                                        MR_Word hlds__pred_table__V_34_34;

#line 320 "pred_table.m"
                                        {
#line 320 "pred_table.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[5], &hlds__pred_table__V_34_34, ((MR_Box) (hlds__pred_table__V_12_12)), ((MR_Box) (hlds__pred_table__V_23_23)));
                                        }
#line 2447 "hlds.pred_table.c"
                                        hlds__pred_table__succeeded = (hlds__pred_table__V_34_34 == (MR_Integer) 0);
#line 320 "pred_table.m"
                                        hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 320 "pred_table.m"
                                        if (hlds__pred_table__succeeded)
#line 320 "pred_table.m"
                                          *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_34_34;
#line 320 "pred_table.m"
                                        else
#line 320 "pred_table.m"
                                          {
#line 320 "pred_table.m"
                                            MR_Word hlds__pred_table__V_35_35;

#line 320 "pred_table.m"
                                            {
#line 320 "pred_table.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[4], &hlds__pred_table__V_35_35, ((MR_Box) (hlds__pred_table__V_13_13)), ((MR_Box) (hlds__pred_table__V_24_24)));
                                            }
#line 2467 "hlds.pred_table.c"
                                            hlds__pred_table__succeeded = (hlds__pred_table__V_35_35 == (MR_Integer) 0);
#line 320 "pred_table.m"
                                            hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 320 "pred_table.m"
                                            if (hlds__pred_table__succeeded)
#line 320 "pred_table.m"
                                              *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_35_35;
#line 320 "pred_table.m"
                                            else
#line 320 "pred_table.m"
                                              {
#line 320 "pred_table.m"
                                                {
#line 320 "pred_table.m"
                                                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[2], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__V_14_14)), ((MR_Box) (hlds__pred_table__V_25_25)));
#line 320 "pred_table.m"
                                                  return;
                                                }
#line 320 "pred_table.m"
                                              }
#line 320 "pred_table.m"
                                          }
#line 320 "pred_table.m"
                                      }
#line 320 "pred_table.m"
                                  }
#line 320 "pred_table.m"
                              }
#line 320 "pred_table.m"
                          }
#line 320 "pred_table.m"
                      }
#line 320 "pred_table.m"
                  }
#line 320 "pred_table.m"
              }
#line 320 "pred_table.m"
          }
#line 320 "pred_table.m"
      }
#line 320 "pred_table.m"
  }
#line 320 "pred_table.m"
}

#line 320 "pred_table.m"
MR_bool MR_CALL 
hlds__pred_table____Unify____predicate_table_0_0(
#line 320 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 320 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 320 "pred_table.m"
{
#line 320 "pred_table.m"
  {
#line 320 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 320 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_25 = (MR_Integer) hlds__pred_table__HeadVar__1_1;
#line 320 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_26 = (MR_Integer) hlds__pred_table__HeadVar__2_2;

#line 320 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_25 == hlds__pred_table__CastY_26);
#line 320 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 320 "pred_table.m"
      hlds__pred_table__succeeded = MR_TRUE;
#line 320 "pred_table.m"
    else
#line 320 "pred_table.m"
      {
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_29_29;
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_30_30;
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_31_31;
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_32_32;
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_33_33;
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_34_34;
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_35_35;
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_36_36;
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_37_37;
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 0)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 1)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 2)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 3)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 4)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 5)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 6)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 7)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 8)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 9)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 10)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 2)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 3)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 4)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 5)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 6)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 7)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 8)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 9)));
#line 320 "pred_table.m"
        MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 10)));

#line 2604 "hlds.pred_table.c"
        {
#line 2606 "hlds.pred_table.c"
          hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pred_table_scalar_common_2[6], ((MR_Box) (hlds__pred_table__V_3_3)), ((MR_Box) (hlds__pred_table__V_14_14)));
        }
#line 320 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 320 "pred_table.m"
          {
#line 2613 "hlds.pred_table.c"
            {
#line 2615 "hlds.pred_table.c"
              hlds__pred_table__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__pred_table__V_4_4, hlds__pred_table__V_15_15);
            }
#line 320 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 320 "pred_table.m"
              {
#line 2622 "hlds.pred_table.c"
                hlds__pred_table__TypeInfo_29_29 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
#line 2624 "hlds.pred_table.c"
                {
#line 2626 "hlds.pred_table.c"
                  hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_29_29, ((MR_Box) (hlds__pred_table__V_5_5)), ((MR_Box) (hlds__pred_table__V_16_16)));
                }
#line 320 "pred_table.m"
                if (hlds__pred_table__succeeded)
#line 320 "pred_table.m"
                  {
#line 2633 "hlds.pred_table.c"
                    hlds__pred_table__TypeInfo_30_30 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
#line 2635 "hlds.pred_table.c"
                    {
#line 2637 "hlds.pred_table.c"
                      hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_30_30, ((MR_Box) (hlds__pred_table__V_6_6)), ((MR_Box) (hlds__pred_table__V_17_17)));
                    }
#line 320 "pred_table.m"
                    if (hlds__pred_table__succeeded)
#line 320 "pred_table.m"
                      {
#line 2644 "hlds.pred_table.c"
                        hlds__pred_table__TypeInfo_31_31 = (MR_Word) &hlds__pred_table_scalar_common_2[3];
#line 2646 "hlds.pred_table.c"
                        {
#line 2648 "hlds.pred_table.c"
                          hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_31_31, ((MR_Box) (hlds__pred_table__V_7_7)), ((MR_Box) (hlds__pred_table__V_18_18)));
                        }
#line 320 "pred_table.m"
                        if (hlds__pred_table__succeeded)
#line 320 "pred_table.m"
                          {
#line 2655 "hlds.pred_table.c"
                            hlds__pred_table__TypeInfo_32_32 = (MR_Word) &hlds__pred_table_scalar_common_2[5];
#line 2657 "hlds.pred_table.c"
                            {
#line 2659 "hlds.pred_table.c"
                              hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_32_32, ((MR_Box) (hlds__pred_table__V_8_8)), ((MR_Box) (hlds__pred_table__V_19_19)));
                            }
#line 320 "pred_table.m"
                            if (hlds__pred_table__succeeded)
#line 320 "pred_table.m"
                              {
#line 2666 "hlds.pred_table.c"
                                hlds__pred_table__TypeInfo_33_33 = (MR_Word) &hlds__pred_table_scalar_common_2[4];
#line 2668 "hlds.pred_table.c"
                                {
#line 2670 "hlds.pred_table.c"
                                  hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_33_33, ((MR_Box) (hlds__pred_table__V_9_9)), ((MR_Box) (hlds__pred_table__V_20_20)));
                                }
#line 320 "pred_table.m"
                                if (hlds__pred_table__succeeded)
#line 320 "pred_table.m"
                                  {
#line 2677 "hlds.pred_table.c"
                                    hlds__pred_table__TypeInfo_34_34 = (MR_Word) &hlds__pred_table_scalar_common_2[2];
#line 2679 "hlds.pred_table.c"
                                    {
#line 2681 "hlds.pred_table.c"
                                      hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_34_34, ((MR_Box) (hlds__pred_table__V_10_10)), ((MR_Box) (hlds__pred_table__V_21_21)));
                                    }
#line 320 "pred_table.m"
                                    if (hlds__pred_table__succeeded)
#line 320 "pred_table.m"
                                      {
#line 2688 "hlds.pred_table.c"
                                        hlds__pred_table__TypeInfo_35_35 = (MR_Word) &hlds__pred_table_scalar_common_2[5];
#line 2690 "hlds.pred_table.c"
                                        {
#line 2692 "hlds.pred_table.c"
                                          hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_35_35, ((MR_Box) (hlds__pred_table__V_11_11)), ((MR_Box) (hlds__pred_table__V_22_22)));
                                        }
#line 320 "pred_table.m"
                                        if (hlds__pred_table__succeeded)
#line 320 "pred_table.m"
                                          {
#line 2699 "hlds.pred_table.c"
                                            hlds__pred_table__TypeInfo_36_36 = (MR_Word) &hlds__pred_table_scalar_common_2[4];
#line 2701 "hlds.pred_table.c"
                                            {
#line 2703 "hlds.pred_table.c"
                                              hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_36_36, ((MR_Box) (hlds__pred_table__V_12_12)), ((MR_Box) (hlds__pred_table__V_23_23)));
                                            }
#line 320 "pred_table.m"
                                            if (hlds__pred_table__succeeded)
#line 320 "pred_table.m"
                                              {
#line 2710 "hlds.pred_table.c"
                                                hlds__pred_table__TypeInfo_37_37 = (MR_Word) &hlds__pred_table_scalar_common_2[2];
#line 2712 "hlds.pred_table.c"
                                                {
#line 2714 "hlds.pred_table.c"
                                                  return hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_37_37, ((MR_Box) (hlds__pred_table__V_13_13)), ((MR_Box) (hlds__pred_table__V_24_24)));
                                                }
#line 320 "pred_table.m"
                                              }
#line 320 "pred_table.m"
                                          }
#line 320 "pred_table.m"
                                      }
#line 320 "pred_table.m"
                                  }
#line 320 "pred_table.m"
                              }
#line 320 "pred_table.m"
                          }
#line 320 "pred_table.m"
                      }
#line 320 "pred_table.m"
                  }
#line 320 "pred_table.m"
              }
#line 320 "pred_table.m"
          }
#line 320 "pred_table.m"
      }
#line 320 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 320 "pred_table.m"
  }
#line 320 "pred_table.m"
}

#line 51 "pred_table.m"
void MR_CALL 
hlds__pred_table____Compare____pred_table_0_0(
#line 51 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 51 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 51 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 51 "pred_table.m"
{
#line 51 "pred_table.m"
  {
#line 51 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 51 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_4 = hlds__pred_table__HeadVar__2_2;
#line 51 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_5 = hlds__pred_table__HeadVar__3_3;

#line 51 "pred_table.m"
    {
#line 51 "pred_table.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[6], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__Cast_HeadVar1_4)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_5)));
#line 51 "pred_table.m"
      return;
    }
#line 51 "pred_table.m"
  }
#line 51 "pred_table.m"
}

#line 51 "pred_table.m"
MR_bool MR_CALL 
hlds__pred_table____Unify____pred_table_0_0(
#line 51 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 51 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 51 "pred_table.m"
{
#line 51 "pred_table.m"
  {
#line 51 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 51 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_3 = hlds__pred_table__HeadVar__1_1;
#line 51 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_4 = hlds__pred_table__HeadVar__2_2;

#line 51 "pred_table.m"
    {
#line 51 "pred_table.m"
      return hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pred_table_scalar_common_2[6], ((MR_Box) (hlds__pred_table__Cast_HeadVar1_3)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_4)));
    }
#line 51 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 51 "pred_table.m"
  }
#line 51 "pred_table.m"
}

#line 363 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_index_0_0(
#line 363 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 363 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 363 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 363 "pred_table.m"
{
#line 363 "pred_table.m"
  {
#line 363 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 363 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_4 = hlds__pred_table__HeadVar__2_2;
#line 363 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_5 = hlds__pred_table__HeadVar__3_3;

#line 363 "pred_table.m"
    {
#line 363 "pred_table.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[5], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__Cast_HeadVar1_4)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_5)));
#line 363 "pred_table.m"
      return;
    }
#line 363 "pred_table.m"
  }
#line 363 "pred_table.m"
}

#line 363 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_index_0_0(
#line 363 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 363 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 363 "pred_table.m"
{
#line 363 "pred_table.m"
  {
#line 363 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 363 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_3 = hlds__pred_table__HeadVar__1_1;
#line 363 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_4 = hlds__pred_table__HeadVar__2_2;

#line 363 "pred_table.m"
    {
#line 363 "pred_table.m"
      return hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pred_table_scalar_common_2[5], ((MR_Box) (hlds__pred_table__Cast_HeadVar1_3)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_4)));
    }
#line 363 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 363 "pred_table.m"
  }
#line 363 "pred_table.m"
}

#line 365 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_index_0_0(
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
    MR_Word hlds__pred_table__Cast_HeadVar1_4 = hlds__pred_table__HeadVar__2_2;
#line 365 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_5 = hlds__pred_table__HeadVar__3_3;

#line 365 "pred_table.m"
    {
#line 365 "pred_table.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[4], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__Cast_HeadVar1_4)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_5)));
#line 365 "pred_table.m"
      return;
    }
#line 365 "pred_table.m"
  }
#line 365 "pred_table.m"
}

#line 365 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_index_0_0(
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
    MR_Word hlds__pred_table__Cast_HeadVar1_3 = hlds__pred_table__HeadVar__1_1;
#line 365 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_4 = hlds__pred_table__HeadVar__2_2;

#line 365 "pred_table.m"
    {
#line 365 "pred_table.m"
      return hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pred_table_scalar_common_2[4], ((MR_Box) (hlds__pred_table__Cast_HeadVar1_3)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_4)));
    }
#line 365 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 365 "pred_table.m"
  }
#line 365 "pred_table.m"
}

#line 366 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_0_0(
#line 366 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 366 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 366 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 366 "pred_table.m"
{
#line 366 "pred_table.m"
  {
#line 366 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 366 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_9 = (MR_Integer) hlds__pred_table__HeadVar__2_2;
#line 366 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_10 = (MR_Integer) hlds__pred_table__HeadVar__3_3;

#line 366 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_9 == hlds__pred_table__CastY_10);
#line 366 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 2956 "hlds.pred_table.c"
      *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 0;
#line 366 "pred_table.m"
    else
#line 366 "pred_table.m"
      {
#line 366 "pred_table.m"
        MR_String hlds__pred_table__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 366 "pred_table.m"
        MR_Integer hlds__pred_table__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));
#line 366 "pred_table.m"
        MR_String hlds__pred_table__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 0)));
#line 366 "pred_table.m"
        MR_Integer hlds__pred_table__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 1)));
#line 366 "pred_table.m"
        MR_Word hlds__pred_table__V_8_8;

#line 366 "pred_table.m"
        {
#line 366 "pred_table.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&hlds__pred_table__V_8_8, hlds__pred_table__V_4_4, hlds__pred_table__V_6_6);
        }
#line 2978 "hlds.pred_table.c"
        hlds__pred_table__succeeded = (hlds__pred_table__V_8_8 == (MR_Integer) 0);
#line 366 "pred_table.m"
        hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 366 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 366 "pred_table.m"
          *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_8_8;
#line 366 "pred_table.m"
        else
#line 366 "pred_table.m"
          {
#line 366 "pred_table.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(hlds__pred_table__HeadVar__1_1, hlds__pred_table__V_5_5, hlds__pred_table__V_7_7);
#line 366 "pred_table.m"
            return;
          }
#line 366 "pred_table.m"
      }
#line 366 "pred_table.m"
  }
#line 366 "pred_table.m"
}

#line 366 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_0_0(
#line 366 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 366 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 366 "pred_table.m"
{
#line 366 "pred_table.m"
  {
#line 366 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 366 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_7 = (MR_Integer) hlds__pred_table__HeadVar__1_1;
#line 366 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_8 = (MR_Integer) hlds__pred_table__HeadVar__2_2;

#line 366 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_7 == hlds__pred_table__CastY_8);
#line 366 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 366 "pred_table.m"
      hlds__pred_table__succeeded = MR_TRUE;
#line 366 "pred_table.m"
    else
#line 366 "pred_table.m"
      {
#line 366 "pred_table.m"
        MR_String hlds__pred_table__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 0)));
#line 366 "pred_table.m"
        MR_Integer hlds__pred_table__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 1)));
#line 366 "pred_table.m"
        MR_String hlds__pred_table__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 366 "pred_table.m"
        MR_Integer hlds__pred_table__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));

#line 3039 "hlds.pred_table.c"
        hlds__pred_table__succeeded = (strcmp(hlds__pred_table__V_3_3, hlds__pred_table__V_5_5) == 0);
#line 366 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 3043 "hlds.pred_table.c"
          hlds__pred_table__succeeded = (hlds__pred_table__V_4_4 == hlds__pred_table__V_6_6);
#line 366 "pred_table.m"
      }
#line 366 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 366 "pred_table.m"
  }
#line 366 "pred_table.m"
}

#line 353 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_accessibility_0_0(
#line 353 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 353 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 353 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 353 "pred_table.m"
{
#line 353 "pred_table.m"
  {
#line 353 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 353 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_9 = (MR_Integer) hlds__pred_table__HeadVar__2_2;
#line 353 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_10 = (MR_Integer) hlds__pred_table__HeadVar__3_3;

#line 353 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_9 == hlds__pred_table__CastY_10);
#line 353 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 3078 "hlds.pred_table.c"
      *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 0;
#line 353 "pred_table.m"
    else
#line 353 "pred_table.m"
      {
#line 353 "pred_table.m"
        MR_Word hlds__pred_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 353 "pred_table.m"
        MR_Word hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));
#line 353 "pred_table.m"
        MR_Word hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 0)));
#line 353 "pred_table.m"
        MR_Word hlds__pred_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 1)));
#line 353 "pred_table.m"
        MR_Word hlds__pred_table__V_8_8;
#line 353 "pred_table.m"
        MR_Integer hlds__pred_table__V_13_13 = (MR_Integer) hlds__pred_table__V_4_4;
#line 353 "pred_table.m"
        MR_Integer hlds__pred_table__V_14_14 = (MR_Integer) hlds__pred_table__V_6_6;

#line 353 "pred_table.m"
        {
#line 353 "pred_table.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__pred_table__V_8_8, hlds__pred_table__V_13_13, hlds__pred_table__V_14_14);
        }
#line 3104 "hlds.pred_table.c"
        hlds__pred_table__succeeded = (hlds__pred_table__V_8_8 == (MR_Integer) 0);
#line 353 "pred_table.m"
        hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 353 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 353 "pred_table.m"
          *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_8_8;
#line 353 "pred_table.m"
        else
#line 353 "pred_table.m"
          {
#line 353 "pred_table.m"
            MR_Integer hlds__pred_table__V_15_15 = (MR_Integer) hlds__pred_table__V_5_5;
#line 353 "pred_table.m"
            MR_Integer hlds__pred_table__V_16_16 = (MR_Integer) hlds__pred_table__V_7_7;

#line 353 "pred_table.m"
            {
#line 353 "pred_table.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(hlds__pred_table__HeadVar__1_1, hlds__pred_table__V_15_15, hlds__pred_table__V_16_16);
#line 353 "pred_table.m"
              return;
            }
#line 353 "pred_table.m"
          }
#line 353 "pred_table.m"
      }
#line 353 "pred_table.m"
  }
#line 353 "pred_table.m"
}

#line 353 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_accessibility_0_0(
#line 353 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 353 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 353 "pred_table.m"
{
#line 353 "pred_table.m"
  {
#line 353 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 353 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_7 = (MR_Integer) hlds__pred_table__HeadVar__1_1;
#line 353 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_8 = (MR_Integer) hlds__pred_table__HeadVar__2_2;

#line 353 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_7 == hlds__pred_table__CastY_8);
#line 353 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 353 "pred_table.m"
      hlds__pred_table__succeeded = MR_TRUE;
#line 353 "pred_table.m"
    else
#line 353 "pred_table.m"
      {
#line 353 "pred_table.m"
        MR_Word hlds__pred_table__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 0)));
#line 353 "pred_table.m"
        MR_Word hlds__pred_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 1)));
#line 353 "pred_table.m"
        MR_Word hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 353 "pred_table.m"
        MR_Word hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));

#line 3174 "hlds.pred_table.c"
        hlds__pred_table__succeeded = (hlds__pred_table__V_3_3 == hlds__pred_table__V_5_5);
#line 353 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 3178 "hlds.pred_table.c"
          hlds__pred_table__succeeded = (hlds__pred_table__V_4_4 == hlds__pred_table__V_6_6);
#line 353 "pred_table.m"
      }
#line 353 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 353 "pred_table.m"
  }
#line 353 "pred_table.m"
}

#line 372 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____module_name_arity_index_0_0(
#line 372 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 372 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 372 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 372 "pred_table.m"
{
#line 372 "pred_table.m"
  {
#line 372 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 372 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_4 = hlds__pred_table__HeadVar__2_2;
#line 372 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_5 = hlds__pred_table__HeadVar__3_3;

#line 372 "pred_table.m"
    {
#line 372 "pred_table.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[2], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__Cast_HeadVar1_4)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_5)));
#line 372 "pred_table.m"
      return;
    }
#line 372 "pred_table.m"
  }
#line 372 "pred_table.m"
}

#line 372 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____module_name_arity_index_0_0(
#line 372 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 372 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 372 "pred_table.m"
{
#line 372 "pred_table.m"
  {
#line 372 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 372 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_3 = hlds__pred_table__HeadVar__1_1;
#line 372 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_4 = hlds__pred_table__HeadVar__2_2;

#line 372 "pred_table.m"
    {
#line 372 "pred_table.m"
      return hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pred_table_scalar_common_2[2], ((MR_Box) (hlds__pred_table__Cast_HeadVar1_3)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_4)));
    }
#line 372 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 372 "pred_table.m"
  }
#line 372 "pred_table.m"
}

#line 306 "pred_table.m"
void MR_CALL 
hlds__pred_table____Compare____mode_no_0_0(
#line 306 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 306 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 306 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 306 "pred_table.m"
{
#line 306 "pred_table.m"
  {
#line 306 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 306 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_8 = (MR_Integer) hlds__pred_table__HeadVar__2_2;
#line 306 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_9 = (MR_Integer) hlds__pred_table__HeadVar__3_3;

#line 306 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_8 == hlds__pred_table__CastY_9);
#line 306 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 3275 "hlds.pred_table.c"
      *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 0;
#line 306 "pred_table.m"
    else
#line 306 "pred_table.m"
      if ((hlds__pred_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 306 "pred_table.m"
        if ((hlds__pred_table__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 306 "pred_table.m"
          *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 0;
#line 306 "pred_table.m"
        else
#line 3287 "hlds.pred_table.c"
          *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 1;
#line 306 "pred_table.m"
      else
#line 306 "pred_table.m"
        {
#line 306 "pred_table.m"
          MR_Integer hlds__pred_table__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));

#line 306 "pred_table.m"
          if ((hlds__pred_table__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3298 "hlds.pred_table.c"
            *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 2;
#line 306 "pred_table.m"
          else
#line 306 "pred_table.m"
            {
#line 306 "pred_table.m"
              MR_Integer hlds__pred_table__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__3_3, (MR_Integer) 0)));

#line 306 "pred_table.m"
              {
#line 306 "pred_table.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(hlds__pred_table__HeadVar__1_1, hlds__pred_table__V_11_11, hlds__pred_table__V_7_7);
#line 306 "pred_table.m"
                return;
              }
#line 306 "pred_table.m"
            }
#line 306 "pred_table.m"
        }
#line 306 "pred_table.m"
  }
#line 306 "pred_table.m"
}

#line 306 "pred_table.m"
MR_bool MR_CALL 
hlds__pred_table____Unify____mode_no_0_0(
#line 306 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 306 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 306 "pred_table.m"
{
#line 306 "pred_table.m"
  {
#line 306 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 306 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_7 = (MR_Integer) hlds__pred_table__HeadVar__1_1;
#line 306 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_8 = (MR_Integer) hlds__pred_table__HeadVar__2_2;

#line 306 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_7 == hlds__pred_table__CastY_8);
#line 306 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 306 "pred_table.m"
      hlds__pred_table__succeeded = MR_TRUE;
#line 306 "pred_table.m"
    else
#line 306 "pred_table.m"
      if ((hlds__pred_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 306 "pred_table.m"
        {
#line 306 "pred_table.m"
          MR_Integer hlds__pred_table__CastX_3 = (MR_Integer) hlds__pred_table__HeadVar__1_1;
#line 306 "pred_table.m"
          MR_Integer hlds__pred_table__CastY_4 = (MR_Integer) hlds__pred_table__HeadVar__2_2;

#line 306 "pred_table.m"
          hlds__pred_table__succeeded = (hlds__pred_table__CastY_4 == hlds__pred_table__CastX_3);
#line 306 "pred_table.m"
        }
#line 306 "pred_table.m"
      else
#line 306 "pred_table.m"
        {
#line 306 "pred_table.m"
          MR_Integer hlds__pred_table__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__1_1, (MR_Integer) 0)));
#line 306 "pred_table.m"
          MR_Integer hlds__pred_table__V_6_6;

#line 306 "pred_table.m"
          hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 306 "pred_table.m"
          if (hlds__pred_table__succeeded)
#line 306 "pred_table.m"
            {
#line 306 "pred_table.m"
              hlds__pred_table__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 3379 "hlds.pred_table.c"
              hlds__pred_table__succeeded = (hlds__pred_table__V_5_5 == hlds__pred_table__V_6_6);
#line 306 "pred_table.m"
            }
#line 306 "pred_table.m"
        }
#line 306 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 306 "pred_table.m"
  }
#line 306 "pred_table.m"
}

#line 171 "pred_table.m"
void MR_CALL 
hlds__pred_table____Compare____is_fully_qualified_0_0(
#line 171 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 171 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 171 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 171 "pred_table.m"
{
#line 171 "pred_table.m"
  {
#line 171 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 171 "pred_table.m"
    MR_Integer hlds__pred_table__Cast_HeadVar1_4 = (MR_Integer) hlds__pred_table__HeadVar__2_2;
#line 171 "pred_table.m"
    MR_Integer hlds__pred_table__Cast_HeadVar2_5 = (MR_Integer) hlds__pred_table__HeadVar__3_3;

#line 171 "pred_table.m"
    {
#line 171 "pred_table.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__pred_table__HeadVar__1_1, hlds__pred_table__Cast_HeadVar1_4, hlds__pred_table__Cast_HeadVar2_5);
#line 171 "pred_table.m"
      return;
    }
#line 171 "pred_table.m"
  }
#line 171 "pred_table.m"
}

#line 171 "pred_table.m"
MR_bool MR_CALL 
hlds__pred_table____Unify____is_fully_qualified_0_0(
#line 171 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_1,
#line 171 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 171 "pred_table.m"
{
#line 3433 "hlds.pred_table.c"
  {
#line 3435 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded = (hlds__pred_table__HeadVar__2_1 == hlds__pred_table__HeadVar__2_2);

#line 3438 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 3440 "hlds.pred_table.c"
  }
#line 171 "pred_table.m"
}

#line 282 "pred_table.m"
void MR_CALL 
hlds__pred_table____Compare____constraint_search_0_0(
#line 282 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 282 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 282 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 282 "pred_table.m"
{
#line 282 "pred_table.m"
  {
#line 282 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 282 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_4 = hlds__pred_table__HeadVar__2_2;
#line 282 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_5 = hlds__pred_table__HeadVar__3_3;

#line 282 "pred_table.m"
    {
#line 282 "pred_table.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_3[0], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__Cast_HeadVar1_4)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_5)));
#line 282 "pred_table.m"
      return;
    }
#line 282 "pred_table.m"
  }
#line 282 "pred_table.m"
}

#line 282 "pred_table.m"
MR_bool MR_CALL 
hlds__pred_table____Unify____constraint_search_0_0(
#line 282 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 282 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 282 "pred_table.m"
{
#line 282 "pred_table.m"
  {
#line 282 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 282 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_3 = hlds__pred_table__HeadVar__1_1;
#line 282 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_4 = hlds__pred_table__HeadVar__2_2;

#line 282 "pred_table.m"
    {
#line 282 "pred_table.m"
      return hlds__pred_table__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__pred_table__Cast_HeadVar1_3, (MR_Word) hlds__pred_table__Cast_HeadVar2_4);
    }
#line 282 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 282 "pred_table.m"
  }
#line 282 "pred_table.m"
}

#line 351 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____accessibility_table_0_0(
#line 351 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 351 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 351 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 351 "pred_table.m"
{
#line 351 "pred_table.m"
  {
#line 351 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 351 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_4 = hlds__pred_table__HeadVar__2_2;
#line 351 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_5 = hlds__pred_table__HeadVar__3_3;

#line 351 "pred_table.m"
    {
#line 351 "pred_table.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[3], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__Cast_HeadVar1_4)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_5)));
#line 351 "pred_table.m"
      return;
    }
#line 351 "pred_table.m"
  }
#line 351 "pred_table.m"
}

#line 351 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____accessibility_table_0_0(
#line 351 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 351 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 351 "pred_table.m"
{
#line 351 "pred_table.m"
  {
#line 351 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 351 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_3 = hlds__pred_table__HeadVar__1_1;
#line 351 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_4 = hlds__pred_table__HeadVar__2_2;

#line 351 "pred_table.m"
    {
#line 351 "pred_table.m"
      return hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pred_table_scalar_common_2[3], ((MR_Box) (hlds__pred_table__Cast_HeadVar1_3)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_4)));
    }
#line 351 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 351 "pred_table.m"
  }
#line 351 "pred_table.m"
}

#line 1110 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__univ_constraints_match_2_p_0(
#line 1110 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 1110 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 1110 "pred_table.m"
{
#line 1113 "pred_table.m"
  while (MR_TRUE)
#line 1113 "pred_table.m"
    {
#line 1113 "pred_table.m"
      /* tailcall optimized into a loop */
#line 1113 "pred_table.m"
      {
#line 1113 "pred_table.m"
        MR_bool hlds__pred_table__succeeded;

#line 1113 "pred_table.m"
        if ((hlds__pred_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1113 "pred_table.m"
          hlds__pred_table__succeeded = (hlds__pred_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1113 "pred_table.m"
        else
#line 1115 "pred_table.m"
          {
#line 1115 "pred_table.m"
            MR_Word hlds__pred_table__TypeCtorInfo_11_11;
#line 1115 "pred_table.m"
            MR_Word hlds__pred_table__ProvenConstraint_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__1_1, (MR_Integer) 0)));
#line 1115 "pred_table.m"
            MR_Word hlds__pred_table__ProvenConstraints_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__1_1, (MR_Integer) 1)));
#line 1115 "pred_table.m"
            MR_Word hlds__pred_table__CalleeConstraint_5;
#line 1115 "pred_table.m"
            MR_Word hlds__pred_table__CalleeConstraints_6;
#line 1115 "pred_table.m"
            MR_Word hlds__pred_table__Name_7;
#line 1115 "pred_table.m"
            MR_Word hlds__pred_table__ProvenArgs_8;
#line 1115 "pred_table.m"
            MR_Integer hlds__pred_table__Arity_9;
#line 1115 "pred_table.m"
            MR_Word hlds__pred_table__CalleeArgs_10;
#line 1115 "pred_table.m"
            MR_Word hlds__pred_table__V_12_12;
#line 1115 "pred_table.m"
            MR_Integer hlds__pred_table__V_13_13;

#line 1115 "pred_table.m"
            hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1115 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 1115 "pred_table.m"
              {
#line 1115 "pred_table.m"
                hlds__pred_table__CalleeConstraint_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 1115 "pred_table.m"
                hlds__pred_table__CalleeConstraints_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));
#line 1116 "pred_table.m"
                hlds__pred_table__Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__ProvenConstraint_3, (MR_Integer) 0)));
#line 1116 "pred_table.m"
                hlds__pred_table__ProvenArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__ProvenConstraint_3, (MR_Integer) 1)));
#line 3634 "hlds.pred_table.c"
                hlds__pred_table__TypeCtorInfo_11_11 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1117 "pred_table.m"
                {
#line 1117 "pred_table.m"
                  mercury__list__length_2_p_0(hlds__pred_table__TypeCtorInfo_11_11, hlds__pred_table__ProvenArgs_8, &hlds__pred_table__Arity_9);
                }
#line 1118 "pred_table.m"
                hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__CalleeConstraint_5, (MR_Integer) 0)));
#line 1118 "pred_table.m"
                hlds__pred_table__CalleeArgs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__CalleeConstraint_5, (MR_Integer) 1)));
#line 1118 "pred_table.m"
                {
#line 1118 "pred_table.m"
                  hlds__pred_table__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__pred_table__Name_7, hlds__pred_table__V_12_12);
                }
#line 1115 "pred_table.m"
                if (hlds__pred_table__succeeded)
#line 1115 "pred_table.m"
                  {
#line 1119 "pred_table.m"
                    {
#line 1119 "pred_table.m"
                      mercury__list__length_2_p_0(hlds__pred_table__TypeCtorInfo_11_11, hlds__pred_table__CalleeArgs_10, &hlds__pred_table__V_13_13);
                    }
#line 1119 "pred_table.m"
                    hlds__pred_table__succeeded = (hlds__pred_table__Arity_9 == hlds__pred_table__V_13_13);
#line 1115 "pred_table.m"
                    if (hlds__pred_table__succeeded)
#line 1120 "pred_table.m"
                      {
#line 1120 "pred_table.m"
                        /* direct tailcall eliminated */
#line 1120 "pred_table.m"
                        {
#line 1120 "pred_table.m"
                          MR_Word hlds__pred_table__HeadVar__1__tmp_copy_1 = hlds__pred_table__ProvenConstraints_4;
#line 1120 "pred_table.m"
                          MR_Word hlds__pred_table__HeadVar__2__tmp_copy_2 = hlds__pred_table__CalleeConstraints_6;

#line 1120 "pred_table.m"
                          hlds__pred_table__HeadVar__2_2 = hlds__pred_table__HeadVar__2__tmp_copy_2;
#line 1120 "pred_table.m"
                          hlds__pred_table__HeadVar__1_1 = hlds__pred_table__HeadVar__1__tmp_copy_1;
#line 1120 "pred_table.m"
                        }
#line 1120 "pred_table.m"
                        continue;
#line 1120 "pred_table.m"
                      }
#line 1115 "pred_table.m"
                  }
#line 1115 "pred_table.m"
              }
#line 1115 "pred_table.m"
          }
#line 1113 "pred_table.m"
        return hlds__pred_table__succeeded;
#line 1113 "pred_table.m"
      }
#line 1113 "pred_table.m"
      break;
#line 1113 "pred_table.m"
    }
#line 1110 "pred_table.m"
}

#line 999 "pred_table.m"
static void MR_CALL 
hlds__pred_table__insert_into_mna_index_6_p_0(
#line 999 "pred_table.m"
  MR_String hlds__pred_table__Name_7,
#line 999 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_8,
#line 999 "pred_table.m"
  MR_Word hlds__pred_table__PredId_9,
#line 999 "pred_table.m"
  MR_Word hlds__pred_table__Module_10,
#line 999 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_MNA_Index_0_14,
#line 999 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_MNA_Index_15)
#line 999 "pred_table.m"
{
#line 1007 "pred_table.m"
  {
#line 1007 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 1007 "pred_table.m"
    MR_Word hlds__pred_table__MN_Arities0_12;
#line 1007 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16;
#line 1004 "pred_table.m"
    MR_Box hlds__pred_table__conv0_MN_Arities0_12;

#line 1004 "pred_table.m"
    {
#line 1004 "pred_table.m"
      hlds__pred_table__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1004 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_16_16, 0) = ((MR_Box) (hlds__pred_table__Module_10));
#line 1004 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_16_16, 1) = ((MR_Box) (hlds__pred_table__Name_7));
#line 1004 "pred_table.m"
    }
#line 1004 "pred_table.m"
    {
#line 1004 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__STATE_VARIABLE_MNA_Index_0_14, ((MR_Box) (hlds__pred_table__V_16_16)), &hlds__pred_table__conv0_MN_Arities0_12);
    }
#line 1004 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 1004 "pred_table.m"
      {
#line 1004 "pred_table.m"
        hlds__pred_table__MN_Arities0_12 = ((MR_Word) hlds__pred_table__conv0_MN_Arities0_12);
#line 1004 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 1004 "pred_table.m"
      }
#line 1007 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 1005 "pred_table.m"
      {
#line 1005 "pred_table.m"
        MR_Word hlds__pred_table__MN_Arities_13;

#line 1005 "pred_table.m"
        {
#line 1005 "pred_table.m"
          mercury__multi_map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (hlds__pred_table__Arity_8)), ((MR_Box) (hlds__pred_table__PredId_9)), hlds__pred_table__MN_Arities0_12, &hlds__pred_table__MN_Arities_13);
        }
#line 1006 "pred_table.m"
        {
#line 1006 "pred_table.m"
          mercury__map__det_update_4_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], ((MR_Box) (hlds__pred_table__V_16_16)), ((MR_Box) (hlds__pred_table__MN_Arities_13)), hlds__pred_table__STATE_VARIABLE_MNA_Index_0_14, hlds__pred_table__STATE_VARIABLE_MNA_Index_15);
#line 1006 "pred_table.m"
          return;
        }
#line 1005 "pred_table.m"
      }
#line 1007 "pred_table.m"
    else
#line 1008 "pred_table.m"
      {
#line 1008 "pred_table.m"
        MR_Word hlds__pred_table__V_19_19;
#line 1008 "pred_table.m"
        MR_Word hlds__pred_table__V_21_21;
#line 1008 "pred_table.m"
        MR_Word hlds__pred_table__MN_Arities_23;

#line 1008 "pred_table.m"
        {
#line 1008 "pred_table.m"
          hlds__pred_table__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1008 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_19_19, 0) = ((MR_Box) (hlds__pred_table__PredId_9));
#line 1008 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1008 "pred_table.m"
        }
#line 1008 "pred_table.m"
        {
#line 1008 "pred_table.m"
          hlds__pred_table__MN_Arities_23 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], ((MR_Box) (hlds__pred_table__Arity_8)), ((MR_Box) (hlds__pred_table__V_19_19)));
        }
#line 1009 "pred_table.m"
        {
#line 1009 "pred_table.m"
          hlds__pred_table__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1009 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_21_21, 0) = ((MR_Box) (hlds__pred_table__Module_10));
#line 1009 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_21_21, 1) = ((MR_Box) (hlds__pred_table__Name_7));
#line 1009 "pred_table.m"
        }
#line 1009 "pred_table.m"
        {
#line 1009 "pred_table.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], ((MR_Box) (hlds__pred_table__V_21_21)), ((MR_Box) (hlds__pred_table__MN_Arities_23)), hlds__pred_table__STATE_VARIABLE_MNA_Index_0_14, hlds__pred_table__STATE_VARIABLE_MNA_Index_15);
#line 1009 "pred_table.m"
          return;
        }
#line 1008 "pred_table.m"
      }
#line 1007 "pred_table.m"
  }
#line 999 "pred_table.m"
}

#line 985 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_do_insert_14_p_0_1(
#line 985 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 985 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 985 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 985 "pred_table.m"
  MR_Box * hlds__pred_table__wrapper_arg_3)
#line 985 "pred_table.m"
{
#line 985 "pred_table.m"
  {
#line 985 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;
#line 985 "pred_table.m"
    MR_Word hlds__pred_table__conv0_STATE_VARIABLE_MNA_Index_15;

#line 985 "pred_table.m"
    {
#line 985 "pred_table.m"
      hlds__pred_table__insert_into_mna_index_6_p_0(((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 5))), ((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2), &hlds__pred_table__conv0_STATE_VARIABLE_MNA_Index_15);
    }
#line 985 "pred_table.m"
    *hlds__pred_table__wrapper_arg_3 = ((MR_Box) (hlds__pred_table__conv0_STATE_VARIABLE_MNA_Index_15));
#line 985 "pred_table.m"
  }
#line 985 "pred_table.m"
}

#line 956 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_do_insert_14_p_0(
#line 956 "pred_table.m"
  MR_Word hlds__pred_table__Module_15,
#line 956 "pred_table.m"
  MR_String hlds__pred_table__Name_16,
#line 956 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_17,
#line 956 "pred_table.m"
  MR_Word hlds__pred_table__NeedQual_18,
#line 956 "pred_table.m"
  MR_Word hlds__pred_table__MaybeQualInfo_19,
#line 956 "pred_table.m"
  MR_Word hlds__pred_table__PredId_20,
#line 956 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_AccessibilityTable_0_31,
#line 956 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_AccessibilityTable_32,
#line 956 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_N_Index_0_33,
#line 956 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_N_Index_34,
#line 956 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_NA_Index_0_35,
#line 956 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_NA_Index_36,
#line 956 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_MNA_Index_0_37,
#line 956 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_MNA_Index_38)
#line 956 "pred_table.m"
{
#line 964 "pred_table.m"
  {
#line 964 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 964 "pred_table.m"
    MR_Word hlds__pred_table__AccessibleByUnqualifiedName_26;
#line 964 "pred_table.m"
    MR_Word hlds__pred_table__AccessibleByPartiallyQualifiedNames_29;
#line 964 "pred_table.m"
    MR_Word hlds__pred_table__Access_30;
#line 964 "pred_table.m"
    MR_Word hlds__pred_table__STATE_VARIABLE_MNA_Index_42_42;

#line 975 "pred_table.m"
    if ((hlds__pred_table__NeedQual_18 == (MR_Integer) 1))
#line 966 "pred_table.m"
      {
#line 966 "pred_table.m"
        MR_Word hlds__pred_table__TypeCtorInfo_46_46 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 966 "pred_table.m"
        MR_Word hlds__pred_table__NA_25;

#line 968 "pred_table.m"
        {
#line 968 "pred_table.m"
          mercury__multi_map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__pred_table__TypeCtorInfo_46_46, ((MR_Box) (hlds__pred_table__Name_16)), ((MR_Box) (hlds__pred_table__PredId_20)), hlds__pred_table__STATE_VARIABLE_N_Index_0_33, hlds__pred_table__STATE_VARIABLE_N_Index_34);
        }
#line 971 "pred_table.m"
        {
#line 971 "pred_table.m"
          hlds__pred_table__NA_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 971 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__NA_25, 0) = ((MR_Box) (hlds__pred_table__Name_16));
#line 971 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__NA_25, 1) = ((MR_Box) (hlds__pred_table__Arity_17));
#line 971 "pred_table.m"
        }
#line 972 "pred_table.m"
        {
#line 972 "pred_table.m"
          mercury__multi_map__set_4_p_0((MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0, hlds__pred_table__TypeCtorInfo_46_46, ((MR_Box) (hlds__pred_table__NA_25)), ((MR_Box) (hlds__pred_table__PredId_20)), hlds__pred_table__STATE_VARIABLE_NA_Index_0_35, hlds__pred_table__STATE_VARIABLE_NA_Index_36);
        }
#line 974 "pred_table.m"
        hlds__pred_table__AccessibleByUnqualifiedName_26 = (MR_Integer) 1;
#line 966 "pred_table.m"
      }
#line 975 "pred_table.m"
    else
#line 976 "pred_table.m"
      {
#line 977 "pred_table.m"
        hlds__pred_table__AccessibleByUnqualifiedName_26 = (MR_Integer) 0;
#line 977 "pred_table.m"
        *hlds__pred_table__STATE_VARIABLE_N_Index_34 = hlds__pred_table__STATE_VARIABLE_N_Index_0_33;
#line 977 "pred_table.m"
        *hlds__pred_table__STATE_VARIABLE_NA_Index_36 = hlds__pred_table__STATE_VARIABLE_NA_Index_0_35;
#line 976 "pred_table.m"
      }
#line 989 "pred_table.m"
    if ((hlds__pred_table__MaybeQualInfo_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 990 "pred_table.m"
      {
#line 991 "pred_table.m"
        hlds__pred_table__AccessibleByPartiallyQualifiedNames_29 = (MR_Integer) 0;
#line 991 "pred_table.m"
        hlds__pred_table__STATE_VARIABLE_MNA_Index_42_42 = hlds__pred_table__STATE_VARIABLE_MNA_Index_0_37;
#line 990 "pred_table.m"
      }
#line 989 "pred_table.m"
    else
#line 980 "pred_table.m"
      {
#line 980 "pred_table.m"
        MR_Word hlds__pred_table__QualInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__MaybeQualInfo_19, (MR_Integer) 0)));
#line 980 "pred_table.m"
        MR_Word hlds__pred_table__PartialQuals_28;
#line 980 "pred_table.m"
        MR_Word hlds__pred_table__V_41_41;
#line 985 "pred_table.m"
        MR_Box hlds__pred_table__conv1_STATE_VARIABLE_MNA_Index_42_42;

#line 984 "pred_table.m"
        {
#line 984 "pred_table.m"
          parse_tree__module_qual__get_partial_qualifiers_3_p_0(hlds__pred_table__Module_15, hlds__pred_table__QualInfo_27, &hlds__pred_table__PartialQuals_28);
        }
#line 985 "pred_table.m"
        {
#line 985 "pred_table.m"
          hlds__pred_table__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 985 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_4[1]));
#line 985 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 1) = ((MR_Box) (hlds__pred_table__predicate_table_do_insert_14_p_0_1));
#line 985 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 985 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 3) = ((MR_Box) (hlds__pred_table__Name_16));
#line 985 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 4) = ((MR_Box) (hlds__pred_table__Arity_17));
#line 985 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 5) = ((MR_Box) (hlds__pred_table__PredId_20));
#line 985 "pred_table.m"
        }
#line 985 "pred_table.m"
        {
#line 985 "pred_table.m"
          mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__pred_table_scalar_common_2[2], hlds__pred_table__V_41_41, hlds__pred_table__PartialQuals_28, ((MR_Box) (hlds__pred_table__STATE_VARIABLE_MNA_Index_0_37)), &hlds__pred_table__conv1_STATE_VARIABLE_MNA_Index_42_42);
        }
#line 985 "pred_table.m"
        hlds__pred_table__STATE_VARIABLE_MNA_Index_42_42 = ((MR_Word) hlds__pred_table__conv1_STATE_VARIABLE_MNA_Index_42_42);
#line 988 "pred_table.m"
        hlds__pred_table__AccessibleByPartiallyQualifiedNames_29 = (MR_Integer) 1;
#line 980 "pred_table.m"
      }
#line 994 "pred_table.m"
    {
#line 994 "pred_table.m"
      hlds__pred_table__insert_into_mna_index_6_p_0(hlds__pred_table__Name_16, hlds__pred_table__Arity_17, hlds__pred_table__PredId_20, hlds__pred_table__Module_15, hlds__pred_table__STATE_VARIABLE_MNA_Index_42_42, hlds__pred_table__STATE_VARIABLE_MNA_Index_38);
    }
#line 995 "pred_table.m"
    {
#line 995 "pred_table.m"
      hlds__pred_table__Access_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 995 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__Access_30, 0) = ((MR_Box) (hlds__pred_table__AccessibleByUnqualifiedName_26));
#line 995 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__Access_30, 1) = ((MR_Box) (hlds__pred_table__AccessibleByPartiallyQualifiedNames_29));
#line 995 "pred_table.m"
    }
#line 997 "pred_table.m"
    {
#line 997 "pred_table.m"
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0, ((MR_Box) (hlds__pred_table__PredId_20)), ((MR_Box) (hlds__pred_table__Access_30)), hlds__pred_table__STATE_VARIABLE_AccessibilityTable_0_31, hlds__pred_table__STATE_VARIABLE_AccessibilityTable_32);
#line 997 "pred_table.m"
      return;
    }
#line 964 "pred_table.m"
  }
#line 956 "pred_table.m"
}

#line 985 "pred_table.m"
static void MR_CALL 
hlds__pred_table__do_predicate_table_insert_7_p_0_1(
#line 985 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 985 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 985 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 985 "pred_table.m"
  MR_Box * hlds__pred_table__wrapper_arg_3)
#line 985 "pred_table.m"
{
#line 985 "pred_table.m"
  {
#line 985 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;
#line 985 "pred_table.m"
    MR_Word hlds__pred_table__conv0_STATE_VARIABLE_MNA_Index_15;

#line 985 "pred_table.m"
    {
#line 985 "pred_table.m"
      hlds__pred_table__insert_into_mna_index_6_p_0(((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 5))), ((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2), &hlds__pred_table__conv0_STATE_VARIABLE_MNA_Index_15);
    }
#line 985 "pred_table.m"
    *hlds__pred_table__wrapper_arg_3 = ((MR_Box) (hlds__pred_table__conv0_STATE_VARIABLE_MNA_Index_15));
#line 985 "pred_table.m"
  }
#line 985 "pred_table.m"
}

#line 893 "pred_table.m"
static void MR_CALL 
hlds__pred_table__do_predicate_table_insert_7_p_0(
#line 893 "pred_table.m"
  MR_Word hlds__pred_table__MaybePredId_8,
#line 893 "pred_table.m"
  MR_Word hlds__pred_table__PredInfo_9,
#line 893 "pred_table.m"
  MR_Word hlds__pred_table__NeedQual_10,
#line 893 "pred_table.m"
  MR_Word hlds__pred_table__MaybeQualInfo_11,
#line 893 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_12,
#line 893 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_40,
#line 893 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_41)
#line 893 "pred_table.m"
{
#line 898 "pred_table.m"
  {
#line 898 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 898 "pred_table.m"
    MR_Word hlds__pred_table__Preds0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_40, (MR_Integer) 0)));
#line 898 "pred_table.m"
    MR_Word hlds__pred_table__NextPredId0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_40, (MR_Integer) 1)));
#line 898 "pred_table.m"
    MR_Word hlds__pred_table__OldPredIds0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_40, (MR_Integer) 2)));
#line 898 "pred_table.m"
    MR_Word hlds__pred_table__NewRevPredIds0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_40, (MR_Integer) 3)));
#line 898 "pred_table.m"
    MR_Word hlds__pred_table__AccessibilityTable0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_40, (MR_Integer) 4)));
#line 898 "pred_table.m"
    MR_Word hlds__pred_table__Pred_N_Index0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_40, (MR_Integer) 5)));
#line 898 "pred_table.m"
    MR_Word hlds__pred_table__Pred_NA_Index0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_40, (MR_Integer) 6)));
#line 898 "pred_table.m"
    MR_Word hlds__pred_table__Pred_MNA_Index0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_40, (MR_Integer) 7)));
#line 898 "pred_table.m"
    MR_Word hlds__pred_table__Func_N_Index0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_40, (MR_Integer) 8)));
#line 898 "pred_table.m"
    MR_Word hlds__pred_table__Func_NA_Index0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_40, (MR_Integer) 9)));
#line 898 "pred_table.m"
    MR_Word hlds__pred_table__Func_MNA_Index0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_40, (MR_Integer) 10)));
#line 898 "pred_table.m"
    MR_Word hlds__pred_table__Module_25;
#line 898 "pred_table.m"
    MR_String hlds__pred_table__Name_26;
#line 898 "pred_table.m"
    MR_Integer hlds__pred_table__Arity_27;
#line 898 "pred_table.m"
    MR_Word hlds__pred_table__NextPredId_28;
#line 898 "pred_table.m"
    MR_Word hlds__pred_table__PredOrFunc_29;
#line 898 "pred_table.m"
    MR_Word hlds__pred_table__AccessibilityTable_30;
#line 898 "pred_table.m"
    MR_Word hlds__pred_table__Pred_N_Index_31;
#line 898 "pred_table.m"
    MR_Word hlds__pred_table__Pred_NA_Index_32;
#line 898 "pred_table.m"
    MR_Word hlds__pred_table__Pred_MNA_Index_33;
#line 898 "pred_table.m"
    MR_Word hlds__pred_table__Func_N_Index_34;
#line 898 "pred_table.m"
    MR_Word hlds__pred_table__Func_NA_Index_35;
#line 898 "pred_table.m"
    MR_Word hlds__pred_table__Func_MNA_Index_36;
#line 898 "pred_table.m"
    MR_Word hlds__pred_table__NewRevPredIds_38;
#line 898 "pred_table.m"
    MR_Word hlds__pred_table__Preds_39;

#line 903 "pred_table.m"
    {
#line 903 "pred_table.m"
      hlds__pred_table__Module_25 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__pred_table__PredInfo_9);
    }
#line 904 "pred_table.m"
    {
#line 904 "pred_table.m"
      hlds__pred_table__Name_26 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__pred_table__PredInfo_9);
    }
#line 905 "pred_table.m"
    {
#line 905 "pred_table.m"
      hlds__pred_table__Arity_27 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__pred_table__PredInfo_9);
    }
#line 909 "pred_table.m"
    if ((hlds__pred_table__MaybePredId_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 911 "pred_table.m"
      {
#line 912 "pred_table.m"
        *hlds__pred_table__PredId_12 = hlds__pred_table__NextPredId0_15;
#line 913 "pred_table.m"
        {
#line 913 "pred_table.m"
          hlds__hlds_pred__next_pred_id_2_p_0(*hlds__pred_table__PredId_12, &hlds__pred_table__NextPredId_28);
        }
#line 911 "pred_table.m"
      }
#line 909 "pred_table.m"
    else
#line 907 "pred_table.m"
      {
#line 907 "pred_table.m"
        *hlds__pred_table__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__MaybePredId_8, (MR_Integer) 0)));
#line 908 "pred_table.m"
        hlds__pred_table__NextPredId_28 = hlds__pred_table__NextPredId0_15;
#line 907 "pred_table.m"
      }
#line 917 "pred_table.m"
    {
#line 917 "pred_table.m"
      hlds__pred_table__PredOrFunc_29 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__pred_table__PredInfo_9);
    }
#line 930 "pred_table.m"
    if ((hlds__pred_table__PredOrFunc_29 == (MR_Integer) 1))
#line 931 "pred_table.m"
      {
#line 931 "pred_table.m"
        MR_Integer hlds__pred_table__FuncArity_37 = (hlds__pred_table__Arity_27 - (MR_Integer) 1);
#line 931 "pred_table.m"
        MR_Word hlds__pred_table__AccessibleByUnqualifiedName_65;
#line 931 "pred_table.m"
        MR_Word hlds__pred_table__AccessibleByPartiallyQualifiedNames_68;
#line 931 "pred_table.m"
        MR_Word hlds__pred_table__Access_69;
#line 931 "pred_table.m"
        MR_Word hlds__pred_table__STATE_VARIABLE_MNA_Index_42_73;

#line 975 "pred_table.m"
        if ((hlds__pred_table__NeedQual_10 == (MR_Integer) 1))
#line 966 "pred_table.m"
          {
#line 966 "pred_table.m"
            MR_Word hlds__pred_table__TypeCtorInfo_46_77 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 966 "pred_table.m"
            MR_Word hlds__pred_table__NA_64;

#line 968 "pred_table.m"
            {
#line 968 "pred_table.m"
              mercury__multi_map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__pred_table__TypeCtorInfo_46_77, ((MR_Box) (hlds__pred_table__Name_26)), ((MR_Box) (*hlds__pred_table__PredId_12)), hlds__pred_table__Func_N_Index0_22, &hlds__pred_table__Func_N_Index_34);
            }
#line 971 "pred_table.m"
            {
#line 971 "pred_table.m"
              hlds__pred_table__NA_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 971 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__NA_64, 0) = ((MR_Box) (hlds__pred_table__Name_26));
#line 971 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__NA_64, 1) = ((MR_Box) (hlds__pred_table__FuncArity_37));
#line 971 "pred_table.m"
            }
#line 972 "pred_table.m"
            {
#line 972 "pred_table.m"
              mercury__multi_map__set_4_p_0((MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0, hlds__pred_table__TypeCtorInfo_46_77, ((MR_Box) (hlds__pred_table__NA_64)), ((MR_Box) (*hlds__pred_table__PredId_12)), hlds__pred_table__Func_NA_Index0_23, &hlds__pred_table__Func_NA_Index_35);
            }
#line 974 "pred_table.m"
            hlds__pred_table__AccessibleByUnqualifiedName_65 = (MR_Integer) 1;
#line 966 "pred_table.m"
          }
#line 975 "pred_table.m"
        else
#line 976 "pred_table.m"
          {
#line 977 "pred_table.m"
            hlds__pred_table__AccessibleByUnqualifiedName_65 = (MR_Integer) 0;
#line 977 "pred_table.m"
            hlds__pred_table__Func_N_Index_34 = hlds__pred_table__Func_N_Index0_22;
#line 977 "pred_table.m"
            hlds__pred_table__Func_NA_Index_35 = hlds__pred_table__Func_NA_Index0_23;
#line 976 "pred_table.m"
          }
#line 989 "pred_table.m"
        if ((hlds__pred_table__MaybeQualInfo_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 990 "pred_table.m"
          {
#line 991 "pred_table.m"
            hlds__pred_table__AccessibleByPartiallyQualifiedNames_68 = (MR_Integer) 0;
#line 991 "pred_table.m"
            hlds__pred_table__STATE_VARIABLE_MNA_Index_42_73 = hlds__pred_table__Func_MNA_Index0_24;
#line 990 "pred_table.m"
          }
#line 989 "pred_table.m"
        else
#line 980 "pred_table.m"
          {
#line 980 "pred_table.m"
            MR_Word hlds__pred_table__QualInfo_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__MaybeQualInfo_11, (MR_Integer) 0)));
#line 980 "pred_table.m"
            MR_Word hlds__pred_table__PartialQuals_67;
#line 980 "pred_table.m"
            MR_Word hlds__pred_table__V_72_72;
#line 985 "pred_table.m"
            MR_Box hlds__pred_table__conv1_STATE_VARIABLE_MNA_Index_42_73;

#line 984 "pred_table.m"
            {
#line 984 "pred_table.m"
              parse_tree__module_qual__get_partial_qualifiers_3_p_0(hlds__pred_table__Module_25, hlds__pred_table__QualInfo_66, &hlds__pred_table__PartialQuals_67);
            }
#line 985 "pred_table.m"
            {
#line 985 "pred_table.m"
              hlds__pred_table__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 985 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_72_72, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_4[1]));
#line 985 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_72_72, 1) = ((MR_Box) (hlds__pred_table__do_predicate_table_insert_7_p_0_1));
#line 985 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 985 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_72_72, 3) = ((MR_Box) (hlds__pred_table__Name_26));
#line 985 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_72_72, 4) = ((MR_Box) (hlds__pred_table__FuncArity_37));
#line 985 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_72_72, 5) = ((MR_Box) (*hlds__pred_table__PredId_12));
#line 985 "pred_table.m"
            }
#line 985 "pred_table.m"
            {
#line 985 "pred_table.m"
              mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__pred_table_scalar_common_2[2], hlds__pred_table__V_72_72, hlds__pred_table__PartialQuals_67, ((MR_Box) (hlds__pred_table__Func_MNA_Index0_24)), &hlds__pred_table__conv1_STATE_VARIABLE_MNA_Index_42_73);
            }
#line 985 "pred_table.m"
            hlds__pred_table__STATE_VARIABLE_MNA_Index_42_73 = ((MR_Word) hlds__pred_table__conv1_STATE_VARIABLE_MNA_Index_42_73);
#line 988 "pred_table.m"
            hlds__pred_table__AccessibleByPartiallyQualifiedNames_68 = (MR_Integer) 1;
#line 980 "pred_table.m"
          }
#line 994 "pred_table.m"
        {
#line 994 "pred_table.m"
          hlds__pred_table__insert_into_mna_index_6_p_0(hlds__pred_table__Name_26, hlds__pred_table__FuncArity_37, *hlds__pred_table__PredId_12, hlds__pred_table__Module_25, hlds__pred_table__STATE_VARIABLE_MNA_Index_42_73, &hlds__pred_table__Func_MNA_Index_36);
        }
#line 995 "pred_table.m"
        {
#line 995 "pred_table.m"
          hlds__pred_table__Access_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 995 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__Access_69, 0) = ((MR_Box) (hlds__pred_table__AccessibleByUnqualifiedName_65));
#line 995 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__Access_69, 1) = ((MR_Box) (hlds__pred_table__AccessibleByPartiallyQualifiedNames_68));
#line 995 "pred_table.m"
        }
#line 997 "pred_table.m"
        {
#line 997 "pred_table.m"
          mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0, ((MR_Box) (*hlds__pred_table__PredId_12)), ((MR_Box) (hlds__pred_table__Access_69)), hlds__pred_table__AccessibilityTable0_18, &hlds__pred_table__AccessibilityTable_30);
        }
#line 940 "pred_table.m"
        hlds__pred_table__Pred_N_Index_31 = hlds__pred_table__Pred_N_Index0_19;
#line 941 "pred_table.m"
        hlds__pred_table__Pred_NA_Index_32 = hlds__pred_table__Pred_NA_Index0_20;
#line 942 "pred_table.m"
        hlds__pred_table__Pred_MNA_Index_33 = hlds__pred_table__Pred_MNA_Index0_21;
#line 931 "pred_table.m"
      }
#line 930 "pred_table.m"
    else
#line 919 "pred_table.m"
      {
#line 920 "pred_table.m"
        {
#line 920 "pred_table.m"
          hlds__pred_table__predicate_table_do_insert_14_p_0(hlds__pred_table__Module_25, hlds__pred_table__Name_26, hlds__pred_table__Arity_27, hlds__pred_table__NeedQual_10, hlds__pred_table__MaybeQualInfo_11, *hlds__pred_table__PredId_12, hlds__pred_table__AccessibilityTable0_18, &hlds__pred_table__AccessibilityTable_30, hlds__pred_table__Pred_N_Index0_19, &hlds__pred_table__Pred_N_Index_31, hlds__pred_table__Pred_NA_Index0_20, &hlds__pred_table__Pred_NA_Index_32, hlds__pred_table__Pred_MNA_Index0_21, &hlds__pred_table__Pred_MNA_Index_33);
        }
#line 927 "pred_table.m"
        hlds__pred_table__Func_N_Index_34 = hlds__pred_table__Func_N_Index0_22;
#line 928 "pred_table.m"
        hlds__pred_table__Func_NA_Index_35 = hlds__pred_table__Func_NA_Index0_23;
#line 929 "pred_table.m"
        hlds__pred_table__Func_MNA_Index_36 = hlds__pred_table__Func_MNA_Index0_24;
#line 919 "pred_table.m"
      }
#line 946 "pred_table.m"
    {
#line 946 "pred_table.m"
      hlds__pred_table__NewRevPredIds_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 946 "pred_table.m"
      MR_hl_field(MR_mktag(1), hlds__pred_table__NewRevPredIds_38, 0) = ((MR_Box) (*hlds__pred_table__PredId_12));
#line 946 "pred_table.m"
      MR_hl_field(MR_mktag(1), hlds__pred_table__NewRevPredIds_38, 1) = ((MR_Box) (hlds__pred_table__NewRevPredIds0_17));
#line 946 "pred_table.m"
    }
#line 949 "pred_table.m"
    {
#line 949 "pred_table.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ((MR_Box) (*hlds__pred_table__PredId_12)), ((MR_Box) (hlds__pred_table__PredInfo_9)), hlds__pred_table__Preds0_14, &hlds__pred_table__Preds_39);
    }
#line 951 "pred_table.m"
    {
#line 951 "pred_table.m"
      MR_Word base;
#line 951 "pred_table.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 951 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_PredicateTable_41 = base;
#line 951 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__Preds_39));
#line 951 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__NextPredId_28));
#line 951 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__OldPredIds0_16));
#line 951 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__NewRevPredIds_38));
#line 951 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__AccessibilityTable_30));
#line 951 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__Pred_N_Index_31));
#line 951 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__Pred_NA_Index_32));
#line 951 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__Pred_MNA_Index_33));
#line 951 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__Func_N_Index_34));
#line 951 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__Func_NA_Index_35));
#line 951 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__pred_table__Func_MNA_Index_36));
#line 951 "pred_table.m"
    }
#line 898 "pred_table.m"
  }
#line 893 "pred_table.m"
}

#line 848 "pred_table.m"
static void MR_CALL 
hlds__pred_table__reinsert_for_restrict_6_p_0(
#line 848 "pred_table.m"
  MR_Word hlds__pred_table__PartialQualInfo_7,
#line 848 "pred_table.m"
  MR_Word hlds__pred_table__Preds_8,
#line 848 "pred_table.m"
  MR_Word hlds__pred_table__AccessibilityTable_9,
#line 848 "pred_table.m"
  MR_Word hlds__pred_table__PredId_10,
#line 848 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_19,
#line 848 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_20)
#line 848 "pred_table.m"
{
#line 853 "pred_table.m"
  {
#line 853 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 853 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 853 "pred_table.m"
    MR_Word hlds__pred_table__PredInfo_12;
#line 853 "pred_table.m"
    MR_Word hlds__pred_table__Access_13;
#line 853 "pred_table.m"
    MR_Word hlds__pred_table__Unqualified_14;
#line 853 "pred_table.m"
    MR_Word hlds__pred_table__PartiallyQualified_15;
#line 853 "pred_table.m"
    MR_Word hlds__pred_table__NeedQual_16;
#line 853 "pred_table.m"
    MR_Word hlds__pred_table__MaybeQualInfo_17;
#line 853 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21;
#line 854 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredInfo_12;
#line 855 "pred_table.m"
    MR_Box hlds__pred_table__conv1_Access_13;
#line 871 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18;

#line 854 "pred_table.m"
    {
#line 854 "pred_table.m"
      hlds__pred_table__conv0_PredInfo_12 = mercury__map__lookup_2_f_0(hlds__pred_table__TypeCtorInfo_23_23, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__pred_table__Preds_8, ((MR_Box) (hlds__pred_table__PredId_10)));
    }
#line 854 "pred_table.m"
    hlds__pred_table__PredInfo_12 = ((MR_Word) hlds__pred_table__conv0_PredInfo_12);
#line 855 "pred_table.m"
    {
#line 855 "pred_table.m"
      hlds__pred_table__conv1_Access_13 = mercury__map__lookup_2_f_0(hlds__pred_table__TypeCtorInfo_23_23, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0, hlds__pred_table__AccessibilityTable_9, ((MR_Box) (hlds__pred_table__PredId_10)));
    }
#line 855 "pred_table.m"
    hlds__pred_table__Access_13 = ((MR_Word) hlds__pred_table__conv1_Access_13);
#line 856 "pred_table.m"
    hlds__pred_table__Unqualified_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__Access_13, (MR_Integer) 0)));
#line 856 "pred_table.m"
    hlds__pred_table__PartiallyQualified_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__Access_13, (MR_Integer) 1)));
#line 860 "pred_table.m"
    if ((hlds__pred_table__Unqualified_14 == (MR_Integer) 0))
#line 862 "pred_table.m"
      hlds__pred_table__NeedQual_16 = (MR_Integer) 0;
#line 860 "pred_table.m"
    else
#line 859 "pred_table.m"
      hlds__pred_table__NeedQual_16 = (MR_Integer) 1;
#line 867 "pred_table.m"
    if ((hlds__pred_table__PartiallyQualified_15 == (MR_Integer) 0))
#line 869 "pred_table.m"
      hlds__pred_table__MaybeQualInfo_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 867 "pred_table.m"
    else
#line 866 "pred_table.m"
      {
#line 866 "pred_table.m"
        hlds__pred_table__MaybeQualInfo_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 866 "pred_table.m"
        MR_hl_field(MR_mktag(1), hlds__pred_table__MaybeQualInfo_17, 0) = ((MR_Box) (hlds__pred_table__PartialQualInfo_7));
#line 866 "pred_table.m"
      }
#line 871 "pred_table.m"
    {
#line 871 "pred_table.m"
      hlds__pred_table__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 871 "pred_table.m"
      MR_hl_field(MR_mktag(1), hlds__pred_table__V_21_21, 0) = ((MR_Box) (hlds__pred_table__PredId_10));
#line 871 "pred_table.m"
    }
#line 871 "pred_table.m"
    {
#line 871 "pred_table.m"
      hlds__pred_table__do_predicate_table_insert_7_p_0(hlds__pred_table__V_21_21, hlds__pred_table__PredInfo_12, hlds__pred_table__NeedQual_16, hlds__pred_table__MaybeQualInfo_17, &hlds__pred_table__V_18_18, hlds__pred_table__STATE_VARIABLE_PredicateTable_0_19, hlds__pred_table__STATE_VARIABLE_PredicateTable_20);
    }
#line 853 "pred_table.m"
  }
#line 848 "pred_table.m"
}

#line 768 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__pred_id_matches_module_3_p_0(
#line 768 "pred_table.m"
  MR_Word hlds__pred_table__Preds_4,
#line 768 "pred_table.m"
  MR_Word hlds__pred_table__ModuleName_5,
#line 768 "pred_table.m"
  MR_Word hlds__pred_table__PredId_6)
#line 768 "pred_table.m"
{
#line 771 "pred_table.m"
  {
#line 771 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 771 "pred_table.m"
    MR_Word hlds__pred_table__PredInfo_7;
#line 771 "pred_table.m"
    MR_Word hlds__pred_table__V_10_10;
#line 772 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredInfo_7;

#line 772 "pred_table.m"
    {
#line 772 "pred_table.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__pred_table__Preds_4, ((MR_Box) (hlds__pred_table__PredId_6)), &hlds__pred_table__conv0_PredInfo_7);
    }
#line 772 "pred_table.m"
    hlds__pred_table__PredInfo_7 = ((MR_Word) hlds__pred_table__conv0_PredInfo_7);
#line 773 "pred_table.m"
    {
#line 773 "pred_table.m"
      hlds__pred_table__V_10_10 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__pred_table__PredInfo_7);
    }
#line 773 "pred_table.m"
    {
#line 773 "pred_table.m"
      return hlds__pred_table__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__pred_table__ModuleName_5, hlds__pred_table__V_10_10);
    }
#line 771 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 771 "pred_table.m"
  }
#line 768 "pred_table.m"
}

#line 766 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0_1(
#line 766 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 766 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1)
#line 766 "pred_table.m"
{
#line 766 "pred_table.m"
  {
#line 766 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 766 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;

#line 766 "pred_table.m"
    {
#line 766 "pred_table.m"
      return hlds__pred_table__succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) hlds__pred_table__wrapper_arg_1));
    }
#line 766 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 766 "pred_table.m"
  }
#line 766 "pred_table.m"
}

#line 678 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0(
#line 678 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_6,
#line 678 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_7,
#line 678 "pred_table.m"
  MR_Word hlds__pred_table__Module_8,
#line 678 "pred_table.m"
  MR_String hlds__pred_table__FuncName_9,
#line 678 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_10)
#line 678 "pred_table.m"
{
#line 683 "pred_table.m"
  {
#line 683 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 683 "pred_table.m"
    MR_Word hlds__pred_table__Func_MNA_Index_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 10)));
#line 684 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 0)));
#line 684 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 1)));
#line 684 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 2)));
#line 684 "pred_table.m"
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 3)));
#line 684 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 4)));
#line 684 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 5)));
#line 684 "pred_table.m"
    MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 6)));
#line 684 "pred_table.m"
    MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 7)));
#line 684 "pred_table.m"
    MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 8)));
#line 684 "pred_table.m"
    MR_Word hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 9)));
#line 690 "pred_table.m"
    MR_Word hlds__pred_table__Arities_12;
#line 685 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15;
#line 685 "pred_table.m"
    MR_Box hlds__pred_table__conv0_Arities_12;

#line 685 "pred_table.m"
    {
#line 685 "pred_table.m"
      hlds__pred_table__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 685 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_15_15, 0) = ((MR_Box) (hlds__pred_table__Module_8));
#line 685 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_15_15, 1) = ((MR_Box) (hlds__pred_table__FuncName_9));
#line 685 "pred_table.m"
    }
#line 685 "pred_table.m"
    {
#line 685 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__Func_MNA_Index_11, ((MR_Box) (hlds__pred_table__V_15_15)), &hlds__pred_table__conv0_Arities_12);
    }
#line 685 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 685 "pred_table.m"
      {
#line 685 "pred_table.m"
        hlds__pred_table__Arities_12 = ((MR_Word) hlds__pred_table__conv0_Arities_12);
#line 685 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 685 "pred_table.m"
      }
#line 690 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 686 "pred_table.m"
      {
#line 686 "pred_table.m"
        MR_Word hlds__pred_table__PredIdLists_13;
#line 686 "pred_table.m"
        MR_Word hlds__pred_table__PredIds0_14;

#line 686 "pred_table.m"
        {
#line 686 "pred_table.m"
          mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__Arities_12, &hlds__pred_table__PredIdLists_13);
        }
#line 687 "pred_table.m"
        {
#line 687 "pred_table.m"
          mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__PredIdLists_13, &hlds__pred_table__PredIds0_14);
        }
#line 761 "pred_table.m"
        if ((hlds__pred_table__IsFullyQualified_7 == (MR_Integer) 0))
#line 764 "pred_table.m"
          {
#line 764 "pred_table.m"
            MR_Word hlds__pred_table__Preds_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 0)));
#line 764 "pred_table.m"
            MR_Word hlds__pred_table__V_42_42;
#line 408 "pred_table.m"
            MR_Word hlds__pred_table__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 1)));
#line 408 "pred_table.m"
            MR_Word hlds__pred_table__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 2)));
#line 408 "pred_table.m"
            MR_Word hlds__pred_table__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 3)));
#line 408 "pred_table.m"
            MR_Word hlds__pred_table__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 4)));
#line 408 "pred_table.m"
            MR_Word hlds__pred_table__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 5)));
#line 408 "pred_table.m"
            MR_Word hlds__pred_table__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 6)));
#line 408 "pred_table.m"
            MR_Word hlds__pred_table__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 7)));
#line 408 "pred_table.m"
            MR_Word hlds__pred_table__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 8)));
#line 408 "pred_table.m"
            MR_Word hlds__pred_table__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 9)));
#line 408 "pred_table.m"
            MR_Word hlds__pred_table__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 10)));

#line 766 "pred_table.m"
            {
#line 766 "pred_table.m"
              hlds__pred_table__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 766 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_42_42, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
#line 766 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_42_42, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0_1));
#line 766 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 766 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_42_42, 3) = ((MR_Box) (hlds__pred_table__Preds_39));
#line 766 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_42_42, 4) = ((MR_Box) (hlds__pred_table__Module_8));
#line 766 "pred_table.m"
            }
#line 766 "pred_table.m"
            {
#line 766 "pred_table.m"
              mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__V_42_42, hlds__pred_table__PredIds0_14, hlds__pred_table__PredIds_10);
#line 766 "pred_table.m"
              return;
            }
#line 764 "pred_table.m"
          }
#line 761 "pred_table.m"
        else
#line 762 "pred_table.m"
          *hlds__pred_table__PredIds_10 = hlds__pred_table__PredIds0_14;
#line 686 "pred_table.m"
      }
#line 690 "pred_table.m"
    else
#line 691 "pred_table.m"
      *hlds__pred_table__PredIds_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 683 "pred_table.m"
  }
#line 678 "pred_table.m"
}

#line 468 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_remove_from_index_10_p_0(
#line 468 "pred_table.m"
  MR_Word hlds__pred_table__Module_11,
#line 468 "pred_table.m"
  MR_String hlds__pred_table__Name_12,
#line 468 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_13,
#line 468 "pred_table.m"
  MR_Word hlds__pred_table__PredId_14,
#line 468 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_N_0_18,
#line 468 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_N_19,
#line 468 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_NA_0_20,
#line 468 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_NA_21,
#line 468 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_MNA_0_22,
#line 468 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_MNA_23)
#line 468 "pred_table.m"
{
#line 474 "pred_table.m"
  {
#line 474 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 474 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_28_28 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 474 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_29_29;
#line 474 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_24_71;
#line 474 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_25_72;
#line 474 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_26_73;
#line 474 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_27_74;
#line 474 "pred_table.m"
    MR_Word hlds__pred_table__V_25_25;
#line 474 "pred_table.m"
    MR_Word hlds__pred_table__Arities0_60;
#line 474 "pred_table.m"
    MR_Word hlds__pred_table__PredIds0_61;
#line 474 "pred_table.m"
    MR_Word hlds__pred_table__PredIds_62;
#line 474 "pred_table.m"
    MR_Word hlds__pred_table__V_66_66;
#line 492 "pred_table.m"
    MR_Word hlds__pred_table__NamePredIds0_34;
#line 483 "pred_table.m"
    MR_Box hlds__pred_table__conv0_NamePredIds0_34;
#line 492 "pred_table.m"
    MR_Word hlds__pred_table__NamePredIds0_46;
#line 483 "pred_table.m"
    MR_Box hlds__pred_table__conv1_NamePredIds0_46;
#line 501 "pred_table.m"
    MR_Box hlds__pred_table__conv2_Arities0_60;
#line 502 "pred_table.m"
    MR_Box hlds__pred_table__conv3_PredIds0_61;

#line 483 "pred_table.m"
    {
#line 483 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0(hlds__pred_table__TypeCtorInfo_28_28, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__STATE_VARIABLE_N_0_18, ((MR_Box) (hlds__pred_table__Name_12)), &hlds__pred_table__conv0_NamePredIds0_34);
    }
#line 483 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 483 "pred_table.m"
      {
#line 483 "pred_table.m"
        hlds__pred_table__NamePredIds0_34 = ((MR_Word) hlds__pred_table__conv0_NamePredIds0_34);
#line 483 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 483 "pred_table.m"
      }
#line 492 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 484 "pred_table.m"
      {
#line 484 "pred_table.m"
        MR_Word hlds__pred_table__NamePredIds_35;

#line 484 "pred_table.m"
        {
#line 484 "pred_table.m"
          mercury__list__delete_all_3_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__NamePredIds0_34, ((MR_Box) (hlds__pred_table__PredId_14)), &hlds__pred_table__NamePredIds_35);
        }
#line 488 "pred_table.m"
        if ((hlds__pred_table__NamePredIds_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "pred_table.m"
          {
#line 487 "pred_table.m"
            {
#line 487 "pred_table.m"
              mercury__map__delete_3_p_0(hlds__pred_table__TypeCtorInfo_28_28, (MR_Word) &hlds__pred_table_scalar_common_1[0], ((MR_Box) (hlds__pred_table__Name_12)), hlds__pred_table__STATE_VARIABLE_N_0_18, hlds__pred_table__STATE_VARIABLE_N_19);
            }
#line 486 "pred_table.m"
          }
#line 488 "pred_table.m"
        else
#line 489 "pred_table.m"
          {
#line 490 "pred_table.m"
            {
#line 490 "pred_table.m"
              mercury__map__det_update_4_p_0(hlds__pred_table__TypeCtorInfo_28_28, (MR_Word) &hlds__pred_table_scalar_common_1[0], ((MR_Box) (hlds__pred_table__Name_12)), ((MR_Box) (hlds__pred_table__NamePredIds_35)), hlds__pred_table__STATE_VARIABLE_N_0_18, hlds__pred_table__STATE_VARIABLE_N_19);
            }
#line 489 "pred_table.m"
          }
#line 484 "pred_table.m"
      }
#line 492 "pred_table.m"
    else
#line 493 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_N_19 = hlds__pred_table__STATE_VARIABLE_N_0_18;
#line 476 "pred_table.m"
    {
#line 476 "pred_table.m"
      hlds__pred_table__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 476 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_25_25, 0) = ((MR_Box) (hlds__pred_table__Name_12));
#line 476 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_25_25, 1) = ((MR_Box) (hlds__pred_table__Arity_13));
#line 476 "pred_table.m"
    }
#line 4861 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_29_29 = (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0;
#line 483 "pred_table.m"
    {
#line 483 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0(hlds__pred_table__TypeCtorInfo_29_29, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__STATE_VARIABLE_NA_0_20, ((MR_Box) (hlds__pred_table__V_25_25)), &hlds__pred_table__conv1_NamePredIds0_46);
    }
#line 483 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 483 "pred_table.m"
      {
#line 483 "pred_table.m"
        hlds__pred_table__NamePredIds0_46 = ((MR_Word) hlds__pred_table__conv1_NamePredIds0_46);
#line 483 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 483 "pred_table.m"
      }
#line 492 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 484 "pred_table.m"
      {
#line 484 "pred_table.m"
        MR_Word hlds__pred_table__NamePredIds_47;

#line 484 "pred_table.m"
        {
#line 484 "pred_table.m"
          mercury__list__delete_all_3_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__NamePredIds0_46, ((MR_Box) (hlds__pred_table__PredId_14)), &hlds__pred_table__NamePredIds_47);
        }
#line 488 "pred_table.m"
        if ((hlds__pred_table__NamePredIds_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "pred_table.m"
          {
#line 487 "pred_table.m"
            {
#line 487 "pred_table.m"
              mercury__map__delete_3_p_0(hlds__pred_table__TypeCtorInfo_29_29, (MR_Word) &hlds__pred_table_scalar_common_1[0], ((MR_Box) (hlds__pred_table__V_25_25)), hlds__pred_table__STATE_VARIABLE_NA_0_20, hlds__pred_table__STATE_VARIABLE_NA_21);
            }
#line 486 "pred_table.m"
          }
#line 488 "pred_table.m"
        else
#line 489 "pred_table.m"
          {
#line 490 "pred_table.m"
            {
#line 490 "pred_table.m"
              mercury__map__det_update_4_p_0(hlds__pred_table__TypeCtorInfo_29_29, (MR_Word) &hlds__pred_table_scalar_common_1[0], ((MR_Box) (hlds__pred_table__V_25_25)), ((MR_Box) (hlds__pred_table__NamePredIds_47)), hlds__pred_table__STATE_VARIABLE_NA_0_20, hlds__pred_table__STATE_VARIABLE_NA_21);
            }
#line 489 "pred_table.m"
          }
#line 484 "pred_table.m"
      }
#line 492 "pred_table.m"
    else
#line 493 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_NA_21 = hlds__pred_table__STATE_VARIABLE_NA_0_20;
#line 501 "pred_table.m"
    {
#line 501 "pred_table.m"
      hlds__pred_table__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 501 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_66_66, 0) = ((MR_Box) (hlds__pred_table__Module_11));
#line 501 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_66_66, 1) = ((MR_Box) (hlds__pred_table__Name_12));
#line 501 "pred_table.m"
    }
#line 4928 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_24_71 = (MR_Word) &hlds__pred_table_scalar_common_2[0];
#line 4930 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_25_72 = (MR_Word) &hlds__pred_table_scalar_common_2[1];
#line 501 "pred_table.m"
    {
#line 501 "pred_table.m"
      mercury__map__lookup_3_p_0(hlds__pred_table__TypeInfo_24_71, hlds__pred_table__TypeInfo_25_72, hlds__pred_table__STATE_VARIABLE_MNA_0_22, ((MR_Box) (hlds__pred_table__V_66_66)), &hlds__pred_table__conv2_Arities0_60);
    }
#line 501 "pred_table.m"
    hlds__pred_table__Arities0_60 = ((MR_Word) hlds__pred_table__conv2_Arities0_60);
#line 4939 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_26_73 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 4941 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_27_74 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
#line 502 "pred_table.m"
    {
#line 502 "pred_table.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__pred_table__TypeInfo_27_74, hlds__pred_table__Arities0_60, hlds__pred_table__Arity_13, &hlds__pred_table__conv3_PredIds0_61);
    }
#line 502 "pred_table.m"
    hlds__pred_table__PredIds0_61 = ((MR_Word) hlds__pred_table__conv3_PredIds0_61);
#line 503 "pred_table.m"
    {
#line 503 "pred_table.m"
      mercury__list__delete_all_3_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__PredIds0_61, ((MR_Box) (hlds__pred_table__PredId_14)), &hlds__pred_table__PredIds_62);
    }
#line 512 "pred_table.m"
    if ((hlds__pred_table__PredIds_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 505 "pred_table.m"
      {
#line 505 "pred_table.m"
        MR_Word hlds__pred_table__Arities_63;

#line 506 "pred_table.m"
        {
#line 506 "pred_table.m"
          mercury__map__delete_3_p_0(hlds__pred_table__TypeCtorInfo_26_73, hlds__pred_table__TypeInfo_27_74, ((MR_Box) (hlds__pred_table__Arity_13)), hlds__pred_table__Arities0_60, &hlds__pred_table__Arities_63);
        }
#line 507 "pred_table.m"
        {
#line 507 "pred_table.m"
          hlds__pred_table__succeeded = mercury__map__is_empty_1_p_0(hlds__pred_table__TypeCtorInfo_26_73, hlds__pred_table__TypeInfo_27_74, hlds__pred_table__Arities_63);
        }
#line 509 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 508 "pred_table.m"
          {
#line 508 "pred_table.m"
            mercury__map__delete_3_p_0(hlds__pred_table__TypeInfo_24_71, hlds__pred_table__TypeInfo_25_72, ((MR_Box) (hlds__pred_table__V_66_66)), hlds__pred_table__STATE_VARIABLE_MNA_0_22, hlds__pred_table__STATE_VARIABLE_MNA_23);
#line 508 "pred_table.m"
            return;
          }
#line 509 "pred_table.m"
        else
#line 510 "pred_table.m"
          {
#line 510 "pred_table.m"
            mercury__map__det_update_4_p_0(hlds__pred_table__TypeInfo_24_71, hlds__pred_table__TypeInfo_25_72, ((MR_Box) (hlds__pred_table__V_66_66)), ((MR_Box) (hlds__pred_table__Arities_63)), hlds__pred_table__STATE_VARIABLE_MNA_0_22, hlds__pred_table__STATE_VARIABLE_MNA_23);
#line 510 "pred_table.m"
            return;
          }
#line 505 "pred_table.m"
      }
#line 512 "pred_table.m"
    else
#line 513 "pred_table.m"
      {
#line 513 "pred_table.m"
        MR_Word hlds__pred_table__Arities_70;

#line 514 "pred_table.m"
        {
#line 514 "pred_table.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(hlds__pred_table__TypeInfo_27_74, hlds__pred_table__Arity_13, ((MR_Box) (hlds__pred_table__PredIds_62)), hlds__pred_table__Arities0_60, &hlds__pred_table__Arities_70);
        }
#line 515 "pred_table.m"
        {
#line 515 "pred_table.m"
          mercury__map__det_update_4_p_0(hlds__pred_table__TypeInfo_24_71, hlds__pred_table__TypeInfo_25_72, ((MR_Box) (hlds__pred_table__V_66_66)), ((MR_Box) (hlds__pred_table__Arities_70)), hlds__pred_table__STATE_VARIABLE_MNA_0_22, hlds__pred_table__STATE_VARIABLE_MNA_23);
#line 515 "pred_table.m"
          return;
        }
#line 513 "pred_table.m"
      }
#line 474 "pred_table.m"
  }
#line 468 "pred_table.m"
}

#line 314 "pred_table.m"
void MR_CALL 
hlds__pred_table__get_next_pred_id_2_p_0(
#line 314 "pred_table.m"
  MR_Word hlds__pred_table__PredTable_3,
#line 314 "pred_table.m"
  MR_Word * hlds__pred_table__NextPredId_4)
#line 314 "pred_table.m"
{
#line 1254 "pred_table.m"
  {
#line 1254 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 1254 "pred_table.m"
    MR_Word hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 0)));
#line 1254 "pred_table.m"
    MR_Word hlds__pred_table__V_6_6;
#line 1254 "pred_table.m"
    MR_Word hlds__pred_table__V_7_7;
#line 1254 "pred_table.m"
    MR_Word hlds__pred_table__V_8_8;
#line 1254 "pred_table.m"
    MR_Word hlds__pred_table__V_9_9;
#line 1254 "pred_table.m"
    MR_Word hlds__pred_table__V_10_10;
#line 1254 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11;
#line 1254 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12;
#line 1254 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13;
#line 1254 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14;

#line 1254 "pred_table.m"
    *hlds__pred_table__NextPredId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 1)));
#line 1254 "pred_table.m"
    hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 2)));
#line 1254 "pred_table.m"
    hlds__pred_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 3)));
#line 1254 "pred_table.m"
    hlds__pred_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 4)));
#line 1254 "pred_table.m"
    hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 5)));
#line 1254 "pred_table.m"
    hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 6)));
#line 1254 "pred_table.m"
    hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 7)));
#line 1254 "pred_table.m"
    hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 8)));
#line 1254 "pred_table.m"
    hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 9)));
#line 1254 "pred_table.m"
    hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 10)));
#line 1254 "pred_table.m"
  }
#line 314 "pred_table.m"
}

#line 310 "pred_table.m"
void MR_CALL 
hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(
#line 310 "pred_table.m"
  MR_Word hlds__pred_table__Module_9,
#line 310 "pred_table.m"
  MR_Word hlds__pred_table__ModuleName_10,
#line 310 "pred_table.m"
  MR_String hlds__pred_table__ProcName_11,
#line 310 "pred_table.m"
  MR_Word hlds__pred_table__PredOrFunc_12,
#line 310 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_13,
#line 310 "pred_table.m"
  MR_Word hlds__pred_table__ModeNo_14,
#line 310 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_15,
#line 310 "pred_table.m"
  MR_Integer * hlds__pred_table__ProcId_16)
#line 310 "pred_table.m"
{
#line 1192 "pred_table.m"
  {
#line 1192 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 1192 "pred_table.m"
    MR_Word hlds__pred_table__PredTable_17;
#line 1192 "pred_table.m"
    MR_Word hlds__pred_table__PredInfo_21;
#line 1192 "pred_table.m"
    MR_Word hlds__pred_table__ProcIds_22;
#line 1207 "pred_table.m"
    MR_Word hlds__pred_table__PredIdPrime_19;
#line 1203 "pred_table.m"
    MR_Word hlds__pred_table__PredIds_18;
#line 1203 "pred_table.m"
    MR_Word hlds__pred_table__V_27_27;

#line 1193 "pred_table.m"
    {
#line 1193 "pred_table.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__pred_table__Module_9, &hlds__pred_table__PredTable_17);
    }
#line 1199 "pred_table.m"
    if ((hlds__pred_table__PredOrFunc_12 == (MR_Integer) 1))
#line 1200 "pred_table.m"
      {
#line 1201 "pred_table.m"
        {
#line 1201 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredTable_17, (MR_Integer) 0, hlds__pred_table__ModuleName_10, hlds__pred_table__ProcName_11, hlds__pred_table__Arity_13, &hlds__pred_table__PredIds_18);
        }
#line 1200 "pred_table.m"
      }
#line 1199 "pred_table.m"
    else
#line 1196 "pred_table.m"
      {
#line 1197 "pred_table.m"
        {
#line 1197 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredTable_17, (MR_Integer) 0, hlds__pred_table__ModuleName_10, hlds__pred_table__ProcName_11, hlds__pred_table__Arity_13, &hlds__pred_table__PredIds_18);
        }
#line 1196 "pred_table.m"
      }
#line 1204 "pred_table.m"
    hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__PredIds_18)) == (MR_mktag((MR_Integer) 1)));
#line 1204 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 1204 "pred_table.m"
      {
#line 1204 "pred_table.m"
        hlds__pred_table__PredIdPrime_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__PredIds_18, (MR_Integer) 0)));
#line 1204 "pred_table.m"
        hlds__pred_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__PredIds_18, (MR_Integer) 1)));
#line 1204 "pred_table.m"
        hlds__pred_table__succeeded = (hlds__pred_table__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1204 "pred_table.m"
      }
#line 1207 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 1206 "pred_table.m"
      *hlds__pred_table__PredId_15 = hlds__pred_table__PredIdPrime_19;
#line 1207 "pred_table.m"
    else
#line 1226 "pred_table.m"
      {
#line 1226 "pred_table.m"
        MR_Word hlds__pred_table__PredIdPrime_65;
#line 1222 "pred_table.m"
        MR_Word hlds__pred_table__V_34_34;
#line 1222 "pred_table.m"
        MR_Word hlds__pred_table__PredIds_63;

#line 1218 "pred_table.m"
        if ((hlds__pred_table__PredOrFunc_12 == (MR_Integer) 1))
#line 1219 "pred_table.m"
          {
#line 1219 "pred_table.m"
            MR_Integer hlds__pred_table__V_29_29 = (hlds__pred_table__Arity_13 - (MR_Integer) 1);

#line 1220 "pred_table.m"
            {
#line 1220 "pred_table.m"
              hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredTable_17, (MR_Integer) 0, hlds__pred_table__ModuleName_10, hlds__pred_table__ProcName_11, hlds__pred_table__V_29_29, &hlds__pred_table__PredIds_63);
            }
#line 1219 "pred_table.m"
          }
#line 1218 "pred_table.m"
        else
#line 1215 "pred_table.m"
          {
#line 1215 "pred_table.m"
            MR_Integer hlds__pred_table__V_32_32 = (hlds__pred_table__Arity_13 - (MR_Integer) 1);

#line 1216 "pred_table.m"
            {
#line 1216 "pred_table.m"
              hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredTable_17, (MR_Integer) 0, hlds__pred_table__ModuleName_10, hlds__pred_table__ProcName_11, hlds__pred_table__V_32_32, &hlds__pred_table__PredIds_63);
            }
#line 1215 "pred_table.m"
          }
#line 1223 "pred_table.m"
        hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__PredIds_63)) == (MR_mktag((MR_Integer) 1)));
#line 1223 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 1223 "pred_table.m"
          {
#line 1223 "pred_table.m"
            hlds__pred_table__PredIdPrime_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__PredIds_63, (MR_Integer) 0)));
#line 1223 "pred_table.m"
            hlds__pred_table__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__PredIds_63, (MR_Integer) 1)));
#line 1223 "pred_table.m"
            hlds__pred_table__succeeded = (hlds__pred_table__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1223 "pred_table.m"
          }
#line 1226 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 1225 "pred_table.m"
          *hlds__pred_table__PredId_15 = hlds__pred_table__PredIdPrime_65;
#line 1226 "pred_table.m"
        else
#line 1227 "pred_table.m"
          {
#line 1227 "pred_table.m"
            MR_String hlds__pred_table__ArityStr_20;
#line 1227 "pred_table.m"
            MR_String hlds__pred_table__V_37_37;
#line 1227 "pred_table.m"
            MR_String hlds__pred_table__V_39_39;
#line 1227 "pred_table.m"
            MR_String hlds__pred_table__V_40_40;

#line 1227 "pred_table.m"
            {
#line 1227 "pred_table.m"
              mercury__string__int_to_string_2_p_0(hlds__pred_table__Arity_13, &hlds__pred_table__ArityStr_20);
            }
#line 1229 "pred_table.m"
            {
#line 1229 "pred_table.m"
              hlds__pred_table__V_40_40 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__pred_table__ArityStr_20);
            }
#line 1229 "pred_table.m"
            {
#line 1229 "pred_table.m"
              hlds__pred_table__V_39_39 = mercury__string__f_43_43_2_f_0(hlds__pred_table__ProcName_11, hlds__pred_table__V_40_40);
            }
#line 1229 "pred_table.m"
            {
#line 1229 "pred_table.m"
              hlds__pred_table__V_37_37 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t locate ", hlds__pred_table__V_39_39);
            }
#line 1228 "pred_table.m"
            {
#line 1228 "pred_table.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.lookup_builtin_pred_proc_id\'/8", hlds__pred_table__V_37_37);
#line 1228 "pred_table.m"
              return;
            }
#line 1227 "pred_table.m"
          }
#line 1226 "pred_table.m"
      }
#line 1231 "pred_table.m"
    {
#line 1231 "pred_table.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__pred_table__Module_9, *hlds__pred_table__PredId_15, &hlds__pred_table__PredInfo_21);
    }
#line 1232 "pred_table.m"
    {
#line 1232 "pred_table.m"
      hlds__pred_table__ProcIds_22 = hlds__hlds_pred__pred_info_procids_1_f_0(hlds__pred_table__PredInfo_21);
    }
#line 1242 "pred_table.m"
    if ((hlds__pred_table__ModeNo_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1237 "pred_table.m"
      {
#line 1237 "pred_table.m"
        MR_Integer hlds__pred_table__ProcId0_23;
#line 1235 "pred_table.m"
        MR_Word hlds__pred_table__V_53_53;

#line 1235 "pred_table.m"
        hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__ProcIds_22)) == (MR_mktag((MR_Integer) 1)));
#line 1235 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 1235 "pred_table.m"
          {
#line 1235 "pred_table.m"
            hlds__pred_table__ProcId0_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__ProcIds_22, (MR_Integer) 0)));
#line 1235 "pred_table.m"
            hlds__pred_table__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__ProcIds_22, (MR_Integer) 1)));
#line 1235 "pred_table.m"
            hlds__pred_table__succeeded = (hlds__pred_table__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1235 "pred_table.m"
          }
#line 1237 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 1236 "pred_table.m"
          *hlds__pred_table__ProcId_16 = hlds__pred_table__ProcId0_23;
#line 1237 "pred_table.m"
        else
#line 1238 "pred_table.m"
          {
#line 1238 "pred_table.m"
            MR_String hlds__pred_table__V_56_56;
#line 1238 "pred_table.m"
            MR_String hlds__pred_table__V_78_78;
#line 1238 "pred_table.m"
            MR_String hlds__pred_table__V_80_80;
#line 1238 "pred_table.m"
            MR_String hlds__pred_table__V_81_81;

#line 5311 "hlds.pred_table.c"
            {
#line 5313 "hlds.pred_table.c"
              hlds__pred_table__V_78_78 = mercury__string__int_to_string_1_f_0(hlds__pred_table__Arity_13);
            }
#line 5316 "hlds.pred_table.c"
            {
#line 5318 "hlds.pred_table.c"
              hlds__pred_table__V_80_80 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__pred_table__V_78_78);
            }
#line 5321 "hlds.pred_table.c"
            {
#line 5323 "hlds.pred_table.c"
              hlds__pred_table__V_81_81 = mercury__string__f_43_43_2_f_0(hlds__pred_table__ProcName_11, hlds__pred_table__V_80_80);
            }
#line 5326 "hlds.pred_table.c"
            {
#line 5328 "hlds.pred_table.c"
              hlds__pred_table__V_56_56 = mercury__string__f_43_43_2_f_0((MR_String) "expected single mode for ", hlds__pred_table__V_81_81);
            }
#line 1238 "pred_table.m"
            {
#line 1238 "pred_table.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.lookup_builtin_pred_proc_id\'/8", hlds__pred_table__V_56_56);
#line 1238 "pred_table.m"
              return;
            }
#line 1238 "pred_table.m"
          }
#line 1237 "pred_table.m"
      }
#line 1242 "pred_table.m"
    else
#line 1243 "pred_table.m"
      {
#line 1243 "pred_table.m"
        MR_Integer hlds__pred_table__N_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__ModeNo_14, (MR_Integer) 0)));
#line 1246 "pred_table.m"
        MR_Integer hlds__pred_table__ProcId0_66;
#line 1244 "pred_table.m"
        MR_Box hlds__pred_table__conv0_ProcId0_66;

#line 1244 "pred_table.m"
        {
#line 1244 "pred_table.m"
          hlds__pred_table__succeeded = mercury__list__index0_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, hlds__pred_table__ProcIds_22, hlds__pred_table__N_24, &hlds__pred_table__conv0_ProcId0_66);
        }
#line 1244 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 1244 "pred_table.m"
          {
#line 1244 "pred_table.m"
            hlds__pred_table__ProcId0_66 = ((MR_Integer) hlds__pred_table__conv0_ProcId0_66);
#line 1244 "pred_table.m"
            hlds__pred_table__succeeded = MR_TRUE;
#line 1244 "pred_table.m"
          }
#line 1246 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 1245 "pred_table.m"
          *hlds__pred_table__ProcId_16 = hlds__pred_table__ProcId0_66;
#line 1246 "pred_table.m"
        else
#line 1247 "pred_table.m"
          {
#line 1247 "pred_table.m"
            MR_String hlds__pred_table__V_44_44;
#line 1247 "pred_table.m"
            MR_String hlds__pred_table__V_69_69;
#line 1247 "pred_table.m"
            MR_String hlds__pred_table__V_71_71;
#line 1247 "pred_table.m"
            MR_String hlds__pred_table__V_72_72;
#line 1247 "pred_table.m"
            MR_String hlds__pred_table__V_74_74;
#line 1247 "pred_table.m"
            MR_String hlds__pred_table__V_75_75;
#line 1247 "pred_table.m"
            MR_String hlds__pred_table__V_76_76;

#line 5391 "hlds.pred_table.c"
            {
#line 5393 "hlds.pred_table.c"
              hlds__pred_table__V_69_69 = mercury__string__int_to_string_1_f_0(hlds__pred_table__Arity_13);
            }
#line 5396 "hlds.pred_table.c"
            {
#line 5398 "hlds.pred_table.c"
              hlds__pred_table__V_71_71 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__pred_table__V_69_69);
            }
#line 5401 "hlds.pred_table.c"
            {
#line 5403 "hlds.pred_table.c"
              hlds__pred_table__V_72_72 = mercury__string__f_43_43_2_f_0(hlds__pred_table__ProcName_11, hlds__pred_table__V_71_71);
            }
#line 5406 "hlds.pred_table.c"
            {
#line 5408 "hlds.pred_table.c"
              hlds__pred_table__V_74_74 = mercury__string__f_43_43_2_f_0((MR_String) " for ", hlds__pred_table__V_72_72);
            }
#line 5411 "hlds.pred_table.c"
            {
#line 5413 "hlds.pred_table.c"
              hlds__pred_table__V_75_75 = mercury__string__int_to_string_1_f_0(hlds__pred_table__N_24);
            }
#line 5416 "hlds.pred_table.c"
            {
#line 5418 "hlds.pred_table.c"
              hlds__pred_table__V_76_76 = mercury__string__f_43_43_2_f_0(hlds__pred_table__V_75_75, hlds__pred_table__V_74_74);
            }
#line 5421 "hlds.pred_table.c"
            {
#line 5423 "hlds.pred_table.c"
              hlds__pred_table__V_44_44 = mercury__string__f_43_43_2_f_0((MR_String) "there is no mode ", hlds__pred_table__V_76_76);
            }
#line 1247 "pred_table.m"
            {
#line 1247 "pred_table.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.lookup_builtin_pred_proc_id\'/8", hlds__pred_table__V_44_44);
#line 1247 "pred_table.m"
              return;
            }
#line 1247 "pred_table.m"
          }
#line 1243 "pred_table.m"
      }
#line 1192 "pred_table.m"
  }
#line 310 "pred_table.m"
}

#line 304 "pred_table.m"
void MR_CALL 
hlds__pred_table__get_proc_id_3_p_0(
#line 304 "pred_table.m"
  MR_Word hlds__pred_table__ModuleInfo_4,
#line 304 "pred_table.m"
  MR_Word hlds__pred_table__PredId_5,
#line 304 "pred_table.m"
  MR_Integer * hlds__pred_table__ProcId_6)
#line 304 "pred_table.m"
{
#line 1161 "pred_table.m"
  {
#line 1161 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 1161 "pred_table.m"
    MR_Word hlds__pred_table__PredInfo_7;
#line 1161 "pred_table.m"
    MR_Word hlds__pred_table__ProcIds_8;
#line 1166 "pred_table.m"
    MR_Integer hlds__pred_table__ProcId0_9;
#line 1164 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18;

#line 1162 "pred_table.m"
    {
#line 1162 "pred_table.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__pred_table__ModuleInfo_4, hlds__pred_table__PredId_5, &hlds__pred_table__PredInfo_7);
    }
#line 1163 "pred_table.m"
    {
#line 1163 "pred_table.m"
      hlds__pred_table__ProcIds_8 = hlds__hlds_pred__pred_info_procids_1_f_0(hlds__pred_table__PredInfo_7);
    }
#line 1164 "pred_table.m"
    hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__ProcIds_8)) == (MR_mktag((MR_Integer) 1)));
#line 1164 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 1164 "pred_table.m"
      {
#line 1164 "pred_table.m"
        hlds__pred_table__ProcId0_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__ProcIds_8, (MR_Integer) 0)));
#line 1164 "pred_table.m"
        hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__ProcIds_8, (MR_Integer) 1)));
#line 1164 "pred_table.m"
        hlds__pred_table__succeeded = (hlds__pred_table__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1164 "pred_table.m"
      }
#line 1166 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 1165 "pred_table.m"
      *hlds__pred_table__ProcId_6 = hlds__pred_table__ProcId0_9;
#line 1166 "pred_table.m"
    else
#line 1167 "pred_table.m"
      {
#line 1167 "pred_table.m"
        MR_String hlds__pred_table__Name_10;
#line 1167 "pred_table.m"
        MR_Word hlds__pred_table__PredOrFunc_11;
#line 1167 "pred_table.m"
        MR_Integer hlds__pred_table__Arity_12;
#line 1167 "pred_table.m"
        MR_String hlds__pred_table__PredOrFuncStr_13;
#line 1167 "pred_table.m"
        MR_String hlds__pred_table__ArityString_14;
#line 1167 "pred_table.m"
        MR_String hlds__pred_table__Message_15;

#line 1167 "pred_table.m"
        {
#line 1167 "pred_table.m"
          hlds__pred_table__Name_10 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__pred_table__PredInfo_7);
        }
#line 1168 "pred_table.m"
        {
#line 1168 "pred_table.m"
          hlds__pred_table__PredOrFunc_11 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__pred_table__PredInfo_7);
        }
#line 1169 "pred_table.m"
        {
#line 1169 "pred_table.m"
          hlds__pred_table__Arity_12 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__pred_table__PredInfo_7);
        }
#line 1170 "pred_table.m"
        {
#line 1170 "pred_table.m"
          hlds__pred_table__PredOrFuncStr_13 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(hlds__pred_table__PredOrFunc_11);
        }
#line 1171 "pred_table.m"
        {
#line 1171 "pred_table.m"
          mercury__string__int_to_string_2_p_0(hlds__pred_table__Arity_12, &hlds__pred_table__ArityString_14);
        }
#line 1179 "pred_table.m"
        if ((hlds__pred_table__ProcIds_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1173 "pred_table.m"
          {
#line 1173 "pred_table.m"
            MR_Word hlds__pred_table__V_35_35;
#line 1173 "pred_table.m"
            MR_Word hlds__pred_table__V_37_37;
#line 1173 "pred_table.m"
            MR_Word hlds__pred_table__V_38_38;
#line 1173 "pred_table.m"
            MR_Word hlds__pred_table__V_40_40;
#line 1173 "pred_table.m"
            MR_Word hlds__pred_table__V_41_41;
#line 1173 "pred_table.m"
            MR_Word hlds__pred_table__V_43_43;

#line 1176 "pred_table.m"
            {
#line 1176 "pred_table.m"
              hlds__pred_table__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1176 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_43_43, 0) = ((MR_Box) (hlds__pred_table__ArityString_14));
#line 1176 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[8])));
#line 1176 "pred_table.m"
            }
#line 1176 "pred_table.m"
            {
#line 1176 "pred_table.m"
              hlds__pred_table__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1176 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_41_41, 0) = ((MR_Box) ((MR_String) "/"));
#line 1176 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_41_41, 1) = ((MR_Box) (hlds__pred_table__V_43_43));
#line 1176 "pred_table.m"
            }
#line 1176 "pred_table.m"
            {
#line 1176 "pred_table.m"
              hlds__pred_table__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1176 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_40_40, 0) = ((MR_Box) (hlds__pred_table__Name_10));
#line 1176 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_40_40, 1) = ((MR_Box) (hlds__pred_table__V_41_41));
#line 1176 "pred_table.m"
            }
#line 1176 "pred_table.m"
            {
#line 1176 "pred_table.m"
              hlds__pred_table__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1176 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_38_38, 0) = ((MR_Box) ((MR_String) "\n\140"));
#line 1176 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_38_38, 1) = ((MR_Box) (hlds__pred_table__V_40_40));
#line 1176 "pred_table.m"
            }
#line 1175 "pred_table.m"
            {
#line 1175 "pred_table.m"
              hlds__pred_table__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1175 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_37_37, 0) = ((MR_Box) (hlds__pred_table__PredOrFuncStr_13));
#line 1175 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_37_37, 1) = ((MR_Box) (hlds__pred_table__V_38_38));
#line 1175 "pred_table.m"
            }
#line 1175 "pred_table.m"
            {
#line 1175 "pred_table.m"
              hlds__pred_table__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1175 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_35_35, 0) = ((MR_Box) ((MR_String) "cannot take address of "));
#line 1175 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_35_35, 1) = ((MR_Box) (hlds__pred_table__V_37_37));
#line 1175 "pred_table.m"
            }
#line 1174 "pred_table.m"
            {
#line 1174 "pred_table.m"
              mercury__string__append_list_2_p_0(hlds__pred_table__V_35_35, &hlds__pred_table__Message_15);
            }
#line 1173 "pred_table.m"
          }
#line 1179 "pred_table.m"
        else
#line 1180 "pred_table.m"
          {
#line 1180 "pred_table.m"
            MR_Word hlds__pred_table__V_19_19;
#line 1180 "pred_table.m"
            MR_Word hlds__pred_table__V_21_21;
#line 1180 "pred_table.m"
            MR_Word hlds__pred_table__V_23_23;
#line 1180 "pred_table.m"
            MR_Word hlds__pred_table__V_24_24;
#line 1180 "pred_table.m"
            MR_Word hlds__pred_table__V_26_26;
#line 1180 "pred_table.m"
            MR_Word hlds__pred_table__V_27_27;
#line 1180 "pred_table.m"
            MR_Word hlds__pred_table__V_29_29;

#line 1184 "pred_table.m"
            {
#line 1184 "pred_table.m"
              hlds__pred_table__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1184 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_29_29, 0) = ((MR_Box) (hlds__pred_table__ArityString_14));
#line 1184 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[10])));
#line 1184 "pred_table.m"
            }
#line 1184 "pred_table.m"
            {
#line 1184 "pred_table.m"
              hlds__pred_table__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1184 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_27_27, 0) = ((MR_Box) ((MR_String) "/"));
#line 1184 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_27_27, 1) = ((MR_Box) (hlds__pred_table__V_29_29));
#line 1184 "pred_table.m"
            }
#line 1184 "pred_table.m"
            {
#line 1184 "pred_table.m"
              hlds__pred_table__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1184 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_26_26, 0) = ((MR_Box) (hlds__pred_table__Name_10));
#line 1184 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_26_26, 1) = ((MR_Box) (hlds__pred_table__V_27_27));
#line 1184 "pred_table.m"
            }
#line 1184 "pred_table.m"
            {
#line 1184 "pred_table.m"
              hlds__pred_table__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1184 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_24_24, 0) = ((MR_Box) ((MR_String) "\n\140"));
#line 1184 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_24_24, 1) = ((MR_Box) (hlds__pred_table__V_26_26));
#line 1184 "pred_table.m"
            }
#line 1183 "pred_table.m"
            {
#line 1183 "pred_table.m"
              hlds__pred_table__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1183 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_23_23, 0) = ((MR_Box) (hlds__pred_table__PredOrFuncStr_13));
#line 1183 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_23_23, 1) = ((MR_Box) (hlds__pred_table__V_24_24));
#line 1183 "pred_table.m"
            }
#line 1183 "pred_table.m"
            {
#line 1183 "pred_table.m"
              hlds__pred_table__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1183 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_21_21, 0) = ((MR_Box) ((MR_String) "taking address of "));
#line 1183 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_21_21, 1) = ((MR_Box) (hlds__pred_table__V_23_23));
#line 1183 "pred_table.m"
            }
#line 1182 "pred_table.m"
            {
#line 1182 "pred_table.m"
              hlds__pred_table__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1182 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_19_19, 0) = ((MR_Box) ((MR_String) "sorry, not implemented: "));
#line 1182 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_19_19, 1) = ((MR_Box) (hlds__pred_table__V_21_21));
#line 1182 "pred_table.m"
            }
#line 1181 "pred_table.m"
            {
#line 1181 "pred_table.m"
              mercury__string__append_list_2_p_0(hlds__pred_table__V_19_19, &hlds__pred_table__Message_15);
            }
#line 1180 "pred_table.m"
          }
#line 1188 "pred_table.m"
        {
#line 1188 "pred_table.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.get_proc_id\'/3", hlds__pred_table__Message_15);
#line 1188 "pred_table.m"
          return;
        }
#line 1167 "pred_table.m"
      }
#line 1161 "pred_table.m"
  }
#line 304 "pred_table.m"
}

#line 296 "pred_table.m"
MR_bool MR_CALL 
hlds__pred_table__get_pred_id_by_types_10_p_0(
#line 296 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_11,
#line 296 "pred_table.m"
  MR_Word hlds__pred_table__SymName_12,
#line 296 "pred_table.m"
  MR_Word hlds__pred_table__PredOrFunc_13,
#line 296 "pred_table.m"
  MR_Word hlds__pred_table__TVarSet_14,
#line 296 "pred_table.m"
  MR_Word hlds__pred_table__ExistQTVars_15,
#line 296 "pred_table.m"
  MR_Word hlds__pred_table__ArgTypes_16,
#line 296 "pred_table.m"
  MR_Word hlds__pred_table__HeadTypeParams_17,
#line 296 "pred_table.m"
  MR_Word hlds__pred_table__ModuleInfo_18,
#line 296 "pred_table.m"
  MR_Word hlds__pred_table__Context_19,
#line 296 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_20)
#line 296 "pred_table.m"
{
#line 1123 "pred_table.m"
  {
#line 1123 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 1123 "pred_table.m"
    MR_Word hlds__pred_table__PredicateTable_21;
#line 1123 "pred_table.m"
    MR_Integer hlds__pred_table__Arity_22;
#line 1123 "pred_table.m"
    MR_Word hlds__pred_table__PredIds_23;
#line 1130 "pred_table.m"
    MR_Word hlds__pred_table___PredName_25;

#line 1124 "pred_table.m"
    {
#line 1124 "pred_table.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__pred_table__ModuleInfo_18, &hlds__pred_table__PredicateTable_21);
    }
#line 1125 "pred_table.m"
    {
#line 1125 "pred_table.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__pred_table__ArgTypes_16, &hlds__pred_table__Arity_22);
    }
#line 1126 "pred_table.m"
    {
#line 1126 "pred_table.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__pred_table__PredicateTable_21, hlds__pred_table__IsFullyQualified_11, hlds__pred_table__PredOrFunc_13, hlds__pred_table__SymName_12, hlds__pred_table__Arity_22, &hlds__pred_table__PredIds_23);
    }
#line 1130 "pred_table.m"
    {
#line 1130 "pred_table.m"
      hlds__pred_table__succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(hlds__pred_table__ModuleInfo_18, hlds__pred_table__PredIds_23, hlds__pred_table__TVarSet_14, hlds__pred_table__ExistQTVars_15, hlds__pred_table__ArgTypes_16, hlds__pred_table__HeadTypeParams_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__pred_table__Context_19, hlds__pred_table__PredId_20, &hlds__pred_table___PredName_25);
    }
#line 1123 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 1123 "pred_table.m"
  }
#line 296 "pred_table.m"
}

#line 288 "pred_table.m"
void MR_CALL 
hlds__pred_table__get_pred_id_and_proc_id_by_types_11_p_0(
#line 288 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_12,
#line 288 "pred_table.m"
  MR_Word hlds__pred_table__SymName_13,
#line 288 "pred_table.m"
  MR_Word hlds__pred_table__PredOrFunc_14,
#line 288 "pred_table.m"
  MR_Word hlds__pred_table__TVarSet_15,
#line 288 "pred_table.m"
  MR_Word hlds__pred_table__ExistQTVars_16,
#line 288 "pred_table.m"
  MR_Word hlds__pred_table__ArgTypes_17,
#line 288 "pred_table.m"
  MR_Word hlds__pred_table__HeadTypeParams_18,
#line 288 "pred_table.m"
  MR_Word hlds__pred_table__ModuleInfo_19,
#line 288 "pred_table.m"
  MR_Word hlds__pred_table__Context_20,
#line 288 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_21,
#line 288 "pred_table.m"
  MR_Integer * hlds__pred_table__ProcId_22)
#line 288 "pred_table.m"
{
#line 1141 "pred_table.m"
  {
#line 1141 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 1148 "pred_table.m"
    MR_Word hlds__pred_table__PredId0_23;
#line 1123 "pred_table.m"
    MR_Word hlds__pred_table__PredicateTable_54;
#line 1123 "pred_table.m"
    MR_Integer hlds__pred_table__Arity_55;
#line 1123 "pred_table.m"
    MR_Word hlds__pred_table__PredIds_56;
#line 1130 "pred_table.m"
    MR_Word hlds__pred_table___PredName_58;

#line 1124 "pred_table.m"
    {
#line 1124 "pred_table.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__pred_table__ModuleInfo_19, &hlds__pred_table__PredicateTable_54);
    }
#line 1125 "pred_table.m"
    {
#line 1125 "pred_table.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__pred_table__ArgTypes_17, &hlds__pred_table__Arity_55);
    }
#line 1126 "pred_table.m"
    {
#line 1126 "pred_table.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__pred_table__PredicateTable_54, hlds__pred_table__IsFullyQualified_12, hlds__pred_table__PredOrFunc_14, hlds__pred_table__SymName_13, hlds__pred_table__Arity_55, &hlds__pred_table__PredIds_56);
    }
#line 1130 "pred_table.m"
    {
#line 1130 "pred_table.m"
      hlds__pred_table__succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(hlds__pred_table__ModuleInfo_19, hlds__pred_table__PredIds_56, hlds__pred_table__TVarSet_15, hlds__pred_table__ExistQTVars_16, hlds__pred_table__ArgTypes_17, hlds__pred_table__HeadTypeParams_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__pred_table__Context_20, &hlds__pred_table__PredId0_23, &hlds__pred_table___PredName_58);
    }
#line 1148 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 1147 "pred_table.m"
      *hlds__pred_table__PredId_21 = hlds__pred_table__PredId0_23;
#line 1148 "pred_table.m"
    else
#line 1151 "pred_table.m"
      {
#line 1151 "pred_table.m"
        MR_Integer hlds__pred_table__Arity_24;
#line 1151 "pred_table.m"
        MR_String hlds__pred_table__PredOrFuncStr_25;
#line 1151 "pred_table.m"
        MR_String hlds__pred_table__NameStr_26;
#line 1151 "pred_table.m"
        MR_String hlds__pred_table__ArityString_27;
#line 1151 "pred_table.m"
        MR_String hlds__pred_table__Msg_28;
#line 1151 "pred_table.m"
        MR_Word hlds__pred_table__V_29_29;
#line 1151 "pred_table.m"
        MR_Word hlds__pred_table__V_31_31;
#line 1151 "pred_table.m"
        MR_Word hlds__pred_table__V_32_32;
#line 1151 "pred_table.m"
        MR_Word hlds__pred_table__V_34_34;
#line 1151 "pred_table.m"
        MR_Word hlds__pred_table__V_35_35;
#line 1151 "pred_table.m"
        MR_Word hlds__pred_table__V_37_37;

#line 1151 "pred_table.m"
        {
#line 1151 "pred_table.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__pred_table__ArgTypes_17, &hlds__pred_table__Arity_24);
        }
#line 1152 "pred_table.m"
        {
#line 1152 "pred_table.m"
          hlds__pred_table__PredOrFuncStr_25 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(hlds__pred_table__PredOrFunc_14);
        }
#line 1153 "pred_table.m"
        {
#line 1153 "pred_table.m"
          hlds__pred_table__NameStr_26 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__pred_table__SymName_13);
        }
#line 1154 "pred_table.m"
        {
#line 1154 "pred_table.m"
          mercury__string__int_to_string_2_p_0(hlds__pred_table__Arity_24, &hlds__pred_table__ArityString_27);
        }
#line 1156 "pred_table.m"
        {
#line 1156 "pred_table.m"
          hlds__pred_table__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1156 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_37_37, 0) = ((MR_Box) (hlds__pred_table__ArityString_27));
#line 1156 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[13])));
#line 1156 "pred_table.m"
        }
#line 1156 "pred_table.m"
        {
#line 1156 "pred_table.m"
          hlds__pred_table__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1156 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_35_35, 0) = ((MR_Box) ((MR_String) "/"));
#line 1156 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_35_35, 1) = ((MR_Box) (hlds__pred_table__V_37_37));
#line 1156 "pred_table.m"
        }
#line 1156 "pred_table.m"
        {
#line 1156 "pred_table.m"
          hlds__pred_table__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1156 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_34_34, 0) = ((MR_Box) (hlds__pred_table__NameStr_26));
#line 1156 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_34_34, 1) = ((MR_Box) (hlds__pred_table__V_35_35));
#line 1156 "pred_table.m"
        }
#line 1156 "pred_table.m"
        {
#line 1156 "pred_table.m"
          hlds__pred_table__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1156 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_32_32, 0) = ((MR_Box) ((MR_String) "\n\140"));
#line 1156 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_32_32, 1) = ((MR_Box) (hlds__pred_table__V_34_34));
#line 1156 "pred_table.m"
        }
#line 1155 "pred_table.m"
        {
#line 1155 "pred_table.m"
          hlds__pred_table__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1155 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_31_31, 0) = ((MR_Box) (hlds__pred_table__PredOrFuncStr_25));
#line 1155 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_31_31, 1) = ((MR_Box) (hlds__pred_table__V_32_32));
#line 1155 "pred_table.m"
        }
#line 1155 "pred_table.m"
        {
#line 1155 "pred_table.m"
          hlds__pred_table__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1155 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_29_29, 0) = ((MR_Box) ((MR_String) "undefined/invalid "));
#line 1155 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_29_29, 1) = ((MR_Box) (hlds__pred_table__V_31_31));
#line 1155 "pred_table.m"
        }
#line 1155 "pred_table.m"
        {
#line 1155 "pred_table.m"
          mercury__string__append_list_2_p_0(hlds__pred_table__V_29_29, &hlds__pred_table__Msg_28);
        }
#line 1157 "pred_table.m"
        {
#line 1157 "pred_table.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.get_pred_id_and_proc_id_by_types\'/11", hlds__pred_table__Msg_28);
#line 1157 "pred_table.m"
          return;
        }
#line 1151 "pred_table.m"
      }
#line 1159 "pred_table.m"
    {
#line 1159 "pred_table.m"
      hlds__pred_table__get_proc_id_3_p_0(hlds__pred_table__ModuleInfo_19, *hlds__pred_table__PredId_21, hlds__pred_table__ProcId_22);
#line 1159 "pred_table.m"
      return;
    }
#line 1141 "pred_table.m"
  }
#line 288 "pred_table.m"
}

#line 274 "pred_table.m"
MR_bool MR_CALL 
hlds__pred_table__find_matching_pred_id_10_p_0(
#line 274 "pred_table.m"
  MR_Word hlds__pred_table__ModuleInfo_11,
#line 274 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 274 "pred_table.m"
  MR_Word hlds__pred_table__TVarSet_14,
#line 274 "pred_table.m"
  MR_Word hlds__pred_table__ExistQTVars_15,
#line 274 "pred_table.m"
  MR_Word hlds__pred_table__ArgTypes_16,
#line 274 "pred_table.m"
  MR_Word hlds__pred_table__HeadTypeParams_17,
#line 274 "pred_table.m"
  MR_Word hlds__pred_table__MaybeConstraintSearch_18,
#line 274 "pred_table.m"
  MR_Word hlds__pred_table__Context_19,
#line 274 "pred_table.m"
  MR_Word * hlds__pred_table__ThePredId_20,
#line 274 "pred_table.m"
  MR_Word * hlds__pred_table__PredName_21)
#line 274 "pred_table.m"
{
#line 1041 "pred_table.m"
  while (MR_TRUE)
#line 1041 "pred_table.m"
    {
#line 1041 "pred_table.m"
      /* tailcall optimized into a loop */
#line 1041 "pred_table.m"
      {
#line 1041 "pred_table.m"
        MR_bool hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1041 "pred_table.m"
        MR_Word hlds__pred_table__PredId_12;
#line 1041 "pred_table.m"
        MR_Word hlds__pred_table__PredIds_13;
#line 1095 "pred_table.m"
        MR_Word hlds__pred_table__PredInfo_22;
#line 1046 "pred_table.m"
        MR_Word hlds__pred_table__PredTVarSet_23;
#line 1046 "pred_table.m"
        MR_Word hlds__pred_table__PredExistQVars0_24;
#line 1046 "pred_table.m"
        MR_Word hlds__pred_table__PredArgTypes0_25;
#line 1046 "pred_table.m"
        MR_Word hlds__pred_table__PredKindMap_26;

#line 1039 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 1039 "pred_table.m"
          {
#line 1039 "pred_table.m"
            hlds__pred_table__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 1039 "pred_table.m"
            hlds__pred_table__PredIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));
#line 1046 "pred_table.m"
            {
#line 1046 "pred_table.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(hlds__pred_table__ModuleInfo_11, hlds__pred_table__PredId_12, &hlds__pred_table__PredInfo_22);
            }
#line 1047 "pred_table.m"
            {
#line 1047 "pred_table.m"
              hlds__hlds_pred__pred_info_get_arg_types_4_p_0(hlds__pred_table__PredInfo_22, &hlds__pred_table__PredTVarSet_23, &hlds__pred_table__PredExistQVars0_24, &hlds__pred_table__PredArgTypes0_25);
            }
#line 1049 "pred_table.m"
            {
#line 1049 "pred_table.m"
              hlds__hlds_pred__pred_info_get_tvar_kinds_2_p_0(hlds__pred_table__PredInfo_22, &hlds__pred_table__PredKindMap_26);
            }
#line 1051 "pred_table.m"
            {
#line 1051 "pred_table.m"
              hlds__pred_table__succeeded = parse_tree__prog_type__arg_type_list_subsumes_8_p_0(hlds__pred_table__TVarSet_14, hlds__pred_table__ExistQTVars_15, hlds__pred_table__ArgTypes_16, hlds__pred_table__HeadTypeParams_17, hlds__pred_table__PredTVarSet_23, hlds__pred_table__PredKindMap_26, hlds__pred_table__PredExistQVars0_24, hlds__pred_table__PredArgTypes0_25);
            }
#line 1046 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 1056 "pred_table.m"
              {
#line 1056 "pred_table.m"
                if ((hlds__pred_table__MaybeConstraintSearch_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1055 "pred_table.m"
                  hlds__pred_table__succeeded = MR_TRUE;
#line 1056 "pred_table.m"
                else
#line 1057 "pred_table.m"
                  {
#line 1057 "pred_table.m"
                    MR_Word hlds__pred_table__ConstraintSearch_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__MaybeConstraintSearch_18, (MR_Integer) 0)));
#line 1057 "pred_table.m"
                    MR_Word hlds__pred_table__ProgConstraints_28;
#line 1057 "pred_table.m"
                    MR_Word hlds__pred_table__UnivConstraints_29;
#line 1057 "pred_table.m"
                    MR_Integer hlds__pred_table__NumConstraints_31;
#line 1057 "pred_table.m"
                    MR_Word hlds__pred_table__ProvenConstraints_32;
#line 1060 "pred_table.m"
                    MR_Word hlds__pred_table__V_30_30;
#line 1062 "pred_table.m"
                    MR_bool MR_CALL (* hlds__pred_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 1062 "pred_table.m"
                    MR_Box hlds__pred_table__conv1_ProvenConstraints_32;

#line 1059 "pred_table.m"
                    {
#line 1059 "pred_table.m"
                      hlds__hlds_pred__pred_info_get_class_context_2_p_0(hlds__pred_table__PredInfo_22, &hlds__pred_table__ProgConstraints_28);
                    }
#line 1060 "pred_table.m"
                    hlds__pred_table__UnivConstraints_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__ProgConstraints_28, (MR_Integer) 0)));
#line 1060 "pred_table.m"
                    hlds__pred_table__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__ProgConstraints_28, (MR_Integer) 1)));
#line 1061 "pred_table.m"
                    {
#line 1061 "pred_table.m"
                      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__pred_table__UnivConstraints_29, &hlds__pred_table__NumConstraints_31);
                    }
#line 1062 "pred_table.m"
                    hlds__pred_table__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__pred_table__ConstraintSearch_27, (MR_Integer) 1)));
#line 1062 "pred_table.m"
                    {
#line 1062 "pred_table.m"
                      hlds__pred_table__succeeded = hlds__pred_table__func_0(((MR_Box) hlds__pred_table__ConstraintSearch_27), ((MR_Box) (hlds__pred_table__NumConstraints_31)), &hlds__pred_table__conv1_ProvenConstraints_32);
                    }
#line 1062 "pred_table.m"
                    if (hlds__pred_table__succeeded)
#line 1062 "pred_table.m"
                      {
#line 1062 "pred_table.m"
                        hlds__pred_table__ProvenConstraints_32 = ((MR_Word) hlds__pred_table__conv1_ProvenConstraints_32);
#line 1062 "pred_table.m"
                        hlds__pred_table__succeeded = MR_TRUE;
#line 1062 "pred_table.m"
                      }
#line 1057 "pred_table.m"
                    if (hlds__pred_table__succeeded)
#line 1063 "pred_table.m"
                      {
#line 1063 "pred_table.m"
                        hlds__pred_table__succeeded = hlds__pred_table__univ_constraints_match_2_p_0(hlds__pred_table__ProvenConstraints_32, hlds__pred_table__UnivConstraints_29);
                      }
#line 1057 "pred_table.m"
                  }
#line 1056 "pred_table.m"
              }
#line 1095 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 1069 "pred_table.m"
              {
#line 1069 "pred_table.m"
                MR_String hlds__pred_table__PName_33;
#line 1069 "pred_table.m"
                MR_Word hlds__pred_table__Module_34;
#line 1092 "pred_table.m"
                MR_Word hlds__pred_table__OtherPredId_35;
#line 1073 "pred_table.m"
                MR_Word hlds__pred_table___OtherPredName_36;

#line 1069 "pred_table.m"
                {
#line 1069 "pred_table.m"
                  hlds__pred_table__PName_33 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__pred_table__PredInfo_22);
                }
#line 1070 "pred_table.m"
                {
#line 1070 "pred_table.m"
                  hlds__pred_table__Module_34 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__pred_table__PredInfo_22);
                }
#line 1071 "pred_table.m"
                {
#line 1071 "pred_table.m"
                  MR_Word base;
#line 1071 "pred_table.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1071 "pred_table.m"
                  *hlds__pred_table__PredName_21 = base;
#line 1071 "pred_table.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__pred_table__Module_34));
#line 1071 "pred_table.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__pred_table__PName_33));
#line 1071 "pred_table.m"
                }
#line 1073 "pred_table.m"
                {
#line 1073 "pred_table.m"
                  hlds__pred_table__succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(hlds__pred_table__ModuleInfo_11, hlds__pred_table__PredIds_13, hlds__pred_table__TVarSet_14, hlds__pred_table__ExistQTVars_15, hlds__pred_table__ArgTypes_16, hlds__pred_table__HeadTypeParams_17, hlds__pred_table__MaybeConstraintSearch_18, hlds__pred_table__Context_19, &hlds__pred_table__OtherPredId_35, &hlds__pred_table___OtherPredName_36);
                }
#line 1092 "pred_table.m"
                if (hlds__pred_table__succeeded)
#line 1077 "pred_table.m"
                  {
#line 1077 "pred_table.m"
                    MR_Word hlds__pred_table__OtherPredInfo_37;
#line 1077 "pred_table.m"
                    MR_Word hlds__pred_table__PredCallId_38;
#line 1077 "pred_table.m"
                    MR_Word hlds__pred_table__OtherPredCallId_39;
#line 1081 "pred_table.m"
                    MR_Word hlds__pred_table__Globals_41;
#line 1081 "pred_table.m"
                    MR_Word hlds__pred_table__Pieces_42;
#line 1081 "pred_table.m"
                    MR_Word hlds__pred_table__V_46_46;
#line 1081 "pred_table.m"
                    MR_Word hlds__pred_table__V_47_47;
#line 1081 "pred_table.m"
                    MR_Word hlds__pred_table__V_48_48;
#line 1081 "pred_table.m"
                    MR_Word hlds__pred_table__V_51_51;
#line 1081 "pred_table.m"
                    MR_Word hlds__pred_table__V_52_52;

#line 1077 "pred_table.m"
                    {
#line 1077 "pred_table.m"
                      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__pred_table__ModuleInfo_11, hlds__pred_table__OtherPredId_35, &hlds__pred_table__OtherPredInfo_37);
                    }
#line 1078 "pred_table.m"
                    {
#line 1078 "pred_table.m"
                      hlds__hlds_pred__pred_info_get_call_id_2_p_0(hlds__pred_table__PredInfo_22, &hlds__pred_table__PredCallId_38);
                    }
#line 1079 "pred_table.m"
                    {
#line 1079 "pred_table.m"
                      hlds__hlds_pred__pred_info_get_call_id_2_p_0(hlds__pred_table__OtherPredInfo_37, &hlds__pred_table__OtherPredCallId_39);
                    }
#line 1082 "pred_table.m"
                    {
#line 1082 "pred_table.m"
                      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__pred_table__ModuleInfo_11, &hlds__pred_table__Globals_41);
                    }
#line 1085 "pred_table.m"
                    {
#line 1085 "pred_table.m"
                      hlds__pred_table__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1085 "pred_table.m"
                      MR_hl_field(MR_mktag(3), hlds__pred_table__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 1085 "pred_table.m"
                      MR_hl_field(MR_mktag(3), hlds__pred_table__V_47_47, 1) = ((MR_Box) (hlds__pred_table__PredCallId_38));
#line 1085 "pred_table.m"
                    }
#line 1086 "pred_table.m"
                    {
#line 1086 "pred_table.m"
                      hlds__pred_table__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1086 "pred_table.m"
                      MR_hl_field(MR_mktag(3), hlds__pred_table__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 1086 "pred_table.m"
                      MR_hl_field(MR_mktag(3), hlds__pred_table__V_52_52, 1) = ((MR_Box) (hlds__pred_table__OtherPredCallId_39));
#line 1086 "pred_table.m"
                    }
#line 1086 "pred_table.m"
                    {
#line 1086 "pred_table.m"
                      hlds__pred_table__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1086 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_51_51, 0) = ((MR_Box) (hlds__pred_table__V_52_52));
#line 1086 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[6])));
#line 1086 "pred_table.m"
                    }
#line 1085 "pred_table.m"
                    {
#line 1085 "pred_table.m"
                      hlds__pred_table__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1085 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_48_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__pred_table_scalar_common_1[12])));
#line 1085 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_48_48, 1) = ((MR_Box) (hlds__pred_table__V_51_51));
#line 1085 "pred_table.m"
                    }
#line 1085 "pred_table.m"
                    {
#line 1085 "pred_table.m"
                      hlds__pred_table__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1085 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_46_46, 0) = ((MR_Box) (hlds__pred_table__V_47_47));
#line 1085 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_46_46, 1) = ((MR_Box) (hlds__pred_table__V_48_48));
#line 1085 "pred_table.m"
                    }
#line 1084 "pred_table.m"
                    {
#line 1084 "pred_table.m"
                      hlds__pred_table__Pieces_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1084 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__Pieces_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__pred_table_scalar_common_1[11])));
#line 1084 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__Pieces_42, 1) = ((MR_Box) (hlds__pred_table__V_46_46));
#line 1084 "pred_table.m"
                    }
#line 1089 "pred_table.m"
                    {
#line 1089 "pred_table.m"
                      parse_tree__error_util__write_error_pieces_6_p_0(hlds__pred_table__Globals_41, hlds__pred_table__Context_19, (MR_Integer) 0, hlds__pred_table__Pieces_42);
                    }
#line 1091 "pred_table.m"
                    {
#line 1091 "pred_table.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.find_matching_pred_id\'/10", (MR_String) "unresolvable predicate overloading");
                    }
#line 1077 "pred_table.m"
                  }
#line 1092 "pred_table.m"
                else
#line 1093 "pred_table.m"
                  *hlds__pred_table__ThePredId_20 = hlds__pred_table__PredId_12;
#line 1069 "pred_table.m"
                hlds__pred_table__succeeded = MR_TRUE;
#line 1069 "pred_table.m"
              }
#line 1095 "pred_table.m"
            else
#line 1096 "pred_table.m"
              {
#line 1096 "pred_table.m"
                /* direct tailcall eliminated */
#line 1096 "pred_table.m"
                {
#line 1096 "pred_table.m"
                  MR_Word hlds__pred_table__HeadVar__2__tmp_copy_2 = hlds__pred_table__PredIds_13;

#line 1096 "pred_table.m"
                  hlds__pred_table__HeadVar__2_2 = hlds__pred_table__HeadVar__2__tmp_copy_2;
#line 1096 "pred_table.m"
                }
#line 1096 "pred_table.m"
                continue;
#line 1096 "pred_table.m"
              }
#line 1039 "pred_table.m"
          }
#line 1041 "pred_table.m"
        return hlds__pred_table__succeeded;
#line 1041 "pred_table.m"
      }
#line 1041 "pred_table.m"
      break;
#line 1041 "pred_table.m"
    }
#line 274 "pred_table.m"
}

#line 264 "pred_table.m"
void MR_CALL 
hlds__pred_table__resolve_pred_overloading_10_p_0(
#line 264 "pred_table.m"
  MR_Word hlds__pred_table__ModuleInfo_11,
#line 264 "pred_table.m"
  MR_Word hlds__pred_table__CallerMarkers_12,
#line 264 "pred_table.m"
  MR_Word hlds__pred_table__TVarSet_13,
#line 264 "pred_table.m"
  MR_Word hlds__pred_table__ExistQTVars_14,
#line 264 "pred_table.m"
  MR_Word hlds__pred_table__ArgTypes_15,
#line 264 "pred_table.m"
  MR_Word hlds__pred_table__HeadTypeParams_16,
#line 264 "pred_table.m"
  MR_Word hlds__pred_table__Context_17,
#line 264 "pred_table.m"
  MR_Word hlds__pred_table__PredName0_18,
#line 264 "pred_table.m"
  MR_Word * hlds__pred_table__PredName_19,
#line 264 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_20)
#line 264 "pred_table.m"
{
#line 1015 "pred_table.m"
  {
#line 1015 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 1015 "pred_table.m"
    MR_Word hlds__pred_table__PredTable_21;
#line 1015 "pred_table.m"
    MR_Word hlds__pred_table__IsFullyQualified_22;
#line 1015 "pred_table.m"
    MR_Word hlds__pred_table__PredIds_23;
#line 1033 "pred_table.m"
    MR_Word hlds__pred_table__PredId1_24;
#line 1033 "pred_table.m"
    MR_Word hlds__pred_table__PredName1_25;

#line 1020 "pred_table.m"
    {
#line 1020 "pred_table.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__pred_table__ModuleInfo_11, &hlds__pred_table__PredTable_21);
    }
#line 1021 "pred_table.m"
    {
#line 1021 "pred_table.m"
      hlds__pred_table__IsFullyQualified_22 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(hlds__pred_table__CallerMarkers_12);
    }
#line 1022 "pred_table.m"
    {
#line 1022 "pred_table.m"
      hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0(hlds__pred_table__PredTable_21, hlds__pred_table__IsFullyQualified_22, hlds__pred_table__PredName0_18, &hlds__pred_table__PredIds_23);
    }
#line 1028 "pred_table.m"
    {
#line 1028 "pred_table.m"
      hlds__pred_table__succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(hlds__pred_table__ModuleInfo_11, hlds__pred_table__PredIds_23, hlds__pred_table__TVarSet_13, hlds__pred_table__ExistQTVars_14, hlds__pred_table__ArgTypes_15, hlds__pred_table__HeadTypeParams_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__pred_table__Context_17, &hlds__pred_table__PredId1_24, &hlds__pred_table__PredName1_25);
    }
#line 1033 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 1031 "pred_table.m"
      {
#line 1031 "pred_table.m"
        *hlds__pred_table__PredId_20 = hlds__pred_table__PredId1_24;
#line 1032 "pred_table.m"
        *hlds__pred_table__PredName_19 = hlds__pred_table__PredName1_25;
#line 1031 "pred_table.m"
      }
#line 1033 "pred_table.m"
    else
#line 1036 "pred_table.m"
      {
#line 1036 "pred_table.m"
        {
#line 1036 "pred_table.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.resolve_pred_overloading\'/10", (MR_String) "type error in pred call: no matching pred");
#line 1036 "pred_table.m"
          return;
        }
#line 1036 "pred_table.m"
      }
#line 1015 "pred_table.m"
  }
#line 264 "pred_table.m"
}

#line 257 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_insert_4_p_0(
#line 257 "pred_table.m"
  MR_Word hlds__pred_table__PredInfo_5,
#line 257 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_6,
#line 257 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8,
#line 257 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_9)
#line 257 "pred_table.m"
{
#line 884 "pred_table.m"
  {
#line 884 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 885 "pred_table.m"
    {
#line 885 "pred_table.m"
      hlds__pred_table__do_predicate_table_insert_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__pred_table__PredInfo_5, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__pred_table__PredId_6, hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, hlds__pred_table__STATE_VARIABLE_PredicateTable_9);
#line 885 "pred_table.m"
      return;
    }
#line 884 "pred_table.m"
  }
#line 257 "pred_table.m"
}

#line 248 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_insert_qual_6_p_0(
#line 248 "pred_table.m"
  MR_Word hlds__pred_table__PredInfo_7,
#line 248 "pred_table.m"
  MR_Word hlds__pred_table__NeedQual_8,
#line 248 "pred_table.m"
  MR_Word hlds__pred_table__QualInfo_9,
#line 248 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_10,
#line 248 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_12,
#line 248 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_13)
#line 248 "pred_table.m"
{
#line 889 "pred_table.m"
  {
#line 889 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 889 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15;

#line 890 "pred_table.m"
    {
#line 890 "pred_table.m"
      hlds__pred_table__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 890 "pred_table.m"
      MR_hl_field(MR_mktag(1), hlds__pred_table__V_15_15, 0) = ((MR_Box) (hlds__pred_table__QualInfo_9));
#line 890 "pred_table.m"
    }
#line 890 "pred_table.m"
    {
#line 890 "pred_table.m"
      hlds__pred_table__do_predicate_table_insert_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__pred_table__PredInfo_7, hlds__pred_table__NeedQual_8, hlds__pred_table__V_15_15, hlds__pred_table__PredId_10, hlds__pred_table__STATE_VARIABLE_PredicateTable_0_12, hlds__pred_table__STATE_VARIABLE_PredicateTable_13);
#line 890 "pred_table.m"
      return;
    }
#line 889 "pred_table.m"
  }
#line 248 "pred_table.m"
}

#line 237 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pf_sym_5_p_0(
#line 237 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_6,
#line 237 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_7,
#line 237 "pred_table.m"
  MR_Word hlds__pred_table__PredOrFunc_8,
#line 237 "pred_table.m"
  MR_Word hlds__pred_table__SymName_9,
#line 237 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_10)
#line 237 "pred_table.m"
{
#line 824 "pred_table.m"
  {
#line 824 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 824 "pred_table.m"
    if ((hlds__pred_table__PredOrFunc_8 == (MR_Integer) 1))
#line 829 "pred_table.m"
      {
#line 829 "pred_table.m"
        hlds__pred_table__predicate_table_lookup_func_sym_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__IsFullyQualified_7, hlds__pred_table__SymName_9, hlds__pred_table__PredIds_10);
#line 829 "pred_table.m"
        return;
      }
#line 824 "pred_table.m"
    else
#line 825 "pred_table.m"
      {
#line 825 "pred_table.m"
        hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__IsFullyQualified_7, hlds__pred_table__SymName_9, hlds__pred_table__PredIds_10);
#line 825 "pred_table.m"
        return;
      }
#line 824 "pred_table.m"
  }
#line 237 "pred_table.m"
}

#line 230 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(
#line 230 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_7,
#line 230 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_8,
#line 230 "pred_table.m"
  MR_Word hlds__pred_table__PredOrFunc_9,
#line 230 "pred_table.m"
  MR_Word hlds__pred_table__SymName_10,
#line 230 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_11,
#line 230 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_12)
#line 230 "pred_table.m"
{
#line 806 "pred_table.m"
  {
#line 806 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 806 "pred_table.m"
    if (((MR_tag((MR_Word) hlds__pred_table__SymName_10)) == (MR_mktag((MR_Integer) 1))))
#line 806 "pred_table.m"
      {
#line 806 "pred_table.m"
        MR_Word hlds__pred_table__Module_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_10, (MR_Integer) 0)));
#line 806 "pred_table.m"
        MR_String hlds__pred_table__Name_14 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_10, (MR_Integer) 1)));

#line 780 "pred_table.m"
        if ((hlds__pred_table__PredOrFunc_9 == (MR_Integer) 1))
#line 784 "pred_table.m"
          {
#line 784 "pred_table.m"
            MR_Integer hlds__pred_table__FuncArity_23 = (hlds__pred_table__Arity_11 - (MR_Integer) 1);

#line 786 "pred_table.m"
            {
#line 786 "pred_table.m"
              hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredicateTable_7, hlds__pred_table__IsFullyQualified_8, hlds__pred_table__Module_13, hlds__pred_table__Name_14, hlds__pred_table__FuncArity_23, hlds__pred_table__PredIds_12);
#line 786 "pred_table.m"
              return;
            }
#line 784 "pred_table.m"
          }
#line 780 "pred_table.m"
        else
#line 781 "pred_table.m"
          {
#line 781 "pred_table.m"
            hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredicateTable_7, hlds__pred_table__IsFullyQualified_8, hlds__pred_table__Module_13, hlds__pred_table__Name_14, hlds__pred_table__Arity_11, hlds__pred_table__PredIds_12);
#line 781 "pred_table.m"
            return;
          }
#line 806 "pred_table.m"
      }
#line 806 "pred_table.m"
    else
#line 810 "pred_table.m"
      {
#line 810 "pred_table.m"
        MR_String hlds__pred_table__Name_15 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_10, (MR_Integer) 0)));

#line 815 "pred_table.m"
        if ((hlds__pred_table__IsFullyQualified_8 == (MR_Integer) 0))
#line 817 "pred_table.m"
          *hlds__pred_table__PredIds_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 815 "pred_table.m"
        else
#line 793 "pred_table.m"
          if ((hlds__pred_table__PredOrFunc_9 == (MR_Integer) 1))
#line 797 "pred_table.m"
            {
#line 797 "pred_table.m"
              MR_Integer hlds__pred_table__FuncArity_30 = (hlds__pred_table__Arity_11 - (MR_Integer) 1);

#line 799 "pred_table.m"
              {
#line 799 "pred_table.m"
                hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(hlds__pred_table__PredicateTable_7, hlds__pred_table__Name_15, hlds__pred_table__FuncArity_30, hlds__pred_table__PredIds_12);
#line 799 "pred_table.m"
                return;
              }
#line 797 "pred_table.m"
            }
#line 793 "pred_table.m"
          else
#line 794 "pred_table.m"
            {
#line 794 "pred_table.m"
              hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(hlds__pred_table__PredicateTable_7, hlds__pred_table__Name_15, hlds__pred_table__Arity_11, hlds__pred_table__PredIds_12);
#line 794 "pred_table.m"
              return;
            }
#line 810 "pred_table.m"
      }
#line 806 "pred_table.m"
  }
#line 230 "pred_table.m"
}

#line 220 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pf_name_arity_5_p_0(
#line 220 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_6,
#line 220 "pred_table.m"
  MR_Word hlds__pred_table__PredOrFunc_7,
#line 220 "pred_table.m"
  MR_String hlds__pred_table__Name_8,
#line 220 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_9,
#line 220 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_10)
#line 220 "pred_table.m"
{
#line 793 "pred_table.m"
  {
#line 793 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 793 "pred_table.m"
    if ((hlds__pred_table__PredOrFunc_7 == (MR_Integer) 1))
#line 797 "pred_table.m"
      {
#line 797 "pred_table.m"
        MR_Integer hlds__pred_table__FuncArity_11 = (hlds__pred_table__Arity_9 - (MR_Integer) 1);

#line 799 "pred_table.m"
        {
#line 799 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__Name_8, hlds__pred_table__FuncArity_11, hlds__pred_table__PredIds_10);
#line 799 "pred_table.m"
          return;
        }
#line 797 "pred_table.m"
      }
#line 793 "pred_table.m"
    else
#line 794 "pred_table.m"
      {
#line 794 "pred_table.m"
        hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__Name_8, hlds__pred_table__Arity_9, hlds__pred_table__PredIds_10);
#line 794 "pred_table.m"
        return;
      }
#line 793 "pred_table.m"
  }
#line 220 "pred_table.m"
}

#line 209 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pf_m_n_a_7_p_0(
#line 209 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_8,
#line 209 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_9,
#line 209 "pred_table.m"
  MR_Word hlds__pred_table__PredOrFunc_10,
#line 209 "pred_table.m"
  MR_Word hlds__pred_table__Module_11,
#line 209 "pred_table.m"
  MR_String hlds__pred_table__Name_12,
#line 209 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_13,
#line 209 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_14)
#line 209 "pred_table.m"
{
#line 780 "pred_table.m"
  {
#line 780 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 780 "pred_table.m"
    if ((hlds__pred_table__PredOrFunc_10 == (MR_Integer) 1))
#line 784 "pred_table.m"
      {
#line 784 "pred_table.m"
        MR_Integer hlds__pred_table__FuncArity_15 = (hlds__pred_table__Arity_13 - (MR_Integer) 1);

#line 786 "pred_table.m"
        {
#line 786 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredicateTable_8, hlds__pred_table__IsFullyQualified_9, hlds__pred_table__Module_11, hlds__pred_table__Name_12, hlds__pred_table__FuncArity_15, hlds__pred_table__PredIds_14);
#line 786 "pred_table.m"
          return;
        }
#line 784 "pred_table.m"
      }
#line 780 "pred_table.m"
    else
#line 781 "pred_table.m"
      {
#line 781 "pred_table.m"
        hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredicateTable_8, hlds__pred_table__IsFullyQualified_9, hlds__pred_table__Module_11, hlds__pred_table__Name_12, hlds__pred_table__Arity_13, hlds__pred_table__PredIds_14);
#line 781 "pred_table.m"
        return;
      }
#line 780 "pred_table.m"
  }
#line 209 "pred_table.m"
}

#line 766 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0_1(
#line 766 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 766 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1)
#line 766 "pred_table.m"
{
#line 766 "pred_table.m"
  {
#line 766 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 766 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;

#line 766 "pred_table.m"
    {
#line 766 "pred_table.m"
      return hlds__pred_table__succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) hlds__pred_table__wrapper_arg_1));
    }
#line 766 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 766 "pred_table.m"
  }
#line 766 "pred_table.m"
}

#line 198 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(
#line 198 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_7,
#line 198 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_8,
#line 198 "pred_table.m"
  MR_Word hlds__pred_table__Module_9,
#line 198 "pred_table.m"
  MR_String hlds__pred_table__FuncName_10,
#line 198 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_11,
#line 198 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredIds_15)
#line 198 "pred_table.m"
{
#line 745 "pred_table.m"
  {
#line 745 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 745 "pred_table.m"
    MR_Word hlds__pred_table__F_MNA_Index_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 10)));
#line 746 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 0)));
#line 746 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 1)));
#line 746 "pred_table.m"
    MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 2)));
#line 746 "pred_table.m"
    MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 3)));
#line 746 "pred_table.m"
    MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 4)));
#line 746 "pred_table.m"
    MR_Word hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 5)));
#line 746 "pred_table.m"
    MR_Word hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 6)));
#line 746 "pred_table.m"
    MR_Word hlds__pred_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 7)));
#line 746 "pred_table.m"
    MR_Word hlds__pred_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 8)));
#line 746 "pred_table.m"
    MR_Word hlds__pred_table__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 9)));
#line 753 "pred_table.m"
    MR_Word hlds__pred_table__STATE_VARIABLE_PredIds_17_17;
#line 748 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_33_33;
#line 748 "pred_table.m"
    MR_Word hlds__pred_table__ArityIndex_14;
#line 748 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16;
#line 748 "pred_table.m"
    MR_Box hlds__pred_table__conv0_ArityIndex_14;
#line 749 "pred_table.m"
    MR_Box hlds__pred_table__conv1_STATE_VARIABLE_PredIds_17_17;

#line 748 "pred_table.m"
    {
#line 748 "pred_table.m"
      hlds__pred_table__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 748 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_16_16, 0) = ((MR_Box) (hlds__pred_table__Module_9));
#line 748 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_16_16, 1) = ((MR_Box) (hlds__pred_table__FuncName_10));
#line 748 "pred_table.m"
    }
#line 748 "pred_table.m"
    {
#line 748 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__F_MNA_Index_13, ((MR_Box) (hlds__pred_table__V_16_16)), &hlds__pred_table__conv0_ArityIndex_14);
    }
#line 748 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 748 "pred_table.m"
      {
#line 748 "pred_table.m"
        hlds__pred_table__ArityIndex_14 = ((MR_Word) hlds__pred_table__conv0_ArityIndex_14);
#line 748 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 748 "pred_table.m"
      }
#line 748 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 748 "pred_table.m"
      {
#line 6867 "hlds.pred_table.c"
        hlds__pred_table__TypeInfo_33_33 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
#line 749 "pred_table.m"
        {
#line 749 "pred_table.m"
          hlds__pred_table__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__pred_table__TypeInfo_33_33, hlds__pred_table__ArityIndex_14, hlds__pred_table__Arity_11, &hlds__pred_table__conv1_STATE_VARIABLE_PredIds_17_17);
        }
#line 749 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 749 "pred_table.m"
          {
#line 749 "pred_table.m"
            hlds__pred_table__STATE_VARIABLE_PredIds_17_17 = ((MR_Word) hlds__pred_table__conv1_STATE_VARIABLE_PredIds_17_17);
#line 749 "pred_table.m"
            hlds__pred_table__succeeded = MR_TRUE;
#line 749 "pred_table.m"
          }
#line 748 "pred_table.m"
      }
#line 753 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 761 "pred_table.m"
      if ((hlds__pred_table__IsFullyQualified_8 == (MR_Integer) 0))
#line 764 "pred_table.m"
        {
#line 764 "pred_table.m"
          MR_Word hlds__pred_table__Preds_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 0)));
#line 764 "pred_table.m"
          MR_Word hlds__pred_table__V_45_45;
#line 408 "pred_table.m"
          MR_Word hlds__pred_table__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 1)));
#line 408 "pred_table.m"
          MR_Word hlds__pred_table__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 2)));
#line 408 "pred_table.m"
          MR_Word hlds__pred_table__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 3)));
#line 408 "pred_table.m"
          MR_Word hlds__pred_table__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 4)));
#line 408 "pred_table.m"
          MR_Word hlds__pred_table__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 5)));
#line 408 "pred_table.m"
          MR_Word hlds__pred_table__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 6)));
#line 408 "pred_table.m"
          MR_Word hlds__pred_table__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 7)));
#line 408 "pred_table.m"
          MR_Word hlds__pred_table__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 8)));
#line 408 "pred_table.m"
          MR_Word hlds__pred_table__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 9)));
#line 408 "pred_table.m"
          MR_Word hlds__pred_table__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 10)));

#line 766 "pred_table.m"
          {
#line 766 "pred_table.m"
            hlds__pred_table__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 766 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__V_45_45, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
#line 766 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__V_45_45, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0_1));
#line 766 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 766 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__V_45_45, 3) = ((MR_Box) (hlds__pred_table__Preds_42));
#line 766 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__V_45_45, 4) = ((MR_Box) (hlds__pred_table__Module_9));
#line 766 "pred_table.m"
          }
#line 766 "pred_table.m"
          {
#line 766 "pred_table.m"
            mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__V_45_45, hlds__pred_table__STATE_VARIABLE_PredIds_17_17, hlds__pred_table__STATE_VARIABLE_PredIds_15);
#line 766 "pred_table.m"
            return;
          }
#line 764 "pred_table.m"
        }
#line 761 "pred_table.m"
      else
#line 762 "pred_table.m"
        *hlds__pred_table__STATE_VARIABLE_PredIds_15 = hlds__pred_table__STATE_VARIABLE_PredIds_17_17;
#line 753 "pred_table.m"
    else
#line 754 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_PredIds_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 745 "pred_table.m"
  }
#line 198 "pred_table.m"
}

#line 766 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0_1(
#line 766 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 766 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1)
#line 766 "pred_table.m"
{
#line 766 "pred_table.m"
  {
#line 766 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 766 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;

#line 766 "pred_table.m"
    {
#line 766 "pred_table.m"
      return hlds__pred_table__succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) hlds__pred_table__wrapper_arg_1));
    }
#line 766 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 766 "pred_table.m"
  }
#line 766 "pred_table.m"
}

#line 194 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(
#line 194 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_7,
#line 194 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_8,
#line 194 "pred_table.m"
  MR_Word hlds__pred_table__Module_9,
#line 194 "pred_table.m"
  MR_String hlds__pred_table__PredName_10,
#line 194 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_11,
#line 194 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredIds_15)
#line 194 "pred_table.m"
{
#line 732 "pred_table.m"
  {
#line 732 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 732 "pred_table.m"
    MR_Word hlds__pred_table__P_MNA_Index_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 7)));
#line 733 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 0)));
#line 733 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 1)));
#line 733 "pred_table.m"
    MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 2)));
#line 733 "pred_table.m"
    MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 3)));
#line 733 "pred_table.m"
    MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 4)));
#line 733 "pred_table.m"
    MR_Word hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 5)));
#line 733 "pred_table.m"
    MR_Word hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 6)));
#line 733 "pred_table.m"
    MR_Word hlds__pred_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 8)));
#line 733 "pred_table.m"
    MR_Word hlds__pred_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 9)));
#line 733 "pred_table.m"
    MR_Word hlds__pred_table__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 10)));
#line 740 "pred_table.m"
    MR_Word hlds__pred_table__STATE_VARIABLE_PredIds_17_17;
#line 735 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_33_33;
#line 735 "pred_table.m"
    MR_Word hlds__pred_table__ArityIndex_14;
#line 735 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16;
#line 735 "pred_table.m"
    MR_Box hlds__pred_table__conv0_ArityIndex_14;
#line 736 "pred_table.m"
    MR_Box hlds__pred_table__conv1_STATE_VARIABLE_PredIds_17_17;

#line 735 "pred_table.m"
    {
#line 735 "pred_table.m"
      hlds__pred_table__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 735 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_16_16, 0) = ((MR_Box) (hlds__pred_table__Module_9));
#line 735 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_16_16, 1) = ((MR_Box) (hlds__pred_table__PredName_10));
#line 735 "pred_table.m"
    }
#line 735 "pred_table.m"
    {
#line 735 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__P_MNA_Index_13, ((MR_Box) (hlds__pred_table__V_16_16)), &hlds__pred_table__conv0_ArityIndex_14);
    }
#line 735 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 735 "pred_table.m"
      {
#line 735 "pred_table.m"
        hlds__pred_table__ArityIndex_14 = ((MR_Word) hlds__pred_table__conv0_ArityIndex_14);
#line 735 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 735 "pred_table.m"
      }
#line 735 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 735 "pred_table.m"
      {
#line 7068 "hlds.pred_table.c"
        hlds__pred_table__TypeInfo_33_33 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
#line 736 "pred_table.m"
        {
#line 736 "pred_table.m"
          hlds__pred_table__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__pred_table__TypeInfo_33_33, hlds__pred_table__ArityIndex_14, hlds__pred_table__Arity_11, &hlds__pred_table__conv1_STATE_VARIABLE_PredIds_17_17);
        }
#line 736 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 736 "pred_table.m"
          {
#line 736 "pred_table.m"
            hlds__pred_table__STATE_VARIABLE_PredIds_17_17 = ((MR_Word) hlds__pred_table__conv1_STATE_VARIABLE_PredIds_17_17);
#line 736 "pred_table.m"
            hlds__pred_table__succeeded = MR_TRUE;
#line 736 "pred_table.m"
          }
#line 735 "pred_table.m"
      }
#line 740 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 761 "pred_table.m"
      if ((hlds__pred_table__IsFullyQualified_8 == (MR_Integer) 0))
#line 764 "pred_table.m"
        {
#line 764 "pred_table.m"
          MR_Word hlds__pred_table__Preds_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 0)));
#line 764 "pred_table.m"
          MR_Word hlds__pred_table__V_45_45;
#line 408 "pred_table.m"
          MR_Word hlds__pred_table__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 1)));
#line 408 "pred_table.m"
          MR_Word hlds__pred_table__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 2)));
#line 408 "pred_table.m"
          MR_Word hlds__pred_table__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 3)));
#line 408 "pred_table.m"
          MR_Word hlds__pred_table__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 4)));
#line 408 "pred_table.m"
          MR_Word hlds__pred_table__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 5)));
#line 408 "pred_table.m"
          MR_Word hlds__pred_table__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 6)));
#line 408 "pred_table.m"
          MR_Word hlds__pred_table__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 7)));
#line 408 "pred_table.m"
          MR_Word hlds__pred_table__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 8)));
#line 408 "pred_table.m"
          MR_Word hlds__pred_table__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 9)));
#line 408 "pred_table.m"
          MR_Word hlds__pred_table__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 10)));

#line 766 "pred_table.m"
          {
#line 766 "pred_table.m"
            hlds__pred_table__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 766 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__V_45_45, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
#line 766 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__V_45_45, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0_1));
#line 766 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 766 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__V_45_45, 3) = ((MR_Box) (hlds__pred_table__Preds_42));
#line 766 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__V_45_45, 4) = ((MR_Box) (hlds__pred_table__Module_9));
#line 766 "pred_table.m"
          }
#line 766 "pred_table.m"
          {
#line 766 "pred_table.m"
            mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__V_45_45, hlds__pred_table__STATE_VARIABLE_PredIds_17_17, hlds__pred_table__STATE_VARIABLE_PredIds_15);
#line 766 "pred_table.m"
            return;
          }
#line 764 "pred_table.m"
        }
#line 761 "pred_table.m"
      else
#line 762 "pred_table.m"
        *hlds__pred_table__STATE_VARIABLE_PredIds_15 = hlds__pred_table__STATE_VARIABLE_PredIds_17_17;
#line 740 "pred_table.m"
    else
#line 741 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_PredIds_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 732 "pred_table.m"
  }
#line 194 "pred_table.m"
}

#line 190 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_m_n_a_6_p_0(
#line 190 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_7,
#line 190 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_8,
#line 190 "pred_table.m"
  MR_Word hlds__pred_table__Module_9,
#line 190 "pred_table.m"
  MR_String hlds__pred_table__Name_10,
#line 190 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_11,
#line 190 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_12)
#line 190 "pred_table.m"
{
#line 724 "pred_table.m"
  {
#line 724 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 724 "pred_table.m"
    MR_Word hlds__pred_table__PredPredIds_13;
#line 724 "pred_table.m"
    MR_Word hlds__pred_table__FuncPredIds_14;

#line 725 "pred_table.m"
    {
#line 725 "pred_table.m"
      hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredicateTable_7, hlds__pred_table__IsFullyQualified_8, hlds__pred_table__Module_9, hlds__pred_table__Name_10, hlds__pred_table__Arity_11, &hlds__pred_table__PredPredIds_13);
    }
#line 727 "pred_table.m"
    {
#line 727 "pred_table.m"
      hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredicateTable_7, hlds__pred_table__IsFullyQualified_8, hlds__pred_table__Module_9, hlds__pred_table__Name_10, hlds__pred_table__Arity_11, &hlds__pred_table__FuncPredIds_14);
    }
#line 729 "pred_table.m"
    {
#line 729 "pred_table.m"
      *hlds__pred_table__PredIds_12 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__FuncPredIds_14, hlds__pred_table__PredPredIds_13);
    }
#line 724 "pred_table.m"
  }
#line 190 "pred_table.m"
}

#line 166 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(
#line 166 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_5,
#line 166 "pred_table.m"
  MR_String hlds__pred_table__FuncName_6,
#line 166 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_7,
#line 166 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_8)
#line 166 "pred_table.m"
{
#line 713 "pred_table.m"
  {
#line 713 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 713 "pred_table.m"
    MR_Word hlds__pred_table__FuncNameArityIndex_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 714 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 714 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 714 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 714 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 714 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 714 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 714 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 714 "pred_table.m"
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 714 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 714 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 10)));
#line 717 "pred_table.m"
    MR_Word hlds__pred_table__PredIdsPrime_10;
#line 715 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11;
#line 715 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredIdsPrime_10;

#line 715 "pred_table.m"
    {
#line 715 "pred_table.m"
      hlds__pred_table__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 715 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_11_11, 0) = ((MR_Box) (hlds__pred_table__FuncName_6));
#line 715 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_11_11, 1) = ((MR_Box) (hlds__pred_table__Arity_7));
#line 715 "pred_table.m"
    }
#line 715 "pred_table.m"
    {
#line 715 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__FuncNameArityIndex_9, ((MR_Box) (hlds__pred_table__V_11_11)), &hlds__pred_table__conv0_PredIdsPrime_10);
    }
#line 715 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 715 "pred_table.m"
      {
#line 715 "pred_table.m"
        hlds__pred_table__PredIdsPrime_10 = ((MR_Word) hlds__pred_table__conv0_PredIdsPrime_10);
#line 715 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 715 "pred_table.m"
      }
#line 717 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 716 "pred_table.m"
      *hlds__pred_table__PredIds_8 = hlds__pred_table__PredIdsPrime_10;
#line 717 "pred_table.m"
    else
#line 718 "pred_table.m"
      *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 713 "pred_table.m"
  }
#line 166 "pred_table.m"
}

#line 163 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(
#line 163 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_5,
#line 163 "pred_table.m"
  MR_String hlds__pred_table__PredName_6,
#line 163 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_7,
#line 163 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_8)
#line 163 "pred_table.m"
{
#line 704 "pred_table.m"
  {
#line 704 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 704 "pred_table.m"
    MR_Word hlds__pred_table__PredNameArityIndex_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 705 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 705 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 705 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 705 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 705 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 705 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 705 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 705 "pred_table.m"
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 705 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 705 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 10)));
#line 708 "pred_table.m"
    MR_Word hlds__pred_table__PredIdsPrime_10;
#line 706 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11;
#line 706 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredIdsPrime_10;

#line 706 "pred_table.m"
    {
#line 706 "pred_table.m"
      hlds__pred_table__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 706 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_11_11, 0) = ((MR_Box) (hlds__pred_table__PredName_6));
#line 706 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_11_11, 1) = ((MR_Box) (hlds__pred_table__Arity_7));
#line 706 "pred_table.m"
    }
#line 706 "pred_table.m"
    {
#line 706 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__PredNameArityIndex_9, ((MR_Box) (hlds__pred_table__V_11_11)), &hlds__pred_table__conv0_PredIdsPrime_10);
    }
#line 706 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 706 "pred_table.m"
      {
#line 706 "pred_table.m"
        hlds__pred_table__PredIdsPrime_10 = ((MR_Word) hlds__pred_table__conv0_PredIdsPrime_10);
#line 706 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 706 "pred_table.m"
      }
#line 708 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 707 "pred_table.m"
      *hlds__pred_table__PredIds_8 = hlds__pred_table__PredIdsPrime_10;
#line 708 "pred_table.m"
    else
#line 709 "pred_table.m"
      *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 704 "pred_table.m"
  }
#line 163 "pred_table.m"
}

#line 160 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_name_arity_4_p_0(
#line 160 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_5,
#line 160 "pred_table.m"
  MR_String hlds__pred_table__Name_6,
#line 160 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_7,
#line 160 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_8)
#line 160 "pred_table.m"
{
#line 696 "pred_table.m"
  {
#line 696 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 696 "pred_table.m"
    MR_Word hlds__pred_table__PredPredIds_9;
#line 696 "pred_table.m"
    MR_Word hlds__pred_table__FuncPredIds_10;

#line 697 "pred_table.m"
    {
#line 697 "pred_table.m"
      hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(hlds__pred_table__PredicateTable_5, hlds__pred_table__Name_6, hlds__pred_table__Arity_7, &hlds__pred_table__PredPredIds_9);
    }
#line 699 "pred_table.m"
    {
#line 699 "pred_table.m"
      hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(hlds__pred_table__PredicateTable_5, hlds__pred_table__Name_6, hlds__pred_table__Arity_7, &hlds__pred_table__FuncPredIds_10);
    }
#line 701 "pred_table.m"
    {
#line 701 "pred_table.m"
      *hlds__pred_table__PredIds_8 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__FuncPredIds_10, hlds__pred_table__PredPredIds_9);
    }
#line 696 "pred_table.m"
  }
#line 160 "pred_table.m"
}

#line 152 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_name_3_p_0(
#line 152 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_4,
#line 152 "pred_table.m"
  MR_String hlds__pred_table__FuncName_5,
#line 152 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_6)
#line 152 "pred_table.m"
{
#line 644 "pred_table.m"
  {
#line 644 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 644 "pred_table.m"
    MR_Word hlds__pred_table__PredIdsPrime_7;
#line 642 "pred_table.m"
    MR_Word hlds__pred_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 8)));
#line 642 "pred_table.m"
    MR_Word hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 0)));
#line 642 "pred_table.m"
    MR_Word hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 1)));
#line 642 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 2)));
#line 642 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 3)));
#line 642 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 4)));
#line 642 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 5)));
#line 642 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 6)));
#line 642 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 7)));
#line 642 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 9)));
#line 642 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 10)));
#line 642 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredIdsPrime_7;

#line 642 "pred_table.m"
    {
#line 642 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__V_8_8, ((MR_Box) (hlds__pred_table__FuncName_5)), &hlds__pred_table__conv0_PredIdsPrime_7);
    }
#line 642 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 642 "pred_table.m"
      {
#line 642 "pred_table.m"
        hlds__pred_table__PredIdsPrime_7 = ((MR_Word) hlds__pred_table__conv0_PredIdsPrime_7);
#line 642 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 642 "pred_table.m"
      }
#line 644 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 643 "pred_table.m"
      *hlds__pred_table__PredIds_6 = hlds__pred_table__PredIdsPrime_7;
#line 644 "pred_table.m"
    else
#line 645 "pred_table.m"
      *hlds__pred_table__PredIds_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 644 "pred_table.m"
  }
#line 152 "pred_table.m"
}

#line 149 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_name_3_p_0(
#line 149 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_4,
#line 149 "pred_table.m"
  MR_String hlds__pred_table__PredName_5,
#line 149 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_6)
#line 149 "pred_table.m"
{
#line 637 "pred_table.m"
  {
#line 637 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 637 "pred_table.m"
    MR_Word hlds__pred_table__PredIdsPrime_7;
#line 635 "pred_table.m"
    MR_Word hlds__pred_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 5)));
#line 635 "pred_table.m"
    MR_Word hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 0)));
#line 635 "pred_table.m"
    MR_Word hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 1)));
#line 635 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 2)));
#line 635 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 3)));
#line 635 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 4)));
#line 635 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 6)));
#line 635 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 7)));
#line 635 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 8)));
#line 635 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 9)));
#line 635 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 10)));
#line 635 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredIdsPrime_7;

#line 635 "pred_table.m"
    {
#line 635 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__V_8_8, ((MR_Box) (hlds__pred_table__PredName_5)), &hlds__pred_table__conv0_PredIdsPrime_7);
    }
#line 635 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 635 "pred_table.m"
      {
#line 635 "pred_table.m"
        hlds__pred_table__PredIdsPrime_7 = ((MR_Word) hlds__pred_table__conv0_PredIdsPrime_7);
#line 635 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 635 "pred_table.m"
      }
#line 637 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 636 "pred_table.m"
      *hlds__pred_table__PredIds_6 = hlds__pred_table__PredIdsPrime_7;
#line 637 "pred_table.m"
    else
#line 638 "pred_table.m"
      *hlds__pred_table__PredIds_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 637 "pred_table.m"
  }
#line 149 "pred_table.m"
}

#line 146 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_name_3_p_0(
#line 146 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_4,
#line 146 "pred_table.m"
  MR_String hlds__pred_table__Name_5,
#line 146 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_6)
#line 146 "pred_table.m"
{
#line 629 "pred_table.m"
  {
#line 629 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 629 "pred_table.m"
    MR_Word hlds__pred_table__PredPredIds_7;
#line 629 "pred_table.m"
    MR_Word hlds__pred_table__FuncPredIds_8;
#line 637 "pred_table.m"
    MR_Word hlds__pred_table__PredIdsPrime_13;
#line 635 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 5)));
#line 635 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 0)));
#line 635 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 1)));
#line 635 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 2)));
#line 635 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 3)));
#line 635 "pred_table.m"
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 4)));
#line 635 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 6)));
#line 635 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 7)));
#line 635 "pred_table.m"
    MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 8)));
#line 635 "pred_table.m"
    MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 9)));
#line 635 "pred_table.m"
    MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 10)));
#line 635 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredIdsPrime_13;
#line 644 "pred_table.m"
    MR_Word hlds__pred_table__PredIdsPrime_30;
#line 642 "pred_table.m"
    MR_Word hlds__pred_table__V_31_31;
#line 642 "pred_table.m"
    MR_Word hlds__pred_table__V_32_32;
#line 642 "pred_table.m"
    MR_Word hlds__pred_table__V_33_33;
#line 642 "pred_table.m"
    MR_Word hlds__pred_table__V_34_34;
#line 642 "pred_table.m"
    MR_Word hlds__pred_table__V_35_35;
#line 642 "pred_table.m"
    MR_Word hlds__pred_table__V_36_36;
#line 642 "pred_table.m"
    MR_Word hlds__pred_table__V_37_37;
#line 642 "pred_table.m"
    MR_Word hlds__pred_table__V_38_38;
#line 642 "pred_table.m"
    MR_Word hlds__pred_table__V_39_39;
#line 642 "pred_table.m"
    MR_Word hlds__pred_table__V_40_40;
#line 642 "pred_table.m"
    MR_Word hlds__pred_table__V_41_41;
#line 642 "pred_table.m"
    MR_Box hlds__pred_table__conv1_PredIdsPrime_30;

#line 635 "pred_table.m"
    {
#line 635 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__V_14_14, ((MR_Box) (hlds__pred_table__Name_5)), &hlds__pred_table__conv0_PredIdsPrime_13);
    }
#line 635 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 635 "pred_table.m"
      {
#line 635 "pred_table.m"
        hlds__pred_table__PredIdsPrime_13 = ((MR_Word) hlds__pred_table__conv0_PredIdsPrime_13);
#line 635 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 635 "pred_table.m"
      }
#line 637 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 636 "pred_table.m"
      hlds__pred_table__PredPredIds_7 = hlds__pred_table__PredIdsPrime_13;
#line 637 "pred_table.m"
    else
#line 638 "pred_table.m"
      hlds__pred_table__PredPredIds_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 642 "pred_table.m"
    hlds__pred_table__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 0)));
#line 642 "pred_table.m"
    hlds__pred_table__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 1)));
#line 642 "pred_table.m"
    hlds__pred_table__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 2)));
#line 642 "pred_table.m"
    hlds__pred_table__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 3)));
#line 642 "pred_table.m"
    hlds__pred_table__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 4)));
#line 642 "pred_table.m"
    hlds__pred_table__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 5)));
#line 642 "pred_table.m"
    hlds__pred_table__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 6)));
#line 642 "pred_table.m"
    hlds__pred_table__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 7)));
#line 642 "pred_table.m"
    hlds__pred_table__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 8)));
#line 642 "pred_table.m"
    hlds__pred_table__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 9)));
#line 642 "pred_table.m"
    hlds__pred_table__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 10)));
#line 642 "pred_table.m"
    {
#line 642 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__V_31_31, ((MR_Box) (hlds__pred_table__Name_5)), &hlds__pred_table__conv1_PredIdsPrime_30);
    }
#line 642 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 642 "pred_table.m"
      {
#line 642 "pred_table.m"
        hlds__pred_table__PredIdsPrime_30 = ((MR_Word) hlds__pred_table__conv1_PredIdsPrime_30);
#line 642 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 642 "pred_table.m"
      }
#line 644 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 643 "pred_table.m"
      hlds__pred_table__FuncPredIds_8 = hlds__pred_table__PredIdsPrime_30;
#line 644 "pred_table.m"
    else
#line 645 "pred_table.m"
      hlds__pred_table__FuncPredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 632 "pred_table.m"
    {
#line 632 "pred_table.m"
      *hlds__pred_table__PredIds_6 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__FuncPredIds_8, hlds__pred_table__PredPredIds_7);
    }
#line 629 "pred_table.m"
  }
#line 146 "pred_table.m"
}

#line 139 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(
#line 139 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_6,
#line 139 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_7,
#line 139 "pred_table.m"
  MR_Word hlds__pred_table__SymName_8,
#line 139 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_9,
#line 139 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_10)
#line 139 "pred_table.m"
{
#line 612 "pred_table.m"
  {
#line 612 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 612 "pred_table.m"
    if (((MR_tag((MR_Word) hlds__pred_table__SymName_8)) == (MR_mktag((MR_Integer) 1))))
#line 622 "pred_table.m"
      {
#line 622 "pred_table.m"
        MR_Word hlds__pred_table__Module_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_8, (MR_Integer) 0)));
#line 622 "pred_table.m"
        MR_String hlds__pred_table__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_8, (MR_Integer) 1)));

#line 623 "pred_table.m"
        {
#line 623 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__IsFullyQualified_7, hlds__pred_table__Module_12, hlds__pred_table__Name_13, hlds__pred_table__Arity_9, hlds__pred_table__PredIds_10);
#line 623 "pred_table.m"
          return;
        }
#line 622 "pred_table.m"
      }
#line 612 "pred_table.m"
    else
#line 612 "pred_table.m"
      {
#line 612 "pred_table.m"
        MR_String hlds__pred_table__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_8, (MR_Integer) 0)));

#line 617 "pred_table.m"
        if ((hlds__pred_table__IsFullyQualified_7 == (MR_Integer) 0))
#line 619 "pred_table.m"
          *hlds__pred_table__PredIds_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 617 "pred_table.m"
        else
#line 615 "pred_table.m"
          {
#line 615 "pred_table.m"
            hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__Name_11, hlds__pred_table__Arity_9, hlds__pred_table__PredIds_10);
#line 615 "pred_table.m"
            return;
          }
#line 612 "pred_table.m"
      }
#line 612 "pred_table.m"
  }
#line 139 "pred_table.m"
}

#line 135 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_sym_arity_5_p_0(
#line 135 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_6,
#line 135 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_7,
#line 135 "pred_table.m"
  MR_Word hlds__pred_table__SymName_8,
#line 135 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_9,
#line 135 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_10)
#line 135 "pred_table.m"
{
#line 594 "pred_table.m"
  {
#line 594 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 594 "pred_table.m"
    if (((MR_tag((MR_Word) hlds__pred_table__SymName_8)) == (MR_mktag((MR_Integer) 1))))
#line 604 "pred_table.m"
      {
#line 604 "pred_table.m"
        MR_Word hlds__pred_table__Module_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_8, (MR_Integer) 0)));
#line 604 "pred_table.m"
        MR_String hlds__pred_table__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_8, (MR_Integer) 1)));

#line 605 "pred_table.m"
        {
#line 605 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__IsFullyQualified_7, hlds__pred_table__Module_12, hlds__pred_table__Name_13, hlds__pred_table__Arity_9, hlds__pred_table__PredIds_10);
#line 605 "pred_table.m"
          return;
        }
#line 604 "pred_table.m"
      }
#line 594 "pred_table.m"
    else
#line 594 "pred_table.m"
      {
#line 594 "pred_table.m"
        MR_String hlds__pred_table__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_8, (MR_Integer) 0)));

#line 599 "pred_table.m"
        if ((hlds__pred_table__IsFullyQualified_7 == (MR_Integer) 0))
#line 601 "pred_table.m"
          *hlds__pred_table__PredIds_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 599 "pred_table.m"
        else
#line 597 "pred_table.m"
          {
#line 597 "pred_table.m"
            hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__Name_11, hlds__pred_table__Arity_9, hlds__pred_table__PredIds_10);
#line 597 "pred_table.m"
            return;
          }
#line 594 "pred_table.m"
      }
#line 594 "pred_table.m"
  }
#line 135 "pred_table.m"
}

#line 131 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(
#line 131 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_6,
#line 131 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_7,
#line 131 "pred_table.m"
  MR_Word hlds__pred_table__SymName_8,
#line 131 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_9,
#line 131 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_10)
#line 131 "pred_table.m"
{
#line 576 "pred_table.m"
  {
#line 576 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 576 "pred_table.m"
    if (((MR_tag((MR_Word) hlds__pred_table__SymName_8)) == (MR_mktag((MR_Integer) 1))))
#line 586 "pred_table.m"
      {
#line 586 "pred_table.m"
        MR_Word hlds__pred_table__Module_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_8, (MR_Integer) 0)));
#line 586 "pred_table.m"
        MR_String hlds__pred_table__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_8, (MR_Integer) 1)));
#line 586 "pred_table.m"
        MR_Word hlds__pred_table__PredPredIds_20;
#line 586 "pred_table.m"
        MR_Word hlds__pred_table__FuncPredIds_21;

#line 725 "pred_table.m"
        {
#line 725 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__IsFullyQualified_7, hlds__pred_table__Module_12, hlds__pred_table__Name_13, hlds__pred_table__Arity_9, &hlds__pred_table__PredPredIds_20);
        }
#line 727 "pred_table.m"
        {
#line 727 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__IsFullyQualified_7, hlds__pred_table__Module_12, hlds__pred_table__Name_13, hlds__pred_table__Arity_9, &hlds__pred_table__FuncPredIds_21);
        }
#line 729 "pred_table.m"
        {
#line 729 "pred_table.m"
          *hlds__pred_table__PredIds_10 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__FuncPredIds_21, hlds__pred_table__PredPredIds_20);
        }
#line 586 "pred_table.m"
      }
#line 576 "pred_table.m"
    else
#line 576 "pred_table.m"
      {
#line 576 "pred_table.m"
        MR_String hlds__pred_table__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_8, (MR_Integer) 0)));

#line 581 "pred_table.m"
        if ((hlds__pred_table__IsFullyQualified_7 == (MR_Integer) 0))
#line 583 "pred_table.m"
          *hlds__pred_table__PredIds_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 581 "pred_table.m"
        else
#line 696 "pred_table.m"
          {
#line 696 "pred_table.m"
            MR_Word hlds__pred_table__PredPredIds_27;
#line 696 "pred_table.m"
            MR_Word hlds__pred_table__FuncPredIds_28;

#line 697 "pred_table.m"
            {
#line 697 "pred_table.m"
              hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__Name_11, hlds__pred_table__Arity_9, &hlds__pred_table__PredPredIds_27);
            }
#line 699 "pred_table.m"
            {
#line 699 "pred_table.m"
              hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__Name_11, hlds__pred_table__Arity_9, &hlds__pred_table__FuncPredIds_28);
            }
#line 701 "pred_table.m"
            {
#line 701 "pred_table.m"
              *hlds__pred_table__PredIds_10 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__FuncPredIds_28, hlds__pred_table__PredPredIds_27);
            }
#line 696 "pred_table.m"
          }
#line 576 "pred_table.m"
      }
#line 576 "pred_table.m"
  }
#line 131 "pred_table.m"
}

#line 766 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_sym_4_p_0_1(
#line 766 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 766 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1)
#line 766 "pred_table.m"
{
#line 766 "pred_table.m"
  {
#line 766 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 766 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;

#line 766 "pred_table.m"
    {
#line 766 "pred_table.m"
      return hlds__pred_table__succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) hlds__pred_table__wrapper_arg_1));
    }
#line 766 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 766 "pred_table.m"
  }
#line 766 "pred_table.m"
}

#line 124 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_sym_4_p_0(
#line 124 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_5,
#line 124 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_6,
#line 124 "pred_table.m"
  MR_Word hlds__pred_table__SymName_7,
#line 124 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_8)
#line 124 "pred_table.m"
{
#line 557 "pred_table.m"
  {
#line 557 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 557 "pred_table.m"
    if (((MR_tag((MR_Word) hlds__pred_table__SymName_7)) == (MR_mktag((MR_Integer) 1))))
#line 566 "pred_table.m"
      {
#line 566 "pred_table.m"
        MR_Word hlds__pred_table__Module_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_7, (MR_Integer) 0)));
#line 566 "pred_table.m"
        MR_String hlds__pred_table__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_7, (MR_Integer) 1)));
#line 566 "pred_table.m"
        MR_Word hlds__pred_table__Func_MNA_Index_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 10)));
#line 684 "pred_table.m"
        MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 684 "pred_table.m"
        MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 684 "pred_table.m"
        MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 684 "pred_table.m"
        MR_Word hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 684 "pred_table.m"
        MR_Word hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 684 "pred_table.m"
        MR_Word hlds__pred_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 684 "pred_table.m"
        MR_Word hlds__pred_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 684 "pred_table.m"
        MR_Word hlds__pred_table__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 684 "pred_table.m"
        MR_Word hlds__pred_table__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 684 "pred_table.m"
        MR_Word hlds__pred_table__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 690 "pred_table.m"
        MR_Word hlds__pred_table__Arities_18;
#line 685 "pred_table.m"
        MR_Word hlds__pred_table__V_21_21;
#line 685 "pred_table.m"
        MR_Box hlds__pred_table__conv0_Arities_18;

#line 685 "pred_table.m"
        {
#line 685 "pred_table.m"
          hlds__pred_table__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 685 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_21_21, 0) = ((MR_Box) (hlds__pred_table__Module_10));
#line 685 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_21_21, 1) = ((MR_Box) (hlds__pred_table__Name_11));
#line 685 "pred_table.m"
        }
#line 685 "pred_table.m"
        {
#line 685 "pred_table.m"
          hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__Func_MNA_Index_17, ((MR_Box) (hlds__pred_table__V_21_21)), &hlds__pred_table__conv0_Arities_18);
        }
#line 685 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 685 "pred_table.m"
          {
#line 685 "pred_table.m"
            hlds__pred_table__Arities_18 = ((MR_Word) hlds__pred_table__conv0_Arities_18);
#line 685 "pred_table.m"
            hlds__pred_table__succeeded = MR_TRUE;
#line 685 "pred_table.m"
          }
#line 690 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 686 "pred_table.m"
          {
#line 686 "pred_table.m"
            MR_Word hlds__pred_table__PredIdLists_19;
#line 686 "pred_table.m"
            MR_Word hlds__pred_table__PredIds0_20;

#line 686 "pred_table.m"
            {
#line 686 "pred_table.m"
              mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__Arities_18, &hlds__pred_table__PredIdLists_19);
            }
#line 687 "pred_table.m"
            {
#line 687 "pred_table.m"
              mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__PredIdLists_19, &hlds__pred_table__PredIds0_20);
            }
#line 761 "pred_table.m"
            if ((hlds__pred_table__IsFullyQualified_6 == (MR_Integer) 0))
#line 764 "pred_table.m"
              {
#line 764 "pred_table.m"
                MR_Word hlds__pred_table__Preds_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 764 "pred_table.m"
                MR_Word hlds__pred_table__V_48_48;
#line 408 "pred_table.m"
                MR_Word hlds__pred_table__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 408 "pred_table.m"
                MR_Word hlds__pred_table__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 408 "pred_table.m"
                MR_Word hlds__pred_table__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 408 "pred_table.m"
                MR_Word hlds__pred_table__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 408 "pred_table.m"
                MR_Word hlds__pred_table__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 408 "pred_table.m"
                MR_Word hlds__pred_table__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 408 "pred_table.m"
                MR_Word hlds__pred_table__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 408 "pred_table.m"
                MR_Word hlds__pred_table__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 408 "pred_table.m"
                MR_Word hlds__pred_table__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 408 "pred_table.m"
                MR_Word hlds__pred_table__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 10)));

#line 766 "pred_table.m"
                {
#line 766 "pred_table.m"
                  hlds__pred_table__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 766 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_48_48, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
#line 766 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_48_48, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_func_sym_4_p_0_1));
#line 766 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 766 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_48_48, 3) = ((MR_Box) (hlds__pred_table__Preds_45));
#line 766 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_48_48, 4) = ((MR_Box) (hlds__pred_table__Module_10));
#line 766 "pred_table.m"
                }
#line 766 "pred_table.m"
                {
#line 766 "pred_table.m"
                  mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__V_48_48, hlds__pred_table__PredIds0_20, hlds__pred_table__PredIds_8);
#line 766 "pred_table.m"
                  return;
                }
#line 764 "pred_table.m"
              }
#line 761 "pred_table.m"
            else
#line 762 "pred_table.m"
              *hlds__pred_table__PredIds_8 = hlds__pred_table__PredIds0_20;
#line 686 "pred_table.m"
          }
#line 690 "pred_table.m"
        else
#line 691 "pred_table.m"
          *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 566 "pred_table.m"
      }
#line 557 "pred_table.m"
    else
#line 557 "pred_table.m"
      {
#line 557 "pred_table.m"
        MR_String hlds__pred_table__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_7, (MR_Integer) 0)));

#line 561 "pred_table.m"
        if ((hlds__pred_table__IsFullyQualified_6 == (MR_Integer) 0))
#line 563 "pred_table.m"
          *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 561 "pred_table.m"
        else
#line 644 "pred_table.m"
          {
#line 644 "pred_table.m"
            MR_Word hlds__pred_table__PredIdsPrime_66;
#line 642 "pred_table.m"
            MR_Word hlds__pred_table__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 642 "pred_table.m"
            MR_Word hlds__pred_table__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 642 "pred_table.m"
            MR_Word hlds__pred_table__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 642 "pred_table.m"
            MR_Word hlds__pred_table__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 642 "pred_table.m"
            MR_Word hlds__pred_table__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 642 "pred_table.m"
            MR_Word hlds__pred_table__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 642 "pred_table.m"
            MR_Word hlds__pred_table__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 642 "pred_table.m"
            MR_Word hlds__pred_table__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 642 "pred_table.m"
            MR_Word hlds__pred_table__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 642 "pred_table.m"
            MR_Word hlds__pred_table__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 642 "pred_table.m"
            MR_Word hlds__pred_table__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 10)));
#line 642 "pred_table.m"
            MR_Box hlds__pred_table__conv1_PredIdsPrime_66;

#line 642 "pred_table.m"
            {
#line 642 "pred_table.m"
              hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__V_67_67, ((MR_Box) (hlds__pred_table__Name_9)), &hlds__pred_table__conv1_PredIdsPrime_66);
            }
#line 642 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 642 "pred_table.m"
              {
#line 642 "pred_table.m"
                hlds__pred_table__PredIdsPrime_66 = ((MR_Word) hlds__pred_table__conv1_PredIdsPrime_66);
#line 642 "pred_table.m"
                hlds__pred_table__succeeded = MR_TRUE;
#line 642 "pred_table.m"
              }
#line 644 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 643 "pred_table.m"
              *hlds__pred_table__PredIds_8 = hlds__pred_table__PredIdsPrime_66;
#line 644 "pred_table.m"
            else
#line 645 "pred_table.m"
              *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 644 "pred_table.m"
          }
#line 557 "pred_table.m"
      }
#line 557 "pred_table.m"
  }
#line 124 "pred_table.m"
}

#line 766 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0_1(
#line 766 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 766 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1)
#line 766 "pred_table.m"
{
#line 766 "pred_table.m"
  {
#line 766 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 766 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;

#line 766 "pred_table.m"
    {
#line 766 "pred_table.m"
      return hlds__pred_table__succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) hlds__pred_table__wrapper_arg_1));
    }
#line 766 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 766 "pred_table.m"
  }
#line 766 "pred_table.m"
}

#line 121 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0(
#line 121 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_5,
#line 121 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_6,
#line 121 "pred_table.m"
  MR_Word hlds__pred_table__SymName_7,
#line 121 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_8)
#line 121 "pred_table.m"
{
#line 540 "pred_table.m"
  {
#line 540 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 540 "pred_table.m"
    if (((MR_tag((MR_Word) hlds__pred_table__SymName_7)) == (MR_mktag((MR_Integer) 1))))
#line 549 "pred_table.m"
      {
#line 549 "pred_table.m"
        MR_Word hlds__pred_table__Module_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_7, (MR_Integer) 0)));
#line 549 "pred_table.m"
        MR_String hlds__pred_table__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_7, (MR_Integer) 1)));
#line 549 "pred_table.m"
        MR_Word hlds__pred_table__Pred_MNA_Index_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 668 "pred_table.m"
        MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 668 "pred_table.m"
        MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 668 "pred_table.m"
        MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 668 "pred_table.m"
        MR_Word hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 668 "pred_table.m"
        MR_Word hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 668 "pred_table.m"
        MR_Word hlds__pred_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 668 "pred_table.m"
        MR_Word hlds__pred_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 668 "pred_table.m"
        MR_Word hlds__pred_table__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 668 "pred_table.m"
        MR_Word hlds__pred_table__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 668 "pred_table.m"
        MR_Word hlds__pred_table__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 10)));
#line 674 "pred_table.m"
        MR_Word hlds__pred_table__Arities_18;
#line 669 "pred_table.m"
        MR_Word hlds__pred_table__V_21_21;
#line 669 "pred_table.m"
        MR_Box hlds__pred_table__conv0_Arities_18;

#line 669 "pred_table.m"
        {
#line 669 "pred_table.m"
          hlds__pred_table__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 669 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_21_21, 0) = ((MR_Box) (hlds__pred_table__Module_10));
#line 669 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_21_21, 1) = ((MR_Box) (hlds__pred_table__Name_11));
#line 669 "pred_table.m"
        }
#line 669 "pred_table.m"
        {
#line 669 "pred_table.m"
          hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__Pred_MNA_Index_17, ((MR_Box) (hlds__pred_table__V_21_21)), &hlds__pred_table__conv0_Arities_18);
        }
#line 669 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 669 "pred_table.m"
          {
#line 669 "pred_table.m"
            hlds__pred_table__Arities_18 = ((MR_Word) hlds__pred_table__conv0_Arities_18);
#line 669 "pred_table.m"
            hlds__pred_table__succeeded = MR_TRUE;
#line 669 "pred_table.m"
          }
#line 674 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 670 "pred_table.m"
          {
#line 670 "pred_table.m"
            MR_Word hlds__pred_table__PredIdLists_19;
#line 670 "pred_table.m"
            MR_Word hlds__pred_table__PredIds0_20;

#line 670 "pred_table.m"
            {
#line 670 "pred_table.m"
              mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__Arities_18, &hlds__pred_table__PredIdLists_19);
            }
#line 671 "pred_table.m"
            {
#line 671 "pred_table.m"
              mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__PredIdLists_19, &hlds__pred_table__PredIds0_20);
            }
#line 761 "pred_table.m"
            if ((hlds__pred_table__IsFullyQualified_6 == (MR_Integer) 0))
#line 764 "pred_table.m"
              {
#line 764 "pred_table.m"
                MR_Word hlds__pred_table__Preds_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 764 "pred_table.m"
                MR_Word hlds__pred_table__V_48_48;
#line 408 "pred_table.m"
                MR_Word hlds__pred_table__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 408 "pred_table.m"
                MR_Word hlds__pred_table__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 408 "pred_table.m"
                MR_Word hlds__pred_table__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 408 "pred_table.m"
                MR_Word hlds__pred_table__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 408 "pred_table.m"
                MR_Word hlds__pred_table__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 408 "pred_table.m"
                MR_Word hlds__pred_table__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 408 "pred_table.m"
                MR_Word hlds__pred_table__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 408 "pred_table.m"
                MR_Word hlds__pred_table__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 408 "pred_table.m"
                MR_Word hlds__pred_table__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 408 "pred_table.m"
                MR_Word hlds__pred_table__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 10)));

#line 766 "pred_table.m"
                {
#line 766 "pred_table.m"
                  hlds__pred_table__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 766 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_48_48, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
#line 766 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_48_48, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0_1));
#line 766 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 766 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_48_48, 3) = ((MR_Box) (hlds__pred_table__Preds_45));
#line 766 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_48_48, 4) = ((MR_Box) (hlds__pred_table__Module_10));
#line 766 "pred_table.m"
                }
#line 766 "pred_table.m"
                {
#line 766 "pred_table.m"
                  mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__V_48_48, hlds__pred_table__PredIds0_20, hlds__pred_table__PredIds_8);
#line 766 "pred_table.m"
                  return;
                }
#line 764 "pred_table.m"
              }
#line 761 "pred_table.m"
            else
#line 762 "pred_table.m"
              *hlds__pred_table__PredIds_8 = hlds__pred_table__PredIds0_20;
#line 670 "pred_table.m"
          }
#line 674 "pred_table.m"
        else
#line 675 "pred_table.m"
          *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 549 "pred_table.m"
      }
#line 540 "pred_table.m"
    else
#line 540 "pred_table.m"
      {
#line 540 "pred_table.m"
        MR_String hlds__pred_table__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_7, (MR_Integer) 0)));

#line 544 "pred_table.m"
        if ((hlds__pred_table__IsFullyQualified_6 == (MR_Integer) 0))
#line 546 "pred_table.m"
          *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 544 "pred_table.m"
        else
#line 637 "pred_table.m"
          {
#line 637 "pred_table.m"
            MR_Word hlds__pred_table__PredIdsPrime_66;
#line 635 "pred_table.m"
            MR_Word hlds__pred_table__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 635 "pred_table.m"
            MR_Word hlds__pred_table__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 635 "pred_table.m"
            MR_Word hlds__pred_table__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 635 "pred_table.m"
            MR_Word hlds__pred_table__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 635 "pred_table.m"
            MR_Word hlds__pred_table__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 635 "pred_table.m"
            MR_Word hlds__pred_table__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 635 "pred_table.m"
            MR_Word hlds__pred_table__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 635 "pred_table.m"
            MR_Word hlds__pred_table__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 635 "pred_table.m"
            MR_Word hlds__pred_table__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 635 "pred_table.m"
            MR_Word hlds__pred_table__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 635 "pred_table.m"
            MR_Word hlds__pred_table__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 10)));
#line 635 "pred_table.m"
            MR_Box hlds__pred_table__conv1_PredIdsPrime_66;

#line 635 "pred_table.m"
            {
#line 635 "pred_table.m"
              hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__V_67_67, ((MR_Box) (hlds__pred_table__Name_9)), &hlds__pred_table__conv1_PredIdsPrime_66);
            }
#line 635 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 635 "pred_table.m"
              {
#line 635 "pred_table.m"
                hlds__pred_table__PredIdsPrime_66 = ((MR_Word) hlds__pred_table__conv1_PredIdsPrime_66);
#line 635 "pred_table.m"
                hlds__pred_table__succeeded = MR_TRUE;
#line 635 "pred_table.m"
              }
#line 637 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 636 "pred_table.m"
              *hlds__pred_table__PredIds_8 = hlds__pred_table__PredIdsPrime_66;
#line 637 "pred_table.m"
            else
#line 638 "pred_table.m"
              *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 637 "pred_table.m"
          }
#line 540 "pred_table.m"
      }
#line 540 "pred_table.m"
  }
#line 121 "pred_table.m"
}

#line 766 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_sym_4_p_0_1(
#line 766 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 766 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1)
#line 766 "pred_table.m"
{
#line 766 "pred_table.m"
  {
#line 766 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 766 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;

#line 766 "pred_table.m"
    {
#line 766 "pred_table.m"
      return hlds__pred_table__succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) hlds__pred_table__wrapper_arg_1));
    }
#line 766 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 766 "pred_table.m"
  }
#line 766 "pred_table.m"
}

#line 118 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_sym_4_p_0(
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
#line 523 "pred_table.m"
  {
#line 523 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 523 "pred_table.m"
    if (((MR_tag((MR_Word) hlds__pred_table__SymName_7)) == (MR_mktag((MR_Integer) 1))))
#line 532 "pred_table.m"
      {
#line 532 "pred_table.m"
        MR_Word hlds__pred_table__Module_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_7, (MR_Integer) 0)));
#line 532 "pred_table.m"
        MR_String hlds__pred_table__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_7, (MR_Integer) 1)));
#line 532 "pred_table.m"
        MR_Word hlds__pred_table__PredPredIds_17;
#line 532 "pred_table.m"
        MR_Word hlds__pred_table__FuncPredIds_18;
#line 532 "pred_table.m"
        MR_Word hlds__pred_table__Pred_MNA_Index_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 668 "pred_table.m"
        MR_Word hlds__pred_table__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 668 "pred_table.m"
        MR_Word hlds__pred_table__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 668 "pred_table.m"
        MR_Word hlds__pred_table__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 668 "pred_table.m"
        MR_Word hlds__pred_table__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 668 "pred_table.m"
        MR_Word hlds__pred_table__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 668 "pred_table.m"
        MR_Word hlds__pred_table__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 668 "pred_table.m"
        MR_Word hlds__pred_table__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 668 "pred_table.m"
        MR_Word hlds__pred_table__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 668 "pred_table.m"
        MR_Word hlds__pred_table__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 668 "pred_table.m"
        MR_Word hlds__pred_table__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 10)));
#line 674 "pred_table.m"
        MR_Word hlds__pred_table__Arities_26;
#line 669 "pred_table.m"
        MR_Word hlds__pred_table__V_29_29;
#line 669 "pred_table.m"
        MR_Box hlds__pred_table__conv0_Arities_26;

#line 669 "pred_table.m"
        {
#line 669 "pred_table.m"
          hlds__pred_table__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 669 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_29_29, 0) = ((MR_Box) (hlds__pred_table__Module_10));
#line 669 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_29_29, 1) = ((MR_Box) (hlds__pred_table__Name_11));
#line 669 "pred_table.m"
        }
#line 669 "pred_table.m"
        {
#line 669 "pred_table.m"
          hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__Pred_MNA_Index_25, ((MR_Box) (hlds__pred_table__V_29_29)), &hlds__pred_table__conv0_Arities_26);
        }
#line 669 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 669 "pred_table.m"
          {
#line 669 "pred_table.m"
            hlds__pred_table__Arities_26 = ((MR_Word) hlds__pred_table__conv0_Arities_26);
#line 669 "pred_table.m"
            hlds__pred_table__succeeded = MR_TRUE;
#line 669 "pred_table.m"
          }
#line 674 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 670 "pred_table.m"
          {
#line 670 "pred_table.m"
            MR_Word hlds__pred_table__PredIdLists_27;
#line 670 "pred_table.m"
            MR_Word hlds__pred_table__PredIds0_28;

#line 670 "pred_table.m"
            {
#line 670 "pred_table.m"
              mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__Arities_26, &hlds__pred_table__PredIdLists_27);
            }
#line 671 "pred_table.m"
            {
#line 671 "pred_table.m"
              mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__PredIdLists_27, &hlds__pred_table__PredIds0_28);
            }
#line 761 "pred_table.m"
            if ((hlds__pred_table__IsFullyQualified_6 == (MR_Integer) 0))
#line 764 "pred_table.m"
              {
#line 764 "pred_table.m"
                MR_Word hlds__pred_table__Preds_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 764 "pred_table.m"
                MR_Word hlds__pred_table__V_56_56;
#line 408 "pred_table.m"
                MR_Word hlds__pred_table__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 408 "pred_table.m"
                MR_Word hlds__pred_table__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 408 "pred_table.m"
                MR_Word hlds__pred_table__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 408 "pred_table.m"
                MR_Word hlds__pred_table__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 408 "pred_table.m"
                MR_Word hlds__pred_table__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 408 "pred_table.m"
                MR_Word hlds__pred_table__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 408 "pred_table.m"
                MR_Word hlds__pred_table__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 408 "pred_table.m"
                MR_Word hlds__pred_table__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 408 "pred_table.m"
                MR_Word hlds__pred_table__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 408 "pred_table.m"
                MR_Word hlds__pred_table__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 10)));

#line 766 "pred_table.m"
                {
#line 766 "pred_table.m"
                  hlds__pred_table__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 766 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_56_56, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
#line 766 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_56_56, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_sym_4_p_0_1));
#line 766 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 766 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_56_56, 3) = ((MR_Box) (hlds__pred_table__Preds_53));
#line 766 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__V_56_56, 4) = ((MR_Box) (hlds__pred_table__Module_10));
#line 766 "pred_table.m"
                }
#line 766 "pred_table.m"
                {
#line 766 "pred_table.m"
                  mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__V_56_56, hlds__pred_table__PredIds0_28, &hlds__pred_table__PredPredIds_17);
                }
#line 764 "pred_table.m"
              }
#line 761 "pred_table.m"
            else
#line 762 "pred_table.m"
              hlds__pred_table__PredPredIds_17 = hlds__pred_table__PredIds0_28;
#line 670 "pred_table.m"
          }
#line 674 "pred_table.m"
        else
#line 675 "pred_table.m"
          hlds__pred_table__PredPredIds_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 658 "pred_table.m"
        {
#line 658 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0(hlds__pred_table__PredicateTable_5, hlds__pred_table__IsFullyQualified_6, hlds__pred_table__Module_10, hlds__pred_table__Name_11, &hlds__pred_table__FuncPredIds_18);
        }
#line 660 "pred_table.m"
        {
#line 660 "pred_table.m"
          *hlds__pred_table__PredIds_8 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__FuncPredIds_18, hlds__pred_table__PredPredIds_17);
        }
#line 532 "pred_table.m"
      }
#line 523 "pred_table.m"
    else
#line 523 "pred_table.m"
      {
#line 523 "pred_table.m"
        MR_String hlds__pred_table__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_7, (MR_Integer) 0)));

#line 527 "pred_table.m"
        if ((hlds__pred_table__IsFullyQualified_6 == (MR_Integer) 0))
#line 529 "pred_table.m"
          *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 527 "pred_table.m"
        else
#line 526 "pred_table.m"
          {
#line 526 "pred_table.m"
            hlds__pred_table__predicate_table_lookup_name_3_p_0(hlds__pred_table__PredicateTable_5, hlds__pred_table__Name_9, hlds__pred_table__PredIds_8);
#line 526 "pred_table.m"
            return;
          }
#line 523 "pred_table.m"
      }
#line 523 "pred_table.m"
  }
#line 118 "pred_table.m"
}

#line 112 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_remove_predicate_3_p_0(
#line 112 "pred_table.m"
  MR_Word hlds__pred_table__PredId_4,
#line 112 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable0_5,
#line 112 "pred_table.m"
  MR_Word * hlds__pred_table__PredicateTable_6)
#line 112 "pred_table.m"
{
#line 438 "pred_table.m"
  {
#line 438 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 438 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_36_36 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 438 "pred_table.m"
    MR_Word hlds__pred_table__Preds0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 0)));
#line 438 "pred_table.m"
    MR_Word hlds__pred_table__NextPredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 1)));
#line 438 "pred_table.m"
    MR_Word hlds__pred_table__OldPredIds0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 2)));
#line 438 "pred_table.m"
    MR_Word hlds__pred_table__NewRevPredIds0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 3)));
#line 438 "pred_table.m"
    MR_Word hlds__pred_table__AccessibilityTable0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 4)));
#line 438 "pred_table.m"
    MR_Word hlds__pred_table__PredN0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 5)));
#line 438 "pred_table.m"
    MR_Word hlds__pred_table__PredNA0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 6)));
#line 438 "pred_table.m"
    MR_Word hlds__pred_table__PredMNA0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 7)));
#line 438 "pred_table.m"
    MR_Word hlds__pred_table__FuncN0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 8)));
#line 438 "pred_table.m"
    MR_Word hlds__pred_table__FuncNA0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 9)));
#line 438 "pred_table.m"
    MR_Word hlds__pred_table__FuncMNA0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 10)));
#line 438 "pred_table.m"
    MR_Word hlds__pred_table__OldPredIds_18;
#line 438 "pred_table.m"
    MR_Word hlds__pred_table__NewRevPredIds_19;
#line 438 "pred_table.m"
    MR_Word hlds__pred_table__PredInfo_20;
#line 438 "pred_table.m"
    MR_Word hlds__pred_table__Preds_21;
#line 438 "pred_table.m"
    MR_Word hlds__pred_table__AccessibilityTable_23;
#line 438 "pred_table.m"
    MR_Word hlds__pred_table__Module_24;
#line 438 "pred_table.m"
    MR_String hlds__pred_table__Name_25;
#line 438 "pred_table.m"
    MR_Integer hlds__pred_table__Arity_26;
#line 438 "pred_table.m"
    MR_Word hlds__pred_table__IsPredOrFunc_27;
#line 444 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredInfo_20;
#line 445 "pred_table.m"
    MR_Word hlds__pred_table__V_22_22;
#line 445 "pred_table.m"
    MR_Box hlds__pred_table__conv1_V_22_22;

#line 442 "pred_table.m"
    {
#line 442 "pred_table.m"
      mercury__list__delete_all_3_p_1(hlds__pred_table__TypeCtorInfo_36_36, hlds__pred_table__OldPredIds0_9, ((MR_Box) (hlds__pred_table__PredId_4)), &hlds__pred_table__OldPredIds_18);
    }
#line 443 "pred_table.m"
    {
#line 443 "pred_table.m"
      mercury__list__delete_all_3_p_1(hlds__pred_table__TypeCtorInfo_36_36, hlds__pred_table__NewRevPredIds0_10, ((MR_Box) (hlds__pred_table__PredId_4)), &hlds__pred_table__NewRevPredIds_19);
    }
#line 444 "pred_table.m"
    {
#line 444 "pred_table.m"
      mercury__map__det_remove_4_p_0(hlds__pred_table__TypeCtorInfo_36_36, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ((MR_Box) (hlds__pred_table__PredId_4)), &hlds__pred_table__conv0_PredInfo_20, hlds__pred_table__Preds0_7, &hlds__pred_table__Preds_21);
    }
#line 444 "pred_table.m"
    hlds__pred_table__PredInfo_20 = ((MR_Word) hlds__pred_table__conv0_PredInfo_20);
#line 445 "pred_table.m"
    {
#line 445 "pred_table.m"
      mercury__map__det_remove_4_p_0(hlds__pred_table__TypeCtorInfo_36_36, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0, ((MR_Box) (hlds__pred_table__PredId_4)), &hlds__pred_table__conv1_V_22_22, hlds__pred_table__AccessibilityTable0_11, &hlds__pred_table__AccessibilityTable_23);
    }
#line 445 "pred_table.m"
    hlds__pred_table__V_22_22 = ((MR_Word) hlds__pred_table__conv1_V_22_22);
#line 446 "pred_table.m"
    {
#line 446 "pred_table.m"
      hlds__pred_table__Module_24 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__pred_table__PredInfo_20);
    }
#line 447 "pred_table.m"
    {
#line 447 "pred_table.m"
      hlds__pred_table__Name_25 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__pred_table__PredInfo_20);
    }
#line 448 "pred_table.m"
    {
#line 448 "pred_table.m"
      hlds__pred_table__Arity_26 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__pred_table__PredInfo_20);
    }
#line 449 "pred_table.m"
    {
#line 449 "pred_table.m"
      hlds__pred_table__IsPredOrFunc_27 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__pred_table__PredInfo_20);
    }
#line 457 "pred_table.m"
    if ((hlds__pred_table__IsPredOrFunc_27 == (MR_Integer) 1))
#line 458 "pred_table.m"
      {
#line 458 "pred_table.m"
        MR_Integer hlds__pred_table__FuncArity_31 = (hlds__pred_table__Arity_26 - (MR_Integer) 1);
#line 458 "pred_table.m"
        MR_Word hlds__pred_table__FuncN_32;
#line 458 "pred_table.m"
        MR_Word hlds__pred_table__FuncNA_33;
#line 458 "pred_table.m"
        MR_Word hlds__pred_table__FuncMNA_34;

#line 460 "pred_table.m"
        {
#line 460 "pred_table.m"
          hlds__pred_table__predicate_table_remove_from_index_10_p_0(hlds__pred_table__Module_24, hlds__pred_table__Name_25, hlds__pred_table__FuncArity_31, hlds__pred_table__PredId_4, hlds__pred_table__FuncN0_15, &hlds__pred_table__FuncN_32, hlds__pred_table__FuncNA0_16, &hlds__pred_table__FuncNA_33, hlds__pred_table__FuncMNA0_17, &hlds__pred_table__FuncMNA_34);
        }
#line 463 "pred_table.m"
        {
#line 463 "pred_table.m"
          MR_Word base;
#line 463 "pred_table.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 463 "pred_table.m"
          *hlds__pred_table__PredicateTable_6 = base;
#line 463 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__Preds_21));
#line 463 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__NextPredId_8));
#line 463 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__OldPredIds_18));
#line 463 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__NewRevPredIds_19));
#line 463 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__AccessibilityTable_23));
#line 463 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__PredN0_12));
#line 463 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__PredNA0_13));
#line 463 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__PredMNA0_14));
#line 463 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__FuncN_32));
#line 463 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__FuncNA_33));
#line 463 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__pred_table__FuncMNA_34));
#line 463 "pred_table.m"
        }
#line 458 "pred_table.m"
      }
#line 457 "pred_table.m"
    else
#line 451 "pred_table.m"
      {
#line 451 "pred_table.m"
        MR_Word hlds__pred_table__PredN_28;
#line 451 "pred_table.m"
        MR_Word hlds__pred_table__PredNA_29;
#line 451 "pred_table.m"
        MR_Word hlds__pred_table__PredMNA_30;

#line 452 "pred_table.m"
        {
#line 452 "pred_table.m"
          hlds__pred_table__predicate_table_remove_from_index_10_p_0(hlds__pred_table__Module_24, hlds__pred_table__Name_25, hlds__pred_table__Arity_26, hlds__pred_table__PredId_4, hlds__pred_table__PredN0_12, &hlds__pred_table__PredN_28, hlds__pred_table__PredNA0_13, &hlds__pred_table__PredNA_29, hlds__pred_table__PredMNA0_14, &hlds__pred_table__PredMNA_30);
        }
#line 454 "pred_table.m"
        {
#line 454 "pred_table.m"
          MR_Word base;
#line 454 "pred_table.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 454 "pred_table.m"
          *hlds__pred_table__PredicateTable_6 = base;
#line 454 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__Preds_21));
#line 454 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__NextPredId_8));
#line 454 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__OldPredIds_18));
#line 454 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__NewRevPredIds_19));
#line 454 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__AccessibilityTable_23));
#line 454 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__PredN_28));
#line 454 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__PredNA_29));
#line 454 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__PredMNA_30));
#line 454 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__FuncN0_15));
#line 454 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__FuncNA0_16));
#line 454 "pred_table.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__pred_table__FuncMNA0_17));
#line 454 "pred_table.m"
        }
#line 451 "pred_table.m"
      }
#line 438 "pred_table.m"
  }
#line 112 "pred_table.m"
}

#line 110 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_remove_predid_3_p_0(
#line 110 "pred_table.m"
  MR_Word hlds__pred_table__PredId_4,
#line 110 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10,
#line 110 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_11)
#line 110 "pred_table.m"
{
#line 430 "pred_table.m"
  {
#line 430 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 430 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_56_56 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 430 "pred_table.m"
    MR_Word hlds__pred_table__OldPredIds0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 2)));
#line 430 "pred_table.m"
    MR_Word hlds__pred_table__NewRevPredIds0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 3)));
#line 430 "pred_table.m"
    MR_Word hlds__pred_table__OldPredIds_8;
#line 430 "pred_table.m"
    MR_Word hlds__pred_table__NewRevPredIds_9;
#line 430 "pred_table.m"
    MR_Word hlds__pred_table__V_34_34;
#line 430 "pred_table.m"
    MR_Word hlds__pred_table__V_35_35;
#line 430 "pred_table.m"
    MR_Word hlds__pred_table__V_38_38;
#line 430 "pred_table.m"
    MR_Word hlds__pred_table__V_39_39;
#line 430 "pred_table.m"
    MR_Word hlds__pred_table__V_40_40;
#line 430 "pred_table.m"
    MR_Word hlds__pred_table__V_41_41;
#line 430 "pred_table.m"
    MR_Word hlds__pred_table__V_42_42;
#line 430 "pred_table.m"
    MR_Word hlds__pred_table__V_43_43;
#line 430 "pred_table.m"
    MR_Word hlds__pred_table__V_44_44;
#line 431 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 0)));
#line 431 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 1)));
#line 431 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 4)));
#line 431 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 5)));
#line 431 "pred_table.m"
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 6)));
#line 431 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 7)));
#line 431 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 8)));
#line 431 "pred_table.m"
    MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 9)));
#line 431 "pred_table.m"
    MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 10)));
#line 435 "pred_table.m"
    MR_Word hlds__pred_table__V_36_36;
#line 435 "pred_table.m"
    MR_Word hlds__pred_table__V_37_37;

#line 433 "pred_table.m"
    {
#line 433 "pred_table.m"
      mercury__list__delete_all_3_p_1(hlds__pred_table__TypeCtorInfo_56_56, hlds__pred_table__OldPredIds0_6, ((MR_Box) (hlds__pred_table__PredId_4)), &hlds__pred_table__OldPredIds_8);
    }
#line 434 "pred_table.m"
    {
#line 434 "pred_table.m"
      mercury__list__delete_all_3_p_1(hlds__pred_table__TypeCtorInfo_56_56, hlds__pred_table__NewRevPredIds0_7, ((MR_Box) (hlds__pred_table__PredId_4)), &hlds__pred_table__NewRevPredIds_9);
    }
#line 435 "pred_table.m"
    hlds__pred_table__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 0)));
#line 435 "pred_table.m"
    hlds__pred_table__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 1)));
#line 435 "pred_table.m"
    hlds__pred_table__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 2)));
#line 435 "pred_table.m"
    hlds__pred_table__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 3)));
#line 435 "pred_table.m"
    hlds__pred_table__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 4)));
#line 435 "pred_table.m"
    hlds__pred_table__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 5)));
#line 435 "pred_table.m"
    hlds__pred_table__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 6)));
#line 435 "pred_table.m"
    hlds__pred_table__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 7)));
#line 435 "pred_table.m"
    hlds__pred_table__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 8)));
#line 435 "pred_table.m"
    hlds__pred_table__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 9)));
#line 435 "pred_table.m"
    hlds__pred_table__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 10)));
#line 436 "pred_table.m"
    {
#line 436 "pred_table.m"
      MR_Word base;
#line 436 "pred_table.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 436 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_PredicateTable_11 = base;
#line 436 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__V_34_34));
#line 436 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__V_35_35));
#line 436 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__OldPredIds_8));
#line 436 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__NewRevPredIds_9));
#line 436 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__V_38_38));
#line 436 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__V_39_39));
#line 436 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__V_40_40));
#line 436 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__V_41_41));
#line 436 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__V_42_42));
#line 436 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__V_43_43));
#line 436 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__pred_table__V_44_44));
#line 436 "pred_table.m"
    }
#line 430 "pred_table.m"
  }
#line 110 "pred_table.m"
}

#line 105 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_set_valid_predids_3_p_0(
#line 105 "pred_table.m"
  MR_Word hlds__pred_table__PredIds_4,
#line 105 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6,
#line 105 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_7)
#line 105 "pred_table.m"
{
#line 426 "pred_table.m"
  {
#line 426 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 426 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 0)));
#line 426 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 1)));
#line 426 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 4)));
#line 426 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 5)));
#line 426 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 6)));
#line 426 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 7)));
#line 426 "pred_table.m"
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 8)));
#line 426 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 9)));
#line 426 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 10)));
#line 427 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 2)));
#line 427 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 3)));

#line 428 "pred_table.m"
    {
#line 428 "pred_table.m"
      MR_Word base;
#line 428 "pred_table.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 428 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_PredicateTable_7 = base;
#line 428 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__V_11_11));
#line 428 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__V_12_12));
#line 428 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__PredIds_4));
#line 428 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 428 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__V_15_15));
#line 428 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__V_16_16));
#line 428 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__V_17_17));
#line 428 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__V_18_18));
#line 428 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__V_19_19));
#line 428 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__V_20_20));
#line 428 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__pred_table__V_21_21));
#line 428 "pred_table.m"
    }
#line 426 "pred_table.m"
  }
#line 105 "pred_table.m"
}

#line 97 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_get_valid_predids_3_p_0(
#line 97 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_4,
#line 97 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10,
#line 97 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_11)
#line 97 "pred_table.m"
{
#line 413 "pred_table.m"
  {
#line 413 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 413 "pred_table.m"
    MR_Word hlds__pred_table__OldPredIds_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 2)));
#line 413 "pred_table.m"
    MR_Word hlds__pred_table__NewRevPredIds_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 3)));
#line 413 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 0)));
#line 413 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 1)));
#line 413 "pred_table.m"
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 4)));
#line 413 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 5)));
#line 413 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 6)));
#line 413 "pred_table.m"
    MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 7)));
#line 413 "pred_table.m"
    MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 8)));
#line 413 "pred_table.m"
    MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 9)));
#line 413 "pred_table.m"
    MR_Word hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_10, (MR_Integer) 10)));
#line 413 "pred_table.m"
    MR_Word hlds__pred_table__V_36_36;
#line 413 "pred_table.m"
    MR_Word hlds__pred_table__V_37_37;
#line 413 "pred_table.m"
    MR_Word hlds__pred_table__V_40_40;
#line 413 "pred_table.m"
    MR_Word hlds__pred_table__V_41_41;
#line 413 "pred_table.m"
    MR_Word hlds__pred_table__V_42_42;
#line 413 "pred_table.m"
    MR_Word hlds__pred_table__V_43_43;
#line 413 "pred_table.m"
    MR_Word hlds__pred_table__V_44_44;
#line 413 "pred_table.m"
    MR_Word hlds__pred_table__V_45_45;
#line 413 "pred_table.m"
    MR_Word hlds__pred_table__V_46_46;

#line 419 "pred_table.m"
    if ((hlds__pred_table__NewRevPredIds_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 418 "pred_table.m"
      *hlds__pred_table__PredIds_4 = hlds__pred_table__OldPredIds_6;
#line 419 "pred_table.m"
    else
#line 420 "pred_table.m"
      {
#line 420 "pred_table.m"
        MR_Word hlds__pred_table__TypeCtorInfo_58_58 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 420 "pred_table.m"
        MR_Word hlds__pred_table__V_12_12;

#line 421 "pred_table.m"
        {
#line 421 "pred_table.m"
          hlds__pred_table__V_12_12 = mercury__list__reverse_1_f_0(hlds__pred_table__TypeCtorInfo_58_58, hlds__pred_table__NewRevPredIds_7);
        }
#line 421 "pred_table.m"
        {
#line 421 "pred_table.m"
          *hlds__pred_table__PredIds_4 = mercury__list__f_43_43_2_f_0(hlds__pred_table__TypeCtorInfo_58_58, hlds__pred_table__OldPredIds_6, hlds__pred_table__V_12_12);
        }
#line 420 "pred_table.m"
      }
#line 423 "pred_table.m"
    hlds__pred_table__V_36_36 = hlds__pred_table__V_16_16;
#line 423 "pred_table.m"
    hlds__pred_table__V_37_37 = hlds__pred_table__V_17_17;
#line 423 "pred_table.m"
    hlds__pred_table__V_40_40 = hlds__pred_table__V_19_19;
#line 423 "pred_table.m"
    hlds__pred_table__V_41_41 = hlds__pred_table__V_20_20;
#line 423 "pred_table.m"
    hlds__pred_table__V_42_42 = hlds__pred_table__V_21_21;
#line 423 "pred_table.m"
    hlds__pred_table__V_43_43 = hlds__pred_table__V_22_22;
#line 423 "pred_table.m"
    hlds__pred_table__V_44_44 = hlds__pred_table__V_23_23;
#line 423 "pred_table.m"
    hlds__pred_table__V_45_45 = hlds__pred_table__V_24_24;
#line 423 "pred_table.m"
    hlds__pred_table__V_46_46 = hlds__pred_table__V_25_25;
#line 424 "pred_table.m"
    {
#line 424 "pred_table.m"
      MR_Word base;
#line 424 "pred_table.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 424 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_PredicateTable_11 = base;
#line 424 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__V_36_36));
#line 424 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__V_37_37));
#line 424 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (*hlds__pred_table__PredIds_4));
#line 424 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 424 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__V_40_40));
#line 424 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__V_41_41));
#line 424 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__V_42_42));
#line 424 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__V_43_43));
#line 424 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__V_44_44));
#line 424 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__V_45_45));
#line 424 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__pred_table__V_46_46));
#line 424 "pred_table.m"
    }
#line 413 "pred_table.m"
  }
#line 97 "pred_table.m"
}

#line 86 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_set_preds_3_p_0(
#line 86 "pred_table.m"
  MR_Word hlds__pred_table__Preds_4,
#line 86 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6,
#line 86 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_7)
#line 86 "pred_table.m"
{
#line 411 "pred_table.m"
  {
#line 411 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 411 "pred_table.m"
    MR_Word hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 1)));
#line 411 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 2)));
#line 411 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 3)));
#line 411 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 4)));
#line 411 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 5)));
#line 411 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 6)));
#line 411 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 7)));
#line 411 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 8)));
#line 411 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 9)));
#line 411 "pred_table.m"
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 10)));
#line 411 "pred_table.m"
    MR_Word hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 0)));

#line 411 "pred_table.m"
    {
#line 411 "pred_table.m"
      MR_Word base;
#line 411 "pred_table.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 411 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_PredicateTable_7 = base;
#line 411 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__Preds_4));
#line 411 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__V_10_10));
#line 411 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__V_11_11));
#line 411 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__V_12_12));
#line 411 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__V_13_13));
#line 411 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__V_14_14));
#line 411 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__V_15_15));
#line 411 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__V_16_16));
#line 411 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__V_17_17));
#line 411 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__V_18_18));
#line 411 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__pred_table__V_19_19));
#line 411 "pred_table.m"
    }
#line 411 "pred_table.m"
  }
#line 86 "pred_table.m"
}

#line 841 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_restrict_4_p_0_1(
#line 841 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 841 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 841 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 841 "pred_table.m"
  MR_Box * hlds__pred_table__wrapper_arg_3)
#line 841 "pred_table.m"
{
#line 841 "pred_table.m"
  {
#line 841 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;
#line 841 "pred_table.m"
    MR_Word hlds__pred_table__conv0_STATE_VARIABLE_PredicateTable_20;

#line 841 "pred_table.m"
    {
#line 841 "pred_table.m"
      hlds__pred_table__reinsert_for_restrict_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 5))), ((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2), &hlds__pred_table__conv0_STATE_VARIABLE_PredicateTable_20);
    }
#line 841 "pred_table.m"
    *hlds__pred_table__wrapper_arg_3 = ((MR_Box) (hlds__pred_table__conv0_STATE_VARIABLE_PredicateTable_20));
#line 841 "pred_table.m"
  }
#line 841 "pred_table.m"
}

#line 78 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_restrict_4_p_0(
#line 78 "pred_table.m"
  MR_Word hlds__pred_table__PartialQualInfo_5,
#line 78 "pred_table.m"
  MR_Word hlds__pred_table__PredIds_6,
#line 78 "pred_table.m"
  MR_Word hlds__pred_table__OrigPredicateTable_7,
#line 78 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_13)
#line 78 "pred_table.m"
{
#line 836 "pred_table.m"
  {
#line 836 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 836 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_56_56;
#line 836 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_26_81 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 836 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_29_84;
#line 836 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_30_85;
#line 836 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_31_86;
#line 836 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_32_87;
#line 836 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_33_88;
#line 836 "pred_table.m"
    MR_Word hlds__pred_table__Preds_9;
#line 836 "pred_table.m"
    MR_Word hlds__pred_table__AccessibilityTable_10;
#line 836 "pred_table.m"
    MR_Word hlds__pred_table__NewPredIds_11;
#line 836 "pred_table.m"
    MR_Word hlds__pred_table__SortedNewPredIds_12;
#line 836 "pred_table.m"
    MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_14_14;
#line 836 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15;
#line 836 "pred_table.m"
    MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_16_16;
#line 836 "pred_table.m"
    MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_17_17;
#line 836 "pred_table.m"
    MR_Word hlds__pred_table__V_31_31;
#line 836 "pred_table.m"
    MR_Word hlds__pred_table__V_32_32;
#line 836 "pred_table.m"
    MR_Word hlds__pred_table__V_35_35;
#line 836 "pred_table.m"
    MR_Word hlds__pred_table__V_36_36;
#line 836 "pred_table.m"
    MR_Word hlds__pred_table__V_37_37;
#line 836 "pred_table.m"
    MR_Word hlds__pred_table__V_38_38;
#line 836 "pred_table.m"
    MR_Word hlds__pred_table__V_39_39;
#line 836 "pred_table.m"
    MR_Word hlds__pred_table__V_40_40;
#line 836 "pred_table.m"
    MR_Word hlds__pred_table__V_41_41;
#line 836 "pred_table.m"
    MR_Word hlds__pred_table__NextPredId_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 1)));
#line 836 "pred_table.m"
    MR_Word hlds__pred_table__V_61_61;
#line 836 "pred_table.m"
    MR_Word hlds__pred_table__V_64_64;
#line 836 "pred_table.m"
    MR_Word hlds__pred_table__V_65_65;
#line 836 "pred_table.m"
    MR_Word hlds__pred_table__V_66_66;
#line 836 "pred_table.m"
    MR_Word hlds__pred_table__V_67_67;
#line 836 "pred_table.m"
    MR_Word hlds__pred_table__V_68_68;
#line 836 "pred_table.m"
    MR_Word hlds__pred_table__V_69_69;
#line 836 "pred_table.m"
    MR_Word hlds__pred_table__V_70_70;
#line 878 "pred_table.m"
    MR_Word hlds__pred_table__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 0)));
#line 878 "pred_table.m"
    MR_Word hlds__pred_table__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 2)));
#line 878 "pred_table.m"
    MR_Word hlds__pred_table__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 3)));
#line 878 "pred_table.m"
    MR_Word hlds__pred_table__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 4)));
#line 878 "pred_table.m"
    MR_Word hlds__pred_table__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 5)));
#line 878 "pred_table.m"
    MR_Word hlds__pred_table__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 6)));
#line 878 "pred_table.m"
    MR_Word hlds__pred_table__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 7)));
#line 878 "pred_table.m"
    MR_Word hlds__pred_table__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 8)));
#line 878 "pred_table.m"
    MR_Word hlds__pred_table__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 9)));
#line 878 "pred_table.m"
    MR_Word hlds__pred_table__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 10)));
#line 839 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21;
#line 839 "pred_table.m"
    MR_Word hlds__pred_table__V_22_22;
#line 839 "pred_table.m"
    MR_Word hlds__pred_table__V_23_23;
#line 839 "pred_table.m"
    MR_Word hlds__pred_table__V_24_24;
#line 839 "pred_table.m"
    MR_Word hlds__pred_table__V_25_25;
#line 839 "pred_table.m"
    MR_Word hlds__pred_table__V_26_26;
#line 839 "pred_table.m"
    MR_Word hlds__pred_table__V_27_27;
#line 839 "pred_table.m"
    MR_Word hlds__pred_table__V_28_28;
#line 839 "pred_table.m"
    MR_Word hlds__pred_table__V_29_29;
#line 839 "pred_table.m"
    MR_Word hlds__pred_table__V_30_30;
#line 840 "pred_table.m"
    MR_Box hlds__pred_table__conv1_STATE_VARIABLE_PredicateTable_16_16;
#line 845 "pred_table.m"
    MR_Word hlds__pred_table__V_33_33;
#line 845 "pred_table.m"
    MR_Word hlds__pred_table__V_34_34;

#line 879 "pred_table.m"
    {
#line 879 "pred_table.m"
      hlds__pred_table__V_61_61 = mercury__map__init_0_f_0(hlds__pred_table__TypeCtorInfo_26_81, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0);
    }
#line 879 "pred_table.m"
    {
#line 879 "pred_table.m"
      hlds__pred_table__V_64_64 = mercury__map__init_0_f_0(hlds__pred_table__TypeCtorInfo_26_81, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0);
    }
#line 9500 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_29_84 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 9502 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_30_85 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
#line 880 "pred_table.m"
    {
#line 880 "pred_table.m"
      hlds__pred_table__V_65_65 = mercury__map__init_0_f_0(hlds__pred_table__TypeCtorInfo_29_84, hlds__pred_table__TypeInfo_30_85);
    }
#line 9509 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_31_86 = (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0;
#line 880 "pred_table.m"
    {
#line 880 "pred_table.m"
      hlds__pred_table__V_66_66 = mercury__map__init_0_f_0(hlds__pred_table__TypeCtorInfo_31_86, hlds__pred_table__TypeInfo_30_85);
    }
#line 9516 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_32_87 = (MR_Word) &hlds__pred_table_scalar_common_2[0];
#line 9518 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_33_88 = (MR_Word) &hlds__pred_table_scalar_common_2[1];
#line 880 "pred_table.m"
    {
#line 880 "pred_table.m"
      hlds__pred_table__V_67_67 = mercury__map__init_0_f_0(hlds__pred_table__TypeInfo_32_87, hlds__pred_table__TypeInfo_33_88);
    }
#line 880 "pred_table.m"
    {
#line 880 "pred_table.m"
      hlds__pred_table__V_68_68 = mercury__map__init_0_f_0(hlds__pred_table__TypeCtorInfo_29_84, hlds__pred_table__TypeInfo_30_85);
    }
#line 880 "pred_table.m"
    {
#line 880 "pred_table.m"
      hlds__pred_table__V_69_69 = mercury__map__init_0_f_0(hlds__pred_table__TypeCtorInfo_31_86, hlds__pred_table__TypeInfo_30_85);
    }
#line 880 "pred_table.m"
    {
#line 880 "pred_table.m"
      hlds__pred_table__V_70_70 = mercury__map__init_0_f_0(hlds__pred_table__TypeInfo_32_87, hlds__pred_table__TypeInfo_33_88);
    }
#line 879 "pred_table.m"
    {
#line 879 "pred_table.m"
      hlds__pred_table__STATE_VARIABLE_PredicateTable_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 879 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_14_14, 0) = ((MR_Box) (hlds__pred_table__V_61_61));
#line 879 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_14_14, 1) = ((MR_Box) (hlds__pred_table__NextPredId_60));
#line 879 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_14_14, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 879 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_14_14, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 879 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_14_14, 4) = ((MR_Box) (hlds__pred_table__V_64_64));
#line 879 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_14_14, 5) = ((MR_Box) (hlds__pred_table__V_65_65));
#line 879 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_14_14, 6) = ((MR_Box) (hlds__pred_table__V_66_66));
#line 879 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_14_14, 7) = ((MR_Box) (hlds__pred_table__V_67_67));
#line 879 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_14_14, 8) = ((MR_Box) (hlds__pred_table__V_68_68));
#line 879 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_14_14, 9) = ((MR_Box) (hlds__pred_table__V_69_69));
#line 879 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_14_14, 10) = ((MR_Box) (hlds__pred_table__V_70_70));
#line 879 "pred_table.m"
    }
#line 838 "pred_table.m"
    {
#line 838 "pred_table.m"
      hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__pred_table__OrigPredicateTable_7, &hlds__pred_table__Preds_9);
    }
#line 839 "pred_table.m"
    hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 0)));
#line 839 "pred_table.m"
    hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 1)));
#line 839 "pred_table.m"
    hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 2)));
#line 839 "pred_table.m"
    hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 3)));
#line 839 "pred_table.m"
    hlds__pred_table__AccessibilityTable_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 4)));
#line 839 "pred_table.m"
    hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 5)));
#line 839 "pred_table.m"
    hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 6)));
#line 839 "pred_table.m"
    hlds__pred_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 7)));
#line 839 "pred_table.m"
    hlds__pred_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 8)));
#line 839 "pred_table.m"
    hlds__pred_table__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 9)));
#line 839 "pred_table.m"
    hlds__pred_table__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 10)));
#line 841 "pred_table.m"
    {
#line 841 "pred_table.m"
      hlds__pred_table__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 841 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_15_15, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_4[0]));
#line 841 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_15_15, 1) = ((MR_Box) (hlds__pred_table__predicate_table_restrict_4_p_0_1));
#line 841 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 841 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_15_15, 3) = ((MR_Box) (hlds__pred_table__PartialQualInfo_5));
#line 841 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_15_15, 4) = ((MR_Box) (hlds__pred_table__Preds_9));
#line 841 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_15_15, 5) = ((MR_Box) (hlds__pred_table__AccessibilityTable_10));
#line 841 "pred_table.m"
    }
#line 9613 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_56_56 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 840 "pred_table.m"
    {
#line 840 "pred_table.m"
      mercury__list__foldl_4_p_0(hlds__pred_table__TypeCtorInfo_56_56, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_predicate_table_0, hlds__pred_table__V_15_15, hlds__pred_table__PredIds_6, ((MR_Box) (hlds__pred_table__STATE_VARIABLE_PredicateTable_14_14)), &hlds__pred_table__conv1_STATE_VARIABLE_PredicateTable_16_16);
    }
#line 840 "pred_table.m"
    hlds__pred_table__STATE_VARIABLE_PredicateTable_16_16 = ((MR_Word) hlds__pred_table__conv1_STATE_VARIABLE_PredicateTable_16_16);
#line 843 "pred_table.m"
    {
#line 843 "pred_table.m"
      hlds__pred_table__predicate_table_get_valid_predids_3_p_0(&hlds__pred_table__NewPredIds_11, hlds__pred_table__STATE_VARIABLE_PredicateTable_16_16, &hlds__pred_table__STATE_VARIABLE_PredicateTable_17_17);
    }
#line 844 "pred_table.m"
    {
#line 844 "pred_table.m"
      mercury__list__sort_2_p_0(hlds__pred_table__TypeCtorInfo_56_56, hlds__pred_table__NewPredIds_11, &hlds__pred_table__SortedNewPredIds_12);
    }
#line 845 "pred_table.m"
    hlds__pred_table__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_17_17, (MR_Integer) 0)));
#line 845 "pred_table.m"
    hlds__pred_table__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_17_17, (MR_Integer) 1)));
#line 845 "pred_table.m"
    hlds__pred_table__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_17_17, (MR_Integer) 2)));
#line 845 "pred_table.m"
    hlds__pred_table__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_17_17, (MR_Integer) 3)));
#line 845 "pred_table.m"
    hlds__pred_table__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_17_17, (MR_Integer) 4)));
#line 845 "pred_table.m"
    hlds__pred_table__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_17_17, (MR_Integer) 5)));
#line 845 "pred_table.m"
    hlds__pred_table__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_17_17, (MR_Integer) 6)));
#line 845 "pred_table.m"
    hlds__pred_table__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_17_17, (MR_Integer) 7)));
#line 845 "pred_table.m"
    hlds__pred_table__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_17_17, (MR_Integer) 8)));
#line 845 "pred_table.m"
    hlds__pred_table__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_17_17, (MR_Integer) 9)));
#line 845 "pred_table.m"
    hlds__pred_table__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_17_17, (MR_Integer) 10)));
#line 846 "pred_table.m"
    {
#line 846 "pred_table.m"
      MR_Word base;
#line 846 "pred_table.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 846 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_PredicateTable_13 = base;
#line 846 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__V_31_31));
#line 846 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__V_32_32));
#line 846 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__SortedNewPredIds_12));
#line 846 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 846 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__V_35_35));
#line 846 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__V_36_36));
#line 846 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__V_37_37));
#line 846 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__V_38_38));
#line 846 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__V_39_39));
#line 846 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__V_40_40));
#line 846 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__pred_table__V_41_41));
#line 846 "pred_table.m"
    }
#line 836 "pred_table.m"
  }
#line 78 "pred_table.m"
}

#line 71 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_get_preds_2_p_0(
#line 71 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_3,
#line 71 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__2_2)
#line 71 "pred_table.m"
{
#line 408 "pred_table.m"
  {
#line 408 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 408 "pred_table.m"
    MR_Word hlds__pred_table__V_4_4;
#line 408 "pred_table.m"
    MR_Word hlds__pred_table__V_5_5;
#line 408 "pred_table.m"
    MR_Word hlds__pred_table__V_6_6;
#line 408 "pred_table.m"
    MR_Word hlds__pred_table__V_7_7;
#line 408 "pred_table.m"
    MR_Word hlds__pred_table__V_8_8;
#line 408 "pred_table.m"
    MR_Word hlds__pred_table__V_9_9;
#line 408 "pred_table.m"
    MR_Word hlds__pred_table__V_10_10;
#line 408 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11;
#line 408 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12;
#line 408 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13;

#line 408 "pred_table.m"
    *hlds__pred_table__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 0)));
#line 408 "pred_table.m"
    hlds__pred_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 1)));
#line 408 "pred_table.m"
    hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 2)));
#line 408 "pred_table.m"
    hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 3)));
#line 408 "pred_table.m"
    hlds__pred_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 4)));
#line 408 "pred_table.m"
    hlds__pred_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 5)));
#line 408 "pred_table.m"
    hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 6)));
#line 408 "pred_table.m"
    hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 7)));
#line 408 "pred_table.m"
    hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 8)));
#line 408 "pred_table.m"
    hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 9)));
#line 408 "pred_table.m"
    hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 10)));
#line 408 "pred_table.m"
  }
#line 71 "pred_table.m"
}

#line 66 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_optimize_2_p_0(
#line 66 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable0_3,
#line 66 "pred_table.m"
  MR_Word * hlds__pred_table__PredicateTable_4)
#line 66 "pred_table.m"
{
#line 392 "pred_table.m"
  {
#line 392 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 392 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 392 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_23_23 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
#line 392 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_24_24;
#line 392 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_25_25;
#line 392 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_26_26;
#line 392 "pred_table.m"
    MR_Word hlds__pred_table__Preds_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 0)));
#line 392 "pred_table.m"
    MR_Word hlds__pred_table__NextPredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 1)));
#line 392 "pred_table.m"
    MR_Word hlds__pred_table__OldPredIds_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 2)));
#line 392 "pred_table.m"
    MR_Word hlds__pred_table__NewRevPredIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 3)));
#line 392 "pred_table.m"
    MR_Word hlds__pred_table__Accessibility_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 4)));
#line 392 "pred_table.m"
    MR_Word hlds__pred_table__Pred_N_Index0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 5)));
#line 392 "pred_table.m"
    MR_Word hlds__pred_table__Pred_NA_Index0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 6)));
#line 392 "pred_table.m"
    MR_Word hlds__pred_table__Pred_MNA_Index0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 7)));
#line 392 "pred_table.m"
    MR_Word hlds__pred_table__Func_N_Index0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 8)));
#line 392 "pred_table.m"
    MR_Word hlds__pred_table__Func_NA_Index0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 9)));
#line 392 "pred_table.m"
    MR_Word hlds__pred_table__Func_MNA_Index0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 10)));
#line 392 "pred_table.m"
    MR_Word hlds__pred_table__Pred_N_Index_16;
#line 392 "pred_table.m"
    MR_Word hlds__pred_table__Pred_NA_Index_17;
#line 392 "pred_table.m"
    MR_Word hlds__pred_table__Pred_MNA_Index_18;
#line 392 "pred_table.m"
    MR_Word hlds__pred_table__Func_N_Index_19;
#line 392 "pred_table.m"
    MR_Word hlds__pred_table__Func_NA_Index_20;
#line 392 "pred_table.m"
    MR_Word hlds__pred_table__Func_MNA_Index_21;

#line 397 "pred_table.m"
    {
#line 397 "pred_table.m"
      mercury__map__optimize_2_p_0(hlds__pred_table__TypeCtorInfo_22_22, hlds__pred_table__TypeInfo_23_23, hlds__pred_table__Pred_N_Index0_10, &hlds__pred_table__Pred_N_Index_16);
    }
#line 9815 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_24_24 = (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0;
#line 398 "pred_table.m"
    {
#line 398 "pred_table.m"
      mercury__map__optimize_2_p_0(hlds__pred_table__TypeCtorInfo_24_24, hlds__pred_table__TypeInfo_23_23, hlds__pred_table__Pred_NA_Index0_11, &hlds__pred_table__Pred_NA_Index_17);
    }
#line 9822 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_25_25 = (MR_Word) &hlds__pred_table_scalar_common_2[0];
#line 9824 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_26_26 = (MR_Word) &hlds__pred_table_scalar_common_2[1];
#line 399 "pred_table.m"
    {
#line 399 "pred_table.m"
      mercury__map__optimize_2_p_0(hlds__pred_table__TypeInfo_25_25, hlds__pred_table__TypeInfo_26_26, hlds__pred_table__Pred_MNA_Index0_12, &hlds__pred_table__Pred_MNA_Index_18);
    }
#line 400 "pred_table.m"
    {
#line 400 "pred_table.m"
      mercury__map__optimize_2_p_0(hlds__pred_table__TypeCtorInfo_22_22, hlds__pred_table__TypeInfo_23_23, hlds__pred_table__Func_N_Index0_13, &hlds__pred_table__Func_N_Index_19);
    }
#line 401 "pred_table.m"
    {
#line 401 "pred_table.m"
      mercury__map__optimize_2_p_0(hlds__pred_table__TypeCtorInfo_24_24, hlds__pred_table__TypeInfo_23_23, hlds__pred_table__Func_NA_Index0_14, &hlds__pred_table__Func_NA_Index_20);
    }
#line 402 "pred_table.m"
    {
#line 402 "pred_table.m"
      mercury__map__optimize_2_p_0(hlds__pred_table__TypeInfo_25_25, hlds__pred_table__TypeInfo_26_26, hlds__pred_table__Func_MNA_Index0_15, &hlds__pred_table__Func_MNA_Index_21);
    }
#line 403 "pred_table.m"
    {
#line 403 "pred_table.m"
      MR_Word base;
#line 403 "pred_table.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 403 "pred_table.m"
      *hlds__pred_table__PredicateTable_4 = base;
#line 403 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__Preds_5));
#line 403 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__NextPredId_6));
#line 403 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__OldPredIds_7));
#line 403 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__NewRevPredIds_8));
#line 403 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__Accessibility_9));
#line 403 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__Pred_N_Index_16));
#line 403 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__Pred_NA_Index_17));
#line 403 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__Pred_MNA_Index_18));
#line 403 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__Func_N_Index_19));
#line 403 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__Func_NA_Index_20));
#line 403 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__pred_table__Func_MNA_Index_21));
#line 403 "pred_table.m"
    }
#line 392 "pred_table.m"
  }
#line 66 "pred_table.m"
}

#line 62 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_init_1_p_0(
#line 62 "pred_table.m"
  MR_Word * hlds__pred_table__PredicateTable_2)
#line 62 "pred_table.m"
{
#line 375 "pred_table.m"
  {
#line 375 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 375 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_14_14 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 375 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_17_17;
#line 375 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_18_18;
#line 375 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_19_19;
#line 375 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_20_20;
#line 375 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_21_21;
#line 375 "pred_table.m"
    MR_Word hlds__pred_table__Preds_3;
#line 375 "pred_table.m"
    MR_Word hlds__pred_table__NextPredId_4;
#line 375 "pred_table.m"
    MR_Word hlds__pred_table__AccessibilityTable_7;
#line 375 "pred_table.m"
    MR_Word hlds__pred_table__Pred_N_Index_8;
#line 375 "pred_table.m"
    MR_Word hlds__pred_table__Pred_NA_Index_9;
#line 375 "pred_table.m"
    MR_Word hlds__pred_table__Pred_MNA_Index_10;
#line 375 "pred_table.m"
    MR_Word hlds__pred_table__Func_N_Index_11;
#line 375 "pred_table.m"
    MR_Word hlds__pred_table__Func_NA_Index_12;
#line 375 "pred_table.m"
    MR_Word hlds__pred_table__Func_MNA_Index_13;

#line 376 "pred_table.m"
    {
#line 376 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeCtorInfo_14_14, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, &hlds__pred_table__Preds_3);
    }
#line 377 "pred_table.m"
    {
#line 377 "pred_table.m"
      hlds__pred_table__NextPredId_4 = hlds__hlds_pred__initial_pred_id_0_f_0();
    }
#line 380 "pred_table.m"
    {
#line 380 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeCtorInfo_14_14, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0, &hlds__pred_table__AccessibilityTable_7);
    }
#line 9940 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 9942 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_18_18 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
#line 381 "pred_table.m"
    {
#line 381 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeCtorInfo_17_17, hlds__pred_table__TypeInfo_18_18, &hlds__pred_table__Pred_N_Index_8);
    }
#line 9949 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_19_19 = (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0;
#line 382 "pred_table.m"
    {
#line 382 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeCtorInfo_19_19, hlds__pred_table__TypeInfo_18_18, &hlds__pred_table__Pred_NA_Index_9);
    }
#line 9956 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_20_20 = (MR_Word) &hlds__pred_table_scalar_common_2[0];
#line 9958 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_21_21 = (MR_Word) &hlds__pred_table_scalar_common_2[1];
#line 383 "pred_table.m"
    {
#line 383 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeInfo_20_20, hlds__pred_table__TypeInfo_21_21, &hlds__pred_table__Pred_MNA_Index_10);
    }
#line 384 "pred_table.m"
    {
#line 384 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeCtorInfo_17_17, hlds__pred_table__TypeInfo_18_18, &hlds__pred_table__Func_N_Index_11);
    }
#line 385 "pred_table.m"
    {
#line 385 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeCtorInfo_19_19, hlds__pred_table__TypeInfo_18_18, &hlds__pred_table__Func_NA_Index_12);
    }
#line 386 "pred_table.m"
    {
#line 386 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeInfo_20_20, hlds__pred_table__TypeInfo_21_21, &hlds__pred_table__Func_MNA_Index_13);
    }
#line 387 "pred_table.m"
    {
#line 387 "pred_table.m"
      MR_Word base;
#line 387 "pred_table.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 387 "pred_table.m"
      *hlds__pred_table__PredicateTable_2 = base;
#line 387 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__Preds_3));
#line 387 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__NextPredId_4));
#line 387 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 387 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 387 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__AccessibilityTable_7));
#line 387 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__Pred_N_Index_8));
#line 387 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__Pred_NA_Index_9));
#line 387 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__Pred_MNA_Index_10));
#line 387 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__Func_N_Index_11));
#line 387 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__Func_NA_Index_12));
#line 387 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__pred_table__Func_MNA_Index_13));
#line 387 "pred_table.m"
    }
#line 375 "pred_table.m"
  }
#line 62 "pred_table.m"
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
