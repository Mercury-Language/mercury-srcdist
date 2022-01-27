/*
** Automatically generated from `typecheck_info.m'
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


/* :- module check_hlds.typecheck_info. */
/* :- implementation. */

/*
INIT mercury__check_hlds__typecheck_info__init
ENDINIT
*/

#include "check_hlds.typecheck_info.mih"


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
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 139 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 142 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 145 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 148 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 151 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_0_0[6];

#line 154 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_cons_type_info_0_0[6];

#line 157 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_0_0;

#line 160 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_0_0[1];

#line 163 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_0[1];

#line 166 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_cons_type_info_0[1];

#line 169 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_cons_type_info_0[1];

#line 172 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_0[1];

#line 175 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_0;

#line 178 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_1[1];

#line 181 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_1;

#line 184 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_2[1];

#line 187 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_2;

#line 190 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_3[1];

#line 193 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_3;

#line 196 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_4[1];

#line 199 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_4;

#line 202 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_5[1];

#line 205 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_5;

#line 208 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_0[1];

#line 211 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_1[1];

#line 214 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_2[1];

#line 217 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_3[3];

#line 220 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_source_0[4];

#line 223 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_cons_type_info_source_0[6];

#line 226 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_cons_type_info_source_0[6];

#line 229 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 232 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_0[2];

#line 235 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_0;

#line 238 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0;

#line 241 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_1[2];

#line 244 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_1;

#line 247 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_0[1];

#line 250 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_1[1];

#line 253 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_overloaded_symbol_0[2];

#line 256 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_overloaded_symbol_0[2];

#line 259 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_overloaded_symbol_0[2];

#line 262 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1term__type_ctor_info_context_0;

#line 265 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0list__ti_list_1term__type_ctor_info_context_0;

#line 268 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_marker_0;

#line 271 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 274 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_type_error_clause_context_0_0[6];

#line 277 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_type_error_clause_context_0_0[6];

#line 280 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_type_error_clause_context_0_0;

#line 283 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_type_error_clause_context_0_0[1];

#line 286 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_type_error_clause_context_0[1];

#line 289 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_type_error_clause_context_0[1];

#line 292 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_type_error_clause_context_0[1];

#line 295 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_info_0_0[4];

#line 298 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_info_0_0[4];

#line 301 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_info_0_0;

#line 304 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_info_0_0[1];

#line 307 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_info_0[1];

#line 310 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_info_0[1];

#line 313 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_info_0[1];

#line 316 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__maybe__ti_maybe_1hlds__status__type_ctor_info_pred_status_0;

#line 319 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 322 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 325 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_sub_info_0_0[5];

#line 328 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_sub_info_0_0[5];

#line 331 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_sub_info_0_0;

#line 334 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_sub_info_0_0[1];

#line 337 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_sub_info_0[1];

#line 340 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_sub_info_0[1];

#line 343 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_sub_info_0[1];

#line 346 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_0_0_10001(
#line 349 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 351 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 354 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_0_0_10001(
#line 357 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 359 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 361 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 364 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_source_0_0_10001(
#line 367 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 369 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 372 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_source_0_0_10001(
#line 375 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 377 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 379 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 382 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_0_0_10001(
#line 385 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 387 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 390 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_0_0_10001(
#line 393 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 395 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 397 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 400 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0_10001(
#line 403 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 405 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 408 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0_10001(
#line 411 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 413 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 415 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 418 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____type_error_clause_context_0_0_10001(
#line 421 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 423 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 426 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____type_error_clause_context_0_0_10001(
#line 429 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 431 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 433 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 436 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_info_0_0_10001(
#line 439 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 441 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 444 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_info_0_0_10001(
#line 447 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 449 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 451 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 454 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0_10001(
#line 457 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 459 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 462 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0_10001(
#line 465 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 467 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 469 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 204 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0(
#line 204 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
#line 204 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 204 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__3_3);

#line 204 "typecheck_info.m"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0(
#line 204 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 204 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2);


static /* final */ const MR_Box check_hlds__typecheck_info_scalar_common_1[12][2];

static /* final */ const MR_Box check_hlds__typecheck_info_scalar_common_2[1][3];




static /* final */ const MR_Box check_hlds__typecheck_info_scalar_common_1[12][2] = {
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
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_pred_status_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 11 */
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 579 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 587 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 595 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 603 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 611 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_0_0[6] = {
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraints_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0
};

#line 621 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_cons_type_info_0_0[6] = {
  (MR_String) "cti_varset",
  (MR_String) "cti_exit_tvars",
  (MR_String) "cti_result_type",
  (MR_String) "cti_arg_types",
  (MR_String) "cti_constraints",
  (MR_String) "cti_source"
};

#line 631 "check_hlds.typecheck_info.c"
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

#line 646 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_0_0
};

#line 651 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_0_0
  }
};

#line 660 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_cons_type_info_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_0_0
};

#line 665 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_cons_type_info_0[1] = {
  (MR_Integer) 0
};

#line 670 "check_hlds.typecheck_info.c"
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

#line 687 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
};

#line 692 "check_hlds.typecheck_info.c"
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

#line 707 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 712 "check_hlds.typecheck_info.c"
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

#line 727 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
};

#line 732 "check_hlds.typecheck_info.c"
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

#line 747 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
};

#line 752 "check_hlds.typecheck_info.c"
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

#line 767 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 772 "check_hlds.typecheck_info.c"
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

#line 787 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_5[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
};

#line 792 "check_hlds.typecheck_info.c"
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

#line 807 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_0
};

#line 812 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_1[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_1
};

#line 817 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_2[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_2
};

#line 822 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_3[3] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_3,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_4,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_5
};

#line 829 "check_hlds.typecheck_info.c"
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

#line 853 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_cons_type_info_source_0[6] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_4,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_1,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_2,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_5,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_3,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_0
};

#line 863 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_cons_type_info_source_0[6] = {
  (MR_Integer) 5,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 3
};

#line 873 "check_hlds.typecheck_info.c"
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

#line 890 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 898 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_simple_call_id_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
};

#line 904 "check_hlds.typecheck_info.c"
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

#line 919 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0
  }
};

#line 927 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_1[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0
};

#line 933 "check_hlds.typecheck_info.c"
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

#line 948 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_0
};

#line 953 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_1[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_1
};

#line 958 "check_hlds.typecheck_info.c"
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

#line 972 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_overloaded_symbol_0[2] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_1,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_0
};

#line 978 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_overloaded_symbol_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 984 "check_hlds.typecheck_info.c"
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

#line 1001 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 1009 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0,
    (MR_TypeInfo) &check_hlds__typecheck_info__list__ti_list_1term__type_ctor_info_context_0
  }
};

#line 1018 "check_hlds.typecheck_info.c"
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

#line 1035 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_marker_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0
  }
};

#line 1043 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1051 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_type_error_clause_context_0_0[6] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_marker_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1061 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_type_error_clause_context_0_0[6] = {
  (MR_String) "tecc_module_info",
  (MR_String) "tecc_pred_id",
  (MR_String) "tecc_pred_markers",
  (MR_String) "tecc_clause_num",
  (MR_String) "tecc_clause_context",
  (MR_String) "tecc_varset"
};

#line 1071 "check_hlds.typecheck_info.c"
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

#line 1086 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_type_error_clause_context_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_type_error_clause_context_0_0
};

#line 1091 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_type_error_clause_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_type_error_clause_context_0_0
  }
};

#line 1100 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_type_error_clause_context_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_type_error_clause_context_0_0
};

#line 1105 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_type_error_clause_context_0[1] = {
  (MR_Integer) 0
};

#line 1110 "check_hlds.typecheck_info.c"
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

#line 1127 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_info_0_0[4] = {
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_sub_info_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_error_clause_context_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__tree234__ti_tree234_2check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0list__ti_list_1term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1135 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_info_0_0[4] = {
  (MR_String) "tci_sub_info",
  (MR_String) "tci_error_clause_context",
  (MR_String) "tci_overloaded_symbol_map",
  (MR_String) "tci_ambiguity_warn_limit"
};

#line 1143 "check_hlds.typecheck_info.c"
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

#line 1158 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_info_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_info_0_0
};

#line 1163 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_info_0_0
  }
};

#line 1172 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_info_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_info_0_0
};

#line 1177 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_info_0[1] = {
  (MR_Integer) 0
};

#line 1182 "check_hlds.typecheck_info.c"
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

#line 1199 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__maybe__ti_maybe_1hlds__status__type_ctor_info_pred_status_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &hlds__status__hlds__status__type_ctor_info_pred_status_0
  }
};

#line 1207 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1215 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1223 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_sub_info_0_0[5] = {
  (MR_PseudoTypeInfo) &hlds__pred_table__hlds__pred_table__type_ctor_info_is_fully_qualified_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__maybe__ti_maybe_1hlds__status__type_ctor_info_pred_status_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_spec_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1232 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_sub_info_0_0[5] = {
  (MR_String) "tcsi_calls_are_fully_qualified",
  (MR_String) "tcsi_is_field_access_function",
  (MR_String) "tcsi_non_overload_errors",
  (MR_String) "tcsi_overload_error",
  (MR_String) "tcsi_ambiguity_error_limit"
};

#line 1241 "check_hlds.typecheck_info.c"
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

#line 1256 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_sub_info_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_sub_info_0_0
};

#line 1261 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_sub_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_sub_info_0_0
  }
};

#line 1270 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_sub_info_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_sub_info_0_0
};

#line 1275 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_sub_info_0[1] = {
  (MR_Integer) 0
};

#line 1280 "check_hlds.typecheck_info.c"
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

