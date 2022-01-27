/*
** Automatically generated from `recompilation.m'
** by the Mercury compiler,
** version 2015-10-27
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.file_util.mih"
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
#include "parse_tree.file_names.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.modules.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 146 "recompilation.c"
static const MR_VA_PseudoTypeInfo_Struct3 recompilation____vpti_func_3__plain_recompilation__type_ctor_info_item_type_0__pseudo_1__pseudo_2;

#line 149 "recompilation.c"
static const MR_FA_PseudoTypeInfo_Struct3 recompilation__recompilation__pti_item_id_set_3__pseudo_1__pseudo_1__pseudo_1;

#line 152 "recompilation.c"
static const MR_FA_PseudoTypeInfo_Struct3 recompilation__recompilation__pti_item_id_set_3__pseudo_2__pseudo_2__pseudo_2;

#line 155 "recompilation.c"
static const MR_FA_TypeInfo_Struct1 recompilation__maybe__ti_maybe_1recompilation__type_ctor_info_eqv_expanded_item_set_0;

#line 158 "recompilation.c"
static const MR_FA_TypeInfo_Struct1 recompilation__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0;

#line 161 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_eqv_expanded_item_set_0_0[2];

#line 164 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_eqv_expanded_item_set_0_0;

#line 167 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_eqv_expanded_item_set_0_0[1];

#line 170 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_eqv_expanded_item_set_0[1];

#line 173 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_eqv_expanded_item_set_0[1];

#line 176 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_eqv_expanded_item_set_0[1];

#line 179 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

#line 182 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 185 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 188 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0;

#line 191 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_id_0_0[2];

#line 194 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_item_id_0_0;

#line 197 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_id_0_0[1];

#line 200 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_id_0[1];

#line 203 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_id_0[1];

#line 206 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_id_0[1];

#line 209 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_id_set_3_0[10];

#line 212 "recompilation.c"
static const MR_ConstString recompilation__recompilation__field_names_item_id_set_3_0[10];

#line 215 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_item_id_set_3_0;

#line 218 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_id_set_3_0[1];

#line 221 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_id_set_3[1];

#line 224 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_id_set_3[1];

#line 227 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_id_set_3[1];

#line 230 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_name_0_0[2];

#line 233 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_item_name_0_0;

#line 236 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_name_0_0[1];

#line 239 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_name_0[1];

#line 242 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_name_0[1];

#line 245 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_name_0[1];

#line 248 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_0;

#line 251 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_1;

#line 254 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_2;

#line 257 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_3;

#line 260 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_4;

#line 263 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_5;

#line 266 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_6;

#line 269 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_7;

#line 272 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_8;

#line 275 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_9;

#line 278 "recompilation.c"
static const MR_EnumFunctorDescPtr recompilation__recompilation__enum_value_ordered_item_type_0[10];

#line 281 "recompilation.c"
static const MR_EnumFunctorDescPtr recompilation__recompilation__enum_name_ordered_item_type_0[10];

#line 284 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_type_0[10];

#line 287 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0;

#line 290 "recompilation.c"
static const MR_FA_TypeInfo_Struct3 recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0;

#line 293 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0;

#line 296 "recompilation.c"
static const MR_FA_TypeInfo_Struct3 recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 299 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_id_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0;

#line 302 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_recompilation_info_0_0[4];

#line 305 "recompilation.c"
static const MR_ConstString recompilation__recompilation__field_names_recompilation_info_0_0[4];

#line 308 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_recompilation_info_0_0;

#line 311 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_recompilation_info_0_0[1];

#line 314 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_recompilation_info_0[1];

#line 317 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_recompilation_info_0[1];

#line 320 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_recompilation_info_0[1];

#line 323 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_version_numbers_0_0[2];

#line 326 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_version_numbers_0_0;

#line 329 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_version_numbers_0_0[1];

#line 332 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_version_numbers_0[1];

#line 335 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_version_numbers_0[1];

#line 338 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_version_numbers_0[1];

#line 341 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____eqv_expanded_info_0_0_10001(
#line 344 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 346 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 349 "recompilation.c"
static void MR_CALL 
recompilation____Compare____eqv_expanded_info_0_0_10001(
#line 352 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 354 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 356 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 359 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____eqv_expanded_item_set_0_0_10001(
#line 362 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 364 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 367 "recompilation.c"
static void MR_CALL 
recompilation____Compare____eqv_expanded_item_set_0_0_10001(
#line 370 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 372 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 374 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 377 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____functor_set_0_0_10001(
#line 380 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 382 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 385 "recompilation.c"
static void MR_CALL 
recompilation____Compare____functor_set_0_0_10001(
#line 388 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 390 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 392 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 395 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____instance_version_numbers_0_0_10001(
#line 398 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 400 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 403 "recompilation.c"
static void MR_CALL 
recompilation____Compare____instance_version_numbers_0_0_10001(
#line 406 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 408 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 410 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 413 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_id_0_0_10001(
#line 416 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 418 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 421 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_id_0_0_10001(
#line 424 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 426 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 428 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 431 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_id_set_3_0_10001(
#line 434 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 436 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 438 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3,
#line 440 "recompilation.c"
  MR_Box recompilation__wrapper_arg_4,
#line 442 "recompilation.c"
  MR_Box recompilation__wrapper_arg_5);

#line 445 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_id_set_3_0_10001(
#line 448 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 450 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 452 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3,
#line 454 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_4,
#line 456 "recompilation.c"
  MR_Box recompilation__wrapper_arg_5,
#line 458 "recompilation.c"
  MR_Box recompilation__wrapper_arg_6);

#line 461 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_id_set_1_0_10001(
#line 464 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 466 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 468 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 471 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_id_set_1_0_10001(
#line 474 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 476 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_2,
#line 478 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3,
#line 480 "recompilation.c"
  MR_Box recompilation__wrapper_arg_4);

#line 483 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_name_0_0_10001(
#line 486 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 488 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 491 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_name_0_0_10001(
#line 494 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 496 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 498 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 501 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_type_0_0_10001(
#line 504 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 506 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 509 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_type_0_0_10001(
#line 512 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 514 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 516 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 519 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_version_numbers_0_0_10001(
#line 522 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 524 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 527 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_version_numbers_0_0_10001(
#line 530 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 532 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 534 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 537 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____module_qualifier_0_0_10001(
#line 540 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 542 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 545 "recompilation.c"
static void MR_CALL 
recompilation____Compare____module_qualifier_0_0_10001(
#line 548 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 550 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 552 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 555 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____module_version_numbers_map_0_0_10001(
#line 558 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 560 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 563 "recompilation.c"
static void MR_CALL 
recompilation____Compare____module_version_numbers_map_0_0_10001(
#line 566 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 568 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 570 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 573 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____pred_or_func_set_0_0_10001(
#line 576 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 578 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 581 "recompilation.c"
static void MR_CALL 
recompilation____Compare____pred_or_func_set_0_0_10001(
#line 584 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 586 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 588 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 591 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____recompilation_info_0_0_10001(
#line 594 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 596 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 599 "recompilation.c"
static void MR_CALL 
recompilation____Compare____recompilation_info_0_0_10001(
#line 602 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 604 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 606 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 609 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____simple_item_set_0_0_10001(
#line 612 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 614 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 617 "recompilation.c"
static void MR_CALL 
recompilation____Compare____simple_item_set_0_0_10001(
#line 620 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 622 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 624 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 627 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____used_items_0_0_10001(
#line 630 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 632 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 635 "recompilation.c"
static void MR_CALL 
recompilation____Compare____used_items_0_0_10001(
#line 638 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 640 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 642 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 645 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____version_number_0_0_10001(
#line 648 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 650 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 653 "recompilation.c"
static void MR_CALL 
recompilation____Compare____version_number_0_0_10001(
#line 656 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 658 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 660 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 663 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____version_number_map_0_0_10001(
#line 666 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 668 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 671 "recompilation.c"
static void MR_CALL 
recompilation____Compare____version_number_map_0_0_10001(
#line 674 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 676 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 678 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 681 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____version_numbers_0_0_10001(
#line 684 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 686 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 689 "recompilation.c"
static void MR_CALL 
recompilation____Compare____version_numbers_0_0_10001(
#line 692 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 694 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 696 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 435 "recompilation.m"
static MR_Word MR_CALL 
recompilation__IntroducedFrom__func__map_ids__435__1_6_f_0(
#line 435 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_38,
#line 435 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_U_39,
#line 435 "recompilation.m"
  MR_Word recompilation__Func_5,
#line 435 "recompilation.m"
  MR_Word recompilation__Items0_6,
#line 435 "recompilation.m"
  MR_Word recompilation__LambdaHeadVar__1_14,
#line 435 "recompilation.m"
  MR_Word recompilation__LambdaHeadVar__2_15);

#line 528 "recompilation.m"
static void MR_CALL 
recompilation__record_expanded_item_3_p_0_1(
#line 528 "recompilation.m"
  MR_Box recompilation__closure_arg,
#line 528 "recompilation.m"
  MR_Box recompilation__wrapper_arg_1,
#line 528 "recompilation.m"
  MR_Box * recompilation__wrapper_arg_2);

#line 435 "recompilation.m"
static MR_Box MR_CALL 
recompilation__map_ids_3_f_0_1(
#line 435 "recompilation.m"
  MR_Box recompilation__closure_arg,
#line 435 "recompilation.m"
  MR_Box recompilation__wrapper_arg_1,
#line 435 "recompilation.m"
  MR_Box recompilation__wrapper_arg_2);


static /* final */ const MR_Box recompilation_scalar_common_1[10][2];

static /* final */ const MR_Box recompilation_scalar_common_2[7][3];

static /* final */ const MR_Box recompilation_scalar_common_3[2][4];

static /* final */ const MR_Integer recompilation_scalar_common_6[1][3];

static /* final */ const MR_Box recompilation_scalar_common_7[1][10];

static /* final */ const MR_Box recompilation_scalar_common_8[1][1];

static /* final */ const MR_Box recompilation_scalar_common_9[1][6];


#line 341 "recompilation.m"
/* sealed */ struct recompilation__vector_common_type_4_0_s {
#line 341 "recompilation.m"
  const MR_String recompilation__vector_common_type_4_0__vct_4_f_0;
#line 341 "recompilation.m"
  const MR_Word recompilation__vector_common_type_4_0__vct_4_f_1;
#line 341 "recompilation.m"
};

static /* final */ const struct recompilation__vector_common_type_4_0_s recompilation_vector_common_4[32];

#line 341 "recompilation.m"
/* sealed */ struct recompilation__vector_common_type_5_0_s {
#line 341 "recompilation.m"
  const MR_String recompilation__vector_common_type_5_0__vct_5_f_0;
#line 341 "recompilation.m"
};

static /* final */ const struct recompilation__vector_common_type_5_0_s recompilation_vector_common_5[10];



static /* final */ const MR_Box recompilation_scalar_common_1[10][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_eqv_expanded_item_set_0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation_scalar_common_1[2])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation_scalar_common_1[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation_scalar_common_1[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation_scalar_common_1[8])))
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
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_version_numbers_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&recompilation_scalar_common_1[0]))
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

static /* final */ const MR_Integer recompilation_scalar_common_6[1][3] = {
  /* row 0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 33,
    (MR_Integer) 65
  },
};

static /* final */ const MR_Box recompilation_scalar_common_7[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&recompilation_scalar_common_6[0])),
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

static /* final */ const MR_Box recompilation_scalar_common_8[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box recompilation_scalar_common_9[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_eqv_expanded_item_set_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_eqv_expanded_item_set_0))
  },
};


static /* final */ const struct recompilation__vector_common_type_4_0_s recompilation_vector_common_4[32] = {
  /* row 0 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "foreign_proc",
    (MR_Integer) 9
  },
  /* row 2 */
  {
    (MR_String) "functor",
    (MR_Integer) 5
  },
  /* row 3 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 4 */
  {
    (MR_String) "predicate",
    (MR_Integer) 6
  },
  /* row 5 */
  {
    (MR_String) "typeclass",
    (MR_Integer) 4
  },
  /* row 6 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 7 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 8 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 9 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 10 */
  {
    (MR_String) "function",
    (MR_Integer) 7
  },
  /* row 11 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 12 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 13 */
  {
    (MR_String) "mode",
    (MR_Integer) 2
  },
  /* row 14 */
  {
    (MR_String) "type",
    (MR_Integer) 0
  },
  /* row 15 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 16 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 17 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 18 */
  {
    (MR_String) "inst",
    (MR_Integer) 3
  },
  /* row 19 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 20 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 21 */
  {
    (MR_String) "mutable",
    (MR_Integer) 8
  },
  /* row 22 */
  {
    (MR_String) "type_body",
    (MR_Integer) 1
  },
  /* row 23 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 24 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 25 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 26 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 27 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 28 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 29 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 30 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 31 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
};

static /* final */ const struct recompilation__vector_common_type_5_0_s recompilation_vector_common_5[10] = {
  /* row 0 */   {     (MR_String) "type" },
  /* row 1 */   {     (MR_String) "type_body" },
  /* row 2 */   {     (MR_String) "mode" },
  /* row 3 */   {     (MR_String) "inst" },
  /* row 4 */   {     (MR_String) "typeclass" },
  /* row 5 */   {     (MR_String) "functor" },
  /* row 6 */   {     (MR_String) "predicate" },
  /* row 7 */   {     (MR_String) "function" },
  /* row 8 */   {     (MR_String) "mutable" },
  /* row 9 */   {     (MR_String) "foreign_proc" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1117 "recompilation.c"
static const MR_VA_PseudoTypeInfo_Struct3 recompilation____vpti_func_3__plain_recompilation__type_ctor_info_item_type_0__pseudo_1__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_type_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1128 "recompilation.c"
static const MR_FA_PseudoTypeInfo_Struct3 recompilation__recompilation__pti_item_id_set_3__pseudo_1__pseudo_1__pseudo_1 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1138 "recompilation.c"
static const MR_FA_PseudoTypeInfo_Struct3 recompilation__recompilation__pti_item_id_set_3__pseudo_2__pseudo_2__pseudo_2 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1148 "recompilation.c"
static const MR_FA_TypeInfo_Struct1 recompilation__maybe__ti_maybe_1recompilation__type_ctor_info_eqv_expanded_item_set_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_eqv_expanded_item_set_0
  }
};

#line 1156 "recompilation.c"
const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_eqv_expanded_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____eqv_expanded_info_0_0_10001)),
  ((MR_Box) (recompilation____Compare____eqv_expanded_info_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "eqv_expanded_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__maybe__ti_maybe_1recompilation__type_ctor_info_eqv_expanded_item_set_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1173 "recompilation.c"
static const MR_FA_TypeInfo_Struct1 recompilation__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_id_0
  }
};

#line 1181 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_eqv_expanded_item_set_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &recompilation__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0
};

#line 1187 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_eqv_expanded_item_set_0_0 = {
  (MR_String) "eqv_expanded_item_set",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  recompilation__recompilation__field_types_eqv_expanded_item_set_0_0,
  NULL,
  NULL,
  NULL
};

#line 1202 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_eqv_expanded_item_set_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_eqv_expanded_item_set_0_0
};

#line 1207 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_eqv_expanded_item_set_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_eqv_expanded_item_set_0_0
  }
};

#line 1216 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_eqv_expanded_item_set_0[1] = {
  &recompilation__recompilation__du_functor_desc_eqv_expanded_item_set_0_0
};

#line 1221 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_eqv_expanded_item_set_0[1] = {
  (MR_Integer) 0
};

#line 1226 "recompilation.c"
const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_eqv_expanded_item_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation____Unify____eqv_expanded_item_set_0_0_10001)),
  ((MR_Box) (recompilation____Compare____eqv_expanded_item_set_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "eqv_expanded_item_set",
  {     recompilation__recompilation__du_name_ordered_eqv_expanded_item_set_0 },
  {     recompilation__recompilation__du_ptag_ordered_eqv_expanded_item_set_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  recompilation__recompilation__functor_number_map_eqv_expanded_item_set_0
};

#line 1243 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1252 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1261 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1270 "recompilation.c"
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

#line 1287 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_name_0,
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 1296 "recompilation.c"
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

#line 1313 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_id_0_0[2] = {
  (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_type_0,
  (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_name_0
};

#line 1319 "recompilation.c"
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

#line 1334 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_id_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_id_0_0
};

#line 1339 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_item_id_0_0
  }
};

#line 1348 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_id_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_id_0_0
};

#line 1353 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_id_0[1] = {
  (MR_Integer) 0
};

#line 1358 "recompilation.c"
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

#line 1375 "recompilation.c"
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

#line 1389 "recompilation.c"
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

#line 1403 "recompilation.c"
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

#line 1418 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_id_set_3_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_id_set_3_0
};

#line 1423 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_id_set_3[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_item_id_set_3_0
  }
};

#line 1432 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_id_set_3[1] = {
  &recompilation__recompilation__du_functor_desc_item_id_set_3_0
};

#line 1437 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_id_set_3[1] = {
  (MR_Integer) 0
};

#line 1442 "recompilation.c"
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

#line 1459 "recompilation.c"
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

#line 1476 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_name_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1482 "recompilation.c"
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

#line 1497 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_name_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_name_0_0
};

#line 1502 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_name_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_item_name_0_0
  }
};

#line 1511 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_name_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_name_0_0
};

#line 1516 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_name_0[1] = {
  (MR_Integer) 0
};

#line 1521 "recompilation.c"
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

#line 1538 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_0 = {
  (MR_String) "type_abstract_item",
  (MR_Integer) 0
};

#line 1544 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_1 = {
  (MR_String) "type_body_item",
  (MR_Integer) 1
};

#line 1550 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_2 = {
  (MR_String) "mode_item",
  (MR_Integer) 2
};

#line 1556 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_3 = {
  (MR_String) "inst_item",
  (MR_Integer) 3
};

#line 1562 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_4 = {
  (MR_String) "typeclass_item",
  (MR_Integer) 4
};

#line 1568 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_5 = {
  (MR_String) "functor_item",
  (MR_Integer) 5
};

#line 1574 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_6 = {
  (MR_String) "predicate_item",
  (MR_Integer) 6
};

#line 1580 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_7 = {
  (MR_String) "function_item",
  (MR_Integer) 7
};

#line 1586 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_8 = {
  (MR_String) "mutable_item",
  (MR_Integer) 8
};

#line 1592 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_9 = {
  (MR_String) "foreign_proc_item",
  (MR_Integer) 9
};

#line 1598 "recompilation.c"
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

#line 1612 "recompilation.c"
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

#line 1626 "recompilation.c"
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

#line 1640 "recompilation.c"
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

#line 1657 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 1666 "recompilation.c"
static const MR_FA_TypeInfo_Struct3 recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0,
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0,
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 1676 "recompilation.c"
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

#line 1693 "recompilation.c"
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

#line 1710 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_version_numbers_0
  }
};

#line 1719 "recompilation.c"
const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_module_version_numbers_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____module_version_numbers_map_0_0_10001)),
  ((MR_Box) (recompilation____Compare____module_version_numbers_map_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "module_version_numbers_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1736 "recompilation.c"
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

#line 1753 "recompilation.c"
static const MR_FA_TypeInfo_Struct3 recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1763 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_id_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_id_0,
    (MR_TypeInfo) &recompilation__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0
  }
};

#line 1772 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_recompilation_info_0_0[4] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_id_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0,
  (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0
};

#line 1780 "recompilation.c"
static const MR_ConstString recompilation__recompilation__field_names_recompilation_info_0_0[4] = {
  (MR_String) "recomp_module_name",
  (MR_String) "recomp_used_items",
  (MR_String) "recomp_dependencies",
  (MR_String) "recomp_version_numbers"
};

#line 1788 "recompilation.c"
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

#line 1803 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_recompilation_info_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_recompilation_info_0_0
};

#line 1808 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_recompilation_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_recompilation_info_0_0
  }
};

#line 1817 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_recompilation_info_0[1] = {
  &recompilation__recompilation__du_functor_desc_recompilation_info_0_0
};

#line 1822 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_recompilation_info_0[1] = {
  (MR_Integer) 0
};

#line 1827 "recompilation.c"
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

#line 1844 "recompilation.c"
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

#line 1861 "recompilation.c"
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

#line 1878 "recompilation.c"
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

#line 1895 "recompilation.c"
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

#line 1912 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_version_numbers_0_0[2] = {
  (MR_PseudoTypeInfo) &recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0,
  (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0
};

#line 1918 "recompilation.c"
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

#line 1933 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_version_numbers_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_version_numbers_0_0
};

#line 1938 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_version_numbers_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_version_numbers_0_0
  }
};

#line 1947 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_version_numbers_0[1] = {
  &recompilation__recompilation__du_functor_desc_version_numbers_0_0
};

#line 1952 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_version_numbers_0[1] = {
  (MR_Integer) 0
};

#line 1957 "recompilation.c"
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

#line 1974 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____eqv_expanded_info_0_0_10001(
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
      recompilation__succeeded = recompilation____Unify____eqv_expanded_info_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 1993 "recompilation.c"
    return recompilation__succeeded;
#line 1995 "recompilation.c"
  }
#line 1997 "recompilation.c"
}

#line 2000 "recompilation.c"
static void MR_CALL 
recompilation____Compare____eqv_expanded_info_0_0_10001(
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
      recompilation____Compare____eqv_expanded_info_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2021 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2023 "recompilation.c"
  }
#line 2025 "recompilation.c"
}

#line 2028 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____eqv_expanded_item_set_0_0_10001(
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
      recompilation__succeeded = recompilation____Unify____eqv_expanded_item_set_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2047 "recompilation.c"
    return recompilation__succeeded;
#line 2049 "recompilation.c"
  }
#line 2051 "recompilation.c"
}

#line 2054 "recompilation.c"
static void MR_CALL 
recompilation____Compare____eqv_expanded_item_set_0_0_10001(
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
      recompilation____Compare____eqv_expanded_item_set_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2075 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2077 "recompilation.c"
  }
