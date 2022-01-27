/*
** Automatically generated from `typecheck_info.m'
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


/* :- module check_hlds.typecheck_info. */
/* :- implementation. */

/*
INIT mercury__check_hlds__typecheck_info__init
ENDINIT
*/

#include "check_hlds.typecheck_info.mih"


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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 132 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 135 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 138 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 141 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 144 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_0_0[6];

#line 147 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_cons_type_info_0_0[6];

#line 150 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_0_0;

#line 153 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_0_0[1];

#line 156 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_0[1];

#line 159 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_cons_type_info_0[1];

#line 162 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_cons_type_info_0[1];

#line 165 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_0[1];

#line 168 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_0;

#line 171 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_1[1];

#line 174 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_1;

#line 177 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_2[1];

#line 180 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_2;

#line 183 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_3[1];

#line 186 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_3;

#line 189 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_4[1];

#line 192 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_4;

#line 195 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_5[1];

#line 198 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_5;

#line 201 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_0[1];

#line 204 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_1[1];

#line 207 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_2[1];

#line 210 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_3[3];

#line 213 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_source_0[4];

#line 216 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_cons_type_info_source_0[6];

#line 219 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_cons_type_info_source_0[6];

#line 222 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 225 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_0[2];

#line 228 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_0;

#line 231 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0;

#line 234 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_1[2];

#line 237 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_1;

#line 240 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_0[1];

#line 243 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_1[1];

#line 246 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_overloaded_symbol_0[2];

#line 249 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_overloaded_symbol_0[2];

#line 252 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_overloaded_symbol_0[2];

#line 255 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1term__type_ctor_info_context_0;

#line 258 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0list__ti_list_1term__type_ctor_info_context_0;

#line 261 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_marker_0;

#line 264 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 267 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_type_error_clause_context_0_0[6];

#line 270 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_type_error_clause_context_0_0[6];

#line 273 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_type_error_clause_context_0_0;

#line 276 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_type_error_clause_context_0_0[1];

#line 279 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_type_error_clause_context_0[1];

#line 282 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_type_error_clause_context_0[1];

#line 285 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_type_error_clause_context_0[1];

#line 288 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_info_0_0[4];

#line 291 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_info_0_0[4];

#line 294 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_info_0_0;

#line 297 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_info_0_0[1];

#line 300 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_info_0[1];

#line 303 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_info_0[1];

#line 306 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_info_0[1];

#line 309 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_import_status_0;

#line 312 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 315 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 318 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_sub_info_0_0[5];

#line 321 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_sub_info_0_0[5];

#line 324 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_sub_info_0_0;

#line 327 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_sub_info_0_0[1];

#line 330 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_sub_info_0[1];

#line 333 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_sub_info_0[1];

#line 336 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_sub_info_0[1];

#line 339 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_0_0_10001(
#line 342 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 344 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 347 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_0_0_10001(
#line 350 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 352 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 354 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 357 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_source_0_0_10001(
#line 360 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 362 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 365 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_source_0_0_10001(
#line 368 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 370 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 372 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 375 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_0_0_10001(
#line 378 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 380 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 383 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_0_0_10001(
#line 386 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 388 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 390 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 393 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0_10001(
#line 396 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 398 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 401 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0_10001(
#line 404 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 406 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 408 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 411 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____type_error_clause_context_0_0_10001(
#line 414 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 416 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 419 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____type_error_clause_context_0_0_10001(
#line 422 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 424 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 426 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 429 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_info_0_0_10001(
#line 432 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 434 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 437 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_info_0_0_10001(
#line 440 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 442 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 444 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 447 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0_10001(
#line 450 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 452 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 455 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0_10001(
#line 458 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 460 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 462 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 203 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0(
#line 203 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
#line 203 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 203 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__3_3);

#line 203 "typecheck_info.m"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0(
#line 203 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 203 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2);


static /* final */ const MR_Box check_hlds__typecheck_info_scalar_common_1[11][2];

static /* final */ const MR_Box check_hlds__typecheck_info_scalar_common_2[1][3];




static /* final */ const MR_Box check_hlds__typecheck_info_scalar_common_1[11][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__typecheck_info_scalar_common_1[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_import_status_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_info_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0)),
    ((MR_Box) (&check_hlds__typecheck_info_scalar_common_1[0]))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 575 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 583 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 591 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 599 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 607 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_0_0[6] = {
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraints_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0
};

#line 617 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_cons_type_info_0_0[6] = {
  (MR_String) "cti_varset",
  (MR_String) "cti_exit_tvars",
  (MR_String) "cti_result_type",
  (MR_String) "cti_arg_types",
  (MR_String) "cti_constraints",
  (MR_String) "cti_source"
};

#line 627 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_0_0 = {
  (MR_String) "cons_type_info",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_0_0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_cons_type_info_0_0,
  NULL,
  NULL
};

#line 642 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_0_0
};

#line 647 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_0_0
  }
};

#line 656 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_cons_type_info_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_0_0
};

#line 661 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_cons_type_info_0[1] = {
  (MR_Integer) 0
};

#line 666 "check_hlds.typecheck_info.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_info____Unify____cons_type_info_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____cons_type_info_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "cons_type_info",
  {     check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_cons_type_info_0 },
  {     check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_cons_type_info_0
};

#line 683 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
};

#line 688 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_0 = {
  (MR_String) "source_type",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_0,
  NULL,
  NULL,
  NULL
};

#line 703 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 708 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_1 = {
  (MR_String) "source_builtin_type",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_1,
  NULL,
  NULL,
  NULL
};

#line 723 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
};

#line 728 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_2 = {
  (MR_String) "source_get_field_access",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_2,
  NULL,
  NULL,
  NULL
};

#line 743 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
};

#line 748 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_3 = {
  (MR_String) "source_set_field_access",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_3,
  NULL,
  NULL,
  NULL
};

#line 763 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 768 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_4 = {
  (MR_String) "source_apply",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_4,
  NULL,
  NULL,
  NULL
};

#line 783 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_5[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
};

#line 788 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_5 = {
  (MR_String) "source_pred",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_5,
  NULL,
  NULL,
  NULL
};

#line 803 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_0
};

#line 808 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_1[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_1
};

#line 813 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_2[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_2
};

#line 818 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_3[3] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_3,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_4,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_5
};

#line 825 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_source_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_2
  },
  {
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_3
  }
};

#line 849 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_cons_type_info_source_0[6] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_4,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_1,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_2,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_5,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_3,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_0
};

#line 859 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_cons_type_info_source_0[6] = {
  (MR_Integer) 5,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 3
};

#line 869 "check_hlds.typecheck_info.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_info____Unify____cons_type_info_source_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____cons_type_info_source_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "cons_type_info_source",
  {     check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_cons_type_info_source_0 },
  {     check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_source_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_cons_type_info_source_0
};

#line 886 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 894 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_simple_call_id_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
};

#line 900 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_0 = {
  (MR_String) "overloaded_pred",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_0,
  NULL,
  NULL,
  NULL
};

#line 915 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0
  }
};

#line 923 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_1[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0
};

#line 929 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_1 = {
  (MR_String) "overloaded_func",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_1,
  NULL,
  NULL,
  NULL
};

#line 944 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_0
};

#line 949 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_1[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_1
};

#line 954 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_overloaded_symbol_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_1
  }
};

#line 968 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_overloaded_symbol_0[2] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_1,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_0
};

#line 974 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_overloaded_symbol_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 980 "check_hlds.typecheck_info.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_info____Unify____overloaded_symbol_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____overloaded_symbol_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "overloaded_symbol",
  {     check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_overloaded_symbol_0 },
  {     check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_overloaded_symbol_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_overloaded_symbol_0
};

#line 997 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 1005 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0,
    (MR_TypeInfo) &check_hlds__typecheck_info__list__ti_list_1term__type_ctor_info_context_0
  }
};

#line 1014 "check_hlds.typecheck_info.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "overloaded_symbol_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__typecheck_info__tree234__ti_tree234_2check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0list__ti_list_1term__type_ctor_info_context_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1031 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_marker_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_marker_0
  }
};

#line 1039 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1047 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_type_error_clause_context_0_0[6] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_marker_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1057 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_type_error_clause_context_0_0[6] = {
  (MR_String) "tecc_module_info",
  (MR_String) "tecc_pred_id",
  (MR_String) "tecc_pred_markers",
  (MR_String) "tecc_clause_num",
  (MR_String) "tecc_clause_context",
  (MR_String) "tecc_varset"
};

#line 1067 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_type_error_clause_context_0_0 = {
  (MR_String) "type_error_clause_context",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_type_error_clause_context_0_0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_type_error_clause_context_0_0,
  NULL,
  NULL
};

#line 1082 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_type_error_clause_context_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_type_error_clause_context_0_0
};

#line 1087 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_type_error_clause_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_type_error_clause_context_0_0
  }
};

#line 1096 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_type_error_clause_context_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_type_error_clause_context_0_0
};

#line 1101 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_type_error_clause_context_0[1] = {
  (MR_Integer) 0
};

#line 1106 "check_hlds.typecheck_info.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_error_clause_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_info____Unify____type_error_clause_context_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____type_error_clause_context_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "type_error_clause_context",
  {     check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_type_error_clause_context_0 },
  {     check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_type_error_clause_context_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_type_error_clause_context_0
};

#line 1123 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_info_0_0[4] = {
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_sub_info_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_error_clause_context_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__tree234__ti_tree234_2check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0list__ti_list_1term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1131 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_info_0_0[4] = {
  (MR_String) "tci_sub_info",
  (MR_String) "tci_error_clause_context",
  (MR_String) "tci_overloaded_symbol_map",
  (MR_String) "tci_ambiguity_warn_limit"
};

#line 1139 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_info_0_0 = {
  (MR_String) "typecheck_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_info_0_0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_info_0_0,
  NULL,
  NULL
};

#line 1154 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_info_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_info_0_0
};

#line 1159 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_info_0_0
  }
};

#line 1168 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_info_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_info_0_0
};

#line 1173 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_info_0[1] = {
  (MR_Integer) 0
};

#line 1178 "check_hlds.typecheck_info.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_info____Unify____typecheck_info_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____typecheck_info_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "typecheck_info",
  {     check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_info_0 },
  {     check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_info_0
};

#line 1195 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_import_status_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_import_status_0
  }
};

#line 1203 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1211 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1219 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_sub_info_0_0[5] = {
  (MR_PseudoTypeInfo) &hlds__pred_table__hlds__pred_table__type_ctor_info_is_fully_qualified_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_import_status_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_spec_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1228 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_sub_info_0_0[5] = {
  (MR_String) "tcsi_calls_are_fully_qualified",
  (MR_String) "tcsi_is_field_access_function",
  (MR_String) "tcsi_non_overload_errors",
  (MR_String) "tcsi_overload_error",
  (MR_String) "tcsi_ambiguity_error_limit"
};

#line 1237 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_sub_info_0_0 = {
  (MR_String) "typecheck_sub_info",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_sub_info_0_0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_sub_info_0_0,
  NULL,
  NULL
};

#line 1252 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_sub_info_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_sub_info_0_0
};

#line 1257 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_sub_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_sub_info_0_0
  }
};

#line 1266 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_sub_info_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_sub_info_0_0
};

#line 1271 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_sub_info_0[1] = {
  (MR_Integer) 0
};

#line 1276 "check_hlds.typecheck_info.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_sub_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "typecheck_sub_info",
  {     check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_sub_info_0 },
  {     check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_sub_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_sub_info_0
};