#line 1297 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_0_0_10001(
#line 1300 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 1302 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 1304 "check_hlds.typecheck_info.c"
{
#line 1306 "check_hlds.typecheck_info.c"
  {
#line 1308 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 1311 "check_hlds.typecheck_info.c"
    {
#line 1313 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____cons_type_info_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 1316 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 1318 "check_hlds.typecheck_info.c"
  }
#line 1320 "check_hlds.typecheck_info.c"
}

#line 1323 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_0_0_10001(
#line 1326 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 1328 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 1330 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 1332 "check_hlds.typecheck_info.c"
{
#line 1334 "check_hlds.typecheck_info.c"
  {
#line 1336 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 1339 "check_hlds.typecheck_info.c"
    {
#line 1341 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____cons_type_info_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 1344 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 1346 "check_hlds.typecheck_info.c"
  }
#line 1348 "check_hlds.typecheck_info.c"
}

#line 1351 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_source_0_0_10001(
#line 1354 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 1356 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 1358 "check_hlds.typecheck_info.c"
{
#line 1360 "check_hlds.typecheck_info.c"
  {
#line 1362 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 1365 "check_hlds.typecheck_info.c"
    {
#line 1367 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____cons_type_info_source_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 1370 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 1372 "check_hlds.typecheck_info.c"
  }
#line 1374 "check_hlds.typecheck_info.c"
}

#line 1377 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_source_0_0_10001(
#line 1380 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 1382 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 1384 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 1386 "check_hlds.typecheck_info.c"
{
#line 1388 "check_hlds.typecheck_info.c"
  {
#line 1390 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 1393 "check_hlds.typecheck_info.c"
    {
#line 1395 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____cons_type_info_source_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 1398 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 1400 "check_hlds.typecheck_info.c"
  }
#line 1402 "check_hlds.typecheck_info.c"
}

#line 1405 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_0_0_10001(
#line 1408 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 1410 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 1412 "check_hlds.typecheck_info.c"
{
#line 1414 "check_hlds.typecheck_info.c"
  {
#line 1416 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 1419 "check_hlds.typecheck_info.c"
    {
#line 1421 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____overloaded_symbol_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 1424 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 1426 "check_hlds.typecheck_info.c"
  }
#line 1428 "check_hlds.typecheck_info.c"
}

#line 1431 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_0_0_10001(
#line 1434 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 1436 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 1438 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 1440 "check_hlds.typecheck_info.c"
{
#line 1442 "check_hlds.typecheck_info.c"
  {
#line 1444 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 1447 "check_hlds.typecheck_info.c"
    {
#line 1449 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____overloaded_symbol_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 1452 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 1454 "check_hlds.typecheck_info.c"
  }
#line 1456 "check_hlds.typecheck_info.c"
}

#line 1459 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0_10001(
#line 1462 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 1464 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 1466 "check_hlds.typecheck_info.c"
{
#line 1468 "check_hlds.typecheck_info.c"
  {
#line 1470 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 1473 "check_hlds.typecheck_info.c"
    {
#line 1475 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 1478 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 1480 "check_hlds.typecheck_info.c"
  }
#line 1482 "check_hlds.typecheck_info.c"
}

#line 1485 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0_10001(
#line 1488 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 1490 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 1492 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 1494 "check_hlds.typecheck_info.c"
{
#line 1496 "check_hlds.typecheck_info.c"
  {
#line 1498 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 1501 "check_hlds.typecheck_info.c"
    {
#line 1503 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 1506 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 1508 "check_hlds.typecheck_info.c"
  }
#line 1510 "check_hlds.typecheck_info.c"
}

#line 1513 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____type_error_clause_context_0_0_10001(
#line 1516 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 1518 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 1520 "check_hlds.typecheck_info.c"
{
#line 1522 "check_hlds.typecheck_info.c"
  {
#line 1524 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 1527 "check_hlds.typecheck_info.c"
    {
#line 1529 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____type_error_clause_context_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 1532 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 1534 "check_hlds.typecheck_info.c"
  }
#line 1536 "check_hlds.typecheck_info.c"
}

#line 1539 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____type_error_clause_context_0_0_10001(
#line 1542 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 1544 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 1546 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 1548 "check_hlds.typecheck_info.c"
{
#line 1550 "check_hlds.typecheck_info.c"
  {
#line 1552 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 1555 "check_hlds.typecheck_info.c"
    {
#line 1557 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____type_error_clause_context_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 1560 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 1562 "check_hlds.typecheck_info.c"
  }
#line 1564 "check_hlds.typecheck_info.c"
}

#line 1567 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_info_0_0_10001(
#line 1570 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 1572 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 1574 "check_hlds.typecheck_info.c"
{
#line 1576 "check_hlds.typecheck_info.c"
  {
#line 1578 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 1581 "check_hlds.typecheck_info.c"
    {
#line 1583 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____typecheck_info_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 1586 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 1588 "check_hlds.typecheck_info.c"
  }
#line 1590 "check_hlds.typecheck_info.c"
}

#line 1593 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_info_0_0_10001(
#line 1596 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 1598 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 1600 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 1602 "check_hlds.typecheck_info.c"
{
#line 1604 "check_hlds.typecheck_info.c"
  {
#line 1606 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 1609 "check_hlds.typecheck_info.c"
    {
#line 1611 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____typecheck_info_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 1614 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 1616 "check_hlds.typecheck_info.c"
  }
#line 1618 "check_hlds.typecheck_info.c"
}

#line 1621 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0_10001(
#line 1624 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 1626 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 1628 "check_hlds.typecheck_info.c"
{
#line 1630 "check_hlds.typecheck_info.c"
  {
#line 1632 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 1635 "check_hlds.typecheck_info.c"
    {
#line 1637 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 1640 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 1642 "check_hlds.typecheck_info.c"
  }
#line 1644 "check_hlds.typecheck_info.c"
}

#line 1647 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0_10001(
#line 1650 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 1652 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 1654 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 1656 "check_hlds.typecheck_info.c"
{
#line 1658 "check_hlds.typecheck_info.c"
  {
#line 1660 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 1663 "check_hlds.typecheck_info.c"
    {
#line 1665 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 1668 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 1670 "check_hlds.typecheck_info.c"
  }
#line 1672 "check_hlds.typecheck_info.c"
}

#line 204 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0(
#line 204 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
#line 204 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 204 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
#line 204 "typecheck_info.m"
{
#line 204 "typecheck_info.m"
  {
#line 204 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 204 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_18 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;
#line 204 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_19 = (MR_Integer) check_hlds__typecheck_info__HeadVar__3_3;

#line 204 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_18 == check_hlds__typecheck_info__CastY_19);
#line 204 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 1699 "check_hlds.typecheck_info.c"
      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 0;
#line 204 "typecheck_info.m"
    else
#line 204 "typecheck_info.m"
      {
#line 204 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 204 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 204 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
#line 204 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
#line 204 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 4)));
#line 204 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));
#line 204 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));
#line 204 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 2)));
#line 204 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 3)));
#line 204 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 4)));
#line 204 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_14_14;
#line 204 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_25_25 = (MR_Integer) check_hlds__typecheck_info__V_4_4;
#line 204 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_26_26 = (MR_Integer) check_hlds__typecheck_info__V_9_9;

#line 204 "typecheck_info.m"
        {
#line 204 "typecheck_info.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__typecheck_info__V_14_14, check_hlds__typecheck_info__V_25_25, check_hlds__typecheck_info__V_26_26);
        }
#line 1737 "check_hlds.typecheck_info.c"
        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_14_14 == (MR_Integer) 0);
#line 204 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 204 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 204 "typecheck_info.m"
          *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_14_14;
#line 204 "typecheck_info.m"
        else
#line 204 "typecheck_info.m"
          {
#line 204 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_15_15;

#line 204 "typecheck_info.m"
            {
#line 204 "typecheck_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[9], &check_hlds__typecheck_info__V_15_15, ((MR_Box) (check_hlds__typecheck_info__V_5_5)), ((MR_Box) (check_hlds__typecheck_info__V_10_10)));
            }
#line 1757 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_15_15 == (MR_Integer) 0);
#line 204 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 204 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 204 "typecheck_info.m"
              *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_15_15;
#line 204 "typecheck_info.m"
            else
#line 204 "typecheck_info.m"
              {
#line 204 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_16_16;

#line 204 "typecheck_info.m"
                {
#line 204 "typecheck_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[10], &check_hlds__typecheck_info__V_16_16, ((MR_Box) (check_hlds__typecheck_info__V_6_6)), ((MR_Box) (check_hlds__typecheck_info__V_11_11)));
                }
#line 1777 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_16_16 == (MR_Integer) 0);
#line 204 "typecheck_info.m"
                check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 204 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 204 "typecheck_info.m"
                  *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_16_16;
#line 204 "typecheck_info.m"
                else
#line 204 "typecheck_info.m"
                  {
#line 204 "typecheck_info.m"
                    MR_Word check_hlds__typecheck_info__V_17_17;

#line 204 "typecheck_info.m"
                    {
#line 204 "typecheck_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[11], &check_hlds__typecheck_info__V_17_17, ((MR_Box) (check_hlds__typecheck_info__V_7_7)), ((MR_Box) (check_hlds__typecheck_info__V_12_12)));
                    }
#line 1797 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_17_17 == (MR_Integer) 0);
#line 204 "typecheck_info.m"
                    check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 204 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 204 "typecheck_info.m"
                      *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_17_17;
#line 204 "typecheck_info.m"
                    else
#line 204 "typecheck_info.m"
                      {
#line 204 "typecheck_info.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_8_8, check_hlds__typecheck_info__V_13_13);
                      }
#line 204 "typecheck_info.m"
                  }
#line 204 "typecheck_info.m"
              }
#line 204 "typecheck_info.m"
          }
#line 204 "typecheck_info.m"
      }
#line 204 "typecheck_info.m"
  }
#line 204 "typecheck_info.m"
}

#line 204 "typecheck_info.m"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0(
#line 204 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 204 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
#line 204 "typecheck_info.m"
{
#line 204 "typecheck_info.m"
  {
#line 204 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 204 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_13 = (MR_Integer) check_hlds__typecheck_info__HeadVar__1_1;
#line 204 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_14 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;

#line 204 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_13 == check_hlds__typecheck_info__CastY_14);
#line 204 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 204 "typecheck_info.m"
      check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 204 "typecheck_info.m"
    else
#line 204 "typecheck_info.m"
      {
#line 204 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_15_15;
#line 204 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_16_16;
#line 204 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_17_17;
#line 204 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 204 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 204 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 2)));
#line 204 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 3)));
#line 204 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 4)));
#line 204 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 204 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 204 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
#line 204 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
#line 204 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 4)));

#line 1880 "check_hlds.typecheck_info.c"
        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_3_3 == check_hlds__typecheck_info__V_8_8);
#line 204 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 204 "typecheck_info.m"
          {
#line 1886 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__TypeInfo_15_15 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[9];
#line 1888 "check_hlds.typecheck_info.c"
            {
#line 1890 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_15_15, ((MR_Box) (check_hlds__typecheck_info__V_4_4)), ((MR_Box) (check_hlds__typecheck_info__V_9_9)));
            }
#line 204 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 204 "typecheck_info.m"
              {
#line 1897 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__TypeInfo_16_16 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[10];
#line 1899 "check_hlds.typecheck_info.c"
                {
#line 1901 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_16_16, ((MR_Box) (check_hlds__typecheck_info__V_5_5)), ((MR_Box) (check_hlds__typecheck_info__V_10_10)));
                }
#line 204 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 204 "typecheck_info.m"
                  {
#line 1908 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__TypeInfo_17_17 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[11];
#line 1910 "check_hlds.typecheck_info.c"
                    {
#line 1912 "check_hlds.typecheck_info.c"
                      check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_17_17, ((MR_Box) (check_hlds__typecheck_info__V_6_6)), ((MR_Box) (check_hlds__typecheck_info__V_11_11)));
                    }
#line 204 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 1917 "check_hlds.typecheck_info.c"
                      check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_7_7 == check_hlds__typecheck_info__V_12_12);
#line 204 "typecheck_info.m"
                  }
#line 204 "typecheck_info.m"
              }
#line 204 "typecheck_info.m"
          }
#line 204 "typecheck_info.m"
      }
#line 204 "typecheck_info.m"
    return check_hlds__typecheck_info__succeeded;
#line 204 "typecheck_info.m"
  }
#line 204 "typecheck_info.m"
}

#line 232 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_info_0_0(
#line 232 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
#line 232 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 232 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
#line 232 "typecheck_info.m"
{
#line 232 "typecheck_info.m"
  {
#line 232 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 232 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_15 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;
#line 232 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_16 = (MR_Integer) check_hlds__typecheck_info__HeadVar__3_3;

#line 232 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_15 == check_hlds__typecheck_info__CastY_16);
#line 232 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 1958 "check_hlds.typecheck_info.c"
      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 0;
#line 232 "typecheck_info.m"
    else
#line 232 "typecheck_info.m"
      {
#line 232 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 232 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 232 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
#line 232 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
#line 232 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));
#line 232 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));
#line 232 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 2)));
#line 232 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 3)));
#line 232 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_12_12;
#line 204 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__CastX_35 = (MR_Integer) check_hlds__typecheck_info__V_4_4;
#line 204 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__CastY_36 = (MR_Integer) check_hlds__typecheck_info__V_8_8;

#line 204 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_35 == check_hlds__typecheck_info__CastY_36);
#line 204 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 1991 "check_hlds.typecheck_info.c"
          {
#line 1993 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 232 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 1997 "check_hlds.typecheck_info.c"
            if (check_hlds__typecheck_info__succeeded)
#line 1999 "check_hlds.typecheck_info.c"
              {
#line 2001 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__V_12_12 = (MR_Integer) 0;
#line 2003 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 2005 "check_hlds.typecheck_info.c"
              }
#line 2007 "check_hlds.typecheck_info.c"
          }
#line 204 "typecheck_info.m"
        else
#line 204 "typecheck_info.m"
          {
#line 204 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 0)));
#line 204 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 1)));
#line 204 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 2)));
#line 204 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 3)));
#line 204 "typecheck_info.m"
            MR_Integer check_hlds__typecheck_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 4)));
#line 204 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 0)));
#line 204 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 1)));
#line 204 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 2)));
#line 204 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 3)));
#line 204 "typecheck_info.m"
            MR_Integer check_hlds__typecheck_info__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 4)));
#line 204 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_31_31;
#line 204 "typecheck_info.m"
            MR_Integer check_hlds__typecheck_info__V_42_42 = (MR_Integer) check_hlds__typecheck_info__V_21_21;
#line 204 "typecheck_info.m"
            MR_Integer check_hlds__typecheck_info__V_43_43 = (MR_Integer) check_hlds__typecheck_info__V_26_26;

#line 204 "typecheck_info.m"
            {
#line 204 "typecheck_info.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__typecheck_info__V_31_31, check_hlds__typecheck_info__V_42_42, check_hlds__typecheck_info__V_43_43);
            }
#line 2045 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_31_31 == (MR_Integer) 0);
#line 204 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 204 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 204 "typecheck_info.m"
              {
#line 204 "typecheck_info.m"
                check_hlds__typecheck_info__V_12_12 = check_hlds__typecheck_info__V_31_31;
#line 2055 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_12_12 == (MR_Integer) 0);
#line 232 "typecheck_info.m"
                check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 204 "typecheck_info.m"
              }
#line 204 "typecheck_info.m"
            else
#line 204 "typecheck_info.m"
              {
#line 204 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_32_32;

#line 204 "typecheck_info.m"
                {
#line 204 "typecheck_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[9], &check_hlds__typecheck_info__V_32_32, ((MR_Box) (check_hlds__typecheck_info__V_22_22)), ((MR_Box) (check_hlds__typecheck_info__V_27_27)));
                }
#line 2073 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_32_32 == (MR_Integer) 0);
#line 204 "typecheck_info.m"
                check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 204 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 204 "typecheck_info.m"
                  {
#line 204 "typecheck_info.m"
                    check_hlds__typecheck_info__V_12_12 = check_hlds__typecheck_info__V_32_32;
#line 2083 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_12_12 == (MR_Integer) 0);
#line 232 "typecheck_info.m"
                    check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 204 "typecheck_info.m"
                  }
#line 204 "typecheck_info.m"
                else
#line 204 "typecheck_info.m"
                  {
#line 204 "typecheck_info.m"
                    MR_Word check_hlds__typecheck_info__V_33_33;

#line 204 "typecheck_info.m"
                    {
#line 204 "typecheck_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[10], &check_hlds__typecheck_info__V_33_33, ((MR_Box) (check_hlds__typecheck_info__V_23_23)), ((MR_Box) (check_hlds__typecheck_info__V_28_28)));
                    }
#line 2101 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_33_33 == (MR_Integer) 0);
#line 204 "typecheck_info.m"
                    check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 204 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 204 "typecheck_info.m"
                      {
#line 204 "typecheck_info.m"
                        check_hlds__typecheck_info__V_12_12 = check_hlds__typecheck_info__V_33_33;
#line 2111 "check_hlds.typecheck_info.c"
                        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_12_12 == (MR_Integer) 0);
#line 232 "typecheck_info.m"
                        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 204 "typecheck_info.m"
                      }
#line 204 "typecheck_info.m"
                    else
#line 204 "typecheck_info.m"
                      {
#line 204 "typecheck_info.m"
                        MR_Word check_hlds__typecheck_info__V_34_34;

#line 204 "typecheck_info.m"
                        {
#line 204 "typecheck_info.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[11], &check_hlds__typecheck_info__V_34_34, ((MR_Box) (check_hlds__typecheck_info__V_24_24)), ((MR_Box) (check_hlds__typecheck_info__V_29_29)));
                        }
#line 2129 "check_hlds.typecheck_info.c"
                        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_34_34 == (MR_Integer) 0);
#line 204 "typecheck_info.m"
                        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 204 "typecheck_info.m"
                        if (check_hlds__typecheck_info__succeeded)
#line 204 "typecheck_info.m"
                          {
#line 204 "typecheck_info.m"
                            check_hlds__typecheck_info__V_12_12 = check_hlds__typecheck_info__V_34_34;
#line 2139 "check_hlds.typecheck_info.c"
                            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_12_12 == (MR_Integer) 0);
#line 232 "typecheck_info.m"
                            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 204 "typecheck_info.m"
                          }
#line 204 "typecheck_info.m"
                        else
#line 204 "typecheck_info.m"
                          {
#line 204 "typecheck_info.m"
                            {
#line 204 "typecheck_info.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__typecheck_info__V_12_12, check_hlds__typecheck_info__V_25_25, check_hlds__typecheck_info__V_30_30);
                            }
#line 2154 "check_hlds.typecheck_info.c"
                            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_12_12 == (MR_Integer) 0);
#line 232 "typecheck_info.m"
                            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 204 "typecheck_info.m"
                          }
#line 204 "typecheck_info.m"
                      }
#line 204 "typecheck_info.m"
                  }
#line 204 "typecheck_info.m"
              }
#line 204 "typecheck_info.m"
          }
#line 232 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 232 "typecheck_info.m"
          *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_12_12;
#line 232 "typecheck_info.m"
        else
#line 232 "typecheck_info.m"
          {
#line 232 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_13_13;

#line 232 "typecheck_info.m"
            {
#line 232 "typecheck_info.m"
              check_hlds__typecheck_info____Compare____type_error_clause_context_0_0(&check_hlds__typecheck_info__V_13_13, check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__V_9_9);
            }
#line 2184 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_13_13 == (MR_Integer) 0);
#line 232 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 232 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 232 "typecheck_info.m"
              *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_13_13;
#line 232 "typecheck_info.m"
            else
#line 232 "typecheck_info.m"
              {
#line 232 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_14_14;

#line 232 "typecheck_info.m"
                {
#line 232 "typecheck_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_2[0], &check_hlds__typecheck_info__V_14_14, ((MR_Box) (check_hlds__typecheck_info__V_6_6)), ((MR_Box) (check_hlds__typecheck_info__V_10_10)));
                }
#line 2204 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_14_14 == (MR_Integer) 0);
#line 232 "typecheck_info.m"
                check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 232 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 232 "typecheck_info.m"
                  *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_14_14;
#line 232 "typecheck_info.m"
                else
#line 232 "typecheck_info.m"
                  {
#line 232 "typecheck_info.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_11_11);
                  }
#line 232 "typecheck_info.m"
              }
#line 232 "typecheck_info.m"
          }
#line 232 "typecheck_info.m"
      }
#line 232 "typecheck_info.m"
  }
#line 232 "typecheck_info.m"
}

