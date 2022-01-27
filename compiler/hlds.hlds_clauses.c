/*
** Automatically generated from `hlds_clauses.m'
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


/* :- module hlds.hlds_clauses. */
/* :- implementation. */

/*
INIT mercury__hlds__hlds_clauses__init
ENDINIT
*/

#include "hlds.hlds_clauses.mih"


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
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 140 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 143 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_0_0[5];

#line 146 "hlds.hlds_clauses.c"
static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clause_0_0[5];

#line 149 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_0_0;

#line 152 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_0_0[1];

#line 155 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_0[1];

#line 158 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_0[1];

#line 161 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_0[1];

#line 164 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_0;

#line 167 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1builtin__type_ctor_info_int_0;

#line 170 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_applicable_modes_0_1[1];

#line 173 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_1;

#line 176 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_applicable_modes_0_0[1];

#line 179 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_applicable_modes_0_1[1];

#line 182 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_applicable_modes_0[2];

#line 185 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_applicable_modes_0[2];

#line 188 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_applicable_modes_0[2];

#line 191 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_item_number_region_0_0[4];

#line 194 "hlds.hlds_clauses.c"
static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clause_item_number_region_0_0[4];

#line 197 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_number_region_0_0;

#line 200 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_number_region_0_0[1];

#line 203 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_item_number_region_0[1];

#line 206 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_item_number_region_0[1];

#line 209 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_region_0[1];

#line 212 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_0;

#line 215 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_1;

#line 218 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_value_ordered_clause_item_number_type_0[2];

#line 221 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_clause_item_number_type_0[2];

#line 224 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_type_0[2];

#line 227 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_0;

#line 230 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_1;

#line 233 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_value_ordered_clause_item_number_types_0[2];

#line 236 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_clause_item_number_types_0[2];

#line 239 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_types_0[2];

#line 242 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0;

#line 245 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_item_numbers_0_0[2];

#line 248 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_0;

#line 251 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_1;

#line 254 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_numbers_0_0[1];

#line 257 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_numbers_0_1[1];

#line 260 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_item_numbers_0[2];

#line 263 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_item_numbers_0[2];

#line 266 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_numbers_0[2];

#line 269 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 272 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 275 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_clauses__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 278 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 281 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_clauses__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 284 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__hlds__hlds_args__ti_proc_arg_vector_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 287 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clauses_info_0_0[9];

#line 290 "hlds.hlds_clauses.c"
static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clauses_info_0_0[9];

#line 293 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_info_0_0;

#line 296 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_info_0_0[1];

#line 299 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clauses_info_0[1];

#line 302 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clauses_info_0[1];

#line 305 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clauses_info_0[1];

#line 308 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__cord__ti_cord_1hlds__hlds_clauses__type_ctor_info_clause_0;

#line 311 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clauses_rep_0_0[2];

#line 314 "hlds.hlds_clauses.c"
static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clauses_rep_0_0[2];

#line 317 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_rep_0_0;

#line 320 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_rep_0_0[1];

#line 323 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clauses_rep_0[1];

#line 326 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clauses_rep_0[1];

#line 329 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clauses_rep_0[1];

#line 332 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_0_0_10001(
#line 335 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 337 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

#line 340 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_0_0_10001(
#line 343 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 345 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 347 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

#line 350 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_applicable_modes_0_0_10001(
#line 353 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 355 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

#line 358 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_applicable_modes_0_0_10001(
#line 361 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 363 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 365 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

#line 368 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_region_0_0_10001(
#line 371 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 373 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

#line 376 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_region_0_0_10001(
#line 379 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 381 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 383 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

#line 386 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_type_0_0_10001(
#line 389 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 391 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

#line 394 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_type_0_0_10001(
#line 397 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 399 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 401 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

#line 404 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_types_0_0_10001(
#line 407 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 409 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

#line 412 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_types_0_0_10001(
#line 415 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 417 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 419 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

#line 422 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_numbers_0_0_10001(
#line 425 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 427 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

#line 430 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_numbers_0_0_10001(
#line 433 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 435 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 437 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

#line 440 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clauses_info_0_0_10001(
#line 443 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 445 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

#line 448 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clauses_info_0_0_10001(
#line 451 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 453 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 455 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

#line 458 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clauses_rep_0_0_10001(
#line 461 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 463 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

#line 466 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clauses_rep_0_0_10001(
#line 469 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 471 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 473 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

#line 362 "hlds_clauses.m"
static void MR_CALL 
hlds__hlds_clauses__add_clause_item_number_regions_4_p_0(
#line 362 "hlds_clauses.m"
  MR_Integer hlds__hlds_clauses__ItemNum_5,
#line 362 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__Context_6,
#line 362 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_Regions_0_23,
#line 362 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_Regions_24);


static /* final */ const MR_Box hlds__hlds_clauses_scalar_common_1[9][2];

static /* final */ const MR_Box hlds__hlds_clauses_scalar_common_2[2][3];




static /* final */ const MR_Box hlds__hlds_clauses_scalar_common_1[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__hlds_args__hlds__hlds_args__type_ctor_info_proc_arg_vector_1)),
    ((MR_Box) (&hlds__hlds_clauses_scalar_common_1[1]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__hlds_clauses_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_clauses_scalar_common_1[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_clauses_scalar_common_1[0]))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 568 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 576 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_0_0[5] = {
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_applicable_modes_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_implementation_language_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 585 "hlds.hlds_clauses.c"
static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clause_0_0[5] = {
  (MR_String) "clause_applicable_procs",
  (MR_String) "clause_body",
  (MR_String) "clause_lang",
  (MR_String) "clause_context",
  (MR_String) "clause_statevar_warnings"
};

#line 594 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_0_0 = {
  (MR_String) "clause",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_0_0,
  hlds__hlds_clauses__hlds__hlds_clauses__field_names_clause_0_0,
  NULL,
  NULL
};

#line 609 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_0_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_0_0
};

#line 614 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_0_0
  }
};

#line 623 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_0_0
};

#line 628 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_0[1] = {
  (MR_Integer) 0
};

#line 633 "hlds.hlds_clauses.c"
const MR_TypeCtorInfo_Struct hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_clauses____Unify____clause_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clause_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clause",
  {     hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_0 },
  {     hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_0
};

#line 650 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_0 = {
  (MR_String) "all_modes",
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

#line 665 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 673 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_applicable_modes_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 678 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_1 = {
  (MR_String) "selected_modes",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_applicable_modes_0_1,
  NULL,
  NULL,
  NULL
};

#line 693 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_applicable_modes_0_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_0
};

#line 698 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_applicable_modes_0_1[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_1
};

#line 703 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_applicable_modes_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_applicable_modes_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_applicable_modes_0_1
  }
};

#line 717 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_applicable_modes_0[2] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_0,
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_1
};

#line 723 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_applicable_modes_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 729 "hlds.hlds_clauses.c"
const MR_TypeCtorInfo_Struct hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_applicable_modes_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_clauses____Unify____clause_applicable_modes_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clause_applicable_modes_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clause_applicable_modes",
  {     hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_applicable_modes_0 },
  {     hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_applicable_modes_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_applicable_modes_0
};

#line 746 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_item_number_region_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 754 "hlds.hlds_clauses.c"
static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clause_item_number_region_0_0[4] = {
  (MR_String) "cnr_lower_item_number",
  (MR_String) "cnr_upper_item_number",
  (MR_String) "cnr_lower_item_context",
  (MR_String) "cnr_upper_item_context"
};

#line 762 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_number_region_0_0 = {
  (MR_String) "clause_item_number_region",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_item_number_region_0_0,
  hlds__hlds_clauses__hlds__hlds_clauses__field_names_clause_item_number_region_0_0,
  NULL,
  NULL
};

#line 777 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_number_region_0_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_number_region_0_0
};

#line 782 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_item_number_region_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_number_region_0_0
  }
};

#line 791 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_item_number_region_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_number_region_0_0
};

#line 796 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_region_0[1] = {
  (MR_Integer) 0
};

#line 801 "hlds.hlds_clauses.c"
const MR_TypeCtorInfo_Struct hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_clauses____Unify____clause_item_number_region_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clause_item_number_region_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clause_item_number_region",
  {     hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_item_number_region_0 },
  {     hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_item_number_region_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_region_0
};

#line 818 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_0 = {
  (MR_String) "item_is_clause",
  (MR_Integer) 0
};

#line 824 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_1 = {
  (MR_String) "item_is_foreign_proc",
  (MR_Integer) 1
};

#line 830 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_value_ordered_clause_item_number_type_0[2] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_0,
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_1
};

#line 836 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_clause_item_number_type_0[2] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_0,
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_1
};

#line 842 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 848 "hlds.hlds_clauses.c"
const MR_TypeCtorInfo_Struct hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_clauses____Unify____clause_item_number_type_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clause_item_number_type_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clause_item_number_type",
  {     hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_clause_item_number_type_0 },
  {     hlds__hlds_clauses__hlds__hlds_clauses__enum_value_ordered_clause_item_number_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_type_0
};

#line 865 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_0 = {
  (MR_String) "only_clauses",
  (MR_Integer) 0
};

#line 871 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_1 = {
  (MR_String) "clauses_and_foreign_procs",
  (MR_Integer) 1
};

#line 877 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_value_ordered_clause_item_number_types_0[2] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_0,
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_1
};

#line 883 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_clause_item_number_types_0[2] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_1,
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_0
};

#line 889 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_types_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 895 "hlds.hlds_clauses.c"
const MR_TypeCtorInfo_Struct hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_types_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_clauses____Unify____clause_item_number_types_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clause_item_number_types_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clause_item_number_types",
  {     hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_clause_item_number_types_0 },
  {     hlds__hlds_clauses__hlds__hlds_clauses__enum_value_ordered_clause_item_number_types_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_types_0
};

#line 912 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0
  }
};

#line 920 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_item_numbers_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__list__ti_list_1hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0,
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__list__ti_list_1hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0
};

#line 926 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_0 = {
  (MR_String) "user_clauses",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_item_numbers_0_0,
  NULL,
  NULL,
  NULL
};

#line 941 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_1 = {
  (MR_String) "comp_gen_clauses",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 956 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_numbers_0_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_1
};

#line 961 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_numbers_0_1[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_0
};

#line 966 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_item_numbers_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_numbers_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_numbers_0_1
  }
};

#line 980 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_item_numbers_0[2] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_1,
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_0
};

#line 986 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_numbers_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 992 "hlds.hlds_clauses.c"
const MR_TypeCtorInfo_Struct hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_numbers_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_clauses____Unify____clause_item_numbers_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clause_item_numbers_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clause_item_numbers",
  {     hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_item_numbers_0 },
  {     hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_item_numbers_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_numbers_0
};

#line 1009 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1017 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1025 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_clauses__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1034 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1042 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_clauses__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1051 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__hlds__hlds_args__ti_proc_arg_vector_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &hlds__hlds_args__hlds__hlds_args__type_ctor_info_proc_arg_vector_1,
  {
    (MR_TypeInfo) &hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1059 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clauses_info_0_0[9] = {
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__hlds__hlds_args__ti_proc_arg_vector_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_rep_0,
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_numbers_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1072 "hlds.hlds_clauses.c"
static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clauses_info_0_0[9] = {
  (MR_String) "cli_varset",
  (MR_String) "cli_explicit_vartypes",
  (MR_String) "cli_tvar_name_map",
  (MR_String) "cli_vartypes",
  (MR_String) "cli_headvars",
  (MR_String) "cli_rep",
  (MR_String) "cli_item_numbers",
  (MR_String) "cli_rtti_varmaps",
  (MR_String) "cli_have_foreign_clauses"
};

#line 1085 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_info_0_0 = {
  (MR_String) "clauses_info",
  (MR_Integer) 9,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_clauses__hlds__hlds_clauses__field_types_clauses_info_0_0,
  hlds__hlds_clauses__hlds__hlds_clauses__field_names_clauses_info_0_0,
  NULL,
  NULL
};

#line 1100 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_info_0_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_info_0_0
};

#line 1105 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clauses_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_info_0_0
  }
};

#line 1114 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clauses_info_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_info_0_0
};

#line 1119 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clauses_info_0[1] = {
  (MR_Integer) 0
};

#line 1124 "hlds.hlds_clauses.c"
const MR_TypeCtorInfo_Struct hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_clauses____Unify____clauses_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clauses_info_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clauses_info",
  {     hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clauses_info_0 },
  {     hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clauses_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clauses_info_0
};

#line 1141 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__cord__ti_cord_1hlds__hlds_clauses__type_ctor_info_clause_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0
  }
};

#line 1149 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clauses_rep_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__cord__ti_cord_1hlds__hlds_clauses__type_ctor_info_clause_0
};

#line 1155 "hlds.hlds_clauses.c"
static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clauses_rep_0_0[2] = {
  (MR_String) "cr_num_clauses",
  (MR_String) "cr_clauses_cord"
};

#line 1161 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_rep_0_0 = {
  (MR_String) "clauses_rep",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_clauses__hlds__hlds_clauses__field_types_clauses_rep_0_0,
  hlds__hlds_clauses__hlds__hlds_clauses__field_names_clauses_rep_0_0,
  NULL,
  NULL
};

#line 1176 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_rep_0_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_rep_0_0
};

#line 1181 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clauses_rep_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_rep_0_0
  }
};

#line 1190 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clauses_rep_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_rep_0_0
};

#line 1195 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clauses_rep_0[1] = {
  (MR_Integer) 0
};

#line 1200 "hlds.hlds_clauses.c"
const MR_TypeCtorInfo_Struct hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_rep_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_clauses____Unify____clauses_rep_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clauses_rep_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clauses_rep",
  {     hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clauses_rep_0 },
  {     hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clauses_rep_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clauses_rep_0
};

