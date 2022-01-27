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
#include "recompilation.mih"
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
#include "transform_hlds.mih"
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
#include "hlds.vartypes.mih"
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
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 139 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 142 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_0_0[5];

#line 145 "hlds.hlds_clauses.c"
static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clause_0_0[5];

#line 148 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_0_0;

#line 151 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_0_0[1];

#line 154 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_0[1];

#line 157 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_0[1];

#line 160 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_0[1];

#line 163 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_0;

#line 166 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1builtin__type_ctor_info_int_0;

#line 169 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_applicable_modes_0_1[1];

#line 172 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_1;

#line 175 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_applicable_modes_0_0[1];

#line 178 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_applicable_modes_0_1[1];

#line 181 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_applicable_modes_0[2];

#line 184 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_applicable_modes_0[2];

#line 187 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_applicable_modes_0[2];

#line 190 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_item_number_region_0_0[4];

#line 193 "hlds.hlds_clauses.c"
static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clause_item_number_region_0_0[4];

#line 196 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_number_region_0_0;

#line 199 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_number_region_0_0[1];

#line 202 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_item_number_region_0[1];

#line 205 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_item_number_region_0[1];

#line 208 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_region_0[1];

#line 211 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_0;

#line 214 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_1;

#line 217 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_value_ordered_clause_item_number_type_0[2];

#line 220 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_clause_item_number_type_0[2];

#line 223 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_type_0[2];

#line 226 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_0;

#line 229 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_1;

#line 232 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_value_ordered_clause_item_number_types_0[2];

#line 235 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_clause_item_number_types_0[2];

#line 238 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_types_0[2];

#line 241 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0;

#line 244 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_item_numbers_0_0[2];

#line 247 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_0;

#line 250 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_1;

#line 253 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_numbers_0_0[1];

#line 256 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_numbers_0_1[1];

#line 259 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_item_numbers_0[2];

#line 262 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_item_numbers_0[2];

#line 265 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_numbers_0[2];

#line 268 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 271 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 274 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_clauses__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 277 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 280 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_clauses__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 283 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__hlds__hlds_args__ti_proc_arg_vector_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 286 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clauses_info_0_0[9];

#line 289 "hlds.hlds_clauses.c"
static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clauses_info_0_0[9];

#line 292 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_info_0_0;

#line 295 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_info_0_0[1];

#line 298 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clauses_info_0[1];

#line 301 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clauses_info_0[1];

#line 304 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clauses_info_0[1];

#line 307 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__cord__ti_cord_1hlds__hlds_clauses__type_ctor_info_clause_0;

#line 310 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clauses_rep_0_0[2];

#line 313 "hlds.hlds_clauses.c"
static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clauses_rep_0_0[2];

#line 316 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_rep_0_0;

#line 319 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_rep_0_0[1];

#line 322 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clauses_rep_0[1];

#line 325 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clauses_rep_0[1];

#line 328 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clauses_rep_0[1];

#line 331 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_0_0_10001(
#line 334 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 336 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

#line 339 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_0_0_10001(
#line 342 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 344 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 346 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

#line 349 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_applicable_modes_0_0_10001(
#line 352 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 354 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

#line 357 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_applicable_modes_0_0_10001(
#line 360 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 362 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 364 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

#line 367 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_region_0_0_10001(
#line 370 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 372 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

#line 375 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_region_0_0_10001(
#line 378 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 380 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 382 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

#line 385 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_type_0_0_10001(
#line 388 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 390 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

#line 393 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_type_0_0_10001(
#line 396 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 398 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 400 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

#line 403 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_types_0_0_10001(
#line 406 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 408 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

#line 411 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_types_0_0_10001(
#line 414 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 416 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 418 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

#line 421 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_numbers_0_0_10001(
#line 424 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 426 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

#line 429 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_numbers_0_0_10001(
#line 432 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 434 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 436 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

#line 439 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clauses_info_0_0_10001(
#line 442 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 444 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