#line 1293 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_0_0_10001(
#line 1296 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 1298 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 1300 "check_hlds.typecheck_info.c"
{
#line 1302 "check_hlds.typecheck_info.c"
  {
#line 1304 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 1307 "check_hlds.typecheck_info.c"
    {
#line 1309 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____cons_type_info_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 1312 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 1314 "check_hlds.typecheck_info.c"
  }
#line 1316 "check_hlds.typecheck_info.c"
}

#line 1319 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_0_0_10001(
#line 1322 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 1324 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 1326 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 1328 "check_hlds.typecheck_info.c"
{
#line 1330 "check_hlds.typecheck_info.c"
  {
#line 1332 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 1335 "check_hlds.typecheck_info.c"
    {
#line 1337 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____cons_type_info_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 1340 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 1342 "check_hlds.typecheck_info.c"
  }
#line 1344 "check_hlds.typecheck_info.c"
}

#line 1347 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_source_0_0_10001(
#line 1350 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 1352 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 1354 "check_hlds.typecheck_info.c"
{
#line 1356 "check_hlds.typecheck_info.c"
  {
#line 1358 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 1361 "check_hlds.typecheck_info.c"
    {
#line 1363 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____cons_type_info_source_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 1366 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 1368 "check_hlds.typecheck_info.c"
  }
#line 1370 "check_hlds.typecheck_info.c"
}

#line 1373 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_source_0_0_10001(
#line 1376 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 1378 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 1380 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 1382 "check_hlds.typecheck_info.c"
{
#line 1384 "check_hlds.typecheck_info.c"
  {
#line 1386 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 1389 "check_hlds.typecheck_info.c"
    {
#line 1391 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____cons_type_info_source_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 1394 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 1396 "check_hlds.typecheck_info.c"
  }
#line 1398 "check_hlds.typecheck_info.c"
}

#line 1401 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_0_0_10001(
#line 1404 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 1406 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 1408 "check_hlds.typecheck_info.c"
{
#line 1410 "check_hlds.typecheck_info.c"
  {
#line 1412 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 1415 "check_hlds.typecheck_info.c"
    {
#line 1417 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____overloaded_symbol_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 1420 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 1422 "check_hlds.typecheck_info.c"
  }
#line 1424 "check_hlds.typecheck_info.c"
}

#line 1427 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_0_0_10001(
#line 1430 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 1432 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 1434 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 1436 "check_hlds.typecheck_info.c"
{
#line 1438 "check_hlds.typecheck_info.c"
  {
#line 1440 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 1443 "check_hlds.typecheck_info.c"
    {
#line 1445 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____overloaded_symbol_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 1448 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 1450 "check_hlds.typecheck_info.c"
  }
#line 1452 "check_hlds.typecheck_info.c"
}

#line 1455 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0_10001(
#line 1458 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 1460 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 1462 "check_hlds.typecheck_info.c"
{
#line 1464 "check_hlds.typecheck_info.c"
  {
#line 1466 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 1469 "check_hlds.typecheck_info.c"
    {
#line 1471 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 1474 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 1476 "check_hlds.typecheck_info.c"
  }
#line 1478 "check_hlds.typecheck_info.c"
}

#line 1481 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0_10001(
#line 1484 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 1486 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 1488 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 1490 "check_hlds.typecheck_info.c"
{
#line 1492 "check_hlds.typecheck_info.c"
  {
#line 1494 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 1497 "check_hlds.typecheck_info.c"
    {
#line 1499 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 1502 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 1504 "check_hlds.typecheck_info.c"
  }
#line 1506 "check_hlds.typecheck_info.c"
}

#line 1509 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____type_error_clause_context_0_0_10001(
#line 1512 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 1514 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 1516 "check_hlds.typecheck_info.c"
{
#line 1518 "check_hlds.typecheck_info.c"
  {
#line 1520 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 1523 "check_hlds.typecheck_info.c"
    {
#line 1525 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____type_error_clause_context_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 1528 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 1530 "check_hlds.typecheck_info.c"
  }
#line 1532 "check_hlds.typecheck_info.c"
}

#line 1535 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____type_error_clause_context_0_0_10001(
#line 1538 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 1540 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 1542 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 1544 "check_hlds.typecheck_info.c"
{
#line 1546 "check_hlds.typecheck_info.c"
  {
#line 1548 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 1551 "check_hlds.typecheck_info.c"
    {
#line 1553 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____type_error_clause_context_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 1556 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 1558 "check_hlds.typecheck_info.c"
  }
#line 1560 "check_hlds.typecheck_info.c"
}

#line 1563 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_info_0_0_10001(
#line 1566 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 1568 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 1570 "check_hlds.typecheck_info.c"
{
#line 1572 "check_hlds.typecheck_info.c"
  {
#line 1574 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 1577 "check_hlds.typecheck_info.c"
    {
#line 1579 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____typecheck_info_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 1582 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 1584 "check_hlds.typecheck_info.c"
  }
#line 1586 "check_hlds.typecheck_info.c"
}

#line 1589 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_info_0_0_10001(
#line 1592 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 1594 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 1596 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 1598 "check_hlds.typecheck_info.c"
{
#line 1600 "check_hlds.typecheck_info.c"
  {
#line 1602 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 1605 "check_hlds.typecheck_info.c"
    {
#line 1607 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____typecheck_info_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 1610 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 1612 "check_hlds.typecheck_info.c"
  }
#line 1614 "check_hlds.typecheck_info.c"
}

#line 1617 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0_10001(
#line 1620 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 1622 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 1624 "check_hlds.typecheck_info.c"
{
#line 1626 "check_hlds.typecheck_info.c"
  {
#line 1628 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 1631 "check_hlds.typecheck_info.c"
    {
#line 1633 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 1636 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 1638 "check_hlds.typecheck_info.c"
  }
#line 1640 "check_hlds.typecheck_info.c"
}

#line 1643 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0_10001(
#line 1646 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 1648 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 1650 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 1652 "check_hlds.typecheck_info.c"
{
#line 1654 "check_hlds.typecheck_info.c"
  {
#line 1656 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 1659 "check_hlds.typecheck_info.c"
    {
#line 1661 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 1664 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 1666 "check_hlds.typecheck_info.c"
  }
#line 1668 "check_hlds.typecheck_info.c"
}

#line 203 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0(
#line 203 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
#line 203 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 203 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
#line 203 "typecheck_info.m"
{
#line 203 "typecheck_info.m"
  {
#line 203 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 203 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_18 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;
#line 203 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_19 = (MR_Integer) check_hlds__typecheck_info__HeadVar__3_3;

#line 203 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_18 == check_hlds__typecheck_info__CastY_19);
#line 203 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 1695 "check_hlds.typecheck_info.c"
      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 0;
#line 203 "typecheck_info.m"
    else
#line 203 "typecheck_info.m"
      {
#line 203 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 203 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 203 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
#line 203 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
#line 203 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 4)));
#line 203 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));
#line 203 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));
#line 203 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 2)));
#line 203 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 3)));
#line 203 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 4)));
#line 203 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_14_14;
#line 203 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_25_25 = (MR_Integer) check_hlds__typecheck_info__V_4_4;
#line 203 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_26_26 = (MR_Integer) check_hlds__typecheck_info__V_9_9;

#line 203 "typecheck_info.m"
        {
#line 203 "typecheck_info.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__typecheck_info__V_14_14, check_hlds__typecheck_info__V_25_25, check_hlds__typecheck_info__V_26_26);
        }
#line 1733 "check_hlds.typecheck_info.c"
        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_14_14 == (MR_Integer) 0);
#line 203 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 203 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 203 "typecheck_info.m"
          *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_14_14;
#line 203 "typecheck_info.m"
        else
#line 203 "typecheck_info.m"
          {
#line 203 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_15_15;

#line 203 "typecheck_info.m"
            {
#line 203 "typecheck_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[8], &check_hlds__typecheck_info__V_15_15, ((MR_Box) (check_hlds__typecheck_info__V_5_5)), ((MR_Box) (check_hlds__typecheck_info__V_10_10)));
            }
#line 1753 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_15_15 == (MR_Integer) 0);
#line 203 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 203 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 203 "typecheck_info.m"
              *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_15_15;
#line 203 "typecheck_info.m"
            else
#line 203 "typecheck_info.m"
              {
#line 203 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_16_16;

#line 203 "typecheck_info.m"
                {
#line 203 "typecheck_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[9], &check_hlds__typecheck_info__V_16_16, ((MR_Box) (check_hlds__typecheck_info__V_6_6)), ((MR_Box) (check_hlds__typecheck_info__V_11_11)));
                }
#line 1773 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_16_16 == (MR_Integer) 0);
#line 203 "typecheck_info.m"
                check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 203 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 203 "typecheck_info.m"
                  *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_16_16;
#line 203 "typecheck_info.m"
                else
#line 203 "typecheck_info.m"
                  {
#line 203 "typecheck_info.m"
                    MR_Word check_hlds__typecheck_info__V_17_17;

#line 203 "typecheck_info.m"
                    {
#line 203 "typecheck_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[10], &check_hlds__typecheck_info__V_17_17, ((MR_Box) (check_hlds__typecheck_info__V_7_7)), ((MR_Box) (check_hlds__typecheck_info__V_12_12)));
                    }
#line 1793 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_17_17 == (MR_Integer) 0);
#line 203 "typecheck_info.m"
                    check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 203 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 203 "typecheck_info.m"
                      *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_17_17;
#line 203 "typecheck_info.m"
                    else
#line 203 "typecheck_info.m"
                      {
#line 203 "typecheck_info.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_8_8, check_hlds__typecheck_info__V_13_13);
#line 203 "typecheck_info.m"
                        return;
                      }
#line 203 "typecheck_info.m"
                  }
#line 203 "typecheck_info.m"
              }
#line 203 "typecheck_info.m"
          }
#line 203 "typecheck_info.m"
      }
#line 203 "typecheck_info.m"
  }
#line 203 "typecheck_info.m"
}

#line 203 "typecheck_info.m"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0(
#line 203 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 203 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
#line 203 "typecheck_info.m"
{
#line 203 "typecheck_info.m"
  {
#line 203 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 203 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_13 = (MR_Integer) check_hlds__typecheck_info__HeadVar__1_1;
#line 203 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_14 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;

#line 203 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_13 == check_hlds__typecheck_info__CastY_14);
#line 203 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 203 "typecheck_info.m"
      check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 203 "typecheck_info.m"
    else
#line 203 "typecheck_info.m"
      {
#line 203 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_15_15;
#line 203 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_16_16;
#line 203 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_17_17;
#line 203 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 203 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 203 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 2)));
#line 203 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 3)));
#line 203 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 4)));
#line 203 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 203 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 203 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
#line 203 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
#line 203 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 4)));

#line 1878 "check_hlds.typecheck_info.c"
        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_3_3 == check_hlds__typecheck_info__V_8_8);
#line 203 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 203 "typecheck_info.m"
          {
#line 1884 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__TypeInfo_15_15 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[8];
#line 1886 "check_hlds.typecheck_info.c"
            {
#line 1888 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_15_15, ((MR_Box) (check_hlds__typecheck_info__V_4_4)), ((MR_Box) (check_hlds__typecheck_info__V_9_9)));
            }
#line 203 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 203 "typecheck_info.m"
              {
#line 1895 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__TypeInfo_16_16 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[9];
#line 1897 "check_hlds.typecheck_info.c"
                {
#line 1899 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_16_16, ((MR_Box) (check_hlds__typecheck_info__V_5_5)), ((MR_Box) (check_hlds__typecheck_info__V_10_10)));
                }
#line 203 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 203 "typecheck_info.m"
                  {
#line 1906 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__TypeInfo_17_17 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[10];
#line 1908 "check_hlds.typecheck_info.c"
                    {
#line 1910 "check_hlds.typecheck_info.c"
                      check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_17_17, ((MR_Box) (check_hlds__typecheck_info__V_6_6)), ((MR_Box) (check_hlds__typecheck_info__V_11_11)));
                    }
#line 203 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 1915 "check_hlds.typecheck_info.c"
                      check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_7_7 == check_hlds__typecheck_info__V_12_12);
#line 203 "typecheck_info.m"
                  }
#line 203 "typecheck_info.m"
              }
#line 203 "typecheck_info.m"
          }
#line 203 "typecheck_info.m"
      }
#line 203 "typecheck_info.m"
    return check_hlds__typecheck_info__succeeded;
#line 203 "typecheck_info.m"
  }
#line 203 "typecheck_info.m"
}

#line 231 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_info_0_0(
#line 231 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
#line 231 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 231 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
#line 231 "typecheck_info.m"
{
#line 231 "typecheck_info.m"
  {
#line 231 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 231 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_15 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;
#line 231 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_16 = (MR_Integer) check_hlds__typecheck_info__HeadVar__3_3;

#line 231 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_15 == check_hlds__typecheck_info__CastY_16);
#line 231 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 1956 "check_hlds.typecheck_info.c"
      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 0;
#line 231 "typecheck_info.m"
    else
#line 231 "typecheck_info.m"
      {
#line 231 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 231 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 231 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
#line 231 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
#line 231 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));
#line 231 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));
#line 231 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 2)));
#line 231 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 3)));
#line 231 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_12_12;
#line 203 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__CastX_35 = (MR_Integer) check_hlds__typecheck_info__V_4_4;
#line 203 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__CastY_36 = (MR_Integer) check_hlds__typecheck_info__V_8_8;

#line 203 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_35 == check_hlds__typecheck_info__CastY_36);
#line 203 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 1989 "check_hlds.typecheck_info.c"
          {
#line 1991 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 231 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 1995 "check_hlds.typecheck_info.c"
            if (check_hlds__typecheck_info__succeeded)
#line 1997 "check_hlds.typecheck_info.c"
              {
#line 1999 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__V_12_12 = (MR_Integer) 0;
#line 2001 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 2003 "check_hlds.typecheck_info.c"
              }
#line 2005 "check_hlds.typecheck_info.c"
          }
#line 203 "typecheck_info.m"
        else
#line 203 "typecheck_info.m"
          {
#line 203 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 0)));
#line 203 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 1)));
#line 203 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 2)));
#line 203 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 3)));
#line 203 "typecheck_info.m"
            MR_Integer check_hlds__typecheck_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 4)));
#line 203 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 0)));
#line 203 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 1)));
#line 203 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 2)));
#line 203 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 3)));
#line 203 "typecheck_info.m"
            MR_Integer check_hlds__typecheck_info__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 4)));
#line 203 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_31_31;
#line 203 "typecheck_info.m"
            MR_Integer check_hlds__typecheck_info__V_42_42 = (MR_Integer) check_hlds__typecheck_info__V_21_21;
#line 203 "typecheck_info.m"
            MR_Integer check_hlds__typecheck_info__V_43_43 = (MR_Integer) check_hlds__typecheck_info__V_26_26;

#line 203 "typecheck_info.m"
            {
#line 203 "typecheck_info.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__typecheck_info__V_31_31, check_hlds__typecheck_info__V_42_42, check_hlds__typecheck_info__V_43_43);
            }
#line 2043 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_31_31 == (MR_Integer) 0);
#line 203 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 203 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 203 "typecheck_info.m"
              {
#line 203 "typecheck_info.m"
                check_hlds__typecheck_info__V_12_12 = check_hlds__typecheck_info__V_31_31;
#line 2053 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_12_12 == (MR_Integer) 0);
#line 231 "typecheck_info.m"
                check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 203 "typecheck_info.m"
              }
#line 203 "typecheck_info.m"
            else
#line 203 "typecheck_info.m"
              {
#line 203 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_32_32;

#line 203 "typecheck_info.m"
                {
#line 203 "typecheck_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[8], &check_hlds__typecheck_info__V_32_32, ((MR_Box) (check_hlds__typecheck_info__V_22_22)), ((MR_Box) (check_hlds__typecheck_info__V_27_27)));
                }
#line 2071 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_32_32 == (MR_Integer) 0);
#line 203 "typecheck_info.m"
                check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 203 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 203 "typecheck_info.m"
                  {
#line 203 "typecheck_info.m"
                    check_hlds__typecheck_info__V_12_12 = check_hlds__typecheck_info__V_32_32;
#line 2081 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_12_12 == (MR_Integer) 0);
#line 231 "typecheck_info.m"
                    check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 203 "typecheck_info.m"
                  }
#line 203 "typecheck_info.m"
                else
#line 203 "typecheck_info.m"
                  {
#line 203 "typecheck_info.m"
                    MR_Word check_hlds__typecheck_info__V_33_33;

#line 203 "typecheck_info.m"
                    {
#line 203 "typecheck_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[9], &check_hlds__typecheck_info__V_33_33, ((MR_Box) (check_hlds__typecheck_info__V_23_23)), ((MR_Box) (check_hlds__typecheck_info__V_28_28)));
                    }
#line 2099 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_33_33 == (MR_Integer) 0);
#line 203 "typecheck_info.m"
                    check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 203 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 203 "typecheck_info.m"
                      {
#line 203 "typecheck_info.m"
                        check_hlds__typecheck_info__V_12_12 = check_hlds__typecheck_info__V_33_33;
#line 2109 "check_hlds.typecheck_info.c"
                        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_12_12 == (MR_Integer) 0);
#line 231 "typecheck_info.m"
                        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 203 "typecheck_info.m"
                      }
#line 203 "typecheck_info.m"
                    else
#line 203 "typecheck_info.m"
                      {
#line 203 "typecheck_info.m"
                        MR_Word check_hlds__typecheck_info__V_34_34;

#line 203 "typecheck_info.m"
                        {
#line 203 "typecheck_info.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[10], &check_hlds__typecheck_info__V_34_34, ((MR_Box) (check_hlds__typecheck_info__V_24_24)), ((MR_Box) (check_hlds__typecheck_info__V_29_29)));
                        }
#line 2127 "check_hlds.typecheck_info.c"
                        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_34_34 == (MR_Integer) 0);
#line 203 "typecheck_info.m"
                        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 203 "typecheck_info.m"
                        if (check_hlds__typecheck_info__succeeded)
#line 203 "typecheck_info.m"
                          {
#line 203 "typecheck_info.m"
                            check_hlds__typecheck_info__V_12_12 = check_hlds__typecheck_info__V_34_34;
#line 2137 "check_hlds.typecheck_info.c"
                            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_12_12 == (MR_Integer) 0);
#line 231 "typecheck_info.m"
                            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 203 "typecheck_info.m"
                          }
#line 203 "typecheck_info.m"
                        else
#line 203 "typecheck_info.m"
                          {
#line 203 "typecheck_info.m"
                            {
#line 203 "typecheck_info.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__typecheck_info__V_12_12, check_hlds__typecheck_info__V_25_25, check_hlds__typecheck_info__V_30_30);
                            }
#line 2152 "check_hlds.typecheck_info.c"
                            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_12_12 == (MR_Integer) 0);
#line 231 "typecheck_info.m"
                            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 203 "typecheck_info.m"
                          }
#line 203 "typecheck_info.m"
                      }
#line 203 "typecheck_info.m"
                  }
#line 203 "typecheck_info.m"
              }
#line 203 "typecheck_info.m"
          }
#line 231 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 231 "typecheck_info.m"
          *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_12_12;
#line 231 "typecheck_info.m"
        else
#line 231 "typecheck_info.m"
          {
#line 231 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_13_13;

#line 231 "typecheck_info.m"
            {
#line 231 "typecheck_info.m"
              check_hlds__typecheck_info____Compare____type_error_clause_context_0_0(&check_hlds__typecheck_info__V_13_13, check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__V_9_9);
            }
#line 2182 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_13_13 == (MR_Integer) 0);
#line 231 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 231 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 231 "typecheck_info.m"
              *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_13_13;
#line 231 "typecheck_info.m"
            else
#line 231 "typecheck_info.m"
              {
#line 231 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_14_14;

#line 231 "typecheck_info.m"
                {
#line 231 "typecheck_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_2[0], &check_hlds__typecheck_info__V_14_14, ((MR_Box) (check_hlds__typecheck_info__V_6_6)), ((MR_Box) (check_hlds__typecheck_info__V_10_10)));
                }
#line 2202 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_14_14 == (MR_Integer) 0);
#line 231 "typecheck_info.m"
                check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 231 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 231 "typecheck_info.m"
                  *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_14_14;
#line 231 "typecheck_info.m"
                else
#line 231 "typecheck_info.m"
                  {
#line 231 "typecheck_info.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_11_11);
#line 231 "typecheck_info.m"
                    return;
                  }
#line 231 "typecheck_info.m"
              }
#line 231 "typecheck_info.m"
          }
#line 231 "typecheck_info.m"
      }
#line 231 "typecheck_info.m"
  }
#line 231 "typecheck_info.m"
}

