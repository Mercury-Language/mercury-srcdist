/*
** Automatically generated from `recompilation.m'
** by the Mercury compiler,
** version rotd-2013-03-21, configured for x86_64-apple-darwin12.2.1.
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


/* :- module recompilation. */
/* :- implementation. */

/*
INIT mercury__recompilation__init
ENDINIT
*/

#include "recompilation.mih"


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
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.file_util.mih"
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
#include "parse_tree.file_names.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.modules.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 138 "recompilation.c"
static const MR_VA_PseudoTypeInfo_Struct3 recompilation____vpti_func_3__plain_recompilation__type_ctor_info_item_type_0__pseudo_1__pseudo_2;

#line 141 "recompilation.c"
static const MR_FA_PseudoTypeInfo_Struct3 recompilation__recompilation__pti_item_id_set_3__pseudo_1__pseudo_1__pseudo_1;

#line 144 "recompilation.c"
static const MR_FA_PseudoTypeInfo_Struct3 recompilation__recompilation__pti_item_id_set_3__pseudo_2__pseudo_2__pseudo_2;

#line 147 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

#line 150 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0;

#line 153 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0;

#line 156 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0;

#line 159 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_id_0_0[2];

#line 162 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_item_id_0_0;

#line 165 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_id_0_0[1];

#line 168 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_id_0[1];

#line 171 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_id_0[1];

#line 174 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_id_0[1];

#line 177 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_id_set_3_0[10];

#line 180 "recompilation.c"
static const MR_ConstString recompilation__recompilation__field_names_item_id_set_3_0[10];

#line 183 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_item_id_set_3_0;

#line 186 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_id_set_3_0[1];

#line 189 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_id_set_3[1];

#line 192 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_id_set_3[1];

#line 195 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_id_set_3[1];

#line 198 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_name_0_0[2];

#line 201 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_item_name_0_0;

#line 204 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_name_0_0[1];

#line 207 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_name_0[1];

#line 210 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_name_0[1];

#line 213 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_name_0[1];

#line 216 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_0;

#line 219 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_1;

#line 222 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_2;

#line 225 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_3;

#line 228 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_4;

#line 231 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_5;

#line 234 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_6;

#line 237 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_7;

#line 240 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_8;

#line 243 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_9;

#line 246 "recompilation.c"
static const MR_EnumFunctorDescPtr recompilation__recompilation__enum_value_ordered_item_type_0[10];

#line 249 "recompilation.c"
static const MR_EnumFunctorDescPtr recompilation__recompilation__enum_name_ordered_item_type_0[10];

#line 252 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_type_0[10];

#line 255 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0;

#line 258 "recompilation.c"
static const MR_FA_TypeInfo_Struct3 recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0;

#line 261 "recompilation.c"
static const MR_FA_TypeInfo_Struct3 recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0;

#line 264 "recompilation.c"
static const MR_FA_TypeInfo_Struct1 recompilation__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0;

#line 267 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_id_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0;

#line 270 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0;

#line 273 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_recompilation_info_0_0[4];

#line 276 "recompilation.c"
static const MR_ConstString recompilation__recompilation__field_names_recompilation_info_0_0[4];

#line 279 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_recompilation_info_0_0;

#line 282 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_recompilation_info_0_0[1];

#line 285 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_recompilation_info_0[1];

#line 288 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_recompilation_info_0[1];

#line 291 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_recompilation_info_0[1];

#line 294 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_version_numbers_0_0[2];

#line 297 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_version_numbers_0_0;

#line 300 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_version_numbers_0_0[1];

#line 303 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_version_numbers_0[1];

#line 306 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_version_numbers_0[1];

#line 309 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_version_numbers_0[1];

#line 312 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____functor_set_0_0_10001(
#line 315 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 317 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 320 "recompilation.c"
static void MR_CALL 
recompilation____Compare____functor_set_0_0_10001(
#line 323 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 325 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 327 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 330 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____instance_version_numbers_0_0_10001(
#line 333 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 335 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 338 "recompilation.c"
static void MR_CALL 
recompilation____Compare____instance_version_numbers_0_0_10001(
#line 341 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 343 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 345 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 348 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_id_0_0_10001(
#line 351 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 353 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 356 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_id_0_0_10001(
#line 359 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 361 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 363 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 366 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_id_set_3_0_10001(
#line 369 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 371 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 373 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3,
#line 375 "recompilation.c"
  MR_Box recompilation__wrapper_arg_4,
#line 377 "recompilation.c"
  MR_Box recompilation__wrapper_arg_5);

#line 380 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_id_set_3_0_10001(
#line 383 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 385 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 387 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3,
#line 389 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_4,
#line 391 "recompilation.c"
  MR_Box recompilation__wrapper_arg_5,
#line 393 "recompilation.c"
  MR_Box recompilation__wrapper_arg_6);

#line 396 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_id_set_1_0_10001(
#line 399 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 401 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 403 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 406 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_id_set_1_0_10001(
#line 409 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 411 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_2,
#line 413 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3,
#line 415 "recompilation.c"
  MR_Box recompilation__wrapper_arg_4);

#line 418 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_name_0_0_10001(
#line 421 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 423 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 426 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_name_0_0_10001(
#line 429 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 431 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 433 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 436 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_type_0_0_10001(
#line 439 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 441 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 444 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_type_0_0_10001(
#line 447 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 449 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 451 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 454 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_version_numbers_0_0_10001(
#line 457 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 459 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 462 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_version_numbers_0_0_10001(
#line 465 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 467 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 469 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 472 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____module_qualifier_0_0_10001(
#line 475 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 477 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 480 "recompilation.c"
static void MR_CALL 
recompilation____Compare____module_qualifier_0_0_10001(
#line 483 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 485 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 487 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 490 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____pred_or_func_set_0_0_10001(
#line 493 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 495 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 498 "recompilation.c"
static void MR_CALL 
recompilation____Compare____pred_or_func_set_0_0_10001(
#line 501 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 503 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 505 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 508 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____recompilation_info_0_0_10001(
#line 511 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 513 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 516 "recompilation.c"
static void MR_CALL 
recompilation____Compare____recompilation_info_0_0_10001(
#line 519 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 521 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 523 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 526 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____simple_item_set_0_0_10001(
#line 529 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 531 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 534 "recompilation.c"
static void MR_CALL 
recompilation____Compare____simple_item_set_0_0_10001(
#line 537 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 539 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 541 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 544 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____used_items_0_0_10001(
#line 547 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 549 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 552 "recompilation.c"
static void MR_CALL 
recompilation____Compare____used_items_0_0_10001(
#line 555 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 557 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 559 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 562 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____version_number_0_0_10001(
#line 565 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 567 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 570 "recompilation.c"
static void MR_CALL 
recompilation____Compare____version_number_0_0_10001(
#line 573 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 575 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 577 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 580 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____version_number_map_0_0_10001(
#line 583 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 585 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 588 "recompilation.c"
static void MR_CALL 
recompilation____Compare____version_number_map_0_0_10001(
#line 591 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 593 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 595 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 598 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____version_numbers_0_0_10001(
#line 601 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 603 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 606 "recompilation.c"
static void MR_CALL 
recompilation____Compare____version_numbers_0_0_10001(
#line 609 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 611 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 613 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 381 "recompilation.m"
static MR_Word MR_CALL 
recompilation__IntroducedFrom__func__map_ids__381__1_6_f_0(
#line 381 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_37,
#line 381 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_U_38,
#line 381 "recompilation.m"
  MR_Word recompilation__Func_5,
#line 381 "recompilation.m"
  MR_Word recompilation__Items0_6,
#line 381 "recompilation.m"
  MR_Word recompilation__HeadVar__5_13,
#line 381 "recompilation.m"
  MR_Word recompilation__HeadVar__6_14);

#line 381 "recompilation.m"
static MR_Box MR_CALL 
recompilation__map_ids_3_f_0_1(
#line 381 "recompilation.m"
  MR_Box recompilation__closure_arg,
#line 381 "recompilation.m"
  MR_Box recompilation__wrapper_arg_1,
#line 381 "recompilation.m"
  MR_Box recompilation__wrapper_arg_2);


static /* final */ const MR_Box recompilation_scalar_common_1[9][2];

static /* final */ const MR_Box recompilation_scalar_common_2[7][3];

static /* final */ const MR_Box recompilation_scalar_common_3[2][4];

static /* final */ const MR_Box recompilation_scalar_common_4[1][1];

static /* final */ const MR_Integer recompilation_scalar_common_5[1][3];

static /* final */ const MR_Box recompilation_scalar_common_6[1][10];




static /* final */ const MR_Box recompilation_scalar_common_1[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation_scalar_common_1[1])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation_scalar_common_1[2])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation_scalar_common_1[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation_scalar_common_1[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation_scalar_common_1[7])))
  },
};

static /* final */ const MR_Box recompilation_scalar_common_2[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&recompilation_scalar_common_2[0])),
    ((MR_Box) (&recompilation_scalar_common_2[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_name_0)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&recompilation_scalar_common_2[0])),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&recompilation_scalar_common_1[0]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_version_numbers_0))
  },
};

static /* final */ const MR_Box recompilation_scalar_common_3[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_set_3)),
    ((MR_Box) (&recompilation_scalar_common_2[4])),
    ((MR_Box) (&recompilation_scalar_common_2[4])),
    ((MR_Box) (&recompilation_scalar_common_2[4]))
  },
  /* row 1 */
  {
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_set_3)),
    ((MR_Box) (&recompilation_scalar_common_2[2])),
    ((MR_Box) (&recompilation_scalar_common_2[2])),
    ((MR_Box) (&recompilation_scalar_common_2[2]))
  },
};

static /* final */ const MR_Box recompilation_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Integer recompilation_scalar_common_5[1][3] = {
  /* row 0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 33,
    (MR_Integer) 65
  },
};

static /* final */ const MR_Box recompilation_scalar_common_6[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&recompilation_scalar_common_5[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&recompilation____vpti_func_3__plain_recompilation__type_ctor_info_item_type_0__pseudo_1__pseudo_2)),
    ((MR_Box) (&recompilation__recompilation__pti_item_id_set_3__pseudo_1__pseudo_1__pseudo_1)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_type_0)),
    ((MR_Box) (&recompilation__recompilation__pti_item_id_set_3__pseudo_2__pseudo_2__pseudo_2)),
    ((MR_Box) (&recompilation__recompilation__pti_item_id_set_3__pseudo_2__pseudo_2__pseudo_2))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 817 "recompilation.c"
static const MR_VA_PseudoTypeInfo_Struct3 recompilation____vpti_func_3__plain_recompilation__type_ctor_info_item_type_0__pseudo_1__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_type_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 828 "recompilation.c"
static const MR_FA_PseudoTypeInfo_Struct3 recompilation__recompilation__pti_item_id_set_3__pseudo_1__pseudo_1__pseudo_1 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 838 "recompilation.c"
static const MR_FA_PseudoTypeInfo_Struct3 recompilation__recompilation__pti_item_id_set_3__pseudo_2__pseudo_2__pseudo_2 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 848 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 857 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
  }
};

#line 866 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0
  }
};

#line 875 "recompilation.c"
const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_functor_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____functor_set_0_0_10001)),
  ((MR_Box) (recompilation____Compare____functor_set_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "functor_set",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 896 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_name_0,
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 905 "recompilation.c"
const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_instance_version_numbers_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____instance_version_numbers_0_0_10001)),
  ((MR_Box) (recompilation____Compare____instance_version_numbers_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "instance_version_numbers",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 926 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_id_0_0[2] = {
  (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_type_0,
  (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_name_0
};

#line 932 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_item_id_0_0 = {
  (MR_String) "item_id",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  recompilation__recompilation__field_types_item_id_0_0,
  NULL,
  NULL,
  NULL
};

#line 947 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_id_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_id_0_0
};

#line 952 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_item_id_0_0
  }
};

#line 961 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_id_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_id_0_0
};

#line 966 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_id_0[1] = {
  (MR_Integer) 0
};

#line 971 "recompilation.c"
const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_item_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation____Unify____item_id_0_0_10001)),
  ((MR_Box) (recompilation____Compare____item_id_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "item_id",
  {
    recompilation__recompilation__du_name_ordered_item_id_0
  },
  {
    recompilation__recompilation__du_ptag_ordered_item_id_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  recompilation__recompilation__functor_number_map_item_id_0
};

#line 992 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_id_set_3_0[10] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 3,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 1006 "recompilation.c"
static const MR_ConstString recompilation__recompilation__field_names_item_id_set_3_0[10] = {
  (MR_String) "types",
  (MR_String) "type_bodies",
  (MR_String) "modes",
  (MR_String) "insts",
  (MR_String) "typeclasses",
  (MR_String) "functors",
  (MR_String) "predicates",
  (MR_String) "functions",
  (MR_String) "mutables",
  (MR_String) "foreign_procs"
};

#line 1020 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_item_id_set_3_0 = {
  (MR_String) "item_id_set",
  (MR_Integer) 10,
  (MR_Integer) 1023,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  recompilation__recompilation__field_types_item_id_set_3_0,
  recompilation__recompilation__field_names_item_id_set_3_0,
  NULL,
  NULL
};

#line 1035 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_id_set_3_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_id_set_3_0
};

#line 1040 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_id_set_3[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_item_id_set_3_0
  }
};

#line 1049 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_id_set_3[1] = {
  &recompilation__recompilation__du_functor_desc_item_id_set_3_0
};

#line 1054 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_id_set_3[1] = {
  (MR_Integer) 0
};

#line 1059 "recompilation.c"
const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_item_id_set_3 = {
  (MR_Integer) 3,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation____Unify____item_id_set_3_0_10001)),
  ((MR_Box) (recompilation____Compare____item_id_set_3_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "item_id_set",
  {
    recompilation__recompilation__du_name_ordered_item_id_set_3
  },
  {
    recompilation__recompilation__du_ptag_ordered_item_id_set_3
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  recompilation__recompilation__functor_number_map_item_id_set_3
};

#line 1080 "recompilation.c"
const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_item_id_set_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (recompilation____Unify____item_id_set_1_0_10001)),
  ((MR_Box) (recompilation____Compare____item_id_set_1_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "item_id_set",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &recompilation__recompilation__pti_item_id_set_3__pseudo_1__pseudo_1__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1101 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_name_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1107 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_item_name_0_0 = {
  (MR_String) "item_name",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  recompilation__recompilation__field_types_item_name_0_0,
  NULL,
  NULL,
  NULL
};

#line 1122 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_name_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_name_0_0
};

#line 1127 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_name_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_item_name_0_0
  }
};

#line 1136 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_name_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_name_0_0
};

#line 1141 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_name_0[1] = {
  (MR_Integer) 0
};

#line 1146 "recompilation.c"
const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_item_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation____Unify____item_name_0_0_10001)),
  ((MR_Box) (recompilation____Compare____item_name_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "item_name",
  {
    recompilation__recompilation__du_name_ordered_item_name_0
  },
  {
    recompilation__recompilation__du_ptag_ordered_item_name_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  recompilation__recompilation__functor_number_map_item_name_0
};

#line 1167 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_0 = {
  (MR_String) "type_abstract_item",
  (MR_Integer) 0
};

#line 1173 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_1 = {
  (MR_String) "type_body_item",
  (MR_Integer) 1
};

#line 1179 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_2 = {
  (MR_String) "mode_item",
  (MR_Integer) 2
};

#line 1185 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_3 = {
  (MR_String) "inst_item",
  (MR_Integer) 3
};

#line 1191 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_4 = {
  (MR_String) "typeclass_item",
  (MR_Integer) 4
};

#line 1197 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_5 = {
  (MR_String) "functor_item",
  (MR_Integer) 5
};

#line 1203 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_6 = {
  (MR_String) "predicate_item",
  (MR_Integer) 6
};

#line 1209 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_7 = {
  (MR_String) "function_item",
  (MR_Integer) 7
};

#line 1215 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_8 = {
  (MR_String) "mutable_item",
  (MR_Integer) 8
};

#line 1221 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_9 = {
  (MR_String) "foreign_proc_item",
  (MR_Integer) 9
};

#line 1227 "recompilation.c"
static const MR_EnumFunctorDescPtr recompilation__recompilation__enum_value_ordered_item_type_0[10] = {
  &recompilation__recompilation__enum_functor_desc_item_type_0_0,
  &recompilation__recompilation__enum_functor_desc_item_type_0_1,
  &recompilation__recompilation__enum_functor_desc_item_type_0_2,
  &recompilation__recompilation__enum_functor_desc_item_type_0_3,
  &recompilation__recompilation__enum_functor_desc_item_type_0_4,
  &recompilation__recompilation__enum_functor_desc_item_type_0_5,
  &recompilation__recompilation__enum_functor_desc_item_type_0_6,
  &recompilation__recompilation__enum_functor_desc_item_type_0_7,
  &recompilation__recompilation__enum_functor_desc_item_type_0_8,
  &recompilation__recompilation__enum_functor_desc_item_type_0_9
};

#line 1241 "recompilation.c"
static const MR_EnumFunctorDescPtr recompilation__recompilation__enum_name_ordered_item_type_0[10] = {
  &recompilation__recompilation__enum_functor_desc_item_type_0_9,
  &recompilation__recompilation__enum_functor_desc_item_type_0_7,
  &recompilation__recompilation__enum_functor_desc_item_type_0_5,
  &recompilation__recompilation__enum_functor_desc_item_type_0_3,
  &recompilation__recompilation__enum_functor_desc_item_type_0_2,
  &recompilation__recompilation__enum_functor_desc_item_type_0_8,
  &recompilation__recompilation__enum_functor_desc_item_type_0_6,
  &recompilation__recompilation__enum_functor_desc_item_type_0_0,
  &recompilation__recompilation__enum_functor_desc_item_type_0_1,
  &recompilation__recompilation__enum_functor_desc_item_type_0_4
};

#line 1255 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_type_0[10] = {
  (MR_Integer) 7,
  (MR_Integer) 8,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 9,
  (MR_Integer) 2,
  (MR_Integer) 6,
  (MR_Integer) 1,
  (MR_Integer) 5,
  (MR_Integer) 0
};

#line 1269 "recompilation.c"
const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_item_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (recompilation____Unify____item_type_0_0_10001)),
  ((MR_Box) (recompilation____Compare____item_type_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "item_type",
  {
    recompilation__recompilation__enum_name_ordered_item_type_0
  },
  {
    recompilation__recompilation__enum_value_ordered_item_type_0
  },
  (MR_Integer) 10,
  (MR_Integer) 4,
  recompilation__recompilation__functor_number_map_item_type_0
};

#line 1290 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 1299 "recompilation.c"
static const MR_FA_TypeInfo_Struct3 recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0,
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0,
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 1309 "recompilation.c"
const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_item_version_numbers_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____item_version_numbers_0_0_10001)),
  ((MR_Box) (recompilation____Compare____item_version_numbers_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "item_version_numbers",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1330 "recompilation.c"
const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_module_qualifier_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____module_qualifier_0_0_10001)),
  ((MR_Box) (recompilation____Compare____module_qualifier_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "module_qualifier",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1351 "recompilation.c"
const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_pred_or_func_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____pred_or_func_set_0_0_10001)),
  ((MR_Box) (recompilation____Compare____pred_or_func_set_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "pred_or_func_set",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1372 "recompilation.c"
static const MR_FA_TypeInfo_Struct3 recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0
  }
};

#line 1382 "recompilation.c"
static const MR_FA_TypeInfo_Struct1 recompilation__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_id_0
  }
};

#line 1390 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_id_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_id_0,
    (MR_TypeInfo) &recompilation__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0
  }
};

#line 1399 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_version_numbers_0
  }
};

#line 1408 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_recompilation_info_0_0[4] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_id_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0,
  (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0
};

#line 1416 "recompilation.c"
static const MR_ConstString recompilation__recompilation__field_names_recompilation_info_0_0[4] = {
  (MR_String) "module_name",
  (MR_String) "used_items",
  (MR_String) "dependencies",
  (MR_String) "version_numbers"
};

#line 1424 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_recompilation_info_0_0 = {
  (MR_String) "recompilation_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  recompilation__recompilation__field_types_recompilation_info_0_0,
  recompilation__recompilation__field_names_recompilation_info_0_0,
  NULL,
  NULL
};

#line 1439 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_recompilation_info_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_recompilation_info_0_0
};

#line 1444 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_recompilation_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_recompilation_info_0_0
  }
};

#line 1453 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_recompilation_info_0[1] = {
  &recompilation__recompilation__du_functor_desc_recompilation_info_0_0
};

#line 1458 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_recompilation_info_0[1] = {
  (MR_Integer) 0
};

#line 1463 "recompilation.c"
const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_recompilation_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation____Unify____recompilation_info_0_0_10001)),
  ((MR_Box) (recompilation____Compare____recompilation_info_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "recompilation_info",
  {
    recompilation__recompilation__du_name_ordered_recompilation_info_0
  },
  {
    recompilation__recompilation__du_ptag_ordered_recompilation_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  recompilation__recompilation__functor_number_map_recompilation_info_0
};

#line 1484 "recompilation.c"
const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_simple_item_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____simple_item_set_0_0_10001)),
  ((MR_Box) (recompilation____Compare____simple_item_set_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "simple_item_set",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1505 "recompilation.c"
const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_used_items_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____used_items_0_0_10001)),
  ((MR_Box) (recompilation____Compare____used_items_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "used_items",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1526 "recompilation.c"
const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_version_number_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____version_number_0_0_10001)),
  ((MR_Box) (recompilation____Compare____version_number_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "version_number",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1547 "recompilation.c"
const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_version_number_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____version_number_map_0_0_10001)),
  ((MR_Box) (recompilation____Compare____version_number_map_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "version_number_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1568 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_version_numbers_0_0[2] = {
  (MR_PseudoTypeInfo) &recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0,
  (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0
};

#line 1574 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_version_numbers_0_0 = {
  (MR_String) "version_numbers",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  recompilation__recompilation__field_types_version_numbers_0_0,
  NULL,
  NULL,
  NULL
};

#line 1589 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_version_numbers_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_version_numbers_0_0
};

