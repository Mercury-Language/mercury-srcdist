/*
** Automatically generated from `recompilation.m'
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
#include "parse_tree.maybe_error.mih"
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




#line 148 "recompilation.c"
static const MR_VA_PseudoTypeInfo_Struct3 recompilation____vpti_func_3__plain_recompilation__type_ctor_info_item_type_0__pseudo_1__pseudo_2;

#line 151 "recompilation.c"
static const MR_FA_PseudoTypeInfo_Struct3 recompilation__recompilation__pti_item_id_set_3__pseudo_1__pseudo_1__pseudo_1;

#line 154 "recompilation.c"
static const MR_FA_PseudoTypeInfo_Struct3 recompilation__recompilation__pti_item_id_set_3__pseudo_2__pseudo_2__pseudo_2;

#line 157 "recompilation.c"
static const MR_FA_TypeInfo_Struct1 recompilation__maybe__ti_maybe_1recompilation__type_ctor_info_eqv_expanded_item_set_0;

#line 160 "recompilation.c"
static const MR_FA_TypeInfo_Struct1 recompilation__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0;

#line 163 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_eqv_expanded_item_set_0_0[2];

#line 166 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_eqv_expanded_item_set_0_0;

#line 169 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_eqv_expanded_item_set_0_0[1];

#line 172 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_eqv_expanded_item_set_0[1];

#line 175 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_eqv_expanded_item_set_0[1];

#line 178 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_eqv_expanded_item_set_0[1];

#line 181 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

#line 184 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 187 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 190 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0;

#line 193 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_id_0_0[2];

#line 196 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_item_id_0_0;

#line 199 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_id_0_0[1];

#line 202 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_id_0[1];

#line 205 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_id_0[1];

#line 208 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_id_0[1];

#line 211 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_id_set_3_0[10];

#line 214 "recompilation.c"
static const MR_ConstString recompilation__recompilation__field_names_item_id_set_3_0[10];

#line 217 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_item_id_set_3_0;

#line 220 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_id_set_3_0[1];

#line 223 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_id_set_3[1];

#line 226 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_id_set_3[1];

#line 229 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_id_set_3[1];

#line 232 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_name_0_0[2];

#line 235 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_item_name_0_0;

#line 238 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_name_0_0[1];

#line 241 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_name_0[1];

#line 244 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_name_0[1];

#line 247 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_name_0[1];

#line 250 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_0;

#line 253 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_1;

#line 256 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_2;

#line 259 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_3;

#line 262 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_4;

#line 265 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_5;

#line 268 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_6;

#line 271 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_7;

#line 274 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_8;

#line 277 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_9;

#line 280 "recompilation.c"
static const MR_EnumFunctorDescPtr recompilation__recompilation__enum_value_ordered_item_type_0[10];

#line 283 "recompilation.c"
static const MR_EnumFunctorDescPtr recompilation__recompilation__enum_name_ordered_item_type_0[10];

#line 286 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_type_0[10];

#line 289 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0;

#line 292 "recompilation.c"
static const MR_FA_TypeInfo_Struct3 recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0;

#line 295 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0;

#line 298 "recompilation.c"
static const MR_FA_TypeInfo_Struct3 recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 301 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_id_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0;

#line 304 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_recompilation_info_0_0[4];

#line 307 "recompilation.c"
static const MR_ConstString recompilation__recompilation__field_names_recompilation_info_0_0[4];

#line 310 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_recompilation_info_0_0;

#line 313 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_recompilation_info_0_0[1];

#line 316 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_recompilation_info_0[1];

#line 319 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_recompilation_info_0[1];

#line 322 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_recompilation_info_0[1];

#line 325 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_version_numbers_0_0[2];

#line 328 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_version_numbers_0_0;

#line 331 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_version_numbers_0_0[1];

#line 334 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_version_numbers_0[1];

#line 337 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_version_numbers_0[1];

#line 340 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_version_numbers_0[1];

#line 343 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____eqv_expanded_info_0_0_10001(
#line 346 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 348 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 351 "recompilation.c"
static void MR_CALL 
recompilation____Compare____eqv_expanded_info_0_0_10001(
#line 354 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 356 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 358 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 361 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____eqv_expanded_item_set_0_0_10001(
#line 364 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 366 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 369 "recompilation.c"
static void MR_CALL 
recompilation____Compare____eqv_expanded_item_set_0_0_10001(
#line 372 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 374 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 376 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 379 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____functor_set_0_0_10001(
#line 382 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 384 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 387 "recompilation.c"
static void MR_CALL 
recompilation____Compare____functor_set_0_0_10001(
#line 390 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 392 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 394 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 397 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____instance_version_numbers_0_0_10001(
#line 400 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 402 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 405 "recompilation.c"
static void MR_CALL 
recompilation____Compare____instance_version_numbers_0_0_10001(
#line 408 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 410 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 412 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 415 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_id_0_0_10001(
#line 418 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 420 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 423 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_id_0_0_10001(
#line 426 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 428 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 430 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 433 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_id_set_3_0_10001(
#line 436 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 438 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 440 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3,
#line 442 "recompilation.c"
  MR_Box recompilation__wrapper_arg_4,
#line 444 "recompilation.c"
  MR_Box recompilation__wrapper_arg_5);

#line 447 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_id_set_3_0_10001(
#line 450 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 452 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 454 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3,
#line 456 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_4,
#line 458 "recompilation.c"
  MR_Box recompilation__wrapper_arg_5,
#line 460 "recompilation.c"
  MR_Box recompilation__wrapper_arg_6);

#line 463 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_id_set_1_0_10001(
#line 466 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 468 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 470 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 473 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_id_set_1_0_10001(
#line 476 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 478 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_2,
#line 480 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3,
#line 482 "recompilation.c"
  MR_Box recompilation__wrapper_arg_4);

#line 485 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_name_0_0_10001(
#line 488 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 490 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 493 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_name_0_0_10001(
#line 496 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 498 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 500 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 503 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_type_0_0_10001(
#line 506 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 508 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 511 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_type_0_0_10001(
#line 514 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 516 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 518 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 521 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_version_numbers_0_0_10001(
#line 524 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 526 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 529 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_version_numbers_0_0_10001(
#line 532 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 534 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 536 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 539 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____module_qualifier_0_0_10001(
#line 542 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 544 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 547 "recompilation.c"
static void MR_CALL 
recompilation____Compare____module_qualifier_0_0_10001(
#line 550 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 552 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 554 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 557 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____module_version_numbers_map_0_0_10001(
#line 560 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 562 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 565 "recompilation.c"
static void MR_CALL 
recompilation____Compare____module_version_numbers_map_0_0_10001(
#line 568 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 570 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 572 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 575 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____pred_or_func_set_0_0_10001(
#line 578 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 580 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 583 "recompilation.c"
static void MR_CALL 
recompilation____Compare____pred_or_func_set_0_0_10001(
#line 586 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 588 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 590 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 593 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____recompilation_info_0_0_10001(
#line 596 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 598 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 601 "recompilation.c"
static void MR_CALL 
recompilation____Compare____recompilation_info_0_0_10001(
#line 604 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 606 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 608 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 611 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____simple_item_set_0_0_10001(
#line 614 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 616 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 619 "recompilation.c"
static void MR_CALL 
recompilation____Compare____simple_item_set_0_0_10001(
#line 622 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 624 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 626 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 629 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____used_items_0_0_10001(
#line 632 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 634 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 637 "recompilation.c"
static void MR_CALL 
recompilation____Compare____used_items_0_0_10001(
#line 640 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 642 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 644 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 647 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____version_number_0_0_10001(
#line 650 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 652 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 655 "recompilation.c"
static void MR_CALL 
recompilation____Compare____version_number_0_0_10001(
#line 658 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 660 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 662 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 665 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____version_number_map_0_0_10001(
#line 668 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 670 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 673 "recompilation.c"
static void MR_CALL 
recompilation____Compare____version_number_map_0_0_10001(
#line 676 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 678 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 680 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 683 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____version_numbers_0_0_10001(
#line 686 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 688 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 691 "recompilation.c"
static void MR_CALL 
recompilation____Compare____version_numbers_0_0_10001(
#line 694 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 696 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 698 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 433 "recompilation.m"
static MR_Word MR_CALL 
recompilation__IntroducedFrom__func__map_ids__433__1_6_f_0(
#line 433 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_38,
#line 433 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_U_39,
#line 433 "recompilation.m"
  MR_Word recompilation__Func_5,
#line 433 "recompilation.m"
  MR_Word recompilation__Items0_6,
#line 433 "recompilation.m"
  MR_Word recompilation__LambdaHeadVar__1_14,
#line 433 "recompilation.m"
  MR_Word recompilation__LambdaHeadVar__2_15);

#line 526 "recompilation.m"
static void MR_CALL 
recompilation__record_expanded_item_3_p_0_1(
#line 526 "recompilation.m"
  MR_Box recompilation__closure_arg,
#line 526 "recompilation.m"
  MR_Box recompilation__wrapper_arg_1,
#line 526 "recompilation.m"
  MR_Box * recompilation__wrapper_arg_2);

#line 433 "recompilation.m"
static MR_Box MR_CALL 
recompilation__map_ids_3_f_0_1(
#line 433 "recompilation.m"
  MR_Box recompilation__closure_arg,
#line 433 "recompilation.m"
  MR_Box recompilation__wrapper_arg_1,
#line 433 "recompilation.m"
  MR_Box recompilation__wrapper_arg_2);


static /* final */ const MR_Box recompilation_scalar_common_1[10][2];

static /* final */ const MR_Box recompilation_scalar_common_2[7][3];

static /* final */ const MR_Box recompilation_scalar_common_3[2][4];

static /* final */ const MR_Integer recompilation_scalar_common_6[1][3];

static /* final */ const MR_Box recompilation_scalar_common_7[1][10];

static /* final */ const MR_Box recompilation_scalar_common_8[1][1];

static /* final */ const MR_Box recompilation_scalar_common_9[1][6];


#line 339 "recompilation.m"
/* sealed */ struct recompilation__vector_common_type_4_0_s {
#line 339 "recompilation.m"
  const MR_String recompilation__vector_common_type_4_0__vct_4_f_0;
#line 339 "recompilation.m"
  const MR_Word recompilation__vector_common_type_4_0__vct_4_f_1;
#line 339 "recompilation.m"
};

static /* final */ const struct recompilation__vector_common_type_4_0_s recompilation_vector_common_4[32];

#line 339 "recompilation.m"
/* sealed */ struct recompilation__vector_common_type_5_0_s {
#line 339 "recompilation.m"
  const MR_String recompilation__vector_common_type_5_0__vct_5_f_0;
#line 339 "recompilation.m"
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



#line 1119 "recompilation.c"
static const MR_VA_PseudoTypeInfo_Struct3 recompilation____vpti_func_3__plain_recompilation__type_ctor_info_item_type_0__pseudo_1__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_type_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1130 "recompilation.c"
static const MR_FA_PseudoTypeInfo_Struct3 recompilation__recompilation__pti_item_id_set_3__pseudo_1__pseudo_1__pseudo_1 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1140 "recompilation.c"
static const MR_FA_PseudoTypeInfo_Struct3 recompilation__recompilation__pti_item_id_set_3__pseudo_2__pseudo_2__pseudo_2 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1150 "recompilation.c"
static const MR_FA_TypeInfo_Struct1 recompilation__maybe__ti_maybe_1recompilation__type_ctor_info_eqv_expanded_item_set_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_eqv_expanded_item_set_0
  }
};

#line 1158 "recompilation.c"
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

#line 1175 "recompilation.c"
static const MR_FA_TypeInfo_Struct1 recompilation__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_id_0
  }
};

#line 1183 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_eqv_expanded_item_set_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &recompilation__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0
};

#line 1189 "recompilation.c"
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

#line 1204 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_eqv_expanded_item_set_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_eqv_expanded_item_set_0_0
};

#line 1209 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_eqv_expanded_item_set_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_eqv_expanded_item_set_0_0
  }
};

#line 1218 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_eqv_expanded_item_set_0[1] = {
  &recompilation__recompilation__du_functor_desc_eqv_expanded_item_set_0_0
};

#line 1223 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_eqv_expanded_item_set_0[1] = {
  (MR_Integer) 0
};

#line 1228 "recompilation.c"
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

#line 1245 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1254 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1263 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1272 "recompilation.c"
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

#line 1289 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_name_0,
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 1298 "recompilation.c"
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

#line 1315 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_id_0_0[2] = {
  (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_type_0,
  (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_name_0
};

#line 1321 "recompilation.c"
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

#line 1336 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_id_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_id_0_0
};

#line 1341 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_item_id_0_0
  }
};

#line 1350 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_id_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_id_0_0
};

#line 1355 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_id_0[1] = {
  (MR_Integer) 0
};

#line 1360 "recompilation.c"
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

#line 1377 "recompilation.c"
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

#line 1391 "recompilation.c"
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

#line 1405 "recompilation.c"
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

#line 1420 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_id_set_3_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_id_set_3_0
};

#line 1425 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_id_set_3[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_item_id_set_3_0
  }
};

#line 1434 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_id_set_3[1] = {
  &recompilation__recompilation__du_functor_desc_item_id_set_3_0
};

#line 1439 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_id_set_3[1] = {
  (MR_Integer) 0
};

#line 1444 "recompilation.c"
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

#line 1461 "recompilation.c"
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

#line 1478 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_name_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1484 "recompilation.c"
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

#line 1499 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_name_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_name_0_0
};

#line 1504 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_name_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_item_name_0_0
  }
};

#line 1513 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_name_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_name_0_0
};

#line 1518 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_name_0[1] = {
  (MR_Integer) 0
};

#line 1523 "recompilation.c"
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

#line 1540 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_0 = {
  (MR_String) "type_abstract_item",
  (MR_Integer) 0
};

#line 1546 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_1 = {
  (MR_String) "type_body_item",
  (MR_Integer) 1
};

#line 1552 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_2 = {
  (MR_String) "mode_item",
  (MR_Integer) 2
};

#line 1558 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_3 = {
  (MR_String) "inst_item",
  (MR_Integer) 3
};

#line 1564 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_4 = {
  (MR_String) "typeclass_item",
  (MR_Integer) 4
};

#line 1570 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_5 = {
  (MR_String) "functor_item",
  (MR_Integer) 5
};

#line 1576 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_6 = {
  (MR_String) "predicate_item",
  (MR_Integer) 6
};

#line 1582 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_7 = {
  (MR_String) "function_item",
  (MR_Integer) 7
};

#line 1588 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_8 = {
  (MR_String) "mutable_item",
  (MR_Integer) 8
};

#line 1594 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_9 = {
  (MR_String) "foreign_proc_item",
  (MR_Integer) 9
};

#line 1600 "recompilation.c"
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

#line 1614 "recompilation.c"
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

#line 1628 "recompilation.c"
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

#line 1642 "recompilation.c"
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

#line 1659 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 1668 "recompilation.c"
static const MR_FA_TypeInfo_Struct3 recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0,
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0,
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 1678 "recompilation.c"
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

#line 1695 "recompilation.c"
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

#line 1712 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_version_numbers_0
  }
};

#line 1721 "recompilation.c"
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

#line 1738 "recompilation.c"
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

#line 1755 "recompilation.c"
static const MR_FA_TypeInfo_Struct3 recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1765 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_id_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_id_0,
    (MR_TypeInfo) &recompilation__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0
  }
};

#line 1774 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_recompilation_info_0_0[4] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_id_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0,
  (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0
};

#line 1782 "recompilation.c"
static const MR_ConstString recompilation__recompilation__field_names_recompilation_info_0_0[4] = {
  (MR_String) "recomp_module_name",
  (MR_String) "recomp_used_items",
  (MR_String) "recomp_dependencies",
  (MR_String) "recomp_version_numbers"
};

#line 1790 "recompilation.c"
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

#line 1805 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_recompilation_info_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_recompilation_info_0_0
};

#line 1810 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_recompilation_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_recompilation_info_0_0
  }
};

#line 1819 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_recompilation_info_0[1] = {
  &recompilation__recompilation__du_functor_desc_recompilation_info_0_0
};

#line 1824 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_recompilation_info_0[1] = {
  (MR_Integer) 0
};

#line 1829 "recompilation.c"
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

#line 1846 "recompilation.c"
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

#line 1863 "recompilation.c"
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

#line 1880 "recompilation.c"
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

#line 1897 "recompilation.c"
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

#line 1914 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_version_numbers_0_0[2] = {
  (MR_PseudoTypeInfo) &recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0,
  (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0
};

#line 1920 "recompilation.c"
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

#line 1935 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_version_numbers_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_version_numbers_0_0
};

#line 1940 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_version_numbers_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_version_numbers_0_0
  }
};

#line 1949 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_version_numbers_0[1] = {
  &recompilation__recompilation__du_functor_desc_version_numbers_0_0
};

#line 1954 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_version_numbers_0[1] = {
  (MR_Integer) 0
};

#line 1959 "recompilation.c"
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