#line 2079 "recompilation.c"
}

#line 2082 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____functor_set_0_0_10001(
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
      recompilation__succeeded = recompilation____Unify____functor_set_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2101 "recompilation.c"
    return recompilation__succeeded;
#line 2103 "recompilation.c"
  }
#line 2105 "recompilation.c"
}

#line 2108 "recompilation.c"
static void MR_CALL 
recompilation____Compare____functor_set_0_0_10001(
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
      recompilation____Compare____functor_set_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2129 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2131 "recompilation.c"
  }
#line 2133 "recompilation.c"
}

#line 2136 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____instance_version_numbers_0_0_10001(
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
      recompilation__succeeded = recompilation____Unify____instance_version_numbers_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2155 "recompilation.c"
    return recompilation__succeeded;
#line 2157 "recompilation.c"
  }
#line 2159 "recompilation.c"
}

#line 2162 "recompilation.c"
static void MR_CALL 
recompilation____Compare____instance_version_numbers_0_0_10001(
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
      recompilation____Compare____instance_version_numbers_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2183 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2185 "recompilation.c"
  }
#line 2187 "recompilation.c"
}

#line 2190 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_id_0_0_10001(
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
      recompilation__succeeded = recompilation____Unify____item_id_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2209 "recompilation.c"
    return recompilation__succeeded;
#line 2211 "recompilation.c"
  }
#line 2213 "recompilation.c"
}

#line 2216 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_id_0_0_10001(
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
      recompilation____Compare____item_id_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2237 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2239 "recompilation.c"
  }
#line 2241 "recompilation.c"
}

#line 2244 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_id_set_3_0_10001(
#line 2247 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2249 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2251 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3,
#line 2253 "recompilation.c"
  MR_Box recompilation__wrapper_arg_4,
#line 2255 "recompilation.c"
  MR_Box recompilation__wrapper_arg_5)
#line 2257 "recompilation.c"
{
#line 2259 "recompilation.c"
  {
#line 2261 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2264 "recompilation.c"
    {
#line 2266 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____item_id_set_3_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3), ((MR_Word) recompilation__wrapper_arg_4), ((MR_Word) recompilation__wrapper_arg_5));
    }
#line 2269 "recompilation.c"
    return recompilation__succeeded;
#line 2271 "recompilation.c"
  }
#line 2273 "recompilation.c"
}

#line 2276 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_id_set_3_0_10001(
#line 2279 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2281 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2283 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3,
#line 2285 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_4,
#line 2287 "recompilation.c"
  MR_Box recompilation__wrapper_arg_5,
#line 2289 "recompilation.c"
  MR_Box recompilation__wrapper_arg_6)
#line 2291 "recompilation.c"
{
#line 2293 "recompilation.c"
  {
#line 2295 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2298 "recompilation.c"
    {
#line 2300 "recompilation.c"
      recompilation____Compare____item_id_set_3_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3), &recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_5), ((MR_Word) recompilation__wrapper_arg_6));
    }
#line 2303 "recompilation.c"
    *recompilation__wrapper_arg_4 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2305 "recompilation.c"
  }
#line 2307 "recompilation.c"
}

#line 2310 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_id_set_1_0_10001(
#line 2313 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2315 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2317 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2319 "recompilation.c"
{
#line 2321 "recompilation.c"
  {
#line 2323 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2326 "recompilation.c"
    {
#line 2328 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____item_id_set_1_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2331 "recompilation.c"
    return recompilation__succeeded;
#line 2333 "recompilation.c"
  }
#line 2335 "recompilation.c"
}

#line 2338 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_id_set_1_0_10001(
#line 2341 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2343 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_2,
#line 2345 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3,
#line 2347 "recompilation.c"
  MR_Box recompilation__wrapper_arg_4)
#line 2349 "recompilation.c"
{
#line 2351 "recompilation.c"
  {
#line 2353 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2356 "recompilation.c"
    {
#line 2358 "recompilation.c"
      recompilation____Compare____item_id_set_1_0(((MR_Word) recompilation__wrapper_arg_1), &recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_3), ((MR_Word) recompilation__wrapper_arg_4));
    }
#line 2361 "recompilation.c"
    *recompilation__wrapper_arg_2 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2363 "recompilation.c"
  }
#line 2365 "recompilation.c"
}

#line 2368 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_name_0_0_10001(
#line 2371 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2373 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2375 "recompilation.c"
{
#line 2377 "recompilation.c"
  {
#line 2379 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2382 "recompilation.c"
    {
#line 2384 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____item_name_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2387 "recompilation.c"
    return recompilation__succeeded;
#line 2389 "recompilation.c"
  }
#line 2391 "recompilation.c"
}

#line 2394 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_name_0_0_10001(
#line 2397 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2399 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2401 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2403 "recompilation.c"
{
#line 2405 "recompilation.c"
  {
#line 2407 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2410 "recompilation.c"
    {
#line 2412 "recompilation.c"
      recompilation____Compare____item_name_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2415 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2417 "recompilation.c"
  }
#line 2419 "recompilation.c"
}

#line 2422 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_type_0_0_10001(
#line 2425 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2427 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2429 "recompilation.c"
{
#line 2431 "recompilation.c"
  {
#line 2433 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2436 "recompilation.c"
    {
#line 2438 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____item_type_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2441 "recompilation.c"
    return recompilation__succeeded;
#line 2443 "recompilation.c"
  }
#line 2445 "recompilation.c"
}

#line 2448 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_type_0_0_10001(
#line 2451 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2453 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2455 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2457 "recompilation.c"
{
#line 2459 "recompilation.c"
  {
#line 2461 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2464 "recompilation.c"
    {
#line 2466 "recompilation.c"
      recompilation____Compare____item_type_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2469 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2471 "recompilation.c"
  }
#line 2473 "recompilation.c"
}

#line 2476 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_version_numbers_0_0_10001(
#line 2479 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2481 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2483 "recompilation.c"
{
#line 2485 "recompilation.c"
  {
#line 2487 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2490 "recompilation.c"
    {
#line 2492 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____item_version_numbers_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2495 "recompilation.c"
    return recompilation__succeeded;
#line 2497 "recompilation.c"
  }
#line 2499 "recompilation.c"
}

#line 2502 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_version_numbers_0_0_10001(
#line 2505 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2507 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2509 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2511 "recompilation.c"
{
#line 2513 "recompilation.c"
  {
#line 2515 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2518 "recompilation.c"
    {
#line 2520 "recompilation.c"
      recompilation____Compare____item_version_numbers_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2523 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2525 "recompilation.c"
  }
#line 2527 "recompilation.c"
}

#line 2530 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____module_qualifier_0_0_10001(
#line 2533 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2535 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2537 "recompilation.c"
{
#line 2539 "recompilation.c"
  {
#line 2541 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2544 "recompilation.c"
    {
#line 2546 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____module_qualifier_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2549 "recompilation.c"
    return recompilation__succeeded;
#line 2551 "recompilation.c"
  }
#line 2553 "recompilation.c"
}

#line 2556 "recompilation.c"
static void MR_CALL 
recompilation____Compare____module_qualifier_0_0_10001(
#line 2559 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2561 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2563 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2565 "recompilation.c"
{
#line 2567 "recompilation.c"
  {
#line 2569 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2572 "recompilation.c"
    {
#line 2574 "recompilation.c"
      recompilation____Compare____module_qualifier_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2577 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2579 "recompilation.c"
  }
#line 2581 "recompilation.c"
}

#line 2584 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____module_version_numbers_map_0_0_10001(
#line 2587 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2589 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2591 "recompilation.c"
{
#line 2593 "recompilation.c"
  {
#line 2595 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2598 "recompilation.c"
    {
#line 2600 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____module_version_numbers_map_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2603 "recompilation.c"
    return recompilation__succeeded;
#line 2605 "recompilation.c"
  }
#line 2607 "recompilation.c"
}

#line 2610 "recompilation.c"
static void MR_CALL 
recompilation____Compare____module_version_numbers_map_0_0_10001(
#line 2613 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2615 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2617 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2619 "recompilation.c"
{
#line 2621 "recompilation.c"
  {
#line 2623 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2626 "recompilation.c"
    {
#line 2628 "recompilation.c"
      recompilation____Compare____module_version_numbers_map_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2631 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2633 "recompilation.c"
  }
#line 2635 "recompilation.c"
}

#line 2638 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____pred_or_func_set_0_0_10001(
#line 2641 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2643 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2645 "recompilation.c"
{
#line 2647 "recompilation.c"
  {
#line 2649 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2652 "recompilation.c"
    {
#line 2654 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____pred_or_func_set_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2657 "recompilation.c"
    return recompilation__succeeded;
#line 2659 "recompilation.c"
  }
#line 2661 "recompilation.c"
}

#line 2664 "recompilation.c"
static void MR_CALL 
recompilation____Compare____pred_or_func_set_0_0_10001(
#line 2667 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2669 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2671 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2673 "recompilation.c"
{
#line 2675 "recompilation.c"
  {
#line 2677 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2680 "recompilation.c"
    {
#line 2682 "recompilation.c"
      recompilation____Compare____pred_or_func_set_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2685 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2687 "recompilation.c"
  }
#line 2689 "recompilation.c"
}

#line 2692 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____recompilation_info_0_0_10001(
#line 2695 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2697 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2699 "recompilation.c"
{
#line 2701 "recompilation.c"
  {
#line 2703 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2706 "recompilation.c"
    {
#line 2708 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____recompilation_info_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2711 "recompilation.c"
    return recompilation__succeeded;
#line 2713 "recompilation.c"
  }
#line 2715 "recompilation.c"
}

#line 2718 "recompilation.c"
static void MR_CALL 
recompilation____Compare____recompilation_info_0_0_10001(
#line 2721 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2723 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2725 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2727 "recompilation.c"
{
#line 2729 "recompilation.c"
  {
#line 2731 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2734 "recompilation.c"
    {
#line 2736 "recompilation.c"
      recompilation____Compare____recompilation_info_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2739 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2741 "recompilation.c"
  }
#line 2743 "recompilation.c"
}

#line 2746 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____simple_item_set_0_0_10001(
#line 2749 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2751 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2753 "recompilation.c"
{
#line 2755 "recompilation.c"
  {
#line 2757 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2760 "recompilation.c"
    {
#line 2762 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____simple_item_set_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2765 "recompilation.c"
    return recompilation__succeeded;
#line 2767 "recompilation.c"
  }
#line 2769 "recompilation.c"
}

#line 2772 "recompilation.c"
static void MR_CALL 
recompilation____Compare____simple_item_set_0_0_10001(
#line 2775 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2777 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2779 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2781 "recompilation.c"
{
#line 2783 "recompilation.c"
  {
#line 2785 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2788 "recompilation.c"
    {
#line 2790 "recompilation.c"
      recompilation____Compare____simple_item_set_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2793 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2795 "recompilation.c"
  }
#line 2797 "recompilation.c"
}

#line 2800 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____used_items_0_0_10001(
#line 2803 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2805 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2807 "recompilation.c"
{
#line 2809 "recompilation.c"
  {
#line 2811 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2814 "recompilation.c"
    {
#line 2816 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____used_items_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2819 "recompilation.c"
    return recompilation__succeeded;
#line 2821 "recompilation.c"
  }
#line 2823 "recompilation.c"
}

#line 2826 "recompilation.c"
static void MR_CALL 
recompilation____Compare____used_items_0_0_10001(
#line 2829 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2831 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2833 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2835 "recompilation.c"
{
#line 2837 "recompilation.c"
  {
#line 2839 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2842 "recompilation.c"
    {
#line 2844 "recompilation.c"
      recompilation____Compare____used_items_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2847 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2849 "recompilation.c"
  }
#line 2851 "recompilation.c"
}

#line 2854 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____version_number_0_0_10001(
#line 2857 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2859 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2861 "recompilation.c"
{
#line 2863 "recompilation.c"
  {
#line 2865 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2868 "recompilation.c"
    {
#line 2870 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____version_number_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2873 "recompilation.c"
    return recompilation__succeeded;
#line 2875 "recompilation.c"
  }
#line 2877 "recompilation.c"
}

#line 2880 "recompilation.c"
static void MR_CALL 
recompilation____Compare____version_number_0_0_10001(
#line 2883 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2885 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2887 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2889 "recompilation.c"
{
#line 2891 "recompilation.c"
  {
#line 2893 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2896 "recompilation.c"
    {
#line 2898 "recompilation.c"
      recompilation____Compare____version_number_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2901 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2903 "recompilation.c"
  }
#line 2905 "recompilation.c"
}

#line 2908 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____version_number_map_0_0_10001(
#line 2911 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2913 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2915 "recompilation.c"
{
#line 2917 "recompilation.c"
  {
#line 2919 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2922 "recompilation.c"
    {
#line 2924 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____version_number_map_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2927 "recompilation.c"
    return recompilation__succeeded;
#line 2929 "recompilation.c"
  }
#line 2931 "recompilation.c"
}

#line 2934 "recompilation.c"
static void MR_CALL 
recompilation____Compare____version_number_map_0_0_10001(
#line 2937 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2939 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2941 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2943 "recompilation.c"
{
#line 2945 "recompilation.c"
  {
#line 2947 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2950 "recompilation.c"
    {
#line 2952 "recompilation.c"
      recompilation____Compare____version_number_map_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2955 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2957 "recompilation.c"
  }
#line 2959 "recompilation.c"
}

#line 2962 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____version_numbers_0_0_10001(
#line 2965 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2967 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2969 "recompilation.c"
{
#line 2971 "recompilation.c"
  {
#line 2973 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2976 "recompilation.c"
    {
#line 2978 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____version_numbers_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2981 "recompilation.c"
    return recompilation__succeeded;
#line 2983 "recompilation.c"
  }
#line 2985 "recompilation.c"
}

#line 2988 "recompilation.c"
static void MR_CALL 
recompilation____Compare____version_numbers_0_0_10001(
#line 2991 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2993 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2995 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2997 "recompilation.c"
{
#line 2999 "recompilation.c"
  {
#line 3001 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 3004 "recompilation.c"
    {
#line 3006 "recompilation.c"
      recompilation____Compare____version_numbers_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 3009 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 3011 "recompilation.c"
  }
#line 3013 "recompilation.c"
}

#line 435 "recompilation.m"
static MR_Word MR_CALL 
recompilation__IntroducedFrom__func__map_ids__435__1_6_f_0(
#line 435 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_38,
#line 435 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_U_39,
#line 435 "recompilation.m"
  MR_Word recompilation__Func_5,
#line 435 "recompilation.m"
  MR_Word recompilation__Items0_6,
#line 435 "recompilation.m"
  MR_Word recompilation__LambdaHeadVar__1_14,
#line 435 "recompilation.m"
  MR_Word recompilation__LambdaHeadVar__2_15)
#line 435 "recompilation.m"
{
#line 435 "recompilation.m"
  {
#line 435 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 435 "recompilation.m"
    MR_Word recompilation__LambdaHeadVar__3_16;
#line 435 "recompilation.m"
    MR_Box recompilation__V_17_17;
#line 435 "recompilation.m"
    MR_Box recompilation__V_18_18;
#line 437 "recompilation.m"
    MR_Box MR_CALL (* recompilation__func_0)(MR_Box, MR_Box, MR_Box);

#line 437 "recompilation.m"
    {
#line 437 "recompilation.m"
      recompilation__V_18_18 = recompilation__extract_ids_2_f_0(recompilation__TypeInfo_for_T_38, recompilation__Items0_6, recompilation__LambdaHeadVar__1_14);
    }
#line 437 "recompilation.m"
    recompilation__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), recompilation__Func_5, (MR_Integer) 1)));
#line 437 "recompilation.m"
    {
#line 437 "recompilation.m"
      recompilation__V_17_17 = recompilation__func_0(((MR_Box) recompilation__Func_5), ((MR_Box) (recompilation__LambdaHeadVar__1_14)), recompilation__V_18_18);
    }
#line 437 "recompilation.m"
    {
#line 437 "recompilation.m"
      recompilation__update_ids_4_p_0(recompilation__TypeInfo_for_U_39, recompilation__LambdaHeadVar__1_14, recompilation__V_17_17, recompilation__LambdaHeadVar__2_15, &recompilation__LambdaHeadVar__3_16);
    }
#line 435 "recompilation.m"
    return recompilation__LambdaHeadVar__3_16;
#line 435 "recompilation.m"
  }
#line 435 "recompilation.m"
}

#line 223 "recompilation.m"
void MR_CALL 
recompilation____Compare____version_numbers_0_0(
#line 223 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 223 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 223 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 223 "recompilation.m"
{
#line 223 "recompilation.m"
  {
#line 223 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 223 "recompilation.m"
    MR_Integer recompilation__CastX_9 = (MR_Integer) recompilation__HeadVar__2_2;
#line 223 "recompilation.m"
    MR_Integer recompilation__CastY_10 = (MR_Integer) recompilation__HeadVar__3_3;

#line 223 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_9 == recompilation__CastY_10);
#line 223 "recompilation.m"
    if (recompilation__succeeded)
#line 3094 "recompilation.c"
      *recompilation__HeadVar__1_1 = (MR_Integer) 0;
#line 223 "recompilation.m"
    else
#line 223 "recompilation.m"
      {
#line 223 "recompilation.m"
        MR_Word recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
#line 223 "recompilation.m"
        MR_Word recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));
#line 223 "recompilation.m"
        MR_Word recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 0)));
#line 223 "recompilation.m"
        MR_Word recompilation__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 1)));
#line 223 "recompilation.m"
        MR_Word recompilation__V_8_8;

#line 223 "recompilation.m"
        {
#line 223 "recompilation.m"
          mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_3[0], &recompilation__V_8_8, ((MR_Box) (recompilation__V_4_4)), ((MR_Box) (recompilation__V_6_6)));
        }
#line 3116 "recompilation.c"
        recompilation__succeeded = (recompilation__V_8_8 == (MR_Integer) 0);
#line 223 "recompilation.m"
        recompilation__succeeded = !(recompilation__succeeded);
#line 223 "recompilation.m"
        if (recompilation__succeeded)
#line 223 "recompilation.m"
          *recompilation__HeadVar__1_1 = recompilation__V_8_8;
#line 223 "recompilation.m"
        else
#line 223 "recompilation.m"
          {
#line 223 "recompilation.m"
            {
#line 223 "recompilation.m"
              mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[3], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__V_5_5)), ((MR_Box) (recompilation__V_7_7)));
#line 223 "recompilation.m"
              return;
            }
#line 223 "recompilation.m"
          }
#line 223 "recompilation.m"
      }
#line 223 "recompilation.m"
  }
#line 223 "recompilation.m"
}

#line 223 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____version_numbers_0_0(
#line 223 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 223 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 223 "recompilation.m"
{
#line 223 "recompilation.m"
  {
#line 223 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 223 "recompilation.m"
    MR_Integer recompilation__CastX_7 = (MR_Integer) recompilation__HeadVar__1_1;
#line 223 "recompilation.m"
    MR_Integer recompilation__CastY_8 = (MR_Integer) recompilation__HeadVar__2_2;

#line 223 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_7 == recompilation__CastY_8);
#line 223 "recompilation.m"
    if (recompilation__succeeded)
#line 223 "recompilation.m"
      recompilation__succeeded = MR_TRUE;
#line 223 "recompilation.m"
    else
#line 223 "recompilation.m"
      {
#line 223 "recompilation.m"
        MR_Word recompilation__TypeInfo_9_9 = (MR_Word) &recompilation_scalar_common_2[4];
#line 223 "recompilation.m"
        MR_Word recompilation__TypeInfo_10_10;
#line 223 "recompilation.m"
        MR_Word recompilation__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 223 "recompilation.m"
        MR_Word recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));
#line 223 "recompilation.m"
        MR_Word recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
#line 223 "recompilation.m"
        MR_Word recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));

#line 3185 "recompilation.c"
        {
#line 3187 "recompilation.c"
          recompilation__succeeded = recompilation____Unify____item_id_set_3_0(recompilation__TypeInfo_9_9, recompilation__TypeInfo_9_9, recompilation__TypeInfo_9_9, recompilation__V_3_3, recompilation__V_5_5);
        }
#line 223 "recompilation.m"
        if (recompilation__succeeded)
#line 223 "recompilation.m"
          {
#line 3194 "recompilation.c"
            recompilation__TypeInfo_10_10 = (MR_Word) &recompilation_scalar_common_2[3];
#line 3196 "recompilation.c"
            {
#line 3198 "recompilation.c"
              return recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_10_10, ((MR_Box) (recompilation__V_4_4)), ((MR_Box) (recompilation__V_6_6)));
            }
#line 223 "recompilation.m"
          }
#line 223 "recompilation.m"
      }
#line 223 "recompilation.m"
    return recompilation__succeeded;
#line 223 "recompilation.m"
  }
#line 223 "recompilation.m"
}

#line 236 "recompilation.m"
void MR_CALL 
recompilation____Compare____version_number_map_0_0(
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
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 236 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 236 "recompilation.m"
    {
#line 236 "recompilation.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[4], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
#line 236 "recompilation.m"
      return;
    }
#line 236 "recompilation.m"
  }
#line 236 "recompilation.m"
}

#line 236 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____version_number_map_0_0(
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
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 236 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 236 "recompilation.m"
    {
#line 236 "recompilation.m"
      return recompilation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation_scalar_common_2[4], ((MR_Box) (recompilation__Cast_HeadVar1_3)), ((MR_Box) (recompilation__Cast_HeadVar2_4)));
    }
#line 236 "recompilation.m"
    return recompilation__succeeded;
#line 236 "recompilation.m"
  }
#line 236 "recompilation.m"
}

#line 54 "recompilation.m"
void MR_CALL 
recompilation____Compare____version_number_0_0(
#line 54 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 54 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 54 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 54 "recompilation.m"
{
#line 54 "recompilation.m"
  {
#line 54 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 54 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 54 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 54 "recompilation.m"
    {
#line 54 "recompilation.m"
      libs__timestamp____Compare____timestamp_0_0(recompilation__HeadVar__1_1, recompilation__Cast_HeadVar1_4, recompilation__Cast_HeadVar2_5);
#line 54 "recompilation.m"
      return;
    }
#line 54 "recompilation.m"
  }
#line 54 "recompilation.m"
}

#line 54 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____version_number_0_0(
#line 54 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 54 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 54 "recompilation.m"
{
#line 54 "recompilation.m"
  {
#line 54 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 54 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 54 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 54 "recompilation.m"
    {
#line 54 "recompilation.m"
      return recompilation__succeeded = libs__timestamp____Unify____timestamp_0_0(recompilation__Cast_HeadVar1_3, recompilation__Cast_HeadVar2_4);
    }
#line 54 "recompilation.m"
    return recompilation__succeeded;
#line 54 "recompilation.m"
  }
#line 54 "recompilation.m"
}

#line 185 "recompilation.m"
void MR_CALL 
recompilation____Compare____used_items_0_0(
#line 185 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 185 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 185 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 185 "recompilation.m"
{
#line 185 "recompilation.m"
  {
#line 185 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 185 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 185 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 185 "recompilation.m"
    {
#line 185 "recompilation.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_3[1], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
#line 185 "recompilation.m"
      return;
    }
#line 185 "recompilation.m"
  }
#line 185 "recompilation.m"
}

#line 185 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____used_items_0_0(
#line 185 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 185 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 185 "recompilation.m"
{
#line 185 "recompilation.m"
  {
#line 185 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 185 "recompilation.m"
    MR_Word recompilation__TypeInfo_5_5 = (MR_Word) &recompilation_scalar_common_2[2];
#line 185 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 185 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 185 "recompilation.m"
    {
#line 185 "recompilation.m"
      return recompilation__succeeded = recompilation____Unify____item_id_set_3_0(recompilation__TypeInfo_5_5, recompilation__TypeInfo_5_5, recompilation__TypeInfo_5_5, recompilation__Cast_HeadVar1_3, recompilation__Cast_HeadVar2_4);
    }
#line 185 "recompilation.m"
    return recompilation__succeeded;
#line 185 "recompilation.m"
  }
#line 185 "recompilation.m"
}

#line 174 "recompilation.m"
void MR_CALL 
recompilation____Compare____simple_item_set_0_0(
#line 174 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 174 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 174 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 174 "recompilation.m"
{
#line 174 "recompilation.m"
  {
#line 174 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 174 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 174 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 174 "recompilation.m"
    {
#line 174 "recompilation.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[2], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
#line 174 "recompilation.m"
      return;
    }
#line 174 "recompilation.m"
  }
#line 174 "recompilation.m"
}

#line 174 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____simple_item_set_0_0(
#line 174 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 174 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 174 "recompilation.m"
{
#line 174 "recompilation.m"
  {
#line 174 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 174 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 174 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 174 "recompilation.m"
    {
#line 174 "recompilation.m"
      return recompilation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation_scalar_common_2[2], ((MR_Box) (recompilation__Cast_HeadVar1_3)), ((MR_Box) (recompilation__Cast_HeadVar2_4)));
    }
#line 174 "recompilation.m"
    return recompilation__succeeded;
#line 174 "recompilation.m"
  }
#line 174 "recompilation.m"
}

#line 129 "recompilation.m"
void MR_CALL 
recompilation____Compare____recompilation_info_0_0(
#line 129 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 129 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 129 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 129 "recompilation.m"
{
#line 129 "recompilation.m"
  {
#line 129 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 129 "recompilation.m"
    MR_Integer recompilation__CastX_15 = (MR_Integer) recompilation__HeadVar__2_2;
#line 129 "recompilation.m"
    MR_Integer recompilation__CastY_16 = (MR_Integer) recompilation__HeadVar__3_3;

#line 129 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_15 == recompilation__CastY_16);
#line 129 "recompilation.m"
    if (recompilation__succeeded)
#line 3486 "recompilation.c"
      *recompilation__HeadVar__1_1 = (MR_Integer) 0;
#line 129 "recompilation.m"
    else
#line 129 "recompilation.m"
      {
#line 129 "recompilation.m"
        MR_Word recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
#line 129 "recompilation.m"
        MR_Word recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));
#line 129 "recompilation.m"
        MR_Word recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 2)));
#line 129 "recompilation.m"
        MR_Word recompilation__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 3)));
#line 129 "recompilation.m"
        MR_Word recompilation__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 0)));
#line 129 "recompilation.m"
        MR_Word recompilation__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 1)));
#line 129 "recompilation.m"
        MR_Word recompilation__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 2)));