#line 231 "typecheck_info.m"
MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_info_0_0(
#line 231 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 231 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
#line 231 "typecheck_info.m"
{
#line 231 "typecheck_info.m"
  {
#line 231 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 231 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_11 = (MR_Integer) check_hlds__typecheck_info__HeadVar__1_1;
#line 231 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_12 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;

#line 231 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_11 == check_hlds__typecheck_info__CastY_12);
#line 231 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 231 "typecheck_info.m"
      check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 231 "typecheck_info.m"
    else
#line 231 "typecheck_info.m"
      {
#line 231 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_13_13;
#line 231 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 231 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 231 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 2)));
#line 231 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 3)));
#line 231 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 231 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 231 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
#line 231 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
#line 203 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__CastX_24 = (MR_Integer) check_hlds__typecheck_info__V_3_3;
#line 203 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__CastY_25 = (MR_Integer) check_hlds__typecheck_info__V_7_7;

#line 203 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_24 == check_hlds__typecheck_info__CastY_25);
#line 203 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 203 "typecheck_info.m"
          check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 203 "typecheck_info.m"
        else
#line 203 "typecheck_info.m"
          {
#line 203 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__TypeInfo_15_26;
#line 203 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__TypeInfo_16_27;
#line 203 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__TypeInfo_17_28;
#line 203 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_3_3, (MR_Integer) 0)));
#line 203 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_3_3, (MR_Integer) 1)));
#line 203 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_3_3, (MR_Integer) 2)));
#line 203 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_3_3, (MR_Integer) 3)));
#line 203 "typecheck_info.m"
            MR_Integer check_hlds__typecheck_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_3_3, (MR_Integer) 4)));
#line 203 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, (MR_Integer) 0)));
#line 203 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, (MR_Integer) 1)));
#line 203 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, (MR_Integer) 2)));
#line 203 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, (MR_Integer) 3)));
#line 203 "typecheck_info.m"
            MR_Integer check_hlds__typecheck_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, (MR_Integer) 4)));

#line 2318 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_14_14 == check_hlds__typecheck_info__V_19_19);
#line 203 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 203 "typecheck_info.m"
              {
#line 2324 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__TypeInfo_15_26 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[8];
#line 2326 "check_hlds.typecheck_info.c"
                {
#line 2328 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_15_26, ((MR_Box) (check_hlds__typecheck_info__V_15_15)), ((MR_Box) (check_hlds__typecheck_info__V_20_20)));
                }
#line 203 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 203 "typecheck_info.m"
                  {
#line 2335 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__TypeInfo_16_27 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[9];
#line 2337 "check_hlds.typecheck_info.c"
                    {
#line 2339 "check_hlds.typecheck_info.c"
                      check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_16_27, ((MR_Box) (check_hlds__typecheck_info__V_16_16)), ((MR_Box) (check_hlds__typecheck_info__V_21_21)));
                    }
#line 203 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 203 "typecheck_info.m"
                      {
#line 2346 "check_hlds.typecheck_info.c"
                        check_hlds__typecheck_info__TypeInfo_17_28 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[10];
#line 2348 "check_hlds.typecheck_info.c"
                        {
#line 2350 "check_hlds.typecheck_info.c"
                          check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_17_28, ((MR_Box) (check_hlds__typecheck_info__V_17_17)), ((MR_Box) (check_hlds__typecheck_info__V_22_22)));
                        }
#line 203 "typecheck_info.m"
                        if (check_hlds__typecheck_info__succeeded)
#line 2355 "check_hlds.typecheck_info.c"
                          check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_18_18 == check_hlds__typecheck_info__V_23_23);
#line 203 "typecheck_info.m"
                      }
#line 203 "typecheck_info.m"
                  }
#line 203 "typecheck_info.m"
              }
#line 203 "typecheck_info.m"
          }
#line 231 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 231 "typecheck_info.m"
          {
#line 2369 "check_hlds.typecheck_info.c"
            {
#line 2371 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____type_error_clause_context_0_0(check_hlds__typecheck_info__V_4_4, check_hlds__typecheck_info__V_8_8);
            }
#line 231 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 231 "typecheck_info.m"
              {
#line 2378 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__TypeInfo_13_13 = (MR_Word) &check_hlds__typecheck_info_scalar_common_2[0];
#line 2380 "check_hlds.typecheck_info.c"
                {
#line 2382 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_13_13, ((MR_Box) (check_hlds__typecheck_info__V_5_5)), ((MR_Box) (check_hlds__typecheck_info__V_9_9)));
                }
#line 231 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 2387 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_6_6 == check_hlds__typecheck_info__V_10_10);
#line 231 "typecheck_info.m"
              }
#line 231 "typecheck_info.m"
          }
#line 231 "typecheck_info.m"
      }
#line 231 "typecheck_info.m"
    return check_hlds__typecheck_info__succeeded;
#line 231 "typecheck_info.m"
  }
#line 231 "typecheck_info.m"
}

