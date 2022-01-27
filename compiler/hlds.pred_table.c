/*
** Automatically generated from `pred_table.m'
** by the Mercury compiler,
** version DEV
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




#line 143 "hlds.pred_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

#line 146 "hlds.pred_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__pred_table__type_ctor_info_name_accessibility_0;

#line 149 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

#line 152 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct1 hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 155 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 158 "hlds.pred_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 161 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__pred_table__type_ctor_info_name_accessibility_0;

#line 164 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct1 hlds__pred_table__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 167 "hlds.pred_table.c"
static const MR_VA_TypeInfo_Struct2 hlds__pred_table____vti_pred_2builtin__type_ctor_info_int_0list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 170 "hlds.pred_table.c"
static const MR_EnumFunctorDesc hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_0;

#line 173 "hlds.pred_table.c"
static const MR_EnumFunctorDesc hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_1;

#line 176 "hlds.pred_table.c"
static const MR_EnumFunctorDescPtr hlds__pred_table__hlds__pred_table__enum_value_ordered_is_fully_qualified_0[2];

#line 179 "hlds.pred_table.c"
static const MR_EnumFunctorDescPtr hlds__pred_table__hlds__pred_table__enum_name_ordered_is_fully_qualified_0[2];

#line 182 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_is_fully_qualified_0[2];

#line 185 "hlds.pred_table.c"
static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_0;

#line 188 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_mode_no_0_1[1];

#line 191 "hlds.pred_table.c"
static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_1;

#line 194 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_mode_no_0_0[1];

#line 197 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_mode_no_0_1[1];

#line 200 "hlds.pred_table.c"
static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_mode_no_0[2];

#line 203 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_mode_no_0[2];

#line 206 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_mode_no_0[2];

#line 209 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 212 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_name_accessibility_0_0[2];

#line 215 "hlds.pred_table.c"
static const MR_ConstString hlds__pred_table__hlds__pred_table__field_names_name_accessibility_0_0[2];

#line 218 "hlds.pred_table.c"
static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_name_accessibility_0_0;

#line 221 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_name_accessibility_0_0[1];

#line 224 "hlds.pred_table.c"
static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_name_accessibility_0[1];

#line 227 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_name_accessibility_0[1];

#line 230 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_name_accessibility_0[1];

#line 233 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_name_arity_0_0[2];

#line 236 "hlds.pred_table.c"
static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_name_arity_0_0;

#line 239 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_name_arity_0_0[1];

#line 242 "hlds.pred_table.c"
static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_name_arity_0[1];

#line 245 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_name_arity_0[1];

#line 248 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_name_arity_0[1];

#line 251 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__pred_table__type_ctor_info_name_arity_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 254 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 257 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0;

#line 260 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct1 hlds__pred_table__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 263 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_predicate_table_0_0[10];

#line 266 "hlds.pred_table.c"
static const MR_ConstString hlds__pred_table__hlds__pred_table__field_names_predicate_table_0_0[10];

#line 269 "hlds.pred_table.c"
static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_predicate_table_0_0;

#line 272 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_predicate_table_0_0[1];

#line 275 "hlds.pred_table.c"
static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_predicate_table_0[1];

#line 278 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_predicate_table_0[1];

#line 281 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_predicate_table_0[1];

#line 284 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____accessibility_table_0_0_10001(
#line 287 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 289 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 292 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____accessibility_table_0_0_10001(
#line 295 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 297 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 299 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 302 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____constraint_search_0_0_10001(
#line 305 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 307 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 310 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____constraint_search_0_0_10001(
#line 313 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 315 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 317 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 320 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____is_fully_qualified_0_0_10001(
#line 323 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 325 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 328 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____is_fully_qualified_0_0_10001(
#line 331 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 333 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 335 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 338 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____mode_no_0_0_10001(
#line 341 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 343 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 346 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____mode_no_0_0_10001(
#line 349 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 351 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 353 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 356 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____module_name_arity_index_0_0_10001(
#line 359 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 361 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 364 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____module_name_arity_index_0_0_10001(
#line 367 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 369 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 371 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 374 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_accessibility_0_0_10001(
#line 377 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 379 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 382 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_accessibility_0_0_10001(
#line 385 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 387 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 389 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 392 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_0_0_10001(
#line 395 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 397 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 400 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_0_0_10001(
#line 403 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 405 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 407 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 410 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_index_0_0_10001(
#line 413 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 415 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 418 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_index_0_0_10001(
#line 421 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 423 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 425 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 428 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_index_0_0_10001(
#line 431 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 433 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 436 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_index_0_0_10001(
#line 439 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 441 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 443 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 446 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____pred_table_0_0_10001(
#line 449 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 451 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 454 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____pred_table_0_0_10001(
#line 457 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 459 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 461 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 464 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____predicate_table_0_0_10001(
#line 467 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 469 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2);

#line 472 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____predicate_table_0_0_10001(
#line 475 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 477 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 479 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3);

#line 344 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_index_0_0(
#line 344 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 344 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 344 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3);

#line 344 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_index_0_0(
#line 344 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 344 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2);

#line 346 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_index_0_0(
#line 346 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 346 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 346 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3);

#line 346 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_index_0_0(
#line 346 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 346 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2);

#line 347 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_0_0(
#line 347 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 347 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 347 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3);

#line 347 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_0_0(
#line 347 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 347 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2);

#line 334 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_accessibility_0_0(
#line 334 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 334 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 334 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3);

#line 334 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_accessibility_0_0(
#line 334 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 334 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2);

#line 353 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____module_name_arity_index_0_0(
#line 353 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 353 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 353 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3);

#line 353 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____module_name_arity_index_0_0(
#line 353 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 353 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2);

#line 332 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____accessibility_table_0_0(
#line 332 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 332 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 332 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3);

#line 332 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____accessibility_table_0_0(
#line 332 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 332 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2);

#line 1073 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__univ_constraints_match_2_p_0(
#line 1073 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 1073 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2);

#line 963 "pred_table.m"
static void MR_CALL 
hlds__pred_table__insert_into_mna_index_6_p_0(
#line 963 "pred_table.m"
  MR_String hlds__pred_table__Name_7,
#line 963 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_8,
#line 963 "pred_table.m"
  MR_Word hlds__pred_table__PredId_9,
#line 963 "pred_table.m"
  MR_Word hlds__pred_table__Module_10,
#line 963 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_MNA_Index_0_14,
#line 963 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_MNA_Index_15);

#line 949 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_do_insert_14_p_0_1(
#line 949 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 949 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 949 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 949 "pred_table.m"
  MR_Box * hlds__pred_table__wrapper_arg_3);

#line 920 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_do_insert_14_p_0(
#line 920 "pred_table.m"
  MR_Word hlds__pred_table__Module_15,
#line 920 "pred_table.m"
  MR_String hlds__pred_table__Name_16,
#line 920 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_17,
#line 920 "pred_table.m"
  MR_Word hlds__pred_table__NeedQual_18,
#line 920 "pred_table.m"
  MR_Word hlds__pred_table__MaybeQualInfo_19,
#line 920 "pred_table.m"
  MR_Word hlds__pred_table__PredId_20,
#line 920 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_AccessibilityTable_0_31,
#line 920 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_AccessibilityTable_32,
#line 920 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_N_Index_0_33,
#line 920 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_N_Index_34,
#line 920 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_NA_Index_0_35,
#line 920 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_NA_Index_36,
#line 920 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_MNA_Index_0_37,
#line 920 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_MNA_Index_38);

#line 949 "pred_table.m"
static void MR_CALL 
hlds__pred_table__do_predicate_table_insert_7_p_0_1(
#line 949 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 949 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 949 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 949 "pred_table.m"
  MR_Box * hlds__pred_table__wrapper_arg_3);

#line 859 "pred_table.m"
static void MR_CALL 
hlds__pred_table__do_predicate_table_insert_7_p_0(
#line 859 "pred_table.m"
  MR_Word hlds__pred_table__MaybePredId_8,
#line 859 "pred_table.m"
  MR_Word hlds__pred_table__PredInfo_9,
#line 859 "pred_table.m"
  MR_Word hlds__pred_table__NeedQual_10,
#line 859 "pred_table.m"
  MR_Word hlds__pred_table__MaybeQualInfo_11,
#line 859 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_12,
#line 859 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39,
#line 859 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_40);

#line 813 "pred_table.m"
static void MR_CALL 
hlds__pred_table__reinsert_for_restrict_6_p_0(
#line 813 "pred_table.m"
  MR_Word hlds__pred_table__PartialQualInfo_7,
#line 813 "pred_table.m"
  MR_Word hlds__pred_table__Preds_8,
#line 813 "pred_table.m"
  MR_Word hlds__pred_table__AccessibilityTable_9,
#line 813 "pred_table.m"
  MR_Word hlds__pred_table__PredId_10,
#line 813 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_19,
#line 813 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_20);

#line 737 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__pred_id_matches_module_3_p_0(
#line 737 "pred_table.m"
  MR_Word hlds__pred_table__Preds_4,
#line 737 "pred_table.m"
  MR_Word hlds__pred_table__ModuleName_5,
#line 737 "pred_table.m"
  MR_Word hlds__pred_table__PredId_6);

#line 735 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0_1(
#line 735 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 735 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1);

#line 647 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0(
#line 647 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_6,
#line 647 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_7,
#line 647 "pred_table.m"
  MR_Word hlds__pred_table__Module_8,
#line 647 "pred_table.m"
  MR_String hlds__pred_table__FuncName_9,
#line 647 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_10);

#line 435 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_remove_from_index_10_p_0(
#line 435 "pred_table.m"
  MR_Word hlds__pred_table__Module_11,
#line 435 "pred_table.m"
  MR_String hlds__pred_table__Name_12,
#line 435 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_13,
#line 435 "pred_table.m"
  MR_Word hlds__pred_table__PredId_14,
#line 435 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_N_0_18,
#line 435 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_N_19,
#line 435 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_NA_0_20,
#line 435 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_NA_21,
#line 435 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_MNA_0_22,
#line 435 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_MNA_23);

#line 735 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0_1(
#line 735 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 735 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1);

#line 735 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0_1(
#line 735 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 735 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1);

#line 735 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_sym_4_p_0_1(
#line 735 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 735 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1);

#line 735 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0_1(
#line 735 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 735 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1);

#line 735 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_sym_4_p_0_1(
#line 735 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 735 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1);

#line 810 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_restrict_4_p_0_1(
#line 810 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 810 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 810 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 810 "pred_table.m"
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



#line 1021 "hlds.pred_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

#line 1030 "hlds.pred_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__pred_table__type_ctor_info_name_accessibility_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0
  }
};

#line 1039 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1048 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct1 hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1056 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1065 "hlds.pred_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__pred_table__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1074 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__pred_table__type_ctor_info_name_accessibility_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0
  }
};

#line 1083 "hlds.pred_table.c"
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

#line 1100 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct1 hlds__pred_table__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1108 "hlds.pred_table.c"
static const MR_VA_TypeInfo_Struct2 hlds__pred_table____vti_pred_2builtin__type_ctor_info_int_0list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &hlds__pred_table__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1118 "hlds.pred_table.c"
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

#line 1135 "hlds.pred_table.c"
static const MR_EnumFunctorDesc hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_0 = {
  (MR_String) "is_fully_qualified",
  (MR_Integer) 0
};

#line 1141 "hlds.pred_table.c"
static const MR_EnumFunctorDesc hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_1 = {
  (MR_String) "may_be_partially_qualified",
  (MR_Integer) 1
};

#line 1147 "hlds.pred_table.c"
static const MR_EnumFunctorDescPtr hlds__pred_table__hlds__pred_table__enum_value_ordered_is_fully_qualified_0[2] = {
  &hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_0,
  &hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_1
};

#line 1153 "hlds.pred_table.c"
static const MR_EnumFunctorDescPtr hlds__pred_table__hlds__pred_table__enum_name_ordered_is_fully_qualified_0[2] = {
  &hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_0,
  &hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_1
};

#line 1159 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_is_fully_qualified_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1165 "hlds.pred_table.c"
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

#line 1182 "hlds.pred_table.c"
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

#line 1197 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_mode_no_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1202 "hlds.pred_table.c"
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

#line 1217 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_mode_no_0_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_0
};

#line 1222 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_mode_no_0_1[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_1
};

#line 1227 "hlds.pred_table.c"
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

#line 1241 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_mode_no_0[2] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_1,
  &hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_0
};

#line 1247 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_mode_no_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1253 "hlds.pred_table.c"
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

#line 1270 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__pred_table__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1279 "hlds.pred_table.c"
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

#line 1296 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_name_accessibility_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1302 "hlds.pred_table.c"
static const MR_ConstString hlds__pred_table__hlds__pred_table__field_names_name_accessibility_0_0[2] = {
  (MR_String) "accessible_by_unqualifed_name",
  (MR_String) "accessible_by_partially_qualified_names"
};

#line 1308 "hlds.pred_table.c"
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

#line 1323 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_name_accessibility_0_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_name_accessibility_0_0
};

#line 1328 "hlds.pred_table.c"
static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_name_accessibility_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__pred_table__hlds__pred_table__du_stag_ordered_name_accessibility_0_0
  }
};

#line 1337 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_name_accessibility_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_name_accessibility_0_0
};

#line 1342 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_name_accessibility_0[1] = {
  (MR_Integer) 0
};

#line 1347 "hlds.pred_table.c"
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

#line 1364 "hlds.pred_table.c"
static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_name_arity_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1370 "hlds.pred_table.c"
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

#line 1385 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_name_arity_0_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_name_arity_0_0
};

#line 1390 "hlds.pred_table.c"
static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_name_arity_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__pred_table__hlds__pred_table__du_stag_ordered_name_arity_0_0
  }
};

#line 1399 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_name_arity_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_name_arity_0_0
};

#line 1404 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_name_arity_0[1] = {
  (MR_Integer) 0
};

#line 1409 "hlds.pred_table.c"
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

#line 1426 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__pred_table__type_ctor_info_name_arity_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0,
    (MR_TypeInfo) &hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1435 "hlds.pred_table.c"
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

#line 1452 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1461 "hlds.pred_table.c"
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

#line 1478 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

#line 1487 "hlds.pred_table.c"
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

#line 1504 "hlds.pred_table.c"
static const MR_FA_TypeInfo_Struct1 hlds__pred_table__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1512 "hlds.pred_table.c"
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

#line 1526 "hlds.pred_table.c"
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

#line 1540 "hlds.pred_table.c"
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

#line 1555 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_predicate_table_0_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_predicate_table_0_0
};

#line 1560 "hlds.pred_table.c"
static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_predicate_table_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__pred_table__hlds__pred_table__du_stag_ordered_predicate_table_0_0
  }
};

#line 1569 "hlds.pred_table.c"
static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_predicate_table_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_predicate_table_0_0
};

#line 1574 "hlds.pred_table.c"
static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_predicate_table_0[1] = {
  (MR_Integer) 0
};

#line 1579 "hlds.pred_table.c"
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

#line 1596 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____accessibility_table_0_0_10001(
#line 1599 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1601 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1603 "hlds.pred_table.c"
{
#line 1605 "hlds.pred_table.c"
  {
#line 1607 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1610 "hlds.pred_table.c"
    {
#line 1612 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____accessibility_table_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1615 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1617 "hlds.pred_table.c"
  }
#line 1619 "hlds.pred_table.c"
}

#line 1622 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____accessibility_table_0_0_10001(
#line 1625 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 1627 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 1629 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 1631 "hlds.pred_table.c"
{
#line 1633 "hlds.pred_table.c"
  {
#line 1635 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 1638 "hlds.pred_table.c"
    {
#line 1640 "hlds.pred_table.c"
      hlds__pred_table____Compare____accessibility_table_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 1643 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 1645 "hlds.pred_table.c"
  }
#line 1647 "hlds.pred_table.c"
}

#line 1650 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____constraint_search_0_0_10001(
#line 1653 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1655 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1657 "hlds.pred_table.c"
{
#line 1659 "hlds.pred_table.c"
  {
#line 1661 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1664 "hlds.pred_table.c"
    {
#line 1666 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____constraint_search_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1669 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1671 "hlds.pred_table.c"
  }
#line 1673 "hlds.pred_table.c"
}

#line 1676 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____constraint_search_0_0_10001(
#line 1679 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 1681 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 1683 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 1685 "hlds.pred_table.c"
{
#line 1687 "hlds.pred_table.c"
  {
#line 1689 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 1692 "hlds.pred_table.c"
    {
#line 1694 "hlds.pred_table.c"
      hlds__pred_table____Compare____constraint_search_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 1697 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 1699 "hlds.pred_table.c"
  }
#line 1701 "hlds.pred_table.c"
}

#line 1704 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____is_fully_qualified_0_0_10001(
#line 1707 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1709 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1711 "hlds.pred_table.c"
{
#line 1713 "hlds.pred_table.c"
  {
#line 1715 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1718 "hlds.pred_table.c"
    {
#line 1720 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____is_fully_qualified_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1723 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1725 "hlds.pred_table.c"
  }
#line 1727 "hlds.pred_table.c"
}

#line 1730 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____is_fully_qualified_0_0_10001(
#line 1733 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 1735 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 1737 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 1739 "hlds.pred_table.c"
{
#line 1741 "hlds.pred_table.c"
  {
#line 1743 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 1746 "hlds.pred_table.c"
    {
#line 1748 "hlds.pred_table.c"
      hlds__pred_table____Compare____is_fully_qualified_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 1751 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 1753 "hlds.pred_table.c"
  }
#line 1755 "hlds.pred_table.c"
}

#line 1758 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____mode_no_0_0_10001(
#line 1761 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1763 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1765 "hlds.pred_table.c"
{
#line 1767 "hlds.pred_table.c"
  {
#line 1769 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1772 "hlds.pred_table.c"
    {
#line 1774 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____mode_no_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1777 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1779 "hlds.pred_table.c"
  }
#line 1781 "hlds.pred_table.c"
}

#line 1784 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____mode_no_0_0_10001(
#line 1787 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 1789 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 1791 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 1793 "hlds.pred_table.c"
{
#line 1795 "hlds.pred_table.c"
  {
#line 1797 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 1800 "hlds.pred_table.c"
    {
#line 1802 "hlds.pred_table.c"
      hlds__pred_table____Compare____mode_no_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 1805 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 1807 "hlds.pred_table.c"
  }
#line 1809 "hlds.pred_table.c"
}

#line 1812 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____module_name_arity_index_0_0_10001(
#line 1815 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1817 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1819 "hlds.pred_table.c"
{
#line 1821 "hlds.pred_table.c"
  {
#line 1823 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1826 "hlds.pred_table.c"
    {
#line 1828 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____module_name_arity_index_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1831 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1833 "hlds.pred_table.c"
  }
#line 1835 "hlds.pred_table.c"
}

#line 1838 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____module_name_arity_index_0_0_10001(
#line 1841 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 1843 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 1845 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 1847 "hlds.pred_table.c"
{
#line 1849 "hlds.pred_table.c"
  {
#line 1851 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 1854 "hlds.pred_table.c"
    {
#line 1856 "hlds.pred_table.c"
      hlds__pred_table____Compare____module_name_arity_index_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 1859 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 1861 "hlds.pred_table.c"
  }
#line 1863 "hlds.pred_table.c"
}

#line 1866 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_accessibility_0_0_10001(
#line 1869 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1871 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1873 "hlds.pred_table.c"
{
#line 1875 "hlds.pred_table.c"
  {
#line 1877 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1880 "hlds.pred_table.c"
    {
#line 1882 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____name_accessibility_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1885 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1887 "hlds.pred_table.c"
  }
#line 1889 "hlds.pred_table.c"
}

#line 1892 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_accessibility_0_0_10001(
#line 1895 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 1897 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 1899 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 1901 "hlds.pred_table.c"
{
#line 1903 "hlds.pred_table.c"
  {
#line 1905 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 1908 "hlds.pred_table.c"
    {
#line 1910 "hlds.pred_table.c"
      hlds__pred_table____Compare____name_accessibility_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 1913 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 1915 "hlds.pred_table.c"
  }
#line 1917 "hlds.pred_table.c"
}

#line 1920 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_0_0_10001(
#line 1923 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1925 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1927 "hlds.pred_table.c"
{
#line 1929 "hlds.pred_table.c"
  {
#line 1931 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1934 "hlds.pred_table.c"
    {
#line 1936 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____name_arity_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1939 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1941 "hlds.pred_table.c"
  }
#line 1943 "hlds.pred_table.c"
}

#line 1946 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_0_0_10001(
#line 1949 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 1951 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 1953 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 1955 "hlds.pred_table.c"
{
#line 1957 "hlds.pred_table.c"
  {
#line 1959 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 1962 "hlds.pred_table.c"
    {
#line 1964 "hlds.pred_table.c"
      hlds__pred_table____Compare____name_arity_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 1967 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 1969 "hlds.pred_table.c"
  }
#line 1971 "hlds.pred_table.c"
}

#line 1974 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_index_0_0_10001(
#line 1977 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 1979 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 1981 "hlds.pred_table.c"
{
#line 1983 "hlds.pred_table.c"
  {
#line 1985 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 1988 "hlds.pred_table.c"
    {
#line 1990 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____name_arity_index_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 1993 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 1995 "hlds.pred_table.c"
  }
#line 1997 "hlds.pred_table.c"
}

#line 2000 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_index_0_0_10001(
#line 2003 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 2005 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 2007 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 2009 "hlds.pred_table.c"
{
#line 2011 "hlds.pred_table.c"
  {
#line 2013 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 2016 "hlds.pred_table.c"
    {
#line 2018 "hlds.pred_table.c"
      hlds__pred_table____Compare____name_arity_index_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 2021 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 2023 "hlds.pred_table.c"
  }
#line 2025 "hlds.pred_table.c"
}

#line 2028 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_index_0_0_10001(
#line 2031 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 2033 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 2035 "hlds.pred_table.c"
{
#line 2037 "hlds.pred_table.c"
  {
#line 2039 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 2042 "hlds.pred_table.c"
    {
#line 2044 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____name_index_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 2047 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 2049 "hlds.pred_table.c"
  }
#line 2051 "hlds.pred_table.c"
}

#line 2054 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____name_index_0_0_10001(
#line 2057 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 2059 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 2061 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 2063 "hlds.pred_table.c"
{
#line 2065 "hlds.pred_table.c"
  {
#line 2067 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 2070 "hlds.pred_table.c"
    {
#line 2072 "hlds.pred_table.c"
      hlds__pred_table____Compare____name_index_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 2075 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 2077 "hlds.pred_table.c"
  }
#line 2079 "hlds.pred_table.c"
}

#line 2082 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____pred_table_0_0_10001(
#line 2085 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 2087 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 2089 "hlds.pred_table.c"
{
#line 2091 "hlds.pred_table.c"
  {
#line 2093 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 2096 "hlds.pred_table.c"
    {
#line 2098 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____pred_table_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 2101 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 2103 "hlds.pred_table.c"
  }
#line 2105 "hlds.pred_table.c"
}

#line 2108 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____pred_table_0_0_10001(
#line 2111 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 2113 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 2115 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 2117 "hlds.pred_table.c"
{
#line 2119 "hlds.pred_table.c"
  {
#line 2121 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 2124 "hlds.pred_table.c"
    {
#line 2126 "hlds.pred_table.c"
      hlds__pred_table____Compare____pred_table_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 2129 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 2131 "hlds.pred_table.c"
  }
#line 2133 "hlds.pred_table.c"
}

#line 2136 "hlds.pred_table.c"
static MR_bool MR_CALL 
hlds__pred_table____Unify____predicate_table_0_0_10001(
#line 2139 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 2141 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2)
#line 2143 "hlds.pred_table.c"
{
#line 2145 "hlds.pred_table.c"
  {
#line 2147 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded;

#line 2150 "hlds.pred_table.c"
    {
#line 2152 "hlds.pred_table.c"
      hlds__pred_table__succeeded = hlds__pred_table____Unify____predicate_table_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
#line 2155 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 2157 "hlds.pred_table.c"
  }
#line 2159 "hlds.pred_table.c"
}

#line 2162 "hlds.pred_table.c"
static void MR_CALL 
hlds__pred_table____Compare____predicate_table_0_0_10001(
#line 2165 "hlds.pred_table.c"
  MR_Box * hlds__pred_table__wrapper_arg_1,
#line 2167 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 2169 "hlds.pred_table.c"
  MR_Box hlds__pred_table__wrapper_arg_3)
#line 2171 "hlds.pred_table.c"
{
#line 2173 "hlds.pred_table.c"
  {
#line 2175 "hlds.pred_table.c"
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

#line 2178 "hlds.pred_table.c"
    {
#line 2180 "hlds.pred_table.c"
      hlds__pred_table____Compare____predicate_table_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
#line 2183 "hlds.pred_table.c"
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
#line 2185 "hlds.pred_table.c"
  }
#line 2187 "hlds.pred_table.c"
}

#line 303 "pred_table.m"
void MR_CALL 
hlds__pred_table____Compare____predicate_table_0_0(
#line 303 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 303 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 303 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 303 "pred_table.m"
{
#line 303 "pred_table.m"
  {
#line 303 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 303 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_33 = (MR_Integer) hlds__pred_table__HeadVar__2_2;
#line 303 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_34 = (MR_Integer) hlds__pred_table__HeadVar__3_3;

#line 303 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_33 == hlds__pred_table__CastY_34);
#line 303 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 2214 "hlds.pred_table.c"
      *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 0;
#line 303 "pred_table.m"
    else
#line 303 "pred_table.m"
      {
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 2)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 3)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 4)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 5)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 6)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 7)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 8)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 9)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 0)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 1)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 2)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 3)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 4)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 5)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 6)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 7)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 8)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 9)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_24_24;

#line 303 "pred_table.m"
        {
#line 303 "pred_table.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[6], &hlds__pred_table__V_24_24, ((MR_Box) (hlds__pred_table__V_4_4)), ((MR_Box) (hlds__pred_table__V_14_14)));
        }
#line 2268 "hlds.pred_table.c"
        hlds__pred_table__succeeded = (hlds__pred_table__V_24_24 == (MR_Integer) 0);
#line 303 "pred_table.m"
        hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 303 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 303 "pred_table.m"
          *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_24_24;
#line 303 "pred_table.m"
        else
#line 303 "pred_table.m"
          {
#line 303 "pred_table.m"
            MR_Word hlds__pred_table__V_25_25;

#line 303 "pred_table.m"
            {
#line 303 "pred_table.m"
              hlds__hlds_pred____Compare____pred_id_0_0(&hlds__pred_table__V_25_25, hlds__pred_table__V_5_5, hlds__pred_table__V_15_15);
            }
#line 2288 "hlds.pred_table.c"
            hlds__pred_table__succeeded = (hlds__pred_table__V_25_25 == (MR_Integer) 0);
#line 303 "pred_table.m"
            hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 303 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 303 "pred_table.m"
              *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_25_25;
#line 303 "pred_table.m"
            else
#line 303 "pred_table.m"
              {
#line 303 "pred_table.m"
                MR_Word hlds__pred_table__V_26_26;

#line 303 "pred_table.m"
                {
#line 303 "pred_table.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_1[2], &hlds__pred_table__V_26_26, ((MR_Box) (hlds__pred_table__V_6_6)), ((MR_Box) (hlds__pred_table__V_16_16)));
                }
#line 2308 "hlds.pred_table.c"
                hlds__pred_table__succeeded = (hlds__pred_table__V_26_26 == (MR_Integer) 0);
#line 303 "pred_table.m"
                hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 303 "pred_table.m"
                if (hlds__pred_table__succeeded)
#line 303 "pred_table.m"
                  *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_26_26;
#line 303 "pred_table.m"
                else
#line 303 "pred_table.m"
                  {
#line 303 "pred_table.m"
                    MR_Word hlds__pred_table__V_27_27;

#line 303 "pred_table.m"
                    {
#line 303 "pred_table.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[3], &hlds__pred_table__V_27_27, ((MR_Box) (hlds__pred_table__V_7_7)), ((MR_Box) (hlds__pred_table__V_17_17)));
                    }
#line 2328 "hlds.pred_table.c"
                    hlds__pred_table__succeeded = (hlds__pred_table__V_27_27 == (MR_Integer) 0);
#line 303 "pred_table.m"
                    hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 303 "pred_table.m"
                    if (hlds__pred_table__succeeded)
#line 303 "pred_table.m"
                      *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_27_27;
#line 303 "pred_table.m"
                    else
#line 303 "pred_table.m"
                      {
#line 303 "pred_table.m"
                        MR_Word hlds__pred_table__V_28_28;

#line 303 "pred_table.m"
                        {
#line 303 "pred_table.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[5], &hlds__pred_table__V_28_28, ((MR_Box) (hlds__pred_table__V_8_8)), ((MR_Box) (hlds__pred_table__V_18_18)));
                        }
#line 2348 "hlds.pred_table.c"
                        hlds__pred_table__succeeded = (hlds__pred_table__V_28_28 == (MR_Integer) 0);
#line 303 "pred_table.m"
                        hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 303 "pred_table.m"
                        if (hlds__pred_table__succeeded)
#line 303 "pred_table.m"
                          *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_28_28;
#line 303 "pred_table.m"
                        else
#line 303 "pred_table.m"
                          {
#line 303 "pred_table.m"
                            MR_Word hlds__pred_table__V_29_29;

#line 303 "pred_table.m"
                            {
#line 303 "pred_table.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[4], &hlds__pred_table__V_29_29, ((MR_Box) (hlds__pred_table__V_9_9)), ((MR_Box) (hlds__pred_table__V_19_19)));
                            }
#line 2368 "hlds.pred_table.c"
                            hlds__pred_table__succeeded = (hlds__pred_table__V_29_29 == (MR_Integer) 0);
#line 303 "pred_table.m"
                            hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 303 "pred_table.m"
                            if (hlds__pred_table__succeeded)
#line 303 "pred_table.m"
                              *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_29_29;
#line 303 "pred_table.m"
                            else
#line 303 "pred_table.m"
                              {
#line 303 "pred_table.m"
                                MR_Word hlds__pred_table__V_30_30;

#line 303 "pred_table.m"
                                {
#line 303 "pred_table.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[2], &hlds__pred_table__V_30_30, ((MR_Box) (hlds__pred_table__V_10_10)), ((MR_Box) (hlds__pred_table__V_20_20)));
                                }
#line 2388 "hlds.pred_table.c"
                                hlds__pred_table__succeeded = (hlds__pred_table__V_30_30 == (MR_Integer) 0);
#line 303 "pred_table.m"
                                hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 303 "pred_table.m"
                                if (hlds__pred_table__succeeded)
#line 303 "pred_table.m"
                                  *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_30_30;
#line 303 "pred_table.m"
                                else
#line 303 "pred_table.m"
                                  {
#line 303 "pred_table.m"
                                    MR_Word hlds__pred_table__V_31_31;

#line 303 "pred_table.m"
                                    {
#line 303 "pred_table.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[5], &hlds__pred_table__V_31_31, ((MR_Box) (hlds__pred_table__V_11_11)), ((MR_Box) (hlds__pred_table__V_21_21)));
                                    }
#line 2408 "hlds.pred_table.c"
                                    hlds__pred_table__succeeded = (hlds__pred_table__V_31_31 == (MR_Integer) 0);
#line 303 "pred_table.m"
                                    hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 303 "pred_table.m"
                                    if (hlds__pred_table__succeeded)
#line 303 "pred_table.m"
                                      *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_31_31;
#line 303 "pred_table.m"
                                    else
#line 303 "pred_table.m"
                                      {
#line 303 "pred_table.m"
                                        MR_Word hlds__pred_table__V_32_32;

#line 303 "pred_table.m"
                                        {
#line 303 "pred_table.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[4], &hlds__pred_table__V_32_32, ((MR_Box) (hlds__pred_table__V_12_12)), ((MR_Box) (hlds__pred_table__V_22_22)));
                                        }
#line 2428 "hlds.pred_table.c"
                                        hlds__pred_table__succeeded = (hlds__pred_table__V_32_32 == (MR_Integer) 0);
#line 303 "pred_table.m"
                                        hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 303 "pred_table.m"
                                        if (hlds__pred_table__succeeded)
#line 303 "pred_table.m"
                                          *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_32_32;
#line 303 "pred_table.m"
                                        else
#line 303 "pred_table.m"
                                          {
#line 303 "pred_table.m"
                                            {
#line 303 "pred_table.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[2], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__V_13_13)), ((MR_Box) (hlds__pred_table__V_23_23)));
                                            }
#line 303 "pred_table.m"
                                          }
#line 303 "pred_table.m"
                                      }
#line 303 "pred_table.m"
                                  }
#line 303 "pred_table.m"
                              }
#line 303 "pred_table.m"
                          }
#line 303 "pred_table.m"
                      }
#line 303 "pred_table.m"
                  }
#line 303 "pred_table.m"
              }
#line 303 "pred_table.m"
          }
#line 303 "pred_table.m"
      }
#line 303 "pred_table.m"
  }
#line 303 "pred_table.m"
}

#line 303 "pred_table.m"
MR_bool MR_CALL 
hlds__pred_table____Unify____predicate_table_0_0(
#line 303 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 303 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 303 "pred_table.m"
{
#line 303 "pred_table.m"
  {
#line 303 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 303 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_23 = (MR_Integer) hlds__pred_table__HeadVar__1_1;
#line 303 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_24 = (MR_Integer) hlds__pred_table__HeadVar__2_2;

#line 303 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_23 == hlds__pred_table__CastY_24);
#line 303 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 303 "pred_table.m"
      hlds__pred_table__succeeded = MR_TRUE;
#line 303 "pred_table.m"
    else
#line 303 "pred_table.m"
      {
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_27_27;
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_28_28;
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_29_29;
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_30_30;
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_31_31;
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_32_32;
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_33_33;
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__TypeInfo_34_34;
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 0)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 1)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 2)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 3)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 4)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 5)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 6)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 7)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 8)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 9)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 2)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 3)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 4)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 5)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 6)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 7)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 8)));
#line 303 "pred_table.m"
        MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 9)));

#line 2555 "hlds.pred_table.c"
        {
#line 2557 "hlds.pred_table.c"
          hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pred_table_scalar_common_2[6], ((MR_Box) (hlds__pred_table__V_3_3)), ((MR_Box) (hlds__pred_table__V_13_13)));
        }
#line 303 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 303 "pred_table.m"
          {
#line 2564 "hlds.pred_table.c"
            {
#line 2566 "hlds.pred_table.c"
              hlds__pred_table__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__pred_table__V_4_4, hlds__pred_table__V_14_14);
            }
#line 303 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 303 "pred_table.m"
              {
#line 2573 "hlds.pred_table.c"
                hlds__pred_table__TypeInfo_27_27 = (MR_Word) &hlds__pred_table_scalar_common_1[2];
#line 2575 "hlds.pred_table.c"
                {
#line 2577 "hlds.pred_table.c"
                  hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_27_27, ((MR_Box) (hlds__pred_table__V_5_5)), ((MR_Box) (hlds__pred_table__V_15_15)));
                }
#line 303 "pred_table.m"
                if (hlds__pred_table__succeeded)
#line 303 "pred_table.m"
                  {
#line 2584 "hlds.pred_table.c"
                    hlds__pred_table__TypeInfo_28_28 = (MR_Word) &hlds__pred_table_scalar_common_2[3];
#line 2586 "hlds.pred_table.c"
                    {
#line 2588 "hlds.pred_table.c"
                      hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_28_28, ((MR_Box) (hlds__pred_table__V_6_6)), ((MR_Box) (hlds__pred_table__V_16_16)));
                    }
#line 303 "pred_table.m"
                    if (hlds__pred_table__succeeded)
#line 303 "pred_table.m"
                      {
#line 2595 "hlds.pred_table.c"
                        hlds__pred_table__TypeInfo_29_29 = (MR_Word) &hlds__pred_table_scalar_common_2[5];
#line 2597 "hlds.pred_table.c"
                        {
#line 2599 "hlds.pred_table.c"
                          hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_29_29, ((MR_Box) (hlds__pred_table__V_7_7)), ((MR_Box) (hlds__pred_table__V_17_17)));
                        }
#line 303 "pred_table.m"
                        if (hlds__pred_table__succeeded)
#line 303 "pred_table.m"
                          {
#line 2606 "hlds.pred_table.c"
                            hlds__pred_table__TypeInfo_30_30 = (MR_Word) &hlds__pred_table_scalar_common_2[4];
#line 2608 "hlds.pred_table.c"
                            {
#line 2610 "hlds.pred_table.c"
                              hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_30_30, ((MR_Box) (hlds__pred_table__V_8_8)), ((MR_Box) (hlds__pred_table__V_18_18)));
                            }
#line 303 "pred_table.m"
                            if (hlds__pred_table__succeeded)
#line 303 "pred_table.m"
                              {
#line 2617 "hlds.pred_table.c"
                                hlds__pred_table__TypeInfo_31_31 = (MR_Word) &hlds__pred_table_scalar_common_2[2];
#line 2619 "hlds.pred_table.c"
                                {
#line 2621 "hlds.pred_table.c"
                                  hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_31_31, ((MR_Box) (hlds__pred_table__V_9_9)), ((MR_Box) (hlds__pred_table__V_19_19)));
                                }
#line 303 "pred_table.m"
                                if (hlds__pred_table__succeeded)
#line 303 "pred_table.m"
                                  {
#line 2628 "hlds.pred_table.c"
                                    hlds__pred_table__TypeInfo_32_32 = (MR_Word) &hlds__pred_table_scalar_common_2[5];
#line 2630 "hlds.pred_table.c"
                                    {
#line 2632 "hlds.pred_table.c"
                                      hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_32_32, ((MR_Box) (hlds__pred_table__V_10_10)), ((MR_Box) (hlds__pred_table__V_20_20)));
                                    }
#line 303 "pred_table.m"
                                    if (hlds__pred_table__succeeded)
#line 303 "pred_table.m"
                                      {
#line 2639 "hlds.pred_table.c"
                                        hlds__pred_table__TypeInfo_33_33 = (MR_Word) &hlds__pred_table_scalar_common_2[4];
#line 2641 "hlds.pred_table.c"
                                        {
#line 2643 "hlds.pred_table.c"
                                          hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_33_33, ((MR_Box) (hlds__pred_table__V_11_11)), ((MR_Box) (hlds__pred_table__V_21_21)));
                                        }
#line 303 "pred_table.m"
                                        if (hlds__pred_table__succeeded)
#line 303 "pred_table.m"
                                          {
#line 2650 "hlds.pred_table.c"
                                            hlds__pred_table__TypeInfo_34_34 = (MR_Word) &hlds__pred_table_scalar_common_2[2];
#line 2652 "hlds.pred_table.c"
                                            {
#line 2654 "hlds.pred_table.c"
                                              hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_34_34, ((MR_Box) (hlds__pred_table__V_12_12)), ((MR_Box) (hlds__pred_table__V_22_22)));
                                            }
#line 303 "pred_table.m"
                                          }
#line 303 "pred_table.m"
                                      }
#line 303 "pred_table.m"
                                  }
#line 303 "pred_table.m"
                              }
#line 303 "pred_table.m"
                          }
#line 303 "pred_table.m"
                      }
#line 303 "pred_table.m"
                  }
#line 303 "pred_table.m"
              }
#line 303 "pred_table.m"
          }
#line 303 "pred_table.m"
      }
#line 303 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 303 "pred_table.m"
  }
#line 303 "pred_table.m"
}

#line 36 "pred_table.m"
void MR_CALL 
hlds__pred_table____Compare____pred_table_0_0(
#line 36 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 36 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 36 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 36 "pred_table.m"
{
#line 36 "pred_table.m"
  {
#line 36 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 36 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_4 = hlds__pred_table__HeadVar__2_2;
#line 36 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_5 = hlds__pred_table__HeadVar__3_3;

#line 36 "pred_table.m"
    {
#line 36 "pred_table.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[6], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__Cast_HeadVar1_4)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_5)));
    }
#line 36 "pred_table.m"
  }
#line 36 "pred_table.m"
}

#line 36 "pred_table.m"
MR_bool MR_CALL 
hlds__pred_table____Unify____pred_table_0_0(
#line 36 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 36 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 36 "pred_table.m"
{
#line 36 "pred_table.m"
  {
#line 36 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 36 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_3 = hlds__pred_table__HeadVar__1_1;
#line 36 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_4 = hlds__pred_table__HeadVar__2_2;

#line 36 "pred_table.m"
    {
#line 36 "pred_table.m"
      hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pred_table_scalar_common_2[6], ((MR_Box) (hlds__pred_table__Cast_HeadVar1_3)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_4)));
    }
#line 36 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 36 "pred_table.m"
  }
#line 36 "pred_table.m"
}

#line 344 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_index_0_0(
#line 344 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 344 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 344 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 344 "pred_table.m"
{
#line 344 "pred_table.m"
  {
#line 344 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 344 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_4 = hlds__pred_table__HeadVar__2_2;
#line 344 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_5 = hlds__pred_table__HeadVar__3_3;

#line 344 "pred_table.m"
    {
#line 344 "pred_table.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[5], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__Cast_HeadVar1_4)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_5)));
    }
#line 344 "pred_table.m"
  }
#line 344 "pred_table.m"
}

#line 344 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_index_0_0(
#line 344 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 344 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 344 "pred_table.m"
{
#line 344 "pred_table.m"
  {
#line 344 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 344 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_3 = hlds__pred_table__HeadVar__1_1;
#line 344 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_4 = hlds__pred_table__HeadVar__2_2;

#line 344 "pred_table.m"
    {
#line 344 "pred_table.m"
      hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pred_table_scalar_common_2[5], ((MR_Box) (hlds__pred_table__Cast_HeadVar1_3)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_4)));
    }
#line 344 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 344 "pred_table.m"
  }
#line 344 "pred_table.m"
}

#line 346 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_index_0_0(
#line 346 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 346 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 346 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 346 "pred_table.m"
{
#line 346 "pred_table.m"
  {
#line 346 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 346 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_4 = hlds__pred_table__HeadVar__2_2;
#line 346 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_5 = hlds__pred_table__HeadVar__3_3;

#line 346 "pred_table.m"
    {
#line 346 "pred_table.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[4], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__Cast_HeadVar1_4)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_5)));
    }
#line 346 "pred_table.m"
  }
#line 346 "pred_table.m"
}

#line 346 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_index_0_0(
#line 346 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 346 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 346 "pred_table.m"
{
#line 346 "pred_table.m"
  {
#line 346 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 346 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_3 = hlds__pred_table__HeadVar__1_1;
#line 346 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_4 = hlds__pred_table__HeadVar__2_2;

#line 346 "pred_table.m"
    {
#line 346 "pred_table.m"
      hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pred_table_scalar_common_2[4], ((MR_Box) (hlds__pred_table__Cast_HeadVar1_3)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_4)));
    }
#line 346 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 346 "pred_table.m"
  }
#line 346 "pred_table.m"
}

#line 347 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_arity_0_0(
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
    MR_Integer hlds__pred_table__CastX_9 = (MR_Integer) hlds__pred_table__HeadVar__2_2;
#line 347 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_10 = (MR_Integer) hlds__pred_table__HeadVar__3_3;

#line 347 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_9 == hlds__pred_table__CastY_10);
#line 347 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 2888 "hlds.pred_table.c"
      *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 0;
#line 347 "pred_table.m"
    else
#line 347 "pred_table.m"
      {
#line 347 "pred_table.m"
        MR_String hlds__pred_table__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 347 "pred_table.m"
        MR_Integer hlds__pred_table__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));
#line 347 "pred_table.m"
        MR_String hlds__pred_table__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 0)));
#line 347 "pred_table.m"
        MR_Integer hlds__pred_table__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 1)));
#line 347 "pred_table.m"
        MR_Word hlds__pred_table__V_8_8;

#line 347 "pred_table.m"
        {
#line 347 "pred_table.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&hlds__pred_table__V_8_8, hlds__pred_table__V_4_4, hlds__pred_table__V_6_6);
        }
#line 2910 "hlds.pred_table.c"
        hlds__pred_table__succeeded = (hlds__pred_table__V_8_8 == (MR_Integer) 0);
#line 347 "pred_table.m"
        hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 347 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 347 "pred_table.m"
          *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_8_8;
#line 347 "pred_table.m"
        else
#line 347 "pred_table.m"
          {
#line 347 "pred_table.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(hlds__pred_table__HeadVar__1_1, hlds__pred_table__V_5_5, hlds__pred_table__V_7_7);
          }
#line 347 "pred_table.m"
      }
#line 347 "pred_table.m"
  }
#line 347 "pred_table.m"
}

#line 347 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_0_0(
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
    MR_Integer hlds__pred_table__CastX_7 = (MR_Integer) hlds__pred_table__HeadVar__1_1;
#line 347 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_8 = (MR_Integer) hlds__pred_table__HeadVar__2_2;

#line 347 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_7 == hlds__pred_table__CastY_8);
#line 347 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 347 "pred_table.m"
      hlds__pred_table__succeeded = MR_TRUE;
#line 347 "pred_table.m"
    else
#line 347 "pred_table.m"
      {
#line 347 "pred_table.m"
        MR_String hlds__pred_table__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 0)));
#line 347 "pred_table.m"
        MR_Integer hlds__pred_table__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 1)));
#line 347 "pred_table.m"
        MR_String hlds__pred_table__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 347 "pred_table.m"
        MR_Integer hlds__pred_table__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));

#line 2969 "hlds.pred_table.c"
        hlds__pred_table__succeeded = (strcmp(hlds__pred_table__V_3_3, hlds__pred_table__V_5_5) == 0);
#line 347 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 2973 "hlds.pred_table.c"
          hlds__pred_table__succeeded = (hlds__pred_table__V_4_4 == hlds__pred_table__V_6_6);
#line 347 "pred_table.m"
      }
#line 347 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 347 "pred_table.m"
  }
#line 347 "pred_table.m"
}

#line 334 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____name_accessibility_0_0(
#line 334 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 334 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 334 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 334 "pred_table.m"
{
#line 334 "pred_table.m"
  {
#line 334 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 334 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_9 = (MR_Integer) hlds__pred_table__HeadVar__2_2;
#line 334 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_10 = (MR_Integer) hlds__pred_table__HeadVar__3_3;

#line 334 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_9 == hlds__pred_table__CastY_10);
#line 334 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 3008 "hlds.pred_table.c"
      *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 0;
#line 334 "pred_table.m"
    else
#line 334 "pred_table.m"
      {
#line 334 "pred_table.m"
        MR_Word hlds__pred_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 334 "pred_table.m"
        MR_Word hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));
#line 334 "pred_table.m"
        MR_Word hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 0)));
#line 334 "pred_table.m"
        MR_Word hlds__pred_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 1)));
#line 334 "pred_table.m"
        MR_Word hlds__pred_table__V_8_8;
#line 334 "pred_table.m"
        MR_Integer hlds__pred_table__V_13_13 = (MR_Integer) hlds__pred_table__V_4_4;
#line 334 "pred_table.m"
        MR_Integer hlds__pred_table__V_14_14 = (MR_Integer) hlds__pred_table__V_6_6;

#line 334 "pred_table.m"
        {
#line 334 "pred_table.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__pred_table__V_8_8, hlds__pred_table__V_13_13, hlds__pred_table__V_14_14);
        }
#line 3034 "hlds.pred_table.c"
        hlds__pred_table__succeeded = (hlds__pred_table__V_8_8 == (MR_Integer) 0);
#line 334 "pred_table.m"
        hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
#line 334 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 334 "pred_table.m"
          *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_8_8;
#line 334 "pred_table.m"
        else
#line 334 "pred_table.m"
          {
#line 334 "pred_table.m"
            MR_Integer hlds__pred_table__V_15_15 = (MR_Integer) hlds__pred_table__V_5_5;
#line 334 "pred_table.m"
            MR_Integer hlds__pred_table__V_16_16 = (MR_Integer) hlds__pred_table__V_7_7;

#line 334 "pred_table.m"
            {
#line 334 "pred_table.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(hlds__pred_table__HeadVar__1_1, hlds__pred_table__V_15_15, hlds__pred_table__V_16_16);
            }
#line 334 "pred_table.m"
          }
#line 334 "pred_table.m"
      }
#line 334 "pred_table.m"
  }
#line 334 "pred_table.m"
}

#line 334 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____name_accessibility_0_0(
#line 334 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 334 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 334 "pred_table.m"
{
#line 334 "pred_table.m"
  {
#line 334 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 334 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_7 = (MR_Integer) hlds__pred_table__HeadVar__1_1;
#line 334 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_8 = (MR_Integer) hlds__pred_table__HeadVar__2_2;

#line 334 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_7 == hlds__pred_table__CastY_8);
#line 334 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 334 "pred_table.m"
      hlds__pred_table__succeeded = MR_TRUE;
#line 334 "pred_table.m"
    else
#line 334 "pred_table.m"
      {
#line 334 "pred_table.m"
        MR_Word hlds__pred_table__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 0)));
#line 334 "pred_table.m"
        MR_Word hlds__pred_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 1)));
#line 334 "pred_table.m"
        MR_Word hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 334 "pred_table.m"
        MR_Word hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));

#line 3102 "hlds.pred_table.c"
        hlds__pred_table__succeeded = (hlds__pred_table__V_3_3 == hlds__pred_table__V_5_5);
#line 334 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 3106 "hlds.pred_table.c"
          hlds__pred_table__succeeded = (hlds__pred_table__V_4_4 == hlds__pred_table__V_6_6);
#line 334 "pred_table.m"
      }
#line 334 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 334 "pred_table.m"
  }
#line 334 "pred_table.m"
}

#line 353 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____module_name_arity_index_0_0(
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
    MR_Word hlds__pred_table__Cast_HeadVar1_4 = hlds__pred_table__HeadVar__2_2;
#line 353 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_5 = hlds__pred_table__HeadVar__3_3;

#line 353 "pred_table.m"
    {
#line 353 "pred_table.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[2], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__Cast_HeadVar1_4)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_5)));
    }
#line 353 "pred_table.m"
  }
#line 353 "pred_table.m"
}

#line 353 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____module_name_arity_index_0_0(
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
    MR_Word hlds__pred_table__Cast_HeadVar1_3 = hlds__pred_table__HeadVar__1_1;
#line 353 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_4 = hlds__pred_table__HeadVar__2_2;

#line 353 "pred_table.m"
    {
#line 353 "pred_table.m"
      hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pred_table_scalar_common_2[2], ((MR_Box) (hlds__pred_table__Cast_HeadVar1_3)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_4)));
    }
#line 353 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 353 "pred_table.m"
  }
#line 353 "pred_table.m"
}

#line 278 "pred_table.m"
void MR_CALL 
hlds__pred_table____Compare____mode_no_0_0(
#line 278 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 278 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 278 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 278 "pred_table.m"
{
#line 278 "pred_table.m"
  {
#line 278 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 278 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_8 = (MR_Integer) hlds__pred_table__HeadVar__2_2;
#line 278 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_9 = (MR_Integer) hlds__pred_table__HeadVar__3_3;

#line 278 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_8 == hlds__pred_table__CastY_9);
#line 278 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 3201 "hlds.pred_table.c"
      *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 0;
#line 278 "pred_table.m"
    else
#line 278 "pred_table.m"
    if ((hlds__pred_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 278 "pred_table.m"
      if ((hlds__pred_table__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 278 "pred_table.m"
        *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 0;
#line 278 "pred_table.m"
      else
#line 3213 "hlds.pred_table.c"
        *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "pred_table.m"
    else
#line 278 "pred_table.m"
      {
#line 278 "pred_table.m"
        MR_Integer hlds__pred_table__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));

#line 278 "pred_table.m"
        if ((hlds__pred_table__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3224 "hlds.pred_table.c"
          *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "pred_table.m"
        else
#line 278 "pred_table.m"
          {
#line 278 "pred_table.m"
            MR_Integer hlds__pred_table__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__3_3, (MR_Integer) 0)));

#line 278 "pred_table.m"
            {
#line 278 "pred_table.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(hlds__pred_table__HeadVar__1_1, hlds__pred_table__V_11_11, hlds__pred_table__V_7_7);
            }
#line 278 "pred_table.m"
          }
#line 278 "pred_table.m"
      }
#line 278 "pred_table.m"
  }
#line 278 "pred_table.m"
}

#line 278 "pred_table.m"
MR_bool MR_CALL 
hlds__pred_table____Unify____mode_no_0_0(
#line 278 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 278 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 278 "pred_table.m"
{
#line 278 "pred_table.m"
  {
#line 278 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 278 "pred_table.m"
    MR_Integer hlds__pred_table__CastX_7 = (MR_Integer) hlds__pred_table__HeadVar__1_1;
#line 278 "pred_table.m"
    MR_Integer hlds__pred_table__CastY_8 = (MR_Integer) hlds__pred_table__HeadVar__2_2;

#line 278 "pred_table.m"
    hlds__pred_table__succeeded = (hlds__pred_table__CastX_7 == hlds__pred_table__CastY_8);
#line 278 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 278 "pred_table.m"
      hlds__pred_table__succeeded = MR_TRUE;
#line 278 "pred_table.m"
    else
#line 278 "pred_table.m"
    if ((hlds__pred_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 278 "pred_table.m"
      {
#line 278 "pred_table.m"
        MR_Integer hlds__pred_table__CastX_3 = (MR_Integer) hlds__pred_table__HeadVar__1_1;
#line 278 "pred_table.m"
        MR_Integer hlds__pred_table__CastY_4 = (MR_Integer) hlds__pred_table__HeadVar__2_2;

#line 278 "pred_table.m"
        hlds__pred_table__succeeded = (hlds__pred_table__CastY_4 == hlds__pred_table__CastX_3);
#line 278 "pred_table.m"
      }
#line 278 "pred_table.m"
    else
#line 278 "pred_table.m"
      {
#line 278 "pred_table.m"
        MR_Integer hlds__pred_table__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__1_1, (MR_Integer) 0)));
#line 278 "pred_table.m"
        MR_Integer hlds__pred_table__V_6_6;

#line 278 "pred_table.m"
        hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 278 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 278 "pred_table.m"
          {
#line 278 "pred_table.m"
            hlds__pred_table__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 3303 "hlds.pred_table.c"
            hlds__pred_table__succeeded = (hlds__pred_table__V_5_5 == hlds__pred_table__V_6_6);
#line 278 "pred_table.m"
          }
#line 278 "pred_table.m"
      }
#line 278 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 278 "pred_table.m"
  }
#line 278 "pred_table.m"
}

#line 146 "pred_table.m"
void MR_CALL 
hlds__pred_table____Compare____is_fully_qualified_0_0(
#line 146 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 146 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 146 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 146 "pred_table.m"
{
#line 146 "pred_table.m"
  {
#line 146 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 146 "pred_table.m"
    MR_Integer hlds__pred_table__Cast_HeadVar1_4 = (MR_Integer) hlds__pred_table__HeadVar__2_2;
#line 146 "pred_table.m"
    MR_Integer hlds__pred_table__Cast_HeadVar2_5 = (MR_Integer) hlds__pred_table__HeadVar__3_3;

#line 146 "pred_table.m"
    {
#line 146 "pred_table.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__pred_table__HeadVar__1_1, hlds__pred_table__Cast_HeadVar1_4, hlds__pred_table__Cast_HeadVar2_5);
    }
#line 146 "pred_table.m"
  }
#line 146 "pred_table.m"
}

#line 146 "pred_table.m"
MR_bool MR_CALL 
hlds__pred_table____Unify____is_fully_qualified_0_0(
#line 146 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_1,
#line 146 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 146 "pred_table.m"
{
#line 3355 "hlds.pred_table.c"
  {
#line 3357 "hlds.pred_table.c"
    MR_bool hlds__pred_table__succeeded = (hlds__pred_table__HeadVar__2_1 == hlds__pred_table__HeadVar__2_2);

#line 3360 "hlds.pred_table.c"
    return hlds__pred_table__succeeded;
#line 3362 "hlds.pred_table.c"
  }
#line 146 "pred_table.m"
}

#line 254 "pred_table.m"
void MR_CALL 
hlds__pred_table____Compare____constraint_search_0_0(
#line 254 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 254 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 254 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 254 "pred_table.m"
{
#line 254 "pred_table.m"
  {
#line 254 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 254 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_4 = hlds__pred_table__HeadVar__2_2;
#line 254 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_5 = hlds__pred_table__HeadVar__3_3;

#line 254 "pred_table.m"
    {
#line 254 "pred_table.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_3[0], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__Cast_HeadVar1_4)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_5)));
    }
#line 254 "pred_table.m"
  }
#line 254 "pred_table.m"
}

#line 254 "pred_table.m"
MR_bool MR_CALL 
hlds__pred_table____Unify____constraint_search_0_0(
#line 254 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 254 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 254 "pred_table.m"
{
#line 254 "pred_table.m"
  {
#line 254 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 254 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_3 = hlds__pred_table__HeadVar__1_1;
#line 254 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_4 = hlds__pred_table__HeadVar__2_2;

#line 254 "pred_table.m"
    {
#line 254 "pred_table.m"
      hlds__pred_table__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__pred_table__Cast_HeadVar1_3, (MR_Word) hlds__pred_table__Cast_HeadVar2_4);
    }
#line 254 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 254 "pred_table.m"
  }
#line 254 "pred_table.m"
}

#line 332 "pred_table.m"
static void MR_CALL 
hlds__pred_table____Compare____accessibility_table_0_0(
#line 332 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__1_1,
#line 332 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 332 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__3_3)
#line 332 "pred_table.m"
{
#line 332 "pred_table.m"
  {
#line 332 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 332 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_4 = hlds__pred_table__HeadVar__2_2;
#line 332 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_5 = hlds__pred_table__HeadVar__3_3;

#line 332 "pred_table.m"
    {
#line 332 "pred_table.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[3], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__Cast_HeadVar1_4)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_5)));
    }
#line 332 "pred_table.m"
  }
#line 332 "pred_table.m"
}

#line 332 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table____Unify____accessibility_table_0_0(
#line 332 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 332 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 332 "pred_table.m"
{
#line 332 "pred_table.m"
  {
#line 332 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 332 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar1_3 = hlds__pred_table__HeadVar__1_1;
#line 332 "pred_table.m"
    MR_Word hlds__pred_table__Cast_HeadVar2_4 = hlds__pred_table__HeadVar__2_2;

#line 332 "pred_table.m"
    {
#line 332 "pred_table.m"
      hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pred_table_scalar_common_2[3], ((MR_Box) (hlds__pred_table__Cast_HeadVar1_3)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_4)));
    }
#line 332 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 332 "pred_table.m"
  }
#line 332 "pred_table.m"
}

#line 1073 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__univ_constraints_match_2_p_0(
#line 1073 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__1_1,
#line 1073 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2)
#line 1073 "pred_table.m"
{
#line 1076 "pred_table.m"
  while (MR_TRUE)
#line 1076 "pred_table.m"
    {
#line 1076 "pred_table.m"
      /* tailcall optimized into a loop */
