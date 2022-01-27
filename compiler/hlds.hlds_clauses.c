/*
** Automatically generated from `hlds_clauses.m'
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 131 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 134 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_0_0[5];

#line 137 "hlds.hlds_clauses.c"
static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clause_0_0[5];

#line 140 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_0_0;

#line 143 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_0_0[1];

#line 146 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_0[1];

#line 149 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_0[1];

#line 152 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_0[1];

#line 155 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_0;

#line 158 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1builtin__type_ctor_info_int_0;

#line 161 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_applicable_modes_0_1[1];

#line 164 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_1;

#line 167 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_applicable_modes_0_0[1];

#line 170 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_applicable_modes_0_1[1];

#line 173 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_applicable_modes_0[2];

#line 176 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_applicable_modes_0[2];

#line 179 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_applicable_modes_0[2];

#line 182 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_item_number_region_0_0[4];

#line 185 "hlds.hlds_clauses.c"
static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clause_item_number_region_0_0[4];

#line 188 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_number_region_0_0;

#line 191 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_number_region_0_0[1];

#line 194 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_item_number_region_0[1];

#line 197 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_item_number_region_0[1];

#line 200 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_region_0[1];

#line 203 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_0;

#line 206 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_1;

#line 209 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_value_ordered_clause_item_number_type_0[2];

#line 212 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_clause_item_number_type_0[2];

#line 215 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_type_0[2];

#line 218 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_0;

#line 221 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_1;

#line 224 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_value_ordered_clause_item_number_types_0[2];

#line 227 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_clause_item_number_types_0[2];

#line 230 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_types_0[2];

#line 233 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0;

#line 236 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_item_numbers_0_0[2];

#line 239 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_0;

#line 242 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_1;

#line 245 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_numbers_0_0[1];

#line 248 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_numbers_0_1[1];

#line 251 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_item_numbers_0[2];

#line 254 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_item_numbers_0[2];

#line 257 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_numbers_0[2];

#line 260 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 263 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 266 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_clauses__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 269 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 272 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_clauses__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 275 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__hlds__hlds_args__ti_proc_arg_vector_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 278 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clauses_info_0_0[9];

#line 281 "hlds.hlds_clauses.c"
static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clauses_info_0_0[9];

#line 284 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_info_0_0;

#line 287 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_info_0_0[1];

#line 290 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clauses_info_0[1];

#line 293 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clauses_info_0[1];

#line 296 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clauses_info_0[1];

#line 299 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1hlds__hlds_clauses__type_ctor_info_clause_0;

#line 302 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clauses_rep_0_0[2];

#line 305 "hlds.hlds_clauses.c"
static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clauses_rep_0_0[2];

#line 308 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_rep_0_0;

#line 311 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clauses_rep_0_1[2];

#line 314 "hlds.hlds_clauses.c"
static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clauses_rep_0_1[2];

#line 317 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_rep_0_1;

#line 320 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clauses_rep_0_2[3];

#line 323 "hlds.hlds_clauses.c"
static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clauses_rep_0_2[3];

#line 326 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_rep_0_2;

#line 329 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_rep_0_0[1];

#line 332 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_rep_0_1[1];

#line 335 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_rep_0_2[1];

#line 338 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clauses_rep_0[3];

#line 341 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clauses_rep_0[3];

#line 344 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clauses_rep_0[3];

#line 347 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_0_0_10001(
#line 350 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 352 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

#line 355 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_0_0_10001(
#line 358 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 360 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 362 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

#line 365 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_applicable_modes_0_0_10001(
#line 368 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 370 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

#line 373 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_applicable_modes_0_0_10001(
#line 376 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 378 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 380 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

#line 383 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_region_0_0_10001(
#line 386 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 388 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

#line 391 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_region_0_0_10001(
#line 394 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 396 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 398 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

#line 401 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_type_0_0_10001(
#line 404 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 406 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

#line 409 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_type_0_0_10001(
#line 412 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 414 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 416 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

#line 419 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_types_0_0_10001(
#line 422 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 424 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

#line 427 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_types_0_0_10001(
#line 430 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 432 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 434 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

#line 437 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_numbers_0_0_10001(
#line 440 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 442 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

#line 445 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_numbers_0_0_10001(
#line 448 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 450 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 452 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

#line 455 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clauses_info_0_0_10001(
#line 458 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 460 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

#line 463 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clauses_info_0_0_10001(
#line 466 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 468 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 470 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

#line 473 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clauses_rep_0_0_10001(
#line 476 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 478 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

#line 481 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clauses_rep_0_0_10001(
#line 484 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 486 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 488 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

#line 322 "hlds_clauses.m"
static void MR_CALL 
hlds__hlds_clauses__add_clause_item_number_regions_4_p_0(
#line 322 "hlds_clauses.m"
  MR_Integer hlds__hlds_clauses__ItemNum_5,
#line 322 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__Context_6,
#line 322 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_Regions_0_23,
#line 322 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_Regions_24);


static /* final */ const MR_Box hlds__hlds_clauses_scalar_common_1[10][2];

static /* final */ const MR_Box hlds__hlds_clauses_scalar_common_2[1][3];




static /* final */ const MR_Box hlds__hlds_clauses_scalar_common_1[10][2] = {
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
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0))
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
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__hlds_clauses_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_clauses_scalar_common_1[0]))
  },
};



#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 590 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 598 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_0_0[5] = {
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_applicable_modes_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_implementation_language_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 607 "hlds.hlds_clauses.c"
static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clause_0_0[5] = {
  (MR_String) "clause_applicable_procs",
  (MR_String) "clause_body",
  (MR_String) "clause_lang",
  (MR_String) "clause_context",
  (MR_String) "clause_statevar_warnings"
};

#line 616 "hlds.hlds_clauses.c"
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

#line 631 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_0_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_0_0
};

#line 636 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_0_0
  }
};

#line 645 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_0_0
};

#line 650 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_0[1] = {
  (MR_Integer) 0
};

#line 655 "hlds.hlds_clauses.c"
const MR_TypeCtorInfo_Struct hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_clauses____Unify____clause_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clause_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clause",
  {
    hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_0
  },
  {
    hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_0
};

#line 676 "hlds.hlds_clauses.c"
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

#line 691 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 699 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_applicable_modes_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 704 "hlds.hlds_clauses.c"
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

#line 719 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_applicable_modes_0_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_0
};

#line 724 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_applicable_modes_0_1[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_1
};

#line 729 "hlds.hlds_clauses.c"
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

#line 743 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_applicable_modes_0[2] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_0,
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_1
};

#line 749 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_applicable_modes_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 755 "hlds.hlds_clauses.c"
const MR_TypeCtorInfo_Struct hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_applicable_modes_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_clauses____Unify____clause_applicable_modes_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clause_applicable_modes_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clause_applicable_modes",
  {
    hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_applicable_modes_0
  },
  {
    hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_applicable_modes_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_applicable_modes_0
};

#line 776 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_item_number_region_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 784 "hlds.hlds_clauses.c"
static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clause_item_number_region_0_0[4] = {
  (MR_String) "cnr_lower_item_number",
  (MR_String) "cnr_upper_item_number",
  (MR_String) "cnr_lower_item_context",
  (MR_String) "cnr_upper_item_context"
};

#line 792 "hlds.hlds_clauses.c"
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

#line 807 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_number_region_0_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_number_region_0_0
};

#line 812 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_item_number_region_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_number_region_0_0
  }
};

#line 821 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_item_number_region_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_number_region_0_0
};

#line 826 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_region_0[1] = {
  (MR_Integer) 0
};

#line 831 "hlds.hlds_clauses.c"
const MR_TypeCtorInfo_Struct hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_clauses____Unify____clause_item_number_region_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clause_item_number_region_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clause_item_number_region",
  {
    hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_item_number_region_0
  },
  {
    hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_item_number_region_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_region_0
};

#line 852 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_0 = {
  (MR_String) "item_is_clause",
  (MR_Integer) 0
};

#line 858 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_1 = {
  (MR_String) "item_is_foreign_proc",
  (MR_Integer) 1
};

#line 864 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_value_ordered_clause_item_number_type_0[2] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_0,
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_1
};

#line 870 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_clause_item_number_type_0[2] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_0,
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_1
};

#line 876 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 882 "hlds.hlds_clauses.c"
const MR_TypeCtorInfo_Struct hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_clauses____Unify____clause_item_number_type_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clause_item_number_type_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clause_item_number_type",
  {
    hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_clause_item_number_type_0
  },
  {
    hlds__hlds_clauses__hlds__hlds_clauses__enum_value_ordered_clause_item_number_type_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_type_0
};

#line 903 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_0 = {
  (MR_String) "only_clauses",
  (MR_Integer) 0
};

#line 909 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_1 = {
  (MR_String) "clauses_and_foreign_procs",
  (MR_Integer) 1
};

#line 915 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_value_ordered_clause_item_number_types_0[2] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_0,
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_1
};

#line 921 "hlds.hlds_clauses.c"
static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_clause_item_number_types_0[2] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_1,
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_0
};

#line 927 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_types_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 933 "hlds.hlds_clauses.c"
const MR_TypeCtorInfo_Struct hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_types_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_clauses____Unify____clause_item_number_types_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clause_item_number_types_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clause_item_number_types",
  {
    hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_clause_item_number_types_0
  },
  {
    hlds__hlds_clauses__hlds__hlds_clauses__enum_value_ordered_clause_item_number_types_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_types_0
};

#line 954 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0
  }
};

#line 962 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_item_numbers_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__list__ti_list_1hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0,
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__list__ti_list_1hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0
};

#line 968 "hlds.hlds_clauses.c"
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

#line 983 "hlds.hlds_clauses.c"
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

#line 998 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_numbers_0_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_1
};

#line 1003 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_numbers_0_1[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_0
};

#line 1008 "hlds.hlds_clauses.c"
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

#line 1022 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_item_numbers_0[2] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_1,
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_0
};

#line 1028 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_numbers_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1034 "hlds.hlds_clauses.c"
const MR_TypeCtorInfo_Struct hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_numbers_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_clauses____Unify____clause_item_numbers_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clause_item_numbers_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clause_item_numbers",
  {
    hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_item_numbers_0
  },
  {
    hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_item_numbers_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_numbers_0
};

#line 1055 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1063 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1071 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_clauses__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1080 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1088 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_clauses__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1097 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__hlds__hlds_args__ti_proc_arg_vector_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &hlds__hlds_args__hlds__hlds_args__type_ctor_info_proc_arg_vector_1,
  {
    (MR_TypeInfo) &hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1105 "hlds.hlds_clauses.c"
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

#line 1118 "hlds.hlds_clauses.c"
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

#line 1131 "hlds.hlds_clauses.c"
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

#line 1146 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_info_0_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_info_0_0
};

#line 1151 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clauses_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_info_0_0
  }
};

#line 1160 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clauses_info_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_info_0_0
};

#line 1165 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clauses_info_0[1] = {
  (MR_Integer) 0
};

#line 1170 "hlds.hlds_clauses.c"
const MR_TypeCtorInfo_Struct hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_clauses____Unify____clauses_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clauses_info_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clauses_info",
  {
    hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clauses_info_0
  },
  {
    hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clauses_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clauses_info_0
};

#line 1191 "hlds.hlds_clauses.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1hlds__hlds_clauses__type_ctor_info_clause_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0
  }
};

#line 1199 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clauses_rep_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__list__ti_list_1hlds__hlds_clauses__type_ctor_info_clause_0
};

#line 1205 "hlds.hlds_clauses.c"
static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clauses_rep_0_0[2] = {
  (MR_String) "rev_num",
  (MR_String) "rev_list"
};

#line 1211 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_rep_0_0 = {
  (MR_String) "cr_rev",
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

#line 1226 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clauses_rep_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__list__ti_list_1hlds__hlds_clauses__type_ctor_info_clause_0
};

#line 1232 "hlds.hlds_clauses.c"
static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clauses_rep_0_1[2] = {
  (MR_String) "forw_num",
  (MR_String) "forw_list"
};

#line 1238 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_rep_0_1 = {
  (MR_String) "cr_forw",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__hlds_clauses__hlds__hlds_clauses__field_types_clauses_rep_0_1,
  hlds__hlds_clauses__hlds__hlds_clauses__field_names_clauses_rep_0_1,
  NULL,
  NULL
};

#line 1253 "hlds.hlds_clauses.c"
static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clauses_rep_0_2[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__list__ti_list_1hlds__hlds_clauses__type_ctor_info_clause_0,
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__list__ti_list_1hlds__hlds_clauses__type_ctor_info_clause_0
};

#line 1260 "hlds.hlds_clauses.c"
static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clauses_rep_0_2[3] = {
  (MR_String) "both_num",
  (MR_String) "both_rev",
  (MR_String) "both_forw"
};

#line 1267 "hlds.hlds_clauses.c"
static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_rep_0_2 = {
  (MR_String) "cr_both",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  hlds__hlds_clauses__hlds__hlds_clauses__field_types_clauses_rep_0_2,
  hlds__hlds_clauses__hlds__hlds_clauses__field_names_clauses_rep_0_2,
  NULL,
  NULL
};

#line 1282 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_rep_0_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_rep_0_0
};

#line 1287 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_rep_0_1[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_rep_0_1
};

#line 1292 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_rep_0_2[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_rep_0_2
};

#line 1297 "hlds.hlds_clauses.c"
static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clauses_rep_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_rep_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_rep_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_rep_0_2
  }
};

#line 1316 "hlds.hlds_clauses.c"
static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clauses_rep_0[3] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_rep_0_2,
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_rep_0_1,
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_rep_0_0
};

#line 1323 "hlds.hlds_clauses.c"
static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clauses_rep_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1330 "hlds.hlds_clauses.c"
const MR_TypeCtorInfo_Struct hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_rep_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_clauses____Unify____clauses_rep_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clauses_rep_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clauses_rep",
  {
    hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clauses_rep_0
  },
  {
    hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clauses_rep_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clauses_rep_0
};