#line 129 "recompilation.m"
        MR_Word recompilation__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 3)));
#line 129 "recompilation.m"
        MR_Word recompilation__V_12_12;

#line 129 "recompilation.m"
        {
#line 129 "recompilation.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&recompilation__V_12_12, recompilation__V_4_4, recompilation__V_8_8);
        }
#line 3516 "recompilation.c"
        recompilation__succeeded = (recompilation__V_12_12 == (MR_Integer) 0);
#line 129 "recompilation.m"
        recompilation__succeeded = !(recompilation__succeeded);
#line 129 "recompilation.m"
        if (recompilation__succeeded)
#line 129 "recompilation.m"
          *recompilation__HeadVar__1_1 = recompilation__V_12_12;
#line 129 "recompilation.m"
        else
#line 129 "recompilation.m"
          {
#line 129 "recompilation.m"
            MR_Word recompilation__V_13_13;

#line 129 "recompilation.m"
            {
#line 129 "recompilation.m"
              mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_3[1], &recompilation__V_13_13, ((MR_Box) (recompilation__V_5_5)), ((MR_Box) (recompilation__V_9_9)));
            }
#line 3536 "recompilation.c"
            recompilation__succeeded = (recompilation__V_13_13 == (MR_Integer) 0);
#line 129 "recompilation.m"
            recompilation__succeeded = !(recompilation__succeeded);
#line 129 "recompilation.m"
            if (recompilation__succeeded)
#line 129 "recompilation.m"
              *recompilation__HeadVar__1_1 = recompilation__V_13_13;
#line 129 "recompilation.m"
            else
#line 129 "recompilation.m"
              {
#line 129 "recompilation.m"
                MR_Word recompilation__V_14_14;

#line 129 "recompilation.m"
                {
#line 129 "recompilation.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[6], &recompilation__V_14_14, ((MR_Box) (recompilation__V_6_6)), ((MR_Box) (recompilation__V_10_10)));
                }
#line 3556 "recompilation.c"
                recompilation__succeeded = (recompilation__V_14_14 == (MR_Integer) 0);
#line 129 "recompilation.m"
                recompilation__succeeded = !(recompilation__succeeded);
#line 129 "recompilation.m"
                if (recompilation__succeeded)
#line 129 "recompilation.m"
                  *recompilation__HeadVar__1_1 = recompilation__V_14_14;
#line 129 "recompilation.m"
                else
#line 129 "recompilation.m"
                  {
#line 129 "recompilation.m"
                    {
#line 129 "recompilation.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[5], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__V_7_7)), ((MR_Box) (recompilation__V_11_11)));
#line 129 "recompilation.m"
                      return;
                    }
#line 129 "recompilation.m"
                  }
#line 129 "recompilation.m"
              }
#line 129 "recompilation.m"
          }
#line 129 "recompilation.m"
      }
#line 129 "recompilation.m"
  }
#line 129 "recompilation.m"
}

#line 129 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____recompilation_info_0_0(
#line 129 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 129 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 129 "recompilation.m"
{
#line 129 "recompilation.m"
  {
#line 129 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 129 "recompilation.m"
    MR_Integer recompilation__CastX_11 = (MR_Integer) recompilation__HeadVar__1_1;
#line 129 "recompilation.m"
    MR_Integer recompilation__CastY_12 = (MR_Integer) recompilation__HeadVar__2_2;

#line 129 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_11 == recompilation__CastY_12);
#line 129 "recompilation.m"
    if (recompilation__succeeded)
#line 129 "recompilation.m"
      recompilation__succeeded = MR_TRUE;
#line 129 "recompilation.m"
    else
#line 129 "recompilation.m"
      {
#line 129 "recompilation.m"
        MR_Word recompilation__TypeInfo_14_14;
#line 129 "recompilation.m"
        MR_Word recompilation__TypeInfo_15_15;
#line 129 "recompilation.m"
        MR_Word recompilation__TypeInfo_16_16;
#line 129 "recompilation.m"
        MR_Word recompilation__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 129 "recompilation.m"
        MR_Word recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));
#line 129 "recompilation.m"
        MR_Word recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 2)));
#line 129 "recompilation.m"
        MR_Word recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 3)));
#line 129 "recompilation.m"
        MR_Word recompilation__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
#line 129 "recompilation.m"
        MR_Word recompilation__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));
#line 129 "recompilation.m"
        MR_Word recompilation__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 2)));
#line 129 "recompilation.m"
        MR_Word recompilation__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 3)));

#line 3639 "recompilation.c"
        {
#line 3641 "recompilation.c"
          recompilation__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__V_3_3, recompilation__V_7_7);
        }
#line 129 "recompilation.m"
        if (recompilation__succeeded)
#line 129 "recompilation.m"
          {
#line 3648 "recompilation.c"
            recompilation__TypeInfo_14_14 = (MR_Word) &recompilation_scalar_common_2[2];
#line 3650 "recompilation.c"
            {
#line 3652 "recompilation.c"
              recompilation__succeeded = recompilation____Unify____item_id_set_3_0(recompilation__TypeInfo_14_14, recompilation__TypeInfo_14_14, recompilation__TypeInfo_14_14, recompilation__V_4_4, recompilation__V_8_8);
            }
#line 129 "recompilation.m"
            if (recompilation__succeeded)
#line 129 "recompilation.m"
              {
#line 3659 "recompilation.c"
                recompilation__TypeInfo_15_15 = (MR_Word) &recompilation_scalar_common_2[6];
#line 3661 "recompilation.c"
                {
#line 3663 "recompilation.c"
                  recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_15_15, ((MR_Box) (recompilation__V_5_5)), ((MR_Box) (recompilation__V_9_9)));
                }
#line 129 "recompilation.m"
                if (recompilation__succeeded)
#line 129 "recompilation.m"
                  {
#line 3670 "recompilation.c"
                    recompilation__TypeInfo_16_16 = (MR_Word) &recompilation_scalar_common_2[5];
#line 3672 "recompilation.c"
                    {
#line 3674 "recompilation.c"
                      return recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_16_16, ((MR_Box) (recompilation__V_6_6)), ((MR_Box) (recompilation__V_10_10)));
                    }
#line 129 "recompilation.m"
                  }
#line 129 "recompilation.m"
              }
#line 129 "recompilation.m"
          }
#line 129 "recompilation.m"
      }
#line 129 "recompilation.m"
    return recompilation__succeeded;
#line 129 "recompilation.m"
  }
#line 129 "recompilation.m"
}

#line 180 "recompilation.m"
void MR_CALL 
recompilation____Compare____pred_or_func_set_0_0(
#line 180 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 180 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 180 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 180 "recompilation.m"
{
#line 180 "recompilation.m"
  {
#line 180 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 180 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 180 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 180 "recompilation.m"
    {
#line 180 "recompilation.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[2], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
#line 180 "recompilation.m"
      return;
    }
#line 180 "recompilation.m"
  }
#line 180 "recompilation.m"
}

#line 180 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____pred_or_func_set_0_0(
#line 180 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 180 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 180 "recompilation.m"
{
#line 180 "recompilation.m"
  {
#line 180 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 180 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 180 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 180 "recompilation.m"
    {
#line 180 "recompilation.m"
      return recompilation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation_scalar_common_2[2], ((MR_Box) (recompilation__Cast_HeadVar1_3)), ((MR_Box) (recompilation__Cast_HeadVar2_4)));
    }
#line 180 "recompilation.m"
    return recompilation__succeeded;
#line 180 "recompilation.m"
  }
#line 180 "recompilation.m"
}

#line 230 "recompilation.m"
void MR_CALL 
recompilation____Compare____module_version_numbers_map_0_0(
#line 230 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 230 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 230 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 230 "recompilation.m"
{
#line 230 "recompilation.m"
  {
#line 230 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 230 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 230 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 230 "recompilation.m"
    {
#line 230 "recompilation.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[5], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
#line 230 "recompilation.m"
      return;
    }
#line 230 "recompilation.m"
  }
#line 230 "recompilation.m"
}

#line 230 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____module_version_numbers_map_0_0(
#line 230 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 230 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 230 "recompilation.m"
{
#line 230 "recompilation.m"
  {
#line 230 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 230 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 230 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 230 "recompilation.m"
    {
#line 230 "recompilation.m"
      return recompilation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation_scalar_common_2[5], ((MR_Box) (recompilation__Cast_HeadVar1_3)), ((MR_Box) (recompilation__Cast_HeadVar2_4)));
    }
#line 230 "recompilation.m"
    return recompilation__succeeded;
#line 230 "recompilation.m"
  }
#line 230 "recompilation.m"
}

#line 244 "recompilation.m"
void MR_CALL 
recompilation____Compare____module_qualifier_0_0(
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
      mdbcomp__sym_name____Compare____sym_name_0_0(recompilation__HeadVar__1_1, recompilation__Cast_HeadVar1_4, recompilation__Cast_HeadVar2_5);
#line 244 "recompilation.m"
      return;
    }
#line 244 "recompilation.m"
  }
#line 244 "recompilation.m"
}

#line 244 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____module_qualifier_0_0(
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
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 244 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 244 "recompilation.m"
    {
#line 244 "recompilation.m"
      return recompilation__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__Cast_HeadVar1_3, recompilation__Cast_HeadVar2_4);
    }
#line 244 "recompilation.m"
    return recompilation__succeeded;
#line 244 "recompilation.m"
  }
#line 244 "recompilation.m"
}

#line 234 "recompilation.m"
void MR_CALL 
recompilation____Compare____item_version_numbers_0_0(
#line 234 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 234 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 234 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 234 "recompilation.m"
{
#line 234 "recompilation.m"
  {
#line 234 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 234 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 234 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 234 "recompilation.m"
    {
#line 234 "recompilation.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_3[0], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
#line 234 "recompilation.m"
      return;
    }
#line 234 "recompilation.m"
  }
#line 234 "recompilation.m"
}

#line 234 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____item_version_numbers_0_0(
#line 234 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 234 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 234 "recompilation.m"
{
#line 234 "recompilation.m"
  {
#line 234 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 234 "recompilation.m"
    MR_Word recompilation__TypeInfo_5_5 = (MR_Word) &recompilation_scalar_common_2[4];
#line 234 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 234 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 234 "recompilation.m"
    {
#line 234 "recompilation.m"
      return recompilation__succeeded = recompilation____Unify____item_id_set_3_0(recompilation__TypeInfo_5_5, recompilation__TypeInfo_5_5, recompilation__TypeInfo_5_5, recompilation__Cast_HeadVar1_3, recompilation__Cast_HeadVar2_4);
    }
#line 234 "recompilation.m"
    return recompilation__succeeded;
#line 234 "recompilation.m"
  }
#line 234 "recompilation.m"
}

#line 78 "recompilation.m"
void MR_CALL 
recompilation____Compare____item_type_0_0(
#line 78 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 78 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 78 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 78 "recompilation.m"
{
#line 78 "recompilation.m"
  {
#line 78 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 78 "recompilation.m"
    MR_Integer recompilation__Cast_HeadVar1_4 = (MR_Integer) recompilation__HeadVar__2_2;
#line 78 "recompilation.m"
    MR_Integer recompilation__Cast_HeadVar2_5 = (MR_Integer) recompilation__HeadVar__3_3;

#line 78 "recompilation.m"
    {
#line 78 "recompilation.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(recompilation__HeadVar__1_1, recompilation__Cast_HeadVar1_4, recompilation__Cast_HeadVar2_5);
#line 78 "recompilation.m"
      return;
    }
#line 78 "recompilation.m"
  }
#line 78 "recompilation.m"
}

#line 78 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____item_type_0_0(
#line 78 "recompilation.m"
  MR_Word recompilation__HeadVar__2_1,
#line 78 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 78 "recompilation.m"
{
#line 3983 "recompilation.c"
  {
#line 3985 "recompilation.c"
    MR_bool recompilation__succeeded = (recompilation__HeadVar__2_1 == recompilation__HeadVar__2_2);

#line 3988 "recompilation.c"
    return recompilation__succeeded;
#line 3990 "recompilation.c"
  }
#line 78 "recompilation.m"
}

#line 75 "recompilation.m"
void MR_CALL 
recompilation____Compare____item_name_0_0(
#line 75 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 75 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 75 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 75 "recompilation.m"
{
#line 75 "recompilation.m"
  {
#line 75 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 75 "recompilation.m"
    MR_Integer recompilation__CastX_9 = (MR_Integer) recompilation__HeadVar__2_2;
#line 75 "recompilation.m"
    MR_Integer recompilation__CastY_10 = (MR_Integer) recompilation__HeadVar__3_3;

#line 75 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_9 == recompilation__CastY_10);
#line 75 "recompilation.m"
    if (recompilation__succeeded)
#line 4019 "recompilation.c"
      *recompilation__HeadVar__1_1 = (MR_Integer) 0;
#line 75 "recompilation.m"
    else
#line 75 "recompilation.m"
      {
#line 75 "recompilation.m"
        MR_Word recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
#line 75 "recompilation.m"
        MR_Integer recompilation__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "recompilation.m"
        MR_Word recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 0)));
#line 75 "recompilation.m"
        MR_Integer recompilation__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "recompilation.m"
        MR_Word recompilation__V_8_8;

#line 75 "recompilation.m"
        {
#line 75 "recompilation.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&recompilation__V_8_8, recompilation__V_4_4, recompilation__V_6_6);
        }
#line 4041 "recompilation.c"
        recompilation__succeeded = (recompilation__V_8_8 == (MR_Integer) 0);
#line 75 "recompilation.m"
        recompilation__succeeded = !(recompilation__succeeded);
#line 75 "recompilation.m"
        if (recompilation__succeeded)
#line 75 "recompilation.m"
          *recompilation__HeadVar__1_1 = recompilation__V_8_8;
#line 75 "recompilation.m"
        else
#line 75 "recompilation.m"
          {
#line 75 "recompilation.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(recompilation__HeadVar__1_1, recompilation__V_5_5, recompilation__V_7_7);
#line 75 "recompilation.m"
            return;
          }
#line 75 "recompilation.m"
      }
#line 75 "recompilation.m"
  }
#line 75 "recompilation.m"
}

#line 75 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____item_name_0_0(
#line 75 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 75 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 75 "recompilation.m"
{
#line 75 "recompilation.m"
  {
#line 75 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 75 "recompilation.m"
    MR_Integer recompilation__CastX_7 = (MR_Integer) recompilation__HeadVar__1_1;
#line 75 "recompilation.m"
    MR_Integer recompilation__CastY_8 = (MR_Integer) recompilation__HeadVar__2_2;

#line 75 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_7 == recompilation__CastY_8);
#line 75 "recompilation.m"
    if (recompilation__succeeded)
#line 75 "recompilation.m"
      recompilation__succeeded = MR_TRUE;
#line 75 "recompilation.m"
    else
#line 75 "recompilation.m"
      {
#line 75 "recompilation.m"
        MR_Word recompilation__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 75 "recompilation.m"
        MR_Integer recompilation__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "recompilation.m"
        MR_Word recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
#line 75 "recompilation.m"
        MR_Integer recompilation__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));

#line 4102 "recompilation.c"
        {
#line 4104 "recompilation.c"
          recompilation__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__V_3_3, recompilation__V_5_5);
        }
#line 75 "recompilation.m"
        if (recompilation__succeeded)
#line 4109 "recompilation.c"
          recompilation__succeeded = (recompilation__V_4_4 == recompilation__V_6_6);
#line 75 "recompilation.m"
      }
#line 75 "recompilation.m"
    return recompilation__succeeded;
#line 75 "recompilation.m"
  }
#line 75 "recompilation.m"
}

#line 150 "recompilation.m"
void MR_CALL 
recompilation____Compare____item_id_set_3_0(
#line 150 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Map_35,
#line 150 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Set_36,
#line 150 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Cons_37,
#line 150 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 150 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 150 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 150 "recompilation.m"
{
#line 150 "recompilation.m"
  {
#line 150 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 150 "recompilation.m"
    MR_Integer recompilation__CastX_33 = (MR_Integer) recompilation__HeadVar__2_2;
#line 150 "recompilation.m"
    MR_Integer recompilation__CastY_34 = (MR_Integer) recompilation__HeadVar__3_3;

#line 150 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_33 == recompilation__CastY_34);
#line 150 "recompilation.m"
    if (recompilation__succeeded)
#line 4150 "recompilation.c"
      *recompilation__HeadVar__1_1 = (MR_Integer) 0;
#line 150 "recompilation.m"
    else
#line 150 "recompilation.m"
      {
#line 150 "recompilation.m"
        MR_Box recompilation__V_4_4 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0));
#line 150 "recompilation.m"
        MR_Box recompilation__V_5_5 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1));
#line 150 "recompilation.m"
        MR_Box recompilation__V_6_6 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 2));
#line 150 "recompilation.m"
        MR_Box recompilation__V_7_7 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 3));
#line 150 "recompilation.m"
        MR_Box recompilation__V_8_8 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 4));
#line 150 "recompilation.m"
        MR_Box recompilation__V_9_9 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 5));
#line 150 "recompilation.m"
        MR_Box recompilation__V_10_10 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 6));
#line 150 "recompilation.m"
        MR_Box recompilation__V_11_11 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 7));
#line 150 "recompilation.m"
        MR_Box recompilation__V_12_12 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 8));
#line 150 "recompilation.m"
        MR_Box recompilation__V_13_13 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 9));