#line 1217 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_0_0_10001(
#line 1220 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 1222 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
#line 1224 "hlds.hlds_clauses.c"
{
#line 1226 "hlds.hlds_clauses.c"
  {
#line 1228 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded;

#line 1231 "hlds.hlds_clauses.c"
    {
#line 1233 "hlds.hlds_clauses.c"
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
#line 1236 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 1238 "hlds.hlds_clauses.c"
  }
#line 1240 "hlds.hlds_clauses.c"
}

#line 1243 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_0_0_10001(
#line 1246 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 1248 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 1250 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
#line 1252 "hlds.hlds_clauses.c"
{
#line 1254 "hlds.hlds_clauses.c"
  {
#line 1256 "hlds.hlds_clauses.c"
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

#line 1259 "hlds.hlds_clauses.c"
    {
#line 1261 "hlds.hlds_clauses.c"
      hlds__hlds_clauses____Compare____clause_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
#line 1264 "hlds.hlds_clauses.c"
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
#line 1266 "hlds.hlds_clauses.c"
  }
#line 1268 "hlds.hlds_clauses.c"
}

#line 1271 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_applicable_modes_0_0_10001(
#line 1274 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 1276 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
#line 1278 "hlds.hlds_clauses.c"
{
#line 1280 "hlds.hlds_clauses.c"
  {
#line 1282 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded;

#line 1285 "hlds.hlds_clauses.c"
    {
#line 1287 "hlds.hlds_clauses.c"
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_applicable_modes_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
#line 1290 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 1292 "hlds.hlds_clauses.c"
  }
#line 1294 "hlds.hlds_clauses.c"
}

#line 1297 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_applicable_modes_0_0_10001(
#line 1300 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 1302 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 1304 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
#line 1306 "hlds.hlds_clauses.c"
{
#line 1308 "hlds.hlds_clauses.c"
  {
#line 1310 "hlds.hlds_clauses.c"
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

#line 1313 "hlds.hlds_clauses.c"
    {
#line 1315 "hlds.hlds_clauses.c"
      hlds__hlds_clauses____Compare____clause_applicable_modes_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
#line 1318 "hlds.hlds_clauses.c"
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
#line 1320 "hlds.hlds_clauses.c"
  }
#line 1322 "hlds.hlds_clauses.c"
}

#line 1325 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_region_0_0_10001(
#line 1328 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 1330 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
#line 1332 "hlds.hlds_clauses.c"
{
#line 1334 "hlds.hlds_clauses.c"
  {
#line 1336 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded;

#line 1339 "hlds.hlds_clauses.c"
    {
#line 1341 "hlds.hlds_clauses.c"
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_item_number_region_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
#line 1344 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 1346 "hlds.hlds_clauses.c"
  }
#line 1348 "hlds.hlds_clauses.c"
}

#line 1351 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_region_0_0_10001(
#line 1354 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 1356 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 1358 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
#line 1360 "hlds.hlds_clauses.c"
{
#line 1362 "hlds.hlds_clauses.c"
  {
#line 1364 "hlds.hlds_clauses.c"
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

#line 1367 "hlds.hlds_clauses.c"
    {
#line 1369 "hlds.hlds_clauses.c"
      hlds__hlds_clauses____Compare____clause_item_number_region_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
#line 1372 "hlds.hlds_clauses.c"
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
#line 1374 "hlds.hlds_clauses.c"
  }
#line 1376 "hlds.hlds_clauses.c"
}

#line 1379 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_type_0_0_10001(
#line 1382 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 1384 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
#line 1386 "hlds.hlds_clauses.c"
{
#line 1388 "hlds.hlds_clauses.c"
  {
#line 1390 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded;

#line 1393 "hlds.hlds_clauses.c"
    {
#line 1395 "hlds.hlds_clauses.c"
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_item_number_type_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
#line 1398 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 1400 "hlds.hlds_clauses.c"
  }
#line 1402 "hlds.hlds_clauses.c"
}

#line 1405 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_type_0_0_10001(
#line 1408 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 1410 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 1412 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
#line 1414 "hlds.hlds_clauses.c"
{
#line 1416 "hlds.hlds_clauses.c"
  {
#line 1418 "hlds.hlds_clauses.c"
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

#line 1421 "hlds.hlds_clauses.c"
    {
#line 1423 "hlds.hlds_clauses.c"
      hlds__hlds_clauses____Compare____clause_item_number_type_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
#line 1426 "hlds.hlds_clauses.c"
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
#line 1428 "hlds.hlds_clauses.c"
  }
#line 1430 "hlds.hlds_clauses.c"
}

#line 1433 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_types_0_0_10001(
#line 1436 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 1438 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
#line 1440 "hlds.hlds_clauses.c"
{
#line 1442 "hlds.hlds_clauses.c"
  {
#line 1444 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded;

#line 1447 "hlds.hlds_clauses.c"
    {
#line 1449 "hlds.hlds_clauses.c"
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_item_number_types_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
#line 1452 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 1454 "hlds.hlds_clauses.c"
  }
#line 1456 "hlds.hlds_clauses.c"
}

#line 1459 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_types_0_0_10001(
#line 1462 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 1464 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 1466 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
#line 1468 "hlds.hlds_clauses.c"
{
#line 1470 "hlds.hlds_clauses.c"
  {
#line 1472 "hlds.hlds_clauses.c"
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

#line 1475 "hlds.hlds_clauses.c"
    {
#line 1477 "hlds.hlds_clauses.c"
      hlds__hlds_clauses____Compare____clause_item_number_types_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
#line 1480 "hlds.hlds_clauses.c"
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
#line 1482 "hlds.hlds_clauses.c"
  }
#line 1484 "hlds.hlds_clauses.c"
}

#line 1487 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_numbers_0_0_10001(
#line 1490 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 1492 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
#line 1494 "hlds.hlds_clauses.c"
{
#line 1496 "hlds.hlds_clauses.c"
  {
#line 1498 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded;

#line 1501 "hlds.hlds_clauses.c"
    {
#line 1503 "hlds.hlds_clauses.c"
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_item_numbers_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
#line 1506 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 1508 "hlds.hlds_clauses.c"
  }
#line 1510 "hlds.hlds_clauses.c"
}

#line 1513 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_numbers_0_0_10001(
#line 1516 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 1518 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 1520 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
#line 1522 "hlds.hlds_clauses.c"
{
#line 1524 "hlds.hlds_clauses.c"
  {
#line 1526 "hlds.hlds_clauses.c"
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

#line 1529 "hlds.hlds_clauses.c"
    {
#line 1531 "hlds.hlds_clauses.c"
      hlds__hlds_clauses____Compare____clause_item_numbers_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
#line 1534 "hlds.hlds_clauses.c"
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
#line 1536 "hlds.hlds_clauses.c"
  }
#line 1538 "hlds.hlds_clauses.c"
}

#line 1541 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clauses_info_0_0_10001(
#line 1544 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 1546 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
#line 1548 "hlds.hlds_clauses.c"
{
#line 1550 "hlds.hlds_clauses.c"
  {
#line 1552 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded;

#line 1555 "hlds.hlds_clauses.c"
    {
#line 1557 "hlds.hlds_clauses.c"
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clauses_info_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
#line 1560 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 1562 "hlds.hlds_clauses.c"
  }
#line 1564 "hlds.hlds_clauses.c"
}

#line 1567 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clauses_info_0_0_10001(
#line 1570 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 1572 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 1574 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
#line 1576 "hlds.hlds_clauses.c"
{
#line 1578 "hlds.hlds_clauses.c"
  {
#line 1580 "hlds.hlds_clauses.c"
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

#line 1583 "hlds.hlds_clauses.c"
    {
#line 1585 "hlds.hlds_clauses.c"
      hlds__hlds_clauses____Compare____clauses_info_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
#line 1588 "hlds.hlds_clauses.c"
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
#line 1590 "hlds.hlds_clauses.c"
  }
#line 1592 "hlds.hlds_clauses.c"
}

#line 1595 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clauses_rep_0_0_10001(
#line 1598 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 1600 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
#line 1602 "hlds.hlds_clauses.c"
{
#line 1604 "hlds.hlds_clauses.c"
  {
#line 1606 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded;

#line 1609 "hlds.hlds_clauses.c"
    {
#line 1611 "hlds.hlds_clauses.c"
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clauses_rep_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
#line 1614 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 1616 "hlds.hlds_clauses.c"
  }
#line 1618 "hlds.hlds_clauses.c"
}

#line 1621 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clauses_rep_0_0_10001(
#line 1624 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 1626 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 1628 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
#line 1630 "hlds.hlds_clauses.c"
{
#line 1632 "hlds.hlds_clauses.c"
  {
#line 1634 "hlds.hlds_clauses.c"
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

#line 1637 "hlds.hlds_clauses.c"
    {
#line 1639 "hlds.hlds_clauses.c"
      hlds__hlds_clauses____Compare____clauses_rep_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
#line 1642 "hlds.hlds_clauses.c"
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
#line 1644 "hlds.hlds_clauses.c"
  }
#line 1646 "hlds.hlds_clauses.c"
}

#line 466 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses____Compare____clauses_rep_0_0(
#line 466 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__1_1,
#line 466 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2,
#line 466 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__3_3)
#line 466 "hlds_clauses.m"
{
#line 466 "hlds_clauses.m"
  {
#line 466 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 466 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastX_9 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;
#line 466 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastY_10 = (MR_Integer) hlds__hlds_clauses__HeadVar__3_3;

#line 466 "hlds_clauses.m"
    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_9 == hlds__hlds_clauses__CastY_10);
#line 466 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 1673 "hlds.hlds_clauses.c"
      *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 0;
#line 466 "hlds_clauses.m"
    else
#line 466 "hlds_clauses.m"
      {
#line 466 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
#line 466 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
#line 466 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 0)));
#line 466 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 1)));
#line 466 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_8_8;

#line 466 "hlds_clauses.m"
        {
#line 466 "hlds_clauses.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_clauses__V_8_8, hlds__hlds_clauses__V_4_4, hlds__hlds_clauses__V_6_6);
        }
#line 1695 "hlds.hlds_clauses.c"
        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_8_8 == (MR_Integer) 0);
#line 466 "hlds_clauses.m"
        hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 466 "hlds_clauses.m"
        if (hlds__hlds_clauses__succeeded)
#line 466 "hlds_clauses.m"
          *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_8_8;
#line 466 "hlds_clauses.m"
        else
#line 466 "hlds_clauses.m"
          {
#line 466 "hlds_clauses.m"
            {
#line 466 "hlds_clauses.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[7], hlds__hlds_clauses__HeadVar__1_1, ((MR_Box) (hlds__hlds_clauses__V_5_5)), ((MR_Box) (hlds__hlds_clauses__V_7_7)));
            }
#line 466 "hlds_clauses.m"
          }
#line 466 "hlds_clauses.m"
      }
#line 466 "hlds_clauses.m"
  }
#line 466 "hlds_clauses.m"
}

#line 466 "hlds_clauses.m"
MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clauses_rep_0_0(
#line 466 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__1_1,
#line 466 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2)
#line 466 "hlds_clauses.m"
{
#line 466 "hlds_clauses.m"
  {
#line 466 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 466 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastX_7 = (MR_Integer) hlds__hlds_clauses__HeadVar__1_1;
#line 466 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastY_8 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;

#line 466 "hlds_clauses.m"
    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_7 == hlds__hlds_clauses__CastY_8);
#line 466 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 466 "hlds_clauses.m"
      hlds__hlds_clauses__succeeded = MR_TRUE;
#line 466 "hlds_clauses.m"
    else
#line 466 "hlds_clauses.m"
      {
#line 466 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__TypeInfo_9_9;
#line 466 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 0)));
#line 466 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 1)));
#line 466 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
#line 466 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));

#line 1760 "hlds.hlds_clauses.c"
        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_3_3 == hlds__hlds_clauses__V_5_5);
#line 466 "hlds_clauses.m"
        if (hlds__hlds_clauses__succeeded)
#line 466 "hlds_clauses.m"
          {
#line 1766 "hlds.hlds_clauses.c"
            hlds__hlds_clauses__TypeInfo_9_9 = (MR_Word) &hlds__hlds_clauses_scalar_common_1[7];
#line 1768 "hlds.hlds_clauses.c"
            {
#line 1770 "hlds.hlds_clauses.c"
              hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_9_9, ((MR_Box) (hlds__hlds_clauses__V_4_4)), ((MR_Box) (hlds__hlds_clauses__V_6_6)));
            }
#line 466 "hlds_clauses.m"
          }
#line 466 "hlds_clauses.m"
      }
#line 466 "hlds_clauses.m"
    return hlds__hlds_clauses__succeeded;
#line 466 "hlds_clauses.m"
  }
#line 466 "hlds_clauses.m"
}

#line 43 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses____Compare____clauses_info_0_0(
#line 43 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__1_1,
#line 43 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2,
#line 43 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__3_3)
#line 43 "hlds_clauses.m"
{
#line 43 "hlds_clauses.m"
  {
#line 43 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 43 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastX_30 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;
#line 43 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastY_31 = (MR_Integer) hlds__hlds_clauses__HeadVar__3_3;

#line 43 "hlds_clauses.m"
    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_30 == hlds__hlds_clauses__CastY_31);
#line 43 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 1808 "hlds.hlds_clauses.c"
      *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 0;
#line 43 "hlds_clauses.m"
    else
#line 43 "hlds_clauses.m"
      {
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 2)));
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 3)));
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 4)));
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 5)));
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 6)));
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 7)));
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 8)));
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 0)));
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 1)));
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 2)));
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 3)));
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 4)));
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 5)));
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 6)));
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 7)));
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 8)));
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_22_22;

#line 43 "hlds_clauses.m"
        {
#line 43 "hlds_clauses.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[5], &hlds__hlds_clauses__V_22_22, ((MR_Box) (hlds__hlds_clauses__V_4_4)), ((MR_Box) (hlds__hlds_clauses__V_13_13)));
        }
#line 1858 "hlds.hlds_clauses.c"
        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_22_22 == (MR_Integer) 0);
#line 43 "hlds_clauses.m"
        hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 43 "hlds_clauses.m"
        if (hlds__hlds_clauses__succeeded)
#line 43 "hlds_clauses.m"
          *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_22_22;
#line 43 "hlds_clauses.m"
        else
#line 43 "hlds_clauses.m"
          {
#line 43 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__V_23_23;

#line 43 "hlds_clauses.m"
            {
#line 43 "hlds_clauses.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_2[0], &hlds__hlds_clauses__V_23_23, ((MR_Box) (hlds__hlds_clauses__V_5_5)), ((MR_Box) (hlds__hlds_clauses__V_14_14)));
            }
#line 1878 "hlds.hlds_clauses.c"
            hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_23_23 == (MR_Integer) 0);
#line 43 "hlds_clauses.m"
            hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 43 "hlds_clauses.m"
            if (hlds__hlds_clauses__succeeded)
#line 43 "hlds_clauses.m"
              *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_23_23;
#line 43 "hlds_clauses.m"
            else
#line 43 "hlds_clauses.m"
              {
#line 43 "hlds_clauses.m"
                MR_Word hlds__hlds_clauses__V_24_24;

#line 43 "hlds_clauses.m"
                {
#line 43 "hlds_clauses.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_2[1], &hlds__hlds_clauses__V_24_24, ((MR_Box) (hlds__hlds_clauses__V_6_6)), ((MR_Box) (hlds__hlds_clauses__V_15_15)));
                }
#line 1898 "hlds.hlds_clauses.c"
                hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_24_24 == (MR_Integer) 0);
#line 43 "hlds_clauses.m"
                hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 43 "hlds_clauses.m"
                if (hlds__hlds_clauses__succeeded)
#line 43 "hlds_clauses.m"
                  *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_24_24;
#line 43 "hlds_clauses.m"
                else
#line 43 "hlds_clauses.m"
                  {
#line 43 "hlds_clauses.m"
                    MR_Word hlds__hlds_clauses__V_25_25;

#line 43 "hlds_clauses.m"
                    {
#line 43 "hlds_clauses.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_2[0], &hlds__hlds_clauses__V_25_25, ((MR_Box) (hlds__hlds_clauses__V_7_7)), ((MR_Box) (hlds__hlds_clauses__V_16_16)));
                    }
#line 1918 "hlds.hlds_clauses.c"
                    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_25_25 == (MR_Integer) 0);
#line 43 "hlds_clauses.m"
                    hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 43 "hlds_clauses.m"
                    if (hlds__hlds_clauses__succeeded)
#line 43 "hlds_clauses.m"
                      *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_25_25;
#line 43 "hlds_clauses.m"
                    else
#line 43 "hlds_clauses.m"
                      {
#line 43 "hlds_clauses.m"
                        MR_Word hlds__hlds_clauses__V_26_26;

#line 43 "hlds_clauses.m"
                        {
#line 43 "hlds_clauses.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[6], &hlds__hlds_clauses__V_26_26, ((MR_Box) (hlds__hlds_clauses__V_8_8)), ((MR_Box) (hlds__hlds_clauses__V_17_17)));
                        }
#line 1938 "hlds.hlds_clauses.c"
                        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_26_26 == (MR_Integer) 0);
#line 43 "hlds_clauses.m"
                        hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 43 "hlds_clauses.m"
                        if (hlds__hlds_clauses__succeeded)
#line 43 "hlds_clauses.m"
                          *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_26_26;
#line 43 "hlds_clauses.m"
                        else
#line 43 "hlds_clauses.m"
                          {
#line 43 "hlds_clauses.m"
                            MR_Word hlds__hlds_clauses__V_27_27;

#line 43 "hlds_clauses.m"
                            {
#line 43 "hlds_clauses.m"
                              hlds__hlds_clauses____Compare____clauses_rep_0_0(&hlds__hlds_clauses__V_27_27, hlds__hlds_clauses__V_9_9, hlds__hlds_clauses__V_18_18);
                            }
#line 1958 "hlds.hlds_clauses.c"
                            hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_27_27 == (MR_Integer) 0);