#line 1976 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____eqv_expanded_info_0_0_10001(
#line 1979 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 1981 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 1983 "recompilation.c"
{
#line 1985 "recompilation.c"
  {
#line 1987 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 1990 "recompilation.c"
    {
#line 1992 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____eqv_expanded_info_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 1995 "recompilation.c"
    return recompilation__succeeded;
#line 1997 "recompilation.c"
  }
#line 1999 "recompilation.c"
}

#line 2002 "recompilation.c"
static void MR_CALL 
recompilation____Compare____eqv_expanded_info_0_0_10001(
#line 2005 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2007 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2009 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2011 "recompilation.c"
{
#line 2013 "recompilation.c"
  {
#line 2015 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2018 "recompilation.c"
    {
#line 2020 "recompilation.c"
      recompilation____Compare____eqv_expanded_info_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2023 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2025 "recompilation.c"
  }
#line 2027 "recompilation.c"
}

#line 2030 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____eqv_expanded_item_set_0_0_10001(
#line 2033 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2035 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2037 "recompilation.c"
{
#line 2039 "recompilation.c"
  {
#line 2041 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2044 "recompilation.c"
    {
#line 2046 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____eqv_expanded_item_set_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2049 "recompilation.c"
    return recompilation__succeeded;
#line 2051 "recompilation.c"
  }
#line 2053 "recompilation.c"
}

#line 2056 "recompilation.c"
static void MR_CALL 
recompilation____Compare____eqv_expanded_item_set_0_0_10001(
#line 2059 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2061 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2063 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2065 "recompilation.c"
{
#line 2067 "recompilation.c"
  {
#line 2069 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2072 "recompilation.c"
    {
#line 2074 "recompilation.c"
      recompilation____Compare____eqv_expanded_item_set_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2077 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2079 "recompilation.c"
  }
#line 2081 "recompilation.c"
}

#line 2084 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____functor_set_0_0_10001(
#line 2087 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2089 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2091 "recompilation.c"
{
#line 2093 "recompilation.c"
  {
#line 2095 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2098 "recompilation.c"
    {
#line 2100 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____functor_set_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2103 "recompilation.c"
    return recompilation__succeeded;
#line 2105 "recompilation.c"
  }
#line 2107 "recompilation.c"
}

#line 2110 "recompilation.c"
static void MR_CALL 
recompilation____Compare____functor_set_0_0_10001(
#line 2113 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2115 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2117 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2119 "recompilation.c"
{
#line 2121 "recompilation.c"
  {
#line 2123 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2126 "recompilation.c"
    {
#line 2128 "recompilation.c"
      recompilation____Compare____functor_set_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2131 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2133 "recompilation.c"
  }
#line 2135 "recompilation.c"
}

#line 2138 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____instance_version_numbers_0_0_10001(
#line 2141 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2143 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2145 "recompilation.c"
{
#line 2147 "recompilation.c"
  {
#line 2149 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2152 "recompilation.c"
    {
#line 2154 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____instance_version_numbers_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2157 "recompilation.c"
    return recompilation__succeeded;
#line 2159 "recompilation.c"
  }
#line 2161 "recompilation.c"
}

#line 2164 "recompilation.c"
static void MR_CALL 
recompilation____Compare____instance_version_numbers_0_0_10001(
#line 2167 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2169 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2171 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2173 "recompilation.c"
{
#line 2175 "recompilation.c"
  {
#line 2177 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2180 "recompilation.c"
    {
#line 2182 "recompilation.c"
      recompilation____Compare____instance_version_numbers_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2185 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2187 "recompilation.c"
  }
#line 2189 "recompilation.c"
}

#line 2192 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_id_0_0_10001(
#line 2195 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2197 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2199 "recompilation.c"
{
#line 2201 "recompilation.c"
  {
#line 2203 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2206 "recompilation.c"
    {
#line 2208 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____item_id_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2211 "recompilation.c"
    return recompilation__succeeded;
#line 2213 "recompilation.c"
  }
#line 2215 "recompilation.c"
}

#line 2218 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_id_0_0_10001(
#line 2221 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2223 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2225 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2227 "recompilation.c"
{
#line 2229 "recompilation.c"
  {
#line 2231 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2234 "recompilation.c"
    {
#line 2236 "recompilation.c"
      recompilation____Compare____item_id_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2239 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2241 "recompilation.c"
  }
#line 2243 "recompilation.c"
}

#line 2246 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_id_set_3_0_10001(
#line 2249 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2251 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2253 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3,
#line 2255 "recompilation.c"
  MR_Box recompilation__wrapper_arg_4,
#line 2257 "recompilation.c"
  MR_Box recompilation__wrapper_arg_5)
#line 2259 "recompilation.c"
{
#line 2261 "recompilation.c"
  {
#line 2263 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2266 "recompilation.c"
    {
#line 2268 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____item_id_set_3_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3), ((MR_Word) recompilation__wrapper_arg_4), ((MR_Word) recompilation__wrapper_arg_5));
    }
#line 2271 "recompilation.c"
    return recompilation__succeeded;
#line 2273 "recompilation.c"
  }
#line 2275 "recompilation.c"
}

#line 2278 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_id_set_3_0_10001(
#line 2281 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2283 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2285 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3,
#line 2287 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_4,
#line 2289 "recompilation.c"
  MR_Box recompilation__wrapper_arg_5,
#line 2291 "recompilation.c"
  MR_Box recompilation__wrapper_arg_6)
#line 2293 "recompilation.c"
{
#line 2295 "recompilation.c"
  {
#line 2297 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2300 "recompilation.c"
    {
#line 2302 "recompilation.c"
      recompilation____Compare____item_id_set_3_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3), &recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_5), ((MR_Word) recompilation__wrapper_arg_6));
    }
#line 2305 "recompilation.c"
    *recompilation__wrapper_arg_4 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2307 "recompilation.c"
  }
#line 2309 "recompilation.c"
}

#line 2312 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_id_set_1_0_10001(
#line 2315 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2317 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2319 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2321 "recompilation.c"
{
#line 2323 "recompilation.c"
  {
#line 2325 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2328 "recompilation.c"
    {
#line 2330 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____item_id_set_1_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2333 "recompilation.c"
    return recompilation__succeeded;
#line 2335 "recompilation.c"
  }
#line 2337 "recompilation.c"
}

#line 2340 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_id_set_1_0_10001(
#line 2343 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2345 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_2,
#line 2347 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3,
#line 2349 "recompilation.c"
  MR_Box recompilation__wrapper_arg_4)
#line 2351 "recompilation.c"
{
#line 2353 "recompilation.c"
  {
#line 2355 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2358 "recompilation.c"
    {
#line 2360 "recompilation.c"
      recompilation____Compare____item_id_set_1_0(((MR_Word) recompilation__wrapper_arg_1), &recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_3), ((MR_Word) recompilation__wrapper_arg_4));
    }
#line 2363 "recompilation.c"
    *recompilation__wrapper_arg_2 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2365 "recompilation.c"
  }
#line 2367 "recompilation.c"
}

#line 2370 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_name_0_0_10001(
#line 2373 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2375 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2377 "recompilation.c"
{
#line 2379 "recompilation.c"
  {
#line 2381 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2384 "recompilation.c"
    {
#line 2386 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____item_name_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2389 "recompilation.c"
    return recompilation__succeeded;
#line 2391 "recompilation.c"
  }
#line 2393 "recompilation.c"
}

#line 2396 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_name_0_0_10001(
#line 2399 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2401 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2403 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2405 "recompilation.c"
{
#line 2407 "recompilation.c"
  {
#line 2409 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2412 "recompilation.c"
    {
#line 2414 "recompilation.c"
      recompilation____Compare____item_name_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2417 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2419 "recompilation.c"
  }
#line 2421 "recompilation.c"
}

#line 2424 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_type_0_0_10001(
#line 2427 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2429 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2431 "recompilation.c"
{
#line 2433 "recompilation.c"
  {
#line 2435 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2438 "recompilation.c"
    {
#line 2440 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____item_type_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2443 "recompilation.c"
    return recompilation__succeeded;
#line 2445 "recompilation.c"
  }
#line 2447 "recompilation.c"
}

#line 2450 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_type_0_0_10001(
#line 2453 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2455 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2457 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2459 "recompilation.c"
{
#line 2461 "recompilation.c"
  {
#line 2463 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2466 "recompilation.c"
    {
#line 2468 "recompilation.c"
      recompilation____Compare____item_type_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2471 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2473 "recompilation.c"
  }
#line 2475 "recompilation.c"
}

#line 2478 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_version_numbers_0_0_10001(
#line 2481 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2483 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2485 "recompilation.c"
{
#line 2487 "recompilation.c"
  {
#line 2489 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2492 "recompilation.c"
    {
#line 2494 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____item_version_numbers_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2497 "recompilation.c"
    return recompilation__succeeded;
#line 2499 "recompilation.c"
  }
#line 2501 "recompilation.c"
}

#line 2504 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_version_numbers_0_0_10001(
#line 2507 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2509 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2511 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2513 "recompilation.c"
{
#line 2515 "recompilation.c"
  {
#line 2517 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2520 "recompilation.c"
    {
#line 2522 "recompilation.c"
      recompilation____Compare____item_version_numbers_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2525 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2527 "recompilation.c"
  }
#line 2529 "recompilation.c"
}

#line 2532 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____module_qualifier_0_0_10001(
#line 2535 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2537 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2539 "recompilation.c"
{
#line 2541 "recompilation.c"
  {
#line 2543 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2546 "recompilation.c"
    {
#line 2548 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____module_qualifier_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2551 "recompilation.c"
    return recompilation__succeeded;
#line 2553 "recompilation.c"
  }
#line 2555 "recompilation.c"
}

#line 2558 "recompilation.c"
static void MR_CALL 
recompilation____Compare____module_qualifier_0_0_10001(
#line 2561 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2563 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2565 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2567 "recompilation.c"
{
#line 2569 "recompilation.c"
  {
#line 2571 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2574 "recompilation.c"
    {
#line 2576 "recompilation.c"
      recompilation____Compare____module_qualifier_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2579 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2581 "recompilation.c"
  }
#line 2583 "recompilation.c"
}

#line 2586 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____module_version_numbers_map_0_0_10001(
#line 2589 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2591 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2593 "recompilation.c"
{
#line 2595 "recompilation.c"
  {
#line 2597 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2600 "recompilation.c"
    {
#line 2602 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____module_version_numbers_map_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2605 "recompilation.c"
    return recompilation__succeeded;
#line 2607 "recompilation.c"
  }
#line 2609 "recompilation.c"
}

#line 2612 "recompilation.c"
static void MR_CALL 
recompilation____Compare____module_version_numbers_map_0_0_10001(
#line 2615 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2617 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2619 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2621 "recompilation.c"
{
#line 2623 "recompilation.c"
  {
#line 2625 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2628 "recompilation.c"
    {
#line 2630 "recompilation.c"
      recompilation____Compare____module_version_numbers_map_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2633 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2635 "recompilation.c"
  }
#line 2637 "recompilation.c"
}

#line 2640 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____pred_or_func_set_0_0_10001(
#line 2643 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2645 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2647 "recompilation.c"
{
#line 2649 "recompilation.c"
  {
#line 2651 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2654 "recompilation.c"
    {
#line 2656 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____pred_or_func_set_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2659 "recompilation.c"
    return recompilation__succeeded;
#line 2661 "recompilation.c"
  }
#line 2663 "recompilation.c"
}

#line 2666 "recompilation.c"
static void MR_CALL 
recompilation____Compare____pred_or_func_set_0_0_10001(
#line 2669 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2671 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2673 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2675 "recompilation.c"
{
#line 2677 "recompilation.c"
  {
#line 2679 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2682 "recompilation.c"
    {
#line 2684 "recompilation.c"
      recompilation____Compare____pred_or_func_set_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2687 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2689 "recompilation.c"
  }
#line 2691 "recompilation.c"
}

#line 2694 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____recompilation_info_0_0_10001(
#line 2697 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2699 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2701 "recompilation.c"
{
#line 2703 "recompilation.c"
  {
#line 2705 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2708 "recompilation.c"
    {
#line 2710 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____recompilation_info_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2713 "recompilation.c"
    return recompilation__succeeded;
#line 2715 "recompilation.c"
  }
#line 2717 "recompilation.c"
}

#line 2720 "recompilation.c"
static void MR_CALL 
recompilation____Compare____recompilation_info_0_0_10001(
#line 2723 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2725 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2727 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2729 "recompilation.c"
{
#line 2731 "recompilation.c"
  {
#line 2733 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2736 "recompilation.c"
    {
#line 2738 "recompilation.c"
      recompilation____Compare____recompilation_info_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2741 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2743 "recompilation.c"
  }
#line 2745 "recompilation.c"
}

#line 2748 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____simple_item_set_0_0_10001(
#line 2751 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2753 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2755 "recompilation.c"
{
#line 2757 "recompilation.c"
  {
#line 2759 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2762 "recompilation.c"
    {
#line 2764 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____simple_item_set_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2767 "recompilation.c"
    return recompilation__succeeded;
#line 2769 "recompilation.c"
  }
#line 2771 "recompilation.c"
}

#line 2774 "recompilation.c"
static void MR_CALL 
recompilation____Compare____simple_item_set_0_0_10001(
#line 2777 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2779 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2781 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2783 "recompilation.c"
{
#line 2785 "recompilation.c"
  {
#line 2787 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2790 "recompilation.c"
    {
#line 2792 "recompilation.c"
      recompilation____Compare____simple_item_set_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2795 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2797 "recompilation.c"
  }
#line 2799 "recompilation.c"
}

#line 2802 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____used_items_0_0_10001(
#line 2805 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2807 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2809 "recompilation.c"
{
#line 2811 "recompilation.c"
  {
#line 2813 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2816 "recompilation.c"
    {
#line 2818 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____used_items_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2821 "recompilation.c"
    return recompilation__succeeded;
#line 2823 "recompilation.c"
  }
#line 2825 "recompilation.c"
}

#line 2828 "recompilation.c"
static void MR_CALL 
recompilation____Compare____used_items_0_0_10001(
#line 2831 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2833 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2835 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2837 "recompilation.c"
{
#line 2839 "recompilation.c"
  {
#line 2841 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2844 "recompilation.c"
    {
#line 2846 "recompilation.c"
      recompilation____Compare____used_items_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2849 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2851 "recompilation.c"
  }
#line 2853 "recompilation.c"
}

#line 2856 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____version_number_0_0_10001(
#line 2859 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2861 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2863 "recompilation.c"
{
#line 2865 "recompilation.c"
  {
#line 2867 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2870 "recompilation.c"
    {
#line 2872 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____version_number_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2875 "recompilation.c"
    return recompilation__succeeded;
#line 2877 "recompilation.c"
  }
#line 2879 "recompilation.c"
}

#line 2882 "recompilation.c"
static void MR_CALL 
recompilation____Compare____version_number_0_0_10001(
#line 2885 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2887 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2889 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2891 "recompilation.c"
{
#line 2893 "recompilation.c"
  {
#line 2895 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2898 "recompilation.c"
    {
#line 2900 "recompilation.c"
      recompilation____Compare____version_number_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2903 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2905 "recompilation.c"
  }
#line 2907 "recompilation.c"
}

#line 2910 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____version_number_map_0_0_10001(
#line 2913 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2915 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2917 "recompilation.c"
{
#line 2919 "recompilation.c"
  {
#line 2921 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2924 "recompilation.c"
    {
#line 2926 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____version_number_map_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2929 "recompilation.c"
    return recompilation__succeeded;
#line 2931 "recompilation.c"
  }
#line 2933 "recompilation.c"
}

#line 2936 "recompilation.c"
static void MR_CALL 
recompilation____Compare____version_number_map_0_0_10001(
#line 2939 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2941 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2943 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2945 "recompilation.c"
{
#line 2947 "recompilation.c"
  {
#line 2949 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2952 "recompilation.c"
    {
#line 2954 "recompilation.c"
      recompilation____Compare____version_number_map_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2957 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2959 "recompilation.c"
  }
#line 2961 "recompilation.c"
}

#line 2964 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____version_numbers_0_0_10001(
#line 2967 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2969 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2971 "recompilation.c"
{
#line 2973 "recompilation.c"
  {
#line 2975 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2978 "recompilation.c"
    {
#line 2980 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____version_numbers_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2983 "recompilation.c"
    return recompilation__succeeded;
#line 2985 "recompilation.c"
  }
#line 2987 "recompilation.c"
}

#line 2990 "recompilation.c"
static void MR_CALL 
recompilation____Compare____version_numbers_0_0_10001(
#line 2993 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2995 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2997 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2999 "recompilation.c"
{
#line 3001 "recompilation.c"
  {
#line 3003 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 3006 "recompilation.c"
    {
#line 3008 "recompilation.c"
      recompilation____Compare____version_numbers_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 3011 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 3013 "recompilation.c"
  }
#line 3015 "recompilation.c"
}

#line 433 "recompilation.m"
static MR_Word MR_CALL 
recompilation__IntroducedFrom__func__map_ids__433__1_6_f_0(
#line 433 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_38,
#line 433 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_U_39,
#line 433 "recompilation.m"
  MR_Word recompilation__Func_5,
#line 433 "recompilation.m"
  MR_Word recompilation__Items0_6,
#line 433 "recompilation.m"
  MR_Word recompilation__LambdaHeadVar__1_14,
#line 433 "recompilation.m"
  MR_Word recompilation__LambdaHeadVar__2_15)
#line 433 "recompilation.m"
{
#line 433 "recompilation.m"
  {
#line 433 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 433 "recompilation.m"
    MR_Word recompilation__LambdaHeadVar__3_16;
#line 433 "recompilation.m"
    MR_Box recompilation__V_17_17;
#line 433 "recompilation.m"
    MR_Box recompilation__V_18_18;
#line 435 "recompilation.m"
    MR_Box MR_CALL (* recompilation__func_0)(MR_Box, MR_Box, MR_Box);

#line 435 "recompilation.m"
    {
#line 435 "recompilation.m"
      recompilation__V_18_18 = recompilation__extract_ids_2_f_0(recompilation__TypeInfo_for_T_38, recompilation__Items0_6, recompilation__LambdaHeadVar__1_14);
    }
#line 435 "recompilation.m"
    recompilation__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), recompilation__Func_5, (MR_Integer) 1)));
#line 435 "recompilation.m"
    {
#line 435 "recompilation.m"
      recompilation__V_17_17 = recompilation__func_0(((MR_Box) recompilation__Func_5), ((MR_Box) (recompilation__LambdaHeadVar__1_14)), recompilation__V_18_18);
    }
#line 435 "recompilation.m"
    {
#line 435 "recompilation.m"
      recompilation__update_ids_4_p_0(recompilation__TypeInfo_for_U_39, recompilation__LambdaHeadVar__1_14, recompilation__V_17_17, recompilation__LambdaHeadVar__2_15, &recompilation__LambdaHeadVar__3_16);
    }
#line 433 "recompilation.m"
    return recompilation__LambdaHeadVar__3_16;
#line 433 "recompilation.m"
  }
#line 433 "recompilation.m"
}

#line 220 "recompilation.m"
void MR_CALL 
recompilation____Compare____version_numbers_0_0(
#line 220 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 220 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 220 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 220 "recompilation.m"
{
#line 220 "recompilation.m"
  {
#line 220 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 220 "recompilation.m"
    MR_Integer recompilation__CastX_9 = (MR_Integer) recompilation__HeadVar__2_2;
#line 220 "recompilation.m"
    MR_Integer recompilation__CastY_10 = (MR_Integer) recompilation__HeadVar__3_3;

#line 220 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_9 == recompilation__CastY_10);
#line 220 "recompilation.m"
    if (recompilation__succeeded)
#line 3096 "recompilation.c"
      *recompilation__HeadVar__1_1 = (MR_Integer) 0;
#line 220 "recompilation.m"
    else
#line 220 "recompilation.m"
      {
#line 220 "recompilation.m"
        MR_Word recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
#line 220 "recompilation.m"
        MR_Word recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));
#line 220 "recompilation.m"
        MR_Word recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 0)));
#line 220 "recompilation.m"
        MR_Word recompilation__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 1)));
#line 220 "recompilation.m"
        MR_Word recompilation__V_8_8;

#line 220 "recompilation.m"
        {
#line 220 "recompilation.m"
          mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_3[0], &recompilation__V_8_8, ((MR_Box) (recompilation__V_4_4)), ((MR_Box) (recompilation__V_6_6)));
        }
#line 3118 "recompilation.c"
        recompilation__succeeded = (recompilation__V_8_8 == (MR_Integer) 0);
#line 220 "recompilation.m"
        recompilation__succeeded = !(recompilation__succeeded);
#line 220 "recompilation.m"
        if (recompilation__succeeded)
#line 220 "recompilation.m"
          *recompilation__HeadVar__1_1 = recompilation__V_8_8;
#line 220 "recompilation.m"
        else
#line 220 "recompilation.m"
          {
#line 220 "recompilation.m"
            {
#line 220 "recompilation.m"
              mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[3], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__V_5_5)), ((MR_Box) (recompilation__V_7_7)));
            }
#line 220 "recompilation.m"
          }
#line 220 "recompilation.m"
      }
#line 220 "recompilation.m"
  }
#line 220 "recompilation.m"
}

#line 220 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____version_numbers_0_0(
#line 220 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 220 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 220 "recompilation.m"
{
#line 220 "recompilation.m"
  {
#line 220 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 220 "recompilation.m"
    MR_Integer recompilation__CastX_7 = (MR_Integer) recompilation__HeadVar__1_1;
#line 220 "recompilation.m"
    MR_Integer recompilation__CastY_8 = (MR_Integer) recompilation__HeadVar__2_2;

#line 220 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_7 == recompilation__CastY_8);
#line 220 "recompilation.m"
    if (recompilation__succeeded)
#line 220 "recompilation.m"
      recompilation__succeeded = MR_TRUE;
#line 220 "recompilation.m"
    else
#line 220 "recompilation.m"
      {
#line 220 "recompilation.m"
        MR_Word recompilation__TypeInfo_9_9 = (MR_Word) &recompilation_scalar_common_2[4];
#line 220 "recompilation.m"
        MR_Word recompilation__TypeInfo_10_10;
#line 220 "recompilation.m"
        MR_Word recompilation__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 220 "recompilation.m"
        MR_Word recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));
#line 220 "recompilation.m"
        MR_Word recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
#line 220 "recompilation.m"
        MR_Word recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));

#line 3185 "recompilation.c"
        {
#line 3187 "recompilation.c"
          recompilation__succeeded = recompilation____Unify____item_id_set_3_0(recompilation__TypeInfo_9_9, recompilation__TypeInfo_9_9, recompilation__TypeInfo_9_9, recompilation__V_3_3, recompilation__V_5_5);
        }
#line 220 "recompilation.m"
        if (recompilation__succeeded)
#line 220 "recompilation.m"
          {
#line 3194 "recompilation.c"
            recompilation__TypeInfo_10_10 = (MR_Word) &recompilation_scalar_common_2[3];
#line 3196 "recompilation.c"
            {
#line 3198 "recompilation.c"
              recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_10_10, ((MR_Box) (recompilation__V_4_4)), ((MR_Box) (recompilation__V_6_6)));
            }
#line 220 "recompilation.m"
          }
#line 220 "recompilation.m"
      }
#line 220 "recompilation.m"
    return recompilation__succeeded;
#line 220 "recompilation.m"
  }
#line 220 "recompilation.m"
}

#line 233 "recompilation.m"
void MR_CALL 
recompilation____Compare____version_number_map_0_0(
#line 233 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 233 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 233 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 233 "recompilation.m"
{
#line 233 "recompilation.m"
  {
#line 233 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 233 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 233 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 233 "recompilation.m"
    {
#line 233 "recompilation.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[4], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
    }
#line 233 "recompilation.m"
  }
#line 233 "recompilation.m"
}

#line 233 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____version_number_map_0_0(
#line 233 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 233 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 233 "recompilation.m"
{
#line 233 "recompilation.m"
  {
#line 233 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 233 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 233 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 233 "recompilation.m"
    {
#line 233 "recompilation.m"
      recompilation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation_scalar_common_2[4], ((MR_Box) (recompilation__Cast_HeadVar1_3)), ((MR_Box) (recompilation__Cast_HeadVar2_4)));
    }
#line 233 "recompilation.m"
    return recompilation__succeeded;
#line 233 "recompilation.m"
  }
#line 233 "recompilation.m"
}

#line 51 "recompilation.m"
void MR_CALL 
recompilation____Compare____version_number_0_0(
#line 51 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 51 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 51 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 51 "recompilation.m"
{
#line 51 "recompilation.m"
  {
#line 51 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 51 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 51 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 51 "recompilation.m"
    {
#line 51 "recompilation.m"
      libs__timestamp____Compare____timestamp_0_0(recompilation__HeadVar__1_1, recompilation__Cast_HeadVar1_4, recompilation__Cast_HeadVar2_5);
    }
#line 51 "recompilation.m"
  }
#line 51 "recompilation.m"
}

#line 51 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____version_number_0_0(
#line 51 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 51 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 51 "recompilation.m"
{
#line 51 "recompilation.m"
  {
#line 51 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 51 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 51 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 51 "recompilation.m"
    {
#line 51 "recompilation.m"
      recompilation__succeeded = libs__timestamp____Unify____timestamp_0_0(recompilation__Cast_HeadVar1_3, recompilation__Cast_HeadVar2_4);
    }
#line 51 "recompilation.m"
    return recompilation__succeeded;
#line 51 "recompilation.m"
  }
#line 51 "recompilation.m"
}

#line 182 "recompilation.m"
void MR_CALL 
recompilation____Compare____used_items_0_0(
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
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_3[1], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
    }
#line 182 "recompilation.m"
  }
#line 182 "recompilation.m"
}

#line 182 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____used_items_0_0(
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
    MR_Word recompilation__TypeInfo_5_5 = (MR_Word) &recompilation_scalar_common_2[2];
#line 182 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 182 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 182 "recompilation.m"
    {
#line 182 "recompilation.m"
      recompilation__succeeded = recompilation____Unify____item_id_set_3_0(recompilation__TypeInfo_5_5, recompilation__TypeInfo_5_5, recompilation__TypeInfo_5_5, recompilation__Cast_HeadVar1_3, recompilation__Cast_HeadVar2_4);
    }
#line 182 "recompilation.m"
    return recompilation__succeeded;
#line 182 "recompilation.m"
  }
#line 182 "recompilation.m"
}

#line 171 "recompilation.m"
void MR_CALL 
recompilation____Compare____simple_item_set_0_0(
#line 171 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 171 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 171 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 171 "recompilation.m"
{
#line 171 "recompilation.m"
  {
#line 171 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 171 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 171 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 171 "recompilation.m"
    {
#line 171 "recompilation.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[2], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
    }
#line 171 "recompilation.m"
  }
#line 171 "recompilation.m"
}

#line 171 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____simple_item_set_0_0(
#line 171 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 171 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 171 "recompilation.m"
{
#line 171 "recompilation.m"
  {
#line 171 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 171 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 171 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 171 "recompilation.m"
    {
#line 171 "recompilation.m"
      recompilation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation_scalar_common_2[2], ((MR_Box) (recompilation__Cast_HeadVar1_3)), ((MR_Box) (recompilation__Cast_HeadVar2_4)));
    }
#line 171 "recompilation.m"
    return recompilation__succeeded;
#line 171 "recompilation.m"
  }
#line 171 "recompilation.m"
}

#line 126 "recompilation.m"
void MR_CALL 
recompilation____Compare____recompilation_info_0_0(
#line 126 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 126 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 126 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 126 "recompilation.m"
{
#line 126 "recompilation.m"
  {
#line 126 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 126 "recompilation.m"
    MR_Integer recompilation__CastX_15 = (MR_Integer) recompilation__HeadVar__2_2;
#line 126 "recompilation.m"
    MR_Integer recompilation__CastY_16 = (MR_Integer) recompilation__HeadVar__3_3;

#line 126 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_15 == recompilation__CastY_16);
#line 126 "recompilation.m"
    if (recompilation__succeeded)
#line 3478 "recompilation.c"
      *recompilation__HeadVar__1_1 = (MR_Integer) 0;
#line 126 "recompilation.m"
    else
#line 126 "recompilation.m"
      {
#line 126 "recompilation.m"
        MR_Word recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
#line 126 "recompilation.m"
        MR_Word recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));
#line 126 "recompilation.m"
        MR_Word recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 2)));
#line 126 "recompilation.m"
        MR_Word recompilation__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 3)));
#line 126 "recompilation.m"
        MR_Word recompilation__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 0)));
#line 126 "recompilation.m"
        MR_Word recompilation__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 1)));
#line 126 "recompilation.m"
        MR_Word recompilation__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 2)));
#line 126 "recompilation.m"
        MR_Word recompilation__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 3)));
#line 126 "recompilation.m"
        MR_Word recompilation__V_12_12;

#line 126 "recompilation.m"
        {
#line 126 "recompilation.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&recompilation__V_12_12, recompilation__V_4_4, recompilation__V_8_8);
        }
#line 3508 "recompilation.c"
        recompilation__succeeded = (recompilation__V_12_12 == (MR_Integer) 0);
#line 126 "recompilation.m"
        recompilation__succeeded = !(recompilation__succeeded);
#line 126 "recompilation.m"
        if (recompilation__succeeded)
#line 126 "recompilation.m"
          *recompilation__HeadVar__1_1 = recompilation__V_12_12;
#line 126 "recompilation.m"
        else
#line 126 "recompilation.m"
          {
#line 126 "recompilation.m"
            MR_Word recompilation__V_13_13;

#line 126 "recompilation.m"
            {
#line 126 "recompilation.m"
              mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_3[1], &recompilation__V_13_13, ((MR_Box) (recompilation__V_5_5)), ((MR_Box) (recompilation__V_9_9)));
            }
#line 3528 "recompilation.c"
            recompilation__succeeded = (recompilation__V_13_13 == (MR_Integer) 0);
#line 126 "recompilation.m"
            recompilation__succeeded = !(recompilation__succeeded);
#line 126 "recompilation.m"
            if (recompilation__succeeded)
#line 126 "recompilation.m"
              *recompilation__HeadVar__1_1 = recompilation__V_13_13;
#line 126 "recompilation.m"
            else
#line 126 "recompilation.m"
              {
#line 126 "recompilation.m"
                MR_Word recompilation__V_14_14;

#line 126 "recompilation.m"
                {
#line 126 "recompilation.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[6], &recompilation__V_14_14, ((MR_Box) (recompilation__V_6_6)), ((MR_Box) (recompilation__V_10_10)));
                }
#line 3548 "recompilation.c"
                recompilation__succeeded = (recompilation__V_14_14 == (MR_Integer) 0);
#line 126 "recompilation.m"
                recompilation__succeeded = !(recompilation__succeeded);
#line 126 "recompilation.m"
                if (recompilation__succeeded)
#line 126 "recompilation.m"
                  *recompilation__HeadVar__1_1 = recompilation__V_14_14;
#line 126 "recompilation.m"
                else
#line 126 "recompilation.m"
                  {
#line 126 "recompilation.m"
                    {
#line 126 "recompilation.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[5], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__V_7_7)), ((MR_Box) (recompilation__V_11_11)));
                    }
#line 126 "recompilation.m"
                  }
#line 126 "recompilation.m"
              }
#line 126 "recompilation.m"
          }
#line 126 "recompilation.m"
      }