#line 1594 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_version_numbers_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_version_numbers_0_0
  }
};

#line 1603 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_version_numbers_0[1] = {
  &recompilation__recompilation__du_functor_desc_version_numbers_0_0
};

#line 1608 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_version_numbers_0[1] = {
  (MR_Integer) 0
};

#line 1613 "recompilation.c"
const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_version_numbers_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation____Unify____version_numbers_0_0_10001)),
  ((MR_Box) (recompilation____Compare____version_numbers_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "version_numbers",
  {
    recompilation__recompilation__du_name_ordered_version_numbers_0
  },
  {
    recompilation__recompilation__du_ptag_ordered_version_numbers_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  recompilation__recompilation__functor_number_map_version_numbers_0
};

#line 1634 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____functor_set_0_0_10001(
#line 1637 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 1639 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 1641 "recompilation.c"
{
#line 1643 "recompilation.c"
  {
#line 1645 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 1648 "recompilation.c"
    {
#line 1650 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____functor_set_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 1653 "recompilation.c"
    return recompilation__succeeded;
#line 1655 "recompilation.c"
  }
#line 1657 "recompilation.c"
}

#line 1660 "recompilation.c"
static void MR_CALL 
recompilation____Compare____functor_set_0_0_10001(
#line 1663 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 1665 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 1667 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 1669 "recompilation.c"
{
#line 1671 "recompilation.c"
  {
#line 1673 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 1676 "recompilation.c"
    {
#line 1678 "recompilation.c"
      recompilation____Compare____functor_set_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 1681 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 1683 "recompilation.c"
  }
#line 1685 "recompilation.c"
}

#line 1688 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____instance_version_numbers_0_0_10001(
#line 1691 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 1693 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 1695 "recompilation.c"
{
#line 1697 "recompilation.c"
  {
#line 1699 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 1702 "recompilation.c"
    {
#line 1704 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____instance_version_numbers_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 1707 "recompilation.c"
    return recompilation__succeeded;
#line 1709 "recompilation.c"
  }
#line 1711 "recompilation.c"
}

#line 1714 "recompilation.c"
static void MR_CALL 
recompilation____Compare____instance_version_numbers_0_0_10001(
#line 1717 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 1719 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 1721 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 1723 "recompilation.c"
{
#line 1725 "recompilation.c"
  {
#line 1727 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 1730 "recompilation.c"
    {
#line 1732 "recompilation.c"
      recompilation____Compare____instance_version_numbers_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 1735 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 1737 "recompilation.c"
  }
#line 1739 "recompilation.c"
}

#line 1742 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_id_0_0_10001(
#line 1745 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 1747 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 1749 "recompilation.c"
{
#line 1751 "recompilation.c"
  {
#line 1753 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 1756 "recompilation.c"
    {
#line 1758 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____item_id_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 1761 "recompilation.c"
    return recompilation__succeeded;
#line 1763 "recompilation.c"
  }
#line 1765 "recompilation.c"
}

#line 1768 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_id_0_0_10001(
#line 1771 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 1773 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 1775 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 1777 "recompilation.c"
{
#line 1779 "recompilation.c"
  {
#line 1781 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 1784 "recompilation.c"
    {
#line 1786 "recompilation.c"
      recompilation____Compare____item_id_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 1789 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 1791 "recompilation.c"
  }
#line 1793 "recompilation.c"
}

#line 1796 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_id_set_3_0_10001(
#line 1799 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 1801 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 1803 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3,
#line 1805 "recompilation.c"
  MR_Box recompilation__wrapper_arg_4,
#line 1807 "recompilation.c"
  MR_Box recompilation__wrapper_arg_5)
#line 1809 "recompilation.c"
{
#line 1811 "recompilation.c"
  {
#line 1813 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 1816 "recompilation.c"
    {
#line 1818 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____item_id_set_3_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3), ((MR_Word) recompilation__wrapper_arg_4), ((MR_Word) recompilation__wrapper_arg_5));
    }
#line 1821 "recompilation.c"
    return recompilation__succeeded;
#line 1823 "recompilation.c"
  }
#line 1825 "recompilation.c"
}

#line 1828 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_id_set_3_0_10001(
#line 1831 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 1833 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 1835 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3,
#line 1837 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_4,
#line 1839 "recompilation.c"
  MR_Box recompilation__wrapper_arg_5,
#line 1841 "recompilation.c"
  MR_Box recompilation__wrapper_arg_6)
#line 1843 "recompilation.c"
{
#line 1845 "recompilation.c"
  {
#line 1847 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 1850 "recompilation.c"
    {
#line 1852 "recompilation.c"
      recompilation____Compare____item_id_set_3_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3), &recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_5), ((MR_Word) recompilation__wrapper_arg_6));
    }
#line 1855 "recompilation.c"
    *recompilation__wrapper_arg_4 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 1857 "recompilation.c"
  }
#line 1859 "recompilation.c"
}

#line 1862 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_id_set_1_0_10001(
#line 1865 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 1867 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 1869 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 1871 "recompilation.c"
{
#line 1873 "recompilation.c"
  {
#line 1875 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 1878 "recompilation.c"
    {
#line 1880 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____item_id_set_1_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 1883 "recompilation.c"
    return recompilation__succeeded;
#line 1885 "recompilation.c"
  }
#line 1887 "recompilation.c"
}

#line 1890 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_id_set_1_0_10001(
#line 1893 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 1895 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_2,
#line 1897 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3,
#line 1899 "recompilation.c"
  MR_Box recompilation__wrapper_arg_4)
#line 1901 "recompilation.c"
{
#line 1903 "recompilation.c"
  {
#line 1905 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 1908 "recompilation.c"
    {
#line 1910 "recompilation.c"
      recompilation____Compare____item_id_set_1_0(((MR_Word) recompilation__wrapper_arg_1), &recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_3), ((MR_Word) recompilation__wrapper_arg_4));
    }
#line 1913 "recompilation.c"
    *recompilation__wrapper_arg_2 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 1915 "recompilation.c"
  }
#line 1917 "recompilation.c"
}

#line 1920 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_name_0_0_10001(
#line 1923 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 1925 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 1927 "recompilation.c"
{
#line 1929 "recompilation.c"
  {
#line 1931 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 1934 "recompilation.c"
    {
#line 1936 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____item_name_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 1939 "recompilation.c"
    return recompilation__succeeded;
#line 1941 "recompilation.c"
  }
#line 1943 "recompilation.c"
}

#line 1946 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_name_0_0_10001(
#line 1949 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 1951 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 1953 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 1955 "recompilation.c"
{
#line 1957 "recompilation.c"
  {
#line 1959 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 1962 "recompilation.c"
    {
#line 1964 "recompilation.c"
      recompilation____Compare____item_name_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 1967 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 1969 "recompilation.c"
  }
#line 1971 "recompilation.c"
}

#line 1974 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_type_0_0_10001(
#line 1977 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 1979 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 1981 "recompilation.c"
{
#line 1983 "recompilation.c"
  {
#line 1985 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 1988 "recompilation.c"
    {
#line 1990 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____item_type_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 1993 "recompilation.c"
    return recompilation__succeeded;
#line 1995 "recompilation.c"
  }
#line 1997 "recompilation.c"
}

#line 2000 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_type_0_0_10001(
#line 2003 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2005 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2007 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2009 "recompilation.c"
{
#line 2011 "recompilation.c"
  {
#line 2013 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2016 "recompilation.c"
    {
#line 2018 "recompilation.c"
      recompilation____Compare____item_type_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2021 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2023 "recompilation.c"
  }
#line 2025 "recompilation.c"
}

#line 2028 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_version_numbers_0_0_10001(
#line 2031 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2033 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2035 "recompilation.c"
{
#line 2037 "recompilation.c"
  {
#line 2039 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2042 "recompilation.c"
    {
#line 2044 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____item_version_numbers_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2047 "recompilation.c"
    return recompilation__succeeded;
#line 2049 "recompilation.c"
  }
#line 2051 "recompilation.c"
}

#line 2054 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_version_numbers_0_0_10001(
#line 2057 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2059 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2061 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2063 "recompilation.c"
{
#line 2065 "recompilation.c"
  {
#line 2067 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2070 "recompilation.c"
    {
#line 2072 "recompilation.c"
      recompilation____Compare____item_version_numbers_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2075 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2077 "recompilation.c"
  }
#line 2079 "recompilation.c"
}

#line 2082 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____module_qualifier_0_0_10001(
#line 2085 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2087 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2089 "recompilation.c"
{
#line 2091 "recompilation.c"
  {
#line 2093 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2096 "recompilation.c"
    {
#line 2098 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____module_qualifier_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2101 "recompilation.c"
    return recompilation__succeeded;
#line 2103 "recompilation.c"
  }
#line 2105 "recompilation.c"
}

#line 2108 "recompilation.c"
static void MR_CALL 
recompilation____Compare____module_qualifier_0_0_10001(
#line 2111 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2113 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2115 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2117 "recompilation.c"
{
#line 2119 "recompilation.c"
  {
#line 2121 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2124 "recompilation.c"
    {
#line 2126 "recompilation.c"
      recompilation____Compare____module_qualifier_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2129 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2131 "recompilation.c"
  }
#line 2133 "recompilation.c"
}

#line 2136 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____pred_or_func_set_0_0_10001(
#line 2139 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2141 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2143 "recompilation.c"
{
#line 2145 "recompilation.c"
  {
#line 2147 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2150 "recompilation.c"
    {
#line 2152 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____pred_or_func_set_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2155 "recompilation.c"
    return recompilation__succeeded;
#line 2157 "recompilation.c"
  }
#line 2159 "recompilation.c"
}

#line 2162 "recompilation.c"
static void MR_CALL 
recompilation____Compare____pred_or_func_set_0_0_10001(
#line 2165 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2167 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2169 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2171 "recompilation.c"
{
#line 2173 "recompilation.c"
  {
#line 2175 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2178 "recompilation.c"
    {
#line 2180 "recompilation.c"
      recompilation____Compare____pred_or_func_set_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2183 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2185 "recompilation.c"
  }
#line 2187 "recompilation.c"
}

#line 2190 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____recompilation_info_0_0_10001(
#line 2193 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2195 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2197 "recompilation.c"
{
#line 2199 "recompilation.c"
  {
#line 2201 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2204 "recompilation.c"
    {
#line 2206 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____recompilation_info_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2209 "recompilation.c"
    return recompilation__succeeded;
#line 2211 "recompilation.c"
  }
#line 2213 "recompilation.c"
}

#line 2216 "recompilation.c"
static void MR_CALL 
recompilation____Compare____recompilation_info_0_0_10001(
#line 2219 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2221 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2223 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2225 "recompilation.c"
{
#line 2227 "recompilation.c"
  {
#line 2229 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2232 "recompilation.c"
    {
#line 2234 "recompilation.c"
      recompilation____Compare____recompilation_info_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2237 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2239 "recompilation.c"
  }
#line 2241 "recompilation.c"
}

#line 2244 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____simple_item_set_0_0_10001(
#line 2247 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2249 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2251 "recompilation.c"
{
#line 2253 "recompilation.c"
  {
#line 2255 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2258 "recompilation.c"
    {
#line 2260 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____simple_item_set_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2263 "recompilation.c"
    return recompilation__succeeded;
#line 2265 "recompilation.c"
  }
#line 2267 "recompilation.c"
}

#line 2270 "recompilation.c"
static void MR_CALL 
recompilation____Compare____simple_item_set_0_0_10001(
#line 2273 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2275 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2277 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2279 "recompilation.c"
{
#line 2281 "recompilation.c"
  {
#line 2283 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2286 "recompilation.c"
    {
#line 2288 "recompilation.c"
      recompilation____Compare____simple_item_set_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2291 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2293 "recompilation.c"
  }
#line 2295 "recompilation.c"
}

#line 2298 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____used_items_0_0_10001(
#line 2301 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2303 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2305 "recompilation.c"
{
#line 2307 "recompilation.c"
  {
#line 2309 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2312 "recompilation.c"
    {
#line 2314 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____used_items_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2317 "recompilation.c"
    return recompilation__succeeded;
#line 2319 "recompilation.c"
  }
#line 2321 "recompilation.c"
}

#line 2324 "recompilation.c"
static void MR_CALL 
recompilation____Compare____used_items_0_0_10001(
#line 2327 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2329 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2331 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2333 "recompilation.c"
{
#line 2335 "recompilation.c"
  {
#line 2337 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2340 "recompilation.c"
    {
#line 2342 "recompilation.c"
      recompilation____Compare____used_items_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2345 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2347 "recompilation.c"
  }
#line 2349 "recompilation.c"
}

#line 2352 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____version_number_0_0_10001(
#line 2355 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2357 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2359 "recompilation.c"
{
#line 2361 "recompilation.c"
  {
#line 2363 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2366 "recompilation.c"
    {
#line 2368 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____version_number_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2371 "recompilation.c"
    return recompilation__succeeded;
#line 2373 "recompilation.c"
  }
#line 2375 "recompilation.c"
}

#line 2378 "recompilation.c"
static void MR_CALL 
recompilation____Compare____version_number_0_0_10001(
#line 2381 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2383 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2385 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2387 "recompilation.c"
{
#line 2389 "recompilation.c"
  {
#line 2391 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2394 "recompilation.c"
    {
#line 2396 "recompilation.c"
      recompilation____Compare____version_number_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2399 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2401 "recompilation.c"
  }
#line 2403 "recompilation.c"
}

#line 2406 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____version_number_map_0_0_10001(
#line 2409 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2411 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2413 "recompilation.c"
{
#line 2415 "recompilation.c"
  {
#line 2417 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2420 "recompilation.c"
    {
#line 2422 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____version_number_map_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2425 "recompilation.c"
    return recompilation__succeeded;
#line 2427 "recompilation.c"
  }
#line 2429 "recompilation.c"
}

#line 2432 "recompilation.c"
static void MR_CALL 
recompilation____Compare____version_number_map_0_0_10001(
#line 2435 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2437 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2439 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2441 "recompilation.c"
{
#line 2443 "recompilation.c"
  {
#line 2445 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2448 "recompilation.c"
    {
#line 2450 "recompilation.c"
      recompilation____Compare____version_number_map_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2453 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2455 "recompilation.c"
  }
#line 2457 "recompilation.c"
}

#line 2460 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____version_numbers_0_0_10001(
#line 2463 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2465 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2467 "recompilation.c"
{
#line 2469 "recompilation.c"
  {
#line 2471 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2474 "recompilation.c"
    {
#line 2476 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____version_numbers_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2479 "recompilation.c"
    return recompilation__succeeded;
#line 2481 "recompilation.c"
  }
#line 2483 "recompilation.c"
}

#line 2486 "recompilation.c"
static void MR_CALL 
recompilation____Compare____version_numbers_0_0_10001(
#line 2489 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2491 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2493 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2495 "recompilation.c"
{
#line 2497 "recompilation.c"
  {
#line 2499 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2502 "recompilation.c"
    {
#line 2504 "recompilation.c"
      recompilation____Compare____version_numbers_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2507 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2509 "recompilation.c"
  }
#line 2511 "recompilation.c"
}

#line 381 "recompilation.m"
static MR_Word MR_CALL 
recompilation__IntroducedFrom__func__map_ids__381__1_6_f_0(
#line 381 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_37,
#line 381 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_U_38,
#line 381 "recompilation.m"
  MR_Word recompilation__Func_5,
#line 381 "recompilation.m"
  MR_Word recompilation__Items0_6,
#line 381 "recompilation.m"
  MR_Word recompilation__HeadVar__5_13,
#line 381 "recompilation.m"
  MR_Word recompilation__HeadVar__6_14)
#line 381 "recompilation.m"
{
#line 381 "recompilation.m"
  {
#line 381 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 381 "recompilation.m"
    MR_Word recompilation__HeadVar__7_15;
#line 381 "recompilation.m"
    MR_Box recompilation__V_16_16;
#line 381 "recompilation.m"
    MR_Box recompilation__V_17_17;
#line 383 "recompilation.m"
    MR_Box MR_CALL (* recompilation__func_0)(MR_Box, MR_Box, MR_Box);

#line 384 "recompilation.m"
    {
#line 384 "recompilation.m"
      recompilation__V_17_17 = recompilation__extract_ids_2_f_0(recompilation__TypeInfo_for_T_37, recompilation__Items0_6, recompilation__HeadVar__5_13);
    }
#line 383 "recompilation.m"
    recompilation__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), recompilation__Func_5, (MR_Integer) 1)));
#line 383 "recompilation.m"
    {
#line 383 "recompilation.m"
      recompilation__V_16_16 = recompilation__func_0(((MR_Box) recompilation__Func_5), ((MR_Box) (recompilation__HeadVar__5_13)), recompilation__V_17_17);
    }
#line 381 "recompilation.m"
    {
#line 381 "recompilation.m"
      recompilation__HeadVar__7_15 = recompilation__update_ids_3_f_0(recompilation__TypeInfo_for_U_38, recompilation__HeadVar__6_14, recompilation__HeadVar__5_13, recompilation__V_16_16);
    }
#line 381 "recompilation.m"
    return recompilation__HeadVar__7_15;
#line 381 "recompilation.m"
  }
#line 381 "recompilation.m"
}

#line 236 "recompilation.m"
void MR_CALL 
recompilation____Compare____version_numbers_0_0(
#line 236 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 236 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 236 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 236 "recompilation.m"
{
#line 236 "recompilation.m"
  {
#line 236 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 236 "recompilation.m"
    MR_Integer recompilation__CastX_9 = (MR_Integer) recompilation__HeadVar__2_2;
#line 236 "recompilation.m"
    MR_Integer recompilation__CastY_10 = (MR_Integer) recompilation__HeadVar__3_3;

#line 236 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_9 == recompilation__CastY_10);
#line 236 "recompilation.m"
    if (recompilation__succeeded)
#line 2592 "recompilation.c"
      *recompilation__HeadVar__1_1 = (MR_Integer) 0;
#line 236 "recompilation.m"
    else
#line 236 "recompilation.m"
      {
#line 236 "recompilation.m"
        MR_Word recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
#line 236 "recompilation.m"
        MR_Word recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));
#line 236 "recompilation.m"
        MR_Word recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 0)));
#line 236 "recompilation.m"
        MR_Word recompilation__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 1)));
#line 236 "recompilation.m"
        MR_Word recompilation__V_8_8;

#line 236 "recompilation.m"
        {
#line 236 "recompilation.m"
          mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_3[0], &recompilation__V_8_8, ((MR_Box) (recompilation__V_4_4)), ((MR_Box) (recompilation__V_6_6)));
        }
#line 2614 "recompilation.c"
        recompilation__succeeded = (recompilation__V_8_8 == (MR_Integer) 0);
#line 236 "recompilation.m"
        recompilation__succeeded = !(recompilation__succeeded);
#line 236 "recompilation.m"
        if (recompilation__succeeded)
#line 236 "recompilation.m"
          *recompilation__HeadVar__1_1 = recompilation__V_8_8;
#line 236 "recompilation.m"
        else
#line 236 "recompilation.m"
          {
#line 236 "recompilation.m"
            {
#line 236 "recompilation.m"
              mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[3], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__V_5_5)), ((MR_Box) (recompilation__V_7_7)));
#line 236 "recompilation.m"
              return;
            }
#line 236 "recompilation.m"
          }
#line 236 "recompilation.m"
      }
#line 236 "recompilation.m"
  }
#line 236 "recompilation.m"
}

#line 236 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____version_numbers_0_0(
#line 236 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 236 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 236 "recompilation.m"
{
#line 236 "recompilation.m"
  {
#line 236 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 236 "recompilation.m"
    MR_Integer recompilation__CastX_7 = (MR_Integer) recompilation__HeadVar__1_1;
#line 236 "recompilation.m"
    MR_Integer recompilation__CastY_8 = (MR_Integer) recompilation__HeadVar__2_2;

#line 236 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_7 == recompilation__CastY_8);
#line 236 "recompilation.m"
    if (recompilation__succeeded)
#line 236 "recompilation.m"
      recompilation__succeeded = MR_TRUE;
#line 236 "recompilation.m"
    else
#line 236 "recompilation.m"
      {
#line 236 "recompilation.m"
        MR_Word recompilation__TypeInfo_9_9 = (MR_Word) &recompilation_scalar_common_2[4];
#line 236 "recompilation.m"
        MR_Word recompilation__TypeInfo_10_10;
#line 236 "recompilation.m"
        MR_Word recompilation__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 236 "recompilation.m"
        MR_Word recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));
#line 236 "recompilation.m"
        MR_Word recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
#line 236 "recompilation.m"
        MR_Word recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));

#line 2683 "recompilation.c"
        {
#line 2685 "recompilation.c"
          recompilation__succeeded = recompilation____Unify____item_id_set_3_0(recompilation__TypeInfo_9_9, recompilation__TypeInfo_9_9, recompilation__TypeInfo_9_9, recompilation__V_3_3, recompilation__V_5_5);
        }
#line 236 "recompilation.m"
        if (recompilation__succeeded)
#line 236 "recompilation.m"
          {
#line 2692 "recompilation.c"
            recompilation__TypeInfo_10_10 = (MR_Word) &recompilation_scalar_common_2[3];
#line 2694 "recompilation.c"
            {
#line 2696 "recompilation.c"
              return recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_10_10, ((MR_Box) (recompilation__V_4_4)), ((MR_Box) (recompilation__V_6_6)));
            }
#line 236 "recompilation.m"
          }
#line 236 "recompilation.m"
      }
#line 236 "recompilation.m"
    return recompilation__succeeded;
#line 236 "recompilation.m"
  }
#line 236 "recompilation.m"
}

#line 246 "recompilation.m"
void MR_CALL 
recompilation____Compare____version_number_map_0_0(
#line 246 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 246 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 246 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 246 "recompilation.m"
{
#line 246 "recompilation.m"
  {
#line 246 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 246 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 246 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 246 "recompilation.m"
    {
#line 246 "recompilation.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[4], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
#line 246 "recompilation.m"
      return;
    }
#line 246 "recompilation.m"
  }
#line 246 "recompilation.m"
}

#line 246 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____version_number_map_0_0(
#line 246 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 246 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 246 "recompilation.m"
{
#line 246 "recompilation.m"
  {
#line 246 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 246 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 246 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 246 "recompilation.m"
    {
#line 246 "recompilation.m"
      return recompilation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation_scalar_common_2[4], ((MR_Box) (recompilation__Cast_HeadVar1_3)), ((MR_Box) (recompilation__Cast_HeadVar2_4)));
    }
#line 246 "recompilation.m"
    return recompilation__succeeded;
#line 246 "recompilation.m"
  }
#line 246 "recompilation.m"
}

#line 52 "recompilation.m"
void MR_CALL 
recompilation____Compare____version_number_0_0(
#line 52 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 52 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 52 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 52 "recompilation.m"
{
#line 52 "recompilation.m"
  {
#line 52 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 52 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 52 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 52 "recompilation.m"
    {
#line 52 "recompilation.m"
      libs__timestamp____Compare____timestamp_0_0(recompilation__HeadVar__1_1, recompilation__Cast_HeadVar1_4, recompilation__Cast_HeadVar2_5);
#line 52 "recompilation.m"
      return;
    }
#line 52 "recompilation.m"
  }
#line 52 "recompilation.m"
}

#line 52 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____version_number_0_0(
#line 52 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 52 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 52 "recompilation.m"
{
#line 52 "recompilation.m"
  {
#line 52 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 52 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 52 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 52 "recompilation.m"
    {
#line 52 "recompilation.m"
      return recompilation__succeeded = libs__timestamp____Unify____timestamp_0_0(recompilation__Cast_HeadVar1_3, recompilation__Cast_HeadVar2_4);
    }
#line 52 "recompilation.m"
    return recompilation__succeeded;
#line 52 "recompilation.m"
  }
#line 52 "recompilation.m"
}

#line 199 "recompilation.m"
void MR_CALL 
recompilation____Compare____used_items_0_0(
#line 199 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 199 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 199 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 199 "recompilation.m"
{
#line 199 "recompilation.m"
  {
#line 199 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 199 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 199 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 199 "recompilation.m"
    {
#line 199 "recompilation.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_3[1], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
#line 199 "recompilation.m"
      return;
    }
#line 199 "recompilation.m"
  }
#line 199 "recompilation.m"
}

#line 199 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____used_items_0_0(
#line 199 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 199 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 199 "recompilation.m"
{
#line 199 "recompilation.m"
  {
#line 199 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 199 "recompilation.m"
    MR_Word recompilation__TypeInfo_5_5 = (MR_Word) &recompilation_scalar_common_2[2];
#line 199 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 199 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 199 "recompilation.m"
    {
#line 199 "recompilation.m"
      return recompilation__succeeded = recompilation____Unify____item_id_set_3_0(recompilation__TypeInfo_5_5, recompilation__TypeInfo_5_5, recompilation__TypeInfo_5_5, recompilation__Cast_HeadVar1_3, recompilation__Cast_HeadVar2_4);
    }
#line 199 "recompilation.m"
    return recompilation__succeeded;
#line 199 "recompilation.m"
  }
#line 199 "recompilation.m"
}

#line 188 "recompilation.m"
void MR_CALL 
recompilation____Compare____simple_item_set_0_0(
#line 188 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 188 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 188 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 188 "recompilation.m"
{
#line 188 "recompilation.m"
  {
#line 188 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 188 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 188 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 188 "recompilation.m"
    {
#line 188 "recompilation.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[2], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
#line 188 "recompilation.m"
      return;
    }
#line 188 "recompilation.m"
  }
#line 188 "recompilation.m"
}

#line 188 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____simple_item_set_0_0(
#line 188 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 188 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 188 "recompilation.m"
{
#line 188 "recompilation.m"
  {
#line 188 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 188 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 188 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 188 "recompilation.m"
    {
#line 188 "recompilation.m"
      return recompilation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation_scalar_common_2[2], ((MR_Box) (recompilation__Cast_HeadVar1_3)), ((MR_Box) (recompilation__Cast_HeadVar2_4)));
    }
#line 188 "recompilation.m"
    return recompilation__succeeded;
#line 188 "recompilation.m"
  }
#line 188 "recompilation.m"
}

#line 119 "recompilation.m"
void MR_CALL 
recompilation____Compare____recompilation_info_0_0(
#line 119 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 119 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 119 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 119 "recompilation.m"
{
#line 119 "recompilation.m"
  {
#line 119 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 119 "recompilation.m"
    MR_Integer recompilation__CastX_15 = (MR_Integer) recompilation__HeadVar__2_2;
#line 119 "recompilation.m"
    MR_Integer recompilation__CastY_16 = (MR_Integer) recompilation__HeadVar__3_3;

#line 119 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_15 == recompilation__CastY_16);
#line 119 "recompilation.m"
    if (recompilation__succeeded)
#line 2984 "recompilation.c"
      *recompilation__HeadVar__1_1 = (MR_Integer) 0;
#line 119 "recompilation.m"
    else
#line 119 "recompilation.m"
      {
#line 119 "recompilation.m"
        MR_Word recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
#line 119 "recompilation.m"
        MR_Word recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));
#line 119 "recompilation.m"
        MR_Word recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 2)));
#line 119 "recompilation.m"
        MR_Word recompilation__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 3)));
#line 119 "recompilation.m"
        MR_Word recompilation__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 0)));
#line 119 "recompilation.m"
        MR_Word recompilation__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 1)));
#line 119 "recompilation.m"
        MR_Word recompilation__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 2)));
#line 119 "recompilation.m"
        MR_Word recompilation__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 3)));