#line 1351 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_0_0_10001(
#line 1354 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 1356 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
#line 1358 "hlds.hlds_clauses.c"
{
#line 1360 "hlds.hlds_clauses.c"
  {
#line 1362 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded;

#line 1365 "hlds.hlds_clauses.c"
    {
#line 1367 "hlds.hlds_clauses.c"
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
#line 1370 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 1372 "hlds.hlds_clauses.c"
  }
#line 1374 "hlds.hlds_clauses.c"
}

#line 1377 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_0_0_10001(
#line 1380 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 1382 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 1384 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
#line 1386 "hlds.hlds_clauses.c"
{
#line 1388 "hlds.hlds_clauses.c"
  {
#line 1390 "hlds.hlds_clauses.c"
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

#line 1393 "hlds.hlds_clauses.c"
    {
#line 1395 "hlds.hlds_clauses.c"
      hlds__hlds_clauses____Compare____clause_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
#line 1398 "hlds.hlds_clauses.c"
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
#line 1400 "hlds.hlds_clauses.c"
  }
#line 1402 "hlds.hlds_clauses.c"
}

#line 1405 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_applicable_modes_0_0_10001(
#line 1408 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 1410 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
#line 1412 "hlds.hlds_clauses.c"
{
#line 1414 "hlds.hlds_clauses.c"
  {
#line 1416 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded;

#line 1419 "hlds.hlds_clauses.c"
    {
#line 1421 "hlds.hlds_clauses.c"
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_applicable_modes_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
#line 1424 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 1426 "hlds.hlds_clauses.c"
  }
#line 1428 "hlds.hlds_clauses.c"
}

#line 1431 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_applicable_modes_0_0_10001(
#line 1434 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 1436 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 1438 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
#line 1440 "hlds.hlds_clauses.c"
{
#line 1442 "hlds.hlds_clauses.c"
  {
#line 1444 "hlds.hlds_clauses.c"
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

#line 1447 "hlds.hlds_clauses.c"
    {
#line 1449 "hlds.hlds_clauses.c"
      hlds__hlds_clauses____Compare____clause_applicable_modes_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
#line 1452 "hlds.hlds_clauses.c"
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
#line 1454 "hlds.hlds_clauses.c"
  }
#line 1456 "hlds.hlds_clauses.c"
}

#line 1459 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_region_0_0_10001(
#line 1462 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 1464 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
#line 1466 "hlds.hlds_clauses.c"
{
#line 1468 "hlds.hlds_clauses.c"
  {
#line 1470 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded;

#line 1473 "hlds.hlds_clauses.c"
    {
#line 1475 "hlds.hlds_clauses.c"
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_item_number_region_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
#line 1478 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 1480 "hlds.hlds_clauses.c"
  }
#line 1482 "hlds.hlds_clauses.c"
}

#line 1485 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_region_0_0_10001(
#line 1488 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 1490 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 1492 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
#line 1494 "hlds.hlds_clauses.c"
{
#line 1496 "hlds.hlds_clauses.c"
  {
#line 1498 "hlds.hlds_clauses.c"
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

#line 1501 "hlds.hlds_clauses.c"
    {
#line 1503 "hlds.hlds_clauses.c"
      hlds__hlds_clauses____Compare____clause_item_number_region_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
#line 1506 "hlds.hlds_clauses.c"
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
#line 1508 "hlds.hlds_clauses.c"
  }
#line 1510 "hlds.hlds_clauses.c"
}

#line 1513 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_type_0_0_10001(
#line 1516 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 1518 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
#line 1520 "hlds.hlds_clauses.c"
{
#line 1522 "hlds.hlds_clauses.c"
  {
#line 1524 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded;

#line 1527 "hlds.hlds_clauses.c"
    {
#line 1529 "hlds.hlds_clauses.c"
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_item_number_type_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
#line 1532 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 1534 "hlds.hlds_clauses.c"
  }
#line 1536 "hlds.hlds_clauses.c"
}

#line 1539 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_type_0_0_10001(
#line 1542 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 1544 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 1546 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
#line 1548 "hlds.hlds_clauses.c"
{
#line 1550 "hlds.hlds_clauses.c"
  {
#line 1552 "hlds.hlds_clauses.c"
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

#line 1555 "hlds.hlds_clauses.c"
    {
#line 1557 "hlds.hlds_clauses.c"
      hlds__hlds_clauses____Compare____clause_item_number_type_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
#line 1560 "hlds.hlds_clauses.c"
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
#line 1562 "hlds.hlds_clauses.c"
  }
#line 1564 "hlds.hlds_clauses.c"
}

#line 1567 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_types_0_0_10001(
#line 1570 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 1572 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
#line 1574 "hlds.hlds_clauses.c"
{
#line 1576 "hlds.hlds_clauses.c"
  {
#line 1578 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded;

#line 1581 "hlds.hlds_clauses.c"
    {
#line 1583 "hlds.hlds_clauses.c"
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_item_number_types_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
#line 1586 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 1588 "hlds.hlds_clauses.c"
  }
#line 1590 "hlds.hlds_clauses.c"
}

#line 1593 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_types_0_0_10001(
#line 1596 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 1598 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 1600 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
#line 1602 "hlds.hlds_clauses.c"
{
#line 1604 "hlds.hlds_clauses.c"
  {
#line 1606 "hlds.hlds_clauses.c"
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

#line 1609 "hlds.hlds_clauses.c"
    {
#line 1611 "hlds.hlds_clauses.c"
      hlds__hlds_clauses____Compare____clause_item_number_types_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
#line 1614 "hlds.hlds_clauses.c"
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
#line 1616 "hlds.hlds_clauses.c"
  }
#line 1618 "hlds.hlds_clauses.c"
}

#line 1621 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_numbers_0_0_10001(
#line 1624 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 1626 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
#line 1628 "hlds.hlds_clauses.c"
{
#line 1630 "hlds.hlds_clauses.c"
  {
#line 1632 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded;

#line 1635 "hlds.hlds_clauses.c"
    {
#line 1637 "hlds.hlds_clauses.c"
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_item_numbers_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
#line 1640 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 1642 "hlds.hlds_clauses.c"
  }
#line 1644 "hlds.hlds_clauses.c"
}

#line 1647 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_numbers_0_0_10001(
#line 1650 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 1652 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 1654 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
#line 1656 "hlds.hlds_clauses.c"
{
#line 1658 "hlds.hlds_clauses.c"
  {
#line 1660 "hlds.hlds_clauses.c"
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

#line 1663 "hlds.hlds_clauses.c"
    {
#line 1665 "hlds.hlds_clauses.c"
      hlds__hlds_clauses____Compare____clause_item_numbers_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
#line 1668 "hlds.hlds_clauses.c"
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
#line 1670 "hlds.hlds_clauses.c"
  }
#line 1672 "hlds.hlds_clauses.c"
}

#line 1675 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clauses_info_0_0_10001(
#line 1678 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 1680 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
#line 1682 "hlds.hlds_clauses.c"
{
#line 1684 "hlds.hlds_clauses.c"
  {
#line 1686 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded;

#line 1689 "hlds.hlds_clauses.c"
    {
#line 1691 "hlds.hlds_clauses.c"
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clauses_info_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
#line 1694 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 1696 "hlds.hlds_clauses.c"
  }
#line 1698 "hlds.hlds_clauses.c"
}

#line 1701 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clauses_info_0_0_10001(
#line 1704 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 1706 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 1708 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
#line 1710 "hlds.hlds_clauses.c"
{
#line 1712 "hlds.hlds_clauses.c"
  {
#line 1714 "hlds.hlds_clauses.c"
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

#line 1717 "hlds.hlds_clauses.c"
    {
#line 1719 "hlds.hlds_clauses.c"
      hlds__hlds_clauses____Compare____clauses_info_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
#line 1722 "hlds.hlds_clauses.c"
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
#line 1724 "hlds.hlds_clauses.c"
  }
#line 1726 "hlds.hlds_clauses.c"
}

#line 1729 "hlds.hlds_clauses.c"
static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clauses_rep_0_0_10001(
#line 1732 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
#line 1734 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
#line 1736 "hlds.hlds_clauses.c"
{
#line 1738 "hlds.hlds_clauses.c"
  {
#line 1740 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded;

#line 1743 "hlds.hlds_clauses.c"
    {
#line 1745 "hlds.hlds_clauses.c"
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clauses_rep_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
#line 1748 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 1750 "hlds.hlds_clauses.c"
  }
#line 1752 "hlds.hlds_clauses.c"
}

#line 1755 "hlds.hlds_clauses.c"
static void MR_CALL 
hlds__hlds_clauses____Compare____clauses_rep_0_0_10001(
#line 1758 "hlds.hlds_clauses.c"
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
#line 1760 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
#line 1762 "hlds.hlds_clauses.c"
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
#line 1764 "hlds.hlds_clauses.c"
{
#line 1766 "hlds.hlds_clauses.c"
  {
#line 1768 "hlds.hlds_clauses.c"
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

#line 1771 "hlds.hlds_clauses.c"
    {
#line 1773 "hlds.hlds_clauses.c"
      hlds__hlds_clauses____Compare____clauses_rep_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
#line 1776 "hlds.hlds_clauses.c"
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
#line 1778 "hlds.hlds_clauses.c"
  }
#line 1780 "hlds.hlds_clauses.c"
}

#line 434 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses____Compare____clauses_rep_0_0(
#line 434 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__1_1,
#line 434 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2,
#line 434 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__3_3)
#line 434 "hlds_clauses.m"
{
#line 434 "hlds_clauses.m"
  {
#line 434 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 434 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastX_50 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;
#line 434 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastY_51 = (MR_Integer) hlds__hlds_clauses__HeadVar__3_3;

#line 434 "hlds_clauses.m"
    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_50 == hlds__hlds_clauses__CastY_51);
#line 434 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 1807 "hlds.hlds_clauses.c"
      *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 0;
#line 434 "hlds_clauses.m"
    else
#line 434 "hlds_clauses.m"
      if (((MR_tag((MR_Word) hlds__hlds_clauses__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 434 "hlds_clauses.m"
        {
#line 434 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 2)));
#line 434 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
#line 434 "hlds_clauses.m"
          MR_Integer hlds__hlds_clauses__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));

#line 434 "hlds_clauses.m"
          if (((MR_tag((MR_Word) hlds__hlds_clauses__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 434 "hlds_clauses.m"
            {
#line 434 "hlds_clauses.m"
              MR_Integer hlds__hlds_clauses__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 0)));
#line 434 "hlds_clauses.m"
              MR_Word hlds__hlds_clauses__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 1)));
#line 434 "hlds_clauses.m"
              MR_Word hlds__hlds_clauses__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 2)));
#line 434 "hlds_clauses.m"
              MR_Word hlds__hlds_clauses__V_48_48;

#line 434 "hlds_clauses.m"
              {
#line 434 "hlds_clauses.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_clauses__V_48_48, hlds__hlds_clauses__V_61_61, hlds__hlds_clauses__V_45_45);
              }
#line 1840 "hlds.hlds_clauses.c"
              hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_48_48 == (MR_Integer) 0);
#line 434 "hlds_clauses.m"
              hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 434 "hlds_clauses.m"
              if (hlds__hlds_clauses__succeeded)
#line 434 "hlds_clauses.m"
                *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_48_48;
#line 434 "hlds_clauses.m"
              else
#line 434 "hlds_clauses.m"
                {
#line 434 "hlds_clauses.m"
                  MR_Word hlds__hlds_clauses__V_49_49;

#line 434 "hlds_clauses.m"
                  {
#line 434 "hlds_clauses.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[7], &hlds__hlds_clauses__V_49_49, ((MR_Box) (hlds__hlds_clauses__V_60_60)), ((MR_Box) (hlds__hlds_clauses__V_46_46)));
                  }
#line 1860 "hlds.hlds_clauses.c"
                  hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_49_49 == (MR_Integer) 0);
#line 434 "hlds_clauses.m"
                  hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 434 "hlds_clauses.m"
                  if (hlds__hlds_clauses__succeeded)
#line 434 "hlds_clauses.m"
                    *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_49_49;
#line 434 "hlds_clauses.m"
                  else
#line 434 "hlds_clauses.m"
                    {
#line 434 "hlds_clauses.m"
                      {
#line 434 "hlds_clauses.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[7], hlds__hlds_clauses__HeadVar__1_1, ((MR_Box) (hlds__hlds_clauses__V_59_59)), ((MR_Box) (hlds__hlds_clauses__V_47_47)));
#line 434 "hlds_clauses.m"
                        return;
                      }
#line 434 "hlds_clauses.m"
                    }
#line 434 "hlds_clauses.m"
                }
#line 434 "hlds_clauses.m"
            }
#line 434 "hlds_clauses.m"
          else
#line 434 "hlds_clauses.m"
            if (((MR_tag((MR_Word) hlds__hlds_clauses__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1889 "hlds.hlds_clauses.c"
              *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 2;
#line 434 "hlds_clauses.m"
            else
#line 1893 "hlds.hlds_clauses.c"
              *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 2;
#line 434 "hlds_clauses.m"
        }
#line 434 "hlds_clauses.m"
      else
#line 434 "hlds_clauses.m"
        if (((MR_tag((MR_Word) hlds__hlds_clauses__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 434 "hlds_clauses.m"
          {
#line 434 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
#line 434 "hlds_clauses.m"
            MR_Integer hlds__hlds_clauses__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));

#line 434 "hlds_clauses.m"
            if (((MR_tag((MR_Word) hlds__hlds_clauses__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1910 "hlds.hlds_clauses.c"
              *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 1;
#line 434 "hlds_clauses.m"
            else
#line 434 "hlds_clauses.m"
              if (((MR_tag((MR_Word) hlds__hlds_clauses__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 434 "hlds_clauses.m"
                {
#line 434 "hlds_clauses.m"
                  MR_Integer hlds__hlds_clauses__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 0)));
#line 434 "hlds_clauses.m"
                  MR_Word hlds__hlds_clauses__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 1)));
#line 434 "hlds_clauses.m"
                  MR_Word hlds__hlds_clauses__V_26_26;

#line 434 "hlds_clauses.m"
                  {
#line 434 "hlds_clauses.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_clauses__V_26_26, hlds__hlds_clauses__V_63_63, hlds__hlds_clauses__V_24_24);
                  }
#line 1930 "hlds.hlds_clauses.c"
                  hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_26_26 == (MR_Integer) 0);
#line 434 "hlds_clauses.m"
                  hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 434 "hlds_clauses.m"
                  if (hlds__hlds_clauses__succeeded)
#line 434 "hlds_clauses.m"
                    *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_26_26;
#line 434 "hlds_clauses.m"
                  else
#line 434 "hlds_clauses.m"
                    {
#line 434 "hlds_clauses.m"
                      {
#line 434 "hlds_clauses.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[7], hlds__hlds_clauses__HeadVar__1_1, ((MR_Box) (hlds__hlds_clauses__V_62_62)), ((MR_Box) (hlds__hlds_clauses__V_25_25)));
#line 434 "hlds_clauses.m"
                        return;
                      }
#line 434 "hlds_clauses.m"
                    }
#line 434 "hlds_clauses.m"
                }
#line 434 "hlds_clauses.m"
              else
#line 1955 "hlds.hlds_clauses.c"
                *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 2;
#line 434 "hlds_clauses.m"
          }
#line 434 "hlds_clauses.m"
        else
#line 434 "hlds_clauses.m"
          {
#line 434 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
#line 434 "hlds_clauses.m"
            MR_Integer hlds__hlds_clauses__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));

#line 434 "hlds_clauses.m"
            if (((MR_tag((MR_Word) hlds__hlds_clauses__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1970 "hlds.hlds_clauses.c"
              *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 1;
#line 434 "hlds_clauses.m"
            else
#line 434 "hlds_clauses.m"
              if (((MR_tag((MR_Word) hlds__hlds_clauses__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1976 "hlds.hlds_clauses.c"
                *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 1;
#line 434 "hlds_clauses.m"
              else
#line 434 "hlds_clauses.m"
                {
#line 434 "hlds_clauses.m"
                  MR_Integer hlds__hlds_clauses__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 0)));
#line 434 "hlds_clauses.m"
                  MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 1)));
#line 434 "hlds_clauses.m"
                  MR_Word hlds__hlds_clauses__V_8_8;

#line 434 "hlds_clauses.m"
                  {
#line 434 "hlds_clauses.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_clauses__V_8_8, hlds__hlds_clauses__V_65_65, hlds__hlds_clauses__V_6_6);
                  }
#line 1994 "hlds.hlds_clauses.c"
                  hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_8_8 == (MR_Integer) 0);
#line 434 "hlds_clauses.m"
                  hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 434 "hlds_clauses.m"
                  if (hlds__hlds_clauses__succeeded)
#line 434 "hlds_clauses.m"
                    *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_8_8;
#line 434 "hlds_clauses.m"
                  else
#line 434 "hlds_clauses.m"
                    {
#line 434 "hlds_clauses.m"
                      {
#line 434 "hlds_clauses.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[7], hlds__hlds_clauses__HeadVar__1_1, ((MR_Box) (hlds__hlds_clauses__V_64_64)), ((MR_Box) (hlds__hlds_clauses__V_7_7)));
#line 434 "hlds_clauses.m"
                        return;
                      }
#line 434 "hlds_clauses.m"
                    }
#line 434 "hlds_clauses.m"
                }
#line 434 "hlds_clauses.m"
          }
#line 434 "hlds_clauses.m"
  }
#line 434 "hlds_clauses.m"
}

#line 434 "hlds_clauses.m"
MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clauses_rep_0_0(
#line 434 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__1_1,
#line 434 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2)
#line 434 "hlds_clauses.m"
{
#line 434 "hlds_clauses.m"
  {
#line 434 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 434 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastX_17 = (MR_Integer) hlds__hlds_clauses__HeadVar__1_1;
#line 434 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastY_18 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;

#line 434 "hlds_clauses.m"
    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_17 == hlds__hlds_clauses__CastY_18);
#line 434 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 434 "hlds_clauses.m"
      hlds__hlds_clauses__succeeded = MR_TRUE;
#line 434 "hlds_clauses.m"
    else
#line 434 "hlds_clauses.m"
      if (((MR_tag((MR_Word) hlds__hlds_clauses__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 434 "hlds_clauses.m"
        {
#line 434 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__TypeInfo_19_19;
#line 434 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__TypeInfo_20_20;
#line 434 "hlds_clauses.m"
          MR_Integer hlds__hlds_clauses__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 0)));
#line 434 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 1)));
#line 434 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 2)));
#line 434 "hlds_clauses.m"
          MR_Integer hlds__hlds_clauses__V_14_14;
#line 434 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__V_15_15;
#line 434 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__V_16_16;

#line 434 "hlds_clauses.m"
          hlds__hlds_clauses__succeeded = ((MR_tag((MR_Word) hlds__hlds_clauses__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 434 "hlds_clauses.m"
          if (hlds__hlds_clauses__succeeded)
#line 434 "hlds_clauses.m"
            {
#line 434 "hlds_clauses.m"
              hlds__hlds_clauses__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
#line 434 "hlds_clauses.m"
              hlds__hlds_clauses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
#line 434 "hlds_clauses.m"
              hlds__hlds_clauses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 2)));
#line 2083 "hlds.hlds_clauses.c"
              hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_11_11 == hlds__hlds_clauses__V_14_14);
#line 434 "hlds_clauses.m"
              if (hlds__hlds_clauses__succeeded)
#line 434 "hlds_clauses.m"
                {
#line 2089 "hlds.hlds_clauses.c"
                  hlds__hlds_clauses__TypeInfo_19_19 = (MR_Word) &hlds__hlds_clauses_scalar_common_1[7];
#line 2091 "hlds.hlds_clauses.c"
                  {
#line 2093 "hlds.hlds_clauses.c"
                    hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_19_19, ((MR_Box) (hlds__hlds_clauses__V_12_12)), ((MR_Box) (hlds__hlds_clauses__V_15_15)));
                  }
#line 434 "hlds_clauses.m"
                  if (hlds__hlds_clauses__succeeded)
#line 434 "hlds_clauses.m"
                    {
#line 2100 "hlds.hlds_clauses.c"
                      hlds__hlds_clauses__TypeInfo_20_20 = (MR_Word) &hlds__hlds_clauses_scalar_common_1[7];
#line 2102 "hlds.hlds_clauses.c"
                      {
#line 2104 "hlds.hlds_clauses.c"
                        return hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_20_20, ((MR_Box) (hlds__hlds_clauses__V_13_13)), ((MR_Box) (hlds__hlds_clauses__V_16_16)));
                      }
#line 434 "hlds_clauses.m"
                    }
#line 434 "hlds_clauses.m"
                }
#line 434 "hlds_clauses.m"
            }
#line 434 "hlds_clauses.m"
        }
#line 434 "hlds_clauses.m"
      else
#line 434 "hlds_clauses.m"
        if (((MR_tag((MR_Word) hlds__hlds_clauses__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 434 "hlds_clauses.m"
          {
#line 434 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__TypeInfo_21_21;
#line 434 "hlds_clauses.m"
            MR_Integer hlds__hlds_clauses__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 0)));
#line 434 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 1)));
#line 434 "hlds_clauses.m"
            MR_Integer hlds__hlds_clauses__V_9_9;
#line 434 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__V_10_10;

#line 434 "hlds_clauses.m"
            hlds__hlds_clauses__succeeded = ((MR_tag((MR_Word) hlds__hlds_clauses__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 434 "hlds_clauses.m"
            if (hlds__hlds_clauses__succeeded)
#line 434 "hlds_clauses.m"
              {
#line 434 "hlds_clauses.m"
                hlds__hlds_clauses__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
#line 434 "hlds_clauses.m"
                hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
#line 2142 "hlds.hlds_clauses.c"
                hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_7_7 == hlds__hlds_clauses__V_9_9);
#line 434 "hlds_clauses.m"
                if (hlds__hlds_clauses__succeeded)
#line 434 "hlds_clauses.m"
                  {
#line 2148 "hlds.hlds_clauses.c"
                    hlds__hlds_clauses__TypeInfo_21_21 = (MR_Word) &hlds__hlds_clauses_scalar_common_1[7];
#line 2150 "hlds.hlds_clauses.c"
                    {
#line 2152 "hlds.hlds_clauses.c"
                      return hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_21_21, ((MR_Box) (hlds__hlds_clauses__V_8_8)), ((MR_Box) (hlds__hlds_clauses__V_10_10)));
                    }
#line 434 "hlds_clauses.m"
                  }
#line 434 "hlds_clauses.m"
              }
#line 434 "hlds_clauses.m"
          }
#line 434 "hlds_clauses.m"
        else
#line 434 "hlds_clauses.m"
          {
#line 434 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__TypeInfo_22_22;
#line 434 "hlds_clauses.m"
            MR_Integer hlds__hlds_clauses__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 0)));
#line 434 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 1)));
#line 434 "hlds_clauses.m"
            MR_Integer hlds__hlds_clauses__V_5_5;
#line 434 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__V_6_6;

#line 434 "hlds_clauses.m"
            hlds__hlds_clauses__succeeded = ((MR_tag((MR_Word) hlds__hlds_clauses__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 434 "hlds_clauses.m"
            if (hlds__hlds_clauses__succeeded)
#line 434 "hlds_clauses.m"
              {
#line 434 "hlds_clauses.m"
                hlds__hlds_clauses__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
#line 434 "hlds_clauses.m"
                hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
#line 2186 "hlds.hlds_clauses.c"
                hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_3_3 == hlds__hlds_clauses__V_5_5);
#line 434 "hlds_clauses.m"
                if (hlds__hlds_clauses__succeeded)
#line 434 "hlds_clauses.m"
                  {
#line 2192 "hlds.hlds_clauses.c"
                    hlds__hlds_clauses__TypeInfo_22_22 = (MR_Word) &hlds__hlds_clauses_scalar_common_1[7];
#line 2194 "hlds.hlds_clauses.c"
                    {
#line 2196 "hlds.hlds_clauses.c"
                      return hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_22_22, ((MR_Box) (hlds__hlds_clauses__V_4_4)), ((MR_Box) (hlds__hlds_clauses__V_6_6)));
                    }
#line 434 "hlds_clauses.m"
                  }
#line 434 "hlds_clauses.m"
              }
#line 434 "hlds_clauses.m"
          }
#line 434 "hlds_clauses.m"
    return hlds__hlds_clauses__succeeded;
#line 434 "hlds_clauses.m"
  }
#line 434 "hlds_clauses.m"
}

#line 42 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses____Compare____clauses_info_0_0(
#line 42 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__1_1,
#line 42 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2,
#line 42 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__3_3)
#line 42 "hlds_clauses.m"
{
#line 42 "hlds_clauses.m"
  {
#line 42 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 42 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastX_30 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;
#line 42 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastY_31 = (MR_Integer) hlds__hlds_clauses__HeadVar__3_3;

#line 42 "hlds_clauses.m"
    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_30 == hlds__hlds_clauses__CastY_31);
#line 42 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 2236 "hlds.hlds_clauses.c"
      *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 0;
#line 42 "hlds_clauses.m"
    else
#line 42 "hlds_clauses.m"
      {
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 2)));
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 3)));
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 4)));
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 5)));
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 6)));
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 7)));
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 8)));
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 0)));
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 1)));
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 2)));
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 3)));
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 4)));
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 5)));
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 6)));
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 7)));
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 8)));
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_22_22;