#line 100 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info____Compare____type_error_clause_context_0_0(
#line 100 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
#line 100 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 100 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
#line 100 "typecheck_info.m"
{
#line 100 "typecheck_info.m"
  {
#line 100 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 100 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_21 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;
#line 100 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_22 = (MR_Integer) check_hlds__typecheck_info__HeadVar__3_3;

#line 100 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_21 == check_hlds__typecheck_info__CastY_22);
#line 100 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 2426 "check_hlds.typecheck_info.c"
      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 0;
#line 100 "typecheck_info.m"
    else
#line 100 "typecheck_info.m"
      {
#line 100 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 100 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 100 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
#line 100 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
#line 100 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 4)));
#line 100 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 5)));
#line 100 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));
#line 100 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));
#line 100 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 2)));
#line 100 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 3)));
#line 100 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 4)));
#line 100 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 5)));
#line 100 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_16_16;

#line 100 "typecheck_info.m"
        {
#line 100 "typecheck_info.m"
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__typecheck_info__V_16_16, check_hlds__typecheck_info__V_4_4, check_hlds__typecheck_info__V_10_10);
        }
#line 2464 "check_hlds.typecheck_info.c"
        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_16_16 == (MR_Integer) 0);
#line 100 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 100 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 100 "typecheck_info.m"
          *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_16_16;
#line 100 "typecheck_info.m"
        else
#line 100 "typecheck_info.m"
          {
#line 100 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_17_17;

#line 100 "typecheck_info.m"
            {
#line 100 "typecheck_info.m"
              hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__typecheck_info__V_17_17, check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__V_11_11);
            }
#line 2484 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_17_17 == (MR_Integer) 0);
#line 100 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 100 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 100 "typecheck_info.m"
              *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_17_17;
#line 100 "typecheck_info.m"
            else
#line 100 "typecheck_info.m"
              {
#line 100 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_18_18;

#line 100 "typecheck_info.m"
                {
#line 100 "typecheck_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_markers_0, &check_hlds__typecheck_info__V_18_18, ((MR_Box) (check_hlds__typecheck_info__V_6_6)), ((MR_Box) (check_hlds__typecheck_info__V_12_12)));
                }
#line 2504 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_18_18 == (MR_Integer) 0);
#line 100 "typecheck_info.m"
                check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 100 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 100 "typecheck_info.m"
                  *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_18_18;
#line 100 "typecheck_info.m"
                else
#line 100 "typecheck_info.m"
                  {
#line 100 "typecheck_info.m"
                    MR_Word check_hlds__typecheck_info__V_19_19;

#line 100 "typecheck_info.m"
                    {
#line 100 "typecheck_info.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__typecheck_info__V_19_19, check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_13_13);
                    }
#line 2524 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_19_19 == (MR_Integer) 0);
#line 100 "typecheck_info.m"
                    check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 100 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 100 "typecheck_info.m"
                      *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_19_19;
#line 100 "typecheck_info.m"
                    else
#line 100 "typecheck_info.m"
                      {
#line 100 "typecheck_info.m"
                        MR_Word check_hlds__typecheck_info__V_20_20;

#line 100 "typecheck_info.m"
                        {
#line 100 "typecheck_info.m"
                          mercury__term____Compare____context_0_0(&check_hlds__typecheck_info__V_20_20, check_hlds__typecheck_info__V_8_8, check_hlds__typecheck_info__V_14_14);
                        }
#line 2544 "check_hlds.typecheck_info.c"
                        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_20_20 == (MR_Integer) 0);
#line 100 "typecheck_info.m"
                        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 100 "typecheck_info.m"
                        if (check_hlds__typecheck_info__succeeded)
#line 100 "typecheck_info.m"
                          *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_20_20;
#line 100 "typecheck_info.m"
                        else
#line 100 "typecheck_info.m"
                          {
#line 100 "typecheck_info.m"
                            {
#line 100 "typecheck_info.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[7], check_hlds__typecheck_info__HeadVar__1_1, ((MR_Box) (check_hlds__typecheck_info__V_9_9)), ((MR_Box) (check_hlds__typecheck_info__V_15_15)));
#line 100 "typecheck_info.m"
                              return;
                            }
#line 100 "typecheck_info.m"
                          }
#line 100 "typecheck_info.m"
                      }
#line 100 "typecheck_info.m"
                  }
#line 100 "typecheck_info.m"
              }
#line 100 "typecheck_info.m"
          }
#line 100 "typecheck_info.m"
      }
#line 100 "typecheck_info.m"
  }
#line 100 "typecheck_info.m"
}

#line 100 "typecheck_info.m"
MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____type_error_clause_context_0_0(
#line 100 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 100 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
#line 100 "typecheck_info.m"
{
#line 100 "typecheck_info.m"
  {
#line 100 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 100 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_15 = (MR_Integer) check_hlds__typecheck_info__HeadVar__1_1;
#line 100 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_16 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;

#line 100 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_15 == check_hlds__typecheck_info__CastY_16);
#line 100 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 100 "typecheck_info.m"
      check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 100 "typecheck_info.m"
    else
#line 100 "typecheck_info.m"
      {
#line 100 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeCtorInfo_19_19;
#line 100 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_21_21;
#line 100 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 100 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 100 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 2)));
#line 100 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 3)));
#line 100 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 4)));
#line 100 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 5)));
#line 100 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 100 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 100 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
#line 100 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
#line 100 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 4)));
#line 100 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 5)));

#line 2637 "check_hlds.typecheck_info.c"
        {
#line 2639 "check_hlds.typecheck_info.c"
          check_hlds__typecheck_info__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__typecheck_info__V_3_3, check_hlds__typecheck_info__V_9_9);
        }
#line 100 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 100 "typecheck_info.m"
          {
#line 2646 "check_hlds.typecheck_info.c"
            {
#line 2648 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__typecheck_info__V_4_4, check_hlds__typecheck_info__V_10_10);
            }
#line 100 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 100 "typecheck_info.m"
              {
#line 2655 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_markers_0;
#line 2657 "check_hlds.typecheck_info.c"
                {
#line 2659 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeCtorInfo_19_19, ((MR_Box) (check_hlds__typecheck_info__V_5_5)), ((MR_Box) (check_hlds__typecheck_info__V_11_11)));
                }
#line 100 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 100 "typecheck_info.m"
                  {
#line 2666 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_6_6 == check_hlds__typecheck_info__V_12_12);
#line 100 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 100 "typecheck_info.m"
                      {
#line 2672 "check_hlds.typecheck_info.c"
                        {
#line 2674 "check_hlds.typecheck_info.c"
                          check_hlds__typecheck_info__succeeded = mercury__term____Unify____context_0_0(check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_13_13);
                        }
#line 100 "typecheck_info.m"
                        if (check_hlds__typecheck_info__succeeded)
#line 100 "typecheck_info.m"
                          {
#line 2681 "check_hlds.typecheck_info.c"
                            check_hlds__typecheck_info__TypeInfo_21_21 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[7];
#line 2683 "check_hlds.typecheck_info.c"
                            {
#line 2685 "check_hlds.typecheck_info.c"
                              return check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_21_21, ((MR_Box) (check_hlds__typecheck_info__V_8_8)), ((MR_Box) (check_hlds__typecheck_info__V_14_14)));
                            }
#line 100 "typecheck_info.m"
                          }
#line 100 "typecheck_info.m"
                      }
#line 100 "typecheck_info.m"
                  }
#line 100 "typecheck_info.m"
              }
#line 100 "typecheck_info.m"
          }
#line 100 "typecheck_info.m"
      }
#line 100 "typecheck_info.m"
    return check_hlds__typecheck_info__succeeded;
#line 100 "typecheck_info.m"
  }
#line 100 "typecheck_info.m"
}

#line 88 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0(
#line 88 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
#line 88 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 88 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
#line 88 "typecheck_info.m"
{
#line 88 "typecheck_info.m"
  {
#line 88 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 88 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Cast_HeadVar1_4 = check_hlds__typecheck_info__HeadVar__2_2;
#line 88 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Cast_HeadVar2_5 = check_hlds__typecheck_info__HeadVar__3_3;

#line 88 "typecheck_info.m"
    {
#line 88 "typecheck_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_2[0], check_hlds__typecheck_info__HeadVar__1_1, ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar2_5)));
#line 88 "typecheck_info.m"
      return;
    }
#line 88 "typecheck_info.m"
  }
#line 88 "typecheck_info.m"
}

#line 88 "typecheck_info.m"
MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0(
#line 88 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 88 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
#line 88 "typecheck_info.m"
{
#line 88 "typecheck_info.m"
  {
#line 88 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 88 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Cast_HeadVar1_3 = check_hlds__typecheck_info__HeadVar__1_1;
#line 88 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Cast_HeadVar2_4 = check_hlds__typecheck_info__HeadVar__2_2;

#line 88 "typecheck_info.m"
    {
#line 88 "typecheck_info.m"
      return check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_2[0], ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar2_4)));
    }
#line 88 "typecheck_info.m"
    return check_hlds__typecheck_info__succeeded;
#line 88 "typecheck_info.m"
  }
#line 88 "typecheck_info.m"
}

#line 90 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_0_0(
#line 90 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
#line 90 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 90 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
#line 90 "typecheck_info.m"
{
#line 90 "typecheck_info.m"
  {
#line 90 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 90 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_22 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;
#line 90 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_23 = (MR_Integer) check_hlds__typecheck_info__HeadVar__3_3;

#line 90 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_22 == check_hlds__typecheck_info__CastY_23);
#line 90 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 2793 "check_hlds.typecheck_info.c"
      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 0;
#line 90 "typecheck_info.m"
    else
#line 90 "typecheck_info.m"
    if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 90 "typecheck_info.m"
      {
#line 90 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 90 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));

#line 90 "typecheck_info.m"
        if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 90 "typecheck_info.m"
          {
#line 90 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));
#line 90 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));
#line 90 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_21_21;

#line 90 "typecheck_info.m"
            {
#line 90 "typecheck_info.m"
              parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__typecheck_info__V_21_21, check_hlds__typecheck_info__V_29_29, check_hlds__typecheck_info__V_19_19);
            }
#line 2822 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_21_21 == (MR_Integer) 0);
#line 90 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 90 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 90 "typecheck_info.m"
              *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_21_21;
#line 90 "typecheck_info.m"
            else
#line 90 "typecheck_info.m"
              {
#line 90 "typecheck_info.m"
                {
#line 90 "typecheck_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[5], check_hlds__typecheck_info__HeadVar__1_1, ((MR_Box) (check_hlds__typecheck_info__V_28_28)), ((MR_Box) (check_hlds__typecheck_info__V_20_20)));
#line 90 "typecheck_info.m"
                  return;
                }
#line 90 "typecheck_info.m"
              }
#line 90 "typecheck_info.m"
          }
#line 90 "typecheck_info.m"
        else
#line 2847 "check_hlds.typecheck_info.c"
          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 90 "typecheck_info.m"
      }
#line 90 "typecheck_info.m"
    else
#line 90 "typecheck_info.m"
      {
#line 90 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 90 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));

#line 90 "typecheck_info.m"
        if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2862 "check_hlds.typecheck_info.c"
          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 90 "typecheck_info.m"
        else
#line 90 "typecheck_info.m"
          {
#line 90 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));
#line 90 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));
#line 90 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_8_8;

#line 90 "typecheck_info.m"
            {
#line 90 "typecheck_info.m"
              parse_tree__prog_data____Compare____simple_call_id_0_0(&check_hlds__typecheck_info__V_8_8, check_hlds__typecheck_info__V_31_31, check_hlds__typecheck_info__V_6_6);
            }
#line 2880 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_8_8 == (MR_Integer) 0);
#line 90 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 90 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 90 "typecheck_info.m"
              *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_8_8;
#line 90 "typecheck_info.m"
            else
#line 90 "typecheck_info.m"
              {
#line 90 "typecheck_info.m"
                {
#line 90 "typecheck_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[6], check_hlds__typecheck_info__HeadVar__1_1, ((MR_Box) (check_hlds__typecheck_info__V_30_30)), ((MR_Box) (check_hlds__typecheck_info__V_7_7)));
#line 90 "typecheck_info.m"
                  return;
                }
#line 90 "typecheck_info.m"
              }
#line 90 "typecheck_info.m"
          }
#line 90 "typecheck_info.m"
      }
#line 90 "typecheck_info.m"
  }
#line 90 "typecheck_info.m"
}