#line 447 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clauses_info_0_0_10001(
#line 450 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 452 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 454 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

#line 457 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clauses_rep_0_0_10001(
#line 460 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 462 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

#line 465 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clauses_rep_0_0_10001(
#line 468 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 470 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 472 "hlds.hlds_clauses.c"
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



#line 567 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 575 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_0_0[5] = {
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_applicable_modes_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_implementation_language_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 584 "hlds.hlds_clauses.c"
static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clause_0_0[5] = {
  (MR_String) "clause_applicable_procs",
  (MR_String) "clause_body",
  (MR_String) "clause_lang",
  (MR_String) "clause_context",
  (MR_String) "clause_statevar_warnings"
};

#line 593 "hlds.hlds_clauses.c"
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

#line 608 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_0_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_0_0
};

#line 613 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_0_0
  }
};

#line 622 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_0_0
};

#line 627 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_0[1] = {
  (MR_Integer) 0
};

#line 632 "hlds.hlds_clauses.c"
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

#line 649 "hlds.hlds_clauses.c"
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

#line 664 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 672 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_applicable_modes_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 677 "hlds.hlds_clauses.c"
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

#line 692 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_applicable_modes_0_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_0
};

#line 697 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_applicable_modes_0_1[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_1
};

#line 702 "hlds.hlds_clauses.c"
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

#line 716 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_applicable_modes_0[2] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_0,
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_1
};

#line 722 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_applicable_modes_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 728 "hlds.hlds_clauses.c"
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

#line 745 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_item_number_region_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 753 "hlds.hlds_clauses.c"
static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clause_item_number_region_0_0[4] = {
  (MR_String) "cnr_lower_item_number",
  (MR_String) "cnr_upper_item_number",
  (MR_String) "cnr_lower_item_context",
  (MR_String) "cnr_upper_item_context"
};

#line 761 "hlds.hlds_clauses.c"
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

#line 776 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_number_region_0_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_number_region_0_0
};

#line 781 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_item_number_region_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_number_region_0_0
  }
};

#line 790 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_item_number_region_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_number_region_0_0
};

#line 795 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_region_0[1] = {
  (MR_Integer) 0
};

#line 800 "hlds.hlds_clauses.c"
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

#line 817 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_0 = {
  (MR_String) "item_is_clause",
  (MR_Integer) 0
};

#line 823 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_1 = {
  (MR_String) "item_is_foreign_proc",
  (MR_Integer) 1
};

#line 829 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_value_ordered_clause_item_number_type_0[2] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_0,
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_1
};

#line 835 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_clause_item_number_type_0[2] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_0,
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_1
};

#line 841 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 847 "hlds.hlds_clauses.c"
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

#line 864 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_0 = {
  (MR_String) "only_clauses",
  (MR_Integer) 0
};

#line 870 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_1 = {
  (MR_String) "clauses_and_foreign_procs",
  (MR_Integer) 1
};

#line 876 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_value_ordered_clause_item_number_types_0[2] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_0,
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_1
};

#line 882 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_clause_item_number_types_0[2] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_1,
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_0
};

#line 888 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_types_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 894 "hlds.hlds_clauses.c"
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

#line 911 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0
  }
};

#line 919 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_item_numbers_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__list__ti_list_1hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0,
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__list__ti_list_1hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0
};

#line 925 "hlds.hlds_clauses.c"
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

#line 940 "hlds.hlds_clauses.c"
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

#line 955 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_numbers_0_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_1
};

#line 960 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_numbers_0_1[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_0
};

#line 965 "hlds.hlds_clauses.c"
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

#line 979 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_item_numbers_0[2] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_1,
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_0
};

#line 985 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_numbers_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 991 "hlds.hlds_clauses.c"
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

#line 1008 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1016 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1024 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_clauses__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1033 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1041 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_clauses__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1050 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__hlds__hlds_args__ti_proc_arg_vector_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &hlds__hlds_args__hlds__hlds_args__type_ctor_info_proc_arg_vector_1,
  {
    (MR_TypeInfo) &hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1058 "hlds.hlds_clauses.c"
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

#line 1071 "hlds.hlds_clauses.c"
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

#line 1084 "hlds.hlds_clauses.c"
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

#line 1099 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_info_0_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_info_0_0
};