#line 126 "recompilation.m"
  }
#line 126 "recompilation.m"
}

#line 126 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____recompilation_info_0_0(
#line 126 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 126 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 126 "recompilation.m"
{
#line 126 "recompilation.m"
  {
#line 126 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 126 "recompilation.m"
    MR_Integer recompilation__CastX_11 = (MR_Integer) recompilation__HeadVar__1_1;
#line 126 "recompilation.m"
    MR_Integer recompilation__CastY_12 = (MR_Integer) recompilation__HeadVar__2_2;

#line 126 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_11 == recompilation__CastY_12);
#line 126 "recompilation.m"
    if (recompilation__succeeded)
#line 126 "recompilation.m"
      recompilation__succeeded = MR_TRUE;
#line 126 "recompilation.m"
    else
#line 126 "recompilation.m"
      {
#line 126 "recompilation.m"
        MR_Word recompilation__TypeInfo_14_14;
#line 126 "recompilation.m"
        MR_Word recompilation__TypeInfo_15_15;
#line 126 "recompilation.m"
        MR_Word recompilation__TypeInfo_16_16;
#line 126 "recompilation.m"
        MR_Word recompilation__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 126 "recompilation.m"
        MR_Word recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));
#line 126 "recompilation.m"
        MR_Word recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 2)));
#line 126 "recompilation.m"
        MR_Word recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 3)));
#line 126 "recompilation.m"
        MR_Word recompilation__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
#line 126 "recompilation.m"
        MR_Word recompilation__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));
#line 126 "recompilation.m"
        MR_Word recompilation__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 2)));
#line 126 "recompilation.m"
        MR_Word recompilation__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 3)));

#line 3629 "recompilation.c"
        {
#line 3631 "recompilation.c"
          recompilation__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__V_3_3, recompilation__V_7_7);
        }
#line 126 "recompilation.m"
        if (recompilation__succeeded)
#line 126 "recompilation.m"
          {
#line 3638 "recompilation.c"
            recompilation__TypeInfo_14_14 = (MR_Word) &recompilation_scalar_common_2[2];
#line 3640 "recompilation.c"
            {
#line 3642 "recompilation.c"
              recompilation__succeeded = recompilation____Unify____item_id_set_3_0(recompilation__TypeInfo_14_14, recompilation__TypeInfo_14_14, recompilation__TypeInfo_14_14, recompilation__V_4_4, recompilation__V_8_8);
            }
#line 126 "recompilation.m"
            if (recompilation__succeeded)
#line 126 "recompilation.m"
              {
#line 3649 "recompilation.c"
                recompilation__TypeInfo_15_15 = (MR_Word) &recompilation_scalar_common_2[6];
#line 3651 "recompilation.c"
                {
#line 3653 "recompilation.c"
                  recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_15_15, ((MR_Box) (recompilation__V_5_5)), ((MR_Box) (recompilation__V_9_9)));
                }
#line 126 "recompilation.m"
                if (recompilation__succeeded)
#line 126 "recompilation.m"
                  {
#line 3660 "recompilation.c"
                    recompilation__TypeInfo_16_16 = (MR_Word) &recompilation_scalar_common_2[5];
#line 3662 "recompilation.c"
                    {
#line 3664 "recompilation.c"
                      recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_16_16, ((MR_Box) (recompilation__V_6_6)), ((MR_Box) (recompilation__V_10_10)));
                    }
#line 126 "recompilation.m"
                  }
#line 126 "recompilation.m"
              }
#line 126 "recompilation.m"
          }
#line 126 "recompilation.m"
      }
#line 126 "recompilation.m"
    return recompilation__succeeded;
#line 126 "recompilation.m"
  }
#line 126 "recompilation.m"
}

#line 177 "recompilation.m"
void MR_CALL 
recompilation____Compare____pred_or_func_set_0_0(
#line 177 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 177 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 177 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 177 "recompilation.m"
{
#line 177 "recompilation.m"
  {
#line 177 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 177 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 177 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 177 "recompilation.m"
    {
#line 177 "recompilation.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[2], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
    }
#line 177 "recompilation.m"
  }
#line 177 "recompilation.m"
}

#line 177 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____pred_or_func_set_0_0(
#line 177 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 177 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 177 "recompilation.m"
{
#line 177 "recompilation.m"
  {
#line 177 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 177 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 177 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 177 "recompilation.m"
    {
#line 177 "recompilation.m"
      recompilation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation_scalar_common_2[2], ((MR_Box) (recompilation__Cast_HeadVar1_3)), ((MR_Box) (recompilation__Cast_HeadVar2_4)));
    }
#line 177 "recompilation.m"
    return recompilation__succeeded;
#line 177 "recompilation.m"
  }
#line 177 "recompilation.m"
}

#line 227 "recompilation.m"
void MR_CALL 
recompilation____Compare____module_version_numbers_map_0_0(
#line 227 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 227 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 227 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 227 "recompilation.m"
{
#line 227 "recompilation.m"
  {
#line 227 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 227 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 227 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 227 "recompilation.m"
    {
#line 227 "recompilation.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[5], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
    }
#line 227 "recompilation.m"
  }
#line 227 "recompilation.m"
}

#line 227 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____module_version_numbers_map_0_0(
#line 227 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 227 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 227 "recompilation.m"
{
#line 227 "recompilation.m"
  {
#line 227 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 227 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 227 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 227 "recompilation.m"
    {
#line 227 "recompilation.m"
      recompilation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation_scalar_common_2[5], ((MR_Box) (recompilation__Cast_HeadVar1_3)), ((MR_Box) (recompilation__Cast_HeadVar2_4)));
    }
#line 227 "recompilation.m"
    return recompilation__succeeded;
#line 227 "recompilation.m"
  }
#line 227 "recompilation.m"
}

#line 241 "recompilation.m"
void MR_CALL 
recompilation____Compare____module_qualifier_0_0(
#line 241 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 241 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 241 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 241 "recompilation.m"
{
#line 241 "recompilation.m"
  {
#line 241 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 241 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 241 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 241 "recompilation.m"
    {
#line 241 "recompilation.m"
      mdbcomp__sym_name____Compare____sym_name_0_0(recompilation__HeadVar__1_1, recompilation__Cast_HeadVar1_4, recompilation__Cast_HeadVar2_5);
    }
#line 241 "recompilation.m"
  }
#line 241 "recompilation.m"
}

#line 241 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____module_qualifier_0_0(
#line 241 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 241 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 241 "recompilation.m"
{
#line 241 "recompilation.m"
  {
#line 241 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 241 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 241 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 241 "recompilation.m"
    {
#line 241 "recompilation.m"
      recompilation__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__Cast_HeadVar1_3, recompilation__Cast_HeadVar2_4);
    }
#line 241 "recompilation.m"
    return recompilation__succeeded;
#line 241 "recompilation.m"
  }
#line 241 "recompilation.m"
}

#line 231 "recompilation.m"
void MR_CALL 
recompilation____Compare____item_version_numbers_0_0(
#line 231 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 231 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 231 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 231 "recompilation.m"
{
#line 231 "recompilation.m"
  {
#line 231 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 231 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 231 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 231 "recompilation.m"
    {
#line 231 "recompilation.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_3[0], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
    }
#line 231 "recompilation.m"
  }
#line 231 "recompilation.m"
}

#line 231 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____item_version_numbers_0_0(
#line 231 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 231 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 231 "recompilation.m"
{
#line 231 "recompilation.m"
  {
#line 231 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 231 "recompilation.m"
    MR_Word recompilation__TypeInfo_5_5 = (MR_Word) &recompilation_scalar_common_2[4];
#line 231 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 231 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 231 "recompilation.m"
    {
#line 231 "recompilation.m"
      recompilation__succeeded = recompilation____Unify____item_id_set_3_0(recompilation__TypeInfo_5_5, recompilation__TypeInfo_5_5, recompilation__TypeInfo_5_5, recompilation__Cast_HeadVar1_3, recompilation__Cast_HeadVar2_4);
    }
#line 231 "recompilation.m"
    return recompilation__succeeded;
#line 231 "recompilation.m"
  }
#line 231 "recompilation.m"
}

#line 75 "recompilation.m"
void MR_CALL 
recompilation____Compare____item_type_0_0(
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
    MR_Integer recompilation__Cast_HeadVar1_4 = (MR_Integer) recompilation__HeadVar__2_2;
#line 75 "recompilation.m"
    MR_Integer recompilation__Cast_HeadVar2_5 = (MR_Integer) recompilation__HeadVar__3_3;

#line 75 "recompilation.m"
    {
#line 75 "recompilation.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(recompilation__HeadVar__1_1, recompilation__Cast_HeadVar1_4, recompilation__Cast_HeadVar2_5);
    }
#line 75 "recompilation.m"
  }
#line 75 "recompilation.m"
}

#line 75 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____item_type_0_0(
#line 75 "recompilation.m"
  MR_Word recompilation__HeadVar__2_1,
#line 75 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 75 "recompilation.m"
{
#line 3963 "recompilation.c"
  {
#line 3965 "recompilation.c"
    MR_bool recompilation__succeeded = (recompilation__HeadVar__2_1 == recompilation__HeadVar__2_2);

#line 3968 "recompilation.c"
    return recompilation__succeeded;
#line 3970 "recompilation.c"
  }
#line 75 "recompilation.m"
}

#line 72 "recompilation.m"
void MR_CALL 
recompilation____Compare____item_name_0_0(
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
#line 3999 "recompilation.c"
      *recompilation__HeadVar__1_1 = (MR_Integer) 0;
#line 72 "recompilation.m"
    else
#line 72 "recompilation.m"
      {
#line 72 "recompilation.m"
        MR_Word recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
#line 72 "recompilation.m"
        MR_Integer recompilation__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));
#line 72 "recompilation.m"
        MR_Word recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 0)));
#line 72 "recompilation.m"
        MR_Integer recompilation__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 1)));
#line 72 "recompilation.m"
        MR_Word recompilation__V_8_8;

#line 72 "recompilation.m"
        {
#line 72 "recompilation.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&recompilation__V_8_8, recompilation__V_4_4, recompilation__V_6_6);
        }
#line 4021 "recompilation.c"
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
            mercury__private_builtin__builtin_compare_int_3_p_0(recompilation__HeadVar__1_1, recompilation__V_5_5, recompilation__V_7_7);
          }
#line 72 "recompilation.m"
      }
#line 72 "recompilation.m"
  }
#line 72 "recompilation.m"
}

#line 72 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____item_name_0_0(
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
        MR_Integer recompilation__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));
#line 72 "recompilation.m"
        MR_Word recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
#line 72 "recompilation.m"
        MR_Integer recompilation__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));

#line 4080 "recompilation.c"
        {
#line 4082 "recompilation.c"
          recompilation__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__V_3_3, recompilation__V_5_5);
        }
#line 72 "recompilation.m"
        if (recompilation__succeeded)
#line 4087 "recompilation.c"
          recompilation__succeeded = (recompilation__V_4_4 == recompilation__V_6_6);
#line 72 "recompilation.m"
      }
#line 72 "recompilation.m"
    return recompilation__succeeded;
#line 72 "recompilation.m"
  }
#line 72 "recompilation.m"
}

#line 147 "recompilation.m"
void MR_CALL 
recompilation____Compare____item_id_set_3_0(
#line 147 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Map_35,
#line 147 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Set_36,
#line 147 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Cons_37,
#line 147 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 147 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 147 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 147 "recompilation.m"
{
#line 147 "recompilation.m"
  {
#line 147 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 147 "recompilation.m"
    MR_Integer recompilation__CastX_33 = (MR_Integer) recompilation__HeadVar__2_2;
#line 147 "recompilation.m"
    MR_Integer recompilation__CastY_34 = (MR_Integer) recompilation__HeadVar__3_3;

#line 147 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_33 == recompilation__CastY_34);
#line 147 "recompilation.m"
    if (recompilation__succeeded)
#line 4128 "recompilation.c"
      *recompilation__HeadVar__1_1 = (MR_Integer) 0;
#line 147 "recompilation.m"
    else
#line 147 "recompilation.m"
      {
#line 147 "recompilation.m"
        MR_Box recompilation__V_4_4 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0));
#line 147 "recompilation.m"
        MR_Box recompilation__V_5_5 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1));
#line 147 "recompilation.m"
        MR_Box recompilation__V_6_6 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 2));
#line 147 "recompilation.m"
        MR_Box recompilation__V_7_7 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 3));
#line 147 "recompilation.m"
        MR_Box recompilation__V_8_8 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 4));
#line 147 "recompilation.m"
        MR_Box recompilation__V_9_9 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 5));
#line 147 "recompilation.m"
        MR_Box recompilation__V_10_10 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 6));
#line 147 "recompilation.m"
        MR_Box recompilation__V_11_11 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 7));
#line 147 "recompilation.m"
        MR_Box recompilation__V_12_12 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 8));