#line 90 "typecheck_info.m"
MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_0_0(
#line 90 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 90 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
#line 90 "typecheck_info.m"
{
#line 90 "typecheck_info.m"
  {
#line 90 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 90 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_11 = (MR_Integer) check_hlds__typecheck_info__HeadVar__1_1;
#line 90 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_12 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;

#line 90 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_11 == check_hlds__typecheck_info__CastY_12);
#line 90 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 90 "typecheck_info.m"
      check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 90 "typecheck_info.m"
    else
#line 90 "typecheck_info.m"
    if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 90 "typecheck_info.m"
      {
#line 90 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_14_14;
#line 90 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 90 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 90 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9;
#line 90 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_10_10;

#line 90 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 90 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 90 "typecheck_info.m"
          {
#line 90 "typecheck_info.m"
            check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 90 "typecheck_info.m"
            check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 2961 "check_hlds.typecheck_info.c"
            {
#line 2963 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_9_9);
            }
#line 90 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 90 "typecheck_info.m"
              {
#line 2970 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__TypeInfo_14_14 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[5];
#line 2972 "check_hlds.typecheck_info.c"
                {
#line 2974 "check_hlds.typecheck_info.c"
                  return check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_14_14, ((MR_Box) (check_hlds__typecheck_info__V_8_8)), ((MR_Box) (check_hlds__typecheck_info__V_10_10)));
                }
#line 90 "typecheck_info.m"
              }
#line 90 "typecheck_info.m"
          }
#line 90 "typecheck_info.m"
      }
#line 90 "typecheck_info.m"
    else
#line 90 "typecheck_info.m"
      {
#line 90 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_16_16;
#line 90 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 90 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 90 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5;
#line 90 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6;

#line 90 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 90 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 90 "typecheck_info.m"
          {
#line 90 "typecheck_info.m"
            check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 90 "typecheck_info.m"
            check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 3008 "check_hlds.typecheck_info.c"
            {
#line 3010 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____simple_call_id_0_0(check_hlds__typecheck_info__V_3_3, check_hlds__typecheck_info__V_5_5);
            }
#line 90 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 90 "typecheck_info.m"
              {
#line 3017 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__TypeInfo_16_16 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[6];
#line 3019 "check_hlds.typecheck_info.c"
                {
#line 3021 "check_hlds.typecheck_info.c"
                  return check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_16_16, ((MR_Box) (check_hlds__typecheck_info__V_4_4)), ((MR_Box) (check_hlds__typecheck_info__V_6_6)));
                }
#line 90 "typecheck_info.m"
              }
#line 90 "typecheck_info.m"
          }
#line 90 "typecheck_info.m"
      }
#line 90 "typecheck_info.m"
    return check_hlds__typecheck_info__succeeded;
#line 90 "typecheck_info.m"
  }
#line 90 "typecheck_info.m"
}

#line 78 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_source_0_0(
#line 78 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
#line 78 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 78 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
#line 78 "typecheck_info.m"
{
#line 78 "typecheck_info.m"
  {
#line 78 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 78 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_76 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;
#line 78 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_77 = (MR_Integer) check_hlds__typecheck_info__HeadVar__3_3;

#line 78 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_76 == check_hlds__typecheck_info__CastY_77);
#line 78 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 3061 "check_hlds.typecheck_info.c"
      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 0;
#line 78 "typecheck_info.m"
    else
#line 78 "typecheck_info.m"
    if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 78 "typecheck_info.m"
      {
#line 78 "typecheck_info.m"
        MR_String check_hlds__typecheck_info__V_85_85 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));

#line 78 "typecheck_info.m"
        if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 78 "typecheck_info.m"
          {
#line 78 "typecheck_info.m"
            MR_String check_hlds__typecheck_info__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));

#line 78 "typecheck_info.m"
            {
#line 78 "typecheck_info.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_85_85, check_hlds__typecheck_info__V_19_19);
#line 78 "typecheck_info.m"
              return;
            }
#line 78 "typecheck_info.m"
          }
#line 78 "typecheck_info.m"
        else
#line 78 "typecheck_info.m"
        if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3092 "check_hlds.typecheck_info.c"
          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 78 "typecheck_info.m"
        else
#line 78 "typecheck_info.m"
        if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3098 "check_hlds.typecheck_info.c"
          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 78 "typecheck_info.m"
        else
#line 78 "typecheck_info.m"
        if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3104 "check_hlds.typecheck_info.c"
          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 78 "typecheck_info.m"
        else
#line 78 "typecheck_info.m"
        if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 3110 "check_hlds.typecheck_info.c"
          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 78 "typecheck_info.m"
        else
#line 3114 "check_hlds.typecheck_info.c"
          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 78 "typecheck_info.m"
      }
#line 78 "typecheck_info.m"
    else
#line 78 "typecheck_info.m"
    if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 78 "typecheck_info.m"
      {
#line 78 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));

#line 78 "typecheck_info.m"
        if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3129 "check_hlds.typecheck_info.c"
          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 78 "typecheck_info.m"
        else
#line 78 "typecheck_info.m"
        if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 78 "typecheck_info.m"
          {
#line 78 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));

#line 78 "typecheck_info.m"
            {
#line 78 "typecheck_info.m"
              parse_tree__prog_data____Compare____type_ctor_0_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_86_86, check_hlds__typecheck_info__V_33_33);
#line 78 "typecheck_info.m"
              return;
            }
#line 78 "typecheck_info.m"
          }
#line 78 "typecheck_info.m"
        else
#line 78 "typecheck_info.m"
        if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3153 "check_hlds.typecheck_info.c"
          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 78 "typecheck_info.m"
        else
#line 78 "typecheck_info.m"
        if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3159 "check_hlds.typecheck_info.c"
          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 78 "typecheck_info.m"
        else
#line 78 "typecheck_info.m"
        if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 3165 "check_hlds.typecheck_info.c"
          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 78 "typecheck_info.m"
        else
#line 3169 "check_hlds.typecheck_info.c"
          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 78 "typecheck_info.m"
      }
#line 78 "typecheck_info.m"
    else
#line 78 "typecheck_info.m"
    if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 78 "typecheck_info.m"
      {
#line 78 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));

#line 78 "typecheck_info.m"
        if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3184 "check_hlds.typecheck_info.c"
          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 78 "typecheck_info.m"
        else
#line 78 "typecheck_info.m"
        if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3190 "check_hlds.typecheck_info.c"
          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 78 "typecheck_info.m"
        else
#line 78 "typecheck_info.m"
        if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 78 "typecheck_info.m"
          {
#line 78 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));

#line 78 "typecheck_info.m"
            {
#line 78 "typecheck_info.m"
              parse_tree__prog_data____Compare____type_ctor_0_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_89_89, check_hlds__typecheck_info__V_5_5);
#line 78 "typecheck_info.m"
              return;
            }
#line 78 "typecheck_info.m"
          }
#line 78 "typecheck_info.m"
        else
#line 78 "typecheck_info.m"
        if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3214 "check_hlds.typecheck_info.c"
          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 78 "typecheck_info.m"
        else
#line 78 "typecheck_info.m"
        if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 3220 "check_hlds.typecheck_info.c"
          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 78 "typecheck_info.m"
        else
#line 3224 "check_hlds.typecheck_info.c"
          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 78 "typecheck_info.m"
      }
#line 78 "typecheck_info.m"
    else
#line 78 "typecheck_info.m"
    if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 78 "typecheck_info.m"
      {
#line 78 "typecheck_info.m"
        MR_String check_hlds__typecheck_info__V_84_84 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));

#line 78 "typecheck_info.m"
        if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3239 "check_hlds.typecheck_info.c"
          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 78 "typecheck_info.m"
        else
#line 78 "typecheck_info.m"
        if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3245 "check_hlds.typecheck_info.c"
          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 78 "typecheck_info.m"
        else
#line 78 "typecheck_info.m"
        if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3251 "check_hlds.typecheck_info.c"
          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 78 "typecheck_info.m"
        else
#line 78 "typecheck_info.m"
        if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 78 "typecheck_info.m"
          {
#line 78 "typecheck_info.m"
            MR_String check_hlds__typecheck_info__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));

#line 78 "typecheck_info.m"
            {
#line 78 "typecheck_info.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_84_84, check_hlds__typecheck_info__V_61_61);
#line 78 "typecheck_info.m"
              return;
            }
#line 78 "typecheck_info.m"
          }
#line 78 "typecheck_info.m"
        else
#line 78 "typecheck_info.m"
        if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 3275 "check_hlds.typecheck_info.c"
          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 78 "typecheck_info.m"
        else
#line 3279 "check_hlds.typecheck_info.c"
          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 78 "typecheck_info.m"
      }
#line 78 "typecheck_info.m"
    else
#line 78 "typecheck_info.m"
    if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 78 "typecheck_info.m"
      {
#line 78 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));

#line 78 "typecheck_info.m"
        if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3294 "check_hlds.typecheck_info.c"
          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 78 "typecheck_info.m"
        else
#line 78 "typecheck_info.m"
        if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3300 "check_hlds.typecheck_info.c"
          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 78 "typecheck_info.m"
        else
#line 78 "typecheck_info.m"
        if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3306 "check_hlds.typecheck_info.c"
          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 78 "typecheck_info.m"
        else
#line 78 "typecheck_info.m"
        if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3312 "check_hlds.typecheck_info.c"
          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 78 "typecheck_info.m"
        else
#line 78 "typecheck_info.m"
        if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 78 "typecheck_info.m"
          {
#line 78 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));

#line 78 "typecheck_info.m"
            {
#line 78 "typecheck_info.m"
              hlds__hlds_pred____Compare____pred_id_0_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_87_87, check_hlds__typecheck_info__V_75_75);
#line 78 "typecheck_info.m"
              return;
            }
#line 78 "typecheck_info.m"
          }
#line 78 "typecheck_info.m"
        else
#line 3334 "check_hlds.typecheck_info.c"
          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 78 "typecheck_info.m"
      }
#line 78 "typecheck_info.m"
    else
#line 78 "typecheck_info.m"
      {
#line 78 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));

#line 78 "typecheck_info.m"
        if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3347 "check_hlds.typecheck_info.c"
          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 78 "typecheck_info.m"
        else
#line 78 "typecheck_info.m"
        if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3353 "check_hlds.typecheck_info.c"
          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 78 "typecheck_info.m"
        else
#line 78 "typecheck_info.m"
        if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3359 "check_hlds.typecheck_info.c"
          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 78 "typecheck_info.m"
        else
#line 78 "typecheck_info.m"
        if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3365 "check_hlds.typecheck_info.c"
          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 78 "typecheck_info.m"
        else
#line 78 "typecheck_info.m"
        if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 3371 "check_hlds.typecheck_info.c"
          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 78 "typecheck_info.m"
        else
#line 78 "typecheck_info.m"
          {
#line 78 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));

#line 78 "typecheck_info.m"
            {
#line 78 "typecheck_info.m"
              parse_tree__prog_data____Compare____type_ctor_0_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_88_88, check_hlds__typecheck_info__V_47_47);
#line 78 "typecheck_info.m"
              return;
            }
#line 78 "typecheck_info.m"
          }
#line 78 "typecheck_info.m"
      }
#line 78 "typecheck_info.m"
  }
#line 78 "typecheck_info.m"
}

#line 78 "typecheck_info.m"
MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_source_0_0(
#line 78 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 78 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
#line 78 "typecheck_info.m"
{
#line 78 "typecheck_info.m"
  {
#line 78 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 78 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_15 = (MR_Integer) check_hlds__typecheck_info__HeadVar__1_1;
#line 78 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_16 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;

#line 78 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_15 == check_hlds__typecheck_info__CastY_16);
#line 78 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 78 "typecheck_info.m"
      check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 78 "typecheck_info.m"
    else
#line 78 "typecheck_info.m"
    if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 78 "typecheck_info.m"
      {
#line 78 "typecheck_info.m"
        MR_String check_hlds__typecheck_info__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 78 "typecheck_info.m"
        MR_String check_hlds__typecheck_info__V_6_6;

#line 78 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 78 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 78 "typecheck_info.m"
          {
#line 78 "typecheck_info.m"
            check_hlds__typecheck_info__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 3439 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__succeeded = (strcmp(check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__V_6_6) == 0);
#line 78 "typecheck_info.m"
          }
#line 78 "typecheck_info.m"
      }
#line 78 "typecheck_info.m"
    else
#line 78 "typecheck_info.m"
    if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 78 "typecheck_info.m"
      {
#line 78 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 78 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8;

#line 78 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 78 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 78 "typecheck_info.m"
          {
#line 78 "typecheck_info.m"
            check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 3464 "check_hlds.typecheck_info.c"
            {
#line 3466 "check_hlds.typecheck_info.c"
              return check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_8_8);
            }
#line 78 "typecheck_info.m"
          }
#line 78 "typecheck_info.m"
      }
#line 78 "typecheck_info.m"
    else
#line 78 "typecheck_info.m"
    if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 78 "typecheck_info.m"
      {
#line 78 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 78 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4;

#line 78 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 78 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 78 "typecheck_info.m"
          {
#line 78 "typecheck_info.m"
            check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 3492 "check_hlds.typecheck_info.c"
            {
#line 3494 "check_hlds.typecheck_info.c"
              return check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__typecheck_info__V_3_3, check_hlds__typecheck_info__V_4_4);
            }
#line 78 "typecheck_info.m"
          }
#line 78 "typecheck_info.m"
      }
#line 78 "typecheck_info.m"
    else
#line 78 "typecheck_info.m"
    if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 78 "typecheck_info.m"
      {
#line 78 "typecheck_info.m"
        MR_String check_hlds__typecheck_info__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 78 "typecheck_info.m"
        MR_String check_hlds__typecheck_info__V_12_12;

#line 78 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 78 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 78 "typecheck_info.m"
          {
#line 78 "typecheck_info.m"
            check_hlds__typecheck_info__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 3520 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__succeeded = (strcmp(check_hlds__typecheck_info__V_11_11, check_hlds__typecheck_info__V_12_12) == 0);
#line 78 "typecheck_info.m"
          }
#line 78 "typecheck_info.m"
      }
#line 78 "typecheck_info.m"
    else
#line 78 "typecheck_info.m"
    if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 78 "typecheck_info.m"
      {
#line 78 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 78 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_14_14;

#line 78 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 78 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 78 "typecheck_info.m"
          {
#line 78 "typecheck_info.m"
            check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 3545 "check_hlds.typecheck_info.c"
            {
#line 3547 "check_hlds.typecheck_info.c"
              return check_hlds__typecheck_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__typecheck_info__V_13_13, check_hlds__typecheck_info__V_14_14);
            }
#line 78 "typecheck_info.m"
          }
#line 78 "typecheck_info.m"
      }
