/*
** Automatically generated from `recompilation.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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




#line 139 "recompilation.c"
static const MR_VA_PseudoTypeInfo_Struct3 recompilation____vpti_func_3__plain_recompilation__type_ctor_info_item_type_0__pseudo_1__pseudo_2;

#line 142 "recompilation.c"
static const MR_FA_PseudoTypeInfo_Struct3 recompilation__recompilation__pti_item_id_set_3__pseudo_1__pseudo_1__pseudo_1;

#line 145 "recompilation.c"
static const MR_FA_PseudoTypeInfo_Struct3 recompilation__recompilation__pti_item_id_set_3__pseudo_2__pseudo_2__pseudo_2;

#line 148 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

#line 151 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0;

#line 154 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0;

#line 157 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0;

#line 160 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_id_0_0[2];

#line 163 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_item_id_0_0;

#line 166 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_id_0_0[1];

#line 169 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_id_0[1];

#line 172 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_id_0[1];

#line 175 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_id_0[1];

#line 178 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_id_set_3_0[10];

#line 181 "recompilation.c"
static const MR_ConstString recompilation__recompilation__field_names_item_id_set_3_0[10];

#line 184 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_item_id_set_3_0;

#line 187 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_id_set_3_0[1];

#line 190 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_id_set_3[1];

#line 193 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_id_set_3[1];

#line 196 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_id_set_3[1];

#line 199 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_name_0_0[2];

#line 202 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_item_name_0_0;

#line 205 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_name_0_0[1];

#line 208 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_name_0[1];

#line 211 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_name_0[1];

#line 214 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_name_0[1];

#line 217 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_0;

#line 220 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_1;

#line 223 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_2;

#line 226 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_3;

#line 229 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_4;

#line 232 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_5;

#line 235 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_6;

#line 238 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_7;

#line 241 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_8;

#line 244 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_9;

#line 247 "recompilation.c"
static const MR_EnumFunctorDescPtr recompilation__recompilation__enum_value_ordered_item_type_0[10];

#line 250 "recompilation.c"
static const MR_EnumFunctorDescPtr recompilation__recompilation__enum_name_ordered_item_type_0[10];

#line 253 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_type_0[10];

#line 256 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0;

#line 259 "recompilation.c"
static const MR_FA_TypeInfo_Struct3 recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0;

#line 262 "recompilation.c"
static const MR_FA_TypeInfo_Struct3 recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0;

#line 265 "recompilation.c"
static const MR_FA_TypeInfo_Struct1 recompilation__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0;

#line 268 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_id_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0;

#line 271 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0;

#line 274 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_recompilation_info_0_0[4];

#line 277 "recompilation.c"
static const MR_ConstString recompilation__recompilation__field_names_recompilation_info_0_0[4];

#line 280 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_recompilation_info_0_0;

#line 283 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_recompilation_info_0_0[1];

#line 286 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_recompilation_info_0[1];

#line 289 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_recompilation_info_0[1];

#line 292 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_recompilation_info_0[1];

#line 295 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_version_numbers_0_0[2];

#line 298 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_version_numbers_0_0;

#line 301 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_version_numbers_0_0[1];

#line 304 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_version_numbers_0[1];

#line 307 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_version_numbers_0[1];

#line 310 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_version_numbers_0[1];

#line 313 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____functor_set_0_0_10001(
#line 316 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 318 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 321 "recompilation.c"
static void MR_CALL 
recompilation____Compare____functor_set_0_0_10001(
#line 324 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 326 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 328 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 331 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____instance_version_numbers_0_0_10001(
#line 334 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 336 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 339 "recompilation.c"
static void MR_CALL 
recompilation____Compare____instance_version_numbers_0_0_10001(
#line 342 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 344 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 346 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 349 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_id_0_0_10001(
#line 352 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 354 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 357 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_id_0_0_10001(
#line 360 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 362 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 364 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 367 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_id_set_3_0_10001(
#line 370 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 372 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 374 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3,
#line 376 "recompilation.c"
  MR_Box recompilation__wrapper_arg_4,
#line 378 "recompilation.c"
  MR_Box recompilation__wrapper_arg_5);

#line 381 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_id_set_3_0_10001(
#line 384 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 386 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 388 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3,
#line 390 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_4,
#line 392 "recompilation.c"
  MR_Box recompilation__wrapper_arg_5,
#line 394 "recompilation.c"
  MR_Box recompilation__wrapper_arg_6);

#line 397 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_id_set_1_0_10001(
#line 400 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 402 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 404 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 407 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_id_set_1_0_10001(
#line 410 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 412 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_2,
#line 414 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3,
#line 416 "recompilation.c"
  MR_Box recompilation__wrapper_arg_4);

#line 419 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_name_0_0_10001(
#line 422 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 424 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 427 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_name_0_0_10001(
#line 430 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 432 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 434 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 437 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_type_0_0_10001(
#line 440 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 442 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 445 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_type_0_0_10001(
#line 448 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 450 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 452 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 455 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_version_numbers_0_0_10001(
#line 458 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 460 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 463 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_version_numbers_0_0_10001(
#line 466 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 468 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 470 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 473 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____module_qualifier_0_0_10001(
#line 476 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 478 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 481 "recompilation.c"
static void MR_CALL 
recompilation____Compare____module_qualifier_0_0_10001(
#line 484 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 486 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 488 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 491 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____pred_or_func_set_0_0_10001(
#line 494 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 496 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 499 "recompilation.c"
static void MR_CALL 
recompilation____Compare____pred_or_func_set_0_0_10001(
#line 502 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 504 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 506 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 509 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____recompilation_info_0_0_10001(
#line 512 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 514 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 517 "recompilation.c"
static void MR_CALL 
recompilation____Compare____recompilation_info_0_0_10001(
#line 520 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 522 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 524 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 527 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____simple_item_set_0_0_10001(
#line 530 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 532 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 535 "recompilation.c"
static void MR_CALL 
recompilation____Compare____simple_item_set_0_0_10001(
#line 538 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 540 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 542 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 545 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____used_items_0_0_10001(
#line 548 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 550 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 553 "recompilation.c"
static void MR_CALL 
recompilation____Compare____used_items_0_0_10001(
#line 556 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 558 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 560 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 563 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____version_number_0_0_10001(
#line 566 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 568 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 571 "recompilation.c"
static void MR_CALL 
recompilation____Compare____version_number_0_0_10001(
#line 574 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 576 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 578 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 581 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____version_number_map_0_0_10001(
#line 584 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 586 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 589 "recompilation.c"
static void MR_CALL 
recompilation____Compare____version_number_map_0_0_10001(
#line 592 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 594 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 596 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 599 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____version_numbers_0_0_10001(
#line 602 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 604 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 607 "recompilation.c"
static void MR_CALL 
recompilation____Compare____version_numbers_0_0_10001(
#line 610 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 612 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 614 "recompilation.c"
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



#line 818 "recompilation.c"
static const MR_VA_PseudoTypeInfo_Struct3 recompilation____vpti_func_3__plain_recompilation__type_ctor_info_item_type_0__pseudo_1__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_type_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 829 "recompilation.c"
static const MR_FA_PseudoTypeInfo_Struct3 recompilation__recompilation__pti_item_id_set_3__pseudo_1__pseudo_1__pseudo_1 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 839 "recompilation.c"
static const MR_FA_PseudoTypeInfo_Struct3 recompilation__recompilation__pti_item_id_set_3__pseudo_2__pseudo_2__pseudo_2 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 849 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 858 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
  }
};

#line 867 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0
  }
};

#line 876 "recompilation.c"
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

#line 897 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_name_0,
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 906 "recompilation.c"
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

#line 927 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_id_0_0[2] = {
  (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_type_0,
  (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_name_0
};

#line 933 "recompilation.c"
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

#line 948 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_id_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_id_0_0
};

#line 953 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_item_id_0_0
  }
};

#line 962 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_id_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_id_0_0
};

#line 967 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_id_0[1] = {
  (MR_Integer) 0
};

#line 972 "recompilation.c"
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

#line 993 "recompilation.c"
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

#line 1007 "recompilation.c"
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

#line 1021 "recompilation.c"
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

#line 1036 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_id_set_3_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_id_set_3_0
};

#line 1041 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_id_set_3[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_item_id_set_3_0
  }
};

#line 1050 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_id_set_3[1] = {
  &recompilation__recompilation__du_functor_desc_item_id_set_3_0
};

#line 1055 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_id_set_3[1] = {
  (MR_Integer) 0
};

#line 1060 "recompilation.c"
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

#line 1081 "recompilation.c"
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

#line 1102 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_name_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1108 "recompilation.c"
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

#line 1123 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_name_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_name_0_0
};

#line 1128 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_name_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_item_name_0_0
  }
};

#line 1137 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_name_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_name_0_0
};

#line 1142 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_name_0[1] = {
  (MR_Integer) 0
};

#line 1147 "recompilation.c"
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

#line 1168 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_0 = {
  (MR_String) "type_abstract_item",
  (MR_Integer) 0
};

#line 1174 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_1 = {
  (MR_String) "type_body_item",
  (MR_Integer) 1
};

#line 1180 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_2 = {
  (MR_String) "mode_item",
  (MR_Integer) 2
};

#line 1186 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_3 = {
  (MR_String) "inst_item",
  (MR_Integer) 3
};

#line 1192 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_4 = {
  (MR_String) "typeclass_item",
  (MR_Integer) 4
};

#line 1198 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_5 = {
  (MR_String) "functor_item",
  (MR_Integer) 5
};

#line 1204 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_6 = {
  (MR_String) "predicate_item",
  (MR_Integer) 6
};

#line 1210 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_7 = {
  (MR_String) "function_item",
  (MR_Integer) 7
};

#line 1216 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_8 = {
  (MR_String) "mutable_item",
  (MR_Integer) 8
};

#line 1222 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_9 = {
  (MR_String) "foreign_proc_item",
  (MR_Integer) 9
};

#line 1228 "recompilation.c"
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

#line 1242 "recompilation.c"
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

#line 1256 "recompilation.c"
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

#line 1270 "recompilation.c"
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

#line 1291 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 1300 "recompilation.c"
static const MR_FA_TypeInfo_Struct3 recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0,
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0,
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 1310 "recompilation.c"
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

#line 1331 "recompilation.c"
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

#line 1352 "recompilation.c"
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

#line 1373 "recompilation.c"
static const MR_FA_TypeInfo_Struct3 recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0
  }
};

#line 1383 "recompilation.c"
static const MR_FA_TypeInfo_Struct1 recompilation__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_id_0
  }
};

#line 1391 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_id_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_id_0,
    (MR_TypeInfo) &recompilation__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0
  }
};

#line 1400 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_version_numbers_0
  }
};

#line 1409 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_recompilation_info_0_0[4] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_id_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0,
  (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0
};

#line 1417 "recompilation.c"
static const MR_ConstString recompilation__recompilation__field_names_recompilation_info_0_0[4] = {
  (MR_String) "module_name",
  (MR_String) "used_items",
  (MR_String) "dependencies",
  (MR_String) "version_numbers"
};

#line 1425 "recompilation.c"
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

#line 1440 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_recompilation_info_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_recompilation_info_0_0
};

#line 1445 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_recompilation_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_recompilation_info_0_0
  }
};

#line 1454 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_recompilation_info_0[1] = {
  &recompilation__recompilation__du_functor_desc_recompilation_info_0_0
};

#line 1459 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_recompilation_info_0[1] = {
  (MR_Integer) 0
};

#line 1464 "recompilation.c"
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

#line 1485 "recompilation.c"
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

#line 1506 "recompilation.c"
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

#line 1527 "recompilation.c"
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

#line 1548 "recompilation.c"
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

#line 1569 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_version_numbers_0_0[2] = {
  (MR_PseudoTypeInfo) &recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0,
  (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0
};

#line 1575 "recompilation.c"
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

#line 1590 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_version_numbers_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_version_numbers_0_0
};

#line 1595 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_version_numbers_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_version_numbers_0_0
  }
};

#line 1604 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_version_numbers_0[1] = {
  &recompilation__recompilation__du_functor_desc_version_numbers_0_0
};

#line 1609 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_version_numbers_0[1] = {
  (MR_Integer) 0
};

#line 1614 "recompilation.c"
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

#line 1635 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____functor_set_0_0_10001(
#line 1638 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 1640 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 1642 "recompilation.c"
{
#line 1644 "recompilation.c"
  {
#line 1646 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 1649 "recompilation.c"
    {
#line 1651 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____functor_set_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 1654 "recompilation.c"
    return recompilation__succeeded;
#line 1656 "recompilation.c"
  }
#line 1658 "recompilation.c"
}

#line 1661 "recompilation.c"
static void MR_CALL 
recompilation____Compare____functor_set_0_0_10001(
#line 1664 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 1666 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 1668 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 1670 "recompilation.c"
{
#line 1672 "recompilation.c"
  {
#line 1674 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 1677 "recompilation.c"
    {
#line 1679 "recompilation.c"
      recompilation____Compare____functor_set_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 1682 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 1684 "recompilation.c"
  }
#line 1686 "recompilation.c"
}

#line 1689 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____instance_version_numbers_0_0_10001(
#line 1692 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 1694 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 1696 "recompilation.c"
{
#line 1698 "recompilation.c"
  {
#line 1700 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 1703 "recompilation.c"
    {
#line 1705 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____instance_version_numbers_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 1708 "recompilation.c"
    return recompilation__succeeded;
#line 1710 "recompilation.c"
  }
#line 1712 "recompilation.c"
}

#line 1715 "recompilation.c"
static void MR_CALL 
recompilation____Compare____instance_version_numbers_0_0_10001(
#line 1718 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 1720 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 1722 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 1724 "recompilation.c"
{
#line 1726 "recompilation.c"
  {
#line 1728 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 1731 "recompilation.c"
    {
#line 1733 "recompilation.c"
      recompilation____Compare____instance_version_numbers_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 1736 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 1738 "recompilation.c"
  }
#line 1740 "recompilation.c"
}

#line 1743 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_id_0_0_10001(
#line 1746 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 1748 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 1750 "recompilation.c"
{
#line 1752 "recompilation.c"
  {
#line 1754 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 1757 "recompilation.c"
    {
#line 1759 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____item_id_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 1762 "recompilation.c"
    return recompilation__succeeded;
#line 1764 "recompilation.c"
  }
#line 1766 "recompilation.c"
}

#line 1769 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_id_0_0_10001(
#line 1772 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 1774 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 1776 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 1778 "recompilation.c"
{
#line 1780 "recompilation.c"
  {
#line 1782 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 1785 "recompilation.c"
    {
#line 1787 "recompilation.c"
      recompilation____Compare____item_id_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 1790 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 1792 "recompilation.c"
  }
#line 1794 "recompilation.c"
}

#line 1797 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_id_set_3_0_10001(
#line 1800 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 1802 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 1804 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3,
#line 1806 "recompilation.c"
  MR_Box recompilation__wrapper_arg_4,
#line 1808 "recompilation.c"
  MR_Box recompilation__wrapper_arg_5)
#line 1810 "recompilation.c"
{
#line 1812 "recompilation.c"
  {
#line 1814 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 1817 "recompilation.c"
    {
#line 1819 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____item_id_set_3_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3), ((MR_Word) recompilation__wrapper_arg_4), ((MR_Word) recompilation__wrapper_arg_5));
    }
#line 1822 "recompilation.c"
    return recompilation__succeeded;
#line 1824 "recompilation.c"
  }
#line 1826 "recompilation.c"
}

#line 1829 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_id_set_3_0_10001(
#line 1832 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 1834 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 1836 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3,
#line 1838 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_4,
#line 1840 "recompilation.c"
  MR_Box recompilation__wrapper_arg_5,
#line 1842 "recompilation.c"
  MR_Box recompilation__wrapper_arg_6)
#line 1844 "recompilation.c"
{
#line 1846 "recompilation.c"
  {
#line 1848 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 1851 "recompilation.c"
    {
#line 1853 "recompilation.c"
      recompilation____Compare____item_id_set_3_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3), &recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_5), ((MR_Word) recompilation__wrapper_arg_6));
    }
#line 1856 "recompilation.c"
    *recompilation__wrapper_arg_4 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 1858 "recompilation.c"
  }
#line 1860 "recompilation.c"
}

#line 1863 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_id_set_1_0_10001(
#line 1866 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 1868 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 1870 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 1872 "recompilation.c"
{
#line 1874 "recompilation.c"
  {
#line 1876 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 1879 "recompilation.c"
    {
#line 1881 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____item_id_set_1_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 1884 "recompilation.c"
    return recompilation__succeeded;
#line 1886 "recompilation.c"
  }
#line 1888 "recompilation.c"
}

#line 1891 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_id_set_1_0_10001(
#line 1894 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 1896 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_2,
#line 1898 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3,
#line 1900 "recompilation.c"
  MR_Box recompilation__wrapper_arg_4)
#line 1902 "recompilation.c"
{
#line 1904 "recompilation.c"
  {
#line 1906 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 1909 "recompilation.c"
    {
#line 1911 "recompilation.c"
      recompilation____Compare____item_id_set_1_0(((MR_Word) recompilation__wrapper_arg_1), &recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_3), ((MR_Word) recompilation__wrapper_arg_4));
    }
#line 1914 "recompilation.c"
    *recompilation__wrapper_arg_2 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 1916 "recompilation.c"
  }
#line 1918 "recompilation.c"
}

#line 1921 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_name_0_0_10001(
#line 1924 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 1926 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 1928 "recompilation.c"
{
#line 1930 "recompilation.c"
  {
#line 1932 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 1935 "recompilation.c"
    {
#line 1937 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____item_name_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 1940 "recompilation.c"
    return recompilation__succeeded;
#line 1942 "recompilation.c"
  }
#line 1944 "recompilation.c"
}

#line 1947 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_name_0_0_10001(
#line 1950 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 1952 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 1954 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 1956 "recompilation.c"
{
#line 1958 "recompilation.c"
  {
#line 1960 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 1963 "recompilation.c"
    {
#line 1965 "recompilation.c"
      recompilation____Compare____item_name_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 1968 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 1970 "recompilation.c"
  }
#line 1972 "recompilation.c"
}

#line 1975 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_type_0_0_10001(
#line 1978 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 1980 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 1982 "recompilation.c"
{
#line 1984 "recompilation.c"
  {
#line 1986 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 1989 "recompilation.c"
    {
#line 1991 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____item_type_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 1994 "recompilation.c"
    return recompilation__succeeded;
#line 1996 "recompilation.c"
  }
#line 1998 "recompilation.c"
}

#line 2001 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_type_0_0_10001(
#line 2004 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2006 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2008 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2010 "recompilation.c"
{
#line 2012 "recompilation.c"
  {
#line 2014 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2017 "recompilation.c"
    {
#line 2019 "recompilation.c"
      recompilation____Compare____item_type_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2022 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2024 "recompilation.c"
  }
#line 2026 "recompilation.c"
}

#line 2029 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_version_numbers_0_0_10001(
#line 2032 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2034 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2036 "recompilation.c"
{
#line 2038 "recompilation.c"
  {
#line 2040 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2043 "recompilation.c"
    {
#line 2045 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____item_version_numbers_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2048 "recompilation.c"
    return recompilation__succeeded;
#line 2050 "recompilation.c"
  }
#line 2052 "recompilation.c"
}

#line 2055 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_version_numbers_0_0_10001(
#line 2058 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2060 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2062 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2064 "recompilation.c"
{
#line 2066 "recompilation.c"
  {
#line 2068 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2071 "recompilation.c"
    {
#line 2073 "recompilation.c"
      recompilation____Compare____item_version_numbers_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2076 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2078 "recompilation.c"
  }
#line 2080 "recompilation.c"
}

#line 2083 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____module_qualifier_0_0_10001(
#line 2086 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2088 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2090 "recompilation.c"
{
#line 2092 "recompilation.c"
  {
#line 2094 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2097 "recompilation.c"
    {
#line 2099 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____module_qualifier_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2102 "recompilation.c"
    return recompilation__succeeded;
#line 2104 "recompilation.c"
  }
#line 2106 "recompilation.c"
}

#line 2109 "recompilation.c"
static void MR_CALL 
recompilation____Compare____module_qualifier_0_0_10001(
#line 2112 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2114 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2116 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2118 "recompilation.c"
{
#line 2120 "recompilation.c"
  {
#line 2122 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2125 "recompilation.c"
    {
#line 2127 "recompilation.c"
      recompilation____Compare____module_qualifier_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2130 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2132 "recompilation.c"
  }
#line 2134 "recompilation.c"
}

#line 2137 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____pred_or_func_set_0_0_10001(
#line 2140 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2142 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2144 "recompilation.c"
{
#line 2146 "recompilation.c"
  {
#line 2148 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2151 "recompilation.c"
    {
#line 2153 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____pred_or_func_set_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2156 "recompilation.c"
    return recompilation__succeeded;
#line 2158 "recompilation.c"
  }
#line 2160 "recompilation.c"
}

#line 2163 "recompilation.c"
static void MR_CALL 
recompilation____Compare____pred_or_func_set_0_0_10001(
#line 2166 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2168 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2170 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2172 "recompilation.c"
{
#line 2174 "recompilation.c"
  {
#line 2176 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2179 "recompilation.c"
    {
#line 2181 "recompilation.c"
      recompilation____Compare____pred_or_func_set_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2184 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2186 "recompilation.c"
  }
#line 2188 "recompilation.c"
}

#line 2191 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____recompilation_info_0_0_10001(
#line 2194 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2196 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2198 "recompilation.c"
{
#line 2200 "recompilation.c"
  {
#line 2202 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2205 "recompilation.c"
    {
#line 2207 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____recompilation_info_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2210 "recompilation.c"
    return recompilation__succeeded;
#line 2212 "recompilation.c"
  }
#line 2214 "recompilation.c"
}

#line 2217 "recompilation.c"
static void MR_CALL 
recompilation____Compare____recompilation_info_0_0_10001(
#line 2220 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2222 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2224 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2226 "recompilation.c"
{
#line 2228 "recompilation.c"
  {
#line 2230 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2233 "recompilation.c"
    {
#line 2235 "recompilation.c"
      recompilation____Compare____recompilation_info_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2238 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2240 "recompilation.c"
  }
#line 2242 "recompilation.c"
}

#line 2245 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____simple_item_set_0_0_10001(
#line 2248 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2250 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2252 "recompilation.c"
{
#line 2254 "recompilation.c"
  {
#line 2256 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2259 "recompilation.c"
    {
#line 2261 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____simple_item_set_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2264 "recompilation.c"
    return recompilation__succeeded;
#line 2266 "recompilation.c"
  }
#line 2268 "recompilation.c"
}

#line 2271 "recompilation.c"
static void MR_CALL 
recompilation____Compare____simple_item_set_0_0_10001(
#line 2274 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2276 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2278 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2280 "recompilation.c"
{
#line 2282 "recompilation.c"
  {
#line 2284 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2287 "recompilation.c"
    {
#line 2289 "recompilation.c"
      recompilation____Compare____simple_item_set_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2292 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2294 "recompilation.c"
  }
#line 2296 "recompilation.c"
}

#line 2299 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____used_items_0_0_10001(
#line 2302 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2304 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2306 "recompilation.c"
{
#line 2308 "recompilation.c"
  {
#line 2310 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2313 "recompilation.c"
    {
#line 2315 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____used_items_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2318 "recompilation.c"
    return recompilation__succeeded;
#line 2320 "recompilation.c"
  }
#line 2322 "recompilation.c"
}

#line 2325 "recompilation.c"
static void MR_CALL 
recompilation____Compare____used_items_0_0_10001(
#line 2328 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2330 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2332 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2334 "recompilation.c"
{
#line 2336 "recompilation.c"
  {
#line 2338 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2341 "recompilation.c"
    {
#line 2343 "recompilation.c"
      recompilation____Compare____used_items_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2346 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2348 "recompilation.c"
  }
#line 2350 "recompilation.c"
}

#line 2353 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____version_number_0_0_10001(
#line 2356 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2358 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2360 "recompilation.c"
{
#line 2362 "recompilation.c"
  {
#line 2364 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2367 "recompilation.c"
    {
#line 2369 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____version_number_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2372 "recompilation.c"
    return recompilation__succeeded;
#line 2374 "recompilation.c"
  }
#line 2376 "recompilation.c"
}

#line 2379 "recompilation.c"
static void MR_CALL 
recompilation____Compare____version_number_0_0_10001(
#line 2382 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2384 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2386 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2388 "recompilation.c"
{
#line 2390 "recompilation.c"
  {
#line 2392 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2395 "recompilation.c"
    {
#line 2397 "recompilation.c"
      recompilation____Compare____version_number_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2400 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2402 "recompilation.c"
  }
#line 2404 "recompilation.c"
}

#line 2407 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____version_number_map_0_0_10001(
#line 2410 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2412 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2414 "recompilation.c"
{
#line 2416 "recompilation.c"
  {
#line 2418 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2421 "recompilation.c"
    {
#line 2423 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____version_number_map_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2426 "recompilation.c"
    return recompilation__succeeded;
#line 2428 "recompilation.c"
  }
#line 2430 "recompilation.c"
}

#line 2433 "recompilation.c"
static void MR_CALL 
recompilation____Compare____version_number_map_0_0_10001(
#line 2436 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2438 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2440 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2442 "recompilation.c"
{
#line 2444 "recompilation.c"
  {
#line 2446 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2449 "recompilation.c"
    {
#line 2451 "recompilation.c"
      recompilation____Compare____version_number_map_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2454 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2456 "recompilation.c"
  }
#line 2458 "recompilation.c"
}

#line 2461 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____version_numbers_0_0_10001(
#line 2464 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2466 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2468 "recompilation.c"
{
#line 2470 "recompilation.c"
  {
#line 2472 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2475 "recompilation.c"
    {
#line 2477 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____version_numbers_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2480 "recompilation.c"
    return recompilation__succeeded;
#line 2482 "recompilation.c"
  }
#line 2484 "recompilation.c"
}

#line 2487 "recompilation.c"
static void MR_CALL 
recompilation____Compare____version_numbers_0_0_10001(
#line 2490 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2492 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2494 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2496 "recompilation.c"
{
#line 2498 "recompilation.c"
  {
#line 2500 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2503 "recompilation.c"
    {
#line 2505 "recompilation.c"
      recompilation____Compare____version_numbers_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2508 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2510 "recompilation.c"
  }
#line 2512 "recompilation.c"
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
#line 384 "recompilation.m"
    MR_Box MR_CALL (* recompilation__func_0)(MR_Box, MR_Box, MR_Box);

#line 384 "recompilation.m"
    {
#line 384 "recompilation.m"
      recompilation__V_17_17 = recompilation__extract_ids_2_f_0(recompilation__TypeInfo_for_T_37, recompilation__Items0_6, recompilation__HeadVar__5_13);
    }
#line 384 "recompilation.m"
    recompilation__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), recompilation__Func_5, (MR_Integer) 1)));
#line 384 "recompilation.m"
    {
#line 384 "recompilation.m"
      recompilation__V_16_16 = recompilation__func_0(((MR_Box) recompilation__Func_5), ((MR_Box) (recompilation__HeadVar__5_13)), recompilation__V_17_17);
    }
#line 383 "recompilation.m"
    {
#line 383 "recompilation.m"
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
#line 2593 "recompilation.c"
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
#line 2615 "recompilation.c"
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

#line 2684 "recompilation.c"
        {
#line 2686 "recompilation.c"
          recompilation__succeeded = recompilation____Unify____item_id_set_3_0(recompilation__TypeInfo_9_9, recompilation__TypeInfo_9_9, recompilation__TypeInfo_9_9, recompilation__V_3_3, recompilation__V_5_5);
        }
#line 236 "recompilation.m"
        if (recompilation__succeeded)
#line 236 "recompilation.m"
          {
#line 2693 "recompilation.c"
            recompilation__TypeInfo_10_10 = (MR_Word) &recompilation_scalar_common_2[3];
#line 2695 "recompilation.c"
            {
#line 2697 "recompilation.c"
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
#line 2985 "recompilation.c"
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
#line 3015 "recompilation.c"
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
#line 3035 "recompilation.c"
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
#line 3055 "recompilation.c"
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

#line 3138 "recompilation.c"
        {
#line 3140 "recompilation.c"
          recompilation__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(recompilation__V_3_3, recompilation__V_7_7);
        }
#line 119 "recompilation.m"
        if (recompilation__succeeded)
#line 119 "recompilation.m"
          {
#line 3147 "recompilation.c"
            recompilation__TypeInfo_14_14 = (MR_Word) &recompilation_scalar_common_2[2];
#line 3149 "recompilation.c"
            {
#line 3151 "recompilation.c"
              recompilation__succeeded = recompilation____Unify____item_id_set_3_0(recompilation__TypeInfo_14_14, recompilation__TypeInfo_14_14, recompilation__TypeInfo_14_14, recompilation__V_4_4, recompilation__V_8_8);
            }
#line 119 "recompilation.m"
            if (recompilation__succeeded)
#line 119 "recompilation.m"
              {
#line 3158 "recompilation.c"
                recompilation__TypeInfo_15_15 = (MR_Word) &recompilation_scalar_common_2[5];
#line 3160 "recompilation.c"
                {
#line 3162 "recompilation.c"
                  recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_15_15, ((MR_Box) (recompilation__V_5_5)), ((MR_Box) (recompilation__V_9_9)));
                }
#line 119 "recompilation.m"
                if (recompilation__succeeded)
#line 119 "recompilation.m"
                  {
#line 3169 "recompilation.c"
                    recompilation__TypeInfo_16_16 = (MR_Word) &recompilation_scalar_common_2[6];
#line 3171 "recompilation.c"
                    {
#line 3173 "recompilation.c"
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
#line 3420 "recompilation.c"
  {
#line 3422 "recompilation.c"
    MR_bool recompilation__succeeded = (recompilation__HeadVar__2_1 == recompilation__HeadVar__2_2);

#line 3425 "recompilation.c"
    return recompilation__succeeded;
#line 3427 "recompilation.c"
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
#line 3456 "recompilation.c"
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
#line 3478 "recompilation.c"
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

#line 3539 "recompilation.c"
        {
#line 3541 "recompilation.c"
          recompilation__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(recompilation__V_3_3, recompilation__V_5_5);
        }
#line 65 "recompilation.m"
        if (recompilation__succeeded)
#line 3546 "recompilation.c"
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
#line 3587 "recompilation.c"
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
#line 3641 "recompilation.c"
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
#line 3661 "recompilation.c"
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
#line 3681 "recompilation.c"
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
#line 3701 "recompilation.c"
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
#line 3721 "recompilation.c"
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
#line 3741 "recompilation.c"
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
#line 3761 "recompilation.c"
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
#line 3781 "recompilation.c"
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
#line 3801 "recompilation.c"
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

#line 3916 "recompilation.c"
        {
#line 3918 "recompilation.c"
          recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Map_25, recompilation__V_3_3, recompilation__V_13_13);
        }
#line 164 "recompilation.m"
        if (recompilation__succeeded)
#line 164 "recompilation.m"
          {
#line 3925 "recompilation.c"
            {
#line 3927 "recompilation.c"
              recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Map_25, recompilation__V_4_4, recompilation__V_14_14);
            }
#line 164 "recompilation.m"
            if (recompilation__succeeded)
#line 164 "recompilation.m"
              {
#line 3934 "recompilation.c"
                {
#line 3936 "recompilation.c"
                  recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Map_25, recompilation__V_5_5, recompilation__V_15_15);
                }
#line 164 "recompilation.m"
                if (recompilation__succeeded)
#line 164 "recompilation.m"
                  {
#line 3943 "recompilation.c"
                    {
#line 3945 "recompilation.c"
                      recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Map_25, recompilation__V_6_6, recompilation__V_16_16);
                    }
#line 164 "recompilation.m"
                    if (recompilation__succeeded)
#line 164 "recompilation.m"
                      {
#line 3952 "recompilation.c"
                        {
#line 3954 "recompilation.c"
                          recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Map_25, recompilation__V_7_7, recompilation__V_17_17);
                        }
#line 164 "recompilation.m"
                        if (recompilation__succeeded)
#line 164 "recompilation.m"
                          {
#line 3961 "recompilation.c"
                            {
#line 3963 "recompilation.c"
                              recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Cons_27, recompilation__V_8_8, recompilation__V_18_18);
                            }
#line 164 "recompilation.m"
                            if (recompilation__succeeded)
#line 164 "recompilation.m"
                              {
#line 3970 "recompilation.c"
                                {
#line 3972 "recompilation.c"
                                  recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Set_26, recompilation__V_9_9, recompilation__V_19_19);
                                }
#line 164 "recompilation.m"
                                if (recompilation__succeeded)
#line 164 "recompilation.m"
                                  {
#line 3979 "recompilation.c"
                                    {
#line 3981 "recompilation.c"
                                      recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Set_26, recompilation__V_10_10, recompilation__V_20_20);
                                    }
#line 164 "recompilation.m"
                                    if (recompilation__succeeded)
#line 164 "recompilation.m"
                                      {
#line 3988 "recompilation.c"
                                        {
#line 3990 "recompilation.c"
                                          recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Set_26, recompilation__V_11_11, recompilation__V_21_21);
                                        }
#line 164 "recompilation.m"
                                        if (recompilation__succeeded)
#line 3995 "recompilation.c"
                                          {
#line 3997 "recompilation.c"
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
#line 4115 "recompilation.c"
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
#line 4141 "recompilation.c"
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

#line 4202 "recompilation.c"
        recompilation__succeeded = (recompilation__V_3_3 == recompilation__V_5_5);
#line 62 "recompilation.m"
        if (recompilation__succeeded)
#line 4206 "recompilation.c"
          {
#line 4208 "recompilation.c"
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
#line 397 "recompilation.m"
      {
#line 397 "recompilation.m"
        recompilation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 397 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, 0) = ((MR_Box) (recompilation__Name_5));
#line 397 "recompilation.m"
      }
#line 395 "recompilation.m"
    else
#line 399 "recompilation.m"
      {
#line 399 "recompilation.m"
        recompilation__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 399 "recompilation.m"
        MR_hl_field(MR_mktag(1), recompilation__HeadVar__3_3, 0) = ((MR_Box) (recompilation__Qualifier_4));
#line 399 "recompilation.m"
        MR_hl_field(MR_mktag(1), recompilation__HeadVar__3_3, 1) = ((MR_Box) (recompilation__Name_5));
#line 399 "recompilation.m"
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

#line 325 "recompilation.m"
    {
#line 325 "recompilation.m"
      recompilation__Items1_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 325 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 0) = recompilation__Init_7;
#line 325 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 1) = recompilation__Init_7;
#line 325 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 2) = recompilation__Init_7;
#line 325 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 3) = recompilation__Init_7;
#line 325 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 4) = recompilation__Init_7;
#line 325 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 5) = recompilation__Init_7;
#line 325 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 6) = recompilation__Init_7;
#line 325 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 7) = recompilation__Init_7;
#line 325 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 8) = recompilation__Init_7;
#line 325 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 9) = recompilation__Init_7;
#line 325 "recompilation.m"
    }
#line 4533 "recompilation.c"
    {
#line 4535 "recompilation.c"
      recompilation__TypeInfo_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 4537 "recompilation.c"
      MR_hl_field(MR_mktag(0), recompilation__TypeInfo_41_41, 0) = ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_set_3));
#line 4539 "recompilation.c"
      MR_hl_field(MR_mktag(0), recompilation__TypeInfo_41_41, 1) = ((MR_Box) (recompilation__TypeInfo_for_U_38));
#line 4541 "recompilation.c"
      MR_hl_field(MR_mktag(0), recompilation__TypeInfo_41_41, 2) = ((MR_Box) (recompilation__TypeInfo_for_U_38));
#line 4543 "recompilation.c"
      MR_hl_field(MR_mktag(0), recompilation__TypeInfo_41_41, 3) = ((MR_Box) (recompilation__TypeInfo_for_U_38));
#line 4545 "recompilation.c"
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
#line 332 "recompilation.m"
    {
#line 332 "recompilation.m"
      recompilation__V_6_6 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 332 "recompilation.m"
    {
#line 332 "recompilation.m"
      recompilation__V_7_7 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 332 "recompilation.m"
    {
#line 332 "recompilation.m"
      recompilation__V_8_8 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 332 "recompilation.m"
    {
#line 332 "recompilation.m"
      recompilation__V_9_9 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 332 "recompilation.m"
    {
#line 332 "recompilation.m"
      recompilation__V_10_10 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 332 "recompilation.m"
    {
#line 332 "recompilation.m"
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
#line 328 "recompilation.m"
  {
#line 328 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 328 "recompilation.m"
    MR_Word recompilation__HeadVar__4_4;

#line 328 "recompilation.m"
    {
#line 328 "recompilation.m"
      recompilation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 328 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 0) = recompilation__Simple_5;
#line 328 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 1) = recompilation__Simple_5;
#line 328 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 2) = recompilation__Simple_5;
#line 328 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 3) = recompilation__Simple_5;
#line 328 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 4) = recompilation__Simple_5;
#line 328 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 5) = recompilation__Cons_7;
#line 328 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 6) = recompilation__PorF_6;
#line 328 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 7) = recompilation__PorF_6;
#line 328 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 8) = recompilation__PorF_6;
#line 328 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 9) = recompilation__PorF_6;
#line 328 "recompilation.m"
    }
#line 328 "recompilation.m"
    return recompilation__HeadVar__4_4;
#line 328 "recompilation.m"
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
#line 325 "recompilation.m"
  {
#line 325 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 325 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;

#line 325 "recompilation.m"
    {
#line 325 "recompilation.m"
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 325 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = recompilation__Init_3;
#line 325 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = recompilation__Init_3;
#line 325 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 2) = recompilation__Init_3;
#line 325 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 3) = recompilation__Init_3;
#line 325 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 4) = recompilation__Init_3;
#line 325 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 5) = recompilation__Init_3;
#line 325 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 6) = recompilation__Init_3;
#line 325 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 7) = recompilation__Init_3;
#line 325 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 8) = recompilation__Init_3;
#line 325 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 9) = recompilation__Init_3;
#line 325 "recompilation.m"
    }
#line 325 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 325 "recompilation.m"
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
#line 5776 "recompilation.c"
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
#line 6025 "recompilation.c"
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

#line 407 "recompilation.m"
    {
#line 407 "recompilation.m"
      recompilation__V_4_4 = recompilation__init_used_items_0_f_0();
    }
#line 408 "recompilation.m"
    {
#line 408 "recompilation.m"
      recompilation__V_5_5 = mercury__map__init_0_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, (MR_Word) &recompilation_scalar_common_1[0]);
    }
#line 409 "recompilation.m"
    {
#line 409 "recompilation.m"
      recompilation__V_6_6 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0);
    }
#line 405 "recompilation.m"
    {
#line 405 "recompilation.m"
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 405 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = ((MR_Box) (recompilation__ModuleName_3));
#line 405 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = ((MR_Box) (recompilation__V_4_4));
#line 405 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 2) = ((MR_Box) (recompilation__V_5_5));
#line 405 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 3) = ((MR_Box) (recompilation__V_6_6));
#line 405 "recompilation.m"
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
#line 282 "recompilation.m"
              {
#line 282 "recompilation.m"
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
#line 282 "recompilation.m"
              {
#line 282 "recompilation.m"
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