#line 147 "recompilation.m"
        MR_Box recompilation__V_13_13 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 9));
#line 147 "recompilation.m"
        MR_Box recompilation__V_14_14 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 0));
#line 147 "recompilation.m"
        MR_Box recompilation__V_15_15 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 1));
#line 147 "recompilation.m"
        MR_Box recompilation__V_16_16 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 2));
#line 147 "recompilation.m"
        MR_Box recompilation__V_17_17 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 3));
#line 147 "recompilation.m"
        MR_Box recompilation__V_18_18 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 4));
#line 147 "recompilation.m"
        MR_Box recompilation__V_19_19 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 5));
#line 147 "recompilation.m"
        MR_Box recompilation__V_20_20 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 6));
#line 147 "recompilation.m"
        MR_Box recompilation__V_21_21 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 7));
#line 147 "recompilation.m"
        MR_Box recompilation__V_22_22 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 8));
#line 147 "recompilation.m"
        MR_Box recompilation__V_23_23 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 9));
#line 147 "recompilation.m"
        MR_Word recompilation__V_24_24;

#line 147 "recompilation.m"
        {
#line 147 "recompilation.m"
          mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Map_35, &recompilation__V_24_24, recompilation__V_4_4, recompilation__V_14_14);
        }
#line 4182 "recompilation.c"
        recompilation__succeeded = (recompilation__V_24_24 == (MR_Integer) 0);
#line 147 "recompilation.m"
        recompilation__succeeded = !(recompilation__succeeded);
#line 147 "recompilation.m"
        if (recompilation__succeeded)
#line 147 "recompilation.m"
          *recompilation__HeadVar__1_1 = recompilation__V_24_24;
#line 147 "recompilation.m"
        else
#line 147 "recompilation.m"
          {
#line 147 "recompilation.m"
            MR_Word recompilation__V_25_25;

#line 147 "recompilation.m"
            {
#line 147 "recompilation.m"
              mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Map_35, &recompilation__V_25_25, recompilation__V_5_5, recompilation__V_15_15);
            }
#line 4202 "recompilation.c"
            recompilation__succeeded = (recompilation__V_25_25 == (MR_Integer) 0);
#line 147 "recompilation.m"
            recompilation__succeeded = !(recompilation__succeeded);
#line 147 "recompilation.m"
            if (recompilation__succeeded)
#line 147 "recompilation.m"
              *recompilation__HeadVar__1_1 = recompilation__V_25_25;
#line 147 "recompilation.m"
            else
#line 147 "recompilation.m"
              {
#line 147 "recompilation.m"
                MR_Word recompilation__V_26_26;

#line 147 "recompilation.m"
                {
#line 147 "recompilation.m"
                  mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Map_35, &recompilation__V_26_26, recompilation__V_6_6, recompilation__V_16_16);
                }
#line 4222 "recompilation.c"
                recompilation__succeeded = (recompilation__V_26_26 == (MR_Integer) 0);
#line 147 "recompilation.m"
                recompilation__succeeded = !(recompilation__succeeded);
#line 147 "recompilation.m"
                if (recompilation__succeeded)
#line 147 "recompilation.m"
                  *recompilation__HeadVar__1_1 = recompilation__V_26_26;
#line 147 "recompilation.m"
                else
#line 147 "recompilation.m"
                  {
#line 147 "recompilation.m"
                    MR_Word recompilation__V_27_27;

#line 147 "recompilation.m"
                    {
#line 147 "recompilation.m"
                      mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Map_35, &recompilation__V_27_27, recompilation__V_7_7, recompilation__V_17_17);
                    }
#line 4242 "recompilation.c"
                    recompilation__succeeded = (recompilation__V_27_27 == (MR_Integer) 0);
#line 147 "recompilation.m"
                    recompilation__succeeded = !(recompilation__succeeded);
#line 147 "recompilation.m"
                    if (recompilation__succeeded)
#line 147 "recompilation.m"
                      *recompilation__HeadVar__1_1 = recompilation__V_27_27;
#line 147 "recompilation.m"
                    else
#line 147 "recompilation.m"
                      {
#line 147 "recompilation.m"
                        MR_Word recompilation__V_28_28;

#line 147 "recompilation.m"
                        {
#line 147 "recompilation.m"
                          mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Map_35, &recompilation__V_28_28, recompilation__V_8_8, recompilation__V_18_18);
                        }
#line 4262 "recompilation.c"
                        recompilation__succeeded = (recompilation__V_28_28 == (MR_Integer) 0);
#line 147 "recompilation.m"
                        recompilation__succeeded = !(recompilation__succeeded);
#line 147 "recompilation.m"
                        if (recompilation__succeeded)
#line 147 "recompilation.m"
                          *recompilation__HeadVar__1_1 = recompilation__V_28_28;
#line 147 "recompilation.m"
                        else
#line 147 "recompilation.m"
                          {
#line 147 "recompilation.m"
                            MR_Word recompilation__V_29_29;

#line 147 "recompilation.m"
                            {
#line 147 "recompilation.m"
                              mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Cons_37, &recompilation__V_29_29, recompilation__V_9_9, recompilation__V_19_19);
                            }
#line 4282 "recompilation.c"
                            recompilation__succeeded = (recompilation__V_29_29 == (MR_Integer) 0);
#line 147 "recompilation.m"
                            recompilation__succeeded = !(recompilation__succeeded);
#line 147 "recompilation.m"
                            if (recompilation__succeeded)
#line 147 "recompilation.m"
                              *recompilation__HeadVar__1_1 = recompilation__V_29_29;
#line 147 "recompilation.m"
                            else
#line 147 "recompilation.m"
                              {
#line 147 "recompilation.m"
                                MR_Word recompilation__V_30_30;

#line 147 "recompilation.m"
                                {
#line 147 "recompilation.m"
                                  mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Set_36, &recompilation__V_30_30, recompilation__V_10_10, recompilation__V_20_20);
                                }
#line 4302 "recompilation.c"
                                recompilation__succeeded = (recompilation__V_30_30 == (MR_Integer) 0);
#line 147 "recompilation.m"
                                recompilation__succeeded = !(recompilation__succeeded);
#line 147 "recompilation.m"
                                if (recompilation__succeeded)
#line 147 "recompilation.m"
                                  *recompilation__HeadVar__1_1 = recompilation__V_30_30;
#line 147 "recompilation.m"
                                else
#line 147 "recompilation.m"
                                  {
#line 147 "recompilation.m"
                                    MR_Word recompilation__V_31_31;

#line 147 "recompilation.m"
                                    {
#line 147 "recompilation.m"
                                      mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Set_36, &recompilation__V_31_31, recompilation__V_11_11, recompilation__V_21_21);
                                    }
#line 4322 "recompilation.c"
                                    recompilation__succeeded = (recompilation__V_31_31 == (MR_Integer) 0);
#line 147 "recompilation.m"
                                    recompilation__succeeded = !(recompilation__succeeded);
#line 147 "recompilation.m"
                                    if (recompilation__succeeded)
#line 147 "recompilation.m"
                                      *recompilation__HeadVar__1_1 = recompilation__V_31_31;
#line 147 "recompilation.m"
                                    else
#line 147 "recompilation.m"
                                      {
#line 147 "recompilation.m"
                                        MR_Word recompilation__V_32_32;

#line 147 "recompilation.m"
                                        {
#line 147 "recompilation.m"
                                          mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Set_36, &recompilation__V_32_32, recompilation__V_12_12, recompilation__V_22_22);
                                        }
#line 4342 "recompilation.c"
                                        recompilation__succeeded = (recompilation__V_32_32 == (MR_Integer) 0);
#line 147 "recompilation.m"
                                        recompilation__succeeded = !(recompilation__succeeded);
#line 147 "recompilation.m"
                                        if (recompilation__succeeded)
#line 147 "recompilation.m"
                                          *recompilation__HeadVar__1_1 = recompilation__V_32_32;
#line 147 "recompilation.m"
                                        else
#line 147 "recompilation.m"
                                          {
#line 147 "recompilation.m"
                                            mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Set_36, recompilation__HeadVar__1_1, recompilation__V_13_13, recompilation__V_23_23);
                                          }
#line 147 "recompilation.m"
                                      }
#line 147 "recompilation.m"
                                  }
#line 147 "recompilation.m"
                              }
#line 147 "recompilation.m"
                          }
#line 147 "recompilation.m"
                      }
#line 147 "recompilation.m"
                  }
#line 147 "recompilation.m"
              }
#line 147 "recompilation.m"
          }
#line 147 "recompilation.m"
      }
#line 147 "recompilation.m"
  }
#line 147 "recompilation.m"
}

#line 147 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____item_id_set_3_0(
#line 147 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Map_25,
#line 147 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Set_26,
#line 147 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Cons_27,
#line 147 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 147 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 147 "recompilation.m"
{
#line 147 "recompilation.m"
  {
#line 147 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 147 "recompilation.m"
    MR_Integer recompilation__CastX_23 = (MR_Integer) recompilation__HeadVar__1_1;
#line 147 "recompilation.m"
    MR_Integer recompilation__CastY_24 = (MR_Integer) recompilation__HeadVar__2_2;

#line 147 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_23 == recompilation__CastY_24);
#line 147 "recompilation.m"
    if (recompilation__succeeded)
#line 147 "recompilation.m"
      recompilation__succeeded = MR_TRUE;
#line 147 "recompilation.m"
    else
#line 147 "recompilation.m"
      {
#line 147 "recompilation.m"
        MR_Box recompilation__V_3_3 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0));
#line 147 "recompilation.m"
        MR_Box recompilation__V_4_4 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1));
#line 147 "recompilation.m"
        MR_Box recompilation__V_5_5 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 2));
#line 147 "recompilation.m"
        MR_Box recompilation__V_6_6 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 3));
#line 147 "recompilation.m"
        MR_Box recompilation__V_7_7 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 4));
#line 147 "recompilation.m"
        MR_Box recompilation__V_8_8 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 5));
#line 147 "recompilation.m"
        MR_Box recompilation__V_9_9 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 6));
#line 147 "recompilation.m"
        MR_Box recompilation__V_10_10 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 7));
#line 147 "recompilation.m"
        MR_Box recompilation__V_11_11 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 8));
#line 147 "recompilation.m"
        MR_Box recompilation__V_12_12 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 9));
#line 147 "recompilation.m"
        MR_Box recompilation__V_13_13 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0));
#line 147 "recompilation.m"
        MR_Box recompilation__V_14_14 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1));
#line 147 "recompilation.m"
        MR_Box recompilation__V_15_15 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 2));
#line 147 "recompilation.m"
        MR_Box recompilation__V_16_16 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 3));
#line 147 "recompilation.m"
        MR_Box recompilation__V_17_17 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 4));
#line 147 "recompilation.m"
        MR_Box recompilation__V_18_18 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 5));
#line 147 "recompilation.m"
        MR_Box recompilation__V_19_19 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 6));
#line 147 "recompilation.m"
        MR_Box recompilation__V_20_20 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 7));
#line 147 "recompilation.m"
        MR_Box recompilation__V_21_21 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 8));
#line 147 "recompilation.m"
        MR_Box recompilation__V_22_22 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 9));

#line 4455 "recompilation.c"
        {
#line 4457 "recompilation.c"
          recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Map_25, recompilation__V_3_3, recompilation__V_13_13);
        }
#line 147 "recompilation.m"
        if (recompilation__succeeded)
#line 147 "recompilation.m"
          {
#line 4464 "recompilation.c"
            {
#line 4466 "recompilation.c"
              recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Map_25, recompilation__V_4_4, recompilation__V_14_14);
            }
#line 147 "recompilation.m"
            if (recompilation__succeeded)
#line 147 "recompilation.m"
              {
#line 4473 "recompilation.c"
                {
#line 4475 "recompilation.c"
                  recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Map_25, recompilation__V_5_5, recompilation__V_15_15);
                }
#line 147 "recompilation.m"
                if (recompilation__succeeded)
#line 147 "recompilation.m"
                  {
#line 4482 "recompilation.c"
                    {
#line 4484 "recompilation.c"
                      recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Map_25, recompilation__V_6_6, recompilation__V_16_16);
                    }
#line 147 "recompilation.m"
                    if (recompilation__succeeded)
#line 147 "recompilation.m"
                      {
#line 4491 "recompilation.c"
                        {
#line 4493 "recompilation.c"
                          recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Map_25, recompilation__V_7_7, recompilation__V_17_17);
                        }
#line 147 "recompilation.m"
                        if (recompilation__succeeded)
#line 147 "recompilation.m"
                          {
#line 4500 "recompilation.c"
                            {
#line 4502 "recompilation.c"
                              recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Cons_27, recompilation__V_8_8, recompilation__V_18_18);
                            }
#line 147 "recompilation.m"
                            if (recompilation__succeeded)
#line 147 "recompilation.m"
                              {
#line 4509 "recompilation.c"
                                {
#line 4511 "recompilation.c"
                                  recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Set_26, recompilation__V_9_9, recompilation__V_19_19);
                                }
#line 147 "recompilation.m"
                                if (recompilation__succeeded)
#line 147 "recompilation.m"
                                  {
#line 4518 "recompilation.c"
                                    {
#line 4520 "recompilation.c"
                                      recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Set_26, recompilation__V_10_10, recompilation__V_20_20);
                                    }
#line 147 "recompilation.m"
                                    if (recompilation__succeeded)
#line 147 "recompilation.m"
                                      {
#line 4527 "recompilation.c"
                                        {
#line 4529 "recompilation.c"
                                          recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Set_26, recompilation__V_11_11, recompilation__V_21_21);
                                        }
#line 147 "recompilation.m"
                                        if (recompilation__succeeded)
#line 4534 "recompilation.c"
                                          {
#line 4536 "recompilation.c"
                                            recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Set_26, recompilation__V_12_12, recompilation__V_22_22);
                                          }
#line 147 "recompilation.m"
                                      }
#line 147 "recompilation.m"
                                  }
#line 147 "recompilation.m"
                              }
#line 147 "recompilation.m"
                          }
#line 147 "recompilation.m"
                      }
#line 147 "recompilation.m"
                  }
#line 147 "recompilation.m"
              }
#line 147 "recompilation.m"
          }
#line 147 "recompilation.m"
      }
#line 147 "recompilation.m"
    return recompilation__succeeded;
#line 147 "recompilation.m"
  }
#line 147 "recompilation.m"
}

#line 161 "recompilation.m"
void MR_CALL 
recompilation____Compare____item_id_set_1_0(
#line 161 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_6,
#line 161 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 161 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 161 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 161 "recompilation.m"
{
#line 161 "recompilation.m"
  {
#line 161 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 161 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 161 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 161 "recompilation.m"
    {
#line 161 "recompilation.m"
      recompilation____Compare____item_id_set_3_0(recompilation__TypeInfo_for_T_6, recompilation__TypeInfo_for_T_6, recompilation__TypeInfo_for_T_6, recompilation__HeadVar__1_1, recompilation__Cast_HeadVar1_4, recompilation__Cast_HeadVar2_5);
    }
#line 161 "recompilation.m"
  }
#line 161 "recompilation.m"
}

#line 161 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____item_id_set_1_0(
#line 161 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_5,
#line 161 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 161 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 161 "recompilation.m"
{
#line 161 "recompilation.m"
  {
#line 161 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 161 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 161 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 161 "recompilation.m"
    {
#line 161 "recompilation.m"
      recompilation__succeeded = recompilation____Unify____item_id_set_3_0(recompilation__TypeInfo_for_T_5, recompilation__TypeInfo_for_T_5, recompilation__TypeInfo_for_T_5, recompilation__Cast_HeadVar1_3, recompilation__Cast_HeadVar2_4);
    }
#line 161 "recompilation.m"
    return recompilation__succeeded;
#line 161 "recompilation.m"
  }
#line 161 "recompilation.m"
}

#line 69 "recompilation.m"
void MR_CALL 
recompilation____Compare____item_id_0_0(
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
    MR_Integer recompilation__CastX_9 = (MR_Integer) recompilation__HeadVar__2_2;
#line 69 "recompilation.m"
    MR_Integer recompilation__CastY_10 = (MR_Integer) recompilation__HeadVar__3_3;

#line 69 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_9 == recompilation__CastY_10);
#line 69 "recompilation.m"
    if (recompilation__succeeded)
#line 4652 "recompilation.c"
      *recompilation__HeadVar__1_1 = (MR_Integer) 0;
#line 69 "recompilation.m"
    else
#line 69 "recompilation.m"
      {
#line 69 "recompilation.m"
        MR_Word recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
#line 69 "recompilation.m"
        MR_Word recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));
#line 69 "recompilation.m"
        MR_Word recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 0)));
#line 69 "recompilation.m"
        MR_Word recompilation__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 1)));
#line 69 "recompilation.m"
        MR_Word recompilation__V_8_8;
#line 69 "recompilation.m"
        MR_Integer recompilation__V_13_13 = (MR_Integer) recompilation__V_4_4;
#line 69 "recompilation.m"
        MR_Integer recompilation__V_14_14 = (MR_Integer) recompilation__V_6_6;

#line 69 "recompilation.m"
        {
#line 69 "recompilation.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&recompilation__V_8_8, recompilation__V_13_13, recompilation__V_14_14);
        }
#line 4678 "recompilation.c"
        recompilation__succeeded = (recompilation__V_8_8 == (MR_Integer) 0);
#line 69 "recompilation.m"
        recompilation__succeeded = !(recompilation__succeeded);
#line 69 "recompilation.m"
        if (recompilation__succeeded)
#line 69 "recompilation.m"
          *recompilation__HeadVar__1_1 = recompilation__V_8_8;
#line 69 "recompilation.m"
        else
#line 69 "recompilation.m"
          {
#line 69 "recompilation.m"
            recompilation____Compare____item_name_0_0(recompilation__HeadVar__1_1, recompilation__V_5_5, recompilation__V_7_7);
          }
#line 69 "recompilation.m"
      }
#line 69 "recompilation.m"
  }
#line 69 "recompilation.m"
}

#line 69 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____item_id_0_0(
#line 69 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 69 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 69 "recompilation.m"
{
#line 69 "recompilation.m"
  {
#line 69 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 69 "recompilation.m"
    MR_Integer recompilation__CastX_7 = (MR_Integer) recompilation__HeadVar__1_1;
#line 69 "recompilation.m"
    MR_Integer recompilation__CastY_8 = (MR_Integer) recompilation__HeadVar__2_2;

#line 69 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_7 == recompilation__CastY_8);
#line 69 "recompilation.m"
    if (recompilation__succeeded)
#line 69 "recompilation.m"
      recompilation__succeeded = MR_TRUE;
#line 69 "recompilation.m"
    else
#line 69 "recompilation.m"
      {
#line 69 "recompilation.m"
        MR_Word recompilation__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 69 "recompilation.m"
        MR_Word recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));
#line 69 "recompilation.m"
        MR_Word recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
#line 69 "recompilation.m"
        MR_Word recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));

#line 4737 "recompilation.c"
        recompilation__succeeded = (recompilation__V_3_3 == recompilation__V_5_5);
#line 69 "recompilation.m"
        if (recompilation__succeeded)
#line 4741 "recompilation.c"
          {
#line 4743 "recompilation.c"
            recompilation__succeeded = recompilation____Unify____item_name_0_0(recompilation__V_4_4, recompilation__V_6_6);
          }
#line 69 "recompilation.m"
      }
#line 69 "recompilation.m"
    return recompilation__succeeded;
#line 69 "recompilation.m"
  }
#line 69 "recompilation.m"
}

#line 236 "recompilation.m"
void MR_CALL 
recompilation____Compare____instance_version_numbers_0_0(
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
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[3], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
    }
#line 236 "recompilation.m"
  }
#line 236 "recompilation.m"
}

#line 236 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____instance_version_numbers_0_0(
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
      recompilation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation_scalar_common_2[3], ((MR_Box) (recompilation__Cast_HeadVar1_3)), ((MR_Box) (recompilation__Cast_HeadVar2_4)));
    }
#line 236 "recompilation.m"
    return recompilation__succeeded;
#line 236 "recompilation.m"
  }
#line 236 "recompilation.m"
}

#line 179 "recompilation.m"
void MR_CALL 
recompilation____Compare____functor_set_0_0(
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
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[2], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
    }
#line 179 "recompilation.m"
  }
#line 179 "recompilation.m"
}