#line 43 "hlds_clauses.m"
                            hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 43 "hlds_clauses.m"
                            if (hlds__hlds_clauses__succeeded)
#line 43 "hlds_clauses.m"
                              *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_27_27;
#line 43 "hlds_clauses.m"
                            else
#line 43 "hlds_clauses.m"
                              {
#line 43 "hlds_clauses.m"
                                MR_Word hlds__hlds_clauses__V_28_28;

#line 43 "hlds_clauses.m"
                                {
#line 43 "hlds_clauses.m"
                                  hlds__hlds_clauses____Compare____clause_item_numbers_0_0(&hlds__hlds_clauses__V_28_28, hlds__hlds_clauses__V_10_10, hlds__hlds_clauses__V_19_19);
                                }
#line 1978 "hlds.hlds_clauses.c"
                                hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_28_28 == (MR_Integer) 0);
#line 43 "hlds_clauses.m"
                                hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 43 "hlds_clauses.m"
                                if (hlds__hlds_clauses__succeeded)
#line 43 "hlds_clauses.m"
                                  *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_28_28;
#line 43 "hlds_clauses.m"
                                else
#line 43 "hlds_clauses.m"
                                  {
#line 43 "hlds_clauses.m"
                                    MR_Word hlds__hlds_clauses__V_29_29;

#line 43 "hlds_clauses.m"
                                    {
#line 43 "hlds_clauses.m"
                                      hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&hlds__hlds_clauses__V_29_29, hlds__hlds_clauses__V_11_11, hlds__hlds_clauses__V_20_20);
                                    }
#line 1998 "hlds.hlds_clauses.c"
                                    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_29_29 == (MR_Integer) 0);
#line 43 "hlds_clauses.m"
                                    hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 43 "hlds_clauses.m"
                                    if (hlds__hlds_clauses__succeeded)
#line 43 "hlds_clauses.m"
                                      *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_29_29;
#line 43 "hlds_clauses.m"
                                    else
#line 43 "hlds_clauses.m"
                                      {
#line 43 "hlds_clauses.m"
                                        MR_Integer hlds__hlds_clauses__V_41_41 = (MR_Integer) hlds__hlds_clauses__V_12_12;
#line 43 "hlds_clauses.m"
                                        MR_Integer hlds__hlds_clauses__V_42_42 = (MR_Integer) hlds__hlds_clauses__V_21_21;

#line 43 "hlds_clauses.m"
                                        {
#line 43 "hlds_clauses.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_clauses__HeadVar__1_1, hlds__hlds_clauses__V_41_41, hlds__hlds_clauses__V_42_42);
                                        }
#line 43 "hlds_clauses.m"
                                      }
#line 43 "hlds_clauses.m"
                                  }
#line 43 "hlds_clauses.m"
                              }
#line 43 "hlds_clauses.m"
                          }
#line 43 "hlds_clauses.m"
                      }
#line 43 "hlds_clauses.m"
                  }
#line 43 "hlds_clauses.m"
              }
#line 43 "hlds_clauses.m"
          }
#line 43 "hlds_clauses.m"
      }
#line 43 "hlds_clauses.m"
  }
#line 43 "hlds_clauses.m"
}

#line 43 "hlds_clauses.m"
MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clauses_info_0_0(
#line 43 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__1_1,
#line 43 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2)
#line 43 "hlds_clauses.m"
{
#line 43 "hlds_clauses.m"
  {
#line 43 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 43 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastX_21 = (MR_Integer) hlds__hlds_clauses__HeadVar__1_1;
#line 43 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastY_22 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;

#line 43 "hlds_clauses.m"
    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_21 == hlds__hlds_clauses__CastY_22);
#line 43 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 43 "hlds_clauses.m"
      hlds__hlds_clauses__succeeded = MR_TRUE;
#line 43 "hlds_clauses.m"
    else
#line 43 "hlds_clauses.m"
      {
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__TypeInfo_24_24;
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__TypeInfo_25_25;
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__TypeInfo_26_26;
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__TypeInfo_27_27;
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 0)));
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 1)));
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 2)));
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 3)));
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 4)));
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 5)));
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 6)));
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 7)));
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 8)));
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 2)));
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 3)));
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 4)));
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 5)));
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 6)));
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 7)));
#line 43 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 8)));

#line 2116 "hlds.hlds_clauses.c"
        {
#line 2118 "hlds.hlds_clauses.c"
          hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[5], ((MR_Box) (hlds__hlds_clauses__V_3_3)), ((MR_Box) (hlds__hlds_clauses__V_12_12)));
        }
#line 43 "hlds_clauses.m"
        if (hlds__hlds_clauses__succeeded)
#line 43 "hlds_clauses.m"
          {
#line 2125 "hlds.hlds_clauses.c"
            hlds__hlds_clauses__TypeInfo_24_24 = (MR_Word) &hlds__hlds_clauses_scalar_common_2[0];
#line 2127 "hlds.hlds_clauses.c"
            {
#line 2129 "hlds.hlds_clauses.c"
              hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_24_24, ((MR_Box) (hlds__hlds_clauses__V_4_4)), ((MR_Box) (hlds__hlds_clauses__V_13_13)));
            }
#line 43 "hlds_clauses.m"
            if (hlds__hlds_clauses__succeeded)
#line 43 "hlds_clauses.m"
              {
#line 2136 "hlds.hlds_clauses.c"
                hlds__hlds_clauses__TypeInfo_25_25 = (MR_Word) &hlds__hlds_clauses_scalar_common_2[1];
#line 2138 "hlds.hlds_clauses.c"
                {
#line 2140 "hlds.hlds_clauses.c"
                  hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_25_25, ((MR_Box) (hlds__hlds_clauses__V_5_5)), ((MR_Box) (hlds__hlds_clauses__V_14_14)));
                }
#line 43 "hlds_clauses.m"
                if (hlds__hlds_clauses__succeeded)
#line 43 "hlds_clauses.m"
                  {
#line 2147 "hlds.hlds_clauses.c"
                    hlds__hlds_clauses__TypeInfo_26_26 = (MR_Word) &hlds__hlds_clauses_scalar_common_2[0];
#line 2149 "hlds.hlds_clauses.c"
                    {
#line 2151 "hlds.hlds_clauses.c"
                      hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_26_26, ((MR_Box) (hlds__hlds_clauses__V_6_6)), ((MR_Box) (hlds__hlds_clauses__V_15_15)));
                    }
#line 43 "hlds_clauses.m"
                    if (hlds__hlds_clauses__succeeded)
#line 43 "hlds_clauses.m"
                      {
#line 2158 "hlds.hlds_clauses.c"
                        hlds__hlds_clauses__TypeInfo_27_27 = (MR_Word) &hlds__hlds_clauses_scalar_common_1[6];
#line 2160 "hlds.hlds_clauses.c"
                        {
#line 2162 "hlds.hlds_clauses.c"
                          hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_27_27, ((MR_Box) (hlds__hlds_clauses__V_7_7)), ((MR_Box) (hlds__hlds_clauses__V_16_16)));
                        }
#line 43 "hlds_clauses.m"
                        if (hlds__hlds_clauses__succeeded)
#line 43 "hlds_clauses.m"
                          {
#line 2169 "hlds.hlds_clauses.c"
                            {
#line 2171 "hlds.hlds_clauses.c"
                              hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clauses_rep_0_0(hlds__hlds_clauses__V_8_8, hlds__hlds_clauses__V_17_17);
                            }
#line 43 "hlds_clauses.m"
                            if (hlds__hlds_clauses__succeeded)
#line 43 "hlds_clauses.m"
                              {
#line 2178 "hlds.hlds_clauses.c"
                                {
#line 2180 "hlds.hlds_clauses.c"
                                  hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_item_numbers_0_0(hlds__hlds_clauses__V_9_9, hlds__hlds_clauses__V_18_18);
                                }
#line 43 "hlds_clauses.m"
                                if (hlds__hlds_clauses__succeeded)
#line 43 "hlds_clauses.m"
                                  {
#line 2187 "hlds.hlds_clauses.c"
                                    {
#line 2189 "hlds.hlds_clauses.c"
                                      hlds__hlds_clauses__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(hlds__hlds_clauses__V_10_10, hlds__hlds_clauses__V_19_19);
                                    }
#line 43 "hlds_clauses.m"
                                    if (hlds__hlds_clauses__succeeded)
#line 2194 "hlds.hlds_clauses.c"
                                      hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_11_11 == hlds__hlds_clauses__V_20_20);
#line 43 "hlds_clauses.m"
                                  }
#line 43 "hlds_clauses.m"
                              }
#line 43 "hlds_clauses.m"
                          }
#line 43 "hlds_clauses.m"
                      }
#line 43 "hlds_clauses.m"
                  }
#line 43 "hlds_clauses.m"
              }
#line 43 "hlds_clauses.m"
          }
#line 43 "hlds_clauses.m"
      }
#line 43 "hlds_clauses.m"
    return hlds__hlds_clauses__succeeded;
#line 43 "hlds_clauses.m"
  }
#line 43 "hlds_clauses.m"
}