#line 119 "recompilation.m"
        MR_Word recompilation__V_12_12;

#line 119 "recompilation.m"
        {
#line 119 "recompilation.m"
          mdbcomp__prim_data____Compare____sym_name_0_0(&recompilation__V_12_12, recompilation__V_4_4, recompilation__V_8_8);
        }
#line 3014 "recompilation.c"
        recompilation__succeeded = (recompilation__V_12_12 == (MR_Integer) 0);
#line 119 "recompilation.m"
        recompilation__succeeded = !(recompilation__succeeded);
#line 119 "recompilation.m"
        if (recompilation__succeeded)
#line 119 "recompilation.m"
          *recompilation__HeadVar__1_1 = recompilation__V_12_12;
#line 119 "recompilation.m"
        else
#line 119 "recompilation.m"
          {
#line 119 "recompilation.m"
            MR_Word recompilation__V_13_13;

#line 119 "recompilation.m"
            {
#line 119 "recompilation.m"
              mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_3[1], &recompilation__V_13_13, ((MR_Box) (recompilation__V_5_5)), ((MR_Box) (recompilation__V_9_9)));
            }
#line 3034 "recompilation.c"
            recompilation__succeeded = (recompilation__V_13_13 == (MR_Integer) 0);
#line 119 "recompilation.m"
            recompilation__succeeded = !(recompilation__succeeded);
#line 119 "recompilation.m"
            if (recompilation__succeeded)
#line 119 "recompilation.m"
              *recompilation__HeadVar__1_1 = recompilation__V_13_13;
#line 119 "recompilation.m"
            else
#line 119 "recompilation.m"
              {
#line 119 "recompilation.m"
                MR_Word recompilation__V_14_14;

#line 119 "recompilation.m"
                {
#line 119 "recompilation.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[5], &recompilation__V_14_14, ((MR_Box) (recompilation__V_6_6)), ((MR_Box) (recompilation__V_10_10)));
                }
#line 3054 "recompilation.c"
                recompilation__succeeded = (recompilation__V_14_14 == (MR_Integer) 0);
#line 119 "recompilation.m"
                recompilation__succeeded = !(recompilation__succeeded);
#line 119 "recompilation.m"
                if (recompilation__succeeded)
#line 119 "recompilation.m"
                  *recompilation__HeadVar__1_1 = recompilation__V_14_14;
#line 119 "recompilation.m"
                else
#line 119 "recompilation.m"
                  {
#line 119 "recompilation.m"
                    {
#line 119 "recompilation.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[6], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__V_7_7)), ((MR_Box) (recompilation__V_11_11)));
#line 119 "recompilation.m"
                      return;
                    }
#line 119 "recompilation.m"
                  }
#line 119 "recompilation.m"
              }
#line 119 "recompilation.m"
          }
#line 119 "recompilation.m"
      }
#line 119 "recompilation.m"
  }
#line 119 "recompilation.m"
}

#line 119 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____recompilation_info_0_0(
#line 119 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 119 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 119 "recompilation.m"
{
#line 119 "recompilation.m"
  {
#line 119 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 119 "recompilation.m"
    MR_Integer recompilation__CastX_11 = (MR_Integer) recompilation__HeadVar__1_1;
#line 119 "recompilation.m"
    MR_Integer recompilation__CastY_12 = (MR_Integer) recompilation__HeadVar__2_2;

#line 119 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_11 == recompilation__CastY_12);
#line 119 "recompilation.m"
    if (recompilation__succeeded)
#line 119 "recompilation.m"
      recompilation__succeeded = MR_TRUE;
#line 119 "recompilation.m"
    else
#line 119 "recompilation.m"
      {
#line 119 "recompilation.m"
        MR_Word recompilation__TypeInfo_14_14;
#line 119 "recompilation.m"
        MR_Word recompilation__TypeInfo_15_15;
#line 119 "recompilation.m"
        MR_Word recompilation__TypeInfo_16_16;
#line 119 "recompilation.m"
        MR_Word recompilation__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 119 "recompilation.m"
        MR_Word recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));
#line 119 "recompilation.m"
        MR_Word recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 2)));
#line 119 "recompilation.m"
        MR_Word recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 3)));
#line 119 "recompilation.m"
        MR_Word recompilation__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
#line 119 "recompilation.m"
        MR_Word recompilation__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));
#line 119 "recompilation.m"
        MR_Word recompilation__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 2)));
#line 119 "recompilation.m"
        MR_Word recompilation__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 3)));

#line 3137 "recompilation.c"
        {
#line 3139 "recompilation.c"
          recompilation__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(recompilation__V_3_3, recompilation__V_7_7);
        }
#line 119 "recompilation.m"
        if (recompilation__succeeded)
#line 119 "recompilation.m"
          {
#line 3146 "recompilation.c"
            recompilation__TypeInfo_14_14 = (MR_Word) &recompilation_scalar_common_2[2];
#line 3148 "recompilation.c"
            {
#line 3150 "recompilation.c"
              recompilation__succeeded = recompilation____Unify____item_id_set_3_0(recompilation__TypeInfo_14_14, recompilation__TypeInfo_14_14, recompilation__TypeInfo_14_14, recompilation__V_4_4, recompilation__V_8_8);
            }
#line 119 "recompilation.m"
            if (recompilation__succeeded)
#line 119 "recompilation.m"
              {
#line 3157 "recompilation.c"
                recompilation__TypeInfo_15_15 = (MR_Word) &recompilation_scalar_common_2[5];
#line 3159 "recompilation.c"
                {
#line 3161 "recompilation.c"
                  recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_15_15, ((MR_Box) (recompilation__V_5_5)), ((MR_Box) (recompilation__V_9_9)));
                }
#line 119 "recompilation.m"
                if (recompilation__succeeded)
#line 119 "recompilation.m"
                  {
#line 3168 "recompilation.c"
                    recompilation__TypeInfo_16_16 = (MR_Word) &recompilation_scalar_common_2[6];
#line 3170 "recompilation.c"
                    {
#line 3172 "recompilation.c"
                      return recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_16_16, ((MR_Box) (recompilation__V_6_6)), ((MR_Box) (recompilation__V_10_10)));
                    }
#line 119 "recompilation.m"
                  }
#line 119 "recompilation.m"
              }
#line 119 "recompilation.m"
          }
#line 119 "recompilation.m"
      }
#line 119 "recompilation.m"
    return recompilation__succeeded;
#line 119 "recompilation.m"
  }
#line 119 "recompilation.m"
}

#line 194 "recompilation.m"
void MR_CALL 
recompilation____Compare____pred_or_func_set_0_0(
#line 194 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 194 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 194 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 194 "recompilation.m"
{
#line 194 "recompilation.m"
  {
#line 194 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 194 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 194 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 194 "recompilation.m"
    {
#line 194 "recompilation.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[2], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
#line 194 "recompilation.m"
      return;
    }
#line 194 "recompilation.m"
  }
#line 194 "recompilation.m"
}

#line 194 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____pred_or_func_set_0_0(
#line 194 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 194 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 194 "recompilation.m"
{
#line 194 "recompilation.m"
  {
#line 194 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 194 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 194 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 194 "recompilation.m"
    {
#line 194 "recompilation.m"
      return recompilation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation_scalar_common_2[2], ((MR_Box) (recompilation__Cast_HeadVar1_3)), ((MR_Box) (recompilation__Cast_HeadVar2_4)));
    }
#line 194 "recompilation.m"
    return recompilation__succeeded;
#line 194 "recompilation.m"
  }
#line 194 "recompilation.m"
}

#line 254 "recompilation.m"
void MR_CALL 
recompilation____Compare____module_qualifier_0_0(
#line 254 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 254 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 254 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 254 "recompilation.m"
{
#line 254 "recompilation.m"
  {
#line 254 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 254 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 254 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 254 "recompilation.m"
    {
#line 254 "recompilation.m"
      mdbcomp__prim_data____Compare____sym_name_0_0(recompilation__HeadVar__1_1, recompilation__Cast_HeadVar1_4, recompilation__Cast_HeadVar2_5);
#line 254 "recompilation.m"
      return;
    }
#line 254 "recompilation.m"
  }
#line 254 "recompilation.m"
}

#line 254 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____module_qualifier_0_0(
#line 254 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 254 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 254 "recompilation.m"
{
#line 254 "recompilation.m"
  {
#line 254 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 254 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 254 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 254 "recompilation.m"
    {
#line 254 "recompilation.m"
      return recompilation__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(recompilation__Cast_HeadVar1_3, recompilation__Cast_HeadVar2_4);
    }
#line 254 "recompilation.m"
    return recompilation__succeeded;
#line 254 "recompilation.m"
  }
#line 254 "recompilation.m"
}

#line 244 "recompilation.m"
void MR_CALL 
recompilation____Compare____item_version_numbers_0_0(
#line 244 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 244 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 244 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 244 "recompilation.m"
{
#line 244 "recompilation.m"
  {
#line 244 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 244 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 244 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 244 "recompilation.m"
    {
#line 244 "recompilation.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_3[0], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
#line 244 "recompilation.m"
      return;
    }
#line 244 "recompilation.m"
  }
#line 244 "recompilation.m"
}

#line 244 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____item_version_numbers_0_0(
#line 244 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 244 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 244 "recompilation.m"
{
#line 244 "recompilation.m"
  {
#line 244 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 244 "recompilation.m"
    MR_Word recompilation__TypeInfo_5_5 = (MR_Word) &recompilation_scalar_common_2[4];
#line 244 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 244 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 244 "recompilation.m"
    {
#line 244 "recompilation.m"
      return recompilation__succeeded = recompilation____Unify____item_id_set_3_0(recompilation__TypeInfo_5_5, recompilation__TypeInfo_5_5, recompilation__TypeInfo_5_5, recompilation__Cast_HeadVar1_3, recompilation__Cast_HeadVar2_4);
    }
#line 244 "recompilation.m"
    return recompilation__succeeded;
#line 244 "recompilation.m"
  }
#line 244 "recompilation.m"
}

#line 68 "recompilation.m"
void MR_CALL 
recompilation____Compare____item_type_0_0(
#line 68 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 68 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 68 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 68 "recompilation.m"
{
#line 68 "recompilation.m"
  {
#line 68 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 68 "recompilation.m"
    MR_Integer recompilation__Cast_HeadVar1_4 = (MR_Integer) recompilation__HeadVar__2_2;
#line 68 "recompilation.m"
    MR_Integer recompilation__Cast_HeadVar2_5 = (MR_Integer) recompilation__HeadVar__3_3;

#line 68 "recompilation.m"
    {
#line 68 "recompilation.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(recompilation__HeadVar__1_1, recompilation__Cast_HeadVar1_4, recompilation__Cast_HeadVar2_5);
#line 68 "recompilation.m"
      return;
    }
#line 68 "recompilation.m"
  }
#line 68 "recompilation.m"
}

#line 68 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____item_type_0_0(
#line 68 "recompilation.m"
  MR_Word recompilation__HeadVar__2_1,
#line 68 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 68 "recompilation.m"
{
#line 3419 "recompilation.c"
  {
#line 3421 "recompilation.c"
    MR_bool recompilation__succeeded = (recompilation__HeadVar__2_1 == recompilation__HeadVar__2_2);

#line 3424 "recompilation.c"
    return recompilation__succeeded;
#line 3426 "recompilation.c"
  }
#line 68 "recompilation.m"
}

#line 65 "recompilation.m"
void MR_CALL 
recompilation____Compare____item_name_0_0(
#line 65 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 65 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 65 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 65 "recompilation.m"
{
#line 65 "recompilation.m"
  {
#line 65 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 65 "recompilation.m"
    MR_Integer recompilation__CastX_9 = (MR_Integer) recompilation__HeadVar__2_2;
#line 65 "recompilation.m"
    MR_Integer recompilation__CastY_10 = (MR_Integer) recompilation__HeadVar__3_3;

#line 65 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_9 == recompilation__CastY_10);
#line 65 "recompilation.m"
    if (recompilation__succeeded)
#line 3455 "recompilation.c"
      *recompilation__HeadVar__1_1 = (MR_Integer) 0;
#line 65 "recompilation.m"
    else
#line 65 "recompilation.m"
      {
#line 65 "recompilation.m"
        MR_Word recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
#line 65 "recompilation.m"
        MR_Integer recompilation__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));
#line 65 "recompilation.m"
        MR_Word recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 0)));
#line 65 "recompilation.m"
        MR_Integer recompilation__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 1)));
#line 65 "recompilation.m"
        MR_Word recompilation__V_8_8;

#line 65 "recompilation.m"
        {
#line 65 "recompilation.m"
          mdbcomp__prim_data____Compare____sym_name_0_0(&recompilation__V_8_8, recompilation__V_4_4, recompilation__V_6_6);
        }
#line 3477 "recompilation.c"
        recompilation__succeeded = (recompilation__V_8_8 == (MR_Integer) 0);
#line 65 "recompilation.m"
        recompilation__succeeded = !(recompilation__succeeded);
#line 65 "recompilation.m"
        if (recompilation__succeeded)
#line 65 "recompilation.m"
          *recompilation__HeadVar__1_1 = recompilation__V_8_8;
#line 65 "recompilation.m"
        else
#line 65 "recompilation.m"
          {
#line 65 "recompilation.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(recompilation__HeadVar__1_1, recompilation__V_5_5, recompilation__V_7_7);
#line 65 "recompilation.m"
            return;
          }
#line 65 "recompilation.m"
      }
#line 65 "recompilation.m"
  }
#line 65 "recompilation.m"
}

#line 65 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____item_name_0_0(
#line 65 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 65 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 65 "recompilation.m"
{
#line 65 "recompilation.m"
  {
#line 65 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 65 "recompilation.m"
    MR_Integer recompilation__CastX_7 = (MR_Integer) recompilation__HeadVar__1_1;
#line 65 "recompilation.m"
    MR_Integer recompilation__CastY_8 = (MR_Integer) recompilation__HeadVar__2_2;

#line 65 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_7 == recompilation__CastY_8);
#line 65 "recompilation.m"
    if (recompilation__succeeded)
#line 65 "recompilation.m"
      recompilation__succeeded = MR_TRUE;
#line 65 "recompilation.m"
    else
#line 65 "recompilation.m"
      {
#line 65 "recompilation.m"
        MR_Word recompilation__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 65 "recompilation.m"
        MR_Integer recompilation__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));
#line 65 "recompilation.m"
        MR_Word recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
#line 65 "recompilation.m"
        MR_Integer recompilation__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));

#line 3538 "recompilation.c"
        {
#line 3540 "recompilation.c"
          recompilation__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(recompilation__V_3_3, recompilation__V_5_5);
        }
#line 65 "recompilation.m"
        if (recompilation__succeeded)
#line 3545 "recompilation.c"
          recompilation__succeeded = (recompilation__V_4_4 == recompilation__V_6_6);