#line 150 "recompilation.m"
        MR_Box recompilation__V_14_14 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 0));
#line 150 "recompilation.m"
        MR_Box recompilation__V_15_15 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 1));
#line 150 "recompilation.m"
        MR_Box recompilation__V_16_16 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 2));
#line 150 "recompilation.m"
        MR_Box recompilation__V_17_17 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 3));
#line 150 "recompilation.m"
        MR_Box recompilation__V_18_18 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 4));
#line 150 "recompilation.m"
        MR_Box recompilation__V_19_19 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 5));
#line 150 "recompilation.m"
        MR_Box recompilation__V_20_20 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 6));
#line 150 "recompilation.m"
        MR_Box recompilation__V_21_21 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 7));
#line 150 "recompilation.m"
        MR_Box recompilation__V_22_22 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 8));
#line 150 "recompilation.m"
        MR_Box recompilation__V_23_23 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 9));
#line 150 "recompilation.m"
        MR_Word recompilation__V_24_24;

#line 150 "recompilation.m"
        {
#line 150 "recompilation.m"
          mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Map_35, &recompilation__V_24_24, recompilation__V_4_4, recompilation__V_14_14);
        }
#line 4204 "recompilation.c"
        recompilation__succeeded = (recompilation__V_24_24 == (MR_Integer) 0);
#line 150 "recompilation.m"
        recompilation__succeeded = !(recompilation__succeeded);
#line 150 "recompilation.m"
        if (recompilation__succeeded)
#line 150 "recompilation.m"
          *recompilation__HeadVar__1_1 = recompilation__V_24_24;
#line 150 "recompilation.m"
        else
#line 150 "recompilation.m"
          {
#line 150 "recompilation.m"
            MR_Word recompilation__V_25_25;

#line 150 "recompilation.m"
            {
#line 150 "recompilation.m"
              mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Map_35, &recompilation__V_25_25, recompilation__V_5_5, recompilation__V_15_15);
            }
#line 4224 "recompilation.c"
            recompilation__succeeded = (recompilation__V_25_25 == (MR_Integer) 0);
#line 150 "recompilation.m"
            recompilation__succeeded = !(recompilation__succeeded);
#line 150 "recompilation.m"
            if (recompilation__succeeded)
#line 150 "recompilation.m"
              *recompilation__HeadVar__1_1 = recompilation__V_25_25;
#line 150 "recompilation.m"
            else
#line 150 "recompilation.m"
              {
#line 150 "recompilation.m"
                MR_Word recompilation__V_26_26;

#line 150 "recompilation.m"
                {
#line 150 "recompilation.m"
                  mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Map_35, &recompilation__V_26_26, recompilation__V_6_6, recompilation__V_16_16);
                }
#line 4244 "recompilation.c"
                recompilation__succeeded = (recompilation__V_26_26 == (MR_Integer) 0);
#line 150 "recompilation.m"
                recompilation__succeeded = !(recompilation__succeeded);
#line 150 "recompilation.m"
                if (recompilation__succeeded)
#line 150 "recompilation.m"
                  *recompilation__HeadVar__1_1 = recompilation__V_26_26;
#line 150 "recompilation.m"
                else
#line 150 "recompilation.m"
                  {
#line 150 "recompilation.m"
                    MR_Word recompilation__V_27_27;

#line 150 "recompilation.m"
                    {
#line 150 "recompilation.m"
                      mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Map_35, &recompilation__V_27_27, recompilation__V_7_7, recompilation__V_17_17);
                    }
#line 4264 "recompilation.c"
                    recompilation__succeeded = (recompilation__V_27_27 == (MR_Integer) 0);
#line 150 "recompilation.m"
                    recompilation__succeeded = !(recompilation__succeeded);
#line 150 "recompilation.m"
                    if (recompilation__succeeded)
#line 150 "recompilation.m"
                      *recompilation__HeadVar__1_1 = recompilation__V_27_27;
#line 150 "recompilation.m"
                    else
#line 150 "recompilation.m"
                      {
#line 150 "recompilation.m"
                        MR_Word recompilation__V_28_28;

#line 150 "recompilation.m"
                        {
#line 150 "recompilation.m"
                          mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Map_35, &recompilation__V_28_28, recompilation__V_8_8, recompilation__V_18_18);
                        }
#line 4284 "recompilation.c"
                        recompilation__succeeded = (recompilation__V_28_28 == (MR_Integer) 0);
#line 150 "recompilation.m"
                        recompilation__succeeded = !(recompilation__succeeded);
#line 150 "recompilation.m"
                        if (recompilation__succeeded)
#line 150 "recompilation.m"
                          *recompilation__HeadVar__1_1 = recompilation__V_28_28;
#line 150 "recompilation.m"
                        else
#line 150 "recompilation.m"
                          {
#line 150 "recompilation.m"
                            MR_Word recompilation__V_29_29;

#line 150 "recompilation.m"
                            {
#line 150 "recompilation.m"
                              mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Cons_37, &recompilation__V_29_29, recompilation__V_9_9, recompilation__V_19_19);
                            }
#line 4304 "recompilation.c"
                            recompilation__succeeded = (recompilation__V_29_29 == (MR_Integer) 0);
#line 150 "recompilation.m"
                            recompilation__succeeded = !(recompilation__succeeded);
#line 150 "recompilation.m"
                            if (recompilation__succeeded)
#line 150 "recompilation.m"
                              *recompilation__HeadVar__1_1 = recompilation__V_29_29;
#line 150 "recompilation.m"
                            else
#line 150 "recompilation.m"
                              {
#line 150 "recompilation.m"
                                MR_Word recompilation__V_30_30;

#line 150 "recompilation.m"
                                {
#line 150 "recompilation.m"
                                  mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Set_36, &recompilation__V_30_30, recompilation__V_10_10, recompilation__V_20_20);
                                }
#line 4324 "recompilation.c"
                                recompilation__succeeded = (recompilation__V_30_30 == (MR_Integer) 0);
#line 150 "recompilation.m"
                                recompilation__succeeded = !(recompilation__succeeded);
#line 150 "recompilation.m"
                                if (recompilation__succeeded)
#line 150 "recompilation.m"
                                  *recompilation__HeadVar__1_1 = recompilation__V_30_30;
#line 150 "recompilation.m"
                                else
#line 150 "recompilation.m"
                                  {
#line 150 "recompilation.m"
                                    MR_Word recompilation__V_31_31;

#line 150 "recompilation.m"
                                    {
#line 150 "recompilation.m"
                                      mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Set_36, &recompilation__V_31_31, recompilation__V_11_11, recompilation__V_21_21);
                                    }
#line 4344 "recompilation.c"
                                    recompilation__succeeded = (recompilation__V_31_31 == (MR_Integer) 0);
#line 150 "recompilation.m"
                                    recompilation__succeeded = !(recompilation__succeeded);
#line 150 "recompilation.m"
                                    if (recompilation__succeeded)
#line 150 "recompilation.m"
                                      *recompilation__HeadVar__1_1 = recompilation__V_31_31;
#line 150 "recompilation.m"
                                    else
#line 150 "recompilation.m"
                                      {
#line 150 "recompilation.m"
                                        MR_Word recompilation__V_32_32;

#line 150 "recompilation.m"
                                        {
#line 150 "recompilation.m"
                                          mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Set_36, &recompilation__V_32_32, recompilation__V_12_12, recompilation__V_22_22);
                                        }
#line 4364 "recompilation.c"
                                        recompilation__succeeded = (recompilation__V_32_32 == (MR_Integer) 0);
#line 150 "recompilation.m"
                                        recompilation__succeeded = !(recompilation__succeeded);
#line 150 "recompilation.m"
                                        if (recompilation__succeeded)
#line 150 "recompilation.m"
                                          *recompilation__HeadVar__1_1 = recompilation__V_32_32;
#line 150 "recompilation.m"
                                        else
#line 150 "recompilation.m"
                                          {
#line 150 "recompilation.m"
                                            mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Set_36, recompilation__HeadVar__1_1, recompilation__V_13_13, recompilation__V_23_23);
#line 150 "recompilation.m"
                                            return;
                                          }
#line 150 "recompilation.m"
                                      }
#line 150 "recompilation.m"
                                  }
#line 150 "recompilation.m"
                              }
#line 150 "recompilation.m"
                          }
#line 150 "recompilation.m"
                      }
#line 150 "recompilation.m"
                  }
#line 150 "recompilation.m"
              }
#line 150 "recompilation.m"
          }
#line 150 "recompilation.m"
      }
#line 150 "recompilation.m"
  }
#line 150 "recompilation.m"
}

#line 150 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____item_id_set_3_0(
#line 150 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Map_25,
#line 150 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Set_26,
#line 150 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Cons_27,
#line 150 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 150 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 150 "recompilation.m"
{
#line 150 "recompilation.m"
  {
#line 150 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 150 "recompilation.m"
    MR_Integer recompilation__CastX_23 = (MR_Integer) recompilation__HeadVar__1_1;
#line 150 "recompilation.m"
    MR_Integer recompilation__CastY_24 = (MR_Integer) recompilation__HeadVar__2_2;

#line 150 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_23 == recompilation__CastY_24);
#line 150 "recompilation.m"
    if (recompilation__succeeded)
#line 150 "recompilation.m"
      recompilation__succeeded = MR_TRUE;
#line 150 "recompilation.m"
    else
#line 150 "recompilation.m"
      {
#line 150 "recompilation.m"
        MR_Box recompilation__V_3_3 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0));
#line 150 "recompilation.m"
        MR_Box recompilation__V_4_4 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1));
#line 150 "recompilation.m"
        MR_Box recompilation__V_5_5 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 2));
#line 150 "recompilation.m"
        MR_Box recompilation__V_6_6 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 3));
#line 150 "recompilation.m"
        MR_Box recompilation__V_7_7 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 4));
#line 150 "recompilation.m"
        MR_Box recompilation__V_8_8 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 5));
#line 150 "recompilation.m"
        MR_Box recompilation__V_9_9 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 6));
#line 150 "recompilation.m"
        MR_Box recompilation__V_10_10 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 7));
#line 150 "recompilation.m"
        MR_Box recompilation__V_11_11 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 8));
#line 150 "recompilation.m"
        MR_Box recompilation__V_12_12 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 9));
#line 150 "recompilation.m"
        MR_Box recompilation__V_13_13 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0));
#line 150 "recompilation.m"
        MR_Box recompilation__V_14_14 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1));
#line 150 "recompilation.m"
        MR_Box recompilation__V_15_15 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 2));
#line 150 "recompilation.m"
        MR_Box recompilation__V_16_16 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 3));
#line 150 "recompilation.m"
        MR_Box recompilation__V_17_17 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 4));
#line 150 "recompilation.m"
        MR_Box recompilation__V_18_18 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 5));
#line 150 "recompilation.m"
        MR_Box recompilation__V_19_19 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 6));
#line 150 "recompilation.m"
        MR_Box recompilation__V_20_20 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 7));
#line 150 "recompilation.m"
        MR_Box recompilation__V_21_21 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 8));
#line 150 "recompilation.m"
        MR_Box recompilation__V_22_22 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 9));

#line 4479 "recompilation.c"
        {
#line 4481 "recompilation.c"
          recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Map_25, recompilation__V_3_3, recompilation__V_13_13);
        }
#line 150 "recompilation.m"
        if (recompilation__succeeded)
#line 150 "recompilation.m"
          {
#line 4488 "recompilation.c"
            {
#line 4490 "recompilation.c"
              recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Map_25, recompilation__V_4_4, recompilation__V_14_14);
            }
#line 150 "recompilation.m"
            if (recompilation__succeeded)
#line 150 "recompilation.m"
              {
#line 4497 "recompilation.c"
                {
#line 4499 "recompilation.c"
                  recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Map_25, recompilation__V_5_5, recompilation__V_15_15);
                }
#line 150 "recompilation.m"
                if (recompilation__succeeded)
#line 150 "recompilation.m"
                  {
#line 4506 "recompilation.c"
                    {
#line 4508 "recompilation.c"
                      recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Map_25, recompilation__V_6_6, recompilation__V_16_16);
                    }
#line 150 "recompilation.m"
                    if (recompilation__succeeded)
#line 150 "recompilation.m"
                      {
#line 4515 "recompilation.c"
                        {
#line 4517 "recompilation.c"
                          recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Map_25, recompilation__V_7_7, recompilation__V_17_17);
                        }
#line 150 "recompilation.m"
                        if (recompilation__succeeded)
#line 150 "recompilation.m"
                          {
#line 4524 "recompilation.c"
                            {
#line 4526 "recompilation.c"
                              recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Cons_27, recompilation__V_8_8, recompilation__V_18_18);
                            }
#line 150 "recompilation.m"
                            if (recompilation__succeeded)
#line 150 "recompilation.m"
                              {
#line 4533 "recompilation.c"
                                {
#line 4535 "recompilation.c"
                                  recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Set_26, recompilation__V_9_9, recompilation__V_19_19);
                                }
#line 150 "recompilation.m"
                                if (recompilation__succeeded)
#line 150 "recompilation.m"
                                  {
#line 4542 "recompilation.c"
                                    {
#line 4544 "recompilation.c"
                                      recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Set_26, recompilation__V_10_10, recompilation__V_20_20);
                                    }
#line 150 "recompilation.m"
                                    if (recompilation__succeeded)
#line 150 "recompilation.m"
                                      {
#line 4551 "recompilation.c"
                                        {
#line 4553 "recompilation.c"
                                          recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Set_26, recompilation__V_11_11, recompilation__V_21_21);
                                        }
#line 150 "recompilation.m"
                                        if (recompilation__succeeded)
#line 4558 "recompilation.c"
                                          {
#line 4560 "recompilation.c"
                                            return recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Set_26, recompilation__V_12_12, recompilation__V_22_22);
                                          }
#line 150 "recompilation.m"
                                      }
#line 150 "recompilation.m"
                                  }
#line 150 "recompilation.m"
                              }
#line 150 "recompilation.m"
                          }
#line 150 "recompilation.m"
                      }
#line 150 "recompilation.m"
                  }
#line 150 "recompilation.m"
              }
#line 150 "recompilation.m"
          }
#line 150 "recompilation.m"
      }
#line 150 "recompilation.m"
    return recompilation__succeeded;
#line 150 "recompilation.m"
  }
#line 150 "recompilation.m"
}

#line 164 "recompilation.m"
void MR_CALL 
recompilation____Compare____item_id_set_1_0(
#line 164 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_6,
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
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 164 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 164 "recompilation.m"
    {
#line 164 "recompilation.m"
      recompilation____Compare____item_id_set_3_0(recompilation__TypeInfo_for_T_6, recompilation__TypeInfo_for_T_6, recompilation__TypeInfo_for_T_6, recompilation__HeadVar__1_1, recompilation__Cast_HeadVar1_4, recompilation__Cast_HeadVar2_5);
#line 164 "recompilation.m"
      return;
    }
#line 164 "recompilation.m"
  }
#line 164 "recompilation.m"
}

#line 164 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____item_id_set_1_0(
#line 164 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_5,
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
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 164 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 164 "recompilation.m"
    {
#line 164 "recompilation.m"
      return recompilation__succeeded = recompilation____Unify____item_id_set_3_0(recompilation__TypeInfo_for_T_5, recompilation__TypeInfo_for_T_5, recompilation__TypeInfo_for_T_5, recompilation__Cast_HeadVar1_3, recompilation__Cast_HeadVar2_4);
    }
#line 164 "recompilation.m"
    return recompilation__succeeded;
#line 164 "recompilation.m"
  }
#line 164 "recompilation.m"
}

#line 72 "recompilation.m"
void MR_CALL 
recompilation____Compare____item_id_0_0(
#line 72 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 72 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 72 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 72 "recompilation.m"
{
#line 72 "recompilation.m"
  {
#line 72 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 72 "recompilation.m"
    MR_Integer recompilation__CastX_9 = (MR_Integer) recompilation__HeadVar__2_2;
#line 72 "recompilation.m"
    MR_Integer recompilation__CastY_10 = (MR_Integer) recompilation__HeadVar__3_3;

#line 72 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_9 == recompilation__CastY_10);
#line 72 "recompilation.m"
    if (recompilation__succeeded)
#line 4678 "recompilation.c"
      *recompilation__HeadVar__1_1 = (MR_Integer) 0;
#line 72 "recompilation.m"
    else
#line 72 "recompilation.m"
      {
#line 72 "recompilation.m"
        MR_Word recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
#line 72 "recompilation.m"
        MR_Word recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));
#line 72 "recompilation.m"
        MR_Word recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 0)));
#line 72 "recompilation.m"
        MR_Word recompilation__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 1)));
#line 72 "recompilation.m"
        MR_Word recompilation__V_8_8;
#line 72 "recompilation.m"
        MR_Integer recompilation__V_13_13 = (MR_Integer) recompilation__V_4_4;
#line 72 "recompilation.m"
        MR_Integer recompilation__V_14_14 = (MR_Integer) recompilation__V_6_6;

#line 72 "recompilation.m"
        {
#line 72 "recompilation.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&recompilation__V_8_8, recompilation__V_13_13, recompilation__V_14_14);
        }
#line 4704 "recompilation.c"
        recompilation__succeeded = (recompilation__V_8_8 == (MR_Integer) 0);
#line 72 "recompilation.m"
        recompilation__succeeded = !(recompilation__succeeded);
#line 72 "recompilation.m"
        if (recompilation__succeeded)
#line 72 "recompilation.m"
          *recompilation__HeadVar__1_1 = recompilation__V_8_8;
#line 72 "recompilation.m"
        else
#line 72 "recompilation.m"
          {
#line 72 "recompilation.m"
            recompilation____Compare____item_name_0_0(recompilation__HeadVar__1_1, recompilation__V_5_5, recompilation__V_7_7);
#line 72 "recompilation.m"
            return;
          }
#line 72 "recompilation.m"
      }
#line 72 "recompilation.m"
  }
#line 72 "recompilation.m"
}

#line 72 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____item_id_0_0(
#line 72 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 72 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 72 "recompilation.m"
{
#line 72 "recompilation.m"
  {
#line 72 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 72 "recompilation.m"
    MR_Integer recompilation__CastX_7 = (MR_Integer) recompilation__HeadVar__1_1;
#line 72 "recompilation.m"
    MR_Integer recompilation__CastY_8 = (MR_Integer) recompilation__HeadVar__2_2;

#line 72 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_7 == recompilation__CastY_8);
#line 72 "recompilation.m"
    if (recompilation__succeeded)
#line 72 "recompilation.m"
      recompilation__succeeded = MR_TRUE;
#line 72 "recompilation.m"
    else
#line 72 "recompilation.m"
      {
#line 72 "recompilation.m"
        MR_Word recompilation__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 72 "recompilation.m"
        MR_Word recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));
#line 72 "recompilation.m"
        MR_Word recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
#line 72 "recompilation.m"
        MR_Word recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));

#line 4765 "recompilation.c"
        recompilation__succeeded = (recompilation__V_3_3 == recompilation__V_5_5);
#line 72 "recompilation.m"
        if (recompilation__succeeded)
#line 4769 "recompilation.c"
          {
#line 4771 "recompilation.c"
            return recompilation__succeeded = recompilation____Unify____item_name_0_0(recompilation__V_4_4, recompilation__V_6_6);
          }
#line 72 "recompilation.m"
      }
#line 72 "recompilation.m"
    return recompilation__succeeded;
#line 72 "recompilation.m"
  }
#line 72 "recompilation.m"
}

#line 239 "recompilation.m"
void MR_CALL 
recompilation____Compare____instance_version_numbers_0_0(
#line 239 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 239 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 239 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 239 "recompilation.m"
{
#line 239 "recompilation.m"
  {
#line 239 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 239 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 239 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 239 "recompilation.m"
    {
#line 239 "recompilation.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[3], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
#line 239 "recompilation.m"
      return;
    }
#line 239 "recompilation.m"
  }
#line 239 "recompilation.m"
}

#line 239 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____instance_version_numbers_0_0(
#line 239 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 239 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 239 "recompilation.m"
{
#line 239 "recompilation.m"
  {
#line 239 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 239 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 239 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 239 "recompilation.m"
    {
#line 239 "recompilation.m"
      return recompilation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation_scalar_common_2[3], ((MR_Box) (recompilation__Cast_HeadVar1_3)), ((MR_Box) (recompilation__Cast_HeadVar2_4)));
    }
#line 239 "recompilation.m"
    return recompilation__succeeded;
#line 239 "recompilation.m"
  }
#line 239 "recompilation.m"
}

#line 182 "recompilation.m"
void MR_CALL 
recompilation____Compare____functor_set_0_0(
#line 182 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 182 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 182 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 182 "recompilation.m"
{
#line 182 "recompilation.m"
  {
#line 182 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 182 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 182 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 182 "recompilation.m"
    {
#line 182 "recompilation.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[2], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
#line 182 "recompilation.m"
      return;
    }
#line 182 "recompilation.m"
  }
#line 182 "recompilation.m"
}

#line 182 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____functor_set_0_0(
#line 182 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 182 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 182 "recompilation.m"
{
#line 182 "recompilation.m"
  {
#line 182 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 182 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 182 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 182 "recompilation.m"
    {
#line 182 "recompilation.m"
      return recompilation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation_scalar_common_2[2], ((MR_Box) (recompilation__Cast_HeadVar1_3)), ((MR_Box) (recompilation__Cast_HeadVar2_4)));
    }
#line 182 "recompilation.m"
    return recompilation__succeeded;
#line 182 "recompilation.m"
  }
#line 182 "recompilation.m"
}