#line 292 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_numbers_0_0(
#line 292 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__1_1,
#line 292 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2,
#line 292 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__3_3)
#line 292 "hlds_clauses.m"
{
#line 292 "hlds_clauses.m"
  {
#line 292 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 292 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastX_13 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;
#line 292 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastY_14 = (MR_Integer) hlds__hlds_clauses__HeadVar__3_3;

#line 292 "hlds_clauses.m"
    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_13 == hlds__hlds_clauses__CastY_14);
#line 292 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 2243 "hlds.hlds_clauses.c"
      *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 0;
#line 292 "hlds_clauses.m"
    else
#line 292 "hlds_clauses.m"
    if ((hlds__hlds_clauses__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 292 "hlds_clauses.m"
      if ((hlds__hlds_clauses__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 292 "hlds_clauses.m"
        *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 0;
#line 292 "hlds_clauses.m"
      else
#line 2255 "hlds.hlds_clauses.c"
        *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "hlds_clauses.m"
    else
#line 292 "hlds_clauses.m"
      {
#line 292 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
#line 292 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));

#line 292 "hlds_clauses.m"
        if ((hlds__hlds_clauses__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2268 "hlds.hlds_clauses.c"
          *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "hlds_clauses.m"
        else
#line 292 "hlds_clauses.m"
          {
#line 292 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 0)));
#line 292 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 1)));
#line 292 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__V_8_8;

#line 292 "hlds_clauses.m"
            {
#line 292 "hlds_clauses.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[4], &hlds__hlds_clauses__V_8_8, ((MR_Box) (hlds__hlds_clauses__V_18_18)), ((MR_Box) (hlds__hlds_clauses__V_6_6)));
            }
#line 2286 "hlds.hlds_clauses.c"
            hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_8_8 == (MR_Integer) 0);
#line 292 "hlds_clauses.m"
            hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 292 "hlds_clauses.m"
            if (hlds__hlds_clauses__succeeded)
#line 292 "hlds_clauses.m"
              *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_8_8;
#line 292 "hlds_clauses.m"
            else
#line 292 "hlds_clauses.m"
              {
#line 292 "hlds_clauses.m"
                {
#line 292 "hlds_clauses.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[4], hlds__hlds_clauses__HeadVar__1_1, ((MR_Box) (hlds__hlds_clauses__V_17_17)), ((MR_Box) (hlds__hlds_clauses__V_7_7)));
                }
#line 292 "hlds_clauses.m"
              }
#line 292 "hlds_clauses.m"
          }
#line 292 "hlds_clauses.m"
      }
#line 292 "hlds_clauses.m"
  }
#line 292 "hlds_clauses.m"
}

#line 292 "hlds_clauses.m"
MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_numbers_0_0(
#line 292 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__1_1,
#line 292 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2)
#line 292 "hlds_clauses.m"
{
#line 292 "hlds_clauses.m"
  {
#line 292 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 292 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastX_9 = (MR_Integer) hlds__hlds_clauses__HeadVar__1_1;
#line 292 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastY_10 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;

#line 292 "hlds_clauses.m"
    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_9 == hlds__hlds_clauses__CastY_10);
#line 292 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 292 "hlds_clauses.m"
      hlds__hlds_clauses__succeeded = MR_TRUE;
#line 292 "hlds_clauses.m"
    else
#line 292 "hlds_clauses.m"
    if ((hlds__hlds_clauses__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 292 "hlds_clauses.m"
      {
#line 292 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__CastX_7 = (MR_Integer) hlds__hlds_clauses__HeadVar__1_1;
#line 292 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__CastY_8 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;

#line 292 "hlds_clauses.m"
        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastY_8 == hlds__hlds_clauses__CastX_7);
#line 292 "hlds_clauses.m"
      }
#line 292 "hlds_clauses.m"
    else
#line 292 "hlds_clauses.m"
      {
#line 292 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__TypeInfo_11_11;
#line 292 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__TypeInfo_12_12;
#line 292 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 0)));
#line 292 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 1)));
#line 292 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_5_5;
#line 292 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_6_6;

#line 292 "hlds_clauses.m"
        hlds__hlds_clauses__succeeded = ((MR_tag((MR_Word) hlds__hlds_clauses__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 292 "hlds_clauses.m"
        if (hlds__hlds_clauses__succeeded)
#line 292 "hlds_clauses.m"
          {
#line 292 "hlds_clauses.m"
            hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
#line 292 "hlds_clauses.m"
            hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
#line 2380 "hlds.hlds_clauses.c"
            hlds__hlds_clauses__TypeInfo_11_11 = (MR_Word) &hlds__hlds_clauses_scalar_common_1[4];
#line 2382 "hlds.hlds_clauses.c"
            {
#line 2384 "hlds.hlds_clauses.c"
              hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_11_11, ((MR_Box) (hlds__hlds_clauses__V_3_3)), ((MR_Box) (hlds__hlds_clauses__V_5_5)));
            }
#line 292 "hlds_clauses.m"
            if (hlds__hlds_clauses__succeeded)
#line 292 "hlds_clauses.m"
              {
#line 2391 "hlds.hlds_clauses.c"
                hlds__hlds_clauses__TypeInfo_12_12 = (MR_Word) &hlds__hlds_clauses_scalar_common_1[4];
#line 2393 "hlds.hlds_clauses.c"
                {
#line 2395 "hlds.hlds_clauses.c"
                  hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_12_12, ((MR_Box) (hlds__hlds_clauses__V_4_4)), ((MR_Box) (hlds__hlds_clauses__V_6_6)));
                }
#line 292 "hlds_clauses.m"
              }
#line 292 "hlds_clauses.m"
          }
#line 292 "hlds_clauses.m"
      }
#line 292 "hlds_clauses.m"
    return hlds__hlds_clauses__succeeded;
#line 292 "hlds_clauses.m"
  }
#line 292 "hlds_clauses.m"
}

#line 259 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_types_0_0(
#line 259 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__1_1,
#line 259 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2,
#line 259 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__3_3)
#line 259 "hlds_clauses.m"
{
#line 259 "hlds_clauses.m"
  {
#line 259 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 259 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;
#line 259 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_clauses__HeadVar__3_3;

#line 259 "hlds_clauses.m"
    {
#line 259 "hlds_clauses.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_clauses__HeadVar__1_1, hlds__hlds_clauses__Cast_HeadVar1_4, hlds__hlds_clauses__Cast_HeadVar2_5);
    }
#line 259 "hlds_clauses.m"
  }
#line 259 "hlds_clauses.m"
}

#line 259 "hlds_clauses.m"
MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_types_0_0(
#line 259 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_1,
#line 259 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2)
#line 259 "hlds_clauses.m"
{
#line 2450 "hlds.hlds_clauses.c"
  {
#line 2452 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__HeadVar__2_1 == hlds__hlds_clauses__HeadVar__2_2);

#line 2455 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 2457 "hlds.hlds_clauses.c"
  }
#line 259 "hlds_clauses.m"
}

#line 268 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_type_0_0(
#line 268 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__1_1,
#line 268 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2,
#line 268 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__3_3)
#line 268 "hlds_clauses.m"
{
#line 268 "hlds_clauses.m"
  {
#line 268 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 268 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;
#line 268 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_clauses__HeadVar__3_3;

#line 268 "hlds_clauses.m"
    {
#line 268 "hlds_clauses.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_clauses__HeadVar__1_1, hlds__hlds_clauses__Cast_HeadVar1_4, hlds__hlds_clauses__Cast_HeadVar2_5);
    }
#line 268 "hlds_clauses.m"
  }
#line 268 "hlds_clauses.m"
}

#line 268 "hlds_clauses.m"
MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_type_0_0(
#line 268 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_1,
#line 268 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2)
#line 268 "hlds_clauses.m"
{
#line 2501 "hlds.hlds_clauses.c"
  {
#line 2503 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__HeadVar__2_1 == hlds__hlds_clauses__HeadVar__2_2);

#line 2506 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 2508 "hlds.hlds_clauses.c"
  }
#line 268 "hlds_clauses.m"
}

#line 251 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_region_0_0(
#line 251 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__1_1,
#line 251 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2,
#line 251 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__3_3)
#line 251 "hlds_clauses.m"
{
#line 251 "hlds_clauses.m"
  {
#line 251 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 251 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastX_15 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;
#line 251 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastY_16 = (MR_Integer) hlds__hlds_clauses__HeadVar__3_3;

#line 251 "hlds_clauses.m"
    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_15 == hlds__hlds_clauses__CastY_16);
#line 251 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 2537 "hlds.hlds_clauses.c"
      *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 0;
#line 251 "hlds_clauses.m"
    else
#line 251 "hlds_clauses.m"
      {
#line 251 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
#line 251 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
#line 251 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 2)));
#line 251 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 3)));
#line 251 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 0)));
#line 251 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 1)));
#line 251 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 2)));
#line 251 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 3)));
#line 251 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_12_12;

#line 251 "hlds_clauses.m"
        {
#line 251 "hlds_clauses.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_clauses__V_12_12, hlds__hlds_clauses__V_4_4, hlds__hlds_clauses__V_8_8);
        }
#line 2567 "hlds.hlds_clauses.c"
        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_12_12 == (MR_Integer) 0);
#line 251 "hlds_clauses.m"
        hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 251 "hlds_clauses.m"
        if (hlds__hlds_clauses__succeeded)
#line 251 "hlds_clauses.m"
          *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_12_12;
#line 251 "hlds_clauses.m"
        else
#line 251 "hlds_clauses.m"
          {
#line 251 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__V_13_13;

#line 251 "hlds_clauses.m"
            {
#line 251 "hlds_clauses.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_clauses__V_13_13, hlds__hlds_clauses__V_5_5, hlds__hlds_clauses__V_9_9);
            }
#line 2587 "hlds.hlds_clauses.c"
            hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_13_13 == (MR_Integer) 0);
#line 251 "hlds_clauses.m"
            hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 251 "hlds_clauses.m"
            if (hlds__hlds_clauses__succeeded)
#line 251 "hlds_clauses.m"
              *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_13_13;
#line 251 "hlds_clauses.m"
            else
#line 251 "hlds_clauses.m"
              {
#line 251 "hlds_clauses.m"
                MR_Word hlds__hlds_clauses__V_14_14;

#line 251 "hlds_clauses.m"
                {
#line 251 "hlds_clauses.m"
                  mercury__term____Compare____context_0_0(&hlds__hlds_clauses__V_14_14, hlds__hlds_clauses__V_6_6, hlds__hlds_clauses__V_10_10);
                }
#line 2607 "hlds.hlds_clauses.c"
                hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_14_14 == (MR_Integer) 0);
#line 251 "hlds_clauses.m"
                hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 251 "hlds_clauses.m"
                if (hlds__hlds_clauses__succeeded)
#line 251 "hlds_clauses.m"
                  *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_14_14;
#line 251 "hlds_clauses.m"
                else
#line 251 "hlds_clauses.m"
                  {
#line 251 "hlds_clauses.m"
                    mercury__term____Compare____context_0_0(hlds__hlds_clauses__HeadVar__1_1, hlds__hlds_clauses__V_7_7, hlds__hlds_clauses__V_11_11);
                  }
#line 251 "hlds_clauses.m"
              }
#line 251 "hlds_clauses.m"
          }
#line 251 "hlds_clauses.m"
      }
#line 251 "hlds_clauses.m"
  }
#line 251 "hlds_clauses.m"
}

#line 251 "hlds_clauses.m"
MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_region_0_0(
#line 251 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__1_1,
#line 251 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2)
#line 251 "hlds_clauses.m"
{
#line 251 "hlds_clauses.m"
  {
#line 251 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 251 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastX_11 = (MR_Integer) hlds__hlds_clauses__HeadVar__1_1;
#line 251 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastY_12 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;

#line 251 "hlds_clauses.m"
    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_11 == hlds__hlds_clauses__CastY_12);
#line 251 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 251 "hlds_clauses.m"
      hlds__hlds_clauses__succeeded = MR_TRUE;
#line 251 "hlds_clauses.m"
    else
#line 251 "hlds_clauses.m"
      {
#line 251 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 0)));
#line 251 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 1)));
#line 251 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 2)));
#line 251 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 3)));
#line 251 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
#line 251 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
#line 251 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 2)));
#line 251 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 3)));

#line 2678 "hlds.hlds_clauses.c"
        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_3_3 == hlds__hlds_clauses__V_7_7);
#line 251 "hlds_clauses.m"
        if (hlds__hlds_clauses__succeeded)
#line 251 "hlds_clauses.m"
          {
#line 2684 "hlds.hlds_clauses.c"
            hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_4_4 == hlds__hlds_clauses__V_8_8);
#line 251 "hlds_clauses.m"
            if (hlds__hlds_clauses__succeeded)
#line 251 "hlds_clauses.m"
              {
#line 2690 "hlds.hlds_clauses.c"
                {
#line 2692 "hlds.hlds_clauses.c"
                  hlds__hlds_clauses__succeeded = mercury__term____Unify____context_0_0(hlds__hlds_clauses__V_5_5, hlds__hlds_clauses__V_9_9);
                }
#line 251 "hlds_clauses.m"
                if (hlds__hlds_clauses__succeeded)
#line 2697 "hlds.hlds_clauses.c"
                  {
#line 2699 "hlds.hlds_clauses.c"
                    hlds__hlds_clauses__succeeded = mercury__term____Unify____context_0_0(hlds__hlds_clauses__V_6_6, hlds__hlds_clauses__V_10_10);
                  }
#line 251 "hlds_clauses.m"
              }
#line 251 "hlds_clauses.m"
          }
#line 251 "hlds_clauses.m"
      }
#line 251 "hlds_clauses.m"
    return hlds__hlds_clauses__succeeded;
#line 251 "hlds_clauses.m"
  }
#line 251 "hlds_clauses.m"
}

#line 221 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses____Compare____clause_applicable_modes_0_0(
#line 221 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__1_1,
#line 221 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2,
#line 221 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__3_3)
#line 221 "hlds_clauses.m"
{
#line 221 "hlds_clauses.m"
  {
#line 221 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 221 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastX_8 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;
#line 221 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastY_9 = (MR_Integer) hlds__hlds_clauses__HeadVar__3_3;

#line 221 "hlds_clauses.m"
    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_8 == hlds__hlds_clauses__CastY_9);
#line 221 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 2739 "hlds.hlds_clauses.c"
      *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 0;
#line 221 "hlds_clauses.m"
    else
#line 221 "hlds_clauses.m"
    if ((hlds__hlds_clauses__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 221 "hlds_clauses.m"
      if ((hlds__hlds_clauses__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 221 "hlds_clauses.m"
        *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 0;
#line 221 "hlds_clauses.m"
      else
#line 2751 "hlds.hlds_clauses.c"
        *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 1;
#line 221 "hlds_clauses.m"
    else
#line 221 "hlds_clauses.m"
      {
#line 221 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));

#line 221 "hlds_clauses.m"
        if ((hlds__hlds_clauses__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2762 "hlds.hlds_clauses.c"
          *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 2;
#line 221 "hlds_clauses.m"
        else
#line 221 "hlds_clauses.m"
          {
#line 221 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 0)));

#line 221 "hlds_clauses.m"
            {
#line 221 "hlds_clauses.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[3], hlds__hlds_clauses__HeadVar__1_1, ((MR_Box) (hlds__hlds_clauses__V_11_11)), ((MR_Box) (hlds__hlds_clauses__V_7_7)));
            }
#line 221 "hlds_clauses.m"
          }
#line 221 "hlds_clauses.m"
      }
#line 221 "hlds_clauses.m"
  }
#line 221 "hlds_clauses.m"
}

#line 221 "hlds_clauses.m"
MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_applicable_modes_0_0(
#line 221 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__1_1,
#line 221 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2)
#line 221 "hlds_clauses.m"
{
#line 221 "hlds_clauses.m"
  {
#line 221 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 221 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastX_7 = (MR_Integer) hlds__hlds_clauses__HeadVar__1_1;
#line 221 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastY_8 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;

#line 221 "hlds_clauses.m"
    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_7 == hlds__hlds_clauses__CastY_8);
#line 221 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 221 "hlds_clauses.m"
      hlds__hlds_clauses__succeeded = MR_TRUE;
#line 221 "hlds_clauses.m"
    else
#line 221 "hlds_clauses.m"
    if ((hlds__hlds_clauses__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 221 "hlds_clauses.m"
      {
#line 221 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__CastX_3 = (MR_Integer) hlds__hlds_clauses__HeadVar__1_1;
#line 221 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__CastY_4 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;

#line 221 "hlds_clauses.m"
        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastY_4 == hlds__hlds_clauses__CastX_3);
#line 221 "hlds_clauses.m"
      }
#line 221 "hlds_clauses.m"
    else
#line 221 "hlds_clauses.m"
      {
#line 221 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__TypeInfo_9_9;
#line 221 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 0)));
#line 221 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_6_6;

#line 221 "hlds_clauses.m"
        hlds__hlds_clauses__succeeded = ((MR_tag((MR_Word) hlds__hlds_clauses__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 221 "hlds_clauses.m"
        if (hlds__hlds_clauses__succeeded)
#line 221 "hlds_clauses.m"
          {
#line 221 "hlds_clauses.m"
            hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
#line 2843 "hlds.hlds_clauses.c"
            hlds__hlds_clauses__TypeInfo_9_9 = (MR_Word) &hlds__hlds_clauses_scalar_common_1[3];
#line 2845 "hlds.hlds_clauses.c"
            {
#line 2847 "hlds.hlds_clauses.c"
              hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_9_9, ((MR_Box) (hlds__hlds_clauses__V_5_5)), ((MR_Box) (hlds__hlds_clauses__V_6_6)));
            }
#line 221 "hlds_clauses.m"
          }
#line 221 "hlds_clauses.m"
      }
#line 221 "hlds_clauses.m"
    return hlds__hlds_clauses__succeeded;
#line 221 "hlds_clauses.m"
  }
#line 221 "hlds_clauses.m"
}

#line 209 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses____Compare____clause_0_0(
#line 209 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__1_1,
#line 209 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2,
#line 209 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__3_3)
#line 209 "hlds_clauses.m"
{
#line 209 "hlds_clauses.m"
  {
#line 209 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 209 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastX_18 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;
#line 209 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastY_19 = (MR_Integer) hlds__hlds_clauses__HeadVar__3_3;

#line 209 "hlds_clauses.m"
    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_18 == hlds__hlds_clauses__CastY_19);
#line 209 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 2885 "hlds.hlds_clauses.c"
      *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 0;
#line 209 "hlds_clauses.m"
    else
#line 209 "hlds_clauses.m"
      {
#line 209 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
#line 209 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
#line 209 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 2)));
#line 209 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 3)));
#line 209 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 4)));
#line 209 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 0)));
#line 209 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 1)));
#line 209 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 2)));
#line 209 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 3)));
#line 209 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 4)));
#line 209 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_14_14;

#line 209 "hlds_clauses.m"
        {
#line 209 "hlds_clauses.m"
          hlds__hlds_clauses____Compare____clause_applicable_modes_0_0(&hlds__hlds_clauses__V_14_14, hlds__hlds_clauses__V_4_4, hlds__hlds_clauses__V_9_9);
        }
#line 2919 "hlds.hlds_clauses.c"
        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_14_14 == (MR_Integer) 0);
#line 209 "hlds_clauses.m"
        hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 209 "hlds_clauses.m"
        if (hlds__hlds_clauses__succeeded)
#line 209 "hlds_clauses.m"
          *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_14_14;
#line 209 "hlds_clauses.m"
        else
#line 209 "hlds_clauses.m"
          {
#line 209 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__V_15_15;

#line 209 "hlds_clauses.m"
            {
#line 209 "hlds_clauses.m"
              hlds__hlds_goal____Compare____hlds_goal_0_0(&hlds__hlds_clauses__V_15_15, hlds__hlds_clauses__V_5_5, hlds__hlds_clauses__V_10_10);
            }
#line 2939 "hlds.hlds_clauses.c"
            hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_15_15 == (MR_Integer) 0);
#line 209 "hlds_clauses.m"
            hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 209 "hlds_clauses.m"
            if (hlds__hlds_clauses__succeeded)
#line 209 "hlds_clauses.m"
              *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_15_15;
#line 209 "hlds_clauses.m"
            else
#line 209 "hlds_clauses.m"
              {
#line 209 "hlds_clauses.m"
                MR_Word hlds__hlds_clauses__V_16_16;

#line 209 "hlds_clauses.m"
                {
#line 209 "hlds_clauses.m"
                  hlds__hlds_pred____Compare____implementation_language_0_0(&hlds__hlds_clauses__V_16_16, hlds__hlds_clauses__V_6_6, hlds__hlds_clauses__V_11_11);
                }
#line 2959 "hlds.hlds_clauses.c"
                hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_16_16 == (MR_Integer) 0);
#line 209 "hlds_clauses.m"
                hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 209 "hlds_clauses.m"
                if (hlds__hlds_clauses__succeeded)
#line 209 "hlds_clauses.m"
                  *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_16_16;
#line 209 "hlds_clauses.m"
                else
#line 209 "hlds_clauses.m"
                  {
#line 209 "hlds_clauses.m"
                    MR_Word hlds__hlds_clauses__V_17_17;

#line 209 "hlds_clauses.m"
                    {
#line 209 "hlds_clauses.m"
                      mercury__term____Compare____context_0_0(&hlds__hlds_clauses__V_17_17, hlds__hlds_clauses__V_7_7, hlds__hlds_clauses__V_12_12);
                    }
#line 2979 "hlds.hlds_clauses.c"
                    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_17_17 == (MR_Integer) 0);
#line 209 "hlds_clauses.m"
                    hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 209 "hlds_clauses.m"
                    if (hlds__hlds_clauses__succeeded)
#line 209 "hlds_clauses.m"
                      *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_17_17;
#line 209 "hlds_clauses.m"
                    else
#line 209 "hlds_clauses.m"
                      {
#line 209 "hlds_clauses.m"
                        {
#line 209 "hlds_clauses.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[2], hlds__hlds_clauses__HeadVar__1_1, ((MR_Box) (hlds__hlds_clauses__V_8_8)), ((MR_Box) (hlds__hlds_clauses__V_13_13)));
                        }
#line 209 "hlds_clauses.m"
                      }
#line 209 "hlds_clauses.m"
                  }
#line 209 "hlds_clauses.m"
              }
#line 209 "hlds_clauses.m"
          }
#line 209 "hlds_clauses.m"
      }
#line 209 "hlds_clauses.m"
  }
#line 209 "hlds_clauses.m"
}

#line 209 "hlds_clauses.m"
MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_0_0(
#line 209 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__1_1,
#line 209 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2)
#line 209 "hlds_clauses.m"
{
#line 209 "hlds_clauses.m"
  {
#line 209 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 209 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastX_13 = (MR_Integer) hlds__hlds_clauses__HeadVar__1_1;
#line 209 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastY_14 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;

#line 209 "hlds_clauses.m"
    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_13 == hlds__hlds_clauses__CastY_14);
#line 209 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 209 "hlds_clauses.m"
      hlds__hlds_clauses__succeeded = MR_TRUE;
#line 209 "hlds_clauses.m"
    else
#line 209 "hlds_clauses.m"
      {
#line 209 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__TypeInfo_18_18;
#line 209 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 0)));
#line 209 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 1)));
#line 209 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 2)));
#line 209 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 3)));
#line 209 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 4)));
#line 209 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
#line 209 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
#line 209 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 2)));
#line 209 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 3)));
#line 209 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 4)));

#line 3062 "hlds.hlds_clauses.c"
        {
#line 3064 "hlds.hlds_clauses.c"
          hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_applicable_modes_0_0(hlds__hlds_clauses__V_3_3, hlds__hlds_clauses__V_8_8);
        }
#line 209 "hlds_clauses.m"
        if (hlds__hlds_clauses__succeeded)
#line 209 "hlds_clauses.m"
          {
#line 3071 "hlds.hlds_clauses.c"
            {
#line 3073 "hlds.hlds_clauses.c"
              hlds__hlds_clauses__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(hlds__hlds_clauses__V_4_4, hlds__hlds_clauses__V_9_9);
            }
#line 209 "hlds_clauses.m"
            if (hlds__hlds_clauses__succeeded)
#line 209 "hlds_clauses.m"
              {
#line 3080 "hlds.hlds_clauses.c"
                {
#line 3082 "hlds.hlds_clauses.c"
                  hlds__hlds_clauses__succeeded = hlds__hlds_pred____Unify____implementation_language_0_0(hlds__hlds_clauses__V_5_5, hlds__hlds_clauses__V_10_10);
                }
#line 209 "hlds_clauses.m"
                if (hlds__hlds_clauses__succeeded)
#line 209 "hlds_clauses.m"
                  {
#line 3089 "hlds.hlds_clauses.c"
                    {
#line 3091 "hlds.hlds_clauses.c"
                      hlds__hlds_clauses__succeeded = mercury__term____Unify____context_0_0(hlds__hlds_clauses__V_6_6, hlds__hlds_clauses__V_11_11);
                    }
#line 209 "hlds_clauses.m"
                    if (hlds__hlds_clauses__succeeded)
#line 209 "hlds_clauses.m"
                      {
#line 3098 "hlds.hlds_clauses.c"
                        hlds__hlds_clauses__TypeInfo_18_18 = (MR_Word) &hlds__hlds_clauses_scalar_common_1[2];
#line 3100 "hlds.hlds_clauses.c"
                        {
#line 3102 "hlds.hlds_clauses.c"
                          hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_18_18, ((MR_Box) (hlds__hlds_clauses__V_7_7)), ((MR_Box) (hlds__hlds_clauses__V_12_12)));
                        }
#line 209 "hlds_clauses.m"
                      }
#line 209 "hlds_clauses.m"
                  }
#line 209 "hlds_clauses.m"
              }
#line 209 "hlds_clauses.m"
          }
#line 209 "hlds_clauses.m"
      }
#line 209 "hlds_clauses.m"
    return hlds__hlds_clauses__succeeded;
#line 209 "hlds_clauses.m"
  }
#line 209 "hlds_clauses.m"
}

#line 362 "hlds_clauses.m"
static void MR_CALL 
hlds__hlds_clauses__add_clause_item_number_regions_4_p_0(
#line 362 "hlds_clauses.m"
  MR_Integer hlds__hlds_clauses__ItemNum_5,
#line 362 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__Context_6,
#line 362 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_Regions_0_23,
#line 362 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_Regions_24)
#line 362 "hlds_clauses.m"
{
#line 368 "hlds_clauses.m"
  {
#line 368 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;

#line 368 "hlds_clauses.m"
    if ((hlds__hlds_clauses__STATE_VARIABLE_Regions_0_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 368 "hlds_clauses.m"
      {
#line 368 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__NewRegion_8;

#line 369 "hlds_clauses.m"
        {
#line 369 "hlds_clauses.m"
          hlds__hlds_clauses__NewRegion_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 369 "hlds_clauses.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_clauses__NewRegion_8, 0) = ((MR_Box) (hlds__hlds_clauses__ItemNum_5));
#line 369 "hlds_clauses.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_clauses__NewRegion_8, 1) = ((MR_Box) (hlds__hlds_clauses__ItemNum_5));
#line 369 "hlds_clauses.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_clauses__NewRegion_8, 2) = ((MR_Box) (hlds__hlds_clauses__Context_6));
#line 369 "hlds_clauses.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_clauses__NewRegion_8, 3) = ((MR_Box) (hlds__hlds_clauses__Context_6));
#line 369 "hlds_clauses.m"
        }
#line 371 "hlds_clauses.m"
        {
#line 371 "hlds_clauses.m"
          MR_Word base;
#line 371 "hlds_clauses.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 371 "hlds_clauses.m"
          *hlds__hlds_clauses__STATE_VARIABLE_Regions_24 = base;
#line 371 "hlds_clauses.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_clauses__NewRegion_8));
#line 371 "hlds_clauses.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 371 "hlds_clauses.m"
        }
#line 368 "hlds_clauses.m"
      }
#line 368 "hlds_clauses.m"
    else
#line 373 "hlds_clauses.m"
      {
#line 373 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__FirstRegion0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__STATE_VARIABLE_Regions_0_23, (MR_Integer) 0)));
#line 373 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__LaterRegions0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__STATE_VARIABLE_Regions_0_23, (MR_Integer) 1)));
#line 373 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__LowerNum0_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion0_9, (MR_Integer) 0)));
#line 373 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__UpperNum0_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion0_9, (MR_Integer) 1)));
#line 373 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__LowerContext0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion0_9, (MR_Integer) 2)));
#line 373 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__UpperContext0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion0_9, (MR_Integer) 3)));
#line 376 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_25_25 = (hlds__hlds_clauses__LowerNum0_11 - (MR_Integer) 1);

#line 376 "hlds_clauses.m"
        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__ItemNum_5 < hlds__hlds_clauses__V_25_25);
#line 380 "hlds_clauses.m"
        if (hlds__hlds_clauses__succeeded)
#line 378 "hlds_clauses.m"
          {
#line 378 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__NewRegion_49;

#line 377 "hlds_clauses.m"
            {
#line 377 "hlds_clauses.m"
              hlds__hlds_clauses__NewRegion_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 377 "hlds_clauses.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_clauses__NewRegion_49, 0) = ((MR_Box) (hlds__hlds_clauses__ItemNum_5));
#line 377 "hlds_clauses.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_clauses__NewRegion_49, 1) = ((MR_Box) (hlds__hlds_clauses__ItemNum_5));
#line 377 "hlds_clauses.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_clauses__NewRegion_49, 2) = ((MR_Box) (hlds__hlds_clauses__Context_6));
#line 377 "hlds_clauses.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_clauses__NewRegion_49, 3) = ((MR_Box) (hlds__hlds_clauses__Context_6));
#line 377 "hlds_clauses.m"
            }
#line 379 "hlds_clauses.m"
            {
#line 379 "hlds_clauses.m"
              MR_Word base;
#line 379 "hlds_clauses.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 379 "hlds_clauses.m"
              *hlds__hlds_clauses__STATE_VARIABLE_Regions_24 = base;
#line 379 "hlds_clauses.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_clauses__NewRegion_49));
#line 379 "hlds_clauses.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hlds_clauses__STATE_VARIABLE_Regions_0_23));
#line 379 "hlds_clauses.m"
            }
#line 378 "hlds_clauses.m"
          }
#line 380 "hlds_clauses.m"
        else
#line 384 "hlds_clauses.m"
          {
#line 380 "hlds_clauses.m"
            MR_Integer hlds__hlds_clauses__V_31_31 = (hlds__hlds_clauses__LowerNum0_11 - hlds__hlds_clauses__ItemNum_5);

#line 380 "hlds_clauses.m"
            hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_31_31 == (MR_Integer) 1);
#line 384 "hlds_clauses.m"
            if (hlds__hlds_clauses__succeeded)
#line 382 "hlds_clauses.m"
              {
#line 382 "hlds_clauses.m"
                MR_Word hlds__hlds_clauses__FirstRegion_15;

#line 381 "hlds_clauses.m"
                {
#line 381 "hlds_clauses.m"
                  hlds__hlds_clauses__FirstRegion_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 381 "hlds_clauses.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_15, 0) = ((MR_Box) (hlds__hlds_clauses__ItemNum_5));
#line 381 "hlds_clauses.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_15, 1) = ((MR_Box) (hlds__hlds_clauses__UpperNum0_12));
#line 381 "hlds_clauses.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_15, 2) = ((MR_Box) (hlds__hlds_clauses__Context_6));
#line 381 "hlds_clauses.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_15, 3) = ((MR_Box) (hlds__hlds_clauses__UpperContext0_14));
#line 381 "hlds_clauses.m"
                }
#line 383 "hlds_clauses.m"
                {
#line 383 "hlds_clauses.m"
                  MR_Word base;
#line 383 "hlds_clauses.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 383 "hlds_clauses.m"
                  *hlds__hlds_clauses__STATE_VARIABLE_Regions_24 = base;
#line 383 "hlds_clauses.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_clauses__FirstRegion_15));
#line 383 "hlds_clauses.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hlds_clauses__LaterRegions0_10));
#line 383 "hlds_clauses.m"
                }
#line 382 "hlds_clauses.m"
              }
#line 384 "hlds_clauses.m"
            else
#line 386 "hlds_clauses.m"
              {
#line 384 "hlds_clauses.m"
                hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__ItemNum_5 <= hlds__hlds_clauses__UpperNum0_12);
#line 386 "hlds_clauses.m"
                if (hlds__hlds_clauses__succeeded)
#line 385 "hlds_clauses.m"
                  {
#line 385 "hlds_clauses.m"
                    {
#line 385 "hlds_clauses.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_clauses", (MR_String) "predicate \140hlds.hlds_clauses.add_clause_item_number_regions\'/4", (MR_String) "duplicate item number");
#line 385 "hlds_clauses.m"
                      return;
                    }
#line 385 "hlds_clauses.m"
                  }
#line 386 "hlds_clauses.m"
                else
#line 390 "hlds_clauses.m"
                  {
#line 386 "hlds_clauses.m"
                    MR_Integer hlds__hlds_clauses__V_36_36 = (hlds__hlds_clauses__ItemNum_5 - hlds__hlds_clauses__UpperNum0_12);

#line 386 "hlds_clauses.m"
                    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_36_36 == (MR_Integer) 1);
#line 390 "hlds_clauses.m"
                    if (hlds__hlds_clauses__succeeded)
#line 388 "hlds_clauses.m"
                      {
#line 388 "hlds_clauses.m"
                        MR_Word hlds__hlds_clauses__FirstRegion_50;

#line 387 "hlds_clauses.m"
                        {
#line 387 "hlds_clauses.m"
                          hlds__hlds_clauses__FirstRegion_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 387 "hlds_clauses.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_50, 0) = ((MR_Box) (hlds__hlds_clauses__LowerNum0_11));
#line 387 "hlds_clauses.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_50, 1) = ((MR_Box) (hlds__hlds_clauses__ItemNum_5));
#line 387 "hlds_clauses.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_50, 2) = ((MR_Box) (hlds__hlds_clauses__LowerContext0_13));
#line 387 "hlds_clauses.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_50, 3) = ((MR_Box) (hlds__hlds_clauses__Context_6));
#line 387 "hlds_clauses.m"
                        }
#line 389 "hlds_clauses.m"
                        {
#line 389 "hlds_clauses.m"
                          MR_Word base;
#line 389 "hlds_clauses.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "hlds_clauses.m"
                          *hlds__hlds_clauses__STATE_VARIABLE_Regions_24 = base;
#line 389 "hlds_clauses.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_clauses__FirstRegion_50));
#line 389 "hlds_clauses.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hlds_clauses__LaterRegions0_10));
#line 389 "hlds_clauses.m"
                        }
#line 388 "hlds_clauses.m"
                      }
#line 390 "hlds_clauses.m"
                    else
#line 392 "hlds_clauses.m"
                      {
#line 392 "hlds_clauses.m"
                        MR_Word hlds__hlds_clauses__LaterRegions1_16;

#line 391 "hlds_clauses.m"
                        {
#line 391 "hlds_clauses.m"
                          hlds__hlds_clauses__add_clause_item_number_regions_4_p_0(hlds__hlds_clauses__ItemNum_5, hlds__hlds_clauses__Context_6, hlds__hlds_clauses__LaterRegions0_10, &hlds__hlds_clauses__LaterRegions1_16);
                        }
#line 398 "hlds_clauses.m"
                        if ((hlds__hlds_clauses__LaterRegions1_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 396 "hlds_clauses.m"
                          {
#line 397 "hlds_clauses.m"
                            {
#line 397 "hlds_clauses.m"
                              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_clauses", (MR_String) "predicate \140hlds.hlds_clauses.add_clause_item_number_regions\'/4", (MR_String) "insertion yields empty list");
#line 397 "hlds_clauses.m"
                              return;
                            }
#line 396 "hlds_clauses.m"
                          }
#line 398 "hlds_clauses.m"
                        else
#line 399 "hlds_clauses.m"
                          {
#line 399 "hlds_clauses.m"
                            MR_Word hlds__hlds_clauses__FirstLaterRegion1_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__LaterRegions1_16, (MR_Integer) 0)));
#line 399 "hlds_clauses.m"
                            MR_Word hlds__hlds_clauses__LaterLaterRegions1_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__LaterRegions1_16, (MR_Integer) 1)));
#line 399 "hlds_clauses.m"
                            MR_Integer hlds__hlds_clauses__LowerNum1_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstLaterRegion1_17, (MR_Integer) 0)));
#line 399 "hlds_clauses.m"
                            MR_Integer hlds__hlds_clauses__UpperNum1_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstLaterRegion1_17, (MR_Integer) 1)));
#line 399 "hlds_clauses.m"
                            MR_Word hlds__hlds_clauses__UpperContext1_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstLaterRegion1_17, (MR_Integer) 3)));