#line 65 "recompilation.m"
      }
#line 65 "recompilation.m"
    return recompilation__succeeded;
#line 65 "recompilation.m"
  }
#line 65 "recompilation.m"
}

#line 164 "recompilation.m"
void MR_CALL 
recompilation____Compare____item_id_set_3_0(
#line 164 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Map_35,
#line 164 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Set_36,
#line 164 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Cons_37,
#line 164 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 164 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 164 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 164 "recompilation.m"
{
#line 164 "recompilation.m"
  {
#line 164 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 164 "recompilation.m"
    MR_Integer recompilation__CastX_33 = (MR_Integer) recompilation__HeadVar__2_2;
#line 164 "recompilation.m"
    MR_Integer recompilation__CastY_34 = (MR_Integer) recompilation__HeadVar__3_3;

#line 164 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_33 == recompilation__CastY_34);
#line 164 "recompilation.m"
    if (recompilation__succeeded)
#line 3586 "recompilation.c"
      *recompilation__HeadVar__1_1 = (MR_Integer) 0;
#line 164 "recompilation.m"
    else
#line 164 "recompilation.m"
      {
#line 164 "recompilation.m"
        MR_Box recompilation__V_4_4 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0));
#line 164 "recompilation.m"
        MR_Box recompilation__V_5_5 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1));
#line 164 "recompilation.m"
        MR_Box recompilation__V_6_6 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 2));
#line 164 "recompilation.m"
        MR_Box recompilation__V_7_7 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 3));
#line 164 "recompilation.m"
        MR_Box recompilation__V_8_8 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 4));
#line 164 "recompilation.m"
        MR_Box recompilation__V_9_9 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 5));
#line 164 "recompilation.m"
        MR_Box recompilation__V_10_10 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 6));
#line 164 "recompilation.m"
        MR_Box recompilation__V_11_11 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 7));
#line 164 "recompilation.m"
        MR_Box recompilation__V_12_12 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 8));
#line 164 "recompilation.m"
        MR_Box recompilation__V_13_13 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 9));
#line 164 "recompilation.m"
        MR_Box recompilation__V_14_14 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 0));
#line 164 "recompilation.m"
        MR_Box recompilation__V_15_15 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 1));
#line 164 "recompilation.m"
        MR_Box recompilation__V_16_16 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 2));
#line 164 "recompilation.m"
        MR_Box recompilation__V_17_17 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 3));
#line 164 "recompilation.m"
        MR_Box recompilation__V_18_18 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 4));
#line 164 "recompilation.m"
        MR_Box recompilation__V_19_19 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 5));
#line 164 "recompilation.m"
        MR_Box recompilation__V_20_20 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 6));
#line 164 "recompilation.m"
        MR_Box recompilation__V_21_21 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 7));
#line 164 "recompilation.m"
        MR_Box recompilation__V_22_22 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 8));
#line 164 "recompilation.m"
        MR_Box recompilation__V_23_23 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 9));
#line 164 "recompilation.m"
        MR_Word recompilation__V_24_24;

#line 164 "recompilation.m"
        {
#line 164 "recompilation.m"
          mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Map_35, &recompilation__V_24_24, recompilation__V_4_4, recompilation__V_14_14);
        }
#line 3640 "recompilation.c"
        recompilation__succeeded = (recompilation__V_24_24 == (MR_Integer) 0);
#line 164 "recompilation.m"
        recompilation__succeeded = !(recompilation__succeeded);
#line 164 "recompilation.m"
        if (recompilation__succeeded)
#line 164 "recompilation.m"
          *recompilation__HeadVar__1_1 = recompilation__V_24_24;
#line 164 "recompilation.m"
        else
#line 164 "recompilation.m"
          {
#line 164 "recompilation.m"
            MR_Word recompilation__V_25_25;

#line 164 "recompilation.m"
            {
#line 164 "recompilation.m"
              mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Map_35, &recompilation__V_25_25, recompilation__V_5_5, recompilation__V_15_15);
            }
#line 3660 "recompilation.c"
            recompilation__succeeded = (recompilation__V_25_25 == (MR_Integer) 0);
#line 164 "recompilation.m"
            recompilation__succeeded = !(recompilation__succeeded);
#line 164 "recompilation.m"
            if (recompilation__succeeded)
#line 164 "recompilation.m"
              *recompilation__HeadVar__1_1 = recompilation__V_25_25;
#line 164 "recompilation.m"
            else
#line 164 "recompilation.m"
              {
#line 164 "recompilation.m"
                MR_Word recompilation__V_26_26;

#line 164 "recompilation.m"
                {
#line 164 "recompilation.m"
                  mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Map_35, &recompilation__V_26_26, recompilation__V_6_6, recompilation__V_16_16);
                }
#line 3680 "recompilation.c"
                recompilation__succeeded = (recompilation__V_26_26 == (MR_Integer) 0);
#line 164 "recompilation.m"
                recompilation__succeeded = !(recompilation__succeeded);
#line 164 "recompilation.m"
                if (recompilation__succeeded)
#line 164 "recompilation.m"
                  *recompilation__HeadVar__1_1 = recompilation__V_26_26;
#line 164 "recompilation.m"
                else
#line 164 "recompilation.m"
                  {
#line 164 "recompilation.m"
                    MR_Word recompilation__V_27_27;

#line 164 "recompilation.m"
                    {
#line 164 "recompilation.m"
                      mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Map_35, &recompilation__V_27_27, recompilation__V_7_7, recompilation__V_17_17);
                    }
#line 3700 "recompilation.c"
                    recompilation__succeeded = (recompilation__V_27_27 == (MR_Integer) 0);
#line 164 "recompilation.m"
                    recompilation__succeeded = !(recompilation__succeeded);
#line 164 "recompilation.m"
                    if (recompilation__succeeded)
#line 164 "recompilation.m"
                      *recompilation__HeadVar__1_1 = recompilation__V_27_27;
#line 164 "recompilation.m"
                    else
#line 164 "recompilation.m"
                      {
#line 164 "recompilation.m"
                        MR_Word recompilation__V_28_28;

#line 164 "recompilation.m"
                        {
#line 164 "recompilation.m"
                          mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Map_35, &recompilation__V_28_28, recompilation__V_8_8, recompilation__V_18_18);
                        }
#line 3720 "recompilation.c"
                        recompilation__succeeded = (recompilation__V_28_28 == (MR_Integer) 0);
#line 164 "recompilation.m"
                        recompilation__succeeded = !(recompilation__succeeded);
#line 164 "recompilation.m"
                        if (recompilation__succeeded)
#line 164 "recompilation.m"
                          *recompilation__HeadVar__1_1 = recompilation__V_28_28;
#line 164 "recompilation.m"
                        else
#line 164 "recompilation.m"
                          {
#line 164 "recompilation.m"
                            MR_Word recompilation__V_29_29;

#line 164 "recompilation.m"
                            {
#line 164 "recompilation.m"
                              mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Cons_37, &recompilation__V_29_29, recompilation__V_9_9, recompilation__V_19_19);
                            }
#line 3740 "recompilation.c"
                            recompilation__succeeded = (recompilation__V_29_29 == (MR_Integer) 0);
#line 164 "recompilation.m"
                            recompilation__succeeded = !(recompilation__succeeded);
#line 164 "recompilation.m"
                            if (recompilation__succeeded)
#line 164 "recompilation.m"
                              *recompilation__HeadVar__1_1 = recompilation__V_29_29;
#line 164 "recompilation.m"
                            else
#line 164 "recompilation.m"
                              {
#line 164 "recompilation.m"
                                MR_Word recompilation__V_30_30;

#line 164 "recompilation.m"
                                {
#line 164 "recompilation.m"
                                  mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Set_36, &recompilation__V_30_30, recompilation__V_10_10, recompilation__V_20_20);
                                }
#line 3760 "recompilation.c"
                                recompilation__succeeded = (recompilation__V_30_30 == (MR_Integer) 0);
#line 164 "recompilation.m"
                                recompilation__succeeded = !(recompilation__succeeded);
#line 164 "recompilation.m"
                                if (recompilation__succeeded)
#line 164 "recompilation.m"
                                  *recompilation__HeadVar__1_1 = recompilation__V_30_30;
#line 164 "recompilation.m"
                                else
#line 164 "recompilation.m"
                                  {
#line 164 "recompilation.m"
                                    MR_Word recompilation__V_31_31;

#line 164 "recompilation.m"
                                    {
#line 164 "recompilation.m"
                                      mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Set_36, &recompilation__V_31_31, recompilation__V_11_11, recompilation__V_21_21);
                                    }
#line 3780 "recompilation.c"
                                    recompilation__succeeded = (recompilation__V_31_31 == (MR_Integer) 0);
#line 164 "recompilation.m"
                                    recompilation__succeeded = !(recompilation__succeeded);
#line 164 "recompilation.m"
                                    if (recompilation__succeeded)
#line 164 "recompilation.m"
                                      *recompilation__HeadVar__1_1 = recompilation__V_31_31;
#line 164 "recompilation.m"
                                    else
#line 164 "recompilation.m"
                                      {
#line 164 "recompilation.m"
                                        MR_Word recompilation__V_32_32;

#line 164 "recompilation.m"
                                        {
#line 164 "recompilation.m"
                                          mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Set_36, &recompilation__V_32_32, recompilation__V_12_12, recompilation__V_22_22);
                                        }
#line 3800 "recompilation.c"
                                        recompilation__succeeded = (recompilation__V_32_32 == (MR_Integer) 0);
#line 164 "recompilation.m"
                                        recompilation__succeeded = !(recompilation__succeeded);
#line 164 "recompilation.m"
                                        if (recompilation__succeeded)
#line 164 "recompilation.m"
                                          *recompilation__HeadVar__1_1 = recompilation__V_32_32;
#line 164 "recompilation.m"
                                        else
#line 164 "recompilation.m"
                                          {
#line 164 "recompilation.m"
                                            mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Set_36, recompilation__HeadVar__1_1, recompilation__V_13_13, recompilation__V_23_23);
#line 164 "recompilation.m"
                                            return;
                                          }
#line 164 "recompilation.m"
                                      }
#line 164 "recompilation.m"
                                  }
#line 164 "recompilation.m"
                              }
#line 164 "recompilation.m"
                          }
#line 164 "recompilation.m"
                      }
#line 164 "recompilation.m"
                  }
#line 164 "recompilation.m"
              }
#line 164 "recompilation.m"
          }
#line 164 "recompilation.m"
      }
#line 164 "recompilation.m"
  }
#line 164 "recompilation.m"
}

#line 164 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____item_id_set_3_0(
#line 164 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Map_25,
#line 164 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Set_26,
#line 164 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Cons_27,
#line 164 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 164 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 164 "recompilation.m"
{
#line 164 "recompilation.m"
  {
#line 164 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 164 "recompilation.m"
    MR_Integer recompilation__CastX_23 = (MR_Integer) recompilation__HeadVar__1_1;
#line 164 "recompilation.m"
    MR_Integer recompilation__CastY_24 = (MR_Integer) recompilation__HeadVar__2_2;

#line 164 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_23 == recompilation__CastY_24);
#line 164 "recompilation.m"
    if (recompilation__succeeded)
#line 164 "recompilation.m"
      recompilation__succeeded = MR_TRUE;
#line 164 "recompilation.m"
    else
#line 164 "recompilation.m"
      {
#line 164 "recompilation.m"
        MR_Box recompilation__V_3_3 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0));
#line 164 "recompilation.m"
        MR_Box recompilation__V_4_4 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1));
#line 164 "recompilation.m"
        MR_Box recompilation__V_5_5 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 2));
#line 164 "recompilation.m"
        MR_Box recompilation__V_6_6 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 3));
#line 164 "recompilation.m"
        MR_Box recompilation__V_7_7 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 4));
#line 164 "recompilation.m"
        MR_Box recompilation__V_8_8 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 5));
#line 164 "recompilation.m"
        MR_Box recompilation__V_9_9 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 6));
#line 164 "recompilation.m"
        MR_Box recompilation__V_10_10 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 7));
#line 164 "recompilation.m"
        MR_Box recompilation__V_11_11 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 8));
#line 164 "recompilation.m"
        MR_Box recompilation__V_12_12 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 9));
#line 164 "recompilation.m"
        MR_Box recompilation__V_13_13 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0));
#line 164 "recompilation.m"
        MR_Box recompilation__V_14_14 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1));
#line 164 "recompilation.m"
        MR_Box recompilation__V_15_15 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 2));
#line 164 "recompilation.m"
        MR_Box recompilation__V_16_16 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 3));
#line 164 "recompilation.m"
        MR_Box recompilation__V_17_17 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 4));
#line 164 "recompilation.m"
        MR_Box recompilation__V_18_18 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 5));
#line 164 "recompilation.m"
        MR_Box recompilation__V_19_19 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 6));
#line 164 "recompilation.m"
        MR_Box recompilation__V_20_20 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 7));
#line 164 "recompilation.m"
        MR_Box recompilation__V_21_21 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 8));
#line 164 "recompilation.m"
        MR_Box recompilation__V_22_22 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 9));

#line 3915 "recompilation.c"
        {
#line 3917 "recompilation.c"
          recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Map_25, recompilation__V_3_3, recompilation__V_13_13);
        }
#line 164 "recompilation.m"
        if (recompilation__succeeded)
#line 164 "recompilation.m"
          {
#line 3924 "recompilation.c"
            {
#line 3926 "recompilation.c"
              recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Map_25, recompilation__V_4_4, recompilation__V_14_14);
            }
#line 164 "recompilation.m"
            if (recompilation__succeeded)
#line 164 "recompilation.m"
              {
#line 3933 "recompilation.c"
                {
#line 3935 "recompilation.c"
                  recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Map_25, recompilation__V_5_5, recompilation__V_15_15);
                }
#line 164 "recompilation.m"
                if (recompilation__succeeded)
#line 164 "recompilation.m"
                  {
#line 3942 "recompilation.c"
                    {
#line 3944 "recompilation.c"
                      recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Map_25, recompilation__V_6_6, recompilation__V_16_16);
                    }
#line 164 "recompilation.m"
                    if (recompilation__succeeded)
#line 164 "recompilation.m"
                      {
#line 3951 "recompilation.c"
                        {
#line 3953 "recompilation.c"
                          recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Map_25, recompilation__V_7_7, recompilation__V_17_17);
                        }
#line 164 "recompilation.m"
                        if (recompilation__succeeded)
#line 164 "recompilation.m"
                          {
#line 3960 "recompilation.c"
                            {
#line 3962 "recompilation.c"
                              recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Cons_27, recompilation__V_8_8, recompilation__V_18_18);
                            }
#line 164 "recompilation.m"
                            if (recompilation__succeeded)
#line 164 "recompilation.m"
                              {
#line 3969 "recompilation.c"
                                {
#line 3971 "recompilation.c"
                                  recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Set_26, recompilation__V_9_9, recompilation__V_19_19);
                                }
#line 164 "recompilation.m"
                                if (recompilation__succeeded)
#line 164 "recompilation.m"
                                  {
#line 3978 "recompilation.c"
                                    {
#line 3980 "recompilation.c"
                                      recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Set_26, recompilation__V_10_10, recompilation__V_20_20);
                                    }
#line 164 "recompilation.m"
                                    if (recompilation__succeeded)
#line 164 "recompilation.m"
                                      {
#line 3987 "recompilation.c"
                                        {
#line 3989 "recompilation.c"
                                          recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Set_26, recompilation__V_11_11, recompilation__V_21_21);
                                        }
#line 164 "recompilation.m"
                                        if (recompilation__succeeded)
#line 3994 "recompilation.c"
                                          {
#line 3996 "recompilation.c"
                                            return recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Set_26, recompilation__V_12_12, recompilation__V_22_22);
                                          }
#line 164 "recompilation.m"
                                      }
#line 164 "recompilation.m"
                                  }
#line 164 "recompilation.m"
                              }
#line 164 "recompilation.m"
                          }
#line 164 "recompilation.m"
                      }
#line 164 "recompilation.m"
                  }
#line 164 "recompilation.m"
              }
#line 164 "recompilation.m"
          }
#line 164 "recompilation.m"
      }
#line 164 "recompilation.m"
    return recompilation__succeeded;
#line 164 "recompilation.m"
  }
#line 164 "recompilation.m"
}

#line 178 "recompilation.m"
void MR_CALL 
recompilation____Compare____item_id_set_1_0(
#line 178 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_6,
#line 178 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 178 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 178 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 178 "recompilation.m"
{
#line 178 "recompilation.m"
  {
#line 178 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 178 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 178 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 178 "recompilation.m"
    {
#line 178 "recompilation.m"
      recompilation____Compare____item_id_set_3_0(recompilation__TypeInfo_for_T_6, recompilation__TypeInfo_for_T_6, recompilation__TypeInfo_for_T_6, recompilation__HeadVar__1_1, recompilation__Cast_HeadVar1_4, recompilation__Cast_HeadVar2_5);
#line 178 "recompilation.m"
      return;
    }
#line 178 "recompilation.m"
  }
#line 178 "recompilation.m"
}

#line 178 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____item_id_set_1_0(
#line 178 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_5,
#line 178 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 178 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 178 "recompilation.m"
{
#line 178 "recompilation.m"
  {
#line 178 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 178 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 178 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 178 "recompilation.m"
    {
#line 178 "recompilation.m"
      return recompilation__succeeded = recompilation____Unify____item_id_set_3_0(recompilation__TypeInfo_for_T_5, recompilation__TypeInfo_for_T_5, recompilation__TypeInfo_for_T_5, recompilation__Cast_HeadVar1_3, recompilation__Cast_HeadVar2_4);
    }
#line 178 "recompilation.m"
    return recompilation__succeeded;
#line 178 "recompilation.m"
  }
#line 178 "recompilation.m"
}

#line 62 "recompilation.m"
void MR_CALL 
recompilation____Compare____item_id_0_0(
#line 62 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 62 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 62 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 62 "recompilation.m"
{
#line 62 "recompilation.m"
  {
#line 62 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 62 "recompilation.m"
    MR_Integer recompilation__CastX_9 = (MR_Integer) recompilation__HeadVar__2_2;
#line 62 "recompilation.m"
    MR_Integer recompilation__CastY_10 = (MR_Integer) recompilation__HeadVar__3_3;

#line 62 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_9 == recompilation__CastY_10);
#line 62 "recompilation.m"
    if (recompilation__succeeded)
#line 4114 "recompilation.c"
      *recompilation__HeadVar__1_1 = (MR_Integer) 0;
#line 62 "recompilation.m"
    else
#line 62 "recompilation.m"
      {
#line 62 "recompilation.m"
        MR_Word recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
#line 62 "recompilation.m"
        MR_Word recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));
#line 62 "recompilation.m"
        MR_Word recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 0)));
#line 62 "recompilation.m"
        MR_Word recompilation__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 1)));
#line 62 "recompilation.m"
        MR_Word recompilation__V_8_8;
#line 62 "recompilation.m"
        MR_Integer recompilation__V_13_13 = (MR_Integer) recompilation__V_4_4;
#line 62 "recompilation.m"
        MR_Integer recompilation__V_14_14 = (MR_Integer) recompilation__V_6_6;

#line 62 "recompilation.m"
        {
#line 62 "recompilation.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&recompilation__V_8_8, recompilation__V_13_13, recompilation__V_14_14);
        }
#line 4140 "recompilation.c"
        recompilation__succeeded = (recompilation__V_8_8 == (MR_Integer) 0);
#line 62 "recompilation.m"
        recompilation__succeeded = !(recompilation__succeeded);
#line 62 "recompilation.m"
        if (recompilation__succeeded)
#line 62 "recompilation.m"
          *recompilation__HeadVar__1_1 = recompilation__V_8_8;
#line 62 "recompilation.m"
        else
#line 62 "recompilation.m"
          {
#line 62 "recompilation.m"
            recompilation____Compare____item_name_0_0(recompilation__HeadVar__1_1, recompilation__V_5_5, recompilation__V_7_7);
#line 62 "recompilation.m"
            return;
          }
#line 62 "recompilation.m"
      }
#line 62 "recompilation.m"
  }
#line 62 "recompilation.m"
}

#line 62 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____item_id_0_0(
#line 62 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 62 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 62 "recompilation.m"
{
#line 62 "recompilation.m"
  {
#line 62 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 62 "recompilation.m"
    MR_Integer recompilation__CastX_7 = (MR_Integer) recompilation__HeadVar__1_1;
#line 62 "recompilation.m"
    MR_Integer recompilation__CastY_8 = (MR_Integer) recompilation__HeadVar__2_2;

#line 62 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_7 == recompilation__CastY_8);
#line 62 "recompilation.m"
    if (recompilation__succeeded)
#line 62 "recompilation.m"
      recompilation__succeeded = MR_TRUE;
#line 62 "recompilation.m"
    else
#line 62 "recompilation.m"
      {
#line 62 "recompilation.m"
        MR_Word recompilation__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 62 "recompilation.m"
        MR_Word recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));
#line 62 "recompilation.m"
        MR_Word recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
#line 62 "recompilation.m"
        MR_Word recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));

#line 4201 "recompilation.c"
        recompilation__succeeded = (recompilation__V_3_3 == recompilation__V_5_5);
#line 62 "recompilation.m"
        if (recompilation__succeeded)
#line 4205 "recompilation.c"
          {
#line 4207 "recompilation.c"
            return recompilation__succeeded = recompilation____Unify____item_name_0_0(recompilation__V_4_4, recompilation__V_6_6);
          }
