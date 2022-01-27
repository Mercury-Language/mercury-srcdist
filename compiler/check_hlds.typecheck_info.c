/*
** Automatically generated from `typecheck_info.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 136 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 139 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 142 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 145 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 148 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_0_0[6];

#line 151 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_cons_type_info_0_0[6];

#line 154 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_0_0;

#line 157 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_0_0[1];

#line 160 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_0[1];

#line 163 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_cons_type_info_0[1];

#line 166 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_cons_type_info_0[1];

#line 169 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_0[1];

#line 172 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_0;

#line 175 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_1[1];

#line 178 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_1;

#line 181 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_2[1];

#line 184 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_2;

#line 187 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_3[1];

#line 190 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_3;

#line 193 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_4[1];

#line 196 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_4;

#line 199 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_5[1];

#line 202 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_5;

#line 205 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_0[1];

#line 208 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_1[1];

#line 211 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_2[1];

#line 214 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_3[3];

#line 217 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_source_0[4];

#line 220 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_cons_type_info_source_0[6];

#line 223 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_cons_type_info_source_0[6];

#line 226 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 229 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_0[2];

#line 232 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_0;

#line 235 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0;

#line 238 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_1[2];

#line 241 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_1;

#line 244 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_0[1];

#line 247 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_1[1];

#line 250 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_overloaded_symbol_0[2];

#line 253 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_overloaded_symbol_0[2];

#line 256 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_overloaded_symbol_0[2];

#line 259 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1term__type_ctor_info_context_0;

#line 262 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0list__ti_list_1term__type_ctor_info_context_0;

#line 265 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_marker_0;

#line 268 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 271 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_type_error_clause_context_0_0[6];

#line 274 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_type_error_clause_context_0_0[6];

#line 277 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_type_error_clause_context_0_0;

#line 280 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_type_error_clause_context_0_0[1];

#line 283 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_type_error_clause_context_0[1];

#line 286 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_type_error_clause_context_0[1];

#line 289 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_type_error_clause_context_0[1];

#line 292 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_info_0_0[4];

#line 295 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_info_0_0[4];

#line 298 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_info_0_0;

#line 301 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_info_0_0[1];

#line 304 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_info_0[1];

#line 307 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_info_0[1];

#line 310 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_info_0[1];

#line 313 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__maybe__ti_maybe_1parse_tree__status__type_ctor_info_import_status_0;

#line 316 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 319 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 322 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_sub_info_0_0[5];

#line 325 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_sub_info_0_0[5];

#line 328 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_sub_info_0_0;

#line 331 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_sub_info_0_0[1];

#line 334 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_sub_info_0[1];

#line 337 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_sub_info_0[1];

#line 340 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_sub_info_0[1];

#line 343 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_0_0_10001(
#line 346 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 348 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 351 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_0_0_10001(
#line 354 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 356 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 358 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 361 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_source_0_0_10001(
#line 364 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 366 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 369 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_source_0_0_10001(
#line 372 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 374 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 376 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 379 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_0_0_10001(
#line 382 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 384 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 387 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_0_0_10001(
#line 390 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 392 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 394 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 397 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0_10001(
#line 400 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 402 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 405 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0_10001(
#line 408 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 410 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 412 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 415 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____type_error_clause_context_0_0_10001(
#line 418 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 420 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 423 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____type_error_clause_context_0_0_10001(
#line 426 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 428 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 430 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 433 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_info_0_0_10001(
#line 436 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 438 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 441 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_info_0_0_10001(
#line 444 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 446 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 448 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 451 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0_10001(
#line 454 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 456 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 459 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0_10001(
#line 462 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 464 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 466 "check_hlds.typecheck_info.c"
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
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_marker_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__status__parse_tree__status__type_ctor_info_import_status_0))
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 578 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 586 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 594 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 602 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 610 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_0_0[6] = {
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraints_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0
};

#line 620 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_cons_type_info_0_0[6] = {
  (MR_String) "cti_varset",
  (MR_String) "cti_exit_tvars",
  (MR_String) "cti_result_type",
  (MR_String) "cti_arg_types",
  (MR_String) "cti_constraints",
  (MR_String) "cti_source"
};

#line 630 "check_hlds.typecheck_info.c"
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

#line 645 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_0_0
};

#line 650 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_0_0
  }
};

#line 659 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_cons_type_info_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_0_0
};

#line 664 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_cons_type_info_0[1] = {
  (MR_Integer) 0
};

#line 669 "check_hlds.typecheck_info.c"
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

#line 686 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
};

#line 691 "check_hlds.typecheck_info.c"
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

#line 706 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 711 "check_hlds.typecheck_info.c"
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

#line 726 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
};

#line 731 "check_hlds.typecheck_info.c"
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

#line 746 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
};

#line 751 "check_hlds.typecheck_info.c"
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

#line 766 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 771 "check_hlds.typecheck_info.c"
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

#line 786 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_5[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
};

#line 791 "check_hlds.typecheck_info.c"
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

#line 806 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_0
};

#line 811 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_1[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_1
};

#line 816 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_2[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_2
};

#line 821 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_3[3] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_3,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_4,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_5
};

#line 828 "check_hlds.typecheck_info.c"
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

#line 852 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_cons_type_info_source_0[6] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_4,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_1,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_2,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_5,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_3,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_0
};

#line 862 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_cons_type_info_source_0[6] = {
  (MR_Integer) 5,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 3
};

#line 872 "check_hlds.typecheck_info.c"
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

#line 889 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 897 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_simple_call_id_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
};

#line 903 "check_hlds.typecheck_info.c"
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

#line 918 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0
  }
};

#line 926 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_1[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0
};

#line 932 "check_hlds.typecheck_info.c"
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

#line 947 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_0
};

#line 952 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_1[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_1
};

#line 957 "check_hlds.typecheck_info.c"
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

#line 971 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_overloaded_symbol_0[2] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_1,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_0
};

#line 977 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_overloaded_symbol_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 983 "check_hlds.typecheck_info.c"
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

#line 1000 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 1008 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0,
    (MR_TypeInfo) &check_hlds__typecheck_info__list__ti_list_1term__type_ctor_info_context_0
  }
};

#line 1017 "check_hlds.typecheck_info.c"
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

#line 1034 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_marker_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_marker_0
  }
};

#line 1042 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1050 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_type_error_clause_context_0_0[6] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_marker_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1060 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_type_error_clause_context_0_0[6] = {
  (MR_String) "tecc_module_info",
  (MR_String) "tecc_pred_id",
  (MR_String) "tecc_pred_markers",
  (MR_String) "tecc_clause_num",
  (MR_String) "tecc_clause_context",
  (MR_String) "tecc_varset"
};

#line 1070 "check_hlds.typecheck_info.c"
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

#line 1085 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_type_error_clause_context_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_type_error_clause_context_0_0
};

#line 1090 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_type_error_clause_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_type_error_clause_context_0_0
  }
};

#line 1099 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_type_error_clause_context_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_type_error_clause_context_0_0
};

#line 1104 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_type_error_clause_context_0[1] = {
  (MR_Integer) 0
};

#line 1109 "check_hlds.typecheck_info.c"
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

#line 1126 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_info_0_0[4] = {
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_sub_info_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_error_clause_context_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__tree234__ti_tree234_2check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0list__ti_list_1term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1134 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_info_0_0[4] = {
  (MR_String) "tci_sub_info",
  (MR_String) "tci_error_clause_context",
  (MR_String) "tci_overloaded_symbol_map",
  (MR_String) "tci_ambiguity_warn_limit"
};

#line 1142 "check_hlds.typecheck_info.c"
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

#line 1157 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_info_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_info_0_0
};

#line 1162 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_info_0_0
  }
};

#line 1171 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_info_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_info_0_0
};

#line 1176 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_info_0[1] = {
  (MR_Integer) 0
};

#line 1181 "check_hlds.typecheck_info.c"
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

#line 1198 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__maybe__ti_maybe_1parse_tree__status__type_ctor_info_import_status_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__status__parse_tree__status__type_ctor_info_import_status_0
  }
};

#line 1206 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1214 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1222 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_sub_info_0_0[5] = {
  (MR_PseudoTypeInfo) &hlds__pred_table__hlds__pred_table__type_ctor_info_is_fully_qualified_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__maybe__ti_maybe_1parse_tree__status__type_ctor_info_import_status_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_spec_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1231 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_sub_info_0_0[5] = {
  (MR_String) "tcsi_calls_are_fully_qualified",
  (MR_String) "tcsi_is_field_access_function",
  (MR_String) "tcsi_non_overload_errors",
  (MR_String) "tcsi_overload_error",
  (MR_String) "tcsi_ambiguity_error_limit"
};

#line 1240 "check_hlds.typecheck_info.c"
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

#line 1255 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_sub_info_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_sub_info_0_0
};

#line 1260 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_sub_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_sub_info_0_0
  }
};

#line 1269 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_sub_info_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_sub_info_0_0
};

#line 1274 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_sub_info_0[1] = {
  (MR_Integer) 0
};

#line 1279 "check_hlds.typecheck_info.c"
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

#line 1296 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_0_0_10001(
#line 1299 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 1301 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 1303 "check_hlds.typecheck_info.c"
{
#line 1305 "check_hlds.typecheck_info.c"
  {
#line 1307 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 1310 "check_hlds.typecheck_info.c"
    {
#line 1312 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____cons_type_info_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 1315 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 1317 "check_hlds.typecheck_info.c"
  }
#line 1319 "check_hlds.typecheck_info.c"
}

#line 1322 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_0_0_10001(
#line 1325 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 1327 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 1329 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 1331 "check_hlds.typecheck_info.c"
{
#line 1333 "check_hlds.typecheck_info.c"
  {
#line 1335 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 1338 "check_hlds.typecheck_info.c"
    {
#line 1340 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____cons_type_info_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 1343 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 1345 "check_hlds.typecheck_info.c"
  }
#line 1347 "check_hlds.typecheck_info.c"
}

#line 1350 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_source_0_0_10001(
#line 1353 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 1355 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 1357 "check_hlds.typecheck_info.c"
{
#line 1359 "check_hlds.typecheck_info.c"
  {
#line 1361 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 1364 "check_hlds.typecheck_info.c"
    {
#line 1366 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____cons_type_info_source_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 1369 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 1371 "check_hlds.typecheck_info.c"
  }
#line 1373 "check_hlds.typecheck_info.c"
}

#line 1376 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_source_0_0_10001(
#line 1379 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 1381 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 1383 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 1385 "check_hlds.typecheck_info.c"
{
#line 1387 "check_hlds.typecheck_info.c"
  {
#line 1389 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 1392 "check_hlds.typecheck_info.c"
    {
#line 1394 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____cons_type_info_source_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 1397 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 1399 "check_hlds.typecheck_info.c"
  }
#line 1401 "check_hlds.typecheck_info.c"
}

#line 1404 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_0_0_10001(
#line 1407 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 1409 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 1411 "check_hlds.typecheck_info.c"
{
#line 1413 "check_hlds.typecheck_info.c"
  {
#line 1415 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 1418 "check_hlds.typecheck_info.c"
    {
#line 1420 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____overloaded_symbol_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 1423 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 1425 "check_hlds.typecheck_info.c"
  }
#line 1427 "check_hlds.typecheck_info.c"
}

#line 1430 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_0_0_10001(
#line 1433 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 1435 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 1437 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 1439 "check_hlds.typecheck_info.c"
{
#line 1441 "check_hlds.typecheck_info.c"
  {
#line 1443 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 1446 "check_hlds.typecheck_info.c"
    {
#line 1448 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____overloaded_symbol_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 1451 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 1453 "check_hlds.typecheck_info.c"
  }
#line 1455 "check_hlds.typecheck_info.c"
}

#line 1458 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0_10001(
#line 1461 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 1463 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 1465 "check_hlds.typecheck_info.c"
{
#line 1467 "check_hlds.typecheck_info.c"
  {
#line 1469 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 1472 "check_hlds.typecheck_info.c"
    {
#line 1474 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 1477 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 1479 "check_hlds.typecheck_info.c"
  }
#line 1481 "check_hlds.typecheck_info.c"
}

#line 1484 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0_10001(
#line 1487 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 1489 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 1491 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 1493 "check_hlds.typecheck_info.c"
{
#line 1495 "check_hlds.typecheck_info.c"
  {
#line 1497 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 1500 "check_hlds.typecheck_info.c"
    {
#line 1502 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 1505 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 1507 "check_hlds.typecheck_info.c"
  }
#line 1509 "check_hlds.typecheck_info.c"
}

#line 1512 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____type_error_clause_context_0_0_10001(
#line 1515 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 1517 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 1519 "check_hlds.typecheck_info.c"
{
#line 1521 "check_hlds.typecheck_info.c"
  {
#line 1523 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 1526 "check_hlds.typecheck_info.c"
    {
#line 1528 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____type_error_clause_context_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 1531 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 1533 "check_hlds.typecheck_info.c"
  }
#line 1535 "check_hlds.typecheck_info.c"
}

#line 1538 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____type_error_clause_context_0_0_10001(
#line 1541 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 1543 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 1545 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 1547 "check_hlds.typecheck_info.c"
{
#line 1549 "check_hlds.typecheck_info.c"
  {
#line 1551 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 1554 "check_hlds.typecheck_info.c"
    {
#line 1556 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____type_error_clause_context_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 1559 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 1561 "check_hlds.typecheck_info.c"
  }
#line 1563 "check_hlds.typecheck_info.c"
}

#line 1566 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_info_0_0_10001(
#line 1569 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 1571 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 1573 "check_hlds.typecheck_info.c"
{
#line 1575 "check_hlds.typecheck_info.c"
  {
#line 1577 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 1580 "check_hlds.typecheck_info.c"
    {
#line 1582 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____typecheck_info_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 1585 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 1587 "check_hlds.typecheck_info.c"
  }
#line 1589 "check_hlds.typecheck_info.c"
}

#line 1592 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_info_0_0_10001(
#line 1595 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 1597 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 1599 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 1601 "check_hlds.typecheck_info.c"
{
#line 1603 "check_hlds.typecheck_info.c"
  {
#line 1605 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 1608 "check_hlds.typecheck_info.c"
    {
#line 1610 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____typecheck_info_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 1613 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 1615 "check_hlds.typecheck_info.c"
  }
#line 1617 "check_hlds.typecheck_info.c"
}

#line 1620 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0_10001(
#line 1623 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 1625 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 1627 "check_hlds.typecheck_info.c"
{
#line 1629 "check_hlds.typecheck_info.c"
  {
#line 1631 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 1634 "check_hlds.typecheck_info.c"
    {
#line 1636 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 1639 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 1641 "check_hlds.typecheck_info.c"
  }
#line 1643 "check_hlds.typecheck_info.c"
}

#line 1646 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0_10001(
#line 1649 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 1651 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 1653 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 1655 "check_hlds.typecheck_info.c"
{
#line 1657 "check_hlds.typecheck_info.c"
  {
#line 1659 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 1662 "check_hlds.typecheck_info.c"
    {
#line 1664 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 1667 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 1669 "check_hlds.typecheck_info.c"
  }
#line 1671 "check_hlds.typecheck_info.c"
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
#line 1698 "check_hlds.typecheck_info.c"
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
#line 1736 "check_hlds.typecheck_info.c"
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
#line 1756 "check_hlds.typecheck_info.c"
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
#line 1776 "check_hlds.typecheck_info.c"
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
#line 1796 "check_hlds.typecheck_info.c"
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
#line 204 "typecheck_info.m"
                        return;
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

#line 1881 "check_hlds.typecheck_info.c"
        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_3_3 == check_hlds__typecheck_info__V_8_8);
#line 204 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 204 "typecheck_info.m"
          {
#line 1887 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__TypeInfo_15_15 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[9];
#line 1889 "check_hlds.typecheck_info.c"
            {
#line 1891 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_15_15, ((MR_Box) (check_hlds__typecheck_info__V_4_4)), ((MR_Box) (check_hlds__typecheck_info__V_9_9)));
            }
#line 204 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 204 "typecheck_info.m"
              {
#line 1898 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__TypeInfo_16_16 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[10];
#line 1900 "check_hlds.typecheck_info.c"
                {
#line 1902 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_16_16, ((MR_Box) (check_hlds__typecheck_info__V_5_5)), ((MR_Box) (check_hlds__typecheck_info__V_10_10)));
                }
#line 204 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 204 "typecheck_info.m"
                  {
#line 1909 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__TypeInfo_17_17 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[11];
#line 1911 "check_hlds.typecheck_info.c"
                    {
#line 1913 "check_hlds.typecheck_info.c"
                      check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_17_17, ((MR_Box) (check_hlds__typecheck_info__V_6_6)), ((MR_Box) (check_hlds__typecheck_info__V_11_11)));
                    }
#line 204 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 1918 "check_hlds.typecheck_info.c"
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
#line 1959 "check_hlds.typecheck_info.c"
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
#line 1992 "check_hlds.typecheck_info.c"
          {
#line 1994 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 232 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 1998 "check_hlds.typecheck_info.c"
            if (check_hlds__typecheck_info__succeeded)
#line 2000 "check_hlds.typecheck_info.c"
              {
#line 2002 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__V_12_12 = (MR_Integer) 0;
#line 2004 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 2006 "check_hlds.typecheck_info.c"
              }
#line 2008 "check_hlds.typecheck_info.c"
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
#line 2046 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_31_31 == (MR_Integer) 0);
#line 204 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 204 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 204 "typecheck_info.m"
              {
#line 204 "typecheck_info.m"
                check_hlds__typecheck_info__V_12_12 = check_hlds__typecheck_info__V_31_31;
#line 2056 "check_hlds.typecheck_info.c"
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
#line 2074 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_32_32 == (MR_Integer) 0);
#line 204 "typecheck_info.m"
                check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 204 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 204 "typecheck_info.m"
                  {
#line 204 "typecheck_info.m"
                    check_hlds__typecheck_info__V_12_12 = check_hlds__typecheck_info__V_32_32;
#line 2084 "check_hlds.typecheck_info.c"
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
#line 2102 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_33_33 == (MR_Integer) 0);
#line 204 "typecheck_info.m"
                    check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 204 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 204 "typecheck_info.m"
                      {
#line 204 "typecheck_info.m"
                        check_hlds__typecheck_info__V_12_12 = check_hlds__typecheck_info__V_33_33;
#line 2112 "check_hlds.typecheck_info.c"
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
#line 2130 "check_hlds.typecheck_info.c"
                        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_34_34 == (MR_Integer) 0);
#line 204 "typecheck_info.m"
                        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 204 "typecheck_info.m"
                        if (check_hlds__typecheck_info__succeeded)
#line 204 "typecheck_info.m"
                          {
#line 204 "typecheck_info.m"
                            check_hlds__typecheck_info__V_12_12 = check_hlds__typecheck_info__V_34_34;
#line 2140 "check_hlds.typecheck_info.c"
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
#line 2155 "check_hlds.typecheck_info.c"
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
#line 2185 "check_hlds.typecheck_info.c"
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
#line 2205 "check_hlds.typecheck_info.c"
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
#line 232 "typecheck_info.m"
                    return;
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

#line 2321 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_14_14 == check_hlds__typecheck_info__V_19_19);
#line 204 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 204 "typecheck_info.m"
              {
#line 2327 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__TypeInfo_15_26 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[9];
#line 2329 "check_hlds.typecheck_info.c"
                {
#line 2331 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_15_26, ((MR_Box) (check_hlds__typecheck_info__V_15_15)), ((MR_Box) (check_hlds__typecheck_info__V_20_20)));
                }
#line 204 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 204 "typecheck_info.m"
                  {
#line 2338 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__TypeInfo_16_27 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[10];
#line 2340 "check_hlds.typecheck_info.c"
                    {
#line 2342 "check_hlds.typecheck_info.c"
                      check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_16_27, ((MR_Box) (check_hlds__typecheck_info__V_16_16)), ((MR_Box) (check_hlds__typecheck_info__V_21_21)));
                    }
#line 204 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 204 "typecheck_info.m"
                      {
#line 2349 "check_hlds.typecheck_info.c"
                        check_hlds__typecheck_info__TypeInfo_17_28 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[11];
#line 2351 "check_hlds.typecheck_info.c"
                        {
#line 2353 "check_hlds.typecheck_info.c"
                          check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_17_28, ((MR_Box) (check_hlds__typecheck_info__V_17_17)), ((MR_Box) (check_hlds__typecheck_info__V_22_22)));
                        }
#line 204 "typecheck_info.m"
                        if (check_hlds__typecheck_info__succeeded)
#line 2358 "check_hlds.typecheck_info.c"
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
#line 2372 "check_hlds.typecheck_info.c"
            {
#line 2374 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____type_error_clause_context_0_0(check_hlds__typecheck_info__V_4_4, check_hlds__typecheck_info__V_8_8);
            }
#line 232 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 232 "typecheck_info.m"
              {
#line 2381 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__TypeInfo_13_13 = (MR_Word) &check_hlds__typecheck_info_scalar_common_2[0];
#line 2383 "check_hlds.typecheck_info.c"
                {
#line 2385 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_13_13, ((MR_Box) (check_hlds__typecheck_info__V_5_5)), ((MR_Box) (check_hlds__typecheck_info__V_9_9)));
                }
#line 232 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 2390 "check_hlds.typecheck_info.c"
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
#line 2429 "check_hlds.typecheck_info.c"
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
#line 2467 "check_hlds.typecheck_info.c"
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
#line 2487 "check_hlds.typecheck_info.c"
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
#line 2507 "check_hlds.typecheck_info.c"
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
#line 2527 "check_hlds.typecheck_info.c"
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
#line 2547 "check_hlds.typecheck_info.c"
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
#line 101 "typecheck_info.m"
                              return;
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

#line 2640 "check_hlds.typecheck_info.c"
        {
#line 2642 "check_hlds.typecheck_info.c"
          check_hlds__typecheck_info__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__typecheck_info__V_3_3, check_hlds__typecheck_info__V_9_9);
        }
#line 101 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 101 "typecheck_info.m"
          {
#line 2649 "check_hlds.typecheck_info.c"
            {
#line 2651 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__typecheck_info__V_4_4, check_hlds__typecheck_info__V_10_10);
            }
#line 101 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 101 "typecheck_info.m"
              {
#line 2658 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__TypeInfo_19_19 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[7];
#line 2660 "check_hlds.typecheck_info.c"
                {
#line 2662 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_19_19, ((MR_Box) (check_hlds__typecheck_info__V_5_5)), ((MR_Box) (check_hlds__typecheck_info__V_11_11)));
                }
#line 101 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 101 "typecheck_info.m"
                  {
#line 2669 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_6_6 == check_hlds__typecheck_info__V_12_12);
#line 101 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 101 "typecheck_info.m"
                      {
#line 2675 "check_hlds.typecheck_info.c"
                        {
#line 2677 "check_hlds.typecheck_info.c"
                          check_hlds__typecheck_info__succeeded = mercury__term____Unify____context_0_0(check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_13_13);
                        }
#line 101 "typecheck_info.m"
                        if (check_hlds__typecheck_info__succeeded)
#line 101 "typecheck_info.m"
                          {
#line 2684 "check_hlds.typecheck_info.c"
                            check_hlds__typecheck_info__TypeInfo_21_21 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[8];
#line 2686 "check_hlds.typecheck_info.c"
                            {
#line 2688 "check_hlds.typecheck_info.c"
                              return check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_21_21, ((MR_Box) (check_hlds__typecheck_info__V_8_8)), ((MR_Box) (check_hlds__typecheck_info__V_14_14)));
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
#line 89 "typecheck_info.m"
      return;
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
      return check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_2[0], ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar2_4)));
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
#line 2796 "check_hlds.typecheck_info.c"
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
#line 2825 "check_hlds.typecheck_info.c"
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
#line 91 "typecheck_info.m"
                  return;
                }
#line 91 "typecheck_info.m"
              }
#line 91 "typecheck_info.m"
          }
#line 91 "typecheck_info.m"
        else
#line 2850 "check_hlds.typecheck_info.c"
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
#line 2865 "check_hlds.typecheck_info.c"
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
#line 2883 "check_hlds.typecheck_info.c"
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
#line 91 "typecheck_info.m"
                  return;
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
#line 2964 "check_hlds.typecheck_info.c"
            {
#line 2966 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_9_9);
            }
#line 91 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 91 "typecheck_info.m"
              {
#line 2973 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__TypeInfo_14_14 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[5];
#line 2975 "check_hlds.typecheck_info.c"
                {
#line 2977 "check_hlds.typecheck_info.c"
                  return check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_14_14, ((MR_Box) (check_hlds__typecheck_info__V_8_8)), ((MR_Box) (check_hlds__typecheck_info__V_10_10)));
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
#line 3011 "check_hlds.typecheck_info.c"
            {
#line 3013 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____simple_call_id_0_0(check_hlds__typecheck_info__V_3_3, check_hlds__typecheck_info__V_5_5);
            }
#line 91 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 91 "typecheck_info.m"
              {
#line 3020 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__TypeInfo_16_16 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[6];
#line 3022 "check_hlds.typecheck_info.c"
                {
#line 3024 "check_hlds.typecheck_info.c"
                  return check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_16_16, ((MR_Box) (check_hlds__typecheck_info__V_4_4)), ((MR_Box) (check_hlds__typecheck_info__V_6_6)));
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
#line 3064 "check_hlds.typecheck_info.c"
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
#line 79 "typecheck_info.m"
                    return;
                  }
#line 79 "typecheck_info.m"
                }
#line 79 "typecheck_info.m"
                break;
#line 79 "typecheck_info.m"
              case (MR_Integer) 1:
#line 3105 "check_hlds.typecheck_info.c"
                *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "typecheck_info.m"
                break;
#line 79 "typecheck_info.m"
              case (MR_Integer) 2:
#line 3111 "check_hlds.typecheck_info.c"
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
#line 3124 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "typecheck_info.m"
                    break;
#line 79 "typecheck_info.m"
                  case (MR_Integer) 1:
#line 3130 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "typecheck_info.m"
                    break;
#line 79 "typecheck_info.m"
                  case (MR_Integer) 2:
#line 3136 "check_hlds.typecheck_info.c"
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
#line 3164 "check_hlds.typecheck_info.c"
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
#line 79 "typecheck_info.m"
                    return;
                  }
#line 79 "typecheck_info.m"
                }
#line 79 "typecheck_info.m"
                break;
#line 79 "typecheck_info.m"
              case (MR_Integer) 2:
#line 3188 "check_hlds.typecheck_info.c"
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
#line 3201 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "typecheck_info.m"
                    break;
#line 79 "typecheck_info.m"
                  case (MR_Integer) 1:
#line 3207 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "typecheck_info.m"
                    break;
#line 79 "typecheck_info.m"
                  case (MR_Integer) 2:
#line 3213 "check_hlds.typecheck_info.c"
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
#line 3241 "check_hlds.typecheck_info.c"
                *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "typecheck_info.m"
                break;
#line 79 "typecheck_info.m"
              case (MR_Integer) 1:
#line 3247 "check_hlds.typecheck_info.c"
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
#line 79 "typecheck_info.m"
                    return;
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
#line 3278 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "typecheck_info.m"
                    break;
#line 79 "typecheck_info.m"
                  case (MR_Integer) 1:
#line 3284 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "typecheck_info.m"
                    break;
#line 79 "typecheck_info.m"
                  case (MR_Integer) 2:
#line 3290 "check_hlds.typecheck_info.c"
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
#line 3325 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "typecheck_info.m"
                    break;
#line 79 "typecheck_info.m"
                  case (MR_Integer) 1:
#line 3331 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "typecheck_info.m"
                    break;
#line 79 "typecheck_info.m"
                  case (MR_Integer) 2:
#line 3337 "check_hlds.typecheck_info.c"
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
#line 79 "typecheck_info.m"
                            return;
                          }
#line 79 "typecheck_info.m"
                        }
#line 79 "typecheck_info.m"
                        break;
#line 79 "typecheck_info.m"
                      case (MR_Integer) 1:
#line 3368 "check_hlds.typecheck_info.c"
                        *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "typecheck_info.m"
                        break;
#line 79 "typecheck_info.m"
                      case (MR_Integer) 2:
#line 3374 "check_hlds.typecheck_info.c"
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
#line 3402 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "typecheck_info.m"
                    break;
#line 79 "typecheck_info.m"
                  case (MR_Integer) 1:
#line 3408 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "typecheck_info.m"
                    break;
#line 79 "typecheck_info.m"
                  case (MR_Integer) 2:
#line 3414 "check_hlds.typecheck_info.c"
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
#line 3427 "check_hlds.typecheck_info.c"
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
#line 79 "typecheck_info.m"
                            return;
                          }
#line 79 "typecheck_info.m"
                        }
#line 79 "typecheck_info.m"
                        break;
#line 79 "typecheck_info.m"
                      case (MR_Integer) 2:
#line 3451 "check_hlds.typecheck_info.c"
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
#line 3479 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "typecheck_info.m"
                    break;
#line 79 "typecheck_info.m"
                  case (MR_Integer) 1:
#line 3485 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "typecheck_info.m"
                    break;
#line 79 "typecheck_info.m"
                  case (MR_Integer) 2:
#line 3491 "check_hlds.typecheck_info.c"
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
#line 3504 "check_hlds.typecheck_info.c"
                        *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "typecheck_info.m"
                        break;
#line 79 "typecheck_info.m"
                      case (MR_Integer) 1:
#line 3510 "check_hlds.typecheck_info.c"
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
#line 79 "typecheck_info.m"
                            return;
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
#line 3601 "check_hlds.typecheck_info.c"
                {
#line 3603 "check_hlds.typecheck_info.c"
                  return check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__typecheck_info__V_3_3, check_hlds__typecheck_info__V_4_4);
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
#line 3629 "check_hlds.typecheck_info.c"
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
#line 3654 "check_hlds.typecheck_info.c"
                {
#line 3656 "check_hlds.typecheck_info.c"
                  return check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_8_8);
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
#line 3689 "check_hlds.typecheck_info.c"
                    {
#line 3691 "check_hlds.typecheck_info.c"
                      return check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__typecheck_info__V_9_9, check_hlds__typecheck_info__V_10_10);
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
#line 3717 "check_hlds.typecheck_info.c"
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
#line 3742 "check_hlds.typecheck_info.c"
                    {
#line 3744 "check_hlds.typecheck_info.c"
                      return check_hlds__typecheck_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__typecheck_info__V_13_13, check_hlds__typecheck_info__V_14_14);
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
#line 3790 "check_hlds.typecheck_info.c"
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
#line 3828 "check_hlds.typecheck_info.c"
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
#line 3848 "check_hlds.typecheck_info.c"
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
#line 3868 "check_hlds.typecheck_info.c"
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
#line 3888 "check_hlds.typecheck_info.c"
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
#line 3908 "check_hlds.typecheck_info.c"
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
#line 57 "typecheck_info.m"
                            return;
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

#line 3997 "check_hlds.typecheck_info.c"
        {
#line 3999 "check_hlds.typecheck_info.c"
          check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[1], ((MR_Box) (check_hlds__typecheck_info__V_3_3)), ((MR_Box) (check_hlds__typecheck_info__V_9_9)));
        }
#line 57 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 57 "typecheck_info.m"
          {
#line 4006 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__TypeInfo_18_18 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[3];
#line 4008 "check_hlds.typecheck_info.c"
            {
#line 4010 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_18_18, ((MR_Box) (check_hlds__typecheck_info__V_4_4)), ((MR_Box) (check_hlds__typecheck_info__V_10_10)));
            }
#line 57 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 57 "typecheck_info.m"
              {
#line 4017 "check_hlds.typecheck_info.c"
                {
#line 4019 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__V_11_11);
                }
#line 57 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 57 "typecheck_info.m"
                  {
#line 4026 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__TypeInfo_20_20 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[4];
#line 4028 "check_hlds.typecheck_info.c"
                    {
#line 4030 "check_hlds.typecheck_info.c"
                      check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_20_20, ((MR_Box) (check_hlds__typecheck_info__V_6_6)), ((MR_Box) (check_hlds__typecheck_info__V_12_12)));
                    }
#line 57 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 57 "typecheck_info.m"
                      {
#line 4037 "check_hlds.typecheck_info.c"
                        {
#line 4039 "check_hlds.typecheck_info.c"
                          check_hlds__typecheck_info__succeeded = hlds__hlds_data____Unify____hlds_constraints_0_0(check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_13_13);
                        }
#line 57 "typecheck_info.m"
                        if (check_hlds__typecheck_info__succeeded)
#line 4044 "check_hlds.typecheck_info.c"
                          {
#line 4046 "check_hlds.typecheck_info.c"
                            return check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____cons_type_info_source_0_0(check_hlds__typecheck_info__V_8_8, check_hlds__typecheck_info__V_14_14);
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
#line 380 "typecheck_info.m"
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
#line 380 "typecheck_info.m"
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
#line 380 "typecheck_info.m"
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
#line 372 "typecheck_info.m"
      return;
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
#line 369 "typecheck_info.m"
      return;
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
#line 366 "typecheck_info.m"
      return;
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
#line 363 "typecheck_info.m"
      return;
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
      libs__globals__lookup_int_option_3_p_0(check_hlds__typecheck_info__Globals_20, (MR_Integer) 662, &check_hlds__typecheck_info__WarnLimit_21);
    }
#line 275 "typecheck_info.m"
    {
#line 275 "typecheck_info.m"
      libs__globals__lookup_int_option_3_p_0(check_hlds__typecheck_info__Globals_20, (MR_Integer) 663, &check_hlds__typecheck_info__ErrorLimit_22);
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