#line 232 "typecheck_info.m"
MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_info_0_0(
#line 232 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 232 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
#line 232 "typecheck_info.m"
{
#line 232 "typecheck_info.m"
  {
#line 232 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 232 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_11 = (MR_Integer) check_hlds__typecheck_info__HeadVar__1_1;
#line 232 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_12 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;

#line 232 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_11 == check_hlds__typecheck_info__CastY_12);
#line 232 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 232 "typecheck_info.m"
      check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 232 "typecheck_info.m"
    else
#line 232 "typecheck_info.m"
      {
#line 232 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_13_13;
#line 232 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 232 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 232 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 2)));
#line 232 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 3)));
#line 232 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 232 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 232 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
#line 232 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
#line 204 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__CastX_24 = (MR_Integer) check_hlds__typecheck_info__V_3_3;
#line 204 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__CastY_25 = (MR_Integer) check_hlds__typecheck_info__V_7_7;

#line 204 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_24 == check_hlds__typecheck_info__CastY_25);
#line 204 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 204 "typecheck_info.m"
          check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 204 "typecheck_info.m"
        else
#line 204 "typecheck_info.m"
          {
#line 204 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__TypeInfo_15_26;
#line 204 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__TypeInfo_16_27;
#line 204 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__TypeInfo_17_28;
#line 204 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_3_3, (MR_Integer) 0)));
#line 204 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_3_3, (MR_Integer) 1)));
#line 204 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_3_3, (MR_Integer) 2)));
#line 204 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_3_3, (MR_Integer) 3)));
#line 204 "typecheck_info.m"
            MR_Integer check_hlds__typecheck_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_3_3, (MR_Integer) 4)));
#line 204 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, (MR_Integer) 0)));
#line 204 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, (MR_Integer) 1)));
#line 204 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, (MR_Integer) 2)));
#line 204 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, (MR_Integer) 3)));
#line 204 "typecheck_info.m"
            MR_Integer check_hlds__typecheck_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, (MR_Integer) 4)));

#line 2318 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_14_14 == check_hlds__typecheck_info__V_19_19);
#line 204 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 204 "typecheck_info.m"
              {
#line 2324 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__TypeInfo_15_26 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[9];
#line 2326 "check_hlds.typecheck_info.c"
                {
#line 2328 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_15_26, ((MR_Box) (check_hlds__typecheck_info__V_15_15)), ((MR_Box) (check_hlds__typecheck_info__V_20_20)));
                }
#line 204 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 204 "typecheck_info.m"
                  {
#line 2335 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__TypeInfo_16_27 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[10];
#line 2337 "check_hlds.typecheck_info.c"
                    {
#line 2339 "check_hlds.typecheck_info.c"
                      check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_16_27, ((MR_Box) (check_hlds__typecheck_info__V_16_16)), ((MR_Box) (check_hlds__typecheck_info__V_21_21)));
                    }
#line 204 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 204 "typecheck_info.m"
                      {
#line 2346 "check_hlds.typecheck_info.c"
                        check_hlds__typecheck_info__TypeInfo_17_28 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[11];
#line 2348 "check_hlds.typecheck_info.c"
                        {
#line 2350 "check_hlds.typecheck_info.c"
                          check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_17_28, ((MR_Box) (check_hlds__typecheck_info__V_17_17)), ((MR_Box) (check_hlds__typecheck_info__V_22_22)));
                        }
#line 204 "typecheck_info.m"
                        if (check_hlds__typecheck_info__succeeded)
#line 2355 "check_hlds.typecheck_info.c"
                          check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_18_18 == check_hlds__typecheck_info__V_23_23);
#line 204 "typecheck_info.m"
                      }
#line 204 "typecheck_info.m"
                  }
#line 204 "typecheck_info.m"
              }
#line 204 "typecheck_info.m"
          }
#line 232 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 232 "typecheck_info.m"
          {
#line 2369 "check_hlds.typecheck_info.c"
            {
#line 2371 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____type_error_clause_context_0_0(check_hlds__typecheck_info__V_4_4, check_hlds__typecheck_info__V_8_8);
            }
#line 232 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 232 "typecheck_info.m"
              {
#line 2378 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__TypeInfo_13_13 = (MR_Word) &check_hlds__typecheck_info_scalar_common_2[0];
#line 2380 "check_hlds.typecheck_info.c"
                {
#line 2382 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_13_13, ((MR_Box) (check_hlds__typecheck_info__V_5_5)), ((MR_Box) (check_hlds__typecheck_info__V_9_9)));
                }
#line 232 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 2387 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_6_6 == check_hlds__typecheck_info__V_10_10);
#line 232 "typecheck_info.m"
              }
#line 232 "typecheck_info.m"
          }
#line 232 "typecheck_info.m"
      }
#line 232 "typecheck_info.m"
    return check_hlds__typecheck_info__succeeded;
#line 232 "typecheck_info.m"
  }
#line 232 "typecheck_info.m"
}

#line 101 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info____Compare____type_error_clause_context_0_0(
#line 101 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
#line 101 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 101 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
#line 101 "typecheck_info.m"
{
#line 101 "typecheck_info.m"
  {
#line 101 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 101 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_21 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;
#line 101 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_22 = (MR_Integer) check_hlds__typecheck_info__HeadVar__3_3;

#line 101 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_21 == check_hlds__typecheck_info__CastY_22);
#line 101 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 2426 "check_hlds.typecheck_info.c"
      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 0;
#line 101 "typecheck_info.m"
    else
#line 101 "typecheck_info.m"
      {
#line 101 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 101 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 101 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
#line 101 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
#line 101 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 4)));
#line 101 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 5)));
#line 101 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));
#line 101 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));
#line 101 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 2)));
#line 101 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 3)));
#line 101 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 4)));
#line 101 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 5)));
#line 101 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_16_16;

#line 101 "typecheck_info.m"
        {
#line 101 "typecheck_info.m"
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__typecheck_info__V_16_16, check_hlds__typecheck_info__V_4_4, check_hlds__typecheck_info__V_10_10);
        }
#line 2464 "check_hlds.typecheck_info.c"
        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_16_16 == (MR_Integer) 0);
#line 101 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 101 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 101 "typecheck_info.m"
          *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_16_16;
#line 101 "typecheck_info.m"
        else
#line 101 "typecheck_info.m"
          {
#line 101 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_17_17;

#line 101 "typecheck_info.m"
            {
#line 101 "typecheck_info.m"
              hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__typecheck_info__V_17_17, check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__V_11_11);
            }
#line 2484 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_17_17 == (MR_Integer) 0);
#line 101 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 101 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 101 "typecheck_info.m"
              *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_17_17;
#line 101 "typecheck_info.m"
            else
#line 101 "typecheck_info.m"
              {
#line 101 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_18_18;

#line 101 "typecheck_info.m"
                {
#line 101 "typecheck_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[7], &check_hlds__typecheck_info__V_18_18, ((MR_Box) (check_hlds__typecheck_info__V_6_6)), ((MR_Box) (check_hlds__typecheck_info__V_12_12)));
                }
#line 2504 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_18_18 == (MR_Integer) 0);
#line 101 "typecheck_info.m"
                check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 101 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 101 "typecheck_info.m"
                  *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_18_18;
#line 101 "typecheck_info.m"
                else
#line 101 "typecheck_info.m"
                  {
#line 101 "typecheck_info.m"
                    MR_Word check_hlds__typecheck_info__V_19_19;

#line 101 "typecheck_info.m"
                    {
#line 101 "typecheck_info.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__typecheck_info__V_19_19, check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_13_13);
                    }
#line 2524 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_19_19 == (MR_Integer) 0);
#line 101 "typecheck_info.m"
                    check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 101 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 101 "typecheck_info.m"
                      *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_19_19;
#line 101 "typecheck_info.m"
                    else
#line 101 "typecheck_info.m"
                      {
#line 101 "typecheck_info.m"
                        MR_Word check_hlds__typecheck_info__V_20_20;

#line 101 "typecheck_info.m"
                        {
#line 101 "typecheck_info.m"
                          mercury__term____Compare____context_0_0(&check_hlds__typecheck_info__V_20_20, check_hlds__typecheck_info__V_8_8, check_hlds__typecheck_info__V_14_14);
                        }
#line 2544 "check_hlds.typecheck_info.c"
                        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_20_20 == (MR_Integer) 0);
#line 101 "typecheck_info.m"
                        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 101 "typecheck_info.m"
                        if (check_hlds__typecheck_info__succeeded)
#line 101 "typecheck_info.m"
                          *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_20_20;
#line 101 "typecheck_info.m"
                        else
#line 101 "typecheck_info.m"
                          {
#line 101 "typecheck_info.m"
                            {
#line 101 "typecheck_info.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[8], check_hlds__typecheck_info__HeadVar__1_1, ((MR_Box) (check_hlds__typecheck_info__V_9_9)), ((MR_Box) (check_hlds__typecheck_info__V_15_15)));
                            }
#line 101 "typecheck_info.m"
                          }
#line 101 "typecheck_info.m"
                      }
#line 101 "typecheck_info.m"
                  }
#line 101 "typecheck_info.m"
              }