#line 62 "recompilation.m"
      }
#line 62 "recompilation.m"
    return recompilation__succeeded;
#line 62 "recompilation.m"
  }
#line 62 "recompilation.m"
}

#line 249 "recompilation.m"
void MR_CALL 
recompilation____Compare____instance_version_numbers_0_0(
#line 249 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 249 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 249 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 249 "recompilation.m"
{
#line 249 "recompilation.m"
  {
#line 249 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 249 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 249 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 249 "recompilation.m"
    {
#line 249 "recompilation.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[3], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
#line 249 "recompilation.m"
      return;
    }
#line 249 "recompilation.m"
  }
#line 249 "recompilation.m"
}

#line 249 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____instance_version_numbers_0_0(
#line 249 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 249 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 249 "recompilation.m"
{
#line 249 "recompilation.m"
  {
#line 249 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 249 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 249 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 249 "recompilation.m"
    {
#line 249 "recompilation.m"
      return recompilation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation_scalar_common_2[3], ((MR_Box) (recompilation__Cast_HeadVar1_3)), ((MR_Box) (recompilation__Cast_HeadVar2_4)));
    }
#line 249 "recompilation.m"
    return recompilation__succeeded;
#line 249 "recompilation.m"
  }
#line 249 "recompilation.m"
}

#line 196 "recompilation.m"
void MR_CALL 
recompilation____Compare____functor_set_0_0(
#line 196 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 196 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 196 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 196 "recompilation.m"
{
#line 196 "recompilation.m"
  {
#line 196 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 196 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 196 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 196 "recompilation.m"
    {
#line 196 "recompilation.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[2], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
#line 196 "recompilation.m"
      return;
    }
#line 196 "recompilation.m"
  }
#line 196 "recompilation.m"
}

#line 196 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____functor_set_0_0(
#line 196 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 196 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 196 "recompilation.m"
{
#line 196 "recompilation.m"
  {
#line 196 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 196 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 196 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 196 "recompilation.m"
    {
#line 196 "recompilation.m"
      return recompilation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation_scalar_common_2[2], ((MR_Box) (recompilation__Cast_HeadVar1_3)), ((MR_Box) (recompilation__Cast_HeadVar2_4)));
    }
#line 196 "recompilation.m"
    return recompilation__succeeded;
#line 196 "recompilation.m"
  }
#line 196 "recompilation.m"
}

#line 258 "recompilation.m"
MR_Word MR_CALL 
recompilation__module_qualify_name_2_f_0(
#line 258 "recompilation.m"
  MR_Word recompilation__Qualifier_4,
#line 258 "recompilation.m"
  MR_String recompilation__Name_5)
#line 258 "recompilation.m"
{
#line 395 "recompilation.m"
  {
#line 395 "recompilation.m"
    MR_bool recompilation__succeeded = ((MR_tag((MR_Word) recompilation__Qualifier_4)) == (MR_mktag((MR_Integer) 0)));
#line 395 "recompilation.m"
    MR_Word recompilation__HeadVar__3_3;
#line 396 "recompilation.m"
    MR_String recompilation__V_6_6;

#line 396 "recompilation.m"
    if (recompilation__succeeded)
#line 396 "recompilation.m"
      {
#line 396 "recompilation.m"
        recompilation__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__Qualifier_4, (MR_Integer) 0)));
#line 396 "recompilation.m"
        recompilation__succeeded = (strcmp(recompilation__V_6_6, (MR_String) "") == 0);
#line 396 "recompilation.m"
      }
#line 395 "recompilation.m"
    if (recompilation__succeeded)
#line 395 "recompilation.m"
      {
#line 395 "recompilation.m"
        recompilation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 395 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, 0) = ((MR_Box) (recompilation__Name_5));
#line 395 "recompilation.m"
      }
#line 395 "recompilation.m"
    else
#line 395 "recompilation.m"
      {
#line 395 "recompilation.m"
        recompilation__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 395 "recompilation.m"
        MR_hl_field(MR_mktag(1), recompilation__HeadVar__3_3, 0) = ((MR_Box) (recompilation__Qualifier_4));
#line 395 "recompilation.m"
        MR_hl_field(MR_mktag(1), recompilation__HeadVar__3_3, 1) = ((MR_Box) (recompilation__Name_5));
#line 395 "recompilation.m"
      }
#line 395 "recompilation.m"
    return recompilation__HeadVar__3_3;
#line 395 "recompilation.m"
  }
#line 258 "recompilation.m"
}

#line 256 "recompilation.m"
MR_Word MR_CALL 
recompilation__find_module_qualifier_1_f_0(
#line 256 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 256 "recompilation.m"
{
#line 392 "recompilation.m"
  {
#line 392 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 392 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;

#line 392 "recompilation.m"
    if (((MR_tag((MR_Word) recompilation__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 393 "recompilation.m"
      {
#line 393 "recompilation.m"
        MR_String recompilation__V_6_6;

#line 393 "recompilation.m"
        recompilation__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 393 "recompilation.m"
        recompilation__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__HeadVar__1_1, (MR_Integer) 1)));
#line 393 "recompilation.m"
      }
#line 392 "recompilation.m"
    else
#line 392 "recompilation.m"
      {
#line 392 "recompilation.m"
        recompilation__HeadVar__2_2 = (MR_Word) &recompilation_scalar_common_4[0];
#line 392 "recompilation.m"
      }
#line 392 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 392 "recompilation.m"
  }
#line 256 "recompilation.m"
}

#line 381 "recompilation.m"
static MR_Box MR_CALL 
recompilation__map_ids_3_f_0_1(
#line 381 "recompilation.m"
  MR_Box recompilation__closure_arg,
#line 381 "recompilation.m"
  MR_Box recompilation__wrapper_arg_1,
#line 381 "recompilation.m"
  MR_Box recompilation__wrapper_arg_2)
#line 381 "recompilation.m"
{
#line 381 "recompilation.m"
  {
#line 381 "recompilation.m"
    MR_Box recompilation__wrapper_arg_3;
#line 381 "recompilation.m"
    MR_Box recompilation__closure = recompilation__closure_arg;
#line 381 "recompilation.m"
    MR_Word recompilation__conv0_HeadVar__7_15;

#line 381 "recompilation.m"
    {
#line 381 "recompilation.m"
      recompilation__conv0_HeadVar__7_15 = recompilation__IntroducedFrom__func__map_ids__381__1_6_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__closure, (MR_Integer) 6))), ((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 381 "recompilation.m"
    recompilation__wrapper_arg_3 = ((MR_Box) (recompilation__conv0_HeadVar__7_15));
#line 381 "recompilation.m"
    return recompilation__wrapper_arg_3;
#line 381 "recompilation.m"
  }
#line 381 "recompilation.m"
}

#line 231 "recompilation.m"
MR_Word MR_CALL 
recompilation__map_ids_3_f_0(
#line 231 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_37,
#line 231 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_U_38,
#line 231 "recompilation.m"
  MR_Word recompilation__Func_5,
#line 231 "recompilation.m"
  MR_Word recompilation__Items0_6,
#line 231 "recompilation.m"
  MR_Box recompilation__Init_7)
#line 231 "recompilation.m"
{
#line 379 "recompilation.m"
  {
#line 379 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 379 "recompilation.m"
    MR_Word recompilation__Items_8;
#line 379 "recompilation.m"
    MR_Word recompilation__TypeInfo_41_41;
#line 379 "recompilation.m"
    MR_Word recompilation__Items1_9;
#line 379 "recompilation.m"
    MR_Word recompilation__V_12_12;
#line 381 "recompilation.m"
    MR_Box recompilation__conv1_Items_8;

#line 324 "recompilation.m"
    {
#line 324 "recompilation.m"
      recompilation__Items1_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 324 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 0) = recompilation__Init_7;
#line 324 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 1) = recompilation__Init_7;
#line 324 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 2) = recompilation__Init_7;
#line 324 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 3) = recompilation__Init_7;
#line 324 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 4) = recompilation__Init_7;
#line 324 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 5) = recompilation__Init_7;
#line 324 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 6) = recompilation__Init_7;
#line 324 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 7) = recompilation__Init_7;
#line 324 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 8) = recompilation__Init_7;
#line 324 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 9) = recompilation__Init_7;
#line 324 "recompilation.m"
    }
#line 4532 "recompilation.c"
    {
#line 4534 "recompilation.c"
      recompilation__TypeInfo_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 4536 "recompilation.c"
      MR_hl_field(MR_mktag(0), recompilation__TypeInfo_41_41, 0) = ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_set_3));
#line 4538 "recompilation.c"
      MR_hl_field(MR_mktag(0), recompilation__TypeInfo_41_41, 1) = ((MR_Box) (recompilation__TypeInfo_for_U_38));
#line 4540 "recompilation.c"
      MR_hl_field(MR_mktag(0), recompilation__TypeInfo_41_41, 2) = ((MR_Box) (recompilation__TypeInfo_for_U_38));
#line 4542 "recompilation.c"
      MR_hl_field(MR_mktag(0), recompilation__TypeInfo_41_41, 3) = ((MR_Box) (recompilation__TypeInfo_for_U_38));
#line 4544 "recompilation.c"
    }
#line 381 "recompilation.m"
    {
#line 381 "recompilation.m"
      recompilation__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 381 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_12_12, 0) = ((MR_Box) (&recompilation_scalar_common_6[0]));
#line 381 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_12_12, 1) = ((MR_Box) (recompilation__map_ids_3_f_0_1));
#line 381 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 381 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_12_12, 3) = ((MR_Box) (recompilation__TypeInfo_for_T_37));
#line 381 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_12_12, 4) = ((MR_Box) (recompilation__TypeInfo_for_U_38));
#line 381 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_12_12, 5) = ((MR_Box) (recompilation__Func_5));
#line 381 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_12_12, 6) = ((MR_Box) (recompilation__Items0_6));
#line 381 "recompilation.m"
    }
#line 381 "recompilation.m"
    {
#line 381 "recompilation.m"
      recompilation__conv1_Items_8 = mercury__list__foldl_3_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_type_0, recompilation__TypeInfo_41_41, (MR_Word) recompilation__V_12_12, (MR_Word) MR_mkword(MR_mktag(1), &recompilation_scalar_common_1[8]), ((MR_Box) (recompilation__Items1_9)));
    }
#line 381 "recompilation.m"
    recompilation__Items_8 = ((MR_Word) recompilation__conv1_Items_8);
#line 379 "recompilation.m"
    return recompilation__Items_8;
#line 379 "recompilation.m"
  }
#line 231 "recompilation.m"
}

#line 229 "recompilation.m"
MR_Word MR_CALL 
recompilation__update_ids_3_f_0(
#line 229 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_125,
#line 229 "recompilation.m"
  MR_Word recompilation__Items_1,
#line 229 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 229 "recompilation.m"
  MR_Box recompilation__IdMap_3)
#line 229 "recompilation.m"
{
#line 368 "recompilation.m"
  {
#line 368 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 368 "recompilation.m"
    MR_Word recompilation__HeadVar__4_4;
#line 368 "recompilation.m"
    MR_Box recompilation__V_126_126 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 9));
#line 368 "recompilation.m"
    MR_Box recompilation__V_127_127 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 8));
#line 368 "recompilation.m"
    MR_Box recompilation__V_128_128 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 7));
#line 368 "recompilation.m"
    MR_Box recompilation__V_129_129 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 6));
#line 368 "recompilation.m"
    MR_Box recompilation__V_130_130 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 5));
#line 368 "recompilation.m"
    MR_Box recompilation__V_131_131 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 4));
#line 368 "recompilation.m"
    MR_Box recompilation__V_132_132 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 3));
#line 368 "recompilation.m"
    MR_Box recompilation__V_133_133 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 2));
#line 368 "recompilation.m"
    MR_Box recompilation__V_134_134 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 1));
#line 368 "recompilation.m"
    MR_Box recompilation__V_135_135 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 0));

#line 368 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 9))
#line 377 "recompilation.m"
      {
#line 377 "recompilation.m"
        recompilation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 377 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 0) = recompilation__V_135_135;
#line 377 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 1) = recompilation__V_134_134;
#line 377 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 2) = recompilation__V_133_133;
#line 377 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 3) = recompilation__V_132_132;
#line 377 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 4) = recompilation__V_131_131;
#line 377 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 5) = recompilation__V_130_130;
#line 377 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 6) = recompilation__V_129_129;
#line 377 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 7) = recompilation__V_128_128;
#line 377 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 8) = recompilation__V_127_127;
#line 377 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 9) = recompilation__IdMap_3;
#line 377 "recompilation.m"
      }
#line 368 "recompilation.m"
    else
#line 368 "recompilation.m"
      if ((recompilation__HeadVar__2_2 == (MR_Integer) 7))
#line 374 "recompilation.m"
        {
#line 374 "recompilation.m"
          recompilation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 374 "recompilation.m"
          MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 0) = recompilation__V_135_135;
#line 374 "recompilation.m"
          MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 1) = recompilation__V_134_134;
#line 374 "recompilation.m"
          MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 2) = recompilation__V_133_133;
#line 374 "recompilation.m"
          MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 3) = recompilation__V_132_132;
#line 374 "recompilation.m"
          MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 4) = recompilation__V_131_131;
#line 374 "recompilation.m"
          MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 5) = recompilation__V_130_130;
#line 374 "recompilation.m"
          MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 6) = recompilation__V_129_129;
#line 374 "recompilation.m"
          MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 7) = recompilation__IdMap_3;
#line 374 "recompilation.m"
          MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 8) = recompilation__V_127_127;
#line 374 "recompilation.m"
          MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 9) = recompilation__V_126_126;
#line 374 "recompilation.m"
        }
#line 368 "recompilation.m"
      else
#line 368 "recompilation.m"
        if ((recompilation__HeadVar__2_2 == (MR_Integer) 5))
#line 375 "recompilation.m"
          {
#line 375 "recompilation.m"
            recompilation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 375 "recompilation.m"
            MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 0) = recompilation__V_135_135;
#line 375 "recompilation.m"
            MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 1) = recompilation__V_134_134;
#line 375 "recompilation.m"
            MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 2) = recompilation__V_133_133;
#line 375 "recompilation.m"
            MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 3) = recompilation__V_132_132;
#line 375 "recompilation.m"
            MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 4) = recompilation__V_131_131;
#line 375 "recompilation.m"
            MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 5) = recompilation__IdMap_3;
#line 375 "recompilation.m"
            MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 6) = recompilation__V_129_129;
#line 375 "recompilation.m"
            MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 7) = recompilation__V_128_128;
#line 375 "recompilation.m"
            MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 8) = recompilation__V_127_127;
#line 375 "recompilation.m"
            MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 9) = recompilation__V_126_126;
#line 375 "recompilation.m"
          }
#line 368 "recompilation.m"
        else
#line 368 "recompilation.m"
          if ((recompilation__HeadVar__2_2 == (MR_Integer) 3))
#line 371 "recompilation.m"
            {
#line 371 "recompilation.m"
              recompilation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 371 "recompilation.m"
              MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 0) = recompilation__V_135_135;
#line 371 "recompilation.m"
              MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 1) = recompilation__V_134_134;
#line 371 "recompilation.m"
              MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 2) = recompilation__V_133_133;
#line 371 "recompilation.m"
              MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 3) = recompilation__IdMap_3;
#line 371 "recompilation.m"
              MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 4) = recompilation__V_131_131;
#line 371 "recompilation.m"
              MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 5) = recompilation__V_130_130;
#line 371 "recompilation.m"
              MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 6) = recompilation__V_129_129;
#line 371 "recompilation.m"
              MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 7) = recompilation__V_128_128;
#line 371 "recompilation.m"
              MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 8) = recompilation__V_127_127;
#line 371 "recompilation.m"
              MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 9) = recompilation__V_126_126;
#line 371 "recompilation.m"
            }
#line 368 "recompilation.m"
          else
#line 368 "recompilation.m"
            if ((recompilation__HeadVar__2_2 == (MR_Integer) 2))
#line 370 "recompilation.m"
              {
#line 370 "recompilation.m"
                recompilation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 370 "recompilation.m"
                MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 0) = recompilation__V_135_135;
#line 370 "recompilation.m"
                MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 1) = recompilation__V_134_134;
#line 370 "recompilation.m"
                MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 2) = recompilation__IdMap_3;
#line 370 "recompilation.m"
                MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 3) = recompilation__V_132_132;
#line 370 "recompilation.m"
                MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 4) = recompilation__V_131_131;
#line 370 "recompilation.m"
                MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 5) = recompilation__V_130_130;
#line 370 "recompilation.m"
                MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 6) = recompilation__V_129_129;
#line 370 "recompilation.m"
                MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 7) = recompilation__V_128_128;
#line 370 "recompilation.m"
                MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 8) = recompilation__V_127_127;
#line 370 "recompilation.m"
                MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 9) = recompilation__V_126_126;
#line 370 "recompilation.m"
              }
#line 368 "recompilation.m"
            else
#line 368 "recompilation.m"
              if ((recompilation__HeadVar__2_2 == (MR_Integer) 8))
#line 376 "recompilation.m"
                {
#line 376 "recompilation.m"
                  recompilation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 376 "recompilation.m"
                  MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 0) = recompilation__V_135_135;
#line 376 "recompilation.m"
                  MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 1) = recompilation__V_134_134;
#line 376 "recompilation.m"
                  MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 2) = recompilation__V_133_133;
#line 376 "recompilation.m"
                  MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 3) = recompilation__V_132_132;
#line 376 "recompilation.m"
                  MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 4) = recompilation__V_131_131;
#line 376 "recompilation.m"
                  MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 5) = recompilation__V_130_130;
#line 376 "recompilation.m"
                  MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 6) = recompilation__V_129_129;
#line 376 "recompilation.m"
                  MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 7) = recompilation__V_128_128;
#line 376 "recompilation.m"
                  MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 8) = recompilation__IdMap_3;
#line 376 "recompilation.m"
                  MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 9) = recompilation__V_126_126;
#line 376 "recompilation.m"
                }
#line 368 "recompilation.m"
              else
#line 368 "recompilation.m"
                if ((recompilation__HeadVar__2_2 == (MR_Integer) 6))
#line 373 "recompilation.m"
                  {
#line 373 "recompilation.m"
                    recompilation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 373 "recompilation.m"
                    MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 0) = recompilation__V_135_135;
#line 373 "recompilation.m"
                    MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 1) = recompilation__V_134_134;
#line 373 "recompilation.m"
                    MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 2) = recompilation__V_133_133;
#line 373 "recompilation.m"
                    MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 3) = recompilation__V_132_132;
#line 373 "recompilation.m"
                    MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 4) = recompilation__V_131_131;
#line 373 "recompilation.m"
                    MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 5) = recompilation__V_130_130;
#line 373 "recompilation.m"
                    MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 6) = recompilation__IdMap_3;
#line 373 "recompilation.m"
                    MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 7) = recompilation__V_128_128;
#line 373 "recompilation.m"
                    MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 8) = recompilation__V_127_127;
#line 373 "recompilation.m"
                    MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 9) = recompilation__V_126_126;
#line 373 "recompilation.m"
                  }
#line 368 "recompilation.m"
                else
#line 368 "recompilation.m"
                  if ((recompilation__HeadVar__2_2 == (MR_Integer) 0))
#line 368 "recompilation.m"
                    {
#line 368 "recompilation.m"
                      recompilation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 368 "recompilation.m"
                      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 0) = recompilation__IdMap_3;
#line 368 "recompilation.m"
                      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 1) = recompilation__V_134_134;
#line 368 "recompilation.m"
                      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 2) = recompilation__V_133_133;
#line 368 "recompilation.m"
                      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 3) = recompilation__V_132_132;
#line 368 "recompilation.m"
                      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 4) = recompilation__V_131_131;
#line 368 "recompilation.m"
                      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 5) = recompilation__V_130_130;
#line 368 "recompilation.m"
                      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 6) = recompilation__V_129_129;
#line 368 "recompilation.m"
                      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 7) = recompilation__V_128_128;
#line 368 "recompilation.m"
                      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 8) = recompilation__V_127_127;
#line 368 "recompilation.m"
                      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 9) = recompilation__V_126_126;
#line 368 "recompilation.m"
                    }
#line 368 "recompilation.m"
                  else
#line 368 "recompilation.m"
                    if ((recompilation__HeadVar__2_2 == (MR_Integer) 1))
#line 369 "recompilation.m"
                      {
#line 369 "recompilation.m"
                        recompilation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 369 "recompilation.m"
                        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 0) = recompilation__V_135_135;
#line 369 "recompilation.m"
                        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 1) = recompilation__IdMap_3;
#line 369 "recompilation.m"
                        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 2) = recompilation__V_133_133;
#line 369 "recompilation.m"
                        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 3) = recompilation__V_132_132;
#line 369 "recompilation.m"
                        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 4) = recompilation__V_131_131;
#line 369 "recompilation.m"
                        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 5) = recompilation__V_130_130;
#line 369 "recompilation.m"
                        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 6) = recompilation__V_129_129;
#line 369 "recompilation.m"
                        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 7) = recompilation__V_128_128;
#line 369 "recompilation.m"
                        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 8) = recompilation__V_127_127;
#line 369 "recompilation.m"
                        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 9) = recompilation__V_126_126;
#line 369 "recompilation.m"
                      }
#line 368 "recompilation.m"
                    else
#line 372 "recompilation.m"
                      {
#line 372 "recompilation.m"
                        recompilation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 372 "recompilation.m"
                        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 0) = recompilation__V_135_135;