#line 1076 "pred_table.m"
      {
#line 1076 "pred_table.m"
        MR_bool hlds__pred_table__succeeded;

#line 1076 "pred_table.m"
        if ((hlds__pred_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1076 "pred_table.m"
          hlds__pred_table__succeeded = (hlds__pred_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1076 "pred_table.m"
        else
#line 1078 "pred_table.m"
          {
#line 1078 "pred_table.m"
            MR_Word hlds__pred_table__TypeCtorInfo_11_11;
#line 1078 "pred_table.m"
            MR_Word hlds__pred_table__ProvenConstraint_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__1_1, (MR_Integer) 0)));
#line 1078 "pred_table.m"
            MR_Word hlds__pred_table__ProvenConstraints_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__1_1, (MR_Integer) 1)));
#line 1078 "pred_table.m"
            MR_Word hlds__pred_table__CalleeConstraint_5;
#line 1078 "pred_table.m"
            MR_Word hlds__pred_table__CalleeConstraints_6;
#line 1078 "pred_table.m"
            MR_Word hlds__pred_table__ClassName_7;
#line 1078 "pred_table.m"
            MR_Word hlds__pred_table__ProvenArgTypes_8;
#line 1078 "pred_table.m"
            MR_Integer hlds__pred_table__Arity_9;
#line 1078 "pred_table.m"
            MR_Word hlds__pred_table__CalleeArgTypes_10;
#line 1078 "pred_table.m"
            MR_Word hlds__pred_table__V_12_12;
#line 1078 "pred_table.m"
            MR_Integer hlds__pred_table__V_13_13;

#line 1078 "pred_table.m"
            hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1078 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 1078 "pred_table.m"
              {
#line 1078 "pred_table.m"
                hlds__pred_table__CalleeConstraint_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 1078 "pred_table.m"
                hlds__pred_table__CalleeConstraints_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));
#line 1079 "pred_table.m"
                hlds__pred_table__ClassName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__ProvenConstraint_3, (MR_Integer) 0)));
#line 1079 "pred_table.m"
                hlds__pred_table__ProvenArgTypes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__ProvenConstraint_3, (MR_Integer) 1)));
#line 3552 "hlds.pred_table.c"
                hlds__pred_table__TypeCtorInfo_11_11 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1080 "pred_table.m"
                {
#line 1080 "pred_table.m"
                  mercury__list__length_2_p_0(hlds__pred_table__TypeCtorInfo_11_11, hlds__pred_table__ProvenArgTypes_8, &hlds__pred_table__Arity_9);
                }
#line 1081 "pred_table.m"
                hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__CalleeConstraint_5, (MR_Integer) 0)));
#line 1081 "pred_table.m"
                hlds__pred_table__CalleeArgTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__CalleeConstraint_5, (MR_Integer) 1)));
#line 1081 "pred_table.m"
                {
#line 1081 "pred_table.m"
                  hlds__pred_table__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__pred_table__ClassName_7, hlds__pred_table__V_12_12);
                }
#line 1078 "pred_table.m"
                if (hlds__pred_table__succeeded)
#line 1078 "pred_table.m"
                  {
#line 1082 "pred_table.m"
                    {
#line 1082 "pred_table.m"
                      mercury__list__length_2_p_0(hlds__pred_table__TypeCtorInfo_11_11, hlds__pred_table__CalleeArgTypes_10, &hlds__pred_table__V_13_13);
                    }
#line 1082 "pred_table.m"
                    hlds__pred_table__succeeded = (hlds__pred_table__Arity_9 == hlds__pred_table__V_13_13);
#line 1078 "pred_table.m"
                    if (hlds__pred_table__succeeded)
#line 1083 "pred_table.m"
                      {
#line 1083 "pred_table.m"
                        /* direct tailcall eliminated */
#line 1083 "pred_table.m"
                        {
#line 1083 "pred_table.m"
                          MR_Word hlds__pred_table__HeadVar__1__tmp_copy_1 = hlds__pred_table__ProvenConstraints_4;
#line 1083 "pred_table.m"
                          MR_Word hlds__pred_table__HeadVar__2__tmp_copy_2 = hlds__pred_table__CalleeConstraints_6;

#line 1083 "pred_table.m"
                          hlds__pred_table__HeadVar__2_2 = hlds__pred_table__HeadVar__2__tmp_copy_2;
#line 1083 "pred_table.m"
                          hlds__pred_table__HeadVar__1_1 = hlds__pred_table__HeadVar__1__tmp_copy_1;
#line 1083 "pred_table.m"
                        }
#line 1083 "pred_table.m"
                        continue;
#line 1083 "pred_table.m"
                      }
#line 1078 "pred_table.m"
                  }
#line 1078 "pred_table.m"
              }
#line 1078 "pred_table.m"
          }
#line 1076 "pred_table.m"
        return hlds__pred_table__succeeded;
#line 1076 "pred_table.m"
      }
#line 1076 "pred_table.m"
      break;
#line 1076 "pred_table.m"
    }
#line 1073 "pred_table.m"
}

#line 963 "pred_table.m"
static void MR_CALL 
hlds__pred_table__insert_into_mna_index_6_p_0(
#line 963 "pred_table.m"
  MR_String hlds__pred_table__Name_7,
#line 963 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_8,
#line 963 "pred_table.m"
  MR_Word hlds__pred_table__PredId_9,
#line 963 "pred_table.m"
  MR_Word hlds__pred_table__Module_10,
#line 963 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_MNA_Index_0_14,
#line 963 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_MNA_Index_15)
#line 963 "pred_table.m"
{
#line 971 "pred_table.m"
  {
#line 971 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 971 "pred_table.m"
    MR_Word hlds__pred_table__MN_Arities0_12;
#line 971 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16;
#line 968 "pred_table.m"
    MR_Box hlds__pred_table__conv0_MN_Arities0_12;

#line 968 "pred_table.m"
    {
#line 968 "pred_table.m"
      hlds__pred_table__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 968 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_16_16, 0) = ((MR_Box) (hlds__pred_table__Module_10));
#line 968 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_16_16, 1) = ((MR_Box) (hlds__pred_table__Name_7));
#line 968 "pred_table.m"
    }
#line 968 "pred_table.m"
    {
#line 968 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__STATE_VARIABLE_MNA_Index_0_14, ((MR_Box) (hlds__pred_table__V_16_16)), &hlds__pred_table__conv0_MN_Arities0_12);
    }
#line 968 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 968 "pred_table.m"
      {
#line 968 "pred_table.m"
        hlds__pred_table__MN_Arities0_12 = ((MR_Word) hlds__pred_table__conv0_MN_Arities0_12);
#line 968 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 968 "pred_table.m"
      }
#line 971 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 969 "pred_table.m"
      {
#line 969 "pred_table.m"
        MR_Word hlds__pred_table__MN_Arities_13;

#line 969 "pred_table.m"
        {
#line 969 "pred_table.m"
          mercury__multi_map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (hlds__pred_table__Arity_8)), ((MR_Box) (hlds__pred_table__PredId_9)), hlds__pred_table__MN_Arities0_12, &hlds__pred_table__MN_Arities_13);
        }
#line 970 "pred_table.m"
        {
#line 970 "pred_table.m"
          mercury__map__det_update_4_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], ((MR_Box) (hlds__pred_table__V_16_16)), ((MR_Box) (hlds__pred_table__MN_Arities_13)), hlds__pred_table__STATE_VARIABLE_MNA_Index_0_14, hlds__pred_table__STATE_VARIABLE_MNA_Index_15);
        }
#line 969 "pred_table.m"
      }
#line 971 "pred_table.m"
    else
#line 972 "pred_table.m"
      {
#line 972 "pred_table.m"
        MR_Word hlds__pred_table__V_19_19;
#line 972 "pred_table.m"
        MR_Word hlds__pred_table__V_21_21;
#line 972 "pred_table.m"
        MR_Word hlds__pred_table__MN_Arities_23;

#line 972 "pred_table.m"
        {
#line 972 "pred_table.m"
          hlds__pred_table__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 972 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_19_19, 0) = ((MR_Box) (hlds__pred_table__PredId_9));
#line 972 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 972 "pred_table.m"
        }
#line 972 "pred_table.m"
        {
#line 972 "pred_table.m"
          hlds__pred_table__MN_Arities_23 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], ((MR_Box) (hlds__pred_table__Arity_8)), ((MR_Box) (hlds__pred_table__V_19_19)));
        }
#line 973 "pred_table.m"
        {
#line 973 "pred_table.m"
          hlds__pred_table__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 973 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_21_21, 0) = ((MR_Box) (hlds__pred_table__Module_10));
#line 973 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_21_21, 1) = ((MR_Box) (hlds__pred_table__Name_7));
#line 973 "pred_table.m"
        }
#line 973 "pred_table.m"
        {
#line 973 "pred_table.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], ((MR_Box) (hlds__pred_table__V_21_21)), ((MR_Box) (hlds__pred_table__MN_Arities_23)), hlds__pred_table__STATE_VARIABLE_MNA_Index_0_14, hlds__pred_table__STATE_VARIABLE_MNA_Index_15);
        }
#line 972 "pred_table.m"
      }
#line 971 "pred_table.m"
  }
#line 963 "pred_table.m"
}

#line 949 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_do_insert_14_p_0_1(
#line 949 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 949 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 949 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 949 "pred_table.m"
  MR_Box * hlds__pred_table__wrapper_arg_3)
#line 949 "pred_table.m"
{
#line 949 "pred_table.m"
  {
#line 949 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;
#line 949 "pred_table.m"
    MR_Word hlds__pred_table__conv0_STATE_VARIABLE_MNA_Index_15;

#line 949 "pred_table.m"
    {
#line 949 "pred_table.m"
      hlds__pred_table__insert_into_mna_index_6_p_0(((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 5))), ((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2), &hlds__pred_table__conv0_STATE_VARIABLE_MNA_Index_15);
    }
#line 949 "pred_table.m"
    *hlds__pred_table__wrapper_arg_3 = ((MR_Box) (hlds__pred_table__conv0_STATE_VARIABLE_MNA_Index_15));
#line 949 "pred_table.m"
  }
#line 949 "pred_table.m"
}

#line 920 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_do_insert_14_p_0(
#line 920 "pred_table.m"
  MR_Word hlds__pred_table__Module_15,
#line 920 "pred_table.m"
  MR_String hlds__pred_table__Name_16,
#line 920 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_17,
#line 920 "pred_table.m"
  MR_Word hlds__pred_table__NeedQual_18,
#line 920 "pred_table.m"
  MR_Word hlds__pred_table__MaybeQualInfo_19,
#line 920 "pred_table.m"
  MR_Word hlds__pred_table__PredId_20,
