/*
** Automatically generated from `recompilation.m'
** by the Mercury compiler,
** version rotd-2015-07-28
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
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 142 "recompilation.c"
static const MR_VA_PseudoTypeInfo_Struct3 recompilation____vpti_func_3__plain_recompilation__type_ctor_info_item_type_0__pseudo_1__pseudo_2;

#line 145 "recompilation.c"
static const MR_FA_PseudoTypeInfo_Struct3 recompilation__recompilation__pti_item_id_set_3__pseudo_1__pseudo_1__pseudo_1;

#line 148 "recompilation.c"
static const MR_FA_PseudoTypeInfo_Struct3 recompilation__recompilation__pti_item_id_set_3__pseudo_2__pseudo_2__pseudo_2;

#line 151 "recompilation.c"
static const MR_FA_TypeInfo_Struct1 recompilation__maybe__ti_maybe_1recompilation__type_ctor_info_eqv_expanded_item_set_0;

#line 154 "recompilation.c"
static const MR_FA_TypeInfo_Struct1 recompilation__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0;

#line 157 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_eqv_expanded_item_set_0_0[2];

#line 160 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_eqv_expanded_item_set_0_0;

#line 163 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_eqv_expanded_item_set_0_0[1];

#line 166 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_eqv_expanded_item_set_0[1];

#line 169 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_eqv_expanded_item_set_0[1];

#line 172 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_eqv_expanded_item_set_0[1];

#line 175 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

#line 178 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 181 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 184 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0;

#line 187 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_id_0_0[2];

#line 190 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_item_id_0_0;

#line 193 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_id_0_0[1];

#line 196 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_id_0[1];

#line 199 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_id_0[1];

#line 202 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_id_0[1];

#line 205 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_id_set_3_0[10];

#line 208 "recompilation.c"
static const MR_ConstString recompilation__recompilation__field_names_item_id_set_3_0[10];

#line 211 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_item_id_set_3_0;

#line 214 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_id_set_3_0[1];

#line 217 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_id_set_3[1];

#line 220 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_id_set_3[1];

#line 223 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_id_set_3[1];

#line 226 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_name_0_0[2];

#line 229 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_item_name_0_0;

#line 232 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_name_0_0[1];

#line 235 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_name_0[1];

#line 238 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_name_0[1];

#line 241 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_name_0[1];

#line 244 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_0;

#line 247 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_1;

#line 250 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_2;

#line 253 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_3;

#line 256 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_4;

#line 259 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_5;

#line 262 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_6;

#line 265 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_7;

#line 268 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_8;

#line 271 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_9;

#line 274 "recompilation.c"
static const MR_EnumFunctorDescPtr recompilation__recompilation__enum_value_ordered_item_type_0[10];

#line 277 "recompilation.c"
static const MR_EnumFunctorDescPtr recompilation__recompilation__enum_name_ordered_item_type_0[10];

#line 280 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_type_0[10];

#line 283 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0;

#line 286 "recompilation.c"
static const MR_FA_TypeInfo_Struct3 recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0;

#line 289 "recompilation.c"
static const MR_FA_TypeInfo_Struct3 recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 292 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_id_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0;

#line 295 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0;

#line 298 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_recompilation_info_0_0[4];

#line 301 "recompilation.c"
static const MR_ConstString recompilation__recompilation__field_names_recompilation_info_0_0[4];

#line 304 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_recompilation_info_0_0;

#line 307 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_recompilation_info_0_0[1];

#line 310 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_recompilation_info_0[1];

#line 313 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_recompilation_info_0[1];

#line 316 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_recompilation_info_0[1];

#line 319 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_version_numbers_0_0[2];

#line 322 "recompilation.c"
static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_version_numbers_0_0;

#line 325 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_version_numbers_0_0[1];

#line 328 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_version_numbers_0[1];

#line 331 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_version_numbers_0[1];

#line 334 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_version_numbers_0[1];

#line 337 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____eqv_expanded_info_0_0_10001(
#line 340 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 342 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 345 "recompilation.c"
static void MR_CALL 
recompilation____Compare____eqv_expanded_info_0_0_10001(
#line 348 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 350 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 352 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 355 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____eqv_expanded_item_set_0_0_10001(
#line 358 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 360 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 363 "recompilation.c"
static void MR_CALL 
recompilation____Compare____eqv_expanded_item_set_0_0_10001(
#line 366 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 368 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 370 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 373 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____functor_set_0_0_10001(
#line 376 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 378 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 381 "recompilation.c"
static void MR_CALL 
recompilation____Compare____functor_set_0_0_10001(
#line 384 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 386 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 388 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 391 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____instance_version_numbers_0_0_10001(
#line 394 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 396 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 399 "recompilation.c"
static void MR_CALL 
recompilation____Compare____instance_version_numbers_0_0_10001(
#line 402 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 404 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 406 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 409 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_id_0_0_10001(
#line 412 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 414 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 417 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_id_0_0_10001(
#line 420 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 422 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 424 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 427 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_id_set_3_0_10001(
#line 430 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 432 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 434 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3,
#line 436 "recompilation.c"
  MR_Box recompilation__wrapper_arg_4,
#line 438 "recompilation.c"
  MR_Box recompilation__wrapper_arg_5);

#line 441 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_id_set_3_0_10001(
#line 444 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 446 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 448 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3,
#line 450 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_4,
#line 452 "recompilation.c"
  MR_Box recompilation__wrapper_arg_5,
#line 454 "recompilation.c"
  MR_Box recompilation__wrapper_arg_6);

#line 457 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_id_set_1_0_10001(
#line 460 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 462 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 464 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 467 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_id_set_1_0_10001(
#line 470 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 472 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_2,
#line 474 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3,
#line 476 "recompilation.c"
  MR_Box recompilation__wrapper_arg_4);

#line 479 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_name_0_0_10001(
#line 482 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 484 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 487 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_name_0_0_10001(
#line 490 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 492 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 494 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 497 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_type_0_0_10001(
#line 500 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 502 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 505 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_type_0_0_10001(
#line 508 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 510 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 512 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 515 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_version_numbers_0_0_10001(
#line 518 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 520 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 523 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_version_numbers_0_0_10001(
#line 526 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 528 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 530 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 533 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____module_qualifier_0_0_10001(
#line 536 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 538 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 541 "recompilation.c"
static void MR_CALL 
recompilation____Compare____module_qualifier_0_0_10001(
#line 544 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 546 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 548 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 551 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____pred_or_func_set_0_0_10001(
#line 554 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 556 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 559 "recompilation.c"
static void MR_CALL 
recompilation____Compare____pred_or_func_set_0_0_10001(
#line 562 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 564 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 566 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 569 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____recompilation_info_0_0_10001(
#line 572 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 574 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 577 "recompilation.c"
static void MR_CALL 
recompilation____Compare____recompilation_info_0_0_10001(
#line 580 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 582 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 584 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 587 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____simple_item_set_0_0_10001(
#line 590 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 592 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 595 "recompilation.c"
static void MR_CALL 
recompilation____Compare____simple_item_set_0_0_10001(
#line 598 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 600 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 602 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 605 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____used_items_0_0_10001(
#line 608 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 610 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 613 "recompilation.c"
static void MR_CALL 
recompilation____Compare____used_items_0_0_10001(
#line 616 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 618 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 620 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 623 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____version_number_0_0_10001(
#line 626 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 628 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 631 "recompilation.c"
static void MR_CALL 
recompilation____Compare____version_number_0_0_10001(
#line 634 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 636 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 638 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 641 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____version_number_map_0_0_10001(
#line 644 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 646 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 649 "recompilation.c"
static void MR_CALL 
recompilation____Compare____version_number_map_0_0_10001(
#line 652 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 654 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 656 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 659 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____version_numbers_0_0_10001(
#line 662 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 664 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2);

#line 667 "recompilation.c"
static void MR_CALL 
recompilation____Compare____version_numbers_0_0_10001(
#line 670 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 672 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 674 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3);

#line 432 "recompilation.m"
static MR_Word MR_CALL 
recompilation__IntroducedFrom__func__map_ids__432__1_6_f_0(
#line 432 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_38,
#line 432 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_U_39,
#line 432 "recompilation.m"
  MR_Word recompilation__Func_5,
#line 432 "recompilation.m"
  MR_Word recompilation__Items0_6,
#line 432 "recompilation.m"
  MR_Word recompilation__HeadVar__5_14,
#line 432 "recompilation.m"
  MR_Word recompilation__HeadVar__6_15);

#line 525 "recompilation.m"
static void MR_CALL 
recompilation__record_expanded_item_3_p_0_1(
#line 525 "recompilation.m"
  MR_Box recompilation__closure_arg,
#line 525 "recompilation.m"
  MR_Box recompilation__wrapper_arg_1,
#line 525 "recompilation.m"
  MR_Box * recompilation__wrapper_arg_2);

#line 432 "recompilation.m"
static MR_Box MR_CALL 
recompilation__map_ids_3_f_0_1(
#line 432 "recompilation.m"
  MR_Box recompilation__closure_arg,
#line 432 "recompilation.m"
  MR_Box recompilation__wrapper_arg_1,
#line 432 "recompilation.m"
  MR_Box recompilation__wrapper_arg_2);


static /* final */ const MR_Box recompilation_scalar_common_1[10][2];

static /* final */ const MR_Box recompilation_scalar_common_2[7][3];

static /* final */ const MR_Box recompilation_scalar_common_3[2][4];

static /* final */ const MR_Integer recompilation_scalar_common_6[1][3];

static /* final */ const MR_Box recompilation_scalar_common_7[1][10];

static /* final */ const MR_Box recompilation_scalar_common_8[1][1];

static /* final */ const MR_Box recompilation_scalar_common_9[1][6];


#line 338 "recompilation.m"
/* sealed */ struct recompilation__vector_common_type_4_0_s {
#line 338 "recompilation.m"
  const MR_String recompilation__vector_common_type_4_0__vct_4_f_0;
#line 338 "recompilation.m"
  const MR_Word recompilation__vector_common_type_4_0__vct_4_f_1;
#line 338 "recompilation.m"
};

static /* final */ const struct recompilation__vector_common_type_4_0_s recompilation_vector_common_4[32];

#line 338 "recompilation.m"
/* sealed */ struct recompilation__vector_common_type_5_0_s {
#line 338 "recompilation.m"
  const MR_String recompilation__vector_common_type_5_0__vct_5_f_0;
#line 338 "recompilation.m"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1099 "recompilation.c"
static const MR_VA_PseudoTypeInfo_Struct3 recompilation____vpti_func_3__plain_recompilation__type_ctor_info_item_type_0__pseudo_1__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_type_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1110 "recompilation.c"
static const MR_FA_PseudoTypeInfo_Struct3 recompilation__recompilation__pti_item_id_set_3__pseudo_1__pseudo_1__pseudo_1 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1120 "recompilation.c"
static const MR_FA_PseudoTypeInfo_Struct3 recompilation__recompilation__pti_item_id_set_3__pseudo_2__pseudo_2__pseudo_2 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1130 "recompilation.c"
static const MR_FA_TypeInfo_Struct1 recompilation__maybe__ti_maybe_1recompilation__type_ctor_info_eqv_expanded_item_set_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_eqv_expanded_item_set_0
  }
};

#line 1138 "recompilation.c"
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

#line 1155 "recompilation.c"
static const MR_FA_TypeInfo_Struct1 recompilation__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_id_0
  }
};

#line 1163 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_eqv_expanded_item_set_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &recompilation__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0
};

#line 1169 "recompilation.c"
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

#line 1184 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_eqv_expanded_item_set_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_eqv_expanded_item_set_0_0
};

#line 1189 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_eqv_expanded_item_set_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_eqv_expanded_item_set_0_0
  }
};

#line 1198 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_eqv_expanded_item_set_0[1] = {
  &recompilation__recompilation__du_functor_desc_eqv_expanded_item_set_0_0
};

#line 1203 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_eqv_expanded_item_set_0[1] = {
  (MR_Integer) 0
};

#line 1208 "recompilation.c"
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

#line 1225 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1234 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1243 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1252 "recompilation.c"
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

#line 1269 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_name_0,
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 1278 "recompilation.c"
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

#line 1295 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_id_0_0[2] = {
  (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_type_0,
  (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_name_0
};

#line 1301 "recompilation.c"
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

#line 1316 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_id_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_id_0_0
};

#line 1321 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_item_id_0_0
  }
};

#line 1330 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_id_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_id_0_0
};

#line 1335 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_id_0[1] = {
  (MR_Integer) 0
};

#line 1340 "recompilation.c"
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

#line 1357 "recompilation.c"
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

#line 1371 "recompilation.c"
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

#line 1385 "recompilation.c"
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

#line 1400 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_id_set_3_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_id_set_3_0
};

#line 1405 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_id_set_3[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_item_id_set_3_0
  }
};

#line 1414 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_id_set_3[1] = {
  &recompilation__recompilation__du_functor_desc_item_id_set_3_0
};

#line 1419 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_id_set_3[1] = {
  (MR_Integer) 0
};

#line 1424 "recompilation.c"
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

#line 1441 "recompilation.c"
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

#line 1458 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_name_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1464 "recompilation.c"
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

#line 1479 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_name_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_name_0_0
};

#line 1484 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_name_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_item_name_0_0
  }
};

#line 1493 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_name_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_name_0_0
};

#line 1498 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_item_name_0[1] = {
  (MR_Integer) 0
};

#line 1503 "recompilation.c"
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

#line 1520 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_0 = {
  (MR_String) "type_abstract_item",
  (MR_Integer) 0
};

#line 1526 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_1 = {
  (MR_String) "type_body_item",
  (MR_Integer) 1
};

#line 1532 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_2 = {
  (MR_String) "mode_item",
  (MR_Integer) 2
};

#line 1538 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_3 = {
  (MR_String) "inst_item",
  (MR_Integer) 3
};

#line 1544 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_4 = {
  (MR_String) "typeclass_item",
  (MR_Integer) 4
};

#line 1550 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_5 = {
  (MR_String) "functor_item",
  (MR_Integer) 5
};

#line 1556 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_6 = {
  (MR_String) "predicate_item",
  (MR_Integer) 6
};

#line 1562 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_7 = {
  (MR_String) "function_item",
  (MR_Integer) 7
};

#line 1568 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_8 = {
  (MR_String) "mutable_item",
  (MR_Integer) 8
};

#line 1574 "recompilation.c"
static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_9 = {
  (MR_String) "foreign_proc_item",
  (MR_Integer) 9
};

#line 1580 "recompilation.c"
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