#line 179 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____functor_set_0_0(
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
      recompilation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation_scalar_common_2[2], ((MR_Box) (recompilation__Cast_HeadVar1_3)), ((MR_Box) (recompilation__Cast_HeadVar2_4)));
    }
#line 179 "recompilation.m"
    return recompilation__succeeded;
#line 179 "recompilation.m"
  }
#line 179 "recompilation.m"
}

#line 276 "recompilation.m"
void MR_CALL 
recompilation____Compare____eqv_expanded_item_set_0_0(
#line 276 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 276 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 276 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 276 "recompilation.m"
{
#line 276 "recompilation.m"
  {
#line 276 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 276 "recompilation.m"
    MR_Integer recompilation__CastX_9 = (MR_Integer) recompilation__HeadVar__2_2;
#line 276 "recompilation.m"
    MR_Integer recompilation__CastY_10 = (MR_Integer) recompilation__HeadVar__3_3;

#line 276 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_9 == recompilation__CastY_10);
#line 276 "recompilation.m"
    if (recompilation__succeeded)
#line 4899 "recompilation.c"
      *recompilation__HeadVar__1_1 = (MR_Integer) 0;
#line 276 "recompilation.m"
    else
#line 276 "recompilation.m"
      {
#line 276 "recompilation.m"
        MR_Word recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
#line 276 "recompilation.m"
        MR_Word recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));
#line 276 "recompilation.m"
        MR_Word recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 0)));
#line 276 "recompilation.m"
        MR_Word recompilation__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 1)));
#line 276 "recompilation.m"
        MR_Word recompilation__V_8_8;

#line 276 "recompilation.m"
        {
#line 276 "recompilation.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&recompilation__V_8_8, recompilation__V_4_4, recompilation__V_6_6);
        }
#line 4921 "recompilation.c"
        recompilation__succeeded = (recompilation__V_8_8 == (MR_Integer) 0);
#line 276 "recompilation.m"
        recompilation__succeeded = !(recompilation__succeeded);
#line 276 "recompilation.m"
        if (recompilation__succeeded)
#line 276 "recompilation.m"
          *recompilation__HeadVar__1_1 = recompilation__V_8_8;
#line 276 "recompilation.m"
        else
#line 276 "recompilation.m"
          {
#line 276 "recompilation.m"
            {
#line 276 "recompilation.m"
              mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_1[0], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__V_5_5)), ((MR_Box) (recompilation__V_7_7)));
            }
#line 276 "recompilation.m"
          }
#line 276 "recompilation.m"
      }
#line 276 "recompilation.m"
  }
#line 276 "recompilation.m"
}

#line 276 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____eqv_expanded_item_set_0_0(
#line 276 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 276 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 276 "recompilation.m"
{
#line 276 "recompilation.m"
  {
#line 276 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 276 "recompilation.m"
    MR_Integer recompilation__CastX_7 = (MR_Integer) recompilation__HeadVar__1_1;
#line 276 "recompilation.m"
    MR_Integer recompilation__CastY_8 = (MR_Integer) recompilation__HeadVar__2_2;

#line 276 "recompilation.m"
    recompilation__succeeded = (recompilation__CastX_7 == recompilation__CastY_8);
#line 276 "recompilation.m"
    if (recompilation__succeeded)
#line 276 "recompilation.m"
      recompilation__succeeded = MR_TRUE;
#line 276 "recompilation.m"
    else
#line 276 "recompilation.m"
      {
#line 276 "recompilation.m"
        MR_Word recompilation__TypeInfo_10_10;
#line 276 "recompilation.m"
        MR_Word recompilation__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 276 "recompilation.m"
        MR_Word recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));
#line 276 "recompilation.m"
        MR_Word recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
#line 276 "recompilation.m"
        MR_Word recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));

#line 4986 "recompilation.c"
        {
#line 4988 "recompilation.c"
          recompilation__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__V_3_3, recompilation__V_5_5);
        }
#line 276 "recompilation.m"
        if (recompilation__succeeded)
#line 276 "recompilation.m"
          {
#line 4995 "recompilation.c"
            recompilation__TypeInfo_10_10 = (MR_Word) &recompilation_scalar_common_1[0];
#line 4997 "recompilation.c"
            {
#line 4999 "recompilation.c"
              recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_10_10, ((MR_Box) (recompilation__V_4_4)), ((MR_Box) (recompilation__V_6_6)));
            }
#line 276 "recompilation.m"
          }
#line 276 "recompilation.m"
      }
#line 276 "recompilation.m"
    return recompilation__succeeded;
#line 276 "recompilation.m"
  }
#line 276 "recompilation.m"
}

#line 275 "recompilation.m"
void MR_CALL 
recompilation____Compare____eqv_expanded_info_0_0(
#line 275 "recompilation.m"
  MR_Word * recompilation__HeadVar__1_1,
#line 275 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 275 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3)
#line 275 "recompilation.m"
{
#line 275 "recompilation.m"
  {
#line 275 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 275 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
#line 275 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

#line 275 "recompilation.m"
    {
#line 275 "recompilation.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_1[1], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
    }
#line 275 "recompilation.m"
  }
#line 275 "recompilation.m"
}

#line 275 "recompilation.m"
MR_bool MR_CALL 
recompilation____Unify____eqv_expanded_info_0_0(
#line 275 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 275 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 275 "recompilation.m"
{
#line 275 "recompilation.m"
  {
#line 275 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 275 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
#line 275 "recompilation.m"
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

#line 275 "recompilation.m"
    {
#line 275 "recompilation.m"
      recompilation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation_scalar_common_1[1], ((MR_Box) (recompilation__Cast_HeadVar1_3)), ((MR_Box) (recompilation__Cast_HeadVar2_4)));
    }
#line 275 "recompilation.m"
    return recompilation__succeeded;
#line 275 "recompilation.m"
  }
#line 275 "recompilation.m"
}

#line 528 "recompilation.m"
void MR_CALL 
recompilation__record_expanded_item_2_3_p_0(
#line 528 "recompilation.m"
  MR_Word recompilation__ItemId_4,
#line 528 "recompilation.m"
  MR_Word recompilation__ExpandedItemSet0_5,
#line 528 "recompilation.m"
  MR_Word * recompilation__ExpandedItemSet_6)
#line 528 "recompilation.m"
{
#line 531 "recompilation.m"
  {
#line 531 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 531 "recompilation.m"
    MR_Word recompilation__ModuleName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__ExpandedItemSet0_5, (MR_Integer) 0)));
#line 531 "recompilation.m"
    MR_Word recompilation__Items0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__ExpandedItemSet0_5, (MR_Integer) 1)));
#line 531 "recompilation.m"
    MR_Word recompilation__ItemName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__ItemId_4, (MR_Integer) 1)));
#line 533 "recompilation.m"
    MR_Word recompilation__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__ItemId_4, (MR_Integer) 0)));
#line 534 "recompilation.m"
    MR_Word recompilation__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__ItemName_10, (MR_Integer) 0)));
#line 534 "recompilation.m"
    MR_Word recompilation__V_16_16;
#line 534 "recompilation.m"
    MR_Integer recompilation__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__ItemName_10, (MR_Integer) 1)));
#line 534 "recompilation.m"
    MR_String recompilation__V_11_11;

#line 534 "recompilation.m"
    recompilation__succeeded = ((MR_tag((MR_Word) recompilation__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 534 "recompilation.m"
    if (recompilation__succeeded)
#line 534 "recompilation.m"
      {
#line 534 "recompilation.m"
        recompilation__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__V_14_14, (MR_Integer) 0)));
#line 534 "recompilation.m"
        recompilation__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__V_14_14, (MR_Integer) 1)));
#line 534 "recompilation.m"
        {
#line 534 "recompilation.m"
          recompilation__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__ModuleName_7, recompilation__V_16_16);
        }
#line 534 "recompilation.m"
      }
#line 534 "recompilation.m"
    if (recompilation__succeeded)
#line 536 "recompilation.m"
      *recompilation__ExpandedItemSet_6 = recompilation__ExpandedItemSet0_5;
#line 534 "recompilation.m"
    else
#line 538 "recompilation.m"
      {
#line 538 "recompilation.m"
        MR_Word recompilation__Items_13;

#line 538 "recompilation.m"
        {
#line 538 "recompilation.m"
          mercury__set__insert_3_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, ((MR_Box) (recompilation__ItemId_4)), recompilation__Items0_8, &recompilation__Items_13);
        }
#line 539 "recompilation.m"
        {
#line 539 "recompilation.m"
          MR_Word base;
#line 539 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 539 "recompilation.m"
          *recompilation__ExpandedItemSet_6 = base;
#line 539 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__ModuleName_7));
#line 539 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__Items_13));
#line 539 "recompilation.m"
        }
#line 538 "recompilation.m"
      }
#line 531 "recompilation.m"
  }
#line 528 "recompilation.m"
}

#line 291 "recompilation.m"
void MR_CALL 
recompilation__finish_recording_expanded_items_4_p_0(
#line 291 "recompilation.m"
  MR_Word recompilation__Item_1,
#line 291 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2,
#line 291 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3,
#line 291 "recompilation.m"
  MR_Word * recompilation__HeadVar__4_4)
#line 291 "recompilation.m"
{
#line 542 "recompilation.m"
  {
#line 542 "recompilation.m"
    MR_bool recompilation__succeeded;

#line 542 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 542 "recompilation.m"
      if ((recompilation__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 542 "recompilation.m"
        *recompilation__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 542 "recompilation.m"
      else
#line 543 "recompilation.m"
        *recompilation__HeadVar__4_4 = recompilation__HeadVar__3_3;
#line 542 "recompilation.m"
    else
#line 542 "recompilation.m"
      {
#line 542 "recompilation.m"
        MR_Word recompilation__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__HeadVar__2_2, (MR_Integer) 0)));

#line 542 "recompilation.m"
        if ((recompilation__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 544 "recompilation.m"
          {
#line 545 "recompilation.m"
            {
#line 545 "recompilation.m"
              mercury__require__unexpected_3_p_0((MR_String) "recompilation", (MR_String) "predicate \140recompilation.finish_recording_expanded_items\'/4", (MR_String) "items but no info");
#line 545 "recompilation.m"
              return;
            }
#line 544 "recompilation.m"
          }
#line 542 "recompilation.m"
        else
#line 547 "recompilation.m"
          {
#line 547 "recompilation.m"
            MR_Word recompilation__ExpandedItems_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__V_20_20, (MR_Integer) 1)));
#line 547 "recompilation.m"
            MR_Word recompilation__Info0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__HeadVar__3_3, (MR_Integer) 0)));
#line 547 "recompilation.m"
            MR_Word recompilation__Info_18;
#line 547 "recompilation.m"
            MR_Word recompilation__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__V_20_20, (MR_Integer) 0)));

#line 548 "recompilation.m"
            {
#line 548 "recompilation.m"
              recompilation__record_expanded_items_4_p_0(recompilation__Item_1, recompilation__ExpandedItems_16, recompilation__Info0_17, &recompilation__Info_18);
            }
#line 547 "recompilation.m"
            {
#line 547 "recompilation.m"
              MR_Word base;
#line 547 "recompilation.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 547 "recompilation.m"
              *recompilation__HeadVar__4_4 = base;
#line 547 "recompilation.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__Info_18));
#line 547 "recompilation.m"
            }
#line 547 "recompilation.m"
          }
#line 542 "recompilation.m"
      }
#line 542 "recompilation.m"
  }
#line 291 "recompilation.m"
}

#line 526 "recompilation.m"
static void MR_CALL 
recompilation__record_expanded_item_3_p_0_1(
#line 526 "recompilation.m"
  MR_Box recompilation__closure_arg,
#line 526 "recompilation.m"
  MR_Box recompilation__wrapper_arg_1,
#line 526 "recompilation.m"
  MR_Box * recompilation__wrapper_arg_2)
#line 526 "recompilation.m"
{
#line 526 "recompilation.m"
  {
#line 526 "recompilation.m"
    MR_Box recompilation__closure = recompilation__closure_arg;
#line 526 "recompilation.m"
    MR_Word recompilation__conv0_ExpandedItemSet_6;

#line 526 "recompilation.m"
    {
#line 526 "recompilation.m"
      recompilation__record_expanded_item_2_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__closure, (MR_Integer) 3))), ((MR_Word) recompilation__wrapper_arg_1), &recompilation__conv0_ExpandedItemSet_6);
    }
#line 526 "recompilation.m"
    *recompilation__wrapper_arg_2 = ((MR_Box) (recompilation__conv0_ExpandedItemSet_6));
#line 526 "recompilation.m"
  }
#line 526 "recompilation.m"
}

#line 286 "recompilation.m"
void MR_CALL 
recompilation__record_expanded_item_3_p_0(
#line 286 "recompilation.m"
  MR_Word recompilation__Item_4,
#line 286 "recompilation.m"
  MR_Word recompilation__STATE_VARIABLE_EquivTypeInfo_0_6,
#line 286 "recompilation.m"
  MR_Word * recompilation__STATE_VARIABLE_EquivTypeInfo_7)
#line 286 "recompilation.m"
{
#line 525 "recompilation.m"
  {
#line 525 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 525 "recompilation.m"
    MR_Word recompilation__TypeCtorInfo_12_12;
#line 525 "recompilation.m"
    MR_Word recompilation__V_8_8;

#line 526 "recompilation.m"
    {
#line 526 "recompilation.m"
      recompilation__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 526 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_8_8, 0) = ((MR_Box) (&recompilation_scalar_common_9[0]));
#line 526 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_8_8, 1) = ((MR_Box) (recompilation__record_expanded_item_3_p_0_1));
#line 526 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 526 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_8_8, 3) = ((MR_Box) (recompilation__Item_4));
#line 526 "recompilation.m"
    }
#line 5310 "recompilation.c"
    recompilation__TypeCtorInfo_12_12 = (MR_Word) &recompilation__recompilation__type_ctor_info_eqv_expanded_item_set_0;
#line 526 "recompilation.m"
    {
#line 526 "recompilation.m"
      mercury__maybe__map_maybe_3_p_0(recompilation__TypeCtorInfo_12_12, recompilation__TypeCtorInfo_12_12, recompilation__V_8_8, recompilation__STATE_VARIABLE_EquivTypeInfo_0_6, recompilation__STATE_VARIABLE_EquivTypeInfo_7);
    }
#line 525 "recompilation.m"
  }
#line 286 "recompilation.m"
}

#line 283 "recompilation.m"
void MR_CALL 
recompilation__maybe_start_recording_expanded_items_4_p_0(
#line 283 "recompilation.m"
  MR_Word recompilation__ModuleName_1,
#line 283 "recompilation.m"
  MR_Word recompilation__SymName_2,
#line 283 "recompilation.m"
  MR_Word recompilation__HeadVar__3_3,
#line 283 "recompilation.m"
  MR_Word * recompilation__HeadVar__4_4)
#line 283 "recompilation.m"
{
#line 517 "recompilation.m"
  {
#line 517 "recompilation.m"
    MR_bool recompilation__succeeded;

#line 517 "recompilation.m"
    if ((recompilation__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 517 "recompilation.m"
      *recompilation__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 517 "recompilation.m"
    else
#line 519 "recompilation.m"
      {
#line 519 "recompilation.m"
        MR_Word recompilation__V_15_15;
#line 519 "recompilation.m"
        MR_String recompilation__V_11_11;

#line 519 "recompilation.m"
        recompilation__succeeded = ((MR_tag((MR_Word) recompilation__SymName_2)) == (MR_mktag((MR_Integer) 1)));
#line 519 "recompilation.m"
        if (recompilation__succeeded)
#line 519 "recompilation.m"
          {
#line 519 "recompilation.m"
            recompilation__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__SymName_2, (MR_Integer) 0)));
#line 519 "recompilation.m"
            recompilation__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__SymName_2, (MR_Integer) 1)));
#line 519 "recompilation.m"
            {
#line 519 "recompilation.m"
              recompilation__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__ModuleName_1, recompilation__V_15_15);
            }
#line 519 "recompilation.m"
          }
#line 519 "recompilation.m"
        if (recompilation__succeeded)
#line 520 "recompilation.m"
          *recompilation__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 519 "recompilation.m"
        else
#line 522 "recompilation.m"
          {
#line 522 "recompilation.m"
            MR_Word recompilation__V_12_12;
#line 522 "recompilation.m"
            MR_Word recompilation__V_13_13;

#line 522 "recompilation.m"
            {
#line 522 "recompilation.m"
              recompilation__V_13_13 = mercury__set__init_0_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0);
            }
#line 522 "recompilation.m"
            {
#line 522 "recompilation.m"
              recompilation__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 522 "recompilation.m"
              MR_hl_field(MR_mktag(0), recompilation__V_12_12, 0) = ((MR_Box) (recompilation__ModuleName_1));
#line 522 "recompilation.m"
              MR_hl_field(MR_mktag(0), recompilation__V_12_12, 1) = ((MR_Box) (recompilation__V_13_13));
#line 522 "recompilation.m"
            }
#line 522 "recompilation.m"
            {
#line 522 "recompilation.m"
              MR_Word base;
#line 522 "recompilation.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 522 "recompilation.m"
              *recompilation__HeadVar__4_4 = base;
#line 522 "recompilation.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__V_12_12));
#line 522 "recompilation.m"
            }
#line 522 "recompilation.m"
          }
#line 519 "recompilation.m"
      }
#line 517 "recompilation.m"
  }
#line 283 "recompilation.m"
}

#line 270 "recompilation.m"
void MR_CALL 
recompilation__record_expanded_items_4_p_0(
#line 270 "recompilation.m"
  MR_Word recompilation__Item_5,
#line 270 "recompilation.m"
  MR_Word recompilation__ExpandedItems_6,
#line 270 "recompilation.m"
  MR_Word recompilation__STATE_VARIABLE_Info_0_13,
#line 270 "recompilation.m"
  MR_Word * recompilation__STATE_VARIABLE_Info_14)
#line 270 "recompilation.m"
{
#line 501 "recompilation.m"
  {
#line 501 "recompilation.m"
    MR_bool recompilation__succeeded;

#line 501 "recompilation.m"
    {
#line 501 "recompilation.m"
      recompilation__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, recompilation__ExpandedItems_6);
    }
#line 501 "recompilation.m"
    if (recompilation__succeeded)
#line 501 "recompilation.m"
      *recompilation__STATE_VARIABLE_Info_14 = recompilation__STATE_VARIABLE_Info_0_13;
#line 501 "recompilation.m"
    else
#line 504 "recompilation.m"
      {
#line 504 "recompilation.m"
        MR_Word recompilation__TypeCtorInfo_27_27;
#line 504 "recompilation.m"
        MR_Word recompilation__DepsMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 504 "recompilation.m"
        MR_Word recompilation__Deps1_10;
#line 504 "recompilation.m"
        MR_Word recompilation__Deps_11;
#line 504 "recompilation.m"
        MR_Word recompilation__DepsMap_12;
#line 504 "recompilation.m"
        MR_Word recompilation__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 504 "recompilation.m"
        MR_Word recompilation__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 504 "recompilation.m"
        MR_Word recompilation__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 505 "recompilation.m"
        MR_Word recompilation__Deps0_9;
#line 505 "recompilation.m"
        MR_Box recompilation__conv0_Deps0_9;
#line 512 "recompilation.m"
        MR_Word recompilation__V_19_19;
#line 512 "recompilation.m"
        MR_Word recompilation__V_20_20;
#line 512 "recompilation.m"
        MR_Word recompilation__V_22_22;
#line 512 "recompilation.m"
        MR_Word recompilation__V_21_21;

#line 505 "recompilation.m"
        {
#line 505 "recompilation.m"
          recompilation__succeeded = mercury__map__search_3_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, (MR_Word) &recompilation_scalar_common_1[0], recompilation__DepsMap0_8, ((MR_Box) (recompilation__Item_5)), &recompilation__conv0_Deps0_9);
        }
#line 505 "recompilation.m"
        if (recompilation__succeeded)
#line 505 "recompilation.m"
          {
#line 505 "recompilation.m"
            recompilation__Deps0_9 = ((MR_Word) recompilation__conv0_Deps0_9);
#line 505 "recompilation.m"
            recompilation__succeeded = MR_TRUE;
#line 505 "recompilation.m"
          }
#line 505 "recompilation.m"
        if (recompilation__succeeded)
#line 506 "recompilation.m"
          recompilation__Deps1_10 = recompilation__Deps0_9;
#line 505 "recompilation.m"
        else
#line 508 "recompilation.m"
          {
#line 508 "recompilation.m"
            {
#line 508 "recompilation.m"
              mercury__set__init_1_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, &recompilation__Deps1_10);
            }
#line 508 "recompilation.m"
          }