#line 279 "recompilation.m"
void MR_CALL 
recompilation____Compare____eqv_expanded_item_set_0_0(
#line 279 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 279 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 279 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 279 "recompilation.m"
{
#line 279 "recompilation.m"
  {
#line 279 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 279 "recompilation.m"
    MR_Integer recompilation__CastX_9 = (MR_Integer) recompilation__HeadVar__2_2;
#line 279 "recompilation.m"
    MR_Integer recompilation__CastY_10 = (MR_Integer) recompilation__HeadVar__3_3;

#line 279 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_9 == recompilation__CastY_10);
#line 279 "recompilation.m"
    if (recompilation__succeeded)
#line 4931 "recompilation.c"
      *recompilation__HeadVar__1_1 = (MR_Integer) 0;
#line 279 "recompilation.m"
    else
#line 279 "recompilation.m"
      {
#line 279 "recompilation.m"
        MR_Word recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
#line 279 "recompilation.m"
        MR_Word recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));
#line 279 "recompilation.m"
        MR_Word recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 0)));
#line 279 "recompilation.m"
        MR_Word recompilation__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 1)));
#line 279 "recompilation.m"
        MR_Word recompilation__V_8_8;

#line 279 "recompilation.m"
        {
#line 279 "recompilation.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&recompilation__V_8_8, recompilation__V_4_4, recompilation__V_6_6);
        }
#line 4953 "recompilation.c"
        recompilation__succeeded = (recompilation__V_8_8 == (MR_Integer) 0);
#line 279 "recompilation.m"
        recompilation__succeeded = !(recompilation__succeeded);
#line 279 "recompilation.m"
        if (recompilation__succeeded)
#line 279 "recompilation.m"
          *recompilation__HeadVar__1_1 = recompilation__V_8_8;
#line 279 "recompilation.m"
        else
#line 279 "recompilation.m"
          {
#line 279 "recompilation.m"
            {
#line 279 "recompilation.m"
              mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_1[0], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__V_5_5)), ((MR_Box) (recompilation__V_7_7)));
#line 279 "recompilation.m"
              return;
            }
#line 279 "recompilation.m"
          }
#line 279 "recompilation.m"
      }
#line 279 "recompilation.m"
  }
#line 279 "recompilation.m"
}

#line 279 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____eqv_expanded_item_set_0_0(
#line 279 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 279 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 279 "recompilation.m"
{
#line 279 "recompilation.m"
  {
#line 279 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 279 "recompilation.m"
    MR_Integer recompilation__CastX_7 = (MR_Integer) recompilation__HeadVar__1_1;
#line 279 "recompilation.m"
    MR_Integer recompilation__CastY_8 = (MR_Integer) recompilation__HeadVar__2_2;

#line 279 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_7 == recompilation__CastY_8);
#line 279 "recompilation.m"
    if (recompilation__succeeded)
#line 279 "recompilation.m"
      recompilation__succeeded = MR_TRUE;
#line 279 "recompilation.m"
    else
#line 279 "recompilation.m"
      {
#line 279 "recompilation.m"
        MR_Word recompilation__TypeInfo_10_10;
#line 279 "recompilation.m"
        MR_Word recompilation__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 279 "recompilation.m"
        MR_Word recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));
#line 279 "recompilation.m"
        MR_Word recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
#line 279 "recompilation.m"
        MR_Word recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));

#line 5020 "recompilation.c"
        {
#line 5022 "recompilation.c"
          recompilation__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__V_3_3, recompilation__V_5_5);
        }
#line 279 "recompilation.m"
        if (recompilation__succeeded)
#line 279 "recompilation.m"
          {
#line 5029 "recompilation.c"
            recompilation__TypeInfo_10_10 = (MR_Word) &recompilation_scalar_common_1[0];
#line 5031 "recompilation.c"
            {
#line 5033 "recompilation.c"
              return recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_10_10, ((MR_Box) (recompilation__V_4_4)), ((MR_Box) (recompilation__V_6_6)));
            }
#line 279 "recompilation.m"
          }
#line 279 "recompilation.m"
      }
#line 279 "recompilation.m"
    return recompilation__succeeded;
#line 279 "recompilation.m"
  }
#line 279 "recompilation.m"
}

#line 278 "recompilation.m"
void MR_CALL 
recompilation____Compare____eqv_expanded_info_0_0(
#line 278 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 278 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 278 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 278 "recompilation.m"
{
#line 278 "recompilation.m"
  {
#line 278 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 278 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 278 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 278 "recompilation.m"
    {
#line 278 "recompilation.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_1[1], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
#line 278 "recompilation.m"
      return;
    }
#line 278 "recompilation.m"
  }
#line 278 "recompilation.m"
}

#line 278 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____eqv_expanded_info_0_0(
#line 278 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 278 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 278 "recompilation.m"
{
#line 278 "recompilation.m"
  {
#line 278 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 278 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 278 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 278 "recompilation.m"
    {
#line 278 "recompilation.m"
      return recompilation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation_scalar_common_1[1], ((MR_Box) (recompilation__Cast_HeadVar1_3)), ((MR_Box) (recompilation__Cast_HeadVar2_4)));
    }
#line 278 "recompilation.m"
    return recompilation__succeeded;
#line 278 "recompilation.m"
  }
#line 278 "recompilation.m"
}

#line 530 "recompilation.m"
void MR_CALL 
recompilation__record_expanded_item_2_3_p_0(
#line 530 "recompilation.m"
  MR_Word recompilation__ItemId_4,
#line 530 "recompilation.m"
  MR_Word recompilation__ExpandedItemSet0_5,
#line 530 "recompilation.m"
  MR_Word * recompilation__ExpandedItemSet_6)
#line 530 "recompilation.m"
{
#line 533 "recompilation.m"
  {
#line 533 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 533 "recompilation.m"
    MR_Word recompilation__ModuleName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__ExpandedItemSet0_5, (MR_Integer) 0)));
#line 533 "recompilation.m"
    MR_Word recompilation__Items0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__ExpandedItemSet0_5, (MR_Integer) 1)));
#line 533 "recompilation.m"
    MR_Word recompilation__ItemName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__ItemId_4, (MR_Integer) 1)));
#line 535 "recompilation.m"
    MR_Word recompilation__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__ItemId_4, (MR_Integer) 0)));
#line 536 "recompilation.m"
    MR_Word recompilation__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__ItemName_10, (MR_Integer) 0)));
#line 536 "recompilation.m"
    MR_Word recompilation__V_16_16;
#line 536 "recompilation.m"
    MR_Integer recompilation__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__ItemName_10, (MR_Integer) 1)));
#line 536 "recompilation.m"
    MR_String recompilation__V_11_11;

#line 536 "recompilation.m"
    recompilation__succeeded = ((MR_tag((MR_Word) recompilation__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 536 "recompilation.m"
    if (recompilation__succeeded)
#line 536 "recompilation.m"
      {
#line 536 "recompilation.m"
        recompilation__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__V_14_14, (MR_Integer) 0)));
#line 536 "recompilation.m"
        recompilation__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__V_14_14, (MR_Integer) 1)));
#line 536 "recompilation.m"
        {
#line 536 "recompilation.m"
          recompilation__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__ModuleName_7, recompilation__V_16_16);
        }
#line 536 "recompilation.m"
      }
#line 539 "recompilation.m"
    if (recompilation__succeeded)
#line 538 "recompilation.m"
      *recompilation__ExpandedItemSet_6 = recompilation__ExpandedItemSet0_5;
#line 539 "recompilation.m"
    else
#line 540 "recompilation.m"
      {
#line 540 "recompilation.m"
        MR_Word recompilation__Items_13;

#line 540 "recompilation.m"
        {
#line 540 "recompilation.m"
          mercury__set__insert_3_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, ((MR_Box) (recompilation__ItemId_4)), recompilation__Items0_8, &recompilation__Items_13);
        }
#line 541 "recompilation.m"
        {
#line 541 "recompilation.m"
          MR_Word base;
#line 541 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 541 "recompilation.m"
          *recompilation__ExpandedItemSet_6 = base;
#line 541 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__ModuleName_7));
#line 541 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__Items_13));
#line 541 "recompilation.m"
        }
#line 540 "recompilation.m"
      }
#line 533 "recompilation.m"
  }
#line 530 "recompilation.m"
}

#line 294 "recompilation.m"
void MR_CALL 
recompilation__finish_recording_expanded_items_4_p_0(
#line 294 "recompilation.m"
  MR_Word recompilation__Item_1,
#line 294 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 294 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3,
#line 294 "recompilation.m"
  MR_Word * recompilation__HeadVar__4_4)
#line 294 "recompilation.m"
{
#line 544 "recompilation.m"
  {
#line 544 "recompilation.m"
    MR_bool recompilation__succeeded;

#line 544 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 544 "recompilation.m"
      if ((recompilation__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 544 "recompilation.m"
        *recompilation__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 544 "recompilation.m"
      else
#line 545 "recompilation.m"
        *recompilation__HeadVar__4_4 = recompilation__HeadVar__3_3;
#line 544 "recompilation.m"
    else
#line 544 "recompilation.m"
      {
#line 544 "recompilation.m"
        MR_Word recompilation__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__HeadVar__2_2, (MR_Integer) 0)));

#line 544 "recompilation.m"
        if ((recompilation__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 546 "recompilation.m"
          {
#line 547 "recompilation.m"
            {
#line 547 "recompilation.m"
              mercury__require__unexpected_3_p_0((MR_String) "recompilation", (MR_String) "predicate \140recompilation.finish_recording_expanded_items\'/4", (MR_String) "items but no info");
#line 547 "recompilation.m"
              return;
            }
#line 546 "recompilation.m"
          }
#line 544 "recompilation.m"
        else
#line 549 "recompilation.m"
          {
#line 549 "recompilation.m"
            MR_Word recompilation__ExpandedItems_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__V_20_20, (MR_Integer) 1)));
#line 549 "recompilation.m"
            MR_Word recompilation__Info0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__HeadVar__3_3, (MR_Integer) 0)));
#line 549 "recompilation.m"
            MR_Word recompilation__Info_18;
#line 549 "recompilation.m"
            MR_Word recompilation__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__V_20_20, (MR_Integer) 0)));

#line 550 "recompilation.m"
            {
#line 550 "recompilation.m"
              recompilation__record_expanded_items_4_p_0(recompilation__Item_1, recompilation__ExpandedItems_16, recompilation__Info0_17, &recompilation__Info_18);
            }
#line 549 "recompilation.m"
            {
#line 549 "recompilation.m"
              MR_Word base;
#line 549 "recompilation.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 549 "recompilation.m"
              *recompilation__HeadVar__4_4 = base;
#line 549 "recompilation.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__Info_18));
#line 549 "recompilation.m"
            }
#line 549 "recompilation.m"
          }
#line 544 "recompilation.m"
      }
#line 544 "recompilation.m"
  }
#line 294 "recompilation.m"
}

#line 528 "recompilation.m"
static void MR_CALL 
recompilation__record_expanded_item_3_p_0_1(
#line 528 "recompilation.m"
  MR_Box recompilation__closure_arg,
#line 528 "recompilation.m"
  MR_Box recompilation__wrapper_arg_1,
#line 528 "recompilation.m"
  MR_Box * recompilation__wrapper_arg_2)
#line 528 "recompilation.m"
{
#line 528 "recompilation.m"
  {
#line 528 "recompilation.m"
    MR_Box recompilation__closure = recompilation__closure_arg;
#line 528 "recompilation.m"
    MR_Word recompilation__conv0_ExpandedItemSet_6;

#line 528 "recompilation.m"
    {
#line 528 "recompilation.m"
      recompilation__record_expanded_item_2_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__closure, (MR_Integer) 3))), ((MR_Word) recompilation__wrapper_arg_1), &recompilation__conv0_ExpandedItemSet_6);
    }
#line 528 "recompilation.m"
    *recompilation__wrapper_arg_2 = ((MR_Box) (recompilation__conv0_ExpandedItemSet_6));
#line 528 "recompilation.m"
  }
#line 528 "recompilation.m"
}

#line 289 "recompilation.m"
void MR_CALL 
recompilation__record_expanded_item_3_p_0(
#line 289 "recompilation.m"
  MR_Word recompilation__Item_4,
#line 289 "recompilation.m"
  MR_Word recompilation__STATE_VARIABLE_EquivTypeInfo_0_6,
#line 289 "recompilation.m"
  MR_Word * recompilation__STATE_VARIABLE_EquivTypeInfo_7)
#line 289 "recompilation.m"
{
#line 527 "recompilation.m"
  {
#line 527 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 527 "recompilation.m"
    MR_Word recompilation__TypeCtorInfo_12_12;
#line 527 "recompilation.m"
    MR_Word recompilation__V_8_8;

#line 528 "recompilation.m"
    {
#line 528 "recompilation.m"
      recompilation__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 528 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_8_8, 0) = ((MR_Box) (&recompilation_scalar_common_9[0]));
#line 528 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_8_8, 1) = ((MR_Box) (recompilation__record_expanded_item_3_p_0_1));
#line 528 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 528 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_8_8, 3) = ((MR_Box) (recompilation__Item_4));
#line 528 "recompilation.m"
    }
#line 5346 "recompilation.c"
    recompilation__TypeCtorInfo_12_12 = (MR_Word) &recompilation__recompilation__type_ctor_info_eqv_expanded_item_set_0;
#line 528 "recompilation.m"
    {
#line 528 "recompilation.m"
      mercury__maybe__map_maybe_3_p_0(recompilation__TypeCtorInfo_12_12, recompilation__TypeCtorInfo_12_12, recompilation__V_8_8, recompilation__STATE_VARIABLE_EquivTypeInfo_0_6, recompilation__STATE_VARIABLE_EquivTypeInfo_7);
#line 528 "recompilation.m"
      return;
    }
#line 527 "recompilation.m"
  }
#line 289 "recompilation.m"
}

#line 286 "recompilation.m"
void MR_CALL 
recompilation__maybe_start_recording_expanded_items_4_p_0(
#line 286 "recompilation.m"
  MR_Word recompilation__ModuleName_1,
#line 286 "recompilation.m"
  MR_Word recompilation__SymName_2,
#line 286 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3,
#line 286 "recompilation.m"
  MR_Word * recompilation__HeadVar__4_4)
#line 286 "recompilation.m"
{
#line 519 "recompilation.m"
  {
#line 519 "recompilation.m"
    MR_bool recompilation__succeeded;

#line 519 "recompilation.m"
    if ((recompilation__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 519 "recompilation.m"
      *recompilation__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 519 "recompilation.m"
    else
#line 523 "recompilation.m"
      {
#line 521 "recompilation.m"
        MR_Word recompilation__V_15_15;
#line 521 "recompilation.m"
        MR_String recompilation__V_11_11;

#line 521 "recompilation.m"
        recompilation__succeeded = ((MR_tag((MR_Word) recompilation__SymName_2)) == (MR_mktag((MR_Integer) 1)));
#line 521 "recompilation.m"
        if (recompilation__succeeded)
#line 521 "recompilation.m"
          {
#line 521 "recompilation.m"
            recompilation__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__SymName_2, (MR_Integer) 0)));
#line 521 "recompilation.m"
            recompilation__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__SymName_2, (MR_Integer) 1)));
#line 521 "recompilation.m"
            {
#line 521 "recompilation.m"
              recompilation__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__ModuleName_1, recompilation__V_15_15);
            }
#line 521 "recompilation.m"
          }
#line 523 "recompilation.m"
        if (recompilation__succeeded)
#line 522 "recompilation.m"
          *recompilation__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 523 "recompilation.m"
        else
#line 524 "recompilation.m"
          {
#line 524 "recompilation.m"
            MR_Word recompilation__V_12_12;
#line 524 "recompilation.m"
            MR_Word recompilation__V_13_13;

#line 524 "recompilation.m"
            {
#line 524 "recompilation.m"
              recompilation__V_13_13 = mercury__set__init_0_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0);
            }
#line 524 "recompilation.m"
            {
#line 524 "recompilation.m"
              recompilation__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 524 "recompilation.m"
              MR_hl_field(MR_mktag(0), recompilation__V_12_12, 0) = ((MR_Box) (recompilation__ModuleName_1));
#line 524 "recompilation.m"
              MR_hl_field(MR_mktag(0), recompilation__V_12_12, 1) = ((MR_Box) (recompilation__V_13_13));
#line 524 "recompilation.m"
            }
#line 524 "recompilation.m"
            {
#line 524 "recompilation.m"
              MR_Word base;
#line 524 "recompilation.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 524 "recompilation.m"
              *recompilation__HeadVar__4_4 = base;
#line 524 "recompilation.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__V_12_12));
#line 524 "recompilation.m"
            }
#line 524 "recompilation.m"
          }
#line 523 "recompilation.m"
      }
#line 519 "recompilation.m"
  }
#line 286 "recompilation.m"
}

#line 273 "recompilation.m"
void MR_CALL 
recompilation__record_expanded_items_4_p_0(
#line 273 "recompilation.m"
  MR_Word recompilation__Item_5,
#line 273 "recompilation.m"
  MR_Word recompilation__ExpandedItems_6,
#line 273 "recompilation.m"
  MR_Word recompilation__STATE_VARIABLE_Info_0_13,
#line 273 "recompilation.m"
  MR_Word * recompilation__STATE_VARIABLE_Info_14)
#line 273 "recompilation.m"
{
#line 505 "recompilation.m"
  {
#line 505 "recompilation.m"
    MR_bool recompilation__succeeded;

#line 503 "recompilation.m"
    {
#line 503 "recompilation.m"
      recompilation__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, recompilation__ExpandedItems_6);
    }
#line 505 "recompilation.m"
    if (recompilation__succeeded)
#line 505 "recompilation.m"
      *recompilation__STATE_VARIABLE_Info_14 = recompilation__STATE_VARIABLE_Info_0_13;
#line 505 "recompilation.m"
    else
#line 506 "recompilation.m"
      {
#line 506 "recompilation.m"
        MR_Word recompilation__TypeCtorInfo_27_27;
#line 506 "recompilation.m"
        MR_Word recompilation__DepsMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 506 "recompilation.m"
        MR_Word recompilation__Deps1_10;
#line 506 "recompilation.m"
        MR_Word recompilation__Deps_11;
#line 506 "recompilation.m"
        MR_Word recompilation__DepsMap_12;
#line 506 "recompilation.m"
        MR_Word recompilation__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 506 "recompilation.m"
        MR_Word recompilation__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 506 "recompilation.m"
        MR_Word recompilation__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 509 "recompilation.m"
        MR_Word recompilation__Deps0_9;
#line 507 "recompilation.m"
        MR_Box recompilation__conv0_Deps0_9;
#line 514 "recompilation.m"
        MR_Word recompilation__V_19_19;
#line 514 "recompilation.m"
        MR_Word recompilation__V_20_20;
#line 514 "recompilation.m"
        MR_Word recompilation__V_22_22;
#line 514 "recompilation.m"
        MR_Word recompilation__V_21_21;

#line 507 "recompilation.m"
        {
#line 507 "recompilation.m"
          recompilation__succeeded = mercury__map__search_3_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, (MR_Word) &recompilation_scalar_common_1[0], recompilation__DepsMap0_8, ((MR_Box) (recompilation__Item_5)), &recompilation__conv0_Deps0_9);
        }
#line 507 "recompilation.m"
        if (recompilation__succeeded)
#line 507 "recompilation.m"
          {
#line 507 "recompilation.m"
            recompilation__Deps0_9 = ((MR_Word) recompilation__conv0_Deps0_9);
#line 507 "recompilation.m"
            recompilation__succeeded = MR_TRUE;
#line 507 "recompilation.m"
          }
#line 509 "recompilation.m"
        if (recompilation__succeeded)
#line 508 "recompilation.m"
          recompilation__Deps1_10 = recompilation__Deps0_9;
#line 509 "recompilation.m"
        else
#line 510 "recompilation.m"
          {
#line 510 "recompilation.m"
            {
#line 510 "recompilation.m"
              mercury__set__init_1_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, &recompilation__Deps1_10);
            }
#line 510 "recompilation.m"
          }
#line 5547 "recompilation.c"
        recompilation__TypeCtorInfo_27_27 = (MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0;
#line 512 "recompilation.m"
        {
#line 512 "recompilation.m"
          mercury__set__union_3_p_0(recompilation__TypeCtorInfo_27_27, recompilation__Deps1_10, recompilation__ExpandedItems_6, &recompilation__Deps_11);
        }
#line 513 "recompilation.m"
        {
#line 513 "recompilation.m"
          mercury__map__set_4_p_0(recompilation__TypeCtorInfo_27_27, (MR_Word) &recompilation_scalar_common_1[0], ((MR_Box) (recompilation__Item_5)), ((MR_Box) (recompilation__Deps_11)), recompilation__DepsMap0_8, &recompilation__DepsMap_12);
        }
#line 514 "recompilation.m"
        recompilation__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 514 "recompilation.m"
        recompilation__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 514 "recompilation.m"
        recompilation__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 514 "recompilation.m"
        recompilation__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 514 "recompilation.m"
        {
#line 514 "recompilation.m"
          MR_Word base;
#line 514 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 514 "recompilation.m"
          *recompilation__STATE_VARIABLE_Info_14 = base;
#line 514 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__V_19_19));
#line 514 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__V_20_20));
#line 514 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recompilation__DepsMap_12));
#line 514 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (recompilation__V_22_22));
#line 514 "recompilation.m"
        }
#line 506 "recompilation.m"
      }
#line 505 "recompilation.m"
  }
#line 273 "recompilation.m"
}

#line 259 "recompilation.m"
void MR_CALL 
recompilation__record_used_item_5_p_0(
#line 259 "recompilation.m"
  MR_Word recompilation__ItemType_6,
#line 259 "recompilation.m"
  MR_Word recompilation__Id_7,
#line 259 "recompilation.m"
  MR_Word recompilation__QualifiedId_8,
#line 259 "recompilation.m"
  MR_Word recompilation__STATE_VARIABLE_Info_0_26,
#line 259 "recompilation.m"
  MR_Word * recompilation__STATE_VARIABLE_Info_27)