#line 1594 "recompilation.c"
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

#line 1608 "recompilation.c"
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

#line 1622 "recompilation.c"
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

#line 1639 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 1648 "recompilation.c"
static const MR_FA_TypeInfo_Struct3 recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0,
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0,
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 1658 "recompilation.c"
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

#line 1675 "recompilation.c"
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

#line 1692 "recompilation.c"
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

#line 1709 "recompilation.c"
static const MR_FA_TypeInfo_Struct3 recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1719 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_id_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_id_0,
    (MR_TypeInfo) &recompilation__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0
  }
};

#line 1728 "recompilation.c"
static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_version_numbers_0
  }
};

#line 1737 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_recompilation_info_0_0[4] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_id_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0,
  (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0
};

#line 1745 "recompilation.c"
static const MR_ConstString recompilation__recompilation__field_names_recompilation_info_0_0[4] = {
  (MR_String) "recomp_module_name",
  (MR_String) "recomp_used_items",
  (MR_String) "recomp_dependencies",
  (MR_String) "recomp_version_numbers"
};

#line 1753 "recompilation.c"
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

#line 1768 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_recompilation_info_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_recompilation_info_0_0
};

#line 1773 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_recompilation_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_recompilation_info_0_0
  }
};

#line 1782 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_recompilation_info_0[1] = {
  &recompilation__recompilation__du_functor_desc_recompilation_info_0_0
};

#line 1787 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_recompilation_info_0[1] = {
  (MR_Integer) 0
};

#line 1792 "recompilation.c"
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

#line 1809 "recompilation.c"
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

#line 1826 "recompilation.c"
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

#line 1843 "recompilation.c"
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

#line 1860 "recompilation.c"
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

#line 1877 "recompilation.c"
static const MR_PseudoTypeInfo recompilation__recompilation__field_types_version_numbers_0_0[2] = {
  (MR_PseudoTypeInfo) &recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0,
  (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0
};

#line 1883 "recompilation.c"
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

#line 1898 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_version_numbers_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_version_numbers_0_0
};

#line 1903 "recompilation.c"
static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_version_numbers_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_version_numbers_0_0
  }
};

#line 1912 "recompilation.c"
static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_version_numbers_0[1] = {
  &recompilation__recompilation__du_functor_desc_version_numbers_0_0
};

#line 1917 "recompilation.c"
static const MR_Integer recompilation__recompilation__functor_number_map_version_numbers_0[1] = {
  (MR_Integer) 0
};

#line 1922 "recompilation.c"
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