#line 5509 "recompilation.c"
        recompilation__TypeCtorInfo_27_27 = (MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0;
#line 510 "recompilation.m"
        {
#line 510 "recompilation.m"
          mercury__set__union_3_p_0(recompilation__TypeCtorInfo_27_27, recompilation__Deps1_10, recompilation__ExpandedItems_6, &recompilation__Deps_11);
        }
#line 511 "recompilation.m"
        {
#line 511 "recompilation.m"
          mercury__map__set_4_p_0(recompilation__TypeCtorInfo_27_27, (MR_Word) &recompilation_scalar_common_1[0], ((MR_Box) (recompilation__Item_5)), ((MR_Box) (recompilation__Deps_11)), recompilation__DepsMap0_8, &recompilation__DepsMap_12);
        }
#line 512 "recompilation.m"
        recompilation__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 512 "recompilation.m"
        recompilation__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 512 "recompilation.m"
        recompilation__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 512 "recompilation.m"
        recompilation__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 512 "recompilation.m"
        {
#line 512 "recompilation.m"
          MR_Word base;
#line 512 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 512 "recompilation.m"
          *recompilation__STATE_VARIABLE_Info_14 = base;
#line 512 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__V_19_19));
#line 512 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__V_20_20));
#line 512 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recompilation__DepsMap_12));
#line 512 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (recompilation__V_22_22));
#line 512 "recompilation.m"
        }
#line 504 "recompilation.m"
      }
#line 501 "recompilation.m"
  }
#line 270 "recompilation.m"
}

#line 256 "recompilation.m"
void MR_CALL 
recompilation__record_used_item_5_p_0(
#line 256 "recompilation.m"
  MR_Word recompilation__ItemType_6,
#line 256 "recompilation.m"
  MR_Word recompilation__Id_7,
#line 256 "recompilation.m"
  MR_Word recompilation__QualifiedId_8,
#line 256 "recompilation.m"
  MR_Word recompilation__STATE_VARIABLE_Info_0_26,
#line 256 "recompilation.m"
  MR_Word * recompilation__STATE_VARIABLE_Info_27)
#line 256 "recompilation.m"
{
#line 464 "recompilation.m"
  {
#line 464 "recompilation.m"
    MR_bool recompilation__succeeded = (recompilation__ItemType_6 == (MR_Integer) 6);
#line 464 "recompilation.m"
    MR_Word recompilation__QualifiedName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__QualifiedId_8, (MR_Integer) 0)));
#line 464 "recompilation.m"
    MR_Integer recompilation__Arity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__QualifiedId_8, (MR_Integer) 1)));
#line 473 "recompilation.m"
    MR_String recompilation__V_12_12;

#line 470 "recompilation.m"
    recompilation__succeeded = !(recompilation__succeeded);
#line 470 "recompilation.m"
    if (recompilation__succeeded)
#line 470 "recompilation.m"
      {
#line 471 "recompilation.m"
        recompilation__succeeded = (recompilation__ItemType_6 == (MR_Integer) 7);
#line 471 "recompilation.m"
        recompilation__succeeded = !(recompilation__succeeded);
#line 470 "recompilation.m"
        if (recompilation__succeeded)
#line 470 "recompilation.m"
          {
#line 472 "recompilation.m"
            recompilation__succeeded = (recompilation__ItemType_6 == (MR_Integer) 5);
#line 472 "recompilation.m"
            recompilation__succeeded = !(recompilation__succeeded);
#line 470 "recompilation.m"
            if (recompilation__succeeded)
#line 470 "recompilation.m"
              {
#line 473 "recompilation.m"
                recompilation__succeeded = ((MR_tag((MR_Word) recompilation__QualifiedName_10)) == (MR_mktag((MR_Integer) 0)));
#line 473 "recompilation.m"
                if (recompilation__succeeded)
#line 473 "recompilation.m"
                  recompilation__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__QualifiedName_10, (MR_Integer) 0)));
#line 470 "recompilation.m"
              }
#line 470 "recompilation.m"
          }
#line 470 "recompilation.m"
      }
#line 466 "recompilation.m"
    if (recompilation__succeeded)
#line 466 "recompilation.m"
      *recompilation__STATE_VARIABLE_Info_27 = recompilation__STATE_VARIABLE_Info_0_26;
#line 466 "recompilation.m"
    else
#line 477 "recompilation.m"
      {
#line 477 "recompilation.m"
        MR_Word recompilation__TypeInfo_36_36 = (MR_Word) &recompilation_scalar_common_2[2];
#line 477 "recompilation.m"
        MR_Word recompilation__ItemSet0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 1)));
#line 477 "recompilation.m"
        MR_Word recompilation__IdSet0_14;
#line 477 "recompilation.m"
        MR_String recompilation__UnqualifiedName_15;
#line 477 "recompilation.m"
        MR_Word recompilation__ModuleName_16;
#line 477 "recompilation.m"
        MR_Word recompilation__UnqualifiedId_17;
#line 477 "recompilation.m"
        MR_Word recompilation__SymName_18;
#line 477 "recompilation.m"
        MR_Word recompilation__ModuleQualifier_20;
#line 477 "recompilation.m"
        MR_Word recompilation__MatchingNames1_22;
#line 477 "recompilation.m"
        MR_Word recompilation__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 0)));
#line 477 "recompilation.m"
        MR_Word recompilation__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 2)));
#line 477 "recompilation.m"
        MR_Word recompilation__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 3)));
#line 478 "recompilation.m"
        MR_Box recompilation__conv0_IdSet0_14;
#line 482 "recompilation.m"
        MR_Integer recompilation__V_19_19;
#line 484 "recompilation.m"
        MR_Word recompilation__MatchingNames0_21;
#line 484 "recompilation.m"
        MR_Box recompilation__conv1_MatchingNames0_21;
#line 489 "recompilation.m"
        MR_Word recompilation__TypeCtorInfo_40_40;

#line 478 "recompilation.m"
        {
#line 478 "recompilation.m"
          recompilation__conv0_IdSet0_14 = recompilation__extract_ids_2_f_0(recompilation__TypeInfo_36_36, recompilation__ItemSet0_13, recompilation__ItemType_6);
        }
#line 478 "recompilation.m"
        recompilation__IdSet0_14 = ((MR_Word) recompilation__conv0_IdSet0_14);
#line 479 "recompilation.m"
        {
#line 479 "recompilation.m"
          recompilation__UnqualifiedName_15 = mdbcomp__sym_name__unqualify_name_1_f_0(recompilation__QualifiedName_10);
        }
#line 444 "recompilation.m"
        if (((MR_tag((MR_Word) recompilation__QualifiedName_10)) == (MR_mktag((MR_Integer) 1))))
#line 445 "recompilation.m"
          {
#line 445 "recompilation.m"
            MR_String recompilation__V_47_47;

#line 445 "recompilation.m"
            recompilation__ModuleName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__QualifiedName_10, (MR_Integer) 0)));
#line 445 "recompilation.m"
            recompilation__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__QualifiedName_10, (MR_Integer) 1)));
#line 445 "recompilation.m"
          }
#line 444 "recompilation.m"
        else
#line 444 "recompilation.m"
          {
#line 444 "recompilation.m"
            recompilation__ModuleName_16 = (MR_Word) &recompilation_scalar_common_8[0];
#line 444 "recompilation.m"
          }
#line 481 "recompilation.m"
        {
#line 481 "recompilation.m"
          recompilation__UnqualifiedId_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 481 "recompilation.m"
          MR_hl_field(MR_mktag(0), recompilation__UnqualifiedId_17, 0) = ((MR_Box) (recompilation__UnqualifiedName_15));
#line 481 "recompilation.m"
          MR_hl_field(MR_mktag(0), recompilation__UnqualifiedId_17, 1) = ((MR_Box) (recompilation__Arity_11));
#line 481 "recompilation.m"
        }
#line 482 "recompilation.m"
        recompilation__SymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__Id_7, (MR_Integer) 0)));
#line 482 "recompilation.m"
        recompilation__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__Id_7, (MR_Integer) 1)));
#line 444 "recompilation.m"
        if (((MR_tag((MR_Word) recompilation__SymName_18)) == (MR_mktag((MR_Integer) 1))))
#line 445 "recompilation.m"
          {
#line 445 "recompilation.m"
            MR_String recompilation__V_51_51;

#line 445 "recompilation.m"
            recompilation__ModuleQualifier_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__SymName_18, (MR_Integer) 0)));
#line 445 "recompilation.m"
            recompilation__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__SymName_18, (MR_Integer) 1)));
#line 445 "recompilation.m"
          }
#line 444 "recompilation.m"
        else
#line 444 "recompilation.m"
          {
#line 444 "recompilation.m"
            recompilation__ModuleQualifier_20 = (MR_Word) &recompilation_scalar_common_8[0];
#line 444 "recompilation.m"
          }
#line 484 "recompilation.m"
        {
#line 484 "recompilation.m"
          recompilation__succeeded = mercury__map__search_3_p_0((MR_Word) &recompilation_scalar_common_2[0], (MR_Word) &recompilation_scalar_common_2[1], recompilation__IdSet0_14, ((MR_Box) (recompilation__UnqualifiedId_17)), &recompilation__conv1_MatchingNames0_21);
        }
#line 484 "recompilation.m"
        if (recompilation__succeeded)
#line 484 "recompilation.m"
          {
#line 484 "recompilation.m"
            recompilation__MatchingNames0_21 = ((MR_Word) recompilation__conv1_MatchingNames0_21);
#line 484 "recompilation.m"
            recompilation__succeeded = MR_TRUE;
#line 484 "recompilation.m"
          }
#line 484 "recompilation.m"
        if (recompilation__succeeded)
#line 485 "recompilation.m"
          recompilation__MatchingNames1_22 = recompilation__MatchingNames0_21;
#line 484 "recompilation.m"
        else
#line 487 "recompilation.m"
          {
#line 487 "recompilation.m"
            MR_Word recompilation__TypeCtorInfo_39_39 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 487 "recompilation.m"
            {
#line 487 "recompilation.m"
              mercury__map__init_1_p_0(recompilation__TypeCtorInfo_39_39, recompilation__TypeCtorInfo_39_39, &recompilation__MatchingNames1_22);
            }
#line 487 "recompilation.m"
          }
#line 5758 "recompilation.c"
        recompilation__TypeCtorInfo_40_40 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 489 "recompilation.m"
        {
#line 489 "recompilation.m"
          recompilation__succeeded = mercury__map__contains_2_p_0(recompilation__TypeCtorInfo_40_40, recompilation__TypeCtorInfo_40_40, recompilation__MatchingNames1_22, ((MR_Box) (recompilation__ModuleQualifier_20)));
        }
#line 489 "recompilation.m"
        if (recompilation__succeeded)
#line 489 "recompilation.m"
          *recompilation__STATE_VARIABLE_Info_27 = recompilation__STATE_VARIABLE_Info_0_26;
#line 489 "recompilation.m"
        else
#line 493 "recompilation.m"
          {
#line 493 "recompilation.m"
            MR_Word recompilation__TypeCtorInfo_41_41 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 493 "recompilation.m"
            MR_Word recompilation__MatchingNames_23;
#line 493 "recompilation.m"
            MR_Word recompilation__IdSet_24;
#line 493 "recompilation.m"
            MR_Word recompilation__ItemSet_25;
#line 496 "recompilation.m"
            MR_Word recompilation__V_32_32;
#line 496 "recompilation.m"
            MR_Word recompilation__V_34_34;
#line 496 "recompilation.m"
            MR_Word recompilation__V_35_35;
#line 496 "recompilation.m"
            MR_Word recompilation__V_33_33;

#line 492 "recompilation.m"
            {
#line 492 "recompilation.m"
              mercury__map__det_insert_4_p_0(recompilation__TypeCtorInfo_41_41, recompilation__TypeCtorInfo_41_41, ((MR_Box) (recompilation__ModuleQualifier_20)), ((MR_Box) (recompilation__ModuleName_16)), recompilation__MatchingNames1_22, &recompilation__MatchingNames_23);
            }
#line 494 "recompilation.m"
            {
#line 494 "recompilation.m"
              mercury__map__set_4_p_0((MR_Word) &recompilation_scalar_common_2[0], (MR_Word) &recompilation_scalar_common_2[1], ((MR_Box) (recompilation__UnqualifiedId_17)), ((MR_Box) (recompilation__MatchingNames_23)), recompilation__IdSet0_14, &recompilation__IdSet_24);
            }
#line 495 "recompilation.m"
            {
#line 495 "recompilation.m"
              recompilation__update_ids_4_p_0(recompilation__TypeInfo_36_36, recompilation__ItemType_6, ((MR_Box) (recompilation__IdSet_24)), recompilation__ItemSet0_13, &recompilation__ItemSet_25);
            }
#line 496 "recompilation.m"
            recompilation__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 0)));
#line 496 "recompilation.m"
            recompilation__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 1)));
#line 496 "recompilation.m"
            recompilation__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 2)));
#line 496 "recompilation.m"
            recompilation__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 3)));
#line 496 "recompilation.m"
            {
#line 496 "recompilation.m"
              MR_Word base;
#line 496 "recompilation.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 496 "recompilation.m"
              *recompilation__STATE_VARIABLE_Info_27 = base;
#line 496 "recompilation.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__V_32_32));
#line 496 "recompilation.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__ItemSet_25));
#line 496 "recompilation.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recompilation__V_34_34));
#line 496 "recompilation.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (recompilation__V_35_35));
#line 496 "recompilation.m"
            }
#line 493 "recompilation.m"
          }
#line 477 "recompilation.m"
      }
#line 464 "recompilation.m"
  }
#line 256 "recompilation.m"
}

#line 245 "recompilation.m"
MR_Word MR_CALL 
recompilation__module_qualify_name_2_f_0(
#line 245 "recompilation.m"
  MR_Word recompilation__Qualifier_4,
#line 245 "recompilation.m"
  MR_String recompilation__Name_5)
#line 245 "recompilation.m"
{
#line 447 "recompilation.m"
  {
#line 447 "recompilation.m"
    MR_bool recompilation__succeeded = ((MR_tag((MR_Word) recompilation__Qualifier_4)) == (MR_mktag((MR_Integer) 0)));
#line 447 "recompilation.m"
    MR_Word recompilation__HeadVar__3_3;
#line 448 "recompilation.m"
    MR_String recompilation__V_6_6;

#line 448 "recompilation.m"
    if (recompilation__succeeded)
#line 448 "recompilation.m"
      {
#line 448 "recompilation.m"
        recompilation__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__Qualifier_4, (MR_Integer) 0)));
#line 448 "recompilation.m"
        recompilation__succeeded = (strcmp(recompilation__V_6_6, (MR_String) "") == 0);
#line 448 "recompilation.m"
      }
#line 447 "recompilation.m"
    if (recompilation__succeeded)
#line 449 "recompilation.m"
      {
#line 449 "recompilation.m"
        recompilation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 449 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, 0) = ((MR_Box) (recompilation__Name_5));
#line 449 "recompilation.m"
      }
#line 447 "recompilation.m"
    else
#line 451 "recompilation.m"
      {
#line 451 "recompilation.m"
        recompilation__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 451 "recompilation.m"
        MR_hl_field(MR_mktag(1), recompilation__HeadVar__3_3, 0) = ((MR_Box) (recompilation__Qualifier_4));
#line 451 "recompilation.m"
        MR_hl_field(MR_mktag(1), recompilation__HeadVar__3_3, 1) = ((MR_Box) (recompilation__Name_5));
#line 451 "recompilation.m"
      }
#line 447 "recompilation.m"
    return recompilation__HeadVar__3_3;
#line 447 "recompilation.m"
  }
#line 245 "recompilation.m"
}

#line 243 "recompilation.m"
MR_Word MR_CALL 
recompilation__find_module_qualifier_1_f_0(
#line 243 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 243 "recompilation.m"
{
#line 444 "recompilation.m"
  {
#line 444 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 444 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;

#line 444 "recompilation.m"
    if (((MR_tag((MR_Word) recompilation__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 445 "recompilation.m"
      {
#line 445 "recompilation.m"
        MR_String recompilation__V_6_6;

#line 445 "recompilation.m"
        recompilation__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 445 "recompilation.m"
        recompilation__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__HeadVar__1_1, (MR_Integer) 1)));
#line 445 "recompilation.m"
      }
#line 444 "recompilation.m"
    else
#line 444 "recompilation.m"
      {
#line 444 "recompilation.m"
        recompilation__HeadVar__2_2 = (MR_Word) &recompilation_scalar_common_8[0];
#line 444 "recompilation.m"
      }
#line 444 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 444 "recompilation.m"
  }
#line 243 "recompilation.m"
}

#line 433 "recompilation.m"
static MR_Box MR_CALL 
recompilation__map_ids_3_f_0_1(
#line 433 "recompilation.m"
  MR_Box recompilation__closure_arg,
#line 433 "recompilation.m"
  MR_Box recompilation__wrapper_arg_1,
#line 433 "recompilation.m"
  MR_Box recompilation__wrapper_arg_2)
#line 433 "recompilation.m"
{
#line 433 "recompilation.m"
  {
#line 433 "recompilation.m"
    MR_Box recompilation__wrapper_arg_3;
#line 433 "recompilation.m"
    MR_Box recompilation__closure = recompilation__closure_arg;
#line 433 "recompilation.m"
    MR_Word recompilation__conv0_LambdaHeadVar__3_16;

#line 433 "recompilation.m"
    {
#line 433 "recompilation.m"
      recompilation__conv0_LambdaHeadVar__3_16 = recompilation__IntroducedFrom__func__map_ids__433__1_6_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__closure, (MR_Integer) 6))), ((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 433 "recompilation.m"
    recompilation__wrapper_arg_3 = ((MR_Box) (recompilation__conv0_LambdaHeadVar__3_16));
#line 433 "recompilation.m"
    return recompilation__wrapper_arg_3;
#line 433 "recompilation.m"
  }
#line 433 "recompilation.m"
}

#line 215 "recompilation.m"
MR_Word MR_CALL 
recompilation__map_ids_3_f_0(
#line 215 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_38,
#line 215 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_U_39,
#line 215 "recompilation.m"
  MR_Word recompilation__Func_5,
#line 215 "recompilation.m"
  MR_Word recompilation__Items0_6,
#line 215 "recompilation.m"
  MR_Box recompilation__Init_7)
#line 215 "recompilation.m"
{
#line 427 "recompilation.m"
  {
#line 427 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 427 "recompilation.m"
    MR_Word recompilation__Items_8;
#line 427 "recompilation.m"
    MR_Word recompilation__TypeInfo_42_42;
#line 427 "recompilation.m"
    MR_Word recompilation__Items1_9;
#line 427 "recompilation.m"
    MR_Word recompilation__V_13_13;
#line 433 "recompilation.m"
    MR_Box recompilation__conv1_Items_8;

#line 361 "recompilation.m"
    {
#line 361 "recompilation.m"
      recompilation__Items1_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 361 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 0) = recompilation__Init_7;
#line 361 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 1) = recompilation__Init_7;
#line 361 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 2) = recompilation__Init_7;
#line 361 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 3) = recompilation__Init_7;
#line 361 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 4) = recompilation__Init_7;
#line 361 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 5) = recompilation__Init_7;
#line 361 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 6) = recompilation__Init_7;
#line 361 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 7) = recompilation__Init_7;
#line 361 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 8) = recompilation__Init_7;
#line 361 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 9) = recompilation__Init_7;
#line 361 "recompilation.m"
    }
#line 6029 "recompilation.c"
    {
#line 6031 "recompilation.c"
      recompilation__TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 6033 "recompilation.c"
      MR_hl_field(MR_mktag(0), recompilation__TypeInfo_42_42, 0) = ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_set_3));
#line 6035 "recompilation.c"
      MR_hl_field(MR_mktag(0), recompilation__TypeInfo_42_42, 1) = ((MR_Box) (recompilation__TypeInfo_for_U_39));
#line 6037 "recompilation.c"
      MR_hl_field(MR_mktag(0), recompilation__TypeInfo_42_42, 2) = ((MR_Box) (recompilation__TypeInfo_for_U_39));
#line 6039 "recompilation.c"
      MR_hl_field(MR_mktag(0), recompilation__TypeInfo_42_42, 3) = ((MR_Box) (recompilation__TypeInfo_for_U_39));
#line 6041 "recompilation.c"
    }
#line 433 "recompilation.m"
    {
#line 433 "recompilation.m"
      recompilation__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 433 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_13_13, 0) = ((MR_Box) (&recompilation_scalar_common_7[0]));
#line 433 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_13_13, 1) = ((MR_Box) (recompilation__map_ids_3_f_0_1));
#line 433 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 433 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_13_13, 3) = ((MR_Box) (recompilation__TypeInfo_for_T_38));
#line 433 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_13_13, 4) = ((MR_Box) (recompilation__TypeInfo_for_U_39));
#line 433 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_13_13, 5) = ((MR_Box) (recompilation__Func_5));
#line 433 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_13_13, 6) = ((MR_Box) (recompilation__Items0_6));
#line 433 "recompilation.m"
    }