#line 1104 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clauses_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_info_0_0
  }
};

#line 1113 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clauses_info_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_info_0_0
};

#line 1118 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clauses_info_0[1] = {
  (MR_Integer) 0
};

#line 1123 "hlds.hlds_clauses.c"
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

#line 1140 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__cord__ti_cord_1hlds__hlds_clauses__type_ctor_info_clause_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0
  }
};

#line 1148 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clauses_rep_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__cord__ti_cord_1hlds__hlds_clauses__type_ctor_info_clause_0
};

#line 1154 "hlds.hlds_clauses.c"
static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clauses_rep_0_0[2] = {
  (MR_String) "cr_num_clauses",
  (MR_String) "cr_clauses_cord"
};

#line 1160 "hlds.hlds_clauses.c"
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

#line 1175 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_rep_0_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_rep_0_0
};

#line 1180 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clauses_rep_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_rep_0_0
  }
};

#line 1189 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clauses_rep_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_rep_0_0
};

#line 1194 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clauses_rep_0[1] = {
  (MR_Integer) 0
};

#line 1199 "hlds.hlds_clauses.c"
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

#line 1216 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_0_0_10001(
#line 1219 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 1221 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
#line 1223 "hlds.hlds_clauses.c"
{
#line 1225 "hlds.hlds_clauses.c"
  {
#line 1227 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded;

#line 1230 "hlds.hlds_clauses.c"
    {
#line 1232 "hlds.hlds_clauses.c"
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
#line 1235 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 1237 "hlds.hlds_clauses.c"
  }
#line 1239 "hlds.hlds_clauses.c"
}

#line 1242 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_0_0_10001(
#line 1245 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 1247 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 1249 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
#line 1251 "hlds.hlds_clauses.c"
{
#line 1253 "hlds.hlds_clauses.c"
  {
#line 1255 "hlds.hlds_clauses.c"
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

#line 1258 "hlds.hlds_clauses.c"
    {
#line 1260 "hlds.hlds_clauses.c"
      hlds__hlds_clauses____Compare____clause_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
#line 1263 "hlds.hlds_clauses.c"
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
#line 1265 "hlds.hlds_clauses.c"
  }
#line 1267 "hlds.hlds_clauses.c"
}

#line 1270 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_applicable_modes_0_0_10001(
#line 1273 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 1275 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
#line 1277 "hlds.hlds_clauses.c"
{
#line 1279 "hlds.hlds_clauses.c"
  {
#line 1281 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded;

#line 1284 "hlds.hlds_clauses.c"
    {
#line 1286 "hlds.hlds_clauses.c"
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_applicable_modes_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
#line 1289 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 1291 "hlds.hlds_clauses.c"
  }
#line 1293 "hlds.hlds_clauses.c"
}

#line 1296 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_applicable_modes_0_0_10001(
#line 1299 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 1301 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 1303 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
#line 1305 "hlds.hlds_clauses.c"
{
#line 1307 "hlds.hlds_clauses.c"
  {
#line 1309 "hlds.hlds_clauses.c"
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

#line 1312 "hlds.hlds_clauses.c"
    {
#line 1314 "hlds.hlds_clauses.c"
      hlds__hlds_clauses____Compare____clause_applicable_modes_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
#line 1317 "hlds.hlds_clauses.c"
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
#line 1319 "hlds.hlds_clauses.c"
  }
#line 1321 "hlds.hlds_clauses.c"
}

#line 1324 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_region_0_0_10001(
#line 1327 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 1329 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
#line 1331 "hlds.hlds_clauses.c"
{
#line 1333 "hlds.hlds_clauses.c"
  {
#line 1335 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded;

#line 1338 "hlds.hlds_clauses.c"
    {
#line 1340 "hlds.hlds_clauses.c"
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_item_number_region_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
#line 1343 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 1345 "hlds.hlds_clauses.c"
  }
#line 1347 "hlds.hlds_clauses.c"
}

#line 1350 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_region_0_0_10001(
#line 1353 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 1355 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 1357 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
#line 1359 "hlds.hlds_clauses.c"
{
#line 1361 "hlds.hlds_clauses.c"
  {
#line 1363 "hlds.hlds_clauses.c"
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

#line 1366 "hlds.hlds_clauses.c"
    {
#line 1368 "hlds.hlds_clauses.c"
      hlds__hlds_clauses____Compare____clause_item_number_region_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
#line 1371 "hlds.hlds_clauses.c"
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
#line 1373 "hlds.hlds_clauses.c"
  }
#line 1375 "hlds.hlds_clauses.c"
}

#line 1378 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_type_0_0_10001(
#line 1381 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 1383 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
#line 1385 "hlds.hlds_clauses.c"
{
#line 1387 "hlds.hlds_clauses.c"
  {
#line 1389 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded;

#line 1392 "hlds.hlds_clauses.c"
    {
#line 1394 "hlds.hlds_clauses.c"
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_item_number_type_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
#line 1397 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 1399 "hlds.hlds_clauses.c"
  }
#line 1401 "hlds.hlds_clauses.c"
}

#line 1404 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_type_0_0_10001(
#line 1407 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 1409 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 1411 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
#line 1413 "hlds.hlds_clauses.c"
{
#line 1415 "hlds.hlds_clauses.c"
  {
#line 1417 "hlds.hlds_clauses.c"
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

#line 1420 "hlds.hlds_clauses.c"
    {
#line 1422 "hlds.hlds_clauses.c"
      hlds__hlds_clauses____Compare____clause_item_number_type_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
#line 1425 "hlds.hlds_clauses.c"
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
#line 1427 "hlds.hlds_clauses.c"
  }
#line 1429 "hlds.hlds_clauses.c"
}

#line 1432 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_types_0_0_10001(
#line 1435 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 1437 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
#line 1439 "hlds.hlds_clauses.c"
{
#line 1441 "hlds.hlds_clauses.c"
  {
#line 1443 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded;

#line 1446 "hlds.hlds_clauses.c"
    {
#line 1448 "hlds.hlds_clauses.c"
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_item_number_types_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
#line 1451 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 1453 "hlds.hlds_clauses.c"
  }
#line 1455 "hlds.hlds_clauses.c"
}

#line 1458 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_types_0_0_10001(
#line 1461 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 1463 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 1465 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
#line 1467 "hlds.hlds_clauses.c"
{
#line 1469 "hlds.hlds_clauses.c"
  {
#line 1471 "hlds.hlds_clauses.c"
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

#line 1474 "hlds.hlds_clauses.c"
    {
#line 1476 "hlds.hlds_clauses.c"
      hlds__hlds_clauses____Compare____clause_item_number_types_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
#line 1479 "hlds.hlds_clauses.c"
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
#line 1481 "hlds.hlds_clauses.c"
  }
#line 1483 "hlds.hlds_clauses.c"
}

#line 1486 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_numbers_0_0_10001(
#line 1489 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 1491 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
#line 1493 "hlds.hlds_clauses.c"
{
#line 1495 "hlds.hlds_clauses.c"
  {
#line 1497 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded;

#line 1500 "hlds.hlds_clauses.c"
    {
#line 1502 "hlds.hlds_clauses.c"
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_item_numbers_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
#line 1505 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 1507 "hlds.hlds_clauses.c"
  }
#line 1509 "hlds.hlds_clauses.c"
}

#line 1512 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_numbers_0_0_10001(
#line 1515 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 1517 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 1519 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
#line 1521 "hlds.hlds_clauses.c"
{
#line 1523 "hlds.hlds_clauses.c"
  {
#line 1525 "hlds.hlds_clauses.c"
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

#line 1528 "hlds.hlds_clauses.c"
    {
#line 1530 "hlds.hlds_clauses.c"
      hlds__hlds_clauses____Compare____clause_item_numbers_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
#line 1533 "hlds.hlds_clauses.c"
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
#line 1535 "hlds.hlds_clauses.c"
  }
#line 1537 "hlds.hlds_clauses.c"
}

#line 1540 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clauses_info_0_0_10001(
#line 1543 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 1545 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
#line 1547 "hlds.hlds_clauses.c"
{
#line 1549 "hlds.hlds_clauses.c"
  {
#line 1551 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded;

#line 1554 "hlds.hlds_clauses.c"
    {
#line 1556 "hlds.hlds_clauses.c"
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clauses_info_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
#line 1559 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 1561 "hlds.hlds_clauses.c"
  }
#line 1563 "hlds.hlds_clauses.c"
}

#line 1566 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clauses_info_0_0_10001(
#line 1569 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 1571 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 1573 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
#line 1575 "hlds.hlds_clauses.c"
{
#line 1577 "hlds.hlds_clauses.c"
  {
#line 1579 "hlds.hlds_clauses.c"
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

#line 1582 "hlds.hlds_clauses.c"
    {
#line 1584 "hlds.hlds_clauses.c"
      hlds__hlds_clauses____Compare____clauses_info_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
#line 1587 "hlds.hlds_clauses.c"
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
#line 1589 "hlds.hlds_clauses.c"
  }
#line 1591 "hlds.hlds_clauses.c"
}

#line 1594 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clauses_rep_0_0_10001(
#line 1597 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 1599 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
#line 1601 "hlds.hlds_clauses.c"
{
#line 1603 "hlds.hlds_clauses.c"
  {
#line 1605 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded;

#line 1608 "hlds.hlds_clauses.c"
    {
#line 1610 "hlds.hlds_clauses.c"
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clauses_rep_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
#line 1613 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 1615 "hlds.hlds_clauses.c"
  }
#line 1617 "hlds.hlds_clauses.c"
}

#line 1620 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clauses_rep_0_0_10001(
#line 1623 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 1625 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 1627 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
#line 1629 "hlds.hlds_clauses.c"
{
#line 1631 "hlds.hlds_clauses.c"
  {
#line 1633 "hlds.hlds_clauses.c"
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

#line 1636 "hlds.hlds_clauses.c"
    {
#line 1638 "hlds.hlds_clauses.c"
      hlds__hlds_clauses____Compare____clauses_rep_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
#line 1641 "hlds.hlds_clauses.c"
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
#line 1643 "hlds.hlds_clauses.c"
  }
#line 1645 "hlds.hlds_clauses.c"
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
#line 1672 "hlds.hlds_clauses.c"
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
#line 1694 "hlds.hlds_clauses.c"
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
#line 466 "hlds_clauses.m"
              return;
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

#line 1761 "hlds.hlds_clauses.c"
        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_3_3 == hlds__hlds_clauses__V_5_5);
#line 466 "hlds_clauses.m"
        if (hlds__hlds_clauses__succeeded)
#line 466 "hlds_clauses.m"
          {
#line 1767 "hlds.hlds_clauses.c"
            hlds__hlds_clauses__TypeInfo_9_9 = (MR_Word) &hlds__hlds_clauses_scalar_common_1[7];
#line 1769 "hlds.hlds_clauses.c"
            {
#line 1771 "hlds.hlds_clauses.c"
              return hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_9_9, ((MR_Box) (hlds__hlds_clauses__V_4_4)), ((MR_Box) (hlds__hlds_clauses__V_6_6)));
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
#line 1809 "hlds.hlds_clauses.c"
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
#line 1859 "hlds.hlds_clauses.c"
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
#line 1879 "hlds.hlds_clauses.c"
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
#line 1899 "hlds.hlds_clauses.c"
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
#line 1919 "hlds.hlds_clauses.c"
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
#line 1939 "hlds.hlds_clauses.c"
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
#line 1959 "hlds.hlds_clauses.c"
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
#line 1979 "hlds.hlds_clauses.c"
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
#line 1999 "hlds.hlds_clauses.c"
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
#line 43 "hlds_clauses.m"
                                          return;
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

#line 2119 "hlds.hlds_clauses.c"
        {
#line 2121 "hlds.hlds_clauses.c"
          hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[5], ((MR_Box) (hlds__hlds_clauses__V_3_3)), ((MR_Box) (hlds__hlds_clauses__V_12_12)));
        }
#line 43 "hlds_clauses.m"
        if (hlds__hlds_clauses__succeeded)
#line 43 "hlds_clauses.m"
          {
#line 2128 "hlds.hlds_clauses.c"
            hlds__hlds_clauses__TypeInfo_24_24 = (MR_Word) &hlds__hlds_clauses_scalar_common_2[0];
#line 2130 "hlds.hlds_clauses.c"
            {
#line 2132 "hlds.hlds_clauses.c"
              hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_24_24, ((MR_Box) (hlds__hlds_clauses__V_4_4)), ((MR_Box) (hlds__hlds_clauses__V_13_13)));
            }
#line 43 "hlds_clauses.m"
            if (hlds__hlds_clauses__succeeded)
#line 43 "hlds_clauses.m"
              {
#line 2139 "hlds.hlds_clauses.c"
                hlds__hlds_clauses__TypeInfo_25_25 = (MR_Word) &hlds__hlds_clauses_scalar_common_2[1];
#line 2141 "hlds.hlds_clauses.c"
                {
#line 2143 "hlds.hlds_clauses.c"
                  hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_25_25, ((MR_Box) (hlds__hlds_clauses__V_5_5)), ((MR_Box) (hlds__hlds_clauses__V_14_14)));
                }
#line 43 "hlds_clauses.m"
                if (hlds__hlds_clauses__succeeded)
#line 43 "hlds_clauses.m"
                  {
#line 2150 "hlds.hlds_clauses.c"
                    hlds__hlds_clauses__TypeInfo_26_26 = (MR_Word) &hlds__hlds_clauses_scalar_common_2[0];
#line 2152 "hlds.hlds_clauses.c"
                    {
#line 2154 "hlds.hlds_clauses.c"
                      hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_26_26, ((MR_Box) (hlds__hlds_clauses__V_6_6)), ((MR_Box) (hlds__hlds_clauses__V_15_15)));
                    }
#line 43 "hlds_clauses.m"
                    if (hlds__hlds_clauses__succeeded)
#line 43 "hlds_clauses.m"
                      {
#line 2161 "hlds.hlds_clauses.c"
                        hlds__hlds_clauses__TypeInfo_27_27 = (MR_Word) &hlds__hlds_clauses_scalar_common_1[6];
#line 2163 "hlds.hlds_clauses.c"
                        {
#line 2165 "hlds.hlds_clauses.c"
                          hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_27_27, ((MR_Box) (hlds__hlds_clauses__V_7_7)), ((MR_Box) (hlds__hlds_clauses__V_16_16)));
                        }
#line 43 "hlds_clauses.m"
                        if (hlds__hlds_clauses__succeeded)
#line 43 "hlds_clauses.m"
                          {
#line 2172 "hlds.hlds_clauses.c"
                            {
#line 2174 "hlds.hlds_clauses.c"
                              hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clauses_rep_0_0(hlds__hlds_clauses__V_8_8, hlds__hlds_clauses__V_17_17);
                            }
#line 43 "hlds_clauses.m"
                            if (hlds__hlds_clauses__succeeded)
#line 43 "hlds_clauses.m"
                              {
#line 2181 "hlds.hlds_clauses.c"
                                {
#line 2183 "hlds.hlds_clauses.c"
                                  hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_item_numbers_0_0(hlds__hlds_clauses__V_9_9, hlds__hlds_clauses__V_18_18);
                                }
#line 43 "hlds_clauses.m"
                                if (hlds__hlds_clauses__succeeded)
#line 43 "hlds_clauses.m"
                                  {
#line 2190 "hlds.hlds_clauses.c"
                                    {
#line 2192 "hlds.hlds_clauses.c"
                                      hlds__hlds_clauses__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(hlds__hlds_clauses__V_10_10, hlds__hlds_clauses__V_19_19);
                                    }
#line 43 "hlds_clauses.m"
                                    if (hlds__hlds_clauses__succeeded)
#line 2197 "hlds.hlds_clauses.c"
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
#line 2246 "hlds.hlds_clauses.c"
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
#line 2258 "hlds.hlds_clauses.c"
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
#line 2271 "hlds.hlds_clauses.c"
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
#line 2289 "hlds.hlds_clauses.c"
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
#line 292 "hlds_clauses.m"
                  return;
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
#line 2385 "hlds.hlds_clauses.c"
            hlds__hlds_clauses__TypeInfo_11_11 = (MR_Word) &hlds__hlds_clauses_scalar_common_1[4];
#line 2387 "hlds.hlds_clauses.c"
            {
#line 2389 "hlds.hlds_clauses.c"
              hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_11_11, ((MR_Box) (hlds__hlds_clauses__V_3_3)), ((MR_Box) (hlds__hlds_clauses__V_5_5)));
            }
#line 292 "hlds_clauses.m"
            if (hlds__hlds_clauses__succeeded)
#line 292 "hlds_clauses.m"
              {
#line 2396 "hlds.hlds_clauses.c"
                hlds__hlds_clauses__TypeInfo_12_12 = (MR_Word) &hlds__hlds_clauses_scalar_common_1[4];
#line 2398 "hlds.hlds_clauses.c"
                {
#line 2400 "hlds.hlds_clauses.c"
                  return hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_12_12, ((MR_Box) (hlds__hlds_clauses__V_4_4)), ((MR_Box) (hlds__hlds_clauses__V_6_6)));
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
#line 259 "hlds_clauses.m"
      return;
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
#line 2457 "hlds.hlds_clauses.c"
  {
#line 2459 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__HeadVar__2_1 == hlds__hlds_clauses__HeadVar__2_2);

#line 2462 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 2464 "hlds.hlds_clauses.c"
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
#line 268 "hlds_clauses.m"
      return;
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
#line 2510 "hlds.hlds_clauses.c"
  {
#line 2512 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__HeadVar__2_1 == hlds__hlds_clauses__HeadVar__2_2);

#line 2515 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 2517 "hlds.hlds_clauses.c"
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
#line 2546 "hlds.hlds_clauses.c"
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
#line 2576 "hlds.hlds_clauses.c"
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
#line 2596 "hlds.hlds_clauses.c"
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
#line 2616 "hlds.hlds_clauses.c"
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
#line 251 "hlds_clauses.m"
                    return;
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

#line 2689 "hlds.hlds_clauses.c"
        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_3_3 == hlds__hlds_clauses__V_7_7);
#line 251 "hlds_clauses.m"
        if (hlds__hlds_clauses__succeeded)
#line 251 "hlds_clauses.m"
          {
#line 2695 "hlds.hlds_clauses.c"
            hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_4_4 == hlds__hlds_clauses__V_8_8);
#line 251 "hlds_clauses.m"
            if (hlds__hlds_clauses__succeeded)
#line 251 "hlds_clauses.m"
              {
#line 2701 "hlds.hlds_clauses.c"
                {
#line 2703 "hlds.hlds_clauses.c"
                  hlds__hlds_clauses__succeeded = mercury__term____Unify____context_0_0(hlds__hlds_clauses__V_5_5, hlds__hlds_clauses__V_9_9);
                }
#line 251 "hlds_clauses.m"
                if (hlds__hlds_clauses__succeeded)
#line 2708 "hlds.hlds_clauses.c"
                  {
#line 2710 "hlds.hlds_clauses.c"
                    return hlds__hlds_clauses__succeeded = mercury__term____Unify____context_0_0(hlds__hlds_clauses__V_6_6, hlds__hlds_clauses__V_10_10);
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
#line 2750 "hlds.hlds_clauses.c"
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
#line 2762 "hlds.hlds_clauses.c"
        *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 1;
#line 221 "hlds_clauses.m"
    else
#line 221 "hlds_clauses.m"
      {
#line 221 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));

#line 221 "hlds_clauses.m"
        if ((hlds__hlds_clauses__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2773 "hlds.hlds_clauses.c"
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
#line 221 "hlds_clauses.m"
              return;
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
#line 2856 "hlds.hlds_clauses.c"
            hlds__hlds_clauses__TypeInfo_9_9 = (MR_Word) &hlds__hlds_clauses_scalar_common_1[3];
#line 2858 "hlds.hlds_clauses.c"
            {
#line 2860 "hlds.hlds_clauses.c"
              return hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_9_9, ((MR_Box) (hlds__hlds_clauses__V_5_5)), ((MR_Box) (hlds__hlds_clauses__V_6_6)));
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
#line 2898 "hlds.hlds_clauses.c"
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
#line 2932 "hlds.hlds_clauses.c"
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
#line 2952 "hlds.hlds_clauses.c"
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
#line 2972 "hlds.hlds_clauses.c"
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
#line 2992 "hlds.hlds_clauses.c"
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
#line 209 "hlds_clauses.m"
                          return;
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

#line 3077 "hlds.hlds_clauses.c"
        {
#line 3079 "hlds.hlds_clauses.c"
          hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_applicable_modes_0_0(hlds__hlds_clauses__V_3_3, hlds__hlds_clauses__V_8_8);
        }
#line 209 "hlds_clauses.m"
        if (hlds__hlds_clauses__succeeded)
#line 209 "hlds_clauses.m"
          {
#line 3086 "hlds.hlds_clauses.c"
            {
#line 3088 "hlds.hlds_clauses.c"
              hlds__hlds_clauses__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(hlds__hlds_clauses__V_4_4, hlds__hlds_clauses__V_9_9);
            }
#line 209 "hlds_clauses.m"
            if (hlds__hlds_clauses__succeeded)
#line 209 "hlds_clauses.m"
              {
#line 3095 "hlds.hlds_clauses.c"
                {
#line 3097 "hlds.hlds_clauses.c"
                  hlds__hlds_clauses__succeeded = hlds__hlds_pred____Unify____implementation_language_0_0(hlds__hlds_clauses__V_5_5, hlds__hlds_clauses__V_10_10);
                }
#line 209 "hlds_clauses.m"
                if (hlds__hlds_clauses__succeeded)
#line 209 "hlds_clauses.m"
                  {
#line 3104 "hlds.hlds_clauses.c"
                    {
#line 3106 "hlds.hlds_clauses.c"
                      hlds__hlds_clauses__succeeded = mercury__term____Unify____context_0_0(hlds__hlds_clauses__V_6_6, hlds__hlds_clauses__V_11_11);
                    }
#line 209 "hlds_clauses.m"
                    if (hlds__hlds_clauses__succeeded)
#line 209 "hlds_clauses.m"
                      {
#line 3113 "hlds.hlds_clauses.c"
                        hlds__hlds_clauses__TypeInfo_18_18 = (MR_Word) &hlds__hlds_clauses_scalar_common_1[2];
#line 3115 "hlds.hlds_clauses.c"
                        {
#line 3117 "hlds.hlds_clauses.c"
                          return hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_18_18, ((MR_Box) (hlds__hlds_clauses__V_7_7)), ((MR_Box) (hlds__hlds_clauses__V_12_12)));
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
#line 4232 "hlds.hlds_clauses.c"
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
#line 5026 "hlds.hlds_clauses.c"
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
#line 5140 "hlds.hlds_clauses.c"
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
#line 5164 "hlds.hlds_clauses.c"
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