#line 1939 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____eqv_expanded_info_0_0_10001(
#line 1942 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 1944 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 1946 "recompilation.c"
{
#line 1948 "recompilation.c"
  {
#line 1950 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 1953 "recompilation.c"
    {
#line 1955 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____eqv_expanded_info_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 1958 "recompilation.c"
    return recompilation__succeeded;
#line 1960 "recompilation.c"
  }
#line 1962 "recompilation.c"
}

#line 1965 "recompilation.c"
static void MR_CALL 
recompilation____Compare____eqv_expanded_info_0_0_10001(
#line 1968 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 1970 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 1972 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 1974 "recompilation.c"
{
#line 1976 "recompilation.c"
  {
#line 1978 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 1981 "recompilation.c"
    {
#line 1983 "recompilation.c"
      recompilation____Compare____eqv_expanded_info_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 1986 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 1988 "recompilation.c"
  }
#line 1990 "recompilation.c"
}

#line 1993 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____eqv_expanded_item_set_0_0_10001(
#line 1996 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 1998 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2000 "recompilation.c"
{
#line 2002 "recompilation.c"
  {
#line 2004 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2007 "recompilation.c"
    {
#line 2009 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____eqv_expanded_item_set_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2012 "recompilation.c"
    return recompilation__succeeded;
#line 2014 "recompilation.c"
  }
#line 2016 "recompilation.c"
}

#line 2019 "recompilation.c"
static void MR_CALL 
recompilation____Compare____eqv_expanded_item_set_0_0_10001(
#line 2022 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2024 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2026 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2028 "recompilation.c"
{
#line 2030 "recompilation.c"
  {
#line 2032 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2035 "recompilation.c"
    {
#line 2037 "recompilation.c"
      recompilation____Compare____eqv_expanded_item_set_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2040 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2042 "recompilation.c"
  }
#line 2044 "recompilation.c"
}

#line 2047 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____functor_set_0_0_10001(
#line 2050 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2052 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2054 "recompilation.c"
{
#line 2056 "recompilation.c"
  {
#line 2058 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2061 "recompilation.c"
    {
#line 2063 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____functor_set_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2066 "recompilation.c"
    return recompilation__succeeded;
#line 2068 "recompilation.c"
  }
#line 2070 "recompilation.c"
}

#line 2073 "recompilation.c"
static void MR_CALL 
recompilation____Compare____functor_set_0_0_10001(
#line 2076 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2078 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2080 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2082 "recompilation.c"
{
#line 2084 "recompilation.c"
  {
#line 2086 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2089 "recompilation.c"
    {
#line 2091 "recompilation.c"
      recompilation____Compare____functor_set_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2094 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2096 "recompilation.c"
  }
#line 2098 "recompilation.c"
}

#line 2101 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____instance_version_numbers_0_0_10001(
#line 2104 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2106 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2108 "recompilation.c"
{
#line 2110 "recompilation.c"
  {
#line 2112 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2115 "recompilation.c"
    {
#line 2117 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____instance_version_numbers_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2120 "recompilation.c"
    return recompilation__succeeded;
#line 2122 "recompilation.c"
  }
#line 2124 "recompilation.c"
}

#line 2127 "recompilation.c"
static void MR_CALL 
recompilation____Compare____instance_version_numbers_0_0_10001(
#line 2130 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2132 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2134 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2136 "recompilation.c"
{
#line 2138 "recompilation.c"
  {
#line 2140 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2143 "recompilation.c"
    {
#line 2145 "recompilation.c"
      recompilation____Compare____instance_version_numbers_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2148 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2150 "recompilation.c"
  }
#line 2152 "recompilation.c"
}

#line 2155 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_id_0_0_10001(
#line 2158 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2160 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2162 "recompilation.c"
{
#line 2164 "recompilation.c"
  {
#line 2166 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2169 "recompilation.c"
    {
#line 2171 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____item_id_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2174 "recompilation.c"
    return recompilation__succeeded;
#line 2176 "recompilation.c"
  }
#line 2178 "recompilation.c"
}

#line 2181 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_id_0_0_10001(
#line 2184 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2186 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2188 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2190 "recompilation.c"
{
#line 2192 "recompilation.c"
  {
#line 2194 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2197 "recompilation.c"
    {
#line 2199 "recompilation.c"
      recompilation____Compare____item_id_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2202 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2204 "recompilation.c"
  }
#line 2206 "recompilation.c"
}

#line 2209 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_id_set_3_0_10001(
#line 2212 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2214 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2216 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3,
#line 2218 "recompilation.c"
  MR_Box recompilation__wrapper_arg_4,
#line 2220 "recompilation.c"
  MR_Box recompilation__wrapper_arg_5)
#line 2222 "recompilation.c"
{
#line 2224 "recompilation.c"
  {
#line 2226 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2229 "recompilation.c"
    {
#line 2231 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____item_id_set_3_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3), ((MR_Word) recompilation__wrapper_arg_4), ((MR_Word) recompilation__wrapper_arg_5));
    }
#line 2234 "recompilation.c"
    return recompilation__succeeded;
#line 2236 "recompilation.c"
  }
#line 2238 "recompilation.c"
}

#line 2241 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_id_set_3_0_10001(
#line 2244 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2246 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2248 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3,
#line 2250 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_4,
#line 2252 "recompilation.c"
  MR_Box recompilation__wrapper_arg_5,
#line 2254 "recompilation.c"
  MR_Box recompilation__wrapper_arg_6)
#line 2256 "recompilation.c"
{
#line 2258 "recompilation.c"
  {
#line 2260 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2263 "recompilation.c"
    {
#line 2265 "recompilation.c"
      recompilation____Compare____item_id_set_3_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3), &recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_5), ((MR_Word) recompilation__wrapper_arg_6));
    }
#line 2268 "recompilation.c"
    *recompilation__wrapper_arg_4 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2270 "recompilation.c"
  }
#line 2272 "recompilation.c"
}

#line 2275 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_id_set_1_0_10001(
#line 2278 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2280 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2282 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2284 "recompilation.c"
{
#line 2286 "recompilation.c"
  {
#line 2288 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2291 "recompilation.c"
    {
#line 2293 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____item_id_set_1_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2296 "recompilation.c"
    return recompilation__succeeded;
#line 2298 "recompilation.c"
  }
#line 2300 "recompilation.c"
}

#line 2303 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_id_set_1_0_10001(
#line 2306 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2308 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_2,
#line 2310 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3,
#line 2312 "recompilation.c"
  MR_Box recompilation__wrapper_arg_4)
#line 2314 "recompilation.c"
{
#line 2316 "recompilation.c"
  {
#line 2318 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2321 "recompilation.c"
    {
#line 2323 "recompilation.c"
      recompilation____Compare____item_id_set_1_0(((MR_Word) recompilation__wrapper_arg_1), &recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_3), ((MR_Word) recompilation__wrapper_arg_4));
    }
#line 2326 "recompilation.c"
    *recompilation__wrapper_arg_2 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2328 "recompilation.c"
  }
#line 2330 "recompilation.c"
}

#line 2333 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_name_0_0_10001(
#line 2336 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2338 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2340 "recompilation.c"
{
#line 2342 "recompilation.c"
  {
#line 2344 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2347 "recompilation.c"
    {
#line 2349 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____item_name_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2352 "recompilation.c"
    return recompilation__succeeded;
#line 2354 "recompilation.c"
  }
#line 2356 "recompilation.c"
}

#line 2359 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_name_0_0_10001(
#line 2362 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2364 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2366 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2368 "recompilation.c"
{
#line 2370 "recompilation.c"
  {
#line 2372 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2375 "recompilation.c"
    {
#line 2377 "recompilation.c"
      recompilation____Compare____item_name_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2380 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2382 "recompilation.c"
  }
#line 2384 "recompilation.c"
}

#line 2387 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_type_0_0_10001(
#line 2390 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2392 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2394 "recompilation.c"
{
#line 2396 "recompilation.c"
  {
#line 2398 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2401 "recompilation.c"
    {
#line 2403 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____item_type_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2406 "recompilation.c"
    return recompilation__succeeded;
#line 2408 "recompilation.c"
  }
#line 2410 "recompilation.c"
}

#line 2413 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_type_0_0_10001(
#line 2416 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2418 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2420 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2422 "recompilation.c"
{
#line 2424 "recompilation.c"
  {
#line 2426 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2429 "recompilation.c"
    {
#line 2431 "recompilation.c"
      recompilation____Compare____item_type_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2434 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2436 "recompilation.c"
  }
#line 2438 "recompilation.c"
}

#line 2441 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____item_version_numbers_0_0_10001(
#line 2444 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2446 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2448 "recompilation.c"
{
#line 2450 "recompilation.c"
  {
#line 2452 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2455 "recompilation.c"
    {
#line 2457 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____item_version_numbers_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2460 "recompilation.c"
    return recompilation__succeeded;
#line 2462 "recompilation.c"
  }
#line 2464 "recompilation.c"
}

#line 2467 "recompilation.c"
static void MR_CALL 
recompilation____Compare____item_version_numbers_0_0_10001(
#line 2470 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2472 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2474 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2476 "recompilation.c"
{
#line 2478 "recompilation.c"
  {
#line 2480 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2483 "recompilation.c"
    {
#line 2485 "recompilation.c"
      recompilation____Compare____item_version_numbers_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2488 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2490 "recompilation.c"
  }
#line 2492 "recompilation.c"
}

#line 2495 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____module_qualifier_0_0_10001(
#line 2498 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2500 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2502 "recompilation.c"
{
#line 2504 "recompilation.c"
  {
#line 2506 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2509 "recompilation.c"
    {
#line 2511 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____module_qualifier_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2514 "recompilation.c"
    return recompilation__succeeded;
#line 2516 "recompilation.c"
  }
#line 2518 "recompilation.c"
}

#line 2521 "recompilation.c"
static void MR_CALL 
recompilation____Compare____module_qualifier_0_0_10001(
#line 2524 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2526 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2528 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2530 "recompilation.c"
{
#line 2532 "recompilation.c"
  {
#line 2534 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2537 "recompilation.c"
    {
#line 2539 "recompilation.c"
      recompilation____Compare____module_qualifier_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2542 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2544 "recompilation.c"
  }
#line 2546 "recompilation.c"
}

#line 2549 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____pred_or_func_set_0_0_10001(
#line 2552 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2554 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2556 "recompilation.c"
{
#line 2558 "recompilation.c"
  {
#line 2560 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2563 "recompilation.c"
    {
#line 2565 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____pred_or_func_set_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2568 "recompilation.c"
    return recompilation__succeeded;
#line 2570 "recompilation.c"
  }
#line 2572 "recompilation.c"
}

#line 2575 "recompilation.c"
static void MR_CALL 
recompilation____Compare____pred_or_func_set_0_0_10001(
#line 2578 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2580 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2582 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2584 "recompilation.c"
{
#line 2586 "recompilation.c"
  {
#line 2588 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2591 "recompilation.c"
    {
#line 2593 "recompilation.c"
      recompilation____Compare____pred_or_func_set_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2596 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2598 "recompilation.c"
  }
#line 2600 "recompilation.c"
}

#line 2603 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____recompilation_info_0_0_10001(
#line 2606 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2608 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2610 "recompilation.c"
{
#line 2612 "recompilation.c"
  {
#line 2614 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2617 "recompilation.c"
    {
#line 2619 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____recompilation_info_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2622 "recompilation.c"
    return recompilation__succeeded;
#line 2624 "recompilation.c"
  }
#line 2626 "recompilation.c"
}

#line 2629 "recompilation.c"
static void MR_CALL 
recompilation____Compare____recompilation_info_0_0_10001(
#line 2632 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2634 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2636 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2638 "recompilation.c"
{
#line 2640 "recompilation.c"
  {
#line 2642 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2645 "recompilation.c"
    {
#line 2647 "recompilation.c"
      recompilation____Compare____recompilation_info_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2650 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2652 "recompilation.c"
  }
#line 2654 "recompilation.c"
}

#line 2657 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____simple_item_set_0_0_10001(
#line 2660 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2662 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2664 "recompilation.c"
{
#line 2666 "recompilation.c"
  {
#line 2668 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2671 "recompilation.c"
    {
#line 2673 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____simple_item_set_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2676 "recompilation.c"
    return recompilation__succeeded;
#line 2678 "recompilation.c"
  }
#line 2680 "recompilation.c"
}

#line 2683 "recompilation.c"
static void MR_CALL 
recompilation____Compare____simple_item_set_0_0_10001(
#line 2686 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2688 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2690 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2692 "recompilation.c"
{
#line 2694 "recompilation.c"
  {
#line 2696 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2699 "recompilation.c"
    {
#line 2701 "recompilation.c"
      recompilation____Compare____simple_item_set_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2704 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2706 "recompilation.c"
  }
#line 2708 "recompilation.c"
}

#line 2711 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____used_items_0_0_10001(
#line 2714 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2716 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2718 "recompilation.c"
{
#line 2720 "recompilation.c"
  {
#line 2722 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2725 "recompilation.c"
    {
#line 2727 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____used_items_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2730 "recompilation.c"
    return recompilation__succeeded;
#line 2732 "recompilation.c"
  }
#line 2734 "recompilation.c"
}

#line 2737 "recompilation.c"
static void MR_CALL 
recompilation____Compare____used_items_0_0_10001(
#line 2740 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2742 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2744 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2746 "recompilation.c"
{
#line 2748 "recompilation.c"
  {
#line 2750 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2753 "recompilation.c"
    {
#line 2755 "recompilation.c"
      recompilation____Compare____used_items_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2758 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2760 "recompilation.c"
  }
#line 2762 "recompilation.c"
}

#line 2765 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____version_number_0_0_10001(
#line 2768 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2770 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2772 "recompilation.c"
{
#line 2774 "recompilation.c"
  {
#line 2776 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2779 "recompilation.c"
    {
#line 2781 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____version_number_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2784 "recompilation.c"
    return recompilation__succeeded;
#line 2786 "recompilation.c"
  }
#line 2788 "recompilation.c"
}

#line 2791 "recompilation.c"
static void MR_CALL 
recompilation____Compare____version_number_0_0_10001(
#line 2794 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2796 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2798 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2800 "recompilation.c"
{
#line 2802 "recompilation.c"
  {
#line 2804 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2807 "recompilation.c"
    {
#line 2809 "recompilation.c"
      recompilation____Compare____version_number_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2812 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2814 "recompilation.c"
  }
#line 2816 "recompilation.c"
}

#line 2819 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____version_number_map_0_0_10001(
#line 2822 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2824 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2826 "recompilation.c"
{
#line 2828 "recompilation.c"
  {
#line 2830 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2833 "recompilation.c"
    {
#line 2835 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____version_number_map_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2838 "recompilation.c"
    return recompilation__succeeded;
#line 2840 "recompilation.c"
  }
#line 2842 "recompilation.c"
}

#line 2845 "recompilation.c"
static void MR_CALL 
recompilation____Compare____version_number_map_0_0_10001(
#line 2848 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2850 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2852 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2854 "recompilation.c"
{
#line 2856 "recompilation.c"
  {
#line 2858 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2861 "recompilation.c"
    {
#line 2863 "recompilation.c"
      recompilation____Compare____version_number_map_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2866 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2868 "recompilation.c"
  }
#line 2870 "recompilation.c"
}

#line 2873 "recompilation.c"
static MR_bool MR_CALL 
recompilation____Unify____version_numbers_0_0_10001(
#line 2876 "recompilation.c"
  MR_Box recompilation__wrapper_arg_1,
#line 2878 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2)
#line 2880 "recompilation.c"
{
#line 2882 "recompilation.c"
  {
#line 2884 "recompilation.c"
    MR_bool recompilation__succeeded;

#line 2887 "recompilation.c"
    {
#line 2889 "recompilation.c"
      recompilation__succeeded = recompilation____Unify____version_numbers_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 2892 "recompilation.c"
    return recompilation__succeeded;
#line 2894 "recompilation.c"
  }
#line 2896 "recompilation.c"
}

#line 2899 "recompilation.c"
static void MR_CALL 
recompilation____Compare____version_numbers_0_0_10001(
#line 2902 "recompilation.c"
  MR_Box * recompilation__wrapper_arg_1,
#line 2904 "recompilation.c"
  MR_Box recompilation__wrapper_arg_2,
#line 2906 "recompilation.c"
  MR_Box recompilation__wrapper_arg_3)
#line 2908 "recompilation.c"
{
#line 2910 "recompilation.c"
  {
#line 2912 "recompilation.c"
    MR_Word recompilation__conv0_HeadVar__1_1;

#line 2915 "recompilation.c"
    {
#line 2917 "recompilation.c"
      recompilation____Compare____version_numbers_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
#line 2920 "recompilation.c"
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
#line 2922 "recompilation.c"
  }
#line 2924 "recompilation.c"
}

#line 432 "recompilation.m"
static MR_Word MR_CALL 
recompilation__IntroducedFrom__func__map_ids__432__1_6_f_0(
#line 432 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_T_38,
#line 432 "recompilation.m"
  MR_Word recompilation__TypeInfo_for_U_39,
#line 432 "recompilation.m"
  MR_Word recompilation__Func_5,
#line 432 "recompilation.m"
  MR_Word recompilation__Items0_6,
#line 432 "recompilation.m"
  MR_Word recompilation__HeadVar__5_14,
#line 432 "recompilation.m"
  MR_Word recompilation__HeadVar__6_15)
#line 432 "recompilation.m"
{
#line 432 "recompilation.m"
  {
#line 432 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 432 "recompilation.m"
    MR_Word recompilation__HeadVar__7_16;
#line 432 "recompilation.m"
    MR_Box recompilation__V_17_17;
#line 432 "recompilation.m"
    MR_Box recompilation__V_18_18;
#line 434 "recompilation.m"
    MR_Box MR_CALL (* recompilation__func_0)(MR_Box, MR_Box, MR_Box);

#line 434 "recompilation.m"
    {
#line 434 "recompilation.m"
      recompilation__V_18_18 = recompilation__extract_ids_2_f_0(recompilation__TypeInfo_for_T_38, recompilation__Items0_6, recompilation__HeadVar__5_14);
    }
#line 434 "recompilation.m"
    recompilation__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), recompilation__Func_5, (MR_Integer) 1)));
#line 434 "recompilation.m"
    {
#line 434 "recompilation.m"
      recompilation__V_17_17 = recompilation__func_0(((MR_Box) recompilation__Func_5), ((MR_Box) (recompilation__HeadVar__5_14)), recompilation__V_18_18);
    }
#line 434 "recompilation.m"
    {
#line 434 "recompilation.m"
      recompilation__update_ids_4_p_0(recompilation__TypeInfo_for_U_39, recompilation__HeadVar__5_14, recompilation__V_17_17, recompilation__HeadVar__6_15, &recompilation__HeadVar__7_16);
    }
#line 432 "recompilation.m"
    return recompilation__HeadVar__7_16;
#line 432 "recompilation.m"
  }
#line 432 "recompilation.m"
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
#line 3005 "recompilation.c"
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
#line 3027 "recompilation.c"
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

#line 3096 "recompilation.c"
        {
#line 3098 "recompilation.c"
          recompilation__succeeded = recompilation____Unify____item_id_set_3_0(recompilation__TypeInfo_9_9, recompilation__TypeInfo_9_9, recompilation__TypeInfo_9_9, recompilation__V_3_3, recompilation__V_5_5);
        }
#line 223 "recompilation.m"
        if (recompilation__succeeded)
#line 223 "recompilation.m"
          {
#line 3105 "recompilation.c"
            recompilation__TypeInfo_10_10 = (MR_Word) &recompilation_scalar_common_2[3];
#line 3107 "recompilation.c"
            {
#line 3109 "recompilation.c"
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
#line 233 "recompilation.m"
      return;
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
      return recompilation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation_scalar_common_2[4], ((MR_Box) (recompilation__Cast_HeadVar1_3)), ((MR_Box) (recompilation__Cast_HeadVar2_4)));
    }
#line 233 "recompilation.m"
    return recompilation__succeeded;
#line 233 "recompilation.m"
  }
#line 233 "recompilation.m"
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
#line 3397 "recompilation.c"
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
#line 3427 "recompilation.c"
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
#line 3447 "recompilation.c"
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
                  mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[5], &recompilation__V_14_14, ((MR_Box) (recompilation__V_6_6)), ((MR_Box) (recompilation__V_10_10)));
                }
#line 3467 "recompilation.c"
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
                      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[6], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__V_7_7)), ((MR_Box) (recompilation__V_11_11)));
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

#line 3550 "recompilation.c"
        {
#line 3552 "recompilation.c"
          recompilation__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__V_3_3, recompilation__V_7_7);
        }
#line 129 "recompilation.m"
        if (recompilation__succeeded)
#line 129 "recompilation.m"
          {
#line 3559 "recompilation.c"
            recompilation__TypeInfo_14_14 = (MR_Word) &recompilation_scalar_common_2[2];
#line 3561 "recompilation.c"
            {
#line 3563 "recompilation.c"
              recompilation__succeeded = recompilation____Unify____item_id_set_3_0(recompilation__TypeInfo_14_14, recompilation__TypeInfo_14_14, recompilation__TypeInfo_14_14, recompilation__V_4_4, recompilation__V_8_8);
            }
#line 129 "recompilation.m"
            if (recompilation__succeeded)
#line 129 "recompilation.m"
              {
#line 3570 "recompilation.c"
                recompilation__TypeInfo_15_15 = (MR_Word) &recompilation_scalar_common_2[5];
#line 3572 "recompilation.c"
                {
#line 3574 "recompilation.c"
                  recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_15_15, ((MR_Box) (recompilation__V_5_5)), ((MR_Box) (recompilation__V_9_9)));
                }
#line 129 "recompilation.m"
                if (recompilation__succeeded)
#line 129 "recompilation.m"
                  {
#line 3581 "recompilation.c"
                    recompilation__TypeInfo_16_16 = (MR_Word) &recompilation_scalar_common_2[6];
#line 3583 "recompilation.c"
                    {
#line 3585 "recompilation.c"
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
#line 241 "recompilation.m"
      return;
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
      return recompilation__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__Cast_HeadVar1_3, recompilation__Cast_HeadVar2_4);
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
#line 231 "recompilation.m"
      return;
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
      return recompilation__succeeded = recompilation____Unify____item_id_set_3_0(recompilation__TypeInfo_5_5, recompilation__TypeInfo_5_5, recompilation__TypeInfo_5_5, recompilation__Cast_HeadVar1_3, recompilation__Cast_HeadVar2_4);
    }
#line 231 "recompilation.m"
    return recompilation__succeeded;
#line 231 "recompilation.m"
  }
#line 231 "recompilation.m"
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
#line 3832 "recompilation.c"
  {
#line 3834 "recompilation.c"
    MR_bool recompilation__succeeded = (recompilation__HeadVar__2_1 == recompilation__HeadVar__2_2);

#line 3837 "recompilation.c"
    return recompilation__succeeded;
#line 3839 "recompilation.c"
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
#line 3868 "recompilation.c"
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
#line 3890 "recompilation.c"
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

#line 3951 "recompilation.c"
        {
#line 3953 "recompilation.c"
          recompilation__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__V_3_3, recompilation__V_5_5);
        }
#line 75 "recompilation.m"
        if (recompilation__succeeded)
#line 3958 "recompilation.c"
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
#line 3999 "recompilation.c"
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
#line 4053 "recompilation.c"
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
#line 4073 "recompilation.c"
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
#line 4093 "recompilation.c"
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
#line 4113 "recompilation.c"
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
#line 4133 "recompilation.c"
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
#line 4153 "recompilation.c"
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
#line 4173 "recompilation.c"
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
#line 4193 "recompilation.c"
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
#line 4213 "recompilation.c"
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

#line 4328 "recompilation.c"
        {
#line 4330 "recompilation.c"
          recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Map_25, recompilation__V_3_3, recompilation__V_13_13);
        }
#line 150 "recompilation.m"
        if (recompilation__succeeded)
#line 150 "recompilation.m"
          {
#line 4337 "recompilation.c"
            {
#line 4339 "recompilation.c"
              recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Map_25, recompilation__V_4_4, recompilation__V_14_14);
            }
#line 150 "recompilation.m"
            if (recompilation__succeeded)
#line 150 "recompilation.m"
              {
#line 4346 "recompilation.c"
                {
#line 4348 "recompilation.c"
                  recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Map_25, recompilation__V_5_5, recompilation__V_15_15);
                }
#line 150 "recompilation.m"
                if (recompilation__succeeded)
#line 150 "recompilation.m"
                  {
#line 4355 "recompilation.c"
                    {
#line 4357 "recompilation.c"
                      recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Map_25, recompilation__V_6_6, recompilation__V_16_16);
                    }
#line 150 "recompilation.m"
                    if (recompilation__succeeded)
#line 150 "recompilation.m"
                      {
#line 4364 "recompilation.c"
                        {
#line 4366 "recompilation.c"
                          recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Map_25, recompilation__V_7_7, recompilation__V_17_17);
                        }
#line 150 "recompilation.m"
                        if (recompilation__succeeded)
#line 150 "recompilation.m"
                          {
#line 4373 "recompilation.c"
                            {
#line 4375 "recompilation.c"
                              recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Cons_27, recompilation__V_8_8, recompilation__V_18_18);
                            }
#line 150 "recompilation.m"
                            if (recompilation__succeeded)
#line 150 "recompilation.m"
                              {
#line 4382 "recompilation.c"
                                {
#line 4384 "recompilation.c"
                                  recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Set_26, recompilation__V_9_9, recompilation__V_19_19);
                                }
#line 150 "recompilation.m"
                                if (recompilation__succeeded)
#line 150 "recompilation.m"
                                  {
#line 4391 "recompilation.c"
                                    {
#line 4393 "recompilation.c"
                                      recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Set_26, recompilation__V_10_10, recompilation__V_20_20);
                                    }
#line 150 "recompilation.m"
                                    if (recompilation__succeeded)
#line 150 "recompilation.m"
                                      {
#line 4400 "recompilation.c"
                                        {
#line 4402 "recompilation.c"
                                          recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Set_26, recompilation__V_11_11, recompilation__V_21_21);
                                        }
#line 150 "recompilation.m"
                                        if (recompilation__succeeded)
#line 4407 "recompilation.c"
                                          {
#line 4409 "recompilation.c"
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
#line 4527 "recompilation.c"
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
#line 4553 "recompilation.c"
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

#line 4614 "recompilation.c"
        recompilation__succeeded = (recompilation__V_3_3 == recompilation__V_5_5);
#line 72 "recompilation.m"
        if (recompilation__succeeded)
#line 4618 "recompilation.c"
          {
#line 4620 "recompilation.c"
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
#line 236 "recompilation.m"
      return;
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
      return recompilation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation_scalar_common_2[3], ((MR_Box) (recompilation__Cast_HeadVar1_3)), ((MR_Box) (recompilation__Cast_HeadVar2_4)));
    }
#line 236 "recompilation.m"
    return recompilation__succeeded;
#line 236 "recompilation.m"
  }
#line 236 "recompilation.m"
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
#line 4780 "recompilation.c"
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
#line 4802 "recompilation.c"
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
#line 276 "recompilation.m"
              return;
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

#line 4869 "recompilation.c"
        {
#line 4871 "recompilation.c"
          recompilation__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__V_3_3, recompilation__V_5_5);
        }
#line 276 "recompilation.m"
        if (recompilation__succeeded)
#line 276 "recompilation.m"
          {
#line 4878 "recompilation.c"
            recompilation__TypeInfo_10_10 = (MR_Word) &recompilation_scalar_common_1[0];
#line 4880 "recompilation.c"
            {
#line 4882 "recompilation.c"
              return recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_10_10, ((MR_Box) (recompilation__V_4_4)), ((MR_Box) (recompilation__V_6_6)));
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
#line 275 "recompilation.m"
      return;
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
      return recompilation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation_scalar_common_1[1], ((MR_Box) (recompilation__Cast_HeadVar1_3)), ((MR_Box) (recompilation__Cast_HeadVar2_4)));
    }
#line 275 "recompilation.m"
    return recompilation__succeeded;
#line 275 "recompilation.m"
  }
#line 275 "recompilation.m"
}

#line 527 "recompilation.m"
void MR_CALL 
recompilation__record_expanded_item_2_3_p_0(
#line 527 "recompilation.m"
  MR_Word recompilation__ItemId_4,
#line 527 "recompilation.m"
  MR_Word recompilation__ExpandedItemSet0_5,
#line 527 "recompilation.m"
  MR_Word * recompilation__ExpandedItemSet_6)
#line 527 "recompilation.m"
{
#line 530 "recompilation.m"
  {
#line 530 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 530 "recompilation.m"
    MR_Word recompilation__ModuleName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__ExpandedItemSet0_5, (MR_Integer) 0)));
#line 530 "recompilation.m"
    MR_Word recompilation__Items0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__ExpandedItemSet0_5, (MR_Integer) 1)));
#line 530 "recompilation.m"
    MR_Word recompilation__ItemName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__ItemId_4, (MR_Integer) 1)));
#line 532 "recompilation.m"
    MR_Word recompilation__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__ItemId_4, (MR_Integer) 0)));
#line 533 "recompilation.m"
    MR_Word recompilation__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__ItemName_10, (MR_Integer) 0)));
#line 533 "recompilation.m"
    MR_Word recompilation__V_16_16;
#line 533 "recompilation.m"
    MR_Integer recompilation__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__ItemName_10, (MR_Integer) 1)));
#line 533 "recompilation.m"
    MR_String recompilation__V_11_11;

#line 533 "recompilation.m"
    recompilation__succeeded = ((MR_tag((MR_Word) recompilation__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 533 "recompilation.m"
    if (recompilation__succeeded)
#line 533 "recompilation.m"
      {
#line 533 "recompilation.m"
        recompilation__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__V_14_14, (MR_Integer) 0)));
#line 533 "recompilation.m"
        recompilation__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__V_14_14, (MR_Integer) 1)));
#line 533 "recompilation.m"
        {
#line 533 "recompilation.m"
          recompilation__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__ModuleName_7, recompilation__V_16_16);
        }
#line 533 "recompilation.m"
      }
#line 536 "recompilation.m"
    if (recompilation__succeeded)
#line 535 "recompilation.m"
      *recompilation__ExpandedItemSet_6 = recompilation__ExpandedItemSet0_5;
#line 536 "recompilation.m"
    else
#line 537 "recompilation.m"
      {
#line 537 "recompilation.m"
        MR_Word recompilation__Items_13;

#line 537 "recompilation.m"
        {
#line 537 "recompilation.m"
          mercury__set__insert_3_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, ((MR_Box) (recompilation__ItemId_4)), recompilation__Items0_8, &recompilation__Items_13);
        }
#line 538 "recompilation.m"
        {
#line 538 "recompilation.m"
          MR_Word base;
#line 538 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 538 "recompilation.m"
          *recompilation__ExpandedItemSet_6 = base;
#line 538 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__ModuleName_7));
#line 538 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__Items_13));
#line 538 "recompilation.m"
        }
#line 537 "recompilation.m"
      }
#line 530 "recompilation.m"
  }
#line 527 "recompilation.m"
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
#line 541 "recompilation.m"
  {
#line 541 "recompilation.m"
    MR_bool recompilation__succeeded;

#line 541 "recompilation.m"
    if ((recompilation__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 541 "recompilation.m"
      if ((recompilation__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 541 "recompilation.m"
        *recompilation__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 541 "recompilation.m"
      else
#line 542 "recompilation.m"
        *recompilation__HeadVar__4_4 = recompilation__HeadVar__3_3;
#line 541 "recompilation.m"
    else
#line 541 "recompilation.m"
      {
#line 541 "recompilation.m"
        MR_Word recompilation__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__HeadVar__2_2, (MR_Integer) 0)));

#line 541 "recompilation.m"
        if ((recompilation__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 543 "recompilation.m"
          {
#line 544 "recompilation.m"
            {
#line 544 "recompilation.m"
              mercury__require__unexpected_3_p_0((MR_String) "recompilation", (MR_String) "predicate \140recompilation.finish_recording_expanded_items\'/4", (MR_String) "items but no info");
#line 544 "recompilation.m"
              return;
            }
#line 543 "recompilation.m"
          }
#line 541 "recompilation.m"
        else
#line 546 "recompilation.m"
          {
#line 546 "recompilation.m"
            MR_Word recompilation__ExpandedItems_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__V_20_20, (MR_Integer) 1)));
#line 546 "recompilation.m"
            MR_Word recompilation__Info0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__HeadVar__3_3, (MR_Integer) 0)));
#line 546 "recompilation.m"
            MR_Word recompilation__Info_18;
#line 546 "recompilation.m"
            MR_Word recompilation__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__V_20_20, (MR_Integer) 0)));