#line 433 "recompilation.m"
    {
#line 433 "recompilation.m"
      recompilation__conv1_Items_8 = mercury__list__foldl_3_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_type_0, recompilation__TypeInfo_42_42, (MR_Word) recompilation__V_13_13, (MR_Word) MR_mkword(MR_mktag(1), &recompilation_scalar_common_1[9]), ((MR_Box) (recompilation__Items1_9)));
    }
#line 433 "recompilation.m"
    recompilation__Items_8 = ((MR_Word) recompilation__conv1_Items_8);
#line 427 "recompilation.m"
    return recompilation__Items_8;
#line 427 "recompilation.m"
  }
#line 215 "recompilation.m"
}

#line 212 "recompilation.m"
void MR_CALL 
recompilation__update_ids_4_p_0(
#line 212 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_155,
#line 212 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 212 "recompilation.m"
  MR_Box recompilation__IdMap_2,
#line 212 "recompilation.m"
  MR_Word recompilation__STATE_VARIABLE_ItemIdSet_0_3,
#line 212 "recompilation.m"
  MR_Word * recompilation__STATE_VARIABLE_ItemIdSet_4)
#line 212 "recompilation.m"
{
#line 406 "recompilation.m"
  {
#line 406 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 406 "recompilation.m"
    MR_Box recompilation__V_156_156 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 9));
#line 406 "recompilation.m"
    MR_Box recompilation__V_157_157 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 8));
#line 406 "recompilation.m"
    MR_Box recompilation__V_158_158 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 7));
#line 406 "recompilation.m"
    MR_Box recompilation__V_159_159 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 6));
#line 406 "recompilation.m"
    MR_Box recompilation__V_160_160 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 5));
#line 406 "recompilation.m"
    MR_Box recompilation__V_161_161 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 4));
#line 406 "recompilation.m"
    MR_Box recompilation__V_162_162 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 3));
#line 406 "recompilation.m"
    MR_Box recompilation__V_163_163 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 2));
#line 406 "recompilation.m"
    MR_Box recompilation__V_164_164 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 1));
#line 406 "recompilation.m"
    MR_Box recompilation__V_165_165 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 0));

#line 406 "recompilation.m"
#line 406 "recompilation.m"
    switch (recompilation__HeadVar__1_1) {
#line 406 "recompilation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 406 "recompilation.m"
      case (MR_Integer) 9:
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
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_157_157;
#line 425 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__IdMap_2;
#line 425 "recompilation.m"
        }
#line 406 "recompilation.m"
        break;
#line 406 "recompilation.m"
      case (MR_Integer) 7:
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
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__V_159_159;
#line 419 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__IdMap_2;
#line 419 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_157_157;
#line 419 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_156_156;
#line 419 "recompilation.m"
        }
#line 406 "recompilation.m"
        break;
#line 406 "recompilation.m"
      case (MR_Integer) 5:
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
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__IdMap_2;
#line 421 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__V_159_159;
#line 421 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__V_158_158;
#line 421 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_157_157;
#line 421 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_156_156;
#line 421 "recompilation.m"
        }
#line 406 "recompilation.m"
        break;
#line 406 "recompilation.m"
      case (MR_Integer) 3:
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
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__V_163_163;
#line 413 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__IdMap_2;
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
#line 406 "recompilation.m"
        break;
#line 406 "recompilation.m"
      case (MR_Integer) 2:
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
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__V_164_164;
#line 411 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__IdMap_2;
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
#line 406 "recompilation.m"
        break;
#line 406 "recompilation.m"
      case (MR_Integer) 8:
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
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_160_160;
#line 423 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__V_159_159;
#line 423 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__V_158_158;
#line 423 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__IdMap_2;
#line 423 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_156_156;
#line 423 "recompilation.m"
        }
#line 406 "recompilation.m"
        break;
#line 406 "recompilation.m"
      case (MR_Integer) 6:
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
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__V_161_161;
#line 417 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_160_160;
#line 417 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__IdMap_2;
#line 417 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__V_158_158;
#line 417 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_157_157;
#line 417 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_156_156;
#line 417 "recompilation.m"
        }
#line 406 "recompilation.m"
        break;
#line 406 "recompilation.m"
      case (MR_Integer) 0:
#line 407 "recompilation.m"
        {
#line 407 "recompilation.m"
          MR_Word base;
#line 407 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 407 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 407 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__IdMap_2;
#line 407 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__V_164_164;
#line 407 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__V_163_163;
#line 407 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__V_162_162;
#line 407 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__V_161_161;
#line 407 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_160_160;
#line 407 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__V_159_159;
#line 407 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__V_158_158;
#line 407 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_157_157;
#line 407 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_156_156;
#line 407 "recompilation.m"
        }
#line 406 "recompilation.m"
        break;
#line 406 "recompilation.m"
      case (MR_Integer) 1:
#line 409 "recompilation.m"
        {
#line 409 "recompilation.m"
          MR_Word base;
#line 409 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 409 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 409 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__V_165_165;
#line 409 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__IdMap_2;
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
#line 406 "recompilation.m"
        break;
#line 406 "recompilation.m"
      case (MR_Integer) 4:
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
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__V_162_162;
#line 415 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__IdMap_2;
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
#line 406 "recompilation.m"
        break;
#line 406 "recompilation.m"
    }
#line 406 "recompilation.m"
  }
#line 212 "recompilation.m"
}

#line 210 "recompilation.m"
MR_Box MR_CALL 
recompilation__extract_ids_2_f_0(
#line 210 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_104,
#line 210 "recompilation.m"
  MR_Word recompilation__ItemIdSet_1,
#line 210 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 210 "recompilation.m"
{
#line 395 "recompilation.m"
  {
#line 395 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 395 "recompilation.m"
    MR_Box recompilation__HeadVar__3_3;
#line 395 "recompilation.m"
    MR_Box recompilation__V_105_105 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 9));
#line 395 "recompilation.m"
    MR_Box recompilation__V_106_106 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 8));
#line 395 "recompilation.m"
    MR_Box recompilation__V_107_107 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 7));
#line 395 "recompilation.m"
    MR_Box recompilation__V_108_108 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 6));
#line 395 "recompilation.m"
    MR_Box recompilation__V_109_109 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 5));
#line 395 "recompilation.m"
    MR_Box recompilation__V_110_110 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 4));
#line 395 "recompilation.m"
    MR_Box recompilation__V_111_111 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 3));
#line 395 "recompilation.m"
    MR_Box recompilation__V_112_112 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 2));
#line 395 "recompilation.m"
    MR_Box recompilation__V_113_113 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 1));
#line 395 "recompilation.m"
    MR_Box recompilation__V_114_114 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 0));

#line 395 "recompilation.m"
#line 395 "recompilation.m"
    switch (recompilation__HeadVar__2_2) {
#line 395 "recompilation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 395 "recompilation.m"
      case (MR_Integer) 9:
#line 404 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_105_105;
#line 395 "recompilation.m"
        break;
#line 395 "recompilation.m"
      case (MR_Integer) 7:
#line 402 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_107_107;
#line 395 "recompilation.m"
        break;
#line 395 "recompilation.m"
      case (MR_Integer) 5:
#line 400 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_109_109;
#line 395 "recompilation.m"
        break;
#line 395 "recompilation.m"
      case (MR_Integer) 3:
#line 398 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_111_111;
#line 395 "recompilation.m"
        break;
#line 395 "recompilation.m"
      case (MR_Integer) 2:
#line 397 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_112_112;
#line 395 "recompilation.m"
        break;
#line 395 "recompilation.m"
      case (MR_Integer) 8:
#line 403 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_106_106;
#line 395 "recompilation.m"
        break;
#line 395 "recompilation.m"
      case (MR_Integer) 6:
#line 401 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_108_108;
#line 395 "recompilation.m"
        break;
#line 395 "recompilation.m"
      case (MR_Integer) 0:
#line 395 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_114_114;
#line 395 "recompilation.m"
        break;
#line 395 "recompilation.m"
      case (MR_Integer) 1:
#line 396 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_113_113;
#line 395 "recompilation.m"
        break;
#line 395 "recompilation.m"
      case (MR_Integer) 4:
#line 399 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_110_110;
#line 395 "recompilation.m"
        break;
#line 395 "recompilation.m"
    }
#line 395 "recompilation.m"
    return recompilation__HeadVar__3_3;
#line 395 "recompilation.m"
  }
#line 210 "recompilation.m"
}

#line 206 "recompilation.m"
void MR_CALL 
recompilation__update_pred_or_func_set_4_p_0(
#line 206 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_PorF_35,
#line 206 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Simple_36,
#line 206 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Cons_37,
#line 206 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 206 "recompilation.m"
  MR_Box recompilation__Set_2,
#line 206 "recompilation.m"
  MR_Word recompilation__STATE_VARIABLE_ItemIdSet_0_3,
#line 206 "recompilation.m"
  MR_Word * recompilation__STATE_VARIABLE_ItemIdSet_4)
#line 206 "recompilation.m"
{
#line 390 "recompilation.m"
  {
#line 390 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 390 "recompilation.m"
    MR_Box recompilation__V_38_38 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 9));
#line 390 "recompilation.m"
    MR_Box recompilation__V_39_39 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 8));
#line 390 "recompilation.m"
    MR_Box recompilation__V_40_40 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 7));
#line 390 "recompilation.m"
    MR_Box recompilation__V_41_41 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 6));
#line 390 "recompilation.m"
    MR_Box recompilation__V_42_42 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 5));
#line 390 "recompilation.m"
    MR_Box recompilation__V_43_43 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 4));
#line 390 "recompilation.m"
    MR_Box recompilation__V_44_44 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 3));
#line 390 "recompilation.m"
    MR_Box recompilation__V_45_45 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 2));
#line 390 "recompilation.m"
    MR_Box recompilation__V_46_46 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 1));
#line 390 "recompilation.m"
    MR_Box recompilation__V_47_47 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 0));

#line 390 "recompilation.m"
#line 390 "recompilation.m"
    switch (recompilation__HeadVar__1_1) {
#line 390 "recompilation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 390 "recompilation.m"
      case (MR_Integer) 7:
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
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__V_41_41;
#line 393 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__Set_2;
#line 393 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_39_39;
#line 393 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_38_38;
#line 393 "recompilation.m"
        }
#line 390 "recompilation.m"
        break;
#line 390 "recompilation.m"
      case (MR_Integer) 6:
#line 391 "recompilation.m"
        {
#line 391 "recompilation.m"
          MR_Word base;
#line 391 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 391 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 391 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__V_47_47;
#line 391 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__V_46_46;
#line 391 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__V_45_45;
#line 391 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__V_44_44;
#line 391 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__V_43_43;
#line 391 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_42_42;
#line 391 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__Set_2;
#line 391 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__V_40_40;
#line 391 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_39_39;
#line 391 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_38_38;
#line 391 "recompilation.m"
        }
#line 390 "recompilation.m"
        break;
#line 390 "recompilation.m"
    }
#line 390 "recompilation.m"
  }
#line 206 "recompilation.m"
}

#line 203 "recompilation.m"
MR_Box MR_CALL 
recompilation__extract_pred_or_func_set_2_f_0(
#line 203 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Simple_24,
#line 203 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_PorF_25,
#line 203 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Cons_26,
#line 203 "recompilation.m"
  MR_Word recompilation__ItemIdSet_1,
#line 203 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 203 "recompilation.m"
{
#line 387 "recompilation.m"
  {
#line 387 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 387 "recompilation.m"
    MR_Box recompilation__HeadVar__3_3;
#line 387 "recompilation.m"
    MR_Box recompilation__V_29_29 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 7));
#line 387 "recompilation.m"
    MR_Box recompilation__V_30_30 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 6));
#line 387 "recompilation.m"
    MR_Box recompilation__V_27_27 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 9));
#line 387 "recompilation.m"
    MR_Box recompilation__V_28_28 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 8));
#line 387 "recompilation.m"
    MR_Box recompilation__V_31_31 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 5));
#line 387 "recompilation.m"
    MR_Box recompilation__V_32_32 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 4));
#line 387 "recompilation.m"
    MR_Box recompilation__V_33_33 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 3));
#line 387 "recompilation.m"
    MR_Box recompilation__V_34_34 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 2));
#line 387 "recompilation.m"
    MR_Box recompilation__V_35_35 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 1));
#line 387 "recompilation.m"
    MR_Box recompilation__V_36_36 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 0));

#line 387 "recompilation.m"
#line 387 "recompilation.m"
    switch (recompilation__HeadVar__2_2) {
#line 387 "recompilation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 387 "recompilation.m"
      case (MR_Integer) 7:
#line 388 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_29_29;
#line 387 "recompilation.m"
        break;
#line 387 "recompilation.m"
      case (MR_Integer) 6:
#line 387 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_30_30;
#line 387 "recompilation.m"
        break;
#line 387 "recompilation.m"
    }
#line 387 "recompilation.m"
    return recompilation__HeadVar__3_3;
#line 387 "recompilation.m"
  }
#line 203 "recompilation.m"
}

#line 199 "recompilation.m"
void MR_CALL 
recompilation__update_simple_item_set_4_p_0(
#line 199 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Simple_80,
#line 199 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_PorF_81,
#line 199 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Cons_82,
#line 199 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 199 "recompilation.m"
  MR_Box recompilation__IdMap_2,
#line 199 "recompilation.m"
  MR_Word recompilation__STATE_VARIABLE_ItemIdSet_0_3,
#line 199 "recompilation.m"
  MR_Word * recompilation__STATE_VARIABLE_ItemIdSet_4)
#line 199 "recompilation.m"
{
#line 376 "recompilation.m"
  {
#line 376 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 376 "recompilation.m"
    MR_Box recompilation__V_83_83 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 9));
#line 376 "recompilation.m"
    MR_Box recompilation__V_84_84 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 8));
#line 376 "recompilation.m"
    MR_Box recompilation__V_85_85 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 7));
#line 376 "recompilation.m"
    MR_Box recompilation__V_86_86 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 6));
#line 376 "recompilation.m"
    MR_Box recompilation__V_87_87 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 5));
#line 376 "recompilation.m"
    MR_Box recompilation__V_88_88 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 4));
#line 376 "recompilation.m"
    MR_Box recompilation__V_89_89 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 3));
#line 376 "recompilation.m"
    MR_Box recompilation__V_90_90 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 2));
#line 376 "recompilation.m"
    MR_Box recompilation__V_91_91 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 1));
#line 376 "recompilation.m"
    MR_Box recompilation__V_92_92 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 0));

#line 376 "recompilation.m"
#line 376 "recompilation.m"
    switch (recompilation__HeadVar__1_1) {
#line 376 "recompilation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 376 "recompilation.m"
      case (MR_Integer) 3:
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
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__V_90_90;
#line 383 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__IdMap_2;
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
#line 376 "recompilation.m"
        break;
#line 376 "recompilation.m"
      case (MR_Integer) 2:
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
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__V_91_91;
#line 381 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__IdMap_2;
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
#line 376 "recompilation.m"
        break;
#line 376 "recompilation.m"
      case (MR_Integer) 0:
#line 377 "recompilation.m"
        {
#line 377 "recompilation.m"
          MR_Word base;
#line 377 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 377 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 377 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__IdMap_2;
#line 377 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__V_91_91;
#line 377 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__V_90_90;
#line 377 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__V_89_89;
#line 377 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__V_88_88;
#line 377 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_87_87;
#line 377 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__V_86_86;
#line 377 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__V_85_85;
#line 377 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_84_84;
#line 377 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_83_83;
#line 377 "recompilation.m"
        }
#line 376 "recompilation.m"
        break;
#line 376 "recompilation.m"
      case (MR_Integer) 1:
#line 379 "recompilation.m"
        {
#line 379 "recompilation.m"
          MR_Word base;
#line 379 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 379 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 379 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__V_92_92;
#line 379 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__IdMap_2;
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
#line 376 "recompilation.m"
        break;
#line 376 "recompilation.m"
      case (MR_Integer) 4:
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
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__V_89_89;
#line 385 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__IdMap_2;
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
#line 376 "recompilation.m"
        break;
#line 376 "recompilation.m"
    }
#line 376 "recompilation.m"
  }
#line 199 "recompilation.m"
}

#line 196 "recompilation.m"
MR_Box MR_CALL 
recompilation__extract_simple_item_set_2_f_0(
#line 196 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Simple_54,
#line 196 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_PorF_55,
#line 196 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Cons_56,
#line 196 "recompilation.m"
  MR_Word recompilation__ItemIdSet_1,
#line 196 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 196 "recompilation.m"
{
#line 370 "recompilation.m"
  {
#line 370 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 370 "recompilation.m"
    MR_Box recompilation__HeadVar__3_3;
#line 370 "recompilation.m"
    MR_Box recompilation__V_62_62 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 4));
#line 370 "recompilation.m"
    MR_Box recompilation__V_63_63 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 3));
#line 370 "recompilation.m"
    MR_Box recompilation__V_64_64 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 2));
#line 370 "recompilation.m"
    MR_Box recompilation__V_65_65 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 1));
#line 370 "recompilation.m"
    MR_Box recompilation__V_66_66 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 0));
#line 370 "recompilation.m"
    MR_Box recompilation__V_57_57 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 9));
#line 370 "recompilation.m"
    MR_Box recompilation__V_58_58 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 8));
#line 370 "recompilation.m"
    MR_Box recompilation__V_59_59 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 7));
#line 370 "recompilation.m"
    MR_Box recompilation__V_60_60 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 6));
#line 370 "recompilation.m"
    MR_Box recompilation__V_61_61 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 5));

#line 370 "recompilation.m"
#line 370 "recompilation.m"
    switch (recompilation__HeadVar__2_2) {
#line 370 "recompilation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 370 "recompilation.m"
      case (MR_Integer) 3:
#line 373 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_63_63;
#line 370 "recompilation.m"
        break;
#line 370 "recompilation.m"
      case (MR_Integer) 2:
#line 372 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_64_64;
#line 370 "recompilation.m"
        break;
#line 370 "recompilation.m"
      case (MR_Integer) 0:
#line 370 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_66_66;
#line 370 "recompilation.m"
        break;
#line 370 "recompilation.m"
      case (MR_Integer) 1:
#line 371 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_65_65;
#line 370 "recompilation.m"
        break;
#line 370 "recompilation.m"
      case (MR_Integer) 4:
#line 374 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_62_62;
#line 370 "recompilation.m"
        break;
#line 370 "recompilation.m"
    }
#line 370 "recompilation.m"
    return recompilation__HeadVar__3_3;
#line 370 "recompilation.m"
  }
#line 196 "recompilation.m"
}