#line 920 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_AccessibilityTable_0_31,
#line 920 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_AccessibilityTable_32,
#line 920 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_N_Index_0_33,
#line 920 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_N_Index_34,
#line 920 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_NA_Index_0_35,
#line 920 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_NA_Index_36,
#line 920 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_MNA_Index_0_37,
#line 920 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_MNA_Index_38)
#line 920 "pred_table.m"
{
#line 928 "pred_table.m"
  {
#line 928 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 928 "pred_table.m"
    MR_Word hlds__pred_table__AccessibleByUnqualifiedName_26;
#line 928 "pred_table.m"
    MR_Word hlds__pred_table__AccessibleByPartiallyQualifiedNames_29;
#line 928 "pred_table.m"
    MR_Word hlds__pred_table__Access_30;
#line 928 "pred_table.m"
    MR_Word hlds__pred_table__STATE_VARIABLE_MNA_Index_42_42;

#line 939 "pred_table.m"
#line 939 "pred_table.m"
    switch (hlds__pred_table__NeedQual_18) {
#line 939 "pred_table.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 939 "pred_table.m"
      case (MR_Integer) 1:
#line 930 "pred_table.m"
        {
#line 930 "pred_table.m"
          MR_Word hlds__pred_table__TypeCtorInfo_46_46 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 930 "pred_table.m"
          MR_Word hlds__pred_table__NA_25;

#line 932 "pred_table.m"
          {
#line 932 "pred_table.m"
            mercury__multi_map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__pred_table__TypeCtorInfo_46_46, ((MR_Box) (hlds__pred_table__Name_16)), ((MR_Box) (hlds__pred_table__PredId_20)), hlds__pred_table__STATE_VARIABLE_N_Index_0_33, hlds__pred_table__STATE_VARIABLE_N_Index_34);
          }
#line 935 "pred_table.m"
          {
#line 935 "pred_table.m"
            hlds__pred_table__NA_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 935 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__NA_25, 0) = ((MR_Box) (hlds__pred_table__Name_16));
#line 935 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__NA_25, 1) = ((MR_Box) (hlds__pred_table__Arity_17));
#line 935 "pred_table.m"
          }
#line 936 "pred_table.m"
          {
#line 936 "pred_table.m"
            mercury__multi_map__set_4_p_0((MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0, hlds__pred_table__TypeCtorInfo_46_46, ((MR_Box) (hlds__pred_table__NA_25)), ((MR_Box) (hlds__pred_table__PredId_20)), hlds__pred_table__STATE_VARIABLE_NA_Index_0_35, hlds__pred_table__STATE_VARIABLE_NA_Index_36);
          }
#line 938 "pred_table.m"
          hlds__pred_table__AccessibleByUnqualifiedName_26 = (MR_Integer) 1;
#line 930 "pred_table.m"
        }
#line 939 "pred_table.m"
        break;
#line 939 "pred_table.m"
      case (MR_Integer) 0:
#line 940 "pred_table.m"
        {
#line 941 "pred_table.m"
          hlds__pred_table__AccessibleByUnqualifiedName_26 = (MR_Integer) 0;
#line 940 "pred_table.m"
          *hlds__pred_table__STATE_VARIABLE_N_Index_34 = hlds__pred_table__STATE_VARIABLE_N_Index_0_33;
#line 940 "pred_table.m"
          *hlds__pred_table__STATE_VARIABLE_NA_Index_36 = hlds__pred_table__STATE_VARIABLE_NA_Index_0_35;
#line 940 "pred_table.m"
        }
#line 939 "pred_table.m"
        break;
#line 939 "pred_table.m"
    }
#line 953 "pred_table.m"
    if ((hlds__pred_table__MaybeQualInfo_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 954 "pred_table.m"
      {
#line 955 "pred_table.m"
        hlds__pred_table__AccessibleByPartiallyQualifiedNames_29 = (MR_Integer) 0;
#line 954 "pred_table.m"
        hlds__pred_table__STATE_VARIABLE_MNA_Index_42_42 = hlds__pred_table__STATE_VARIABLE_MNA_Index_0_37;
#line 954 "pred_table.m"
      }
#line 953 "pred_table.m"
    else
#line 944 "pred_table.m"
      {
#line 944 "pred_table.m"
        MR_Word hlds__pred_table__QualInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__MaybeQualInfo_19, (MR_Integer) 0)));
#line 944 "pred_table.m"
        MR_Word hlds__pred_table__PartialQuals_28;
#line 944 "pred_table.m"
        MR_Word hlds__pred_table__V_41_41;
#line 949 "pred_table.m"
        MR_Box hlds__pred_table__conv1_STATE_VARIABLE_MNA_Index_42_42;

#line 948 "pred_table.m"
        {
#line 948 "pred_table.m"
          parse_tree__module_qual__get_partial_qualifiers_3_p_0(hlds__pred_table__Module_15, hlds__pred_table__QualInfo_27, &hlds__pred_table__PartialQuals_28);
        }
#line 949 "pred_table.m"
        {
#line 949 "pred_table.m"
          hlds__pred_table__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 949 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_4[1]));
#line 949 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 1) = ((MR_Box) (hlds__pred_table__predicate_table_do_insert_14_p_0_1));
#line 949 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 949 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 3) = ((MR_Box) (hlds__pred_table__Name_16));
#line 949 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 4) = ((MR_Box) (hlds__pred_table__Arity_17));
#line 949 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 5) = ((MR_Box) (hlds__pred_table__PredId_20));
#line 949 "pred_table.m"
        }
#line 949 "pred_table.m"
        {
#line 949 "pred_table.m"
          mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__pred_table_scalar_common_2[2], hlds__pred_table__V_41_41, hlds__pred_table__PartialQuals_28, ((MR_Box) (hlds__pred_table__STATE_VARIABLE_MNA_Index_0_37)), &hlds__pred_table__conv1_STATE_VARIABLE_MNA_Index_42_42);
        }
#line 949 "pred_table.m"
        hlds__pred_table__STATE_VARIABLE_MNA_Index_42_42 = ((MR_Word) hlds__pred_table__conv1_STATE_VARIABLE_MNA_Index_42_42);
#line 952 "pred_table.m"
        hlds__pred_table__AccessibleByPartiallyQualifiedNames_29 = (MR_Integer) 1;
#line 944 "pred_table.m"
      }
#line 958 "pred_table.m"
    {
#line 958 "pred_table.m"
      hlds__pred_table__insert_into_mna_index_6_p_0(hlds__pred_table__Name_16, hlds__pred_table__Arity_17, hlds__pred_table__PredId_20, hlds__pred_table__Module_15, hlds__pred_table__STATE_VARIABLE_MNA_Index_42_42, hlds__pred_table__STATE_VARIABLE_MNA_Index_38);
    }
#line 959 "pred_table.m"
    {
#line 959 "pred_table.m"
      hlds__pred_table__Access_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 959 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__Access_30, 0) = ((MR_Box) (hlds__pred_table__AccessibleByUnqualifiedName_26));
#line 959 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__Access_30, 1) = ((MR_Box) (hlds__pred_table__AccessibleByPartiallyQualifiedNames_29));
#line 959 "pred_table.m"
    }
#line 961 "pred_table.m"
    {
#line 961 "pred_table.m"
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0, ((MR_Box) (hlds__pred_table__PredId_20)), ((MR_Box) (hlds__pred_table__Access_30)), hlds__pred_table__STATE_VARIABLE_AccessibilityTable_0_31, hlds__pred_table__STATE_VARIABLE_AccessibilityTable_32);
    }
#line 928 "pred_table.m"
  }
#line 920 "pred_table.m"
}

#line 949 "pred_table.m"
static void MR_CALL 
hlds__pred_table__do_predicate_table_insert_7_p_0_1(
#line 949 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 949 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 949 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 949 "pred_table.m"
  MR_Box * hlds__pred_table__wrapper_arg_3)
#line 949 "pred_table.m"
{
#line 949 "pred_table.m"
  {
#line 949 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;
#line 949 "pred_table.m"
    MR_Word hlds__pred_table__conv0_STATE_VARIABLE_MNA_Index_15;

#line 949 "pred_table.m"
    {
#line 949 "pred_table.m"
      hlds__pred_table__insert_into_mna_index_6_p_0(((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 5))), ((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2), &hlds__pred_table__conv0_STATE_VARIABLE_MNA_Index_15);
    }
#line 949 "pred_table.m"
    *hlds__pred_table__wrapper_arg_3 = ((MR_Box) (hlds__pred_table__conv0_STATE_VARIABLE_MNA_Index_15));
#line 949 "pred_table.m"
  }
#line 949 "pred_table.m"
}

#line 859 "pred_table.m"
static void MR_CALL 
hlds__pred_table__do_predicate_table_insert_7_p_0(
#line 859 "pred_table.m"
  MR_Word hlds__pred_table__MaybePredId_8,
#line 859 "pred_table.m"
  MR_Word hlds__pred_table__PredInfo_9,
#line 859 "pred_table.m"
  MR_Word hlds__pred_table__NeedQual_10,
#line 859 "pred_table.m"
  MR_Word hlds__pred_table__MaybeQualInfo_11,
#line 859 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_12,
#line 859 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39,
#line 859 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_40)
#line 859 "pred_table.m"
{
#line 864 "pred_table.m"
  {
#line 864 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 864 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_43_43;
#line 864 "pred_table.m"
    MR_Word hlds__pred_table__Preds0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 0)));
#line 864 "pred_table.m"
    MR_Word hlds__pred_table__NextPredId0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 1)));
#line 864 "pred_table.m"
    MR_Word hlds__pred_table__ValidPredIds0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 2)));
#line 864 "pred_table.m"
    MR_Word hlds__pred_table__AccessibilityTable0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 3)));
#line 864 "pred_table.m"
    MR_Word hlds__pred_table__Pred_N_Index0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 4)));
#line 864 "pred_table.m"
    MR_Word hlds__pred_table__Pred_NA_Index0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 5)));
#line 864 "pred_table.m"
    MR_Word hlds__pred_table__Pred_MNA_Index0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 6)));
#line 864 "pred_table.m"
    MR_Word hlds__pred_table__Func_N_Index0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 7)));
#line 864 "pred_table.m"
    MR_Word hlds__pred_table__Func_NA_Index0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 8)));
#line 864 "pred_table.m"
    MR_Word hlds__pred_table__Func_MNA_Index0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 9)));
#line 864 "pred_table.m"
    MR_Word hlds__pred_table__Module_24;
#line 864 "pred_table.m"
    MR_String hlds__pred_table__Name_25;
#line 864 "pred_table.m"
    MR_Integer hlds__pred_table__Arity_26;
#line 864 "pred_table.m"
    MR_Word hlds__pred_table__NextPredId_27;
#line 864 "pred_table.m"
    MR_Word hlds__pred_table__PredOrFunc_28;
#line 864 "pred_table.m"
    MR_Word hlds__pred_table__AccessibilityTable_29;
#line 864 "pred_table.m"
    MR_Word hlds__pred_table__Pred_N_Index_30;
#line 864 "pred_table.m"
    MR_Word hlds__pred_table__Pred_NA_Index_31;
#line 864 "pred_table.m"
    MR_Word hlds__pred_table__Pred_MNA_Index_32;
#line 864 "pred_table.m"
    MR_Word hlds__pred_table__Func_N_Index_33;
#line 864 "pred_table.m"
    MR_Word hlds__pred_table__Func_NA_Index_34;
#line 864 "pred_table.m"
    MR_Word hlds__pred_table__Func_MNA_Index_35;
#line 864 "pred_table.m"
    MR_Word hlds__pred_table__Preds_37;
#line 864 "pred_table.m"
    MR_Word hlds__pred_table__ValidPredIds_38;

#line 869 "pred_table.m"
    {
#line 869 "pred_table.m"
      hlds__pred_table__Module_24 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__pred_table__PredInfo_9);
    }
#line 870 "pred_table.m"
    {
#line 870 "pred_table.m"
      hlds__pred_table__Name_25 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__pred_table__PredInfo_9);
    }
#line 871 "pred_table.m"
    {
#line 871 "pred_table.m"
      hlds__pred_table__Arity_26 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__pred_table__PredInfo_9);
    }
#line 875 "pred_table.m"
    if ((hlds__pred_table__MaybePredId_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 877 "pred_table.m"
      {
#line 878 "pred_table.m"
        *hlds__pred_table__PredId_12 = hlds__pred_table__NextPredId0_15;
#line 879 "pred_table.m"
        {
#line 879 "pred_table.m"
          hlds__hlds_pred__next_pred_id_2_p_0(*hlds__pred_table__PredId_12, &hlds__pred_table__NextPredId_27);
        }
#line 877 "pred_table.m"
      }
#line 875 "pred_table.m"
    else
#line 873 "pred_table.m"
      {
#line 873 "pred_table.m"
        *hlds__pred_table__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__MaybePredId_8, (MR_Integer) 0)));
#line 874 "pred_table.m"
        hlds__pred_table__NextPredId_27 = hlds__pred_table__NextPredId0_15;
#line 873 "pred_table.m"
      }
#line 883 "pred_table.m"
    {
#line 883 "pred_table.m"
      hlds__pred_table__PredOrFunc_28 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__pred_table__PredInfo_9);
    }
#line 896 "pred_table.m"
#line 896 "pred_table.m"
    switch (hlds__pred_table__PredOrFunc_28) {
#line 896 "pred_table.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 896 "pred_table.m"
      case (MR_Integer) 1:
#line 897 "pred_table.m"
        {
#line 897 "pred_table.m"
          MR_Integer hlds__pred_table__FuncArity_36 = (hlds__pred_table__Arity_26 - (MR_Integer) 1);
#line 897 "pred_table.m"
          MR_Word hlds__pred_table__AccessibleByUnqualifiedName_64;
#line 897 "pred_table.m"
          MR_Word hlds__pred_table__AccessibleByPartiallyQualifiedNames_67;
#line 897 "pred_table.m"
          MR_Word hlds__pred_table__Access_68;
#line 897 "pred_table.m"
          MR_Word hlds__pred_table__STATE_VARIABLE_MNA_Index_42_72;

#line 939 "pred_table.m"
#line 939 "pred_table.m"
          switch (hlds__pred_table__NeedQual_10) {
#line 939 "pred_table.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 939 "pred_table.m"
            case (MR_Integer) 1:
#line 930 "pred_table.m"
              {
#line 930 "pred_table.m"
                MR_Word hlds__pred_table__TypeCtorInfo_46_76 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 930 "pred_table.m"
                MR_Word hlds__pred_table__NA_63;

#line 932 "pred_table.m"
                {
#line 932 "pred_table.m"
                  mercury__multi_map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__pred_table__TypeCtorInfo_46_76, ((MR_Box) (hlds__pred_table__Name_25)), ((MR_Box) (*hlds__pred_table__PredId_12)), hlds__pred_table__Func_N_Index0_21, &hlds__pred_table__Func_N_Index_33);
                }
#line 935 "pred_table.m"
                {
#line 935 "pred_table.m"
                  hlds__pred_table__NA_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 935 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__NA_63, 0) = ((MR_Box) (hlds__pred_table__Name_25));
#line 935 "pred_table.m"
                  MR_hl_field(MR_mktag(0), hlds__pred_table__NA_63, 1) = ((MR_Box) (hlds__pred_table__FuncArity_36));
#line 935 "pred_table.m"
                }
#line 936 "pred_table.m"
                {
#line 936 "pred_table.m"
                  mercury__multi_map__set_4_p_0((MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0, hlds__pred_table__TypeCtorInfo_46_76, ((MR_Box) (hlds__pred_table__NA_63)), ((MR_Box) (*hlds__pred_table__PredId_12)), hlds__pred_table__Func_NA_Index0_22, &hlds__pred_table__Func_NA_Index_34);
                }
#line 938 "pred_table.m"
                hlds__pred_table__AccessibleByUnqualifiedName_64 = (MR_Integer) 1;
#line 930 "pred_table.m"
              }
#line 939 "pred_table.m"
              break;
#line 939 "pred_table.m"
            case (MR_Integer) 0:
#line 940 "pred_table.m"
              {
#line 941 "pred_table.m"
                hlds__pred_table__AccessibleByUnqualifiedName_64 = (MR_Integer) 0;
#line 940 "pred_table.m"
                hlds__pred_table__Func_N_Index_33 = hlds__pred_table__Func_N_Index0_21;
#line 940 "pred_table.m"
                hlds__pred_table__Func_NA_Index_34 = hlds__pred_table__Func_NA_Index0_22;
#line 940 "pred_table.m"
              }
#line 939 "pred_table.m"
              break;
#line 939 "pred_table.m"
          }
#line 953 "pred_table.m"
          if ((hlds__pred_table__MaybeQualInfo_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 954 "pred_table.m"
            {
#line 955 "pred_table.m"
              hlds__pred_table__AccessibleByPartiallyQualifiedNames_67 = (MR_Integer) 0;
#line 954 "pred_table.m"
              hlds__pred_table__STATE_VARIABLE_MNA_Index_42_72 = hlds__pred_table__Func_MNA_Index0_23;
#line 954 "pred_table.m"
            }
#line 953 "pred_table.m"
          else
#line 944 "pred_table.m"
            {
#line 944 "pred_table.m"
              MR_Word hlds__pred_table__QualInfo_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__MaybeQualInfo_11, (MR_Integer) 0)));
#line 944 "pred_table.m"
              MR_Word hlds__pred_table__PartialQuals_66;
#line 944 "pred_table.m"
              MR_Word hlds__pred_table__V_71_71;
#line 949 "pred_table.m"
              MR_Box hlds__pred_table__conv1_STATE_VARIABLE_MNA_Index_42_72;

#line 948 "pred_table.m"
              {
#line 948 "pred_table.m"
                parse_tree__module_qual__get_partial_qualifiers_3_p_0(hlds__pred_table__Module_24, hlds__pred_table__QualInfo_65, &hlds__pred_table__PartialQuals_66);
              }
#line 949 "pred_table.m"
              {
#line 949 "pred_table.m"
                hlds__pred_table__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 949 "pred_table.m"
                MR_hl_field(MR_mktag(0), hlds__pred_table__V_71_71, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_4[1]));
#line 949 "pred_table.m"
                MR_hl_field(MR_mktag(0), hlds__pred_table__V_71_71, 1) = ((MR_Box) (hlds__pred_table__do_predicate_table_insert_7_p_0_1));
#line 949 "pred_table.m"
                MR_hl_field(MR_mktag(0), hlds__pred_table__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 949 "pred_table.m"
                MR_hl_field(MR_mktag(0), hlds__pred_table__V_71_71, 3) = ((MR_Box) (hlds__pred_table__Name_25));
#line 949 "pred_table.m"
                MR_hl_field(MR_mktag(0), hlds__pred_table__V_71_71, 4) = ((MR_Box) (hlds__pred_table__FuncArity_36));
#line 949 "pred_table.m"
                MR_hl_field(MR_mktag(0), hlds__pred_table__V_71_71, 5) = ((MR_Box) (*hlds__pred_table__PredId_12));
#line 949 "pred_table.m"
              }
#line 949 "pred_table.m"
              {
#line 949 "pred_table.m"
                mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__pred_table_scalar_common_2[2], hlds__pred_table__V_71_71, hlds__pred_table__PartialQuals_66, ((MR_Box) (hlds__pred_table__Func_MNA_Index0_23)), &hlds__pred_table__conv1_STATE_VARIABLE_MNA_Index_42_72);
              }
#line 949 "pred_table.m"
              hlds__pred_table__STATE_VARIABLE_MNA_Index_42_72 = ((MR_Word) hlds__pred_table__conv1_STATE_VARIABLE_MNA_Index_42_72);
#line 952 "pred_table.m"
              hlds__pred_table__AccessibleByPartiallyQualifiedNames_67 = (MR_Integer) 1;
#line 944 "pred_table.m"
            }
#line 958 "pred_table.m"
          {
#line 958 "pred_table.m"
            hlds__pred_table__insert_into_mna_index_6_p_0(hlds__pred_table__Name_25, hlds__pred_table__FuncArity_36, *hlds__pred_table__PredId_12, hlds__pred_table__Module_24, hlds__pred_table__STATE_VARIABLE_MNA_Index_42_72, &hlds__pred_table__Func_MNA_Index_35);
          }
#line 959 "pred_table.m"
          {
#line 959 "pred_table.m"
            hlds__pred_table__Access_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 959 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__Access_68, 0) = ((MR_Box) (hlds__pred_table__AccessibleByUnqualifiedName_64));
#line 959 "pred_table.m"
            MR_hl_field(MR_mktag(0), hlds__pred_table__Access_68, 1) = ((MR_Box) (hlds__pred_table__AccessibleByPartiallyQualifiedNames_67));
#line 959 "pred_table.m"
          }
#line 961 "pred_table.m"
          {
#line 961 "pred_table.m"
            mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0, ((MR_Box) (*hlds__pred_table__PredId_12)), ((MR_Box) (hlds__pred_table__Access_68)), hlds__pred_table__AccessibilityTable0_17, &hlds__pred_table__AccessibilityTable_29);
          }
#line 906 "pred_table.m"
          hlds__pred_table__Pred_N_Index_30 = hlds__pred_table__Pred_N_Index0_18;
#line 907 "pred_table.m"
          hlds__pred_table__Pred_NA_Index_31 = hlds__pred_table__Pred_NA_Index0_19;
#line 908 "pred_table.m"
          hlds__pred_table__Pred_MNA_Index_32 = hlds__pred_table__Pred_MNA_Index0_20;
#line 897 "pred_table.m"
        }
#line 896 "pred_table.m"
        break;
#line 896 "pred_table.m"
      case (MR_Integer) 0:
#line 885 "pred_table.m"
        {
#line 886 "pred_table.m"
          {
#line 886 "pred_table.m"
            hlds__pred_table__predicate_table_do_insert_14_p_0(hlds__pred_table__Module_24, hlds__pred_table__Name_25, hlds__pred_table__Arity_26, hlds__pred_table__NeedQual_10, hlds__pred_table__MaybeQualInfo_11, *hlds__pred_table__PredId_12, hlds__pred_table__AccessibilityTable0_17, &hlds__pred_table__AccessibilityTable_29, hlds__pred_table__Pred_N_Index0_18, &hlds__pred_table__Pred_N_Index_30, hlds__pred_table__Pred_NA_Index0_19, &hlds__pred_table__Pred_NA_Index_31, hlds__pred_table__Pred_MNA_Index0_20, &hlds__pred_table__Pred_MNA_Index_32);
          }
#line 893 "pred_table.m"
          hlds__pred_table__Func_N_Index_33 = hlds__pred_table__Func_N_Index0_21;
#line 894 "pred_table.m"
          hlds__pred_table__Func_NA_Index_34 = hlds__pred_table__Func_NA_Index0_22;
#line 895 "pred_table.m"
          hlds__pred_table__Func_MNA_Index_35 = hlds__pred_table__Func_MNA_Index0_23;
#line 885 "pred_table.m"
        }
#line 896 "pred_table.m"
        break;
#line 896 "pred_table.m"
    }
#line 4288 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_43_43 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 912 "pred_table.m"
    {
#line 912 "pred_table.m"
      mercury__map__det_insert_4_p_0(hlds__pred_table__TypeCtorInfo_43_43, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ((MR_Box) (*hlds__pred_table__PredId_12)), ((MR_Box) (hlds__pred_table__PredInfo_9)), hlds__pred_table__Preds0_14, &hlds__pred_table__Preds_37);
    }
#line 913 "pred_table.m"
    {
#line 913 "pred_table.m"
      mercury__set_tree234__insert_3_p_0(hlds__pred_table__TypeCtorInfo_43_43, ((MR_Box) (*hlds__pred_table__PredId_12)), hlds__pred_table__ValidPredIds0_16, &hlds__pred_table__ValidPredIds_38);
    }
#line 915 "pred_table.m"
    {
#line 915 "pred_table.m"
      MR_Word base;
#line 915 "pred_table.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 915 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_PredicateTable_40 = base;
#line 915 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__Preds_37));
#line 915 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__NextPredId_27));
#line 915 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__ValidPredIds_38));
#line 915 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__AccessibilityTable_29));
#line 915 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__Pred_N_Index_30));
#line 915 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__Pred_NA_Index_31));
#line 915 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__Pred_MNA_Index_32));
#line 915 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__Func_N_Index_33));
#line 915 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__Func_NA_Index_34));
#line 915 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__Func_MNA_Index_35));
#line 915 "pred_table.m"
    }
#line 864 "pred_table.m"
  }
#line 859 "pred_table.m"
}

#line 813 "pred_table.m"
static void MR_CALL 
hlds__pred_table__reinsert_for_restrict_6_p_0(
#line 813 "pred_table.m"
  MR_Word hlds__pred_table__PartialQualInfo_7,
#line 813 "pred_table.m"
  MR_Word hlds__pred_table__Preds_8,
#line 813 "pred_table.m"
  MR_Word hlds__pred_table__AccessibilityTable_9,
#line 813 "pred_table.m"
  MR_Word hlds__pred_table__PredId_10,
#line 813 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_19,
#line 813 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_20)
#line 813 "pred_table.m"
{
#line 818 "pred_table.m"
  {
#line 818 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 818 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 818 "pred_table.m"
    MR_Word hlds__pred_table__PredInfo_12;
#line 818 "pred_table.m"
    MR_Word hlds__pred_table__Access_13;
#line 818 "pred_table.m"
    MR_Word hlds__pred_table__Unqualified_14;
#line 818 "pred_table.m"
    MR_Word hlds__pred_table__PartiallyQualified_15;
#line 818 "pred_table.m"
    MR_Word hlds__pred_table__NeedQual_16;
#line 818 "pred_table.m"
    MR_Word hlds__pred_table__MaybeQualInfo_17;
#line 818 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21;
#line 819 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredInfo_12;
#line 820 "pred_table.m"
    MR_Box hlds__pred_table__conv1_Access_13;
#line 836 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18;

#line 819 "pred_table.m"
    {
#line 819 "pred_table.m"
      hlds__pred_table__conv0_PredInfo_12 = mercury__map__lookup_2_f_0(hlds__pred_table__TypeCtorInfo_23_23, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__pred_table__Preds_8, ((MR_Box) (hlds__pred_table__PredId_10)));
    }
#line 819 "pred_table.m"
    hlds__pred_table__PredInfo_12 = ((MR_Word) hlds__pred_table__conv0_PredInfo_12);
#line 820 "pred_table.m"
    {
#line 820 "pred_table.m"
      hlds__pred_table__conv1_Access_13 = mercury__map__lookup_2_f_0(hlds__pred_table__TypeCtorInfo_23_23, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0, hlds__pred_table__AccessibilityTable_9, ((MR_Box) (hlds__pred_table__PredId_10)));
    }
#line 820 "pred_table.m"
    hlds__pred_table__Access_13 = ((MR_Word) hlds__pred_table__conv1_Access_13);
#line 821 "pred_table.m"
    hlds__pred_table__Unqualified_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__Access_13, (MR_Integer) 0)));
#line 821 "pred_table.m"
    hlds__pred_table__PartiallyQualified_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__Access_13, (MR_Integer) 1)));
#line 825 "pred_table.m"
#line 825 "pred_table.m"
    switch (hlds__pred_table__Unqualified_14) {
#line 825 "pred_table.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 825 "pred_table.m"
      case (MR_Integer) 0:
#line 827 "pred_table.m"
        hlds__pred_table__NeedQual_16 = (MR_Integer) 0;
#line 825 "pred_table.m"
        break;
#line 825 "pred_table.m"
      case (MR_Integer) 1:
#line 824 "pred_table.m"
        hlds__pred_table__NeedQual_16 = (MR_Integer) 1;
#line 825 "pred_table.m"
        break;
#line 825 "pred_table.m"
    }
#line 832 "pred_table.m"
#line 832 "pred_table.m"
    switch (hlds__pred_table__PartiallyQualified_15) {
#line 832 "pred_table.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 832 "pred_table.m"
      case (MR_Integer) 0:
#line 834 "pred_table.m"
        hlds__pred_table__MaybeQualInfo_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 832 "pred_table.m"
        break;
#line 832 "pred_table.m"
      case (MR_Integer) 1:
#line 831 "pred_table.m"
        {
#line 831 "pred_table.m"
          hlds__pred_table__MaybeQualInfo_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 831 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__MaybeQualInfo_17, 0) = ((MR_Box) (hlds__pred_table__PartialQualInfo_7));
#line 831 "pred_table.m"
        }
#line 832 "pred_table.m"
        break;
#line 832 "pred_table.m"
    }
#line 836 "pred_table.m"
    {
#line 836 "pred_table.m"
      hlds__pred_table__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 836 "pred_table.m"
      MR_hl_field(MR_mktag(1), hlds__pred_table__V_21_21, 0) = ((MR_Box) (hlds__pred_table__PredId_10));
#line 836 "pred_table.m"
    }
#line 836 "pred_table.m"
    {
#line 836 "pred_table.m"
      hlds__pred_table__do_predicate_table_insert_7_p_0(hlds__pred_table__V_21_21, hlds__pred_table__PredInfo_12, hlds__pred_table__NeedQual_16, hlds__pred_table__MaybeQualInfo_17, &hlds__pred_table__V_18_18, hlds__pred_table__STATE_VARIABLE_PredicateTable_0_19, hlds__pred_table__STATE_VARIABLE_PredicateTable_20);
    }
#line 818 "pred_table.m"
  }
#line 813 "pred_table.m"
}

#line 737 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__pred_id_matches_module_3_p_0(
#line 737 "pred_table.m"
  MR_Word hlds__pred_table__Preds_4,
#line 737 "pred_table.m"
  MR_Word hlds__pred_table__ModuleName_5,
#line 737 "pred_table.m"
  MR_Word hlds__pred_table__PredId_6)
#line 737 "pred_table.m"
{
#line 740 "pred_table.m"
  {
#line 740 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 740 "pred_table.m"
    MR_Word hlds__pred_table__PredInfo_7;
#line 740 "pred_table.m"
    MR_Word hlds__pred_table__V_10_10;
#line 741 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredInfo_7;

#line 741 "pred_table.m"
    {
#line 741 "pred_table.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__pred_table__Preds_4, ((MR_Box) (hlds__pred_table__PredId_6)), &hlds__pred_table__conv0_PredInfo_7);
    }
#line 741 "pred_table.m"
    hlds__pred_table__PredInfo_7 = ((MR_Word) hlds__pred_table__conv0_PredInfo_7);
#line 742 "pred_table.m"
    {
#line 742 "pred_table.m"
      hlds__pred_table__V_10_10 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__pred_table__PredInfo_7);
    }
#line 742 "pred_table.m"
    {
#line 742 "pred_table.m"
      hlds__pred_table__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__pred_table__ModuleName_5, hlds__pred_table__V_10_10);
    }
#line 740 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 740 "pred_table.m"
  }
#line 737 "pred_table.m"
}

#line 735 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0_1(
#line 735 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 735 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1)
#line 735 "pred_table.m"
{
#line 735 "pred_table.m"
  {
#line 735 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 735 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;

#line 735 "pred_table.m"
    {
#line 735 "pred_table.m"
      hlds__pred_table__succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) hlds__pred_table__wrapper_arg_1));
    }
#line 735 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 735 "pred_table.m"
  }
#line 735 "pred_table.m"
}

#line 647 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0(
#line 647 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_6,
#line 647 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_7,
#line 647 "pred_table.m"
  MR_Word hlds__pred_table__Module_8,
#line 647 "pred_table.m"
  MR_String hlds__pred_table__FuncName_9,
#line 647 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_10)
#line 647 "pred_table.m"
{
#line 652 "pred_table.m"
  {
#line 652 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 652 "pred_table.m"
    MR_Word hlds__pred_table__Func_MNA_Index_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 9)));
#line 653 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 0)));
#line 653 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 1)));
#line 653 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 2)));
#line 653 "pred_table.m"
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 3)));
#line 653 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 4)));
#line 653 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 5)));
#line 653 "pred_table.m"
    MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 6)));
#line 653 "pred_table.m"
    MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 7)));
#line 653 "pred_table.m"
    MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 8)));
#line 659 "pred_table.m"
    MR_Word hlds__pred_table__Arities_12;
#line 654 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15;
#line 654 "pred_table.m"
    MR_Box hlds__pred_table__conv0_Arities_12;

#line 654 "pred_table.m"
    {
#line 654 "pred_table.m"
      hlds__pred_table__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 654 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_15_15, 0) = ((MR_Box) (hlds__pred_table__Module_8));
#line 654 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_15_15, 1) = ((MR_Box) (hlds__pred_table__FuncName_9));
#line 654 "pred_table.m"
    }
#line 654 "pred_table.m"
    {
#line 654 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__Func_MNA_Index_11, ((MR_Box) (hlds__pred_table__V_15_15)), &hlds__pred_table__conv0_Arities_12);
    }
#line 654 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 654 "pred_table.m"
      {
#line 654 "pred_table.m"
        hlds__pred_table__Arities_12 = ((MR_Word) hlds__pred_table__conv0_Arities_12);
#line 654 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 654 "pred_table.m"
      }
#line 659 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 655 "pred_table.m"
      {
#line 655 "pred_table.m"
        MR_Word hlds__pred_table__PredIdLists_13;
#line 655 "pred_table.m"
        MR_Word hlds__pred_table__PredIds0_14;

#line 655 "pred_table.m"
        {
#line 655 "pred_table.m"
          mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__Arities_12, &hlds__pred_table__PredIdLists_13);
        }
#line 656 "pred_table.m"
        {
#line 656 "pred_table.m"
          mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__PredIdLists_13, &hlds__pred_table__PredIds0_14);
        }
#line 730 "pred_table.m"
#line 730 "pred_table.m"
        switch (hlds__pred_table__IsFullyQualified_7) {
#line 730 "pred_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 730 "pred_table.m"
          case (MR_Integer) 0:
#line 733 "pred_table.m"
            {
#line 733 "pred_table.m"
              MR_Word hlds__pred_table__Preds_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 0)));
#line 733 "pred_table.m"
              MR_Word hlds__pred_table__V_41_41;
#line 388 "pred_table.m"
              MR_Word hlds__pred_table__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 1)));
#line 388 "pred_table.m"
              MR_Word hlds__pred_table__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 2)));
#line 388 "pred_table.m"
              MR_Word hlds__pred_table__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 3)));
#line 388 "pred_table.m"
              MR_Word hlds__pred_table__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 4)));
#line 388 "pred_table.m"
              MR_Word hlds__pred_table__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 5)));
#line 388 "pred_table.m"
              MR_Word hlds__pred_table__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 6)));
#line 388 "pred_table.m"
              MR_Word hlds__pred_table__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 7)));
#line 388 "pred_table.m"
              MR_Word hlds__pred_table__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 8)));
#line 388 "pred_table.m"
              MR_Word hlds__pred_table__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 9)));

#line 735 "pred_table.m"
              {
#line 735 "pred_table.m"
                hlds__pred_table__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 735 "pred_table.m"
                MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
#line 735 "pred_table.m"
                MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0_1));
#line 735 "pred_table.m"
                MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 735 "pred_table.m"
                MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 3) = ((MR_Box) (hlds__pred_table__Preds_38));
#line 735 "pred_table.m"
                MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 4) = ((MR_Box) (hlds__pred_table__Module_8));
#line 735 "pred_table.m"
              }
#line 735 "pred_table.m"
              {
#line 735 "pred_table.m"
                mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__V_41_41, hlds__pred_table__PredIds0_14, hlds__pred_table__PredIds_10);
              }
#line 733 "pred_table.m"
            }
#line 730 "pred_table.m"
            break;
#line 730 "pred_table.m"
          case (MR_Integer) 1:
#line 731 "pred_table.m"
            *hlds__pred_table__PredIds_10 = hlds__pred_table__PredIds0_14;
#line 730 "pred_table.m"
            break;
#line 730 "pred_table.m"
        }
#line 655 "pred_table.m"
      }
#line 659 "pred_table.m"
    else
#line 660 "pred_table.m"
      *hlds__pred_table__PredIds_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 652 "pred_table.m"
  }
#line 647 "pred_table.m"
}

#line 435 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_remove_from_index_10_p_0(
#line 435 "pred_table.m"
  MR_Word hlds__pred_table__Module_11,
#line 435 "pred_table.m"
  MR_String hlds__pred_table__Name_12,
#line 435 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_13,
#line 435 "pred_table.m"
  MR_Word hlds__pred_table__PredId_14,