#line 547 "recompilation.m"
            {
#line 547 "recompilation.m"
              recompilation__record_expanded_items_4_p_0(recompilation__Item_1, recompilation__ExpandedItems_16, recompilation__Info0_17, &recompilation__Info_18);
            }
#line 546 "recompilation.m"
            {
#line 546 "recompilation.m"
              MR_Word base;
#line 546 "recompilation.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 546 "recompilation.m"
              *recompilation__HeadVar__4_4 = base;
#line 546 "recompilation.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__Info_18));
#line 546 "recompilation.m"
            }
#line 546 "recompilation.m"
          }
#line 541 "recompilation.m"
      }
#line 541 "recompilation.m"
  }
#line 291 "recompilation.m"
}

#line 525 "recompilation.m"
static void MR_CALL 
recompilation__record_expanded_item_3_p_0_1(
#line 525 "recompilation.m"
  MR_Box recompilation__closure_arg,
#line 525 "recompilation.m"
  MR_Box recompilation__wrapper_arg_1,
#line 525 "recompilation.m"
  MR_Box * recompilation__wrapper_arg_2)
#line 525 "recompilation.m"
{
#line 525 "recompilation.m"
  {
#line 525 "recompilation.m"
    MR_Box recompilation__closure = recompilation__closure_arg;
#line 525 "recompilation.m"
    MR_Word recompilation__conv0_ExpandedItemSet_6;

#line 525 "recompilation.m"
    {
#line 525 "recompilation.m"
      recompilation__record_expanded_item_2_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__closure, (MR_Integer) 3))), ((MR_Word) recompilation__wrapper_arg_1), &recompilation__conv0_ExpandedItemSet_6);
    }
#line 525 "recompilation.m"
    *recompilation__wrapper_arg_2 = ((MR_Box) (recompilation__conv0_ExpandedItemSet_6));
#line 525 "recompilation.m"
  }
#line 525 "recompilation.m"
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
#line 524 "recompilation.m"
  {
#line 524 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 524 "recompilation.m"
    MR_Word recompilation__TypeCtorInfo_12_12;
#line 524 "recompilation.m"
    MR_Word recompilation__V_8_8;

#line 525 "recompilation.m"
    {
#line 525 "recompilation.m"
      recompilation__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 525 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_8_8, 0) = ((MR_Box) (&recompilation_scalar_common_9[0]));
#line 525 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_8_8, 1) = ((MR_Box) (recompilation__record_expanded_item_3_p_0_1));
#line 525 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 525 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_8_8, 3) = ((MR_Box) (recompilation__Item_4));
#line 525 "recompilation.m"
    }
#line 5195 "recompilation.c"
    recompilation__TypeCtorInfo_12_12 = (MR_Word) &recompilation__recompilation__type_ctor_info_eqv_expanded_item_set_0;
#line 525 "recompilation.m"
    {
#line 525 "recompilation.m"
      mercury__maybe__map_maybe_3_p_0(recompilation__TypeCtorInfo_12_12, recompilation__TypeCtorInfo_12_12, recompilation__V_8_8, recompilation__STATE_VARIABLE_EquivTypeInfo_0_6, recompilation__STATE_VARIABLE_EquivTypeInfo_7);
#line 525 "recompilation.m"
      return;
    }
#line 524 "recompilation.m"
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
#line 516 "recompilation.m"
  {
#line 516 "recompilation.m"
    MR_bool recompilation__succeeded;

#line 516 "recompilation.m"
    if ((recompilation__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 516 "recompilation.m"
      *recompilation__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 516 "recompilation.m"
    else
#line 520 "recompilation.m"
      {
#line 518 "recompilation.m"
        MR_Word recompilation__V_15_15;
#line 518 "recompilation.m"
        MR_String recompilation__V_11_11;

#line 518 "recompilation.m"
        recompilation__succeeded = ((MR_tag((MR_Word) recompilation__SymName_2)) == (MR_mktag((MR_Integer) 1)));
#line 518 "recompilation.m"
        if (recompilation__succeeded)
#line 518 "recompilation.m"
          {
#line 518 "recompilation.m"
            recompilation__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__SymName_2, (MR_Integer) 0)));
#line 518 "recompilation.m"
            recompilation__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__SymName_2, (MR_Integer) 1)));
#line 518 "recompilation.m"
            {
#line 518 "recompilation.m"
              recompilation__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__ModuleName_1, recompilation__V_15_15);
            }
#line 518 "recompilation.m"
          }
#line 520 "recompilation.m"
        if (recompilation__succeeded)
#line 519 "recompilation.m"
          *recompilation__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 520 "recompilation.m"
        else
#line 521 "recompilation.m"
          {
#line 521 "recompilation.m"
            MR_Word recompilation__V_12_12;
#line 521 "recompilation.m"
            MR_Word recompilation__V_13_13;

#line 521 "recompilation.m"
            {
#line 521 "recompilation.m"
              recompilation__V_13_13 = mercury__set__init_0_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0);
            }
#line 521 "recompilation.m"
            {
#line 521 "recompilation.m"
              recompilation__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 521 "recompilation.m"
              MR_hl_field(MR_mktag(0), recompilation__V_12_12, 0) = ((MR_Box) (recompilation__ModuleName_1));
#line 521 "recompilation.m"
              MR_hl_field(MR_mktag(0), recompilation__V_12_12, 1) = ((MR_Box) (recompilation__V_13_13));
#line 521 "recompilation.m"
            }
#line 521 "recompilation.m"
            {
#line 521 "recompilation.m"
              MR_Word base;
#line 521 "recompilation.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 521 "recompilation.m"
              *recompilation__HeadVar__4_4 = base;
#line 521 "recompilation.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__V_12_12));
#line 521 "recompilation.m"
            }
#line 521 "recompilation.m"
          }
#line 520 "recompilation.m"
      }
#line 516 "recompilation.m"
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
#line 502 "recompilation.m"
  {
#line 502 "recompilation.m"
    MR_bool recompilation__succeeded;

#line 500 "recompilation.m"
    {
#line 500 "recompilation.m"
      recompilation__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, recompilation__ExpandedItems_6);
    }
#line 502 "recompilation.m"
    if (recompilation__succeeded)
#line 502 "recompilation.m"
      *recompilation__STATE_VARIABLE_Info_14 = recompilation__STATE_VARIABLE_Info_0_13;
#line 502 "recompilation.m"
    else
#line 503 "recompilation.m"
      {
#line 503 "recompilation.m"
        MR_Word recompilation__TypeCtorInfo_27_27;
#line 503 "recompilation.m"
        MR_Word recompilation__DepsMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 503 "recompilation.m"
        MR_Word recompilation__Deps1_10;
#line 503 "recompilation.m"
        MR_Word recompilation__Deps_11;
#line 503 "recompilation.m"
        MR_Word recompilation__DepsMap_12;
#line 503 "recompilation.m"
        MR_Word recompilation__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 503 "recompilation.m"
        MR_Word recompilation__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 503 "recompilation.m"
        MR_Word recompilation__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 506 "recompilation.m"
        MR_Word recompilation__Deps0_9;
#line 504 "recompilation.m"
        MR_Box recompilation__conv0_Deps0_9;
#line 511 "recompilation.m"
        MR_Word recompilation__V_19_19;
#line 511 "recompilation.m"
        MR_Word recompilation__V_20_20;
#line 511 "recompilation.m"
        MR_Word recompilation__V_22_22;
#line 511 "recompilation.m"
        MR_Word recompilation__V_21_21;

#line 504 "recompilation.m"
        {
#line 504 "recompilation.m"
          recompilation__succeeded = mercury__map__search_3_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, (MR_Word) &recompilation_scalar_common_1[0], recompilation__DepsMap0_8, ((MR_Box) (recompilation__Item_5)), &recompilation__conv0_Deps0_9);
        }
#line 504 "recompilation.m"
        if (recompilation__succeeded)
#line 504 "recompilation.m"
          {
#line 504 "recompilation.m"
            recompilation__Deps0_9 = ((MR_Word) recompilation__conv0_Deps0_9);
#line 504 "recompilation.m"
            recompilation__succeeded = MR_TRUE;
#line 504 "recompilation.m"
          }
#line 506 "recompilation.m"
        if (recompilation__succeeded)