#line 372 "recompilation.m"
                        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 1) = recompilation__V_134_134;
#line 372 "recompilation.m"
                        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 2) = recompilation__V_133_133;
#line 372 "recompilation.m"
                        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 3) = recompilation__V_132_132;
#line 372 "recompilation.m"
                        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 4) = recompilation__IdMap_3;
#line 372 "recompilation.m"
                        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 5) = recompilation__V_130_130;
#line 372 "recompilation.m"
                        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 6) = recompilation__V_129_129;
#line 372 "recompilation.m"
                        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 7) = recompilation__V_128_128;
#line 372 "recompilation.m"
                        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 8) = recompilation__V_127_127;
#line 372 "recompilation.m"
                        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 9) = recompilation__V_126_126;
#line 372 "recompilation.m"
                      }
#line 368 "recompilation.m"
    return recompilation__HeadVar__4_4;
#line 368 "recompilation.m"
  }
#line 229 "recompilation.m"
}

#line 227 "recompilation.m"
MR_Box MR_CALL 
recompilation__extract_ids_2_f_0(
#line 227 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_104,
#line 227 "recompilation.m"
  MR_Word recompilation__Items_1,
#line 227 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 227 "recompilation.m"
{
#line 357 "recompilation.m"
  {
#line 357 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 357 "recompilation.m"
    MR_Box recompilation__HeadVar__3_3;
#line 357 "recompilation.m"
    MR_Box recompilation__V_105_105 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 9));
#line 357 "recompilation.m"
    MR_Box recompilation__V_106_106 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 8));
#line 357 "recompilation.m"
    MR_Box recompilation__V_107_107 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 7));
#line 357 "recompilation.m"
    MR_Box recompilation__V_108_108 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 6));
#line 357 "recompilation.m"
    MR_Box recompilation__V_109_109 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 5));
#line 357 "recompilation.m"
    MR_Box recompilation__V_110_110 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 4));
#line 357 "recompilation.m"
    MR_Box recompilation__V_111_111 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 3));
#line 357 "recompilation.m"
    MR_Box recompilation__V_112_112 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 2));
#line 357 "recompilation.m"
    MR_Box recompilation__V_113_113 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 1));
#line 357 "recompilation.m"
    MR_Box recompilation__V_114_114 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 0));

#line 357 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 9))
#line 366 "recompilation.m"
      recompilation__HeadVar__3_3 = recompilation__V_105_105;
#line 357 "recompilation.m"
    else
#line 357 "recompilation.m"
      if ((recompilation__HeadVar__2_2 == (MR_Integer) 7))
#line 364 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_107_107;
#line 357 "recompilation.m"
      else
#line 357 "recompilation.m"
        if ((recompilation__HeadVar__2_2 == (MR_Integer) 5))
#line 362 "recompilation.m"
          recompilation__HeadVar__3_3 = recompilation__V_109_109;
#line 357 "recompilation.m"
        else
#line 357 "recompilation.m"
          if ((recompilation__HeadVar__2_2 == (MR_Integer) 3))
#line 360 "recompilation.m"
            recompilation__HeadVar__3_3 = recompilation__V_111_111;
#line 357 "recompilation.m"
          else
#line 357 "recompilation.m"
            if ((recompilation__HeadVar__2_2 == (MR_Integer) 2))
#line 359 "recompilation.m"
              recompilation__HeadVar__3_3 = recompilation__V_112_112;
#line 357 "recompilation.m"
            else
#line 357 "recompilation.m"
              if ((recompilation__HeadVar__2_2 == (MR_Integer) 8))
#line 365 "recompilation.m"
                recompilation__HeadVar__3_3 = recompilation__V_106_106;
#line 357 "recompilation.m"
              else
#line 357 "recompilation.m"
                if ((recompilation__HeadVar__2_2 == (MR_Integer) 6))
#line 363 "recompilation.m"
                  recompilation__HeadVar__3_3 = recompilation__V_108_108;
#line 357 "recompilation.m"
                else
#line 357 "recompilation.m"
                  if ((recompilation__HeadVar__2_2 == (MR_Integer) 0))
#line 357 "recompilation.m"
                    recompilation__HeadVar__3_3 = recompilation__V_114_114;
#line 357 "recompilation.m"
                  else
#line 357 "recompilation.m"
                    if ((recompilation__HeadVar__2_2 == (MR_Integer) 1))
#line 358 "recompilation.m"
                      recompilation__HeadVar__3_3 = recompilation__V_113_113;
#line 357 "recompilation.m"
                    else
#line 361 "recompilation.m"
                      recompilation__HeadVar__3_3 = recompilation__V_110_110;
#line 357 "recompilation.m"
    return recompilation__HeadVar__3_3;
#line 357 "recompilation.m"
  }
#line 227 "recompilation.m"
}

#line 223 "recompilation.m"
MR_Word MR_CALL 
recompilation__update_pred_or_func_set_3_f_0(
#line 223 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Simple_29,
#line 223 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_PorF_30,
#line 223 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Cons_31,
#line 223 "recompilation.m"
  MR_Word recompilation__Items_1,
#line 223 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 223 "recompilation.m"
  MR_Box recompilation__Set_3)
#line 223 "recompilation.m"
{
#line 352 "recompilation.m"
  {
#line 352 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 352 "recompilation.m"
    MR_Word recompilation__HeadVar__4_4;
#line 352 "recompilation.m"
    MR_Box recompilation__V_32_32 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 9));
#line 352 "recompilation.m"
    MR_Box recompilation__V_33_33 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 8));
#line 352 "recompilation.m"
    MR_Box recompilation__V_34_34 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 7));
#line 352 "recompilation.m"
    MR_Box recompilation__V_35_35 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 6));
#line 352 "recompilation.m"
    MR_Box recompilation__V_36_36 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 5));
#line 352 "recompilation.m"
    MR_Box recompilation__V_37_37 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 4));
#line 352 "recompilation.m"
    MR_Box recompilation__V_38_38 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 3));
#line 352 "recompilation.m"
    MR_Box recompilation__V_39_39 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 2));
#line 352 "recompilation.m"
    MR_Box recompilation__V_40_40 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 1));
#line 352 "recompilation.m"
    MR_Box recompilation__V_41_41 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 0));

#line 352 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 7))
#line 354 "recompilation.m"
      {
#line 354 "recompilation.m"
        recompilation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 354 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 0) = recompilation__V_41_41;
#line 354 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 1) = recompilation__V_40_40;
#line 354 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 2) = recompilation__V_39_39;
#line 354 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 3) = recompilation__V_38_38;
#line 354 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 4) = recompilation__V_37_37;
#line 354 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 5) = recompilation__V_36_36;
#line 354 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 6) = recompilation__V_35_35;
#line 354 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 7) = recompilation__Set_3;
#line 354 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 8) = recompilation__V_33_33;
#line 354 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 9) = recompilation__V_32_32;
#line 354 "recompilation.m"
      }
#line 352 "recompilation.m"
    else
#line 352 "recompilation.m"
      {
#line 352 "recompilation.m"
        recompilation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 352 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 0) = recompilation__V_41_41;
#line 352 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 1) = recompilation__V_40_40;
#line 352 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 2) = recompilation__V_39_39;
#line 352 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 3) = recompilation__V_38_38;
#line 352 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 4) = recompilation__V_37_37;
#line 352 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 5) = recompilation__V_36_36;
#line 352 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 6) = recompilation__Set_3;
#line 352 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 7) = recompilation__V_34_34;
#line 352 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 8) = recompilation__V_33_33;
#line 352 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 9) = recompilation__V_32_32;
#line 352 "recompilation.m"
      }
#line 352 "recompilation.m"
    return recompilation__HeadVar__4_4;
#line 352 "recompilation.m"
  }
#line 223 "recompilation.m"
}

#line 220 "recompilation.m"
MR_Box MR_CALL 
recompilation__extract_pred_or_func_set_2_f_0(
#line 220 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Simple_24,
#line 220 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_PorF_25,
#line 220 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Cons_26,
#line 220 "recompilation.m"
  MR_Word recompilation__Items_1,
#line 220 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 220 "recompilation.m"
{
#line 349 "recompilation.m"
  {
#line 349 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 349 "recompilation.m"
    MR_Box recompilation__HeadVar__3_3;
#line 349 "recompilation.m"
    MR_Box recompilation__V_29_29 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 7));
#line 349 "recompilation.m"
    MR_Box recompilation__V_30_30 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 6));
#line 349 "recompilation.m"
    MR_Box recompilation__V_27_27 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 9));
#line 349 "recompilation.m"
    MR_Box recompilation__V_28_28 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 8));
#line 349 "recompilation.m"
    MR_Box recompilation__V_31_31 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 5));
#line 349 "recompilation.m"
    MR_Box recompilation__V_32_32 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 4));
#line 349 "recompilation.m"
    MR_Box recompilation__V_33_33 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 3));
#line 349 "recompilation.m"
    MR_Box recompilation__V_34_34 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 2));
#line 349 "recompilation.m"
    MR_Box recompilation__V_35_35 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 1));
#line 349 "recompilation.m"
    MR_Box recompilation__V_36_36 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 0));

#line 349 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 7))
#line 350 "recompilation.m"
      recompilation__HeadVar__3_3 = recompilation__V_29_29;
#line 349 "recompilation.m"
    else
#line 349 "recompilation.m"
      recompilation__HeadVar__3_3 = recompilation__V_30_30;
#line 349 "recompilation.m"
    return recompilation__HeadVar__3_3;
#line 349 "recompilation.m"
  }
#line 220 "recompilation.m"
}

#line 216 "recompilation.m"
MR_Word MR_CALL 
recompilation__update_simple_item_set_3_f_0(
#line 216 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Simple_65,
#line 216 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_PorF_66,
#line 216 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Cons_67,
#line 216 "recompilation.m"
  MR_Word recompilation__Items_1,
#line 216 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 216 "recompilation.m"
  MR_Box recompilation__IdMap_3)
#line 216 "recompilation.m"
{
#line 340 "recompilation.m"
  {
#line 340 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 340 "recompilation.m"
    MR_Word recompilation__HeadVar__4_4;
#line 340 "recompilation.m"
    MR_Box recompilation__V_68_68 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 9));
#line 340 "recompilation.m"
    MR_Box recompilation__V_69_69 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 8));
#line 340 "recompilation.m"
    MR_Box recompilation__V_70_70 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 7));
#line 340 "recompilation.m"
    MR_Box recompilation__V_71_71 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 6));
#line 340 "recompilation.m"
    MR_Box recompilation__V_72_72 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 5));
#line 340 "recompilation.m"
    MR_Box recompilation__V_73_73 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 4));
#line 340 "recompilation.m"
    MR_Box recompilation__V_74_74 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 3));
#line 340 "recompilation.m"
    MR_Box recompilation__V_75_75 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 2));
#line 340 "recompilation.m"
    MR_Box recompilation__V_76_76 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 1));
#line 340 "recompilation.m"
    MR_Box recompilation__V_77_77 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 0));

#line 340 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 3))
#line 345 "recompilation.m"
      {
#line 345 "recompilation.m"
        recompilation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 345 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 0) = recompilation__V_77_77;
#line 345 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 1) = recompilation__V_76_76;
#line 345 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 2) = recompilation__V_75_75;
#line 345 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 3) = recompilation__IdMap_3;
#line 345 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 4) = recompilation__V_73_73;
#line 345 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 5) = recompilation__V_72_72;
#line 345 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 6) = recompilation__V_71_71;
#line 345 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 7) = recompilation__V_70_70;
#line 345 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 8) = recompilation__V_69_69;
#line 345 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 9) = recompilation__V_68_68;
#line 345 "recompilation.m"
      }
#line 340 "recompilation.m"
    else
#line 340 "recompilation.m"
      if ((recompilation__HeadVar__2_2 == (MR_Integer) 2))
#line 344 "recompilation.m"
        {
#line 344 "recompilation.m"
          recompilation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 344 "recompilation.m"
          MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 0) = recompilation__V_77_77;
#line 344 "recompilation.m"
          MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 1) = recompilation__V_76_76;
#line 344 "recompilation.m"
          MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 2) = recompilation__IdMap_3;
#line 344 "recompilation.m"
          MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 3) = recompilation__V_74_74;
#line 344 "recompilation.m"
          MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 4) = recompilation__V_73_73;
#line 344 "recompilation.m"
          MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 5) = recompilation__V_72_72;
#line 344 "recompilation.m"
          MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 6) = recompilation__V_71_71;
#line 344 "recompilation.m"
          MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 7) = recompilation__V_70_70;
#line 344 "recompilation.m"
          MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 8) = recompilation__V_69_69;
#line 344 "recompilation.m"
          MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 9) = recompilation__V_68_68;
#line 344 "recompilation.m"
        }
#line 340 "recompilation.m"
      else
#line 340 "recompilation.m"
        if ((recompilation__HeadVar__2_2 == (MR_Integer) 0))
#line 340 "recompilation.m"
          {
#line 340 "recompilation.m"
            recompilation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 340 "recompilation.m"
            MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 0) = recompilation__IdMap_3;
#line 340 "recompilation.m"
            MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 1) = recompilation__V_76_76;
#line 340 "recompilation.m"
            MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 2) = recompilation__V_75_75;
#line 340 "recompilation.m"
            MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 3) = recompilation__V_74_74;
#line 340 "recompilation.m"
            MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 4) = recompilation__V_73_73;
#line 340 "recompilation.m"
            MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 5) = recompilation__V_72_72;
#line 340 "recompilation.m"
            MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 6) = recompilation__V_71_71;
#line 340 "recompilation.m"
            MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 7) = recompilation__V_70_70;
#line 340 "recompilation.m"
            MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 8) = recompilation__V_69_69;
#line 340 "recompilation.m"
            MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 9) = recompilation__V_68_68;
#line 340 "recompilation.m"
          }
#line 340 "recompilation.m"
        else
#line 340 "recompilation.m"
          if ((recompilation__HeadVar__2_2 == (MR_Integer) 1))
#line 342 "recompilation.m"
            {
#line 342 "recompilation.m"
              recompilation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 342 "recompilation.m"
              MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 0) = recompilation__V_77_77;
#line 342 "recompilation.m"
              MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 1) = recompilation__IdMap_3;
#line 342 "recompilation.m"
              MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 2) = recompilation__V_75_75;
#line 342 "recompilation.m"
              MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 3) = recompilation__V_74_74;
#line 342 "recompilation.m"
              MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 4) = recompilation__V_73_73;
#line 342 "recompilation.m"
              MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 5) = recompilation__V_72_72;
#line 342 "recompilation.m"
              MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 6) = recompilation__V_71_71;
#line 342 "recompilation.m"
              MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 7) = recompilation__V_70_70;
#line 342 "recompilation.m"
              MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 8) = recompilation__V_69_69;
#line 342 "recompilation.m"
              MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 9) = recompilation__V_68_68;
#line 342 "recompilation.m"
            }
#line 340 "recompilation.m"
          else
#line 346 "recompilation.m"
            {
#line 346 "recompilation.m"
              recompilation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 346 "recompilation.m"
              MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 0) = recompilation__V_77_77;
#line 346 "recompilation.m"
              MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 1) = recompilation__V_76_76;
#line 346 "recompilation.m"
              MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 2) = recompilation__V_75_75;
#line 346 "recompilation.m"
              MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 3) = recompilation__V_74_74;
#line 346 "recompilation.m"
              MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 4) = recompilation__IdMap_3;
#line 346 "recompilation.m"
              MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 5) = recompilation__V_72_72;
#line 346 "recompilation.m"
              MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 6) = recompilation__V_71_71;
#line 346 "recompilation.m"
              MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 7) = recompilation__V_70_70;
#line 346 "recompilation.m"
              MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 8) = recompilation__V_69_69;
#line 346 "recompilation.m"
              MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 9) = recompilation__V_68_68;
#line 346 "recompilation.m"
            }
#line 340 "recompilation.m"
    return recompilation__HeadVar__4_4;
#line 340 "recompilation.m"
  }
#line 216 "recompilation.m"
}

#line 213 "recompilation.m"
MR_Box MR_CALL 
recompilation__extract_simple_item_set_2_f_0(
#line 213 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Simple_54,
#line 213 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_PorF_55,
#line 213 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Cons_56,
#line 213 "recompilation.m"
  MR_Word recompilation__Items_1,
#line 213 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 213 "recompilation.m"
{
#line 334 "recompilation.m"
  {
#line 334 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 334 "recompilation.m"
    MR_Box recompilation__HeadVar__3_3;
#line 334 "recompilation.m"
    MR_Box recompilation__V_62_62 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 4));
#line 334 "recompilation.m"
    MR_Box recompilation__V_63_63 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 3));
#line 334 "recompilation.m"
    MR_Box recompilation__V_64_64 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 2));
#line 334 "recompilation.m"
    MR_Box recompilation__V_65_65 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 1));
#line 334 "recompilation.m"
    MR_Box recompilation__V_66_66 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 0));
#line 334 "recompilation.m"
    MR_Box recompilation__V_57_57 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 9));
#line 334 "recompilation.m"
    MR_Box recompilation__V_58_58 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 8));
#line 334 "recompilation.m"
    MR_Box recompilation__V_59_59 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 7));
#line 334 "recompilation.m"
    MR_Box recompilation__V_60_60 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 6));
#line 334 "recompilation.m"
    MR_Box recompilation__V_61_61 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 5));

#line 334 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 3))
#line 337 "recompilation.m"
      recompilation__HeadVar__3_3 = recompilation__V_63_63;
#line 334 "recompilation.m"
    else
#line 334 "recompilation.m"
      if ((recompilation__HeadVar__2_2 == (MR_Integer) 2))
#line 336 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_64_64;
#line 334 "recompilation.m"
      else
#line 334 "recompilation.m"
        if ((recompilation__HeadVar__2_2 == (MR_Integer) 0))
#line 334 "recompilation.m"
          recompilation__HeadVar__3_3 = recompilation__V_66_66;
#line 334 "recompilation.m"
        else
#line 334 "recompilation.m"
          if ((recompilation__HeadVar__2_2 == (MR_Integer) 1))
#line 335 "recompilation.m"
            recompilation__HeadVar__3_3 = recompilation__V_65_65;
#line 334 "recompilation.m"
          else
#line 338 "recompilation.m"
            recompilation__HeadVar__3_3 = recompilation__V_62_62;
#line 334 "recompilation.m"
    return recompilation__HeadVar__3_3;
#line 334 "recompilation.m"
  }
#line 213 "recompilation.m"
}