#line 435 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_N_0_18,
#line 435 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_N_19,
#line 435 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_NA_0_20,
#line 435 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_NA_21,
#line 435 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_MNA_0_22,
#line 435 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_MNA_23)
#line 435 "pred_table.m"
{
#line 441 "pred_table.m"
  {
#line 441 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 441 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_28_28 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 441 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_29_29;
#line 441 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_28_81;
#line 441 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_29_82;
#line 441 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_30_83;
#line 441 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_31_84;
#line 441 "pred_table.m"
    MR_Word hlds__pred_table__V_25_25;
#line 441 "pred_table.m"
    MR_Word hlds__pred_table__Arities0_67;
#line 441 "pred_table.m"
    MR_Word hlds__pred_table__PredIds0_68;
#line 441 "pred_table.m"
    MR_Word hlds__pred_table__PredIds_69;
#line 441 "pred_table.m"
    MR_Word hlds__pred_table__V_73_73;
#line 459 "pred_table.m"
    MR_Word hlds__pred_table__NamePredIds0_35;
#line 450 "pred_table.m"
    MR_Box hlds__pred_table__conv0_NamePredIds0_35;
#line 459 "pred_table.m"
    MR_Word hlds__pred_table__NamePredIds0_50;
#line 450 "pred_table.m"
    MR_Box hlds__pred_table__conv1_NamePredIds0_50;
#line 468 "pred_table.m"
    MR_Box hlds__pred_table__conv2_Arities0_67;
#line 469 "pred_table.m"
    MR_Box hlds__pred_table__conv3_PredIds0_68;

#line 450 "pred_table.m"
    {
#line 450 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0(hlds__pred_table__TypeCtorInfo_28_28, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__STATE_VARIABLE_N_0_18, ((MR_Box) (hlds__pred_table__Name_12)), &hlds__pred_table__conv0_NamePredIds0_35);
    }
#line 450 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 450 "pred_table.m"
      {
#line 450 "pred_table.m"
        hlds__pred_table__NamePredIds0_35 = ((MR_Word) hlds__pred_table__conv0_NamePredIds0_35);
#line 450 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 450 "pred_table.m"
      }
#line 459 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 451 "pred_table.m"
      {
#line 451 "pred_table.m"
        MR_Word hlds__pred_table__NamePredIds_36;

#line 451 "pred_table.m"
        {
#line 451 "pred_table.m"
          mercury__list__delete_all_3_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__NamePredIds0_35, ((MR_Box) (hlds__pred_table__PredId_14)), &hlds__pred_table__NamePredIds_36);
        }
#line 455 "pred_table.m"
        if ((hlds__pred_table__NamePredIds_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 453 "pred_table.m"
          {
#line 454 "pred_table.m"
            {
#line 454 "pred_table.m"
              mercury__map__delete_3_p_0(hlds__pred_table__TypeCtorInfo_28_28, (MR_Word) &hlds__pred_table_scalar_common_1[0], ((MR_Box) (hlds__pred_table__Name_12)), hlds__pred_table__STATE_VARIABLE_N_0_18, hlds__pred_table__STATE_VARIABLE_N_19);
            }
#line 453 "pred_table.m"
          }
#line 455 "pred_table.m"
        else
#line 456 "pred_table.m"
          {
#line 457 "pred_table.m"
            {
#line 457 "pred_table.m"
              mercury__map__det_update_4_p_0(hlds__pred_table__TypeCtorInfo_28_28, (MR_Word) &hlds__pred_table_scalar_common_1[0], ((MR_Box) (hlds__pred_table__Name_12)), ((MR_Box) (hlds__pred_table__NamePredIds_36)), hlds__pred_table__STATE_VARIABLE_N_0_18, hlds__pred_table__STATE_VARIABLE_N_19);
            }
#line 456 "pred_table.m"
          }
#line 451 "pred_table.m"
      }
#line 459 "pred_table.m"
    else
#line 459 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_N_19 = hlds__pred_table__STATE_VARIABLE_N_0_18;
#line 443 "pred_table.m"
    {
#line 443 "pred_table.m"
      hlds__pred_table__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 443 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_25_25, 0) = ((MR_Box) (hlds__pred_table__Name_12));
#line 443 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_25_25, 1) = ((MR_Box) (hlds__pred_table__Arity_13));
#line 443 "pred_table.m"
    }
#line 4828 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_29_29 = (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0;
#line 450 "pred_table.m"
    {
#line 450 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0(hlds__pred_table__TypeCtorInfo_29_29, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__STATE_VARIABLE_NA_0_20, ((MR_Box) (hlds__pred_table__V_25_25)), &hlds__pred_table__conv1_NamePredIds0_50);
    }
#line 450 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 450 "pred_table.m"
      {
#line 450 "pred_table.m"
        hlds__pred_table__NamePredIds0_50 = ((MR_Word) hlds__pred_table__conv1_NamePredIds0_50);
#line 450 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 450 "pred_table.m"
      }
#line 459 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 451 "pred_table.m"
      {
#line 451 "pred_table.m"
        MR_Word hlds__pred_table__NamePredIds_51;

#line 451 "pred_table.m"
        {
#line 451 "pred_table.m"
          mercury__list__delete_all_3_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__NamePredIds0_50, ((MR_Box) (hlds__pred_table__PredId_14)), &hlds__pred_table__NamePredIds_51);
        }
#line 455 "pred_table.m"
        if ((hlds__pred_table__NamePredIds_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 453 "pred_table.m"
          {
#line 454 "pred_table.m"
            {
#line 454 "pred_table.m"
              mercury__map__delete_3_p_0(hlds__pred_table__TypeCtorInfo_29_29, (MR_Word) &hlds__pred_table_scalar_common_1[0], ((MR_Box) (hlds__pred_table__V_25_25)), hlds__pred_table__STATE_VARIABLE_NA_0_20, hlds__pred_table__STATE_VARIABLE_NA_21);
            }
#line 453 "pred_table.m"
          }
#line 455 "pred_table.m"
        else
#line 456 "pred_table.m"
          {
#line 457 "pred_table.m"
            {
#line 457 "pred_table.m"
              mercury__map__det_update_4_p_0(hlds__pred_table__TypeCtorInfo_29_29, (MR_Word) &hlds__pred_table_scalar_common_1[0], ((MR_Box) (hlds__pred_table__V_25_25)), ((MR_Box) (hlds__pred_table__NamePredIds_51)), hlds__pred_table__STATE_VARIABLE_NA_0_20, hlds__pred_table__STATE_VARIABLE_NA_21);
            }
#line 456 "pred_table.m"
          }
#line 451 "pred_table.m"
      }
#line 459 "pred_table.m"
    else
#line 459 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_NA_21 = hlds__pred_table__STATE_VARIABLE_NA_0_20;
#line 468 "pred_table.m"
    {
#line 468 "pred_table.m"
      hlds__pred_table__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 468 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_73_73, 0) = ((MR_Box) (hlds__pred_table__Module_11));
#line 468 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_73_73, 1) = ((MR_Box) (hlds__pred_table__Name_12));
#line 468 "pred_table.m"
    }
#line 4895 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_28_81 = (MR_Word) &hlds__pred_table_scalar_common_2[0];
#line 4897 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_29_82 = (MR_Word) &hlds__pred_table_scalar_common_2[1];
#line 468 "pred_table.m"
    {
#line 468 "pred_table.m"
      mercury__map__lookup_3_p_0(hlds__pred_table__TypeInfo_28_81, hlds__pred_table__TypeInfo_29_82, hlds__pred_table__STATE_VARIABLE_MNA_0_22, ((MR_Box) (hlds__pred_table__V_73_73)), &hlds__pred_table__conv2_Arities0_67);
    }
#line 468 "pred_table.m"
    hlds__pred_table__Arities0_67 = ((MR_Word) hlds__pred_table__conv2_Arities0_67);
#line 4906 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_30_83 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 4908 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_31_84 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
#line 469 "pred_table.m"
    {
#line 469 "pred_table.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__pred_table__TypeInfo_31_84, hlds__pred_table__Arities0_67, hlds__pred_table__Arity_13, &hlds__pred_table__conv3_PredIds0_68);
    }
#line 469 "pred_table.m"
    hlds__pred_table__PredIds0_68 = ((MR_Word) hlds__pred_table__conv3_PredIds0_68);
#line 470 "pred_table.m"
    {
#line 470 "pred_table.m"
      mercury__list__delete_all_3_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__PredIds0_68, ((MR_Box) (hlds__pred_table__PredId_14)), &hlds__pred_table__PredIds_69);
    }
#line 479 "pred_table.m"
    if ((hlds__pred_table__PredIds_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 472 "pred_table.m"
      {
#line 472 "pred_table.m"
        MR_Word hlds__pred_table__Arities_70;

#line 473 "pred_table.m"
        {
#line 473 "pred_table.m"
          mercury__map__delete_3_p_0(hlds__pred_table__TypeCtorInfo_30_83, hlds__pred_table__TypeInfo_31_84, ((MR_Box) (hlds__pred_table__Arity_13)), hlds__pred_table__Arities0_67, &hlds__pred_table__Arities_70);
        }
#line 474 "pred_table.m"
        {
#line 474 "pred_table.m"
          hlds__pred_table__succeeded = mercury__map__is_empty_1_p_0(hlds__pred_table__TypeCtorInfo_30_83, hlds__pred_table__TypeInfo_31_84, hlds__pred_table__Arities_70);
        }
#line 476 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 475 "pred_table.m"
          {
#line 475 "pred_table.m"
            mercury__map__delete_3_p_0(hlds__pred_table__TypeInfo_28_81, hlds__pred_table__TypeInfo_29_82, ((MR_Box) (hlds__pred_table__V_73_73)), hlds__pred_table__STATE_VARIABLE_MNA_0_22, hlds__pred_table__STATE_VARIABLE_MNA_23);
          }
#line 476 "pred_table.m"
        else
#line 477 "pred_table.m"
          {
#line 477 "pred_table.m"
            mercury__map__det_update_4_p_0(hlds__pred_table__TypeInfo_28_81, hlds__pred_table__TypeInfo_29_82, ((MR_Box) (hlds__pred_table__V_73_73)), ((MR_Box) (hlds__pred_table__Arities_70)), hlds__pred_table__STATE_VARIABLE_MNA_0_22, hlds__pred_table__STATE_VARIABLE_MNA_23);
          }
#line 472 "pred_table.m"
      }
#line 479 "pred_table.m"
    else
#line 480 "pred_table.m"
      {
#line 480 "pred_table.m"
        MR_Word hlds__pred_table__Arities_80;

#line 481 "pred_table.m"
        {
#line 481 "pred_table.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(hlds__pred_table__TypeInfo_31_84, hlds__pred_table__Arity_13, ((MR_Box) (hlds__pred_table__PredIds_69)), hlds__pred_table__Arities0_67, &hlds__pred_table__Arities_80);
        }
#line 482 "pred_table.m"
        {
#line 482 "pred_table.m"
          mercury__map__det_update_4_p_0(hlds__pred_table__TypeInfo_28_81, hlds__pred_table__TypeInfo_29_82, ((MR_Box) (hlds__pred_table__V_73_73)), ((MR_Box) (hlds__pred_table__Arities_80)), hlds__pred_table__STATE_VARIABLE_MNA_0_22, hlds__pred_table__STATE_VARIABLE_MNA_23);
        }
#line 480 "pred_table.m"
      }
#line 441 "pred_table.m"
  }
#line 435 "pred_table.m"
}

#line 286 "pred_table.m"
void MR_CALL 
hlds__pred_table__get_next_pred_id_2_p_0(
#line 286 "pred_table.m"
  MR_Word hlds__pred_table__PredTable_3,
#line 286 "pred_table.m"
  MR_Word * hlds__pred_table__NextPredId_4)
#line 286 "pred_table.m"
{
#line 1219 "pred_table.m"
  {
#line 1219 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 1219 "pred_table.m"
    MR_Word hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 0)));
#line 1219 "pred_table.m"
    MR_Word hlds__pred_table__V_6_6;
#line 1219 "pred_table.m"
    MR_Word hlds__pred_table__V_7_7;
#line 1219 "pred_table.m"
    MR_Word hlds__pred_table__V_8_8;
#line 1219 "pred_table.m"
    MR_Word hlds__pred_table__V_9_9;
#line 1219 "pred_table.m"
    MR_Word hlds__pred_table__V_10_10;
#line 1219 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11;
#line 1219 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12;
#line 1219 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13;

#line 1219 "pred_table.m"
    *hlds__pred_table__NextPredId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 1)));
#line 1219 "pred_table.m"
    hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 2)));
#line 1219 "pred_table.m"
    hlds__pred_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 3)));
#line 1219 "pred_table.m"
    hlds__pred_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 4)));
#line 1219 "pred_table.m"
    hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 5)));
#line 1219 "pred_table.m"
    hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 6)));
#line 1219 "pred_table.m"
    hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 7)));
#line 1219 "pred_table.m"
    hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 8)));
#line 1219 "pred_table.m"
    hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 9)));
#line 1219 "pred_table.m"
  }
#line 286 "pred_table.m"
}

#line 282 "pred_table.m"
void MR_CALL 
hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(
#line 282 "pred_table.m"
  MR_Word hlds__pred_table__Module_9,
#line 282 "pred_table.m"
  MR_Word hlds__pred_table__ModuleName_10,
#line 282 "pred_table.m"
  MR_String hlds__pred_table__ProcName_11,
#line 282 "pred_table.m"
  MR_Word hlds__pred_table__PredOrFunc_12,
#line 282 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_13,
#line 282 "pred_table.m"
  MR_Word hlds__pred_table__ModeNo_14,
#line 282 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_15,
#line 282 "pred_table.m"
  MR_Integer * hlds__pred_table__ProcId_16)
#line 282 "pred_table.m"
{
#line 1155 "pred_table.m"
  {
#line 1155 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 1155 "pred_table.m"
    MR_Word hlds__pred_table__PredTable_17;
#line 1155 "pred_table.m"
    MR_Word hlds__pred_table__PredInfo_20;
#line 1155 "pred_table.m"
    MR_Word hlds__pred_table__ProcIds_21;
#line 1170 "pred_table.m"
    MR_Word hlds__pred_table__PredIdPrime_19;
#line 1166 "pred_table.m"
    MR_Word hlds__pred_table__PredIds_18;
#line 1166 "pred_table.m"
    MR_Word hlds__pred_table__V_26_26;

#line 1156 "pred_table.m"
    {
#line 1156 "pred_table.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__pred_table__Module_9, &hlds__pred_table__PredTable_17);
    }
#line 1162 "pred_table.m"
#line 1162 "pred_table.m"
    switch (hlds__pred_table__PredOrFunc_12) {
#line 1162 "pred_table.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1162 "pred_table.m"
      case (MR_Integer) 1:
#line 1163 "pred_table.m"
        {
#line 1164 "pred_table.m"
          {
#line 1164 "pred_table.m"
            hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredTable_17, (MR_Integer) 0, hlds__pred_table__ModuleName_10, hlds__pred_table__ProcName_11, hlds__pred_table__Arity_13, &hlds__pred_table__PredIds_18);
          }
#line 1163 "pred_table.m"
        }
#line 1162 "pred_table.m"
        break;
#line 1162 "pred_table.m"
      case (MR_Integer) 0:
#line 1159 "pred_table.m"
        {
#line 1160 "pred_table.m"
          {
#line 1160 "pred_table.m"
            hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredTable_17, (MR_Integer) 0, hlds__pred_table__ModuleName_10, hlds__pred_table__ProcName_11, hlds__pred_table__Arity_13, &hlds__pred_table__PredIds_18);
          }
#line 1159 "pred_table.m"
        }
#line 1162 "pred_table.m"
        break;
#line 1162 "pred_table.m"
    }
#line 1167 "pred_table.m"
    hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__PredIds_18)) == (MR_mktag((MR_Integer) 1)));
#line 1167 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 1167 "pred_table.m"
      {
#line 1167 "pred_table.m"
        hlds__pred_table__PredIdPrime_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__PredIds_18, (MR_Integer) 0)));
#line 1167 "pred_table.m"
        hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__PredIds_18, (MR_Integer) 1)));
#line 1167 "pred_table.m"
        hlds__pred_table__succeeded = (hlds__pred_table__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1167 "pred_table.m"
      }
#line 1170 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 1169 "pred_table.m"
      *hlds__pred_table__PredId_15 = hlds__pred_table__PredIdPrime_19;
#line 1170 "pred_table.m"
    else
#line 1189 "pred_table.m"
      {
#line 1189 "pred_table.m"
        MR_Word hlds__pred_table__PredIdPrime_75;
#line 1185 "pred_table.m"
        MR_Word hlds__pred_table__V_33_33;
#line 1185 "pred_table.m"
        MR_Word hlds__pred_table__PredIds_73;

#line 1181 "pred_table.m"
#line 1181 "pred_table.m"
        switch (hlds__pred_table__PredOrFunc_12) {
#line 1181 "pred_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1181 "pred_table.m"
          case (MR_Integer) 1:
#line 1182 "pred_table.m"
            {
#line 1182 "pred_table.m"
              MR_Integer hlds__pred_table__V_28_28 = (hlds__pred_table__Arity_13 - (MR_Integer) 1);

#line 1183 "pred_table.m"
              {
#line 1183 "pred_table.m"
                hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredTable_17, (MR_Integer) 0, hlds__pred_table__ModuleName_10, hlds__pred_table__ProcName_11, hlds__pred_table__V_28_28, &hlds__pred_table__PredIds_73);
              }
#line 1182 "pred_table.m"
            }
#line 1181 "pred_table.m"
            break;
#line 1181 "pred_table.m"
          case (MR_Integer) 0:
#line 1178 "pred_table.m"
            {
#line 1178 "pred_table.m"
              MR_Integer hlds__pred_table__V_31_31 = (hlds__pred_table__Arity_13 - (MR_Integer) 1);

#line 1179 "pred_table.m"
              {
#line 1179 "pred_table.m"
                hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredTable_17, (MR_Integer) 0, hlds__pred_table__ModuleName_10, hlds__pred_table__ProcName_11, hlds__pred_table__V_31_31, &hlds__pred_table__PredIds_73);
              }
#line 1178 "pred_table.m"
            }
#line 1181 "pred_table.m"
            break;
#line 1181 "pred_table.m"
        }
#line 1186 "pred_table.m"
        hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__PredIds_73)) == (MR_mktag((MR_Integer) 1)));
#line 1186 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 1186 "pred_table.m"
          {
#line 1186 "pred_table.m"
            hlds__pred_table__PredIdPrime_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__PredIds_73, (MR_Integer) 0)));
#line 1186 "pred_table.m"
            hlds__pred_table__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__PredIds_73, (MR_Integer) 1)));
#line 1186 "pred_table.m"
            hlds__pred_table__succeeded = (hlds__pred_table__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1186 "pred_table.m"
          }
#line 1189 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 1188 "pred_table.m"
          *hlds__pred_table__PredId_15 = hlds__pred_table__PredIdPrime_75;
#line 1189 "pred_table.m"
        else
#line 1190 "pred_table.m"
          {
#line 1190 "pred_table.m"
            MR_String hlds__pred_table__V_36_36;
#line 1190 "pred_table.m"
            MR_String hlds__pred_table__V_40_40;
#line 1190 "pred_table.m"
            MR_String hlds__pred_table__V_79_79;
#line 1190 "pred_table.m"
            MR_Word hlds__pred_table__V_85_85;
#line 1190 "pred_table.m"
            MR_String hlds__pred_table__V_87_87;
#line 1190 "pred_table.m"
            MR_String hlds__pred_table__V_88_88;
#line 1190 "pred_table.m"
            MR_String hlds__pred_table__V_95_95;
#line 1190 "pred_table.m"
            MR_String hlds__pred_table__V_97_97;
#line 1190 "pred_table.m"
            MR_String hlds__pred_table__V_98_98;
#line 1190 "pred_table.m"
            MR_String hlds__pred_table__V_105_105;

#line 1192 "pred_table.m"
            {
#line 1192 "pred_table.m"
              hlds__pred_table__V_40_40 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__pred_table__ModuleName_10);
            }
#line 5226 "hlds.pred_table.c"
            hlds__pred_table__V_85_85 = (MR_Word) &hlds__pred_table_scalar_common_6[0];
#line 1192 "pred_table.m"
            {
#line 1192 "pred_table.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__pred_table__V_85_85, hlds__pred_table__Arity_13, &hlds__pred_table__V_79_79);
            }
#line 1191 "pred_table.m"
            {
#line 1191 "pred_table.m"
              hlds__pred_table__V_87_87 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__pred_table__V_79_79);
            }
#line 1192 "pred_table.m"
            {
#line 1192 "pred_table.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__pred_table__V_85_85, hlds__pred_table__ProcName_11, &hlds__pred_table__V_88_88);
            }
#line 1191 "pred_table.m"
            {
#line 1191 "pred_table.m"
              hlds__pred_table__V_95_95 = mercury__string__f_43_43_2_f_0(hlds__pred_table__V_88_88, hlds__pred_table__V_87_87);
            }
#line 1191 "pred_table.m"
            {
#line 1191 "pred_table.m"
              hlds__pred_table__V_97_97 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__pred_table__V_95_95);
            }
#line 1192 "pred_table.m"
            {
#line 1192 "pred_table.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__pred_table__V_85_85, hlds__pred_table__V_40_40, &hlds__pred_table__V_98_98);
            }
#line 1191 "pred_table.m"
            {
#line 1191 "pred_table.m"
              hlds__pred_table__V_105_105 = mercury__string__f_43_43_2_f_0(hlds__pred_table__V_98_98, hlds__pred_table__V_97_97);
            }
#line 1191 "pred_table.m"
            {
#line 1191 "pred_table.m"
              hlds__pred_table__V_36_36 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t locate ", hlds__pred_table__V_105_105);
            }
#line 1190 "pred_table.m"
            {
#line 1190 "pred_table.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.lookup_builtin_pred_proc_id\'/8", hlds__pred_table__V_36_36);
#line 1190 "pred_table.m"
              return;
            }
#line 1190 "pred_table.m"
          }
#line 1189 "pred_table.m"
      }
#line 1194 "pred_table.m"
    {
#line 1194 "pred_table.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__pred_table__Module_9, *hlds__pred_table__PredId_15, &hlds__pred_table__PredInfo_20);
    }
#line 1195 "pred_table.m"
    {
#line 1195 "pred_table.m"
      hlds__pred_table__ProcIds_21 = hlds__hlds_pred__pred_info_procids_1_f_0(hlds__pred_table__PredInfo_20);
    }
#line 1206 "pred_table.m"
    if ((hlds__pred_table__ModeNo_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1200 "pred_table.m"
      {
#line 1200 "pred_table.m"
        MR_Integer hlds__pred_table__ProcId0_22;
#line 1198 "pred_table.m"
        MR_Word hlds__pred_table__V_60_60;

#line 1198 "pred_table.m"
        hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__ProcIds_21)) == (MR_mktag((MR_Integer) 1)));
#line 1198 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 1198 "pred_table.m"
          {
#line 1198 "pred_table.m"
            hlds__pred_table__ProcId0_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__ProcIds_21, (MR_Integer) 0)));
#line 1198 "pred_table.m"
            hlds__pred_table__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__ProcIds_21, (MR_Integer) 1)));
#line 1198 "pred_table.m"
            hlds__pred_table__succeeded = (hlds__pred_table__V_60_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1198 "pred_table.m"
          }
#line 1200 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 1199 "pred_table.m"
          *hlds__pred_table__ProcId_16 = hlds__pred_table__ProcId0_22;
#line 1200 "pred_table.m"
        else
#line 1201 "pred_table.m"
          {
#line 1201 "pred_table.m"
            MR_String hlds__pred_table__V_63_63;
#line 1201 "pred_table.m"
            MR_String hlds__pred_table__V_67_67;
#line 1201 "pred_table.m"
            MR_String hlds__pred_table__V_107_107;
#line 1201 "pred_table.m"
            MR_Word hlds__pred_table__V_113_113;
#line 1201 "pred_table.m"
            MR_String hlds__pred_table__V_115_115;
#line 1201 "pred_table.m"
            MR_String hlds__pred_table__V_116_116;
#line 1201 "pred_table.m"
            MR_String hlds__pred_table__V_123_123;
#line 1201 "pred_table.m"
            MR_String hlds__pred_table__V_125_125;
#line 1201 "pred_table.m"
            MR_String hlds__pred_table__V_126_126;
#line 1201 "pred_table.m"
            MR_String hlds__pred_table__V_133_133;

#line 1203 "pred_table.m"
            {
#line 1203 "pred_table.m"
              hlds__pred_table__V_67_67 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__pred_table__ModuleName_10);
            }
#line 5346 "hlds.pred_table.c"
            hlds__pred_table__V_113_113 = (MR_Word) &hlds__pred_table_scalar_common_6[0];
#line 1204 "pred_table.m"
            {
#line 1204 "pred_table.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__pred_table__V_113_113, hlds__pred_table__Arity_13, &hlds__pred_table__V_107_107);
            }
#line 1202 "pred_table.m"
            {
#line 1202 "pred_table.m"
              hlds__pred_table__V_115_115 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__pred_table__V_107_107);
            }
#line 1204 "pred_table.m"
            {
#line 1204 "pred_table.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__pred_table__V_113_113, hlds__pred_table__ProcName_11, &hlds__pred_table__V_116_116);
            }
#line 1202 "pred_table.m"
            {
#line 1202 "pred_table.m"
              hlds__pred_table__V_123_123 = mercury__string__f_43_43_2_f_0(hlds__pred_table__V_116_116, hlds__pred_table__V_115_115);
            }
#line 1202 "pred_table.m"
            {
#line 1202 "pred_table.m"
              hlds__pred_table__V_125_125 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__pred_table__V_123_123);
            }
#line 1203 "pred_table.m"
            {
#line 1203 "pred_table.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__pred_table__V_113_113, hlds__pred_table__V_67_67, &hlds__pred_table__V_126_126);
            }
#line 1202 "pred_table.m"
            {
#line 1202 "pred_table.m"
              hlds__pred_table__V_133_133 = mercury__string__f_43_43_2_f_0(hlds__pred_table__V_126_126, hlds__pred_table__V_125_125);
            }
#line 1202 "pred_table.m"
            {
#line 1202 "pred_table.m"
              hlds__pred_table__V_63_63 = mercury__string__f_43_43_2_f_0((MR_String) "expected single mode for ", hlds__pred_table__V_133_133);
            }
#line 1201 "pred_table.m"
            {
#line 1201 "pred_table.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.lookup_builtin_pred_proc_id\'/8", hlds__pred_table__V_63_63);
#line 1201 "pred_table.m"
              return;
            }
#line 1201 "pred_table.m"
          }
#line 1200 "pred_table.m"
      }
#line 1206 "pred_table.m"
    else
#line 1207 "pred_table.m"
      {
#line 1207 "pred_table.m"
        MR_Integer hlds__pred_table__N_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__ModeNo_14, (MR_Integer) 0)));
#line 1210 "pred_table.m"
        MR_Integer hlds__pred_table__ProcId0_76;
#line 1208 "pred_table.m"
        MR_Box hlds__pred_table__conv0_ProcId0_76;

#line 1208 "pred_table.m"
        {
#line 1208 "pred_table.m"
          hlds__pred_table__succeeded = mercury__list__index0_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, hlds__pred_table__ProcIds_21, hlds__pred_table__N_23, &hlds__pred_table__conv0_ProcId0_76);
        }
#line 1208 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 1208 "pred_table.m"
          {
#line 1208 "pred_table.m"
            hlds__pred_table__ProcId0_76 = ((MR_Integer) hlds__pred_table__conv0_ProcId0_76);
#line 1208 "pred_table.m"
            hlds__pred_table__succeeded = MR_TRUE;
#line 1208 "pred_table.m"
          }
#line 1210 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 1209 "pred_table.m"
          *hlds__pred_table__ProcId_16 = hlds__pred_table__ProcId0_76;
#line 1210 "pred_table.m"
        else
#line 1211 "pred_table.m"
          {
#line 1211 "pred_table.m"
            MR_String hlds__pred_table__V_48_48;
#line 1211 "pred_table.m"
            MR_String hlds__pred_table__V_54_54;
#line 1211 "pred_table.m"
            MR_String hlds__pred_table__V_135_135;
#line 1211 "pred_table.m"
            MR_Word hlds__pred_table__V_141_141;
#line 1211 "pred_table.m"
            MR_String hlds__pred_table__V_143_143;
#line 1211 "pred_table.m"
            MR_String hlds__pred_table__V_144_144;
#line 1211 "pred_table.m"
            MR_String hlds__pred_table__V_151_151;
#line 1211 "pred_table.m"
            MR_String hlds__pred_table__V_153_153;
#line 1211 "pred_table.m"
            MR_String hlds__pred_table__V_154_154;
#line 1211 "pred_table.m"
            MR_String hlds__pred_table__V_161_161;
#line 1211 "pred_table.m"
            MR_String hlds__pred_table__V_163_163;
#line 1211 "pred_table.m"
            MR_String hlds__pred_table__V_164_164;
#line 1211 "pred_table.m"
            MR_String hlds__pred_table__V_171_171;

#line 1213 "pred_table.m"
            {
#line 1213 "pred_table.m"
              hlds__pred_table__V_54_54 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__pred_table__ModuleName_10);
            }
#line 5465 "hlds.pred_table.c"
            hlds__pred_table__V_141_141 = (MR_Word) &hlds__pred_table_scalar_common_6[0];
#line 1214 "pred_table.m"
            {
#line 1214 "pred_table.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__pred_table__V_141_141, hlds__pred_table__Arity_13, &hlds__pred_table__V_135_135);
            }
#line 1212 "pred_table.m"
            {
#line 1212 "pred_table.m"
              hlds__pred_table__V_143_143 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__pred_table__V_135_135);
            }
#line 1214 "pred_table.m"
            {
#line 1214 "pred_table.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__pred_table__V_141_141, hlds__pred_table__ProcName_11, &hlds__pred_table__V_144_144);
            }
#line 1212 "pred_table.m"
            {
#line 1212 "pred_table.m"
              hlds__pred_table__V_151_151 = mercury__string__f_43_43_2_f_0(hlds__pred_table__V_144_144, hlds__pred_table__V_143_143);
            }
#line 1212 "pred_table.m"
            {
#line 1212 "pred_table.m"
              hlds__pred_table__V_153_153 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__pred_table__V_151_151);
            }
#line 1213 "pred_table.m"
            {
#line 1213 "pred_table.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__pred_table__V_141_141, hlds__pred_table__V_54_54, &hlds__pred_table__V_154_154);
            }
#line 1212 "pred_table.m"
            {
#line 1212 "pred_table.m"
              hlds__pred_table__V_161_161 = mercury__string__f_43_43_2_f_0(hlds__pred_table__V_154_154, hlds__pred_table__V_153_153);
            }
#line 1212 "pred_table.m"
            {
#line 1212 "pred_table.m"
              hlds__pred_table__V_163_163 = mercury__string__f_43_43_2_f_0((MR_String) " for ", hlds__pred_table__V_161_161);
            }
#line 1213 "pred_table.m"
            {
#line 1213 "pred_table.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__pred_table__V_141_141, hlds__pred_table__N_23, &hlds__pred_table__V_164_164);
            }
#line 1212 "pred_table.m"
            {
#line 1212 "pred_table.m"
              hlds__pred_table__V_171_171 = mercury__string__f_43_43_2_f_0(hlds__pred_table__V_164_164, hlds__pred_table__V_163_163);
            }
#line 1212 "pred_table.m"
            {
#line 1212 "pred_table.m"
              hlds__pred_table__V_48_48 = mercury__string__f_43_43_2_f_0((MR_String) "there is no mode ", hlds__pred_table__V_171_171);
            }
#line 1211 "pred_table.m"
            {
#line 1211 "pred_table.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.lookup_builtin_pred_proc_id\'/8", hlds__pred_table__V_48_48);
#line 1211 "pred_table.m"
              return;
            }
#line 1211 "pred_table.m"
          }
#line 1207 "pred_table.m"
      }
#line 1155 "pred_table.m"
  }
#line 282 "pred_table.m"
}

#line 276 "pred_table.m"
void MR_CALL 
hlds__pred_table__get_proc_id_3_p_0(
#line 276 "pred_table.m"
  MR_Word hlds__pred_table__ModuleInfo_4,
#line 276 "pred_table.m"
  MR_Word hlds__pred_table__PredId_5,
#line 276 "pred_table.m"
  MR_Integer * hlds__pred_table__ProcId_6)
#line 276 "pred_table.m"
{
#line 1124 "pred_table.m"
  {
#line 1124 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 1124 "pred_table.m"
    MR_Word hlds__pred_table__PredInfo_7;
#line 1124 "pred_table.m"
    MR_Word hlds__pred_table__ProcIds_8;
#line 1129 "pred_table.m"
    MR_Integer hlds__pred_table__ProcId0_9;
#line 1127 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18;

#line 1125 "pred_table.m"
    {
#line 1125 "pred_table.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__pred_table__ModuleInfo_4, hlds__pred_table__PredId_5, &hlds__pred_table__PredInfo_7);
    }
#line 1126 "pred_table.m"
    {
#line 1126 "pred_table.m"
      hlds__pred_table__ProcIds_8 = hlds__hlds_pred__pred_info_procids_1_f_0(hlds__pred_table__PredInfo_7);
    }
#line 1127 "pred_table.m"
    hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__ProcIds_8)) == (MR_mktag((MR_Integer) 1)));
#line 1127 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 1127 "pred_table.m"
      {
#line 1127 "pred_table.m"
        hlds__pred_table__ProcId0_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__ProcIds_8, (MR_Integer) 0)));
#line 1127 "pred_table.m"
        hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__ProcIds_8, (MR_Integer) 1)));
#line 1127 "pred_table.m"
        hlds__pred_table__succeeded = (hlds__pred_table__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1127 "pred_table.m"
      }
#line 1129 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 1128 "pred_table.m"
      *hlds__pred_table__ProcId_6 = hlds__pred_table__ProcId0_9;
#line 1129 "pred_table.m"
    else
#line 1130 "pred_table.m"
      {
#line 1130 "pred_table.m"
        MR_String hlds__pred_table__Name_10;
#line 1130 "pred_table.m"
        MR_Word hlds__pred_table__PredOrFunc_11;
#line 1130 "pred_table.m"
        MR_Integer hlds__pred_table__Arity_12;
#line 1130 "pred_table.m"
        MR_String hlds__pred_table__PredOrFuncStr_13;
#line 1130 "pred_table.m"
        MR_String hlds__pred_table__ArityString_14;
#line 1130 "pred_table.m"
        MR_String hlds__pred_table__Message_15;

#line 1130 "pred_table.m"
        {
#line 1130 "pred_table.m"
          hlds__pred_table__Name_10 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__pred_table__PredInfo_7);
        }
#line 1131 "pred_table.m"
        {
#line 1131 "pred_table.m"
          hlds__pred_table__PredOrFunc_11 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__pred_table__PredInfo_7);
        }
#line 1132 "pred_table.m"
        {
#line 1132 "pred_table.m"
          hlds__pred_table__Arity_12 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__pred_table__PredInfo_7);
        }
#line 1133 "pred_table.m"
        {
#line 1133 "pred_table.m"
          hlds__pred_table__PredOrFuncStr_13 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(hlds__pred_table__PredOrFunc_11);
        }
#line 1134 "pred_table.m"
        {
#line 1134 "pred_table.m"
          mercury__string__int_to_string_2_p_0(hlds__pred_table__Arity_12, &hlds__pred_table__ArityString_14);
        }