#line 505 "recompilation.m"
          recompilation__Deps1_10 = recompilation__Deps0_9;
#line 506 "recompilation.m"
        else
#line 507 "recompilation.m"
          {
#line 507 "recompilation.m"
            {
#line 507 "recompilation.m"
              mercury__set__init_1_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, &recompilation__Deps1_10);
            }
#line 507 "recompilation.m"
          }
#line 5396 "recompilation.c"
        recompilation__TypeCtorInfo_27_27 = (MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0;
#line 509 "recompilation.m"
        {
#line 509 "recompilation.m"
          mercury__set__union_3_p_0(recompilation__TypeCtorInfo_27_27, recompilation__Deps1_10, recompilation__ExpandedItems_6, &recompilation__Deps_11);
        }
#line 510 "recompilation.m"
        {
#line 510 "recompilation.m"
          mercury__map__set_4_p_0(recompilation__TypeCtorInfo_27_27, (MR_Word) &recompilation_scalar_common_1[0], ((MR_Box) (recompilation__Item_5)), ((MR_Box) (recompilation__Deps_11)), recompilation__DepsMap0_8, &recompilation__DepsMap_12);
        }
#line 511 "recompilation.m"
        recompilation__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 511 "recompilation.m"
        recompilation__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 511 "recompilation.m"
        recompilation__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 511 "recompilation.m"
        recompilation__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 511 "recompilation.m"
        {
#line 511 "recompilation.m"
          MR_Word base;
#line 511 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 511 "recompilation.m"
          *recompilation__STATE_VARIABLE_Info_14 = base;
#line 511 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__V_19_19));
#line 511 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__V_20_20));
#line 511 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recompilation__DepsMap_12));
#line 511 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (recompilation__V_22_22));
#line 511 "recompilation.m"
        }
#line 503 "recompilation.m"
      }
#line 502 "recompilation.m"
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
#line 463 "recompilation.m"
  {
#line 463 "recompilation.m"
    MR_bool recompilation__succeeded = (recompilation__ItemType_6 == (MR_Integer) 6);
#line 463 "recompilation.m"
    MR_Word recompilation__QualifiedName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__QualifiedId_8, (MR_Integer) 0)));
#line 463 "recompilation.m"
    MR_Integer recompilation__Arity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__QualifiedId_8, (MR_Integer) 1)));
#line 472 "recompilation.m"
    MR_String recompilation__V_12_12;

#line 469 "recompilation.m"
    recompilation__succeeded = !(recompilation__succeeded);
#line 469 "recompilation.m"
    if (recompilation__succeeded)
#line 469 "recompilation.m"
      {
#line 470 "recompilation.m"
        recompilation__succeeded = (recompilation__ItemType_6 == (MR_Integer) 7);
#line 470 "recompilation.m"
        recompilation__succeeded = !(recompilation__succeeded);
#line 469 "recompilation.m"
        if (recompilation__succeeded)
#line 469 "recompilation.m"
          {
#line 471 "recompilation.m"
            recompilation__succeeded = (recompilation__ItemType_6 == (MR_Integer) 5);
#line 471 "recompilation.m"
            recompilation__succeeded = !(recompilation__succeeded);
#line 469 "recompilation.m"
            if (recompilation__succeeded)
#line 469 "recompilation.m"
              {
#line 472 "recompilation.m"
                recompilation__succeeded = ((MR_tag((MR_Word) recompilation__QualifiedName_10)) == (MR_mktag((MR_Integer) 0)));
#line 472 "recompilation.m"
                if (recompilation__succeeded)
#line 472 "recompilation.m"
                  recompilation__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__QualifiedName_10, (MR_Integer) 0)));
#line 469 "recompilation.m"
              }
#line 469 "recompilation.m"
          }
#line 469 "recompilation.m"
      }
#line 475 "recompilation.m"
    if (recompilation__succeeded)
#line 475 "recompilation.m"
      *recompilation__STATE_VARIABLE_Info_27 = recompilation__STATE_VARIABLE_Info_0_26;
#line 475 "recompilation.m"
    else
#line 476 "recompilation.m"
      {
#line 476 "recompilation.m"
        MR_Word recompilation__TypeInfo_36_36 = (MR_Word) &recompilation_scalar_common_2[2];
#line 476 "recompilation.m"
        MR_Word recompilation__ItemSet0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 1)));
#line 476 "recompilation.m"
        MR_Word recompilation__IdSet0_14;
#line 476 "recompilation.m"
        MR_String recompilation__UnqualifiedName_15;
#line 476 "recompilation.m"
        MR_Word recompilation__ModuleName_16;
#line 476 "recompilation.m"
        MR_Word recompilation__UnqualifiedId_17;
#line 476 "recompilation.m"
        MR_Word recompilation__SymName_18;
#line 476 "recompilation.m"
        MR_Word recompilation__ModuleQualifier_20;
#line 476 "recompilation.m"
        MR_Word recompilation__MatchingNames1_22;
#line 476 "recompilation.m"
        MR_Word recompilation__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 0)));
#line 476 "recompilation.m"
        MR_Word recompilation__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 2)));
#line 476 "recompilation.m"
        MR_Word recompilation__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 3)));
#line 477 "recompilation.m"
        MR_Box recompilation__conv0_IdSet0_14;
#line 481 "recompilation.m"
        MR_Integer recompilation__V_19_19;
#line 485 "recompilation.m"
        MR_Word recompilation__MatchingNames0_21;
#line 483 "recompilation.m"
        MR_Box recompilation__conv1_MatchingNames0_21;
#line 488 "recompilation.m"
        MR_Word recompilation__TypeCtorInfo_40_40;

#line 477 "recompilation.m"
        {
#line 477 "recompilation.m"
          recompilation__conv0_IdSet0_14 = recompilation__extract_ids_2_f_0(recompilation__TypeInfo_36_36, recompilation__ItemSet0_13, recompilation__ItemType_6);
        }
#line 477 "recompilation.m"
        recompilation__IdSet0_14 = ((MR_Word) recompilation__conv0_IdSet0_14);
#line 478 "recompilation.m"
        {
#line 478 "recompilation.m"
          recompilation__UnqualifiedName_15 = mdbcomp__sym_name__unqualify_name_1_f_0(recompilation__QualifiedName_10);
        }
#line 443 "recompilation.m"
        if (((MR_tag((MR_Word) recompilation__QualifiedName_10)) == (MR_mktag((MR_Integer) 1))))
#line 444 "recompilation.m"
          {
#line 444 "recompilation.m"
            MR_String recompilation__V_47_47;

#line 444 "recompilation.m"
            recompilation__ModuleName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__QualifiedName_10, (MR_Integer) 0)));
#line 444 "recompilation.m"
            recompilation__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__QualifiedName_10, (MR_Integer) 1)));
#line 444 "recompilation.m"
          }
#line 443 "recompilation.m"
        else
#line 443 "recompilation.m"
          {
#line 443 "recompilation.m"
            recompilation__ModuleName_16 = (MR_Word) &recompilation_scalar_common_8[0];
#line 443 "recompilation.m"
          }
#line 480 "recompilation.m"
        {
#line 480 "recompilation.m"
          recompilation__UnqualifiedId_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 480 "recompilation.m"
          MR_hl_field(MR_mktag(0), recompilation__UnqualifiedId_17, 0) = ((MR_Box) (recompilation__UnqualifiedName_15));
#line 480 "recompilation.m"
          MR_hl_field(MR_mktag(0), recompilation__UnqualifiedId_17, 1) = ((MR_Box) (recompilation__Arity_11));
#line 480 "recompilation.m"
        }
#line 481 "recompilation.m"
        recompilation__SymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__Id_7, (MR_Integer) 0)));
#line 481 "recompilation.m"
        recompilation__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__Id_7, (MR_Integer) 1)));
#line 443 "recompilation.m"
        if (((MR_tag((MR_Word) recompilation__SymName_18)) == (MR_mktag((MR_Integer) 1))))
#line 444 "recompilation.m"
          {
#line 444 "recompilation.m"
            MR_String recompilation__V_51_51;

#line 444 "recompilation.m"
            recompilation__ModuleQualifier_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__SymName_18, (MR_Integer) 0)));
#line 444 "recompilation.m"
            recompilation__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__SymName_18, (MR_Integer) 1)));
#line 444 "recompilation.m"
          }
#line 443 "recompilation.m"
        else
#line 443 "recompilation.m"
          {
#line 443 "recompilation.m"
            recompilation__ModuleQualifier_20 = (MR_Word) &recompilation_scalar_common_8[0];
#line 443 "recompilation.m"
          }
#line 483 "recompilation.m"
        {
#line 483 "recompilation.m"
          recompilation__succeeded = mercury__map__search_3_p_0((MR_Word) &recompilation_scalar_common_2[0], (MR_Word) &recompilation_scalar_common_2[1], recompilation__IdSet0_14, ((MR_Box) (recompilation__UnqualifiedId_17)), &recompilation__conv1_MatchingNames0_21);
        }
#line 483 "recompilation.m"
        if (recompilation__succeeded)
#line 483 "recompilation.m"
          {
#line 483 "recompilation.m"
            recompilation__MatchingNames0_21 = ((MR_Word) recompilation__conv1_MatchingNames0_21);
#line 483 "recompilation.m"
            recompilation__succeeded = MR_TRUE;
#line 483 "recompilation.m"
          }
#line 485 "recompilation.m"
        if (recompilation__succeeded)
#line 484 "recompilation.m"
          recompilation__MatchingNames1_22 = recompilation__MatchingNames0_21;
#line 485 "recompilation.m"
        else
#line 486 "recompilation.m"
          {
#line 486 "recompilation.m"
            MR_Word recompilation__TypeCtorInfo_39_39 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 486 "recompilation.m"
            {
#line 486 "recompilation.m"
              mercury__map__init_1_p_0(recompilation__TypeCtorInfo_39_39, recompilation__TypeCtorInfo_39_39, &recompilation__MatchingNames1_22);
            }
#line 486 "recompilation.m"
          }
#line 5645 "recompilation.c"
        recompilation__TypeCtorInfo_40_40 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 488 "recompilation.m"
        {
#line 488 "recompilation.m"
          recompilation__succeeded = mercury__map__contains_2_p_0(recompilation__TypeCtorInfo_40_40, recompilation__TypeCtorInfo_40_40, recompilation__MatchingNames1_22, ((MR_Box) (recompilation__ModuleQualifier_20)));
        }
#line 490 "recompilation.m"
        if (recompilation__succeeded)
#line 490 "recompilation.m"
          *recompilation__STATE_VARIABLE_Info_27 = recompilation__STATE_VARIABLE_Info_0_26;
#line 490 "recompilation.m"
        else
#line 492 "recompilation.m"
          {
#line 492 "recompilation.m"
            MR_Word recompilation__TypeCtorInfo_41_41 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 492 "recompilation.m"
            MR_Word recompilation__MatchingNames_23;
#line 492 "recompilation.m"
            MR_Word recompilation__IdSet_24;
#line 492 "recompilation.m"
            MR_Word recompilation__ItemSet_25;
#line 495 "recompilation.m"
            MR_Word recompilation__V_32_32;
#line 495 "recompilation.m"
            MR_Word recompilation__V_34_34;
#line 495 "recompilation.m"
            MR_Word recompilation__V_35_35;
#line 495 "recompilation.m"
            MR_Word recompilation__V_33_33;

#line 491 "recompilation.m"
            {
#line 491 "recompilation.m"
              mercury__map__det_insert_4_p_0(recompilation__TypeCtorInfo_41_41, recompilation__TypeCtorInfo_41_41, ((MR_Box) (recompilation__ModuleQualifier_20)), ((MR_Box) (recompilation__ModuleName_16)), recompilation__MatchingNames1_22, &recompilation__MatchingNames_23);
            }
#line 493 "recompilation.m"
            {
#line 493 "recompilation.m"
              mercury__map__set_4_p_0((MR_Word) &recompilation_scalar_common_2[0], (MR_Word) &recompilation_scalar_common_2[1], ((MR_Box) (recompilation__UnqualifiedId_17)), ((MR_Box) (recompilation__MatchingNames_23)), recompilation__IdSet0_14, &recompilation__IdSet_24);
            }
#line 494 "recompilation.m"
            {
#line 494 "recompilation.m"
              recompilation__update_ids_4_p_0(recompilation__TypeInfo_36_36, recompilation__ItemType_6, ((MR_Box) (recompilation__IdSet_24)), recompilation__ItemSet0_13, &recompilation__ItemSet_25);
            }
#line 495 "recompilation.m"
            recompilation__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 0)));
#line 495 "recompilation.m"
            recompilation__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 1)));
#line 495 "recompilation.m"
            recompilation__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 2)));
#line 495 "recompilation.m"
            recompilation__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 3)));
#line 495 "recompilation.m"
            {
#line 495 "recompilation.m"
              MR_Word base;
#line 495 "recompilation.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 495 "recompilation.m"
              *recompilation__STATE_VARIABLE_Info_27 = base;
#line 495 "recompilation.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__V_32_32));
#line 495 "recompilation.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__ItemSet_25));
#line 495 "recompilation.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recompilation__V_34_34));
#line 495 "recompilation.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (recompilation__V_35_35));
#line 495 "recompilation.m"
            }
#line 492 "recompilation.m"
          }
#line 476 "recompilation.m"
      }
#line 463 "recompilation.m"
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
#line 446 "recompilation.m"
  {
#line 446 "recompilation.m"
    MR_bool recompilation__succeeded = ((MR_tag((MR_Word) recompilation__Qualifier_4)) == (MR_mktag((MR_Integer) 0)));
#line 446 "recompilation.m"
    MR_Word recompilation__HeadVar__3_3;
#line 447 "recompilation.m"
    MR_String recompilation__V_6_6;

#line 447 "recompilation.m"
    if (recompilation__succeeded)
#line 447 "recompilation.m"
      {
#line 447 "recompilation.m"
        recompilation__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__Qualifier_4, (MR_Integer) 0)));
#line 447 "recompilation.m"
        recompilation__succeeded = (strcmp(recompilation__V_6_6, (MR_String) "") == 0);
#line 447 "recompilation.m"
      }
#line 446 "recompilation.m"
    if (recompilation__succeeded)
#line 448 "recompilation.m"
      {
#line 448 "recompilation.m"
        recompilation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 448 "recompilation.m"
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, 0) = ((MR_Box) (recompilation__Name_5));
#line 448 "recompilation.m"
      }
#line 446 "recompilation.m"
    else