#line 400 "hlds_clauses.m"
                            MR_Word hlds__hlds_clauses___LowerContext1_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstLaterRegion1_17, (MR_Integer) 2)));
#line 402 "hlds_clauses.m"
                            MR_Integer hlds__hlds_clauses__V_38_38 = (hlds__hlds_clauses__LowerNum1_19 - hlds__hlds_clauses__UpperNum0_12);

#line 402 "hlds_clauses.m"
                            hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_38_38 == (MR_Integer) 1);
#line 407 "hlds_clauses.m"
                            if (hlds__hlds_clauses__succeeded)
#line 405 "hlds_clauses.m"
                              {
#line 405 "hlds_clauses.m"
                                MR_Word hlds__hlds_clauses__FirstRegion_51;

#line 403 "hlds_clauses.m"
                                {
#line 403 "hlds_clauses.m"
                                  hlds__hlds_clauses__FirstRegion_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 403 "hlds_clauses.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_51, 0) = ((MR_Box) (hlds__hlds_clauses__LowerNum0_11));
#line 403 "hlds_clauses.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_51, 1) = ((MR_Box) (hlds__hlds_clauses__UpperNum1_20));
#line 403 "hlds_clauses.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_51, 2) = ((MR_Box) (hlds__hlds_clauses__LowerContext0_13));
#line 403 "hlds_clauses.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_51, 3) = ((MR_Box) (hlds__hlds_clauses__UpperContext1_22));
#line 403 "hlds_clauses.m"
                                }
#line 406 "hlds_clauses.m"
                                {
#line 406 "hlds_clauses.m"
                                  MR_Word base;
#line 406 "hlds_clauses.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 406 "hlds_clauses.m"
                                  *hlds__hlds_clauses__STATE_VARIABLE_Regions_24 = base;
#line 406 "hlds_clauses.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_clauses__FirstRegion_51));
#line 406 "hlds_clauses.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hlds_clauses__LaterLaterRegions1_18));
#line 406 "hlds_clauses.m"
                                }
#line 405 "hlds_clauses.m"
                              }