#line 42 "hlds_clauses.m"
        {
#line 42 "hlds_clauses.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[5], &hlds__hlds_clauses__V_22_22, ((MR_Box) (hlds__hlds_clauses__V_4_4)), ((MR_Box) (hlds__hlds_clauses__V_13_13)));
        }
#line 2286 "hlds.hlds_clauses.c"
        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_22_22 == (MR_Integer) 0);
#line 42 "hlds_clauses.m"
        hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 42 "hlds_clauses.m"
        if (hlds__hlds_clauses__succeeded)
#line 42 "hlds_clauses.m"
          *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_22_22;
#line 42 "hlds_clauses.m"
        else
#line 42 "hlds_clauses.m"
          {
#line 42 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__V_23_23;

#line 42 "hlds_clauses.m"
            {
#line 42 "hlds_clauses.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &hlds__hlds_clauses__V_23_23, ((MR_Box) (hlds__hlds_clauses__V_5_5)), ((MR_Box) (hlds__hlds_clauses__V_14_14)));
            }
#line 2306 "hlds.hlds_clauses.c"
            hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_23_23 == (MR_Integer) 0);
#line 42 "hlds_clauses.m"
            hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 42 "hlds_clauses.m"
            if (hlds__hlds_clauses__succeeded)
#line 42 "hlds_clauses.m"
              *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_23_23;
#line 42 "hlds_clauses.m"
            else
#line 42 "hlds_clauses.m"
              {
#line 42 "hlds_clauses.m"
                MR_Word hlds__hlds_clauses__V_24_24;

#line 42 "hlds_clauses.m"
                {
#line 42 "hlds_clauses.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_2[0], &hlds__hlds_clauses__V_24_24, ((MR_Box) (hlds__hlds_clauses__V_6_6)), ((MR_Box) (hlds__hlds_clauses__V_15_15)));
                }
#line 2326 "hlds.hlds_clauses.c"
                hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_24_24 == (MR_Integer) 0);
#line 42 "hlds_clauses.m"
                hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 42 "hlds_clauses.m"
                if (hlds__hlds_clauses__succeeded)
#line 42 "hlds_clauses.m"
                  *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_24_24;
#line 42 "hlds_clauses.m"
                else
#line 42 "hlds_clauses.m"
                  {
#line 42 "hlds_clauses.m"
                    MR_Word hlds__hlds_clauses__V_25_25;

#line 42 "hlds_clauses.m"
                    {
#line 42 "hlds_clauses.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &hlds__hlds_clauses__V_25_25, ((MR_Box) (hlds__hlds_clauses__V_7_7)), ((MR_Box) (hlds__hlds_clauses__V_16_16)));
                    }
#line 2346 "hlds.hlds_clauses.c"
                    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_25_25 == (MR_Integer) 0);
#line 42 "hlds_clauses.m"
                    hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 42 "hlds_clauses.m"
                    if (hlds__hlds_clauses__succeeded)
#line 42 "hlds_clauses.m"
                      *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_25_25;
#line 42 "hlds_clauses.m"
                    else
#line 42 "hlds_clauses.m"
                      {
#line 42 "hlds_clauses.m"
                        MR_Word hlds__hlds_clauses__V_26_26;

#line 42 "hlds_clauses.m"
                        {
#line 42 "hlds_clauses.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[6], &hlds__hlds_clauses__V_26_26, ((MR_Box) (hlds__hlds_clauses__V_8_8)), ((MR_Box) (hlds__hlds_clauses__V_17_17)));
                        }
#line 2366 "hlds.hlds_clauses.c"
                        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_26_26 == (MR_Integer) 0);
#line 42 "hlds_clauses.m"
                        hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 42 "hlds_clauses.m"
                        if (hlds__hlds_clauses__succeeded)
#line 42 "hlds_clauses.m"
                          *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_26_26;
#line 42 "hlds_clauses.m"
                        else
#line 42 "hlds_clauses.m"
                          {
#line 42 "hlds_clauses.m"
                            MR_Word hlds__hlds_clauses__V_27_27;

#line 42 "hlds_clauses.m"
                            {
#line 42 "hlds_clauses.m"
                              hlds__hlds_clauses____Compare____clauses_rep_0_0(&hlds__hlds_clauses__V_27_27, hlds__hlds_clauses__V_9_9, hlds__hlds_clauses__V_18_18);
                            }
#line 2386 "hlds.hlds_clauses.c"
                            hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_27_27 == (MR_Integer) 0);
#line 42 "hlds_clauses.m"
                            hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 42 "hlds_clauses.m"
                            if (hlds__hlds_clauses__succeeded)
#line 42 "hlds_clauses.m"
                              *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_27_27;
#line 42 "hlds_clauses.m"
                            else
#line 42 "hlds_clauses.m"
                              {
#line 42 "hlds_clauses.m"
                                MR_Word hlds__hlds_clauses__V_28_28;

#line 42 "hlds_clauses.m"
                                {
#line 42 "hlds_clauses.m"
                                  hlds__hlds_clauses____Compare____clause_item_numbers_0_0(&hlds__hlds_clauses__V_28_28, hlds__hlds_clauses__V_10_10, hlds__hlds_clauses__V_19_19);
                                }
#line 2406 "hlds.hlds_clauses.c"
                                hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_28_28 == (MR_Integer) 0);
#line 42 "hlds_clauses.m"
                                hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 42 "hlds_clauses.m"
                                if (hlds__hlds_clauses__succeeded)
#line 42 "hlds_clauses.m"
                                  *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_28_28;
#line 42 "hlds_clauses.m"
                                else
#line 42 "hlds_clauses.m"
                                  {
#line 42 "hlds_clauses.m"
                                    MR_Word hlds__hlds_clauses__V_29_29;

#line 42 "hlds_clauses.m"
                                    {
#line 42 "hlds_clauses.m"
                                      hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&hlds__hlds_clauses__V_29_29, hlds__hlds_clauses__V_11_11, hlds__hlds_clauses__V_20_20);
                                    }
#line 2426 "hlds.hlds_clauses.c"
                                    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_29_29 == (MR_Integer) 0);
#line 42 "hlds_clauses.m"
                                    hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 42 "hlds_clauses.m"
                                    if (hlds__hlds_clauses__succeeded)
#line 42 "hlds_clauses.m"
                                      *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_29_29;
#line 42 "hlds_clauses.m"
                                    else
#line 42 "hlds_clauses.m"
                                      {
#line 42 "hlds_clauses.m"
                                        MR_Integer hlds__hlds_clauses__V_41_41 = (MR_Integer) hlds__hlds_clauses__V_12_12;
#line 42 "hlds_clauses.m"
                                        MR_Integer hlds__hlds_clauses__V_42_42 = (MR_Integer) hlds__hlds_clauses__V_21_21;

#line 42 "hlds_clauses.m"
                                        {
#line 42 "hlds_clauses.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_clauses__HeadVar__1_1, hlds__hlds_clauses__V_41_41, hlds__hlds_clauses__V_42_42);
#line 42 "hlds_clauses.m"
                                          return;
                                        }
#line 42 "hlds_clauses.m"
                                      }
#line 42 "hlds_clauses.m"
                                  }
#line 42 "hlds_clauses.m"
                              }
#line 42 "hlds_clauses.m"
                          }
#line 42 "hlds_clauses.m"
                      }
#line 42 "hlds_clauses.m"
                  }
#line 42 "hlds_clauses.m"
              }
#line 42 "hlds_clauses.m"
          }
#line 42 "hlds_clauses.m"
      }
#line 42 "hlds_clauses.m"
  }
#line 42 "hlds_clauses.m"
}

#line 42 "hlds_clauses.m"
MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clauses_info_0_0(
#line 42 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__1_1,
#line 42 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2)
#line 42 "hlds_clauses.m"
{
#line 42 "hlds_clauses.m"
  {
#line 42 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 42 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastX_21 = (MR_Integer) hlds__hlds_clauses__HeadVar__1_1;
#line 42 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastY_22 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;

#line 42 "hlds_clauses.m"
    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_21 == hlds__hlds_clauses__CastY_22);
#line 42 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 42 "hlds_clauses.m"
      hlds__hlds_clauses__succeeded = MR_TRUE;
#line 42 "hlds_clauses.m"
    else
#line 42 "hlds_clauses.m"
      {
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__TypeCtorInfo_24_24;
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__TypeInfo_25_25;
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__TypeCtorInfo_26_26;
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__TypeInfo_27_27;
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 0)));
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 1)));
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 2)));
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 3)));
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 4)));
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 5)));
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 6)));
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 7)));
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 8)));
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 2)));
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 3)));
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 4)));
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 5)));
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 6)));
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 7)));
#line 42 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 8)));

#line 2546 "hlds.hlds_clauses.c"
        {
#line 2548 "hlds.hlds_clauses.c"
          hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[5], ((MR_Box) (hlds__hlds_clauses__V_3_3)), ((MR_Box) (hlds__hlds_clauses__V_12_12)));
        }
#line 42 "hlds_clauses.m"
        if (hlds__hlds_clauses__succeeded)
#line 42 "hlds_clauses.m"
          {
#line 2555 "hlds.hlds_clauses.c"
            hlds__hlds_clauses__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 2557 "hlds.hlds_clauses.c"
            {
#line 2559 "hlds.hlds_clauses.c"
              hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeCtorInfo_24_24, ((MR_Box) (hlds__hlds_clauses__V_4_4)), ((MR_Box) (hlds__hlds_clauses__V_13_13)));
            }
#line 42 "hlds_clauses.m"
            if (hlds__hlds_clauses__succeeded)
#line 42 "hlds_clauses.m"
              {
#line 2566 "hlds.hlds_clauses.c"
                hlds__hlds_clauses__TypeInfo_25_25 = (MR_Word) &hlds__hlds_clauses_scalar_common_2[0];
#line 2568 "hlds.hlds_clauses.c"
                {
#line 2570 "hlds.hlds_clauses.c"
                  hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_25_25, ((MR_Box) (hlds__hlds_clauses__V_5_5)), ((MR_Box) (hlds__hlds_clauses__V_14_14)));
                }
#line 42 "hlds_clauses.m"
                if (hlds__hlds_clauses__succeeded)
#line 42 "hlds_clauses.m"
                  {
#line 2577 "hlds.hlds_clauses.c"
                    hlds__hlds_clauses__TypeCtorInfo_26_26 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 2579 "hlds.hlds_clauses.c"
                    {
#line 2581 "hlds.hlds_clauses.c"
                      hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeCtorInfo_26_26, ((MR_Box) (hlds__hlds_clauses__V_6_6)), ((MR_Box) (hlds__hlds_clauses__V_15_15)));
                    }
#line 42 "hlds_clauses.m"
                    if (hlds__hlds_clauses__succeeded)
#line 42 "hlds_clauses.m"
                      {
#line 2588 "hlds.hlds_clauses.c"
                        hlds__hlds_clauses__TypeInfo_27_27 = (MR_Word) &hlds__hlds_clauses_scalar_common_1[6];
#line 2590 "hlds.hlds_clauses.c"
                        {
#line 2592 "hlds.hlds_clauses.c"
                          hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_27_27, ((MR_Box) (hlds__hlds_clauses__V_7_7)), ((MR_Box) (hlds__hlds_clauses__V_16_16)));
                        }
#line 42 "hlds_clauses.m"
                        if (hlds__hlds_clauses__succeeded)
#line 42 "hlds_clauses.m"
                          {
#line 2599 "hlds.hlds_clauses.c"
                            {
#line 2601 "hlds.hlds_clauses.c"
                              hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clauses_rep_0_0(hlds__hlds_clauses__V_8_8, hlds__hlds_clauses__V_17_17);
                            }
#line 42 "hlds_clauses.m"
                            if (hlds__hlds_clauses__succeeded)
#line 42 "hlds_clauses.m"
                              {
#line 2608 "hlds.hlds_clauses.c"
                                {
#line 2610 "hlds.hlds_clauses.c"
                                  hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_item_numbers_0_0(hlds__hlds_clauses__V_9_9, hlds__hlds_clauses__V_18_18);
                                }
#line 42 "hlds_clauses.m"
                                if (hlds__hlds_clauses__succeeded)
#line 42 "hlds_clauses.m"
                                  {
#line 2617 "hlds.hlds_clauses.c"
                                    {
#line 2619 "hlds.hlds_clauses.c"
                                      hlds__hlds_clauses__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(hlds__hlds_clauses__V_10_10, hlds__hlds_clauses__V_19_19);
                                    }
#line 42 "hlds_clauses.m"
                                    if (hlds__hlds_clauses__succeeded)
#line 2624 "hlds.hlds_clauses.c"
                                      hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_11_11 == hlds__hlds_clauses__V_20_20);
#line 42 "hlds_clauses.m"
                                  }
#line 42 "hlds_clauses.m"
                              }
#line 42 "hlds_clauses.m"
                          }
#line 42 "hlds_clauses.m"
                      }
#line 42 "hlds_clauses.m"
                  }
#line 42 "hlds_clauses.m"
              }
#line 42 "hlds_clauses.m"
          }
#line 42 "hlds_clauses.m"
      }
#line 42 "hlds_clauses.m"
    return hlds__hlds_clauses__succeeded;
#line 42 "hlds_clauses.m"
  }
#line 42 "hlds_clauses.m"
}

#line 252 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_numbers_0_0(
#line 252 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__1_1,
#line 252 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2,
#line 252 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__3_3)
#line 252 "hlds_clauses.m"
{
#line 252 "hlds_clauses.m"
  {
#line 252 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 252 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastX_13 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;
#line 252 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastY_14 = (MR_Integer) hlds__hlds_clauses__HeadVar__3_3;

#line 252 "hlds_clauses.m"
    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_13 == hlds__hlds_clauses__CastY_14);
#line 252 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 2673 "hlds.hlds_clauses.c"
      *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 0;
#line 252 "hlds_clauses.m"
    else
#line 252 "hlds_clauses.m"
      if ((hlds__hlds_clauses__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 252 "hlds_clauses.m"
        if ((hlds__hlds_clauses__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 252 "hlds_clauses.m"
          *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 0;
#line 252 "hlds_clauses.m"
        else
#line 2685 "hlds.hlds_clauses.c"
          *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 2;
#line 252 "hlds_clauses.m"
      else
#line 252 "hlds_clauses.m"
        {
#line 252 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
#line 252 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));

#line 252 "hlds_clauses.m"
          if ((hlds__hlds_clauses__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2698 "hlds.hlds_clauses.c"
            *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 1;
#line 252 "hlds_clauses.m"
          else
#line 252 "hlds_clauses.m"
            {
#line 252 "hlds_clauses.m"
              MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 0)));
#line 252 "hlds_clauses.m"
              MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 1)));
#line 252 "hlds_clauses.m"
              MR_Word hlds__hlds_clauses__V_8_8;

#line 252 "hlds_clauses.m"
              {
#line 252 "hlds_clauses.m"
                mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[4], &hlds__hlds_clauses__V_8_8, ((MR_Box) (hlds__hlds_clauses__V_18_18)), ((MR_Box) (hlds__hlds_clauses__V_6_6)));
              }
#line 2716 "hlds.hlds_clauses.c"
              hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_8_8 == (MR_Integer) 0);
#line 252 "hlds_clauses.m"
              hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 252 "hlds_clauses.m"
              if (hlds__hlds_clauses__succeeded)
#line 252 "hlds_clauses.m"
                *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_8_8;
#line 252 "hlds_clauses.m"
              else
#line 252 "hlds_clauses.m"
                {
#line 252 "hlds_clauses.m"
                  {
#line 252 "hlds_clauses.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[4], hlds__hlds_clauses__HeadVar__1_1, ((MR_Box) (hlds__hlds_clauses__V_17_17)), ((MR_Box) (hlds__hlds_clauses__V_7_7)));
#line 252 "hlds_clauses.m"
                    return;
                  }
#line 252 "hlds_clauses.m"
                }
#line 252 "hlds_clauses.m"
            }