#line 259 "recompilation.m"
{
#line 466 "recompilation.m"
  {
#line 466 "recompilation.m"
    MR_bool recompilation__succeeded = (recompilation__ItemType_6 == (MR_Integer) 6);
#line 466 "recompilation.m"
    MR_Word recompilation__QualifiedName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__QualifiedId_8, (MR_Integer) 0)));
#line 466 "recompilation.m"
    MR_Integer recompilation__Arity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__QualifiedId_8, (MR_Integer) 1)));
#line 475 "recompilation.m"
    MR_String recompilation__V_12_12;

#line 472 "recompilation.m"
    recompilation__succeeded = !(recompilation__succeeded);
#line 472 "recompilation.m"
    if (recompilation__succeeded)
#line 472 "recompilation.m"
      {
#line 473 "recompilation.m"
        recompilation__succeeded = (recompilation__ItemType_6 == (MR_Integer) 7);
#line 473 "recompilation.m"
        recompilation__succeeded = !(recompilation__succeeded);
#line 472 "recompilation.m"
        if (recompilation__succeeded)
#line 472 "recompilation.m"
          {
#line 474 "recompilation.m"
            recompilation__succeeded = (recompilation__ItemType_6 == (MR_Integer) 5);
#line 474 "recompilation.m"
            recompilation__succeeded = !(recompilation__succeeded);
#line 472 "recompilation.m"
            if (recompilation__succeeded)
#line 472 "recompilation.m"
              {
#line 475 "recompilation.m"
                recompilation__succeeded = ((MR_tag((MR_Word) recompilation__QualifiedName_10)) == (MR_mktag((MR_Integer) 0)));
#line 475 "recompilation.m"
                if (recompilation__succeeded)
#line 475 "recompilation.m"
                  recompilation__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__QualifiedName_10, (MR_Integer) 0)));
#line 472 "recompilation.m"
              }
#line 472 "recompilation.m"
          }
#line 472 "recompilation.m"
      }
#line 478 "recompilation.m"
    if (recompilation__succeeded)
#line 478 "recompilation.m"
      *recompilation__STATE_VARIABLE_Info_27 = recompilation__STATE_VARIABLE_Info_0_26;
#line 478 "recompilation.m"
    else
#line 479 "recompilation.m"
      {
#line 479 "recompilation.m"
        MR_Word recompilation__TypeInfo_36_36 = (MR_Word) &recompilation_scalar_common_2[2];
#line 479 "recompilation.m"
        MR_Word recompilation__ItemSet0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 1)));
#line 479 "recompilation.m"
        MR_Word recompilation__IdSet0_14;
#line 479 "recompilation.m"
        MR_String recompilation__UnqualifiedName_15;
#line 479 "recompilation.m"
        MR_Word recompilation__ModuleName_16;
#line 479 "recompilation.m"
        MR_Word recompilation__UnqualifiedId_17;
#line 479 "recompilation.m"
        MR_Word recompilation__SymName_18;
#line 479 "recompilation.m"
        MR_Word recompilation__ModuleQualifier_20;
#line 479 "recompilation.m"
        MR_Word recompilation__MatchingNames1_22;
#line 479 "recompilation.m"
        MR_Word recompilation__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 0)));
#line 479 "recompilation.m"
        MR_Word recompilation__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 2)));
#line 479 "recompilation.m"
        MR_Word recompilation__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 3)));
#line 480 "recompilation.m"
        MR_Box recompilation__conv0_IdSet0_14;
#line 484 "recompilation.m"
        MR_Integer recompilation__V_19_19;
#line 488 "recompilation.m"
        MR_Word recompilation__MatchingNames0_21;
#line 486 "recompilation.m"
        MR_Box recompilation__conv1_MatchingNames0_21;
#line 491 "recompilation.m"
        MR_Word recompilation__TypeCtorInfo_40_40;

#line 480 "recompilation.m"
        {
#line 480 "recompilation.m"
          recompilation__conv0_IdSet0_14 = recompilation__extract_ids_2_f_0(recompilation__TypeInfo_36_36, recompilation__ItemSet0_13, recompilation__ItemType_6);
        }
#line 480 "recompilation.m"
        recompilation__IdSet0_14 = ((MR_Word) recompilation__conv0_IdSet0_14);
#line 481 "recompilation.m"
        {
#line 481 "recompilation.m"
          recompilation__UnqualifiedName_15 = mdbcomp__sym_name__unqualify_name_1_f_0(recompilation__QualifiedName_10);
        }
#line 446 "recompilation.m"
        if (((MR_tag((MR_Word) recompilation__QualifiedName_10)) == (MR_mktag((MR_Integer) 1))))
#line 447 "recompilation.m"
          {
#line 447 "recompilation.m"
            MR_String recompilation__V_47_47;

#line 447 "recompilation.m"
            recompilation__ModuleName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__QualifiedName_10, (MR_Integer) 0)));
#line 447 "recompilation.m"
            recompilation__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__QualifiedName_10, (MR_Integer) 1)));
#line 447 "recompilation.m"
          }
#line 446 "recompilation.m"
        else
#line 446 "recompilation.m"
          {
#line 446 "recompilation.m"
            recompilation__ModuleName_16 = (MR_Word) &recompilation_scalar_common_8[0];
#line 446 "recompilation.m"
          }
#line 483 "recompilation.m"
        {
#line 483 "recompilation.m"
          recompilation__UnqualifiedId_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 483 "recompilation.m"
          MR_hl_field(MR_mktag(0), recompilation__UnqualifiedId_17, 0) = ((MR_Box) (recompilation__UnqualifiedName_15));
#line 483 "recompilation.m"
          MR_hl_field(MR_mktag(0), recompilation__UnqualifiedId_17, 1) = ((MR_Box) (recompilation__Arity_11));
#line 483 "recompilation.m"
        }
#line 484 "recompilation.m"
        recompilation__SymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__Id_7, (MR_Integer) 0)));
#line 484 "recompilation.m"
        recompilation__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__Id_7, (MR_Integer) 1)));
#line 446 "recompilation.m"
        if (((MR_tag((MR_Word) recompilation__SymName_18)) == (MR_mktag((MR_Integer) 1))))
#line 447 "recompilation.m"
          {
#line 447 "recompilation.m"
            MR_String recompilation__V_51_51;

#line 447 "recompilation.m"
            recompilation__ModuleQualifier_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__SymName_18, (MR_Integer) 0)));
#line 447 "recompilation.m"
            recompilation__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__SymName_18, (MR_Integer) 1)));
#line 447 "recompilation.m"
          }
#line 446 "recompilation.m"
        else
#line 446 "recompilation.m"
          {
#line 446 "recompilation.m"
            recompilation__ModuleQualifier_20 = (MR_Word) &recompilation_scalar_common_8[0];
#line 446 "recompilation.m"
          }
#line 486 "recompilation.m"
        {
#line 486 "recompilation.m"
          recompilation__succeeded = mercury__map__search_3_p_0((MR_Word) &recompilation_scalar_common_2[0], (MR_Word) &recompilation_scalar_common_2[1], recompilation__IdSet0_14, ((MR_Box) (recompilation__UnqualifiedId_17)), &recompilation__conv1_MatchingNames0_21);
        }
#line 486 "recompilation.m"
        if (recompilation__succeeded)
#line 486 "recompilation.m"
          {
#line 486 "recompilation.m"
            recompilation__MatchingNames0_21 = ((MR_Word) recompilation__conv1_MatchingNames0_21);
#line 486 "recompilation.m"
            recompilation__succeeded = MR_TRUE;
#line 486 "recompilation.m"
          }
#line 488 "recompilation.m"
        if (recompilation__succeeded)
#line 487 "recompilation.m"
          recompilation__MatchingNames1_22 = recompilation__MatchingNames0_21;
#line 488 "recompilation.m"
        else
#line 489 "recompilation.m"
          {
#line 489 "recompilation.m"
            MR_Word recompilation__TypeCtorInfo_39_39 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 489 "recompilation.m"
            {
#line 489 "recompilation.m"
              mercury__map__init_1_p_0(recompilation__TypeCtorInfo_39_39, recompilation__TypeCtorInfo_39_39, &recompilation__MatchingNames1_22);
            }
#line 489 "recompilation.m"
          }
#line 5796 "recompilation.c"
        recompilation__TypeCtorInfo_40_40 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 491 "recompilation.m"
        {
#line 491 "recompilation.m"
          recompilation__succeeded = mercury__map__contains_2_p_0(recompilation__TypeCtorInfo_40_40, recompilation__TypeCtorInfo_40_40, recompilation__MatchingNames1_22, ((MR_Box) (recompilation__ModuleQualifier_20)));
        }
#line 493 "recompilation.m"
        if (recompilation__succeeded)
#line 493 "recompilation.m"
          *recompilation__STATE_VARIABLE_Info_27 = recompilation__STATE_VARIABLE_Info_0_26;
#line 493 "recompilation.m"
        else
#line 495 "recompilation.m"
          {
#line 495 "recompilation.m"
            MR_Word recompilation__TypeCtorInfo_41_41 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 495 "recompilation.m"
            MR_Word recompilation__MatchingNames_23;
#line 495 "recompilation.m"
            MR_Word recompilation__IdSet_24;
#line 495 "recompilation.m"
            MR_Word recompilation__ItemSet_25;
#line 498 "recompilation.m"
            MR_Word recompilation__V_32_32;
#line 498 "recompilation.m"
            MR_Word recompilation__V_34_34;
#line 498 "recompilation.m"
            MR_Word recompilation__V_35_35;
#line 498 "recompilation.m"
            MR_Word recompilation__V_33_33;

#line 494 "recompilation.m"
            {
#line 494 "recompilation.m"
              mercury__map__det_insert_4_p_0(recompilation__TypeCtorInfo_41_41, recompilation__TypeCtorInfo_41_41, ((MR_Box) (recompilation__ModuleQualifier_20)), ((MR_Box) (recompilation__ModuleName_16)), recompilation__MatchingNames1_22, &recompilation__MatchingNames_23);
            }
#line 496 "recompilation.m"
            {
#line 496 "recompilation.m"
              mercury__map__set_4_p_0((MR_Word) &recompilation_scalar_common_2[0], (MR_Word) &recompilation_scalar_common_2[1], ((MR_Box) (recompilation__UnqualifiedId_17)), ((MR_Box) (recompilation__MatchingNames_23)), recompilation__IdSet0_14, &recompilation__IdSet_24);
            }
#line 497 "recompilation.m"
            {
#line 497 "recompilation.m"
              recompilation__update_ids_4_p_0(recompilation__TypeInfo_36_36, recompilation__ItemType_6, ((MR_Box) (recompilation__IdSet_24)), recompilation__ItemSet0_13, &recompilation__ItemSet_25);
            }
#line 498 "recompilation.m"
            recompilation__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 0)));
#line 498 "recompilation.m"
            recompilation__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 1)));
#line 498 "recompilation.m"
            recompilation__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 2)));
#line 498 "recompilation.m"
            recompilation__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 3)));
#line 498 "recompilation.m"
            {
#line 498 "recompilation.m"
              MR_Word base;
#line 498 "recompilation.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 498 "recompilation.m"
              *recompilation__STATE_VARIABLE_Info_27 = base;
#line 498 "recompilation.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__V_32_32));
#line 498 "recompilation.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__ItemSet_25));
#line 498 "recompilation.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recompilation__V_34_34));
#line 498 "recompilation.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (recompilation__V_35_35));
#line 498 "recompilation.m"
            }
#line 495 "recompilation.m"
          }
#line 479 "recompilation.m"
      }
#line 466 "recompilation.m"
  }
#line 259 "recompilation.m"
}

#line 248 "recompilation.m"
MR_Word MR_CALL 
recompilation__module_qualify_name_2_f_0(
#line 248 "recompilation.m"
  MR_Word recompilation__Qualifier_4,
#line 248 "recompilation.m"
  MR_String recompilation__Name_5)
#line 248 "recompilation.m"
{
#line 449 "recompilation.m"
  {
#line 449 "recompilation.m"
    MR_bool recompilation__succeeded = ((MR_tag((MR_Word) recompilation__Qualifier_4)) == (MR_mktag((MR_Integer) 0)));
#line 449 "recompilation.m"
    MR_Word recompilation__HeadVar__3_3;
#line 450 "recompilation.m"
    MR_String recompilation__V_6_6;

#line 450 "recompilation.m"
    if (recompilation__succeeded)
#line 450 "recompilation.m"
      {
#line 450 "recompilation.m"
        recompilation__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__Qualifier_4, (MR_Integer) 0)));
#line 450 "recompilation.m"
        recompilation__succeeded = (strcmp(recompilation__V_6_6, (MR_String) "") == 0);
#line 450 "recompilation.m"
      }
#line 449 "recompilation.m"
    if (recompilation__succeeded)
#line 451 "recompilation.m"
      {
#line 451 "recompilation.m"
        recompilation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 451 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, 0) = ((MR_Box) (recompilation__Name_5));
#line 451 "recompilation.m"
      }
#line 449 "recompilation.m"
    else
#line 453 "recompilation.m"
      {
#line 453 "recompilation.m"
        recompilation__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 453 "recompilation.m"
        MR_hl_field(MR_mktag(1), recompilation__HeadVar__3_3, 0) = ((MR_Box) (recompilation__Qualifier_4));
#line 453 "recompilation.m"
        MR_hl_field(MR_mktag(1), recompilation__HeadVar__3_3, 1) = ((MR_Box) (recompilation__Name_5));
#line 453 "recompilation.m"
      }
#line 449 "recompilation.m"
    return recompilation__HeadVar__3_3;
#line 449 "recompilation.m"
  }
#line 248 "recompilation.m"
}

#line 246 "recompilation.m"
MR_Word MR_CALL 
recompilation__find_module_qualifier_1_f_0(
#line 246 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 246 "recompilation.m"
{
#line 446 "recompilation.m"
  {
#line 446 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 446 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;

#line 446 "recompilation.m"
    if (((MR_tag((MR_Word) recompilation__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 447 "recompilation.m"
      {
#line 447 "recompilation.m"
        MR_String recompilation__V_6_6;

#line 447 "recompilation.m"
        recompilation__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 447 "recompilation.m"
        recompilation__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__HeadVar__1_1, (MR_Integer) 1)));
#line 447 "recompilation.m"
      }
#line 446 "recompilation.m"
    else
#line 446 "recompilation.m"
      {
#line 446 "recompilation.m"
        recompilation__HeadVar__2_2 = (MR_Word) &recompilation_scalar_common_8[0];
#line 446 "recompilation.m"
      }
#line 446 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 446 "recompilation.m"
  }
#line 246 "recompilation.m"
}

#line 435 "recompilation.m"
static MR_Box MR_CALL 
recompilation__map_ids_3_f_0_1(
#line 435 "recompilation.m"
  MR_Box recompilation__closure_arg,
#line 435 "recompilation.m"
  MR_Box recompilation__wrapper_arg_1,
#line 435 "recompilation.m"
  MR_Box recompilation__wrapper_arg_2)
#line 435 "recompilation.m"
{
#line 435 "recompilation.m"
  {
#line 435 "recompilation.m"
    MR_Box recompilation__wrapper_arg_3;
#line 435 "recompilation.m"
    MR_Box recompilation__closure = recompilation__closure_arg;
#line 435 "recompilation.m"
    MR_Word recompilation__conv0_LambdaHeadVar__3_16;

#line 435 "recompilation.m"
    {
#line 435 "recompilation.m"
      recompilation__conv0_LambdaHeadVar__3_16 = recompilation__IntroducedFrom__func__map_ids__435__1_6_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__closure, (MR_Integer) 6))), ((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 435 "recompilation.m"
    recompilation__wrapper_arg_3 = ((MR_Box) (recompilation__conv0_LambdaHeadVar__3_16));
#line 435 "recompilation.m"
    return recompilation__wrapper_arg_3;
#line 435 "recompilation.m"
  }
#line 435 "recompilation.m"
}

#line 218 "recompilation.m"
MR_Word MR_CALL 
recompilation__map_ids_3_f_0(
#line 218 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_38,
#line 218 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_U_39,
#line 218 "recompilation.m"
  MR_Word recompilation__Func_5,
#line 218 "recompilation.m"
  MR_Word recompilation__Items0_6,
#line 218 "recompilation.m"
  MR_Box recompilation__Init_7)
#line 218 "recompilation.m"
{
#line 429 "recompilation.m"
  {
#line 429 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 429 "recompilation.m"
    MR_Word recompilation__Items_8;
#line 429 "recompilation.m"
    MR_Word recompilation__TypeInfo_42_42;
#line 429 "recompilation.m"
    MR_Word recompilation__Items1_9;
#line 429 "recompilation.m"
    MR_Word recompilation__V_13_13;
#line 435 "recompilation.m"
    MR_Box recompilation__conv1_Items_8;

#line 363 "recompilation.m"
    {
#line 363 "recompilation.m"
      recompilation__Items1_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 363 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 0) = recompilation__Init_7;
#line 363 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 1) = recompilation__Init_7;
#line 363 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 2) = recompilation__Init_7;
#line 363 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 3) = recompilation__Init_7;
#line 363 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 4) = recompilation__Init_7;
#line 363 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 5) = recompilation__Init_7;
#line 363 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 6) = recompilation__Init_7;
#line 363 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 7) = recompilation__Init_7;
#line 363 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 8) = recompilation__Init_7;
#line 363 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 9) = recompilation__Init_7;
#line 363 "recompilation.m"
    }
#line 6067 "recompilation.c"
    {
#line 6069 "recompilation.c"
      recompilation__TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 6071 "recompilation.c"
      MR_hl_field(MR_mktag(0), recompilation__TypeInfo_42_42, 0) = ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_set_3));
#line 6073 "recompilation.c"
      MR_hl_field(MR_mktag(0), recompilation__TypeInfo_42_42, 1) = ((MR_Box) (recompilation__TypeInfo_for_U_39));
#line 6075 "recompilation.c"
      MR_hl_field(MR_mktag(0), recompilation__TypeInfo_42_42, 2) = ((MR_Box) (recompilation__TypeInfo_for_U_39));
#line 6077 "recompilation.c"
      MR_hl_field(MR_mktag(0), recompilation__TypeInfo_42_42, 3) = ((MR_Box) (recompilation__TypeInfo_for_U_39));
#line 6079 "recompilation.c"
    }
#line 435 "recompilation.m"
    {
#line 435 "recompilation.m"
      recompilation__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 435 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_13_13, 0) = ((MR_Box) (&recompilation_scalar_common_7[0]));
#line 435 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_13_13, 1) = ((MR_Box) (recompilation__map_ids_3_f_0_1));
#line 435 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 435 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_13_13, 3) = ((MR_Box) (recompilation__TypeInfo_for_T_38));
#line 435 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_13_13, 4) = ((MR_Box) (recompilation__TypeInfo_for_U_39));
#line 435 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_13_13, 5) = ((MR_Box) (recompilation__Func_5));
#line 435 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_13_13, 6) = ((MR_Box) (recompilation__Items0_6));
#line 435 "recompilation.m"
    }
#line 435 "recompilation.m"
    {
#line 435 "recompilation.m"
      recompilation__conv1_Items_8 = mercury__list__foldl_3_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_type_0, recompilation__TypeInfo_42_42, (MR_Word) recompilation__V_13_13, (MR_Word) MR_mkword(MR_mktag(1), &recompilation_scalar_common_1[9]), ((MR_Box) (recompilation__Items1_9)));
    }
#line 435 "recompilation.m"
    recompilation__Items_8 = ((MR_Word) recompilation__conv1_Items_8);
#line 429 "recompilation.m"
    return recompilation__Items_8;
#line 429 "recompilation.m"
  }
#line 218 "recompilation.m"
}

#line 215 "recompilation.m"
void MR_CALL 
recompilation__update_ids_4_p_0(
#line 215 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_155,
#line 215 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 215 "recompilation.m"
  MR_Box recompilation__IdMap_2,
#line 215 "recompilation.m"
  MR_Word recompilation__STATE_VARIABLE_ItemIdSet_0_3,
#line 215 "recompilation.m"
  MR_Word * recompilation__STATE_VARIABLE_ItemIdSet_4)
#line 215 "recompilation.m"
{
#line 408 "recompilation.m"
  {
#line 408 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 408 "recompilation.m"
    MR_Box recompilation__V_156_156 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 9));
#line 408 "recompilation.m"
    MR_Box recompilation__V_157_157 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 8));
#line 408 "recompilation.m"
    MR_Box recompilation__V_158_158 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 7));
#line 408 "recompilation.m"
    MR_Box recompilation__V_159_159 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 6));
#line 408 "recompilation.m"
    MR_Box recompilation__V_160_160 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 5));
#line 408 "recompilation.m"
    MR_Box recompilation__V_161_161 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 4));
#line 408 "recompilation.m"
    MR_Box recompilation__V_162_162 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 3));
#line 408 "recompilation.m"
    MR_Box recompilation__V_163_163 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 2));
#line 408 "recompilation.m"
    MR_Box recompilation__V_164_164 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 1));
#line 408 "recompilation.m"
    MR_Box recompilation__V_165_165 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 0));