#line 206 "recompilation.m"
MR_Word MR_CALL 
recompilation__init_used_items_0_f_0(void)
#line 206 "recompilation.m"
{
#line 331 "recompilation.m"
  {
#line 331 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 331 "recompilation.m"
    MR_Word recompilation__HeadVar__1_1;
#line 331 "recompilation.m"
    MR_Word recompilation__TypeInfo_12_12 = (MR_Word) &recompilation_scalar_common_2[0];
#line 331 "recompilation.m"
    MR_Word recompilation__TypeInfo_13_13 = (MR_Word) &recompilation_scalar_common_2[1];
#line 331 "recompilation.m"
    MR_Word recompilation__V_2_2;
#line 331 "recompilation.m"
    MR_Word recompilation__V_3_3;
#line 331 "recompilation.m"
    MR_Word recompilation__V_4_4;
#line 331 "recompilation.m"
    MR_Word recompilation__V_5_5;
#line 331 "recompilation.m"
    MR_Word recompilation__V_6_6;
#line 331 "recompilation.m"
    MR_Word recompilation__V_7_7;
#line 331 "recompilation.m"
    MR_Word recompilation__V_8_8;
#line 331 "recompilation.m"
    MR_Word recompilation__V_9_9;
#line 331 "recompilation.m"
    MR_Word recompilation__V_10_10;
#line 331 "recompilation.m"
    MR_Word recompilation__V_11_11;

#line 331 "recompilation.m"
    {
#line 331 "recompilation.m"
      recompilation__V_2_2 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 331 "recompilation.m"
    {
#line 331 "recompilation.m"
      recompilation__V_3_3 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 331 "recompilation.m"
    {
#line 331 "recompilation.m"
      recompilation__V_4_4 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 331 "recompilation.m"
    {
#line 331 "recompilation.m"
      recompilation__V_5_5 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 331 "recompilation.m"
    {
#line 331 "recompilation.m"
      recompilation__V_6_6 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 331 "recompilation.m"
    {
#line 331 "recompilation.m"
      recompilation__V_7_7 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 331 "recompilation.m"
    {
#line 331 "recompilation.m"
      recompilation__V_8_8 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 331 "recompilation.m"
    {
#line 331 "recompilation.m"
      recompilation__V_9_9 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 331 "recompilation.m"
    {
#line 331 "recompilation.m"
      recompilation__V_10_10 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 331 "recompilation.m"
    {
#line 331 "recompilation.m"
      recompilation__V_11_11 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 331 "recompilation.m"
    {
#line 331 "recompilation.m"
      recompilation__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 331 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 0) = ((MR_Box) (recompilation__V_2_2));
#line 331 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 1) = ((MR_Box) (recompilation__V_3_3));
#line 331 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 2) = ((MR_Box) (recompilation__V_4_4));
#line 331 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 3) = ((MR_Box) (recompilation__V_5_5));
#line 331 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 4) = ((MR_Box) (recompilation__V_6_6));
#line 331 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 5) = ((MR_Box) (recompilation__V_7_7));
#line 331 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 6) = ((MR_Box) (recompilation__V_8_8));
#line 331 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 7) = ((MR_Box) (recompilation__V_9_9));
#line 331 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 8) = ((MR_Box) (recompilation__V_10_10));
#line 331 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 9) = ((MR_Box) (recompilation__V_11_11));
#line 331 "recompilation.m"
    }
#line 331 "recompilation.m"
    return recompilation__HeadVar__1_1;
#line 331 "recompilation.m"
  }
#line 206 "recompilation.m"
}

#line 182 "recompilation.m"
MR_Word MR_CALL 
recompilation__init_item_id_set_3_f_0(
#line 182 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Simple_15,
#line 182 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_PorF_16,
#line 182 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Cons_17,
#line 182 "recompilation.m"
  MR_Box recompilation__Simple_5,
#line 182 "recompilation.m"
  MR_Box recompilation__PorF_6,
#line 182 "recompilation.m"
  MR_Box recompilation__Cons_7)
#line 182 "recompilation.m"
{
#line 327 "recompilation.m"
  {
#line 327 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 327 "recompilation.m"
    MR_Word recompilation__HeadVar__4_4;

#line 327 "recompilation.m"
    {
#line 327 "recompilation.m"
      recompilation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 327 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 0) = recompilation__Simple_5;
#line 327 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 1) = recompilation__Simple_5;
#line 327 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 2) = recompilation__Simple_5;
#line 327 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 3) = recompilation__Simple_5;
#line 327 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 4) = recompilation__Simple_5;
#line 327 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 5) = recompilation__Cons_7;
#line 327 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 6) = recompilation__PorF_6;
#line 327 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 7) = recompilation__PorF_6;
#line 327 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 8) = recompilation__PorF_6;
#line 327 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 9) = recompilation__PorF_6;
#line 327 "recompilation.m"
    }
#line 327 "recompilation.m"
    return recompilation__HeadVar__4_4;
#line 327 "recompilation.m"
  }
#line 182 "recompilation.m"
}

#line 180 "recompilation.m"
MR_Word MR_CALL 
recompilation__init_item_id_set_1_f_0(
#line 180 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_13,
#line 180 "recompilation.m"
  MR_Box recompilation__Init_3)
#line 180 "recompilation.m"
{
#line 324 "recompilation.m"
  {
#line 324 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 324 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;

#line 324 "recompilation.m"
    {
#line 324 "recompilation.m"
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 324 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = recompilation__Init_3;
#line 324 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = recompilation__Init_3;
#line 324 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 2) = recompilation__Init_3;
#line 324 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 3) = recompilation__Init_3;
#line 324 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 4) = recompilation__Init_3;
#line 324 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 5) = recompilation__Init_3;
#line 324 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 6) = recompilation__Init_3;
#line 324 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 7) = recompilation__Init_3;
#line 324 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 8) = recompilation__Init_3;
#line 324 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 9) = recompilation__Init_3;
#line 324 "recompilation.m"
    }
#line 324 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 324 "recompilation.m"
  }
#line 180 "recompilation.m"
}

#line 159 "recompilation.m"
void MR_CALL 
recompilation__record_expanded_items_4_p_0(
#line 159 "recompilation.m"
  MR_Word recompilation__Item_5,
#line 159 "recompilation.m"
  MR_Word recompilation__ExpandedItems_6,
#line 159 "recompilation.m"
  MR_Word recompilation__STATE_VARIABLE_Info_0_13,
#line 159 "recompilation.m"
  MR_Word * recompilation__STATE_VARIABLE_Info_14)
#line 159 "recompilation.m"
{
#line 451 "recompilation.m"
  {
#line 451 "recompilation.m"
    MR_bool recompilation__succeeded;

#line 449 "recompilation.m"
    {
#line 449 "recompilation.m"
      recompilation__succeeded = mercury__set__empty_1_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, recompilation__ExpandedItems_6);
    }
#line 451 "recompilation.m"
    if (recompilation__succeeded)
#line 449 "recompilation.m"
      *recompilation__STATE_VARIABLE_Info_14 = recompilation__STATE_VARIABLE_Info_0_13;
#line 451 "recompilation.m"
    else
#line 452 "recompilation.m"
      {
#line 452 "recompilation.m"
        MR_Word recompilation__TypeCtorInfo_27_27;
#line 452 "recompilation.m"
        MR_Word recompilation__DepsMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 452 "recompilation.m"
        MR_Word recompilation__Deps1_10;
#line 452 "recompilation.m"
        MR_Word recompilation__Deps_11;
#line 452 "recompilation.m"
        MR_Word recompilation__DepsMap_12;
#line 452 "recompilation.m"
        MR_Word recompilation__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 452 "recompilation.m"
        MR_Word recompilation__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 452 "recompilation.m"
        MR_Word recompilation__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 455 "recompilation.m"
        MR_Word recompilation__Deps0_9;
#line 453 "recompilation.m"
        MR_Box recompilation__conv0_Deps0_9;
#line 460 "recompilation.m"
        MR_Word recompilation__V_19_19;
#line 460 "recompilation.m"
        MR_Word recompilation__V_20_20;
#line 460 "recompilation.m"
        MR_Word recompilation__V_22_22;
#line 460 "recompilation.m"
        MR_Word recompilation__V_21_21;

#line 453 "recompilation.m"
        {
#line 453 "recompilation.m"
          recompilation__succeeded = mercury__map__search_3_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, (MR_Word) &recompilation_scalar_common_1[0], recompilation__DepsMap0_8, ((MR_Box) (recompilation__Item_5)), &recompilation__conv0_Deps0_9);
        }
#line 453 "recompilation.m"
        if (recompilation__succeeded)
#line 453 "recompilation.m"
          {
#line 453 "recompilation.m"
            recompilation__Deps0_9 = ((MR_Word) recompilation__conv0_Deps0_9);
#line 453 "recompilation.m"
            recompilation__succeeded = MR_TRUE;
#line 453 "recompilation.m"
          }
#line 455 "recompilation.m"
        if (recompilation__succeeded)
#line 454 "recompilation.m"
          recompilation__Deps1_10 = recompilation__Deps0_9;
#line 455 "recompilation.m"
        else
#line 456 "recompilation.m"
          {
#line 456 "recompilation.m"
            {
#line 456 "recompilation.m"
              mercury__set__init_1_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, &recompilation__Deps1_10);
            }
#line 456 "recompilation.m"
          }
#line 5775 "recompilation.c"
        recompilation__TypeCtorInfo_27_27 = (MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0;
#line 458 "recompilation.m"
        {
#line 458 "recompilation.m"
          mercury__set__union_3_p_0(recompilation__TypeCtorInfo_27_27, recompilation__Deps1_10, recompilation__ExpandedItems_6, &recompilation__Deps_11);
        }
#line 459 "recompilation.m"
        {
#line 459 "recompilation.m"
          mercury__map__set_4_p_0(recompilation__TypeCtorInfo_27_27, (MR_Word) &recompilation_scalar_common_1[0], ((MR_Box) (recompilation__Item_5)), ((MR_Box) (recompilation__Deps_11)), recompilation__DepsMap0_8, &recompilation__DepsMap_12);
        }
#line 460 "recompilation.m"
        recompilation__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 460 "recompilation.m"
        recompilation__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 460 "recompilation.m"
        recompilation__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 460 "recompilation.m"
        recompilation__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 460 "recompilation.m"
        {
#line 460 "recompilation.m"
          MR_Word base;
#line 460 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 460 "recompilation.m"
          *recompilation__STATE_VARIABLE_Info_14 = base;
#line 460 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__V_19_19));
#line 460 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__V_20_20));
#line 460 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recompilation__DepsMap_12));
#line 460 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (recompilation__V_22_22));
#line 460 "recompilation.m"
        }
#line 452 "recompilation.m"
      }
#line 451 "recompilation.m"
  }
#line 159 "recompilation.m"
}

#line 145 "recompilation.m"
void MR_CALL 
recompilation__record_used_item_5_p_0(
#line 145 "recompilation.m"
  MR_Word recompilation__ItemType_6,
#line 145 "recompilation.m"
  MR_Word recompilation__Id_7,
#line 145 "recompilation.m"
  MR_Word recompilation__QualifiedId_8,
#line 145 "recompilation.m"
  MR_Word recompilation__STATE_VARIABLE_Info_0_26,
#line 145 "recompilation.m"
  MR_Word * recompilation__STATE_VARIABLE_Info_27)
#line 145 "recompilation.m"
{
#line 412 "recompilation.m"
  {
#line 412 "recompilation.m"
    MR_bool recompilation__succeeded = (recompilation__ItemType_6 == (MR_Integer) 6);
#line 412 "recompilation.m"
    MR_Word recompilation__QualifiedName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__QualifiedId_8, (MR_Integer) 0)));
#line 412 "recompilation.m"
    MR_Integer recompilation__Arity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__QualifiedId_8, (MR_Integer) 1)));
#line 421 "recompilation.m"
    MR_String recompilation__V_12_12;

#line 418 "recompilation.m"
    recompilation__succeeded = !(recompilation__succeeded);
#line 418 "recompilation.m"
    if (recompilation__succeeded)
#line 418 "recompilation.m"
      {
#line 419 "recompilation.m"
        recompilation__succeeded = (recompilation__ItemType_6 == (MR_Integer) 7);
#line 419 "recompilation.m"
        recompilation__succeeded = !(recompilation__succeeded);
#line 418 "recompilation.m"
        if (recompilation__succeeded)
#line 418 "recompilation.m"
          {
#line 420 "recompilation.m"
            recompilation__succeeded = (recompilation__ItemType_6 == (MR_Integer) 5);
#line 420 "recompilation.m"
            recompilation__succeeded = !(recompilation__succeeded);
#line 418 "recompilation.m"
            if (recompilation__succeeded)
#line 418 "recompilation.m"
              {
#line 421 "recompilation.m"
                recompilation__succeeded = ((MR_tag((MR_Word) recompilation__QualifiedName_10)) == (MR_mktag((MR_Integer) 0)));
#line 421 "recompilation.m"
                if (recompilation__succeeded)
#line 421 "recompilation.m"
                  recompilation__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__QualifiedName_10, (MR_Integer) 0)));
#line 418 "recompilation.m"
              }
#line 418 "recompilation.m"
          }
#line 418 "recompilation.m"
      }
#line 424 "recompilation.m"
    if (recompilation__succeeded)
#line 421 "recompilation.m"
      *recompilation__STATE_VARIABLE_Info_27 = recompilation__STATE_VARIABLE_Info_0_26;
#line 424 "recompilation.m"
    else
#line 425 "recompilation.m"
      {
#line 425 "recompilation.m"
        MR_Word recompilation__TypeInfo_36_36 = (MR_Word) &recompilation_scalar_common_2[2];
#line 425 "recompilation.m"
        MR_Word recompilation__ItemSet0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 1)));
#line 425 "recompilation.m"
        MR_Word recompilation__IdSet0_14;
#line 425 "recompilation.m"
        MR_String recompilation__UnqualifiedName_15;
#line 425 "recompilation.m"
        MR_Word recompilation__ModuleName_16;
#line 425 "recompilation.m"
        MR_Word recompilation__UnqualifiedId_17;
#line 425 "recompilation.m"
        MR_Word recompilation__SymName_18;
#line 425 "recompilation.m"
        MR_Word recompilation__ModuleQualifier_20;
#line 425 "recompilation.m"
        MR_Word recompilation__MatchingNames1_22;
#line 425 "recompilation.m"
        MR_Word recompilation__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 0)));
#line 425 "recompilation.m"
        MR_Word recompilation__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 2)));
#line 425 "recompilation.m"
        MR_Word recompilation__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 3)));
#line 426 "recompilation.m"
        MR_Box recompilation__conv0_IdSet0_14;
#line 430 "recompilation.m"
        MR_Integer recompilation__V_19_19;
#line 434 "recompilation.m"
        MR_Word recompilation__MatchingNames0_21;
#line 432 "recompilation.m"
        MR_Box recompilation__conv1_MatchingNames0_21;
#line 437 "recompilation.m"
        MR_Word recompilation__TypeCtorInfo_40_40;

#line 426 "recompilation.m"
        {
#line 426 "recompilation.m"
          recompilation__conv0_IdSet0_14 = recompilation__extract_ids_2_f_0(recompilation__TypeInfo_36_36, recompilation__ItemSet0_13, recompilation__ItemType_6);
        }
#line 426 "recompilation.m"
        recompilation__IdSet0_14 = ((MR_Word) recompilation__conv0_IdSet0_14);
#line 427 "recompilation.m"
        {
#line 427 "recompilation.m"
          recompilation__UnqualifiedName_15 = mdbcomp__prim_data__unqualify_name_1_f_0(recompilation__QualifiedName_10);
        }
#line 392 "recompilation.m"
        if (((MR_tag((MR_Word) recompilation__QualifiedName_10)) == (MR_mktag((MR_Integer) 1))))
#line 393 "recompilation.m"
          {
#line 393 "recompilation.m"
            MR_String recompilation__V_47_47;

#line 393 "recompilation.m"
            recompilation__ModuleName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__QualifiedName_10, (MR_Integer) 0)));
#line 393 "recompilation.m"
            recompilation__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__QualifiedName_10, (MR_Integer) 1)));
#line 393 "recompilation.m"
          }
#line 392 "recompilation.m"
        else
#line 392 "recompilation.m"
          {
#line 392 "recompilation.m"
            recompilation__ModuleName_16 = (MR_Word) &recompilation_scalar_common_4[0];
#line 392 "recompilation.m"
          }
#line 429 "recompilation.m"
        {
#line 429 "recompilation.m"
          recompilation__UnqualifiedId_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 429 "recompilation.m"
          MR_hl_field(MR_mktag(0), recompilation__UnqualifiedId_17, 0) = ((MR_Box) (recompilation__UnqualifiedName_15));
#line 429 "recompilation.m"
          MR_hl_field(MR_mktag(0), recompilation__UnqualifiedId_17, 1) = ((MR_Box) (recompilation__Arity_11));
#line 429 "recompilation.m"
        }
#line 430 "recompilation.m"
        recompilation__SymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__Id_7, (MR_Integer) 0)));
#line 430 "recompilation.m"
        recompilation__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__Id_7, (MR_Integer) 1)));
#line 392 "recompilation.m"
        if (((MR_tag((MR_Word) recompilation__SymName_18)) == (MR_mktag((MR_Integer) 1))))
#line 393 "recompilation.m"
          {
#line 393 "recompilation.m"
            MR_String recompilation__V_51_51;

#line 393 "recompilation.m"
            recompilation__ModuleQualifier_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__SymName_18, (MR_Integer) 0)));
#line 393 "recompilation.m"
            recompilation__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__SymName_18, (MR_Integer) 1)));
#line 393 "recompilation.m"
          }
#line 392 "recompilation.m"
        else
#line 392 "recompilation.m"
          {
#line 392 "recompilation.m"
            recompilation__ModuleQualifier_20 = (MR_Word) &recompilation_scalar_common_4[0];
#line 392 "recompilation.m"
          }
#line 432 "recompilation.m"
        {
#line 432 "recompilation.m"
          recompilation__succeeded = mercury__map__search_3_p_0((MR_Word) &recompilation_scalar_common_2[0], (MR_Word) &recompilation_scalar_common_2[1], recompilation__IdSet0_14, ((MR_Box) (recompilation__UnqualifiedId_17)), &recompilation__conv1_MatchingNames0_21);
        }
#line 432 "recompilation.m"
        if (recompilation__succeeded)
#line 432 "recompilation.m"
          {
#line 432 "recompilation.m"
            recompilation__MatchingNames0_21 = ((MR_Word) recompilation__conv1_MatchingNames0_21);
#line 432 "recompilation.m"
            recompilation__succeeded = MR_TRUE;
#line 432 "recompilation.m"
          }
#line 434 "recompilation.m"
        if (recompilation__succeeded)
#line 433 "recompilation.m"
          recompilation__MatchingNames1_22 = recompilation__MatchingNames0_21;
#line 434 "recompilation.m"
        else
#line 435 "recompilation.m"
          {
#line 435 "recompilation.m"
            MR_Word recompilation__TypeCtorInfo_39_39 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;

#line 435 "recompilation.m"
            {
#line 435 "recompilation.m"
              mercury__map__init_1_p_0(recompilation__TypeCtorInfo_39_39, recompilation__TypeCtorInfo_39_39, &recompilation__MatchingNames1_22);
            }
#line 435 "recompilation.m"
          }
#line 6024 "recompilation.c"
        recompilation__TypeCtorInfo_40_40 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 437 "recompilation.m"
        {
#line 437 "recompilation.m"
          recompilation__succeeded = mercury__map__contains_2_p_0(recompilation__TypeCtorInfo_40_40, recompilation__TypeCtorInfo_40_40, recompilation__MatchingNames1_22, ((MR_Box) (recompilation__ModuleQualifier_20)));
        }
#line 439 "recompilation.m"
        if (recompilation__succeeded)
#line 437 "recompilation.m"
          *recompilation__STATE_VARIABLE_Info_27 = recompilation__STATE_VARIABLE_Info_0_26;
#line 439 "recompilation.m"
        else
#line 441 "recompilation.m"
          {
#line 441 "recompilation.m"
            MR_Word recompilation__TypeCtorInfo_41_41 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 441 "recompilation.m"
            MR_Word recompilation__MatchingNames_23;
#line 441 "recompilation.m"
            MR_Word recompilation__IdSet_24;
#line 441 "recompilation.m"
            MR_Word recompilation__ItemSet_25;
#line 444 "recompilation.m"
            MR_Word recompilation__V_32_32;
#line 444 "recompilation.m"
            MR_Word recompilation__V_34_34;
#line 444 "recompilation.m"
            MR_Word recompilation__V_35_35;
#line 444 "recompilation.m"
            MR_Word recompilation__V_33_33;

#line 440 "recompilation.m"
            {
#line 440 "recompilation.m"
              mercury__map__det_insert_4_p_0(recompilation__TypeCtorInfo_41_41, recompilation__TypeCtorInfo_41_41, ((MR_Box) (recompilation__ModuleQualifier_20)), ((MR_Box) (recompilation__ModuleName_16)), recompilation__MatchingNames1_22, &recompilation__MatchingNames_23);
            }
#line 442 "recompilation.m"
            {
#line 442 "recompilation.m"
              mercury__map__set_4_p_0((MR_Word) &recompilation_scalar_common_2[0], (MR_Word) &recompilation_scalar_common_2[1], ((MR_Box) (recompilation__UnqualifiedId_17)), ((MR_Box) (recompilation__MatchingNames_23)), recompilation__IdSet0_14, &recompilation__IdSet_24);
            }
#line 443 "recompilation.m"
            {
#line 443 "recompilation.m"
              recompilation__ItemSet_25 = recompilation__update_ids_3_f_0(recompilation__TypeInfo_36_36, recompilation__ItemSet0_13, recompilation__ItemType_6, ((MR_Box) (recompilation__IdSet_24)));
            }
#line 444 "recompilation.m"
            recompilation__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 0)));
#line 444 "recompilation.m"
            recompilation__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 1)));
#line 444 "recompilation.m"
            recompilation__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 2)));
#line 444 "recompilation.m"
            recompilation__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 3)));
#line 444 "recompilation.m"
            {
#line 444 "recompilation.m"
              MR_Word base;
#line 444 "recompilation.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 444 "recompilation.m"
              *recompilation__STATE_VARIABLE_Info_27 = base;
#line 444 "recompilation.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__V_32_32));
#line 444 "recompilation.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__ItemSet_25));
#line 444 "recompilation.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recompilation__V_34_34));
#line 444 "recompilation.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (recompilation__V_35_35));
#line 444 "recompilation.m"
            }
#line 441 "recompilation.m"
          }
#line 425 "recompilation.m"
      }
#line 412 "recompilation.m"
  }
#line 145 "recompilation.m"
}

#line 136 "recompilation.m"
MR_Word MR_CALL 
recompilation__init_recompilation_info_1_f_0(
#line 136 "recompilation.m"
  MR_Word recompilation__ModuleName_3)
#line 136 "recompilation.m"
{
#line 404 "recompilation.m"
  {
#line 404 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 404 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;
#line 404 "recompilation.m"
    MR_Word recompilation__V_4_4;
#line 404 "recompilation.m"
    MR_Word recompilation__V_5_5;
#line 404 "recompilation.m"
    MR_Word recompilation__V_6_6;

#line 405 "recompilation.m"
    {
#line 405 "recompilation.m"
      recompilation__V_4_4 = recompilation__init_used_items_0_f_0();
    }
#line 405 "recompilation.m"
    {
#line 405 "recompilation.m"
      recompilation__V_5_5 = mercury__map__init_0_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, (MR_Word) &recompilation_scalar_common_1[0]);
    }
#line 405 "recompilation.m"
    {
#line 405 "recompilation.m"
      recompilation__V_6_6 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0);
    }
#line 404 "recompilation.m"
    {
#line 404 "recompilation.m"
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 404 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = ((MR_Box) (recompilation__ModuleName_3));
#line 404 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = ((MR_Box) (recompilation__V_4_4));
#line 404 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 2) = ((MR_Box) (recompilation__V_5_5));
#line 404 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 3) = ((MR_Box) (recompilation__V_6_6));
#line 404 "recompilation.m"
    }
#line 404 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 404 "recompilation.m"
  }
#line 136 "recompilation.m"
}