#line 78 "typecheck_info.m"
    else
#line 78 "typecheck_info.m"
      {
#line 78 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 78 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_10_10;

#line 78 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 78 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 78 "typecheck_info.m"
          {
#line 78 "typecheck_info.m"
            check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 3571 "check_hlds.typecheck_info.c"
            {
#line 3573 "check_hlds.typecheck_info.c"
              return check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__typecheck_info__V_9_9, check_hlds__typecheck_info__V_10_10);
            }
#line 78 "typecheck_info.m"
          }
#line 78 "typecheck_info.m"
      }
#line 78 "typecheck_info.m"
    return check_hlds__typecheck_info__succeeded;
#line 78 "typecheck_info.m"
  }
#line 78 "typecheck_info.m"
}

#line 56 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_0_0(
#line 56 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
#line 56 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 56 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
#line 56 "typecheck_info.m"
{
#line 56 "typecheck_info.m"
  {
#line 56 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 56 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_21 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;
#line 56 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_22 = (MR_Integer) check_hlds__typecheck_info__HeadVar__3_3;

#line 56 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_21 == check_hlds__typecheck_info__CastY_22);
#line 56 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 3611 "check_hlds.typecheck_info.c"
      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 0;
#line 56 "typecheck_info.m"
    else
#line 56 "typecheck_info.m"
      {
#line 56 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 56 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 56 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
#line 56 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
#line 56 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 4)));
#line 56 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 5)));
#line 56 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));
#line 56 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));
#line 56 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 2)));
#line 56 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 3)));
#line 56 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 4)));
#line 56 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 5)));
#line 56 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_16_16;

#line 56 "typecheck_info.m"
        {
#line 56 "typecheck_info.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[1], &check_hlds__typecheck_info__V_16_16, ((MR_Box) (check_hlds__typecheck_info__V_4_4)), ((MR_Box) (check_hlds__typecheck_info__V_10_10)));
        }
#line 3649 "check_hlds.typecheck_info.c"
        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_16_16 == (MR_Integer) 0);
#line 56 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 56 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 56 "typecheck_info.m"
          *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_16_16;
#line 56 "typecheck_info.m"
        else
#line 56 "typecheck_info.m"
          {
#line 56 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_17_17;

#line 56 "typecheck_info.m"
            {
#line 56 "typecheck_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[3], &check_hlds__typecheck_info__V_17_17, ((MR_Box) (check_hlds__typecheck_info__V_5_5)), ((MR_Box) (check_hlds__typecheck_info__V_11_11)));
            }
#line 3669 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_17_17 == (MR_Integer) 0);
#line 56 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 56 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 56 "typecheck_info.m"
              *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_17_17;
#line 56 "typecheck_info.m"
            else
#line 56 "typecheck_info.m"
              {
#line 56 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_18_18;

#line 56 "typecheck_info.m"
                {
#line 56 "typecheck_info.m"
                  parse_tree__prog_data____Compare____mer_type_0_0(&check_hlds__typecheck_info__V_18_18, check_hlds__typecheck_info__V_6_6, check_hlds__typecheck_info__V_12_12);
                }
#line 3689 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_18_18 == (MR_Integer) 0);
#line 56 "typecheck_info.m"
                check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 56 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 56 "typecheck_info.m"
                  *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_18_18;
#line 56 "typecheck_info.m"
                else
#line 56 "typecheck_info.m"
                  {
#line 56 "typecheck_info.m"
                    MR_Word check_hlds__typecheck_info__V_19_19;

#line 56 "typecheck_info.m"
                    {
#line 56 "typecheck_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[4], &check_hlds__typecheck_info__V_19_19, ((MR_Box) (check_hlds__typecheck_info__V_7_7)), ((MR_Box) (check_hlds__typecheck_info__V_13_13)));
                    }
#line 3709 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_19_19 == (MR_Integer) 0);
#line 56 "typecheck_info.m"
                    check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 56 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 56 "typecheck_info.m"
                      *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_19_19;
#line 56 "typecheck_info.m"
                    else
#line 56 "typecheck_info.m"
                      {
#line 56 "typecheck_info.m"
                        MR_Word check_hlds__typecheck_info__V_20_20;

#line 56 "typecheck_info.m"
                        {
#line 56 "typecheck_info.m"
                          hlds__hlds_data____Compare____hlds_constraints_0_0(&check_hlds__typecheck_info__V_20_20, check_hlds__typecheck_info__V_8_8, check_hlds__typecheck_info__V_14_14);
                        }
#line 3729 "check_hlds.typecheck_info.c"
                        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_20_20 == (MR_Integer) 0);
#line 56 "typecheck_info.m"
                        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 56 "typecheck_info.m"
                        if (check_hlds__typecheck_info__succeeded)
#line 56 "typecheck_info.m"
                          *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_20_20;
#line 56 "typecheck_info.m"
                        else
#line 56 "typecheck_info.m"
                          {
#line 56 "typecheck_info.m"
                            check_hlds__typecheck_info____Compare____cons_type_info_source_0_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_9_9, check_hlds__typecheck_info__V_15_15);
#line 56 "typecheck_info.m"
                            return;
                          }
#line 56 "typecheck_info.m"
                      }
#line 56 "typecheck_info.m"
                  }
#line 56 "typecheck_info.m"
              }
#line 56 "typecheck_info.m"
          }
#line 56 "typecheck_info.m"
      }
#line 56 "typecheck_info.m"
  }
#line 56 "typecheck_info.m"
}

#line 56 "typecheck_info.m"
MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_0_0(
#line 56 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 56 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
#line 56 "typecheck_info.m"
{
#line 56 "typecheck_info.m"
  {
#line 56 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 56 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_15 = (MR_Integer) check_hlds__typecheck_info__HeadVar__1_1;
#line 56 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_16 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;

#line 56 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_15 == check_hlds__typecheck_info__CastY_16);
#line 56 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 56 "typecheck_info.m"
      check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 56 "typecheck_info.m"
    else
#line 56 "typecheck_info.m"
      {
#line 56 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_18_18;
#line 56 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_20_20;
#line 56 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 56 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 56 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 2)));
#line 56 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 3)));
#line 56 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 4)));
#line 56 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 5)));
#line 56 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 56 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 56 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
#line 56 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
#line 56 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 4)));
#line 56 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 5)));

#line 3818 "check_hlds.typecheck_info.c"
        {
#line 3820 "check_hlds.typecheck_info.c"
          check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[1], ((MR_Box) (check_hlds__typecheck_info__V_3_3)), ((MR_Box) (check_hlds__typecheck_info__V_9_9)));
        }
#line 56 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 56 "typecheck_info.m"
          {
#line 3827 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__TypeInfo_18_18 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[3];
#line 3829 "check_hlds.typecheck_info.c"
            {
#line 3831 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_18_18, ((MR_Box) (check_hlds__typecheck_info__V_4_4)), ((MR_Box) (check_hlds__typecheck_info__V_10_10)));
            }
#line 56 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 56 "typecheck_info.m"
              {
#line 3838 "check_hlds.typecheck_info.c"
                {
#line 3840 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__V_11_11);
                }
#line 56 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 56 "typecheck_info.m"
                  {
#line 3847 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__TypeInfo_20_20 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[4];
#line 3849 "check_hlds.typecheck_info.c"
                    {
#line 3851 "check_hlds.typecheck_info.c"
                      check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_20_20, ((MR_Box) (check_hlds__typecheck_info__V_6_6)), ((MR_Box) (check_hlds__typecheck_info__V_12_12)));
                    }
#line 56 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 56 "typecheck_info.m"
                      {
#line 3858 "check_hlds.typecheck_info.c"
                        {
#line 3860 "check_hlds.typecheck_info.c"
                          check_hlds__typecheck_info__succeeded = hlds__hlds_data____Unify____hlds_constraints_0_0(check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_13_13);
                        }
#line 56 "typecheck_info.m"
                        if (check_hlds__typecheck_info__succeeded)
#line 3865 "check_hlds.typecheck_info.c"
                          {
#line 3867 "check_hlds.typecheck_info.c"
                            return check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____cons_type_info_source_0_0(check_hlds__typecheck_info__V_8_8, check_hlds__typecheck_info__V_14_14);
                          }
#line 56 "typecheck_info.m"
                      }
#line 56 "typecheck_info.m"
                  }
#line 56 "typecheck_info.m"
              }
#line 56 "typecheck_info.m"
          }
#line 56 "typecheck_info.m"
      }
#line 56 "typecheck_info.m"
    return check_hlds__typecheck_info__succeeded;
#line 56 "typecheck_info.m"
  }
#line 56 "typecheck_info.m"
}

#line 183 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_all_errors_2_p_0(
#line 183 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 183 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__Errors_4)
#line 183 "typecheck_info.m"
{
#line 391 "typecheck_info.m"
  {
#line 391 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 391 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Errors0_5;
#line 391 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__MaybeOverloadError_6;
#line 391 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 305 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 305 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 305 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 305 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 0)));
#line 305 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 1)));
#line 305 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_17_17;

#line 305 "typecheck_info.m"
    check_hlds__typecheck_info__Errors0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 2)));
#line 305 "typecheck_info.m"
    check_hlds__typecheck_info__MaybeOverloadError_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 3)));
#line 305 "typecheck_info.m"
    check_hlds__typecheck_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 4)));
#line 397 "typecheck_info.m"
    if ((check_hlds__typecheck_info__MaybeOverloadError_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 396 "typecheck_info.m"
      *check_hlds__typecheck_info__Errors_4 = check_hlds__typecheck_info__Errors0_5;
#line 397 "typecheck_info.m"
    else
#line 398 "typecheck_info.m"
      {
#line 398 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__OverloadError_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__MaybeOverloadError_6, (MR_Integer) 0)));

#line 399 "typecheck_info.m"
        {
#line 399 "typecheck_info.m"
          MR_Word base;
#line 399 "typecheck_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 399 "typecheck_info.m"
          *check_hlds__typecheck_info__Errors_4 = base;
#line 399 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck_info__OverloadError_7));
#line 399 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck_info__Errors0_5));
#line 399 "typecheck_info.m"
        }
#line 398 "typecheck_info.m"
      }
#line 391 "typecheck_info.m"
  }
#line 183 "typecheck_info.m"
}

#line 180 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(
#line 180 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Error_4,
#line 180 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8,
#line 180 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_Info_9)
#line 180 "typecheck_info.m"
{
#line 386 "typecheck_info.m"
  {
#line 386 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 386 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Errors0_6;
#line 386 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Errors_7;
#line 386 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 386 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 386 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 386 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 386 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, (MR_Integer) 0)));
#line 386 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, (MR_Integer) 1)));
#line 386 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_19_19;
#line 386 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_20_20;
#line 386 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_27_27;

#line 305 "typecheck_info.m"
    check_hlds__typecheck_info__Errors0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, (MR_Integer) 2)));
#line 305 "typecheck_info.m"
    check_hlds__typecheck_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, (MR_Integer) 3)));
#line 305 "typecheck_info.m"
    check_hlds__typecheck_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, (MR_Integer) 4)));
#line 388 "typecheck_info.m"
    {
#line 388 "typecheck_info.m"
      check_hlds__typecheck_info__Errors_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "typecheck_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__Errors_7, 0) = ((MR_Box) (check_hlds__typecheck_info__Error_4));
#line 388 "typecheck_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__Errors_7, 1) = ((MR_Box) (check_hlds__typecheck_info__Errors0_6));
#line 388 "typecheck_info.m"
    }
#line 315 "typecheck_info.m"
    {
#line 315 "typecheck_info.m"
      check_hlds__typecheck_info__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 315 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_27_27, 0) = ((MR_Box) (check_hlds__typecheck_info__V_17_17));