#line 408 "recompilation.m"
#line 408 "recompilation.m"
    switch (recompilation__HeadVar__1_1) {
#line 408 "recompilation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 408 "recompilation.m"
      case (MR_Integer) 9:
#line 427 "recompilation.m"
        {
#line 427 "recompilation.m"
          MR_Word base;
#line 427 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 427 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 427 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__V_165_165;
#line 427 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__V_164_164;
#line 427 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__V_163_163;
#line 427 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__V_162_162;
#line 427 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__V_161_161;
#line 427 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_160_160;
#line 427 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__V_159_159;
#line 427 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__V_158_158;
#line 427 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_157_157;
#line 427 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__IdMap_2;
#line 427 "recompilation.m"
        }
#line 408 "recompilation.m"
        break;
#line 408 "recompilation.m"
      case (MR_Integer) 7:
#line 421 "recompilation.m"
        {
#line 421 "recompilation.m"
          MR_Word base;
#line 421 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 421 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 421 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__V_165_165;
#line 421 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__V_164_164;
#line 421 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__V_163_163;
#line 421 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__V_162_162;
#line 421 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__V_161_161;
#line 421 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_160_160;
#line 421 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__V_159_159;
#line 421 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__IdMap_2;
#line 421 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_157_157;
#line 421 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_156_156;
#line 421 "recompilation.m"
        }
#line 408 "recompilation.m"
        break;
#line 408 "recompilation.m"
      case (MR_Integer) 5:
#line 423 "recompilation.m"
        {
#line 423 "recompilation.m"
          MR_Word base;
#line 423 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 423 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 423 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__V_165_165;
#line 423 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__V_164_164;
#line 423 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__V_163_163;
#line 423 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__V_162_162;
#line 423 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__V_161_161;
#line 423 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__IdMap_2;
#line 423 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__V_159_159;
#line 423 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__V_158_158;
#line 423 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_157_157;
#line 423 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_156_156;
#line 423 "recompilation.m"
        }
#line 408 "recompilation.m"
        break;
#line 408 "recompilation.m"
      case (MR_Integer) 3:
#line 415 "recompilation.m"
        {
#line 415 "recompilation.m"
          MR_Word base;
#line 415 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 415 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 415 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__V_165_165;
#line 415 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__V_164_164;
#line 415 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__V_163_163;
#line 415 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__IdMap_2;
#line 415 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__V_161_161;
#line 415 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_160_160;
#line 415 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__V_159_159;
#line 415 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__V_158_158;
#line 415 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_157_157;
#line 415 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_156_156;
#line 415 "recompilation.m"
        }
#line 408 "recompilation.m"
        break;
#line 408 "recompilation.m"
      case (MR_Integer) 2:
#line 413 "recompilation.m"
        {
#line 413 "recompilation.m"
          MR_Word base;
#line 413 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 413 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 413 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__V_165_165;
#line 413 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__V_164_164;
#line 413 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__IdMap_2;
#line 413 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__V_162_162;
#line 413 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__V_161_161;
#line 413 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_160_160;
#line 413 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__V_159_159;
#line 413 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__V_158_158;
#line 413 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_157_157;
#line 413 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_156_156;
#line 413 "recompilation.m"
        }
#line 408 "recompilation.m"
        break;
#line 408 "recompilation.m"
      case (MR_Integer) 8:
#line 425 "recompilation.m"
        {
#line 425 "recompilation.m"
          MR_Word base;
#line 425 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 425 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 425 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__V_165_165;
#line 425 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__V_164_164;
#line 425 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__V_163_163;
#line 425 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__V_162_162;
#line 425 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__V_161_161;
#line 425 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_160_160;
#line 425 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__V_159_159;
#line 425 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__V_158_158;
#line 425 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__IdMap_2;
#line 425 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_156_156;
#line 425 "recompilation.m"
        }
#line 408 "recompilation.m"
        break;
#line 408 "recompilation.m"
      case (MR_Integer) 6:
#line 419 "recompilation.m"
        {
#line 419 "recompilation.m"
          MR_Word base;
#line 419 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 419 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 419 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__V_165_165;
#line 419 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__V_164_164;
#line 419 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__V_163_163;
#line 419 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__V_162_162;
#line 419 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__V_161_161;
#line 419 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_160_160;
#line 419 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__IdMap_2;
#line 419 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__V_158_158;
#line 419 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_157_157;
#line 419 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_156_156;
#line 419 "recompilation.m"
        }
#line 408 "recompilation.m"
        break;
#line 408 "recompilation.m"
      case (MR_Integer) 0:
#line 409 "recompilation.m"
        {
#line 409 "recompilation.m"
          MR_Word base;
#line 409 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 409 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 409 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__IdMap_2;
#line 409 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__V_164_164;
#line 409 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__V_163_163;
#line 409 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__V_162_162;
#line 409 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__V_161_161;
#line 409 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_160_160;
#line 409 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__V_159_159;
#line 409 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__V_158_158;
#line 409 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_157_157;
#line 409 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_156_156;
#line 409 "recompilation.m"
        }
#line 408 "recompilation.m"
        break;
#line 408 "recompilation.m"
      case (MR_Integer) 1:
#line 411 "recompilation.m"
        {
#line 411 "recompilation.m"
          MR_Word base;
#line 411 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 411 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 411 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__V_165_165;
#line 411 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__IdMap_2;
#line 411 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__V_163_163;
#line 411 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__V_162_162;
#line 411 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__V_161_161;
#line 411 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_160_160;
#line 411 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__V_159_159;
#line 411 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__V_158_158;
#line 411 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_157_157;
#line 411 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_156_156;
#line 411 "recompilation.m"
        }
#line 408 "recompilation.m"
        break;
#line 408 "recompilation.m"
      case (MR_Integer) 4:
#line 417 "recompilation.m"
        {
#line 417 "recompilation.m"
          MR_Word base;
#line 417 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 417 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 417 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__V_165_165;
#line 417 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__V_164_164;
#line 417 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__V_163_163;
#line 417 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__V_162_162;
#line 417 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__IdMap_2;
#line 417 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_160_160;
#line 417 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__V_159_159;
#line 417 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__V_158_158;
#line 417 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_157_157;
#line 417 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_156_156;
#line 417 "recompilation.m"
        }
#line 408 "recompilation.m"
        break;
#line 408 "recompilation.m"
    }
#line 408 "recompilation.m"
  }
#line 215 "recompilation.m"
}

#line 213 "recompilation.m"
MR_Box MR_CALL 
recompilation__extract_ids_2_f_0(
#line 213 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_104,
#line 213 "recompilation.m"
  MR_Word recompilation__ItemIdSet_1,
#line 213 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 213 "recompilation.m"
{
#line 397 "recompilation.m"
  {
#line 397 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 397 "recompilation.m"
    MR_Box recompilation__HeadVar__3_3;
#line 397 "recompilation.m"
    MR_Box recompilation__V_105_105 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 9));
#line 397 "recompilation.m"
    MR_Box recompilation__V_106_106 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 8));
#line 397 "recompilation.m"
    MR_Box recompilation__V_107_107 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 7));
#line 397 "recompilation.m"
    MR_Box recompilation__V_108_108 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 6));
#line 397 "recompilation.m"
    MR_Box recompilation__V_109_109 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 5));
#line 397 "recompilation.m"
    MR_Box recompilation__V_110_110 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 4));
#line 397 "recompilation.m"
    MR_Box recompilation__V_111_111 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 3));
#line 397 "recompilation.m"
    MR_Box recompilation__V_112_112 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 2));
#line 397 "recompilation.m"
    MR_Box recompilation__V_113_113 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 1));
#line 397 "recompilation.m"
    MR_Box recompilation__V_114_114 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 0));

#line 397 "recompilation.m"
#line 397 "recompilation.m"
    switch (recompilation__HeadVar__2_2) {
#line 397 "recompilation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 397 "recompilation.m"
      case (MR_Integer) 9:
#line 406 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_105_105;
#line 397 "recompilation.m"
        break;
#line 397 "recompilation.m"
      case (MR_Integer) 7:
#line 404 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_107_107;
#line 397 "recompilation.m"
        break;
#line 397 "recompilation.m"
      case (MR_Integer) 5:
#line 402 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_109_109;
#line 397 "recompilation.m"
        break;
#line 397 "recompilation.m"
      case (MR_Integer) 3:
#line 400 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_111_111;
#line 397 "recompilation.m"
        break;
#line 397 "recompilation.m"
      case (MR_Integer) 2:
#line 399 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_112_112;
#line 397 "recompilation.m"
        break;
#line 397 "recompilation.m"
      case (MR_Integer) 8:
#line 405 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_106_106;
#line 397 "recompilation.m"
        break;
#line 397 "recompilation.m"
      case (MR_Integer) 6:
#line 403 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_108_108;
#line 397 "recompilation.m"
        break;
#line 397 "recompilation.m"
      case (MR_Integer) 0:
#line 397 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_114_114;
#line 397 "recompilation.m"
        break;
#line 397 "recompilation.m"
      case (MR_Integer) 1:
#line 398 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_113_113;
#line 397 "recompilation.m"
        break;
#line 397 "recompilation.m"
      case (MR_Integer) 4:
#line 401 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_110_110;
#line 397 "recompilation.m"
        break;
#line 397 "recompilation.m"
    }
#line 397 "recompilation.m"
    return recompilation__HeadVar__3_3;
#line 397 "recompilation.m"
  }
#line 213 "recompilation.m"
}

#line 209 "recompilation.m"
void MR_CALL 
recompilation__update_pred_or_func_set_4_p_0(
#line 209 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_PorF_35,
#line 209 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Simple_36,
#line 209 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Cons_37,
#line 209 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 209 "recompilation.m"
  MR_Box recompilation__Set_2,
#line 209 "recompilation.m"
  MR_Word recompilation__STATE_VARIABLE_ItemIdSet_0_3,
#line 209 "recompilation.m"
  MR_Word * recompilation__STATE_VARIABLE_ItemIdSet_4)
#line 209 "recompilation.m"
{
#line 392 "recompilation.m"
  {
#line 392 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 392 "recompilation.m"
    MR_Box recompilation__V_38_38 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 9));
#line 392 "recompilation.m"
    MR_Box recompilation__V_39_39 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 8));
#line 392 "recompilation.m"
    MR_Box recompilation__V_40_40 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 7));
#line 392 "recompilation.m"
    MR_Box recompilation__V_41_41 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 6));
#line 392 "recompilation.m"
    MR_Box recompilation__V_42_42 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 5));
#line 392 "recompilation.m"
    MR_Box recompilation__V_43_43 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 4));
#line 392 "recompilation.m"
    MR_Box recompilation__V_44_44 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 3));
#line 392 "recompilation.m"
    MR_Box recompilation__V_45_45 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 2));
#line 392 "recompilation.m"
    MR_Box recompilation__V_46_46 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 1));
#line 392 "recompilation.m"
    MR_Box recompilation__V_47_47 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 0));

#line 392 "recompilation.m"
#line 392 "recompilation.m"
    switch (recompilation__HeadVar__1_1) {
#line 392 "recompilation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 392 "recompilation.m"
      case (MR_Integer) 7:
#line 395 "recompilation.m"
        {
#line 395 "recompilation.m"
          MR_Word base;
#line 395 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 395 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 395 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__V_47_47;
#line 395 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__V_46_46;
#line 395 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__V_45_45;
#line 395 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__V_44_44;
#line 395 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__V_43_43;
#line 395 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_42_42;
#line 395 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__V_41_41;
#line 395 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__Set_2;
#line 395 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_39_39;
#line 395 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_38_38;
#line 395 "recompilation.m"
        }
#line 392 "recompilation.m"
        break;
#line 392 "recompilation.m"
      case (MR_Integer) 6:
#line 393 "recompilation.m"
        {
#line 393 "recompilation.m"
          MR_Word base;
#line 393 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 393 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 393 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__V_47_47;
#line 393 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__V_46_46;
#line 393 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__V_45_45;
#line 393 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__V_44_44;
#line 393 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__V_43_43;
#line 393 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_42_42;
#line 393 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__Set_2;
#line 393 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__V_40_40;
#line 393 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_39_39;
#line 393 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_38_38;
#line 393 "recompilation.m"
        }
#line 392 "recompilation.m"
        break;
#line 392 "recompilation.m"
    }
#line 392 "recompilation.m"
  }
#line 209 "recompilation.m"
}

#line 206 "recompilation.m"
MR_Box MR_CALL 
recompilation__extract_pred_or_func_set_2_f_0(
#line 206 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Simple_24,
#line 206 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_PorF_25,
#line 206 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Cons_26,
#line 206 "recompilation.m"
  MR_Word recompilation__ItemIdSet_1,
#line 206 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 206 "recompilation.m"
{
#line 389 "recompilation.m"
  {
#line 389 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 389 "recompilation.m"
    MR_Box recompilation__HeadVar__3_3;
#line 389 "recompilation.m"
    MR_Box recompilation__V_29_29 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 7));
#line 389 "recompilation.m"
    MR_Box recompilation__V_30_30 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 6));
#line 389 "recompilation.m"
    MR_Box recompilation__V_27_27 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 9));
#line 389 "recompilation.m"
    MR_Box recompilation__V_28_28 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 8));
#line 389 "recompilation.m"
    MR_Box recompilation__V_31_31 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 5));
#line 389 "recompilation.m"
    MR_Box recompilation__V_32_32 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 4));
#line 389 "recompilation.m"
    MR_Box recompilation__V_33_33 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 3));
#line 389 "recompilation.m"
    MR_Box recompilation__V_34_34 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 2));
#line 389 "recompilation.m"
    MR_Box recompilation__V_35_35 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 1));
#line 389 "recompilation.m"
    MR_Box recompilation__V_36_36 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 0));

#line 389 "recompilation.m"
#line 389 "recompilation.m"
    switch (recompilation__HeadVar__2_2) {
#line 389 "recompilation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 389 "recompilation.m"
      case (MR_Integer) 7:
#line 390 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_29_29;
#line 389 "recompilation.m"
        break;
#line 389 "recompilation.m"
      case (MR_Integer) 6:
#line 389 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_30_30;
#line 389 "recompilation.m"
        break;
#line 389 "recompilation.m"
    }
#line 389 "recompilation.m"
    return recompilation__HeadVar__3_3;
#line 389 "recompilation.m"
  }
#line 206 "recompilation.m"
}

#line 202 "recompilation.m"
void MR_CALL 
recompilation__update_simple_item_set_4_p_0(
#line 202 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Simple_80,
#line 202 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_PorF_81,
#line 202 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Cons_82,
#line 202 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 202 "recompilation.m"
  MR_Box recompilation__IdMap_2,
#line 202 "recompilation.m"
  MR_Word recompilation__STATE_VARIABLE_ItemIdSet_0_3,
#line 202 "recompilation.m"
  MR_Word * recompilation__STATE_VARIABLE_ItemIdSet_4)
#line 202 "recompilation.m"
{
#line 378 "recompilation.m"
  {
#line 378 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 378 "recompilation.m"
    MR_Box recompilation__V_83_83 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 9));
#line 378 "recompilation.m"
    MR_Box recompilation__V_84_84 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 8));
#line 378 "recompilation.m"
    MR_Box recompilation__V_85_85 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 7));
#line 378 "recompilation.m"
    MR_Box recompilation__V_86_86 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 6));
#line 378 "recompilation.m"
    MR_Box recompilation__V_87_87 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 5));
#line 378 "recompilation.m"
    MR_Box recompilation__V_88_88 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 4));
#line 378 "recompilation.m"
    MR_Box recompilation__V_89_89 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 3));
#line 378 "recompilation.m"
    MR_Box recompilation__V_90_90 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 2));
#line 378 "recompilation.m"
    MR_Box recompilation__V_91_91 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 1));
#line 378 "recompilation.m"
    MR_Box recompilation__V_92_92 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 0));

#line 378 "recompilation.m"
#line 378 "recompilation.m"
    switch (recompilation__HeadVar__1_1) {
#line 378 "recompilation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 378 "recompilation.m"
      case (MR_Integer) 3:
#line 385 "recompilation.m"
        {
#line 385 "recompilation.m"
          MR_Word base;
#line 385 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 385 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 385 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__V_92_92;
#line 385 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__V_91_91;
#line 385 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__V_90_90;
#line 385 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__IdMap_2;
#line 385 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__V_88_88;
#line 385 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_87_87;
#line 385 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__V_86_86;
#line 385 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__V_85_85;
#line 385 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_84_84;
#line 385 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_83_83;
#line 385 "recompilation.m"
        }
#line 378 "recompilation.m"
        break;
#line 378 "recompilation.m"
      case (MR_Integer) 2:
#line 383 "recompilation.m"
        {
#line 383 "recompilation.m"
          MR_Word base;
#line 383 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 383 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 383 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__V_92_92;
#line 383 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__V_91_91;
#line 383 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__IdMap_2;
#line 383 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__V_89_89;
#line 383 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__V_88_88;
#line 383 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_87_87;
#line 383 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__V_86_86;
#line 383 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__V_85_85;
#line 383 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_84_84;
#line 383 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_83_83;
#line 383 "recompilation.m"
        }
#line 378 "recompilation.m"
        break;
#line 378 "recompilation.m"
      case (MR_Integer) 0:
#line 379 "recompilation.m"
        {
#line 379 "recompilation.m"
          MR_Word base;
#line 379 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 379 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 379 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__IdMap_2;
#line 379 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__V_91_91;
#line 379 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__V_90_90;
#line 379 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__V_89_89;
#line 379 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__V_88_88;
#line 379 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_87_87;
#line 379 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__V_86_86;
#line 379 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__V_85_85;
#line 379 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_84_84;
#line 379 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_83_83;
#line 379 "recompilation.m"
        }
#line 378 "recompilation.m"
        break;
#line 378 "recompilation.m"
      case (MR_Integer) 1:
#line 381 "recompilation.m"
        {
#line 381 "recompilation.m"
          MR_Word base;
#line 381 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 381 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 381 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__V_92_92;
#line 381 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__IdMap_2;
#line 381 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__V_90_90;
#line 381 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__V_89_89;
#line 381 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__V_88_88;
#line 381 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_87_87;
#line 381 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__V_86_86;
#line 381 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__V_85_85;
#line 381 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_84_84;
#line 381 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_83_83;
#line 381 "recompilation.m"
        }
#line 378 "recompilation.m"
        break;
#line 378 "recompilation.m"
      case (MR_Integer) 4:
#line 387 "recompilation.m"
        {
#line 387 "recompilation.m"
          MR_Word base;
#line 387 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 387 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 387 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__V_92_92;
#line 387 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__V_91_91;
#line 387 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__V_90_90;
#line 387 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__V_89_89;
#line 387 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__IdMap_2;
#line 387 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_87_87;
#line 387 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__V_86_86;
#line 387 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__V_85_85;
#line 387 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_84_84;
#line 387 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_83_83;
#line 387 "recompilation.m"
        }
#line 378 "recompilation.m"
        break;
#line 378 "recompilation.m"
    }
#line 378 "recompilation.m"
  }
#line 202 "recompilation.m"
}

#line 199 "recompilation.m"
MR_Box MR_CALL 
recompilation__extract_simple_item_set_2_f_0(
#line 199 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Simple_54,
#line 199 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_PorF_55,
#line 199 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Cons_56,
#line 199 "recompilation.m"
  MR_Word recompilation__ItemIdSet_1,
#line 199 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 199 "recompilation.m"
{
#line 372 "recompilation.m"
  {
#line 372 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 372 "recompilation.m"
    MR_Box recompilation__HeadVar__3_3;
#line 372 "recompilation.m"
    MR_Box recompilation__V_62_62 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 4));
#line 372 "recompilation.m"
    MR_Box recompilation__V_63_63 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 3));
#line 372 "recompilation.m"
    MR_Box recompilation__V_64_64 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 2));
#line 372 "recompilation.m"
    MR_Box recompilation__V_65_65 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 1));
#line 372 "recompilation.m"
    MR_Box recompilation__V_66_66 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 0));
#line 372 "recompilation.m"
    MR_Box recompilation__V_57_57 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 9));
#line 372 "recompilation.m"
    MR_Box recompilation__V_58_58 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 8));
#line 372 "recompilation.m"
    MR_Box recompilation__V_59_59 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 7));
#line 372 "recompilation.m"
    MR_Box recompilation__V_60_60 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 6));
#line 372 "recompilation.m"
    MR_Box recompilation__V_61_61 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 5));

#line 372 "recompilation.m"
#line 372 "recompilation.m"
    switch (recompilation__HeadVar__2_2) {
#line 372 "recompilation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 372 "recompilation.m"
      case (MR_Integer) 3:
#line 375 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_63_63;
#line 372 "recompilation.m"
        break;
#line 372 "recompilation.m"
      case (MR_Integer) 2:
#line 374 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_64_64;
#line 372 "recompilation.m"
        break;
#line 372 "recompilation.m"
      case (MR_Integer) 0:
#line 372 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_66_66;
#line 372 "recompilation.m"
        break;
#line 372 "recompilation.m"
      case (MR_Integer) 1:
#line 373 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_65_65;
#line 372 "recompilation.m"
        break;
#line 372 "recompilation.m"
      case (MR_Integer) 4:
#line 376 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_62_62;
#line 372 "recompilation.m"
        break;
#line 372 "recompilation.m"
    }
#line 372 "recompilation.m"
    return recompilation__HeadVar__3_3;
#line 372 "recompilation.m"
  }
#line 199 "recompilation.m"
}