#line 101 "typecheck_info.m"
          }
#line 101 "typecheck_info.m"
      }
#line 101 "typecheck_info.m"
  }
#line 101 "typecheck_info.m"
}

#line 101 "typecheck_info.m"
MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____type_error_clause_context_0_0(
#line 101 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 101 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
#line 101 "typecheck_info.m"
{
#line 101 "typecheck_info.m"
  {
#line 101 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 101 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_15 = (MR_Integer) check_hlds__typecheck_info__HeadVar__1_1;
#line 101 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_16 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;

#line 101 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_15 == check_hlds__typecheck_info__CastY_16);
#line 101 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 101 "typecheck_info.m"
      check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 101 "typecheck_info.m"
    else
#line 101 "typecheck_info.m"
      {
#line 101 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_19_19;
#line 101 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_21_21;
#line 101 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 101 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 101 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 2)));
#line 101 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 3)));
#line 101 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 4)));
#line 101 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 5)));
#line 101 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 101 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 101 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
#line 101 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
#line 101 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 4)));
#line 101 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 5)));

#line 2635 "check_hlds.typecheck_info.c"
        {
#line 2637 "check_hlds.typecheck_info.c"
          check_hlds__typecheck_info__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__typecheck_info__V_3_3, check_hlds__typecheck_info__V_9_9);
        }
#line 101 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 101 "typecheck_info.m"
          {
#line 2644 "check_hlds.typecheck_info.c"
            {
#line 2646 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__typecheck_info__V_4_4, check_hlds__typecheck_info__V_10_10);
            }
#line 101 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 101 "typecheck_info.m"
              {
#line 2653 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__TypeInfo_19_19 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[7];
#line 2655 "check_hlds.typecheck_info.c"
                {
#line 2657 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_19_19, ((MR_Box) (check_hlds__typecheck_info__V_5_5)), ((MR_Box) (check_hlds__typecheck_info__V_11_11)));
                }
#line 101 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 101 "typecheck_info.m"
                  {
#line 2664 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_6_6 == check_hlds__typecheck_info__V_12_12);
#line 101 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 101 "typecheck_info.m"
                      {
#line 2670 "check_hlds.typecheck_info.c"
                        {
#line 2672 "check_hlds.typecheck_info.c"
                          check_hlds__typecheck_info__succeeded = mercury__term____Unify____context_0_0(check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_13_13);
                        }
#line 101 "typecheck_info.m"
                        if (check_hlds__typecheck_info__succeeded)
#line 101 "typecheck_info.m"
                          {
#line 2679 "check_hlds.typecheck_info.c"
                            check_hlds__typecheck_info__TypeInfo_21_21 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[8];
#line 2681 "check_hlds.typecheck_info.c"
                            {
#line 2683 "check_hlds.typecheck_info.c"
                              check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_21_21, ((MR_Box) (check_hlds__typecheck_info__V_8_8)), ((MR_Box) (check_hlds__typecheck_info__V_14_14)));
                            }
#line 101 "typecheck_info.m"
                          }
#line 101 "typecheck_info.m"
                      }
#line 101 "typecheck_info.m"
                  }
#line 101 "typecheck_info.m"
              }
#line 101 "typecheck_info.m"
          }
#line 101 "typecheck_info.m"
      }
#line 101 "typecheck_info.m"
    return check_hlds__typecheck_info__succeeded;
#line 101 "typecheck_info.m"
  }
#line 101 "typecheck_info.m"
}

#line 89 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0(
#line 89 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
#line 89 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 89 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
#line 89 "typecheck_info.m"
{
#line 89 "typecheck_info.m"
  {
#line 89 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 89 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Cast_HeadVar1_4 = check_hlds__typecheck_info__HeadVar__2_2;
#line 89 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Cast_HeadVar2_5 = check_hlds__typecheck_info__HeadVar__3_3;

#line 89 "typecheck_info.m"
    {
#line 89 "typecheck_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_2[0], check_hlds__typecheck_info__HeadVar__1_1, ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar2_5)));
    }
#line 89 "typecheck_info.m"
  }
#line 89 "typecheck_info.m"
}

#line 89 "typecheck_info.m"
MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0(
#line 89 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 89 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
#line 89 "typecheck_info.m"
{
#line 89 "typecheck_info.m"
  {
#line 89 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 89 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Cast_HeadVar1_3 = check_hlds__typecheck_info__HeadVar__1_1;
#line 89 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Cast_HeadVar2_4 = check_hlds__typecheck_info__HeadVar__2_2;

#line 89 "typecheck_info.m"
    {
#line 89 "typecheck_info.m"
      check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_2[0], ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar2_4)));
    }
#line 89 "typecheck_info.m"
    return check_hlds__typecheck_info__succeeded;
#line 89 "typecheck_info.m"
  }
#line 89 "typecheck_info.m"
}

#line 91 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_0_0(
#line 91 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
#line 91 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 91 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
#line 91 "typecheck_info.m"
{
#line 91 "typecheck_info.m"
  {
#line 91 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 91 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_22 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;
#line 91 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_23 = (MR_Integer) check_hlds__typecheck_info__HeadVar__3_3;

#line 91 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_22 == check_hlds__typecheck_info__CastY_23);
#line 91 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 2789 "check_hlds.typecheck_info.c"
      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 0;
#line 91 "typecheck_info.m"
    else
#line 91 "typecheck_info.m"
    if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 91 "typecheck_info.m"
      {
#line 91 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 91 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));

#line 91 "typecheck_info.m"
        if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 91 "typecheck_info.m"
          {
#line 91 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));
#line 91 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));
#line 91 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_21_21;

#line 91 "typecheck_info.m"
            {
#line 91 "typecheck_info.m"
              parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__typecheck_info__V_21_21, check_hlds__typecheck_info__V_29_29, check_hlds__typecheck_info__V_19_19);
            }
#line 2818 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_21_21 == (MR_Integer) 0);
#line 91 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 91 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 91 "typecheck_info.m"
              *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_21_21;
#line 91 "typecheck_info.m"
            else
#line 91 "typecheck_info.m"
              {
#line 91 "typecheck_info.m"
                {
#line 91 "typecheck_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[5], check_hlds__typecheck_info__HeadVar__1_1, ((MR_Box) (check_hlds__typecheck_info__V_28_28)), ((MR_Box) (check_hlds__typecheck_info__V_20_20)));
                }
#line 91 "typecheck_info.m"
              }
#line 91 "typecheck_info.m"
          }
#line 91 "typecheck_info.m"
        else
#line 2841 "check_hlds.typecheck_info.c"
          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 91 "typecheck_info.m"
      }
#line 91 "typecheck_info.m"
    else
#line 91 "typecheck_info.m"
      {
#line 91 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 91 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));

#line 91 "typecheck_info.m"
        if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2856 "check_hlds.typecheck_info.c"
          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 91 "typecheck_info.m"
        else
#line 91 "typecheck_info.m"
          {
#line 91 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));
#line 91 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));
#line 91 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_8_8;

#line 91 "typecheck_info.m"
            {
#line 91 "typecheck_info.m"
              parse_tree__prog_data____Compare____simple_call_id_0_0(&check_hlds__typecheck_info__V_8_8, check_hlds__typecheck_info__V_31_31, check_hlds__typecheck_info__V_6_6);
            }
#line 2874 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_8_8 == (MR_Integer) 0);
#line 91 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 91 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 91 "typecheck_info.m"
              *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_8_8;
#line 91 "typecheck_info.m"
            else
#line 91 "typecheck_info.m"
              {
#line 91 "typecheck_info.m"
                {
#line 91 "typecheck_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[6], check_hlds__typecheck_info__HeadVar__1_1, ((MR_Box) (check_hlds__typecheck_info__V_30_30)), ((MR_Box) (check_hlds__typecheck_info__V_7_7)));
                }
#line 91 "typecheck_info.m"
              }
#line 91 "typecheck_info.m"
          }
#line 91 "typecheck_info.m"
      }
#line 91 "typecheck_info.m"
  }
#line 91 "typecheck_info.m"
}

#line 91 "typecheck_info.m"
MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_0_0(
#line 91 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 91 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
#line 91 "typecheck_info.m"
{
#line 91 "typecheck_info.m"
  {
#line 91 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 91 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_11 = (MR_Integer) check_hlds__typecheck_info__HeadVar__1_1;
#line 91 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_12 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;

#line 91 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_11 == check_hlds__typecheck_info__CastY_12);
#line 91 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 91 "typecheck_info.m"
      check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 91 "typecheck_info.m"
    else
#line 91 "typecheck_info.m"
    if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 91 "typecheck_info.m"
      {
#line 91 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_14_14;
#line 91 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 91 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 91 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9;
#line 91 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_10_10;

#line 91 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 91 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 91 "typecheck_info.m"
          {
#line 91 "typecheck_info.m"
            check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 91 "typecheck_info.m"
            check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 2953 "check_hlds.typecheck_info.c"
            {
#line 2955 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_9_9);
            }
#line 91 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 91 "typecheck_info.m"
              {
#line 2962 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__TypeInfo_14_14 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[5];
#line 2964 "check_hlds.typecheck_info.c"
                {
#line 2966 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_14_14, ((MR_Box) (check_hlds__typecheck_info__V_8_8)), ((MR_Box) (check_hlds__typecheck_info__V_10_10)));
                }
#line 91 "typecheck_info.m"
              }
#line 91 "typecheck_info.m"
          }
#line 91 "typecheck_info.m"
      }
#line 91 "typecheck_info.m"
    else
#line 91 "typecheck_info.m"
      {
#line 91 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_16_16;
#line 91 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 91 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 91 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5;
#line 91 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6;

#line 91 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 91 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 91 "typecheck_info.m"
          {
#line 91 "typecheck_info.m"
            check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 91 "typecheck_info.m"
            check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 3000 "check_hlds.typecheck_info.c"
            {
#line 3002 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____simple_call_id_0_0(check_hlds__typecheck_info__V_3_3, check_hlds__typecheck_info__V_5_5);
            }
#line 91 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 91 "typecheck_info.m"
              {
#line 3009 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__TypeInfo_16_16 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[6];
#line 3011 "check_hlds.typecheck_info.c"
                {
#line 3013 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_16_16, ((MR_Box) (check_hlds__typecheck_info__V_4_4)), ((MR_Box) (check_hlds__typecheck_info__V_6_6)));
                }
#line 91 "typecheck_info.m"
              }
#line 91 "typecheck_info.m"
          }
#line 91 "typecheck_info.m"
      }
#line 91 "typecheck_info.m"
    return check_hlds__typecheck_info__succeeded;
#line 91 "typecheck_info.m"
  }
#line 91 "typecheck_info.m"
}

#line 79 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_source_0_0(
#line 79 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
#line 79 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 79 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
#line 79 "typecheck_info.m"
{
#line 79 "typecheck_info.m"
  {
#line 79 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 79 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_76 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;
#line 79 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_77 = (MR_Integer) check_hlds__typecheck_info__HeadVar__3_3;

#line 79 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_76 == check_hlds__typecheck_info__CastY_77);
#line 79 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 3053 "check_hlds.typecheck_info.c"
      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 0;
#line 79 "typecheck_info.m"
    else
#line 79 "typecheck_info.m"
#line 79 "typecheck_info.m"
      switch (MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) {
#line 79 "typecheck_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 79 "typecheck_info.m"
        case (MR_Integer) 0:
#line 79 "typecheck_info.m"
          {
#line 79 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));

#line 79 "typecheck_info.m"
#line 79 "typecheck_info.m"
            switch (MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) {
#line 79 "typecheck_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 79 "typecheck_info.m"
              case (MR_Integer) 0:
#line 79 "typecheck_info.m"
                {
#line 79 "typecheck_info.m"
                  MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));

#line 79 "typecheck_info.m"
                  {
#line 79 "typecheck_info.m"
                    parse_tree__prog_data____Compare____type_ctor_0_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_89_89, check_hlds__typecheck_info__V_5_5);
                  }
#line 79 "typecheck_info.m"
                }
#line 79 "typecheck_info.m"
                break;
#line 79 "typecheck_info.m"
              case (MR_Integer) 1:
#line 3092 "check_hlds.typecheck_info.c"
                *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "typecheck_info.m"
                break;
#line 79 "typecheck_info.m"
              case (MR_Integer) 2:
#line 3098 "check_hlds.typecheck_info.c"
                *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "typecheck_info.m"
                break;
#line 79 "typecheck_info.m"
              case (MR_Integer) 3:
#line 79 "typecheck_info.m"
#line 79 "typecheck_info.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) {
#line 79 "typecheck_info.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 79 "typecheck_info.m"
                  case (MR_Integer) 0:
#line 3111 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "typecheck_info.m"
                    break;
#line 79 "typecheck_info.m"
                  case (MR_Integer) 1:
#line 3117 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "typecheck_info.m"
                    break;
#line 79 "typecheck_info.m"
                  case (MR_Integer) 2:
#line 3123 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "typecheck_info.m"
                    break;
#line 79 "typecheck_info.m"
                }
#line 79 "typecheck_info.m"
                break;
#line 79 "typecheck_info.m"
            }
#line 79 "typecheck_info.m"
          }