#line 1142 "pred_table.m"
        if ((hlds__pred_table__ProcIds_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1136 "pred_table.m"
          {
#line 1136 "pred_table.m"
            MR_Word hlds__pred_table__V_35_35;
#line 1136 "pred_table.m"
            MR_Word hlds__pred_table__V_37_37;
#line 1136 "pred_table.m"
            MR_Word hlds__pred_table__V_38_38;
#line 1136 "pred_table.m"
            MR_Word hlds__pred_table__V_40_40;
#line 1136 "pred_table.m"
            MR_Word hlds__pred_table__V_41_41;
#line 1136 "pred_table.m"
            MR_Word hlds__pred_table__V_43_43;

#line 1139 "pred_table.m"
            {
#line 1139 "pred_table.m"
              hlds__pred_table__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1139 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_43_43, 0) = ((MR_Box) (hlds__pred_table__ArityString_14));
#line 1139 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[9])));
#line 1139 "pred_table.m"
            }
#line 1139 "pred_table.m"
            {
#line 1139 "pred_table.m"
              hlds__pred_table__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1139 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_41_41, 0) = ((MR_Box) ((MR_String) "/"));
#line 1139 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_41_41, 1) = ((MR_Box) (hlds__pred_table__V_43_43));
#line 1139 "pred_table.m"
            }
#line 1139 "pred_table.m"
            {
#line 1139 "pred_table.m"
              hlds__pred_table__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1139 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_40_40, 0) = ((MR_Box) (hlds__pred_table__Name_10));
#line 1139 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_40_40, 1) = ((MR_Box) (hlds__pred_table__V_41_41));
#line 1139 "pred_table.m"
            }
#line 1139 "pred_table.m"
            {
#line 1139 "pred_table.m"
              hlds__pred_table__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1139 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_38_38, 0) = ((MR_Box) ((MR_String) "\n\140"));
#line 1139 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_38_38, 1) = ((MR_Box) (hlds__pred_table__V_40_40));
#line 1139 "pred_table.m"
            }
#line 1138 "pred_table.m"
            {
#line 1138 "pred_table.m"
              hlds__pred_table__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1138 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_37_37, 0) = ((MR_Box) (hlds__pred_table__PredOrFuncStr_13));
#line 1138 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_37_37, 1) = ((MR_Box) (hlds__pred_table__V_38_38));
#line 1138 "pred_table.m"
            }
#line 1138 "pred_table.m"
            {
#line 1138 "pred_table.m"
              hlds__pred_table__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1138 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_35_35, 0) = ((MR_Box) ((MR_String) "cannot take address of "));
#line 1138 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_35_35, 1) = ((MR_Box) (hlds__pred_table__V_37_37));
#line 1138 "pred_table.m"
            }
#line 1137 "pred_table.m"
            {
#line 1137 "pred_table.m"
              mercury__string__append_list_2_p_0(hlds__pred_table__V_35_35, &hlds__pred_table__Message_15);
            }
#line 1136 "pred_table.m"
          }
#line 1142 "pred_table.m"
        else
#line 1143 "pred_table.m"
          {
#line 1143 "pred_table.m"
            MR_Word hlds__pred_table__V_19_19;
#line 1143 "pred_table.m"
            MR_Word hlds__pred_table__V_21_21;
#line 1143 "pred_table.m"
            MR_Word hlds__pred_table__V_23_23;
#line 1143 "pred_table.m"
            MR_Word hlds__pred_table__V_24_24;
#line 1143 "pred_table.m"
            MR_Word hlds__pred_table__V_26_26;
#line 1143 "pred_table.m"
            MR_Word hlds__pred_table__V_27_27;
#line 1143 "pred_table.m"
            MR_Word hlds__pred_table__V_29_29;

#line 1147 "pred_table.m"
            {
#line 1147 "pred_table.m"
              hlds__pred_table__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_29_29, 0) = ((MR_Box) (hlds__pred_table__ArityString_14));
#line 1147 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[11])));
#line 1147 "pred_table.m"
            }
#line 1147 "pred_table.m"
            {
#line 1147 "pred_table.m"
              hlds__pred_table__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_27_27, 0) = ((MR_Box) ((MR_String) "/"));
#line 1147 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_27_27, 1) = ((MR_Box) (hlds__pred_table__V_29_29));
#line 1147 "pred_table.m"
            }
#line 1147 "pred_table.m"
            {
#line 1147 "pred_table.m"
              hlds__pred_table__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_26_26, 0) = ((MR_Box) (hlds__pred_table__Name_10));
#line 1147 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_26_26, 1) = ((MR_Box) (hlds__pred_table__V_27_27));
#line 1147 "pred_table.m"
            }
#line 1147 "pred_table.m"
            {
#line 1147 "pred_table.m"
              hlds__pred_table__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_24_24, 0) = ((MR_Box) ((MR_String) "\n\140"));
#line 1147 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_24_24, 1) = ((MR_Box) (hlds__pred_table__V_26_26));
#line 1147 "pred_table.m"
            }
#line 1146 "pred_table.m"
            {
#line 1146 "pred_table.m"
              hlds__pred_table__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1146 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_23_23, 0) = ((MR_Box) (hlds__pred_table__PredOrFuncStr_13));
#line 1146 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_23_23, 1) = ((MR_Box) (hlds__pred_table__V_24_24));
#line 1146 "pred_table.m"
            }
#line 1146 "pred_table.m"
            {
#line 1146 "pred_table.m"
              hlds__pred_table__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1146 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_21_21, 0) = ((MR_Box) ((MR_String) "taking address of "));
#line 1146 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_21_21, 1) = ((MR_Box) (hlds__pred_table__V_23_23));
#line 1146 "pred_table.m"
            }
#line 1145 "pred_table.m"
            {
#line 1145 "pred_table.m"
              hlds__pred_table__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1145 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_19_19, 0) = ((MR_Box) ((MR_String) "sorry, not implemented: "));
#line 1145 "pred_table.m"
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_19_19, 1) = ((MR_Box) (hlds__pred_table__V_21_21));
#line 1145 "pred_table.m"
            }
#line 1144 "pred_table.m"
            {
#line 1144 "pred_table.m"
              mercury__string__append_list_2_p_0(hlds__pred_table__V_19_19, &hlds__pred_table__Message_15);
            }
#line 1143 "pred_table.m"
          }
#line 1151 "pred_table.m"
        {
#line 1151 "pred_table.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.get_proc_id\'/3", hlds__pred_table__Message_15);
#line 1151 "pred_table.m"
          return;
        }
#line 1130 "pred_table.m"
      }
#line 1124 "pred_table.m"
  }
#line 276 "pred_table.m"
}

#line 268 "pred_table.m"
MR_bool MR_CALL 
hlds__pred_table__get_pred_id_by_types_10_p_0(
#line 268 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_11,
#line 268 "pred_table.m"
  MR_Word hlds__pred_table__SymName_12,
#line 268 "pred_table.m"
  MR_Word hlds__pred_table__PredOrFunc_13,
#line 268 "pred_table.m"
  MR_Word hlds__pred_table__TVarSet_14,
#line 268 "pred_table.m"
  MR_Word hlds__pred_table__ExistQTVars_15,
#line 268 "pred_table.m"
  MR_Word hlds__pred_table__ArgTypes_16,
#line 268 "pred_table.m"
  MR_Word hlds__pred_table__HeadTypeParams_17,
#line 268 "pred_table.m"
  MR_Word hlds__pred_table__ModuleInfo_18,
#line 268 "pred_table.m"
  MR_Word hlds__pred_table__Context_19,
#line 268 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_20)
#line 268 "pred_table.m"
{
#line 1086 "pred_table.m"
  {
#line 1086 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 1086 "pred_table.m"
    MR_Word hlds__pred_table__PredicateTable_21;
#line 1086 "pred_table.m"
    MR_Integer hlds__pred_table__Arity_22;
#line 1086 "pred_table.m"
    MR_Word hlds__pred_table__PredIds_23;
#line 1093 "pred_table.m"
    MR_Word hlds__pred_table___PredName_25;

#line 1087 "pred_table.m"
    {
#line 1087 "pred_table.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__pred_table__ModuleInfo_18, &hlds__pred_table__PredicateTable_21);
    }
#line 1088 "pred_table.m"
    {
#line 1088 "pred_table.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__pred_table__ArgTypes_16, &hlds__pred_table__Arity_22);
    }
#line 1089 "pred_table.m"
    {
#line 1089 "pred_table.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__pred_table__PredicateTable_21, hlds__pred_table__IsFullyQualified_11, hlds__pred_table__PredOrFunc_13, hlds__pred_table__SymName_12, hlds__pred_table__Arity_22, &hlds__pred_table__PredIds_23);
    }
#line 1093 "pred_table.m"
    {
#line 1093 "pred_table.m"
      hlds__pred_table__succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(hlds__pred_table__ModuleInfo_18, hlds__pred_table__PredIds_23, hlds__pred_table__TVarSet_14, hlds__pred_table__ExistQTVars_15, hlds__pred_table__ArgTypes_16, hlds__pred_table__HeadTypeParams_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__pred_table__Context_19, hlds__pred_table__PredId_20, &hlds__pred_table___PredName_25);
    }
#line 1086 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 1086 "pred_table.m"
  }
#line 268 "pred_table.m"
}

#line 260 "pred_table.m"
void MR_CALL 
hlds__pred_table__get_pred_id_and_proc_id_by_types_11_p_0(
#line 260 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_12,
#line 260 "pred_table.m"
  MR_Word hlds__pred_table__SymName_13,
#line 260 "pred_table.m"
  MR_Word hlds__pred_table__PredOrFunc_14,
#line 260 "pred_table.m"
  MR_Word hlds__pred_table__TVarSet_15,
#line 260 "pred_table.m"
  MR_Word hlds__pred_table__ExistQTVars_16,
#line 260 "pred_table.m"
  MR_Word hlds__pred_table__ArgTypes_17,
#line 260 "pred_table.m"
  MR_Word hlds__pred_table__HeadTypeParams_18,
#line 260 "pred_table.m"
  MR_Word hlds__pred_table__ModuleInfo_19,
#line 260 "pred_table.m"
  MR_Word hlds__pred_table__Context_20,
#line 260 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_21,
#line 260 "pred_table.m"
  MR_Integer * hlds__pred_table__ProcId_22)
#line 260 "pred_table.m"
{
#line 1104 "pred_table.m"
  {
#line 1104 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 1111 "pred_table.m"
    MR_Word hlds__pred_table__PredId0_23;
#line 1086 "pred_table.m"
    MR_Word hlds__pred_table__PredicateTable_54;
#line 1086 "pred_table.m"
    MR_Integer hlds__pred_table__Arity_55;
#line 1086 "pred_table.m"
    MR_Word hlds__pred_table__PredIds_56;
#line 1093 "pred_table.m"
    MR_Word hlds__pred_table___PredName_58;

#line 1087 "pred_table.m"
    {
#line 1087 "pred_table.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__pred_table__ModuleInfo_19, &hlds__pred_table__PredicateTable_54);
    }
#line 1088 "pred_table.m"
    {
#line 1088 "pred_table.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__pred_table__ArgTypes_17, &hlds__pred_table__Arity_55);
    }
#line 1089 "pred_table.m"
    {
#line 1089 "pred_table.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__pred_table__PredicateTable_54, hlds__pred_table__IsFullyQualified_12, hlds__pred_table__PredOrFunc_14, hlds__pred_table__SymName_13, hlds__pred_table__Arity_55, &hlds__pred_table__PredIds_56);
    }
#line 1093 "pred_table.m"
    {
#line 1093 "pred_table.m"
      hlds__pred_table__succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(hlds__pred_table__ModuleInfo_19, hlds__pred_table__PredIds_56, hlds__pred_table__TVarSet_15, hlds__pred_table__ExistQTVars_16, hlds__pred_table__ArgTypes_17, hlds__pred_table__HeadTypeParams_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__pred_table__Context_20, &hlds__pred_table__PredId0_23, &hlds__pred_table___PredName_58);
    }
#line 1111 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 1110 "pred_table.m"
      *hlds__pred_table__PredId_21 = hlds__pred_table__PredId0_23;
#line 1111 "pred_table.m"
    else
#line 1114 "pred_table.m"
      {
#line 1114 "pred_table.m"
        MR_Integer hlds__pred_table__Arity_24;
#line 1114 "pred_table.m"
        MR_String hlds__pred_table__PredOrFuncStr_25;
#line 1114 "pred_table.m"
        MR_String hlds__pred_table__NameStr_26;
#line 1114 "pred_table.m"
        MR_String hlds__pred_table__ArityString_27;
#line 1114 "pred_table.m"
        MR_String hlds__pred_table__Msg_28;
#line 1114 "pred_table.m"
        MR_Word hlds__pred_table__V_29_29;
#line 1114 "pred_table.m"
        MR_Word hlds__pred_table__V_31_31;
#line 1114 "pred_table.m"
        MR_Word hlds__pred_table__V_32_32;
#line 1114 "pred_table.m"
        MR_Word hlds__pred_table__V_34_34;
#line 1114 "pred_table.m"
        MR_Word hlds__pred_table__V_35_35;
#line 1114 "pred_table.m"
        MR_Word hlds__pred_table__V_37_37;

#line 1114 "pred_table.m"
        {
#line 1114 "pred_table.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__pred_table__ArgTypes_17, &hlds__pred_table__Arity_24);
        }
#line 1115 "pred_table.m"
        {
#line 1115 "pred_table.m"
          hlds__pred_table__PredOrFuncStr_25 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(hlds__pred_table__PredOrFunc_14);
        }
#line 1116 "pred_table.m"
        {
#line 1116 "pred_table.m"
          hlds__pred_table__NameStr_26 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__pred_table__SymName_13);
        }
#line 1117 "pred_table.m"
        {
#line 1117 "pred_table.m"
          mercury__string__int_to_string_2_p_0(hlds__pred_table__Arity_24, &hlds__pred_table__ArityString_27);
        }
#line 1119 "pred_table.m"
        {
#line 1119 "pred_table.m"
          hlds__pred_table__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1119 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_37_37, 0) = ((MR_Box) (hlds__pred_table__ArityString_27));
#line 1119 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[15])));
#line 1119 "pred_table.m"
        }
#line 1119 "pred_table.m"
        {
#line 1119 "pred_table.m"
          hlds__pred_table__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1119 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_35_35, 0) = ((MR_Box) ((MR_String) "/"));
#line 1119 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_35_35, 1) = ((MR_Box) (hlds__pred_table__V_37_37));
#line 1119 "pred_table.m"
        }
#line 1119 "pred_table.m"
        {
#line 1119 "pred_table.m"
          hlds__pred_table__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1119 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_34_34, 0) = ((MR_Box) (hlds__pred_table__NameStr_26));
#line 1119 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_34_34, 1) = ((MR_Box) (hlds__pred_table__V_35_35));
#line 1119 "pred_table.m"
        }
#line 1119 "pred_table.m"
        {
#line 1119 "pred_table.m"
          hlds__pred_table__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1119 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_32_32, 0) = ((MR_Box) ((MR_String) "\n\140"));
#line 1119 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_32_32, 1) = ((MR_Box) (hlds__pred_table__V_34_34));
#line 1119 "pred_table.m"
        }
#line 1118 "pred_table.m"
        {
#line 1118 "pred_table.m"
          hlds__pred_table__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1118 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_31_31, 0) = ((MR_Box) (hlds__pred_table__PredOrFuncStr_25));
#line 1118 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_31_31, 1) = ((MR_Box) (hlds__pred_table__V_32_32));
#line 1118 "pred_table.m"
        }
#line 1118 "pred_table.m"
        {
#line 1118 "pred_table.m"
          hlds__pred_table__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1118 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_29_29, 0) = ((MR_Box) ((MR_String) "undefined/invalid "));
#line 1118 "pred_table.m"
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_29_29, 1) = ((MR_Box) (hlds__pred_table__V_31_31));
#line 1118 "pred_table.m"
        }
#line 1118 "pred_table.m"
        {
#line 1118 "pred_table.m"
          mercury__string__append_list_2_p_0(hlds__pred_table__V_29_29, &hlds__pred_table__Msg_28);
        }
#line 1120 "pred_table.m"
        {
#line 1120 "pred_table.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.get_pred_id_and_proc_id_by_types\'/11", hlds__pred_table__Msg_28);
#line 1120 "pred_table.m"
          return;
        }
#line 1114 "pred_table.m"
      }
#line 1122 "pred_table.m"
    {
#line 1122 "pred_table.m"
      hlds__pred_table__get_proc_id_3_p_0(hlds__pred_table__ModuleInfo_19, *hlds__pred_table__PredId_21, hlds__pred_table__ProcId_22);
    }
#line 1104 "pred_table.m"
  }
#line 260 "pred_table.m"
}

#line 246 "pred_table.m"
MR_bool MR_CALL 
hlds__pred_table__find_matching_pred_id_10_p_0(
#line 246 "pred_table.m"
  MR_Word hlds__pred_table__ModuleInfo_11,
#line 246 "pred_table.m"
  MR_Word hlds__pred_table__HeadVar__2_2,
#line 246 "pred_table.m"
  MR_Word hlds__pred_table__TVarSet_14,
#line 246 "pred_table.m"
  MR_Word hlds__pred_table__ExistQTVars_15,
#line 246 "pred_table.m"
  MR_Word hlds__pred_table__ArgTypes_16,
#line 246 "pred_table.m"
  MR_Word hlds__pred_table__HeadTypeParams_17,
#line 246 "pred_table.m"
  MR_Word hlds__pred_table__MaybeConstraintSearch_18,
#line 246 "pred_table.m"
  MR_Word hlds__pred_table__Context_19,
#line 246 "pred_table.m"
  MR_Word * hlds__pred_table__ThePredId_20,
#line 246 "pred_table.m"
  MR_Word * hlds__pred_table__PredName_21)
#line 246 "pred_table.m"
{
#line 1005 "pred_table.m"
  while (MR_TRUE)
#line 1005 "pred_table.m"
    {
#line 1005 "pred_table.m"
      /* tailcall optimized into a loop */
#line 1005 "pred_table.m"
      {
#line 1005 "pred_table.m"
        MR_bool hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1005 "pred_table.m"
        MR_Word hlds__pred_table__PredId_12;
#line 1005 "pred_table.m"
        MR_Word hlds__pred_table__PredIds_13;
#line 1058 "pred_table.m"
        MR_Word hlds__pred_table__PredInfo_22;
#line 1010 "pred_table.m"
        MR_Word hlds__pred_table__PredTVarSet_23;
#line 1010 "pred_table.m"
        MR_Word hlds__pred_table__PredExistQVars0_24;
#line 1010 "pred_table.m"
        MR_Word hlds__pred_table__PredArgTypes0_25;
#line 1010 "pred_table.m"
        MR_Word hlds__pred_table__PredKindMap_26;

#line 1003 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 1003 "pred_table.m"
          {
#line 1003 "pred_table.m"
            hlds__pred_table__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
#line 1003 "pred_table.m"
            hlds__pred_table__PredIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));
#line 1010 "pred_table.m"
            {
#line 1010 "pred_table.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(hlds__pred_table__ModuleInfo_11, hlds__pred_table__PredId_12, &hlds__pred_table__PredInfo_22);
            }
#line 1011 "pred_table.m"
            {
#line 1011 "pred_table.m"
              hlds__hlds_pred__pred_info_get_arg_types_4_p_0(hlds__pred_table__PredInfo_22, &hlds__pred_table__PredTVarSet_23, &hlds__pred_table__PredExistQVars0_24, &hlds__pred_table__PredArgTypes0_25);
            }
#line 1013 "pred_table.m"
            {
#line 1013 "pred_table.m"
              hlds__hlds_pred__pred_info_get_tvar_kind_map_2_p_0(hlds__pred_table__PredInfo_22, &hlds__pred_table__PredKindMap_26);
            }
#line 1015 "pred_table.m"
            {
#line 1015 "pred_table.m"
              hlds__pred_table__succeeded = parse_tree__prog_type__arg_type_list_subsumes_8_p_0(hlds__pred_table__TVarSet_14, hlds__pred_table__ExistQTVars_15, hlds__pred_table__ArgTypes_16, hlds__pred_table__HeadTypeParams_17, hlds__pred_table__PredTVarSet_23, hlds__pred_table__PredKindMap_26, hlds__pred_table__PredExistQVars0_24, hlds__pred_table__PredArgTypes0_25);
            }
#line 1010 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 1020 "pred_table.m"
              {
#line 1020 "pred_table.m"
                if ((hlds__pred_table__MaybeConstraintSearch_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1019 "pred_table.m"
                  hlds__pred_table__succeeded = MR_TRUE;
#line 1020 "pred_table.m"
                else
#line 1021 "pred_table.m"
                  {
#line 1021 "pred_table.m"
                    MR_Word hlds__pred_table__ConstraintSearch_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__MaybeConstraintSearch_18, (MR_Integer) 0)));
#line 1021 "pred_table.m"
                    MR_Word hlds__pred_table__ProgConstraints_28;
#line 1021 "pred_table.m"
                    MR_Word hlds__pred_table__UnivConstraints_29;
#line 1021 "pred_table.m"
                    MR_Integer hlds__pred_table__NumConstraints_31;
#line 1021 "pred_table.m"
                    MR_Word hlds__pred_table__ProvenConstraints_32;
#line 1024 "pred_table.m"
                    MR_Word hlds__pred_table__V_30_30;
#line 1026 "pred_table.m"
                    MR_bool MR_CALL (* hlds__pred_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 1026 "pred_table.m"
                    MR_Box hlds__pred_table__conv1_ProvenConstraints_32;

#line 1023 "pred_table.m"
                    {
#line 1023 "pred_table.m"
                      hlds__hlds_pred__pred_info_get_class_context_2_p_0(hlds__pred_table__PredInfo_22, &hlds__pred_table__ProgConstraints_28);
                    }
#line 1024 "pred_table.m"
                    hlds__pred_table__UnivConstraints_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__ProgConstraints_28, (MR_Integer) 0)));
#line 1024 "pred_table.m"
                    hlds__pred_table__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__ProgConstraints_28, (MR_Integer) 1)));
#line 1025 "pred_table.m"
                    {
#line 1025 "pred_table.m"
                      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__pred_table__UnivConstraints_29, &hlds__pred_table__NumConstraints_31);
                    }
#line 1026 "pred_table.m"
                    hlds__pred_table__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__pred_table__ConstraintSearch_27, (MR_Integer) 1)));
#line 1026 "pred_table.m"
                    {
#line 1026 "pred_table.m"
                      hlds__pred_table__succeeded = hlds__pred_table__func_0(((MR_Box) hlds__pred_table__ConstraintSearch_27), ((MR_Box) (hlds__pred_table__NumConstraints_31)), &hlds__pred_table__conv1_ProvenConstraints_32);
                    }
#line 1026 "pred_table.m"
                    if (hlds__pred_table__succeeded)
#line 1026 "pred_table.m"
                      {
#line 1026 "pred_table.m"
                        hlds__pred_table__ProvenConstraints_32 = ((MR_Word) hlds__pred_table__conv1_ProvenConstraints_32);
#line 1026 "pred_table.m"
                        hlds__pred_table__succeeded = MR_TRUE;
#line 1026 "pred_table.m"
                      }
#line 1021 "pred_table.m"
                    if (hlds__pred_table__succeeded)
#line 1027 "pred_table.m"
                      {
#line 1027 "pred_table.m"
                        hlds__pred_table__succeeded = hlds__pred_table__univ_constraints_match_2_p_0(hlds__pred_table__ProvenConstraints_32, hlds__pred_table__UnivConstraints_29);
                      }
#line 1021 "pred_table.m"
                  }
#line 1020 "pred_table.m"
              }
#line 1058 "pred_table.m"
            if (hlds__pred_table__succeeded)
#line 1033 "pred_table.m"
              {
#line 1033 "pred_table.m"
                MR_String hlds__pred_table__PName_33;
#line 1033 "pred_table.m"
                MR_Word hlds__pred_table__Module_34;
#line 1055 "pred_table.m"
                MR_Word hlds__pred_table__OtherPredId_35;
#line 1037 "pred_table.m"
                MR_Word hlds__pred_table___OtherPredName_36;

#line 1033 "pred_table.m"
                {
#line 1033 "pred_table.m"
                  hlds__pred_table__PName_33 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__pred_table__PredInfo_22);
                }
#line 1034 "pred_table.m"
                {
#line 1034 "pred_table.m"
                  hlds__pred_table__Module_34 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__pred_table__PredInfo_22);
                }
#line 1035 "pred_table.m"
                {
#line 1035 "pred_table.m"
                  MR_Word base;
#line 1035 "pred_table.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1035 "pred_table.m"
                  *hlds__pred_table__PredName_21 = base;
#line 1035 "pred_table.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__pred_table__Module_34));
#line 1035 "pred_table.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__pred_table__PName_33));
#line 1035 "pred_table.m"
                }
#line 1037 "pred_table.m"
                {
#line 1037 "pred_table.m"
                  hlds__pred_table__succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(hlds__pred_table__ModuleInfo_11, hlds__pred_table__PredIds_13, hlds__pred_table__TVarSet_14, hlds__pred_table__ExistQTVars_15, hlds__pred_table__ArgTypes_16, hlds__pred_table__HeadTypeParams_17, hlds__pred_table__MaybeConstraintSearch_18, hlds__pred_table__Context_19, &hlds__pred_table__OtherPredId_35, &hlds__pred_table___OtherPredName_36);
                }
#line 1055 "pred_table.m"
                if (hlds__pred_table__succeeded)
#line 1041 "pred_table.m"
                  {
#line 1041 "pred_table.m"
                    MR_Word hlds__pred_table__OtherPredInfo_37;
#line 1041 "pred_table.m"
                    MR_Word hlds__pred_table__PredCallId_38;
#line 1041 "pred_table.m"
                    MR_Word hlds__pred_table__OtherPredCallId_39;
#line 1045 "pred_table.m"
                    MR_Word hlds__pred_table__Globals_41;
#line 1045 "pred_table.m"
                    MR_Word hlds__pred_table__Pieces_42;
#line 1045 "pred_table.m"
                    MR_Word hlds__pred_table__V_46_46;
#line 1045 "pred_table.m"
                    MR_Word hlds__pred_table__V_49_49;
#line 1045 "pred_table.m"
                    MR_Word hlds__pred_table__V_50_50;
#line 1045 "pred_table.m"
                    MR_Word hlds__pred_table__V_51_51;
#line 1045 "pred_table.m"
                    MR_Word hlds__pred_table__V_54_54;
#line 1045 "pred_table.m"
                    MR_Word hlds__pred_table__V_55_55;

#line 1041 "pred_table.m"
                    {
#line 1041 "pred_table.m"
                      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__pred_table__ModuleInfo_11, hlds__pred_table__OtherPredId_35, &hlds__pred_table__OtherPredInfo_37);
                    }
#line 1042 "pred_table.m"
                    {
#line 1042 "pred_table.m"
                      hlds__hlds_pred__pred_info_get_call_id_2_p_0(hlds__pred_table__PredInfo_22, &hlds__pred_table__PredCallId_38);
                    }
#line 1043 "pred_table.m"
                    {
#line 1043 "pred_table.m"
                      hlds__hlds_pred__pred_info_get_call_id_2_p_0(hlds__pred_table__OtherPredInfo_37, &hlds__pred_table__OtherPredCallId_39);
                    }
#line 1046 "pred_table.m"
                    {
#line 1046 "pred_table.m"
                      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__pred_table__ModuleInfo_11, &hlds__pred_table__Globals_41);
                    }
#line 1048 "pred_table.m"
                    {
#line 1048 "pred_table.m"
                      hlds__pred_table__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1048 "pred_table.m"
                      MR_hl_field(MR_mktag(3), hlds__pred_table__V_50_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 1048 "pred_table.m"
                      MR_hl_field(MR_mktag(3), hlds__pred_table__V_50_50, 1) = ((MR_Box) (hlds__pred_table__PredCallId_38));
#line 1048 "pred_table.m"
                    }
#line 1049 "pred_table.m"
                    {
#line 1049 "pred_table.m"
                      hlds__pred_table__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1049 "pred_table.m"
                      MR_hl_field(MR_mktag(3), hlds__pred_table__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 1049 "pred_table.m"
                      MR_hl_field(MR_mktag(3), hlds__pred_table__V_55_55, 1) = ((MR_Box) (hlds__pred_table__OtherPredCallId_39));
#line 1049 "pred_table.m"
                    }
#line 1049 "pred_table.m"
                    {
#line 1049 "pred_table.m"
                      hlds__pred_table__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1049 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_54_54, 0) = ((MR_Box) (hlds__pred_table__V_55_55));
#line 1049 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[7])));
#line 1049 "pred_table.m"
                    }
#line 1048 "pred_table.m"
                    {
#line 1048 "pred_table.m"
                      hlds__pred_table__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1048 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_51_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__pred_table_scalar_common_1[14])));
#line 1048 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_51_51, 1) = ((MR_Box) (hlds__pred_table__V_54_54));
#line 1048 "pred_table.m"
                    }
#line 1048 "pred_table.m"
                    {
#line 1048 "pred_table.m"
                      hlds__pred_table__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1048 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_49_49, 0) = ((MR_Box) (hlds__pred_table__V_50_50));
#line 1048 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_49_49, 1) = ((MR_Box) (hlds__pred_table__V_51_51));
#line 1048 "pred_table.m"
                    }
#line 1048 "pred_table.m"
                    {
#line 1048 "pred_table.m"
                      hlds__pred_table__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1048 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_46_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__pred_table_scalar_common_1[13])));
#line 1048 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_46_46, 1) = ((MR_Box) (hlds__pred_table__V_49_49));
#line 1048 "pred_table.m"
                    }
#line 1047 "pred_table.m"
                    {
#line 1047 "pred_table.m"
                      hlds__pred_table__Pieces_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1047 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__Pieces_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__pred_table_scalar_common_1[12])));
#line 1047 "pred_table.m"
                      MR_hl_field(MR_mktag(1), hlds__pred_table__Pieces_42, 1) = ((MR_Box) (hlds__pred_table__V_46_46));
#line 1047 "pred_table.m"
                    }
#line 1052 "pred_table.m"
                    {
#line 1052 "pred_table.m"
                      parse_tree__error_util__write_error_pieces_6_p_0(hlds__pred_table__Globals_41, hlds__pred_table__Context_19, (MR_Integer) 0, hlds__pred_table__Pieces_42);
                    }
#line 1054 "pred_table.m"
                    {
#line 1054 "pred_table.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.find_matching_pred_id\'/10", (MR_String) "unresolvable predicate overloading");
                    }
#line 1041 "pred_table.m"
                  }
#line 1055 "pred_table.m"
                else
#line 1056 "pred_table.m"
                  *hlds__pred_table__ThePredId_20 = hlds__pred_table__PredId_12;
#line 1033 "pred_table.m"
                hlds__pred_table__succeeded = MR_TRUE;
#line 1033 "pred_table.m"
              }
#line 1058 "pred_table.m"
            else
#line 1059 "pred_table.m"
              {
#line 1059 "pred_table.m"
                /* direct tailcall eliminated */
#line 1059 "pred_table.m"
                {
#line 1059 "pred_table.m"
                  MR_Word hlds__pred_table__HeadVar__2__tmp_copy_2 = hlds__pred_table__PredIds_13;

#line 1059 "pred_table.m"
                  hlds__pred_table__HeadVar__2_2 = hlds__pred_table__HeadVar__2__tmp_copy_2;
#line 1059 "pred_table.m"
                }
#line 1059 "pred_table.m"
                continue;
#line 1059 "pred_table.m"
              }
#line 1003 "pred_table.m"
          }
#line 1005 "pred_table.m"
        return hlds__pred_table__succeeded;
#line 1005 "pred_table.m"
      }
#line 1005 "pred_table.m"
      break;
#line 1005 "pred_table.m"
    }
#line 246 "pred_table.m"
}

#line 236 "pred_table.m"
void MR_CALL 
hlds__pred_table__resolve_pred_overloading_10_p_0(
#line 236 "pred_table.m"
  MR_Word hlds__pred_table__ModuleInfo_11,
#line 236 "pred_table.m"
  MR_Word hlds__pred_table__CallerMarkers_12,
#line 236 "pred_table.m"
  MR_Word hlds__pred_table__TVarSet_13,
#line 236 "pred_table.m"
  MR_Word hlds__pred_table__ExistQTVars_14,
#line 236 "pred_table.m"
  MR_Word hlds__pred_table__ArgTypes_15,
#line 236 "pred_table.m"
  MR_Word hlds__pred_table__HeadTypeParams_16,
#line 236 "pred_table.m"
  MR_Word hlds__pred_table__Context_17,
#line 236 "pred_table.m"
  MR_Word hlds__pred_table__PredName0_18,
#line 236 "pred_table.m"
  MR_Word * hlds__pred_table__PredName_19,
#line 236 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_20)
#line 236 "pred_table.m"
{
#line 979 "pred_table.m"
  {
#line 979 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 979 "pred_table.m"
    MR_Word hlds__pred_table__PredTable_21;
#line 979 "pred_table.m"
    MR_Word hlds__pred_table__IsFullyQualified_22;
#line 979 "pred_table.m"
    MR_Word hlds__pred_table__PredIds_23;
#line 997 "pred_table.m"
    MR_Word hlds__pred_table__PredId1_24;
#line 997 "pred_table.m"
    MR_Word hlds__pred_table__PredName1_25;

#line 984 "pred_table.m"
    {
#line 984 "pred_table.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__pred_table__ModuleInfo_11, &hlds__pred_table__PredTable_21);
    }
#line 985 "pred_table.m"
    {
#line 985 "pred_table.m"
      hlds__pred_table__IsFullyQualified_22 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(hlds__pred_table__CallerMarkers_12);
    }
#line 986 "pred_table.m"
    {
#line 986 "pred_table.m"
      hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0(hlds__pred_table__PredTable_21, hlds__pred_table__IsFullyQualified_22, hlds__pred_table__PredName0_18, &hlds__pred_table__PredIds_23);
    }
#line 992 "pred_table.m"
    {
#line 992 "pred_table.m"
      hlds__pred_table__succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(hlds__pred_table__ModuleInfo_11, hlds__pred_table__PredIds_23, hlds__pred_table__TVarSet_13, hlds__pred_table__ExistQTVars_14, hlds__pred_table__ArgTypes_15, hlds__pred_table__HeadTypeParams_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__pred_table__Context_17, &hlds__pred_table__PredId1_24, &hlds__pred_table__PredName1_25);
    }
#line 997 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 995 "pred_table.m"
      {
#line 995 "pred_table.m"
        *hlds__pred_table__PredId_20 = hlds__pred_table__PredId1_24;
#line 996 "pred_table.m"
        *hlds__pred_table__PredName_19 = hlds__pred_table__PredName1_25;
#line 995 "pred_table.m"
      }
#line 997 "pred_table.m"
    else
#line 1000 "pred_table.m"
      {
#line 1000 "pred_table.m"
        {
#line 1000 "pred_table.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.resolve_pred_overloading\'/10", (MR_String) "type error in pred call: no matching pred");
#line 1000 "pred_table.m"
          return;
        }
#line 1000 "pred_table.m"
      }
#line 979 "pred_table.m"
  }
#line 236 "pred_table.m"
}

#line 229 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_insert_4_p_0(
#line 229 "pred_table.m"
  MR_Word hlds__pred_table__PredInfo_5,
#line 229 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_6,
#line 229 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8,
#line 229 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_9)
#line 229 "pred_table.m"
{
#line 850 "pred_table.m"
  {
#line 850 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 851 "pred_table.m"
    {
#line 851 "pred_table.m"
      hlds__pred_table__do_predicate_table_insert_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__pred_table__PredInfo_5, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__pred_table__PredId_6, hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, hlds__pred_table__STATE_VARIABLE_PredicateTable_9);
    }
#line 850 "pred_table.m"
  }
#line 229 "pred_table.m"
}

#line 220 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_insert_qual_6_p_0(
#line 220 "pred_table.m"
  MR_Word hlds__pred_table__PredInfo_7,
#line 220 "pred_table.m"
  MR_Word hlds__pred_table__NeedQual_8,
#line 220 "pred_table.m"
  MR_Word hlds__pred_table__QualInfo_9,