#line 252 "hlds_clauses.m"
        }
#line 252 "hlds_clauses.m"
  }
#line 252 "hlds_clauses.m"
}

#line 252 "hlds_clauses.m"
MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_numbers_0_0(
#line 252 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__1_1,
#line 252 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2)
#line 252 "hlds_clauses.m"
{
#line 252 "hlds_clauses.m"
  {
#line 252 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 252 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastX_9 = (MR_Integer) hlds__hlds_clauses__HeadVar__1_1;
#line 252 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastY_10 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;

#line 252 "hlds_clauses.m"
    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_9 == hlds__hlds_clauses__CastY_10);
#line 252 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 252 "hlds_clauses.m"
      hlds__hlds_clauses__succeeded = MR_TRUE;
#line 252 "hlds_clauses.m"
    else
#line 252 "hlds_clauses.m"
      if ((hlds__hlds_clauses__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 252 "hlds_clauses.m"
        {
#line 252 "hlds_clauses.m"
          MR_Integer hlds__hlds_clauses__CastX_7 = (MR_Integer) hlds__hlds_clauses__HeadVar__1_1;
#line 252 "hlds_clauses.m"
          MR_Integer hlds__hlds_clauses__CastY_8 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;

#line 252 "hlds_clauses.m"
          hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastY_8 == hlds__hlds_clauses__CastX_7);
#line 252 "hlds_clauses.m"
        }
#line 252 "hlds_clauses.m"
      else
#line 252 "hlds_clauses.m"
        {
#line 252 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__TypeInfo_11_11;
#line 252 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__TypeInfo_12_12;
#line 252 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 0)));
#line 252 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 1)));
#line 252 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__V_5_5;
#line 252 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__V_6_6;

#line 252 "hlds_clauses.m"
          hlds__hlds_clauses__succeeded = ((MR_tag((MR_Word) hlds__hlds_clauses__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 252 "hlds_clauses.m"
          if (hlds__hlds_clauses__succeeded)
#line 252 "hlds_clauses.m"
            {
#line 252 "hlds_clauses.m"
              hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
#line 252 "hlds_clauses.m"
              hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
#line 2812 "hlds.hlds_clauses.c"
              hlds__hlds_clauses__TypeInfo_11_11 = (MR_Word) &hlds__hlds_clauses_scalar_common_1[4];
#line 2814 "hlds.hlds_clauses.c"
              {
#line 2816 "hlds.hlds_clauses.c"
                hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_11_11, ((MR_Box) (hlds__hlds_clauses__V_3_3)), ((MR_Box) (hlds__hlds_clauses__V_5_5)));
              }
#line 252 "hlds_clauses.m"
              if (hlds__hlds_clauses__succeeded)
#line 252 "hlds_clauses.m"
                {
#line 2823 "hlds.hlds_clauses.c"
                  hlds__hlds_clauses__TypeInfo_12_12 = (MR_Word) &hlds__hlds_clauses_scalar_common_1[4];
#line 2825 "hlds.hlds_clauses.c"
                  {
#line 2827 "hlds.hlds_clauses.c"
                    return hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_12_12, ((MR_Box) (hlds__hlds_clauses__V_4_4)), ((MR_Box) (hlds__hlds_clauses__V_6_6)));
                  }
#line 252 "hlds_clauses.m"
                }
#line 252 "hlds_clauses.m"
            }
#line 252 "hlds_clauses.m"
        }
#line 252 "hlds_clauses.m"
    return hlds__hlds_clauses__succeeded;
#line 252 "hlds_clauses.m"
  }
#line 252 "hlds_clauses.m"
}

#line 219 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_types_0_0(
#line 219 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__1_1,
#line 219 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2,
#line 219 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__3_3)
#line 219 "hlds_clauses.m"
{
#line 219 "hlds_clauses.m"
  {
#line 219 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 219 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;
#line 219 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_clauses__HeadVar__3_3;

#line 219 "hlds_clauses.m"
    {
#line 219 "hlds_clauses.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_clauses__HeadVar__1_1, hlds__hlds_clauses__Cast_HeadVar1_4, hlds__hlds_clauses__Cast_HeadVar2_5);
#line 219 "hlds_clauses.m"
      return;
    }
#line 219 "hlds_clauses.m"
  }
#line 219 "hlds_clauses.m"
}

#line 219 "hlds_clauses.m"
MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_types_0_0(
#line 219 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_1,
#line 219 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2)
#line 219 "hlds_clauses.m"
{
#line 2884 "hlds.hlds_clauses.c"
  {
#line 2886 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__HeadVar__2_1 == hlds__hlds_clauses__HeadVar__2_2);

#line 2889 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 2891 "hlds.hlds_clauses.c"
  }
#line 219 "hlds_clauses.m"
}

#line 228 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_type_0_0(
#line 228 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__1_1,
#line 228 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2,
#line 228 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__3_3)
#line 228 "hlds_clauses.m"
{
#line 228 "hlds_clauses.m"
  {
#line 228 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 228 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;
#line 228 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_clauses__HeadVar__3_3;

#line 228 "hlds_clauses.m"
    {
#line 228 "hlds_clauses.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_clauses__HeadVar__1_1, hlds__hlds_clauses__Cast_HeadVar1_4, hlds__hlds_clauses__Cast_HeadVar2_5);
#line 228 "hlds_clauses.m"
      return;
    }
#line 228 "hlds_clauses.m"
  }
#line 228 "hlds_clauses.m"
}

#line 228 "hlds_clauses.m"
MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_type_0_0(
#line 228 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_1,
#line 228 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2)
#line 228 "hlds_clauses.m"
{
#line 2937 "hlds.hlds_clauses.c"
  {
#line 2939 "hlds.hlds_clauses.c"
    MR_bool hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__HeadVar__2_1 == hlds__hlds_clauses__HeadVar__2_2);

#line 2942 "hlds.hlds_clauses.c"
    return hlds__hlds_clauses__succeeded;
#line 2944 "hlds.hlds_clauses.c"
  }
#line 228 "hlds_clauses.m"
}

#line 211 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_region_0_0(
#line 211 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__1_1,
#line 211 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2,
#line 211 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__3_3)
#line 211 "hlds_clauses.m"
{
#line 211 "hlds_clauses.m"
  {
#line 211 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 211 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastX_15 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;
#line 211 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastY_16 = (MR_Integer) hlds__hlds_clauses__HeadVar__3_3;

#line 211 "hlds_clauses.m"
    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_15 == hlds__hlds_clauses__CastY_16);
#line 211 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 2973 "hlds.hlds_clauses.c"
      *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 0;
#line 211 "hlds_clauses.m"
    else
#line 211 "hlds_clauses.m"
      {
#line 211 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
#line 211 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
#line 211 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 2)));
#line 211 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 3)));
#line 211 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 0)));
#line 211 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 1)));
#line 211 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 2)));
#line 211 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 3)));
#line 211 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_12_12;

#line 211 "hlds_clauses.m"
        {
#line 211 "hlds_clauses.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_clauses__V_12_12, hlds__hlds_clauses__V_4_4, hlds__hlds_clauses__V_8_8);
        }
#line 3003 "hlds.hlds_clauses.c"
        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_12_12 == (MR_Integer) 0);
#line 211 "hlds_clauses.m"
        hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 211 "hlds_clauses.m"
        if (hlds__hlds_clauses__succeeded)
#line 211 "hlds_clauses.m"
          *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_12_12;
#line 211 "hlds_clauses.m"
        else
#line 211 "hlds_clauses.m"
          {
#line 211 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__V_13_13;

#line 211 "hlds_clauses.m"
            {
#line 211 "hlds_clauses.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_clauses__V_13_13, hlds__hlds_clauses__V_5_5, hlds__hlds_clauses__V_9_9);
            }
#line 3023 "hlds.hlds_clauses.c"
            hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_13_13 == (MR_Integer) 0);
#line 211 "hlds_clauses.m"
            hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 211 "hlds_clauses.m"
            if (hlds__hlds_clauses__succeeded)
#line 211 "hlds_clauses.m"
              *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_13_13;
#line 211 "hlds_clauses.m"
            else
#line 211 "hlds_clauses.m"
              {
#line 211 "hlds_clauses.m"
                MR_Word hlds__hlds_clauses__V_14_14;

#line 211 "hlds_clauses.m"
                {
#line 211 "hlds_clauses.m"
                  mercury__term____Compare____context_0_0(&hlds__hlds_clauses__V_14_14, hlds__hlds_clauses__V_6_6, hlds__hlds_clauses__V_10_10);
                }
#line 3043 "hlds.hlds_clauses.c"
                hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_14_14 == (MR_Integer) 0);
#line 211 "hlds_clauses.m"
                hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 211 "hlds_clauses.m"
                if (hlds__hlds_clauses__succeeded)
#line 211 "hlds_clauses.m"
                  *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_14_14;
#line 211 "hlds_clauses.m"
                else
#line 211 "hlds_clauses.m"
                  {
#line 211 "hlds_clauses.m"
                    mercury__term____Compare____context_0_0(hlds__hlds_clauses__HeadVar__1_1, hlds__hlds_clauses__V_7_7, hlds__hlds_clauses__V_11_11);
#line 211 "hlds_clauses.m"
                    return;
                  }
#line 211 "hlds_clauses.m"
              }
#line 211 "hlds_clauses.m"
          }
#line 211 "hlds_clauses.m"
      }
#line 211 "hlds_clauses.m"
  }
#line 211 "hlds_clauses.m"
}

#line 211 "hlds_clauses.m"
MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_region_0_0(
#line 211 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__1_1,
#line 211 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2)
#line 211 "hlds_clauses.m"
{
#line 211 "hlds_clauses.m"
  {
#line 211 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 211 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastX_11 = (MR_Integer) hlds__hlds_clauses__HeadVar__1_1;
#line 211 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastY_12 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;

#line 211 "hlds_clauses.m"
    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_11 == hlds__hlds_clauses__CastY_12);
#line 211 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 211 "hlds_clauses.m"
      hlds__hlds_clauses__succeeded = MR_TRUE;
#line 211 "hlds_clauses.m"
    else
#line 211 "hlds_clauses.m"
      {
#line 211 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 0)));
#line 211 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 1)));
#line 211 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 2)));
#line 211 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 3)));
#line 211 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
#line 211 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
#line 211 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 2)));
#line 211 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 3)));

#line 3116 "hlds.hlds_clauses.c"
        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_3_3 == hlds__hlds_clauses__V_7_7);
#line 211 "hlds_clauses.m"
        if (hlds__hlds_clauses__succeeded)
#line 211 "hlds_clauses.m"
          {
#line 3122 "hlds.hlds_clauses.c"
            hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_4_4 == hlds__hlds_clauses__V_8_8);
#line 211 "hlds_clauses.m"
            if (hlds__hlds_clauses__succeeded)
#line 211 "hlds_clauses.m"
              {
#line 3128 "hlds.hlds_clauses.c"
                {
#line 3130 "hlds.hlds_clauses.c"
                  hlds__hlds_clauses__succeeded = mercury__term____Unify____context_0_0(hlds__hlds_clauses__V_5_5, hlds__hlds_clauses__V_9_9);
                }
#line 211 "hlds_clauses.m"
                if (hlds__hlds_clauses__succeeded)
#line 3135 "hlds.hlds_clauses.c"
                  {
#line 3137 "hlds.hlds_clauses.c"
                    return hlds__hlds_clauses__succeeded = mercury__term____Unify____context_0_0(hlds__hlds_clauses__V_6_6, hlds__hlds_clauses__V_10_10);
                  }
#line 211 "hlds_clauses.m"
              }
#line 211 "hlds_clauses.m"
          }
#line 211 "hlds_clauses.m"
      }
#line 211 "hlds_clauses.m"
    return hlds__hlds_clauses__succeeded;
#line 211 "hlds_clauses.m"
  }
#line 211 "hlds_clauses.m"
}

#line 181 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses____Compare____clause_applicable_modes_0_0(
#line 181 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__1_1,
#line 181 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2,
#line 181 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__3_3)
#line 181 "hlds_clauses.m"
{
#line 181 "hlds_clauses.m"
  {
#line 181 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 181 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastX_8 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;
#line 181 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastY_9 = (MR_Integer) hlds__hlds_clauses__HeadVar__3_3;

#line 181 "hlds_clauses.m"
    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_8 == hlds__hlds_clauses__CastY_9);
#line 181 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 3177 "hlds.hlds_clauses.c"
      *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 0;
#line 181 "hlds_clauses.m"
    else
#line 181 "hlds_clauses.m"
      if ((hlds__hlds_clauses__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 181 "hlds_clauses.m"
        if ((hlds__hlds_clauses__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 181 "hlds_clauses.m"
          *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 0;
#line 181 "hlds_clauses.m"
        else
#line 3189 "hlds.hlds_clauses.c"
          *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 1;
#line 181 "hlds_clauses.m"
      else
#line 181 "hlds_clauses.m"
        {
#line 181 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));

#line 181 "hlds_clauses.m"
          if ((hlds__hlds_clauses__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3200 "hlds.hlds_clauses.c"
            *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 2;
#line 181 "hlds_clauses.m"
          else
#line 181 "hlds_clauses.m"
            {
#line 181 "hlds_clauses.m"
              MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 0)));

#line 181 "hlds_clauses.m"
              {
#line 181 "hlds_clauses.m"
                mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[3], hlds__hlds_clauses__HeadVar__1_1, ((MR_Box) (hlds__hlds_clauses__V_11_11)), ((MR_Box) (hlds__hlds_clauses__V_7_7)));
#line 181 "hlds_clauses.m"
                return;
              }
#line 181 "hlds_clauses.m"
            }
#line 181 "hlds_clauses.m"
        }
#line 181 "hlds_clauses.m"
  }
#line 181 "hlds_clauses.m"
}

#line 181 "hlds_clauses.m"
MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_applicable_modes_0_0(
#line 181 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__1_1,
#line 181 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2)
#line 181 "hlds_clauses.m"
{
#line 181 "hlds_clauses.m"
  {
#line 181 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 181 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastX_7 = (MR_Integer) hlds__hlds_clauses__HeadVar__1_1;
#line 181 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastY_8 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;

#line 181 "hlds_clauses.m"
    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_7 == hlds__hlds_clauses__CastY_8);
#line 181 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 181 "hlds_clauses.m"
      hlds__hlds_clauses__succeeded = MR_TRUE;
#line 181 "hlds_clauses.m"
    else
#line 181 "hlds_clauses.m"
      if ((hlds__hlds_clauses__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 181 "hlds_clauses.m"
        {
#line 181 "hlds_clauses.m"
          MR_Integer hlds__hlds_clauses__CastX_3 = (MR_Integer) hlds__hlds_clauses__HeadVar__1_1;
#line 181 "hlds_clauses.m"
          MR_Integer hlds__hlds_clauses__CastY_4 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;

#line 181 "hlds_clauses.m"
          hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastY_4 == hlds__hlds_clauses__CastX_3);
#line 181 "hlds_clauses.m"
        }
#line 181 "hlds_clauses.m"
      else
#line 181 "hlds_clauses.m"
        {
#line 181 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__TypeInfo_9_9;
#line 181 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 0)));
#line 181 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__V_6_6;

#line 181 "hlds_clauses.m"
          hlds__hlds_clauses__succeeded = ((MR_tag((MR_Word) hlds__hlds_clauses__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 181 "hlds_clauses.m"
          if (hlds__hlds_clauses__succeeded)
#line 181 "hlds_clauses.m"
            {
#line 181 "hlds_clauses.m"
              hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
#line 3283 "hlds.hlds_clauses.c"
              hlds__hlds_clauses__TypeInfo_9_9 = (MR_Word) &hlds__hlds_clauses_scalar_common_1[3];
#line 3285 "hlds.hlds_clauses.c"
              {
#line 3287 "hlds.hlds_clauses.c"
                return hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_9_9, ((MR_Box) (hlds__hlds_clauses__V_5_5)), ((MR_Box) (hlds__hlds_clauses__V_6_6)));
              }
#line 181 "hlds_clauses.m"
            }
#line 181 "hlds_clauses.m"
        }
#line 181 "hlds_clauses.m"
    return hlds__hlds_clauses__succeeded;
#line 181 "hlds_clauses.m"
  }
#line 181 "hlds_clauses.m"
}

#line 169 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses____Compare____clause_0_0(
#line 169 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__1_1,
#line 169 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2,
#line 169 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__3_3)
#line 169 "hlds_clauses.m"
{
#line 169 "hlds_clauses.m"
  {
#line 169 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 169 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastX_18 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;
#line 169 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastY_19 = (MR_Integer) hlds__hlds_clauses__HeadVar__3_3;

#line 169 "hlds_clauses.m"
    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_18 == hlds__hlds_clauses__CastY_19);
#line 169 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 3325 "hlds.hlds_clauses.c"
      *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 0;
#line 169 "hlds_clauses.m"
    else
#line 169 "hlds_clauses.m"
      {
#line 169 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
#line 169 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
#line 169 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 2)));
#line 169 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 3)));
#line 169 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 4)));
#line 169 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 0)));
#line 169 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 1)));
#line 169 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 2)));
#line 169 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 3)));
#line 169 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 4)));
#line 169 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_14_14;

#line 169 "hlds_clauses.m"
        {
#line 169 "hlds_clauses.m"
          hlds__hlds_clauses____Compare____clause_applicable_modes_0_0(&hlds__hlds_clauses__V_14_14, hlds__hlds_clauses__V_4_4, hlds__hlds_clauses__V_9_9);
        }
#line 3359 "hlds.hlds_clauses.c"
        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_14_14 == (MR_Integer) 0);
#line 169 "hlds_clauses.m"
        hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 169 "hlds_clauses.m"
        if (hlds__hlds_clauses__succeeded)
#line 169 "hlds_clauses.m"
          *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_14_14;
#line 169 "hlds_clauses.m"
        else
#line 169 "hlds_clauses.m"
          {
#line 169 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__V_15_15;

#line 169 "hlds_clauses.m"
            {
#line 169 "hlds_clauses.m"
              hlds__hlds_goal____Compare____hlds_goal_0_0(&hlds__hlds_clauses__V_15_15, hlds__hlds_clauses__V_5_5, hlds__hlds_clauses__V_10_10);
            }
#line 3379 "hlds.hlds_clauses.c"
            hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_15_15 == (MR_Integer) 0);
#line 169 "hlds_clauses.m"
            hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 169 "hlds_clauses.m"
            if (hlds__hlds_clauses__succeeded)
#line 169 "hlds_clauses.m"
              *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_15_15;
#line 169 "hlds_clauses.m"
            else
#line 169 "hlds_clauses.m"
              {
#line 169 "hlds_clauses.m"
                MR_Word hlds__hlds_clauses__V_16_16;

#line 169 "hlds_clauses.m"
                {
#line 169 "hlds_clauses.m"
                  hlds__hlds_pred____Compare____implementation_language_0_0(&hlds__hlds_clauses__V_16_16, hlds__hlds_clauses__V_6_6, hlds__hlds_clauses__V_11_11);
                }
#line 3399 "hlds.hlds_clauses.c"
                hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_16_16 == (MR_Integer) 0);
#line 169 "hlds_clauses.m"
                hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 169 "hlds_clauses.m"
                if (hlds__hlds_clauses__succeeded)
#line 169 "hlds_clauses.m"
                  *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_16_16;
#line 169 "hlds_clauses.m"
                else
#line 169 "hlds_clauses.m"
                  {
#line 169 "hlds_clauses.m"
                    MR_Word hlds__hlds_clauses__V_17_17;

#line 169 "hlds_clauses.m"
                    {
#line 169 "hlds_clauses.m"
                      mercury__term____Compare____context_0_0(&hlds__hlds_clauses__V_17_17, hlds__hlds_clauses__V_7_7, hlds__hlds_clauses__V_12_12);
                    }
#line 3419 "hlds.hlds_clauses.c"
                    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_17_17 == (MR_Integer) 0);
#line 169 "hlds_clauses.m"
                    hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
#line 169 "hlds_clauses.m"
                    if (hlds__hlds_clauses__succeeded)
#line 169 "hlds_clauses.m"
                      *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_17_17;
#line 169 "hlds_clauses.m"
                    else
#line 169 "hlds_clauses.m"
                      {
#line 169 "hlds_clauses.m"
                        {
#line 169 "hlds_clauses.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[2], hlds__hlds_clauses__HeadVar__1_1, ((MR_Box) (hlds__hlds_clauses__V_8_8)), ((MR_Box) (hlds__hlds_clauses__V_13_13)));
#line 169 "hlds_clauses.m"
                          return;
                        }
#line 169 "hlds_clauses.m"
                      }
#line 169 "hlds_clauses.m"
                  }
#line 169 "hlds_clauses.m"
              }
#line 169 "hlds_clauses.m"
          }
#line 169 "hlds_clauses.m"
      }
#line 169 "hlds_clauses.m"
  }