#line 192 "recompilation.m"
MR_Word MR_CALL 
recompilation__init_used_items_0_f_0(void)
#line 192 "recompilation.m"
{
#line 369 "recompilation.m"
  {
#line 369 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 369 "recompilation.m"
    MR_Word recompilation__HeadVar__1_1;
#line 369 "recompilation.m"
    MR_Word recompilation__TypeInfo_12_12 = (MR_Word) &recompilation_scalar_common_2[0];
#line 369 "recompilation.m"
    MR_Word recompilation__TypeInfo_13_13 = (MR_Word) &recompilation_scalar_common_2[1];
#line 369 "recompilation.m"
    MR_Word recompilation__V_2_2;
#line 369 "recompilation.m"
    MR_Word recompilation__V_3_3;
#line 369 "recompilation.m"
    MR_Word recompilation__V_4_4;
#line 369 "recompilation.m"
    MR_Word recompilation__V_5_5;
#line 369 "recompilation.m"
    MR_Word recompilation__V_6_6;
#line 369 "recompilation.m"
    MR_Word recompilation__V_7_7;
#line 369 "recompilation.m"
    MR_Word recompilation__V_8_8;
#line 369 "recompilation.m"
    MR_Word recompilation__V_9_9;
#line 369 "recompilation.m"
    MR_Word recompilation__V_10_10;
#line 369 "recompilation.m"
    MR_Word recompilation__V_11_11;

#line 369 "recompilation.m"
    {
#line 369 "recompilation.m"
      recompilation__V_2_2 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 369 "recompilation.m"
    {
#line 369 "recompilation.m"
      recompilation__V_3_3 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 369 "recompilation.m"
    {
#line 369 "recompilation.m"
      recompilation__V_4_4 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 369 "recompilation.m"
    {
#line 369 "recompilation.m"
      recompilation__V_5_5 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 370 "recompilation.m"
    {
#line 370 "recompilation.m"
      recompilation__V_6_6 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 370 "recompilation.m"
    {
#line 370 "recompilation.m"
      recompilation__V_7_7 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 370 "recompilation.m"
    {
#line 370 "recompilation.m"
      recompilation__V_8_8 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 370 "recompilation.m"
    {
#line 370 "recompilation.m"
      recompilation__V_9_9 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 370 "recompilation.m"
    {
#line 370 "recompilation.m"
      recompilation__V_10_10 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 370 "recompilation.m"
    {
#line 370 "recompilation.m"
      recompilation__V_11_11 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 369 "recompilation.m"
    {
#line 369 "recompilation.m"
      recompilation__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 369 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 0) = ((MR_Box) (recompilation__V_2_2));
#line 369 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 1) = ((MR_Box) (recompilation__V_3_3));
#line 369 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 2) = ((MR_Box) (recompilation__V_4_4));
#line 369 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 3) = ((MR_Box) (recompilation__V_5_5));
#line 369 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 4) = ((MR_Box) (recompilation__V_6_6));
#line 369 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 5) = ((MR_Box) (recompilation__V_7_7));
#line 369 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 6) = ((MR_Box) (recompilation__V_8_8));
#line 369 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 7) = ((MR_Box) (recompilation__V_9_9));
#line 369 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 8) = ((MR_Box) (recompilation__V_10_10));
#line 369 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 9) = ((MR_Box) (recompilation__V_11_11));
#line 369 "recompilation.m"
    }
#line 369 "recompilation.m"
    return recompilation__HeadVar__1_1;
#line 369 "recompilation.m"
  }
#line 192 "recompilation.m"
}

#line 168 "recompilation.m"
MR_Word MR_CALL 
recompilation__init_item_id_set_3_f_0(
#line 168 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Simple_15,
#line 168 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_PorF_16,
#line 168 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Cons_17,
#line 168 "recompilation.m"
  MR_Box recompilation__Simple_5,
#line 168 "recompilation.m"
  MR_Box recompilation__PorF_6,
#line 168 "recompilation.m"
  MR_Box recompilation__Cons_7)
#line 168 "recompilation.m"
{
#line 366 "recompilation.m"
  {
#line 366 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 366 "recompilation.m"
    MR_Word recompilation__HeadVar__4_4;

#line 366 "recompilation.m"
    {
#line 366 "recompilation.m"
      recompilation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 366 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 0) = recompilation__Simple_5;
#line 366 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 1) = recompilation__Simple_5;
#line 366 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 2) = recompilation__Simple_5;
#line 366 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 3) = recompilation__Simple_5;
#line 366 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 4) = recompilation__Simple_5;
#line 366 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 5) = recompilation__Cons_7;
#line 366 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 6) = recompilation__PorF_6;
#line 366 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 7) = recompilation__PorF_6;
#line 366 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 8) = recompilation__PorF_6;
#line 366 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 9) = recompilation__PorF_6;
#line 366 "recompilation.m"
    }
#line 366 "recompilation.m"
    return recompilation__HeadVar__4_4;
#line 366 "recompilation.m"
  }
#line 168 "recompilation.m"
}

#line 166 "recompilation.m"
MR_Word MR_CALL 
recompilation__init_item_id_set_1_f_0(
#line 166 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_13,
#line 166 "recompilation.m"
  MR_Box recompilation__Init_3)
#line 166 "recompilation.m"
{
#line 363 "recompilation.m"
  {
#line 363 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 363 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;

#line 363 "recompilation.m"
    {
#line 363 "recompilation.m"
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 363 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = recompilation__Init_3;
#line 363 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = recompilation__Init_3;
#line 363 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 2) = recompilation__Init_3;
#line 363 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 3) = recompilation__Init_3;
#line 363 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 4) = recompilation__Init_3;
#line 363 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 5) = recompilation__Init_3;
#line 363 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 6) = recompilation__Init_3;
#line 363 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 7) = recompilation__Init_3;
#line 363 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 8) = recompilation__Init_3;
#line 363 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 9) = recompilation__Init_3;
#line 363 "recompilation.m"
    }
#line 363 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 363 "recompilation.m"
  }
#line 166 "recompilation.m"
}

#line 146 "recompilation.m"
MR_Word MR_CALL 
recompilation__init_recompilation_info_1_f_0(
#line 146 "recompilation.m"
  MR_Word recompilation__ModuleName_3)
#line 146 "recompilation.m"
{
#line 458 "recompilation.m"
  {
#line 458 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 458 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;
#line 458 "recompilation.m"
    MR_Word recompilation__V_4_4;
#line 458 "recompilation.m"
    MR_Word recompilation__V_5_5;
#line 458 "recompilation.m"
    MR_Word recompilation__V_6_6;

#line 461 "recompilation.m"
    {
#line 461 "recompilation.m"
      recompilation__V_4_4 = recompilation__init_used_items_0_f_0();
    }
#line 462 "recompilation.m"
    {
#line 462 "recompilation.m"
      recompilation__V_5_5 = mercury__map__init_0_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, (MR_Word) &recompilation_scalar_common_1[0]);
    }
#line 463 "recompilation.m"
    {
#line 463 "recompilation.m"
      recompilation__V_6_6 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0);
    }
#line 459 "recompilation.m"
    {
#line 459 "recompilation.m"
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 459 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = ((MR_Box) (recompilation__ModuleName_3));
#line 459 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = ((MR_Box) (recompilation__V_4_4));
#line 459 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 2) = ((MR_Box) (recompilation__V_5_5));
#line 459 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 3) = ((MR_Box) (recompilation__V_6_6));
#line 459 "recompilation.m"
    }
#line 458 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 458 "recompilation.m"
  }
#line 146 "recompilation.m"
}

#line 125 "recompilation.m"
MR_Word MR_CALL 
recompilation__item_name_to_mode_id_1_f_0(
#line 125 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 125 "recompilation.m"
{
#line 358 "recompilation.m"
  {
#line 358 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 358 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;
#line 358 "recompilation.m"
    MR_Word recompilation__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 358 "recompilation.m"
    MR_Integer recompilation__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));

#line 358 "recompilation.m"
    {
#line 358 "recompilation.m"
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 358 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = ((MR_Box) (recompilation__SymName_3));
#line 358 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = ((MR_Box) (recompilation__Arity_4));
#line 358 "recompilation.m"
    }
#line 358 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 358 "recompilation.m"
  }
#line 125 "recompilation.m"
}

#line 124 "recompilation.m"
MR_Word MR_CALL 
recompilation__item_name_to_inst_id_1_f_0(
#line 124 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 124 "recompilation.m"
{
#line 357 "recompilation.m"
  {
#line 357 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 357 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;
#line 357 "recompilation.m"
    MR_Word recompilation__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 357 "recompilation.m"
    MR_Integer recompilation__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));

#line 357 "recompilation.m"
    {
#line 357 "recompilation.m"
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 357 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = ((MR_Box) (recompilation__SymName_3));
#line 357 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = ((MR_Box) (recompilation__Arity_4));
#line 357 "recompilation.m"
    }
#line 357 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 357 "recompilation.m"
  }
#line 124 "recompilation.m"
}

#line 123 "recompilation.m"
MR_Word MR_CALL 
recompilation__item_name_to_type_ctor_1_f_0(
#line 123 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 123 "recompilation.m"
{
#line 356 "recompilation.m"
  {
#line 356 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 356 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;
#line 356 "recompilation.m"
    MR_Word recompilation__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 356 "recompilation.m"
    MR_Integer recompilation__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));

#line 356 "recompilation.m"
    {
#line 356 "recompilation.m"
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 356 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = ((MR_Box) (recompilation__SymName_3));
#line 356 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = ((MR_Box) (recompilation__Arity_4));
#line 356 "recompilation.m"
    }
#line 356 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 356 "recompilation.m"
  }
#line 123 "recompilation.m"
}

#line 121 "recompilation.m"
MR_Word MR_CALL 
recompilation__mode_id_to_item_name_1_f_0(
#line 121 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 121 "recompilation.m"
{
#line 354 "recompilation.m"
  {
#line 354 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 354 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;
#line 354 "recompilation.m"
    MR_Word recompilation__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 354 "recompilation.m"
    MR_Integer recompilation__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));

#line 354 "recompilation.m"
    {
#line 354 "recompilation.m"
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 354 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = ((MR_Box) (recompilation__SymName_3));
#line 354 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = ((MR_Box) (recompilation__Arity_4));
#line 354 "recompilation.m"
    }
#line 354 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 354 "recompilation.m"
  }
#line 121 "recompilation.m"
}

#line 120 "recompilation.m"
MR_Word MR_CALL 
recompilation__inst_id_to_item_name_1_f_0(
#line 120 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 120 "recompilation.m"
{
#line 353 "recompilation.m"
  {
#line 353 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 353 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;
#line 353 "recompilation.m"
    MR_Word recompilation__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 353 "recompilation.m"
    MR_Integer recompilation__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));

#line 353 "recompilation.m"
    {
#line 353 "recompilation.m"
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 353 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = ((MR_Box) (recompilation__SymName_3));
#line 353 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = ((MR_Box) (recompilation__Arity_4));
#line 353 "recompilation.m"
    }
#line 353 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 353 "recompilation.m"
  }
#line 120 "recompilation.m"
}

#line 119 "recompilation.m"
MR_Word MR_CALL 
recompilation__type_ctor_to_item_name_1_f_0(
#line 119 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 119 "recompilation.m"
{
#line 352 "recompilation.m"
  {
#line 352 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 352 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;
#line 352 "recompilation.m"
    MR_Word recompilation__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 352 "recompilation.m"
    MR_Integer recompilation__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));

#line 352 "recompilation.m"
    {
#line 352 "recompilation.m"
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 352 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = ((MR_Box) (recompilation__SymName_3));
#line 352 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = ((MR_Box) (recompilation__Arity_4));
#line 352 "recompilation.m"
    }
#line 352 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 352 "recompilation.m"
  }
#line 119 "recompilation.m"
}

#line 116 "recompilation.m"
MR_Word MR_CALL 
recompilation__pred_or_func_to_item_type_1_f_0(
#line 116 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 116 "recompilation.m"
{
#line 329 "recompilation.m"
  {
#line 329 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 329 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;

#line 329 "recompilation.m"
#line 329 "recompilation.m"
    switch (recompilation__HeadVar__1_1) {
#line 329 "recompilation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 329 "recompilation.m"
      case (MR_Integer) 1:
#line 330 "recompilation.m"
        recompilation__HeadVar__2_2 = (MR_Integer) 7;
#line 329 "recompilation.m"
        break;
#line 329 "recompilation.m"
      case (MR_Integer) 0:
#line 329 "recompilation.m"
        recompilation__HeadVar__2_2 = (MR_Integer) 6;
#line 329 "recompilation.m"
        break;
#line 329 "recompilation.m"
    }
#line 329 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 329 "recompilation.m"
  }
#line 116 "recompilation.m"
}

#line 114 "recompilation.m"
void MR_CALL 
recompilation__string_to_item_type_2_p_1(
#line 114 "recompilation.m"
  MR_String * recompilation__HeadVar__1_1,
#line 114 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 114 "recompilation.m"
{
#line 341 "recompilation.m"
  {
#line 341 "recompilation.m"
    MR_bool recompilation__succeeded;

#line 341 "recompilation.m"
    *recompilation__HeadVar__1_1 = ((&recompilation_vector_common_5[0 + recompilation__HeadVar__2_2]))->recompilation__vector_common_type_5_0__vct_5_f_0;
#line 341 "recompilation.m"
  }
#line 114 "recompilation.m"
}

#line 113 "recompilation.m"
MR_bool MR_CALL 
recompilation__string_to_item_type_2_p_0(
#line 113 "recompilation.m"
  MR_String recompilation__HeadVar__1_1,
#line 113 "recompilation.m"
  MR_Word * recompilation__HeadVar__2_2)
#line 113 "recompilation.m"
{
#line 341 "recompilation.m"
  {
#line 341 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 341 "recompilation.m"
    MR_Integer recompilation__slot_0;
#line 341 "recompilation.m"
    MR_String recompilation__str_1;

#line 341 "recompilation.m"
    /* hashed string simple lookup switch */
#line 341 "recompilation.m"
    /* compute the hash value of the input string */
#line 341 "recompilation.m"
    recompilation__slot_0 = ((MR_hash_string5(recompilation__HeadVar__1_1)) & (MR_Integer) 31);
#line 341 "recompilation.m"
    /* no collisions; no hash chain loop */
#line 341 "recompilation.m"
    /* lookup the string for this hash slot */
#line 341 "recompilation.m"
    recompilation__str_1 = ((&recompilation_vector_common_4[0 + recompilation__slot_0]))->recompilation__vector_common_type_4_0__vct_4_f_0;
#line 341 "recompilation.m"
    /* did we find a match? */
#line 341 "recompilation.m"
    if ((((recompilation__str_1 != NULL)) && ((strcmp(recompilation__str_1, recompilation__HeadVar__1_1) == 0))))
#line 341 "recompilation.m"
      {
#line 341 "recompilation.m"
        /* we found a match; look up the results */
#line 341 "recompilation.m"
        *recompilation__HeadVar__2_2 = ((&recompilation_vector_common_4[0 + recompilation__slot_0]))->recompilation__vector_common_type_4_0__vct_4_f_1;
#line 341 "recompilation.m"
        recompilation__succeeded = MR_TRUE;
#line 341 "recompilation.m"
        /* jump out of search loop */
#line 341 "recompilation.m"
        goto label_0;
#line 341 "recompilation.m"
      }
#line 341 "recompilation.m"
    recompilation__succeeded = MR_FALSE;
#line 341 "recompilation.m"
  label_0:;
#line 341 "recompilation.m"
    return recompilation__succeeded;
#line 341 "recompilation.m"
  }
#line 113 "recompilation.m"
}

#line 109 "recompilation.m"
MR_bool MR_CALL 
recompilation__is_pred_or_func_item_type_1_p_0(
#line 109 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 109 "recompilation.m"
{
#line 338 "recompilation.m"
  {
#line 338 "recompilation.m"
    MR_bool recompilation__succeeded;

#line 338 "recompilation.m"
#line 338 "recompilation.m"
    switch (recompilation__HeadVar__1_1) {
#line 338 "recompilation.m"
      default:
#line 338 "recompilation.m"
        recompilation__succeeded = MR_FALSE;
#line 338 "recompilation.m"
        break;
#line 338 "recompilation.m"
      case (MR_Integer) 7:
#line 339 "recompilation.m"
        recompilation__succeeded = MR_TRUE;
#line 338 "recompilation.m"
        break;
#line 338 "recompilation.m"
      case (MR_Integer) 6:
#line 338 "recompilation.m"
        recompilation__succeeded = MR_TRUE;
#line 338 "recompilation.m"
        break;
#line 338 "recompilation.m"
    }
#line 338 "recompilation.m"
    return recompilation__succeeded;
#line 338 "recompilation.m"
  }
#line 109 "recompilation.m"
}

#line 107 "recompilation.m"
MR_bool MR_CALL 
recompilation__is_simple_item_type_1_p_0(
#line 107 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 107 "recompilation.m"
{
#line 332 "recompilation.m"
  {
#line 332 "recompilation.m"
    MR_bool recompilation__succeeded;

#line 332 "recompilation.m"
    if (((MR_Integer) 31 & (((MR_Integer) 1 << recompilation__HeadVar__1_1))))
#line 332 "recompilation.m"
      {
#line 332 "recompilation.m"
        recompilation__succeeded = MR_TRUE;
#line 332 "recompilation.m"
      }
#line 332 "recompilation.m"
    else
#line 332 "recompilation.m"
      recompilation__succeeded = MR_FALSE;
#line 332 "recompilation.m"
    return recompilation__succeeded;
#line 332 "recompilation.m"
  }
#line 107 "recompilation.m"
}

#line 60 "recompilation.m"
MR_bool MR_CALL 
recompilation__term_to_timestamp_1_f_0(
#line 60 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_7,
#line 60 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 60 "recompilation.m"
  MR_Word * recompilation__HeadVar__2_2)
#line 60 "recompilation.m"
{
#line 319 "recompilation.m"
  {
#line 319 "recompilation.m"
    MR_bool recompilation__succeeded = ((MR_tag((MR_Word) recompilation__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 319 "recompilation.m"
    MR_String recompilation__TimestampString_3;
#line 319 "recompilation.m"
    MR_Word recompilation__V_5_5;
#line 319 "recompilation.m"
    MR_Word recompilation__V_6_6;
#line 319 "recompilation.m"
    MR_Word recompilation__V_4_4;

#line 319 "recompilation.m"
    if (recompilation__succeeded)
#line 319 "recompilation.m"
      {
#line 319 "recompilation.m"
        recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 319 "recompilation.m"
        recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));
#line 319 "recompilation.m"
        recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 2)));
#line 319 "recompilation.m"
        recompilation__succeeded = ((((MR_tag((MR_Word) recompilation__V_5_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__V_5_5, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 319 "recompilation.m"
        if (recompilation__succeeded)
#line 319 "recompilation.m"
          {
#line 319 "recompilation.m"
            recompilation__TimestampString_3 = ((MR_String) (MR_hl_field(MR_mktag(3), recompilation__V_5_5, (MR_Integer) 1)));
#line 319 "recompilation.m"
            recompilation__succeeded = (recompilation__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 319 "recompilation.m"
            if (recompilation__succeeded)
#line 320 "recompilation.m"
              {
#line 320 "recompilation.m"
                return recompilation__succeeded = libs__timestamp__string_to_timestamp_1_f_0(recompilation__TimestampString_3, recompilation__HeadVar__2_2);
              }
#line 319 "recompilation.m"
          }
#line 319 "recompilation.m"
      }
#line 319 "recompilation.m"
    return recompilation__succeeded;
#line 319 "recompilation.m"
  }
#line 60 "recompilation.m"
}

#line 58 "recompilation.m"
MR_bool MR_CALL 
recompilation__term_to_version_number_1_f_0(
#line 58 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_4,
#line 58 "recompilation.m"
  MR_Word recompilation__Term_3,
#line 58 "recompilation.m"
  MR_Word * recompilation__HeadVar__2_2)
#line 58 "recompilation.m"
{
#line 319 "recompilation.m"
  {
#line 319 "recompilation.m"
    MR_bool recompilation__succeeded = ((MR_tag((MR_Word) recompilation__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 319 "recompilation.m"
    MR_String recompilation__TimestampString_5;
#line 319 "recompilation.m"
    MR_Word recompilation__V_7_7;
#line 319 "recompilation.m"
    MR_Word recompilation__V_8_8;
#line 319 "recompilation.m"
    MR_Word recompilation__V_6_6;

#line 319 "recompilation.m"
    if (recompilation__succeeded)
#line 319 "recompilation.m"
      {
#line 319 "recompilation.m"
        recompilation__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__Term_3, (MR_Integer) 0)));
#line 319 "recompilation.m"
        recompilation__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__Term_3, (MR_Integer) 1)));
#line 319 "recompilation.m"
        recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__Term_3, (MR_Integer) 2)));
#line 319 "recompilation.m"
        recompilation__succeeded = ((((MR_tag((MR_Word) recompilation__V_7_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__V_7_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 319 "recompilation.m"
        if (recompilation__succeeded)
#line 319 "recompilation.m"
          {
#line 319 "recompilation.m"
            recompilation__TimestampString_5 = ((MR_String) (MR_hl_field(MR_mktag(3), recompilation__V_7_7, (MR_Integer) 1)));
#line 319 "recompilation.m"
            recompilation__succeeded = (recompilation__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 319 "recompilation.m"
            if (recompilation__succeeded)
#line 320 "recompilation.m"
              {
#line 320 "recompilation.m"
                return recompilation__succeeded = libs__timestamp__string_to_timestamp_1_f_0(recompilation__TimestampString_5, recompilation__HeadVar__2_2);
              }
#line 319 "recompilation.m"
          }
#line 319 "recompilation.m"
      }
#line 319 "recompilation.m"
    return recompilation__succeeded;
#line 319 "recompilation.m"
  }
#line 58 "recompilation.m"
}

#line 56 "recompilation.m"
void MR_CALL 
recompilation__write_version_number_3_p_0(
#line 56 "recompilation.m"
  MR_Word recompilation__VersionNumber_4)
#line 56 "recompilation.m"
{
#line 322 "recompilation.m"
  {
#line 322 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 322 "recompilation.m"
    MR_String recompilation__V_10_10;

#line 323 "recompilation.m"
    {
#line 323 "recompilation.m"
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
#line 324 "recompilation.m"
    {
#line 324 "recompilation.m"
      recompilation__V_10_10 = libs__timestamp__timestamp_to_string_1_f_0(recompilation__VersionNumber_4);
    }
#line 324 "recompilation.m"
    {
#line 324 "recompilation.m"
      mercury__io__write_string_3_p_0(recompilation__V_10_10);
    }
#line 325 "recompilation.m"
    {
#line 325 "recompilation.m"
      mercury__io__write_string_3_p_0((MR_String) "\"");
#line 325 "recompilation.m"
      return;
    }
#line 322 "recompilation.m"
  }
#line 56 "recompilation.m"
}

void mercury__recompilation__init(void)
{
}

void mercury__recompilation__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_eqv_expanded_info_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_eqv_expanded_item_set_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_functor_set_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_instance_version_numbers_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_item_id_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_item_id_set_3);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_item_id_set_1);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_item_name_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_item_type_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_item_version_numbers_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_module_qualifier_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_module_version_numbers_map_0);
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