#line 450 "recompilation.m"
      {
#line 450 "recompilation.m"
        recompilation__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 450 "recompilation.m"
        MR_hl_field(MR_mktag(1), recompilation__HeadVar__3_3, 0) = ((MR_Box) (recompilation__Qualifier_4));
#line 450 "recompilation.m"
        MR_hl_field(MR_mktag(1), recompilation__HeadVar__3_3, 1) = ((MR_Box) (recompilation__Name_5));
#line 450 "recompilation.m"
      }
#line 446 "recompilation.m"
    return recompilation__HeadVar__3_3;
#line 446 "recompilation.m"
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
#line 443 "recompilation.m"
  {
#line 443 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 443 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;

#line 443 "recompilation.m"
    if (((MR_tag((MR_Word) recompilation__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 444 "recompilation.m"
      {
#line 444 "recompilation.m"
        MR_String recompilation__V_6_6;

#line 444 "recompilation.m"
        recompilation__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 444 "recompilation.m"
        recompilation__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__HeadVar__1_1, (MR_Integer) 1)));
#line 444 "recompilation.m"
      }
#line 443 "recompilation.m"
    else
#line 443 "recompilation.m"
      {
#line 443 "recompilation.m"
        recompilation__HeadVar__2_2 = (MR_Word) &recompilation_scalar_common_8[0];
#line 443 "recompilation.m"
      }
#line 443 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 443 "recompilation.m"
  }
#line 243 "recompilation.m"
}

#line 432 "recompilation.m"
static MR_Box MR_CALL 
recompilation__map_ids_3_f_0_1(
#line 432 "recompilation.m"
  MR_Box recompilation__closure_arg,
#line 432 "recompilation.m"
  MR_Box recompilation__wrapper_arg_1,
#line 432 "recompilation.m"
  MR_Box recompilation__wrapper_arg_2)
#line 432 "recompilation.m"
{
#line 432 "recompilation.m"
  {
#line 432 "recompilation.m"
    MR_Box recompilation__wrapper_arg_3;
#line 432 "recompilation.m"
    MR_Box recompilation__closure = recompilation__closure_arg;
#line 432 "recompilation.m"
    MR_Word recompilation__conv0_HeadVar__7_16;

#line 432 "recompilation.m"
    {
#line 432 "recompilation.m"
      recompilation__conv0_HeadVar__7_16 = recompilation__IntroducedFrom__func__map_ids__432__1_6_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__closure, (MR_Integer) 6))), ((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
#line 432 "recompilation.m"
    recompilation__wrapper_arg_3 = ((MR_Box) (recompilation__conv0_HeadVar__7_16));
#line 432 "recompilation.m"
    return recompilation__wrapper_arg_3;
#line 432 "recompilation.m"
  }
#line 432 "recompilation.m"
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
#line 426 "recompilation.m"
  {
#line 426 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 426 "recompilation.m"
    MR_Word recompilation__Items_8;
#line 426 "recompilation.m"
    MR_Word recompilation__TypeInfo_42_42;
#line 426 "recompilation.m"
    MR_Word recompilation__Items1_9;
#line 426 "recompilation.m"
    MR_Word recompilation__V_13_13;
#line 432 "recompilation.m"
    MR_Box recompilation__conv1_Items_8;

#line 360 "recompilation.m"
    {
#line 360 "recompilation.m"
      recompilation__Items1_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 360 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 0) = recompilation__Init_7;
#line 360 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 1) = recompilation__Init_7;
#line 360 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 2) = recompilation__Init_7;
#line 360 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 3) = recompilation__Init_7;
#line 360 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 4) = recompilation__Init_7;
#line 360 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 5) = recompilation__Init_7;
#line 360 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 6) = recompilation__Init_7;
#line 360 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 7) = recompilation__Init_7;
#line 360 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 8) = recompilation__Init_7;
#line 360 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 9) = recompilation__Init_7;
#line 360 "recompilation.m"
    }
#line 5916 "recompilation.c"
    {
#line 5918 "recompilation.c"
      recompilation__TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 5920 "recompilation.c"
      MR_hl_field(MR_mktag(0), recompilation__TypeInfo_42_42, 0) = ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_set_3));
#line 5922 "recompilation.c"
      MR_hl_field(MR_mktag(0), recompilation__TypeInfo_42_42, 1) = ((MR_Box) (recompilation__TypeInfo_for_U_39));
#line 5924 "recompilation.c"
      MR_hl_field(MR_mktag(0), recompilation__TypeInfo_42_42, 2) = ((MR_Box) (recompilation__TypeInfo_for_U_39));
#line 5926 "recompilation.c"
      MR_hl_field(MR_mktag(0), recompilation__TypeInfo_42_42, 3) = ((MR_Box) (recompilation__TypeInfo_for_U_39));
#line 5928 "recompilation.c"
    }
#line 432 "recompilation.m"
    {
#line 432 "recompilation.m"
      recompilation__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 432 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_13_13, 0) = ((MR_Box) (&recompilation_scalar_common_7[0]));
#line 432 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_13_13, 1) = ((MR_Box) (recompilation__map_ids_3_f_0_1));
#line 432 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 432 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_13_13, 3) = ((MR_Box) (recompilation__TypeInfo_for_T_38));
#line 432 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_13_13, 4) = ((MR_Box) (recompilation__TypeInfo_for_U_39));
#line 432 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_13_13, 5) = ((MR_Box) (recompilation__Func_5));
#line 432 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__V_13_13, 6) = ((MR_Box) (recompilation__Items0_6));
#line 432 "recompilation.m"
    }
#line 432 "recompilation.m"
    {
#line 432 "recompilation.m"
      recompilation__conv1_Items_8 = mercury__list__foldl_3_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_type_0, recompilation__TypeInfo_42_42, (MR_Word) recompilation__V_13_13, (MR_Word) MR_mkword(MR_mktag(1), &recompilation_scalar_common_1[9]), ((MR_Box) (recompilation__Items1_9)));
    }
#line 432 "recompilation.m"
    recompilation__Items_8 = ((MR_Word) recompilation__conv1_Items_8);
#line 426 "recompilation.m"
    return recompilation__Items_8;
#line 426 "recompilation.m"
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
#line 405 "recompilation.m"
  {
#line 405 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 405 "recompilation.m"
    MR_Box recompilation__V_156_156 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 9));
#line 405 "recompilation.m"
    MR_Box recompilation__V_157_157 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 8));
#line 405 "recompilation.m"
    MR_Box recompilation__V_158_158 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 7));
#line 405 "recompilation.m"
    MR_Box recompilation__V_159_159 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 6));
#line 405 "recompilation.m"
    MR_Box recompilation__V_160_160 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 5));
#line 405 "recompilation.m"
    MR_Box recompilation__V_161_161 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 4));
#line 405 "recompilation.m"
    MR_Box recompilation__V_162_162 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 3));
#line 405 "recompilation.m"
    MR_Box recompilation__V_163_163 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 2));
#line 405 "recompilation.m"
    MR_Box recompilation__V_164_164 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 1));
#line 405 "recompilation.m"
    MR_Box recompilation__V_165_165 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 0));

#line 405 "recompilation.m"
#line 405 "recompilation.m"
    switch (recompilation__HeadVar__1_1) {
#line 405 "recompilation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 405 "recompilation.m"
      case (MR_Integer) 9:
#line 424 "recompilation.m"
        {
#line 424 "recompilation.m"
          MR_Word base;
#line 424 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 424 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 424 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__V_165_165;
#line 424 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__V_164_164;
#line 424 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__V_163_163;
#line 424 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__V_162_162;
#line 424 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__V_161_161;
#line 424 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_160_160;
#line 424 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__V_159_159;
#line 424 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__V_158_158;
#line 424 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_157_157;
#line 424 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__IdMap_2;
#line 424 "recompilation.m"
        }
#line 405 "recompilation.m"
        break;
#line 405 "recompilation.m"
      case (MR_Integer) 7:
#line 418 "recompilation.m"
        {
#line 418 "recompilation.m"
          MR_Word base;
#line 418 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 418 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 418 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__V_165_165;
#line 418 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__V_164_164;
#line 418 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__V_163_163;
#line 418 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__V_162_162;
#line 418 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__V_161_161;
#line 418 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_160_160;
#line 418 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__V_159_159;
#line 418 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__IdMap_2;
#line 418 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_157_157;
#line 418 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_156_156;
#line 418 "recompilation.m"
        }
#line 405 "recompilation.m"
        break;
#line 405 "recompilation.m"
      case (MR_Integer) 5:
#line 420 "recompilation.m"
        {
#line 420 "recompilation.m"
          MR_Word base;
#line 420 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 420 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 420 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__V_165_165;
#line 420 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__V_164_164;
#line 420 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__V_163_163;
#line 420 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__V_162_162;
#line 420 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__V_161_161;
#line 420 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__IdMap_2;
#line 420 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__V_159_159;
#line 420 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__V_158_158;
#line 420 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_157_157;
#line 420 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_156_156;
#line 420 "recompilation.m"
        }
#line 405 "recompilation.m"
        break;
#line 405 "recompilation.m"
      case (MR_Integer) 3:
#line 412 "recompilation.m"
        {
#line 412 "recompilation.m"
          MR_Word base;
#line 412 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 412 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 412 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__V_165_165;
#line 412 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__V_164_164;
#line 412 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__V_163_163;
#line 412 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__IdMap_2;
#line 412 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__V_161_161;
#line 412 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_160_160;
#line 412 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__V_159_159;
#line 412 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__V_158_158;
#line 412 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_157_157;
#line 412 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_156_156;
#line 412 "recompilation.m"
        }
#line 405 "recompilation.m"
        break;
#line 405 "recompilation.m"
      case (MR_Integer) 2:
#line 410 "recompilation.m"
        {
#line 410 "recompilation.m"
          MR_Word base;
#line 410 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 410 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 410 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__V_165_165;
#line 410 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__V_164_164;
#line 410 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__IdMap_2;
#line 410 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__V_162_162;
#line 410 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__V_161_161;
#line 410 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_160_160;
#line 410 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__V_159_159;
#line 410 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__V_158_158;
#line 410 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_157_157;
#line 410 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_156_156;
#line 410 "recompilation.m"
        }
#line 405 "recompilation.m"
        break;
#line 405 "recompilation.m"
      case (MR_Integer) 8:
#line 422 "recompilation.m"
        {
#line 422 "recompilation.m"
          MR_Word base;
#line 422 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 422 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 422 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__V_165_165;
#line 422 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__V_164_164;
#line 422 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__V_163_163;
#line 422 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__V_162_162;
#line 422 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__V_161_161;
#line 422 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_160_160;
#line 422 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__V_159_159;
#line 422 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__V_158_158;
#line 422 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__IdMap_2;
#line 422 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_156_156;
#line 422 "recompilation.m"
        }
#line 405 "recompilation.m"
        break;
#line 405 "recompilation.m"
      case (MR_Integer) 6:
#line 416 "recompilation.m"
        {
#line 416 "recompilation.m"
          MR_Word base;
#line 416 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 416 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 416 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__V_165_165;
#line 416 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__V_164_164;
#line 416 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__V_163_163;
#line 416 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__V_162_162;
#line 416 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__V_161_161;
#line 416 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_160_160;
#line 416 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__IdMap_2;
#line 416 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__V_158_158;
#line 416 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_157_157;
#line 416 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_156_156;
#line 416 "recompilation.m"
        }
#line 405 "recompilation.m"
        break;
#line 405 "recompilation.m"
      case (MR_Integer) 0:
#line 406 "recompilation.m"
        {
#line 406 "recompilation.m"
          MR_Word base;
#line 406 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 406 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 406 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__IdMap_2;
#line 406 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__V_164_164;
#line 406 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__V_163_163;
#line 406 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__V_162_162;
#line 406 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__V_161_161;
#line 406 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_160_160;
#line 406 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__V_159_159;
#line 406 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__V_158_158;
#line 406 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_157_157;
#line 406 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_156_156;
#line 406 "recompilation.m"
        }
#line 405 "recompilation.m"
        break;
#line 405 "recompilation.m"
      case (MR_Integer) 1:
#line 408 "recompilation.m"
        {
#line 408 "recompilation.m"
          MR_Word base;
#line 408 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 408 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 408 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__V_165_165;
#line 408 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__IdMap_2;
#line 408 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__V_163_163;
#line 408 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__V_162_162;
#line 408 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__V_161_161;
#line 408 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_160_160;
#line 408 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__V_159_159;
#line 408 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__V_158_158;
#line 408 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_157_157;
#line 408 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_156_156;
#line 408 "recompilation.m"
        }
#line 405 "recompilation.m"
        break;
#line 405 "recompilation.m"
      case (MR_Integer) 4:
#line 414 "recompilation.m"
        {
#line 414 "recompilation.m"
          MR_Word base;
#line 414 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 414 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 414 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__V_165_165;
#line 414 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__V_164_164;
#line 414 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__V_163_163;
#line 414 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__V_162_162;
#line 414 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__IdMap_2;
#line 414 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_160_160;
#line 414 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__V_159_159;
#line 414 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__V_158_158;
#line 414 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_157_157;
#line 414 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_156_156;
#line 414 "recompilation.m"
        }
#line 405 "recompilation.m"
        break;
#line 405 "recompilation.m"
    }
#line 405 "recompilation.m"
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
#line 394 "recompilation.m"
  {
#line 394 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 394 "recompilation.m"
    MR_Box recompilation__HeadVar__3_3;
#line 394 "recompilation.m"
    MR_Box recompilation__V_105_105 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 9));
#line 394 "recompilation.m"
    MR_Box recompilation__V_106_106 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 8));
#line 394 "recompilation.m"
    MR_Box recompilation__V_107_107 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 7));
#line 394 "recompilation.m"
    MR_Box recompilation__V_108_108 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 6));
#line 394 "recompilation.m"
    MR_Box recompilation__V_109_109 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 5));
#line 394 "recompilation.m"
    MR_Box recompilation__V_110_110 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 4));
#line 394 "recompilation.m"
    MR_Box recompilation__V_111_111 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 3));
#line 394 "recompilation.m"
    MR_Box recompilation__V_112_112 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 2));
#line 394 "recompilation.m"
    MR_Box recompilation__V_113_113 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 1));
#line 394 "recompilation.m"
    MR_Box recompilation__V_114_114 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 0));