#line 169 "hlds_clauses.m"
}

#line 169 "hlds_clauses.m"
MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_0_0(
#line 169 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__1_1,
#line 169 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__2_2)
#line 169 "hlds_clauses.m"
{
#line 169 "hlds_clauses.m"
  {
#line 169 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 169 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastX_13 = (MR_Integer) hlds__hlds_clauses__HeadVar__1_1;
#line 169 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__CastY_14 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;

#line 169 "hlds_clauses.m"
    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_13 == hlds__hlds_clauses__CastY_14);
#line 169 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 169 "hlds_clauses.m"
      hlds__hlds_clauses__succeeded = MR_TRUE;
#line 169 "hlds_clauses.m"
    else
#line 169 "hlds_clauses.m"
      {
#line 169 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__TypeInfo_18_18;
#line 169 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 0)));
#line 169 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 1)));
#line 169 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 2)));
#line 169 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 3)));
#line 169 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 4)));
#line 169 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
#line 169 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
#line 169 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 2)));
#line 169 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 3)));
#line 169 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 4)));

#line 3504 "hlds.hlds_clauses.c"
        {
#line 3506 "hlds.hlds_clauses.c"
          hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_applicable_modes_0_0(hlds__hlds_clauses__V_3_3, hlds__hlds_clauses__V_8_8);
        }
#line 169 "hlds_clauses.m"
        if (hlds__hlds_clauses__succeeded)
#line 169 "hlds_clauses.m"
          {
#line 3513 "hlds.hlds_clauses.c"
            {
#line 3515 "hlds.hlds_clauses.c"
              hlds__hlds_clauses__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(hlds__hlds_clauses__V_4_4, hlds__hlds_clauses__V_9_9);
            }
#line 169 "hlds_clauses.m"
            if (hlds__hlds_clauses__succeeded)
#line 169 "hlds_clauses.m"
              {
#line 3522 "hlds.hlds_clauses.c"
                {
#line 3524 "hlds.hlds_clauses.c"
                  hlds__hlds_clauses__succeeded = hlds__hlds_pred____Unify____implementation_language_0_0(hlds__hlds_clauses__V_5_5, hlds__hlds_clauses__V_10_10);
                }
#line 169 "hlds_clauses.m"
                if (hlds__hlds_clauses__succeeded)
#line 169 "hlds_clauses.m"
                  {
#line 3531 "hlds.hlds_clauses.c"
                    {
#line 3533 "hlds.hlds_clauses.c"
                      hlds__hlds_clauses__succeeded = mercury__term____Unify____context_0_0(hlds__hlds_clauses__V_6_6, hlds__hlds_clauses__V_11_11);
                    }
#line 169 "hlds_clauses.m"
                    if (hlds__hlds_clauses__succeeded)
#line 169 "hlds_clauses.m"
                      {
#line 3540 "hlds.hlds_clauses.c"
                        hlds__hlds_clauses__TypeInfo_18_18 = (MR_Word) &hlds__hlds_clauses_scalar_common_1[2];
#line 3542 "hlds.hlds_clauses.c"
                        {
#line 3544 "hlds.hlds_clauses.c"
                          return hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_18_18, ((MR_Box) (hlds__hlds_clauses__V_7_7)), ((MR_Box) (hlds__hlds_clauses__V_12_12)));
                        }
#line 169 "hlds_clauses.m"
                      }
#line 169 "hlds_clauses.m"
                  }
#line 169 "hlds_clauses.m"
              }
#line 169 "hlds_clauses.m"
          }
#line 169 "hlds_clauses.m"
      }
#line 169 "hlds_clauses.m"
    return hlds__hlds_clauses__succeeded;
#line 169 "hlds_clauses.m"
  }
#line 169 "hlds_clauses.m"
}

#line 322 "hlds_clauses.m"
static void MR_CALL 
hlds__hlds_clauses__add_clause_item_number_regions_4_p_0(
#line 322 "hlds_clauses.m"
  MR_Integer hlds__hlds_clauses__ItemNum_5,
#line 322 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__Context_6,
#line 322 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_Regions_0_23,
#line 322 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_Regions_24)
#line 322 "hlds_clauses.m"
{
#line 328 "hlds_clauses.m"
  {
#line 328 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;

#line 328 "hlds_clauses.m"
    if ((hlds__hlds_clauses__STATE_VARIABLE_Regions_0_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 328 "hlds_clauses.m"
      {
#line 328 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__NewRegion_8;

#line 329 "hlds_clauses.m"
        {
#line 329 "hlds_clauses.m"
          hlds__hlds_clauses__NewRegion_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 329 "hlds_clauses.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_clauses__NewRegion_8, 0) = ((MR_Box) (hlds__hlds_clauses__ItemNum_5));
#line 329 "hlds_clauses.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_clauses__NewRegion_8, 1) = ((MR_Box) (hlds__hlds_clauses__ItemNum_5));
#line 329 "hlds_clauses.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_clauses__NewRegion_8, 2) = ((MR_Box) (hlds__hlds_clauses__Context_6));
#line 329 "hlds_clauses.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_clauses__NewRegion_8, 3) = ((MR_Box) (hlds__hlds_clauses__Context_6));
#line 329 "hlds_clauses.m"
        }
#line 331 "hlds_clauses.m"
        {
#line 331 "hlds_clauses.m"
          MR_Word base;
#line 331 "hlds_clauses.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 331 "hlds_clauses.m"
          *hlds__hlds_clauses__STATE_VARIABLE_Regions_24 = base;
#line 331 "hlds_clauses.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_clauses__NewRegion_8));
#line 331 "hlds_clauses.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 331 "hlds_clauses.m"
        }
#line 328 "hlds_clauses.m"
      }
#line 328 "hlds_clauses.m"
    else
#line 333 "hlds_clauses.m"
      {
#line 333 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__FirstRegion0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__STATE_VARIABLE_Regions_0_23, (MR_Integer) 0)));
#line 333 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__LaterRegions0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__STATE_VARIABLE_Regions_0_23, (MR_Integer) 1)));
#line 333 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__LowerNum0_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion0_9, (MR_Integer) 0)));
#line 333 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__UpperNum0_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion0_9, (MR_Integer) 1)));
#line 333 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__LowerContext0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion0_9, (MR_Integer) 2)));
#line 333 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__UpperContext0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion0_9, (MR_Integer) 3)));
#line 336 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_25_25 = (hlds__hlds_clauses__LowerNum0_11 - (MR_Integer) 1);

#line 336 "hlds_clauses.m"
        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__ItemNum_5 < hlds__hlds_clauses__V_25_25);
#line 340 "hlds_clauses.m"
        if (hlds__hlds_clauses__succeeded)
#line 338 "hlds_clauses.m"
          {
#line 338 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__NewRegion_49;

#line 337 "hlds_clauses.m"
            {
#line 337 "hlds_clauses.m"
              hlds__hlds_clauses__NewRegion_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 337 "hlds_clauses.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_clauses__NewRegion_49, 0) = ((MR_Box) (hlds__hlds_clauses__ItemNum_5));
#line 337 "hlds_clauses.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_clauses__NewRegion_49, 1) = ((MR_Box) (hlds__hlds_clauses__ItemNum_5));
#line 337 "hlds_clauses.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_clauses__NewRegion_49, 2) = ((MR_Box) (hlds__hlds_clauses__Context_6));
#line 337 "hlds_clauses.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_clauses__NewRegion_49, 3) = ((MR_Box) (hlds__hlds_clauses__Context_6));
#line 337 "hlds_clauses.m"
            }
#line 339 "hlds_clauses.m"
            {
#line 339 "hlds_clauses.m"
              MR_Word base;
#line 339 "hlds_clauses.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 339 "hlds_clauses.m"
              *hlds__hlds_clauses__STATE_VARIABLE_Regions_24 = base;
#line 339 "hlds_clauses.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_clauses__NewRegion_49));
#line 339 "hlds_clauses.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hlds_clauses__STATE_VARIABLE_Regions_0_23));
#line 339 "hlds_clauses.m"
            }
#line 338 "hlds_clauses.m"
          }
#line 340 "hlds_clauses.m"
        else
#line 344 "hlds_clauses.m"
          {
#line 340 "hlds_clauses.m"
            MR_Integer hlds__hlds_clauses__V_31_31 = (hlds__hlds_clauses__LowerNum0_11 - hlds__hlds_clauses__ItemNum_5);

#line 340 "hlds_clauses.m"
            hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_31_31 == (MR_Integer) 1);
#line 344 "hlds_clauses.m"
            if (hlds__hlds_clauses__succeeded)
#line 342 "hlds_clauses.m"
              {
#line 342 "hlds_clauses.m"
                MR_Word hlds__hlds_clauses__FirstRegion_15;

#line 341 "hlds_clauses.m"
                {
#line 341 "hlds_clauses.m"
                  hlds__hlds_clauses__FirstRegion_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 341 "hlds_clauses.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_15, 0) = ((MR_Box) (hlds__hlds_clauses__ItemNum_5));
#line 341 "hlds_clauses.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_15, 1) = ((MR_Box) (hlds__hlds_clauses__UpperNum0_12));
#line 341 "hlds_clauses.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_15, 2) = ((MR_Box) (hlds__hlds_clauses__Context_6));
#line 341 "hlds_clauses.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_15, 3) = ((MR_Box) (hlds__hlds_clauses__UpperContext0_14));
#line 341 "hlds_clauses.m"
                }
#line 343 "hlds_clauses.m"
                {
#line 343 "hlds_clauses.m"
                  MR_Word base;
#line 343 "hlds_clauses.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 343 "hlds_clauses.m"
                  *hlds__hlds_clauses__STATE_VARIABLE_Regions_24 = base;
#line 343 "hlds_clauses.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_clauses__FirstRegion_15));
#line 343 "hlds_clauses.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hlds_clauses__LaterRegions0_10));
#line 343 "hlds_clauses.m"
                }
#line 342 "hlds_clauses.m"
              }
#line 344 "hlds_clauses.m"
            else
#line 346 "hlds_clauses.m"
              {
#line 344 "hlds_clauses.m"
                hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__ItemNum_5 <= hlds__hlds_clauses__UpperNum0_12);
#line 346 "hlds_clauses.m"
                if (hlds__hlds_clauses__succeeded)
#line 345 "hlds_clauses.m"
                  {
#line 345 "hlds_clauses.m"
                    {
#line 345 "hlds_clauses.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_clauses", (MR_String) "predicate \140hlds.hlds_clauses.add_clause_item_number_regions\'/4", (MR_String) "duplicate item number");
#line 345 "hlds_clauses.m"
                      return;
                    }
#line 345 "hlds_clauses.m"
                  }
#line 346 "hlds_clauses.m"
                else
#line 350 "hlds_clauses.m"
                  {
#line 346 "hlds_clauses.m"
                    MR_Integer hlds__hlds_clauses__V_36_36 = (hlds__hlds_clauses__ItemNum_5 - hlds__hlds_clauses__UpperNum0_12);

#line 346 "hlds_clauses.m"
                    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_36_36 == (MR_Integer) 1);
#line 350 "hlds_clauses.m"
                    if (hlds__hlds_clauses__succeeded)
#line 348 "hlds_clauses.m"
                      {
#line 348 "hlds_clauses.m"
                        MR_Word hlds__hlds_clauses__FirstRegion_50;

#line 347 "hlds_clauses.m"
                        {
#line 347 "hlds_clauses.m"
                          hlds__hlds_clauses__FirstRegion_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 347 "hlds_clauses.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_50, 0) = ((MR_Box) (hlds__hlds_clauses__LowerNum0_11));
#line 347 "hlds_clauses.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_50, 1) = ((MR_Box) (hlds__hlds_clauses__ItemNum_5));
#line 347 "hlds_clauses.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_50, 2) = ((MR_Box) (hlds__hlds_clauses__LowerContext0_13));
#line 347 "hlds_clauses.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_50, 3) = ((MR_Box) (hlds__hlds_clauses__Context_6));
#line 347 "hlds_clauses.m"
                        }
#line 349 "hlds_clauses.m"
                        {
#line 349 "hlds_clauses.m"
                          MR_Word base;
#line 349 "hlds_clauses.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "hlds_clauses.m"
                          *hlds__hlds_clauses__STATE_VARIABLE_Regions_24 = base;
#line 349 "hlds_clauses.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_clauses__FirstRegion_50));
#line 349 "hlds_clauses.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hlds_clauses__LaterRegions0_10));
#line 349 "hlds_clauses.m"
                        }
#line 348 "hlds_clauses.m"
                      }
#line 350 "hlds_clauses.m"
                    else
#line 352 "hlds_clauses.m"
                      {
#line 352 "hlds_clauses.m"
                        MR_Word hlds__hlds_clauses__LaterRegions1_16;

#line 351 "hlds_clauses.m"
                        {
#line 351 "hlds_clauses.m"
                          hlds__hlds_clauses__add_clause_item_number_regions_4_p_0(hlds__hlds_clauses__ItemNum_5, hlds__hlds_clauses__Context_6, hlds__hlds_clauses__LaterRegions0_10, &hlds__hlds_clauses__LaterRegions1_16);
                        }
#line 358 "hlds_clauses.m"
                        if ((hlds__hlds_clauses__LaterRegions1_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 356 "hlds_clauses.m"
                          {
#line 357 "hlds_clauses.m"
                            {
#line 357 "hlds_clauses.m"
                              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_clauses", (MR_String) "predicate \140hlds.hlds_clauses.add_clause_item_number_regions\'/4", (MR_String) "insertion yields empty list");
#line 357 "hlds_clauses.m"
                              return;
                            }
#line 356 "hlds_clauses.m"
                          }
#line 358 "hlds_clauses.m"
                        else
#line 359 "hlds_clauses.m"
                          {
#line 359 "hlds_clauses.m"
                            MR_Word hlds__hlds_clauses__FirstLaterRegion1_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__LaterRegions1_16, (MR_Integer) 0)));
#line 359 "hlds_clauses.m"
                            MR_Word hlds__hlds_clauses__LaterLaterRegions1_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__LaterRegions1_16, (MR_Integer) 1)));
#line 359 "hlds_clauses.m"
                            MR_Integer hlds__hlds_clauses__LowerNum1_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstLaterRegion1_17, (MR_Integer) 0)));
#line 359 "hlds_clauses.m"
                            MR_Integer hlds__hlds_clauses__UpperNum1_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstLaterRegion1_17, (MR_Integer) 1)));
#line 359 "hlds_clauses.m"
                            MR_Word hlds__hlds_clauses__UpperContext1_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstLaterRegion1_17, (MR_Integer) 3)));
#line 360 "hlds_clauses.m"
                            MR_Word hlds__hlds_clauses___LowerContext1_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstLaterRegion1_17, (MR_Integer) 2)));
#line 362 "hlds_clauses.m"
                            MR_Integer hlds__hlds_clauses__V_38_38 = (hlds__hlds_clauses__LowerNum1_19 - hlds__hlds_clauses__UpperNum0_12);

#line 362 "hlds_clauses.m"
                            hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_38_38 == (MR_Integer) 1);