#line 220 "pred_table.m"
  MR_Word * hlds__pred_table__PredId_10,
#line 220 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_12,
#line 220 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_13)
#line 220 "pred_table.m"
{
#line 855 "pred_table.m"
  {
#line 855 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 855 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15;

#line 856 "pred_table.m"
    {
#line 856 "pred_table.m"
      hlds__pred_table__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 856 "pred_table.m"
      MR_hl_field(MR_mktag(1), hlds__pred_table__V_15_15, 0) = ((MR_Box) (hlds__pred_table__QualInfo_9));
#line 856 "pred_table.m"
    }
#line 856 "pred_table.m"
    {
#line 856 "pred_table.m"
      hlds__pred_table__do_predicate_table_insert_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__pred_table__PredInfo_7, hlds__pred_table__NeedQual_8, hlds__pred_table__V_15_15, hlds__pred_table__PredId_10, hlds__pred_table__STATE_VARIABLE_PredicateTable_0_12, hlds__pred_table__STATE_VARIABLE_PredicateTable_13);
    }
#line 855 "pred_table.m"
  }
#line 220 "pred_table.m"
}

#line 209 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pf_sym_5_p_0(
#line 209 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_6,
#line 209 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_7,
#line 209 "pred_table.m"
  MR_Word hlds__pred_table__PredOrFunc_8,
#line 209 "pred_table.m"
  MR_Word hlds__pred_table__SymName_9,
#line 209 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_10)
#line 209 "pred_table.m"
{
#line 793 "pred_table.m"
  {
#line 793 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 793 "pred_table.m"
#line 793 "pred_table.m"
    switch (hlds__pred_table__PredOrFunc_8) {
#line 793 "pred_table.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 793 "pred_table.m"
      case (MR_Integer) 1:
#line 798 "pred_table.m"
        {
#line 798 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_func_sym_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__IsFullyQualified_7, hlds__pred_table__SymName_9, hlds__pred_table__PredIds_10);
        }
#line 793 "pred_table.m"
        break;
#line 793 "pred_table.m"
      case (MR_Integer) 0:
#line 794 "pred_table.m"
        {
#line 794 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__IsFullyQualified_7, hlds__pred_table__SymName_9, hlds__pred_table__PredIds_10);
        }
#line 793 "pred_table.m"
        break;
#line 793 "pred_table.m"
    }
#line 793 "pred_table.m"
  }
#line 209 "pred_table.m"
}

#line 202 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(
#line 202 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_7,
#line 202 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_8,
#line 202 "pred_table.m"
  MR_Word hlds__pred_table__PredOrFunc_9,
#line 202 "pred_table.m"
  MR_Word hlds__pred_table__SymName_10,
#line 202 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_11,
#line 202 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_12)
#line 202 "pred_table.m"
{
#line 775 "pred_table.m"
  {
#line 775 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 775 "pred_table.m"
    if (((MR_tag((MR_Word) hlds__pred_table__SymName_10)) == (MR_mktag((MR_Integer) 1))))
#line 775 "pred_table.m"
      {
#line 775 "pred_table.m"
        MR_Word hlds__pred_table__Module_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_10, (MR_Integer) 0)));
#line 775 "pred_table.m"
        MR_String hlds__pred_table__Name_14 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_10, (MR_Integer) 1)));

#line 749 "pred_table.m"
#line 749 "pred_table.m"
        switch (hlds__pred_table__PredOrFunc_9) {
#line 749 "pred_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 749 "pred_table.m"
          case (MR_Integer) 1:
#line 753 "pred_table.m"
            {
#line 753 "pred_table.m"
              MR_Integer hlds__pred_table__FuncArity_23 = (hlds__pred_table__Arity_11 - (MR_Integer) 1);

#line 755 "pred_table.m"
              {
#line 755 "pred_table.m"
                hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredicateTable_7, hlds__pred_table__IsFullyQualified_8, hlds__pred_table__Module_13, hlds__pred_table__Name_14, hlds__pred_table__FuncArity_23, hlds__pred_table__PredIds_12);
              }
#line 753 "pred_table.m"
            }
#line 749 "pred_table.m"
            break;
#line 749 "pred_table.m"
          case (MR_Integer) 0:
#line 750 "pred_table.m"
            {
#line 750 "pred_table.m"
              hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredicateTable_7, hlds__pred_table__IsFullyQualified_8, hlds__pred_table__Module_13, hlds__pred_table__Name_14, hlds__pred_table__Arity_11, hlds__pred_table__PredIds_12);
            }
#line 749 "pred_table.m"
            break;
#line 749 "pred_table.m"
        }
#line 775 "pred_table.m"
      }
#line 775 "pred_table.m"
    else
#line 779 "pred_table.m"
      {
#line 779 "pred_table.m"
        MR_String hlds__pred_table__Name_15 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_10, (MR_Integer) 0)));

#line 784 "pred_table.m"
#line 784 "pred_table.m"
        switch (hlds__pred_table__IsFullyQualified_8) {
#line 784 "pred_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 784 "pred_table.m"
          case (MR_Integer) 0:
#line 786 "pred_table.m"
            *hlds__pred_table__PredIds_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 784 "pred_table.m"
            break;
#line 784 "pred_table.m"
          case (MR_Integer) 1:
#line 762 "pred_table.m"
#line 762 "pred_table.m"
            switch (hlds__pred_table__PredOrFunc_9) {
#line 762 "pred_table.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 762 "pred_table.m"
              case (MR_Integer) 1:
#line 766 "pred_table.m"
                {
#line 766 "pred_table.m"
                  MR_Integer hlds__pred_table__FuncArity_30 = (hlds__pred_table__Arity_11 - (MR_Integer) 1);

#line 768 "pred_table.m"
                  {
#line 768 "pred_table.m"
                    hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(hlds__pred_table__PredicateTable_7, hlds__pred_table__Name_15, hlds__pred_table__FuncArity_30, hlds__pred_table__PredIds_12);
                  }
#line 766 "pred_table.m"
                }
#line 762 "pred_table.m"
                break;
#line 762 "pred_table.m"
              case (MR_Integer) 0:
#line 763 "pred_table.m"
                {
#line 763 "pred_table.m"
                  hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(hlds__pred_table__PredicateTable_7, hlds__pred_table__Name_15, hlds__pred_table__Arity_11, hlds__pred_table__PredIds_12);
                }
#line 762 "pred_table.m"
                break;
#line 762 "pred_table.m"
            }
#line 784 "pred_table.m"
            break;
#line 784 "pred_table.m"
        }
#line 779 "pred_table.m"
      }
#line 775 "pred_table.m"
  }
#line 202 "pred_table.m"
}

#line 192 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pf_name_arity_5_p_0(
#line 192 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_6,
#line 192 "pred_table.m"
  MR_Word hlds__pred_table__PredOrFunc_7,
#line 192 "pred_table.m"
  MR_String hlds__pred_table__Name_8,
#line 192 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_9,
#line 192 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_10)
#line 192 "pred_table.m"
{
#line 762 "pred_table.m"
  {
#line 762 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 762 "pred_table.m"
#line 762 "pred_table.m"
    switch (hlds__pred_table__PredOrFunc_7) {
#line 762 "pred_table.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 762 "pred_table.m"
      case (MR_Integer) 1:
#line 766 "pred_table.m"
        {
#line 766 "pred_table.m"
          MR_Integer hlds__pred_table__FuncArity_11 = (hlds__pred_table__Arity_9 - (MR_Integer) 1);

#line 768 "pred_table.m"
          {
#line 768 "pred_table.m"
            hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__Name_8, hlds__pred_table__FuncArity_11, hlds__pred_table__PredIds_10);
          }
#line 766 "pred_table.m"
        }
#line 762 "pred_table.m"
        break;
#line 762 "pred_table.m"
      case (MR_Integer) 0:
#line 763 "pred_table.m"
        {
#line 763 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__Name_8, hlds__pred_table__Arity_9, hlds__pred_table__PredIds_10);
        }
#line 762 "pred_table.m"
        break;
#line 762 "pred_table.m"
    }
#line 762 "pred_table.m"
  }
#line 192 "pred_table.m"
}

#line 181 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pf_m_n_a_7_p_0(
#line 181 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_8,
#line 181 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_9,
#line 181 "pred_table.m"
  MR_Word hlds__pred_table__PredOrFunc_10,
#line 181 "pred_table.m"
  MR_Word hlds__pred_table__Module_11,
#line 181 "pred_table.m"
  MR_String hlds__pred_table__Name_12,
#line 181 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_13,
#line 181 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_14)
#line 181 "pred_table.m"
{
#line 749 "pred_table.m"
  {
#line 749 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 749 "pred_table.m"
#line 749 "pred_table.m"
    switch (hlds__pred_table__PredOrFunc_10) {
#line 749 "pred_table.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 749 "pred_table.m"
      case (MR_Integer) 1:
#line 753 "pred_table.m"
        {
#line 753 "pred_table.m"
          MR_Integer hlds__pred_table__FuncArity_15 = (hlds__pred_table__Arity_13 - (MR_Integer) 1);

#line 755 "pred_table.m"
          {
#line 755 "pred_table.m"
            hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredicateTable_8, hlds__pred_table__IsFullyQualified_9, hlds__pred_table__Module_11, hlds__pred_table__Name_12, hlds__pred_table__FuncArity_15, hlds__pred_table__PredIds_14);
          }
#line 753 "pred_table.m"
        }
#line 749 "pred_table.m"
        break;
#line 749 "pred_table.m"
      case (MR_Integer) 0:
#line 750 "pred_table.m"
        {
#line 750 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredicateTable_8, hlds__pred_table__IsFullyQualified_9, hlds__pred_table__Module_11, hlds__pred_table__Name_12, hlds__pred_table__Arity_13, hlds__pred_table__PredIds_14);
        }
#line 749 "pred_table.m"
        break;
#line 749 "pred_table.m"
    }
#line 749 "pred_table.m"
  }
#line 181 "pred_table.m"
}

#line 735 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0_1(
#line 735 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 735 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1)
#line 735 "pred_table.m"
{
#line 735 "pred_table.m"
  {
#line 735 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 735 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;

#line 735 "pred_table.m"
    {
#line 735 "pred_table.m"
      hlds__pred_table__succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) hlds__pred_table__wrapper_arg_1));
    }
#line 735 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 735 "pred_table.m"
  }
#line 735 "pred_table.m"
}

#line 170 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(
#line 170 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_7,
#line 170 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_8,
#line 170 "pred_table.m"
  MR_Word hlds__pred_table__Module_9,
#line 170 "pred_table.m"
  MR_String hlds__pred_table__FuncName_10,
#line 170 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_11,
#line 170 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredIds_15)
#line 170 "pred_table.m"
{
#line 714 "pred_table.m"
  {
#line 714 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 714 "pred_table.m"
    MR_Word hlds__pred_table__F_MNA_Index_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 9)));
#line 715 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 0)));
#line 715 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 1)));
#line 715 "pred_table.m"
    MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 2)));
#line 715 "pred_table.m"
    MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 3)));
#line 715 "pred_table.m"
    MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 4)));
#line 715 "pred_table.m"
    MR_Word hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 5)));
#line 715 "pred_table.m"
    MR_Word hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 6)));
#line 715 "pred_table.m"
    MR_Word hlds__pred_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 7)));
#line 715 "pred_table.m"
    MR_Word hlds__pred_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 8)));
#line 722 "pred_table.m"
    MR_Word hlds__pred_table__STATE_VARIABLE_PredIds_17_17;
#line 717 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_32_32;
#line 717 "pred_table.m"
    MR_Word hlds__pred_table__ArityIndex_14;
#line 717 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16;
#line 717 "pred_table.m"
    MR_Box hlds__pred_table__conv0_ArityIndex_14;
#line 718 "pred_table.m"
    MR_Box hlds__pred_table__conv1_STATE_VARIABLE_PredIds_17_17;

#line 717 "pred_table.m"
    {
#line 717 "pred_table.m"
      hlds__pred_table__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 717 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_16_16, 0) = ((MR_Box) (hlds__pred_table__Module_9));
#line 717 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_16_16, 1) = ((MR_Box) (hlds__pred_table__FuncName_10));
#line 717 "pred_table.m"
    }
#line 717 "pred_table.m"
    {
#line 717 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__F_MNA_Index_13, ((MR_Box) (hlds__pred_table__V_16_16)), &hlds__pred_table__conv0_ArityIndex_14);
    }
#line 717 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 717 "pred_table.m"
      {
#line 717 "pred_table.m"
        hlds__pred_table__ArityIndex_14 = ((MR_Word) hlds__pred_table__conv0_ArityIndex_14);
#line 717 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 717 "pred_table.m"
      }
#line 717 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 717 "pred_table.m"
      {
#line 7013 "hlds.pred_table.c"
        hlds__pred_table__TypeInfo_32_32 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
#line 718 "pred_table.m"
        {
#line 718 "pred_table.m"
          hlds__pred_table__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__pred_table__TypeInfo_32_32, hlds__pred_table__ArityIndex_14, hlds__pred_table__Arity_11, &hlds__pred_table__conv1_STATE_VARIABLE_PredIds_17_17);
        }
#line 718 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 718 "pred_table.m"
          {
#line 718 "pred_table.m"
            hlds__pred_table__STATE_VARIABLE_PredIds_17_17 = ((MR_Word) hlds__pred_table__conv1_STATE_VARIABLE_PredIds_17_17);
#line 718 "pred_table.m"
            hlds__pred_table__succeeded = MR_TRUE;
#line 718 "pred_table.m"
          }
#line 717 "pred_table.m"
      }
#line 722 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 730 "pred_table.m"
#line 730 "pred_table.m"
      switch (hlds__pred_table__IsFullyQualified_8) {
#line 730 "pred_table.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 730 "pred_table.m"
        case (MR_Integer) 0:
#line 733 "pred_table.m"
          {
#line 733 "pred_table.m"
            MR_Word hlds__pred_table__Preds_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 0)));
#line 733 "pred_table.m"
            MR_Word hlds__pred_table__V_44_44;
#line 388 "pred_table.m"
            MR_Word hlds__pred_table__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 1)));
#line 388 "pred_table.m"
            MR_Word hlds__pred_table__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 2)));
#line 388 "pred_table.m"
            MR_Word hlds__pred_table__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 3)));
#line 388 "pred_table.m"
            MR_Word hlds__pred_table__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 4)));
#line 388 "pred_table.m"
            MR_Word hlds__pred_table__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 5)));
#line 388 "pred_table.m"
            MR_Word hlds__pred_table__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 6)));
#line 388 "pred_table.m"
            MR_Word hlds__pred_table__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 7)));
#line 388 "pred_table.m"
            MR_Word hlds__pred_table__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 8)));
#line 388 "pred_table.m"
            MR_Word hlds__pred_table__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 9)));

#line 735 "pred_table.m"
            {
#line 735 "pred_table.m"
              hlds__pred_table__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 735 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
#line 735 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0_1));
#line 735 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 735 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 3) = ((MR_Box) (hlds__pred_table__Preds_41));
#line 735 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 4) = ((MR_Box) (hlds__pred_table__Module_9));
#line 735 "pred_table.m"
            }
#line 735 "pred_table.m"
            {
#line 735 "pred_table.m"
              mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__V_44_44, hlds__pred_table__STATE_VARIABLE_PredIds_17_17, hlds__pred_table__STATE_VARIABLE_PredIds_15);
            }
#line 733 "pred_table.m"
          }
#line 730 "pred_table.m"
          break;
#line 730 "pred_table.m"
        case (MR_Integer) 1:
#line 731 "pred_table.m"
          *hlds__pred_table__STATE_VARIABLE_PredIds_15 = hlds__pred_table__STATE_VARIABLE_PredIds_17_17;
#line 730 "pred_table.m"
          break;
#line 730 "pred_table.m"
      }
#line 722 "pred_table.m"
    else
#line 723 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_PredIds_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 714 "pred_table.m"
  }
#line 170 "pred_table.m"
}

#line 735 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0_1(
#line 735 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 735 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1)
#line 735 "pred_table.m"
{
#line 735 "pred_table.m"
  {
#line 735 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 735 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;

#line 735 "pred_table.m"
    {
#line 735 "pred_table.m"
      hlds__pred_table__succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) hlds__pred_table__wrapper_arg_1));
    }
#line 735 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 735 "pred_table.m"
  }
#line 735 "pred_table.m"
}

#line 167 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(
#line 167 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_7,
#line 167 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_8,
#line 167 "pred_table.m"
  MR_Word hlds__pred_table__Module_9,
#line 167 "pred_table.m"
  MR_String hlds__pred_table__PredName_10,
#line 167 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_11,
#line 167 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredIds_15)
#line 167 "pred_table.m"
{
#line 701 "pred_table.m"
  {
#line 701 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 701 "pred_table.m"
    MR_Word hlds__pred_table__P_MNA_Index_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 6)));
#line 702 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 0)));
#line 702 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 1)));
#line 702 "pred_table.m"
    MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 2)));
#line 702 "pred_table.m"
    MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 3)));
#line 702 "pred_table.m"
    MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 4)));
#line 702 "pred_table.m"
    MR_Word hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 5)));
#line 702 "pred_table.m"
    MR_Word hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 7)));
#line 702 "pred_table.m"
    MR_Word hlds__pred_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 8)));
#line 702 "pred_table.m"
    MR_Word hlds__pred_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 9)));
#line 709 "pred_table.m"
    MR_Word hlds__pred_table__STATE_VARIABLE_PredIds_17_17;
#line 704 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_32_32;
#line 704 "pred_table.m"
    MR_Word hlds__pred_table__ArityIndex_14;
#line 704 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16;
#line 704 "pred_table.m"
    MR_Box hlds__pred_table__conv0_ArityIndex_14;
#line 705 "pred_table.m"
    MR_Box hlds__pred_table__conv1_STATE_VARIABLE_PredIds_17_17;

#line 704 "pred_table.m"
    {
#line 704 "pred_table.m"
      hlds__pred_table__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 704 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_16_16, 0) = ((MR_Box) (hlds__pred_table__Module_9));
#line 704 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_16_16, 1) = ((MR_Box) (hlds__pred_table__PredName_10));
#line 704 "pred_table.m"
    }
#line 704 "pred_table.m"
    {
#line 704 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__P_MNA_Index_13, ((MR_Box) (hlds__pred_table__V_16_16)), &hlds__pred_table__conv0_ArityIndex_14);
    }
#line 704 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 704 "pred_table.m"
      {
#line 704 "pred_table.m"
        hlds__pred_table__ArityIndex_14 = ((MR_Word) hlds__pred_table__conv0_ArityIndex_14);
#line 704 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 704 "pred_table.m"
      }
#line 704 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 704 "pred_table.m"
      {
#line 7219 "hlds.pred_table.c"
        hlds__pred_table__TypeInfo_32_32 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
#line 705 "pred_table.m"
        {
#line 705 "pred_table.m"
          hlds__pred_table__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__pred_table__TypeInfo_32_32, hlds__pred_table__ArityIndex_14, hlds__pred_table__Arity_11, &hlds__pred_table__conv1_STATE_VARIABLE_PredIds_17_17);
        }
#line 705 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 705 "pred_table.m"
          {
#line 705 "pred_table.m"
            hlds__pred_table__STATE_VARIABLE_PredIds_17_17 = ((MR_Word) hlds__pred_table__conv1_STATE_VARIABLE_PredIds_17_17);
#line 705 "pred_table.m"
            hlds__pred_table__succeeded = MR_TRUE;
#line 705 "pred_table.m"
          }
#line 704 "pred_table.m"
      }
#line 709 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 730 "pred_table.m"
#line 730 "pred_table.m"
      switch (hlds__pred_table__IsFullyQualified_8) {
#line 730 "pred_table.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 730 "pred_table.m"
        case (MR_Integer) 0:
#line 733 "pred_table.m"
          {
#line 733 "pred_table.m"
            MR_Word hlds__pred_table__Preds_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 0)));
#line 733 "pred_table.m"
            MR_Word hlds__pred_table__V_44_44;
#line 388 "pred_table.m"
            MR_Word hlds__pred_table__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 1)));
#line 388 "pred_table.m"
            MR_Word hlds__pred_table__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 2)));
#line 388 "pred_table.m"
            MR_Word hlds__pred_table__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 3)));
#line 388 "pred_table.m"
            MR_Word hlds__pred_table__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 4)));
#line 388 "pred_table.m"
            MR_Word hlds__pred_table__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 5)));
#line 388 "pred_table.m"
            MR_Word hlds__pred_table__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 6)));
#line 388 "pred_table.m"
            MR_Word hlds__pred_table__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 7)));
#line 388 "pred_table.m"
            MR_Word hlds__pred_table__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 8)));
#line 388 "pred_table.m"
            MR_Word hlds__pred_table__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 9)));

#line 735 "pred_table.m"
            {
#line 735 "pred_table.m"
              hlds__pred_table__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 735 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
#line 735 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0_1));
#line 735 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 735 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 3) = ((MR_Box) (hlds__pred_table__Preds_41));
#line 735 "pred_table.m"
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 4) = ((MR_Box) (hlds__pred_table__Module_9));
#line 735 "pred_table.m"
            }
#line 735 "pred_table.m"
            {
#line 735 "pred_table.m"
              mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__V_44_44, hlds__pred_table__STATE_VARIABLE_PredIds_17_17, hlds__pred_table__STATE_VARIABLE_PredIds_15);
            }
#line 733 "pred_table.m"
          }
#line 730 "pred_table.m"
          break;
#line 730 "pred_table.m"
        case (MR_Integer) 1:
#line 731 "pred_table.m"
          *hlds__pred_table__STATE_VARIABLE_PredIds_15 = hlds__pred_table__STATE_VARIABLE_PredIds_17_17;
#line 730 "pred_table.m"
          break;
#line 730 "pred_table.m"
      }
#line 709 "pred_table.m"
    else
#line 710 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_PredIds_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 701 "pred_table.m"
  }
#line 167 "pred_table.m"
}

#line 164 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_m_n_a_6_p_0(
#line 164 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_7,
#line 164 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_8,
#line 164 "pred_table.m"
  MR_Word hlds__pred_table__Module_9,
#line 164 "pred_table.m"
  MR_String hlds__pred_table__Name_10,
#line 164 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_11,
#line 164 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_12)
#line 164 "pred_table.m"
{
#line 693 "pred_table.m"
  {
#line 693 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 693 "pred_table.m"
    MR_Word hlds__pred_table__PredPredIds_13;
#line 693 "pred_table.m"
    MR_Word hlds__pred_table__FuncPredIds_14;

#line 694 "pred_table.m"
    {
#line 694 "pred_table.m"
      hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredicateTable_7, hlds__pred_table__IsFullyQualified_8, hlds__pred_table__Module_9, hlds__pred_table__Name_10, hlds__pred_table__Arity_11, &hlds__pred_table__PredPredIds_13);
    }
#line 696 "pred_table.m"
    {
#line 696 "pred_table.m"
      hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredicateTable_7, hlds__pred_table__IsFullyQualified_8, hlds__pred_table__Module_9, hlds__pred_table__Name_10, hlds__pred_table__Arity_11, &hlds__pred_table__FuncPredIds_14);
    }
#line 698 "pred_table.m"
    {
#line 698 "pred_table.m"
      *hlds__pred_table__PredIds_12 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__FuncPredIds_14, hlds__pred_table__PredPredIds_13);
    }
#line 693 "pred_table.m"
  }
#line 164 "pred_table.m"
}

#line 141 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(
#line 141 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_5,
#line 141 "pred_table.m"
  MR_String hlds__pred_table__FuncName_6,
#line 141 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_7,
#line 141 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_8)
#line 141 "pred_table.m"
{
#line 682 "pred_table.m"
  {
#line 682 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 682 "pred_table.m"
    MR_Word hlds__pred_table__FuncNameArityIndex_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
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
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 683 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 683 "pred_table.m"
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
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
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_11_11, 0) = ((MR_Box) (hlds__pred_table__FuncName_6));
#line 684 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_11_11, 1) = ((MR_Box) (hlds__pred_table__Arity_7));
#line 684 "pred_table.m"
    }
#line 684 "pred_table.m"
    {
#line 684 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__FuncNameArityIndex_9, ((MR_Box) (hlds__pred_table__V_11_11)), &hlds__pred_table__conv0_PredIdsPrime_10);
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
#line 141 "pred_table.m"
}

#line 139 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(
#line 139 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_5,
#line 139 "pred_table.m"
  MR_String hlds__pred_table__PredName_6,
#line 139 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_7,
#line 139 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_8)
#line 139 "pred_table.m"
{
#line 673 "pred_table.m"
  {
#line 673 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 673 "pred_table.m"
    MR_Word hlds__pred_table__PredNameArityIndex_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 674 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 674 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 674 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 674 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 674 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 674 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 674 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 674 "pred_table.m"
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 674 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 677 "pred_table.m"
    MR_Word hlds__pred_table__PredIdsPrime_10;
#line 675 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11;
#line 675 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredIdsPrime_10;

#line 675 "pred_table.m"
    {
#line 675 "pred_table.m"
      hlds__pred_table__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 675 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_11_11, 0) = ((MR_Box) (hlds__pred_table__PredName_6));
#line 675 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_11_11, 1) = ((MR_Box) (hlds__pred_table__Arity_7));
#line 675 "pred_table.m"
    }
#line 675 "pred_table.m"
    {
#line 675 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__PredNameArityIndex_9, ((MR_Box) (hlds__pred_table__V_11_11)), &hlds__pred_table__conv0_PredIdsPrime_10);
    }
#line 675 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 675 "pred_table.m"
      {
#line 675 "pred_table.m"
        hlds__pred_table__PredIdsPrime_10 = ((MR_Word) hlds__pred_table__conv0_PredIdsPrime_10);
#line 675 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 675 "pred_table.m"
      }
#line 677 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 676 "pred_table.m"
      *hlds__pred_table__PredIds_8 = hlds__pred_table__PredIdsPrime_10;
#line 677 "pred_table.m"
    else
#line 678 "pred_table.m"
      *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 673 "pred_table.m"
  }
#line 139 "pred_table.m"
}

#line 137 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_name_arity_4_p_0(
#line 137 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_5,
#line 137 "pred_table.m"
  MR_String hlds__pred_table__Name_6,
#line 137 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_7,
#line 137 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_8)
#line 137 "pred_table.m"
{
#line 665 "pred_table.m"
  {
#line 665 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 665 "pred_table.m"
    MR_Word hlds__pred_table__PredPredIds_9;
#line 665 "pred_table.m"
    MR_Word hlds__pred_table__FuncPredIds_10;

#line 666 "pred_table.m"
    {
#line 666 "pred_table.m"
      hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(hlds__pred_table__PredicateTable_5, hlds__pred_table__Name_6, hlds__pred_table__Arity_7, &hlds__pred_table__PredPredIds_9);
    }
#line 668 "pred_table.m"
    {
#line 668 "pred_table.m"
      hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(hlds__pred_table__PredicateTable_5, hlds__pred_table__Name_6, hlds__pred_table__Arity_7, &hlds__pred_table__FuncPredIds_10);
    }
#line 670 "pred_table.m"
    {
#line 670 "pred_table.m"
      *hlds__pred_table__PredIds_8 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__FuncPredIds_10, hlds__pred_table__PredPredIds_9);
    }
#line 665 "pred_table.m"
  }
#line 137 "pred_table.m"
}

#line 129 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_name_3_p_0(
#line 129 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_4,
#line 129 "pred_table.m"
  MR_String hlds__pred_table__FuncName_5,
#line 129 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_6)
#line 129 "pred_table.m"
{
#line 609 "pred_table.m"
  {
#line 609 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 609 "pred_table.m"
    MR_Word hlds__pred_table__FuncNameIndex_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 7)));
#line 610 "pred_table.m"
    MR_Word hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 0)));
#line 610 "pred_table.m"
    MR_Word hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 1)));
#line 610 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 2)));
#line 610 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 3)));
#line 610 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 4)));
#line 610 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 5)));
#line 610 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 6)));
#line 610 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 8)));
#line 610 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 9)));
#line 613 "pred_table.m"
    MR_Word hlds__pred_table__PredIdsPrime_8;
#line 611 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredIdsPrime_8;

#line 611 "pred_table.m"
    {
#line 611 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__FuncNameIndex_7, ((MR_Box) (hlds__pred_table__FuncName_5)), &hlds__pred_table__conv0_PredIdsPrime_8);
    }
#line 611 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 611 "pred_table.m"
      {
#line 611 "pred_table.m"
        hlds__pred_table__PredIdsPrime_8 = ((MR_Word) hlds__pred_table__conv0_PredIdsPrime_8);
#line 611 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 611 "pred_table.m"
      }
#line 613 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 612 "pred_table.m"
      *hlds__pred_table__PredIds_6 = hlds__pred_table__PredIdsPrime_8;
#line 613 "pred_table.m"
    else
#line 614 "pred_table.m"
      *hlds__pred_table__PredIds_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 609 "pred_table.m"
  }
#line 129 "pred_table.m"
}

#line 127 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_name_3_p_0(
#line 127 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_4,
#line 127 "pred_table.m"
  MR_String hlds__pred_table__PredName_5,
#line 127 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_6)
#line 127 "pred_table.m"
{
#line 601 "pred_table.m"
  {
#line 601 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 601 "pred_table.m"
    MR_Word hlds__pred_table__PredNameIndex_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 4)));
#line 602 "pred_table.m"
    MR_Word hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 0)));
#line 602 "pred_table.m"
    MR_Word hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 1)));
#line 602 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 2)));
#line 602 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 3)));
#line 602 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 5)));
#line 602 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 6)));
#line 602 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 7)));
#line 602 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 8)));
#line 602 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 9)));
#line 605 "pred_table.m"
    MR_Word hlds__pred_table__PredIdsPrime_8;
#line 603 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredIdsPrime_8;

#line 603 "pred_table.m"
    {
#line 603 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__PredNameIndex_7, ((MR_Box) (hlds__pred_table__PredName_5)), &hlds__pred_table__conv0_PredIdsPrime_8);
    }
#line 603 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 603 "pred_table.m"
      {
#line 603 "pred_table.m"
        hlds__pred_table__PredIdsPrime_8 = ((MR_Word) hlds__pred_table__conv0_PredIdsPrime_8);
#line 603 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 603 "pred_table.m"
      }
#line 605 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 604 "pred_table.m"
      *hlds__pred_table__PredIds_6 = hlds__pred_table__PredIdsPrime_8;
#line 605 "pred_table.m"
    else
#line 606 "pred_table.m"
      *hlds__pred_table__PredIds_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 601 "pred_table.m"
  }
#line 127 "pred_table.m"
}

#line 125 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_name_3_p_0(
#line 125 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_4,
#line 125 "pred_table.m"
  MR_String hlds__pred_table__Name_5,
#line 125 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_6)
#line 125 "pred_table.m"
{
#line 596 "pred_table.m"
  {
#line 596 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 596 "pred_table.m"
    MR_Word hlds__pred_table__PredPredIds_7;
#line 596 "pred_table.m"
    MR_Word hlds__pred_table__FuncPredIds_8;
#line 596 "pred_table.m"
    MR_Word hlds__pred_table__PredNameIndex_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 4)));
#line 596 "pred_table.m"
    MR_Word hlds__pred_table__FuncNameIndex_29;
#line 602 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 0)));
#line 602 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 1)));
#line 602 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 2)));
#line 602 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 3)));
#line 602 "pred_table.m"
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 5)));
#line 602 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 6)));
#line 602 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 7)));
#line 602 "pred_table.m"
    MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 8)));
#line 602 "pred_table.m"
    MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 9)));
#line 605 "pred_table.m"
    MR_Word hlds__pred_table__PredIdsPrime_14;
#line 603 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredIdsPrime_14;
#line 610 "pred_table.m"
    MR_Word hlds__pred_table__V_31_31;
#line 610 "pred_table.m"
    MR_Word hlds__pred_table__V_32_32;
#line 610 "pred_table.m"
    MR_Word hlds__pred_table__V_33_33;
#line 610 "pred_table.m"
    MR_Word hlds__pred_table__V_34_34;
#line 610 "pred_table.m"
    MR_Word hlds__pred_table__V_35_35;
#line 610 "pred_table.m"
    MR_Word hlds__pred_table__V_36_36;
#line 610 "pred_table.m"
    MR_Word hlds__pred_table__V_37_37;
#line 610 "pred_table.m"
    MR_Word hlds__pred_table__V_38_38;
#line 610 "pred_table.m"
    MR_Word hlds__pred_table__V_39_39;
#line 613 "pred_table.m"
    MR_Word hlds__pred_table__PredIdsPrime_30;
#line 611 "pred_table.m"
    MR_Box hlds__pred_table__conv1_PredIdsPrime_30;

#line 603 "pred_table.m"
    {
#line 603 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__PredNameIndex_13, ((MR_Box) (hlds__pred_table__Name_5)), &hlds__pred_table__conv0_PredIdsPrime_14);
    }
#line 603 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 603 "pred_table.m"
      {
#line 603 "pred_table.m"
        hlds__pred_table__PredIdsPrime_14 = ((MR_Word) hlds__pred_table__conv0_PredIdsPrime_14);
#line 603 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 603 "pred_table.m"
      }
#line 605 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 604 "pred_table.m"
      hlds__pred_table__PredPredIds_7 = hlds__pred_table__PredIdsPrime_14;
#line 605 "pred_table.m"
    else
#line 606 "pred_table.m"
      hlds__pred_table__PredPredIds_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 610 "pred_table.m"
    hlds__pred_table__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 0)));
#line 610 "pred_table.m"
    hlds__pred_table__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 1)));
#line 610 "pred_table.m"
    hlds__pred_table__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 2)));
#line 610 "pred_table.m"
    hlds__pred_table__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 3)));
#line 610 "pred_table.m"
    hlds__pred_table__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 4)));
#line 610 "pred_table.m"
    hlds__pred_table__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 5)));
#line 610 "pred_table.m"
    hlds__pred_table__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 6)));
#line 610 "pred_table.m"
    hlds__pred_table__FuncNameIndex_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 7)));
#line 610 "pred_table.m"
    hlds__pred_table__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 8)));
#line 610 "pred_table.m"
    hlds__pred_table__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 9)));
#line 611 "pred_table.m"
    {
#line 611 "pred_table.m"
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__FuncNameIndex_29, ((MR_Box) (hlds__pred_table__Name_5)), &hlds__pred_table__conv1_PredIdsPrime_30);
    }
#line 611 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 611 "pred_table.m"
      {
#line 611 "pred_table.m"
        hlds__pred_table__PredIdsPrime_30 = ((MR_Word) hlds__pred_table__conv1_PredIdsPrime_30);
#line 611 "pred_table.m"
        hlds__pred_table__succeeded = MR_TRUE;
#line 611 "pred_table.m"
      }
#line 613 "pred_table.m"
    if (hlds__pred_table__succeeded)
#line 612 "pred_table.m"
      hlds__pred_table__FuncPredIds_8 = hlds__pred_table__PredIdsPrime_30;
#line 613 "pred_table.m"
    else
#line 614 "pred_table.m"
      hlds__pred_table__FuncPredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 599 "pred_table.m"
    {
#line 599 "pred_table.m"
      *hlds__pred_table__PredIds_6 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__FuncPredIds_8, hlds__pred_table__PredPredIds_7);
    }
#line 596 "pred_table.m"
  }
#line 125 "pred_table.m"
}

#line 117 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(
#line 117 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_6,
#line 117 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_7,
#line 117 "pred_table.m"
  MR_Word hlds__pred_table__SymName_8,
