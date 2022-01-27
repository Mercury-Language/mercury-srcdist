/*
** Automatically generated from `recompilation.m'
** by the Mercury compiler,
** version rotd-2015-03-16
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.modules.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_error.mih"
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




#line 140 "recompilation.c"
static const MR_VA_PseudoTypeInfo_Struct3 recompilation____vpti_func_3__plain_recompilation__type_ctor_info_item_type_0__pseudo_1__pseudo_2;

#line 143 "recompilation.c"
static const MR_FA_PseudoTypeInfo_Struct3 recompilation__recompilation__pti_item_id_set_3__pseudo_1__pseudo_1__pseudo_1;

#line 146 "recompilation.c"
static const MR_FA_PseudoTypeInfo_Struct3 recompilation__recompilation__pti_item_id_set_3__pseudo_2__pseudo_2__pseudo_2;

#line 149 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

#line 152 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 155 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 158 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0;

#line 161 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_id_0_0[2];

#line 164 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_item_id_0_0;

#line 167 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_id_0_0[1];

#line 170 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_id_0[1];

#line 173 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_id_0[1];

#line 176 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_id_0[1];

#line 179 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_id_set_3_0[10];

#line 182 "recompilation.c"
static const MR_ConstString recompilation__recompilation__field_names_item_id_set_3_0[10];

#line 185 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_item_id_set_3_0;

#line 188 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_id_set_3_0[1];

#line 191 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_id_set_3[1];

#line 194 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_id_set_3[1];

#line 197 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_id_set_3[1];

#line 200 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_name_0_0[2];

#line 203 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_item_name_0_0;

#line 206 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_name_0_0[1];

#line 209 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_name_0[1];

#line 212 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_name_0[1];

#line 215 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_name_0[1];

#line 218 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_0;

#line 221 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_1;

#line 224 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_2;

#line 227 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_3;

#line 230 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_4;

#line 233 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_5;

#line 236 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_6;

#line 239 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_7;

#line 242 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_8;

#line 245 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_9;

#line 248 "recompilation.c"
static const MR_EnumFunctorDescPtr recompilation__recompilation__enum_value_ordered_item_type_0[10];

#line 251 "recompilation.c"
static const MR_EnumFunctorDescPtr recompilation__recompilation__enum_name_ordered_item_type_0[10];

#line 254 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_type_0[10];

#line 257 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0;

#line 260 "recompilation.c"
static const MR_FA_TypeInfo_Struct3 recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0;

#line 263 "recompilation.c"
static const MR_FA_TypeInfo_Struct3 recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 266 "recompilation.c"
static const MR_FA_TypeInfo_Struct1 recompilation__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0;

#line 269 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_id_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0;

#line 272 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0;

#line 275 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_recompilation_info_0_0[4];

#line 278 "recompilation.c"
static const MR_ConstString recompilation__recompilation__field_names_recompilation_info_0_0[4];

#line 281 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_recompilation_info_0_0;

#line 284 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_recompilation_info_0_0[1];

#line 287 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_recompilation_info_0[1];

#line 290 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_recompilation_info_0[1];

#line 293 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_recompilation_info_0[1];

#line 296 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_version_numbers_0_0[2];

#line 299 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_version_numbers_0_0;

#line 302 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_version_numbers_0_0[1];

#line 305 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_version_numbers_0[1];

#line 308 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_version_numbers_0[1];

#line 311 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_version_numbers_0[1];

#line 314 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____functor_set_0_0_10001(
#line 317 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 319 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 322 "recompilation.c"
static void MR_CALL 
recompilation____Compare____functor_set_0_0_10001(
#line 325 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 327 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 329 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 332 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____instance_version_numbers_0_0_10001(
#line 335 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 337 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 340 "recompilation.c"
static void MR_CALL 
recompilation____Compare____instance_version_numbers_0_0_10001(
#line 343 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 345 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 347 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 350 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_id_0_0_10001(
#line 353 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 355 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 358 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_id_0_0_10001(
#line 361 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 363 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 365 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 368 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_id_set_3_0_10001(
#line 371 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 373 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 375 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3,
#line 377 "recompilation.c"
  MR_Box recompilation__wrapper_arg_4,
#line 379 "recompilation.c"
  MR_Box recompilation__wrapper_arg_5);

#line 382 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_id_set_3_0_10001(
#line 385 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 387 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 389 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3,
#line 391 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_4,
#line 393 "recompilation.c"
  MR_Box recompilation__wrapper_arg_5,
#line 395 "recompilation.c"
  MR_Box recompilation__wrapper_arg_6);

#line 398 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_id_set_1_0_10001(
#line 401 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 403 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 405 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 408 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_id_set_1_0_10001(
#line 411 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 413 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_2,
#line 415 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3,
#line 417 "recompilation.c"
  MR_Box recompilation__wrapper_arg_4);

#line 420 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_name_0_0_10001(
#line 423 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 425 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 428 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_name_0_0_10001(
#line 431 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 433 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 435 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 438 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_type_0_0_10001(
#line 441 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 443 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 446 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_type_0_0_10001(
#line 449 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 451 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 453 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 456 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_version_numbers_0_0_10001(
#line 459 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 461 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 464 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_version_numbers_0_0_10001(
#line 467 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 469 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 471 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 474 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____module_qualifier_0_0_10001(
#line 477 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 479 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 482 "recompilation.c"
static void MR_CALL 
recompilation____Compare____module_qualifier_0_0_10001(
#line 485 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 487 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 489 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 492 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____pred_or_func_set_0_0_10001(
#line 495 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 497 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 500 "recompilation.c"
static void MR_CALL 
recompilation____Compare____pred_or_func_set_0_0_10001(
#line 503 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 505 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 507 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 510 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____recompilation_info_0_0_10001(
#line 513 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 515 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 518 "recompilation.c"
static void MR_CALL 
recompilation____Compare____recompilation_info_0_0_10001(
#line 521 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 523 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 525 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 528 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____simple_item_set_0_0_10001(
#line 531 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 533 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 536 "recompilation.c"
static void MR_CALL 
recompilation____Compare____simple_item_set_0_0_10001(
#line 539 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 541 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 543 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 546 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____used_items_0_0_10001(
#line 549 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 551 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 554 "recompilation.c"
static void MR_CALL 
recompilation____Compare____used_items_0_0_10001(
#line 557 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 559 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 561 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 564 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____version_number_0_0_10001(
#line 567 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 569 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 572 "recompilation.c"
static void MR_CALL 
recompilation____Compare____version_number_0_0_10001(
#line 575 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 577 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 579 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 582 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____version_number_map_0_0_10001(
#line 585 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 587 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 590 "recompilation.c"
static void MR_CALL 
recompilation____Compare____version_number_map_0_0_10001(
#line 593 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 595 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 597 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 600 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____version_numbers_0_0_10001(
#line 603 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 605 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 608 "recompilation.c"
static void MR_CALL 
recompilation____Compare____version_numbers_0_0_10001(
#line 611 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 613 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 615 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 382 "recompilation.m"
static MR_Word MR_CALL 
recompilation__IntroducedFrom__func__map_ids__382__1_6_f_0(
#line 382 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_37,
#line 382 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_U_38,
#line 382 "recompilation.m"
  MR_Word recompilation__Func_5,
#line 382 "recompilation.m"
  MR_Word recompilation__Items0_6,
#line 382 "recompilation.m"
  MR_Word recompilation__HeadVar__5_13,
#line 382 "recompilation.m"
  MR_Word recompilation__HeadVar__6_14);

#line 382 "recompilation.m"
static MR_Box MR_CALL 
recompilation__map_ids_3_f_0_1(
#line 382 "recompilation.m"
  MR_Box recompilation__closure_arg,
#line 382 "recompilation.m"
  MR_Box recompilation__wrapper_arg_1,
#line 382 "recompilation.m"
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
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
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
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
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



#line 819 "recompilation.c"
static const MR_VA_PseudoTypeInfo_Struct3 recompilation____vpti_func_3__plain_recompilation__type_ctor_info_item_type_0__pseudo_1__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_type_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 830 "recompilation.c"
static const MR_FA_PseudoTypeInfo_Struct3 recompilation__recompilation__pti_item_id_set_3__pseudo_1__pseudo_1__pseudo_1 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 840 "recompilation.c"
static const MR_FA_PseudoTypeInfo_Struct3 recompilation__recompilation__pti_item_id_set_3__pseudo_2__pseudo_2__pseudo_2 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 850 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 859 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 868 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 877 "recompilation.c"
const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_functor_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____functor_set_0_0_10001)),
  ((MR_Box) (recompilation____Compare____functor_set_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "functor_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 894 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_name_0,
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 903 "recompilation.c"
const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_instance_version_numbers_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____instance_version_numbers_0_0_10001)),
  ((MR_Box) (recompilation____Compare____instance_version_numbers_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "instance_version_numbers",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 920 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_id_0_0[2] = {
  (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_type_0,
  (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_name_0
};

#line 926 "recompilation.c"
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

#line 941 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_id_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_id_0_0
};

#line 946 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_item_id_0_0
  }
};

#line 955 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_id_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_id_0_0
};

#line 960 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_id_0[1] = {
  (MR_Integer) 0
};

#line 965 "recompilation.c"
const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_item_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation____Unify____item_id_0_0_10001)),
  ((MR_Box) (recompilation____Compare____item_id_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "item_id",
  {     recompilation__recompilation__du_name_ordered_item_id_0 },
  {     recompilation__recompilation__du_ptag_ordered_item_id_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  recompilation__recompilation__functor_number_map_item_id_0
};

#line 982 "recompilation.c"
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

#line 996 "recompilation.c"
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

#line 1010 "recompilation.c"
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

#line 1025 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_id_set_3_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_id_set_3_0
};

#line 1030 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_id_set_3[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_item_id_set_3_0
  }
};

#line 1039 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_id_set_3[1] = {
  &recompilation__recompilation__du_functor_desc_item_id_set_3_0
};

#line 1044 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_id_set_3[1] = {
  (MR_Integer) 0
};

#line 1049 "recompilation.c"
const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_item_id_set_3 = {
  (MR_Integer) 3,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation____Unify____item_id_set_3_0_10001)),
  ((MR_Box) (recompilation____Compare____item_id_set_3_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "item_id_set",
  {     recompilation__recompilation__du_name_ordered_item_id_set_3 },
  {     recompilation__recompilation__du_ptag_ordered_item_id_set_3 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  recompilation__recompilation__functor_number_map_item_id_set_3
};

#line 1066 "recompilation.c"
const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_item_id_set_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (recompilation____Unify____item_id_set_1_0_10001)),
  ((MR_Box) (recompilation____Compare____item_id_set_1_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "item_id_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__recompilation__pti_item_id_set_3__pseudo_1__pseudo_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1083 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_name_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1089 "recompilation.c"
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

#line 1104 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_name_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_name_0_0
};

#line 1109 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_name_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_item_name_0_0
  }
};

#line 1118 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_name_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_name_0_0
};

#line 1123 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_name_0[1] = {
  (MR_Integer) 0
};

#line 1128 "recompilation.c"
const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_item_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation____Unify____item_name_0_0_10001)),
  ((MR_Box) (recompilation____Compare____item_name_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "item_name",
  {     recompilation__recompilation__du_name_ordered_item_name_0 },
  {     recompilation__recompilation__du_ptag_ordered_item_name_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  recompilation__recompilation__functor_number_map_item_name_0
};

#line 1145 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_0 = {
  (MR_String) "type_abstract_item",
  (MR_Integer) 0
};

#line 1151 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_1 = {
  (MR_String) "type_body_item",
  (MR_Integer) 1
};

#line 1157 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_2 = {
  (MR_String) "mode_item",
  (MR_Integer) 2
};

#line 1163 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_3 = {
  (MR_String) "inst_item",
  (MR_Integer) 3
};

#line 1169 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_4 = {
  (MR_String) "typeclass_item",
  (MR_Integer) 4
};

#line 1175 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_5 = {
  (MR_String) "functor_item",
  (MR_Integer) 5
};

#line 1181 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_6 = {
  (MR_String) "predicate_item",
  (MR_Integer) 6
};

#line 1187 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_7 = {
  (MR_String) "function_item",
  (MR_Integer) 7
};

#line 1193 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_8 = {
  (MR_String) "mutable_item",
  (MR_Integer) 8
};

#line 1199 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_9 = {
  (MR_String) "foreign_proc_item",
  (MR_Integer) 9
};

#line 1205 "recompilation.c"
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

#line 1219 "recompilation.c"
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

#line 1233 "recompilation.c"
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

#line 1247 "recompilation.c"
const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_item_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (recompilation____Unify____item_type_0_0_10001)),
  ((MR_Box) (recompilation____Compare____item_type_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "item_type",
  {     recompilation__recompilation__enum_name_ordered_item_type_0 },
  {     recompilation__recompilation__enum_value_ordered_item_type_0 },
  (MR_Integer) 10,
  (MR_Integer) 4,
  recompilation__recompilation__functor_number_map_item_type_0
};

#line 1264 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 1273 "recompilation.c"
static const MR_FA_TypeInfo_Struct3 recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0,
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0,
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 1283 "recompilation.c"
const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_item_version_numbers_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____item_version_numbers_0_0_10001)),
  ((MR_Box) (recompilation____Compare____item_version_numbers_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "item_version_numbers",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1300 "recompilation.c"
const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_module_qualifier_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____module_qualifier_0_0_10001)),
  ((MR_Box) (recompilation____Compare____module_qualifier_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "module_qualifier",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1317 "recompilation.c"
const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_pred_or_func_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____pred_or_func_set_0_0_10001)),
  ((MR_Box) (recompilation____Compare____pred_or_func_set_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "pred_or_func_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1334 "recompilation.c"
static const MR_FA_TypeInfo_Struct3 recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1344 "recompilation.c"
static const MR_FA_TypeInfo_Struct1 recompilation__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_id_0
  }
};

#line 1352 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_id_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_id_0,
    (MR_TypeInfo) &recompilation__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0
  }
};

#line 1361 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_version_numbers_0
  }
};

#line 1370 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_recompilation_info_0_0[4] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_id_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0,
  (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0
};

#line 1378 "recompilation.c"
static const MR_ConstString recompilation__recompilation__field_names_recompilation_info_0_0[4] = {
  (MR_String) "module_name",
  (MR_String) "used_items",
  (MR_String) "dependencies",
  (MR_String) "version_numbers"
};

#line 1386 "recompilation.c"
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

#line 1401 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_recompilation_info_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_recompilation_info_0_0
};

#line 1406 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_recompilation_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_recompilation_info_0_0
  }
};

#line 1415 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_recompilation_info_0[1] = {
  &recompilation__recompilation__du_functor_desc_recompilation_info_0_0
};

#line 1420 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_recompilation_info_0[1] = {
  (MR_Integer) 0
};

#line 1425 "recompilation.c"
const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_recompilation_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation____Unify____recompilation_info_0_0_10001)),
  ((MR_Box) (recompilation____Compare____recompilation_info_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "recompilation_info",
  {     recompilation__recompilation__du_name_ordered_recompilation_info_0 },
  {     recompilation__recompilation__du_ptag_ordered_recompilation_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  recompilation__recompilation__functor_number_map_recompilation_info_0
};

#line 1442 "recompilation.c"
const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_simple_item_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____simple_item_set_0_0_10001)),
  ((MR_Box) (recompilation____Compare____simple_item_set_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "simple_item_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1459 "recompilation.c"
const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_used_items_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____used_items_0_0_10001)),
  ((MR_Box) (recompilation____Compare____used_items_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "used_items",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1476 "recompilation.c"
const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_version_number_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____version_number_0_0_10001)),
  ((MR_Box) (recompilation____Compare____version_number_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "version_number",
  {     NULL },
  {     (MR_PseudoTypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1493 "recompilation.c"
const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_version_number_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____version_number_map_0_0_10001)),
  ((MR_Box) (recompilation____Compare____version_number_map_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "version_number_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1510 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_version_numbers_0_0[2] = {
  (MR_PseudoTypeInfo) &recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0,
  (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0
};

#line 1516 "recompilation.c"
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

#line 1531 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_version_numbers_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_version_numbers_0_0
};

#line 1536 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_version_numbers_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_version_numbers_0_0
  }
};

#line 1545 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_version_numbers_0[1] = {
  &recompilation__recompilation__du_functor_desc_version_numbers_0_0
};

#line 1550 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_version_numbers_0[1] = {
  (MR_Integer) 0
};

#line 1555 "recompilation.c"
const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_version_numbers_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation____Unify____version_numbers_0_0_10001)),
  ((MR_Box) (recompilation____Compare____version_numbers_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "version_numbers",
  {     recompilation__recompilation__du_name_ordered_version_numbers_0 },
  {     recompilation__recompilation__du_ptag_ordered_version_numbers_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  recompilation__recompilation__functor_number_map_version_numbers_0
};

#line 1572 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____functor_set_0_0_10001(
#line 1575 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 1577 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 1579 "recompilation.c"
{
#line 1581 "recompilation.c"
  {
#line 1583 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 1586 "recompilation.c"
    {
#line 1588 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____functor_set_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 1591 "recompilation.c"
    return recompilation__succeeded;
#line 1593 "recompilation.c"
  }
#line 1595 "recompilation.c"
}

#line 1598 "recompilation.c"
static void MR_CALL 
recompilation____Compare____functor_set_0_0_10001(
#line 1601 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 1603 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 1605 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 1607 "recompilation.c"
{
#line 1609 "recompilation.c"
  {
#line 1611 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 1614 "recompilation.c"
    {
#line 1616 "recompilation.c"
      recompilation____Compare____functor_set_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 1619 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 1621 "recompilation.c"
  }
#line 1623 "recompilation.c"
}

#line 1626 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____instance_version_numbers_0_0_10001(
#line 1629 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 1631 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 1633 "recompilation.c"
{
#line 1635 "recompilation.c"
  {
#line 1637 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 1640 "recompilation.c"
    {
#line 1642 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____instance_version_numbers_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 1645 "recompilation.c"
    return recompilation__succeeded;
#line 1647 "recompilation.c"
  }
#line 1649 "recompilation.c"
}

#line 1652 "recompilation.c"
static void MR_CALL 
recompilation____Compare____instance_version_numbers_0_0_10001(
#line 1655 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 1657 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 1659 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 1661 "recompilation.c"
{
#line 1663 "recompilation.c"
  {
#line 1665 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 1668 "recompilation.c"
    {
#line 1670 "recompilation.c"
      recompilation____Compare____instance_version_numbers_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 1673 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 1675 "recompilation.c"
  }
#line 1677 "recompilation.c"
}

#line 1680 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_id_0_0_10001(
#line 1683 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 1685 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 1687 "recompilation.c"
{
#line 1689 "recompilation.c"
  {
#line 1691 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 1694 "recompilation.c"
    {
#line 1696 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____item_id_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 1699 "recompilation.c"
    return recompilation__succeeded;
#line 1701 "recompilation.c"
  }
#line 1703 "recompilation.c"
}

#line 1706 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_id_0_0_10001(
#line 1709 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 1711 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 1713 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 1715 "recompilation.c"
{
#line 1717 "recompilation.c"
  {
#line 1719 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 1722 "recompilation.c"
    {
#line 1724 "recompilation.c"
      recompilation____Compare____item_id_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 1727 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 1729 "recompilation.c"
  }
#line 1731 "recompilation.c"
}

#line 1734 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_id_set_3_0_10001(
#line 1737 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 1739 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 1741 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3,
#line 1743 "recompilation.c"
  MR_Box recompilation__wrapper_arg_4,
#line 1745 "recompilation.c"
  MR_Box recompilation__wrapper_arg_5)
#line 1747 "recompilation.c"
{
#line 1749 "recompilation.c"
  {
#line 1751 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 1754 "recompilation.c"
    {
#line 1756 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____item_id_set_3_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3), ((MR_Word) recompilation__wrapper_arg_4), ((MR_Word) recompilation__wrapper_arg_5));
    }
#line 1759 "recompilation.c"
    return recompilation__succeeded;
#line 1761 "recompilation.c"
  }
#line 1763 "recompilation.c"
}

#line 1766 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_id_set_3_0_10001(
#line 1769 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 1771 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 1773 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3,
#line 1775 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_4,
#line 1777 "recompilation.c"
  MR_Box recompilation__wrapper_arg_5,
#line 1779 "recompilation.c"
  MR_Box recompilation__wrapper_arg_6)
#line 1781 "recompilation.c"
{
#line 1783 "recompilation.c"
  {
#line 1785 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 1788 "recompilation.c"
    {
#line 1790 "recompilation.c"
      recompilation____Compare____item_id_set_3_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3), &recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_5), ((MR_Word) recompilation__wrapper_arg_6));
    }
#line 1793 "recompilation.c"
    *recompilation__wrapper_arg_4 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 1795 "recompilation.c"
  }
#line 1797 "recompilation.c"
}

#line 1800 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_id_set_1_0_10001(
#line 1803 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 1805 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 1807 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 1809 "recompilation.c"
{
#line 1811 "recompilation.c"
  {
#line 1813 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 1816 "recompilation.c"
    {
#line 1818 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____item_id_set_1_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 1821 "recompilation.c"
    return recompilation__succeeded;
#line 1823 "recompilation.c"
  }
#line 1825 "recompilation.c"
}

#line 1828 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_id_set_1_0_10001(
#line 1831 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 1833 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_2,
#line 1835 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3,
#line 1837 "recompilation.c"
  MR_Box recompilation__wrapper_arg_4)
#line 1839 "recompilation.c"
{
#line 1841 "recompilation.c"
  {
#line 1843 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 1846 "recompilation.c"
    {
#line 1848 "recompilation.c"
      recompilation____Compare____item_id_set_1_0(((MR_Word) recompilation__wrapper_arg_1), &recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_3), ((MR_Word) recompilation__wrapper_arg_4));
    }
#line 1851 "recompilation.c"
    *recompilation__wrapper_arg_2 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 1853 "recompilation.c"
  }
#line 1855 "recompilation.c"
}

#line 1858 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_name_0_0_10001(
#line 1861 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 1863 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 1865 "recompilation.c"
{
#line 1867 "recompilation.c"
  {
#line 1869 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 1872 "recompilation.c"
    {
#line 1874 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____item_name_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 1877 "recompilation.c"
    return recompilation__succeeded;
#line 1879 "recompilation.c"
  }
#line 1881 "recompilation.c"
}

#line 1884 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_name_0_0_10001(
#line 1887 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 1889 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 1891 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 1893 "recompilation.c"
{
#line 1895 "recompilation.c"
  {
#line 1897 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 1900 "recompilation.c"
    {
#line 1902 "recompilation.c"
      recompilation____Compare____item_name_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 1905 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 1907 "recompilation.c"
  }
#line 1909 "recompilation.c"
}

#line 1912 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_type_0_0_10001(
#line 1915 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 1917 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 1919 "recompilation.c"
{
#line 1921 "recompilation.c"
  {
#line 1923 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 1926 "recompilation.c"
    {
#line 1928 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____item_type_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 1931 "recompilation.c"
    return recompilation__succeeded;
#line 1933 "recompilation.c"
  }
#line 1935 "recompilation.c"
}

#line 1938 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_type_0_0_10001(
#line 1941 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 1943 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 1945 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 1947 "recompilation.c"
{
#line 1949 "recompilation.c"
  {
#line 1951 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 1954 "recompilation.c"
    {
#line 1956 "recompilation.c"
      recompilation____Compare____item_type_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 1959 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 1961 "recompilation.c"
  }
#line 1963 "recompilation.c"
}

#line 1966 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_version_numbers_0_0_10001(
#line 1969 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 1971 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 1973 "recompilation.c"
{
#line 1975 "recompilation.c"
  {
#line 1977 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 1980 "recompilation.c"
    {
#line 1982 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____item_version_numbers_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 1985 "recompilation.c"
    return recompilation__succeeded;
#line 1987 "recompilation.c"
  }
#line 1989 "recompilation.c"
}

#line 1992 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_version_numbers_0_0_10001(
#line 1995 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 1997 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 1999 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2001 "recompilation.c"
{
#line 2003 "recompilation.c"
  {
#line 2005 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2008 "recompilation.c"
    {
#line 2010 "recompilation.c"
      recompilation____Compare____item_version_numbers_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2013 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2015 "recompilation.c"
  }
#line 2017 "recompilation.c"
}

#line 2020 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____module_qualifier_0_0_10001(
#line 2023 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2025 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2027 "recompilation.c"
{
#line 2029 "recompilation.c"
  {
#line 2031 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2034 "recompilation.c"
    {
#line 2036 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____module_qualifier_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2039 "recompilation.c"
    return recompilation__succeeded;
#line 2041 "recompilation.c"
  }
#line 2043 "recompilation.c"
}

#line 2046 "recompilation.c"
static void MR_CALL 
recompilation____Compare____module_qualifier_0_0_10001(
#line 2049 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2051 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2053 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2055 "recompilation.c"
{
#line 2057 "recompilation.c"
  {
#line 2059 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2062 "recompilation.c"
    {
#line 2064 "recompilation.c"
      recompilation____Compare____module_qualifier_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2067 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2069 "recompilation.c"
  }
#line 2071 "recompilation.c"
}

#line 2074 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____pred_or_func_set_0_0_10001(
#line 2077 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2079 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2081 "recompilation.c"
{
#line 2083 "recompilation.c"
  {
#line 2085 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2088 "recompilation.c"
    {
#line 2090 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____pred_or_func_set_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2093 "recompilation.c"
    return recompilation__succeeded;
#line 2095 "recompilation.c"
  }
#line 2097 "recompilation.c"
}

#line 2100 "recompilation.c"
static void MR_CALL 
recompilation____Compare____pred_or_func_set_0_0_10001(
#line 2103 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2105 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2107 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2109 "recompilation.c"
{
#line 2111 "recompilation.c"
  {
#line 2113 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2116 "recompilation.c"
    {
#line 2118 "recompilation.c"
      recompilation____Compare____pred_or_func_set_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2121 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2123 "recompilation.c"
  }
#line 2125 "recompilation.c"
}

#line 2128 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____recompilation_info_0_0_10001(
#line 2131 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2133 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2135 "recompilation.c"
{
#line 2137 "recompilation.c"
  {
#line 2139 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2142 "recompilation.c"
    {
#line 2144 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____recompilation_info_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2147 "recompilation.c"
    return recompilation__succeeded;
#line 2149 "recompilation.c"
  }
#line 2151 "recompilation.c"
}

#line 2154 "recompilation.c"
static void MR_CALL 
recompilation____Compare____recompilation_info_0_0_10001(
#line 2157 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2159 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2161 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2163 "recompilation.c"
{
#line 2165 "recompilation.c"
  {
#line 2167 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2170 "recompilation.c"
    {
#line 2172 "recompilation.c"
      recompilation____Compare____recompilation_info_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2175 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2177 "recompilation.c"
  }
#line 2179 "recompilation.c"
}

#line 2182 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____simple_item_set_0_0_10001(
#line 2185 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2187 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2189 "recompilation.c"
{
#line 2191 "recompilation.c"
  {
#line 2193 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2196 "recompilation.c"
    {
#line 2198 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____simple_item_set_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2201 "recompilation.c"
    return recompilation__succeeded;
#line 2203 "recompilation.c"
  }
#line 2205 "recompilation.c"
}

#line 2208 "recompilation.c"
static void MR_CALL 
recompilation____Compare____simple_item_set_0_0_10001(
#line 2211 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2213 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2215 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2217 "recompilation.c"
{
#line 2219 "recompilation.c"
  {
#line 2221 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2224 "recompilation.c"
    {
#line 2226 "recompilation.c"
      recompilation____Compare____simple_item_set_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2229 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2231 "recompilation.c"
  }
#line 2233 "recompilation.c"
}

#line 2236 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____used_items_0_0_10001(
#line 2239 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2241 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2243 "recompilation.c"
{
#line 2245 "recompilation.c"
  {
#line 2247 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2250 "recompilation.c"
    {
#line 2252 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____used_items_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2255 "recompilation.c"
    return recompilation__succeeded;
#line 2257 "recompilation.c"
  }
#line 2259 "recompilation.c"
}

#line 2262 "recompilation.c"
static void MR_CALL 
recompilation____Compare____used_items_0_0_10001(
#line 2265 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2267 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2269 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2271 "recompilation.c"
{
#line 2273 "recompilation.c"
  {
#line 2275 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2278 "recompilation.c"
    {
#line 2280 "recompilation.c"
      recompilation____Compare____used_items_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2283 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2285 "recompilation.c"
  }
#line 2287 "recompilation.c"
}

#line 2290 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____version_number_0_0_10001(
#line 2293 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2295 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2297 "recompilation.c"
{
#line 2299 "recompilation.c"
  {
#line 2301 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2304 "recompilation.c"
    {
#line 2306 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____version_number_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2309 "recompilation.c"
    return recompilation__succeeded;
#line 2311 "recompilation.c"
  }
#line 2313 "recompilation.c"
}

#line 2316 "recompilation.c"
static void MR_CALL 
recompilation____Compare____version_number_0_0_10001(
#line 2319 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2321 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2323 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2325 "recompilation.c"
{
#line 2327 "recompilation.c"
  {
#line 2329 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2332 "recompilation.c"
    {
#line 2334 "recompilation.c"
      recompilation____Compare____version_number_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2337 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2339 "recompilation.c"
  }
#line 2341 "recompilation.c"
}

#line 2344 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____version_number_map_0_0_10001(
#line 2347 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2349 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2351 "recompilation.c"
{
#line 2353 "recompilation.c"
  {
#line 2355 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2358 "recompilation.c"
    {
#line 2360 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____version_number_map_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2363 "recompilation.c"
    return recompilation__succeeded;
#line 2365 "recompilation.c"
  }
#line 2367 "recompilation.c"
}

#line 2370 "recompilation.c"
static void MR_CALL 
recompilation____Compare____version_number_map_0_0_10001(
#line 2373 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2375 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2377 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2379 "recompilation.c"
{
#line 2381 "recompilation.c"
  {
#line 2383 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2386 "recompilation.c"
    {
#line 2388 "recompilation.c"
      recompilation____Compare____version_number_map_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2391 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2393 "recompilation.c"
  }
#line 2395 "recompilation.c"
}

#line 2398 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____version_numbers_0_0_10001(
#line 2401 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2403 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2405 "recompilation.c"
{
#line 2407 "recompilation.c"
  {
#line 2409 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2412 "recompilation.c"
    {
#line 2414 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____version_numbers_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2417 "recompilation.c"
    return recompilation__succeeded;
#line 2419 "recompilation.c"
  }
#line 2421 "recompilation.c"
}

#line 2424 "recompilation.c"
static void MR_CALL 
recompilation____Compare____version_numbers_0_0_10001(
#line 2427 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2429 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2431 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2433 "recompilation.c"
{
#line 2435 "recompilation.c"
  {
#line 2437 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2440 "recompilation.c"
    {
#line 2442 "recompilation.c"
      recompilation____Compare____version_numbers_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2445 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2447 "recompilation.c"
  }
#line 2449 "recompilation.c"
}

#line 382 "recompilation.m"
static MR_Word MR_CALL 
recompilation__IntroducedFrom__func__map_ids__382__1_6_f_0(
#line 382 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_37,
#line 382 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_U_38,
#line 382 "recompilation.m"
  MR_Word recompilation__Func_5,
#line 382 "recompilation.m"
  MR_Word recompilation__Items0_6,
#line 382 "recompilation.m"
  MR_Word recompilation__HeadVar__5_13,
#line 382 "recompilation.m"
  MR_Word recompilation__HeadVar__6_14)
#line 382 "recompilation.m"
{
#line 382 "recompilation.m"
  {
#line 382 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 382 "recompilation.m"
    MR_Word recompilation__HeadVar__7_15;
#line 382 "recompilation.m"
    MR_Box recompilation__V_16_16;
#line 382 "recompilation.m"
    MR_Box recompilation__V_17_17;
#line 385 "recompilation.m"
    MR_Box MR_CALL (* recompilation__func_0)(MR_Box, MR_Box, MR_Box);

#line 385 "recompilation.m"
    {
#line 385 "recompilation.m"
      recompilation__V_17_17 = recompilation__extract_ids_2_f_0(recompilation__TypeInfo_for_T_37, recompilation__Items0_6, recompilation__HeadVar__5_13);
    }
#line 385 "recompilation.m"
    recompilation__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), recompilation__Func_5, (MR_Integer) 1)));
#line 385 "recompilation.m"
    {
#line 385 "recompilation.m"
      recompilation__V_16_16 = recompilation__func_0(((MR_Box) recompilation__Func_5), ((MR_Box) (recompilation__HeadVar__5_13)), recompilation__V_17_17);
    }
#line 384 "recompilation.m"
    {
#line 384 "recompilation.m"
      recompilation__HeadVar__7_15 = recompilation__update_ids_3_f_0(recompilation__TypeInfo_for_U_38, recompilation__HeadVar__6_14, recompilation__HeadVar__5_13, recompilation__V_16_16);
    }
#line 382 "recompilation.m"
    return recompilation__HeadVar__7_15;
#line 382 "recompilation.m"
  }
#line 382 "recompilation.m"
}

#line 237 "recompilation.m"
void MR_CALL 
recompilation____Compare____version_numbers_0_0(
#line 237 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 237 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 237 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 237 "recompilation.m"
{
#line 237 "recompilation.m"
  {
#line 237 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 237 "recompilation.m"
    MR_Integer recompilation__CastX_9 = (MR_Integer) recompilation__HeadVar__2_2;
#line 237 "recompilation.m"
    MR_Integer recompilation__CastY_10 = (MR_Integer) recompilation__HeadVar__3_3;

#line 237 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_9 == recompilation__CastY_10);
#line 237 "recompilation.m"
    if (recompilation__succeeded)
#line 2530 "recompilation.c"
      *recompilation__HeadVar__1_1 = (MR_Integer) 0;
#line 237 "recompilation.m"
    else
#line 237 "recompilation.m"
      {
#line 237 "recompilation.m"
        MR_Word recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
#line 237 "recompilation.m"
        MR_Word recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));
#line 237 "recompilation.m"
        MR_Word recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 0)));
#line 237 "recompilation.m"
        MR_Word recompilation__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 1)));
#line 237 "recompilation.m"
        MR_Word recompilation__V_8_8;

#line 237 "recompilation.m"
        {
#line 237 "recompilation.m"
          mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_3[0], &recompilation__V_8_8, ((MR_Box) (recompilation__V_4_4)), ((MR_Box) (recompilation__V_6_6)));
        }
#line 2552 "recompilation.c"
        recompilation__succeeded = (recompilation__V_8_8 == (MR_Integer) 0);
#line 237 "recompilation.m"
        recompilation__succeeded = !(recompilation__succeeded);
#line 237 "recompilation.m"
        if (recompilation__succeeded)
#line 237 "recompilation.m"
          *recompilation__HeadVar__1_1 = recompilation__V_8_8;
#line 237 "recompilation.m"
        else
#line 237 "recompilation.m"
          {
#line 237 "recompilation.m"
            {
#line 237 "recompilation.m"
              mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[3], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__V_5_5)), ((MR_Box) (recompilation__V_7_7)));
#line 237 "recompilation.m"
              return;
            }
#line 237 "recompilation.m"
          }
#line 237 "recompilation.m"
      }
#line 237 "recompilation.m"
  }
#line 237 "recompilation.m"
}

#line 237 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____version_numbers_0_0(
#line 237 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 237 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 237 "recompilation.m"
{
#line 237 "recompilation.m"
  {
#line 237 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 237 "recompilation.m"
    MR_Integer recompilation__CastX_7 = (MR_Integer) recompilation__HeadVar__1_1;
#line 237 "recompilation.m"
    MR_Integer recompilation__CastY_8 = (MR_Integer) recompilation__HeadVar__2_2;

#line 237 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_7 == recompilation__CastY_8);
#line 237 "recompilation.m"
    if (recompilation__succeeded)
#line 237 "recompilation.m"
      recompilation__succeeded = MR_TRUE;
#line 237 "recompilation.m"
    else
#line 237 "recompilation.m"
      {
#line 237 "recompilation.m"
        MR_Word recompilation__TypeInfo_9_9 = (MR_Word) &recompilation_scalar_common_2[4];
#line 237 "recompilation.m"
        MR_Word recompilation__TypeInfo_10_10;
#line 237 "recompilation.m"
        MR_Word recompilation__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 237 "recompilation.m"
        MR_Word recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));
#line 237 "recompilation.m"
        MR_Word recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
#line 237 "recompilation.m"
        MR_Word recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));

#line 2621 "recompilation.c"
        {
#line 2623 "recompilation.c"
          recompilation__succeeded = recompilation____Unify____item_id_set_3_0(recompilation__TypeInfo_9_9, recompilation__TypeInfo_9_9, recompilation__TypeInfo_9_9, recompilation__V_3_3, recompilation__V_5_5);
        }
#line 237 "recompilation.m"
        if (recompilation__succeeded)
#line 237 "recompilation.m"
          {
#line 2630 "recompilation.c"
            recompilation__TypeInfo_10_10 = (MR_Word) &recompilation_scalar_common_2[3];
#line 2632 "recompilation.c"
            {
#line 2634 "recompilation.c"
              return recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_10_10, ((MR_Box) (recompilation__V_4_4)), ((MR_Box) (recompilation__V_6_6)));
            }
#line 237 "recompilation.m"
          }
#line 237 "recompilation.m"
      }
#line 237 "recompilation.m"
    return recompilation__succeeded;
#line 237 "recompilation.m"
  }
#line 237 "recompilation.m"
}

#line 247 "recompilation.m"
void MR_CALL 
recompilation____Compare____version_number_map_0_0(
#line 247 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 247 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 247 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 247 "recompilation.m"
{
#line 247 "recompilation.m"
  {
#line 247 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 247 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 247 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 247 "recompilation.m"
    {
#line 247 "recompilation.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[4], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
#line 247 "recompilation.m"
      return;
    }
#line 247 "recompilation.m"
  }
#line 247 "recompilation.m"
}

#line 247 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____version_number_map_0_0(
#line 247 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 247 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 247 "recompilation.m"
{
#line 247 "recompilation.m"
  {
#line 247 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 247 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 247 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 247 "recompilation.m"
    {
#line 247 "recompilation.m"
      return recompilation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation_scalar_common_2[4], ((MR_Box) (recompilation__Cast_HeadVar1_3)), ((MR_Box) (recompilation__Cast_HeadVar2_4)));
    }
#line 247 "recompilation.m"
    return recompilation__succeeded;
#line 247 "recompilation.m"
  }
#line 247 "recompilation.m"
}

#line 53 "recompilation.m"
void MR_CALL 
recompilation____Compare____version_number_0_0(
#line 53 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 53 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 53 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 53 "recompilation.m"
{
#line 53 "recompilation.m"
  {
#line 53 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 53 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 53 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 53 "recompilation.m"
    {
#line 53 "recompilation.m"
      libs__timestamp____Compare____timestamp_0_0(recompilation__HeadVar__1_1, recompilation__Cast_HeadVar1_4, recompilation__Cast_HeadVar2_5);
#line 53 "recompilation.m"
      return;
    }
#line 53 "recompilation.m"
  }
#line 53 "recompilation.m"
}

#line 53 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____version_number_0_0(
#line 53 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 53 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 53 "recompilation.m"
{
#line 53 "recompilation.m"
  {
#line 53 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 53 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 53 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 53 "recompilation.m"
    {
#line 53 "recompilation.m"
      return recompilation__succeeded = libs__timestamp____Unify____timestamp_0_0(recompilation__Cast_HeadVar1_3, recompilation__Cast_HeadVar2_4);
    }
#line 53 "recompilation.m"
    return recompilation__succeeded;
#line 53 "recompilation.m"
  }
#line 53 "recompilation.m"
}

#line 200 "recompilation.m"
void MR_CALL 
recompilation____Compare____used_items_0_0(
#line 200 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 200 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 200 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 200 "recompilation.m"
{
#line 200 "recompilation.m"
  {
#line 200 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 200 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 200 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 200 "recompilation.m"
    {
#line 200 "recompilation.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_3[1], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
#line 200 "recompilation.m"
      return;
    }
#line 200 "recompilation.m"
  }
#line 200 "recompilation.m"
}

#line 200 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____used_items_0_0(
#line 200 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 200 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 200 "recompilation.m"
{
#line 200 "recompilation.m"
  {
#line 200 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 200 "recompilation.m"
    MR_Word recompilation__TypeInfo_5_5 = (MR_Word) &recompilation_scalar_common_2[2];
#line 200 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 200 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 200 "recompilation.m"
    {
#line 200 "recompilation.m"
      return recompilation__succeeded = recompilation____Unify____item_id_set_3_0(recompilation__TypeInfo_5_5, recompilation__TypeInfo_5_5, recompilation__TypeInfo_5_5, recompilation__Cast_HeadVar1_3, recompilation__Cast_HeadVar2_4);
    }
#line 200 "recompilation.m"
    return recompilation__succeeded;
#line 200 "recompilation.m"
  }
#line 200 "recompilation.m"
}

#line 189 "recompilation.m"
void MR_CALL 
recompilation____Compare____simple_item_set_0_0(
#line 189 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 189 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 189 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 189 "recompilation.m"
{
#line 189 "recompilation.m"
  {
#line 189 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 189 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 189 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 189 "recompilation.m"
    {
#line 189 "recompilation.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[2], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
#line 189 "recompilation.m"
      return;
    }
#line 189 "recompilation.m"
  }
#line 189 "recompilation.m"
}

#line 189 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____simple_item_set_0_0(
#line 189 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 189 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 189 "recompilation.m"
{
#line 189 "recompilation.m"
  {
#line 189 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 189 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 189 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 189 "recompilation.m"
    {
#line 189 "recompilation.m"
      return recompilation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation_scalar_common_2[2], ((MR_Box) (recompilation__Cast_HeadVar1_3)), ((MR_Box) (recompilation__Cast_HeadVar2_4)));
    }
#line 189 "recompilation.m"
    return recompilation__succeeded;
#line 189 "recompilation.m"
  }
#line 189 "recompilation.m"
}

#line 120 "recompilation.m"
void MR_CALL 
recompilation____Compare____recompilation_info_0_0(
#line 120 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 120 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 120 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 120 "recompilation.m"
{
#line 120 "recompilation.m"
  {
#line 120 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 120 "recompilation.m"
    MR_Integer recompilation__CastX_15 = (MR_Integer) recompilation__HeadVar__2_2;
#line 120 "recompilation.m"
    MR_Integer recompilation__CastY_16 = (MR_Integer) recompilation__HeadVar__3_3;

#line 120 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_15 == recompilation__CastY_16);
#line 120 "recompilation.m"
    if (recompilation__succeeded)
#line 2922 "recompilation.c"
      *recompilation__HeadVar__1_1 = (MR_Integer) 0;
#line 120 "recompilation.m"
    else
#line 120 "recompilation.m"
      {
#line 120 "recompilation.m"
        MR_Word recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
#line 120 "recompilation.m"
        MR_Word recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));
#line 120 "recompilation.m"
        MR_Word recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 2)));
#line 120 "recompilation.m"
        MR_Word recompilation__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 3)));
#line 120 "recompilation.m"
        MR_Word recompilation__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 0)));
#line 120 "recompilation.m"
        MR_Word recompilation__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 1)));
#line 120 "recompilation.m"
        MR_Word recompilation__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 2)));
#line 120 "recompilation.m"
        MR_Word recompilation__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 3)));
#line 120 "recompilation.m"
        MR_Word recompilation__V_12_12;

#line 120 "recompilation.m"
        {
#line 120 "recompilation.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&recompilation__V_12_12, recompilation__V_4_4, recompilation__V_8_8);
        }
#line 2952 "recompilation.c"
        recompilation__succeeded = (recompilation__V_12_12 == (MR_Integer) 0);
#line 120 "recompilation.m"
        recompilation__succeeded = !(recompilation__succeeded);
#line 120 "recompilation.m"
        if (recompilation__succeeded)
#line 120 "recompilation.m"
          *recompilation__HeadVar__1_1 = recompilation__V_12_12;
#line 120 "recompilation.m"
        else
#line 120 "recompilation.m"
          {
#line 120 "recompilation.m"
            MR_Word recompilation__V_13_13;

#line 120 "recompilation.m"
            {
#line 120 "recompilation.m"
              mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_3[1], &recompilation__V_13_13, ((MR_Box) (recompilation__V_5_5)), ((MR_Box) (recompilation__V_9_9)));
            }
#line 2972 "recompilation.c"
            recompilation__succeeded = (recompilation__V_13_13 == (MR_Integer) 0);
#line 120 "recompilation.m"
            recompilation__succeeded = !(recompilation__succeeded);
#line 120 "recompilation.m"
            if (recompilation__succeeded)
#line 120 "recompilation.m"
              *recompilation__HeadVar__1_1 = recompilation__V_13_13;
#line 120 "recompilation.m"
            else
#line 120 "recompilation.m"
              {
#line 120 "recompilation.m"
                MR_Word recompilation__V_14_14;

#line 120 "recompilation.m"
                {
#line 120 "recompilation.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[5], &recompilation__V_14_14, ((MR_Box) (recompilation__V_6_6)), ((MR_Box) (recompilation__V_10_10)));
                }
#line 2992 "recompilation.c"
                recompilation__succeeded = (recompilation__V_14_14 == (MR_Integer) 0);
#line 120 "recompilation.m"
                recompilation__succeeded = !(recompilation__succeeded);
#line 120 "recompilation.m"
                if (recompilation__succeeded)
#line 120 "recompilation.m"
                  *recompilation__HeadVar__1_1 = recompilation__V_14_14;
#line 120 "recompilation.m"
                else
#line 120 "recompilation.m"
                  {
#line 120 "recompilation.m"
                    {
#line 120 "recompilation.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[6], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__V_7_7)), ((MR_Box) (recompilation__V_11_11)));
#line 120 "recompilation.m"
                      return;
                    }
#line 120 "recompilation.m"
                  }
#line 120 "recompilation.m"
              }
#line 120 "recompilation.m"
          }
#line 120 "recompilation.m"
      }
#line 120 "recompilation.m"
  }
#line 120 "recompilation.m"
}

#line 120 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____recompilation_info_0_0(
#line 120 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 120 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 120 "recompilation.m"
{
#line 120 "recompilation.m"
  {
#line 120 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 120 "recompilation.m"
    MR_Integer recompilation__CastX_11 = (MR_Integer) recompilation__HeadVar__1_1;
#line 120 "recompilation.m"
    MR_Integer recompilation__CastY_12 = (MR_Integer) recompilation__HeadVar__2_2;

#line 120 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_11 == recompilation__CastY_12);
#line 120 "recompilation.m"
    if (recompilation__succeeded)
#line 120 "recompilation.m"
      recompilation__succeeded = MR_TRUE;
#line 120 "recompilation.m"
    else
#line 120 "recompilation.m"
      {
#line 120 "recompilation.m"
        MR_Word recompilation__TypeInfo_14_14;
#line 120 "recompilation.m"
        MR_Word recompilation__TypeInfo_15_15;
#line 120 "recompilation.m"
        MR_Word recompilation__TypeInfo_16_16;
#line 120 "recompilation.m"
        MR_Word recompilation__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 120 "recompilation.m"
        MR_Word recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));
#line 120 "recompilation.m"
        MR_Word recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 2)));
#line 120 "recompilation.m"
        MR_Word recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 3)));
#line 120 "recompilation.m"
        MR_Word recompilation__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
#line 120 "recompilation.m"
        MR_Word recompilation__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));
#line 120 "recompilation.m"
        MR_Word recompilation__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 2)));
#line 120 "recompilation.m"
        MR_Word recompilation__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 3)));

#line 3075 "recompilation.c"
        {
#line 3077 "recompilation.c"
          recompilation__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__V_3_3, recompilation__V_7_7);
        }
#line 120 "recompilation.m"
        if (recompilation__succeeded)
#line 120 "recompilation.m"
          {
#line 3084 "recompilation.c"
            recompilation__TypeInfo_14_14 = (MR_Word) &recompilation_scalar_common_2[2];
#line 3086 "recompilation.c"
            {
#line 3088 "recompilation.c"
              recompilation__succeeded = recompilation____Unify____item_id_set_3_0(recompilation__TypeInfo_14_14, recompilation__TypeInfo_14_14, recompilation__TypeInfo_14_14, recompilation__V_4_4, recompilation__V_8_8);
            }
#line 120 "recompilation.m"
            if (recompilation__succeeded)
#line 120 "recompilation.m"
              {
#line 3095 "recompilation.c"
                recompilation__TypeInfo_15_15 = (MR_Word) &recompilation_scalar_common_2[5];
#line 3097 "recompilation.c"
                {
#line 3099 "recompilation.c"
                  recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_15_15, ((MR_Box) (recompilation__V_5_5)), ((MR_Box) (recompilation__V_9_9)));
                }
#line 120 "recompilation.m"
                if (recompilation__succeeded)
#line 120 "recompilation.m"
                  {
#line 3106 "recompilation.c"
                    recompilation__TypeInfo_16_16 = (MR_Word) &recompilation_scalar_common_2[6];
#line 3108 "recompilation.c"
                    {
#line 3110 "recompilation.c"
                      return recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_16_16, ((MR_Box) (recompilation__V_6_6)), ((MR_Box) (recompilation__V_10_10)));
                    }
#line 120 "recompilation.m"
                  }
#line 120 "recompilation.m"
              }
#line 120 "recompilation.m"
          }
#line 120 "recompilation.m"
      }
#line 120 "recompilation.m"
    return recompilation__succeeded;
#line 120 "recompilation.m"
  }
#line 120 "recompilation.m"
}

#line 195 "recompilation.m"
void MR_CALL 
recompilation____Compare____pred_or_func_set_0_0(
#line 195 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 195 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 195 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 195 "recompilation.m"
{
#line 195 "recompilation.m"
  {
#line 195 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 195 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 195 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 195 "recompilation.m"
    {
#line 195 "recompilation.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[2], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
#line 195 "recompilation.m"
      return;
    }
#line 195 "recompilation.m"
  }
#line 195 "recompilation.m"
}

#line 195 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____pred_or_func_set_0_0(
#line 195 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 195 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 195 "recompilation.m"
{
#line 195 "recompilation.m"
  {
#line 195 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 195 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 195 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 195 "recompilation.m"
    {
#line 195 "recompilation.m"
      return recompilation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation_scalar_common_2[2], ((MR_Box) (recompilation__Cast_HeadVar1_3)), ((MR_Box) (recompilation__Cast_HeadVar2_4)));
    }
#line 195 "recompilation.m"
    return recompilation__succeeded;
#line 195 "recompilation.m"
  }
#line 195 "recompilation.m"
}

#line 255 "recompilation.m"
void MR_CALL 
recompilation____Compare____module_qualifier_0_0(
#line 255 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 255 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 255 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 255 "recompilation.m"
{
#line 255 "recompilation.m"
  {
#line 255 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 255 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 255 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 255 "recompilation.m"
    {
#line 255 "recompilation.m"
      mdbcomp__sym_name____Compare____sym_name_0_0(recompilation__HeadVar__1_1, recompilation__Cast_HeadVar1_4, recompilation__Cast_HeadVar2_5);
#line 255 "recompilation.m"
      return;
    }
#line 255 "recompilation.m"
  }
#line 255 "recompilation.m"
}

#line 255 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____module_qualifier_0_0(
#line 255 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 255 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 255 "recompilation.m"
{
#line 255 "recompilation.m"
  {
#line 255 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 255 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 255 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 255 "recompilation.m"
    {
#line 255 "recompilation.m"
      return recompilation__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__Cast_HeadVar1_3, recompilation__Cast_HeadVar2_4);
    }
#line 255 "recompilation.m"
    return recompilation__succeeded;
#line 255 "recompilation.m"
  }
#line 255 "recompilation.m"
}

#line 245 "recompilation.m"
void MR_CALL 
recompilation____Compare____item_version_numbers_0_0(
#line 245 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 245 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 245 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 245 "recompilation.m"
{
#line 245 "recompilation.m"
  {
#line 245 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 245 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 245 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 245 "recompilation.m"
    {
#line 245 "recompilation.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_3[0], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
#line 245 "recompilation.m"
      return;
    }
#line 245 "recompilation.m"
  }
#line 245 "recompilation.m"
}

#line 245 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____item_version_numbers_0_0(
#line 245 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 245 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 245 "recompilation.m"
{
#line 245 "recompilation.m"
  {
#line 245 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 245 "recompilation.m"
    MR_Word recompilation__TypeInfo_5_5 = (MR_Word) &recompilation_scalar_common_2[4];
#line 245 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 245 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 245 "recompilation.m"
    {
#line 245 "recompilation.m"
      return recompilation__succeeded = recompilation____Unify____item_id_set_3_0(recompilation__TypeInfo_5_5, recompilation__TypeInfo_5_5, recompilation__TypeInfo_5_5, recompilation__Cast_HeadVar1_3, recompilation__Cast_HeadVar2_4);
    }
#line 245 "recompilation.m"
    return recompilation__succeeded;
#line 245 "recompilation.m"
  }
#line 245 "recompilation.m"
}

#line 69 "recompilation.m"
void MR_CALL 
recompilation____Compare____item_type_0_0(
#line 69 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 69 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 69 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 69 "recompilation.m"
{
#line 69 "recompilation.m"
  {
#line 69 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 69 "recompilation.m"
    MR_Integer recompilation__Cast_HeadVar1_4 = (MR_Integer) recompilation__HeadVar__2_2;
#line 69 "recompilation.m"
    MR_Integer recompilation__Cast_HeadVar2_5 = (MR_Integer) recompilation__HeadVar__3_3;

#line 69 "recompilation.m"
    {
#line 69 "recompilation.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(recompilation__HeadVar__1_1, recompilation__Cast_HeadVar1_4, recompilation__Cast_HeadVar2_5);
#line 69 "recompilation.m"
      return;
    }
#line 69 "recompilation.m"
  }
#line 69 "recompilation.m"
}

#line 69 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____item_type_0_0(
#line 69 "recompilation.m"
  MR_Word recompilation__HeadVar__2_1,
#line 69 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 69 "recompilation.m"
{
#line 3357 "recompilation.c"
  {
#line 3359 "recompilation.c"
    MR_bool recompilation__succeeded = (recompilation__HeadVar__2_1 == recompilation__HeadVar__2_2);

#line 3362 "recompilation.c"
    return recompilation__succeeded;
#line 3364 "recompilation.c"
  }
#line 69 "recompilation.m"
}

#line 66 "recompilation.m"
void MR_CALL 
recompilation____Compare____item_name_0_0(
#line 66 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 66 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 66 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 66 "recompilation.m"
{
#line 66 "recompilation.m"
  {
#line 66 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 66 "recompilation.m"
    MR_Integer recompilation__CastX_9 = (MR_Integer) recompilation__HeadVar__2_2;
#line 66 "recompilation.m"
    MR_Integer recompilation__CastY_10 = (MR_Integer) recompilation__HeadVar__3_3;

#line 66 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_9 == recompilation__CastY_10);
#line 66 "recompilation.m"
    if (recompilation__succeeded)
#line 3393 "recompilation.c"
      *recompilation__HeadVar__1_1 = (MR_Integer) 0;
#line 66 "recompilation.m"
    else
#line 66 "recompilation.m"
      {
#line 66 "recompilation.m"
        MR_Word recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
#line 66 "recompilation.m"
        MR_Integer recompilation__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));
#line 66 "recompilation.m"
        MR_Word recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 0)));
#line 66 "recompilation.m"
        MR_Integer recompilation__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 1)));
#line 66 "recompilation.m"
        MR_Word recompilation__V_8_8;

#line 66 "recompilation.m"
        {
#line 66 "recompilation.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&recompilation__V_8_8, recompilation__V_4_4, recompilation__V_6_6);
        }
#line 3415 "recompilation.c"
        recompilation__succeeded = (recompilation__V_8_8 == (MR_Integer) 0);
#line 66 "recompilation.m"
        recompilation__succeeded = !(recompilation__succeeded);
#line 66 "recompilation.m"
        if (recompilation__succeeded)
#line 66 "recompilation.m"
          *recompilation__HeadVar__1_1 = recompilation__V_8_8;
#line 66 "recompilation.m"
        else
#line 66 "recompilation.m"
          {
#line 66 "recompilation.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(recompilation__HeadVar__1_1, recompilation__V_5_5, recompilation__V_7_7);
#line 66 "recompilation.m"
            return;
          }
#line 66 "recompilation.m"
      }
#line 66 "recompilation.m"
  }
#line 66 "recompilation.m"
}

#line 66 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____item_name_0_0(
#line 66 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 66 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 66 "recompilation.m"
{
#line 66 "recompilation.m"
  {
#line 66 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 66 "recompilation.m"
    MR_Integer recompilation__CastX_7 = (MR_Integer) recompilation__HeadVar__1_1;
#line 66 "recompilation.m"
    MR_Integer recompilation__CastY_8 = (MR_Integer) recompilation__HeadVar__2_2;

#line 66 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_7 == recompilation__CastY_8);
#line 66 "recompilation.m"
    if (recompilation__succeeded)
#line 66 "recompilation.m"
      recompilation__succeeded = MR_TRUE;
#line 66 "recompilation.m"
    else
#line 66 "recompilation.m"
      {
#line 66 "recompilation.m"
        MR_Word recompilation__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 66 "recompilation.m"
        MR_Integer recompilation__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));
#line 66 "recompilation.m"
        MR_Word recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
#line 66 "recompilation.m"
        MR_Integer recompilation__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));

#line 3476 "recompilation.c"
        {
#line 3478 "recompilation.c"
          recompilation__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__V_3_3, recompilation__V_5_5);
        }
#line 66 "recompilation.m"
        if (recompilation__succeeded)
#line 3483 "recompilation.c"
          recompilation__succeeded = (recompilation__V_4_4 == recompilation__V_6_6);
#line 66 "recompilation.m"
      }
#line 66 "recompilation.m"
    return recompilation__succeeded;
#line 66 "recompilation.m"
  }
#line 66 "recompilation.m"
}

#line 165 "recompilation.m"
void MR_CALL 
recompilation____Compare____item_id_set_3_0(
#line 165 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Map_35,
#line 165 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Set_36,
#line 165 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Cons_37,
#line 165 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 165 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 165 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 165 "recompilation.m"
{
#line 165 "recompilation.m"
  {
#line 165 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 165 "recompilation.m"
    MR_Integer recompilation__CastX_33 = (MR_Integer) recompilation__HeadVar__2_2;
#line 165 "recompilation.m"
    MR_Integer recompilation__CastY_34 = (MR_Integer) recompilation__HeadVar__3_3;

#line 165 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_33 == recompilation__CastY_34);
#line 165 "recompilation.m"
    if (recompilation__succeeded)
#line 3524 "recompilation.c"
      *recompilation__HeadVar__1_1 = (MR_Integer) 0;
#line 165 "recompilation.m"
    else
#line 165 "recompilation.m"
      {
#line 165 "recompilation.m"
        MR_Box recompilation__V_4_4 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0));
#line 165 "recompilation.m"
        MR_Box recompilation__V_5_5 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1));
#line 165 "recompilation.m"
        MR_Box recompilation__V_6_6 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 2));
#line 165 "recompilation.m"
        MR_Box recompilation__V_7_7 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 3));
#line 165 "recompilation.m"
        MR_Box recompilation__V_8_8 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 4));
#line 165 "recompilation.m"
        MR_Box recompilation__V_9_9 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 5));
#line 165 "recompilation.m"
        MR_Box recompilation__V_10_10 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 6));
#line 165 "recompilation.m"
        MR_Box recompilation__V_11_11 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 7));
#line 165 "recompilation.m"
        MR_Box recompilation__V_12_12 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 8));
#line 165 "recompilation.m"
        MR_Box recompilation__V_13_13 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 9));
#line 165 "recompilation.m"
        MR_Box recompilation__V_14_14 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 0));
#line 165 "recompilation.m"
        MR_Box recompilation__V_15_15 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 1));
#line 165 "recompilation.m"
        MR_Box recompilation__V_16_16 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 2));
#line 165 "recompilation.m"
        MR_Box recompilation__V_17_17 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 3));
#line 165 "recompilation.m"
        MR_Box recompilation__V_18_18 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 4));
#line 165 "recompilation.m"
        MR_Box recompilation__V_19_19 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 5));
#line 165 "recompilation.m"
        MR_Box recompilation__V_20_20 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 6));
#line 165 "recompilation.m"
        MR_Box recompilation__V_21_21 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 7));
#line 165 "recompilation.m"
        MR_Box recompilation__V_22_22 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 8));
#line 165 "recompilation.m"
        MR_Box recompilation__V_23_23 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 9));
#line 165 "recompilation.m"
        MR_Word recompilation__V_24_24;

#line 165 "recompilation.m"
        {
#line 165 "recompilation.m"
          mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Map_35, &recompilation__V_24_24, recompilation__V_4_4, recompilation__V_14_14);
        }
#line 3578 "recompilation.c"
        recompilation__succeeded = (recompilation__V_24_24 == (MR_Integer) 0);
#line 165 "recompilation.m"
        recompilation__succeeded = !(recompilation__succeeded);
#line 165 "recompilation.m"
        if (recompilation__succeeded)
#line 165 "recompilation.m"
          *recompilation__HeadVar__1_1 = recompilation__V_24_24;
#line 165 "recompilation.m"
        else
#line 165 "recompilation.m"
          {
#line 165 "recompilation.m"
            MR_Word recompilation__V_25_25;

#line 165 "recompilation.m"
            {
#line 165 "recompilation.m"
              mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Map_35, &recompilation__V_25_25, recompilation__V_5_5, recompilation__V_15_15);
            }
#line 3598 "recompilation.c"
            recompilation__succeeded = (recompilation__V_25_25 == (MR_Integer) 0);
#line 165 "recompilation.m"
            recompilation__succeeded = !(recompilation__succeeded);
#line 165 "recompilation.m"
            if (recompilation__succeeded)
#line 165 "recompilation.m"
              *recompilation__HeadVar__1_1 = recompilation__V_25_25;
#line 165 "recompilation.m"
            else
#line 165 "recompilation.m"
              {
#line 165 "recompilation.m"
                MR_Word recompilation__V_26_26;

#line 165 "recompilation.m"
                {
#line 165 "recompilation.m"
                  mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Map_35, &recompilation__V_26_26, recompilation__V_6_6, recompilation__V_16_16);
                }
#line 3618 "recompilation.c"
                recompilation__succeeded = (recompilation__V_26_26 == (MR_Integer) 0);
#line 165 "recompilation.m"
                recompilation__succeeded = !(recompilation__succeeded);
#line 165 "recompilation.m"
                if (recompilation__succeeded)
#line 165 "recompilation.m"
                  *recompilation__HeadVar__1_1 = recompilation__V_26_26;
#line 165 "recompilation.m"
                else
#line 165 "recompilation.m"
                  {
#line 165 "recompilation.m"
                    MR_Word recompilation__V_27_27;

#line 165 "recompilation.m"
                    {
#line 165 "recompilation.m"
                      mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Map_35, &recompilation__V_27_27, recompilation__V_7_7, recompilation__V_17_17);
                    }
#line 3638 "recompilation.c"
                    recompilation__succeeded = (recompilation__V_27_27 == (MR_Integer) 0);
#line 165 "recompilation.m"
                    recompilation__succeeded = !(recompilation__succeeded);
#line 165 "recompilation.m"
                    if (recompilation__succeeded)
#line 165 "recompilation.m"
                      *recompilation__HeadVar__1_1 = recompilation__V_27_27;
#line 165 "recompilation.m"
                    else
#line 165 "recompilation.m"
                      {
#line 165 "recompilation.m"
                        MR_Word recompilation__V_28_28;

#line 165 "recompilation.m"
                        {
#line 165 "recompilation.m"
                          mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Map_35, &recompilation__V_28_28, recompilation__V_8_8, recompilation__V_18_18);
                        }
#line 3658 "recompilation.c"
                        recompilation__succeeded = (recompilation__V_28_28 == (MR_Integer) 0);
#line 165 "recompilation.m"
                        recompilation__succeeded = !(recompilation__succeeded);
#line 165 "recompilation.m"
                        if (recompilation__succeeded)
#line 165 "recompilation.m"
                          *recompilation__HeadVar__1_1 = recompilation__V_28_28;
#line 165 "recompilation.m"
                        else
#line 165 "recompilation.m"
                          {
#line 165 "recompilation.m"
                            MR_Word recompilation__V_29_29;

#line 165 "recompilation.m"
                            {
#line 165 "recompilation.m"
                              mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Cons_37, &recompilation__V_29_29, recompilation__V_9_9, recompilation__V_19_19);
                            }
#line 3678 "recompilation.c"
                            recompilation__succeeded = (recompilation__V_29_29 == (MR_Integer) 0);
#line 165 "recompilation.m"
                            recompilation__succeeded = !(recompilation__succeeded);
#line 165 "recompilation.m"
                            if (recompilation__succeeded)
#line 165 "recompilation.m"
                              *recompilation__HeadVar__1_1 = recompilation__V_29_29;
#line 165 "recompilation.m"
                            else
#line 165 "recompilation.m"
                              {
#line 165 "recompilation.m"
                                MR_Word recompilation__V_30_30;

#line 165 "recompilation.m"
                                {
#line 165 "recompilation.m"
                                  mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Set_36, &recompilation__V_30_30, recompilation__V_10_10, recompilation__V_20_20);
                                }
#line 3698 "recompilation.c"
                                recompilation__succeeded = (recompilation__V_30_30 == (MR_Integer) 0);
#line 165 "recompilation.m"
                                recompilation__succeeded = !(recompilation__succeeded);
#line 165 "recompilation.m"
                                if (recompilation__succeeded)
#line 165 "recompilation.m"
                                  *recompilation__HeadVar__1_1 = recompilation__V_30_30;
#line 165 "recompilation.m"
                                else
#line 165 "recompilation.m"
                                  {
#line 165 "recompilation.m"
                                    MR_Word recompilation__V_31_31;

#line 165 "recompilation.m"
                                    {
#line 165 "recompilation.m"
                                      mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Set_36, &recompilation__V_31_31, recompilation__V_11_11, recompilation__V_21_21);
                                    }
#line 3718 "recompilation.c"
                                    recompilation__succeeded = (recompilation__V_31_31 == (MR_Integer) 0);
#line 165 "recompilation.m"
                                    recompilation__succeeded = !(recompilation__succeeded);
#line 165 "recompilation.m"
                                    if (recompilation__succeeded)
#line 165 "recompilation.m"
                                      *recompilation__HeadVar__1_1 = recompilation__V_31_31;
#line 165 "recompilation.m"
                                    else
#line 165 "recompilation.m"
                                      {
#line 165 "recompilation.m"
                                        MR_Word recompilation__V_32_32;

#line 165 "recompilation.m"
                                        {
#line 165 "recompilation.m"
                                          mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Set_36, &recompilation__V_32_32, recompilation__V_12_12, recompilation__V_22_22);
                                        }
#line 3738 "recompilation.c"
                                        recompilation__succeeded = (recompilation__V_32_32 == (MR_Integer) 0);
#line 165 "recompilation.m"
                                        recompilation__succeeded = !(recompilation__succeeded);
#line 165 "recompilation.m"
                                        if (recompilation__succeeded)
#line 165 "recompilation.m"
                                          *recompilation__HeadVar__1_1 = recompilation__V_32_32;
#line 165 "recompilation.m"
                                        else
#line 165 "recompilation.m"
                                          {
#line 165 "recompilation.m"
                                            mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Set_36, recompilation__HeadVar__1_1, recompilation__V_13_13, recompilation__V_23_23);
#line 165 "recompilation.m"
                                            return;
                                          }
#line 165 "recompilation.m"
                                      }
#line 165 "recompilation.m"
                                  }
#line 165 "recompilation.m"
                              }
#line 165 "recompilation.m"
                          }
#line 165 "recompilation.m"
                      }
#line 165 "recompilation.m"
                  }
#line 165 "recompilation.m"
              }
#line 165 "recompilation.m"
          }
#line 165 "recompilation.m"
      }
#line 165 "recompilation.m"
  }
#line 165 "recompilation.m"
}

#line 165 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____item_id_set_3_0(
#line 165 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Map_25,
#line 165 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Set_26,
#line 165 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Cons_27,
#line 165 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 165 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 165 "recompilation.m"
{
#line 165 "recompilation.m"
  {
#line 165 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 165 "recompilation.m"
    MR_Integer recompilation__CastX_23 = (MR_Integer) recompilation__HeadVar__1_1;
#line 165 "recompilation.m"
    MR_Integer recompilation__CastY_24 = (MR_Integer) recompilation__HeadVar__2_2;

#line 165 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_23 == recompilation__CastY_24);
#line 165 "recompilation.m"
    if (recompilation__succeeded)
#line 165 "recompilation.m"
      recompilation__succeeded = MR_TRUE;
#line 165 "recompilation.m"
    else
#line 165 "recompilation.m"
      {
#line 165 "recompilation.m"
        MR_Box recompilation__V_3_3 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0));
#line 165 "recompilation.m"
        MR_Box recompilation__V_4_4 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1));
#line 165 "recompilation.m"
        MR_Box recompilation__V_5_5 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 2));
#line 165 "recompilation.m"
        MR_Box recompilation__V_6_6 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 3));
#line 165 "recompilation.m"
        MR_Box recompilation__V_7_7 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 4));
#line 165 "recompilation.m"
        MR_Box recompilation__V_8_8 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 5));
#line 165 "recompilation.m"
        MR_Box recompilation__V_9_9 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 6));
#line 165 "recompilation.m"
        MR_Box recompilation__V_10_10 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 7));
#line 165 "recompilation.m"
        MR_Box recompilation__V_11_11 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 8));
#line 165 "recompilation.m"
        MR_Box recompilation__V_12_12 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 9));
#line 165 "recompilation.m"
        MR_Box recompilation__V_13_13 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0));
#line 165 "recompilation.m"
        MR_Box recompilation__V_14_14 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1));
#line 165 "recompilation.m"
        MR_Box recompilation__V_15_15 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 2));
#line 165 "recompilation.m"
        MR_Box recompilation__V_16_16 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 3));
#line 165 "recompilation.m"
        MR_Box recompilation__V_17_17 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 4));
#line 165 "recompilation.m"
        MR_Box recompilation__V_18_18 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 5));
#line 165 "recompilation.m"
        MR_Box recompilation__V_19_19 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 6));
#line 165 "recompilation.m"
        MR_Box recompilation__V_20_20 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 7));
#line 165 "recompilation.m"
        MR_Box recompilation__V_21_21 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 8));
#line 165 "recompilation.m"
        MR_Box recompilation__V_22_22 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 9));

#line 3853 "recompilation.c"
        {
#line 3855 "recompilation.c"
          recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Map_25, recompilation__V_3_3, recompilation__V_13_13);
        }
#line 165 "recompilation.m"
        if (recompilation__succeeded)
#line 165 "recompilation.m"
          {
#line 3862 "recompilation.c"
            {
#line 3864 "recompilation.c"
              recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Map_25, recompilation__V_4_4, recompilation__V_14_14);
            }
#line 165 "recompilation.m"
            if (recompilation__succeeded)
#line 165 "recompilation.m"
              {
#line 3871 "recompilation.c"
                {
#line 3873 "recompilation.c"
                  recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Map_25, recompilation__V_5_5, recompilation__V_15_15);
                }
#line 165 "recompilation.m"
                if (recompilation__succeeded)
#line 165 "recompilation.m"
                  {
#line 3880 "recompilation.c"
                    {
#line 3882 "recompilation.c"
                      recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Map_25, recompilation__V_6_6, recompilation__V_16_16);
                    }
#line 165 "recompilation.m"
                    if (recompilation__succeeded)
#line 165 "recompilation.m"
                      {
#line 3889 "recompilation.c"
                        {
#line 3891 "recompilation.c"
                          recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Map_25, recompilation__V_7_7, recompilation__V_17_17);
                        }
#line 165 "recompilation.m"
                        if (recompilation__succeeded)
#line 165 "recompilation.m"
                          {
#line 3898 "recompilation.c"
                            {
#line 3900 "recompilation.c"
                              recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Cons_27, recompilation__V_8_8, recompilation__V_18_18);
                            }
#line 165 "recompilation.m"
                            if (recompilation__succeeded)
#line 165 "recompilation.m"
                              {
#line 3907 "recompilation.c"
                                {
#line 3909 "recompilation.c"
                                  recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Set_26, recompilation__V_9_9, recompilation__V_19_19);
                                }
#line 165 "recompilation.m"
                                if (recompilation__succeeded)
#line 165 "recompilation.m"
                                  {
#line 3916 "recompilation.c"
                                    {
#line 3918 "recompilation.c"
                                      recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Set_26, recompilation__V_10_10, recompilation__V_20_20);
                                    }
#line 165 "recompilation.m"
                                    if (recompilation__succeeded)
#line 165 "recompilation.m"
                                      {
#line 3925 "recompilation.c"
                                        {
#line 3927 "recompilation.c"
                                          recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Set_26, recompilation__V_11_11, recompilation__V_21_21);
                                        }
#line 165 "recompilation.m"
                                        if (recompilation__succeeded)
#line 3932 "recompilation.c"
                                          {
#line 3934 "recompilation.c"
                                            return recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Set_26, recompilation__V_12_12, recompilation__V_22_22);
                                          }
#line 165 "recompilation.m"
                                      }
#line 165 "recompilation.m"
                                  }
#line 165 "recompilation.m"
                              }
#line 165 "recompilation.m"
                          }
#line 165 "recompilation.m"
                      }
#line 165 "recompilation.m"
                  }
#line 165 "recompilation.m"
              }
#line 165 "recompilation.m"
          }
#line 165 "recompilation.m"
      }
#line 165 "recompilation.m"
    return recompilation__succeeded;
#line 165 "recompilation.m"
  }
#line 165 "recompilation.m"
}

#line 179 "recompilation.m"
void MR_CALL 
recompilation____Compare____item_id_set_1_0(
#line 179 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_6,
#line 179 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 179 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 179 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 179 "recompilation.m"
{
#line 179 "recompilation.m"
  {
#line 179 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 179 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 179 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 179 "recompilation.m"
    {
#line 179 "recompilation.m"
      recompilation____Compare____item_id_set_3_0(recompilation__TypeInfo_for_T_6, recompilation__TypeInfo_for_T_6, recompilation__TypeInfo_for_T_6, recompilation__HeadVar__1_1, recompilation__Cast_HeadVar1_4, recompilation__Cast_HeadVar2_5);
#line 179 "recompilation.m"
      return;
    }
#line 179 "recompilation.m"
  }
#line 179 "recompilation.m"
}

#line 179 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____item_id_set_1_0(
#line 179 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_5,
#line 179 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 179 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 179 "recompilation.m"
{
#line 179 "recompilation.m"
  {
#line 179 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 179 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 179 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 179 "recompilation.m"
    {
#line 179 "recompilation.m"
      return recompilation__succeeded = recompilation____Unify____item_id_set_3_0(recompilation__TypeInfo_for_T_5, recompilation__TypeInfo_for_T_5, recompilation__TypeInfo_for_T_5, recompilation__Cast_HeadVar1_3, recompilation__Cast_HeadVar2_4);
    }
#line 179 "recompilation.m"
    return recompilation__succeeded;
#line 179 "recompilation.m"
  }
#line 179 "recompilation.m"
}

#line 63 "recompilation.m"
void MR_CALL 
recompilation____Compare____item_id_0_0(
#line 63 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 63 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 63 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 63 "recompilation.m"
{
#line 63 "recompilation.m"
  {
#line 63 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 63 "recompilation.m"
    MR_Integer recompilation__CastX_9 = (MR_Integer) recompilation__HeadVar__2_2;
#line 63 "recompilation.m"
    MR_Integer recompilation__CastY_10 = (MR_Integer) recompilation__HeadVar__3_3;

#line 63 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_9 == recompilation__CastY_10);
#line 63 "recompilation.m"
    if (recompilation__succeeded)
#line 4052 "recompilation.c"
      *recompilation__HeadVar__1_1 = (MR_Integer) 0;
#line 63 "recompilation.m"
    else
#line 63 "recompilation.m"
      {
#line 63 "recompilation.m"
        MR_Word recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
#line 63 "recompilation.m"
        MR_Word recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));
#line 63 "recompilation.m"
        MR_Word recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 0)));
#line 63 "recompilation.m"
        MR_Word recompilation__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 1)));
#line 63 "recompilation.m"
        MR_Word recompilation__V_8_8;
#line 63 "recompilation.m"
        MR_Integer recompilation__V_13_13 = (MR_Integer) recompilation__V_4_4;
#line 63 "recompilation.m"
        MR_Integer recompilation__V_14_14 = (MR_Integer) recompilation__V_6_6;

#line 63 "recompilation.m"
        {
#line 63 "recompilation.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&recompilation__V_8_8, recompilation__V_13_13, recompilation__V_14_14);
        }
#line 4078 "recompilation.c"
        recompilation__succeeded = (recompilation__V_8_8 == (MR_Integer) 0);
#line 63 "recompilation.m"
        recompilation__succeeded = !(recompilation__succeeded);
#line 63 "recompilation.m"
        if (recompilation__succeeded)
#line 63 "recompilation.m"
          *recompilation__HeadVar__1_1 = recompilation__V_8_8;
#line 63 "recompilation.m"
        else
#line 63 "recompilation.m"
          {
#line 63 "recompilation.m"
            recompilation____Compare____item_name_0_0(recompilation__HeadVar__1_1, recompilation__V_5_5, recompilation__V_7_7);
#line 63 "recompilation.m"
            return;
          }
#line 63 "recompilation.m"
      }
#line 63 "recompilation.m"
  }
#line 63 "recompilation.m"
}

#line 63 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____item_id_0_0(
#line 63 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 63 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 63 "recompilation.m"
{
#line 63 "recompilation.m"
  {
#line 63 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 63 "recompilation.m"
    MR_Integer recompilation__CastX_7 = (MR_Integer) recompilation__HeadVar__1_1;
#line 63 "recompilation.m"
    MR_Integer recompilation__CastY_8 = (MR_Integer) recompilation__HeadVar__2_2;

#line 63 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_7 == recompilation__CastY_8);
#line 63 "recompilation.m"
    if (recompilation__succeeded)
#line 63 "recompilation.m"
      recompilation__succeeded = MR_TRUE;
#line 63 "recompilation.m"
    else
#line 63 "recompilation.m"
      {
#line 63 "recompilation.m"
        MR_Word recompilation__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 63 "recompilation.m"
        MR_Word recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));
#line 63 "recompilation.m"
        MR_Word recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
#line 63 "recompilation.m"
        MR_Word recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));

#line 4139 "recompilation.c"
        recompilation__succeeded = (recompilation__V_3_3 == recompilation__V_5_5);
#line 63 "recompilation.m"
        if (recompilation__succeeded)
#line 4143 "recompilation.c"
          {
#line 4145 "recompilation.c"
            return recompilation__succeeded = recompilation____Unify____item_name_0_0(recompilation__V_4_4, recompilation__V_6_6);
          }
#line 63 "recompilation.m"
      }
#line 63 "recompilation.m"
    return recompilation__succeeded;
#line 63 "recompilation.m"
  }
#line 63 "recompilation.m"
}

#line 250 "recompilation.m"
void MR_CALL 
recompilation____Compare____instance_version_numbers_0_0(
#line 250 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 250 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 250 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 250 "recompilation.m"
{
#line 250 "recompilation.m"
  {
#line 250 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 250 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 250 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 250 "recompilation.m"
    {
#line 250 "recompilation.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[3], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
#line 250 "recompilation.m"
      return;
    }
#line 250 "recompilation.m"
  }
#line 250 "recompilation.m"
}

#line 250 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____instance_version_numbers_0_0(
#line 250 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 250 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 250 "recompilation.m"
{
#line 250 "recompilation.m"
  {
#line 250 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 250 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 250 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 250 "recompilation.m"
    {
#line 250 "recompilation.m"
      return recompilation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation_scalar_common_2[3], ((MR_Box) (recompilation__Cast_HeadVar1_3)), ((MR_Box) (recompilation__Cast_HeadVar2_4)));
    }
#line 250 "recompilation.m"
    return recompilation__succeeded;
#line 250 "recompilation.m"
  }
#line 250 "recompilation.m"
}

#line 197 "recompilation.m"
void MR_CALL 
recompilation____Compare____functor_set_0_0(
#line 197 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 197 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 197 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 197 "recompilation.m"
{
#line 197 "recompilation.m"
  {
#line 197 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 197 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 197 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 197 "recompilation.m"
    {
#line 197 "recompilation.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[2], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
#line 197 "recompilation.m"
      return;
    }
#line 197 "recompilation.m"
  }
#line 197 "recompilation.m"
}

#line 197 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____functor_set_0_0(
#line 197 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 197 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 197 "recompilation.m"
{
#line 197 "recompilation.m"
  {
#line 197 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 197 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 197 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 197 "recompilation.m"
    {
#line 197 "recompilation.m"
      return recompilation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation_scalar_common_2[2], ((MR_Box) (recompilation__Cast_HeadVar1_3)), ((MR_Box) (recompilation__Cast_HeadVar2_4)));
    }
#line 197 "recompilation.m"
    return recompilation__succeeded;
#line 197 "recompilation.m"
  }
#line 197 "recompilation.m"
}

#line 259 "recompilation.m"
MR_Word MR_CALL 
recompilation__module_qualify_name_2_f_0(
#line 259 "recompilation.m"
  MR_Word recompilation__Qualifier_4,
#line 259 "recompilation.m"
  MR_String recompilation__Name_5)
#line 259 "recompilation.m"
{
#line 396 "recompilation.m"
  {
#line 396 "recompilation.m"
    MR_bool recompilation__succeeded = ((MR_tag((MR_Word) recompilation__Qualifier_4)) == (MR_mktag((MR_Integer) 0)));
#line 396 "recompilation.m"
    MR_Word recompilation__HeadVar__3_3;
#line 397 "recompilation.m"
    MR_String recompilation__V_6_6;

#line 397 "recompilation.m"
    if (recompilation__succeeded)
#line 397 "recompilation.m"
      {
#line 397 "recompilation.m"
        recompilation__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__Qualifier_4, (MR_Integer) 0)));
#line 397 "recompilation.m"
        recompilation__succeeded = (strcmp(recompilation__V_6_6, (MR_String) "") == 0);
#line 397 "recompilation.m"
      }
#line 396 "recompilation.m"
    if (recompilation__succeeded)
#line 398 "recompilation.m"
      {
#line 398 "recompilation.m"
        recompilation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 398 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, 0) = ((MR_Box) (recompilation__Name_5));
#line 398 "recompilation.m"
      }
#line 396 "recompilation.m"
    else
#line 400 "recompilation.m"
      {
#line 400 "recompilation.m"
        recompilation__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 400 "recompilation.m"
        MR_hl_field(MR_mktag(1), recompilation__HeadVar__3_3, 0) = ((MR_Box) (recompilation__Qualifier_4));
#line 400 "recompilation.m"
        MR_hl_field(MR_mktag(1), recompilation__HeadVar__3_3, 1) = ((MR_Box) (recompilation__Name_5));
#line 400 "recompilation.m"
      }
#line 396 "recompilation.m"
    return recompilation__HeadVar__3_3;
#line 396 "recompilation.m"
  }
#line 259 "recompilation.m"
}

#line 257 "recompilation.m"
MR_Word MR_CALL 
recompilation__find_module_qualifier_1_f_0(
#line 257 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 257 "recompilation.m"
{
#line 393 "recompilation.m"
  {
#line 393 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 393 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;

#line 393 "recompilation.m"
    if (((MR_tag((MR_Word) recompilation__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 394 "recompilation.m"
      {
#line 394 "recompilation.m"
        MR_String recompilation__V_6_6;

#line 394 "recompilation.m"
        recompilation__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 394 "recompilation.m"
        recompilation__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__HeadVar__1_1, (MR_Integer) 1)));
#line 394 "recompilation.m"
      }
#line 393 "recompilation.m"
    else
#line 393 "recompilation.m"
      {
#line 393 "recompilation.m"
        recompilation__HeadVar__2_2 = (MR_Word) &recompilation_scalar_common_4[0];
#line 393 "recompilation.m"
      }
#line 393 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 393 "recompilation.m"
  }
#line 257 "recompilation.m"
}

#line 382 "recompilation.m"
static MR_Box MR_CALL 
recompilation__map_ids_3_f_0_1(
#line 382 "recompilation.m"
  MR_Box recompilation__closure_arg,
#line 382 "recompilation.m"
  MR_Box recompilation__wrapper_arg_1,
#line 382 "recompilation.m"
  MR_Box recompilation__wrapper_arg_2)
#line 382 "recompilation.m"
{
#line 382 "recompilation.m"
  {
#line 382 "recompilation.m"
    MR_Box recompilation__wrapper_arg_3;
#line 382 "recompilation.m"
    MR_Box recompilation__closure = recompilation__closure_arg;
#line 382 "recompilation.m"
    MR_Word recompilation__conv0_HeadVar__7_15;

#line 382 "recompilation.m"
    {
#line 382 "recompilation.m"
      recompilation__conv0_HeadVar__7_15 = recompilation__IntroducedFrom__func__map_ids__382__1_6_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__closure, (MR_Integer) 6))), ((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 382 "recompilation.m"
    recompilation__wrapper_arg_3 = ((MR_Box) (recompilation__conv0_HeadVar__7_15));
#line 382 "recompilation.m"
    return recompilation__wrapper_arg_3;
#line 382 "recompilation.m"
  }
#line 382 "recompilation.m"
}

#line 232 "recompilation.m"
MR_Word MR_CALL 
recompilation__map_ids_3_f_0(
#line 232 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_37,
#line 232 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_U_38,
#line 232 "recompilation.m"
  MR_Word recompilation__Func_5,
#line 232 "recompilation.m"
  MR_Word recompilation__Items0_6,
#line 232 "recompilation.m"
  MR_Box recompilation__Init_7)
#line 232 "recompilation.m"
{
#line 380 "recompilation.m"
  {
#line 380 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 380 "recompilation.m"
    MR_Word recompilation__Items_8;
#line 380 "recompilation.m"
    MR_Word recompilation__TypeInfo_41_41;
#line 380 "recompilation.m"
    MR_Word recompilation__Items1_9;
#line 380 "recompilation.m"
    MR_Word recompilation__V_12_12;
#line 382 "recompilation.m"
    MR_Box recompilation__conv1_Items_8;

#line 326 "recompilation.m"
    {
#line 326 "recompilation.m"
      recompilation__Items1_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 326 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 0) = recompilation__Init_7;
#line 326 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 1) = recompilation__Init_7;
#line 326 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 2) = recompilation__Init_7;
#line 326 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 3) = recompilation__Init_7;
#line 326 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 4) = recompilation__Init_7;
#line 326 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 5) = recompilation__Init_7;
#line 326 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 6) = recompilation__Init_7;
#line 326 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 7) = recompilation__Init_7;
#line 326 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 8) = recompilation__Init_7;
#line 326 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 9) = recompilation__Init_7;
#line 326 "recompilation.m"
    }
#line 4470 "recompilation.c"
    {
#line 4472 "recompilation.c"
      recompilation__TypeInfo_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 4474 "recompilation.c"
      MR_hl_field(MR_mktag(0), recompilation__TypeInfo_41_41, 0) = ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_set_3));
#line 4476 "recompilation.c"
      MR_hl_field(MR_mktag(0), recompilation__TypeInfo_41_41, 1) = ((MR_Box) (recompilation__TypeInfo_for_U_38));
#line 4478 "recompilation.c"
      MR_hl_field(MR_mktag(0), recompilation__TypeInfo_41_41, 2) = ((MR_Box) (recompilation__TypeInfo_for_U_38));
#line 4480 "recompilation.c"
      MR_hl_field(MR_mktag(0), recompilation__TypeInfo_41_41, 3) = ((MR_Box) (recompilation__TypeInfo_for_U_38));
#line 4482 "recompilation.c"
    }
#line 382 "recompilation.m"
    {
#line 382 "recompilation.m"
      recompilation__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 382 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_12_12, 0) = ((MR_Box) (&recompilation_scalar_common_6[0]));
#line 382 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_12_12, 1) = ((MR_Box) (recompilation__map_ids_3_f_0_1));
#line 382 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 382 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_12_12, 3) = ((MR_Box) (recompilation__TypeInfo_for_T_37));
#line 382 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_12_12, 4) = ((MR_Box) (recompilation__TypeInfo_for_U_38));
#line 382 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_12_12, 5) = ((MR_Box) (recompilation__Func_5));
#line 382 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_12_12, 6) = ((MR_Box) (recompilation__Items0_6));
#line 382 "recompilation.m"
    }
#line 382 "recompilation.m"
    {
#line 382 "recompilation.m"
      recompilation__conv1_Items_8 = mercury__list__foldl_3_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_type_0, recompilation__TypeInfo_41_41, (MR_Word) recompilation__V_12_12, (MR_Word) MR_mkword(MR_mktag(1), &recompilation_scalar_common_1[8]), ((MR_Box) (recompilation__Items1_9)));
    }
#line 382 "recompilation.m"
    recompilation__Items_8 = ((MR_Word) recompilation__conv1_Items_8);
#line 380 "recompilation.m"
    return recompilation__Items_8;
#line 380 "recompilation.m"
  }
#line 232 "recompilation.m"
}

#line 230 "recompilation.m"
MR_Word MR_CALL 
recompilation__update_ids_3_f_0(
#line 230 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_125,
#line 230 "recompilation.m"
  MR_Word recompilation__Items_1,
#line 230 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 230 "recompilation.m"
  MR_Box recompilation__IdMap_3)
#line 230 "recompilation.m"
{
#line 369 "recompilation.m"
  {
#line 369 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 369 "recompilation.m"
    MR_Word recompilation__HeadVar__4_4;
#line 369 "recompilation.m"
    MR_Box recompilation__V_126_126 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 9));
#line 369 "recompilation.m"
    MR_Box recompilation__V_127_127 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 8));
#line 369 "recompilation.m"
    MR_Box recompilation__V_128_128 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 7));
#line 369 "recompilation.m"
    MR_Box recompilation__V_129_129 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 6));
#line 369 "recompilation.m"
    MR_Box recompilation__V_130_130 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 5));
#line 369 "recompilation.m"
    MR_Box recompilation__V_131_131 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 4));
#line 369 "recompilation.m"
    MR_Box recompilation__V_132_132 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 3));
#line 369 "recompilation.m"
    MR_Box recompilation__V_133_133 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 2));
#line 369 "recompilation.m"
    MR_Box recompilation__V_134_134 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 1));
#line 369 "recompilation.m"
    MR_Box recompilation__V_135_135 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 0));

#line 369 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 9))
#line 378 "recompilation.m"
      {
#line 378 "recompilation.m"
        recompilation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 378 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 0) = recompilation__V_135_135;
#line 378 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 1) = recompilation__V_134_134;
#line 378 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 2) = recompilation__V_133_133;
#line 378 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 3) = recompilation__V_132_132;
#line 378 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 4) = recompilation__V_131_131;
#line 378 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 5) = recompilation__V_130_130;
#line 378 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 6) = recompilation__V_129_129;
#line 378 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 7) = recompilation__V_128_128;
#line 378 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 8) = recompilation__V_127_127;
#line 378 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 9) = recompilation__IdMap_3;
#line 378 "recompilation.m"
      }
#line 369 "recompilation.m"
    else
#line 369 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 7))
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
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 5) = recompilation__V_130_130;
#line 375 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 6) = recompilation__V_129_129;
#line 375 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 7) = recompilation__IdMap_3;
#line 375 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 8) = recompilation__V_127_127;
#line 375 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 9) = recompilation__V_126_126;
#line 375 "recompilation.m"
      }
#line 369 "recompilation.m"
    else
#line 369 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 5))
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
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 5) = recompilation__IdMap_3;
#line 376 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 6) = recompilation__V_129_129;
#line 376 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 7) = recompilation__V_128_128;
#line 376 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 8) = recompilation__V_127_127;
#line 376 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 9) = recompilation__V_126_126;
#line 376 "recompilation.m"
      }
#line 369 "recompilation.m"
    else
#line 369 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 3))
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
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 3) = recompilation__IdMap_3;
#line 372 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 4) = recompilation__V_131_131;
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
#line 369 "recompilation.m"
    else
#line 369 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 2))
#line 371 "recompilation.m"
      {
#line 371 "recompilation.m"
        recompilation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 371 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 0) = recompilation__V_135_135;
#line 371 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 1) = recompilation__V_134_134;
#line 371 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 2) = recompilation__IdMap_3;
#line 371 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 3) = recompilation__V_132_132;
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
#line 369 "recompilation.m"
    else
#line 369 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 8))
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
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 8) = recompilation__IdMap_3;
#line 377 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 9) = recompilation__V_126_126;
#line 377 "recompilation.m"
      }
#line 369 "recompilation.m"
    else
#line 369 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 6))
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
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 6) = recompilation__IdMap_3;
#line 374 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 7) = recompilation__V_128_128;
#line 374 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 8) = recompilation__V_127_127;
#line 374 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 9) = recompilation__V_126_126;
#line 374 "recompilation.m"
      }
#line 369 "recompilation.m"
    else
#line 369 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 0))
#line 369 "recompilation.m"
      {
#line 369 "recompilation.m"
        recompilation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 369 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 0) = recompilation__IdMap_3;
#line 369 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 1) = recompilation__V_134_134;
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
#line 369 "recompilation.m"
    else
#line 369 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 1))
#line 370 "recompilation.m"
      {
#line 370 "recompilation.m"
        recompilation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 370 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 0) = recompilation__V_135_135;
#line 370 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 1) = recompilation__IdMap_3;
#line 370 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 2) = recompilation__V_133_133;
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
#line 369 "recompilation.m"
    else
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
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 4) = recompilation__IdMap_3;
#line 373 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 5) = recompilation__V_130_130;
#line 373 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 6) = recompilation__V_129_129;
#line 373 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 7) = recompilation__V_128_128;
#line 373 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 8) = recompilation__V_127_127;
#line 373 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 9) = recompilation__V_126_126;
#line 373 "recompilation.m"
      }
#line 369 "recompilation.m"
    return recompilation__HeadVar__4_4;
#line 369 "recompilation.m"
  }
#line 230 "recompilation.m"
}

#line 228 "recompilation.m"
MR_Box MR_CALL 
recompilation__extract_ids_2_f_0(
#line 228 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_104,
#line 228 "recompilation.m"
  MR_Word recompilation__Items_1,
#line 228 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 228 "recompilation.m"
{
#line 358 "recompilation.m"
  {
#line 358 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 358 "recompilation.m"
    MR_Box recompilation__HeadVar__3_3;
#line 358 "recompilation.m"
    MR_Box recompilation__V_105_105 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 9));
#line 358 "recompilation.m"
    MR_Box recompilation__V_106_106 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 8));
#line 358 "recompilation.m"
    MR_Box recompilation__V_107_107 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 7));
#line 358 "recompilation.m"
    MR_Box recompilation__V_108_108 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 6));
#line 358 "recompilation.m"
    MR_Box recompilation__V_109_109 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 5));
#line 358 "recompilation.m"
    MR_Box recompilation__V_110_110 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 4));
#line 358 "recompilation.m"
    MR_Box recompilation__V_111_111 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 3));
#line 358 "recompilation.m"
    MR_Box recompilation__V_112_112 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 2));
#line 358 "recompilation.m"
    MR_Box recompilation__V_113_113 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 1));
#line 358 "recompilation.m"
    MR_Box recompilation__V_114_114 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 0));

#line 358 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 9))
#line 367 "recompilation.m"
      recompilation__HeadVar__3_3 = recompilation__V_105_105;
#line 358 "recompilation.m"
    else
#line 358 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 7))
#line 365 "recompilation.m"
      recompilation__HeadVar__3_3 = recompilation__V_107_107;
#line 358 "recompilation.m"
    else
#line 358 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 5))
#line 363 "recompilation.m"
      recompilation__HeadVar__3_3 = recompilation__V_109_109;
#line 358 "recompilation.m"
    else
#line 358 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 3))
#line 361 "recompilation.m"
      recompilation__HeadVar__3_3 = recompilation__V_111_111;
#line 358 "recompilation.m"
    else
#line 358 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 2))
#line 360 "recompilation.m"
      recompilation__HeadVar__3_3 = recompilation__V_112_112;
#line 358 "recompilation.m"
    else
#line 358 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 8))
#line 366 "recompilation.m"
      recompilation__HeadVar__3_3 = recompilation__V_106_106;
#line 358 "recompilation.m"
    else
#line 358 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 6))
#line 364 "recompilation.m"
      recompilation__HeadVar__3_3 = recompilation__V_108_108;
#line 358 "recompilation.m"
    else
#line 358 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 0))
#line 358 "recompilation.m"
      recompilation__HeadVar__3_3 = recompilation__V_114_114;
#line 358 "recompilation.m"
    else
#line 358 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 1))
#line 359 "recompilation.m"
      recompilation__HeadVar__3_3 = recompilation__V_113_113;
#line 358 "recompilation.m"
    else
#line 362 "recompilation.m"
      recompilation__HeadVar__3_3 = recompilation__V_110_110;
#line 358 "recompilation.m"
    return recompilation__HeadVar__3_3;
#line 358 "recompilation.m"
  }
#line 228 "recompilation.m"
}

#line 224 "recompilation.m"
MR_Word MR_CALL 
recompilation__update_pred_or_func_set_3_f_0(
#line 224 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Simple_29,
#line 224 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_PorF_30,
#line 224 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Cons_31,
#line 224 "recompilation.m"
  MR_Word recompilation__Items_1,
#line 224 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 224 "recompilation.m"
  MR_Box recompilation__Set_3)
#line 224 "recompilation.m"
{
#line 353 "recompilation.m"
  {
#line 353 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 353 "recompilation.m"
    MR_Word recompilation__HeadVar__4_4;
#line 353 "recompilation.m"
    MR_Box recompilation__V_32_32 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 9));
#line 353 "recompilation.m"
    MR_Box recompilation__V_33_33 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 8));
#line 353 "recompilation.m"
    MR_Box recompilation__V_34_34 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 7));
#line 353 "recompilation.m"
    MR_Box recompilation__V_35_35 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 6));
#line 353 "recompilation.m"
    MR_Box recompilation__V_36_36 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 5));
#line 353 "recompilation.m"
    MR_Box recompilation__V_37_37 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 4));
#line 353 "recompilation.m"
    MR_Box recompilation__V_38_38 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 3));
#line 353 "recompilation.m"
    MR_Box recompilation__V_39_39 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 2));
#line 353 "recompilation.m"
    MR_Box recompilation__V_40_40 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 1));
#line 353 "recompilation.m"
    MR_Box recompilation__V_41_41 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 0));

#line 353 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 7))
#line 355 "recompilation.m"
      {
#line 355 "recompilation.m"
        recompilation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 355 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 0) = recompilation__V_41_41;
#line 355 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 1) = recompilation__V_40_40;
#line 355 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 2) = recompilation__V_39_39;
#line 355 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 3) = recompilation__V_38_38;
#line 355 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 4) = recompilation__V_37_37;
#line 355 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 5) = recompilation__V_36_36;
#line 355 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 6) = recompilation__V_35_35;
#line 355 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 7) = recompilation__Set_3;
#line 355 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 8) = recompilation__V_33_33;
#line 355 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 9) = recompilation__V_32_32;
#line 355 "recompilation.m"
      }
#line 353 "recompilation.m"
    else
#line 353 "recompilation.m"
      {
#line 353 "recompilation.m"
        recompilation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 353 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 0) = recompilation__V_41_41;
#line 353 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 1) = recompilation__V_40_40;
#line 353 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 2) = recompilation__V_39_39;
#line 353 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 3) = recompilation__V_38_38;
#line 353 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 4) = recompilation__V_37_37;
#line 353 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 5) = recompilation__V_36_36;
#line 353 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 6) = recompilation__Set_3;
#line 353 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 7) = recompilation__V_34_34;
#line 353 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 8) = recompilation__V_33_33;
#line 353 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 9) = recompilation__V_32_32;
#line 353 "recompilation.m"
      }
#line 353 "recompilation.m"
    return recompilation__HeadVar__4_4;
#line 353 "recompilation.m"
  }
#line 224 "recompilation.m"
}

#line 221 "recompilation.m"
MR_Box MR_CALL 
recompilation__extract_pred_or_func_set_2_f_0(
#line 221 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Simple_24,
#line 221 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_PorF_25,
#line 221 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Cons_26,
#line 221 "recompilation.m"
  MR_Word recompilation__Items_1,
#line 221 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 221 "recompilation.m"
{
#line 350 "recompilation.m"
  {
#line 350 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 350 "recompilation.m"
    MR_Box recompilation__HeadVar__3_3;
#line 350 "recompilation.m"
    MR_Box recompilation__V_29_29 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 7));
#line 350 "recompilation.m"
    MR_Box recompilation__V_30_30 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 6));
#line 350 "recompilation.m"
    MR_Box recompilation__V_27_27 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 9));
#line 350 "recompilation.m"
    MR_Box recompilation__V_28_28 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 8));
#line 350 "recompilation.m"
    MR_Box recompilation__V_31_31 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 5));
#line 350 "recompilation.m"
    MR_Box recompilation__V_32_32 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 4));
#line 350 "recompilation.m"
    MR_Box recompilation__V_33_33 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 3));
#line 350 "recompilation.m"
    MR_Box recompilation__V_34_34 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 2));
#line 350 "recompilation.m"
    MR_Box recompilation__V_35_35 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 1));
#line 350 "recompilation.m"
    MR_Box recompilation__V_36_36 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 0));

#line 350 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 7))
#line 351 "recompilation.m"
      recompilation__HeadVar__3_3 = recompilation__V_29_29;
#line 350 "recompilation.m"
    else
#line 350 "recompilation.m"
      recompilation__HeadVar__3_3 = recompilation__V_30_30;
#line 350 "recompilation.m"
    return recompilation__HeadVar__3_3;
#line 350 "recompilation.m"
  }
#line 221 "recompilation.m"
}

#line 217 "recompilation.m"
MR_Word MR_CALL 
recompilation__update_simple_item_set_3_f_0(
#line 217 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Simple_65,
#line 217 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_PorF_66,
#line 217 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Cons_67,
#line 217 "recompilation.m"
  MR_Word recompilation__Items_1,
#line 217 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 217 "recompilation.m"
  MR_Box recompilation__IdMap_3)
#line 217 "recompilation.m"
{
#line 341 "recompilation.m"
  {
#line 341 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 341 "recompilation.m"
    MR_Word recompilation__HeadVar__4_4;
#line 341 "recompilation.m"
    MR_Box recompilation__V_68_68 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 9));
#line 341 "recompilation.m"
    MR_Box recompilation__V_69_69 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 8));
#line 341 "recompilation.m"
    MR_Box recompilation__V_70_70 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 7));
#line 341 "recompilation.m"
    MR_Box recompilation__V_71_71 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 6));
#line 341 "recompilation.m"
    MR_Box recompilation__V_72_72 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 5));
#line 341 "recompilation.m"
    MR_Box recompilation__V_73_73 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 4));
#line 341 "recompilation.m"
    MR_Box recompilation__V_74_74 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 3));
#line 341 "recompilation.m"
    MR_Box recompilation__V_75_75 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 2));
#line 341 "recompilation.m"
    MR_Box recompilation__V_76_76 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 1));
#line 341 "recompilation.m"
    MR_Box recompilation__V_77_77 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 0));

#line 341 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 3))
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
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 3) = recompilation__IdMap_3;
#line 346 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 4) = recompilation__V_73_73;
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
#line 341 "recompilation.m"
    else
#line 341 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 2))
#line 345 "recompilation.m"
      {
#line 345 "recompilation.m"
        recompilation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 345 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 0) = recompilation__V_77_77;
#line 345 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 1) = recompilation__V_76_76;
#line 345 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 2) = recompilation__IdMap_3;
#line 345 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 3) = recompilation__V_74_74;
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
#line 341 "recompilation.m"
    else
#line 341 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 0))
#line 341 "recompilation.m"
      {
#line 341 "recompilation.m"
        recompilation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 341 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 0) = recompilation__IdMap_3;
#line 341 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 1) = recompilation__V_76_76;
#line 341 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 2) = recompilation__V_75_75;
#line 341 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 3) = recompilation__V_74_74;
#line 341 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 4) = recompilation__V_73_73;
#line 341 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 5) = recompilation__V_72_72;
#line 341 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 6) = recompilation__V_71_71;
#line 341 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 7) = recompilation__V_70_70;
#line 341 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 8) = recompilation__V_69_69;
#line 341 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 9) = recompilation__V_68_68;
#line 341 "recompilation.m"
      }
#line 341 "recompilation.m"
    else
#line 341 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 1))
#line 343 "recompilation.m"
      {
#line 343 "recompilation.m"
        recompilation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 343 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 0) = recompilation__V_77_77;
#line 343 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 1) = recompilation__IdMap_3;
#line 343 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 2) = recompilation__V_75_75;
#line 343 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 3) = recompilation__V_74_74;
#line 343 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 4) = recompilation__V_73_73;
#line 343 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 5) = recompilation__V_72_72;
#line 343 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 6) = recompilation__V_71_71;
#line 343 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 7) = recompilation__V_70_70;
#line 343 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 8) = recompilation__V_69_69;
#line 343 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 9) = recompilation__V_68_68;
#line 343 "recompilation.m"
      }
#line 341 "recompilation.m"
    else
#line 347 "recompilation.m"
      {
#line 347 "recompilation.m"
        recompilation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 347 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 0) = recompilation__V_77_77;
#line 347 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 1) = recompilation__V_76_76;
#line 347 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 2) = recompilation__V_75_75;
#line 347 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 3) = recompilation__V_74_74;
#line 347 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 4) = recompilation__IdMap_3;
#line 347 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 5) = recompilation__V_72_72;
#line 347 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 6) = recompilation__V_71_71;
#line 347 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 7) = recompilation__V_70_70;
#line 347 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 8) = recompilation__V_69_69;
#line 347 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 9) = recompilation__V_68_68;
#line 347 "recompilation.m"
      }
#line 341 "recompilation.m"
    return recompilation__HeadVar__4_4;
#line 341 "recompilation.m"
  }
#line 217 "recompilation.m"
}

#line 214 "recompilation.m"
MR_Box MR_CALL 
recompilation__extract_simple_item_set_2_f_0(
#line 214 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Simple_54,
#line 214 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_PorF_55,
#line 214 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Cons_56,
#line 214 "recompilation.m"
  MR_Word recompilation__Items_1,
#line 214 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 214 "recompilation.m"
{
#line 335 "recompilation.m"
  {
#line 335 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 335 "recompilation.m"
    MR_Box recompilation__HeadVar__3_3;
#line 335 "recompilation.m"
    MR_Box recompilation__V_62_62 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 4));
#line 335 "recompilation.m"
    MR_Box recompilation__V_63_63 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 3));
#line 335 "recompilation.m"
    MR_Box recompilation__V_64_64 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 2));
#line 335 "recompilation.m"
    MR_Box recompilation__V_65_65 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 1));
#line 335 "recompilation.m"
    MR_Box recompilation__V_66_66 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 0));
#line 335 "recompilation.m"
    MR_Box recompilation__V_57_57 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 9));
#line 335 "recompilation.m"
    MR_Box recompilation__V_58_58 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 8));
#line 335 "recompilation.m"
    MR_Box recompilation__V_59_59 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 7));
#line 335 "recompilation.m"
    MR_Box recompilation__V_60_60 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 6));
#line 335 "recompilation.m"
    MR_Box recompilation__V_61_61 = (MR_hl_field(MR_mktag(0), recompilation__Items_1, (MR_Integer) 5));

#line 335 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 3))
#line 338 "recompilation.m"
      recompilation__HeadVar__3_3 = recompilation__V_63_63;
#line 335 "recompilation.m"
    else
#line 335 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 2))
#line 337 "recompilation.m"
      recompilation__HeadVar__3_3 = recompilation__V_64_64;
#line 335 "recompilation.m"
    else
#line 335 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 0))
#line 335 "recompilation.m"
      recompilation__HeadVar__3_3 = recompilation__V_66_66;
#line 335 "recompilation.m"
    else
#line 335 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 1))
#line 336 "recompilation.m"
      recompilation__HeadVar__3_3 = recompilation__V_65_65;
#line 335 "recompilation.m"
    else
#line 339 "recompilation.m"
      recompilation__HeadVar__3_3 = recompilation__V_62_62;
#line 335 "recompilation.m"
    return recompilation__HeadVar__3_3;
#line 335 "recompilation.m"
  }
#line 214 "recompilation.m"
}

#line 207 "recompilation.m"
MR_Word MR_CALL 
recompilation__init_used_items_0_f_0(void)
#line 207 "recompilation.m"
{
#line 332 "recompilation.m"
  {
#line 332 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 332 "recompilation.m"
    MR_Word recompilation__HeadVar__1_1;
#line 332 "recompilation.m"
    MR_Word recompilation__TypeInfo_12_12 = (MR_Word) &recompilation_scalar_common_2[0];
#line 332 "recompilation.m"
    MR_Word recompilation__TypeInfo_13_13 = (MR_Word) &recompilation_scalar_common_2[1];
#line 332 "recompilation.m"
    MR_Word recompilation__V_2_2;
#line 332 "recompilation.m"
    MR_Word recompilation__V_3_3;
#line 332 "recompilation.m"
    MR_Word recompilation__V_4_4;
#line 332 "recompilation.m"
    MR_Word recompilation__V_5_5;
#line 332 "recompilation.m"
    MR_Word recompilation__V_6_6;
#line 332 "recompilation.m"
    MR_Word recompilation__V_7_7;
#line 332 "recompilation.m"
    MR_Word recompilation__V_8_8;
#line 332 "recompilation.m"
    MR_Word recompilation__V_9_9;
#line 332 "recompilation.m"
    MR_Word recompilation__V_10_10;
#line 332 "recompilation.m"
    MR_Word recompilation__V_11_11;

#line 332 "recompilation.m"
    {
#line 332 "recompilation.m"
      recompilation__V_2_2 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 332 "recompilation.m"
    {
#line 332 "recompilation.m"
      recompilation__V_3_3 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 332 "recompilation.m"
    {
#line 332 "recompilation.m"
      recompilation__V_4_4 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 332 "recompilation.m"
    {
#line 332 "recompilation.m"
      recompilation__V_5_5 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 333 "recompilation.m"
    {
#line 333 "recompilation.m"
      recompilation__V_6_6 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 333 "recompilation.m"
    {
#line 333 "recompilation.m"
      recompilation__V_7_7 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 333 "recompilation.m"
    {
#line 333 "recompilation.m"
      recompilation__V_8_8 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 333 "recompilation.m"
    {
#line 333 "recompilation.m"
      recompilation__V_9_9 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 333 "recompilation.m"
    {
#line 333 "recompilation.m"
      recompilation__V_10_10 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 333 "recompilation.m"
    {
#line 333 "recompilation.m"
      recompilation__V_11_11 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 332 "recompilation.m"
    {
#line 332 "recompilation.m"
      recompilation__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 332 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 0) = ((MR_Box) (recompilation__V_2_2));
#line 332 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 1) = ((MR_Box) (recompilation__V_3_3));
#line 332 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 2) = ((MR_Box) (recompilation__V_4_4));
#line 332 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 3) = ((MR_Box) (recompilation__V_5_5));
#line 332 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 4) = ((MR_Box) (recompilation__V_6_6));
#line 332 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 5) = ((MR_Box) (recompilation__V_7_7));
#line 332 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 6) = ((MR_Box) (recompilation__V_8_8));
#line 332 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 7) = ((MR_Box) (recompilation__V_9_9));
#line 332 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 8) = ((MR_Box) (recompilation__V_10_10));
#line 332 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 9) = ((MR_Box) (recompilation__V_11_11));
#line 332 "recompilation.m"
    }
#line 332 "recompilation.m"
    return recompilation__HeadVar__1_1;
#line 332 "recompilation.m"
  }
#line 207 "recompilation.m"
}

#line 183 "recompilation.m"
MR_Word MR_CALL 
recompilation__init_item_id_set_3_f_0(
#line 183 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Simple_15,
#line 183 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_PorF_16,
#line 183 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Cons_17,
#line 183 "recompilation.m"
  MR_Box recompilation__Simple_5,
#line 183 "recompilation.m"
  MR_Box recompilation__PorF_6,
#line 183 "recompilation.m"
  MR_Box recompilation__Cons_7)
#line 183 "recompilation.m"
{
#line 329 "recompilation.m"
  {
#line 329 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 329 "recompilation.m"
    MR_Word recompilation__HeadVar__4_4;

#line 329 "recompilation.m"
    {
#line 329 "recompilation.m"
      recompilation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 329 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 0) = recompilation__Simple_5;
#line 329 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 1) = recompilation__Simple_5;
#line 329 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 2) = recompilation__Simple_5;
#line 329 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 3) = recompilation__Simple_5;
#line 329 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 4) = recompilation__Simple_5;
#line 329 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 5) = recompilation__Cons_7;
#line 329 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 6) = recompilation__PorF_6;
#line 329 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 7) = recompilation__PorF_6;
#line 329 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 8) = recompilation__PorF_6;
#line 329 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 9) = recompilation__PorF_6;
#line 329 "recompilation.m"
    }
#line 329 "recompilation.m"
    return recompilation__HeadVar__4_4;
#line 329 "recompilation.m"
  }
#line 183 "recompilation.m"
}

#line 181 "recompilation.m"
MR_Word MR_CALL 
recompilation__init_item_id_set_1_f_0(
#line 181 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_13,
#line 181 "recompilation.m"
  MR_Box recompilation__Init_3)
#line 181 "recompilation.m"
{
#line 326 "recompilation.m"
  {
#line 326 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 326 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;

#line 326 "recompilation.m"
    {
#line 326 "recompilation.m"
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 326 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = recompilation__Init_3;
#line 326 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = recompilation__Init_3;
#line 326 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 2) = recompilation__Init_3;
#line 326 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 3) = recompilation__Init_3;
#line 326 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 4) = recompilation__Init_3;
#line 326 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 5) = recompilation__Init_3;
#line 326 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 6) = recompilation__Init_3;
#line 326 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 7) = recompilation__Init_3;
#line 326 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 8) = recompilation__Init_3;
#line 326 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 9) = recompilation__Init_3;
#line 326 "recompilation.m"
    }
#line 326 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 326 "recompilation.m"
  }
#line 181 "recompilation.m"
}

#line 160 "recompilation.m"
void MR_CALL 
recompilation__record_expanded_items_4_p_0(
#line 160 "recompilation.m"
  MR_Word recompilation__Item_5,
#line 160 "recompilation.m"
  MR_Word recompilation__ExpandedItems_6,
#line 160 "recompilation.m"
  MR_Word recompilation__STATE_VARIABLE_Info_0_13,
#line 160 "recompilation.m"
  MR_Word * recompilation__STATE_VARIABLE_Info_14)
#line 160 "recompilation.m"
{
#line 452 "recompilation.m"
  {
#line 452 "recompilation.m"
    MR_bool recompilation__succeeded;

#line 450 "recompilation.m"
    {
#line 450 "recompilation.m"
      recompilation__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, recompilation__ExpandedItems_6);
    }
#line 452 "recompilation.m"
    if (recompilation__succeeded)
#line 452 "recompilation.m"
      *recompilation__STATE_VARIABLE_Info_14 = recompilation__STATE_VARIABLE_Info_0_13;
#line 452 "recompilation.m"
    else
#line 453 "recompilation.m"
      {
#line 453 "recompilation.m"
        MR_Word recompilation__TypeCtorInfo_27_27;
#line 453 "recompilation.m"
        MR_Word recompilation__DepsMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 453 "recompilation.m"
        MR_Word recompilation__Deps1_10;
#line 453 "recompilation.m"
        MR_Word recompilation__Deps_11;
#line 453 "recompilation.m"
        MR_Word recompilation__DepsMap_12;
#line 453 "recompilation.m"
        MR_Word recompilation__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 453 "recompilation.m"
        MR_Word recompilation__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 453 "recompilation.m"
        MR_Word recompilation__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 456 "recompilation.m"
        MR_Word recompilation__Deps0_9;
#line 454 "recompilation.m"
        MR_Box recompilation__conv0_Deps0_9;
#line 461 "recompilation.m"
        MR_Word recompilation__V_19_19;
#line 461 "recompilation.m"
        MR_Word recompilation__V_20_20;
#line 461 "recompilation.m"
        MR_Word recompilation__V_22_22;
#line 461 "recompilation.m"
        MR_Word recompilation__V_21_21;

#line 454 "recompilation.m"
        {
#line 454 "recompilation.m"
          recompilation__succeeded = mercury__map__search_3_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, (MR_Word) &recompilation_scalar_common_1[0], recompilation__DepsMap0_8, ((MR_Box) (recompilation__Item_5)), &recompilation__conv0_Deps0_9);
        }
#line 454 "recompilation.m"
        if (recompilation__succeeded)
#line 454 "recompilation.m"
          {
#line 454 "recompilation.m"
            recompilation__Deps0_9 = ((MR_Word) recompilation__conv0_Deps0_9);
#line 454 "recompilation.m"
            recompilation__succeeded = MR_TRUE;
#line 454 "recompilation.m"
          }
#line 456 "recompilation.m"
        if (recompilation__succeeded)
#line 455 "recompilation.m"
          recompilation__Deps1_10 = recompilation__Deps0_9;
#line 456 "recompilation.m"
        else
#line 457 "recompilation.m"
          {
#line 457 "recompilation.m"
            {
#line 457 "recompilation.m"
              mercury__set__init_1_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, &recompilation__Deps1_10);
            }
#line 457 "recompilation.m"
          }
#line 5713 "recompilation.c"
        recompilation__TypeCtorInfo_27_27 = (MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0;
#line 459 "recompilation.m"
        {
#line 459 "recompilation.m"
          mercury__set__union_3_p_0(recompilation__TypeCtorInfo_27_27, recompilation__Deps1_10, recompilation__ExpandedItems_6, &recompilation__Deps_11);
        }
#line 460 "recompilation.m"
        {
#line 460 "recompilation.m"
          mercury__map__set_4_p_0(recompilation__TypeCtorInfo_27_27, (MR_Word) &recompilation_scalar_common_1[0], ((MR_Box) (recompilation__Item_5)), ((MR_Box) (recompilation__Deps_11)), recompilation__DepsMap0_8, &recompilation__DepsMap_12);
        }
#line 461 "recompilation.m"
        recompilation__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 461 "recompilation.m"
        recompilation__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 461 "recompilation.m"
        recompilation__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 461 "recompilation.m"
        recompilation__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 461 "recompilation.m"
        {
#line 461 "recompilation.m"
          MR_Word base;
#line 461 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 461 "recompilation.m"
          *recompilation__STATE_VARIABLE_Info_14 = base;
#line 461 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__V_19_19));
#line 461 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__V_20_20));
#line 461 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recompilation__DepsMap_12));
#line 461 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (recompilation__V_22_22));
#line 461 "recompilation.m"
        }
#line 453 "recompilation.m"
      }
#line 452 "recompilation.m"
  }
#line 160 "recompilation.m"
}

#line 146 "recompilation.m"
void MR_CALL 
recompilation__record_used_item_5_p_0(
#line 146 "recompilation.m"
  MR_Word recompilation__ItemType_6,
#line 146 "recompilation.m"
  MR_Word recompilation__Id_7,
#line 146 "recompilation.m"
  MR_Word recompilation__QualifiedId_8,
#line 146 "recompilation.m"
  MR_Word recompilation__STATE_VARIABLE_Info_0_26,
#line 146 "recompilation.m"
  MR_Word * recompilation__STATE_VARIABLE_Info_27)
#line 146 "recompilation.m"
{
#line 413 "recompilation.m"
  {
#line 413 "recompilation.m"
    MR_bool recompilation__succeeded = (recompilation__ItemType_6 == (MR_Integer) 6);
#line 413 "recompilation.m"
    MR_Word recompilation__QualifiedName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__QualifiedId_8, (MR_Integer) 0)));
#line 413 "recompilation.m"
    MR_Integer recompilation__Arity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__QualifiedId_8, (MR_Integer) 1)));
#line 422 "recompilation.m"
    MR_String recompilation__V_12_12;

#line 419 "recompilation.m"
    recompilation__succeeded = !(recompilation__succeeded);
#line 419 "recompilation.m"
    if (recompilation__succeeded)
#line 419 "recompilation.m"
      {
#line 420 "recompilation.m"
        recompilation__succeeded = (recompilation__ItemType_6 == (MR_Integer) 7);
#line 420 "recompilation.m"
        recompilation__succeeded = !(recompilation__succeeded);
#line 419 "recompilation.m"
        if (recompilation__succeeded)
#line 419 "recompilation.m"
          {
#line 421 "recompilation.m"
            recompilation__succeeded = (recompilation__ItemType_6 == (MR_Integer) 5);
#line 421 "recompilation.m"
            recompilation__succeeded = !(recompilation__succeeded);
#line 419 "recompilation.m"
            if (recompilation__succeeded)
#line 419 "recompilation.m"
              {
#line 422 "recompilation.m"
                recompilation__succeeded = ((MR_tag((MR_Word) recompilation__QualifiedName_10)) == (MR_mktag((MR_Integer) 0)));
#line 422 "recompilation.m"
                if (recompilation__succeeded)
#line 422 "recompilation.m"
                  recompilation__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__QualifiedName_10, (MR_Integer) 0)));
#line 419 "recompilation.m"
              }
#line 419 "recompilation.m"
          }
#line 419 "recompilation.m"
      }
#line 425 "recompilation.m"
    if (recompilation__succeeded)
#line 425 "recompilation.m"
      *recompilation__STATE_VARIABLE_Info_27 = recompilation__STATE_VARIABLE_Info_0_26;
#line 425 "recompilation.m"
    else
#line 426 "recompilation.m"
      {
#line 426 "recompilation.m"
        MR_Word recompilation__TypeInfo_36_36 = (MR_Word) &recompilation_scalar_common_2[2];
#line 426 "recompilation.m"
        MR_Word recompilation__ItemSet0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 1)));
#line 426 "recompilation.m"
        MR_Word recompilation__IdSet0_14;
#line 426 "recompilation.m"
        MR_String recompilation__UnqualifiedName_15;
#line 426 "recompilation.m"
        MR_Word recompilation__ModuleName_16;
#line 426 "recompilation.m"
        MR_Word recompilation__UnqualifiedId_17;
#line 426 "recompilation.m"
        MR_Word recompilation__SymName_18;
#line 426 "recompilation.m"
        MR_Word recompilation__ModuleQualifier_20;
#line 426 "recompilation.m"
        MR_Word recompilation__MatchingNames1_22;
#line 426 "recompilation.m"
        MR_Word recompilation__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 0)));
#line 426 "recompilation.m"
        MR_Word recompilation__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 2)));
#line 426 "recompilation.m"
        MR_Word recompilation__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 3)));
#line 427 "recompilation.m"
        MR_Box recompilation__conv0_IdSet0_14;
#line 431 "recompilation.m"
        MR_Integer recompilation__V_19_19;
#line 435 "recompilation.m"
        MR_Word recompilation__MatchingNames0_21;
#line 433 "recompilation.m"
        MR_Box recompilation__conv1_MatchingNames0_21;
#line 438 "recompilation.m"
        MR_Word recompilation__TypeCtorInfo_40_40;

#line 427 "recompilation.m"
        {
#line 427 "recompilation.m"
          recompilation__conv0_IdSet0_14 = recompilation__extract_ids_2_f_0(recompilation__TypeInfo_36_36, recompilation__ItemSet0_13, recompilation__ItemType_6);
        }
#line 427 "recompilation.m"
        recompilation__IdSet0_14 = ((MR_Word) recompilation__conv0_IdSet0_14);
#line 428 "recompilation.m"
        {
#line 428 "recompilation.m"
          recompilation__UnqualifiedName_15 = mdbcomp__sym_name__unqualify_name_1_f_0(recompilation__QualifiedName_10);
        }
#line 393 "recompilation.m"
        if (((MR_tag((MR_Word) recompilation__QualifiedName_10)) == (MR_mktag((MR_Integer) 1))))
#line 394 "recompilation.m"
          {
#line 394 "recompilation.m"
            MR_String recompilation__V_47_47;

#line 394 "recompilation.m"
            recompilation__ModuleName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__QualifiedName_10, (MR_Integer) 0)));
#line 394 "recompilation.m"
            recompilation__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__QualifiedName_10, (MR_Integer) 1)));
#line 394 "recompilation.m"
          }
#line 393 "recompilation.m"
        else
#line 393 "recompilation.m"
          {
#line 393 "recompilation.m"
            recompilation__ModuleName_16 = (MR_Word) &recompilation_scalar_common_4[0];
#line 393 "recompilation.m"
          }
#line 430 "recompilation.m"
        {
#line 430 "recompilation.m"
          recompilation__UnqualifiedId_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 430 "recompilation.m"
          MR_hl_field(MR_mktag(0), recompilation__UnqualifiedId_17, 0) = ((MR_Box) (recompilation__UnqualifiedName_15));
#line 430 "recompilation.m"
          MR_hl_field(MR_mktag(0), recompilation__UnqualifiedId_17, 1) = ((MR_Box) (recompilation__Arity_11));
#line 430 "recompilation.m"
        }
#line 431 "recompilation.m"
        recompilation__SymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__Id_7, (MR_Integer) 0)));
#line 431 "recompilation.m"
        recompilation__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__Id_7, (MR_Integer) 1)));
#line 393 "recompilation.m"
        if (((MR_tag((MR_Word) recompilation__SymName_18)) == (MR_mktag((MR_Integer) 1))))
#line 394 "recompilation.m"
          {
#line 394 "recompilation.m"
            MR_String recompilation__V_51_51;

#line 394 "recompilation.m"
            recompilation__ModuleQualifier_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__SymName_18, (MR_Integer) 0)));
#line 394 "recompilation.m"
            recompilation__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__SymName_18, (MR_Integer) 1)));
#line 394 "recompilation.m"
          }
#line 393 "recompilation.m"
        else
#line 393 "recompilation.m"
          {
#line 393 "recompilation.m"
            recompilation__ModuleQualifier_20 = (MR_Word) &recompilation_scalar_common_4[0];
#line 393 "recompilation.m"
          }
#line 433 "recompilation.m"
        {
#line 433 "recompilation.m"
          recompilation__succeeded = mercury__map__search_3_p_0((MR_Word) &recompilation_scalar_common_2[0], (MR_Word) &recompilation_scalar_common_2[1], recompilation__IdSet0_14, ((MR_Box) (recompilation__UnqualifiedId_17)), &recompilation__conv1_MatchingNames0_21);
        }
#line 433 "recompilation.m"
        if (recompilation__succeeded)
#line 433 "recompilation.m"
          {
#line 433 "recompilation.m"
            recompilation__MatchingNames0_21 = ((MR_Word) recompilation__conv1_MatchingNames0_21);
#line 433 "recompilation.m"
            recompilation__succeeded = MR_TRUE;
#line 433 "recompilation.m"
          }
#line 435 "recompilation.m"
        if (recompilation__succeeded)
#line 434 "recompilation.m"
          recompilation__MatchingNames1_22 = recompilation__MatchingNames0_21;
#line 435 "recompilation.m"
        else
#line 436 "recompilation.m"
          {
#line 436 "recompilation.m"
            MR_Word recompilation__TypeCtorInfo_39_39 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 436 "recompilation.m"
            {
#line 436 "recompilation.m"
              mercury__map__init_1_p_0(recompilation__TypeCtorInfo_39_39, recompilation__TypeCtorInfo_39_39, &recompilation__MatchingNames1_22);
            }
#line 436 "recompilation.m"
          }
#line 5962 "recompilation.c"
        recompilation__TypeCtorInfo_40_40 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 438 "recompilation.m"
        {
#line 438 "recompilation.m"
          recompilation__succeeded = mercury__map__contains_2_p_0(recompilation__TypeCtorInfo_40_40, recompilation__TypeCtorInfo_40_40, recompilation__MatchingNames1_22, ((MR_Box) (recompilation__ModuleQualifier_20)));
        }
#line 440 "recompilation.m"
        if (recompilation__succeeded)
#line 440 "recompilation.m"
          *recompilation__STATE_VARIABLE_Info_27 = recompilation__STATE_VARIABLE_Info_0_26;
#line 440 "recompilation.m"
        else
#line 442 "recompilation.m"
          {
#line 442 "recompilation.m"
            MR_Word recompilation__TypeCtorInfo_41_41 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 442 "recompilation.m"
            MR_Word recompilation__MatchingNames_23;
#line 442 "recompilation.m"
            MR_Word recompilation__IdSet_24;
#line 442 "recompilation.m"
            MR_Word recompilation__ItemSet_25;
#line 445 "recompilation.m"
            MR_Word recompilation__V_32_32;
#line 445 "recompilation.m"
            MR_Word recompilation__V_34_34;
#line 445 "recompilation.m"
            MR_Word recompilation__V_35_35;
#line 445 "recompilation.m"
            MR_Word recompilation__V_33_33;

#line 441 "recompilation.m"
            {
#line 441 "recompilation.m"
              mercury__map__det_insert_4_p_0(recompilation__TypeCtorInfo_41_41, recompilation__TypeCtorInfo_41_41, ((MR_Box) (recompilation__ModuleQualifier_20)), ((MR_Box) (recompilation__ModuleName_16)), recompilation__MatchingNames1_22, &recompilation__MatchingNames_23);
            }
#line 443 "recompilation.m"
            {
#line 443 "recompilation.m"
              mercury__map__set_4_p_0((MR_Word) &recompilation_scalar_common_2[0], (MR_Word) &recompilation_scalar_common_2[1], ((MR_Box) (recompilation__UnqualifiedId_17)), ((MR_Box) (recompilation__MatchingNames_23)), recompilation__IdSet0_14, &recompilation__IdSet_24);
            }
#line 444 "recompilation.m"
            {
#line 444 "recompilation.m"
              recompilation__ItemSet_25 = recompilation__update_ids_3_f_0(recompilation__TypeInfo_36_36, recompilation__ItemSet0_13, recompilation__ItemType_6, ((MR_Box) (recompilation__IdSet_24)));
            }
#line 445 "recompilation.m"
            recompilation__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 0)));
#line 445 "recompilation.m"
            recompilation__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 1)));
#line 445 "recompilation.m"
            recompilation__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 2)));
#line 445 "recompilation.m"
            recompilation__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 3)));
#line 445 "recompilation.m"
            {
#line 445 "recompilation.m"
              MR_Word base;
#line 445 "recompilation.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 445 "recompilation.m"
              *recompilation__STATE_VARIABLE_Info_27 = base;
#line 445 "recompilation.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__V_32_32));
#line 445 "recompilation.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__ItemSet_25));
#line 445 "recompilation.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recompilation__V_34_34));
#line 445 "recompilation.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (recompilation__V_35_35));
#line 445 "recompilation.m"
            }
#line 442 "recompilation.m"
          }
#line 426 "recompilation.m"
      }
#line 413 "recompilation.m"
  }
#line 146 "recompilation.m"
}

#line 137 "recompilation.m"
MR_Word MR_CALL 
recompilation__init_recompilation_info_1_f_0(
#line 137 "recompilation.m"
  MR_Word recompilation__ModuleName_3)
#line 137 "recompilation.m"
{
#line 405 "recompilation.m"
  {
#line 405 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 405 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;
#line 405 "recompilation.m"
    MR_Word recompilation__V_4_4;
#line 405 "recompilation.m"
    MR_Word recompilation__V_5_5;
#line 405 "recompilation.m"
    MR_Word recompilation__V_6_6;

#line 408 "recompilation.m"
    {
#line 408 "recompilation.m"
      recompilation__V_4_4 = recompilation__init_used_items_0_f_0();
    }
#line 409 "recompilation.m"
    {
#line 409 "recompilation.m"
      recompilation__V_5_5 = mercury__map__init_0_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, (MR_Word) &recompilation_scalar_common_1[0]);
    }
#line 410 "recompilation.m"
    {
#line 410 "recompilation.m"
      recompilation__V_6_6 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0);
    }
#line 406 "recompilation.m"
    {
#line 406 "recompilation.m"
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 406 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = ((MR_Box) (recompilation__ModuleName_3));
#line 406 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = ((MR_Box) (recompilation__V_4_4));
#line 406 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 2) = ((MR_Box) (recompilation__V_5_5));
#line 406 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 3) = ((MR_Box) (recompilation__V_6_6));
#line 406 "recompilation.m"
    }
#line 405 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 405 "recompilation.m"
  }
#line 137 "recompilation.m"
}

#line 116 "recompilation.m"
MR_Word MR_CALL 
recompilation__item_name_to_mode_id_1_f_0(
#line 116 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 116 "recompilation.m"
{
#line 321 "recompilation.m"
  {
#line 321 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 321 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;
#line 321 "recompilation.m"
    MR_Word recompilation__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 321 "recompilation.m"
    MR_Integer recompilation__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));

#line 321 "recompilation.m"
    {
#line 321 "recompilation.m"
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 321 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = ((MR_Box) (recompilation__SymName_3));
#line 321 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = ((MR_Box) (recompilation__Arity_4));
#line 321 "recompilation.m"
    }
#line 321 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 321 "recompilation.m"
  }
#line 116 "recompilation.m"
}

#line 115 "recompilation.m"
MR_Word MR_CALL 
recompilation__item_name_to_inst_id_1_f_0(
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
recompilation__item_name_to_type_ctor_1_f_0(
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

#line 112 "recompilation.m"
MR_Word MR_CALL 
recompilation__mode_id_to_item_name_1_f_0(
#line 112 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 112 "recompilation.m"
{
#line 317 "recompilation.m"
  {
#line 317 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 317 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;
#line 317 "recompilation.m"
    MR_Word recompilation__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 317 "recompilation.m"
    MR_Integer recompilation__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));

#line 317 "recompilation.m"
    {
#line 317 "recompilation.m"
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 317 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = ((MR_Box) (recompilation__SymName_3));
#line 317 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = ((MR_Box) (recompilation__Arity_4));
#line 317 "recompilation.m"
    }
#line 317 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 317 "recompilation.m"
  }
#line 112 "recompilation.m"
}

#line 111 "recompilation.m"
MR_Word MR_CALL 
recompilation__inst_id_to_item_name_1_f_0(
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
recompilation__type_ctor_to_item_name_1_f_0(
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

#line 107 "recompilation.m"
MR_Word MR_CALL 
recompilation__pred_or_func_to_item_type_1_f_0(
#line 107 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 107 "recompilation.m"
{
#line 292 "recompilation.m"
  {
#line 292 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 292 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;

#line 292 "recompilation.m"
    if ((recompilation__HeadVar__1_1 == (MR_Integer) 1))
#line 293 "recompilation.m"
      recompilation__HeadVar__2_2 = (MR_Integer) 7;
#line 292 "recompilation.m"
    else
#line 292 "recompilation.m"
      recompilation__HeadVar__2_2 = (MR_Integer) 6;
#line 292 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 292 "recompilation.m"
  }
#line 107 "recompilation.m"
}

#line 105 "recompilation.m"
void MR_CALL 
recompilation__string_to_item_type_2_p_1(
#line 105 "recompilation.m"
  MR_String * recompilation__HeadVar__1_1,
#line 105 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 105 "recompilation.m"
{
#line 304 "recompilation.m"
  {
#line 304 "recompilation.m"
    MR_bool recompilation__succeeded;

#line 304 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 9))
#line 313 "recompilation.m"
      *recompilation__HeadVar__1_1 = (MR_String) "foreign_proc";
#line 304 "recompilation.m"
    else
#line 304 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 7))
#line 310 "recompilation.m"
      *recompilation__HeadVar__1_1 = (MR_String) "function";
#line 304 "recompilation.m"
    else
#line 304 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 5))
#line 311 "recompilation.m"
      *recompilation__HeadVar__1_1 = (MR_String) "functor";
#line 304 "recompilation.m"
    else
#line 304 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 3))
#line 306 "recompilation.m"
      *recompilation__HeadVar__1_1 = (MR_String) "inst";
#line 304 "recompilation.m"
    else
#line 304 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 2))
#line 307 "recompilation.m"
      *recompilation__HeadVar__1_1 = (MR_String) "mode";
#line 304 "recompilation.m"
    else
#line 304 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 8))
#line 312 "recompilation.m"
      *recompilation__HeadVar__1_1 = (MR_String) "mutable";
#line 304 "recompilation.m"
    else
#line 304 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 6))
#line 309 "recompilation.m"
      *recompilation__HeadVar__1_1 = (MR_String) "predicate";
#line 304 "recompilation.m"
    else
#line 304 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 0))
#line 304 "recompilation.m"
      *recompilation__HeadVar__1_1 = (MR_String) "type";
#line 304 "recompilation.m"
    else
#line 304 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == (MR_Integer) 1))
#line 305 "recompilation.m"
      *recompilation__HeadVar__1_1 = (MR_String) "type_body";
#line 304 "recompilation.m"
    else
#line 308 "recompilation.m"
      *recompilation__HeadVar__1_1 = (MR_String) "typeclass";
#line 304 "recompilation.m"
  }
#line 105 "recompilation.m"
}

#line 104 "recompilation.m"
MR_bool MR_CALL 
recompilation__string_to_item_type_2_p_0(
#line 104 "recompilation.m"
  MR_String recompilation__HeadVar__1_1,
#line 104 "recompilation.m"
  MR_Word * recompilation__HeadVar__2_2)
#line 104 "recompilation.m"
{
#line 304 "recompilation.m"
  {
#line 304 "recompilation.m"
    MR_bool recompilation__succeeded;

#line 304 "recompilation.m"
    if ((strcmp(recompilation__HeadVar__1_1, (MR_String) "inst") == 0))
#line 306 "recompilation.m"
      {
#line 306 "recompilation.m"
        *recompilation__HeadVar__2_2 = (MR_Integer) 3;
#line 306 "recompilation.m"
        recompilation__succeeded = MR_TRUE;
#line 306 "recompilation.m"
      }
#line 304 "recompilation.m"
    else
#line 304 "recompilation.m"
    if ((strcmp(recompilation__HeadVar__1_1, (MR_String) "mode") == 0))
#line 307 "recompilation.m"
      {
#line 307 "recompilation.m"
        *recompilation__HeadVar__2_2 = (MR_Integer) 2;
#line 307 "recompilation.m"
        recompilation__succeeded = MR_TRUE;
#line 307 "recompilation.m"
      }
#line 304 "recompilation.m"
    else
#line 304 "recompilation.m"
    if ((strcmp(recompilation__HeadVar__1_1, (MR_String) "type") == 0))
#line 304 "recompilation.m"
      {
#line 304 "recompilation.m"
        *recompilation__HeadVar__2_2 = (MR_Integer) 0;
#line 304 "recompilation.m"
        recompilation__succeeded = MR_TRUE;
#line 304 "recompilation.m"
      }
#line 304 "recompilation.m"
    else
#line 304 "recompilation.m"
    if ((strcmp(recompilation__HeadVar__1_1, (MR_String) "functor") == 0))
#line 311 "recompilation.m"
      {
#line 311 "recompilation.m"
        *recompilation__HeadVar__2_2 = (MR_Integer) 5;
#line 311 "recompilation.m"
        recompilation__succeeded = MR_TRUE;
#line 311 "recompilation.m"
      }
#line 304 "recompilation.m"
    else
#line 304 "recompilation.m"
    if ((strcmp(recompilation__HeadVar__1_1, (MR_String) "mutable") == 0))
#line 312 "recompilation.m"
      {
#line 312 "recompilation.m"
        *recompilation__HeadVar__2_2 = (MR_Integer) 8;
#line 312 "recompilation.m"
        recompilation__succeeded = MR_TRUE;
#line 312 "recompilation.m"
      }
#line 304 "recompilation.m"
    else
#line 304 "recompilation.m"
    if ((strcmp(recompilation__HeadVar__1_1, (MR_String) "function") == 0))
#line 310 "recompilation.m"
      {
#line 310 "recompilation.m"
        *recompilation__HeadVar__2_2 = (MR_Integer) 7;
#line 310 "recompilation.m"
        recompilation__succeeded = MR_TRUE;
#line 310 "recompilation.m"
      }
#line 304 "recompilation.m"
    else
#line 304 "recompilation.m"
    if ((strcmp(recompilation__HeadVar__1_1, (MR_String) "predicate") == 0))
#line 309 "recompilation.m"
      {
#line 309 "recompilation.m"
        *recompilation__HeadVar__2_2 = (MR_Integer) 6;
#line 309 "recompilation.m"
        recompilation__succeeded = MR_TRUE;
#line 309 "recompilation.m"
      }
#line 304 "recompilation.m"
    else
#line 304 "recompilation.m"
    if ((strcmp(recompilation__HeadVar__1_1, (MR_String) "type_body") == 0))
#line 305 "recompilation.m"
      {
#line 305 "recompilation.m"
        *recompilation__HeadVar__2_2 = (MR_Integer) 1;
#line 305 "recompilation.m"
        recompilation__succeeded = MR_TRUE;
#line 305 "recompilation.m"
      }
#line 304 "recompilation.m"
    else
#line 304 "recompilation.m"
    if ((strcmp(recompilation__HeadVar__1_1, (MR_String) "typeclass") == 0))
#line 308 "recompilation.m"
      {
#line 308 "recompilation.m"
        *recompilation__HeadVar__2_2 = (MR_Integer) 4;
#line 308 "recompilation.m"
        recompilation__succeeded = MR_TRUE;
#line 308 "recompilation.m"
      }
#line 304 "recompilation.m"
    else
#line 304 "recompilation.m"
    if ((strcmp(recompilation__HeadVar__1_1, (MR_String) "foreign_proc") == 0))
#line 313 "recompilation.m"
      {
#line 313 "recompilation.m"
        *recompilation__HeadVar__2_2 = (MR_Integer) 9;
#line 313 "recompilation.m"
        recompilation__succeeded = MR_TRUE;
#line 313 "recompilation.m"
      }
#line 304 "recompilation.m"
    else
#line 304 "recompilation.m"
      recompilation__succeeded = MR_FALSE;
#line 304 "recompilation.m"
    return recompilation__succeeded;
#line 304 "recompilation.m"
  }
#line 104 "recompilation.m"
}

#line 100 "recompilation.m"
MR_bool MR_CALL 
recompilation__is_pred_or_func_item_type_1_p_0(
#line 100 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 100 "recompilation.m"
{
#line 301 "recompilation.m"
  {
#line 301 "recompilation.m"
    MR_bool recompilation__succeeded;

#line 301 "recompilation.m"
    if ((recompilation__HeadVar__1_1 == (MR_Integer) 7))
#line 302 "recompilation.m"
      recompilation__succeeded = MR_TRUE;
#line 301 "recompilation.m"
    else
#line 301 "recompilation.m"
    if ((recompilation__HeadVar__1_1 == (MR_Integer) 6))
#line 301 "recompilation.m"
      recompilation__succeeded = MR_TRUE;
#line 301 "recompilation.m"
    else
#line 301 "recompilation.m"
      recompilation__succeeded = MR_FALSE;
#line 301 "recompilation.m"
    return recompilation__succeeded;
#line 301 "recompilation.m"
  }
#line 100 "recompilation.m"
}

#line 98 "recompilation.m"
MR_bool MR_CALL 
recompilation__is_simple_item_type_1_p_0(
#line 98 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 98 "recompilation.m"
{
#line 295 "recompilation.m"
  {
#line 295 "recompilation.m"
    MR_bool recompilation__succeeded;

#line 295 "recompilation.m"
    if ((recompilation__HeadVar__1_1 == (MR_Integer) 3))
#line 297 "recompilation.m"
      recompilation__succeeded = MR_TRUE;
#line 295 "recompilation.m"
    else
#line 295 "recompilation.m"
    if ((recompilation__HeadVar__1_1 == (MR_Integer) 2))
#line 298 "recompilation.m"
      recompilation__succeeded = MR_TRUE;
#line 295 "recompilation.m"
    else
#line 295 "recompilation.m"
    if ((recompilation__HeadVar__1_1 == (MR_Integer) 0))
#line 295 "recompilation.m"
      recompilation__succeeded = MR_TRUE;
#line 295 "recompilation.m"
    else
#line 295 "recompilation.m"
    if ((recompilation__HeadVar__1_1 == (MR_Integer) 1))
#line 296 "recompilation.m"
      recompilation__succeeded = MR_TRUE;
#line 295 "recompilation.m"
    else
#line 295 "recompilation.m"
    if ((recompilation__HeadVar__1_1 == (MR_Integer) 4))
#line 299 "recompilation.m"
      recompilation__succeeded = MR_TRUE;
#line 295 "recompilation.m"
    else
#line 295 "recompilation.m"
      recompilation__succeeded = MR_FALSE;
#line 295 "recompilation.m"
    return recompilation__succeeded;
#line 295 "recompilation.m"
  }
#line 98 "recompilation.m"
}

#line 59 "recompilation.m"
MR_bool MR_CALL 
recompilation__term_to_timestamp_1_f_0(
#line 59 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_7,
#line 59 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 59 "recompilation.m"
  MR_Word * recompilation__HeadVar__2_2)
#line 59 "recompilation.m"
{
#line 282 "recompilation.m"
  {
#line 282 "recompilation.m"
    MR_bool recompilation__succeeded = ((MR_tag((MR_Word) recompilation__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 282 "recompilation.m"
    MR_String recompilation__TimestampString_3;
#line 282 "recompilation.m"
    MR_Word recompilation__V_5_5;
#line 282 "recompilation.m"
    MR_Word recompilation__V_6_6;
#line 282 "recompilation.m"
    MR_Word recompilation__V_4_4;

#line 282 "recompilation.m"
    if (recompilation__succeeded)
#line 282 "recompilation.m"
      {
#line 282 "recompilation.m"
        recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 282 "recompilation.m"
        recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));
#line 282 "recompilation.m"
        recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 2)));
#line 282 "recompilation.m"
        recompilation__succeeded = ((((MR_tag((MR_Word) recompilation__V_5_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__V_5_5, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 282 "recompilation.m"
        if (recompilation__succeeded)
#line 282 "recompilation.m"
          {
#line 282 "recompilation.m"
            recompilation__TimestampString_3 = ((MR_String) (MR_hl_field(MR_mktag(3), recompilation__V_5_5, (MR_Integer) 1)));
#line 282 "recompilation.m"
            recompilation__succeeded = (recompilation__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 282 "recompilation.m"
            if (recompilation__succeeded)
#line 283 "recompilation.m"
              {
#line 283 "recompilation.m"
                return recompilation__succeeded = libs__timestamp__string_to_timestamp_1_f_0(recompilation__TimestampString_3, recompilation__HeadVar__2_2);
              }
#line 282 "recompilation.m"
          }
#line 282 "recompilation.m"
      }
#line 282 "recompilation.m"
    return recompilation__succeeded;
#line 282 "recompilation.m"
  }
#line 59 "recompilation.m"
}

#line 57 "recompilation.m"
MR_bool MR_CALL 
recompilation__term_to_version_number_1_f_0(
#line 57 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_4,
#line 57 "recompilation.m"
  MR_Word recompilation__Term_3,
#line 57 "recompilation.m"
  MR_Word * recompilation__HeadVar__2_2)
#line 57 "recompilation.m"
{
#line 282 "recompilation.m"
  {
#line 282 "recompilation.m"
    MR_bool recompilation__succeeded = ((MR_tag((MR_Word) recompilation__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 282 "recompilation.m"
    MR_String recompilation__TimestampString_5;
#line 282 "recompilation.m"
    MR_Word recompilation__V_7_7;
#line 282 "recompilation.m"
    MR_Word recompilation__V_8_8;
#line 282 "recompilation.m"
    MR_Word recompilation__V_6_6;

#line 282 "recompilation.m"
    if (recompilation__succeeded)
#line 282 "recompilation.m"
      {
#line 282 "recompilation.m"
        recompilation__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__Term_3, (MR_Integer) 0)));
#line 282 "recompilation.m"
        recompilation__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__Term_3, (MR_Integer) 1)));
#line 282 "recompilation.m"
        recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__Term_3, (MR_Integer) 2)));
#line 282 "recompilation.m"
        recompilation__succeeded = ((((MR_tag((MR_Word) recompilation__V_7_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__V_7_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 282 "recompilation.m"
        if (recompilation__succeeded)
#line 282 "recompilation.m"
          {
#line 282 "recompilation.m"
            recompilation__TimestampString_5 = ((MR_String) (MR_hl_field(MR_mktag(3), recompilation__V_7_7, (MR_Integer) 1)));
#line 282 "recompilation.m"
            recompilation__succeeded = (recompilation__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 282 "recompilation.m"
            if (recompilation__succeeded)
#line 283 "recompilation.m"
              {
#line 283 "recompilation.m"
                return recompilation__succeeded = libs__timestamp__string_to_timestamp_1_f_0(recompilation__TimestampString_5, recompilation__HeadVar__2_2);
              }
#line 282 "recompilation.m"
          }
#line 282 "recompilation.m"
      }
#line 282 "recompilation.m"
    return recompilation__succeeded;
#line 282 "recompilation.m"
  }
#line 57 "recompilation.m"
}

#line 55 "recompilation.m"
void MR_CALL 
recompilation__write_version_number_3_p_0(
#line 55 "recompilation.m"
  MR_Word recompilation__VersionNumber_4)
#line 55 "recompilation.m"
{
#line 285 "recompilation.m"
  {
#line 285 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 285 "recompilation.m"
    MR_String recompilation__V_10_10;

#line 286 "recompilation.m"
    {
#line 286 "recompilation.m"
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
#line 287 "recompilation.m"
    {
#line 287 "recompilation.m"
      recompilation__V_10_10 = libs__timestamp__timestamp_to_string_1_f_0(recompilation__VersionNumber_4);
    }
#line 287 "recompilation.m"
    {
#line 287 "recompilation.m"
      mercury__io__write_string_3_p_0(recompilation__V_10_10);
    }
#line 288 "recompilation.m"
    {
#line 288 "recompilation.m"
      mercury__io__write_string_3_p_0((MR_String) "\"");
#line 288 "recompilation.m"
      return;
    }
#line 285 "recompilation.m"
  }
#line 55 "recompilation.m"
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