#line 367 "hlds_clauses.m"
                            if (hlds__hlds_clauses__succeeded)
#line 365 "hlds_clauses.m"
                              {
#line 365 "hlds_clauses.m"
                                MR_Word hlds__hlds_clauses__FirstRegion_51;

#line 363 "hlds_clauses.m"
                                {
#line 363 "hlds_clauses.m"
                                  hlds__hlds_clauses__FirstRegion_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 363 "hlds_clauses.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_51, 0) = ((MR_Box) (hlds__hlds_clauses__LowerNum0_11));
#line 363 "hlds_clauses.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_51, 1) = ((MR_Box) (hlds__hlds_clauses__UpperNum1_20));
#line 363 "hlds_clauses.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_51, 2) = ((MR_Box) (hlds__hlds_clauses__LowerContext0_13));
#line 363 "hlds_clauses.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_51, 3) = ((MR_Box) (hlds__hlds_clauses__UpperContext1_22));
#line 363 "hlds_clauses.m"
                                }
#line 366 "hlds_clauses.m"
                                {
#line 366 "hlds_clauses.m"
                                  MR_Word base;
#line 366 "hlds_clauses.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 366 "hlds_clauses.m"
                                  *hlds__hlds_clauses__STATE_VARIABLE_Regions_24 = base;
#line 366 "hlds_clauses.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_clauses__FirstRegion_51));
#line 366 "hlds_clauses.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hlds_clauses__LaterLaterRegions1_18));
#line 366 "hlds_clauses.m"
                                }
#line 365 "hlds_clauses.m"
                              }
#line 367 "hlds_clauses.m"
                            else
#line 368 "hlds_clauses.m"
                              {
#line 368 "hlds_clauses.m"
                                MR_Word base;
#line 368 "hlds_clauses.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 368 "hlds_clauses.m"
                                *hlds__hlds_clauses__STATE_VARIABLE_Regions_24 = base;
#line 368 "hlds_clauses.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_clauses__FirstRegion0_9));
#line 368 "hlds_clauses.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hlds_clauses__LaterRegions1_16));
#line 368 "hlds_clauses.m"
                              }
#line 359 "hlds_clauses.m"
                          }
#line 352 "hlds_clauses.m"
                      }
#line 350 "hlds_clauses.m"
                  }
#line 346 "hlds_clauses.m"
              }
#line 344 "hlds_clauses.m"
          }
#line 333 "hlds_clauses.m"
      }
#line 328 "hlds_clauses.m"
  }
#line 322 "hlds_clauses.m"
}

#line 237 "hlds_clauses.m"
MR_Word MR_CALL 
hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0(void)
#line 237 "hlds_clauses.m"
{
#line 265 "hlds_clauses.m"
  {
#line 265 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;

#line 265 "hlds_clauses.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 265 "hlds_clauses.m"
  }
#line 237 "hlds_clauses.m"
}

#line 236 "hlds_clauses.m"
MR_Word MR_CALL 
hlds__hlds_clauses__init_clause_item_numbers_user_0_f_0(void)
#line 236 "hlds_clauses.m"
{
#line 264 "hlds_clauses.m"
  {
#line 264 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;

#line 264 "hlds_clauses.m"
    return (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_clauses_scalar_common_1[9]);
#line 264 "hlds_clauses.m"
  }
#line 236 "hlds_clauses.m"
}

#line 232 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__add_clause_item_number_5_p_0(
#line 232 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__MaybeItemNumber_6,
#line 232 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__Context_7,
#line 232 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__Type_8,
#line 232 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_0_17,
#line 232 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_18)
#line 232 "hlds_clauses.m"
{
#line 280 "hlds_clauses.m"
  {
#line 280 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;

#line 280 "hlds_clauses.m"
    if ((hlds__hlds_clauses__MaybeItemNumber_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 296 "hlds_clauses.m"
      *hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_18 = hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_0_17;
#line 280 "hlds_clauses.m"
    else
#line 299 "hlds_clauses.m"
      {
#line 299 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__ItemNumber_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__MaybeItemNumber_6, (MR_Integer) 0)));

#line 313 "hlds_clauses.m"
        if ((hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 314 "hlds_clauses.m"
          *hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_18 = hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_0_17;
#line 313 "hlds_clauses.m"
        else
#line 301 "hlds_clauses.m"
          {
#line 301 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__MercuryRegions0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_0_17, (MR_Integer) 0)));
#line 301 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__BothRegions0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_0_17, (MR_Integer) 1)));
#line 301 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__MercuryRegions_15;
#line 301 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__BothRegions_16;

#line 306 "hlds_clauses.m"
            if ((hlds__hlds_clauses__Type_8 == (MR_Integer) 0))
#line 304 "hlds_clauses.m"
              {
#line 304 "hlds_clauses.m"
                hlds__hlds_clauses__add_clause_item_number_regions_4_p_0(hlds__hlds_clauses__ItemNumber_12, hlds__hlds_clauses__Context_7, hlds__hlds_clauses__MercuryRegions0_13, &hlds__hlds_clauses__MercuryRegions_15);
              }
#line 306 "hlds_clauses.m"
            else
#line 308 "hlds_clauses.m"
              hlds__hlds_clauses__MercuryRegions_15 = hlds__hlds_clauses__MercuryRegions0_13;
#line 310 "hlds_clauses.m"
            {
#line 310 "hlds_clauses.m"
              hlds__hlds_clauses__add_clause_item_number_regions_4_p_0(hlds__hlds_clauses__ItemNumber_12, hlds__hlds_clauses__Context_7, hlds__hlds_clauses__BothRegions0_14, &hlds__hlds_clauses__BothRegions_16);
            }
#line 312 "hlds_clauses.m"
            {
#line 312 "hlds_clauses.m"
              MR_Word base;
#line 312 "hlds_clauses.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "hlds_clauses.m"
              *hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_18 = base;
#line 312 "hlds_clauses.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_clauses__MercuryRegions_15));
#line 312 "hlds_clauses.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hlds_clauses__BothRegions_16));
#line 312 "hlds_clauses.m"
            }
#line 301 "hlds_clauses.m"
          }
#line 299 "hlds_clauses.m"
      }
#line 280 "hlds_clauses.m"
  }
#line 232 "hlds_clauses.m"
}

#line 223 "hlds_clauses.m"
MR_bool MR_CALL 
hlds__hlds_clauses__clauses_are_non_contiguous_5_p_0(
#line 223 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__ClauseItemNumbers_6,
#line 223 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__Type_7,
#line 223 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__FirstRegion_8,
#line 223 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__SecondRegion_9,
#line 223 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__LaterRegions_10)
#line 223 "hlds_clauses.m"
{
#line 268 "hlds_clauses.m"
  {
#line 268 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded = ((MR_tag((MR_Word) hlds__hlds_clauses__ClauseItemNumbers_6)) == (MR_mktag((MR_Integer) 1)));
#line 268 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__MercuryRegions_11;
#line 268 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__BothRegions_12;

#line 269 "hlds_clauses.m"
    if (hlds__hlds_clauses__succeeded)
#line 269 "hlds_clauses.m"
      {
#line 269 "hlds_clauses.m"
        hlds__hlds_clauses__MercuryRegions_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__ClauseItemNumbers_6, (MR_Integer) 0)));
#line 269 "hlds_clauses.m"
        hlds__hlds_clauses__BothRegions_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__ClauseItemNumbers_6, (MR_Integer) 1)));
#line 273 "hlds_clauses.m"
        if ((hlds__hlds_clauses__Type_7 == (MR_Integer) 1))
#line 274 "hlds_clauses.m"
          {
#line 274 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__V_13_13;

#line 275 "hlds_clauses.m"
            hlds__hlds_clauses__succeeded = ((MR_tag((MR_Word) hlds__hlds_clauses__BothRegions_12)) == (MR_mktag((MR_Integer) 1)));
#line 275 "hlds_clauses.m"
            if (hlds__hlds_clauses__succeeded)
#line 275 "hlds_clauses.m"
              {
#line 275 "hlds_clauses.m"
                *hlds__hlds_clauses__FirstRegion_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__BothRegions_12, (MR_Integer) 0)));
#line 275 "hlds_clauses.m"
                hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__BothRegions_12, (MR_Integer) 1)));
#line 275 "hlds_clauses.m"
                hlds__hlds_clauses__succeeded = ((MR_tag((MR_Word) hlds__hlds_clauses__V_13_13)) == (MR_mktag((MR_Integer) 1)));
#line 275 "hlds_clauses.m"
                if (hlds__hlds_clauses__succeeded)
#line 275 "hlds_clauses.m"
                  {
#line 275 "hlds_clauses.m"
                    *hlds__hlds_clauses__SecondRegion_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__V_13_13, (MR_Integer) 0)));
#line 275 "hlds_clauses.m"
                    *hlds__hlds_clauses__LaterRegions_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__V_13_13, (MR_Integer) 1)));
#line 275 "hlds_clauses.m"
                  }
#line 275 "hlds_clauses.m"
              }
#line 274 "hlds_clauses.m"
          }
#line 273 "hlds_clauses.m"
        else
#line 271 "hlds_clauses.m"
          {
#line 271 "hlds_clauses.m"
            MR_Word hlds__hlds_clauses__V_14_14;

#line 272 "hlds_clauses.m"
            hlds__hlds_clauses__succeeded = ((MR_tag((MR_Word) hlds__hlds_clauses__MercuryRegions_11)) == (MR_mktag((MR_Integer) 1)));
#line 272 "hlds_clauses.m"
            if (hlds__hlds_clauses__succeeded)
#line 272 "hlds_clauses.m"
              {
#line 272 "hlds_clauses.m"
                *hlds__hlds_clauses__FirstRegion_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__MercuryRegions_11, (MR_Integer) 0)));
#line 272 "hlds_clauses.m"
                hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__MercuryRegions_11, (MR_Integer) 1)));
#line 272 "hlds_clauses.m"
                hlds__hlds_clauses__succeeded = ((MR_tag((MR_Word) hlds__hlds_clauses__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 272 "hlds_clauses.m"
                if (hlds__hlds_clauses__succeeded)
#line 272 "hlds_clauses.m"
                  {
#line 272 "hlds_clauses.m"
                    *hlds__hlds_clauses__SecondRegion_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__V_14_14, (MR_Integer) 0)));
#line 272 "hlds_clauses.m"
                    *hlds__hlds_clauses__LaterRegions_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__V_14_14, (MR_Integer) 1)));
#line 272 "hlds_clauses.m"
                  }
#line 272 "hlds_clauses.m"
              }
#line 271 "hlds_clauses.m"
          }
#line 269 "hlds_clauses.m"
      }
#line 268 "hlds_clauses.m"
    return hlds__hlds_clauses__succeeded;
#line 268 "hlds_clauses.m"
  }
#line 223 "hlds_clauses.m"
}

#line 179 "hlds_clauses.m"
MR_Word MR_CALL 
hlds__hlds_clauses__clause_body_1_f_0(
#line 179 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVar__1_1)
#line 179 "hlds_clauses.m"
{
#line 179 "hlds_clauses.m"
  {
#line 179 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 179 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 1)));
#line 179 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 0)));
#line 179 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 2)));
#line 179 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 3)));
#line 179 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 4)));

#line 179 "hlds_clauses.m"
    return hlds__hlds_clauses__HeadVar__2_2;
#line 179 "hlds_clauses.m"
  }
#line 179 "hlds_clauses.m"
}

#line 166 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_set_rtti_varmaps_3_p_0(
#line 166 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__X_4,
#line 166 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_CI_0_6,
#line 166 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_CI_7)
#line 166 "hlds_clauses.m"
{
#line 424 "hlds_clauses.m"
  {
#line 424 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 424 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
#line 424 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
#line 424 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 2)));
#line 424 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 3)));
#line 424 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 4)));
#line 424 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 5)));
#line 424 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 6)));
#line 424 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 8)));
#line 424 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 7)));

#line 424 "hlds_clauses.m"
    {
#line 424 "hlds_clauses.m"
      MR_Word base;
#line 424 "hlds_clauses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 424 "hlds_clauses.m"
      *hlds__hlds_clauses__STATE_VARIABLE_CI_7 = base;
#line 424 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__V_9_9));
#line 424 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__V_10_10));
#line 424 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_clauses__V_11_11));
#line 424 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_clauses__V_12_12));
#line 424 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_clauses__V_13_13));
#line 424 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_clauses__V_14_14));
#line 424 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_clauses__V_15_15));
#line 424 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_clauses__X_4));
#line 424 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_clauses__V_17_17));
#line 424 "hlds_clauses.m"
    }
#line 424 "hlds_clauses.m"
  }
#line 166 "hlds_clauses.m"
}

#line 163 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(
#line 163 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__X_4,
#line 163 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_CI_0_6,
#line 163 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_CI_7)
#line 163 "hlds_clauses.m"
{
#line 417 "hlds_clauses.m"
  {
#line 417 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 417 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
#line 417 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
#line 417 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 2)));
#line 417 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 4)));
#line 417 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 5)));
#line 417 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 6)));
#line 417 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 7)));
#line 417 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 8)));
#line 417 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 3)));

#line 417 "hlds_clauses.m"
    {
#line 417 "hlds_clauses.m"
      MR_Word base;
#line 417 "hlds_clauses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 417 "hlds_clauses.m"
      *hlds__hlds_clauses__STATE_VARIABLE_CI_7 = base;
#line 417 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__V_9_9));
#line 417 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__V_10_10));
#line 417 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_clauses__V_11_11));
#line 417 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_clauses__X_4));
#line 417 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_clauses__V_13_13));
#line 417 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_clauses__V_14_14));
#line 417 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_clauses__V_15_15));
#line 417 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_clauses__V_16_16));
#line 417 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_clauses__V_17_17));
#line 417 "hlds_clauses.m"
    }
#line 417 "hlds_clauses.m"
  }
#line 163 "hlds_clauses.m"
}

#line 157 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_set_explicit_vartypes_3_p_0(
#line 157 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__X_4,
#line 157 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_CI_0_6,
#line 157 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_CI_7)
#line 157 "hlds_clauses.m"
{
#line 415 "hlds_clauses.m"
  {
#line 415 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 415 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
#line 415 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 2)));
#line 415 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 3)));
#line 415 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 4)));
#line 415 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 5)));
#line 415 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 6)));
#line 415 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 7)));
#line 415 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 8)));
#line 415 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));

#line 415 "hlds_clauses.m"
    {
#line 415 "hlds_clauses.m"
      MR_Word base;
#line 415 "hlds_clauses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 415 "hlds_clauses.m"
      *hlds__hlds_clauses__STATE_VARIABLE_CI_7 = base;
#line 415 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__V_9_9));
#line 415 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__X_4));
#line 415 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_clauses__V_11_11));
#line 415 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_clauses__V_12_12));
#line 415 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_clauses__V_13_13));
#line 415 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_clauses__V_14_14));
#line 415 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_clauses__V_15_15));
#line 415 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_clauses__V_16_16));
#line 415 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_clauses__V_17_17));
#line 415 "hlds_clauses.m"
    }
#line 415 "hlds_clauses.m"
  }
#line 157 "hlds_clauses.m"
}

#line 151 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_set_varset_3_p_0(
#line 151 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__X_4,
#line 151 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_CI_0_6,
#line 151 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_CI_7)
#line 151 "hlds_clauses.m"
{
#line 413 "hlds_clauses.m"
  {
#line 413 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 413 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
#line 413 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 2)));
#line 413 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 3)));
#line 413 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 4)));
#line 413 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 5)));
#line 413 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 6)));
#line 413 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 7)));
#line 413 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 8)));
#line 413 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));

#line 413 "hlds_clauses.m"
    {
#line 413 "hlds_clauses.m"
      MR_Word base;
#line 413 "hlds_clauses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 413 "hlds_clauses.m"
      *hlds__hlds_clauses__STATE_VARIABLE_CI_7 = base;
#line 413 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__X_4));
#line 413 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__V_10_10));
#line 413 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_clauses__V_11_11));
#line 413 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_clauses__V_12_12));
#line 413 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_clauses__V_13_13));
#line 413 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_clauses__V_14_14));
#line 413 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_clauses__V_15_15));
#line 413 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_clauses__V_16_16));
#line 413 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_clauses__V_17_17));
#line 413 "hlds_clauses.m"
    }
#line 413 "hlds_clauses.m"
  }
#line 151 "hlds_clauses.m"
}

#line 148 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(
#line 148 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__X_5,
#line 148 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__Y_6,
#line 148 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_CI_0_8,
#line 148 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_CI_9)
#line 148 "hlds_clauses.m"
{
#line 420 "hlds_clauses.m"
  {
#line 420 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 420 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 0)));
#line 420 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 1)));
#line 420 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 2)));
#line 420 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 3)));
#line 420 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 4)));
#line 420 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 7)));
#line 420 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 8)));
#line 421 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 5)));
#line 421 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 6)));

#line 422 "hlds_clauses.m"
    {
#line 422 "hlds_clauses.m"
      MR_Word base;
#line 422 "hlds_clauses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 422 "hlds_clauses.m"
      *hlds__hlds_clauses__STATE_VARIABLE_CI_9 = base;
#line 422 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__V_12_12));
#line 422 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__V_13_13));
#line 422 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_clauses__V_14_14));
#line 422 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_clauses__V_15_15));
#line 422 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_clauses__V_16_16));
#line 422 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_clauses__X_5));
#line 422 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_clauses__Y_6));
#line 422 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_clauses__V_19_19));
#line 422 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_clauses__V_20_20));
#line 422 "hlds_clauses.m"
    }
#line 420 "hlds_clauses.m"
  }
#line 148 "hlds_clauses.m"
}

#line 145 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_set_headvars_3_p_0(
#line 145 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__X_4,
#line 145 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_CI_0_6,
#line 145 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_CI_7)
#line 145 "hlds_clauses.m"
{
#line 419 "hlds_clauses.m"
  {
#line 419 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 419 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
#line 419 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
#line 419 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 2)));
#line 419 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 3)));
#line 419 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 5)));
#line 419 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 6)));
#line 419 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 7)));
#line 419 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 8)));
#line 419 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 4)));

#line 419 "hlds_clauses.m"
    {
#line 419 "hlds_clauses.m"
      MR_Word base;
#line 419 "hlds_clauses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 419 "hlds_clauses.m"
      *hlds__hlds_clauses__STATE_VARIABLE_CI_7 = base;
#line 419 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__V_9_9));
#line 419 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__V_10_10));
#line 419 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_clauses__V_11_11));
#line 419 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_clauses__V_12_12));
#line 419 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_clauses__X_4));
#line 419 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_clauses__V_14_14));
#line 419 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_clauses__V_15_15));
#line 419 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_clauses__V_16_16));
#line 419 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_clauses__V_17_17));
#line 419 "hlds_clauses.m"
    }
#line 419 "hlds_clauses.m"
  }
#line 145 "hlds_clauses.m"
}

#line 142 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_clauses_4_p_0(
#line 142 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__Clauses_5,
#line 142 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__ItemNumbers_6,
#line 142 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_CI_0_14,
#line 142 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_CI_15)
#line 142 "hlds_clauses.m"
{
#line 497 "hlds_clauses.m"
  {
#line 497 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 497 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__ClausesRep_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_14, (MR_Integer) 5)));
#line 498 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_14, (MR_Integer) 0)));
#line 498 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_14, (MR_Integer) 1)));
#line 498 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_14, (MR_Integer) 2)));
#line 498 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_14, (MR_Integer) 3)));
#line 498 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_14, (MR_Integer) 4)));
#line 498 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_24_24;
#line 498 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_25_25;

#line 498 "hlds_clauses.m"
    *hlds__hlds_clauses__ItemNumbers_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_14, (MR_Integer) 6)));