#line 79 "typecheck_info.m"
          break;
#line 79 "typecheck_info.m"
        case (MR_Integer) 1:
#line 79 "typecheck_info.m"
          {
#line 79 "typecheck_info.m"
            MR_String check_hlds__typecheck_info__V_85_85 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));

#line 79 "typecheck_info.m"
#line 79 "typecheck_info.m"
            switch (MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) {
#line 79 "typecheck_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 79 "typecheck_info.m"
              case (MR_Integer) 0:
#line 3151 "check_hlds.typecheck_info.c"
                *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "typecheck_info.m"
                break;
#line 79 "typecheck_info.m"
              case (MR_Integer) 1:
#line 79 "typecheck_info.m"
                {
#line 79 "typecheck_info.m"
                  MR_String check_hlds__typecheck_info__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));

#line 79 "typecheck_info.m"
                  {
#line 79 "typecheck_info.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_85_85, check_hlds__typecheck_info__V_19_19);
                  }
#line 79 "typecheck_info.m"
                }
#line 79 "typecheck_info.m"
                break;
#line 79 "typecheck_info.m"
              case (MR_Integer) 2:
#line 3173 "check_hlds.typecheck_info.c"
                *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "typecheck_info.m"
                break;
#line 79 "typecheck_info.m"
              case (MR_Integer) 3:
#line 79 "typecheck_info.m"
#line 79 "typecheck_info.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) {
#line 79 "typecheck_info.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 79 "typecheck_info.m"
                  case (MR_Integer) 0:
#line 3186 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "typecheck_info.m"
                    break;
#line 79 "typecheck_info.m"
                  case (MR_Integer) 1:
#line 3192 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "typecheck_info.m"
                    break;
#line 79 "typecheck_info.m"
                  case (MR_Integer) 2:
#line 3198 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "typecheck_info.m"
                    break;
#line 79 "typecheck_info.m"
                }
#line 79 "typecheck_info.m"
                break;
#line 79 "typecheck_info.m"
            }
#line 79 "typecheck_info.m"
          }
#line 79 "typecheck_info.m"
          break;
#line 79 "typecheck_info.m"
        case (MR_Integer) 2:
#line 79 "typecheck_info.m"
          {
#line 79 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));

#line 79 "typecheck_info.m"
#line 79 "typecheck_info.m"
            switch (MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) {
#line 79 "typecheck_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 79 "typecheck_info.m"
              case (MR_Integer) 0:
#line 3226 "check_hlds.typecheck_info.c"
                *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "typecheck_info.m"
                break;
#line 79 "typecheck_info.m"
              case (MR_Integer) 1:
#line 3232 "check_hlds.typecheck_info.c"
                *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "typecheck_info.m"
                break;
#line 79 "typecheck_info.m"
              case (MR_Integer) 2:
#line 79 "typecheck_info.m"
                {
#line 79 "typecheck_info.m"
                  MR_Word check_hlds__typecheck_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));

#line 79 "typecheck_info.m"
                  {
#line 79 "typecheck_info.m"
                    parse_tree__prog_data____Compare____type_ctor_0_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_86_86, check_hlds__typecheck_info__V_33_33);
                  }
#line 79 "typecheck_info.m"
                }
#line 79 "typecheck_info.m"
                break;
#line 79 "typecheck_info.m"
              case (MR_Integer) 3:
#line 79 "typecheck_info.m"
#line 79 "typecheck_info.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) {
#line 79 "typecheck_info.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 79 "typecheck_info.m"
                  case (MR_Integer) 0:
#line 3261 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "typecheck_info.m"
                    break;
#line 79 "typecheck_info.m"
                  case (MR_Integer) 1:
#line 3267 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "typecheck_info.m"
                    break;
#line 79 "typecheck_info.m"
                  case (MR_Integer) 2:
#line 3273 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "typecheck_info.m"
                    break;
#line 79 "typecheck_info.m"
                }
#line 79 "typecheck_info.m"
                break;
#line 79 "typecheck_info.m"
            }
#line 79 "typecheck_info.m"
          }
#line 79 "typecheck_info.m"
          break;
#line 79 "typecheck_info.m"
        case (MR_Integer) 3:
#line 79 "typecheck_info.m"
#line 79 "typecheck_info.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)))) {
#line 79 "typecheck_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 79 "typecheck_info.m"
            case (MR_Integer) 0:
#line 79 "typecheck_info.m"
              {
#line 79 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));

#line 79 "typecheck_info.m"
#line 79 "typecheck_info.m"
                switch (MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) {
#line 79 "typecheck_info.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 79 "typecheck_info.m"
                  case (MR_Integer) 0:
#line 3308 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "typecheck_info.m"
                    break;
#line 79 "typecheck_info.m"
                  case (MR_Integer) 1:
#line 3314 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "typecheck_info.m"
                    break;
#line 79 "typecheck_info.m"
                  case (MR_Integer) 2:
#line 3320 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "typecheck_info.m"
                    break;
#line 79 "typecheck_info.m"
                  case (MR_Integer) 3:
#line 79 "typecheck_info.m"
#line 79 "typecheck_info.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) {
#line 79 "typecheck_info.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 79 "typecheck_info.m"
                      case (MR_Integer) 0:
#line 79 "typecheck_info.m"
                        {
#line 79 "typecheck_info.m"
                          MR_Word check_hlds__typecheck_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));

#line 79 "typecheck_info.m"
                          {
#line 79 "typecheck_info.m"
                            parse_tree__prog_data____Compare____type_ctor_0_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_88_88, check_hlds__typecheck_info__V_47_47);
                          }
#line 79 "typecheck_info.m"
                        }
#line 79 "typecheck_info.m"
                        break;
#line 79 "typecheck_info.m"
                      case (MR_Integer) 1:
#line 3349 "check_hlds.typecheck_info.c"
                        *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "typecheck_info.m"
                        break;
#line 79 "typecheck_info.m"
                      case (MR_Integer) 2:
#line 3355 "check_hlds.typecheck_info.c"
                        *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "typecheck_info.m"
                        break;
#line 79 "typecheck_info.m"
                    }
#line 79 "typecheck_info.m"
                    break;
#line 79 "typecheck_info.m"
                }
#line 79 "typecheck_info.m"
              }
#line 79 "typecheck_info.m"
              break;
#line 79 "typecheck_info.m"
            case (MR_Integer) 1:
#line 79 "typecheck_info.m"
              {
#line 79 "typecheck_info.m"
                MR_String check_hlds__typecheck_info__V_84_84 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));

#line 79 "typecheck_info.m"
#line 79 "typecheck_info.m"
                switch (MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) {
#line 79 "typecheck_info.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 79 "typecheck_info.m"
                  case (MR_Integer) 0:
#line 3383 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "typecheck_info.m"
                    break;
#line 79 "typecheck_info.m"
                  case (MR_Integer) 1:
#line 3389 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "typecheck_info.m"
                    break;
#line 79 "typecheck_info.m"
                  case (MR_Integer) 2:
#line 3395 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "typecheck_info.m"
                    break;
#line 79 "typecheck_info.m"
                  case (MR_Integer) 3:
#line 79 "typecheck_info.m"
#line 79 "typecheck_info.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) {
#line 79 "typecheck_info.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 79 "typecheck_info.m"
                      case (MR_Integer) 0:
#line 3408 "check_hlds.typecheck_info.c"
                        *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "typecheck_info.m"
                        break;
#line 79 "typecheck_info.m"
                      case (MR_Integer) 1:
#line 79 "typecheck_info.m"
                        {
#line 79 "typecheck_info.m"
                          MR_String check_hlds__typecheck_info__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));

#line 79 "typecheck_info.m"
                          {
#line 79 "typecheck_info.m"
                            mercury__private_builtin__builtin_compare_string_3_p_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_84_84, check_hlds__typecheck_info__V_61_61);
                          }
#line 79 "typecheck_info.m"
                        }
#line 79 "typecheck_info.m"
                        break;
#line 79 "typecheck_info.m"
                      case (MR_Integer) 2:
#line 3430 "check_hlds.typecheck_info.c"
                        *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "typecheck_info.m"
                        break;
#line 79 "typecheck_info.m"
                    }
#line 79 "typecheck_info.m"
                    break;
#line 79 "typecheck_info.m"
                }
#line 79 "typecheck_info.m"
              }
#line 79 "typecheck_info.m"
              break;
#line 79 "typecheck_info.m"
            case (MR_Integer) 2:
#line 79 "typecheck_info.m"
              {
#line 79 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));

#line 79 "typecheck_info.m"
#line 79 "typecheck_info.m"
                switch (MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) {
#line 79 "typecheck_info.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 79 "typecheck_info.m"
                  case (MR_Integer) 0:
#line 3458 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "typecheck_info.m"
                    break;
#line 79 "typecheck_info.m"
                  case (MR_Integer) 1:
#line 3464 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "typecheck_info.m"
                    break;
#line 79 "typecheck_info.m"
                  case (MR_Integer) 2:
#line 3470 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "typecheck_info.m"
                    break;
#line 79 "typecheck_info.m"
                  case (MR_Integer) 3:
#line 79 "typecheck_info.m"
#line 79 "typecheck_info.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) {
#line 79 "typecheck_info.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 79 "typecheck_info.m"
                      case (MR_Integer) 0:
#line 3483 "check_hlds.typecheck_info.c"
                        *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "typecheck_info.m"
                        break;
#line 79 "typecheck_info.m"
                      case (MR_Integer) 1:
#line 3489 "check_hlds.typecheck_info.c"
                        *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "typecheck_info.m"
                        break;
#line 79 "typecheck_info.m"
                      case (MR_Integer) 2:
#line 79 "typecheck_info.m"
                        {
#line 79 "typecheck_info.m"
                          MR_Word check_hlds__typecheck_info__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));

#line 79 "typecheck_info.m"
                          {
#line 79 "typecheck_info.m"
                            hlds__hlds_pred____Compare____pred_id_0_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_87_87, check_hlds__typecheck_info__V_75_75);
                          }
#line 79 "typecheck_info.m"
                        }
#line 79 "typecheck_info.m"
                        break;
#line 79 "typecheck_info.m"
                    }
#line 79 "typecheck_info.m"
                    break;
#line 79 "typecheck_info.m"
                }
#line 79 "typecheck_info.m"
              }
#line 79 "typecheck_info.m"
              break;
#line 79 "typecheck_info.m"
          }
#line 79 "typecheck_info.m"
          break;
#line 79 "typecheck_info.m"
      }
#line 79 "typecheck_info.m"
  }
#line 79 "typecheck_info.m"
}