#line 115 "recompilation.m"
MR_Word MR_CALL 
recompilation__item_name_to_mode_id_1_f_0(
#line 115 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 115 "recompilation.m"
{
#line 320 "recompilation.m"
  {
#line 320 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 320 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;
#line 320 "recompilation.m"
    MR_Word recompilation__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 320 "recompilation.m"
    MR_Integer recompilation__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));

#line 320 "recompilation.m"
    {
#line 320 "recompilation.m"
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 320 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = ((MR_Box) (recompilation__SymName_3));
#line 320 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = ((MR_Box) (recompilation__Arity_4));
#line 320 "recompilation.m"
    }
#line 320 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 320 "recompilation.m"
  }
#line 115 "recompilation.m"
}

#line 114 "recompilation.m"
MR_Word MR_CALL 
recompilation__item_name_to_inst_id_1_f_0(
#line 114 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 114 "recompilation.m"
{
#line 319 "recompilation.m"
  {
#line 319 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 319 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;
#line 319 "recompilation.m"
    MR_Word recompilation__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 319 "recompilation.m"
    MR_Integer recompilation__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));

#line 319 "recompilation.m"
    {
#line 319 "recompilation.m"
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 319 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = ((MR_Box) (recompilation__SymName_3));
#line 319 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = ((MR_Box) (recompilation__Arity_4));
#line 319 "recompilation.m"
    }
#line 319 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 319 "recompilation.m"
  }
#line 114 "recompilation.m"
}

#line 113 "recompilation.m"
MR_Word MR_CALL 
recompilation__item_name_to_type_ctor_1_f_0(
#line 113 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 113 "recompilation.m"
{
#line 318 "recompilation.m"
  {
#line 318 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 318 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;
#line 318 "recompilation.m"
    MR_Word recompilation__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 318 "recompilation.m"
    MR_Integer recompilation__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));

#line 318 "recompilation.m"
    {
#line 318 "recompilation.m"
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 318 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = ((MR_Box) (recompilation__SymName_3));
#line 318 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = ((MR_Box) (recompilation__Arity_4));
#line 318 "recompilation.m"
    }
#line 318 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 318 "recompilation.m"
  }
#line 113 "recompilation.m"
}

#line 111 "recompilation.m"
MR_Word MR_CALL 
recompilation__mode_id_to_item_name_1_f_0(
#line 111 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 111 "recompilation.m"
{
#line 316 "recompilation.m"
  {
#line 316 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 316 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;
#line 316 "recompilation.m"
    MR_Word recompilation__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 316 "recompilation.m"
    MR_Integer recompilation__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));

#line 316 "recompilation.m"
    {
#line 316 "recompilation.m"
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 316 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = ((MR_Box) (recompilation__SymName_3));
#line 316 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = ((MR_Box) (recompilation__Arity_4));
#line 316 "recompilation.m"
    }
#line 316 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 316 "recompilation.m"
  }
#line 111 "recompilation.m"
}

#line 110 "recompilation.m"
MR_Word MR_CALL 
recompilation__inst_id_to_item_name_1_f_0(
#line 110 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 110 "recompilation.m"
{
#line 315 "recompilation.m"
  {
#line 315 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 315 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;
#line 315 "recompilation.m"
    MR_Word recompilation__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 315 "recompilation.m"
    MR_Integer recompilation__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));

#line 315 "recompilation.m"
    {
#line 315 "recompilation.m"
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 315 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = ((MR_Box) (recompilation__SymName_3));
#line 315 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = ((MR_Box) (recompilation__Arity_4));
#line 315 "recompilation.m"
    }
#line 315 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 315 "recompilation.m"
  }
#line 110 "recompilation.m"
}

#line 109 "recompilation.m"
MR_Word MR_CALL 
recompilation__type_ctor_to_item_name_1_f_0(
#line 109 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 109 "recompilation.m"
{
#line 314 "recompilation.m"
  {
#line 314 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 314 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;
#line 314 "recompilation.m"
    MR_Word recompilation__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 314 "recompilation.m"
    MR_Integer recompilation__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));

#line 314 "recompilation.m"
    {
#line 314 "recompilation.m"
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 314 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = ((MR_Box) (recompilation__SymName_3));
#line 314 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = ((MR_Box) (recompilation__Arity_4));
#line 314 "recompilation.m"
    }
#line 314 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 314 "recompilation.m"
  }
#line 109 "recompilation.m"
}

#line 106 "recompilation.m"
MR_Word MR_CALL 
recompilation__pred_or_func_to_item_type_1_f_0(
#line 106 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 106 "recompilation.m"
{
#line 291 "recompilation.m"
  {
#line 291 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 291 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;

#line 291 "recompilation.m"
    if ((recompilation__HeadVar__1_1 == (MR_Integer) 1))
#line 292 "recompilation.m"
      recompilation__HeadVar__2_2 = (MR_Integer) 7;
#line 291 "recompilation.m"
    else
#line 291 "recompilation.m"
      recompilation__HeadVar__2_2 = (MR_Integer) 6;
#line 291 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 291 "recompilation.m"
  }
#line 106 "recompilation.m"
}

#line 104 "recompilation.m"
void MR_CALL 
recompilation__string_to_item_type_2_p_1(
#line 104 "recompilation.m"
  MR_String * recompilation__HeadVar__1_1,
#line 104 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 104 "recompilation.m"
{
#line 303 "recompilation.m"
  {
#line 303 "recompilation.m"
    MR_bool recompilation__succeeded;

#line 303 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 9))
#line 312 "recompilation.m"
      *recompilation__HeadVar__1_1 = (MR_String) "foreign_proc";
#line 303 "recompilation.m"
    else
#line 303 "recompilation.m"
      if ((recompilation__HeadVar__2_2 == (MR_Integer) 7))
#line 309 "recompilation.m"
        *recompilation__HeadVar__1_1 = (MR_String) "function";
#line 303 "recompilation.m"
      else
#line 303 "recompilation.m"
        if ((recompilation__HeadVar__2_2 == (MR_Integer) 5))
#line 310 "recompilation.m"
          *recompilation__HeadVar__1_1 = (MR_String) "functor";
#line 303 "recompilation.m"
        else
#line 303 "recompilation.m"
          if ((recompilation__HeadVar__2_2 == (MR_Integer) 3))
#line 305 "recompilation.m"
            *recompilation__HeadVar__1_1 = (MR_String) "inst";
#line 303 "recompilation.m"
          else
#line 303 "recompilation.m"
            if ((recompilation__HeadVar__2_2 == (MR_Integer) 2))
#line 306 "recompilation.m"
              *recompilation__HeadVar__1_1 = (MR_String) "mode";
#line 303 "recompilation.m"
            else
#line 303 "recompilation.m"
              if ((recompilation__HeadVar__2_2 == (MR_Integer) 8))
#line 311 "recompilation.m"
                *recompilation__HeadVar__1_1 = (MR_String) "mutable";
#line 303 "recompilation.m"
              else
#line 303 "recompilation.m"
                if ((recompilation__HeadVar__2_2 == (MR_Integer) 6))
#line 308 "recompilation.m"
                  *recompilation__HeadVar__1_1 = (MR_String) "predicate";
#line 303 "recompilation.m"
                else
#line 303 "recompilation.m"
                  if ((recompilation__HeadVar__2_2 == (MR_Integer) 0))
#line 303 "recompilation.m"
                    *recompilation__HeadVar__1_1 = (MR_String) "type";
#line 303 "recompilation.m"
                  else
#line 303 "recompilation.m"
                    if ((recompilation__HeadVar__2_2 == (MR_Integer) 1))
#line 304 "recompilation.m"
                      *recompilation__HeadVar__1_1 = (MR_String) "type_body";
#line 303 "recompilation.m"
                    else
#line 307 "recompilation.m"
                      *recompilation__HeadVar__1_1 = (MR_String) "typeclass";
#line 303 "recompilation.m"
  }
#line 104 "recompilation.m"
}

#line 103 "recompilation.m"
MR_bool MR_CALL 
recompilation__string_to_item_type_2_p_0(
#line 103 "recompilation.m"
  MR_String recompilation__HeadVar__1_1,
#line 103 "recompilation.m"
  MR_Word * recompilation__HeadVar__2_2)
#line 103 "recompilation.m"
{
#line 303 "recompilation.m"
  {
#line 303 "recompilation.m"
    MR_bool recompilation__succeeded;

#line 303 "recompilation.m"
    if ((strcmp(recompilation__HeadVar__1_1, (MR_String) "inst") == 0))
#line 305 "recompilation.m"
      {
#line 305 "recompilation.m"
        *recompilation__HeadVar__2_2 = (MR_Integer) 3;
#line 305 "recompilation.m"
        recompilation__succeeded = MR_TRUE;
#line 305 "recompilation.m"
      }
#line 303 "recompilation.m"
    else
#line 303 "recompilation.m"
      if ((strcmp(recompilation__HeadVar__1_1, (MR_String) "mode") == 0))
#line 306 "recompilation.m"
        {
#line 306 "recompilation.m"
          *recompilation__HeadVar__2_2 = (MR_Integer) 2;
#line 306 "recompilation.m"
          recompilation__succeeded = MR_TRUE;
#line 306 "recompilation.m"
        }
#line 303 "recompilation.m"
      else
#line 303 "recompilation.m"
        if ((strcmp(recompilation__HeadVar__1_1, (MR_String) "type") == 0))
#line 303 "recompilation.m"
          {
#line 303 "recompilation.m"
            *recompilation__HeadVar__2_2 = (MR_Integer) 0;
#line 303 "recompilation.m"
            recompilation__succeeded = MR_TRUE;
#line 303 "recompilation.m"
          }
#line 303 "recompilation.m"
        else
#line 303 "recompilation.m"
          if ((strcmp(recompilation__HeadVar__1_1, (MR_String) "functor") == 0))
#line 310 "recompilation.m"
            {
#line 310 "recompilation.m"
              *recompilation__HeadVar__2_2 = (MR_Integer) 5;
#line 310 "recompilation.m"
              recompilation__succeeded = MR_TRUE;
#line 310 "recompilation.m"
            }
#line 303 "recompilation.m"
          else
#line 303 "recompilation.m"
            if ((strcmp(recompilation__HeadVar__1_1, (MR_String) "mutable") == 0))
#line 311 "recompilation.m"
              {
#line 311 "recompilation.m"
                *recompilation__HeadVar__2_2 = (MR_Integer) 8;
#line 311 "recompilation.m"
                recompilation__succeeded = MR_TRUE;
#line 311 "recompilation.m"
              }
#line 303 "recompilation.m"
            else
#line 303 "recompilation.m"
              if ((strcmp(recompilation__HeadVar__1_1, (MR_String) "function") == 0))
#line 309 "recompilation.m"
                {
#line 309 "recompilation.m"
                  *recompilation__HeadVar__2_2 = (MR_Integer) 7;
#line 309 "recompilation.m"
                  recompilation__succeeded = MR_TRUE;
#line 309 "recompilation.m"
                }
#line 303 "recompilation.m"
              else
#line 303 "recompilation.m"
                if ((strcmp(recompilation__HeadVar__1_1, (MR_String) "predicate") == 0))
#line 308 "recompilation.m"
                  {
#line 308 "recompilation.m"
                    *recompilation__HeadVar__2_2 = (MR_Integer) 6;
#line 308 "recompilation.m"
                    recompilation__succeeded = MR_TRUE;
#line 308 "recompilation.m"
                  }
#line 303 "recompilation.m"
                else
#line 303 "recompilation.m"
                  if ((strcmp(recompilation__HeadVar__1_1, (MR_String) "type_body") == 0))
#line 304 "recompilation.m"
                    {
#line 304 "recompilation.m"
                      *recompilation__HeadVar__2_2 = (MR_Integer) 1;
#line 304 "recompilation.m"
                      recompilation__succeeded = MR_TRUE;
#line 304 "recompilation.m"
                    }
#line 303 "recompilation.m"
                  else
#line 303 "recompilation.m"
                    if ((strcmp(recompilation__HeadVar__1_1, (MR_String) "typeclass") == 0))
#line 307 "recompilation.m"
                      {
#line 307 "recompilation.m"
                        *recompilation__HeadVar__2_2 = (MR_Integer) 4;
#line 307 "recompilation.m"
                        recompilation__succeeded = MR_TRUE;
#line 307 "recompilation.m"
                      }
#line 303 "recompilation.m"
                    else
#line 303 "recompilation.m"
                      if ((strcmp(recompilation__HeadVar__1_1, (MR_String) "foreign_proc") == 0))
#line 312 "recompilation.m"
                        {
#line 312 "recompilation.m"
                          *recompilation__HeadVar__2_2 = (MR_Integer) 9;
#line 312 "recompilation.m"
                          recompilation__succeeded = MR_TRUE;
#line 312 "recompilation.m"
                        }
#line 303 "recompilation.m"
                      else
#line 303 "recompilation.m"
                        recompilation__succeeded = MR_FALSE;
#line 303 "recompilation.m"
    return recompilation__succeeded;
#line 303 "recompilation.m"
  }
#line 103 "recompilation.m"
}

#line 99 "recompilation.m"
MR_bool MR_CALL 
recompilation__is_pred_or_func_item_type_1_p_0(
#line 99 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 99 "recompilation.m"
{
#line 300 "recompilation.m"
  {
#line 300 "recompilation.m"
    MR_bool recompilation__succeeded;

#line 300 "recompilation.m"
    if ((recompilation__HeadVar__1_1 == (MR_Integer) 7))
#line 301 "recompilation.m"
      recompilation__succeeded = MR_TRUE;
#line 300 "recompilation.m"
    else
#line 300 "recompilation.m"
      if ((recompilation__HeadVar__1_1 == (MR_Integer) 6))
#line 300 "recompilation.m"
        recompilation__succeeded = MR_TRUE;
#line 300 "recompilation.m"
      else
#line 300 "recompilation.m"
        recompilation__succeeded = MR_FALSE;
#line 300 "recompilation.m"
    return recompilation__succeeded;
#line 300 "recompilation.m"
  }
#line 99 "recompilation.m"
}

#line 97 "recompilation.m"
MR_bool MR_CALL 
recompilation__is_simple_item_type_1_p_0(
#line 97 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 97 "recompilation.m"
{
#line 294 "recompilation.m"
  {
#line 294 "recompilation.m"
    MR_bool recompilation__succeeded;

#line 294 "recompilation.m"
    if ((recompilation__HeadVar__1_1 == (MR_Integer) 3))
#line 296 "recompilation.m"
      recompilation__succeeded = MR_TRUE;
#line 294 "recompilation.m"
    else
#line 294 "recompilation.m"
      if ((recompilation__HeadVar__1_1 == (MR_Integer) 2))
#line 297 "recompilation.m"
        recompilation__succeeded = MR_TRUE;
#line 294 "recompilation.m"
      else
#line 294 "recompilation.m"
        if ((recompilation__HeadVar__1_1 == (MR_Integer) 0))
#line 294 "recompilation.m"
          recompilation__succeeded = MR_TRUE;
#line 294 "recompilation.m"
        else
#line 294 "recompilation.m"
          if ((recompilation__HeadVar__1_1 == (MR_Integer) 1))
#line 295 "recompilation.m"
            recompilation__succeeded = MR_TRUE;
#line 294 "recompilation.m"
          else
#line 294 "recompilation.m"
            if ((recompilation__HeadVar__1_1 == (MR_Integer) 4))
#line 298 "recompilation.m"
              recompilation__succeeded = MR_TRUE;
#line 294 "recompilation.m"
            else
#line 294 "recompilation.m"
              recompilation__succeeded = MR_FALSE;
#line 294 "recompilation.m"
    return recompilation__succeeded;
#line 294 "recompilation.m"
  }
#line 97 "recompilation.m"
}

#line 58 "recompilation.m"
MR_bool MR_CALL 
recompilation__term_to_timestamp_1_f_0(
#line 58 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_7,
#line 58 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 58 "recompilation.m"
  MR_Word * recompilation__HeadVar__2_2)
#line 58 "recompilation.m"
{
#line 281 "recompilation.m"
  {
#line 281 "recompilation.m"
    MR_bool recompilation__succeeded = ((MR_tag((MR_Word) recompilation__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 281 "recompilation.m"
    MR_String recompilation__TimestampString_3;
#line 281 "recompilation.m"
    MR_Word recompilation__V_5_5;
#line 281 "recompilation.m"
    MR_Word recompilation__V_6_6;
#line 281 "recompilation.m"
    MR_Word recompilation__V_4_4;

#line 281 "recompilation.m"
    if (recompilation__succeeded)
#line 281 "recompilation.m"
      {
#line 281 "recompilation.m"
        recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 281 "recompilation.m"
        recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));
#line 281 "recompilation.m"
        recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 2)));
#line 281 "recompilation.m"
        recompilation__succeeded = ((MR_tag((MR_Word) recompilation__V_5_5)) == (MR_mktag((MR_Integer) 2)));
#line 281 "recompilation.m"
        if (recompilation__succeeded)
#line 281 "recompilation.m"
          {
#line 281 "recompilation.m"
            recompilation__TimestampString_3 = ((MR_String) (MR_hl_field(MR_mktag(2), recompilation__V_5_5, (MR_Integer) 0)));
#line 281 "recompilation.m"
            recompilation__succeeded = (recompilation__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 281 "recompilation.m"
            if (recompilation__succeeded)
#line 281 "recompilation.m"
              {
#line 281 "recompilation.m"
                return recompilation__succeeded = libs__timestamp__string_to_timestamp_1_f_0(recompilation__TimestampString_3, recompilation__HeadVar__2_2);
              }
#line 281 "recompilation.m"
          }
#line 281 "recompilation.m"
      }
#line 281 "recompilation.m"
    return recompilation__succeeded;
#line 281 "recompilation.m"
  }
#line 58 "recompilation.m"
}

#line 56 "recompilation.m"
MR_bool MR_CALL 
recompilation__term_to_version_number_1_f_0(
#line 56 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_4,
#line 56 "recompilation.m"
  MR_Word recompilation__Term_3,
#line 56 "recompilation.m"
  MR_Word * recompilation__HeadVar__2_2)
#line 56 "recompilation.m"
{
#line 281 "recompilation.m"
  {
#line 281 "recompilation.m"
    MR_bool recompilation__succeeded = ((MR_tag((MR_Word) recompilation__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 281 "recompilation.m"
    MR_String recompilation__TimestampString_5;
#line 281 "recompilation.m"
    MR_Word recompilation__V_7_7;
#line 281 "recompilation.m"
    MR_Word recompilation__V_8_8;
#line 281 "recompilation.m"
    MR_Word recompilation__V_6_6;

#line 281 "recompilation.m"
    if (recompilation__succeeded)
#line 281 "recompilation.m"
      {
#line 281 "recompilation.m"
        recompilation__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__Term_3, (MR_Integer) 0)));
#line 281 "recompilation.m"
        recompilation__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__Term_3, (MR_Integer) 1)));
#line 281 "recompilation.m"
        recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__Term_3, (MR_Integer) 2)));
#line 281 "recompilation.m"
        recompilation__succeeded = ((MR_tag((MR_Word) recompilation__V_7_7)) == (MR_mktag((MR_Integer) 2)));
#line 281 "recompilation.m"
        if (recompilation__succeeded)
#line 281 "recompilation.m"
          {
#line 281 "recompilation.m"
            recompilation__TimestampString_5 = ((MR_String) (MR_hl_field(MR_mktag(2), recompilation__V_7_7, (MR_Integer) 0)));
#line 281 "recompilation.m"
            recompilation__succeeded = (recompilation__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 281 "recompilation.m"
            if (recompilation__succeeded)
#line 281 "recompilation.m"
              {
#line 281 "recompilation.m"
                return recompilation__succeeded = libs__timestamp__string_to_timestamp_1_f_0(recompilation__TimestampString_5, recompilation__HeadVar__2_2);
              }
#line 281 "recompilation.m"
          }
#line 281 "recompilation.m"
      }
#line 281 "recompilation.m"
    return recompilation__succeeded;
#line 281 "recompilation.m"
  }
#line 56 "recompilation.m"
}

#line 54 "recompilation.m"
void MR_CALL 
recompilation__write_version_number_3_p_0(
#line 54 "recompilation.m"
  MR_Word recompilation__VersionNumber_4)
#line 54 "recompilation.m"
{
#line 284 "recompilation.m"
  {
#line 284 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 284 "recompilation.m"
    MR_String recompilation__V_10_10;

#line 285 "recompilation.m"
    {
#line 285 "recompilation.m"
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
#line 286 "recompilation.m"
    {
#line 286 "recompilation.m"
      recompilation__V_10_10 = libs__timestamp__timestamp_to_string_1_f_0(recompilation__VersionNumber_4);
    }
#line 286 "recompilation.m"
    {
#line 286 "recompilation.m"
      mercury__io__write_string_3_p_0(recompilation__V_10_10);
    }
#line 287 "recompilation.m"
    {
#line 287 "recompilation.m"
      mercury__io__write_string_3_p_0((MR_String) "\"");
#line 287 "recompilation.m"
      return;
    }
#line 284 "recompilation.m"
  }
#line 54 "recompilation.m"
}

void mercury__recompilation__init(void)
{
}

void mercury__recompilation__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_functor_set_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_instance_version_numbers_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_item_id_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_item_id_set_3);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_item_id_set_1);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_item_name_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_item_type_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_item_version_numbers_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_module_qualifier_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_pred_or_func_set_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_recompilation_info_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_simple_item_set_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_used_items_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_version_number_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_version_number_map_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_version_numbers_0);
}

void mercury__recompilation__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module recompilation. */