#line 498 "hlds_clauses.m"
    hlds__hlds_clauses__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_14, (MR_Integer) 7)));
#line 498 "hlds_clauses.m"
    hlds__hlds_clauses__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_14, (MR_Integer) 8)));
#line 504 "hlds_clauses.m"
    if (((MR_tag((MR_Word) hlds__hlds_clauses__ClausesRep_8)) == (MR_mktag((MR_Integer) 2))))
#line 507 "hlds_clauses.m"
      {
#line 507 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_clauses__ClausesRep_8, (MR_Integer) 0)));
#line 507 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_clauses__ClausesRep_8, (MR_Integer) 1)));

#line 507 "hlds_clauses.m"
        *hlds__hlds_clauses__Clauses_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_clauses__ClausesRep_8, (MR_Integer) 2)));
#line 507 "hlds_clauses.m"
        *hlds__hlds_clauses__STATE_VARIABLE_CI_15 = hlds__hlds_clauses__STATE_VARIABLE_CI_0_14;
#line 507 "hlds_clauses.m"
      }
#line 504 "hlds_clauses.m"
    else
#line 504 "hlds_clauses.m"
      if (((MR_tag((MR_Word) hlds__hlds_clauses__ClausesRep_8)) == (MR_mktag((MR_Integer) 1))))
#line 505 "hlds_clauses.m"
        {
#line 505 "hlds_clauses.m"
          MR_Integer hlds__hlds_clauses__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__ClausesRep_8, (MR_Integer) 0)));

#line 505 "hlds_clauses.m"
          *hlds__hlds_clauses__Clauses_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__ClausesRep_8, (MR_Integer) 1)));
#line 505 "hlds_clauses.m"
          *hlds__hlds_clauses__STATE_VARIABLE_CI_15 = hlds__hlds_clauses__STATE_VARIABLE_CI_0_14;
#line 505 "hlds_clauses.m"
        }
#line 504 "hlds_clauses.m"
      else
#line 501 "hlds_clauses.m"
        {
#line 501 "hlds_clauses.m"
          MR_Integer hlds__hlds_clauses__NumClauses_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_8, (MR_Integer) 0)));
#line 501 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__RevClauses_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_8, (MR_Integer) 1)));
#line 501 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__V_17_17;
#line 503 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__V_34_34;
#line 503 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__V_35_35;
#line 503 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__V_36_36;
#line 503 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__V_37_37;
#line 503 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__V_38_38;
#line 503 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__V_40_40;
#line 503 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__V_41_41;
#line 503 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__V_42_42;
#line 503 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__V_39_39;

#line 502 "hlds_clauses.m"
          {
#line 502 "hlds_clauses.m"
            mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, hlds__hlds_clauses__RevClauses_10, hlds__hlds_clauses__Clauses_5);
          }
#line 503 "hlds_clauses.m"
          {
#line 503 "hlds_clauses.m"
            hlds__hlds_clauses__V_17_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 503 "hlds_clauses.m"
            MR_hl_field(MR_mktag(2), hlds__hlds_clauses__V_17_17, 0) = ((MR_Box) (hlds__hlds_clauses__NumClauses_9));
#line 503 "hlds_clauses.m"
            MR_hl_field(MR_mktag(2), hlds__hlds_clauses__V_17_17, 1) = ((MR_Box) (hlds__hlds_clauses__RevClauses_10));
#line 503 "hlds_clauses.m"
            MR_hl_field(MR_mktag(2), hlds__hlds_clauses__V_17_17, 2) = ((MR_Box) (*hlds__hlds_clauses__Clauses_5));
#line 503 "hlds_clauses.m"
          }
#line 503 "hlds_clauses.m"
          hlds__hlds_clauses__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_14, (MR_Integer) 0)));
#line 503 "hlds_clauses.m"
          hlds__hlds_clauses__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_14, (MR_Integer) 1)));
#line 503 "hlds_clauses.m"
          hlds__hlds_clauses__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_14, (MR_Integer) 2)));
#line 503 "hlds_clauses.m"
          hlds__hlds_clauses__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_14, (MR_Integer) 3)));
#line 503 "hlds_clauses.m"
          hlds__hlds_clauses__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_14, (MR_Integer) 4)));
#line 503 "hlds_clauses.m"
          hlds__hlds_clauses__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_14, (MR_Integer) 5)));
#line 503 "hlds_clauses.m"
          hlds__hlds_clauses__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_14, (MR_Integer) 6)));
#line 503 "hlds_clauses.m"
          hlds__hlds_clauses__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_14, (MR_Integer) 7)));
#line 503 "hlds_clauses.m"
          hlds__hlds_clauses__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_14, (MR_Integer) 8)));
#line 503 "hlds_clauses.m"
          {
#line 503 "hlds_clauses.m"
            MR_Word base;
#line 503 "hlds_clauses.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 503 "hlds_clauses.m"
            *hlds__hlds_clauses__STATE_VARIABLE_CI_15 = base;
#line 503 "hlds_clauses.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__V_34_34));
#line 503 "hlds_clauses.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__V_35_35));
#line 503 "hlds_clauses.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_clauses__V_36_36));
#line 503 "hlds_clauses.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_clauses__V_37_37));
#line 503 "hlds_clauses.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_clauses__V_38_38));
#line 503 "hlds_clauses.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_clauses__V_17_17));
#line 503 "hlds_clauses.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_clauses__V_40_40));
#line 503 "hlds_clauses.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_clauses__V_41_41));
#line 503 "hlds_clauses.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_clauses__V_42_42));
#line 503 "hlds_clauses.m"
          }
#line 501 "hlds_clauses.m"
        }
#line 497 "hlds_clauses.m"
  }
#line 142 "hlds_clauses.m"
}

#line 136 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(
#line 136 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__CI_4,
#line 136 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__2_2,
#line 136 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__3_3)
#line 136 "hlds_clauses.m"
{
#line 409 "hlds_clauses.m"
  {
#line 409 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 409 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 0)));
#line 409 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 1)));
#line 409 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 2)));
#line 409 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 3)));
#line 409 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 4)));
#line 409 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_11_11;
#line 409 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_12_12;

#line 409 "hlds_clauses.m"
    *hlds__hlds_clauses__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 5)));
#line 409 "hlds_clauses.m"
    *hlds__hlds_clauses__HeadVar__3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 6)));
#line 409 "hlds_clauses.m"
    hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 7)));
#line 409 "hlds_clauses.m"
    hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 8)));
#line 409 "hlds_clauses.m"
  }
#line 136 "hlds_clauses.m"
}

#line 133 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(
#line 133 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__CI_3,
#line 133 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__List_4)
#line 133 "hlds_clauses.m"
{
#line 407 "hlds_clauses.m"
  {
#line 407 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 407 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 4)));
#line 408 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 0)));
#line 408 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 1)));
#line 408 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 2)));
#line 408 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 3)));
#line 408 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 5)));
#line 408 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 6)));
#line 408 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 7)));
#line 408 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 8)));

#line 408 "hlds_clauses.m"
    {
#line 408 "hlds_clauses.m"
      *hlds__hlds_clauses__List_4 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[1], hlds__hlds_clauses__V_5_5);
    }
#line 407 "hlds_clauses.m"
  }
#line 133 "hlds_clauses.m"
}

#line 126 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_get_headvars_2_p_0(
#line 126 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__CI_3,
#line 126 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__2_2)
#line 126 "hlds_clauses.m"
{
#line 406 "hlds_clauses.m"
  {
#line 406 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 406 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 0)));
#line 406 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 1)));
#line 406 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 2)));
#line 406 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 3)));
#line 406 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_8_8;
#line 406 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_9_9;
#line 406 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_10_10;
#line 406 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_11_11;

#line 406 "hlds_clauses.m"
    *hlds__hlds_clauses__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 4)));
#line 406 "hlds_clauses.m"
    hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 5)));
#line 406 "hlds_clauses.m"
    hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 6)));
#line 406 "hlds_clauses.m"
    hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 7)));
#line 406 "hlds_clauses.m"
    hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 8)));
#line 406 "hlds_clauses.m"
  }
#line 126 "hlds_clauses.m"
}

#line 123 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_get_rtti_varmaps_2_p_0(
#line 123 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__CI_3,
#line 123 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__2_2)
#line 123 "hlds_clauses.m"
{
#line 410 "hlds_clauses.m"
  {
#line 410 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 410 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 0)));
#line 410 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 1)));
#line 410 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 2)));
#line 410 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 3)));
#line 410 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 4)));
#line 410 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 5)));
#line 410 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 6)));
#line 410 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_11_11;

#line 410 "hlds_clauses.m"
    *hlds__hlds_clauses__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 7)));
#line 410 "hlds_clauses.m"
    hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 8)));
#line 410 "hlds_clauses.m"
  }
#line 123 "hlds_clauses.m"
}

#line 121 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(
#line 121 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__CI_3,
#line 121 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__2_2)
#line 121 "hlds_clauses.m"
{
#line 405 "hlds_clauses.m"
  {
#line 405 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 405 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 0)));
#line 405 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 1)));
#line 405 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 2)));
#line 405 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_7_7;
#line 405 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_8_8;
#line 405 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_9_9;
#line 405 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_10_10;
#line 405 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_11_11;

#line 405 "hlds_clauses.m"
    *hlds__hlds_clauses__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 3)));
#line 405 "hlds_clauses.m"
    hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 4)));
#line 405 "hlds_clauses.m"
    hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 5)));
#line 405 "hlds_clauses.m"
    hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 6)));
#line 405 "hlds_clauses.m"
    hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 7)));
#line 405 "hlds_clauses.m"
    hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 8)));
#line 405 "hlds_clauses.m"
  }
#line 121 "hlds_clauses.m"
}

#line 115 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_get_explicit_vartypes_2_p_0(
#line 115 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__CI_3,
#line 115 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__2_2)
#line 115 "hlds_clauses.m"
{
#line 404 "hlds_clauses.m"
  {
#line 404 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 404 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 0)));
#line 404 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_5_5;
#line 404 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_6_6;
#line 404 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_7_7;
#line 404 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_8_8;
#line 404 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_9_9;
#line 404 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_10_10;
#line 404 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_11_11;

#line 404 "hlds_clauses.m"
    *hlds__hlds_clauses__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 1)));
#line 404 "hlds_clauses.m"
    hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 2)));
#line 404 "hlds_clauses.m"
    hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 3)));
#line 404 "hlds_clauses.m"
    hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 4)));
#line 404 "hlds_clauses.m"
    hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 5)));
#line 404 "hlds_clauses.m"
    hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 6)));
#line 404 "hlds_clauses.m"
    hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 7)));
#line 404 "hlds_clauses.m"
    hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 8)));
#line 404 "hlds_clauses.m"
  }
#line 115 "hlds_clauses.m"
}

#line 110 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_get_varset_2_p_0(
#line 110 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__CI_3,
#line 110 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__2_2)
#line 110 "hlds_clauses.m"
{
#line 403 "hlds_clauses.m"
  {
#line 403 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 403 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_4_4;
#line 403 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_5_5;
#line 403 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_6_6;
#line 403 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_7_7;
#line 403 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_8_8;
#line 403 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_9_9;
#line 403 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_10_10;
#line 403 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_11_11;

#line 403 "hlds_clauses.m"
    *hlds__hlds_clauses__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 0)));
#line 403 "hlds_clauses.m"
    hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 1)));
#line 403 "hlds_clauses.m"
    hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 2)));
#line 403 "hlds_clauses.m"
    hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 3)));
#line 403 "hlds_clauses.m"
    hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 4)));
#line 403 "hlds_clauses.m"
    hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 5)));
#line 403 "hlds_clauses.m"
    hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 6)));
#line 403 "hlds_clauses.m"
    hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 7)));
#line 403 "hlds_clauses.m"
    hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 8)));
#line 403 "hlds_clauses.m"
  }
#line 110 "hlds_clauses.m"
}

#line 108 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__set_clause_list_2_p_0(
#line 108 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__Clauses_3,
#line 108 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__HeadVar__2_2)
#line 108 "hlds_clauses.m"
{
#line 495 "hlds_clauses.m"
  {
#line 495 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 495 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__V_4_4;

#line 495 "hlds_clauses.m"
    {
#line 495 "hlds_clauses.m"
      hlds__hlds_clauses__V_4_4 = mercury__list__length_1_f_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, hlds__hlds_clauses__Clauses_3);
    }
#line 495 "hlds_clauses.m"
    {
#line 495 "hlds_clauses.m"
      MR_Word base;
#line 495 "hlds_clauses.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 495 "hlds_clauses.m"
      *hlds__hlds_clauses__HeadVar__2_2 = base;
#line 495 "hlds_clauses.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_clauses__V_4_4));
#line 495 "hlds_clauses.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hlds_clauses__Clauses_3));
#line 495 "hlds_clauses.m"
    }
#line 495 "hlds_clauses.m"
  }
#line 108 "hlds_clauses.m"
}

#line 104 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__get_clause_list_2_p_0(
#line 104 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__ClausesRep_3,
#line 104 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__Clauses_4)
#line 104 "hlds_clauses.m"
{
#line 487 "hlds_clauses.m"
  {
#line 487 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;

#line 487 "hlds_clauses.m"
    if (((MR_tag((MR_Word) hlds__hlds_clauses__ClausesRep_3)) == (MR_mktag((MR_Integer) 2))))
#line 492 "hlds_clauses.m"
      {
#line 492 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 0)));
#line 492 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 1)));

#line 492 "hlds_clauses.m"
        *hlds__hlds_clauses__Clauses_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 2)));
#line 492 "hlds_clauses.m"
      }
#line 487 "hlds_clauses.m"
    else
#line 487 "hlds_clauses.m"
      if (((MR_tag((MR_Word) hlds__hlds_clauses__ClausesRep_3)) == (MR_mktag((MR_Integer) 1))))
#line 490 "hlds_clauses.m"
        {
#line 490 "hlds_clauses.m"
          MR_Integer hlds__hlds_clauses__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 0)));

#line 490 "hlds_clauses.m"
          *hlds__hlds_clauses__Clauses_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 1)));
#line 490 "hlds_clauses.m"
        }
#line 487 "hlds_clauses.m"
      else
#line 487 "hlds_clauses.m"
        {
#line 487 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__RevClauses_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 1)));
#line 487 "hlds_clauses.m"
          MR_Integer hlds__hlds_clauses__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 0)));

#line 488 "hlds_clauses.m"
          {
#line 488 "hlds_clauses.m"
            mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, hlds__hlds_clauses__RevClauses_6, hlds__hlds_clauses__Clauses_4);
#line 488 "hlds_clauses.m"
            return;
          }
#line 487 "hlds_clauses.m"
        }
#line 487 "hlds_clauses.m"
  }
#line 104 "hlds_clauses.m"
}

#line 100 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__get_clause_list_any_order_2_p_0(
#line 100 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__ClausesRep_3,
#line 100 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__Clauses_4)
#line 100 "hlds_clauses.m"
{
#line 478 "hlds_clauses.m"
  {
#line 478 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;

#line 478 "hlds_clauses.m"
    if (((MR_tag((MR_Word) hlds__hlds_clauses__ClausesRep_3)) == (MR_mktag((MR_Integer) 2))))
#line 482 "hlds_clauses.m"
      {
#line 482 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 0)));
#line 482 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 1)));

#line 482 "hlds_clauses.m"
        *hlds__hlds_clauses__Clauses_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 2)));
#line 482 "hlds_clauses.m"
      }
#line 478 "hlds_clauses.m"
    else
#line 478 "hlds_clauses.m"
      if (((MR_tag((MR_Word) hlds__hlds_clauses__ClausesRep_3)) == (MR_mktag((MR_Integer) 1))))
#line 480 "hlds_clauses.m"
        {
#line 480 "hlds_clauses.m"
          MR_Integer hlds__hlds_clauses__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 0)));

#line 480 "hlds_clauses.m"
          *hlds__hlds_clauses__Clauses_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 1)));
#line 480 "hlds_clauses.m"
        }
#line 478 "hlds_clauses.m"
      else
#line 478 "hlds_clauses.m"
        {
#line 478 "hlds_clauses.m"
          MR_Integer hlds__hlds_clauses__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 0)));

#line 478 "hlds_clauses.m"
          *hlds__hlds_clauses__Clauses_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 1)));
#line 478 "hlds_clauses.m"
        }
#line 478 "hlds_clauses.m"
  }
#line 100 "hlds_clauses.m"
}