#line 79 "typecheck_info.m"
MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_source_0_0(
#line 79 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 79 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
#line 79 "typecheck_info.m"
{
#line 79 "typecheck_info.m"
  {
#line 79 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 79 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_15 = (MR_Integer) check_hlds__typecheck_info__HeadVar__1_1;
#line 79 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_16 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;

#line 79 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_15 == check_hlds__typecheck_info__CastY_16);
#line 79 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 79 "typecheck_info.m"
      check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 79 "typecheck_info.m"
    else
#line 79 "typecheck_info.m"
#line 79 "typecheck_info.m"
      switch (MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__1_1)) {
#line 79 "typecheck_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 79 "typecheck_info.m"
        case (MR_Integer) 0:
#line 79 "typecheck_info.m"
          {
#line 79 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 79 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_4_4;

#line 79 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 79 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 79 "typecheck_info.m"
              {
#line 79 "typecheck_info.m"
                check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 3578 "check_hlds.typecheck_info.c"
                {
#line 3580 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__typecheck_info__V_3_3, check_hlds__typecheck_info__V_4_4);
                }
#line 79 "typecheck_info.m"
              }
#line 79 "typecheck_info.m"
          }
#line 79 "typecheck_info.m"
          break;
#line 79 "typecheck_info.m"
        case (MR_Integer) 1:
#line 79 "typecheck_info.m"
          {
#line 79 "typecheck_info.m"
            MR_String check_hlds__typecheck_info__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 79 "typecheck_info.m"
            MR_String check_hlds__typecheck_info__V_6_6;

#line 79 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 79 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 79 "typecheck_info.m"
              {
#line 79 "typecheck_info.m"
                check_hlds__typecheck_info__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 3606 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__succeeded = (strcmp(check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__V_6_6) == 0);
#line 79 "typecheck_info.m"
              }
#line 79 "typecheck_info.m"
          }
#line 79 "typecheck_info.m"
          break;
#line 79 "typecheck_info.m"
        case (MR_Integer) 2:
#line 79 "typecheck_info.m"
          {
#line 79 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 79 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_8_8;

#line 79 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 79 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 79 "typecheck_info.m"
              {
#line 79 "typecheck_info.m"
                check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 3631 "check_hlds.typecheck_info.c"
                {
#line 3633 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_8_8);
                }
#line 79 "typecheck_info.m"
              }
#line 79 "typecheck_info.m"
          }
#line 79 "typecheck_info.m"
          break;
#line 79 "typecheck_info.m"
        case (MR_Integer) 3:
#line 79 "typecheck_info.m"
#line 79 "typecheck_info.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)))) {
#line 79 "typecheck_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 79 "typecheck_info.m"
            case (MR_Integer) 0:
#line 79 "typecheck_info.m"
              {
#line 79 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 79 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_10_10;

#line 79 "typecheck_info.m"
                check_hlds__typecheck_info__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 79 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 79 "typecheck_info.m"
                  {
#line 79 "typecheck_info.m"
                    check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 3666 "check_hlds.typecheck_info.c"
                    {
#line 3668 "check_hlds.typecheck_info.c"
                      check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__typecheck_info__V_9_9, check_hlds__typecheck_info__V_10_10);
                    }
#line 79 "typecheck_info.m"
                  }
#line 79 "typecheck_info.m"
              }
#line 79 "typecheck_info.m"
              break;
#line 79 "typecheck_info.m"
            case (MR_Integer) 1:
#line 79 "typecheck_info.m"
              {
#line 79 "typecheck_info.m"
                MR_String check_hlds__typecheck_info__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 79 "typecheck_info.m"
                MR_String check_hlds__typecheck_info__V_12_12;

#line 79 "typecheck_info.m"
                check_hlds__typecheck_info__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 79 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 79 "typecheck_info.m"
                  {
#line 79 "typecheck_info.m"
                    check_hlds__typecheck_info__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 3694 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__succeeded = (strcmp(check_hlds__typecheck_info__V_11_11, check_hlds__typecheck_info__V_12_12) == 0);
#line 79 "typecheck_info.m"
                  }
#line 79 "typecheck_info.m"
              }
#line 79 "typecheck_info.m"
              break;
#line 79 "typecheck_info.m"
            case (MR_Integer) 2:
#line 79 "typecheck_info.m"
              {
#line 79 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 79 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_14_14;

#line 79 "typecheck_info.m"
                check_hlds__typecheck_info__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 79 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 79 "typecheck_info.m"
                  {
#line 79 "typecheck_info.m"
                    check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 3719 "check_hlds.typecheck_info.c"
                    {
#line 3721 "check_hlds.typecheck_info.c"
                      check_hlds__typecheck_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__typecheck_info__V_13_13, check_hlds__typecheck_info__V_14_14);
                    }
#line 79 "typecheck_info.m"
                  }
#line 79 "typecheck_info.m"
              }
#line 79 "typecheck_info.m"
              break;
#line 79 "typecheck_info.m"
          }
#line 79 "typecheck_info.m"
          break;
#line 79 "typecheck_info.m"
      }
#line 79 "typecheck_info.m"
    return check_hlds__typecheck_info__succeeded;
#line 79 "typecheck_info.m"
  }
#line 79 "typecheck_info.m"
}

#line 57 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_0_0(
#line 57 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
#line 57 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 57 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
#line 57 "typecheck_info.m"
{
#line 57 "typecheck_info.m"
  {
#line 57 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 57 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_21 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;
#line 57 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_22 = (MR_Integer) check_hlds__typecheck_info__HeadVar__3_3;

#line 57 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_21 == check_hlds__typecheck_info__CastY_22);
#line 57 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 3767 "check_hlds.typecheck_info.c"
      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 0;
#line 57 "typecheck_info.m"
    else
#line 57 "typecheck_info.m"
      {
#line 57 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 57 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 57 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
#line 57 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
#line 57 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 4)));
#line 57 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 5)));
#line 57 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));
#line 57 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));
#line 57 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 2)));
#line 57 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 3)));
#line 57 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 4)));
#line 57 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 5)));
#line 57 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_16_16;

#line 57 "typecheck_info.m"
        {
#line 57 "typecheck_info.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[1], &check_hlds__typecheck_info__V_16_16, ((MR_Box) (check_hlds__typecheck_info__V_4_4)), ((MR_Box) (check_hlds__typecheck_info__V_10_10)));
        }
#line 3805 "check_hlds.typecheck_info.c"
        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_16_16 == (MR_Integer) 0);
#line 57 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 57 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 57 "typecheck_info.m"
          *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_16_16;
#line 57 "typecheck_info.m"
        else
#line 57 "typecheck_info.m"
          {
#line 57 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_17_17;

#line 57 "typecheck_info.m"
            {
#line 57 "typecheck_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[3], &check_hlds__typecheck_info__V_17_17, ((MR_Box) (check_hlds__typecheck_info__V_5_5)), ((MR_Box) (check_hlds__typecheck_info__V_11_11)));
            }
#line 3825 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_17_17 == (MR_Integer) 0);
#line 57 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 57 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 57 "typecheck_info.m"
              *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_17_17;
#line 57 "typecheck_info.m"
            else
#line 57 "typecheck_info.m"
              {
#line 57 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_18_18;

#line 57 "typecheck_info.m"
                {
#line 57 "typecheck_info.m"
                  parse_tree__prog_data____Compare____mer_type_0_0(&check_hlds__typecheck_info__V_18_18, check_hlds__typecheck_info__V_6_6, check_hlds__typecheck_info__V_12_12);
                }
#line 3845 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_18_18 == (MR_Integer) 0);
#line 57 "typecheck_info.m"
                check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 57 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 57 "typecheck_info.m"
                  *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_18_18;
#line 57 "typecheck_info.m"
                else
#line 57 "typecheck_info.m"
                  {
#line 57 "typecheck_info.m"
                    MR_Word check_hlds__typecheck_info__V_19_19;

#line 57 "typecheck_info.m"
                    {
#line 57 "typecheck_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[4], &check_hlds__typecheck_info__V_19_19, ((MR_Box) (check_hlds__typecheck_info__V_7_7)), ((MR_Box) (check_hlds__typecheck_info__V_13_13)));
                    }
#line 3865 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_19_19 == (MR_Integer) 0);
#line 57 "typecheck_info.m"
                    check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 57 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 57 "typecheck_info.m"
                      *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_19_19;
#line 57 "typecheck_info.m"
                    else
#line 57 "typecheck_info.m"
                      {
#line 57 "typecheck_info.m"
                        MR_Word check_hlds__typecheck_info__V_20_20;

#line 57 "typecheck_info.m"
                        {
#line 57 "typecheck_info.m"
                          hlds__hlds_data____Compare____hlds_constraints_0_0(&check_hlds__typecheck_info__V_20_20, check_hlds__typecheck_info__V_8_8, check_hlds__typecheck_info__V_14_14);
                        }
#line 3885 "check_hlds.typecheck_info.c"
                        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_20_20 == (MR_Integer) 0);
#line 57 "typecheck_info.m"
                        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 57 "typecheck_info.m"
                        if (check_hlds__typecheck_info__succeeded)
#line 57 "typecheck_info.m"
                          *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_20_20;
#line 57 "typecheck_info.m"
                        else
#line 57 "typecheck_info.m"
                          {
#line 57 "typecheck_info.m"
                            check_hlds__typecheck_info____Compare____cons_type_info_source_0_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_9_9, check_hlds__typecheck_info__V_15_15);
                          }
#line 57 "typecheck_info.m"
                      }
#line 57 "typecheck_info.m"
                  }
#line 57 "typecheck_info.m"
              }
#line 57 "typecheck_info.m"
          }
#line 57 "typecheck_info.m"
      }
#line 57 "typecheck_info.m"
  }
#line 57 "typecheck_info.m"
}

#line 57 "typecheck_info.m"
MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_0_0(
#line 57 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 57 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
#line 57 "typecheck_info.m"
{
#line 57 "typecheck_info.m"
  {
#line 57 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 57 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_15 = (MR_Integer) check_hlds__typecheck_info__HeadVar__1_1;
#line 57 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_16 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;

#line 57 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_15 == check_hlds__typecheck_info__CastY_16);
#line 57 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 57 "typecheck_info.m"
      check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 57 "typecheck_info.m"
    else
#line 57 "typecheck_info.m"
      {
#line 57 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_18_18;
#line 57 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_20_20;
#line 57 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 57 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 57 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 2)));
#line 57 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 3)));
#line 57 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 4)));
#line 57 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 5)));
#line 57 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 57 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 57 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
#line 57 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
#line 57 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 4)));
#line 57 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 5)));

#line 3972 "check_hlds.typecheck_info.c"
        {
#line 3974 "check_hlds.typecheck_info.c"
          check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[1], ((MR_Box) (check_hlds__typecheck_info__V_3_3)), ((MR_Box) (check_hlds__typecheck_info__V_9_9)));
        }
#line 57 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 57 "typecheck_info.m"
          {
#line 3981 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__TypeInfo_18_18 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[3];
#line 3983 "check_hlds.typecheck_info.c"
            {
#line 3985 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_18_18, ((MR_Box) (check_hlds__typecheck_info__V_4_4)), ((MR_Box) (check_hlds__typecheck_info__V_10_10)));
            }
#line 57 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 57 "typecheck_info.m"
              {
#line 3992 "check_hlds.typecheck_info.c"
                {
#line 3994 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__V_11_11);
                }
#line 57 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 57 "typecheck_info.m"
                  {
#line 4001 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__TypeInfo_20_20 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[4];
#line 4003 "check_hlds.typecheck_info.c"
                    {
#line 4005 "check_hlds.typecheck_info.c"
                      check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_20_20, ((MR_Box) (check_hlds__typecheck_info__V_6_6)), ((MR_Box) (check_hlds__typecheck_info__V_12_12)));
                    }
#line 57 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 57 "typecheck_info.m"
                      {
#line 4012 "check_hlds.typecheck_info.c"
                        {
#line 4014 "check_hlds.typecheck_info.c"
                          check_hlds__typecheck_info__succeeded = hlds__hlds_data____Unify____hlds_constraints_0_0(check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_13_13);
                        }
#line 57 "typecheck_info.m"
                        if (check_hlds__typecheck_info__succeeded)
#line 4019 "check_hlds.typecheck_info.c"
                          {
#line 4021 "check_hlds.typecheck_info.c"
                            check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____cons_type_info_source_0_0(check_hlds__typecheck_info__V_8_8, check_hlds__typecheck_info__V_14_14);
                          }
#line 57 "typecheck_info.m"
                      }
#line 57 "typecheck_info.m"
                  }
#line 57 "typecheck_info.m"
              }
#line 57 "typecheck_info.m"
          }
#line 57 "typecheck_info.m"
      }
#line 57 "typecheck_info.m"
    return check_hlds__typecheck_info__succeeded;
#line 57 "typecheck_info.m"
  }
#line 57 "typecheck_info.m"
}

#line 184 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_all_errors_2_p_0(
#line 184 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 184 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__Errors_4)
#line 184 "typecheck_info.m"
{
#line 392 "typecheck_info.m"
  {
#line 392 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 392 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Errors0_5;
#line 392 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__MaybeOverloadError_6;
#line 392 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 306 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 306 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 306 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 306 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 0)));
#line 306 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 1)));
#line 306 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_17_17;

#line 306 "typecheck_info.m"
    check_hlds__typecheck_info__Errors0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 2)));
#line 306 "typecheck_info.m"
    check_hlds__typecheck_info__MaybeOverloadError_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 3)));
#line 306 "typecheck_info.m"
    check_hlds__typecheck_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 4)));
#line 398 "typecheck_info.m"
    if ((check_hlds__typecheck_info__MaybeOverloadError_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 397 "typecheck_info.m"
      *check_hlds__typecheck_info__Errors_4 = check_hlds__typecheck_info__Errors0_5;
#line 398 "typecheck_info.m"
    else
#line 399 "typecheck_info.m"
      {
#line 399 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__OverloadError_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__MaybeOverloadError_6, (MR_Integer) 0)));

#line 400 "typecheck_info.m"
        {
#line 400 "typecheck_info.m"
          MR_Word base;
#line 400 "typecheck_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 400 "typecheck_info.m"
          *check_hlds__typecheck_info__Errors_4 = base;
#line 400 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck_info__OverloadError_7));
#line 400 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck_info__Errors0_5));
#line 400 "typecheck_info.m"
        }
#line 399 "typecheck_info.m"
      }
#line 392 "typecheck_info.m"
  }
#line 184 "typecheck_info.m"
}

#line 181 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(
#line 181 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Error_4,
#line 181 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8,
#line 181 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_Info_9)
#line 181 "typecheck_info.m"
{
#line 387 "typecheck_info.m"
  {
#line 387 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 387 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Errors0_6;
#line 387 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Errors_7;
#line 387 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 387 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 387 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 387 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 387 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, (MR_Integer) 0)));
#line 387 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, (MR_Integer) 1)));
#line 387 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_19_19;
#line 387 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_20_20;
#line 387 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_27_27;

#line 306 "typecheck_info.m"
    check_hlds__typecheck_info__Errors0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, (MR_Integer) 2)));