#line 117 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_9,
#line 117 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_10)
#line 117 "pred_table.m"
{
#line 579 "pred_table.m"
  {
#line 579 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 579 "pred_table.m"
    if (((MR_tag((MR_Word) hlds__pred_table__SymName_8)) == (MR_mktag((MR_Integer) 1))))
#line 589 "pred_table.m"
      {
#line 589 "pred_table.m"
        MR_Word hlds__pred_table__Module_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_8, (MR_Integer) 0)));
#line 589 "pred_table.m"
        MR_String hlds__pred_table__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_8, (MR_Integer) 1)));

#line 590 "pred_table.m"
        {
#line 590 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__IsFullyQualified_7, hlds__pred_table__Module_12, hlds__pred_table__Name_13, hlds__pred_table__Arity_9, hlds__pred_table__PredIds_10);
        }
#line 589 "pred_table.m"
      }
#line 579 "pred_table.m"
    else
#line 579 "pred_table.m"
      {
#line 579 "pred_table.m"
        MR_String hlds__pred_table__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_8, (MR_Integer) 0)));

#line 584 "pred_table.m"
#line 584 "pred_table.m"
        switch (hlds__pred_table__IsFullyQualified_7) {
#line 584 "pred_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 584 "pred_table.m"
          case (MR_Integer) 0:
#line 586 "pred_table.m"
            *hlds__pred_table__PredIds_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 584 "pred_table.m"
            break;
#line 584 "pred_table.m"
          case (MR_Integer) 1:
#line 582 "pred_table.m"
            {
#line 582 "pred_table.m"
              hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__Name_11, hlds__pred_table__Arity_9, hlds__pred_table__PredIds_10);
            }
#line 584 "pred_table.m"
            break;
#line 584 "pred_table.m"
        }
#line 579 "pred_table.m"
      }
#line 579 "pred_table.m"
  }
#line 117 "pred_table.m"
}

#line 114 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_sym_arity_5_p_0(
#line 114 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_6,
#line 114 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_7,
#line 114 "pred_table.m"
  MR_Word hlds__pred_table__SymName_8,
#line 114 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_9,
#line 114 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_10)
#line 114 "pred_table.m"
{
#line 561 "pred_table.m"
  {
#line 561 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 561 "pred_table.m"
    if (((MR_tag((MR_Word) hlds__pred_table__SymName_8)) == (MR_mktag((MR_Integer) 1))))
#line 571 "pred_table.m"
      {
#line 571 "pred_table.m"
        MR_Word hlds__pred_table__Module_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_8, (MR_Integer) 0)));
#line 571 "pred_table.m"
        MR_String hlds__pred_table__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_8, (MR_Integer) 1)));

#line 572 "pred_table.m"
        {
#line 572 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__IsFullyQualified_7, hlds__pred_table__Module_12, hlds__pred_table__Name_13, hlds__pred_table__Arity_9, hlds__pred_table__PredIds_10);
        }
#line 571 "pred_table.m"
      }
#line 561 "pred_table.m"
    else
#line 561 "pred_table.m"
      {
#line 561 "pred_table.m"
        MR_String hlds__pred_table__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_8, (MR_Integer) 0)));

#line 566 "pred_table.m"
#line 566 "pred_table.m"
        switch (hlds__pred_table__IsFullyQualified_7) {
#line 566 "pred_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 566 "pred_table.m"
          case (MR_Integer) 0:
#line 568 "pred_table.m"
            *hlds__pred_table__PredIds_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 566 "pred_table.m"
            break;
#line 566 "pred_table.m"
          case (MR_Integer) 1:
#line 564 "pred_table.m"
            {
#line 564 "pred_table.m"
              hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__Name_11, hlds__pred_table__Arity_9, hlds__pred_table__PredIds_10);
            }
#line 566 "pred_table.m"
            break;
#line 566 "pred_table.m"
        }
#line 561 "pred_table.m"
      }
#line 561 "pred_table.m"
  }
#line 114 "pred_table.m"
}

#line 111 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(
#line 111 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_6,
#line 111 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_7,
#line 111 "pred_table.m"
  MR_Word hlds__pred_table__SymName_8,
#line 111 "pred_table.m"
  MR_Integer hlds__pred_table__Arity_9,
#line 111 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_10)
#line 111 "pred_table.m"
{
#line 543 "pred_table.m"
  {
#line 543 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 543 "pred_table.m"
    if (((MR_tag((MR_Word) hlds__pred_table__SymName_8)) == (MR_mktag((MR_Integer) 1))))
#line 553 "pred_table.m"
      {
#line 553 "pred_table.m"
        MR_Word hlds__pred_table__Module_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_8, (MR_Integer) 0)));
#line 553 "pred_table.m"
        MR_String hlds__pred_table__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_8, (MR_Integer) 1)));
#line 553 "pred_table.m"
        MR_Word hlds__pred_table__PredPredIds_20;
#line 553 "pred_table.m"
        MR_Word hlds__pred_table__FuncPredIds_21;

#line 694 "pred_table.m"
        {
#line 694 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__IsFullyQualified_7, hlds__pred_table__Module_12, hlds__pred_table__Name_13, hlds__pred_table__Arity_9, &hlds__pred_table__PredPredIds_20);
        }
#line 696 "pred_table.m"
        {
#line 696 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__IsFullyQualified_7, hlds__pred_table__Module_12, hlds__pred_table__Name_13, hlds__pred_table__Arity_9, &hlds__pred_table__FuncPredIds_21);
        }
#line 698 "pred_table.m"
        {
#line 698 "pred_table.m"
          *hlds__pred_table__PredIds_10 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__FuncPredIds_21, hlds__pred_table__PredPredIds_20);
        }
#line 553 "pred_table.m"
      }
#line 543 "pred_table.m"
    else
#line 543 "pred_table.m"
      {
#line 543 "pred_table.m"
        MR_String hlds__pred_table__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_8, (MR_Integer) 0)));

#line 548 "pred_table.m"
#line 548 "pred_table.m"
        switch (hlds__pred_table__IsFullyQualified_7) {
#line 548 "pred_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 548 "pred_table.m"
          case (MR_Integer) 0:
#line 550 "pred_table.m"
            *hlds__pred_table__PredIds_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 548 "pred_table.m"
            break;
#line 548 "pred_table.m"
          case (MR_Integer) 1:
#line 665 "pred_table.m"
            {
#line 665 "pred_table.m"
              MR_Word hlds__pred_table__PredPredIds_27;
#line 665 "pred_table.m"
              MR_Word hlds__pred_table__FuncPredIds_28;

#line 666 "pred_table.m"
              {
#line 666 "pred_table.m"
                hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__Name_11, hlds__pred_table__Arity_9, &hlds__pred_table__PredPredIds_27);
              }
#line 668 "pred_table.m"
              {
#line 668 "pred_table.m"
                hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__Name_11, hlds__pred_table__Arity_9, &hlds__pred_table__FuncPredIds_28);
              }
#line 670 "pred_table.m"
              {
#line 670 "pred_table.m"
                *hlds__pred_table__PredIds_10 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__FuncPredIds_28, hlds__pred_table__PredPredIds_27);
              }
#line 665 "pred_table.m"
            }
#line 548 "pred_table.m"
            break;
#line 548 "pred_table.m"
        }
#line 543 "pred_table.m"
      }
#line 543 "pred_table.m"
  }
#line 111 "pred_table.m"
}

#line 735 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_sym_4_p_0_1(
#line 735 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 735 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1)
#line 735 "pred_table.m"
{
#line 735 "pred_table.m"
  {
#line 735 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 735 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;

#line 735 "pred_table.m"
    {
#line 735 "pred_table.m"
      hlds__pred_table__succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) hlds__pred_table__wrapper_arg_1));
    }
#line 735 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 735 "pred_table.m"
  }
#line 735 "pred_table.m"
}

#line 102 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_sym_4_p_0(
#line 102 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_5,
#line 102 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_6,
#line 102 "pred_table.m"
  MR_Word hlds__pred_table__SymName_7,
#line 102 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_8)
#line 102 "pred_table.m"
{
#line 524 "pred_table.m"
  {
#line 524 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 524 "pred_table.m"
    if (((MR_tag((MR_Word) hlds__pred_table__SymName_7)) == (MR_mktag((MR_Integer) 1))))
#line 533 "pred_table.m"
      {
#line 533 "pred_table.m"
        MR_Word hlds__pred_table__Module_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_7, (MR_Integer) 0)));
#line 533 "pred_table.m"
        MR_String hlds__pred_table__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_7, (MR_Integer) 1)));
#line 533 "pred_table.m"
        MR_Word hlds__pred_table__Func_MNA_Index_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 653 "pred_table.m"
        MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 653 "pred_table.m"
        MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 653 "pred_table.m"
        MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 653 "pred_table.m"
        MR_Word hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 653 "pred_table.m"
        MR_Word hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 653 "pred_table.m"
        MR_Word hlds__pred_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 653 "pred_table.m"
        MR_Word hlds__pred_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 653 "pred_table.m"
        MR_Word hlds__pred_table__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 653 "pred_table.m"
        MR_Word hlds__pred_table__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 659 "pred_table.m"
        MR_Word hlds__pred_table__Arities_18;
#line 654 "pred_table.m"
        MR_Word hlds__pred_table__V_21_21;
#line 654 "pred_table.m"
        MR_Box hlds__pred_table__conv0_Arities_18;

#line 654 "pred_table.m"
        {
#line 654 "pred_table.m"
          hlds__pred_table__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 654 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_21_21, 0) = ((MR_Box) (hlds__pred_table__Module_10));
#line 654 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_21_21, 1) = ((MR_Box) (hlds__pred_table__Name_11));
#line 654 "pred_table.m"
        }
#line 654 "pred_table.m"
        {
#line 654 "pred_table.m"
          hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__Func_MNA_Index_17, ((MR_Box) (hlds__pred_table__V_21_21)), &hlds__pred_table__conv0_Arities_18);
        }
#line 654 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 654 "pred_table.m"
          {
#line 654 "pred_table.m"
            hlds__pred_table__Arities_18 = ((MR_Word) hlds__pred_table__conv0_Arities_18);
#line 654 "pred_table.m"
            hlds__pred_table__succeeded = MR_TRUE;
#line 654 "pred_table.m"
          }
#line 659 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 655 "pred_table.m"
          {
#line 655 "pred_table.m"
            MR_Word hlds__pred_table__PredIdLists_19;
#line 655 "pred_table.m"
            MR_Word hlds__pred_table__PredIds0_20;

#line 655 "pred_table.m"
            {
#line 655 "pred_table.m"
              mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__Arities_18, &hlds__pred_table__PredIdLists_19);
            }
#line 656 "pred_table.m"
            {
#line 656 "pred_table.m"
              mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__PredIdLists_19, &hlds__pred_table__PredIds0_20);
            }
#line 730 "pred_table.m"
#line 730 "pred_table.m"
            switch (hlds__pred_table__IsFullyQualified_6) {
#line 730 "pred_table.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 730 "pred_table.m"
              case (MR_Integer) 0:
#line 733 "pred_table.m"
                {
#line 733 "pred_table.m"
                  MR_Word hlds__pred_table__Preds_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 733 "pred_table.m"
                  MR_Word hlds__pred_table__V_47_47;
#line 388 "pred_table.m"
                  MR_Word hlds__pred_table__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 388 "pred_table.m"
                  MR_Word hlds__pred_table__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 388 "pred_table.m"
                  MR_Word hlds__pred_table__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 388 "pred_table.m"
                  MR_Word hlds__pred_table__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 388 "pred_table.m"
                  MR_Word hlds__pred_table__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 388 "pred_table.m"
                  MR_Word hlds__pred_table__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 388 "pred_table.m"
                  MR_Word hlds__pred_table__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 388 "pred_table.m"
                  MR_Word hlds__pred_table__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 388 "pred_table.m"
                  MR_Word hlds__pred_table__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));

#line 735 "pred_table.m"
                  {
#line 735 "pred_table.m"
                    hlds__pred_table__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 735 "pred_table.m"
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
#line 735 "pred_table.m"
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_func_sym_4_p_0_1));
#line 735 "pred_table.m"
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 735 "pred_table.m"
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 3) = ((MR_Box) (hlds__pred_table__Preds_44));
#line 735 "pred_table.m"
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 4) = ((MR_Box) (hlds__pred_table__Module_10));
#line 735 "pred_table.m"
                  }
#line 735 "pred_table.m"
                  {
#line 735 "pred_table.m"
                    mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__V_47_47, hlds__pred_table__PredIds0_20, hlds__pred_table__PredIds_8);
                  }
#line 733 "pred_table.m"
                }
#line 730 "pred_table.m"
                break;
#line 730 "pred_table.m"
              case (MR_Integer) 1:
#line 731 "pred_table.m"
                *hlds__pred_table__PredIds_8 = hlds__pred_table__PredIds0_20;
#line 730 "pred_table.m"
                break;
#line 730 "pred_table.m"
            }
#line 655 "pred_table.m"
          }
#line 659 "pred_table.m"
        else
#line 660 "pred_table.m"
          *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 533 "pred_table.m"
      }
#line 524 "pred_table.m"
    else
#line 524 "pred_table.m"
      {
#line 524 "pred_table.m"
        MR_String hlds__pred_table__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_7, (MR_Integer) 0)));

#line 528 "pred_table.m"
#line 528 "pred_table.m"
        switch (hlds__pred_table__IsFullyQualified_6) {
#line 528 "pred_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 528 "pred_table.m"
          case (MR_Integer) 0:
#line 530 "pred_table.m"
            *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 528 "pred_table.m"
            break;
#line 528 "pred_table.m"
          case (MR_Integer) 1:
#line 609 "pred_table.m"
            {
#line 609 "pred_table.m"
              MR_Word hlds__pred_table__FuncNameIndex_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 610 "pred_table.m"
              MR_Word hlds__pred_table__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 610 "pred_table.m"
              MR_Word hlds__pred_table__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 610 "pred_table.m"
              MR_Word hlds__pred_table__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 610 "pred_table.m"
              MR_Word hlds__pred_table__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 610 "pred_table.m"
              MR_Word hlds__pred_table__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 610 "pred_table.m"
              MR_Word hlds__pred_table__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 610 "pred_table.m"
              MR_Word hlds__pred_table__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 610 "pred_table.m"
              MR_Word hlds__pred_table__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 610 "pred_table.m"
              MR_Word hlds__pred_table__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 613 "pred_table.m"
              MR_Word hlds__pred_table__PredIdsPrime_65;
#line 611 "pred_table.m"
              MR_Box hlds__pred_table__conv1_PredIdsPrime_65;

#line 611 "pred_table.m"
              {
#line 611 "pred_table.m"
                hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__FuncNameIndex_64, ((MR_Box) (hlds__pred_table__Name_9)), &hlds__pred_table__conv1_PredIdsPrime_65);
              }
#line 611 "pred_table.m"
              if (hlds__pred_table__succeeded)
#line 611 "pred_table.m"
                {
#line 611 "pred_table.m"
                  hlds__pred_table__PredIdsPrime_65 = ((MR_Word) hlds__pred_table__conv1_PredIdsPrime_65);
#line 611 "pred_table.m"
                  hlds__pred_table__succeeded = MR_TRUE;
#line 611 "pred_table.m"
                }
#line 613 "pred_table.m"
              if (hlds__pred_table__succeeded)
#line 612 "pred_table.m"
                *hlds__pred_table__PredIds_8 = hlds__pred_table__PredIdsPrime_65;
#line 613 "pred_table.m"
              else
#line 614 "pred_table.m"
                *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 609 "pred_table.m"
            }
#line 528 "pred_table.m"
            break;
#line 528 "pred_table.m"
        }
#line 524 "pred_table.m"
      }
#line 524 "pred_table.m"
  }
#line 102 "pred_table.m"
}

#line 735 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0_1(
#line 735 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 735 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1)
#line 735 "pred_table.m"
{
#line 735 "pred_table.m"
  {
#line 735 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 735 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;

#line 735 "pred_table.m"
    {
#line 735 "pred_table.m"
      hlds__pred_table__succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) hlds__pred_table__wrapper_arg_1));
    }
#line 735 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 735 "pred_table.m"
  }
#line 735 "pred_table.m"
}

#line 100 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0(
#line 100 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_5,
#line 100 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_6,
#line 100 "pred_table.m"
  MR_Word hlds__pred_table__SymName_7,
#line 100 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_8)
#line 100 "pred_table.m"
{
#line 507 "pred_table.m"
  {
#line 507 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 507 "pred_table.m"
    if (((MR_tag((MR_Word) hlds__pred_table__SymName_7)) == (MR_mktag((MR_Integer) 1))))
#line 516 "pred_table.m"
      {
#line 516 "pred_table.m"
        MR_Word hlds__pred_table__Module_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_7, (MR_Integer) 0)));
#line 516 "pred_table.m"
        MR_String hlds__pred_table__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_7, (MR_Integer) 1)));
#line 516 "pred_table.m"
        MR_Word hlds__pred_table__Pred_MNA_Index_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 637 "pred_table.m"
        MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 637 "pred_table.m"
        MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 637 "pred_table.m"
        MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 637 "pred_table.m"
        MR_Word hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 637 "pred_table.m"
        MR_Word hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 637 "pred_table.m"
        MR_Word hlds__pred_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 637 "pred_table.m"
        MR_Word hlds__pred_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 637 "pred_table.m"
        MR_Word hlds__pred_table__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 637 "pred_table.m"
        MR_Word hlds__pred_table__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 643 "pred_table.m"
        MR_Word hlds__pred_table__Arities_18;
#line 638 "pred_table.m"
        MR_Word hlds__pred_table__V_21_21;
#line 638 "pred_table.m"
        MR_Box hlds__pred_table__conv0_Arities_18;

#line 638 "pred_table.m"
        {
#line 638 "pred_table.m"
          hlds__pred_table__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 638 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_21_21, 0) = ((MR_Box) (hlds__pred_table__Module_10));
#line 638 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_21_21, 1) = ((MR_Box) (hlds__pred_table__Name_11));
#line 638 "pred_table.m"
        }
#line 638 "pred_table.m"
        {
#line 638 "pred_table.m"
          hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__Pred_MNA_Index_17, ((MR_Box) (hlds__pred_table__V_21_21)), &hlds__pred_table__conv0_Arities_18);
        }
#line 638 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 638 "pred_table.m"
          {
#line 638 "pred_table.m"
            hlds__pred_table__Arities_18 = ((MR_Word) hlds__pred_table__conv0_Arities_18);
#line 638 "pred_table.m"
            hlds__pred_table__succeeded = MR_TRUE;
#line 638 "pred_table.m"
          }
#line 643 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 639 "pred_table.m"
          {
#line 639 "pred_table.m"
            MR_Word hlds__pred_table__PredIdLists_19;
#line 639 "pred_table.m"
            MR_Word hlds__pred_table__PredIds0_20;

#line 639 "pred_table.m"
            {
#line 639 "pred_table.m"
              mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__Arities_18, &hlds__pred_table__PredIdLists_19);
            }
#line 640 "pred_table.m"
            {
#line 640 "pred_table.m"
              mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__PredIdLists_19, &hlds__pred_table__PredIds0_20);
            }
#line 730 "pred_table.m"
#line 730 "pred_table.m"
            switch (hlds__pred_table__IsFullyQualified_6) {
#line 730 "pred_table.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 730 "pred_table.m"
              case (MR_Integer) 0:
#line 733 "pred_table.m"
                {
#line 733 "pred_table.m"
                  MR_Word hlds__pred_table__Preds_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 733 "pred_table.m"
                  MR_Word hlds__pred_table__V_47_47;
#line 388 "pred_table.m"
                  MR_Word hlds__pred_table__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 388 "pred_table.m"
                  MR_Word hlds__pred_table__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 388 "pred_table.m"
                  MR_Word hlds__pred_table__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 388 "pred_table.m"
                  MR_Word hlds__pred_table__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 388 "pred_table.m"
                  MR_Word hlds__pred_table__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 388 "pred_table.m"
                  MR_Word hlds__pred_table__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 388 "pred_table.m"
                  MR_Word hlds__pred_table__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 388 "pred_table.m"
                  MR_Word hlds__pred_table__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 388 "pred_table.m"
                  MR_Word hlds__pred_table__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));

#line 735 "pred_table.m"
                  {
#line 735 "pred_table.m"
                    hlds__pred_table__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 735 "pred_table.m"
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
#line 735 "pred_table.m"
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0_1));
#line 735 "pred_table.m"
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 735 "pred_table.m"
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 3) = ((MR_Box) (hlds__pred_table__Preds_44));
#line 735 "pred_table.m"
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 4) = ((MR_Box) (hlds__pred_table__Module_10));
#line 735 "pred_table.m"
                  }
#line 735 "pred_table.m"
                  {
#line 735 "pred_table.m"
                    mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__V_47_47, hlds__pred_table__PredIds0_20, hlds__pred_table__PredIds_8);
                  }
#line 733 "pred_table.m"
                }
#line 730 "pred_table.m"
                break;
#line 730 "pred_table.m"
              case (MR_Integer) 1:
#line 731 "pred_table.m"
                *hlds__pred_table__PredIds_8 = hlds__pred_table__PredIds0_20;
#line 730 "pred_table.m"
                break;
#line 730 "pred_table.m"
            }
#line 639 "pred_table.m"
          }
#line 643 "pred_table.m"
        else
#line 644 "pred_table.m"
          *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 516 "pred_table.m"
      }
#line 507 "pred_table.m"
    else
#line 507 "pred_table.m"
      {
#line 507 "pred_table.m"
        MR_String hlds__pred_table__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_7, (MR_Integer) 0)));

#line 511 "pred_table.m"
#line 511 "pred_table.m"
        switch (hlds__pred_table__IsFullyQualified_6) {
#line 511 "pred_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 511 "pred_table.m"
          case (MR_Integer) 0:
#line 513 "pred_table.m"
            *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 511 "pred_table.m"
            break;
#line 511 "pred_table.m"
          case (MR_Integer) 1:
#line 601 "pred_table.m"
            {
#line 601 "pred_table.m"
              MR_Word hlds__pred_table__PredNameIndex_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 602 "pred_table.m"
              MR_Word hlds__pred_table__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 602 "pred_table.m"
              MR_Word hlds__pred_table__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 602 "pred_table.m"
              MR_Word hlds__pred_table__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 602 "pred_table.m"
              MR_Word hlds__pred_table__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 602 "pred_table.m"
              MR_Word hlds__pred_table__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 602 "pred_table.m"
              MR_Word hlds__pred_table__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 602 "pred_table.m"
              MR_Word hlds__pred_table__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 602 "pred_table.m"
              MR_Word hlds__pred_table__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 602 "pred_table.m"
              MR_Word hlds__pred_table__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 605 "pred_table.m"
              MR_Word hlds__pred_table__PredIdsPrime_65;
#line 603 "pred_table.m"
              MR_Box hlds__pred_table__conv1_PredIdsPrime_65;

#line 603 "pred_table.m"
              {
#line 603 "pred_table.m"
                hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__PredNameIndex_64, ((MR_Box) (hlds__pred_table__Name_9)), &hlds__pred_table__conv1_PredIdsPrime_65);
              }
#line 603 "pred_table.m"
              if (hlds__pred_table__succeeded)
#line 603 "pred_table.m"
                {
#line 603 "pred_table.m"
                  hlds__pred_table__PredIdsPrime_65 = ((MR_Word) hlds__pred_table__conv1_PredIdsPrime_65);
#line 603 "pred_table.m"
                  hlds__pred_table__succeeded = MR_TRUE;
#line 603 "pred_table.m"
                }
#line 605 "pred_table.m"
              if (hlds__pred_table__succeeded)
#line 604 "pred_table.m"
                *hlds__pred_table__PredIds_8 = hlds__pred_table__PredIdsPrime_65;
#line 605 "pred_table.m"
              else
#line 606 "pred_table.m"
                *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 601 "pred_table.m"
            }
#line 511 "pred_table.m"
            break;
#line 511 "pred_table.m"
        }
#line 507 "pred_table.m"
      }
#line 507 "pred_table.m"
  }
#line 100 "pred_table.m"
}

#line 735 "pred_table.m"
static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_sym_4_p_0_1(
#line 735 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 735 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1)
#line 735 "pred_table.m"
{
#line 735 "pred_table.m"
  {
#line 735 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 735 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;

#line 735 "pred_table.m"
    {
#line 735 "pred_table.m"
      hlds__pred_table__succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) hlds__pred_table__wrapper_arg_1));
    }
#line 735 "pred_table.m"
    return hlds__pred_table__succeeded;
#line 735 "pred_table.m"
  }
#line 735 "pred_table.m"
}

#line 98 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_lookup_sym_4_p_0(
#line 98 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_5,
#line 98 "pred_table.m"
  MR_Word hlds__pred_table__IsFullyQualified_6,
#line 98 "pred_table.m"
  MR_Word hlds__pred_table__SymName_7,
#line 98 "pred_table.m"
  MR_Word * hlds__pred_table__PredIds_8)
#line 98 "pred_table.m"
{
#line 490 "pred_table.m"
  {
#line 490 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;

#line 490 "pred_table.m"
    if (((MR_tag((MR_Word) hlds__pred_table__SymName_7)) == (MR_mktag((MR_Integer) 1))))
#line 499 "pred_table.m"
      {
#line 499 "pred_table.m"
        MR_Word hlds__pred_table__Module_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_7, (MR_Integer) 0)));
#line 499 "pred_table.m"
        MR_String hlds__pred_table__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_7, (MR_Integer) 1)));
#line 499 "pred_table.m"
        MR_Word hlds__pred_table__PredPredIds_17;
#line 499 "pred_table.m"
        MR_Word hlds__pred_table__FuncPredIds_18;
#line 499 "pred_table.m"
        MR_Word hlds__pred_table__Pred_MNA_Index_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 637 "pred_table.m"
        MR_Word hlds__pred_table__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 637 "pred_table.m"
        MR_Word hlds__pred_table__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 637 "pred_table.m"
        MR_Word hlds__pred_table__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 637 "pred_table.m"
        MR_Word hlds__pred_table__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 637 "pred_table.m"
        MR_Word hlds__pred_table__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 637 "pred_table.m"
        MR_Word hlds__pred_table__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 637 "pred_table.m"
        MR_Word hlds__pred_table__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 637 "pred_table.m"
        MR_Word hlds__pred_table__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 637 "pred_table.m"
        MR_Word hlds__pred_table__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
#line 643 "pred_table.m"
        MR_Word hlds__pred_table__Arities_26;
#line 638 "pred_table.m"
        MR_Word hlds__pred_table__V_29_29;
#line 638 "pred_table.m"
        MR_Box hlds__pred_table__conv0_Arities_26;

#line 638 "pred_table.m"
        {
#line 638 "pred_table.m"
          hlds__pred_table__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 638 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_29_29, 0) = ((MR_Box) (hlds__pred_table__Module_10));
#line 638 "pred_table.m"
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_29_29, 1) = ((MR_Box) (hlds__pred_table__Name_11));
#line 638 "pred_table.m"
        }
#line 638 "pred_table.m"
        {
#line 638 "pred_table.m"
          hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__Pred_MNA_Index_25, ((MR_Box) (hlds__pred_table__V_29_29)), &hlds__pred_table__conv0_Arities_26);
        }
#line 638 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 638 "pred_table.m"
          {
#line 638 "pred_table.m"
            hlds__pred_table__Arities_26 = ((MR_Word) hlds__pred_table__conv0_Arities_26);
#line 638 "pred_table.m"
            hlds__pred_table__succeeded = MR_TRUE;
#line 638 "pred_table.m"
          }
#line 643 "pred_table.m"
        if (hlds__pred_table__succeeded)
#line 639 "pred_table.m"
          {
#line 639 "pred_table.m"
            MR_Word hlds__pred_table__PredIdLists_27;
#line 639 "pred_table.m"
            MR_Word hlds__pred_table__PredIds0_28;

#line 639 "pred_table.m"
            {
#line 639 "pred_table.m"
              mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__Arities_26, &hlds__pred_table__PredIdLists_27);
            }
#line 640 "pred_table.m"
            {
#line 640 "pred_table.m"
              mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__PredIdLists_27, &hlds__pred_table__PredIds0_28);
            }
#line 730 "pred_table.m"
#line 730 "pred_table.m"
            switch (hlds__pred_table__IsFullyQualified_6) {
#line 730 "pred_table.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 730 "pred_table.m"
              case (MR_Integer) 0:
#line 733 "pred_table.m"
                {
#line 733 "pred_table.m"
                  MR_Word hlds__pred_table__Preds_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
#line 733 "pred_table.m"
                  MR_Word hlds__pred_table__V_55_55;
#line 388 "pred_table.m"
                  MR_Word hlds__pred_table__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
#line 388 "pred_table.m"
                  MR_Word hlds__pred_table__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
#line 388 "pred_table.m"
                  MR_Word hlds__pred_table__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
#line 388 "pred_table.m"
                  MR_Word hlds__pred_table__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
#line 388 "pred_table.m"
                  MR_Word hlds__pred_table__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
#line 388 "pred_table.m"
                  MR_Word hlds__pred_table__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
#line 388 "pred_table.m"
                  MR_Word hlds__pred_table__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
#line 388 "pred_table.m"
                  MR_Word hlds__pred_table__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
#line 388 "pred_table.m"
                  MR_Word hlds__pred_table__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));

#line 735 "pred_table.m"
                  {
#line 735 "pred_table.m"
                    hlds__pred_table__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 735 "pred_table.m"
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_55_55, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
#line 735 "pred_table.m"
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_55_55, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_sym_4_p_0_1));
#line 735 "pred_table.m"
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 735 "pred_table.m"
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_55_55, 3) = ((MR_Box) (hlds__pred_table__Preds_52));
#line 735 "pred_table.m"
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_55_55, 4) = ((MR_Box) (hlds__pred_table__Module_10));
#line 735 "pred_table.m"
                  }
#line 735 "pred_table.m"
                  {
#line 735 "pred_table.m"
                    mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__V_55_55, hlds__pred_table__PredIds0_28, &hlds__pred_table__PredPredIds_17);
                  }
#line 733 "pred_table.m"
                }
#line 730 "pred_table.m"
                break;
#line 730 "pred_table.m"
              case (MR_Integer) 1:
#line 731 "pred_table.m"
                hlds__pred_table__PredPredIds_17 = hlds__pred_table__PredIds0_28;
#line 730 "pred_table.m"
                break;
#line 730 "pred_table.m"
            }
#line 639 "pred_table.m"
          }
#line 643 "pred_table.m"
        else
#line 644 "pred_table.m"
          hlds__pred_table__PredPredIds_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 627 "pred_table.m"
        {
#line 627 "pred_table.m"
          hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0(hlds__pred_table__PredicateTable_5, hlds__pred_table__IsFullyQualified_6, hlds__pred_table__Module_10, hlds__pred_table__Name_11, &hlds__pred_table__FuncPredIds_18);
        }
#line 629 "pred_table.m"
        {
#line 629 "pred_table.m"
          *hlds__pred_table__PredIds_8 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__FuncPredIds_18, hlds__pred_table__PredPredIds_17);
        }
#line 499 "pred_table.m"
      }
#line 490 "pred_table.m"
    else
#line 490 "pred_table.m"
      {
#line 490 "pred_table.m"
        MR_String hlds__pred_table__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_7, (MR_Integer) 0)));

#line 494 "pred_table.m"
#line 494 "pred_table.m"
        switch (hlds__pred_table__IsFullyQualified_6) {
#line 494 "pred_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 494 "pred_table.m"
          case (MR_Integer) 0:
#line 496 "pred_table.m"
            *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 494 "pred_table.m"
            break;
#line 494 "pred_table.m"
          case (MR_Integer) 1:
#line 493 "pred_table.m"
            {
#line 493 "pred_table.m"
              hlds__pred_table__predicate_table_lookup_name_3_p_0(hlds__pred_table__PredicateTable_5, hlds__pred_table__Name_9, hlds__pred_table__PredIds_8);
            }
#line 494 "pred_table.m"
            break;
#line 494 "pred_table.m"
        }
#line 490 "pred_table.m"
      }
#line 490 "pred_table.m"
  }
#line 98 "pred_table.m"
}

#line 89 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_remove_predicate_3_p_0(
#line 89 "pred_table.m"
  MR_Word hlds__pred_table__PredId_4,
#line 89 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable0_5,
#line 89 "pred_table.m"
  MR_Word * hlds__pred_table__PredicateTable_6)
#line 89 "pred_table.m"
{
#line 406 "pred_table.m"
  {
#line 406 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 406 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_34_34 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 406 "pred_table.m"
    MR_Word hlds__pred_table__Preds0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 0)));
#line 406 "pred_table.m"
    MR_Word hlds__pred_table__NextPredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 1)));
#line 406 "pred_table.m"
    MR_Word hlds__pred_table__ValidPredIds0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 2)));
#line 406 "pred_table.m"
    MR_Word hlds__pred_table__AccessibilityTable0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 3)));
#line 406 "pred_table.m"
    MR_Word hlds__pred_table__PredN0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 4)));
#line 406 "pred_table.m"
    MR_Word hlds__pred_table__PredNA0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 5)));
#line 406 "pred_table.m"
    MR_Word hlds__pred_table__PredMNA0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 6)));
#line 406 "pred_table.m"
    MR_Word hlds__pred_table__FuncN0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 7)));
#line 406 "pred_table.m"
    MR_Word hlds__pred_table__FuncNA0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 8)));
#line 406 "pred_table.m"
    MR_Word hlds__pred_table__FuncMNA0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 9)));
#line 406 "pred_table.m"
    MR_Word hlds__pred_table__ValidPredIds_17;
#line 406 "pred_table.m"
    MR_Word hlds__pred_table__PredInfo_18;
#line 406 "pred_table.m"
    MR_Word hlds__pred_table__Preds_19;
#line 406 "pred_table.m"
    MR_Word hlds__pred_table__AccessibilityTable_21;
#line 406 "pred_table.m"
    MR_Word hlds__pred_table__Module_22;
#line 406 "pred_table.m"
    MR_String hlds__pred_table__Name_23;
#line 406 "pred_table.m"
    MR_Integer hlds__pred_table__Arity_24;
#line 406 "pred_table.m"
    MR_Word hlds__pred_table__IsPredOrFunc_25;
#line 411 "pred_table.m"
    MR_Box hlds__pred_table__conv0_PredInfo_18;
#line 412 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20;
#line 412 "pred_table.m"
    MR_Box hlds__pred_table__conv1_V_20_20;

#line 410 "pred_table.m"
    {
#line 410 "pred_table.m"
      mercury__set_tree234__delete_3_p_0(hlds__pred_table__TypeCtorInfo_34_34, ((MR_Box) (hlds__pred_table__PredId_4)), hlds__pred_table__ValidPredIds0_9, &hlds__pred_table__ValidPredIds_17);
    }
#line 411 "pred_table.m"
    {
#line 411 "pred_table.m"
      mercury__map__det_remove_4_p_0(hlds__pred_table__TypeCtorInfo_34_34, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ((MR_Box) (hlds__pred_table__PredId_4)), &hlds__pred_table__conv0_PredInfo_18, hlds__pred_table__Preds0_7, &hlds__pred_table__Preds_19);
    }
#line 411 "pred_table.m"
    hlds__pred_table__PredInfo_18 = ((MR_Word) hlds__pred_table__conv0_PredInfo_18);
#line 412 "pred_table.m"
    {
#line 412 "pred_table.m"
      mercury__map__det_remove_4_p_0(hlds__pred_table__TypeCtorInfo_34_34, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0, ((MR_Box) (hlds__pred_table__PredId_4)), &hlds__pred_table__conv1_V_20_20, hlds__pred_table__AccessibilityTable0_10, &hlds__pred_table__AccessibilityTable_21);
    }