#line 315 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_27_27, 1) = ((MR_Box) (check_hlds__typecheck_info__V_18_18));
#line 315 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_27_27, 2) = ((MR_Box) (check_hlds__typecheck_info__Errors_7));
#line 315 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_27_27, 3) = ((MR_Box) (check_hlds__typecheck_info__V_19_19));
#line 315 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_27_27, 4) = ((MR_Box) (check_hlds__typecheck_info__V_20_20));
#line 315 "typecheck_info.m"
    }
#line 315 "typecheck_info.m"
    {
#line 315 "typecheck_info.m"
      MR_Word base;
#line 315 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 315 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_Info_9 = base;
#line 315 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_27_27));
#line 315 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
#line 315 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
#line 315 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_16_16));
#line 315 "typecheck_info.m"
    }
#line 386 "typecheck_info.m"
  }
#line 180 "typecheck_info.m"
}

#line 177 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_p_0(
#line 177 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Symbol_5,
#line 177 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Context_6,
#line 177 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12,
#line 177 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_Info_13)
#line 177 "typecheck_info.m"
{
#line 373 "typecheck_info.m"
  {
#line 373 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 373 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__OverloadedSymbolMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
#line 373 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__OverloadedSymbolMap_11;
#line 291 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
#line 291 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 1)));
#line 291 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
#line 379 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__OldContexts_9;
#line 375 "typecheck_info.m"
    MR_Box check_hlds__typecheck_info__conv0_OldContexts_9;
#line 312 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_33_33;
#line 312 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_34_34;
#line 312 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_36_36;
#line 312 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_35_35;

#line 375 "typecheck_info.m"
    {
#line 375 "typecheck_info.m"
      check_hlds__typecheck_info__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0, (MR_Word) &check_hlds__typecheck_info_scalar_common_1[0], check_hlds__typecheck_info__OverloadedSymbolMap0_8, ((MR_Box) (check_hlds__typecheck_info__Symbol_5)), &check_hlds__typecheck_info__conv0_OldContexts_9);
    }
#line 375 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 375 "typecheck_info.m"
      {
#line 375 "typecheck_info.m"
        check_hlds__typecheck_info__OldContexts_9 = ((MR_Word) check_hlds__typecheck_info__conv0_OldContexts_9);
#line 375 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 375 "typecheck_info.m"
      }
#line 379 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 376 "typecheck_info.m"
      {
#line 376 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__Contexts_10;

#line 376 "typecheck_info.m"
        {
#line 376 "typecheck_info.m"
          check_hlds__typecheck_info__Contexts_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 376 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__Contexts_10, 0) = ((MR_Box) (check_hlds__typecheck_info__Context_6));
#line 376 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__Contexts_10, 1) = ((MR_Box) (check_hlds__typecheck_info__OldContexts_9));
#line 376 "typecheck_info.m"
        }
#line 377 "typecheck_info.m"
        {
#line 377 "typecheck_info.m"
          mercury__map__det_update_4_p_0((MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0, (MR_Word) &check_hlds__typecheck_info_scalar_common_1[0], ((MR_Box) (check_hlds__typecheck_info__Symbol_5)), ((MR_Box) (check_hlds__typecheck_info__Contexts_10)), check_hlds__typecheck_info__OverloadedSymbolMap0_8, &check_hlds__typecheck_info__OverloadedSymbolMap_11);
        }
#line 376 "typecheck_info.m"
      }
#line 379 "typecheck_info.m"
    else
#line 380 "typecheck_info.m"
      {
#line 380 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__Contexts_16;

#line 380 "typecheck_info.m"
        {
#line 380 "typecheck_info.m"
          check_hlds__typecheck_info__Contexts_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 380 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__Contexts_16, 0) = ((MR_Box) (check_hlds__typecheck_info__Context_6));
#line 380 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__Contexts_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 380 "typecheck_info.m"
        }
#line 381 "typecheck_info.m"
        {
#line 381 "typecheck_info.m"
          mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0, (MR_Word) &check_hlds__typecheck_info_scalar_common_1[0], ((MR_Box) (check_hlds__typecheck_info__Symbol_5)), ((MR_Box) (check_hlds__typecheck_info__Contexts_16)), check_hlds__typecheck_info__OverloadedSymbolMap0_8, &check_hlds__typecheck_info__OverloadedSymbolMap_11);
        }
#line 380 "typecheck_info.m"
      }
#line 312 "typecheck_info.m"
    check_hlds__typecheck_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
#line 312 "typecheck_info.m"
    check_hlds__typecheck_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 1)));
#line 312 "typecheck_info.m"
    check_hlds__typecheck_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
#line 312 "typecheck_info.m"
    check_hlds__typecheck_info__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
#line 312 "typecheck_info.m"
    {
#line 312 "typecheck_info.m"
      MR_Word base;
#line 312 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 312 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_Info_13 = base;
#line 312 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_33_33));
#line 312 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_34_34));
#line 312 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__OverloadedSymbolMap_11));
#line 312 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_36_36));
#line 312 "typecheck_info.m"
    }
#line 373 "typecheck_info.m"
  }
#line 177 "typecheck_info.m"
}

#line 175 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_ctors_2_p_0(
#line 175 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 175 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__Ctors_4)
#line 175 "typecheck_info.m"
{
#line 369 "typecheck_info.m"
  {
#line 369 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 369 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__ModuleInfo_5;
#line 369 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 296 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 296 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 296 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 296 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12;
#line 296 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13;
#line 296 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_14_14;
#line 296 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15;
#line 296 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16;

#line 296 "typecheck_info.m"
    check_hlds__typecheck_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 0)));
#line 296 "typecheck_info.m"
    check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 1)));
#line 296 "typecheck_info.m"
    check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 2)));
#line 296 "typecheck_info.m"
    check_hlds__typecheck_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 3)));
#line 296 "typecheck_info.m"
    check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 4)));
#line 296 "typecheck_info.m"
    check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 5)));
#line 371 "typecheck_info.m"
    {
#line 371 "typecheck_info.m"
      hlds__hlds_module__module_info_get_cons_table_2_p_0(check_hlds__typecheck_info__ModuleInfo_5, check_hlds__typecheck_info__Ctors_4);
#line 371 "typecheck_info.m"
      return;
    }
#line 369 "typecheck_info.m"
  }
#line 175 "typecheck_info.m"
}

#line 174 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_types_2_p_0(
#line 174 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 174 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__Types_4)
#line 174 "typecheck_info.m"
{
#line 366 "typecheck_info.m"
  {
#line 366 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 366 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__ModuleInfo_5;
#line 366 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 296 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 296 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 296 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 296 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12;
#line 296 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13;
#line 296 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_14_14;
#line 296 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15;
#line 296 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16;

#line 296 "typecheck_info.m"
    check_hlds__typecheck_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 0)));
#line 296 "typecheck_info.m"
    check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 1)));
#line 296 "typecheck_info.m"
    check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 2)));
#line 296 "typecheck_info.m"
    check_hlds__typecheck_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 3)));
#line 296 "typecheck_info.m"
    check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 4)));
#line 296 "typecheck_info.m"
    check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 5)));
#line 368 "typecheck_info.m"
    {
#line 368 "typecheck_info.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__typecheck_info__ModuleInfo_5, check_hlds__typecheck_info__Types_4);
#line 368 "typecheck_info.m"
      return;
    }
#line 366 "typecheck_info.m"
  }
#line 174 "typecheck_info.m"
}

#line 172 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_preds_2_p_0(
#line 172 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 172 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__Preds_4)
#line 172 "typecheck_info.m"
{
#line 363 "typecheck_info.m"
  {
#line 363 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 363 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__ModuleInfo_5;
#line 363 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 296 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 296 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 296 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 296 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12;
#line 296 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13;
#line 296 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_14_14;
#line 296 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15;
#line 296 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16;

#line 296 "typecheck_info.m"
    check_hlds__typecheck_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 0)));
#line 296 "typecheck_info.m"
    check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 1)));
#line 296 "typecheck_info.m"
    check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 2)));
#line 296 "typecheck_info.m"
    check_hlds__typecheck_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 3)));
#line 296 "typecheck_info.m"
    check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 4)));
#line 296 "typecheck_info.m"
    check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 5)));
#line 365 "typecheck_info.m"
    {
#line 365 "typecheck_info.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__typecheck_info__ModuleInfo_5, check_hlds__typecheck_info__Preds_4);
#line 365 "typecheck_info.m"
      return;
    }
#line 363 "typecheck_info.m"
  }
#line 172 "typecheck_info.m"
}

#line 170 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_module_name_2_p_0(
#line 170 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 170 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__Name_4)
#line 170 "typecheck_info.m"
{
#line 360 "typecheck_info.m"
  {
#line 360 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 360 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__ModuleInfo_5;
#line 360 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 296 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 296 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 296 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 296 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12;
#line 296 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13;
#line 296 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_14_14;
#line 296 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15;
#line 296 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16;

#line 296 "typecheck_info.m"
    check_hlds__typecheck_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 0)));
#line 296 "typecheck_info.m"
    check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 1)));
#line 296 "typecheck_info.m"
    check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 2)));
#line 296 "typecheck_info.m"
    check_hlds__typecheck_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 3)));
#line 296 "typecheck_info.m"
    check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 4)));
#line 296 "typecheck_info.m"
    check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 5)));
#line 362 "typecheck_info.m"
    {
#line 362 "typecheck_info.m"
      hlds__hlds_module__module_info_get_name_2_p_0(check_hlds__typecheck_info__ModuleInfo_5, check_hlds__typecheck_info__Name_4);
#line 362 "typecheck_info.m"
      return;
    }
#line 360 "typecheck_info.m"
  }
#line 170 "typecheck_info.m"
}

#line 162 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_set_non_overload_errors_3_p_0(
#line 162 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__X_4,
#line 162 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6,
#line 162 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_Info_7)
#line 162 "typecheck_info.m"
{
#line 314 "typecheck_info.m"
  {
#line 314 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 314 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 314 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10;
#line 314 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 314 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 314 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 315 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 0)));
#line 315 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 1)));
#line 315 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 3)));
#line 315 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 4)));
#line 315 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 2)));

#line 315 "typecheck_info.m"
    {
#line 315 "typecheck_info.m"
      check_hlds__typecheck_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 315 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, 0) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
#line 315 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, 1) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
#line 315 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, 2) = ((MR_Box) (check_hlds__typecheck_info__X_4));
#line 315 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, 3) = ((MR_Box) (check_hlds__typecheck_info__V_17_17));
#line 315 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, 4) = ((MR_Box) (check_hlds__typecheck_info__V_18_18));
#line 315 "typecheck_info.m"
    }
#line 315 "typecheck_info.m"
    {
#line 315 "typecheck_info.m"
      MR_Word base;
#line 315 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 315 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_Info_7 = base;
#line 315 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_10_10));
#line 315 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_11_11));
#line 315 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_12_12));
#line 315 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 315 "typecheck_info.m"
    }
#line 314 "typecheck_info.m"
  }
#line 162 "typecheck_info.m"
}

#line 160 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_set_overloaded_symbol_map_3_p_0(
#line 160 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__X_4,
#line 160 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6,
#line 160 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_Info_7)
#line 160 "typecheck_info.m"
{
#line 312 "typecheck_info.m"
  {
#line 312 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 312 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 312 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 312 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 312 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));

#line 312 "typecheck_info.m"
    {
#line 312 "typecheck_info.m"
      MR_Word base;
#line 312 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 312 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_Info_7 = base;
#line 312 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_9_9));
#line 312 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_10_10));
#line 312 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__X_4));
#line 312 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_12_12));
#line 312 "typecheck_info.m"
    }
#line 312 "typecheck_info.m"
  }
#line 160 "typecheck_info.m"
}

#line 158 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_set_overload_error_3_p_0(
#line 158 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__X_4,
#line 158 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6,
#line 158 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_Info_7)
#line 158 "typecheck_info.m"
{
#line 316 "typecheck_info.m"
  {
#line 316 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 316 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 316 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10;
#line 316 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 316 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 316 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 317 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 0)));
#line 317 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 1)));
#line 317 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 2)));
#line 317 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 4)));
#line 317 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 3)));

#line 317 "typecheck_info.m"
    {
#line 317 "typecheck_info.m"
      check_hlds__typecheck_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 317 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, 0) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
#line 317 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, 1) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
#line 317 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, 2) = ((MR_Box) (check_hlds__typecheck_info__V_16_16));
#line 317 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, 3) = ((MR_Box) (check_hlds__typecheck_info__X_4));
#line 317 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, 4) = ((MR_Box) (check_hlds__typecheck_info__V_18_18));
#line 317 "typecheck_info.m"
    }
#line 317 "typecheck_info.m"
    {
#line 317 "typecheck_info.m"
      MR_Word base;
#line 317 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 317 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_Info_7 = base;
#line 317 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_10_10));
#line 317 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_11_11));
#line 317 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_12_12));
#line 317 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 317 "typecheck_info.m"
    }
#line 316 "typecheck_info.m"
  }