#line 306 "typecheck_info.m"
    check_hlds__typecheck_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, (MR_Integer) 3)));
#line 306 "typecheck_info.m"
    check_hlds__typecheck_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, (MR_Integer) 4)));
#line 389 "typecheck_info.m"
    {
#line 389 "typecheck_info.m"
      check_hlds__typecheck_info__Errors_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "typecheck_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__Errors_7, 0) = ((MR_Box) (check_hlds__typecheck_info__Error_4));
#line 389 "typecheck_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__Errors_7, 1) = ((MR_Box) (check_hlds__typecheck_info__Errors0_6));
#line 389 "typecheck_info.m"
    }
#line 316 "typecheck_info.m"
    {
#line 316 "typecheck_info.m"
      check_hlds__typecheck_info__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 316 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_27_27, 0) = ((MR_Box) (check_hlds__typecheck_info__V_17_17));
#line 316 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_27_27, 1) = ((MR_Box) (check_hlds__typecheck_info__V_18_18));
#line 316 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_27_27, 2) = ((MR_Box) (check_hlds__typecheck_info__Errors_7));
#line 316 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_27_27, 3) = ((MR_Box) (check_hlds__typecheck_info__V_19_19));
#line 316 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_27_27, 4) = ((MR_Box) (check_hlds__typecheck_info__V_20_20));
#line 316 "typecheck_info.m"
    }
#line 316 "typecheck_info.m"
    {
#line 316 "typecheck_info.m"
      MR_Word base;
#line 316 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 316 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_Info_9 = base;
#line 316 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_27_27));
#line 316 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
#line 316 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
#line 316 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_16_16));
#line 316 "typecheck_info.m"
    }
#line 387 "typecheck_info.m"
  }
#line 181 "typecheck_info.m"
}

#line 178 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_p_0(
#line 178 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Symbol_5,
#line 178 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Context_6,
#line 178 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12,
#line 178 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_Info_13)
#line 178 "typecheck_info.m"
{
#line 374 "typecheck_info.m"
  {
#line 374 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 374 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__OverloadedSymbolMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
#line 374 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__OverloadedSymbolMap_11;
#line 292 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
#line 292 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 1)));
#line 292 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
#line 376 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__OldContexts_9;
#line 376 "typecheck_info.m"
    MR_Box check_hlds__typecheck_info__conv0_OldContexts_9;
#line 313 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_33_33;
#line 313 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_34_34;
#line 313 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_36_36;
#line 313 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_35_35;

#line 376 "typecheck_info.m"
    {
#line 376 "typecheck_info.m"
      check_hlds__typecheck_info__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0, (MR_Word) &check_hlds__typecheck_info_scalar_common_1[0], check_hlds__typecheck_info__OverloadedSymbolMap0_8, ((MR_Box) (check_hlds__typecheck_info__Symbol_5)), &check_hlds__typecheck_info__conv0_OldContexts_9);
    }
#line 376 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 376 "typecheck_info.m"
      {
#line 376 "typecheck_info.m"
        check_hlds__typecheck_info__OldContexts_9 = ((MR_Word) check_hlds__typecheck_info__conv0_OldContexts_9);
#line 376 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 376 "typecheck_info.m"
      }
#line 376 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 377 "typecheck_info.m"
      {
#line 377 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__Contexts_10;

#line 377 "typecheck_info.m"
        {
#line 377 "typecheck_info.m"
          check_hlds__typecheck_info__Contexts_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 377 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__Contexts_10, 0) = ((MR_Box) (check_hlds__typecheck_info__Context_6));
#line 377 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__Contexts_10, 1) = ((MR_Box) (check_hlds__typecheck_info__OldContexts_9));
#line 377 "typecheck_info.m"
        }
#line 378 "typecheck_info.m"
        {
#line 378 "typecheck_info.m"
          mercury__map__det_update_4_p_0((MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0, (MR_Word) &check_hlds__typecheck_info_scalar_common_1[0], ((MR_Box) (check_hlds__typecheck_info__Symbol_5)), ((MR_Box) (check_hlds__typecheck_info__Contexts_10)), check_hlds__typecheck_info__OverloadedSymbolMap0_8, &check_hlds__typecheck_info__OverloadedSymbolMap_11);
        }
#line 377 "typecheck_info.m"
      }
#line 376 "typecheck_info.m"
    else
#line 381 "typecheck_info.m"
      {
#line 381 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__Contexts_16;

#line 381 "typecheck_info.m"
        {
#line 381 "typecheck_info.m"
          check_hlds__typecheck_info__Contexts_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__Contexts_16, 0) = ((MR_Box) (check_hlds__typecheck_info__Context_6));
#line 381 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__Contexts_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 381 "typecheck_info.m"
        }
#line 382 "typecheck_info.m"
        {
#line 382 "typecheck_info.m"
          mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0, (MR_Word) &check_hlds__typecheck_info_scalar_common_1[0], ((MR_Box) (check_hlds__typecheck_info__Symbol_5)), ((MR_Box) (check_hlds__typecheck_info__Contexts_16)), check_hlds__typecheck_info__OverloadedSymbolMap0_8, &check_hlds__typecheck_info__OverloadedSymbolMap_11);
        }
#line 381 "typecheck_info.m"
      }
#line 313 "typecheck_info.m"
    check_hlds__typecheck_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
#line 313 "typecheck_info.m"
    check_hlds__typecheck_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 1)));
#line 313 "typecheck_info.m"
    check_hlds__typecheck_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
#line 313 "typecheck_info.m"
    check_hlds__typecheck_info__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
#line 313 "typecheck_info.m"
    {
#line 313 "typecheck_info.m"
      MR_Word base;
#line 313 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 313 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_Info_13 = base;
#line 313 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_33_33));
#line 313 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_34_34));
#line 313 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__OverloadedSymbolMap_11));
#line 313 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_36_36));
#line 313 "typecheck_info.m"
    }
#line 374 "typecheck_info.m"
  }
#line 178 "typecheck_info.m"
}

#line 176 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_ctors_2_p_0(
#line 176 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 176 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__Ctors_4)
#line 176 "typecheck_info.m"
{
#line 370 "typecheck_info.m"
  {
#line 370 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 370 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__ModuleInfo_5;
#line 370 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 297 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 297 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 297 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 297 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12;
#line 297 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13;
#line 297 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_14_14;
#line 297 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15;
#line 297 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16;

#line 297 "typecheck_info.m"
    check_hlds__typecheck_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 0)));
#line 297 "typecheck_info.m"
    check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 1)));
#line 297 "typecheck_info.m"
    check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 2)));
#line 297 "typecheck_info.m"
    check_hlds__typecheck_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 3)));
#line 297 "typecheck_info.m"
    check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 4)));
#line 297 "typecheck_info.m"
    check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 5)));
#line 372 "typecheck_info.m"
    {
#line 372 "typecheck_info.m"
      hlds__hlds_module__module_info_get_cons_table_2_p_0(check_hlds__typecheck_info__ModuleInfo_5, check_hlds__typecheck_info__Ctors_4);
    }
#line 370 "typecheck_info.m"
  }
#line 176 "typecheck_info.m"
}

#line 175 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_types_2_p_0(
#line 175 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 175 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__Types_4)
#line 175 "typecheck_info.m"
{
#line 367 "typecheck_info.m"
  {
#line 367 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 367 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__ModuleInfo_5;
#line 367 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 297 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 297 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 297 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 297 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12;
#line 297 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13;
#line 297 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_14_14;
#line 297 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15;
#line 297 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16;

#line 297 "typecheck_info.m"
    check_hlds__typecheck_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 0)));
#line 297 "typecheck_info.m"
    check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 1)));
#line 297 "typecheck_info.m"
    check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 2)));
#line 297 "typecheck_info.m"
    check_hlds__typecheck_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 3)));
#line 297 "typecheck_info.m"
    check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 4)));
#line 297 "typecheck_info.m"
    check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 5)));
#line 369 "typecheck_info.m"
    {
#line 369 "typecheck_info.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__typecheck_info__ModuleInfo_5, check_hlds__typecheck_info__Types_4);
    }
#line 367 "typecheck_info.m"
  }
#line 175 "typecheck_info.m"
}

#line 173 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_preds_2_p_0(
#line 173 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 173 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__Preds_4)
#line 173 "typecheck_info.m"
{
#line 364 "typecheck_info.m"
  {
#line 364 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 364 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__ModuleInfo_5;
#line 364 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 297 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 297 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 297 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 297 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12;
#line 297 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13;
#line 297 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_14_14;
#line 297 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15;
#line 297 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16;

#line 297 "typecheck_info.m"
    check_hlds__typecheck_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 0)));
#line 297 "typecheck_info.m"
    check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 1)));
#line 297 "typecheck_info.m"
    check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 2)));
#line 297 "typecheck_info.m"
    check_hlds__typecheck_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 3)));
#line 297 "typecheck_info.m"
    check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 4)));
#line 297 "typecheck_info.m"
    check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 5)));
#line 366 "typecheck_info.m"
    {
#line 366 "typecheck_info.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__typecheck_info__ModuleInfo_5, check_hlds__typecheck_info__Preds_4);
    }
#line 364 "typecheck_info.m"
  }
#line 173 "typecheck_info.m"
}

#line 171 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_module_name_2_p_0(
#line 171 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 171 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__Name_4)
#line 171 "typecheck_info.m"
{
#line 361 "typecheck_info.m"
  {
#line 361 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 361 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__ModuleInfo_5;
#line 361 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 297 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 297 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 297 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 297 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12;
#line 297 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13;
#line 297 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_14_14;
#line 297 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15;
#line 297 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16;

#line 297 "typecheck_info.m"
    check_hlds__typecheck_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 0)));
#line 297 "typecheck_info.m"
    check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 1)));
#line 297 "typecheck_info.m"
    check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 2)));
#line 297 "typecheck_info.m"
    check_hlds__typecheck_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 3)));
#line 297 "typecheck_info.m"
    check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 4)));
#line 297 "typecheck_info.m"
    check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 5)));
#line 363 "typecheck_info.m"
    {
#line 363 "typecheck_info.m"
      hlds__hlds_module__module_info_get_name_2_p_0(check_hlds__typecheck_info__ModuleInfo_5, check_hlds__typecheck_info__Name_4);
    }
#line 361 "typecheck_info.m"
  }
#line 171 "typecheck_info.m"
}

#line 163 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_set_non_overload_errors_3_p_0(
#line 163 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__X_4,
#line 163 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6,
#line 163 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_Info_7)
#line 163 "typecheck_info.m"
{
#line 315 "typecheck_info.m"
  {
#line 315 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 315 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 315 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10;
#line 315 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 315 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 315 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 316 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 0)));
#line 316 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 1)));
#line 316 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 3)));
#line 316 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 4)));
#line 316 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 2)));

#line 316 "typecheck_info.m"
    {
#line 316 "typecheck_info.m"
      check_hlds__typecheck_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 316 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, 0) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
#line 316 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, 1) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
#line 316 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, 2) = ((MR_Box) (check_hlds__typecheck_info__X_4));
#line 316 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, 3) = ((MR_Box) (check_hlds__typecheck_info__V_17_17));
#line 316 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, 4) = ((MR_Box) (check_hlds__typecheck_info__V_18_18));
#line 316 "typecheck_info.m"
    }
#line 316 "typecheck_info.m"
    {
#line 316 "typecheck_info.m"
      MR_Word base;
#line 316 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 316 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_Info_7 = base;
#line 316 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_10_10));
#line 316 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_11_11));
#line 316 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_12_12));
#line 316 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 316 "typecheck_info.m"
    }
#line 315 "typecheck_info.m"
  }
#line 163 "typecheck_info.m"
}

#line 161 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_set_overloaded_symbol_map_3_p_0(
#line 161 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__X_4,
#line 161 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6,
#line 161 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_Info_7)
#line 161 "typecheck_info.m"
{
#line 313 "typecheck_info.m"
  {
#line 313 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 313 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 313 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 313 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 313 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));

#line 313 "typecheck_info.m"
    {
#line 313 "typecheck_info.m"
      MR_Word base;
#line 313 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 313 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_Info_7 = base;
#line 313 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_9_9));
#line 313 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_10_10));
#line 313 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__X_4));
#line 313 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_12_12));
#line 313 "typecheck_info.m"
    }
#line 313 "typecheck_info.m"
  }
#line 161 "typecheck_info.m"
}

#line 159 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_set_overload_error_3_p_0(
#line 159 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__X_4,
#line 159 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6,
#line 159 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_Info_7)
#line 159 "typecheck_info.m"
{
#line 317 "typecheck_info.m"
  {
#line 317 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 317 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 317 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10;
#line 317 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 317 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 317 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 318 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 0)));
#line 318 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 1)));
#line 318 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 2)));
#line 318 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 4)));
#line 318 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 3)));

#line 318 "typecheck_info.m"
    {
#line 318 "typecheck_info.m"
      check_hlds__typecheck_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 318 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, 0) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
#line 318 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, 1) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
#line 318 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, 2) = ((MR_Box) (check_hlds__typecheck_info__V_16_16));
#line 318 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, 3) = ((MR_Box) (check_hlds__typecheck_info__X_4));
#line 318 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, 4) = ((MR_Box) (check_hlds__typecheck_info__V_18_18));
#line 318 "typecheck_info.m"
    }
#line 318 "typecheck_info.m"
    {
#line 318 "typecheck_info.m"
      MR_Word base;
#line 318 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 318 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_Info_7 = base;
#line 318 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_10_10));
#line 318 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_11_11));
#line 318 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_12_12));
#line 318 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 318 "typecheck_info.m"
    }
#line 317 "typecheck_info.m"
  }