#line 394 "recompilation.m"
#line 394 "recompilation.m"
    switch (recompilation__HeadVar__2_2) {
#line 394 "recompilation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 394 "recompilation.m"
      case (MR_Integer) 9:
#line 403 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_105_105;
#line 394 "recompilation.m"
        break;
#line 394 "recompilation.m"
      case (MR_Integer) 7:
#line 401 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_107_107;
#line 394 "recompilation.m"
        break;
#line 394 "recompilation.m"
      case (MR_Integer) 5:
#line 399 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_109_109;
#line 394 "recompilation.m"
        break;
#line 394 "recompilation.m"
      case (MR_Integer) 3:
#line 397 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_111_111;
#line 394 "recompilation.m"
        break;
#line 394 "recompilation.m"
      case (MR_Integer) 2:
#line 396 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_112_112;
#line 394 "recompilation.m"
        break;
#line 394 "recompilation.m"
      case (MR_Integer) 8:
#line 402 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_106_106;
#line 394 "recompilation.m"
        break;
#line 394 "recompilation.m"
      case (MR_Integer) 6:
#line 400 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_108_108;
#line 394 "recompilation.m"
        break;
#line 394 "recompilation.m"
      case (MR_Integer) 0:
#line 394 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_114_114;
#line 394 "recompilation.m"
        break;
#line 394 "recompilation.m"
      case (MR_Integer) 1:
#line 395 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_113_113;
#line 394 "recompilation.m"
        break;
#line 394 "recompilation.m"
      case (MR_Integer) 4:
#line 398 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_110_110;
#line 394 "recompilation.m"
        break;
#line 394 "recompilation.m"
    }
#line 394 "recompilation.m"
    return recompilation__HeadVar__3_3;
#line 394 "recompilation.m"
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
#line 389 "recompilation.m"
  {
#line 389 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 389 "recompilation.m"
    MR_Box recompilation__V_38_38 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 9));
#line 389 "recompilation.m"
    MR_Box recompilation__V_39_39 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 8));
#line 389 "recompilation.m"
    MR_Box recompilation__V_40_40 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 7));
#line 389 "recompilation.m"
    MR_Box recompilation__V_41_41 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 6));
#line 389 "recompilation.m"
    MR_Box recompilation__V_42_42 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 5));
#line 389 "recompilation.m"
    MR_Box recompilation__V_43_43 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 4));
#line 389 "recompilation.m"
    MR_Box recompilation__V_44_44 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 3));
#line 389 "recompilation.m"
    MR_Box recompilation__V_45_45 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 2));
#line 389 "recompilation.m"
    MR_Box recompilation__V_46_46 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 1));
#line 389 "recompilation.m"
    MR_Box recompilation__V_47_47 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 0));

#line 389 "recompilation.m"
#line 389 "recompilation.m"
    switch (recompilation__HeadVar__1_1) {
#line 389 "recompilation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 389 "recompilation.m"
      case (MR_Integer) 7:
#line 392 "recompilation.m"
        {
#line 392 "recompilation.m"
          MR_Word base;
#line 392 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 392 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 392 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__V_47_47;
#line 392 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__V_46_46;
#line 392 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__V_45_45;
#line 392 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__V_44_44;
#line 392 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__V_43_43;
#line 392 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_42_42;
#line 392 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__V_41_41;
#line 392 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__Set_2;
#line 392 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_39_39;
#line 392 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_38_38;
#line 392 "recompilation.m"
        }
#line 389 "recompilation.m"
        break;
#line 389 "recompilation.m"
      case (MR_Integer) 6:
#line 390 "recompilation.m"
        {
#line 390 "recompilation.m"
          MR_Word base;
#line 390 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 390 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 390 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__V_47_47;
#line 390 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__V_46_46;
#line 390 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__V_45_45;
#line 390 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__V_44_44;
#line 390 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__V_43_43;
#line 390 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_42_42;
#line 390 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__Set_2;
#line 390 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__V_40_40;
#line 390 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_39_39;
#line 390 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_38_38;
#line 390 "recompilation.m"
        }
#line 389 "recompilation.m"
        break;
#line 389 "recompilation.m"
    }
#line 389 "recompilation.m"
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
#line 386 "recompilation.m"
  {
#line 386 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 386 "recompilation.m"
    MR_Box recompilation__HeadVar__3_3;
#line 386 "recompilation.m"
    MR_Box recompilation__V_29_29 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 7));
#line 386 "recompilation.m"
    MR_Box recompilation__V_30_30 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 6));
#line 386 "recompilation.m"
    MR_Box recompilation__V_27_27 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 9));
#line 386 "recompilation.m"
    MR_Box recompilation__V_28_28 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 8));
#line 386 "recompilation.m"
    MR_Box recompilation__V_31_31 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 5));
#line 386 "recompilation.m"
    MR_Box recompilation__V_32_32 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 4));
#line 386 "recompilation.m"
    MR_Box recompilation__V_33_33 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 3));
#line 386 "recompilation.m"
    MR_Box recompilation__V_34_34 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 2));
#line 386 "recompilation.m"
    MR_Box recompilation__V_35_35 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 1));
#line 386 "recompilation.m"
    MR_Box recompilation__V_36_36 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 0));

#line 386 "recompilation.m"
#line 386 "recompilation.m"
    switch (recompilation__HeadVar__2_2) {
#line 386 "recompilation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 386 "recompilation.m"
      case (MR_Integer) 7:
#line 387 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_29_29;
#line 386 "recompilation.m"
        break;
#line 386 "recompilation.m"
      case (MR_Integer) 6:
#line 386 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_30_30;
#line 386 "recompilation.m"
        break;
#line 386 "recompilation.m"
    }
#line 386 "recompilation.m"
    return recompilation__HeadVar__3_3;
#line 386 "recompilation.m"
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
#line 375 "recompilation.m"
  {
#line 375 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 375 "recompilation.m"
    MR_Box recompilation__V_83_83 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 9));
#line 375 "recompilation.m"
    MR_Box recompilation__V_84_84 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 8));
#line 375 "recompilation.m"
    MR_Box recompilation__V_85_85 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 7));
#line 375 "recompilation.m"
    MR_Box recompilation__V_86_86 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 6));
#line 375 "recompilation.m"
    MR_Box recompilation__V_87_87 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 5));
#line 375 "recompilation.m"
    MR_Box recompilation__V_88_88 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 4));
#line 375 "recompilation.m"
    MR_Box recompilation__V_89_89 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 3));
#line 375 "recompilation.m"
    MR_Box recompilation__V_90_90 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 2));
#line 375 "recompilation.m"
    MR_Box recompilation__V_91_91 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 1));
#line 375 "recompilation.m"
    MR_Box recompilation__V_92_92 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 0));

#line 375 "recompilation.m"
#line 375 "recompilation.m"
    switch (recompilation__HeadVar__1_1) {
#line 375 "recompilation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 375 "recompilation.m"
      case (MR_Integer) 3:
#line 382 "recompilation.m"
        {
#line 382 "recompilation.m"
          MR_Word base;
#line 382 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 382 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 382 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__V_92_92;
#line 382 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__V_91_91;
#line 382 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__V_90_90;
#line 382 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__IdMap_2;
#line 382 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__V_88_88;
#line 382 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_87_87;
#line 382 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__V_86_86;
#line 382 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__V_85_85;
#line 382 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_84_84;
#line 382 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_83_83;
#line 382 "recompilation.m"
        }
#line 375 "recompilation.m"
        break;
#line 375 "recompilation.m"
      case (MR_Integer) 2:
#line 380 "recompilation.m"
        {
#line 380 "recompilation.m"
          MR_Word base;
#line 380 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 380 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 380 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__V_92_92;
#line 380 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__V_91_91;
#line 380 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__IdMap_2;
#line 380 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__V_89_89;
#line 380 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__V_88_88;
#line 380 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_87_87;
#line 380 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__V_86_86;
#line 380 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__V_85_85;
#line 380 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_84_84;
#line 380 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_83_83;
#line 380 "recompilation.m"
        }
#line 375 "recompilation.m"
        break;
#line 375 "recompilation.m"
      case (MR_Integer) 0:
#line 376 "recompilation.m"
        {
#line 376 "recompilation.m"
          MR_Word base;
#line 376 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 376 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 376 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__IdMap_2;
#line 376 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__V_91_91;
#line 376 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__V_90_90;
#line 376 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__V_89_89;
#line 376 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__V_88_88;
#line 376 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_87_87;
#line 376 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__V_86_86;
#line 376 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__V_85_85;
#line 376 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_84_84;
#line 376 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_83_83;
#line 376 "recompilation.m"
        }
#line 375 "recompilation.m"
        break;
#line 375 "recompilation.m"
      case (MR_Integer) 1:
#line 378 "recompilation.m"
        {
#line 378 "recompilation.m"
          MR_Word base;
#line 378 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 378 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 378 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__V_92_92;
#line 378 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__IdMap_2;
#line 378 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__V_90_90;
#line 378 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__V_89_89;
#line 378 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__V_88_88;
#line 378 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_87_87;
#line 378 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__V_86_86;
#line 378 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__V_85_85;
#line 378 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_84_84;
#line 378 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_83_83;
#line 378 "recompilation.m"
        }
#line 375 "recompilation.m"
        break;
#line 375 "recompilation.m"
      case (MR_Integer) 4:
#line 384 "recompilation.m"
        {
#line 384 "recompilation.m"
          MR_Word base;
#line 384 "recompilation.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 384 "recompilation.m"
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
#line 384 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__V_92_92;
#line 384 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__V_91_91;
#line 384 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__V_90_90;
#line 384 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__V_89_89;
#line 384 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__IdMap_2;
#line 384 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__V_87_87;
#line 384 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__V_86_86;
#line 384 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__V_85_85;
#line 384 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__V_84_84;
#line 384 "recompilation.m"
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__V_83_83;
#line 384 "recompilation.m"
        }
#line 375 "recompilation.m"
        break;
#line 375 "recompilation.m"
    }
#line 375 "recompilation.m"
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
#line 369 "recompilation.m"
  {
#line 369 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 369 "recompilation.m"
    MR_Box recompilation__HeadVar__3_3;
#line 369 "recompilation.m"
    MR_Box recompilation__V_62_62 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 4));
#line 369 "recompilation.m"
    MR_Box recompilation__V_63_63 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 3));
#line 369 "recompilation.m"
    MR_Box recompilation__V_64_64 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 2));
#line 369 "recompilation.m"
    MR_Box recompilation__V_65_65 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 1));
#line 369 "recompilation.m"
    MR_Box recompilation__V_66_66 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 0));
#line 369 "recompilation.m"
    MR_Box recompilation__V_57_57 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 9));
#line 369 "recompilation.m"
    MR_Box recompilation__V_58_58 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 8));
#line 369 "recompilation.m"
    MR_Box recompilation__V_59_59 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 7));
#line 369 "recompilation.m"
    MR_Box recompilation__V_60_60 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 6));
#line 369 "recompilation.m"
    MR_Box recompilation__V_61_61 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 5));

#line 369 "recompilation.m"
#line 369 "recompilation.m"
    switch (recompilation__HeadVar__2_2) {
#line 369 "recompilation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 369 "recompilation.m"
      case (MR_Integer) 3:
#line 372 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_63_63;
#line 369 "recompilation.m"
        break;
#line 369 "recompilation.m"
      case (MR_Integer) 2:
#line 371 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_64_64;
#line 369 "recompilation.m"
        break;
#line 369 "recompilation.m"
      case (MR_Integer) 0:
#line 369 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_66_66;
#line 369 "recompilation.m"
        break;
#line 369 "recompilation.m"
      case (MR_Integer) 1:
#line 370 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_65_65;
#line 369 "recompilation.m"
        break;
#line 369 "recompilation.m"
      case (MR_Integer) 4:
#line 373 "recompilation.m"
        recompilation__HeadVar__3_3 = recompilation__V_62_62;
#line 369 "recompilation.m"
        break;
#line 369 "recompilation.m"
    }
#line 369 "recompilation.m"
    return recompilation__HeadVar__3_3;
#line 369 "recompilation.m"
  }
#line 199 "recompilation.m"
}