#line 407 "hlds_clauses.m"
                            else
#line 408 "hlds_clauses.m"
                              {
#line 408 "hlds_clauses.m"
                                MR_Word base;
#line 408 "hlds_clauses.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "hlds_clauses.m"
                                *hlds__hlds_clauses__STATE_VARIABLE_Regions_24 = base;
#line 408 "hlds_clauses.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_clauses__FirstRegion0_9));
#line 408 "hlds_clauses.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hlds_clauses__LaterRegions1_16));
#line 408 "hlds_clauses.m"
                              }
#line 399 "hlds_clauses.m"
                          }
#line 392 "hlds_clauses.m"
                      }
#line 390 "hlds_clauses.m"
                  }
#line 386 "hlds_clauses.m"
              }
#line 384 "hlds_clauses.m"
          }
#line 373 "hlds_clauses.m"
      }
#line 368 "hlds_clauses.m"
  }
#line 362 "hlds_clauses.m"
}

#line 277 "hlds_clauses.m"
MR_Word MR_CALL 
hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0(void)
#line 277 "hlds_clauses.m"
{
#line 305 "hlds_clauses.m"
  {
#line 305 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;

#line 305 "hlds_clauses.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 305 "hlds_clauses.m"
  }
#line 277 "hlds_clauses.m"
}

#line 276 "hlds_clauses.m"
MR_Word MR_CALL 
hlds__hlds_clauses__init_clause_item_numbers_user_0_f_0(void)
#line 276 "hlds_clauses.m"
{
#line 304 "hlds_clauses.m"
  {
#line 304 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;

#line 304 "hlds_clauses.m"
    return (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_clauses_scalar_common_1[8]);
#line 304 "hlds_clauses.m"
  }
#line 276 "hlds_clauses.m"
}

#line 272 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__add_clause_item_number_5_p_0(
#line 272 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__MaybeItemNumber_6,
#line 272 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__Context_7,
#line 272 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__Type_8,
#line 272 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_0_17,
#line 272 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_18)
#line 272 "hlds_clauses.m"
{
#line 320 "hlds_clauses.m"
  {
#line 320 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;

#line 320 "hlds_clauses.m"
    if ((hlds__hlds_clauses__MaybeItemNumber_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 320 "hlds_clauses.m"
      *hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_18 = hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_0_17;
#line 320 "hlds_clauses.m"
    else
#line 339 "hlds_clauses.m"
      {
#line 339 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__ItemNumber_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__MaybeItemNumber_6, (MR_Integer) 0)));

#line 353 "hlds_clauses.m"
        if ((hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 354 "hlds_clauses.m"
          *hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_18 = hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_0_17;
#line 353 "hlds_clauses.m"
        else
#line 341 "hlds_clauses.m"
          {
#line 341 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__MercuryRegions0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_0_17, (MR_Integer) 0)));
#line 341 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__BothRegions0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_0_17, (MR_Integer) 1)));
#line 341 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__MercuryRegions_15;
#line 341 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__BothRegions_16;

#line 346 "hlds_clauses.m"
#line 346 "hlds_clauses.m"
            switch (hlds__hlds_clauses__Type_8) {
#line 346 "hlds_clauses.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 346 "hlds_clauses.m"
              case (MR_Integer) 0:
#line 344 "hlds_clauses.m"
                {
#line 344 "hlds_clauses.m"
                  hlds__hlds_clauses__add_clause_item_number_regions_4_p_0(hlds__hlds_clauses__ItemNumber_12, hlds__hlds_clauses__Context_7, hlds__hlds_clauses__MercuryRegions0_13, &hlds__hlds_clauses__MercuryRegions_15);
                }
#line 346 "hlds_clauses.m"
                break;
#line 346 "hlds_clauses.m"
              case (MR_Integer) 1:
#line 348 "hlds_clauses.m"
                hlds__hlds_clauses__MercuryRegions_15 = hlds__hlds_clauses__MercuryRegions0_13;
#line 346 "hlds_clauses.m"
                break;
#line 346 "hlds_clauses.m"
            }
#line 350 "hlds_clauses.m"
            {
#line 350 "hlds_clauses.m"
              hlds__hlds_clauses__add_clause_item_number_regions_4_p_0(hlds__hlds_clauses__ItemNumber_12, hlds__hlds_clauses__Context_7, hlds__hlds_clauses__BothRegions0_14, &hlds__hlds_clauses__BothRegions_16);
            }
#line 352 "hlds_clauses.m"
            {
#line 352 "hlds_clauses.m"
              MR_Word base;
#line 352 "hlds_clauses.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "hlds_clauses.m"
              *hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_18 = base;
#line 352 "hlds_clauses.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_clauses__MercuryRegions_15));
#line 352 "hlds_clauses.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hlds_clauses__BothRegions_16));
#line 352 "hlds_clauses.m"
            }
#line 341 "hlds_clauses.m"
          }
#line 339 "hlds_clauses.m"
      }
#line 320 "hlds_clauses.m"
  }
#line 272 "hlds_clauses.m"
}

#line 263 "hlds_clauses.m"
MR_bool MR_CALL 
hlds__hlds_clauses__clauses_are_non_contiguous_5_p_0(
#line 263 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__ClauseItemNumbers_6,
#line 263 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__Type_7,
#line 263 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__FirstRegion_8,
#line 263 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__SecondRegion_9,
#line 263 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__LaterRegions_10)
#line 263 "hlds_clauses.m"
{
#line 308 "hlds_clauses.m"
  {
#line 308 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded = ((MR_tag((MR_Word) hlds__hlds_clauses__ClauseItemNumbers_6)) == (MR_mktag((MR_Integer) 1)));
#line 308 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__MercuryRegions_11;
#line 308 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__BothRegions_12;

#line 309 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 309 "hlds_clauses.m"
      {
#line 309 "hlds_clauses.m"
        hlds__hlds_clauses__MercuryRegions_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__ClauseItemNumbers_6, (MR_Integer) 0)));
#line 309 "hlds_clauses.m"
        hlds__hlds_clauses__BothRegions_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__ClauseItemNumbers_6, (MR_Integer) 1)));
#line 313 "hlds_clauses.m"
#line 313 "hlds_clauses.m"
        switch (hlds__hlds_clauses__Type_7) {
#line 313 "hlds_clauses.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 313 "hlds_clauses.m"
          case (MR_Integer) 1:
#line 314 "hlds_clauses.m"
            {
#line 314 "hlds_clauses.m"
              MR_Word hlds__hlds_clauses__V_13_13;

#line 315 "hlds_clauses.m"
              hlds__hlds_clauses__succeeded = ((MR_tag((MR_Word) hlds__hlds_clauses__BothRegions_12)) == (MR_mktag((MR_Integer) 1)));
#line 315 "hlds_clauses.m"
              if (hlds__hlds_clauses__succeeded)
#line 315 "hlds_clauses.m"
                {
#line 315 "hlds_clauses.m"
                  *hlds__hlds_clauses__FirstRegion_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__BothRegions_12, (MR_Integer) 0)));
#line 315 "hlds_clauses.m"
                  hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__BothRegions_12, (MR_Integer) 1)));
#line 315 "hlds_clauses.m"
                  hlds__hlds_clauses__succeeded = ((MR_tag((MR_Word) hlds__hlds_clauses__V_13_13)) == (MR_mktag((MR_Integer) 1)));
#line 315 "hlds_clauses.m"
                  if (hlds__hlds_clauses__succeeded)
#line 315 "hlds_clauses.m"
                    {
#line 315 "hlds_clauses.m"
                      *hlds__hlds_clauses__SecondRegion_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__V_13_13, (MR_Integer) 0)));
#line 315 "hlds_clauses.m"
                      *hlds__hlds_clauses__LaterRegions_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__V_13_13, (MR_Integer) 1)));
#line 315 "hlds_clauses.m"
                    }
#line 315 "hlds_clauses.m"
                }
#line 314 "hlds_clauses.m"
            }
#line 313 "hlds_clauses.m"
            break;
#line 313 "hlds_clauses.m"
          case (MR_Integer) 0:
#line 311 "hlds_clauses.m"
            {
#line 311 "hlds_clauses.m"
              MR_Word hlds__hlds_clauses__V_14_14;

#line 312 "hlds_clauses.m"
              hlds__hlds_clauses__succeeded = ((MR_tag((MR_Word) hlds__hlds_clauses__MercuryRegions_11)) == (MR_mktag((MR_Integer) 1)));
#line 312 "hlds_clauses.m"
              if (hlds__hlds_clauses__succeeded)
#line 312 "hlds_clauses.m"
                {
#line 312 "hlds_clauses.m"
                  *hlds__hlds_clauses__FirstRegion_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__MercuryRegions_11, (MR_Integer) 0)));
#line 312 "hlds_clauses.m"
                  hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__MercuryRegions_11, (MR_Integer) 1)));
#line 312 "hlds_clauses.m"
                  hlds__hlds_clauses__succeeded = ((MR_tag((MR_Word) hlds__hlds_clauses__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 312 "hlds_clauses.m"
                  if (hlds__hlds_clauses__succeeded)
#line 312 "hlds_clauses.m"
                    {
#line 312 "hlds_clauses.m"
                      *hlds__hlds_clauses__SecondRegion_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__V_14_14, (MR_Integer) 0)));
#line 312 "hlds_clauses.m"
                      *hlds__hlds_clauses__LaterRegions_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__V_14_14, (MR_Integer) 1)));
#line 312 "hlds_clauses.m"
                    }
#line 312 "hlds_clauses.m"
                }
#line 311 "hlds_clauses.m"
            }
#line 313 "hlds_clauses.m"
            break;
#line 313 "hlds_clauses.m"
        }
#line 309 "hlds_clauses.m"
      }
#line 308 "hlds_clauses.m"
    return hlds__hlds_clauses__succeeded;
#line 308 "hlds_clauses.m"
  }
#line 263 "hlds_clauses.m"
}

#line 219 "hlds_clauses.m"
MR_Word MR_CALL 
hlds__hlds_clauses__clause_body_1_f_0(
#line 219 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__1_1)
#line 219 "hlds_clauses.m"
{
#line 219 "hlds_clauses.m"
  {
#line 219 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 219 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 1)));
#line 219 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 0)));
#line 219 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 2)));
#line 219 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 3)));
#line 219 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 4)));

#line 219 "hlds_clauses.m"
    return hlds__hlds_clauses__HeadVar__2_2;
#line 219 "hlds_clauses.m"
  }
#line 219 "hlds_clauses.m"
}

#line 206 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_set_rtti_varmaps_3_p_0(
#line 206 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__X_4,
#line 206 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_CI_0_6,
#line 206 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_CI_7)
#line 206 "hlds_clauses.m"
{
#line 464 "hlds_clauses.m"
  {
#line 464 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 464 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
#line 464 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
#line 464 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 2)));
#line 464 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 3)));
#line 464 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 4)));
#line 464 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 5)));
#line 464 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 6)));
#line 464 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 8)));
#line 464 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 7)));

#line 464 "hlds_clauses.m"
    {
#line 464 "hlds_clauses.m"
      MR_Word base;
#line 464 "hlds_clauses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 464 "hlds_clauses.m"
      *hlds__hlds_clauses__STATE_VARIABLE_CI_7 = base;
#line 464 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__V_9_9));
#line 464 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__V_10_10));
#line 464 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_clauses__V_11_11));
#line 464 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_clauses__V_12_12));
#line 464 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_clauses__V_13_13));
#line 464 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_clauses__V_14_14));
#line 464 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_clauses__V_15_15));
#line 464 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_clauses__X_4));
#line 464 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_clauses__V_17_17));
#line 464 "hlds_clauses.m"
    }
#line 464 "hlds_clauses.m"
  }
#line 206 "hlds_clauses.m"
}

#line 203 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(
#line 203 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__X_4,
#line 203 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_CI_0_6,
#line 203 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_CI_7)
#line 203 "hlds_clauses.m"
{
#line 457 "hlds_clauses.m"
  {
#line 457 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 457 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
#line 457 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
#line 457 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 2)));
#line 457 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 4)));
#line 457 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 5)));
#line 457 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 6)));
#line 457 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 7)));
#line 457 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 8)));
#line 457 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 3)));

#line 457 "hlds_clauses.m"
    {
#line 457 "hlds_clauses.m"
      MR_Word base;
#line 457 "hlds_clauses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 457 "hlds_clauses.m"
      *hlds__hlds_clauses__STATE_VARIABLE_CI_7 = base;
#line 457 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__V_9_9));
#line 457 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__V_10_10));
#line 457 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_clauses__V_11_11));
#line 457 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_clauses__X_4));
#line 457 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_clauses__V_13_13));
#line 457 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_clauses__V_14_14));
#line 457 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_clauses__V_15_15));
#line 457 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_clauses__V_16_16));
#line 457 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_clauses__V_17_17));
#line 457 "hlds_clauses.m"
    }
#line 457 "hlds_clauses.m"
  }
#line 203 "hlds_clauses.m"
}

#line 197 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_set_explicit_vartypes_3_p_0(
#line 197 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__X_4,
#line 197 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_CI_0_6,
#line 197 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_CI_7)
#line 197 "hlds_clauses.m"
{
#line 455 "hlds_clauses.m"
  {
#line 455 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 455 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
#line 455 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 2)));
#line 455 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 3)));
#line 455 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 4)));
#line 455 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 5)));
#line 455 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 6)));
#line 455 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 7)));
#line 455 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 8)));
#line 455 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));

#line 455 "hlds_clauses.m"
    {
#line 455 "hlds_clauses.m"
      MR_Word base;
#line 455 "hlds_clauses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 455 "hlds_clauses.m"
      *hlds__hlds_clauses__STATE_VARIABLE_CI_7 = base;
#line 455 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__V_9_9));
#line 455 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__X_4));
#line 455 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_clauses__V_11_11));
#line 455 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_clauses__V_12_12));
#line 455 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_clauses__V_13_13));
#line 455 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_clauses__V_14_14));
#line 455 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_clauses__V_15_15));
#line 455 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_clauses__V_16_16));
#line 455 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_clauses__V_17_17));
#line 455 "hlds_clauses.m"
    }
#line 455 "hlds_clauses.m"
  }
#line 197 "hlds_clauses.m"
}

#line 191 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_set_varset_3_p_0(
#line 191 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__X_4,
#line 191 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_CI_0_6,
#line 191 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_CI_7)
#line 191 "hlds_clauses.m"
{
#line 453 "hlds_clauses.m"
  {
#line 453 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 453 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
#line 453 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 2)));
#line 453 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 3)));
#line 453 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 4)));
#line 453 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 5)));
#line 453 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 6)));
#line 453 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 7)));
#line 453 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 8)));
#line 453 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));

#line 453 "hlds_clauses.m"
    {
#line 453 "hlds_clauses.m"
      MR_Word base;
#line 453 "hlds_clauses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 453 "hlds_clauses.m"
      *hlds__hlds_clauses__STATE_VARIABLE_CI_7 = base;
#line 453 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__X_4));
#line 453 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__V_10_10));
#line 453 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_clauses__V_11_11));
#line 453 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_clauses__V_12_12));
#line 453 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_clauses__V_13_13));
#line 453 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_clauses__V_14_14));
#line 453 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_clauses__V_15_15));
#line 453 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_clauses__V_16_16));
#line 453 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_clauses__V_17_17));
#line 453 "hlds_clauses.m"
    }
#line 453 "hlds_clauses.m"
  }
#line 191 "hlds_clauses.m"
}

#line 188 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(
#line 188 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__X_5,
#line 188 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__Y_6,
#line 188 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_CI_0_8,
#line 188 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_CI_9)
#line 188 "hlds_clauses.m"
{
#line 460 "hlds_clauses.m"
  {
#line 460 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 460 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 0)));
#line 460 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 1)));
#line 460 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 2)));
#line 460 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 3)));
#line 460 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 4)));
#line 460 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 7)));
#line 460 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 8)));
#line 461 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 5)));
#line 461 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 6)));

#line 462 "hlds_clauses.m"
    {
#line 462 "hlds_clauses.m"
      MR_Word base;
#line 462 "hlds_clauses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 462 "hlds_clauses.m"
      *hlds__hlds_clauses__STATE_VARIABLE_CI_9 = base;
#line 462 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__V_12_12));
#line 462 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__V_13_13));
#line 462 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_clauses__V_14_14));
#line 462 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_clauses__V_15_15));
#line 462 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_clauses__V_16_16));
#line 462 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_clauses__X_5));
#line 462 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_clauses__Y_6));
#line 462 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_clauses__V_19_19));
#line 462 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_clauses__V_20_20));
#line 462 "hlds_clauses.m"
    }
#line 460 "hlds_clauses.m"
  }
#line 188 "hlds_clauses.m"
}

#line 185 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_set_headvars_3_p_0(
#line 185 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__X_4,
#line 185 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_CI_0_6,
#line 185 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_CI_7)
#line 185 "hlds_clauses.m"
{
#line 459 "hlds_clauses.m"
  {
#line 459 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 459 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
#line 459 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
#line 459 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 2)));
#line 459 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 3)));
#line 459 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 5)));
#line 459 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 6)));
#line 459 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 7)));
#line 459 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 8)));
#line 459 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 4)));

#line 459 "hlds_clauses.m"
    {
#line 459 "hlds_clauses.m"
      MR_Word base;
#line 459 "hlds_clauses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 459 "hlds_clauses.m"
      *hlds__hlds_clauses__STATE_VARIABLE_CI_7 = base;
#line 459 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__V_9_9));
#line 459 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__V_10_10));
#line 459 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_clauses__V_11_11));
#line 459 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_clauses__V_12_12));
#line 459 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_clauses__X_4));
#line 459 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_clauses__V_14_14));
#line 459 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_clauses__V_15_15));
#line 459 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_clauses__V_16_16));
#line 459 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_clauses__V_17_17));
#line 459 "hlds_clauses.m"
    }
#line 459 "hlds_clauses.m"
  }
#line 185 "hlds_clauses.m"
}

#line 182 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_clauses_4_p_0(
#line 182 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__Clauses_5,
#line 182 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__ItemNumbers_6,
#line 182 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_CI_0_10,
#line 182 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_CI_11)
#line 182 "hlds_clauses.m"
{
#line 506 "hlds_clauses.m"
  {
#line 506 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 506 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__TypeCtorInfo_10_44;
#line 506 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__ClausesRep0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 5)));
#line 506 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__ClausesRep_9;
#line 506 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__NumClauses_41;
#line 506 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__ClausesCord0_42;
#line 506 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__ClausesCord_43;
#line 507 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 0)));
#line 507 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 1)));
#line 507 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 2)));
#line 507 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 3)));
#line 507 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 4)));
#line 507 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_19_19;
#line 507 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_20_20;
#line 510 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_29_29;
#line 510 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_30_30;
#line 510 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_31_31;
#line 510 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_32_32;
#line 510 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_33_33;
#line 510 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_35_35;
#line 510 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_36_36;
#line 510 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_37_37;
#line 510 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_34_34;

#line 507 "hlds_clauses.m"
    *hlds__hlds_clauses__ItemNumbers_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 6)));