#line 159 "typecheck_info.m"
}

#line 156 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_ambiguity_warn_limit_2_p_0(
#line 156 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 156 "typecheck_info.m"
  MR_Integer * check_hlds__typecheck_info__X_4)
#line 156 "typecheck_info.m"
{
#line 294 "typecheck_info.m"
  {
#line 294 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 294 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 294 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 294 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));

#line 294 "typecheck_info.m"
    *check_hlds__typecheck_info__X_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 294 "typecheck_info.m"
  }
#line 156 "typecheck_info.m"
}

#line 154 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_overloaded_symbol_map_2_p_0(
#line 154 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 154 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__X_4)
#line 154 "typecheck_info.m"
{
#line 292 "typecheck_info.m"
  {
#line 292 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 292 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 292 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 292 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_7_7;

#line 292 "typecheck_info.m"
    *check_hlds__typecheck_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 292 "typecheck_info.m"
    check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 292 "typecheck_info.m"
  }
#line 154 "typecheck_info.m"
}

#line 152 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_overload_error_2_p_0(
#line 152 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 152 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__X_4)
#line 152 "typecheck_info.m"
{
#line 307 "typecheck_info.m"
  {
#line 307 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 307 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 308 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 308 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 308 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 308 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 0)));
#line 308 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 1)));
#line 308 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 2)));
#line 308 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_12_12;

#line 308 "typecheck_info.m"
    *check_hlds__typecheck_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 3)));
#line 308 "typecheck_info.m"
    check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 4)));
#line 307 "typecheck_info.m"
  }
#line 152 "typecheck_info.m"
}

#line 150 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_non_overload_errors_2_p_0(
#line 150 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 150 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__X_4)
#line 150 "typecheck_info.m"
{
#line 305 "typecheck_info.m"
  {
#line 305 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 305 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 306 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 306 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 306 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 306 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 0)));
#line 306 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 1)));
#line 306 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11;
#line 306 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_12_12;

#line 306 "typecheck_info.m"
    *check_hlds__typecheck_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 2)));
#line 306 "typecheck_info.m"
    check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 3)));
#line 306 "typecheck_info.m"
    check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 4)));
#line 305 "typecheck_info.m"
  }
#line 150 "typecheck_info.m"
}

#line 148 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_is_field_access_function_2_p_0(
#line 148 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 148 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__X_4)
#line 148 "typecheck_info.m"
{
#line 303 "typecheck_info.m"
  {
#line 303 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 303 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 304 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 304 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 304 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 304 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 0)));
#line 304 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10;
#line 304 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11;
#line 304 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_12_12;

#line 304 "typecheck_info.m"
    *check_hlds__typecheck_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 1)));
#line 304 "typecheck_info.m"
    check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 2)));
#line 304 "typecheck_info.m"
    check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 3)));
#line 304 "typecheck_info.m"
    check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 4)));
#line 303 "typecheck_info.m"
  }
#line 148 "typecheck_info.m"
}

#line 146 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_calls_are_fully_qualified_2_p_0(
#line 146 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 146 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__X_4)
#line 146 "typecheck_info.m"
{
#line 301 "typecheck_info.m"
  {
#line 301 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 301 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 302 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 302 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 302 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 302 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9;
#line 302 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10;
#line 302 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11;
#line 302 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_12_12;

#line 302 "typecheck_info.m"
    *check_hlds__typecheck_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 0)));
#line 302 "typecheck_info.m"
    check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 1)));
#line 302 "typecheck_info.m"
    check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 2)));
#line 302 "typecheck_info.m"
    check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 3)));
#line 302 "typecheck_info.m"
    check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 4)));
#line 301 "typecheck_info.m"
  }
#line 146 "typecheck_info.m"
}

#line 144 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_pred_id_2_p_0(
#line 144 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 144 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__X_4)
#line 144 "typecheck_info.m"
{
#line 298 "typecheck_info.m"
  {
#line 298 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 298 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 299 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 299 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 299 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 299 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 0)));
#line 299 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10;
#line 299 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_11_11;
#line 299 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12;
#line 299 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13;

#line 299 "typecheck_info.m"
    *check_hlds__typecheck_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 1)));
#line 299 "typecheck_info.m"
    check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 2)));
#line 299 "typecheck_info.m"
    check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 3)));
#line 299 "typecheck_info.m"
    check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 4)));
#line 299 "typecheck_info.m"
    check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 5)));
#line 298 "typecheck_info.m"
  }
#line 144 "typecheck_info.m"
}

#line 141 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_ambiguity_error_limit_2_p_0(
#line 141 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 141 "typecheck_info.m"
  MR_Integer * check_hlds__typecheck_info__X_4)
#line 141 "typecheck_info.m"
{
#line 309 "typecheck_info.m"
  {
#line 309 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 309 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 310 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 310 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 310 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 310 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 0)));
#line 310 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 1)));
#line 310 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 2)));
#line 310 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 3)));

#line 310 "typecheck_info.m"
    *check_hlds__typecheck_info__X_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 4)));
#line 309 "typecheck_info.m"
  }
#line 141 "typecheck_info.m"
}

#line 139 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(
#line 139 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 139 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__X_4)
#line 139 "typecheck_info.m"
{
#line 290 "typecheck_info.m"
  {
#line 290 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 290 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 290 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6;
#line 290 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_7_7;

#line 290 "typecheck_info.m"
    *check_hlds__typecheck_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 290 "typecheck_info.m"
    check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 290 "typecheck_info.m"
    check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 290 "typecheck_info.m"
  }
#line 139 "typecheck_info.m"
}

#line 137 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(
#line 137 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 137 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__X_4)
#line 137 "typecheck_info.m"
{
#line 296 "typecheck_info.m"
  {
#line 296 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 296 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 297 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 297 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 297 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 297 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9;
#line 297 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10;
#line 297 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_11_11;
#line 297 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12;
#line 297 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13;

#line 297 "typecheck_info.m"
    *check_hlds__typecheck_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 0)));
#line 297 "typecheck_info.m"
    check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 1)));
#line 297 "typecheck_info.m"
    check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 2)));
#line 297 "typecheck_info.m"
    check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 3)));
#line 297 "typecheck_info.m"
    check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 4)));
#line 297 "typecheck_info.m"
    check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 5)));
#line 296 "typecheck_info.m"
  }
#line 137 "typecheck_info.m"
}

#line 87 "typecheck_info.m"
MR_Word MR_CALL 
check_hlds__typecheck_info__project_cons_type_info_source_1_f_0(
#line 87 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__CTI_3)
#line 87 "typecheck_info.m"
{
#line 200 "typecheck_info.m"
  {
#line 200 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 200 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__CTI_3, (MR_Integer) 5)));
#line 200 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__CTI_3, (MR_Integer) 0)));
#line 200 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__CTI_3, (MR_Integer) 1)));
#line 200 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__CTI_3, (MR_Integer) 2)));
#line 200 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__CTI_3, (MR_Integer) 3)));
#line 200 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__CTI_3, (MR_Integer) 4)));

#line 200 "typecheck_info.m"
    return check_hlds__typecheck_info__HeadVar__2_2;
#line 200 "typecheck_info.m"
  }
#line 87 "typecheck_info.m"
}

#line 44 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_init_8_p_0(
#line 44 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__ModuleInfo_9,
#line 44 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__PredId_10,
#line 44 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__IsFieldAccessFunction_11,
#line 44 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__ClauseVarSet_12,
#line 44 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Status_13,
#line 44 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__PredMarkers_14,
#line 44 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__NonOverloadErrors_15,
#line 44 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__Info_16)
#line 44 "typecheck_info.m"
{
#line 262 "typecheck_info.m"
  {
#line 262 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 262 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__CallsAreFullyQualified_17;
#line 262 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__MaybeFieldAccessFunction_18;
#line 262 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Globals_20;
#line 262 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__WarnLimit_21;
#line 262 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__ErrorLimit_22;
#line 262 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__SubInfo_23;
#line 262 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__ClauseContext_25;
#line 262 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__OverloadedSymbolMap_26;
#line 262 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_29_29;

#line 263 "typecheck_info.m"
    {
#line 263 "typecheck_info.m"
      check_hlds__typecheck_info__CallsAreFullyQualified_17 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(check_hlds__typecheck_info__PredMarkers_14);
    }
#line 267 "typecheck_info.m"
#line 267 "typecheck_info.m"
    switch (check_hlds__typecheck_info__IsFieldAccessFunction_11) {
#line 267 "typecheck_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 267 "typecheck_info.m"
      case (MR_Integer) 0:
#line 266 "typecheck_info.m"
        check_hlds__typecheck_info__MaybeFieldAccessFunction_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 267 "typecheck_info.m"
        break;
#line 267 "typecheck_info.m"
      case (MR_Integer) 1:
#line 269 "typecheck_info.m"
        {
#line 269 "typecheck_info.m"
          check_hlds__typecheck_info__MaybeFieldAccessFunction_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 269 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__MaybeFieldAccessFunction_18, 0) = ((MR_Box) (check_hlds__typecheck_info__Status_13));
#line 269 "typecheck_info.m"
        }
#line 267 "typecheck_info.m"
        break;
#line 267 "typecheck_info.m"
    }
#line 272 "typecheck_info.m"
    {
#line 272 "typecheck_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck_info__ModuleInfo_9, &check_hlds__typecheck_info__Globals_20);
    }
#line 273 "typecheck_info.m"
    {
#line 273 "typecheck_info.m"
      libs__globals__lookup_int_option_3_p_0(check_hlds__typecheck_info__Globals_20, (MR_Integer) 648, &check_hlds__typecheck_info__WarnLimit_21);
    }
#line 275 "typecheck_info.m"
    {
#line 275 "typecheck_info.m"
      libs__globals__lookup_int_option_3_p_0(check_hlds__typecheck_info__Globals_20, (MR_Integer) 649, &check_hlds__typecheck_info__ErrorLimit_22);
    }
#line 277 "typecheck_info.m"
    {
#line 277 "typecheck_info.m"
      check_hlds__typecheck_info__SubInfo_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 277 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_23, 0) = ((MR_Box) (check_hlds__typecheck_info__CallsAreFullyQualified_17));
#line 277 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_23, 1) = ((MR_Box) (check_hlds__typecheck_info__MaybeFieldAccessFunction_18));
#line 277 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_23, 2) = ((MR_Box) (check_hlds__typecheck_info__NonOverloadErrors_15));
#line 277 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_23, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 277 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_23, 4) = ((MR_Box) (check_hlds__typecheck_info__ErrorLimit_22));
#line 277 "typecheck_info.m"
    }
#line 282 "typecheck_info.m"
    {
#line 282 "typecheck_info.m"
      check_hlds__typecheck_info__V_29_29 = mercury__term__context_init_0_f_0();
    }
#line 281 "typecheck_info.m"
    {
#line 281 "typecheck_info.m"
      check_hlds__typecheck_info__ClauseContext_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 281 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ClauseContext_25, 0) = ((MR_Box) (check_hlds__typecheck_info__ModuleInfo_9));
#line 281 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ClauseContext_25, 1) = ((MR_Box) (check_hlds__typecheck_info__PredId_10));
#line 281 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ClauseContext_25, 2) = ((MR_Box) (check_hlds__typecheck_info__PredMarkers_14));
#line 281 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ClauseContext_25, 3) = ((MR_Box) ((MR_Integer) 0));
#line 281 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ClauseContext_25, 4) = ((MR_Box) (check_hlds__typecheck_info__V_29_29));
#line 281 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ClauseContext_25, 5) = ((MR_Box) (check_hlds__typecheck_info__ClauseVarSet_12));
#line 281 "typecheck_info.m"
    }
#line 283 "typecheck_info.m"
    {
#line 283 "typecheck_info.m"
      mercury__map__init_1_p_0((MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0, (MR_Word) &check_hlds__typecheck_info_scalar_common_1[0], &check_hlds__typecheck_info__OverloadedSymbolMap_26);
    }
#line 284 "typecheck_info.m"
    {
#line 284 "typecheck_info.m"
      MR_Word base;
#line 284 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 284 "typecheck_info.m"
      *check_hlds__typecheck_info__Info_16 = base;
#line 284 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__SubInfo_23));
#line 284 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__ClauseContext_25));
#line 284 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__OverloadedSymbolMap_26));
#line 284 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__WarnLimit_21));
#line 284 "typecheck_info.m"
    }
#line 262 "typecheck_info.m"
  }
#line 44 "typecheck_info.m"
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