#line 192 "recompilation.m"
MR_Word MR_CALL 
recompilation__init_used_items_0_f_0(void)
#line 192 "recompilation.m"
{
#line 366 "recompilation.m"
  {
#line 366 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 366 "recompilation.m"
    MR_Word recompilation__HeadVar__1_1;
#line 366 "recompilation.m"
    MR_Word recompilation__TypeInfo_12_12 = (MR_Word) &recompilation_scalar_common_2[0];
#line 366 "recompilation.m"
    MR_Word recompilation__TypeInfo_13_13 = (MR_Word) &recompilation_scalar_common_2[1];
#line 366 "recompilation.m"
    MR_Word recompilation__V_2_2;
#line 366 "recompilation.m"
    MR_Word recompilation__V_3_3;
#line 366 "recompilation.m"
    MR_Word recompilation__V_4_4;
#line 366 "recompilation.m"
    MR_Word recompilation__V_5_5;
#line 366 "recompilation.m"
    MR_Word recompilation__V_6_6;
#line 366 "recompilation.m"
    MR_Word recompilation__V_7_7;
#line 366 "recompilation.m"
    MR_Word recompilation__V_8_8;
#line 366 "recompilation.m"
    MR_Word recompilation__V_9_9;
#line 366 "recompilation.m"
    MR_Word recompilation__V_10_10;
#line 366 "recompilation.m"
    MR_Word recompilation__V_11_11;

#line 366 "recompilation.m"
    {
#line 366 "recompilation.m"
      recompilation__V_2_2 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 366 "recompilation.m"
    {
#line 366 "recompilation.m"
      recompilation__V_3_3 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 366 "recompilation.m"
    {
#line 366 "recompilation.m"
      recompilation__V_4_4 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 366 "recompilation.m"
    {
#line 366 "recompilation.m"
      recompilation__V_5_5 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 367 "recompilation.m"
    {
#line 367 "recompilation.m"
      recompilation__V_6_6 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 367 "recompilation.m"
    {
#line 367 "recompilation.m"
      recompilation__V_7_7 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 367 "recompilation.m"
    {
#line 367 "recompilation.m"
      recompilation__V_8_8 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 367 "recompilation.m"
    {
#line 367 "recompilation.m"
      recompilation__V_9_9 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 367 "recompilation.m"
    {
#line 367 "recompilation.m"
      recompilation__V_10_10 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 367 "recompilation.m"
    {
#line 367 "recompilation.m"
      recompilation__V_11_11 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
#line 366 "recompilation.m"
    {
#line 366 "recompilation.m"
      recompilation__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 366 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 0) = ((MR_Box) (recompilation__V_2_2));
#line 366 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 1) = ((MR_Box) (recompilation__V_3_3));
#line 366 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 2) = ((MR_Box) (recompilation__V_4_4));
#line 366 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 3) = ((MR_Box) (recompilation__V_5_5));
#line 366 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 4) = ((MR_Box) (recompilation__V_6_6));
#line 366 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 5) = ((MR_Box) (recompilation__V_7_7));
#line 366 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 6) = ((MR_Box) (recompilation__V_8_8));
#line 366 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 7) = ((MR_Box) (recompilation__V_9_9));
#line 366 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 8) = ((MR_Box) (recompilation__V_10_10));
#line 366 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 9) = ((MR_Box) (recompilation__V_11_11));
#line 366 "recompilation.m"
    }
#line 366 "recompilation.m"
    return recompilation__HeadVar__1_1;
#line 366 "recompilation.m"
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
#line 363 "recompilation.m"
  {
#line 363 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 363 "recompilation.m"
    MR_Word recompilation__HeadVar__4_4;

#line 363 "recompilation.m"
    {
#line 363 "recompilation.m"
      recompilation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 363 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 0) = recompilation__Simple_5;
#line 363 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 1) = recompilation__Simple_5;
#line 363 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 2) = recompilation__Simple_5;
#line 363 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 3) = recompilation__Simple_5;
#line 363 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 4) = recompilation__Simple_5;
#line 363 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 5) = recompilation__Cons_7;
#line 363 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 6) = recompilation__PorF_6;
#line 363 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 7) = recompilation__PorF_6;
#line 363 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 8) = recompilation__PorF_6;
#line 363 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 9) = recompilation__PorF_6;
#line 363 "recompilation.m"
    }
#line 363 "recompilation.m"
    return recompilation__HeadVar__4_4;
#line 363 "recompilation.m"
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
#line 360 "recompilation.m"
  {
#line 360 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 360 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;

#line 360 "recompilation.m"
    {
#line 360 "recompilation.m"
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 360 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = recompilation__Init_3;
#line 360 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = recompilation__Init_3;
#line 360 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 2) = recompilation__Init_3;
#line 360 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 3) = recompilation__Init_3;
#line 360 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 4) = recompilation__Init_3;
#line 360 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 5) = recompilation__Init_3;
#line 360 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 6) = recompilation__Init_3;
#line 360 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 7) = recompilation__Init_3;
#line 360 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 8) = recompilation__Init_3;
#line 360 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 9) = recompilation__Init_3;
#line 360 "recompilation.m"
    }
#line 360 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 360 "recompilation.m"
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
#line 455 "recompilation.m"
  {
#line 455 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 455 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;
#line 455 "recompilation.m"
    MR_Word recompilation__V_4_4;
#line 455 "recompilation.m"
    MR_Word recompilation__V_5_5;
#line 455 "recompilation.m"
    MR_Word recompilation__V_6_6;

#line 458 "recompilation.m"
    {
#line 458 "recompilation.m"
      recompilation__V_4_4 = recompilation__init_used_items_0_f_0();
    }
#line 459 "recompilation.m"
    {
#line 459 "recompilation.m"
      recompilation__V_5_5 = mercury__map__init_0_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, (MR_Word) &recompilation_scalar_common_1[0]);
    }
#line 460 "recompilation.m"
    {
#line 460 "recompilation.m"
      recompilation__V_6_6 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0);
    }
#line 456 "recompilation.m"
    {
#line 456 "recompilation.m"
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 456 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = ((MR_Box) (recompilation__ModuleName_3));
#line 456 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = ((MR_Box) (recompilation__V_4_4));
#line 456 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 2) = ((MR_Box) (recompilation__V_5_5));
#line 456 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 3) = ((MR_Box) (recompilation__V_6_6));
#line 456 "recompilation.m"
    }
#line 455 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 455 "recompilation.m"
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
#line 125 "recompilation.m"
}

#line 124 "recompilation.m"
MR_Word MR_CALL 
recompilation__item_name_to_inst_id_1_f_0(
#line 124 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 124 "recompilation.m"
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
#line 124 "recompilation.m"
}

#line 123 "recompilation.m"
MR_Word MR_CALL 
recompilation__item_name_to_type_ctor_1_f_0(
#line 123 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 123 "recompilation.m"
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
#line 123 "recompilation.m"
}

#line 121 "recompilation.m"
MR_Word MR_CALL 
recompilation__mode_id_to_item_name_1_f_0(
#line 121 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 121 "recompilation.m"
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
#line 121 "recompilation.m"
}

#line 120 "recompilation.m"
MR_Word MR_CALL 
recompilation__inst_id_to_item_name_1_f_0(
#line 120 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 120 "recompilation.m"
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
#line 120 "recompilation.m"
}

#line 119 "recompilation.m"
MR_Word MR_CALL 
recompilation__type_ctor_to_item_name_1_f_0(
#line 119 "recompilation.m"
  MR_Word recompilation__HeadVar__1_1)
#line 119 "recompilation.m"
{
#line 349 "recompilation.m"
  {
#line 349 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 349 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;
#line 349 "recompilation.m"
    MR_Word recompilation__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 349 "recompilation.m"
    MR_Integer recompilation__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));

#line 349 "recompilation.m"
    {
#line 349 "recompilation.m"
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 349 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = ((MR_Box) (recompilation__SymName_3));
#line 349 "recompilation.m"
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = ((MR_Box) (recompilation__Arity_4));
#line 349 "recompilation.m"
    }
#line 349 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 349 "recompilation.m"
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
#line 326 "recompilation.m"
  {
#line 326 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 326 "recompilation.m"
    MR_Word recompilation__HeadVar__2_2;

#line 326 "recompilation.m"
#line 326 "recompilation.m"
    switch (recompilation__HeadVar__1_1) {
#line 326 "recompilation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 326 "recompilation.m"
      case (MR_Integer) 1:
#line 327 "recompilation.m"
        recompilation__HeadVar__2_2 = (MR_Integer) 7;
#line 326 "recompilation.m"
        break;
#line 326 "recompilation.m"
      case (MR_Integer) 0:
#line 326 "recompilation.m"
        recompilation__HeadVar__2_2 = (MR_Integer) 6;
#line 326 "recompilation.m"
        break;
#line 326 "recompilation.m"
    }
#line 326 "recompilation.m"
    return recompilation__HeadVar__2_2;
#line 326 "recompilation.m"
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
#line 338 "recompilation.m"
  {
#line 338 "recompilation.m"
    MR_bool recompilation__succeeded;

#line 338 "recompilation.m"
    *recompilation__HeadVar__1_1 = ((&recompilation_vector_common_5[0 + recompilation__HeadVar__2_2]))->recompilation__vector_common_type_5_0__vct_5_f_0;
#line 338 "recompilation.m"
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
#line 338 "recompilation.m"
  {
#line 338 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 338 "recompilation.m"
    MR_Integer recompilation__slot_0;
#line 338 "recompilation.m"
    MR_String recompilation__str_1;

#line 338 "recompilation.m"
    /* hashed string simple lookup switch */
#line 338 "recompilation.m"
    /* compute the hash value of the input string */
#line 338 "recompilation.m"
    recompilation__slot_0 = ((MR_hash_string5(recompilation__HeadVar__1_1)) & (MR_Integer) 31);
#line 338 "recompilation.m"
    /* no collisions; no hash chain loop */
#line 338 "recompilation.m"
    /* lookup the string for this hash slot */
#line 338 "recompilation.m"
    recompilation__str_1 = ((&recompilation_vector_common_4[0 + recompilation__slot_0]))->recompilation__vector_common_type_4_0__vct_4_f_0;
#line 338 "recompilation.m"
    /* did we find a match? */
#line 338 "recompilation.m"
    if ((((recompilation__str_1 != NULL)) && ((strcmp(recompilation__str_1, recompilation__HeadVar__1_1) == 0))))
#line 338 "recompilation.m"
      {
#line 338 "recompilation.m"
        /* we found a match; look up the results */
#line 338 "recompilation.m"
        *recompilation__HeadVar__2_2 = ((&recompilation_vector_common_4[0 + recompilation__slot_0]))->recompilation__vector_common_type_4_0__vct_4_f_1;
#line 338 "recompilation.m"
        recompilation__succeeded = MR_TRUE;
#line 338 "recompilation.m"
        /* jump out of search loop */
#line 338 "recompilation.m"
        goto label_0;
#line 338 "recompilation.m"
      }
#line 338 "recompilation.m"
    recompilation__succeeded = MR_FALSE;
#line 338 "recompilation.m"
  label_0:;
#line 338 "recompilation.m"
    return recompilation__succeeded;
#line 338 "recompilation.m"
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
#line 335 "recompilation.m"
  {
#line 335 "recompilation.m"
    MR_bool recompilation__succeeded;

#line 335 "recompilation.m"
#line 335 "recompilation.m"
    switch (recompilation__HeadVar__1_1) {
#line 335 "recompilation.m"
      default:
#line 335 "recompilation.m"
        recompilation__succeeded = MR_FALSE;
#line 335 "recompilation.m"
        break;
#line 335 "recompilation.m"
      case (MR_Integer) 7:
#line 336 "recompilation.m"
        recompilation__succeeded = MR_TRUE;
#line 335 "recompilation.m"
        break;
#line 335 "recompilation.m"
      case (MR_Integer) 6:
#line 335 "recompilation.m"
        recompilation__succeeded = MR_TRUE;
#line 335 "recompilation.m"
        break;
#line 335 "recompilation.m"
    }
#line 335 "recompilation.m"
    return recompilation__succeeded;
#line 335 "recompilation.m"
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
#line 329 "recompilation.m"
  {
#line 329 "recompilation.m"
    MR_bool recompilation__succeeded;

#line 329 "recompilation.m"
    if (((MR_Integer) 31 & (((MR_Integer) 1 << recompilation__HeadVar__1_1))))
#line 329 "recompilation.m"
      {
#line 329 "recompilation.m"
        recompilation__succeeded = MR_TRUE;
#line 329 "recompilation.m"
      }
#line 329 "recompilation.m"
    else
#line 329 "recompilation.m"
      recompilation__succeeded = MR_FALSE;
#line 329 "recompilation.m"
    return recompilation__succeeded;
#line 329 "recompilation.m"
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
#line 316 "recompilation.m"
  {
#line 316 "recompilation.m"
    MR_bool recompilation__succeeded = ((MR_tag((MR_Word) recompilation__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 316 "recompilation.m"
    MR_String recompilation__TimestampString_3;
#line 316 "recompilation.m"
    MR_Word recompilation__V_5_5;
#line 316 "recompilation.m"
    MR_Word recompilation__V_6_6;
#line 316 "recompilation.m"
    MR_Word recompilation__V_4_4;

#line 316 "recompilation.m"
    if (recompilation__succeeded)
#line 316 "recompilation.m"
      {
#line 316 "recompilation.m"
        recompilation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
#line 316 "recompilation.m"
        recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));
#line 316 "recompilation.m"
        recompilation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 2)));
#line 316 "recompilation.m"
        recompilation__succeeded = ((((MR_tag((MR_Word) recompilation__V_5_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__V_5_5, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 316 "recompilation.m"
        if (recompilation__succeeded)
#line 316 "recompilation.m"
          {
#line 316 "recompilation.m"
            recompilation__TimestampString_3 = ((MR_String) (MR_hl_field(MR_mktag(3), recompilation__V_5_5, (MR_Integer) 1)));
#line 316 "recompilation.m"
            recompilation__succeeded = (recompilation__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 316 "recompilation.m"
            if (recompilation__succeeded)
#line 317 "recompilation.m"
              {
#line 317 "recompilation.m"
                return recompilation__succeeded = libs__timestamp__string_to_timestamp_1_f_0(recompilation__TimestampString_3, recompilation__HeadVar__2_2);
              }
#line 316 "recompilation.m"
          }
#line 316 "recompilation.m"
      }
#line 316 "recompilation.m"
    return recompilation__succeeded;
#line 316 "recompilation.m"
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
#line 316 "recompilation.m"
  {
#line 316 "recompilation.m"
    MR_bool recompilation__succeeded = ((MR_tag((MR_Word) recompilation__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 316 "recompilation.m"
    MR_String recompilation__TimestampString_5;
#line 316 "recompilation.m"
    MR_Word recompilation__V_7_7;
#line 316 "recompilation.m"
    MR_Word recompilation__V_8_8;
#line 316 "recompilation.m"
    MR_Word recompilation__V_6_6;

#line 316 "recompilation.m"
    if (recompilation__succeeded)
#line 316 "recompilation.m"
      {
#line 316 "recompilation.m"
        recompilation__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__Term_3, (MR_Integer) 0)));
#line 316 "recompilation.m"
        recompilation__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__Term_3, (MR_Integer) 1)));
#line 316 "recompilation.m"
        recompilation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__Term_3, (MR_Integer) 2)));
#line 316 "recompilation.m"
        recompilation__succeeded = ((((MR_tag((MR_Word) recompilation__V_7_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__V_7_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 316 "recompilation.m"
        if (recompilation__succeeded)
#line 316 "recompilation.m"
          {
#line 316 "recompilation.m"
            recompilation__TimestampString_5 = ((MR_String) (MR_hl_field(MR_mktag(3), recompilation__V_7_7, (MR_Integer) 1)));
#line 316 "recompilation.m"
            recompilation__succeeded = (recompilation__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 316 "recompilation.m"
            if (recompilation__succeeded)
#line 317 "recompilation.m"
              {
#line 317 "recompilation.m"
                return recompilation__succeeded = libs__timestamp__string_to_timestamp_1_f_0(recompilation__TimestampString_5, recompilation__HeadVar__2_2);
              }
#line 316 "recompilation.m"
          }
#line 316 "recompilation.m"
      }
#line 316 "recompilation.m"
    return recompilation__succeeded;
#line 316 "recompilation.m"
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
#line 319 "recompilation.m"
  {
#line 319 "recompilation.m"
    MR_bool recompilation__succeeded;
#line 319 "recompilation.m"
    MR_String recompilation__V_10_10;

#line 320 "recompilation.m"
    {
#line 320 "recompilation.m"
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
#line 321 "recompilation.m"
    {
#line 321 "recompilation.m"
      recompilation__V_10_10 = libs__timestamp__timestamp_to_string_1_f_0(recompilation__VersionNumber_4);
    }
#line 321 "recompilation.m"
    {
#line 321 "recompilation.m"
      mercury__io__write_string_3_p_0(recompilation__V_10_10);
    }
#line 322 "recompilation.m"
    {
#line 322 "recompilation.m"
      mercury__io__write_string_3_p_0((MR_String) "\"");
#line 322 "recompilation.m"
      return;
    }
#line 319 "recompilation.m"
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