#line 158 "typecheck_info.m"
}

#line 155 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_ambiguity_warn_limit_2_p_0(
#line 155 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 155 "typecheck_info.m"
  MR_Integer * check_hlds__typecheck_info__X_4)
#line 155 "typecheck_info.m"
{
#line 293 "typecheck_info.m"
  {
#line 293 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 293 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 293 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 293 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));

#line 293 "typecheck_info.m"
    *check_hlds__typecheck_info__X_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 293 "typecheck_info.m"
  }
#line 155 "typecheck_info.m"
}

#line 153 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_overloaded_symbol_map_2_p_0(
#line 153 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 153 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__X_4)
#line 153 "typecheck_info.m"
{
#line 291 "typecheck_info.m"
  {
#line 291 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 291 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 291 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 291 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_7_7;

#line 291 "typecheck_info.m"
    *check_hlds__typecheck_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 291 "typecheck_info.m"
    check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 291 "typecheck_info.m"
  }
#line 153 "typecheck_info.m"
}

#line 151 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_overload_error_2_p_0(
#line 151 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 151 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__X_4)
#line 151 "typecheck_info.m"
{
#line 306 "typecheck_info.m"
  {
#line 306 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 306 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 307 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 307 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 307 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 307 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 0)));
#line 307 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 1)));
#line 307 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 2)));
#line 307 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_12_12;

#line 307 "typecheck_info.m"
    *check_hlds__typecheck_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 3)));
#line 307 "typecheck_info.m"
    check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 4)));
#line 306 "typecheck_info.m"
  }
#line 151 "typecheck_info.m"
}

#line 149 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_non_overload_errors_2_p_0(
#line 149 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 149 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__X_4)
#line 149 "typecheck_info.m"
{
#line 304 "typecheck_info.m"
  {
#line 304 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 304 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 305 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 305 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 305 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 305 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 0)));
#line 305 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 1)));
#line 305 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11;
#line 305 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_12_12;

#line 305 "typecheck_info.m"
    *check_hlds__typecheck_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 2)));
#line 305 "typecheck_info.m"
    check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 3)));
#line 305 "typecheck_info.m"
    check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 4)));
#line 304 "typecheck_info.m"
  }
#line 149 "typecheck_info.m"
}

#line 147 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_is_field_access_function_2_p_0(
#line 147 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 147 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__X_4)
#line 147 "typecheck_info.m"
{
#line 302 "typecheck_info.m"
  {
#line 302 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 302 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 303 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 303 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 303 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 303 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 0)));
#line 303 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10;
#line 303 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11;
#line 303 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_12_12;

#line 303 "typecheck_info.m"
    *check_hlds__typecheck_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 1)));
#line 303 "typecheck_info.m"
    check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 2)));
#line 303 "typecheck_info.m"
    check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 3)));
#line 303 "typecheck_info.m"
    check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 4)));
#line 302 "typecheck_info.m"
  }
#line 147 "typecheck_info.m"
}

#line 145 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_calls_are_fully_qualified_2_p_0(
#line 145 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 145 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__X_4)
#line 145 "typecheck_info.m"
{
#line 300 "typecheck_info.m"
  {
#line 300 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 300 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 301 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 301 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 301 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 301 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9;
#line 301 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10;
#line 301 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11;
#line 301 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_12_12;

#line 301 "typecheck_info.m"
    *check_hlds__typecheck_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 0)));
#line 301 "typecheck_info.m"
    check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 1)));
#line 301 "typecheck_info.m"
    check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 2)));
#line 301 "typecheck_info.m"
    check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 3)));
#line 301 "typecheck_info.m"
    check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 4)));
#line 300 "typecheck_info.m"
  }
#line 145 "typecheck_info.m"
}

#line 143 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_pred_id_2_p_0(
#line 143 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 143 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__X_4)
#line 143 "typecheck_info.m"
{
#line 297 "typecheck_info.m"
  {
#line 297 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 297 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 298 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 298 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 298 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 298 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 0)));
#line 298 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10;
#line 298 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_11_11;
#line 298 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12;
#line 298 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13;

#line 298 "typecheck_info.m"
    *check_hlds__typecheck_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 1)));
#line 298 "typecheck_info.m"
    check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 2)));
#line 298 "typecheck_info.m"
    check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 3)));
#line 298 "typecheck_info.m"
    check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 4)));
#line 298 "typecheck_info.m"
    check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 5)));
#line 297 "typecheck_info.m"
  }
#line 143 "typecheck_info.m"
}

#line 140 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_ambiguity_error_limit_2_p_0(
#line 140 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 140 "typecheck_info.m"
  MR_Integer * check_hlds__typecheck_info__X_4)
#line 140 "typecheck_info.m"
{
#line 308 "typecheck_info.m"
  {
#line 308 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 308 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 309 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 309 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 309 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 309 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 0)));
#line 309 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 1)));
#line 309 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 2)));
#line 309 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 3)));

#line 309 "typecheck_info.m"
    *check_hlds__typecheck_info__X_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 4)));
#line 308 "typecheck_info.m"
  }
#line 140 "typecheck_info.m"
}

#line 138 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(
#line 138 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 138 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__X_4)
#line 138 "typecheck_info.m"
{
#line 289 "typecheck_info.m"
  {
#line 289 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 289 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 289 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6;
#line 289 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_7_7;

#line 289 "typecheck_info.m"
    *check_hlds__typecheck_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 289 "typecheck_info.m"
    check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 289 "typecheck_info.m"
    check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 289 "typecheck_info.m"
  }
#line 138 "typecheck_info.m"
}

#line 136 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(
#line 136 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 136 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__X_4)
#line 136 "typecheck_info.m"
{
#line 295 "typecheck_info.m"
  {
#line 295 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 295 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 296 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 296 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 296 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 296 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9;
#line 296 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10;
#line 296 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_11_11;
#line 296 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12;
#line 296 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13;

#line 296 "typecheck_info.m"
    *check_hlds__typecheck_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 0)));
#line 296 "typecheck_info.m"
    check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 1)));
#line 296 "typecheck_info.m"
    check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 2)));
#line 296 "typecheck_info.m"
    check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 3)));
#line 296 "typecheck_info.m"
    check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 4)));
#line 296 "typecheck_info.m"
    check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 5)));
#line 295 "typecheck_info.m"
  }
#line 136 "typecheck_info.m"
}

#line 86 "typecheck_info.m"
MR_Word MR_CALL 
check_hlds__typecheck_info__project_cons_type_info_source_1_f_0(
#line 86 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__CTI_3)
#line 86 "typecheck_info.m"
{
#line 199 "typecheck_info.m"
  {
#line 199 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 199 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__CTI_3, (MR_Integer) 5)));
#line 199 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__CTI_3, (MR_Integer) 0)));
#line 199 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__CTI_3, (MR_Integer) 1)));
#line 199 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__CTI_3, (MR_Integer) 2)));
#line 199 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__CTI_3, (MR_Integer) 3)));
#line 199 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__CTI_3, (MR_Integer) 4)));

#line 199 "typecheck_info.m"
    return check_hlds__typecheck_info__HeadVar__2_2;
#line 199 "typecheck_info.m"
  }
#line 86 "typecheck_info.m"
}

#line 43 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_init_8_p_0(
#line 43 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__ModuleInfo_9,
#line 43 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__PredId_10,
#line 43 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__IsFieldAccessFunction_11,
#line 43 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__ClauseVarSet_12,
#line 43 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Status_13,
#line 43 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__PredMarkers_14,
#line 43 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__NonOverloadErrors_15,
#line 43 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__Info_16)
#line 43 "typecheck_info.m"
{
#line 261 "typecheck_info.m"
  {
#line 261 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 261 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__CallsAreFullyQualified_17;
#line 261 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__MaybeFieldAccessFunction_18;
#line 261 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Globals_20;
#line 261 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__WarnLimit_21;
#line 261 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__ErrorLimit_22;
#line 261 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__SubInfo_23;
#line 261 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__ClauseContext_25;
#line 261 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__OverloadedSymbolMap_26;
#line 261 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_29_29;

#line 262 "typecheck_info.m"
    {
#line 262 "typecheck_info.m"
      check_hlds__typecheck_info__CallsAreFullyQualified_17 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(check_hlds__typecheck_info__PredMarkers_14);
    }
#line 266 "typecheck_info.m"
    if ((check_hlds__typecheck_info__IsFieldAccessFunction_11 == (MR_Integer) 0))
#line 265 "typecheck_info.m"
      check_hlds__typecheck_info__MaybeFieldAccessFunction_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 266 "typecheck_info.m"
    else
#line 268 "typecheck_info.m"
      {
#line 268 "typecheck_info.m"
        check_hlds__typecheck_info__MaybeFieldAccessFunction_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 268 "typecheck_info.m"
        MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__MaybeFieldAccessFunction_18, 0) = ((MR_Box) (check_hlds__typecheck_info__Status_13));
#line 268 "typecheck_info.m"
      }
#line 271 "typecheck_info.m"
    {
#line 271 "typecheck_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck_info__ModuleInfo_9, &check_hlds__typecheck_info__Globals_20);
    }
#line 272 "typecheck_info.m"
    {
#line 272 "typecheck_info.m"
      libs__globals__lookup_int_option_3_p_0(check_hlds__typecheck_info__Globals_20, (MR_Integer) 661, &check_hlds__typecheck_info__WarnLimit_21);
    }
#line 274 "typecheck_info.m"
    {
#line 274 "typecheck_info.m"
      libs__globals__lookup_int_option_3_p_0(check_hlds__typecheck_info__Globals_20, (MR_Integer) 662, &check_hlds__typecheck_info__ErrorLimit_22);
    }
#line 276 "typecheck_info.m"
    {
#line 276 "typecheck_info.m"
      check_hlds__typecheck_info__SubInfo_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 276 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_23, 0) = ((MR_Box) (check_hlds__typecheck_info__CallsAreFullyQualified_17));
#line 276 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_23, 1) = ((MR_Box) (check_hlds__typecheck_info__MaybeFieldAccessFunction_18));
#line 276 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_23, 2) = ((MR_Box) (check_hlds__typecheck_info__NonOverloadErrors_15));
#line 276 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_23, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 276 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_23, 4) = ((MR_Box) (check_hlds__typecheck_info__ErrorLimit_22));
#line 276 "typecheck_info.m"
    }
#line 281 "typecheck_info.m"
    {
#line 281 "typecheck_info.m"
      check_hlds__typecheck_info__V_29_29 = mercury__term__context_init_0_f_0();
    }
#line 280 "typecheck_info.m"
    {
#line 280 "typecheck_info.m"
      check_hlds__typecheck_info__ClauseContext_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 280 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ClauseContext_25, 0) = ((MR_Box) (check_hlds__typecheck_info__ModuleInfo_9));
#line 280 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ClauseContext_25, 1) = ((MR_Box) (check_hlds__typecheck_info__PredId_10));
#line 280 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ClauseContext_25, 2) = ((MR_Box) (check_hlds__typecheck_info__PredMarkers_14));
#line 280 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ClauseContext_25, 3) = ((MR_Box) ((MR_Integer) 0));
#line 280 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ClauseContext_25, 4) = ((MR_Box) (check_hlds__typecheck_info__V_29_29));
#line 280 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ClauseContext_25, 5) = ((MR_Box) (check_hlds__typecheck_info__ClauseVarSet_12));
#line 280 "typecheck_info.m"
    }
#line 282 "typecheck_info.m"
    {
#line 282 "typecheck_info.m"
      mercury__map__init_1_p_0((MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0, (MR_Word) &check_hlds__typecheck_info_scalar_common_1[0], &check_hlds__typecheck_info__OverloadedSymbolMap_26);
    }
#line 283 "typecheck_info.m"
    {
#line 283 "typecheck_info.m"
      MR_Word base;
#line 283 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 283 "typecheck_info.m"
      *check_hlds__typecheck_info__Info_16 = base;
#line 283 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__SubInfo_23));
#line 283 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__ClauseContext_25));
#line 283 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__OverloadedSymbolMap_26));
#line 283 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__WarnLimit_21));
#line 283 "typecheck_info.m"
    }
#line 261 "typecheck_info.m"
  }
#line 43 "typecheck_info.m"
}

void mercury__check_hlds__typecheck_info__init(void)
{
}

void mercury__check_hlds__typecheck_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_map_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_error_clause_context_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_sub_info_0);
}

void mercury__check_hlds__typecheck_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.typecheck_info. */