#line 507 "hlds_clauses.m"
    hlds__hlds_clauses__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 7)));
#line 507 "hlds_clauses.m"
    hlds__hlds_clauses__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 8)));
#line 486 "hlds_clauses.m"
    hlds__hlds_clauses__NumClauses_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep0_8, (MR_Integer) 0)));
#line 486 "hlds_clauses.m"
    hlds__hlds_clauses__ClausesCord0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep0_8, (MR_Integer) 1)));
#line 4217 "hlds.hlds_clauses.c"
    hlds__hlds_clauses__TypeCtorInfo_10_44 = (MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0;
#line 487 "hlds_clauses.m"
    {
#line 487 "hlds_clauses.m"
      *hlds__hlds_clauses__Clauses_5 = mercury__cord__list_1_f_0(hlds__hlds_clauses__TypeCtorInfo_10_44, hlds__hlds_clauses__ClausesCord0_42);
    }
#line 488 "hlds_clauses.m"
    {
#line 488 "hlds_clauses.m"
      hlds__hlds_clauses__ClausesCord_43 = mercury__cord__from_list_1_f_0(hlds__hlds_clauses__TypeCtorInfo_10_44, *hlds__hlds_clauses__Clauses_5);
    }
#line 489 "hlds_clauses.m"
    {
#line 489 "hlds_clauses.m"
      hlds__hlds_clauses__ClausesRep_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 489 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_9, 0) = ((MR_Box) (hlds__hlds_clauses__NumClauses_41));
#line 489 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_9, 1) = ((MR_Box) (hlds__hlds_clauses__ClausesCord_43));
#line 489 "hlds_clauses.m"
    }
#line 510 "hlds_clauses.m"
    hlds__hlds_clauses__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 0)));
#line 510 "hlds_clauses.m"
    hlds__hlds_clauses__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 1)));
#line 510 "hlds_clauses.m"
    hlds__hlds_clauses__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 2)));
#line 510 "hlds_clauses.m"
    hlds__hlds_clauses__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 3)));
#line 510 "hlds_clauses.m"
    hlds__hlds_clauses__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 4)));
#line 510 "hlds_clauses.m"
    hlds__hlds_clauses__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 5)));
#line 510 "hlds_clauses.m"
    hlds__hlds_clauses__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 6)));
#line 510 "hlds_clauses.m"
    hlds__hlds_clauses__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 7)));
#line 510 "hlds_clauses.m"
    hlds__hlds_clauses__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 8)));
#line 510 "hlds_clauses.m"
    {
#line 510 "hlds_clauses.m"
      MR_Word base;
#line 510 "hlds_clauses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 510 "hlds_clauses.m"
      *hlds__hlds_clauses__STATE_VARIABLE_CI_11 = base;
#line 510 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__V_29_29));
#line 510 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__V_30_30));
#line 510 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_clauses__V_31_31));
#line 510 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_clauses__V_32_32));
#line 510 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_clauses__V_33_33));
#line 510 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_clauses__ClausesRep_9));
#line 510 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_clauses__V_35_35));
#line 510 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_clauses__V_36_36));
#line 510 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_clauses__V_37_37));
#line 510 "hlds_clauses.m"
    }
#line 506 "hlds_clauses.m"
  }
#line 182 "hlds_clauses.m"
}

#line 176 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(
#line 176 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__CI_4,
#line 176 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__2_2,
#line 176 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__3_3)
#line 176 "hlds_clauses.m"
{
#line 449 "hlds_clauses.m"
  {
#line 449 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 449 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 0)));
#line 449 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 1)));
#line 449 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 2)));
#line 449 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 3)));
#line 449 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 4)));
#line 449 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_11_11;
#line 449 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_12_12;

#line 449 "hlds_clauses.m"
    *hlds__hlds_clauses__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 5)));
#line 449 "hlds_clauses.m"
    *hlds__hlds_clauses__HeadVar__3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 6)));
#line 449 "hlds_clauses.m"
    hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 7)));
#line 449 "hlds_clauses.m"
    hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 8)));
#line 449 "hlds_clauses.m"
  }
#line 176 "hlds_clauses.m"
}

#line 173 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(
#line 173 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__CI_3,
#line 173 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__List_4)
#line 173 "hlds_clauses.m"
{
#line 447 "hlds_clauses.m"
  {
#line 447 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 447 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 4)));
#line 448 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 0)));
#line 448 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 1)));
#line 448 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 2)));
#line 448 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 3)));
#line 448 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 5)));
#line 448 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 6)));
#line 448 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 7)));
#line 448 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 8)));

#line 448 "hlds_clauses.m"
    {
#line 448 "hlds_clauses.m"
      *hlds__hlds_clauses__List_4 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[1], hlds__hlds_clauses__V_5_5);
    }
#line 447 "hlds_clauses.m"
  }
#line 173 "hlds_clauses.m"
}

#line 166 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_get_headvars_2_p_0(
#line 166 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__CI_3,
#line 166 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__2_2)
#line 166 "hlds_clauses.m"
{
#line 446 "hlds_clauses.m"
  {
#line 446 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 446 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 0)));
#line 446 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 1)));
#line 446 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 2)));
#line 446 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 3)));
#line 446 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_8_8;
#line 446 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_9_9;
#line 446 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_10_10;
#line 446 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_11_11;

#line 446 "hlds_clauses.m"
    *hlds__hlds_clauses__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 4)));
#line 446 "hlds_clauses.m"
    hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 5)));
#line 446 "hlds_clauses.m"
    hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 6)));
#line 446 "hlds_clauses.m"
    hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 7)));
#line 446 "hlds_clauses.m"
    hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 8)));
#line 446 "hlds_clauses.m"
  }
#line 166 "hlds_clauses.m"
}

#line 163 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_get_rtti_varmaps_2_p_0(
#line 163 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__CI_3,
#line 163 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__2_2)
#line 163 "hlds_clauses.m"
{
#line 450 "hlds_clauses.m"
  {
#line 450 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 450 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 0)));
#line 450 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 1)));
#line 450 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 2)));
#line 450 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 3)));
#line 450 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 4)));
#line 450 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 5)));
#line 450 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 6)));
#line 450 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_11_11;

#line 450 "hlds_clauses.m"
    *hlds__hlds_clauses__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 7)));
#line 450 "hlds_clauses.m"
    hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 8)));
#line 450 "hlds_clauses.m"
  }
#line 163 "hlds_clauses.m"
}

#line 161 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(
#line 161 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__CI_3,
#line 161 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__2_2)
#line 161 "hlds_clauses.m"
{
#line 445 "hlds_clauses.m"
  {
#line 445 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 445 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 0)));
#line 445 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 1)));
#line 445 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 2)));
#line 445 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_7_7;
#line 445 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_8_8;
#line 445 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_9_9;
#line 445 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_10_10;
#line 445 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_11_11;

#line 445 "hlds_clauses.m"
    *hlds__hlds_clauses__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 3)));
#line 445 "hlds_clauses.m"
    hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 4)));
#line 445 "hlds_clauses.m"
    hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 5)));
#line 445 "hlds_clauses.m"
    hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 6)));
#line 445 "hlds_clauses.m"
    hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 7)));
#line 445 "hlds_clauses.m"
    hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 8)));
#line 445 "hlds_clauses.m"
  }
#line 161 "hlds_clauses.m"
}

#line 155 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_get_explicit_vartypes_2_p_0(
#line 155 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__CI_3,
#line 155 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__2_2)
#line 155 "hlds_clauses.m"
{
#line 444 "hlds_clauses.m"
  {
#line 444 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 444 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 0)));
#line 444 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_5_5;
#line 444 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_6_6;
#line 444 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_7_7;
#line 444 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_8_8;
#line 444 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_9_9;
#line 444 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_10_10;
#line 444 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_11_11;

#line 444 "hlds_clauses.m"
    *hlds__hlds_clauses__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 1)));
#line 444 "hlds_clauses.m"
    hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 2)));
#line 444 "hlds_clauses.m"
    hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 3)));
#line 444 "hlds_clauses.m"
    hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 4)));
#line 444 "hlds_clauses.m"
    hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 5)));
#line 444 "hlds_clauses.m"
    hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 6)));
#line 444 "hlds_clauses.m"
    hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 7)));
#line 444 "hlds_clauses.m"
    hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 8)));
#line 444 "hlds_clauses.m"
  }
#line 155 "hlds_clauses.m"
}

#line 150 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_get_varset_2_p_0(
#line 150 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__CI_3,
#line 150 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__2_2)
#line 150 "hlds_clauses.m"
{
#line 443 "hlds_clauses.m"
  {
#line 443 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 443 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_4_4;
#line 443 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_5_5;
#line 443 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_6_6;
#line 443 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_7_7;
#line 443 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_8_8;
#line 443 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_9_9;
#line 443 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_10_10;
#line 443 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_11_11;

#line 443 "hlds_clauses.m"
    *hlds__hlds_clauses__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 0)));
#line 443 "hlds_clauses.m"
    hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 1)));
#line 443 "hlds_clauses.m"
    hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 2)));
#line 443 "hlds_clauses.m"
    hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 3)));
#line 443 "hlds_clauses.m"
    hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 4)));
#line 443 "hlds_clauses.m"
    hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 5)));
#line 443 "hlds_clauses.m"
    hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 6)));
#line 443 "hlds_clauses.m"
    hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 7)));
#line 443 "hlds_clauses.m"
    hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 8)));
#line 443 "hlds_clauses.m"
  }
#line 150 "hlds_clauses.m"
}

#line 148 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__set_clause_list_2_p_0(
#line 148 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__Clauses_3,
#line 148 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__ClausesRep_4)
#line 148 "hlds_clauses.m"
{
#line 503 "hlds_clauses.m"
  {
#line 503 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 503 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__TypeCtorInfo_7_7 = (MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0;
#line 503 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__V_5_5;
#line 503 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_6_6;

#line 504 "hlds_clauses.m"
    {
#line 504 "hlds_clauses.m"
      hlds__hlds_clauses__V_5_5 = mercury__list__length_1_f_0(hlds__hlds_clauses__TypeCtorInfo_7_7, hlds__hlds_clauses__Clauses_3);
    }
#line 504 "hlds_clauses.m"
    {
#line 504 "hlds_clauses.m"
      hlds__hlds_clauses__V_6_6 = mercury__cord__from_list_1_f_0(hlds__hlds_clauses__TypeCtorInfo_7_7, hlds__hlds_clauses__Clauses_3);
    }
#line 504 "hlds_clauses.m"
    {
#line 504 "hlds_clauses.m"
      MR_Word base;
#line 504 "hlds_clauses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 504 "hlds_clauses.m"
      *hlds__hlds_clauses__ClausesRep_4 = base;
#line 504 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__V_5_5));
#line 504 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__V_6_6));
#line 504 "hlds_clauses.m"
    }
#line 503 "hlds_clauses.m"
  }
#line 148 "hlds_clauses.m"
}

#line 144 "hlds_clauses.m"
MR_bool MR_CALL 
hlds__hlds_clauses__get_first_clause_2_p_0(
#line 144 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__ClausesRep_3,
#line 144 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__FirstClause_4)
#line 144 "hlds_clauses.m"
{
#line 499 "hlds_clauses.m"
  {
#line 499 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 499 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__ClausesCord_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 1)));
#line 500 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses___NumClauses_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 0)));
#line 501 "hlds_clauses.m"
    MR_Box hlds__hlds_clauses__conv0_FirstClause_4;

#line 501 "hlds_clauses.m"
    {
#line 501 "hlds_clauses.m"
      hlds__hlds_clauses__succeeded = mercury__cord__get_first_2_p_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, hlds__hlds_clauses__ClausesCord_6, &hlds__hlds_clauses__conv0_FirstClause_4);
    }
#line 501 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 501 "hlds_clauses.m"
      {
#line 501 "hlds_clauses.m"
        *hlds__hlds_clauses__FirstClause_4 = ((MR_Word) hlds__hlds_clauses__conv0_FirstClause_4);
#line 501 "hlds_clauses.m"
        hlds__hlds_clauses__succeeded = MR_TRUE;
#line 501 "hlds_clauses.m"
      }
#line 499 "hlds_clauses.m"
    return hlds__hlds_clauses__succeeded;
#line 499 "hlds_clauses.m"
  }
#line 144 "hlds_clauses.m"
}