#line 189 "recompilation.m"
MR_Word MR_CALL 
recompilation__init_used_items_0_f_0(void)
#line 189 "recompilation.m"
{
#line 367 "recompilation.m"
  {
#line 367 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 367 "recompilation.m"
    MR_Word recompilation__HeadVar__1_1;
#line 367 "recompilation.m"
    MR_Word recompilation__TypeInfo_12_12 = (MR_Word) &recompilation_scalar_common_2[0];
#line 367 "recompilation.m"
    MR_Word recompilation__TypeInfo_13_13 = (MR_Word) &recompilation_scalar_common_2[1];
#line 367 "recompilation.m"
    MR_Word recompilation__V_2_2;
#line 367 "recompilation.m"
    MR_Word recompilation__V_3_3;
#line 367 "recompilation.m"
    MR_Word recompilation__V_4_4;
#line 367 "recompilation.m"
    MR_Word recompilation__V_5_5;
#line 367 "recompilation.m"
    MR_Word recompilation__V_6_6;
#line 367 "recompilation.m"
    MR_Word recompilation__V_7_7;
#line 367 "recompilation.m"
    MR_Word recompilation__V_8_8;
#line 367 "recompilation.m"
    MR_Word recompilation__V_9_9;
#line 367 "recompilation.m"
    MR_Word recompilation__V_10_10;
#line 367 "recompilation.m"
    MR_Word recompilation__V_11_11;

#line 367 "recompilation.m"
    {
#line 367 "recompilation.m"
      recompilation__V_2_2 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 367 "recompilation.m"
    {
#line 367 "recompilation.m"
      recompilation__V_3_3 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 367 "recompilation.m"
    {
#line 367 "recompilation.m"
      recompilation__V_4_4 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 367 "recompilation.m"
    {
#line 367 "recompilation.m"
      recompilation__V_5_5 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 368 "recompilation.m"
    {
#line 368 "recompilation.m"
      recompilation__V_6_6 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 368 "recompilation.m"
    {
#line 368 "recompilation.m"
      recompilation__V_7_7 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 368 "recompilation.m"
    {
#line 368 "recompilation.m"
      recompilation__V_8_8 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 368 "recompilation.m"
    {
#line 368 "recompilation.m"
      recompilation__V_9_9 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 368 "recompilation.m"
    {
#line 368 "recompilation.m"
      recompilation__V_10_10 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 368 "recompilation.m"
    {
#line 368 "recompilation.m"
      recompilation__V_11_11 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 367 "recompilation.m"
    {
#line 367 "recompilation.m"
      recompilation__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 367 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 0) = ((MR_Box) (recompilation__V_2_2));
#line 367 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 1) = ((MR_Box) (recompilation__V_3_3));
#line 367 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 2) = ((MR_Box) (recompilation__V_4_4));
#line 367 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 3) = ((MR_Box) (recompilation__V_5_5));
#line 367 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 4) = ((MR_Box) (recompilation__V_6_6));
#line 367 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 5) = ((MR_Box) (recompilation__V_7_7));
#line 367 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 6) = ((MR_Box) (recompilation__V_8_8));
#line 367 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 7) = ((MR_Box) (recompilation__V_9_9));
#line 367 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 8) = ((MR_Box) (recompilation__V_10_10));
#line 367 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 9) = ((MR_Box) (recompilation__V_11_11));
#line 367 "recompilation.m"
    }
#line 367 "recompilation.m"
    return recompilation__HeadVar__1_1;
#line 367 "recompilation.m"
  }
#line 189 "recompilation.m"
}

#line 165 "recompilation.m"
MR_Word MR_CALL 
recompilation__init_item_id_set_3_f_0(
#line 165 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Simple_15,
#line 165 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_PorF_16,
#line 165 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_Cons_17,
#line 165 "recompilation.m"
  MR_Box recompilation__Simple_5,
#line 165 "recompilation.m"
  MR_Box recompilation__PorF_6,
#line 165 "recompilation.m"
  MR_Box recompilation__Cons_7)
#line 165 "recompilation.m"
{
#line 364 "recompilation.m"
  {
#line 364 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 364 "recompilation.m"
    MR_Word recompilation__HeadVar__4_4;

#line 364 "recompilation.m"
    {
#line 364 "recompilation.m"
      recompilation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 364 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 0) = recompilation__Simple_5;
#line 364 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 1) = recompilation__Simple_5;
#line 364 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 2) = recompilation__Simple_5;
#line 364 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 3) = recompilation__Simple_5;
#line 364 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 4) = recompilation__Simple_5;
#line 364 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 5) = recompilation__Cons_7;
#line 364 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 6) = recompilation__PorF_6;
#line 364 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 7) = recompilation__PorF_6;
#line 364 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 8) = recompilation__PorF_6;
#line 364 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 9) = recompilation__PorF_6;
#line 364 "recompilation.m"
    }
#line 364 "recompilation.m"
    return recompilation__HeadVar__4_4;
#line 364 "recompilation.m"
  }
#line 165 "recompilation.m"
}

#line 163 "recompilation.m"
MR_Word MR_CALL 
recompilation__init_item_id_set_1_f_0(
#line 163 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_13,
#line 163 "recompilation.m"
  MR_Box recompilation__Init_3)
#line 163 "recompilation.m"
{
#line 361 "recompilation.m"
  {
#line 361 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 361 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;

#line 361 "recompilation.m"
    {
#line 361 "recompilation.m"
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 361 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = recompilation__Init_3;
#line 361 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = recompilation__Init_3;
#line 361 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 2) = recompilation__Init_3;
#line 361 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 3) = recompilation__Init_3;
#line 361 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 4) = recompilation__Init_3;
#line 361 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 5) = recompilation__Init_3;
#line 361 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 6) = recompilation__Init_3;
#line 361 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 7) = recompilation__Init_3;
#line 361 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 8) = recompilation__Init_3;
#line 361 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 9) = recompilation__Init_3;
#line 361 "recompilation.m"
    }
#line 361 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 361 "recompilation.m"
  }
#line 163 "recompilation.m"
}

#line 143 "recompilation.m"
MR_Word MR_CALL 
recompilation__init_recompilation_info_1_f_0(
#line 143 "recompilation.m"
  MR_Word recompilation__ModuleName_3)
#line 143 "recompilation.m"
{
#line 456 "recompilation.m"
  {
#line 456 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 456 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;
#line 456 "recompilation.m"
    MR_Word recompilation__V_4_4;
#line 456 "recompilation.m"
    MR_Word recompilation__V_5_5;
#line 456 "recompilation.m"
    MR_Word recompilation__V_6_6;

#line 459 "recompilation.m"
    {
#line 459 "recompilation.m"
      recompilation__V_4_4 = recompilation__init_used_items_0_f_0();
    }
#line 460 "recompilation.m"
    {
#line 460 "recompilation.m"
      recompilation__V_5_5 = mercury__map__init_0_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, (MR_Word) &recompilation_scalar_common_1[0]);
    }
#line 461 "recompilation.m"
    {
#line 461 "recompilation.m"
      recompilation__V_6_6 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0);
    }
#line 457 "recompilation.m"
    {
#line 457 "recompilation.m"
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 457 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = ((MR_Box) (recompilation__ModuleName_3));
#line 457 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = ((MR_Box) (recompilation__V_4_4));
#line 457 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 2) = ((MR_Box) (recompilation__V_5_5));
#line 457 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 3) = ((MR_Box) (recompilation__V_6_6));
#line 457 "recompilation.m"
    }
#line 456 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 456 "recompilation.m"
  }
#line 143 "recompilation.m"
}

#line 122 "recompilation.m"
MR_Word MR_CALL 
recompilation__item_name_to_mode_id_1_f_0(
#line 122 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 122 "recompilation.m"
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
#line 122 "recompilation.m"
}

#line 121 "recompilation.m"
MR_Word MR_CALL 
recompilation__item_name_to_inst_id_1_f_0(
#line 121 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 121 "recompilation.m"
{
#line 355 "recompilation.m"
  {
#line 355 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 355 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;
#line 355 "recompilation.m"
    MR_Word recompilation__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 355 "recompilation.m"
    MR_Integer recompilation__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));

#line 355 "recompilation.m"
    {
#line 355 "recompilation.m"
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 355 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = ((MR_Box) (recompilation__SymName_3));
#line 355 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = ((MR_Box) (recompilation__Arity_4));
#line 355 "recompilation.m"
    }
#line 355 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 355 "recompilation.m"
  }
#line 121 "recompilation.m"
}

#line 120 "recompilation.m"
MR_Word MR_CALL 
recompilation__item_name_to_type_ctor_1_f_0(
#line 120 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 120 "recompilation.m"
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
#line 120 "recompilation.m"
}

#line 118 "recompilation.m"
MR_Word MR_CALL 
recompilation__mode_id_to_item_name_1_f_0(
#line 118 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 118 "recompilation.m"
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
#line 118 "recompilation.m"
}

#line 117 "recompilation.m"
MR_Word MR_CALL 
recompilation__inst_id_to_item_name_1_f_0(
#line 117 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 117 "recompilation.m"
{
#line 351 "recompilation.m"
  {
#line 351 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 351 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;
#line 351 "recompilation.m"
    MR_Word recompilation__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 351 "recompilation.m"
    MR_Integer recompilation__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));

#line 351 "recompilation.m"
    {
#line 351 "recompilation.m"
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 351 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = ((MR_Box) (recompilation__SymName_3));
#line 351 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = ((MR_Box) (recompilation__Arity_4));
#line 351 "recompilation.m"
    }
#line 351 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 351 "recompilation.m"
  }
#line 117 "recompilation.m"
}

#line 116 "recompilation.m"
MR_Word MR_CALL 
recompilation__type_ctor_to_item_name_1_f_0(
#line 116 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 116 "recompilation.m"
{
#line 350 "recompilation.m"
  {
#line 350 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 350 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;
#line 350 "recompilation.m"
    MR_Word recompilation__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 350 "recompilation.m"
    MR_Integer recompilation__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));

#line 350 "recompilation.m"
    {
#line 350 "recompilation.m"
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 350 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = ((MR_Box) (recompilation__SymName_3));
#line 350 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = ((MR_Box) (recompilation__Arity_4));
#line 350 "recompilation.m"
    }
#line 350 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 350 "recompilation.m"
  }
#line 116 "recompilation.m"
}

#line 113 "recompilation.m"
MR_Word MR_CALL 
recompilation__pred_or_func_to_item_type_1_f_0(
#line 113 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 113 "recompilation.m"
{
#line 327 "recompilation.m"
  {
#line 327 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 327 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;

#line 327 "recompilation.m"
#line 327 "recompilation.m"
    switch (recompilation__HeadVar__1_1) {
#line 327 "recompilation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 327 "recompilation.m"
      case (MR_Integer) 1:
#line 328 "recompilation.m"
        recompilation__HeadVar__2_2 = (MR_Integer) 7;
#line 327 "recompilation.m"
        break;
#line 327 "recompilation.m"
      case (MR_Integer) 0:
#line 327 "recompilation.m"
        recompilation__HeadVar__2_2 = (MR_Integer) 6;
#line 327 "recompilation.m"
        break;
#line 327 "recompilation.m"
    }
#line 327 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 327 "recompilation.m"
  }
#line 113 "recompilation.m"
}

#line 111 "recompilation.m"
void MR_CALL 
recompilation__string_to_item_type_2_p_1(
#line 111 "recompilation.m"
  MR_String * recompilation__HeadVar__1_1,
#line 111 "recompilation.m"
  MR_Word recompilation__HeadVar__2_2)
#line 111 "recompilation.m"
{
#line 339 "recompilation.m"
  {
#line 339 "recompilation.m"
    MR_bool recompilation__succeeded;

#line 339 "recompilation.m"
    *recompilation__HeadVar__1_1 = ((&recompilation_vector_common_5[0 + recompilation__HeadVar__2_2]))->recompilation__vector_common_type_5_0__vct_5_f_0;
#line 339 "recompilation.m"
  }
#line 111 "recompilation.m"
}

#line 110 "recompilation.m"
MR_bool MR_CALL 
recompilation__string_to_item_type_2_p_0(
#line 110 "recompilation.m"
  MR_String recompilation__HeadVar__1_1,
#line 110 "recompilation.m"
  MR_Word * recompilation__HeadVar__2_2)
#line 110 "recompilation.m"
{
#line 339 "recompilation.m"
  {
#line 339 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 339 "recompilation.m"
    MR_Integer recompilation__slot_0;
#line 339 "recompilation.m"
    MR_String recompilation__str_1;

#line 339 "recompilation.m"
    /* hashed string simple lookup switch */
#line 339 "recompilation.m"
    /* compute the hash value of the input string */
#line 339 "recompilation.m"
    recompilation__slot_0 = ((MR_hash_string5(recompilation__HeadVar__1_1)) & (MR_Integer) 31);
#line 339 "recompilation.m"
    /* no collisions; no hash chain loop */
#line 339 "recompilation.m"
    /* lookup the string for this hash slot */
#line 339 "recompilation.m"
    recompilation__str_1 = ((&recompilation_vector_common_4[0 + recompilation__slot_0]))->recompilation__vector_common_type_4_0__vct_4_f_0;
#line 339 "recompilation.m"
    /* did we find a match? */
#line 339 "recompilation.m"
    if ((((recompilation__str_1 != NULL)) && ((strcmp(recompilation__str_1, recompilation__HeadVar__1_1) == 0))))
#line 339 "recompilation.m"
      {
#line 339 "recompilation.m"
        /* we found a match; look up the results */
#line 339 "recompilation.m"
        *recompilation__HeadVar__2_2 = ((&recompilation_vector_common_4[0 + recompilation__slot_0]))->recompilation__vector_common_type_4_0__vct_4_f_1;
#line 339 "recompilation.m"
        recompilation__succeeded = MR_TRUE;
#line 339 "recompilation.m"
        /* jump out of search loop */
#line 339 "recompilation.m"
        goto label_0;
#line 339 "recompilation.m"
      }
#line 339 "recompilation.m"
    recompilation__succeeded = MR_FALSE;
#line 339 "recompilation.m"
  label_0:;
#line 339 "recompilation.m"
    return recompilation__succeeded;
#line 339 "recompilation.m"
  }
#line 110 "recompilation.m"
}

#line 106 "recompilation.m"
MR_bool MR_CALL 
recompilation__is_pred_or_func_item_type_1_p_0(
#line 106 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 106 "recompilation.m"
{
#line 336 "recompilation.m"
  {
#line 336 "recompilation.m"
    MR_bool recompilation__succeeded;

#line 336 "recompilation.m"
#line 336 "recompilation.m"
    switch (recompilation__HeadVar__1_1) {
#line 336 "recompilation.m"
      default:
#line 336 "recompilation.m"
        recompilation__succeeded = MR_FALSE;
#line 336 "recompilation.m"
        break;
#line 336 "recompilation.m"
      case (MR_Integer) 7:
#line 337 "recompilation.m"
        recompilation__succeeded = MR_TRUE;
#line 336 "recompilation.m"
        break;
#line 336 "recompilation.m"
      case (MR_Integer) 6:
#line 336 "recompilation.m"
        recompilation__succeeded = MR_TRUE;
#line 336 "recompilation.m"
        break;
#line 336 "recompilation.m"
    }
#line 336 "recompilation.m"
    return recompilation__succeeded;
#line 336 "recompilation.m"
  }
#line 106 "recompilation.m"
}

#line 104 "recompilation.m"
MR_bool MR_CALL 
recompilation__is_simple_item_type_1_p_0(
#line 104 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 104 "recompilation.m"
{
#line 330 "recompilation.m"
  {
#line 330 "recompilation.m"
    MR_bool recompilation__succeeded;

#line 330 "recompilation.m"
    if (((MR_Integer) 31 & (((MR_Integer) 1 << recompilation__HeadVar__1_1))))
#line 330 "recompilation.m"
      {
#line 330 "recompilation.m"
        recompilation__succeeded = MR_TRUE;
#line 330 "recompilation.m"
      }
#line 330 "recompilation.m"
    else
#line 330 "recompilation.m"
      recompilation__succeeded = MR_FALSE;
#line 330 "recompilation.m"
    return recompilation__succeeded;
#line 330 "recompilation.m"
  }
#line 104 "recompilation.m"
}

#line 57 "recompilation.m"
MR_bool MR_CALL 
recompilation__term_to_timestamp_1_f_0(
#line 57 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_7,
#line 57 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1,
#line 57 "recompilation.m"
  MR_Word * recompilation__HeadVar__2_2)
#line 57 "recompilation.m"
{
#line 317 "recompilation.m"
  {
#line 317 "recompilation.m"
    MR_bool recompilation__succeeded = ((MR_tag((MR_Word) recompilation__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 317 "recompilation.m"
    MR_String recompilation__TimestampString_3;
#line 317 "recompilation.m"
    MR_Word recompilation__V_5_5;
#line 317 "recompilation.m"
    MR_Word recompilation__V_6_6;
#line 317 "recompilation.m"
    MR_Word recompilation__V_4_4;

#line 317 "recompilation.m"
    if (recompilation__succeeded)
#line 317 "recompilation.m"
      {
#line 317 "recompilation.m"
        recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 317 "recompilation.m"
        recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));
#line 317 "recompilation.m"
        recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 2)));
#line 317 "recompilation.m"
        recompilation__succeeded = ((((MR_tag((MR_Word) recompilation__V_5_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__V_5_5, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 317 "recompilation.m"
        if (recompilation__succeeded)
#line 317 "recompilation.m"
          {
#line 317 "recompilation.m"
            recompilation__TimestampString_3 = ((MR_String) (MR_hl_field(MR_mktag(3), recompilation__V_5_5, (MR_Integer) 1)));
#line 317 "recompilation.m"
            recompilation__succeeded = (recompilation__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 317 "recompilation.m"
            if (recompilation__succeeded)
#line 318 "recompilation.m"
              {
#line 318 "recompilation.m"
                recompilation__succeeded = libs__timestamp__string_to_timestamp_1_f_0(recompilation__TimestampString_3, recompilation__HeadVar__2_2);
              }
#line 317 "recompilation.m"
          }
#line 317 "recompilation.m"
      }
#line 317 "recompilation.m"
    return recompilation__succeeded;
#line 317 "recompilation.m"
  }
#line 57 "recompilation.m"
}

#line 55 "recompilation.m"
MR_bool MR_CALL 
recompilation__term_to_version_number_1_f_0(
#line 55 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_4,
#line 55 "recompilation.m"
  MR_Word recompilation__Term_3,
#line 55 "recompilation.m"
  MR_Word * recompilation__HeadVar__2_2)
#line 55 "recompilation.m"
{
#line 317 "recompilation.m"
  {
#line 317 "recompilation.m"
    MR_bool recompilation__succeeded = ((MR_tag((MR_Word) recompilation__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 317 "recompilation.m"
    MR_String recompilation__TimestampString_5;
#line 317 "recompilation.m"
    MR_Word recompilation__V_7_7;
#line 317 "recompilation.m"
    MR_Word recompilation__V_8_8;
#line 317 "recompilation.m"
    MR_Word recompilation__V_6_6;

#line 317 "recompilation.m"
    if (recompilation__succeeded)
#line 317 "recompilation.m"
      {
#line 317 "recompilation.m"
        recompilation__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__Term_3, (MR_Integer) 0)));
#line 317 "recompilation.m"
        recompilation__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__Term_3, (MR_Integer) 1)));
#line 317 "recompilation.m"
        recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__Term_3, (MR_Integer) 2)));
#line 317 "recompilation.m"
        recompilation__succeeded = ((((MR_tag((MR_Word) recompilation__V_7_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__V_7_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 317 "recompilation.m"
        if (recompilation__succeeded)
#line 317 "recompilation.m"
          {
#line 317 "recompilation.m"
            recompilation__TimestampString_5 = ((MR_String) (MR_hl_field(MR_mktag(3), recompilation__V_7_7, (MR_Integer) 1)));
#line 317 "recompilation.m"
            recompilation__succeeded = (recompilation__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 317 "recompilation.m"
            if (recompilation__succeeded)
#line 318 "recompilation.m"
              {
#line 318 "recompilation.m"
                recompilation__succeeded = libs__timestamp__string_to_timestamp_1_f_0(recompilation__TimestampString_5, recompilation__HeadVar__2_2);
              }
#line 317 "recompilation.m"
          }
#line 317 "recompilation.m"
      }
#line 317 "recompilation.m"
    return recompilation__succeeded;
#line 317 "recompilation.m"
  }
#line 55 "recompilation.m"
}

#line 53 "recompilation.m"
void MR_CALL 
recompilation__write_version_number_3_p_0(
#line 53 "recompilation.m"
  MR_Word recompilation__VersionNumber_4)
#line 53 "recompilation.m"
{
#line 320 "recompilation.m"
  {
#line 320 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 320 "recompilation.m"
    MR_String recompilation__V_10_10;

#line 321 "recompilation.m"
    {
#line 321 "recompilation.m"
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
#line 322 "recompilation.m"
    {
#line 322 "recompilation.m"
      recompilation__V_10_10 = libs__timestamp__timestamp_to_string_1_f_0(recompilation__VersionNumber_4);
    }
#line 322 "recompilation.m"
    {
#line 322 "recompilation.m"
      mercury__io__write_string_3_p_0(recompilation__V_10_10);
    }
#line 323 "recompilation.m"
    {
#line 323 "recompilation.m"
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
#line 320 "recompilation.m"
  }
#line 53 "recompilation.m"
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