#line 412 "pred_table.m"
    hlds__pred_table__V_20_20 = ((MR_Word) hlds__pred_table__conv1_V_20_20);
#line 413 "pred_table.m"
    {
#line 413 "pred_table.m"
      hlds__pred_table__Module_22 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__pred_table__PredInfo_18);
    }
#line 414 "pred_table.m"
    {
#line 414 "pred_table.m"
      hlds__pred_table__Name_23 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__pred_table__PredInfo_18);
    }
#line 415 "pred_table.m"
    {
#line 415 "pred_table.m"
      hlds__pred_table__Arity_24 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__pred_table__PredInfo_18);
    }
#line 416 "pred_table.m"
    {
#line 416 "pred_table.m"
      hlds__pred_table__IsPredOrFunc_25 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__pred_table__PredInfo_18);
    }
#line 424 "pred_table.m"
#line 424 "pred_table.m"
    switch (hlds__pred_table__IsPredOrFunc_25) {
#line 424 "pred_table.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 424 "pred_table.m"
      case (MR_Integer) 1:
#line 425 "pred_table.m"
        {
#line 425 "pred_table.m"
          MR_Integer hlds__pred_table__FuncArity_29 = (hlds__pred_table__Arity_24 - (MR_Integer) 1);
#line 425 "pred_table.m"
          MR_Word hlds__pred_table__FuncN_30;
#line 425 "pred_table.m"
          MR_Word hlds__pred_table__FuncNA_31;
#line 425 "pred_table.m"
          MR_Word hlds__pred_table__FuncMNA_32;

#line 427 "pred_table.m"
          {
#line 427 "pred_table.m"
            hlds__pred_table__predicate_table_remove_from_index_10_p_0(hlds__pred_table__Module_22, hlds__pred_table__Name_23, hlds__pred_table__FuncArity_29, hlds__pred_table__PredId_4, hlds__pred_table__FuncN0_14, &hlds__pred_table__FuncN_30, hlds__pred_table__FuncNA0_15, &hlds__pred_table__FuncNA_31, hlds__pred_table__FuncMNA0_16, &hlds__pred_table__FuncMNA_32);
          }
#line 430 "pred_table.m"
          {
#line 430 "pred_table.m"
            MR_Word base;
#line 430 "pred_table.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 430 "pred_table.m"
            *hlds__pred_table__PredicateTable_6 = base;
#line 430 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__Preds_19));
#line 430 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__NextPredId_8));
#line 430 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__ValidPredIds_17));
#line 430 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__AccessibilityTable_21));
#line 430 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__PredN0_11));
#line 430 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__PredNA0_12));
#line 430 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__PredMNA0_13));
#line 430 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__FuncN_30));
#line 430 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__FuncNA_31));
#line 430 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__FuncMNA_32));
#line 430 "pred_table.m"
          }
#line 425 "pred_table.m"
        }
#line 424 "pred_table.m"
        break;
#line 424 "pred_table.m"
      case (MR_Integer) 0:
#line 418 "pred_table.m"
        {
#line 418 "pred_table.m"
          MR_Word hlds__pred_table__PredN_26;
#line 418 "pred_table.m"
          MR_Word hlds__pred_table__PredNA_27;
#line 418 "pred_table.m"
          MR_Word hlds__pred_table__PredMNA_28;

#line 419 "pred_table.m"
          {
#line 419 "pred_table.m"
            hlds__pred_table__predicate_table_remove_from_index_10_p_0(hlds__pred_table__Module_22, hlds__pred_table__Name_23, hlds__pred_table__Arity_24, hlds__pred_table__PredId_4, hlds__pred_table__PredN0_11, &hlds__pred_table__PredN_26, hlds__pred_table__PredNA0_12, &hlds__pred_table__PredNA_27, hlds__pred_table__PredMNA0_13, &hlds__pred_table__PredMNA_28);
          }
#line 421 "pred_table.m"
          {
#line 421 "pred_table.m"
            MR_Word base;
#line 421 "pred_table.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 421 "pred_table.m"
            *hlds__pred_table__PredicateTable_6 = base;
#line 421 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__Preds_19));
#line 421 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__NextPredId_8));
#line 421 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__ValidPredIds_17));
#line 421 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__AccessibilityTable_21));
#line 421 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__PredN_26));
#line 421 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__PredNA_27));
#line 421 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__PredMNA_28));
#line 421 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__FuncN0_14));
#line 421 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__FuncNA0_15));
#line 421 "pred_table.m"
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__FuncMNA0_16));
#line 421 "pred_table.m"
          }
#line 418 "pred_table.m"
        }
#line 424 "pred_table.m"
        break;
#line 424 "pred_table.m"
    }
#line 406 "pred_table.m"
  }
#line 89 "pred_table.m"
}

#line 86 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_make_pred_ids_invalid_3_p_0(
#line 86 "pred_table.m"
  MR_Word hlds__pred_table__InvalidPredIds_4,
#line 86 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8,
#line 86 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_9)
#line 86 "pred_table.m"
{
#line 401 "pred_table.m"
  {
#line 401 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 401 "pred_table.m"
    MR_Word hlds__pred_table__ValidPredIds0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 2)));
#line 401 "pred_table.m"
    MR_Word hlds__pred_table__ValidPredIds_7;
#line 402 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 0)));
#line 402 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 1)));
#line 402 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 3)));
#line 402 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 4)));
#line 402 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 5)));
#line 402 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 6)));
#line 402 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 7)));
#line 402 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 8)));
#line 402 "pred_table.m"
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 9)));
#line 404 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20;
#line 404 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21;
#line 404 "pred_table.m"
    MR_Word hlds__pred_table__V_23_23;
#line 404 "pred_table.m"
    MR_Word hlds__pred_table__V_24_24;
#line 404 "pred_table.m"
    MR_Word hlds__pred_table__V_25_25;
#line 404 "pred_table.m"
    MR_Word hlds__pred_table__V_26_26;
#line 404 "pred_table.m"
    MR_Word hlds__pred_table__V_27_27;
#line 404 "pred_table.m"
    MR_Word hlds__pred_table__V_28_28;
#line 404 "pred_table.m"
    MR_Word hlds__pred_table__V_29_29;
#line 404 "pred_table.m"
    MR_Word hlds__pred_table__V_22_22;

#line 403 "pred_table.m"
    {
#line 403 "pred_table.m"
      mercury__set_tree234__delete_list_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__InvalidPredIds_4, hlds__pred_table__ValidPredIds0_6, &hlds__pred_table__ValidPredIds_7);
    }
#line 404 "pred_table.m"
    hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 0)));
#line 404 "pred_table.m"
    hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 1)));
#line 404 "pred_table.m"
    hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 2)));
#line 404 "pred_table.m"
    hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 3)));
#line 404 "pred_table.m"
    hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 4)));
#line 404 "pred_table.m"
    hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 5)));
#line 404 "pred_table.m"
    hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 6)));
#line 404 "pred_table.m"
    hlds__pred_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 7)));
#line 404 "pred_table.m"
    hlds__pred_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 8)));
#line 404 "pred_table.m"
    hlds__pred_table__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 9)));
#line 404 "pred_table.m"
    {
#line 404 "pred_table.m"
      MR_Word base;
#line 404 "pred_table.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 404 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_PredicateTable_9 = base;
#line 404 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__V_20_20));
#line 404 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__V_21_21));
#line 404 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__ValidPredIds_7));
#line 404 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__V_23_23));
#line 404 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__V_24_24));
#line 404 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__V_25_25));
#line 404 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__V_26_26));
#line 404 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__V_27_27));
#line 404 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__V_28_28));
#line 404 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__V_29_29));
#line 404 "pred_table.m"
    }
#line 401 "pred_table.m"
  }
#line 86 "pred_table.m"
}

#line 84 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_make_pred_id_invalid_3_p_0(
#line 84 "pred_table.m"
  MR_Word hlds__pred_table__InvalidPredId_4,
#line 84 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8,
#line 84 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_9)
#line 84 "pred_table.m"
{
#line 396 "pred_table.m"
  {
#line 396 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 396 "pred_table.m"
    MR_Word hlds__pred_table__ValidPredIds0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 2)));
#line 396 "pred_table.m"
    MR_Word hlds__pred_table__ValidPredIds_7;
#line 397 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 0)));
#line 397 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 1)));
#line 397 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 3)));
#line 397 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 4)));
#line 397 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 5)));
#line 397 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 6)));
#line 397 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 7)));
#line 397 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 8)));
#line 397 "pred_table.m"
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 9)));
#line 399 "pred_table.m"
    MR_Word hlds__pred_table__V_20_20;
#line 399 "pred_table.m"
    MR_Word hlds__pred_table__V_21_21;
#line 399 "pred_table.m"
    MR_Word hlds__pred_table__V_23_23;
#line 399 "pred_table.m"
    MR_Word hlds__pred_table__V_24_24;
#line 399 "pred_table.m"
    MR_Word hlds__pred_table__V_25_25;
#line 399 "pred_table.m"
    MR_Word hlds__pred_table__V_26_26;
#line 399 "pred_table.m"
    MR_Word hlds__pred_table__V_27_27;
#line 399 "pred_table.m"
    MR_Word hlds__pred_table__V_28_28;
#line 399 "pred_table.m"
    MR_Word hlds__pred_table__V_29_29;
#line 399 "pred_table.m"
    MR_Word hlds__pred_table__V_22_22;

#line 398 "pred_table.m"
    {
#line 398 "pred_table.m"
      mercury__set_tree234__delete_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (hlds__pred_table__InvalidPredId_4)), hlds__pred_table__ValidPredIds0_6, &hlds__pred_table__ValidPredIds_7);
    }
#line 399 "pred_table.m"
    hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 0)));
#line 399 "pred_table.m"
    hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 1)));
#line 399 "pred_table.m"
    hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 2)));
#line 399 "pred_table.m"
    hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 3)));
#line 399 "pred_table.m"
    hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 4)));
#line 399 "pred_table.m"
    hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 5)));
#line 399 "pred_table.m"
    hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 6)));
#line 399 "pred_table.m"
    hlds__pred_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 7)));
#line 399 "pred_table.m"
    hlds__pred_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 8)));
#line 399 "pred_table.m"
    hlds__pred_table__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 9)));
#line 399 "pred_table.m"
    {
#line 399 "pred_table.m"
      MR_Word base;
#line 399 "pred_table.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 399 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_PredicateTable_9 = base;
#line 399 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__V_20_20));
#line 399 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__V_21_21));
#line 399 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__ValidPredIds_7));
#line 399 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__V_23_23));
#line 399 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__V_24_24));
#line 399 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__V_25_25));
#line 399 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__V_26_26));
#line 399 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__V_27_27));
#line 399 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__V_28_28));
#line 399 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__V_29_29));
#line 399 "pred_table.m"
    }
#line 396 "pred_table.m"
  }
#line 84 "pred_table.m"
}

#line 79 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_get_valid_pred_id_set_2_p_0(
#line 79 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_3,
#line 79 "pred_table.m"
  MR_Word * hlds__pred_table__ValidPredIds_4)
#line 79 "pred_table.m"
{
#line 394 "pred_table.m"
  {
#line 394 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 394 "pred_table.m"
    MR_Word hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 0)));
#line 394 "pred_table.m"
    MR_Word hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 1)));
#line 394 "pred_table.m"
    MR_Word hlds__pred_table__V_7_7;
#line 394 "pred_table.m"
    MR_Word hlds__pred_table__V_8_8;
#line 394 "pred_table.m"
    MR_Word hlds__pred_table__V_9_9;
#line 394 "pred_table.m"
    MR_Word hlds__pred_table__V_10_10;
#line 394 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11;
#line 394 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12;
#line 394 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13;

#line 394 "pred_table.m"
    *hlds__pred_table__ValidPredIds_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 2)));
#line 394 "pred_table.m"
    hlds__pred_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 3)));
#line 394 "pred_table.m"
    hlds__pred_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 4)));
#line 394 "pred_table.m"
    hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 5)));
#line 394 "pred_table.m"
    hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 6)));
#line 394 "pred_table.m"
    hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 7)));
#line 394 "pred_table.m"
    hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 8)));
#line 394 "pred_table.m"
    hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 9)));
#line 394 "pred_table.m"
  }
#line 79 "pred_table.m"
}

#line 71 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_set_preds_3_p_0(
#line 71 "pred_table.m"
  MR_Word hlds__pred_table__Preds_4,
#line 71 "pred_table.m"
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6,
#line 71 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_7)
#line 71 "pred_table.m"
{
#line 391 "pred_table.m"
  {
#line 391 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 391 "pred_table.m"
    MR_Word hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 1)));
#line 391 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 2)));
#line 391 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 3)));
#line 391 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 4)));
#line 391 "pred_table.m"
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 5)));
#line 391 "pred_table.m"
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 6)));
#line 391 "pred_table.m"
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 7)));
#line 391 "pred_table.m"
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 8)));
#line 391 "pred_table.m"
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 9)));
#line 391 "pred_table.m"
    MR_Word hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 0)));

#line 391 "pred_table.m"
    {
#line 391 "pred_table.m"
      MR_Word base;
#line 391 "pred_table.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 391 "pred_table.m"
      *hlds__pred_table__STATE_VARIABLE_PredicateTable_7 = base;
#line 391 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__Preds_4));
#line 391 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__V_10_10));
#line 391 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__V_11_11));
#line 391 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__V_12_12));
#line 391 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__V_13_13));
#line 391 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__V_14_14));
#line 391 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__V_15_15));
#line 391 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__V_16_16));
#line 391 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__V_17_17));
#line 391 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__V_18_18));
#line 391 "pred_table.m"
    }
#line 391 "pred_table.m"
  }
#line 71 "pred_table.m"
}

#line 810 "pred_table.m"
static void MR_CALL 
hlds__pred_table__predicate_table_restrict_4_p_0_1(
#line 810 "pred_table.m"
  MR_Box hlds__pred_table__closure_arg,
#line 810 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_1,
#line 810 "pred_table.m"
  MR_Box hlds__pred_table__wrapper_arg_2,
#line 810 "pred_table.m"
  MR_Box * hlds__pred_table__wrapper_arg_3)
#line 810 "pred_table.m"
{
#line 810 "pred_table.m"
  {
#line 810 "pred_table.m"
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;
#line 810 "pred_table.m"
    MR_Word hlds__pred_table__conv0_STATE_VARIABLE_PredicateTable_20;

#line 810 "pred_table.m"
    {
#line 810 "pred_table.m"
      hlds__pred_table__reinsert_for_restrict_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 5))), ((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2), &hlds__pred_table__conv0_STATE_VARIABLE_PredicateTable_20);
    }
#line 810 "pred_table.m"
    *hlds__pred_table__wrapper_arg_3 = ((MR_Box) (hlds__pred_table__conv0_STATE_VARIABLE_PredicateTable_20));
#line 810 "pred_table.m"
  }
#line 810 "pred_table.m"
}

#line 63 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_restrict_4_p_0(
#line 63 "pred_table.m"
  MR_Word hlds__pred_table__PartialQualInfo_5,
#line 63 "pred_table.m"
  MR_Word hlds__pred_table__PredIds_6,
#line 63 "pred_table.m"
  MR_Word hlds__pred_table__OrigPredicateTable_7,
#line 63 "pred_table.m"
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_11)
#line 63 "pred_table.m"
{
#line 805 "pred_table.m"
  {
#line 805 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 805 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_24_50 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 805 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_27_53;
#line 805 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_28_54;
#line 805 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_29_55;
#line 805 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_30_56;
#line 805 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_31_57;
#line 805 "pred_table.m"
    MR_Word hlds__pred_table__Preds_9;
#line 805 "pred_table.m"
    MR_Word hlds__pred_table__AccessibilityTable_10;
#line 805 "pred_table.m"
    MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12;
#line 805 "pred_table.m"
    MR_Word hlds__pred_table__V_13_13;
#line 805 "pred_table.m"
    MR_Word hlds__pred_table__NextPredId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 1)));
#line 805 "pred_table.m"
    MR_Word hlds__pred_table__V_32_32;
#line 805 "pred_table.m"
    MR_Word hlds__pred_table__V_33_33;
#line 805 "pred_table.m"
    MR_Word hlds__pred_table__V_34_34;
#line 805 "pred_table.m"
    MR_Word hlds__pred_table__V_35_35;
#line 805 "pred_table.m"
    MR_Word hlds__pred_table__V_36_36;
#line 805 "pred_table.m"
    MR_Word hlds__pred_table__V_37_37;
#line 805 "pred_table.m"
    MR_Word hlds__pred_table__V_38_38;
#line 805 "pred_table.m"
    MR_Word hlds__pred_table__V_39_39;
#line 805 "pred_table.m"
    MR_Word hlds__pred_table__V_40_40;
#line 843 "pred_table.m"
    MR_Word hlds__pred_table__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 0)));
#line 843 "pred_table.m"
    MR_Word hlds__pred_table__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 2)));
#line 843 "pred_table.m"
    MR_Word hlds__pred_table__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 3)));
#line 843 "pred_table.m"
    MR_Word hlds__pred_table__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 4)));
#line 843 "pred_table.m"
    MR_Word hlds__pred_table__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 5)));
#line 843 "pred_table.m"
    MR_Word hlds__pred_table__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 6)));
#line 843 "pred_table.m"
    MR_Word hlds__pred_table__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 7)));
#line 843 "pred_table.m"
    MR_Word hlds__pred_table__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 8)));
#line 843 "pred_table.m"
    MR_Word hlds__pred_table__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 9)));
#line 388 "pred_table.m"
    MR_Word hlds__pred_table__V_59_59;
#line 388 "pred_table.m"
    MR_Word hlds__pred_table__V_60_60;
#line 388 "pred_table.m"
    MR_Word hlds__pred_table__V_62_62;
#line 388 "pred_table.m"
    MR_Word hlds__pred_table__V_63_63;
#line 388 "pred_table.m"
    MR_Word hlds__pred_table__V_64_64;
#line 388 "pred_table.m"
    MR_Word hlds__pred_table__V_65_65;
#line 388 "pred_table.m"
    MR_Word hlds__pred_table__V_66_66;
#line 388 "pred_table.m"
    MR_Word hlds__pred_table__V_67_67;
#line 809 "pred_table.m"
    MR_Box hlds__pred_table__conv1_STATE_VARIABLE_PredicateTable_11;

#line 844 "pred_table.m"
    {
#line 844 "pred_table.m"
      hlds__pred_table__V_32_32 = mercury__map__init_0_f_0(hlds__pred_table__TypeCtorInfo_24_50, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0);
    }
#line 845 "pred_table.m"
    {
#line 845 "pred_table.m"
      hlds__pred_table__V_33_33 = mercury__set_tree234__init_0_f_0(hlds__pred_table__TypeCtorInfo_24_50);
    }
#line 845 "pred_table.m"
    {
#line 845 "pred_table.m"
      hlds__pred_table__V_34_34 = mercury__map__init_0_f_0(hlds__pred_table__TypeCtorInfo_24_50, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0);
    }
#line 9619 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_27_53 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 9621 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_28_54 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
#line 846 "pred_table.m"
    {
#line 846 "pred_table.m"
      hlds__pred_table__V_35_35 = mercury__map__init_0_f_0(hlds__pred_table__TypeCtorInfo_27_53, hlds__pred_table__TypeInfo_28_54);
    }
#line 9628 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_29_55 = (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0;
#line 846 "pred_table.m"
    {
#line 846 "pred_table.m"
      hlds__pred_table__V_36_36 = mercury__map__init_0_f_0(hlds__pred_table__TypeCtorInfo_29_55, hlds__pred_table__TypeInfo_28_54);
    }
#line 9635 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_30_56 = (MR_Word) &hlds__pred_table_scalar_common_2[0];
#line 9637 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_31_57 = (MR_Word) &hlds__pred_table_scalar_common_2[1];
#line 846 "pred_table.m"
    {
#line 846 "pred_table.m"
      hlds__pred_table__V_37_37 = mercury__map__init_0_f_0(hlds__pred_table__TypeInfo_30_56, hlds__pred_table__TypeInfo_31_57);
    }
#line 846 "pred_table.m"
    {
#line 846 "pred_table.m"
      hlds__pred_table__V_38_38 = mercury__map__init_0_f_0(hlds__pred_table__TypeCtorInfo_27_53, hlds__pred_table__TypeInfo_28_54);
    }
#line 846 "pred_table.m"
    {
#line 846 "pred_table.m"
      hlds__pred_table__V_39_39 = mercury__map__init_0_f_0(hlds__pred_table__TypeCtorInfo_29_55, hlds__pred_table__TypeInfo_28_54);
    }
#line 846 "pred_table.m"
    {
#line 846 "pred_table.m"
      hlds__pred_table__V_40_40 = mercury__map__init_0_f_0(hlds__pred_table__TypeInfo_30_56, hlds__pred_table__TypeInfo_31_57);
    }
#line 844 "pred_table.m"
    {
#line 844 "pred_table.m"
      hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 844 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 0) = ((MR_Box) (hlds__pred_table__V_32_32));
#line 844 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 1) = ((MR_Box) (hlds__pred_table__NextPredId_31));
#line 844 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 2) = ((MR_Box) (hlds__pred_table__V_33_33));
#line 844 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 3) = ((MR_Box) (hlds__pred_table__V_34_34));
#line 844 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 4) = ((MR_Box) (hlds__pred_table__V_35_35));
#line 844 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 5) = ((MR_Box) (hlds__pred_table__V_36_36));
#line 844 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 6) = ((MR_Box) (hlds__pred_table__V_37_37));
#line 844 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 7) = ((MR_Box) (hlds__pred_table__V_38_38));
#line 844 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 8) = ((MR_Box) (hlds__pred_table__V_39_39));
#line 844 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 9) = ((MR_Box) (hlds__pred_table__V_40_40));
#line 844 "pred_table.m"
    }
#line 388 "pred_table.m"
    hlds__pred_table__Preds_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 0)));
#line 388 "pred_table.m"
    hlds__pred_table__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 1)));
#line 388 "pred_table.m"
    hlds__pred_table__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 2)));
#line 388 "pred_table.m"
    hlds__pred_table__AccessibilityTable_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 3)));
#line 388 "pred_table.m"
    hlds__pred_table__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 4)));
#line 388 "pred_table.m"
    hlds__pred_table__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 5)));
#line 388 "pred_table.m"
    hlds__pred_table__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 6)));
#line 388 "pred_table.m"
    hlds__pred_table__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 7)));
#line 388 "pred_table.m"
    hlds__pred_table__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 8)));
#line 388 "pred_table.m"
    hlds__pred_table__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 9)));
#line 810 "pred_table.m"
    {
#line 810 "pred_table.m"
      hlds__pred_table__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 810 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_13_13, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_4[0]));
#line 810 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_13_13, 1) = ((MR_Box) (hlds__pred_table__predicate_table_restrict_4_p_0_1));
#line 810 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 810 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_13_13, 3) = ((MR_Box) (hlds__pred_table__PartialQualInfo_5));
#line 810 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_13_13, 4) = ((MR_Box) (hlds__pred_table__Preds_9));
#line 810 "pred_table.m"
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_13_13, 5) = ((MR_Box) (hlds__pred_table__AccessibilityTable_10));
#line 810 "pred_table.m"
    }
#line 809 "pred_table.m"
    {
#line 809 "pred_table.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_predicate_table_0, hlds__pred_table__V_13_13, hlds__pred_table__PredIds_6, ((MR_Box) (hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12)), &hlds__pred_table__conv1_STATE_VARIABLE_PredicateTable_11);
    }
#line 809 "pred_table.m"
    *hlds__pred_table__STATE_VARIABLE_PredicateTable_11 = ((MR_Word) hlds__pred_table__conv1_STATE_VARIABLE_PredicateTable_11);
#line 805 "pred_table.m"
  }
#line 63 "pred_table.m"
}

#line 56 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_get_preds_2_p_0(
#line 56 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable_3,
#line 56 "pred_table.m"
  MR_Word * hlds__pred_table__HeadVar__2_2)
#line 56 "pred_table.m"
{
#line 388 "pred_table.m"
  {
#line 388 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 388 "pred_table.m"
    MR_Word hlds__pred_table__V_4_4;
#line 388 "pred_table.m"
    MR_Word hlds__pred_table__V_5_5;
#line 388 "pred_table.m"
    MR_Word hlds__pred_table__V_6_6;
#line 388 "pred_table.m"
    MR_Word hlds__pred_table__V_7_7;
#line 388 "pred_table.m"
    MR_Word hlds__pred_table__V_8_8;
#line 388 "pred_table.m"
    MR_Word hlds__pred_table__V_9_9;
#line 388 "pred_table.m"
    MR_Word hlds__pred_table__V_10_10;
#line 388 "pred_table.m"
    MR_Word hlds__pred_table__V_11_11;
#line 388 "pred_table.m"
    MR_Word hlds__pred_table__V_12_12;

#line 388 "pred_table.m"
    *hlds__pred_table__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 0)));
#line 388 "pred_table.m"
    hlds__pred_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 1)));
#line 388 "pred_table.m"
    hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 2)));
#line 388 "pred_table.m"
    hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 3)));
#line 388 "pred_table.m"
    hlds__pred_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 4)));
#line 388 "pred_table.m"
    hlds__pred_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 5)));
#line 388 "pred_table.m"
    hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 6)));
#line 388 "pred_table.m"
    hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 7)));
#line 388 "pred_table.m"
    hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 8)));
#line 388 "pred_table.m"
    hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 9)));
#line 388 "pred_table.m"
  }
#line 56 "pred_table.m"
}

#line 51 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_optimize_2_p_0(
#line 51 "pred_table.m"
  MR_Word hlds__pred_table__PredicateTable0_3,
#line 51 "pred_table.m"
  MR_Word * hlds__pred_table__PredicateTable_4)
#line 51 "pred_table.m"
{
#line 372 "pred_table.m"
  {
#line 372 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 372 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 372 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_22_22 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
#line 372 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_23_23;
#line 372 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_24_24;
#line 372 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_25_25;
#line 372 "pred_table.m"
    MR_Word hlds__pred_table__Preds_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 0)));
#line 372 "pred_table.m"
    MR_Word hlds__pred_table__NextPredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 1)));
#line 372 "pred_table.m"
    MR_Word hlds__pred_table__ValidPredIds_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 2)));
#line 372 "pred_table.m"
    MR_Word hlds__pred_table__AccessibilityTable_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 3)));
#line 372 "pred_table.m"
    MR_Word hlds__pred_table__Pred_N_Index0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 4)));
#line 372 "pred_table.m"
    MR_Word hlds__pred_table__Pred_NA_Index0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 5)));
#line 372 "pred_table.m"
    MR_Word hlds__pred_table__Pred_MNA_Index0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 6)));
#line 372 "pred_table.m"
    MR_Word hlds__pred_table__Func_N_Index0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 7)));
#line 372 "pred_table.m"
    MR_Word hlds__pred_table__Func_NA_Index0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 8)));
#line 372 "pred_table.m"
    MR_Word hlds__pred_table__Func_MNA_Index0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 9)));
#line 372 "pred_table.m"
    MR_Word hlds__pred_table__Pred_N_Index_15;
#line 372 "pred_table.m"
    MR_Word hlds__pred_table__Pred_NA_Index_16;
#line 372 "pred_table.m"
    MR_Word hlds__pred_table__Pred_MNA_Index_17;
#line 372 "pred_table.m"
    MR_Word hlds__pred_table__Func_N_Index_18;
#line 372 "pred_table.m"
    MR_Word hlds__pred_table__Func_NA_Index_19;
#line 372 "pred_table.m"
    MR_Word hlds__pred_table__Func_MNA_Index_20;

#line 377 "pred_table.m"
    {
#line 377 "pred_table.m"
      mercury__map__optimize_2_p_0(hlds__pred_table__TypeCtorInfo_21_21, hlds__pred_table__TypeInfo_22_22, hlds__pred_table__Pred_N_Index0_9, &hlds__pred_table__Pred_N_Index_15);
    }
#line 9853 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_23_23 = (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0;
#line 378 "pred_table.m"
    {
#line 378 "pred_table.m"
      mercury__map__optimize_2_p_0(hlds__pred_table__TypeCtorInfo_23_23, hlds__pred_table__TypeInfo_22_22, hlds__pred_table__Pred_NA_Index0_10, &hlds__pred_table__Pred_NA_Index_16);
    }
#line 9860 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_24_24 = (MR_Word) &hlds__pred_table_scalar_common_2[0];
#line 9862 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_25_25 = (MR_Word) &hlds__pred_table_scalar_common_2[1];
#line 379 "pred_table.m"
    {
#line 379 "pred_table.m"
      mercury__map__optimize_2_p_0(hlds__pred_table__TypeInfo_24_24, hlds__pred_table__TypeInfo_25_25, hlds__pred_table__Pred_MNA_Index0_11, &hlds__pred_table__Pred_MNA_Index_17);
    }
#line 380 "pred_table.m"
    {
#line 380 "pred_table.m"
      mercury__map__optimize_2_p_0(hlds__pred_table__TypeCtorInfo_21_21, hlds__pred_table__TypeInfo_22_22, hlds__pred_table__Func_N_Index0_12, &hlds__pred_table__Func_N_Index_18);
    }
#line 381 "pred_table.m"
    {
#line 381 "pred_table.m"
      mercury__map__optimize_2_p_0(hlds__pred_table__TypeCtorInfo_23_23, hlds__pred_table__TypeInfo_22_22, hlds__pred_table__Func_NA_Index0_13, &hlds__pred_table__Func_NA_Index_19);
    }
#line 382 "pred_table.m"
    {
#line 382 "pred_table.m"
      mercury__map__optimize_2_p_0(hlds__pred_table__TypeInfo_24_24, hlds__pred_table__TypeInfo_25_25, hlds__pred_table__Func_MNA_Index0_14, &hlds__pred_table__Func_MNA_Index_20);
    }
#line 383 "pred_table.m"
    {
#line 383 "pred_table.m"
      MR_Word base;
#line 383 "pred_table.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 383 "pred_table.m"
      *hlds__pred_table__PredicateTable_4 = base;
#line 383 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__Preds_5));
#line 383 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__NextPredId_6));
#line 383 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__ValidPredIds_7));
#line 383 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__AccessibilityTable_8));
#line 383 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__Pred_N_Index_15));
#line 383 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__Pred_NA_Index_16));
#line 383 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__Pred_MNA_Index_17));
#line 383 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__Func_N_Index_18));
#line 383 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__Func_NA_Index_19));
#line 383 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__Func_MNA_Index_20));
#line 383 "pred_table.m"
    }
#line 372 "pred_table.m"
  }
#line 51 "pred_table.m"
}

#line 47 "pred_table.m"
void MR_CALL 
hlds__pred_table__predicate_table_init_1_p_0(
#line 47 "pred_table.m"
  MR_Word * hlds__pred_table__PredicateTable_2)
#line 47 "pred_table.m"
{
#line 356 "pred_table.m"
  {
#line 356 "pred_table.m"
    MR_bool hlds__pred_table__succeeded;
#line 356 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_13_13 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 356 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_16_16;
#line 356 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_17_17;
#line 356 "pred_table.m"
    MR_Word hlds__pred_table__TypeCtorInfo_18_18;
#line 356 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_19_19;
#line 356 "pred_table.m"
    MR_Word hlds__pred_table__TypeInfo_20_20;
#line 356 "pred_table.m"
    MR_Word hlds__pred_table__Preds_3;
#line 356 "pred_table.m"
    MR_Word hlds__pred_table__NextPredId_4;
#line 356 "pred_table.m"
    MR_Word hlds__pred_table__ValidPredIds_5;
#line 356 "pred_table.m"
    MR_Word hlds__pred_table__AccessibilityTable_6;
#line 356 "pred_table.m"
    MR_Word hlds__pred_table__Pred_N_Index_7;
#line 356 "pred_table.m"
    MR_Word hlds__pred_table__Pred_NA_Index_8;
#line 356 "pred_table.m"
    MR_Word hlds__pred_table__Pred_MNA_Index_9;
#line 356 "pred_table.m"
    MR_Word hlds__pred_table__Func_N_Index_10;
#line 356 "pred_table.m"
    MR_Word hlds__pred_table__Func_NA_Index_11;
#line 356 "pred_table.m"
    MR_Word hlds__pred_table__Func_MNA_Index_12;

#line 357 "pred_table.m"
    {
#line 357 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeCtorInfo_13_13, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, &hlds__pred_table__Preds_3);
    }
#line 358 "pred_table.m"
    {
#line 358 "pred_table.m"
      hlds__pred_table__NextPredId_4 = hlds__hlds_pred__initial_pred_id_0_f_0();
    }
#line 359 "pred_table.m"
    {
#line 359 "pred_table.m"
      hlds__pred_table__ValidPredIds_5 = mercury__set_tree234__init_0_f_0(hlds__pred_table__TypeCtorInfo_13_13);
    }
#line 360 "pred_table.m"
    {
#line 360 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeCtorInfo_13_13, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0, &hlds__pred_table__AccessibilityTable_6);
    }
#line 9983 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 9985 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_17_17 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
#line 361 "pred_table.m"
    {
#line 361 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeCtorInfo_16_16, hlds__pred_table__TypeInfo_17_17, &hlds__pred_table__Pred_N_Index_7);
    }
#line 9992 "hlds.pred_table.c"
    hlds__pred_table__TypeCtorInfo_18_18 = (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0;
#line 362 "pred_table.m"
    {
#line 362 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeCtorInfo_18_18, hlds__pred_table__TypeInfo_17_17, &hlds__pred_table__Pred_NA_Index_8);
    }
#line 9999 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_19_19 = (MR_Word) &hlds__pred_table_scalar_common_2[0];
#line 10001 "hlds.pred_table.c"
    hlds__pred_table__TypeInfo_20_20 = (MR_Word) &hlds__pred_table_scalar_common_2[1];
#line 363 "pred_table.m"
    {
#line 363 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeInfo_19_19, hlds__pred_table__TypeInfo_20_20, &hlds__pred_table__Pred_MNA_Index_9);
    }
#line 364 "pred_table.m"
    {
#line 364 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeCtorInfo_16_16, hlds__pred_table__TypeInfo_17_17, &hlds__pred_table__Func_N_Index_10);
    }
#line 365 "pred_table.m"
    {
#line 365 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeCtorInfo_18_18, hlds__pred_table__TypeInfo_17_17, &hlds__pred_table__Func_NA_Index_11);
    }
#line 366 "pred_table.m"
    {
#line 366 "pred_table.m"
      mercury__map__init_1_p_0(hlds__pred_table__TypeInfo_19_19, hlds__pred_table__TypeInfo_20_20, &hlds__pred_table__Func_MNA_Index_12);
    }
#line 367 "pred_table.m"
    {
#line 367 "pred_table.m"
      MR_Word base;
#line 367 "pred_table.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 367 "pred_table.m"
      *hlds__pred_table__PredicateTable_2 = base;
#line 367 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__Preds_3));
#line 367 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__NextPredId_4));
#line 367 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__ValidPredIds_5));
#line 367 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__AccessibilityTable_6));
#line 367 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__Pred_N_Index_7));
#line 367 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__Pred_NA_Index_8));
#line 367 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__Pred_MNA_Index_9));
#line 367 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__Func_N_Index_10));
#line 367 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__Func_NA_Index_11));
#line 367 "pred_table.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__Func_MNA_Index_12));
#line 367 "pred_table.m"
    }
#line 356 "pred_table.m"
  }
#line 47 "pred_table.m"
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