#line 141 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(
#line 141 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__ClausesRep_3,
#line 141 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__Clauses_4)
#line 141 "hlds_clauses.m"
{
#line 495 "hlds_clauses.m"
  {
#line 495 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 495 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__ClausesCord_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 1)));
#line 496 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses___NumClauses_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 0)));

#line 497 "hlds_clauses.m"
    {
#line 497 "hlds_clauses.m"
      *hlds__hlds_clauses__Clauses_4 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, hlds__hlds_clauses__ClausesCord_6);
    }
#line 495 "hlds_clauses.m"
  }
#line 141 "hlds_clauses.m"
}

#line 139 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(
#line 139 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__ClausesRep_3,
#line 139 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__Clauses_4)
#line 139 "hlds_clauses.m"
{
#line 491 "hlds_clauses.m"
  {
#line 491 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 491 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__ClausesCord_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 1)));
#line 492 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses___NumClauses_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 0)));

#line 493 "hlds_clauses.m"
    {
#line 493 "hlds_clauses.m"
      *hlds__hlds_clauses__Clauses_4 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, hlds__hlds_clauses__ClausesCord_6);
    }
#line 491 "hlds_clauses.m"
  }
#line 139 "hlds_clauses.m"
}

#line 137 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__get_clause_list_3_p_0(
#line 137 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__Clauses_4,
#line 137 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__ClausesRep0_5,
#line 137 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__ClausesRep_6)
#line 137 "hlds_clauses.m"
{
#line 485 "hlds_clauses.m"
  {
#line 485 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 485 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__TypeCtorInfo_10_10 = (MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0;
#line 485 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__NumClauses_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep0_5, (MR_Integer) 0)));
#line 485 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__ClausesCord0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep0_5, (MR_Integer) 1)));
#line 485 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__ClausesCord_9;

#line 487 "hlds_clauses.m"
    {
#line 487 "hlds_clauses.m"
      *hlds__hlds_clauses__Clauses_4 = mercury__cord__list_1_f_0(hlds__hlds_clauses__TypeCtorInfo_10_10, hlds__hlds_clauses__ClausesCord0_8);
    }
#line 488 "hlds_clauses.m"
    {
#line 488 "hlds_clauses.m"
      hlds__hlds_clauses__ClausesCord_9 = mercury__cord__from_list_1_f_0(hlds__hlds_clauses__TypeCtorInfo_10_10, *hlds__hlds_clauses__Clauses_4);
    }
#line 489 "hlds_clauses.m"
    {
#line 489 "hlds_clauses.m"
      MR_Word base;
#line 489 "hlds_clauses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 489 "hlds_clauses.m"
      *hlds__hlds_clauses__ClausesRep_6 = base;
#line 489 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__NumClauses_7));
#line 489 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__ClausesCord_9));
#line 489 "hlds_clauses.m"
    }
#line 485 "hlds_clauses.m"
  }
#line 137 "hlds_clauses.m"
}

#line 96 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__add_clause_3_p_0(
#line 96 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__Clause_4,
#line 96 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_ClausesRep_0_10,
#line 96 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_ClausesRep_11)
#line 96 "hlds_clauses.m"
{
#line 512 "hlds_clauses.m"
  {
#line 512 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 512 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__NumClauses0_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_ClausesRep_0_10, (MR_Integer) 0)));
#line 512 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__ClausesCord0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_ClausesRep_0_10, (MR_Integer) 1)));
#line 512 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__NumClauses_8 = (hlds__hlds_clauses__NumClauses0_6 + (MR_Integer) 1);
#line 512 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__ClausesCord_9;

#line 515 "hlds_clauses.m"
    {
#line 515 "hlds_clauses.m"
      hlds__hlds_clauses__ClausesCord_9 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, hlds__hlds_clauses__ClausesCord0_7, ((MR_Box) (hlds__hlds_clauses__Clause_4)));
    }
#line 516 "hlds_clauses.m"
    {
#line 516 "hlds_clauses.m"
      MR_Word base;
#line 516 "hlds_clauses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 516 "hlds_clauses.m"
      *hlds__hlds_clauses__STATE_VARIABLE_ClausesRep_11 = base;
#line 516 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__NumClauses_8));
#line 516 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__ClausesCord_9));
#line 516 "hlds_clauses.m"
    }
#line 512 "hlds_clauses.m"
  }
#line 96 "hlds_clauses.m"
}

#line 92 "hlds_clauses.m"
MR_Integer MR_CALL 
hlds__hlds_clauses__num_clauses_in_clauses_rep_1_f_0(
#line 92 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__ClausesRep_3)
#line 92 "hlds_clauses.m"
{
#line 483 "hlds_clauses.m"
  {
#line 483 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 483 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__NumClauses_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 0)));
#line 483 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 1)));

#line 483 "hlds_clauses.m"
    return hlds__hlds_clauses__NumClauses_4;
#line 483 "hlds_clauses.m"
  }
#line 92 "hlds_clauses.m"
}

#line 88 "hlds_clauses.m"
MR_Word MR_CALL 
hlds__hlds_clauses__clause_list_is_empty_1_f_0(
#line 88 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__ClausesRep_3)
#line 88 "hlds_clauses.m"
{
#line 474 "hlds_clauses.m"
  {
#line 474 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 474 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__IsEmpty_4;
#line 474 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__ClausesCord_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 1)));
#line 475 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 0)));

#line 476 "hlds_clauses.m"
    {
#line 476 "hlds_clauses.m"
      hlds__hlds_clauses__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, hlds__hlds_clauses__ClausesCord_6);
    }
#line 478 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 477 "hlds_clauses.m"
      hlds__hlds_clauses__IsEmpty_4 = (MR_Integer) 1;
#line 478 "hlds_clauses.m"
    else
#line 479 "hlds_clauses.m"
      hlds__hlds_clauses__IsEmpty_4 = (MR_Integer) 0;
#line 474 "hlds_clauses.m"
    return hlds__hlds_clauses__IsEmpty_4;
#line 474 "hlds_clauses.m"
  }
#line 88 "hlds_clauses.m"
}

#line 83 "hlds_clauses.m"
MR_Word MR_CALL 
hlds__hlds_clauses__init_clauses_rep_0_f_0(void)
#line 83 "hlds_clauses.m"
{
#line 472 "hlds_clauses.m"
  {
#line 472 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 472 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__HeadVar__1_1;
#line 472 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_3_3;

#line 472 "hlds_clauses.m"
    {
#line 472 "hlds_clauses.m"
      hlds__hlds_clauses__V_3_3 = mercury__cord__init_0_f_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0);
    }
#line 472 "hlds_clauses.m"
    {
#line 472 "hlds_clauses.m"
      hlds__hlds_clauses__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 472 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, 0) = ((MR_Box) ((MR_Integer) 0));
#line 472 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, 1) = ((MR_Box) (hlds__hlds_clauses__V_3_3));
#line 472 "hlds_clauses.m"
    }
#line 472 "hlds_clauses.m"
    return hlds__hlds_clauses__HeadVar__1_1;
#line 472 "hlds_clauses.m"
  }
#line 83 "hlds_clauses.m"
}

#line 78 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_init_for_assertion_2_p_0(
#line 78 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVars_3,
#line 78 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__ClausesInfo_4)
#line 78 "hlds_clauses.m"
{
#line 429 "hlds_clauses.m"
  {
#line 429 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 429 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__TypeCtorInfo_7_24;
#line 429 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__VarSet_5;
#line 429 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__VarTypes_6;
#line 429 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__TVarNameMap_7;
#line 429 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__HeadVarVec_8;
#line 429 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__ClausesRep_9;
#line 429 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__RttiVarMaps_10;
#line 429 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_13_13;
#line 429 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__V_22_22;
#line 429 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_23_23;

#line 430 "hlds_clauses.m"
    {
#line 430 "hlds_clauses.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &hlds__hlds_clauses__VarSet_5);
    }
#line 431 "hlds_clauses.m"
    {
#line 431 "hlds_clauses.m"
      hlds__vartypes__init_vartypes_1_p_0(&hlds__hlds_clauses__VarTypes_6);
    }
#line 432 "hlds_clauses.m"
    {
#line 432 "hlds_clauses.m"
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__hlds_clauses_scalar_common_1[0], &hlds__hlds_clauses__TVarNameMap_7);
    }
#line 435 "hlds_clauses.m"
    {
#line 435 "hlds_clauses.m"
      hlds__hlds_clauses__HeadVarVec_8 = hlds__hlds_args__proc_arg_vector_init_2_f_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[1], (MR_Integer) 0, hlds__hlds_clauses__HeadVars_3);
    }
#line 436 "hlds_clauses.m"
    hlds__hlds_clauses__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5011 "hlds.hlds_clauses.c"
    hlds__hlds_clauses__TypeCtorInfo_7_24 = (MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0;
#line 504 "hlds_clauses.m"
    {
#line 504 "hlds_clauses.m"
      hlds__hlds_clauses__V_22_22 = mercury__list__length_1_f_0(hlds__hlds_clauses__TypeCtorInfo_7_24, hlds__hlds_clauses__V_13_13);
    }
#line 504 "hlds_clauses.m"
    {
#line 504 "hlds_clauses.m"
      hlds__hlds_clauses__V_23_23 = mercury__cord__from_list_1_f_0(hlds__hlds_clauses__TypeCtorInfo_7_24, hlds__hlds_clauses__V_13_13);
    }
#line 504 "hlds_clauses.m"
    {
#line 504 "hlds_clauses.m"
      hlds__hlds_clauses__ClausesRep_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 504 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_9, 0) = ((MR_Box) (hlds__hlds_clauses__V_22_22));
#line 504 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_9, 1) = ((MR_Box) (hlds__hlds_clauses__V_23_23));
#line 504 "hlds_clauses.m"
    }
#line 437 "hlds_clauses.m"
    {
#line 437 "hlds_clauses.m"
      hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&hlds__hlds_clauses__RttiVarMaps_10);
    }
#line 439 "hlds_clauses.m"
    {
#line 439 "hlds_clauses.m"
      MR_Word base;
#line 439 "hlds_clauses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 439 "hlds_clauses.m"
      *hlds__hlds_clauses__ClausesInfo_4 = base;
#line 439 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__VarSet_5));
#line 439 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__VarTypes_6));
#line 439 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_clauses__TVarNameMap_7));
#line 439 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_clauses__VarTypes_6));
#line 439 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_clauses__HeadVarVec_8));
#line 439 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_clauses__ClausesRep_9));
#line 439 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 439 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_clauses__RttiVarMaps_10));
#line 439 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Integer) 0));
#line 439 "hlds_clauses.m"
    }
#line 429 "hlds_clauses.m"
  }
#line 78 "hlds_clauses.m"
}

#line 75 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_init_4_p_0(
#line 75 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__PredOrFunc_5,
#line 75 "hlds_clauses.m"
  MR_Integer hlds__hlds_clauses__Arity_6,
#line 75 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__ItemNumbers_7,
#line 75 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__ClausesInfo_8)
#line 75 "hlds_clauses.m"
{
#line 417 "hlds_clauses.m"
  {
#line 417 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 417 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__TypeCtorInfo_23_23;
#line 417 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__TypeCtorInfo_7_29;
#line 417 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__VarTypes_9;
#line 417 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__TVarNameMap_10;
#line 417 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__VarSet0_11;
#line 417 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__HeadVars_12;
#line 417 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__VarSet_13;
#line 417 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__HeadVarVec_14;
#line 417 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__RttiVarMaps_15;
#line 417 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__ClausesRep_17;
#line 417 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_19_19;
#line 417 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__V_27_27;
#line 417 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_28_28;

#line 418 "hlds_clauses.m"
    {
#line 418 "hlds_clauses.m"
      hlds__vartypes__init_vartypes_1_p_0(&hlds__hlds_clauses__VarTypes_9);
    }
#line 419 "hlds_clauses.m"
    {
#line 419 "hlds_clauses.m"
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__hlds_clauses_scalar_common_1[0], &hlds__hlds_clauses__TVarNameMap_10);
    }
#line 5125 "hlds.hlds_clauses.c"
    hlds__hlds_clauses__TypeCtorInfo_23_23 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 420 "hlds_clauses.m"
    {
#line 420 "hlds_clauses.m"
      mercury__varset__init_1_p_0(hlds__hlds_clauses__TypeCtorInfo_23_23, &hlds__hlds_clauses__VarSet0_11);
    }
#line 421 "hlds_clauses.m"
    {
#line 421 "hlds_clauses.m"
      parse_tree__prog_util__make_n_fresh_vars_5_p_0(hlds__hlds_clauses__TypeCtorInfo_23_23, (MR_String) "HeadVar__", hlds__hlds_clauses__Arity_6, &hlds__hlds_clauses__HeadVars_12, hlds__hlds_clauses__VarSet0_11, &hlds__hlds_clauses__VarSet_13);
    }
#line 422 "hlds_clauses.m"
    {
#line 422 "hlds_clauses.m"
      hlds__hlds_clauses__HeadVarVec_14 = hlds__hlds_args__proc_arg_vector_init_2_f_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[1], hlds__hlds_clauses__PredOrFunc_5, hlds__hlds_clauses__HeadVars_12);
    }
#line 423 "hlds_clauses.m"
    {
#line 423 "hlds_clauses.m"
      hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&hlds__hlds_clauses__RttiVarMaps_15);
    }
#line 425 "hlds_clauses.m"
    hlds__hlds_clauses__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5149 "hlds.hlds_clauses.c"
    hlds__hlds_clauses__TypeCtorInfo_7_29 = (MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0;
#line 504 "hlds_clauses.m"
    {
#line 504 "hlds_clauses.m"
      hlds__hlds_clauses__V_27_27 = mercury__list__length_1_f_0(hlds__hlds_clauses__TypeCtorInfo_7_29, hlds__hlds_clauses__V_19_19);
    }
#line 504 "hlds_clauses.m"
    {
#line 504 "hlds_clauses.m"
      hlds__hlds_clauses__V_28_28 = mercury__cord__from_list_1_f_0(hlds__hlds_clauses__TypeCtorInfo_7_29, hlds__hlds_clauses__V_19_19);
    }
#line 504 "hlds_clauses.m"
    {
#line 504 "hlds_clauses.m"
      hlds__hlds_clauses__ClausesRep_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 504 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_17, 0) = ((MR_Box) (hlds__hlds_clauses__V_27_27));
#line 504 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_17, 1) = ((MR_Box) (hlds__hlds_clauses__V_28_28));
#line 504 "hlds_clauses.m"
    }
#line 426 "hlds_clauses.m"
    {
#line 426 "hlds_clauses.m"
      MR_Word base;
#line 426 "hlds_clauses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 426 "hlds_clauses.m"
      *hlds__hlds_clauses__ClausesInfo_8 = base;
#line 426 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__VarSet_13));
#line 426 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__VarTypes_9));
#line 426 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_clauses__TVarNameMap_10));
#line 426 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_clauses__VarTypes_9));
#line 426 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_clauses__HeadVarVec_14));
#line 426 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_clauses__ClausesRep_17));
#line 426 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_clauses__ItemNumbers_7));
#line 426 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_clauses__RttiVarMaps_15));
#line 426 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Integer) 0));
#line 426 "hlds_clauses.m"
    }
#line 417 "hlds_clauses.m"
  }
#line 75 "hlds_clauses.m"
}

void mercury__hlds__hlds_clauses__init(void)
{
}

void mercury__hlds__hlds_clauses__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0);
	MR_register_type_ctor_info(&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_applicable_modes_0);
	MR_register_type_ctor_info(&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0);
	MR_register_type_ctor_info(&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_type_0);
	MR_register_type_ctor_info(&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_types_0);
	MR_register_type_ctor_info(&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_numbers_0);
	MR_register_type_ctor_info(&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_info_0);
	MR_register_type_ctor_info(&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_rep_0);
}

void mercury__hlds__hlds_clauses__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.hlds_clauses. */