#line 95 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__add_clause_3_p_0(
#line 95 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__Clause_4,
#line 95 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_ClausesRep_0_12,
#line 95 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_ClausesRep_13)
#line 95 "hlds_clauses.m"
{
#line 514 "hlds_clauses.m"
  {
#line 514 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;

#line 514 "hlds_clauses.m"
    if (((MR_tag((MR_Word) hlds__hlds_clauses__STATE_VARIABLE_ClausesRep_0_12)) == (MR_mktag((MR_Integer) 2))))
#line 525 "hlds_clauses.m"
      {
#line 525 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__NumClauses0_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_clauses__STATE_VARIABLE_ClausesRep_0_12, (MR_Integer) 0)));
#line 525 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__RevClauses0_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_clauses__STATE_VARIABLE_ClausesRep_0_12, (MR_Integer) 1)));
#line 525 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__NumClauses_26 = (hlds__hlds_clauses__NumClauses0_24 + (MR_Integer) 1);
#line 525 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__RevClauses_27;
#line 525 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_clauses__STATE_VARIABLE_ClausesRep_0_12, (MR_Integer) 2)));

#line 527 "hlds_clauses.m"
        {
#line 527 "hlds_clauses.m"
          hlds__hlds_clauses__RevClauses_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 527 "hlds_clauses.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_clauses__RevClauses_27, 0) = ((MR_Box) (hlds__hlds_clauses__Clause_4));
#line 527 "hlds_clauses.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_clauses__RevClauses_27, 1) = ((MR_Box) (hlds__hlds_clauses__RevClauses0_25));
#line 527 "hlds_clauses.m"
        }
#line 528 "hlds_clauses.m"
        {
#line 528 "hlds_clauses.m"
          MR_Word base;
#line 528 "hlds_clauses.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 528 "hlds_clauses.m"
          *hlds__hlds_clauses__STATE_VARIABLE_ClausesRep_13 = base;
#line 528 "hlds_clauses.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__NumClauses_26));
#line 528 "hlds_clauses.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__RevClauses_27));
#line 528 "hlds_clauses.m"
        }
#line 525 "hlds_clauses.m"
      }
#line 514 "hlds_clauses.m"
    else
#line 514 "hlds_clauses.m"
      if (((MR_tag((MR_Word) hlds__hlds_clauses__STATE_VARIABLE_ClausesRep_0_12)) == (MR_mktag((MR_Integer) 1))))
#line 519 "hlds_clauses.m"
        {
#line 519 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__Clauses0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__STATE_VARIABLE_ClausesRep_0_12, (MR_Integer) 1)));
#line 519 "hlds_clauses.m"
          MR_Integer hlds__hlds_clauses__NumClauses0_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__STATE_VARIABLE_ClausesRep_0_12, (MR_Integer) 0)));
#line 519 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__RevClauses0_21;
#line 519 "hlds_clauses.m"
          MR_Integer hlds__hlds_clauses__NumClauses_22 = (hlds__hlds_clauses__NumClauses0_20 + (MR_Integer) 1);
#line 519 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__RevClauses_23;

#line 521 "hlds_clauses.m"
          {
#line 521 "hlds_clauses.m"
            mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, hlds__hlds_clauses__Clauses0_10, &hlds__hlds_clauses__RevClauses0_21);
          }
#line 522 "hlds_clauses.m"
          {
#line 522 "hlds_clauses.m"
            hlds__hlds_clauses__RevClauses_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "hlds_clauses.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_clauses__RevClauses_23, 0) = ((MR_Box) (hlds__hlds_clauses__Clause_4));
#line 522 "hlds_clauses.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_clauses__RevClauses_23, 1) = ((MR_Box) (hlds__hlds_clauses__RevClauses0_21));
#line 522 "hlds_clauses.m"
          }
#line 523 "hlds_clauses.m"
          {
#line 523 "hlds_clauses.m"
            MR_Word base;
#line 523 "hlds_clauses.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 523 "hlds_clauses.m"
            *hlds__hlds_clauses__STATE_VARIABLE_ClausesRep_13 = base;
#line 523 "hlds_clauses.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__NumClauses_22));
#line 523 "hlds_clauses.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__RevClauses_23));
#line 523 "hlds_clauses.m"
          }
#line 519 "hlds_clauses.m"
        }
#line 514 "hlds_clauses.m"
      else
#line 514 "hlds_clauses.m"
        {
#line 514 "hlds_clauses.m"
          MR_Integer hlds__hlds_clauses__NumClauses0_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_ClausesRep_0_12, (MR_Integer) 0)));
#line 514 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__RevClauses0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_ClausesRep_0_12, (MR_Integer) 1)));
#line 514 "hlds_clauses.m"
          MR_Integer hlds__hlds_clauses__NumClauses_8 = (hlds__hlds_clauses__NumClauses0_6 + (MR_Integer) 1);
#line 514 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__RevClauses_9;

#line 516 "hlds_clauses.m"
          {
#line 516 "hlds_clauses.m"
            hlds__hlds_clauses__RevClauses_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 516 "hlds_clauses.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_clauses__RevClauses_9, 0) = ((MR_Box) (hlds__hlds_clauses__Clause_4));
#line 516 "hlds_clauses.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_clauses__RevClauses_9, 1) = ((MR_Box) (hlds__hlds_clauses__RevClauses0_7));
#line 516 "hlds_clauses.m"
          }
#line 517 "hlds_clauses.m"
          {
#line 517 "hlds_clauses.m"
            MR_Word base;
#line 517 "hlds_clauses.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 517 "hlds_clauses.m"
            *hlds__hlds_clauses__STATE_VARIABLE_ClausesRep_13 = base;
#line 517 "hlds_clauses.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__NumClauses_8));
#line 517 "hlds_clauses.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__RevClauses_9));
#line 517 "hlds_clauses.m"
          }
#line 514 "hlds_clauses.m"
        }
#line 514 "hlds_clauses.m"
  }
#line 95 "hlds_clauses.m"
}

#line 91 "hlds_clauses.m"
MR_Integer MR_CALL 
hlds__hlds_clauses__num_clauses_in_clauses_rep_1_f_0(
#line 91 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__ClausesRep_3)
#line 91 "hlds_clauses.m"
{
#line 469 "hlds_clauses.m"
  {
#line 469 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 469 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__NumClauses_4;

#line 469 "hlds_clauses.m"
    if (((MR_tag((MR_Word) hlds__hlds_clauses__ClausesRep_3)) == (MR_mktag((MR_Integer) 2))))
#line 473 "hlds_clauses.m"
      {
#line 473 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_7_7;
#line 473 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_8_8;

#line 473 "hlds_clauses.m"
        hlds__hlds_clauses__NumClauses_4 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 0)));
#line 473 "hlds_clauses.m"
        hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 1)));
#line 473 "hlds_clauses.m"
        hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 2)));
#line 473 "hlds_clauses.m"
      }
#line 469 "hlds_clauses.m"
    else
#line 469 "hlds_clauses.m"
      if (((MR_tag((MR_Word) hlds__hlds_clauses__ClausesRep_3)) == (MR_mktag((MR_Integer) 1))))
#line 471 "hlds_clauses.m"
        {
#line 471 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__V_6_6;

#line 471 "hlds_clauses.m"
          hlds__hlds_clauses__NumClauses_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 0)));
#line 471 "hlds_clauses.m"
          hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 1)));
#line 471 "hlds_clauses.m"
        }
#line 469 "hlds_clauses.m"
      else
#line 469 "hlds_clauses.m"
        {
#line 469 "hlds_clauses.m"
          MR_Word hlds__hlds_clauses__V_5_5;

#line 469 "hlds_clauses.m"
          hlds__hlds_clauses__NumClauses_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 0)));
#line 469 "hlds_clauses.m"
          hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 1)));
#line 469 "hlds_clauses.m"
        }
#line 469 "hlds_clauses.m"
    return hlds__hlds_clauses__NumClauses_4;
#line 469 "hlds_clauses.m"
  }
#line 91 "hlds_clauses.m"
}

#line 87 "hlds_clauses.m"
MR_Word MR_CALL 
hlds__hlds_clauses__clause_list_is_empty_1_f_0(
#line 87 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__ClausesRep_3)
#line 87 "hlds_clauses.m"
{
#line 451 "hlds_clauses.m"
  {
#line 451 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 451 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__IsEmpty_4;
#line 451 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__List_6;

#line 454 "hlds_clauses.m"
    if (((MR_tag((MR_Word) hlds__hlds_clauses__ClausesRep_3)) == (MR_mktag((MR_Integer) 2))))
#line 457 "hlds_clauses.m"
      {
#line 457 "hlds_clauses.m"
        MR_Integer hlds__hlds_clauses__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 0)));
#line 457 "hlds_clauses.m"
        MR_Word hlds__hlds_clauses__V_9_9;

#line 457 "hlds_clauses.m"
        hlds__hlds_clauses__List_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 1)));
#line 457 "hlds_clauses.m"
        hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 2)));
#line 457 "hlds_clauses.m"
      }
#line 454 "hlds_clauses.m"
    else
#line 454 "hlds_clauses.m"
      if (((MR_tag((MR_Word) hlds__hlds_clauses__ClausesRep_3)) == (MR_mktag((MR_Integer) 1))))
#line 455 "hlds_clauses.m"
        {
#line 455 "hlds_clauses.m"
          MR_Integer hlds__hlds_clauses__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 0)));

#line 455 "hlds_clauses.m"
          hlds__hlds_clauses__List_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 1)));
#line 455 "hlds_clauses.m"
        }
#line 454 "hlds_clauses.m"
      else
#line 453 "hlds_clauses.m"
        {
#line 453 "hlds_clauses.m"
          MR_Integer hlds__hlds_clauses__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 0)));

#line 453 "hlds_clauses.m"
          hlds__hlds_clauses__List_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 1)));
#line 453 "hlds_clauses.m"
        }
#line 462 "hlds_clauses.m"
    if ((hlds__hlds_clauses__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 461 "hlds_clauses.m"
      hlds__hlds_clauses__IsEmpty_4 = (MR_Integer) 1;
#line 462 "hlds_clauses.m"
    else
#line 464 "hlds_clauses.m"
      hlds__hlds_clauses__IsEmpty_4 = (MR_Integer) 0;
#line 451 "hlds_clauses.m"
    return hlds__hlds_clauses__IsEmpty_4;
#line 451 "hlds_clauses.m"
  }
#line 87 "hlds_clauses.m"
}

#line 82 "hlds_clauses.m"
MR_Word MR_CALL 
hlds__hlds_clauses__init_clauses_rep_0_f_0(void)
#line 82 "hlds_clauses.m"
{
#line 449 "hlds_clauses.m"
  {
#line 449 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;

#line 449 "hlds_clauses.m"
    return (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_clauses_scalar_common_1[8]);
#line 449 "hlds_clauses.m"
  }
#line 82 "hlds_clauses.m"
}

#line 77 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_init_for_assertion_2_p_0(
#line 77 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__HeadVars_3,
#line 77 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__ClausesInfo_4)
#line 77 "hlds_clauses.m"
{
#line 389 "hlds_clauses.m"
  {
#line 389 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 389 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__VarSet_5;
#line 389 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__VarTypes_6;
#line 389 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__TVarNameMap_7;
#line 389 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__HeadVarVec_8;
#line 389 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__ClausesRep_9;
#line 389 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__RttiVarMaps_10;
#line 389 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_13_13;
#line 389 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__V_21_21;

#line 390 "hlds_clauses.m"
    {
#line 390 "hlds_clauses.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &hlds__hlds_clauses__VarSet_5);
    }
#line 391 "hlds_clauses.m"
    {
#line 391 "hlds_clauses.m"
      parse_tree__prog_data__init_vartypes_1_p_0(&hlds__hlds_clauses__VarTypes_6);
    }
#line 392 "hlds_clauses.m"
    {
#line 392 "hlds_clauses.m"
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__hlds_clauses_scalar_common_1[0], &hlds__hlds_clauses__TVarNameMap_7);
    }
#line 395 "hlds_clauses.m"
    {
#line 395 "hlds_clauses.m"
      hlds__hlds_clauses__HeadVarVec_8 = hlds__hlds_args__proc_arg_vector_init_2_f_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[1], (MR_Integer) 0, hlds__hlds_clauses__HeadVars_3);
    }
#line 396 "hlds_clauses.m"
    hlds__hlds_clauses__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 495 "hlds_clauses.m"
    {
#line 495 "hlds_clauses.m"
      hlds__hlds_clauses__V_21_21 = mercury__list__length_1_f_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, hlds__hlds_clauses__V_13_13);
    }
#line 495 "hlds_clauses.m"
    {
#line 495 "hlds_clauses.m"
      hlds__hlds_clauses__ClausesRep_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 495 "hlds_clauses.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_clauses__ClausesRep_9, 0) = ((MR_Box) (hlds__hlds_clauses__V_21_21));
#line 495 "hlds_clauses.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_clauses__ClausesRep_9, 1) = ((MR_Box) (hlds__hlds_clauses__V_13_13));
#line 495 "hlds_clauses.m"
    }
#line 397 "hlds_clauses.m"
    {
#line 397 "hlds_clauses.m"
      hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&hlds__hlds_clauses__RttiVarMaps_10);
    }
#line 399 "hlds_clauses.m"
    {
#line 399 "hlds_clauses.m"
      MR_Word base;
#line 399 "hlds_clauses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 399 "hlds_clauses.m"
      *hlds__hlds_clauses__ClausesInfo_4 = base;
#line 399 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__VarSet_5));
#line 399 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__VarTypes_6));
#line 399 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_clauses__TVarNameMap_7));
#line 399 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_clauses__VarTypes_6));
#line 399 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_clauses__HeadVarVec_8));
#line 399 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_clauses__ClausesRep_9));
#line 399 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 399 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_clauses__RttiVarMaps_10));
#line 399 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Integer) 0));
#line 399 "hlds_clauses.m"
    }
#line 389 "hlds_clauses.m"
  }
#line 77 "hlds_clauses.m"
}

#line 74 "hlds_clauses.m"
void MR_CALL 
hlds__hlds_clauses__clauses_info_init_4_p_0(
#line 74 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__PredOrFunc_5,
#line 74 "hlds_clauses.m"
  MR_Integer hlds__hlds_clauses__Arity_6,
#line 74 "hlds_clauses.m"
  MR_Word hlds__hlds_clauses__ItemNumbers_7,
#line 74 "hlds_clauses.m"
  MR_Word * hlds__hlds_clauses__ClausesInfo_8)
#line 74 "hlds_clauses.m"
{
#line 377 "hlds_clauses.m"
  {
#line 377 "hlds_clauses.m"
    MR_bool hlds__hlds_clauses__succeeded;
#line 377 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__TypeCtorInfo_23_23;
#line 377 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__VarTypes_9;
#line 377 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__TVarNameMap_10;
#line 377 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__VarSet0_11;
#line 377 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__HeadVars_12;
#line 377 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__VarSet_13;
#line 377 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__HeadVarVec_14;
#line 377 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__RttiVarMaps_15;
#line 377 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__ClausesRep_17;
#line 377 "hlds_clauses.m"
    MR_Word hlds__hlds_clauses__V_19_19;
#line 377 "hlds_clauses.m"
    MR_Integer hlds__hlds_clauses__V_26_26;

#line 378 "hlds_clauses.m"
    {
#line 378 "hlds_clauses.m"
      parse_tree__prog_data__init_vartypes_1_p_0(&hlds__hlds_clauses__VarTypes_9);
    }
#line 379 "hlds_clauses.m"
    {
#line 379 "hlds_clauses.m"
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__hlds_clauses_scalar_common_1[0], &hlds__hlds_clauses__TVarNameMap_10);
    }
#line 5670 "hlds.hlds_clauses.c"
    hlds__hlds_clauses__TypeCtorInfo_23_23 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 380 "hlds_clauses.m"
    {
#line 380 "hlds_clauses.m"
      mercury__varset__init_1_p_0(hlds__hlds_clauses__TypeCtorInfo_23_23, &hlds__hlds_clauses__VarSet0_11);
    }
#line 381 "hlds_clauses.m"
    {
#line 381 "hlds_clauses.m"
      parse_tree__prog_util__make_n_fresh_vars_5_p_0(hlds__hlds_clauses__TypeCtorInfo_23_23, (MR_String) "HeadVar__", hlds__hlds_clauses__Arity_6, &hlds__hlds_clauses__HeadVars_12, hlds__hlds_clauses__VarSet0_11, &hlds__hlds_clauses__VarSet_13);
    }
#line 382 "hlds_clauses.m"
    {
#line 382 "hlds_clauses.m"
      hlds__hlds_clauses__HeadVarVec_14 = hlds__hlds_args__proc_arg_vector_init_2_f_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[1], hlds__hlds_clauses__PredOrFunc_5, hlds__hlds_clauses__HeadVars_12);
    }
#line 383 "hlds_clauses.m"
    {
#line 383 "hlds_clauses.m"
      hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&hlds__hlds_clauses__RttiVarMaps_15);
    }
#line 385 "hlds_clauses.m"
    hlds__hlds_clauses__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 495 "hlds_clauses.m"
    {
#line 495 "hlds_clauses.m"
      hlds__hlds_clauses__V_26_26 = mercury__list__length_1_f_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, hlds__hlds_clauses__V_19_19);
    }
#line 495 "hlds_clauses.m"
    {
#line 495 "hlds_clauses.m"
      hlds__hlds_clauses__ClausesRep_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 495 "hlds_clauses.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_clauses__ClausesRep_17, 0) = ((MR_Box) (hlds__hlds_clauses__V_26_26));
#line 495 "hlds_clauses.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_clauses__ClausesRep_17, 1) = ((MR_Box) (hlds__hlds_clauses__V_19_19));
#line 495 "hlds_clauses.m"
    }
#line 386 "hlds_clauses.m"
    {
#line 386 "hlds_clauses.m"
      MR_Word base;
#line 386 "hlds_clauses.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 386 "hlds_clauses.m"
      *hlds__hlds_clauses__ClausesInfo_8 = base;
#line 386 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__VarSet_13));
#line 386 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__VarTypes_9));
#line 386 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_clauses__TVarNameMap_10));
#line 386 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_clauses__VarTypes_9));
#line 386 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_clauses__HeadVarVec_14));
#line 386 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_clauses__ClausesRep_17));
#line 386 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_clauses__ItemNumbers_7));
#line 386 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_clauses__RttiVarMaps_15));
#line 386 "hlds_clauses.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Integer) 0));
#line 386 "hlds_clauses.m"
    }
#line 377 "hlds_clauses.m"
  }
#line 74 "hlds_clauses.m"
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
