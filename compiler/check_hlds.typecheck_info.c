/*
** Automatically generated from `typecheck_info.m'
** by the Mercury compiler,
** version 14.01.1, configured for x86_64-apple-darwin13.3.0.
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
#include "check_hlds.type_util.mih"
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
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 135 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 138 "check_hlds.typecheck_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 141 "check_hlds.typecheck_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_info__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 144 "check_hlds.typecheck_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_info__tree234__pti_tree234_2__plain_hlds__hlds_data__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 147 "check_hlds.typecheck_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 150 "check_hlds.typecheck_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_info__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 153 "check_hlds.typecheck_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 156 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 159 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_args_type_assign_0_0[3];

#line 162 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_args_type_assign_0_0[3];

#line 165 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_args_type_assign_0_0;

#line 168 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_args_type_assign_0_0[1];

#line 171 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_args_type_assign_0[1];

#line 174 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_args_type_assign_0[1];

#line 177 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_args_type_assign_0[1];

#line 180 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_args_type_assign_0;

#line 183 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 186 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 189 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_0_0[6];

#line 192 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_cons_type_info_0_0[6];

#line 195 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_0_0;

#line 198 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_0_0[1];

#line 201 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_0[1];

#line 204 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_cons_type_info_0[1];

#line 207 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_cons_type_info_0[1];

#line 210 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_0[1];

#line 213 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_0;

#line 216 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_1[1];

#line 219 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_1;

#line 222 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_2[1];

#line 225 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_2;

#line 228 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_3[1];

#line 231 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_3;

#line 234 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_4[1];

#line 237 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_4;

#line 240 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_5[1];

#line 243 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_5;

#line 246 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_0[1];

#line 249 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_1[1];

#line 252 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_2[1];

#line 255 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_3[3];

#line 258 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_source_0[4];

#line 261 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_cons_type_info_source_0[6];

#line 264 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_cons_type_info_source_0[6];

#line 267 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 270 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_0[2];

#line 273 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_0;

#line 276 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0;

#line 279 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_1[2];

#line 282 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_1;

#line 285 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_0[1];

#line 288 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_1[1];

#line 291 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_overloaded_symbol_0[2];

#line 294 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_overloaded_symbol_0[2];

#line 297 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_overloaded_symbol_0[2];

#line 300 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1term__type_ctor_info_context_0;

#line 303 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0list__ti_list_1term__type_ctor_info_context_0;

#line 306 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 309 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 312 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 315 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_data__type_ctor_info_constraint_proof_0;

#line 318 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2hlds__hlds_data__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 321 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_type_assign_0_0[7];

#line 324 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_type_assign_0_0[7];

#line 327 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_type_assign_0_0;

#line 330 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_type_assign_0_0[1];

#line 333 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_type_assign_0[1];

#line 336 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_type_assign_0[1];

#line 339 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_type_assign_0[1];

#line 342 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_type_assign_0;

#line 345 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_info_0_0[8];

#line 348 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_info_0_0[8];

#line 351 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_info_0_0;

#line 354 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_info_0_0[1];

#line 357 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_info_0[1];

#line 360 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_info_0[1];

#line 363 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_info_0[1];

#line 366 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_marker_0;

#line 369 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 372 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 375 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 378 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_sub_info_0_0[9];

#line 381 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_sub_info_0_0[9];

#line 384 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_sub_info_0_0;

#line 387 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_sub_info_0_0[1];

#line 390 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_sub_info_0[1];

#line 393 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_sub_info_0[1];

#line 396 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_sub_info_0[1];

#line 399 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____args_type_assign_0_0_10001(
#line 402 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 404 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 407 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____args_type_assign_0_0_10001(
#line 410 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 412 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 414 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 417 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____args_type_assign_set_0_0_10001(
#line 420 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 422 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 425 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____args_type_assign_set_0_0_10001(
#line 428 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 430 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 432 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 435 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_0_0_10001(
#line 438 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 440 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 443 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_0_0_10001(
#line 446 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 448 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 450 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 453 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_source_0_0_10001(
#line 456 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 458 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 461 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_source_0_0_10001(
#line 464 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 466 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 468 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 471 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_0_0_10001(
#line 474 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 476 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 479 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_0_0_10001(
#line 482 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 484 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 486 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 489 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0_10001(
#line 492 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 494 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 497 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0_10001(
#line 500 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 502 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 504 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 507 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____type_assign_0_0_10001(
#line 510 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 512 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 515 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____type_assign_0_0_10001(
#line 518 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 520 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 522 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 525 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____type_assign_set_0_0_10001(
#line 528 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 530 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 533 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____type_assign_set_0_0_10001(
#line 536 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 538 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 540 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 543 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_info_0_0_10001(
#line 546 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 548 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 551 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_info_0_0_10001(
#line 554 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 556 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 558 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 561 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0_10001(
#line 564 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 566 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 569 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0_10001(
#line 572 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 574 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 576 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 1017 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__do_type_checkpoint_4_p_0(
#line 1017 "typecheck_info.m"
  MR_String check_hlds__typecheck_info__Msg_5,
#line 1017 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_6);

#line 966 "typecheck_info.m"
static MR_Word MR_CALL 
check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_f_0(
#line 966 "typecheck_info.m"
  MR_String check_hlds__typecheck_info__Operator_1,
#line 966 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 966 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_3,
#line 966 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeVarSet_4,
#line 966 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__FoundOne_5);

#line 947 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__write_type_assign_constraints_7_p_0(
#line 947 "typecheck_info.m"
  MR_String check_hlds__typecheck_info__Operator_1,
#line 947 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 947 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_3,
#line 947 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeVarSet_4,
#line 947 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__FoundOne_5);

#line 933 "typecheck_info.m"
static MR_Word MR_CALL 
check_hlds__typecheck_info__type_assign_hlds_constraints_to_pieces_3_f_0(
#line 933 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Constraints_5,
#line 933 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_6,
#line 933 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeVarSet_7);

#line 889 "typecheck_info.m"
static MR_Word MR_CALL 
check_hlds__typecheck_info__type_assign_types_to_pieces_6_f_0(
#line 889 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 889 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarSet_2,
#line 889 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarTypes_3,
#line 889 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_4,
#line 889 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeVarSet_5,
#line 889 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__FoundOne_6);

#line 860 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__write_type_assign_types_8_p_0(
#line 860 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 860 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarSet_2,
#line 860 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarTypes_3,
#line 860 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_4,
#line 860 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeVarSet_5,
#line 860 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__FoundOne_6);

#line 824 "typecheck_info.m"
static MR_Word MR_CALL 
check_hlds__typecheck_info__type_assign_to_pieces_3_f_0(
#line 824 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeAssign_5,
#line 824 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__MaybeSeq_6,
#line 824 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarSet_7);

#line 800 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__write_type_assign_4_p_0(
#line 800 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeAssign_5,
#line 800 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarSet_6);

#line 573 "typecheck_info.m"
static MR_bool MR_CALL 
check_hlds__typecheck_info__tvar_maps_to_tvar_3_p_0(
#line 573 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_4,
#line 573 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TVar0_5,
#line 573 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__TVar_6);

#line 559 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__get_existq_tvar_renaming_2_5_p_0(
#line 559 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__OldHeadTypeParams_6,
#line 559 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_7,
#line 559 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TVar_8,
#line 559 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_Renaming_0_11,
#line 559 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_Renaming_12);

#line 556 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__get_existq_tvar_renaming_4_p_0_1(
#line 556 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__closure_arg,
#line 556 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 556 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 556 "typecheck_info.m"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_3);

#line 551 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__get_existq_tvar_renaming_4_p_0(
#line 551 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__OldHeadTypeParams_5,
#line 551 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__ExistQVars_6,
#line 551 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_7,
#line 551 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__ExistTypeRenaming_8);

#line 539 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__expand_types_5_p_0(
#line 539 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeSubst_6,
#line 539 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Type0_7,
#line 539 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__Type_8,
#line 539 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_TypeVarsSet_0_11,
#line 539 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_TypeVarsSet_12);

#line 520 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0_4(
#line 520 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__closure_arg,
#line 520 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 520 "typecheck_info.m"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_2);

#line 468 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0_3(
#line 468 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__closure_arg,
#line 468 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 468 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 468 "typecheck_info.m"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_3);

#line 466 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0_2(
#line 466 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__closure_arg,
#line 466 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 466 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 466 "typecheck_info.m"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_3);

#line 446 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0_1(
#line 446 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__closure_arg,
#line 446 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 446 "typecheck_info.m"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_2,
#line 446 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3,
#line 446 "typecheck_info.m"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_4);


static /* final */ const MR_Box check_hlds__typecheck_info_scalar_common_1[23][2];

static /* final */ const MR_Box check_hlds__typecheck_info_scalar_common_2[8][3];

static /* final */ const MR_Box check_hlds__typecheck_info_scalar_common_3[2][1];

static /* final */ const MR_Box check_hlds__typecheck_info_scalar_common_4[2][8];

static /* final */ const MR_Box check_hlds__typecheck_info_scalar_common_5[2][6];




static /* final */ const MR_Box check_hlds__typecheck_info_scalar_common_1[23][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&check_hlds__typecheck_info_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_args_type_assign_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__typecheck_info_scalar_common_1[0]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_assign_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_info_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_info_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Type assignment"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "(No variables were assigned a type)"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_info_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) " ")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_info_scalar_common_2[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__typecheck_info_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__typecheck_info_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0)),
    ((MR_Box) (&check_hlds__typecheck_info_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__typecheck_info_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (&check_hlds__typecheck_info_scalar_common_3[0])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__typecheck_info_scalar_common_5[0])),
    ((MR_Box) (check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__typecheck_info_scalar_common_5[0])),
    ((MR_Box) (check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_info_scalar_common_3[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__typecheck_info_scalar_common_2[5]))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_info_scalar_common_4[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__typecheck_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typecheck_info__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typecheck_info__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__typecheck_info__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typecheck_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typecheck_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typecheck_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typecheck_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_info_scalar_common_5[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&check_hlds__typecheck_info__tree234__pti_tree234_2__plain_hlds__hlds_data__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&check_hlds__typecheck_info__tree234__pti_tree234_2__plain_hlds__hlds_data__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__typecheck_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1042 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1050 "check_hlds.typecheck_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1059 "check_hlds.typecheck_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_info__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1067 "check_hlds.typecheck_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_info__tree234__pti_tree234_2__plain_hlds__hlds_data__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1076 "check_hlds.typecheck_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1085 "check_hlds.typecheck_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_info__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1093 "check_hlds.typecheck_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1101 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1109 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_args_type_assign_0_0[3] = {
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_assign_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraints_0
};

#line 1116 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_args_type_assign_0_0[3] = {
  (MR_String) "ata_caller_arg_assign",
  (MR_String) "ata_callee_arg_types",
  (MR_String) "ata_callee_constraints"
};

#line 1123 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_args_type_assign_0_0 = {
  (MR_String) "args_type_assign",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_args_type_assign_0_0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_args_type_assign_0_0,
  NULL,
  NULL
};

#line 1138 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_args_type_assign_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_args_type_assign_0_0
};

#line 1143 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_args_type_assign_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_args_type_assign_0_0
  }
};

#line 1152 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_args_type_assign_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_args_type_assign_0_0
};

#line 1157 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_args_type_assign_0[1] = {
  (MR_Integer) 0
};

#line 1162 "check_hlds.typecheck_info.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_args_type_assign_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_info____Unify____args_type_assign_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____args_type_assign_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "args_type_assign",
  {
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_args_type_assign_0
  },
  {
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_args_type_assign_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_args_type_assign_0
};

#line 1183 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_args_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_args_type_assign_0
  }
};

#line 1191 "check_hlds.typecheck_info.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_args_type_assign_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__typecheck_info____Unify____args_type_assign_set_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____args_type_assign_set_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "args_type_assign_set",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_args_type_assign_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1212 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1220 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1228 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_0_0[6] = {
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraints_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0
};

#line 1238 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_cons_type_info_0_0[6] = {
  (MR_String) "cti_varset",
  (MR_String) "cti_exit_tvars",
  (MR_String) "cti_result_type",
  (MR_String) "cti_arg_types",
  (MR_String) "cti_constraints",
  (MR_String) "cti_source"
};

#line 1248 "check_hlds.typecheck_info.c"
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

#line 1263 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_0_0
};

#line 1268 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_0_0
  }
};

#line 1277 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_cons_type_info_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_0_0
};

#line 1282 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_cons_type_info_0[1] = {
  (MR_Integer) 0
};

#line 1287 "check_hlds.typecheck_info.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_info____Unify____cons_type_info_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____cons_type_info_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "cons_type_info",
  {
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_cons_type_info_0
  },
  {
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_cons_type_info_0
};

#line 1308 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
};

#line 1313 "check_hlds.typecheck_info.c"
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

#line 1328 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1333 "check_hlds.typecheck_info.c"
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

#line 1348 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
};

#line 1353 "check_hlds.typecheck_info.c"
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

#line 1368 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
};

#line 1373 "check_hlds.typecheck_info.c"
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

#line 1388 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1393 "check_hlds.typecheck_info.c"
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

#line 1408 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_5[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
};

#line 1413 "check_hlds.typecheck_info.c"
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

#line 1428 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_0
};

#line 1433 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_1[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_1
};

#line 1438 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_2[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_2
};

#line 1443 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_3[3] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_3,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_4,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_5
};

#line 1450 "check_hlds.typecheck_info.c"
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

#line 1474 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_cons_type_info_source_0[6] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_4,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_1,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_2,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_5,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_3,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_0
};

#line 1484 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_cons_type_info_source_0[6] = {
  (MR_Integer) 5,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 3
};

#line 1494 "check_hlds.typecheck_info.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_info____Unify____cons_type_info_source_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____cons_type_info_source_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "cons_type_info_source",
  {
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_cons_type_info_source_0
  },
  {
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_source_0
  },
  (MR_Integer) 6,
  (MR_Integer) 4,
  check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_cons_type_info_source_0
};

#line 1515 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1523 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_simple_call_id_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
};

#line 1529 "check_hlds.typecheck_info.c"
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

#line 1544 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0
  }
};

#line 1552 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_1[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0
};

#line 1558 "check_hlds.typecheck_info.c"
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

#line 1573 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_0
};

#line 1578 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_1[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_1
};

#line 1583 "check_hlds.typecheck_info.c"
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

#line 1597 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_overloaded_symbol_0[2] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_1,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_0
};

#line 1603 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_overloaded_symbol_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1609 "check_hlds.typecheck_info.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_info____Unify____overloaded_symbol_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____overloaded_symbol_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "overloaded_symbol",
  {
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_overloaded_symbol_0
  },
  {
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_overloaded_symbol_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_overloaded_symbol_0
};

#line 1630 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 1638 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0,
    (MR_TypeInfo) &check_hlds__typecheck_info__list__ti_list_1term__type_ctor_info_context_0
  }
};

#line 1647 "check_hlds.typecheck_info.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "overloaded_symbol_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck_info__tree234__ti_tree234_2check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0list__ti_list_1term__type_ctor_info_context_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1668 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1676 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1685 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1694 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_data__type_ctor_info_constraint_proof_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0,
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0
  }
};

#line 1703 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2hlds__hlds_data__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1712 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_type_assign_0_0[7] = {
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraints_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_data__type_ctor_info_constraint_proof_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__tree234__ti_tree234_2hlds__hlds_data__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0
};

#line 1723 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_type_assign_0_0[7] = {
  (MR_String) "ta_var_types",
  (MR_String) "ta_type_varset",
  (MR_String) "ta_head_type_params",
  (MR_String) "ta_type_bindings",
  (MR_String) "ta_class_constraints",
  (MR_String) "ta_constraint_proofs",
  (MR_String) "ta_constraint_map"
};

#line 1734 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_type_assign_0_0 = {
  (MR_String) "type_assign",
  (MR_Integer) 7,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_type_assign_0_0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_type_assign_0_0,
  NULL,
  NULL
};

#line 1749 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_type_assign_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_type_assign_0_0
};

#line 1754 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_type_assign_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_type_assign_0_0
  }
};

#line 1763 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_type_assign_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_type_assign_0_0
};

#line 1768 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_type_assign_0[1] = {
  (MR_Integer) 0
};

#line 1773 "check_hlds.typecheck_info.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_assign_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_info____Unify____type_assign_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____type_assign_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "type_assign",
  {
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_type_assign_0
  },
  {
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_type_assign_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_type_assign_0
};

#line 1794 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_assign_0
  }
};

#line 1802 "check_hlds.typecheck_info.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_assign_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__typecheck_info____Unify____type_assign_set_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____type_assign_set_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "type_assign_set",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_type_assign_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1823 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_info_0_0[8] = {
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_sub_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_context_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_type_assign_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1835 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_info_0_0[8] = {
  (MR_String) "tc_info_sub_info",
  (MR_String) "tc_info_module_info",
  (MR_String) "tc_info_call_id",
  (MR_String) "tc_info_arg_num",
  (MR_String) "tc_info_context",
  (MR_String) "tc_info_unify_context",
  (MR_String) "tc_info_type_assign_set",
  (MR_String) "tc_info_ambiguity_warn_limit"
};

#line 1847 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_info_0_0 = {
  (MR_String) "typecheck_info",
  (MR_Integer) 8,
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

#line 1862 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_info_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_info_0_0
};

#line 1867 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_info_0_0
  }
};

#line 1876 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_info_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_info_0_0
};

#line 1881 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_info_0[1] = {
  (MR_Integer) 0
};

#line 1886 "check_hlds.typecheck_info.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_info____Unify____typecheck_info_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____typecheck_info_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "typecheck_info",
  {
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_info_0
  },
  {
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_info_0
};

#line 1907 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_marker_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_marker_0
  }
};

#line 1915 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1923 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1931 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1939 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_sub_info_0_0[9] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_import_status_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_marker_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_spec_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__tree234__ti_tree234_2check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0list__ti_list_1term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1952 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_sub_info_0_0[9] = {
  (MR_String) "tc_sub_info_pred_id",
  (MR_String) "tc_sub_info_pred_import_status",
  (MR_String) "tc_sub_info_pred_markers",
  (MR_String) "tc_sub_info_is_field_access_function",
  (MR_String) "tc_sub_info_varset",
  (MR_String) "tc_sub_info_non_overload_errors",
  (MR_String) "tc_sub_info_overload_error",
  (MR_String) "tc_sub_info_overloaded_symbols",
  (MR_String) "tc_sub_info_ambiguity_error_limit"
};

#line 1965 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_sub_info_0_0 = {
  (MR_String) "typecheck_sub_info",
  (MR_Integer) 9,
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

#line 1980 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_sub_info_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_sub_info_0_0
};

#line 1985 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_sub_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_sub_info_0_0
  }
};

#line 1994 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_sub_info_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_sub_info_0_0
};

#line 1999 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_sub_info_0[1] = {
  (MR_Integer) 0
};

#line 2004 "check_hlds.typecheck_info.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_sub_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "typecheck_sub_info",
  {
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_sub_info_0
  },
  {
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_sub_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_sub_info_0
};

#line 2025 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____args_type_assign_0_0_10001(
#line 2028 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 2030 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 2032 "check_hlds.typecheck_info.c"
{
#line 2034 "check_hlds.typecheck_info.c"
  {
#line 2036 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 2039 "check_hlds.typecheck_info.c"
    {
#line 2041 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____args_type_assign_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 2044 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 2046 "check_hlds.typecheck_info.c"
  }
#line 2048 "check_hlds.typecheck_info.c"
}

#line 2051 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____args_type_assign_0_0_10001(
#line 2054 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 2056 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 2058 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 2060 "check_hlds.typecheck_info.c"
{
#line 2062 "check_hlds.typecheck_info.c"
  {
#line 2064 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 2067 "check_hlds.typecheck_info.c"
    {
#line 2069 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____args_type_assign_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 2072 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 2074 "check_hlds.typecheck_info.c"
  }
#line 2076 "check_hlds.typecheck_info.c"
}

#line 2079 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____args_type_assign_set_0_0_10001(
#line 2082 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 2084 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 2086 "check_hlds.typecheck_info.c"
{
#line 2088 "check_hlds.typecheck_info.c"
  {
#line 2090 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 2093 "check_hlds.typecheck_info.c"
    {
#line 2095 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____args_type_assign_set_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 2098 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 2100 "check_hlds.typecheck_info.c"
  }
#line 2102 "check_hlds.typecheck_info.c"
}

#line 2105 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____args_type_assign_set_0_0_10001(
#line 2108 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 2110 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 2112 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 2114 "check_hlds.typecheck_info.c"
{
#line 2116 "check_hlds.typecheck_info.c"
  {
#line 2118 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 2121 "check_hlds.typecheck_info.c"
    {
#line 2123 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____args_type_assign_set_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 2126 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 2128 "check_hlds.typecheck_info.c"
  }
#line 2130 "check_hlds.typecheck_info.c"
}

#line 2133 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_0_0_10001(
#line 2136 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 2138 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 2140 "check_hlds.typecheck_info.c"
{
#line 2142 "check_hlds.typecheck_info.c"
  {
#line 2144 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 2147 "check_hlds.typecheck_info.c"
    {
#line 2149 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____cons_type_info_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 2152 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 2154 "check_hlds.typecheck_info.c"
  }
#line 2156 "check_hlds.typecheck_info.c"
}

#line 2159 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_0_0_10001(
#line 2162 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 2164 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 2166 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 2168 "check_hlds.typecheck_info.c"
{
#line 2170 "check_hlds.typecheck_info.c"
  {
#line 2172 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 2175 "check_hlds.typecheck_info.c"
    {
#line 2177 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____cons_type_info_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 2180 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 2182 "check_hlds.typecheck_info.c"
  }
#line 2184 "check_hlds.typecheck_info.c"
}

#line 2187 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_source_0_0_10001(
#line 2190 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 2192 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 2194 "check_hlds.typecheck_info.c"
{
#line 2196 "check_hlds.typecheck_info.c"
  {
#line 2198 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 2201 "check_hlds.typecheck_info.c"
    {
#line 2203 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____cons_type_info_source_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 2206 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 2208 "check_hlds.typecheck_info.c"
  }
#line 2210 "check_hlds.typecheck_info.c"
}

#line 2213 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_source_0_0_10001(
#line 2216 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 2218 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 2220 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 2222 "check_hlds.typecheck_info.c"
{
#line 2224 "check_hlds.typecheck_info.c"
  {
#line 2226 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 2229 "check_hlds.typecheck_info.c"
    {
#line 2231 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____cons_type_info_source_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 2234 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 2236 "check_hlds.typecheck_info.c"
  }
#line 2238 "check_hlds.typecheck_info.c"
}

#line 2241 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_0_0_10001(
#line 2244 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 2246 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 2248 "check_hlds.typecheck_info.c"
{
#line 2250 "check_hlds.typecheck_info.c"
  {
#line 2252 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 2255 "check_hlds.typecheck_info.c"
    {
#line 2257 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____overloaded_symbol_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 2260 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 2262 "check_hlds.typecheck_info.c"
  }
#line 2264 "check_hlds.typecheck_info.c"
}

#line 2267 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_0_0_10001(
#line 2270 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 2272 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 2274 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 2276 "check_hlds.typecheck_info.c"
{
#line 2278 "check_hlds.typecheck_info.c"
  {
#line 2280 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 2283 "check_hlds.typecheck_info.c"
    {
#line 2285 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____overloaded_symbol_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 2288 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 2290 "check_hlds.typecheck_info.c"
  }
#line 2292 "check_hlds.typecheck_info.c"
}

#line 2295 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0_10001(
#line 2298 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 2300 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 2302 "check_hlds.typecheck_info.c"
{
#line 2304 "check_hlds.typecheck_info.c"
  {
#line 2306 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 2309 "check_hlds.typecheck_info.c"
    {
#line 2311 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 2314 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 2316 "check_hlds.typecheck_info.c"
  }
#line 2318 "check_hlds.typecheck_info.c"
}

#line 2321 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0_10001(
#line 2324 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 2326 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 2328 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 2330 "check_hlds.typecheck_info.c"
{
#line 2332 "check_hlds.typecheck_info.c"
  {
#line 2334 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 2337 "check_hlds.typecheck_info.c"
    {
#line 2339 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 2342 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 2344 "check_hlds.typecheck_info.c"
  }
#line 2346 "check_hlds.typecheck_info.c"
}

#line 2349 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____type_assign_0_0_10001(
#line 2352 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 2354 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 2356 "check_hlds.typecheck_info.c"
{
#line 2358 "check_hlds.typecheck_info.c"
  {
#line 2360 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 2363 "check_hlds.typecheck_info.c"
    {
#line 2365 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____type_assign_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 2368 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 2370 "check_hlds.typecheck_info.c"
  }
#line 2372 "check_hlds.typecheck_info.c"
}

#line 2375 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____type_assign_0_0_10001(
#line 2378 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 2380 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 2382 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 2384 "check_hlds.typecheck_info.c"
{
#line 2386 "check_hlds.typecheck_info.c"
  {
#line 2388 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 2391 "check_hlds.typecheck_info.c"
    {
#line 2393 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____type_assign_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 2396 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 2398 "check_hlds.typecheck_info.c"
  }
#line 2400 "check_hlds.typecheck_info.c"
}

#line 2403 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____type_assign_set_0_0_10001(
#line 2406 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 2408 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 2410 "check_hlds.typecheck_info.c"
{
#line 2412 "check_hlds.typecheck_info.c"
  {
#line 2414 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 2417 "check_hlds.typecheck_info.c"
    {
#line 2419 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____type_assign_set_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 2422 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 2424 "check_hlds.typecheck_info.c"
  }
#line 2426 "check_hlds.typecheck_info.c"
}

#line 2429 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____type_assign_set_0_0_10001(
#line 2432 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 2434 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 2436 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 2438 "check_hlds.typecheck_info.c"
{
#line 2440 "check_hlds.typecheck_info.c"
  {
#line 2442 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 2445 "check_hlds.typecheck_info.c"
    {
#line 2447 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____type_assign_set_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 2450 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 2452 "check_hlds.typecheck_info.c"
  }
#line 2454 "check_hlds.typecheck_info.c"
}

#line 2457 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_info_0_0_10001(
#line 2460 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 2462 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 2464 "check_hlds.typecheck_info.c"
{
#line 2466 "check_hlds.typecheck_info.c"
  {
#line 2468 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 2471 "check_hlds.typecheck_info.c"
    {
#line 2473 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____typecheck_info_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 2476 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 2478 "check_hlds.typecheck_info.c"
  }
#line 2480 "check_hlds.typecheck_info.c"
}

#line 2483 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_info_0_0_10001(
#line 2486 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 2488 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 2490 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 2492 "check_hlds.typecheck_info.c"
{
#line 2494 "check_hlds.typecheck_info.c"
  {
#line 2496 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 2499 "check_hlds.typecheck_info.c"
    {
#line 2501 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____typecheck_info_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 2504 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 2506 "check_hlds.typecheck_info.c"
  }
#line 2508 "check_hlds.typecheck_info.c"
}

#line 2511 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0_10001(
#line 2514 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 2516 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 2518 "check_hlds.typecheck_info.c"
{
#line 2520 "check_hlds.typecheck_info.c"
  {
#line 2522 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 2525 "check_hlds.typecheck_info.c"
    {
#line 2527 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 2530 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 2532 "check_hlds.typecheck_info.c"
  }
#line 2534 "check_hlds.typecheck_info.c"
}

#line 2537 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0_10001(
#line 2540 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 2542 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 2544 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 2546 "check_hlds.typecheck_info.c"
{
#line 2548 "check_hlds.typecheck_info.c"
  {
#line 2550 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 2553 "check_hlds.typecheck_info.c"
    {
#line 2555 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 2558 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 2560 "check_hlds.typecheck_info.c"
  }
#line 2562 "check_hlds.typecheck_info.c"
}

#line 43 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0(
#line 43 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
#line 43 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 43 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
#line 43 "typecheck_info.m"
{
#line 43 "typecheck_info.m"
  {
#line 43 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 43 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_30 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;
#line 43 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_31 = (MR_Integer) check_hlds__typecheck_info__HeadVar__3_3;

#line 43 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_30 == check_hlds__typecheck_info__CastY_31);
#line 43 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 2589 "check_hlds.typecheck_info.c"
      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 0;
#line 43 "typecheck_info.m"
    else
#line 43 "typecheck_info.m"
      {
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 4)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 5)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 6)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 7)));
#line 43 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 8)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 2)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 3)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 4)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 5)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 6)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 7)));
#line 43 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 8)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_22_22;

#line 43 "typecheck_info.m"
        {
#line 43 "typecheck_info.m"
          hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__typecheck_info__V_22_22, check_hlds__typecheck_info__V_4_4, check_hlds__typecheck_info__V_13_13);
        }
#line 2639 "check_hlds.typecheck_info.c"
        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_22_22 == (MR_Integer) 0);
#line 43 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 43 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
          *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_22_22;
#line 43 "typecheck_info.m"
        else
#line 43 "typecheck_info.m"
          {
#line 43 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_23_23;

#line 43 "typecheck_info.m"
            {
#line 43 "typecheck_info.m"
              hlds__hlds_pred____Compare____import_status_0_0(&check_hlds__typecheck_info__V_23_23, check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__V_14_14);
            }
#line 2659 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_23_23 == (MR_Integer) 0);
#line 43 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 43 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
              *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_23_23;
#line 43 "typecheck_info.m"
            else
#line 43 "typecheck_info.m"
              {
#line 43 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_24_24;

#line 43 "typecheck_info.m"
                {
#line 43 "typecheck_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_markers_0, &check_hlds__typecheck_info__V_24_24, ((MR_Box) (check_hlds__typecheck_info__V_6_6)), ((MR_Box) (check_hlds__typecheck_info__V_15_15)));
                }
#line 2679 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_24_24 == (MR_Integer) 0);
#line 43 "typecheck_info.m"
                check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 43 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
                  *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_24_24;
#line 43 "typecheck_info.m"
                else
#line 43 "typecheck_info.m"
                  {
#line 43 "typecheck_info.m"
                    MR_Word check_hlds__typecheck_info__V_25_25;
#line 43 "typecheck_info.m"
                    MR_Integer check_hlds__typecheck_info__V_41_41 = (MR_Integer) check_hlds__typecheck_info__V_7_7;
#line 43 "typecheck_info.m"
                    MR_Integer check_hlds__typecheck_info__V_42_42 = (MR_Integer) check_hlds__typecheck_info__V_16_16;

#line 43 "typecheck_info.m"
                    {
#line 43 "typecheck_info.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__typecheck_info__V_25_25, check_hlds__typecheck_info__V_41_41, check_hlds__typecheck_info__V_42_42);
                    }
#line 2703 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_25_25 == (MR_Integer) 0);
#line 43 "typecheck_info.m"
                    check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 43 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
                      *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_25_25;
#line 43 "typecheck_info.m"
                    else
#line 43 "typecheck_info.m"
                      {
#line 43 "typecheck_info.m"
                        MR_Word check_hlds__typecheck_info__V_26_26;

#line 43 "typecheck_info.m"
                        {
#line 43 "typecheck_info.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[11], &check_hlds__typecheck_info__V_26_26, ((MR_Box) (check_hlds__typecheck_info__V_8_8)), ((MR_Box) (check_hlds__typecheck_info__V_17_17)));
                        }
#line 2723 "check_hlds.typecheck_info.c"
                        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_26_26 == (MR_Integer) 0);
#line 43 "typecheck_info.m"
                        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 43 "typecheck_info.m"
                        if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
                          *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_26_26;
#line 43 "typecheck_info.m"
                        else
#line 43 "typecheck_info.m"
                          {
#line 43 "typecheck_info.m"
                            MR_Word check_hlds__typecheck_info__V_27_27;

#line 43 "typecheck_info.m"
                            {
#line 43 "typecheck_info.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[12], &check_hlds__typecheck_info__V_27_27, ((MR_Box) (check_hlds__typecheck_info__V_9_9)), ((MR_Box) (check_hlds__typecheck_info__V_18_18)));
                            }
#line 2743 "check_hlds.typecheck_info.c"
                            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_27_27 == (MR_Integer) 0);
#line 43 "typecheck_info.m"
                            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 43 "typecheck_info.m"
                            if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
                              *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_27_27;
#line 43 "typecheck_info.m"
                            else
#line 43 "typecheck_info.m"
                              {
#line 43 "typecheck_info.m"
                                MR_Word check_hlds__typecheck_info__V_28_28;

#line 43 "typecheck_info.m"
                                {
#line 43 "typecheck_info.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[13], &check_hlds__typecheck_info__V_28_28, ((MR_Box) (check_hlds__typecheck_info__V_10_10)), ((MR_Box) (check_hlds__typecheck_info__V_19_19)));
                                }
#line 2763 "check_hlds.typecheck_info.c"
                                check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_28_28 == (MR_Integer) 0);
#line 43 "typecheck_info.m"
                                check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 43 "typecheck_info.m"
                                if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
                                  *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_28_28;
#line 43 "typecheck_info.m"
                                else
#line 43 "typecheck_info.m"
                                  {
#line 43 "typecheck_info.m"
                                    MR_Word check_hlds__typecheck_info__V_29_29;

#line 43 "typecheck_info.m"
                                    {
#line 43 "typecheck_info.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_2[2], &check_hlds__typecheck_info__V_29_29, ((MR_Box) (check_hlds__typecheck_info__V_11_11)), ((MR_Box) (check_hlds__typecheck_info__V_20_20)));
                                    }
#line 2783 "check_hlds.typecheck_info.c"
                                    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_29_29 == (MR_Integer) 0);
#line 43 "typecheck_info.m"
                                    check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 43 "typecheck_info.m"
                                    if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
                                      *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_29_29;
#line 43 "typecheck_info.m"
                                    else
#line 43 "typecheck_info.m"
                                      {
#line 43 "typecheck_info.m"
                                        mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_12_12, check_hlds__typecheck_info__V_21_21);
#line 43 "typecheck_info.m"
                                        return;
                                      }
#line 43 "typecheck_info.m"
                                  }
#line 43 "typecheck_info.m"
                              }
#line 43 "typecheck_info.m"
                          }
#line 43 "typecheck_info.m"
                      }
#line 43 "typecheck_info.m"
                  }
#line 43 "typecheck_info.m"
              }
#line 43 "typecheck_info.m"
          }
#line 43 "typecheck_info.m"
      }
#line 43 "typecheck_info.m"
  }
#line 43 "typecheck_info.m"
}

#line 43 "typecheck_info.m"
MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0(
#line 43 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 43 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
#line 43 "typecheck_info.m"
{
#line 43 "typecheck_info.m"
  {
#line 43 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 43 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_21 = (MR_Integer) check_hlds__typecheck_info__HeadVar__1_1;
#line 43 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_22 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;

#line 43 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_21 == check_hlds__typecheck_info__CastY_22);
#line 43 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
      check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 43 "typecheck_info.m"
    else
#line 43 "typecheck_info.m"
      {
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeCtorInfo_25_25;
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_26_26;
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_27_27;
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_28_28;
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_29_29;
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 2)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 3)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 4)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 5)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 6)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 7)));
#line 43 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 8)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 4)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 5)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 6)));
#line 43 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 7)));
#line 43 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 8)));

#line 2896 "check_hlds.typecheck_info.c"
        {
#line 2898 "check_hlds.typecheck_info.c"
          check_hlds__typecheck_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__typecheck_info__V_3_3, check_hlds__typecheck_info__V_12_12);
        }
#line 43 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
          {
#line 2905 "check_hlds.typecheck_info.c"
            {
#line 2907 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = hlds__hlds_pred____Unify____import_status_0_0(check_hlds__typecheck_info__V_4_4, check_hlds__typecheck_info__V_13_13);
            }
#line 43 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
              {
#line 2914 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_markers_0;
#line 2916 "check_hlds.typecheck_info.c"
                {
#line 2918 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeCtorInfo_25_25, ((MR_Box) (check_hlds__typecheck_info__V_5_5)), ((MR_Box) (check_hlds__typecheck_info__V_14_14)));
                }
#line 43 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
                  {
#line 2925 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_6_6 == check_hlds__typecheck_info__V_15_15);
#line 43 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
                      {
#line 2931 "check_hlds.typecheck_info.c"
                        check_hlds__typecheck_info__TypeInfo_26_26 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[11];
#line 2933 "check_hlds.typecheck_info.c"
                        {
#line 2935 "check_hlds.typecheck_info.c"
                          check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_26_26, ((MR_Box) (check_hlds__typecheck_info__V_7_7)), ((MR_Box) (check_hlds__typecheck_info__V_16_16)));
                        }
#line 43 "typecheck_info.m"
                        if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
                          {
#line 2942 "check_hlds.typecheck_info.c"
                            check_hlds__typecheck_info__TypeInfo_27_27 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[12];
#line 2944 "check_hlds.typecheck_info.c"
                            {
#line 2946 "check_hlds.typecheck_info.c"
                              check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_27_27, ((MR_Box) (check_hlds__typecheck_info__V_8_8)), ((MR_Box) (check_hlds__typecheck_info__V_17_17)));
                            }
#line 43 "typecheck_info.m"
                            if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
                              {
#line 2953 "check_hlds.typecheck_info.c"
                                check_hlds__typecheck_info__TypeInfo_28_28 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[13];
#line 2955 "check_hlds.typecheck_info.c"
                                {
#line 2957 "check_hlds.typecheck_info.c"
                                  check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_28_28, ((MR_Box) (check_hlds__typecheck_info__V_9_9)), ((MR_Box) (check_hlds__typecheck_info__V_18_18)));
                                }
#line 43 "typecheck_info.m"
                                if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
                                  {
#line 2964 "check_hlds.typecheck_info.c"
                                    check_hlds__typecheck_info__TypeInfo_29_29 = (MR_Word) &check_hlds__typecheck_info_scalar_common_2[2];
#line 2966 "check_hlds.typecheck_info.c"
                                    {
#line 2968 "check_hlds.typecheck_info.c"
                                      check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_29_29, ((MR_Box) (check_hlds__typecheck_info__V_10_10)), ((MR_Box) (check_hlds__typecheck_info__V_19_19)));
                                    }
#line 43 "typecheck_info.m"
                                    if (check_hlds__typecheck_info__succeeded)
#line 2973 "check_hlds.typecheck_info.c"
                                      check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_11_11 == check_hlds__typecheck_info__V_20_20);
#line 43 "typecheck_info.m"
                                  }
#line 43 "typecheck_info.m"
                              }
#line 43 "typecheck_info.m"
                          }
#line 43 "typecheck_info.m"
                      }
#line 43 "typecheck_info.m"
                  }
#line 43 "typecheck_info.m"
              }
#line 43 "typecheck_info.m"
          }
#line 43 "typecheck_info.m"
      }
#line 43 "typecheck_info.m"
    return check_hlds__typecheck_info__succeeded;
#line 43 "typecheck_info.m"
  }
#line 43 "typecheck_info.m"
}

#line 80 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_info_0_0(
#line 80 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
#line 80 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 80 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
#line 80 "typecheck_info.m"
{
#line 80 "typecheck_info.m"
  {
#line 80 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 80 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_27 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;
#line 80 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_28 = (MR_Integer) check_hlds__typecheck_info__HeadVar__3_3;

#line 80 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_27 == check_hlds__typecheck_info__CastY_28);
#line 80 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 3022 "check_hlds.typecheck_info.c"
      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 0;
#line 80 "typecheck_info.m"
    else
#line 80 "typecheck_info.m"
      {
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
#line 80 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 4)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 5)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 6)));
#line 80 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 7)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 2)));
#line 80 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 3)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 4)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 5)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 6)));
#line 80 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 7)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_20_20;

#line 80 "typecheck_info.m"
        {
#line 80 "typecheck_info.m"
          check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0(&check_hlds__typecheck_info__V_20_20, check_hlds__typecheck_info__V_4_4, check_hlds__typecheck_info__V_12_12);
        }
#line 3068 "check_hlds.typecheck_info.c"
        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_20_20 == (MR_Integer) 0);
#line 80 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 80 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 80 "typecheck_info.m"
          *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_20_20;
#line 80 "typecheck_info.m"
        else
#line 80 "typecheck_info.m"
          {
#line 80 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_21_21;

#line 80 "typecheck_info.m"
            {
#line 80 "typecheck_info.m"
              hlds__hlds_module____Compare____module_info_0_0(&check_hlds__typecheck_info__V_21_21, check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__V_13_13);
            }
#line 3088 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_21_21 == (MR_Integer) 0);
#line 80 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 80 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 80 "typecheck_info.m"
              *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_21_21;
#line 80 "typecheck_info.m"
            else
#line 80 "typecheck_info.m"
              {
#line 80 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_22_22;

#line 80 "typecheck_info.m"
                {
#line 80 "typecheck_info.m"
                  hlds__hlds_pred____Compare____call_id_0_0(&check_hlds__typecheck_info__V_22_22, check_hlds__typecheck_info__V_6_6, check_hlds__typecheck_info__V_14_14);
                }
#line 3108 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_22_22 == (MR_Integer) 0);
#line 80 "typecheck_info.m"
                check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 80 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 80 "typecheck_info.m"
                  *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_22_22;
#line 80 "typecheck_info.m"
                else
#line 80 "typecheck_info.m"
                  {
#line 80 "typecheck_info.m"
                    MR_Word check_hlds__typecheck_info__V_23_23;

#line 80 "typecheck_info.m"
                    {
#line 80 "typecheck_info.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__typecheck_info__V_23_23, check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_15_15);
                    }
#line 3128 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_23_23 == (MR_Integer) 0);
#line 80 "typecheck_info.m"
                    check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 80 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 80 "typecheck_info.m"
                      *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_23_23;
#line 80 "typecheck_info.m"
                    else
#line 80 "typecheck_info.m"
                      {
#line 80 "typecheck_info.m"
                        MR_Word check_hlds__typecheck_info__V_24_24;

#line 80 "typecheck_info.m"
                        {
#line 80 "typecheck_info.m"
                          mercury__term____Compare____context_0_0(&check_hlds__typecheck_info__V_24_24, check_hlds__typecheck_info__V_8_8, check_hlds__typecheck_info__V_16_16);
                        }
#line 3148 "check_hlds.typecheck_info.c"
                        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_24_24 == (MR_Integer) 0);
#line 80 "typecheck_info.m"
                        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 80 "typecheck_info.m"
                        if (check_hlds__typecheck_info__succeeded)
#line 80 "typecheck_info.m"
                          *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_24_24;
#line 80 "typecheck_info.m"
                        else
#line 80 "typecheck_info.m"
                          {
#line 80 "typecheck_info.m"
                            MR_Word check_hlds__typecheck_info__V_25_25;

#line 80 "typecheck_info.m"
                            {
#line 80 "typecheck_info.m"
                              hlds__hlds_goal____Compare____unify_context_0_0(&check_hlds__typecheck_info__V_25_25, check_hlds__typecheck_info__V_9_9, check_hlds__typecheck_info__V_17_17);
                            }
#line 3168 "check_hlds.typecheck_info.c"
                            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_25_25 == (MR_Integer) 0);
#line 80 "typecheck_info.m"
                            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 80 "typecheck_info.m"
                            if (check_hlds__typecheck_info__succeeded)
#line 80 "typecheck_info.m"
                              *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_25_25;
#line 80 "typecheck_info.m"
                            else
#line 80 "typecheck_info.m"
                              {
#line 80 "typecheck_info.m"
                                MR_Word check_hlds__typecheck_info__V_26_26;

#line 80 "typecheck_info.m"
                                {
#line 80 "typecheck_info.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[10], &check_hlds__typecheck_info__V_26_26, ((MR_Box) (check_hlds__typecheck_info__V_10_10)), ((MR_Box) (check_hlds__typecheck_info__V_18_18)));
                                }
#line 3188 "check_hlds.typecheck_info.c"
                                check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_26_26 == (MR_Integer) 0);
#line 80 "typecheck_info.m"
                                check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 80 "typecheck_info.m"
                                if (check_hlds__typecheck_info__succeeded)
#line 80 "typecheck_info.m"
                                  *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_26_26;
#line 80 "typecheck_info.m"
                                else
#line 80 "typecheck_info.m"
                                  {
#line 80 "typecheck_info.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_11_11, check_hlds__typecheck_info__V_19_19);
#line 80 "typecheck_info.m"
                                    return;
                                  }
#line 80 "typecheck_info.m"
                              }
#line 80 "typecheck_info.m"
                          }
#line 80 "typecheck_info.m"
                      }
#line 80 "typecheck_info.m"
                  }
#line 80 "typecheck_info.m"
              }
#line 80 "typecheck_info.m"
          }
#line 80 "typecheck_info.m"
      }
#line 80 "typecheck_info.m"
  }
#line 80 "typecheck_info.m"
}

#line 80 "typecheck_info.m"
MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_info_0_0(
#line 80 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 80 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
#line 80 "typecheck_info.m"
{
#line 80 "typecheck_info.m"
  {
#line 80 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 80 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_19 = (MR_Integer) check_hlds__typecheck_info__HeadVar__1_1;
#line 80 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_20 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;

#line 80 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_19 == check_hlds__typecheck_info__CastY_20);
#line 80 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 80 "typecheck_info.m"
      check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 80 "typecheck_info.m"
    else
#line 80 "typecheck_info.m"
      {
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_25_25;
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 2)));
#line 80 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 3)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 4)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 5)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 6)));
#line 80 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 7)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
#line 80 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 4)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 5)));
#line 80 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 6)));
#line 80 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 7)));

#line 3287 "check_hlds.typecheck_info.c"
        {
#line 3289 "check_hlds.typecheck_info.c"
          check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0(check_hlds__typecheck_info__V_3_3, check_hlds__typecheck_info__V_11_11);
        }
#line 80 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 80 "typecheck_info.m"
          {
#line 3296 "check_hlds.typecheck_info.c"
            {
#line 3298 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__typecheck_info__V_4_4, check_hlds__typecheck_info__V_12_12);
            }
#line 80 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 80 "typecheck_info.m"
              {
#line 3305 "check_hlds.typecheck_info.c"
                {
#line 3307 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__succeeded = hlds__hlds_pred____Unify____call_id_0_0(check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__V_13_13);
                }
#line 80 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 80 "typecheck_info.m"
                  {
#line 3314 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_6_6 == check_hlds__typecheck_info__V_14_14);
#line 80 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 80 "typecheck_info.m"
                      {
#line 3320 "check_hlds.typecheck_info.c"
                        {
#line 3322 "check_hlds.typecheck_info.c"
                          check_hlds__typecheck_info__succeeded = mercury__term____Unify____context_0_0(check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_15_15);
                        }
#line 80 "typecheck_info.m"
                        if (check_hlds__typecheck_info__succeeded)
#line 80 "typecheck_info.m"
                          {
#line 3329 "check_hlds.typecheck_info.c"
                            {
#line 3331 "check_hlds.typecheck_info.c"
                              check_hlds__typecheck_info__succeeded = hlds__hlds_goal____Unify____unify_context_0_0(check_hlds__typecheck_info__V_8_8, check_hlds__typecheck_info__V_16_16);
                            }
#line 80 "typecheck_info.m"
                            if (check_hlds__typecheck_info__succeeded)
#line 80 "typecheck_info.m"
                              {
#line 3338 "check_hlds.typecheck_info.c"
                                check_hlds__typecheck_info__TypeInfo_25_25 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[10];
#line 3340 "check_hlds.typecheck_info.c"
                                {
#line 3342 "check_hlds.typecheck_info.c"
                                  check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_25_25, ((MR_Box) (check_hlds__typecheck_info__V_9_9)), ((MR_Box) (check_hlds__typecheck_info__V_17_17)));
                                }
#line 80 "typecheck_info.m"
                                if (check_hlds__typecheck_info__succeeded)
#line 3347 "check_hlds.typecheck_info.c"
                                  check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_10_10 == check_hlds__typecheck_info__V_18_18);
#line 80 "typecheck_info.m"
                              }
#line 80 "typecheck_info.m"
                          }
#line 80 "typecheck_info.m"
                      }
#line 80 "typecheck_info.m"
                  }
#line 80 "typecheck_info.m"
              }
#line 80 "typecheck_info.m"
          }
#line 80 "typecheck_info.m"
      }
#line 80 "typecheck_info.m"
    return check_hlds__typecheck_info__succeeded;
#line 80 "typecheck_info.m"
  }
#line 80 "typecheck_info.m"
}

#line 227 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info____Compare____type_assign_set_0_0(
#line 227 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
#line 227 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 227 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
#line 227 "typecheck_info.m"
{
#line 227 "typecheck_info.m"
  {
#line 227 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 227 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Cast_HeadVar1_4 = check_hlds__typecheck_info__HeadVar__2_2;
#line 227 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Cast_HeadVar2_5 = check_hlds__typecheck_info__HeadVar__3_3;

#line 227 "typecheck_info.m"
    {
#line 227 "typecheck_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[10], check_hlds__typecheck_info__HeadVar__1_1, ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar2_5)));
#line 227 "typecheck_info.m"
      return;
    }
#line 227 "typecheck_info.m"
  }
#line 227 "typecheck_info.m"
}

#line 227 "typecheck_info.m"
MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____type_assign_set_0_0(
#line 227 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 227 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
#line 227 "typecheck_info.m"
{
#line 227 "typecheck_info.m"
  {
#line 227 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 227 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Cast_HeadVar1_3 = check_hlds__typecheck_info__HeadVar__1_1;
#line 227 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Cast_HeadVar2_4 = check_hlds__typecheck_info__HeadVar__2_2;

#line 227 "typecheck_info.m"
    {
#line 227 "typecheck_info.m"
      return check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[10], ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar2_4)));
    }
#line 227 "typecheck_info.m"
    return check_hlds__typecheck_info__succeeded;
#line 227 "typecheck_info.m"
  }
#line 227 "typecheck_info.m"
}

#line 229 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info____Compare____type_assign_0_0(
#line 229 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
#line 229 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 229 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
#line 229 "typecheck_info.m"
{
#line 229 "typecheck_info.m"
  {
#line 229 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 229 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_24 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;
#line 229 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_25 = (MR_Integer) check_hlds__typecheck_info__HeadVar__3_3;

#line 229 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_24 == check_hlds__typecheck_info__CastY_25);
#line 229 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 3456 "check_hlds.typecheck_info.c"
      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 0;
#line 229 "typecheck_info.m"
    else
#line 229 "typecheck_info.m"
      {
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 4)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 5)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 6)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 2)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 3)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 4)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 5)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 6)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_18_18;

#line 229 "typecheck_info.m"
        {
#line 229 "typecheck_info.m"
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &check_hlds__typecheck_info__V_18_18, ((MR_Box) (check_hlds__typecheck_info__V_4_4)), ((MR_Box) (check_hlds__typecheck_info__V_11_11)));
        }
#line 3498 "check_hlds.typecheck_info.c"
        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_18_18 == (MR_Integer) 0);
#line 229 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 229 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 229 "typecheck_info.m"
          *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_18_18;
#line 229 "typecheck_info.m"
        else
#line 229 "typecheck_info.m"
          {
#line 229 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_19_19;

#line 229 "typecheck_info.m"
            {
#line 229 "typecheck_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[6], &check_hlds__typecheck_info__V_19_19, ((MR_Box) (check_hlds__typecheck_info__V_5_5)), ((MR_Box) (check_hlds__typecheck_info__V_12_12)));
            }
#line 3518 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_19_19 == (MR_Integer) 0);
#line 229 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 229 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 229 "typecheck_info.m"
              *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_19_19;
#line 229 "typecheck_info.m"
            else
#line 229 "typecheck_info.m"
              {
#line 229 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_20_20;

#line 229 "typecheck_info.m"
                {
#line 229 "typecheck_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[7], &check_hlds__typecheck_info__V_20_20, ((MR_Box) (check_hlds__typecheck_info__V_6_6)), ((MR_Box) (check_hlds__typecheck_info__V_13_13)));
                }
#line 3538 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_20_20 == (MR_Integer) 0);
#line 229 "typecheck_info.m"
                check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 229 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 229 "typecheck_info.m"
                  *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_20_20;
#line 229 "typecheck_info.m"
                else
#line 229 "typecheck_info.m"
                  {
#line 229 "typecheck_info.m"
                    MR_Word check_hlds__typecheck_info__V_21_21;

#line 229 "typecheck_info.m"
                    {
#line 229 "typecheck_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_2[3], &check_hlds__typecheck_info__V_21_21, ((MR_Box) (check_hlds__typecheck_info__V_7_7)), ((MR_Box) (check_hlds__typecheck_info__V_14_14)));
                    }
#line 3558 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_21_21 == (MR_Integer) 0);
#line 229 "typecheck_info.m"
                    check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 229 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 229 "typecheck_info.m"
                      *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_21_21;
#line 229 "typecheck_info.m"
                    else
#line 229 "typecheck_info.m"
                      {
#line 229 "typecheck_info.m"
                        MR_Word check_hlds__typecheck_info__V_22_22;

#line 229 "typecheck_info.m"
                        {
#line 229 "typecheck_info.m"
                          hlds__hlds_data____Compare____hlds_constraints_0_0(&check_hlds__typecheck_info__V_22_22, check_hlds__typecheck_info__V_8_8, check_hlds__typecheck_info__V_15_15);
                        }
#line 3578 "check_hlds.typecheck_info.c"
                        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_22_22 == (MR_Integer) 0);
#line 229 "typecheck_info.m"
                        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 229 "typecheck_info.m"
                        if (check_hlds__typecheck_info__succeeded)
#line 229 "typecheck_info.m"
                          *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_22_22;
#line 229 "typecheck_info.m"
                        else
#line 229 "typecheck_info.m"
                          {
#line 229 "typecheck_info.m"
                            MR_Word check_hlds__typecheck_info__V_23_23;

#line 229 "typecheck_info.m"
                            {
#line 229 "typecheck_info.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_2[4], &check_hlds__typecheck_info__V_23_23, ((MR_Box) (check_hlds__typecheck_info__V_9_9)), ((MR_Box) (check_hlds__typecheck_info__V_16_16)));
                            }
#line 3598 "check_hlds.typecheck_info.c"
                            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_23_23 == (MR_Integer) 0);
#line 229 "typecheck_info.m"
                            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 229 "typecheck_info.m"
                            if (check_hlds__typecheck_info__succeeded)
#line 229 "typecheck_info.m"
                              *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_23_23;
#line 229 "typecheck_info.m"
                            else
#line 229 "typecheck_info.m"
                              {
#line 229 "typecheck_info.m"
                                {
#line 229 "typecheck_info.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_2[0], check_hlds__typecheck_info__HeadVar__1_1, ((MR_Box) (check_hlds__typecheck_info__V_10_10)), ((MR_Box) (check_hlds__typecheck_info__V_17_17)));
#line 229 "typecheck_info.m"
                                  return;
                                }
#line 229 "typecheck_info.m"
                              }
#line 229 "typecheck_info.m"
                          }
#line 229 "typecheck_info.m"
                      }
#line 229 "typecheck_info.m"
                  }
#line 229 "typecheck_info.m"
              }
#line 229 "typecheck_info.m"
          }
#line 229 "typecheck_info.m"
      }
#line 229 "typecheck_info.m"
  }
#line 229 "typecheck_info.m"
}

#line 229 "typecheck_info.m"
MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____type_assign_0_0(
#line 229 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 229 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
#line 229 "typecheck_info.m"
{
#line 229 "typecheck_info.m"
  {
#line 229 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 229 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_17 = (MR_Integer) check_hlds__typecheck_info__HeadVar__1_1;
#line 229 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_18 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;

#line 229 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_17 == check_hlds__typecheck_info__CastY_18);
#line 229 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 229 "typecheck_info.m"
      check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 229 "typecheck_info.m"
    else
#line 229 "typecheck_info.m"
      {
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_20_20;
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_21_21;
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_22_22;
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_24_24;
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_25_25;
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 2)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 3)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 4)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 5)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 6)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 4)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 5)));
#line 229 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 6)));

#line 3703 "check_hlds.typecheck_info.c"
        {
#line 3705 "check_hlds.typecheck_info.c"
          check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, ((MR_Box) (check_hlds__typecheck_info__V_3_3)), ((MR_Box) (check_hlds__typecheck_info__V_10_10)));
        }
#line 229 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 229 "typecheck_info.m"
          {
#line 3712 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__TypeInfo_20_20 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[6];
#line 3714 "check_hlds.typecheck_info.c"
            {
#line 3716 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_20_20, ((MR_Box) (check_hlds__typecheck_info__V_4_4)), ((MR_Box) (check_hlds__typecheck_info__V_11_11)));
            }
#line 229 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 229 "typecheck_info.m"
              {
#line 3723 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__TypeInfo_21_21 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[7];
#line 3725 "check_hlds.typecheck_info.c"
                {
#line 3727 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_21_21, ((MR_Box) (check_hlds__typecheck_info__V_5_5)), ((MR_Box) (check_hlds__typecheck_info__V_12_12)));
                }
#line 229 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 229 "typecheck_info.m"
                  {
#line 3734 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__TypeInfo_22_22 = (MR_Word) &check_hlds__typecheck_info_scalar_common_2[3];
#line 3736 "check_hlds.typecheck_info.c"
                    {
#line 3738 "check_hlds.typecheck_info.c"
                      check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_22_22, ((MR_Box) (check_hlds__typecheck_info__V_6_6)), ((MR_Box) (check_hlds__typecheck_info__V_13_13)));
                    }
#line 229 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 229 "typecheck_info.m"
                      {
#line 3745 "check_hlds.typecheck_info.c"
                        {
#line 3747 "check_hlds.typecheck_info.c"
                          check_hlds__typecheck_info__succeeded = hlds__hlds_data____Unify____hlds_constraints_0_0(check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_14_14);
                        }
#line 229 "typecheck_info.m"
                        if (check_hlds__typecheck_info__succeeded)
#line 229 "typecheck_info.m"
                          {
#line 3754 "check_hlds.typecheck_info.c"
                            check_hlds__typecheck_info__TypeInfo_24_24 = (MR_Word) &check_hlds__typecheck_info_scalar_common_2[4];
#line 3756 "check_hlds.typecheck_info.c"
                            {
#line 3758 "check_hlds.typecheck_info.c"
                              check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_24_24, ((MR_Box) (check_hlds__typecheck_info__V_8_8)), ((MR_Box) (check_hlds__typecheck_info__V_15_15)));
                            }
#line 229 "typecheck_info.m"
                            if (check_hlds__typecheck_info__succeeded)
#line 229 "typecheck_info.m"
                              {
#line 3765 "check_hlds.typecheck_info.c"
                                check_hlds__typecheck_info__TypeInfo_25_25 = (MR_Word) &check_hlds__typecheck_info_scalar_common_2[0];
#line 3767 "check_hlds.typecheck_info.c"
                                {
#line 3769 "check_hlds.typecheck_info.c"
                                  return check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_25_25, ((MR_Box) (check_hlds__typecheck_info__V_9_9)), ((MR_Box) (check_hlds__typecheck_info__V_16_16)));
                                }
#line 229 "typecheck_info.m"
                              }
#line 229 "typecheck_info.m"
                          }
#line 229 "typecheck_info.m"
                      }
#line 229 "typecheck_info.m"
                  }
#line 229 "typecheck_info.m"
              }
#line 229 "typecheck_info.m"
          }
#line 229 "typecheck_info.m"
      }
#line 229 "typecheck_info.m"
    return check_hlds__typecheck_info__succeeded;
#line 229 "typecheck_info.m"
  }
#line 229 "typecheck_info.m"
}

#line 106 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0(
#line 106 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
#line 106 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 106 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
#line 106 "typecheck_info.m"
{
#line 106 "typecheck_info.m"
  {
#line 106 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 106 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Cast_HeadVar1_4 = check_hlds__typecheck_info__HeadVar__2_2;
#line 106 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Cast_HeadVar2_5 = check_hlds__typecheck_info__HeadVar__3_3;

#line 106 "typecheck_info.m"
    {
#line 106 "typecheck_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_2[2], check_hlds__typecheck_info__HeadVar__1_1, ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar2_5)));
#line 106 "typecheck_info.m"
      return;
    }
#line 106 "typecheck_info.m"
  }
#line 106 "typecheck_info.m"
}

#line 106 "typecheck_info.m"
MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0(
#line 106 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 106 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
#line 106 "typecheck_info.m"
{
#line 106 "typecheck_info.m"
  {
#line 106 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 106 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Cast_HeadVar1_3 = check_hlds__typecheck_info__HeadVar__1_1;
#line 106 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Cast_HeadVar2_4 = check_hlds__typecheck_info__HeadVar__2_2;

#line 106 "typecheck_info.m"
    {
#line 106 "typecheck_info.m"
      return check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_2[2], ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar2_4)));
    }
#line 106 "typecheck_info.m"
    return check_hlds__typecheck_info__succeeded;
#line 106 "typecheck_info.m"
  }
#line 106 "typecheck_info.m"
}

#line 108 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_0_0(
#line 108 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
#line 108 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 108 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
#line 108 "typecheck_info.m"
{
#line 108 "typecheck_info.m"
  {
#line 108 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 108 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_22 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;
#line 108 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_23 = (MR_Integer) check_hlds__typecheck_info__HeadVar__3_3;

#line 108 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_22 == check_hlds__typecheck_info__CastY_23);
#line 108 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 3879 "check_hlds.typecheck_info.c"
      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 0;
#line 108 "typecheck_info.m"
    else
#line 108 "typecheck_info.m"
      if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 108 "typecheck_info.m"
        {
#line 108 "typecheck_info.m"
          MR_Word check_hlds__typecheck_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 108 "typecheck_info.m"
          MR_Word check_hlds__typecheck_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));

#line 108 "typecheck_info.m"
          if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 108 "typecheck_info.m"
            {
#line 108 "typecheck_info.m"
              MR_Word check_hlds__typecheck_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));
#line 108 "typecheck_info.m"
              MR_Word check_hlds__typecheck_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));
#line 108 "typecheck_info.m"
              MR_Word check_hlds__typecheck_info__V_21_21;

#line 108 "typecheck_info.m"
              {
#line 108 "typecheck_info.m"
                parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__typecheck_info__V_21_21, check_hlds__typecheck_info__V_29_29, check_hlds__typecheck_info__V_19_19);
              }
#line 3908 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_21_21 == (MR_Integer) 0);
#line 108 "typecheck_info.m"
              check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 108 "typecheck_info.m"
              if (check_hlds__typecheck_info__succeeded)
#line 108 "typecheck_info.m"
                *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_21_21;
#line 108 "typecheck_info.m"
              else
#line 108 "typecheck_info.m"
                {
#line 108 "typecheck_info.m"
                  {
#line 108 "typecheck_info.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[8], check_hlds__typecheck_info__HeadVar__1_1, ((MR_Box) (check_hlds__typecheck_info__V_28_28)), ((MR_Box) (check_hlds__typecheck_info__V_20_20)));
#line 108 "typecheck_info.m"
                    return;
                  }
#line 108 "typecheck_info.m"
                }
#line 108 "typecheck_info.m"
            }
#line 108 "typecheck_info.m"
          else
#line 3933 "check_hlds.typecheck_info.c"
            *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 108 "typecheck_info.m"
        }
#line 108 "typecheck_info.m"
      else
#line 108 "typecheck_info.m"
        {
#line 108 "typecheck_info.m"
          MR_Word check_hlds__typecheck_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 108 "typecheck_info.m"
          MR_Word check_hlds__typecheck_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));

#line 108 "typecheck_info.m"
          if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3948 "check_hlds.typecheck_info.c"
            *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 108 "typecheck_info.m"
          else
#line 108 "typecheck_info.m"
            {
#line 108 "typecheck_info.m"
              MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));
#line 108 "typecheck_info.m"
              MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));
#line 108 "typecheck_info.m"
              MR_Word check_hlds__typecheck_info__V_8_8;

#line 108 "typecheck_info.m"
              {
#line 108 "typecheck_info.m"
                parse_tree__prog_data____Compare____simple_call_id_0_0(&check_hlds__typecheck_info__V_8_8, check_hlds__typecheck_info__V_31_31, check_hlds__typecheck_info__V_6_6);
              }
#line 3966 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_8_8 == (MR_Integer) 0);
#line 108 "typecheck_info.m"
              check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 108 "typecheck_info.m"
              if (check_hlds__typecheck_info__succeeded)
#line 108 "typecheck_info.m"
                *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_8_8;
#line 108 "typecheck_info.m"
              else
#line 108 "typecheck_info.m"
                {
#line 108 "typecheck_info.m"
                  {
#line 108 "typecheck_info.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[9], check_hlds__typecheck_info__HeadVar__1_1, ((MR_Box) (check_hlds__typecheck_info__V_30_30)), ((MR_Box) (check_hlds__typecheck_info__V_7_7)));
#line 108 "typecheck_info.m"
                    return;
                  }
#line 108 "typecheck_info.m"
                }
#line 108 "typecheck_info.m"
            }
#line 108 "typecheck_info.m"
        }
#line 108 "typecheck_info.m"
  }
#line 108 "typecheck_info.m"
}

#line 108 "typecheck_info.m"
MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_0_0(
#line 108 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 108 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
#line 108 "typecheck_info.m"
{
#line 108 "typecheck_info.m"
  {
#line 108 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 108 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_11 = (MR_Integer) check_hlds__typecheck_info__HeadVar__1_1;
#line 108 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_12 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;

#line 108 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_11 == check_hlds__typecheck_info__CastY_12);
#line 108 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 108 "typecheck_info.m"
      check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 108 "typecheck_info.m"
    else
#line 108 "typecheck_info.m"
      if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 108 "typecheck_info.m"
        {
#line 108 "typecheck_info.m"
          MR_Word check_hlds__typecheck_info__TypeInfo_14_14;
#line 108 "typecheck_info.m"
          MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 108 "typecheck_info.m"
          MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 108 "typecheck_info.m"
          MR_Word check_hlds__typecheck_info__V_9_9;
#line 108 "typecheck_info.m"
          MR_Word check_hlds__typecheck_info__V_10_10;

#line 108 "typecheck_info.m"
          check_hlds__typecheck_info__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 108 "typecheck_info.m"
          if (check_hlds__typecheck_info__succeeded)
#line 108 "typecheck_info.m"
            {
#line 108 "typecheck_info.m"
              check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 108 "typecheck_info.m"
              check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 4047 "check_hlds.typecheck_info.c"
              {
#line 4049 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_9_9);
              }
#line 108 "typecheck_info.m"
              if (check_hlds__typecheck_info__succeeded)
#line 108 "typecheck_info.m"
                {
#line 4056 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__TypeInfo_14_14 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[8];
#line 4058 "check_hlds.typecheck_info.c"
                  {
#line 4060 "check_hlds.typecheck_info.c"
                    return check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_14_14, ((MR_Box) (check_hlds__typecheck_info__V_8_8)), ((MR_Box) (check_hlds__typecheck_info__V_10_10)));
                  }
#line 108 "typecheck_info.m"
                }
#line 108 "typecheck_info.m"
            }
#line 108 "typecheck_info.m"
        }
#line 108 "typecheck_info.m"
      else
#line 108 "typecheck_info.m"
        {
#line 108 "typecheck_info.m"
          MR_Word check_hlds__typecheck_info__TypeInfo_16_16;
#line 108 "typecheck_info.m"
          MR_Word check_hlds__typecheck_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 108 "typecheck_info.m"
          MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 108 "typecheck_info.m"
          MR_Word check_hlds__typecheck_info__V_5_5;
#line 108 "typecheck_info.m"
          MR_Word check_hlds__typecheck_info__V_6_6;

#line 108 "typecheck_info.m"
          check_hlds__typecheck_info__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 108 "typecheck_info.m"
          if (check_hlds__typecheck_info__succeeded)
#line 108 "typecheck_info.m"
            {
#line 108 "typecheck_info.m"
              check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 108 "typecheck_info.m"
              check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 4094 "check_hlds.typecheck_info.c"
              {
#line 4096 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____simple_call_id_0_0(check_hlds__typecheck_info__V_3_3, check_hlds__typecheck_info__V_5_5);
              }
#line 108 "typecheck_info.m"
              if (check_hlds__typecheck_info__succeeded)
#line 108 "typecheck_info.m"
                {
#line 4103 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__TypeInfo_16_16 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[9];
#line 4105 "check_hlds.typecheck_info.c"
                  {
#line 4107 "check_hlds.typecheck_info.c"
                    return check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_16_16, ((MR_Box) (check_hlds__typecheck_info__V_4_4)), ((MR_Box) (check_hlds__typecheck_info__V_6_6)));
                  }
#line 108 "typecheck_info.m"
                }
#line 108 "typecheck_info.m"
            }
#line 108 "typecheck_info.m"
        }
#line 108 "typecheck_info.m"
    return check_hlds__typecheck_info__succeeded;
#line 108 "typecheck_info.m"
  }
#line 108 "typecheck_info.m"
}

#line 343 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_source_0_0(
#line 343 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
#line 343 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 343 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
#line 343 "typecheck_info.m"
{
#line 343 "typecheck_info.m"
  {
#line 343 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 343 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_76 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;
#line 343 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_77 = (MR_Integer) check_hlds__typecheck_info__HeadVar__3_3;

#line 343 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_76 == check_hlds__typecheck_info__CastY_77);
#line 343 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 4147 "check_hlds.typecheck_info.c"
      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 0;
#line 343 "typecheck_info.m"
    else
#line 343 "typecheck_info.m"
      if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 343 "typecheck_info.m"
        {
#line 343 "typecheck_info.m"
          MR_String check_hlds__typecheck_info__V_85_85 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));

#line 343 "typecheck_info.m"
          if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 343 "typecheck_info.m"
            {
#line 343 "typecheck_info.m"
              MR_String check_hlds__typecheck_info__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));

#line 343 "typecheck_info.m"
              {
#line 343 "typecheck_info.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_85_85, check_hlds__typecheck_info__V_19_19);
#line 343 "typecheck_info.m"
                return;
              }
#line 343 "typecheck_info.m"
            }
#line 343 "typecheck_info.m"
          else
#line 343 "typecheck_info.m"
            if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4178 "check_hlds.typecheck_info.c"
              *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
            else
#line 343 "typecheck_info.m"
              if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4184 "check_hlds.typecheck_info.c"
                *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
              else
#line 343 "typecheck_info.m"
                if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4190 "check_hlds.typecheck_info.c"
                  *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
                else
#line 343 "typecheck_info.m"
                  if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4196 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
                  else
#line 4200 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
        }
#line 343 "typecheck_info.m"
      else
#line 343 "typecheck_info.m"
        if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 343 "typecheck_info.m"
          {
#line 343 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));

#line 343 "typecheck_info.m"
            if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4215 "check_hlds.typecheck_info.c"
              *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
            else
#line 343 "typecheck_info.m"
              if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 343 "typecheck_info.m"
                {
#line 343 "typecheck_info.m"
                  MR_Word check_hlds__typecheck_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));

#line 343 "typecheck_info.m"
                  {
#line 343 "typecheck_info.m"
                    parse_tree__prog_data____Compare____type_ctor_0_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_86_86, check_hlds__typecheck_info__V_33_33);
#line 343 "typecheck_info.m"
                    return;
                  }
#line 343 "typecheck_info.m"
                }
#line 343 "typecheck_info.m"
              else
#line 343 "typecheck_info.m"
                if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4239 "check_hlds.typecheck_info.c"
                  *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
                else
#line 343 "typecheck_info.m"
                  if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4245 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
                  else
#line 343 "typecheck_info.m"
                    if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4251 "check_hlds.typecheck_info.c"
                      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
                    else
#line 4255 "check_hlds.typecheck_info.c"
                      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
          }
#line 343 "typecheck_info.m"
        else
#line 343 "typecheck_info.m"
          if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 343 "typecheck_info.m"
            {
#line 343 "typecheck_info.m"
              MR_Word check_hlds__typecheck_info__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));

#line 343 "typecheck_info.m"
              if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4270 "check_hlds.typecheck_info.c"
                *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
              else
#line 343 "typecheck_info.m"
                if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4276 "check_hlds.typecheck_info.c"
                  *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
                else
#line 343 "typecheck_info.m"
                  if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 343 "typecheck_info.m"
                    {
#line 343 "typecheck_info.m"
                      MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));

#line 343 "typecheck_info.m"
                      {
#line 343 "typecheck_info.m"
                        parse_tree__prog_data____Compare____type_ctor_0_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_89_89, check_hlds__typecheck_info__V_5_5);
#line 343 "typecheck_info.m"
                        return;
                      }
#line 343 "typecheck_info.m"
                    }
#line 343 "typecheck_info.m"
                  else
#line 343 "typecheck_info.m"
                    if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4300 "check_hlds.typecheck_info.c"
                      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
                    else
#line 343 "typecheck_info.m"
                      if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4306 "check_hlds.typecheck_info.c"
                        *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
                      else
#line 4310 "check_hlds.typecheck_info.c"
                        *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
            }
#line 343 "typecheck_info.m"
          else
#line 343 "typecheck_info.m"
            if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 343 "typecheck_info.m"
              {
#line 343 "typecheck_info.m"
                MR_String check_hlds__typecheck_info__V_84_84 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));

#line 343 "typecheck_info.m"
                if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4325 "check_hlds.typecheck_info.c"
                  *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
                else
#line 343 "typecheck_info.m"
                  if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4331 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
                  else
#line 343 "typecheck_info.m"
                    if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4337 "check_hlds.typecheck_info.c"
                      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
                    else
#line 343 "typecheck_info.m"
                      if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 343 "typecheck_info.m"
                        {
#line 343 "typecheck_info.m"
                          MR_String check_hlds__typecheck_info__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));

#line 343 "typecheck_info.m"
                          {
#line 343 "typecheck_info.m"
                            mercury__private_builtin__builtin_compare_string_3_p_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_84_84, check_hlds__typecheck_info__V_61_61);
#line 343 "typecheck_info.m"
                            return;
                          }
#line 343 "typecheck_info.m"
                        }
#line 343 "typecheck_info.m"
                      else
#line 343 "typecheck_info.m"
                        if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4361 "check_hlds.typecheck_info.c"
                          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
                        else
#line 4365 "check_hlds.typecheck_info.c"
                          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
              }
#line 343 "typecheck_info.m"
            else
#line 343 "typecheck_info.m"
              if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 343 "typecheck_info.m"
                {
#line 343 "typecheck_info.m"
                  MR_Word check_hlds__typecheck_info__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));

#line 343 "typecheck_info.m"
                  if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4380 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
                  else
#line 343 "typecheck_info.m"
                    if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4386 "check_hlds.typecheck_info.c"
                      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
                    else
#line 343 "typecheck_info.m"
                      if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4392 "check_hlds.typecheck_info.c"
                        *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
                      else
#line 343 "typecheck_info.m"
                        if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4398 "check_hlds.typecheck_info.c"
                          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
                        else
#line 343 "typecheck_info.m"
                          if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 343 "typecheck_info.m"
                            {
#line 343 "typecheck_info.m"
                              MR_Word check_hlds__typecheck_info__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));

#line 343 "typecheck_info.m"
                              {
#line 343 "typecheck_info.m"
                                hlds__hlds_pred____Compare____pred_id_0_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_87_87, check_hlds__typecheck_info__V_75_75);
#line 343 "typecheck_info.m"
                                return;
                              }
#line 343 "typecheck_info.m"
                            }
#line 343 "typecheck_info.m"
                          else
#line 4420 "check_hlds.typecheck_info.c"
                            *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
                }
#line 343 "typecheck_info.m"
              else
#line 343 "typecheck_info.m"
                {
#line 343 "typecheck_info.m"
                  MR_Word check_hlds__typecheck_info__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));

#line 343 "typecheck_info.m"
                  if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4433 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
                  else
#line 343 "typecheck_info.m"
                    if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4439 "check_hlds.typecheck_info.c"
                      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
                    else
#line 343 "typecheck_info.m"
                      if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4445 "check_hlds.typecheck_info.c"
                        *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
                      else
#line 343 "typecheck_info.m"
                        if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4451 "check_hlds.typecheck_info.c"
                          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
                        else
#line 343 "typecheck_info.m"
                          if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4457 "check_hlds.typecheck_info.c"
                            *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
                          else
#line 343 "typecheck_info.m"
                            {
#line 343 "typecheck_info.m"
                              MR_Word check_hlds__typecheck_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));

#line 343 "typecheck_info.m"
                              {
#line 343 "typecheck_info.m"
                                parse_tree__prog_data____Compare____type_ctor_0_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_88_88, check_hlds__typecheck_info__V_47_47);
#line 343 "typecheck_info.m"
                                return;
                              }
#line 343 "typecheck_info.m"
                            }
#line 343 "typecheck_info.m"
                }
#line 343 "typecheck_info.m"
  }
#line 343 "typecheck_info.m"
}

#line 343 "typecheck_info.m"
MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_source_0_0(
#line 343 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 343 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
#line 343 "typecheck_info.m"
{
#line 343 "typecheck_info.m"
  {
#line 343 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 343 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_15 = (MR_Integer) check_hlds__typecheck_info__HeadVar__1_1;
#line 343 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_16 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;

#line 343 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_15 == check_hlds__typecheck_info__CastY_16);
#line 343 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 343 "typecheck_info.m"
      check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 343 "typecheck_info.m"
    else
#line 343 "typecheck_info.m"
      if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 343 "typecheck_info.m"
        {
#line 343 "typecheck_info.m"
          MR_String check_hlds__typecheck_info__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 343 "typecheck_info.m"
          MR_String check_hlds__typecheck_info__V_6_6;

#line 343 "typecheck_info.m"
          check_hlds__typecheck_info__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 343 "typecheck_info.m"
          if (check_hlds__typecheck_info__succeeded)
#line 343 "typecheck_info.m"
            {
#line 343 "typecheck_info.m"
              check_hlds__typecheck_info__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 4525 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = (strcmp(check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__V_6_6) == 0);
#line 343 "typecheck_info.m"
            }
#line 343 "typecheck_info.m"
        }
#line 343 "typecheck_info.m"
      else
#line 343 "typecheck_info.m"
        if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 343 "typecheck_info.m"
          {
#line 343 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 343 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_8_8;

#line 343 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 343 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 343 "typecheck_info.m"
              {
#line 343 "typecheck_info.m"
                check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 4550 "check_hlds.typecheck_info.c"
                {
#line 4552 "check_hlds.typecheck_info.c"
                  return check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_8_8);
                }
#line 343 "typecheck_info.m"
              }
#line 343 "typecheck_info.m"
          }
#line 343 "typecheck_info.m"
        else
#line 343 "typecheck_info.m"
          if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 343 "typecheck_info.m"
            {
#line 343 "typecheck_info.m"
              MR_Word check_hlds__typecheck_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 343 "typecheck_info.m"
              MR_Word check_hlds__typecheck_info__V_4_4;

#line 343 "typecheck_info.m"
              check_hlds__typecheck_info__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 343 "typecheck_info.m"
              if (check_hlds__typecheck_info__succeeded)
#line 343 "typecheck_info.m"
                {
#line 343 "typecheck_info.m"
                  check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 4578 "check_hlds.typecheck_info.c"
                  {
#line 4580 "check_hlds.typecheck_info.c"
                    return check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__typecheck_info__V_3_3, check_hlds__typecheck_info__V_4_4);
                  }
#line 343 "typecheck_info.m"
                }
#line 343 "typecheck_info.m"
            }
#line 343 "typecheck_info.m"
          else
#line 343 "typecheck_info.m"
            if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 343 "typecheck_info.m"
              {
#line 343 "typecheck_info.m"
                MR_String check_hlds__typecheck_info__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 343 "typecheck_info.m"
                MR_String check_hlds__typecheck_info__V_12_12;

#line 343 "typecheck_info.m"
                check_hlds__typecheck_info__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 343 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 343 "typecheck_info.m"
                  {
#line 343 "typecheck_info.m"
                    check_hlds__typecheck_info__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 4606 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__succeeded = (strcmp(check_hlds__typecheck_info__V_11_11, check_hlds__typecheck_info__V_12_12) == 0);
#line 343 "typecheck_info.m"
                  }
#line 343 "typecheck_info.m"
              }
#line 343 "typecheck_info.m"
            else
#line 343 "typecheck_info.m"
              if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 343 "typecheck_info.m"
                {
#line 343 "typecheck_info.m"
                  MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 343 "typecheck_info.m"
                  MR_Word check_hlds__typecheck_info__V_14_14;

#line 343 "typecheck_info.m"
                  check_hlds__typecheck_info__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 343 "typecheck_info.m"
                  if (check_hlds__typecheck_info__succeeded)
#line 343 "typecheck_info.m"
                    {
#line 343 "typecheck_info.m"
                      check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 4631 "check_hlds.typecheck_info.c"
                      {
#line 4633 "check_hlds.typecheck_info.c"
                        return check_hlds__typecheck_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__typecheck_info__V_13_13, check_hlds__typecheck_info__V_14_14);
                      }
#line 343 "typecheck_info.m"
                    }
#line 343 "typecheck_info.m"
                }
#line 343 "typecheck_info.m"
              else
#line 343 "typecheck_info.m"
                {
#line 343 "typecheck_info.m"
                  MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 343 "typecheck_info.m"
                  MR_Word check_hlds__typecheck_info__V_10_10;

#line 343 "typecheck_info.m"
                  check_hlds__typecheck_info__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 343 "typecheck_info.m"
                  if (check_hlds__typecheck_info__succeeded)
#line 343 "typecheck_info.m"
                    {
#line 343 "typecheck_info.m"
                      check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 4657 "check_hlds.typecheck_info.c"
                      {
#line 4659 "check_hlds.typecheck_info.c"
                        return check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__typecheck_info__V_9_9, check_hlds__typecheck_info__V_10_10);
                      }
#line 343 "typecheck_info.m"
                    }
#line 343 "typecheck_info.m"
                }
#line 343 "typecheck_info.m"
    return check_hlds__typecheck_info__succeeded;
#line 343 "typecheck_info.m"
  }
#line 343 "typecheck_info.m"
}

#line 321 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_0_0(
#line 321 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
#line 321 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 321 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
#line 321 "typecheck_info.m"
{
#line 321 "typecheck_info.m"
  {
#line 321 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 321 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_21 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;
#line 321 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_22 = (MR_Integer) check_hlds__typecheck_info__HeadVar__3_3;

#line 321 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_21 == check_hlds__typecheck_info__CastY_22);
#line 321 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 4697 "check_hlds.typecheck_info.c"
      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 0;
#line 321 "typecheck_info.m"
    else
#line 321 "typecheck_info.m"
      {
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 4)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 5)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 2)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 3)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 4)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 5)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_16_16;

#line 321 "typecheck_info.m"
        {
#line 321 "typecheck_info.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[6], &check_hlds__typecheck_info__V_16_16, ((MR_Box) (check_hlds__typecheck_info__V_4_4)), ((MR_Box) (check_hlds__typecheck_info__V_10_10)));
        }
#line 4735 "check_hlds.typecheck_info.c"
        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_16_16 == (MR_Integer) 0);
#line 321 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 321 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 321 "typecheck_info.m"
          *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_16_16;
#line 321 "typecheck_info.m"
        else
#line 321 "typecheck_info.m"
          {
#line 321 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_17_17;

#line 321 "typecheck_info.m"
            {
#line 321 "typecheck_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[7], &check_hlds__typecheck_info__V_17_17, ((MR_Box) (check_hlds__typecheck_info__V_5_5)), ((MR_Box) (check_hlds__typecheck_info__V_11_11)));
            }
#line 4755 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_17_17 == (MR_Integer) 0);
#line 321 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 321 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 321 "typecheck_info.m"
              *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_17_17;
#line 321 "typecheck_info.m"
            else
#line 321 "typecheck_info.m"
              {
#line 321 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_18_18;

#line 321 "typecheck_info.m"
                {
#line 321 "typecheck_info.m"
                  parse_tree__prog_data____Compare____mer_type_0_0(&check_hlds__typecheck_info__V_18_18, check_hlds__typecheck_info__V_6_6, check_hlds__typecheck_info__V_12_12);
                }
#line 4775 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_18_18 == (MR_Integer) 0);
#line 321 "typecheck_info.m"
                check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 321 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 321 "typecheck_info.m"
                  *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_18_18;
#line 321 "typecheck_info.m"
                else
#line 321 "typecheck_info.m"
                  {
#line 321 "typecheck_info.m"
                    MR_Word check_hlds__typecheck_info__V_19_19;

#line 321 "typecheck_info.m"
                    {
#line 321 "typecheck_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[4], &check_hlds__typecheck_info__V_19_19, ((MR_Box) (check_hlds__typecheck_info__V_7_7)), ((MR_Box) (check_hlds__typecheck_info__V_13_13)));
                    }
#line 4795 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_19_19 == (MR_Integer) 0);
#line 321 "typecheck_info.m"
                    check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 321 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 321 "typecheck_info.m"
                      *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_19_19;
#line 321 "typecheck_info.m"
                    else
#line 321 "typecheck_info.m"
                      {
#line 321 "typecheck_info.m"
                        MR_Word check_hlds__typecheck_info__V_20_20;

#line 321 "typecheck_info.m"
                        {
#line 321 "typecheck_info.m"
                          hlds__hlds_data____Compare____hlds_constraints_0_0(&check_hlds__typecheck_info__V_20_20, check_hlds__typecheck_info__V_8_8, check_hlds__typecheck_info__V_14_14);
                        }
#line 4815 "check_hlds.typecheck_info.c"
                        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_20_20 == (MR_Integer) 0);
#line 321 "typecheck_info.m"
                        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 321 "typecheck_info.m"
                        if (check_hlds__typecheck_info__succeeded)
#line 321 "typecheck_info.m"
                          *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_20_20;
#line 321 "typecheck_info.m"
                        else
#line 321 "typecheck_info.m"
                          {
#line 321 "typecheck_info.m"
                            check_hlds__typecheck_info____Compare____cons_type_info_source_0_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_9_9, check_hlds__typecheck_info__V_15_15);
#line 321 "typecheck_info.m"
                            return;
                          }
#line 321 "typecheck_info.m"
                      }
#line 321 "typecheck_info.m"
                  }
#line 321 "typecheck_info.m"
              }
#line 321 "typecheck_info.m"
          }
#line 321 "typecheck_info.m"
      }
#line 321 "typecheck_info.m"
  }
#line 321 "typecheck_info.m"
}

#line 321 "typecheck_info.m"
MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_0_0(
#line 321 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 321 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
#line 321 "typecheck_info.m"
{
#line 321 "typecheck_info.m"
  {
#line 321 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 321 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_15 = (MR_Integer) check_hlds__typecheck_info__HeadVar__1_1;
#line 321 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_16 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;

#line 321 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_15 == check_hlds__typecheck_info__CastY_16);
#line 321 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 321 "typecheck_info.m"
      check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 321 "typecheck_info.m"
    else
#line 321 "typecheck_info.m"
      {
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_18_18;
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_20_20;
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 2)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 3)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 4)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 5)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 4)));
#line 321 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 5)));

#line 4904 "check_hlds.typecheck_info.c"
        {
#line 4906 "check_hlds.typecheck_info.c"
          check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[6], ((MR_Box) (check_hlds__typecheck_info__V_3_3)), ((MR_Box) (check_hlds__typecheck_info__V_9_9)));
        }
#line 321 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 321 "typecheck_info.m"
          {
#line 4913 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__TypeInfo_18_18 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[7];
#line 4915 "check_hlds.typecheck_info.c"
            {
#line 4917 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_18_18, ((MR_Box) (check_hlds__typecheck_info__V_4_4)), ((MR_Box) (check_hlds__typecheck_info__V_10_10)));
            }
#line 321 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 321 "typecheck_info.m"
              {
#line 4924 "check_hlds.typecheck_info.c"
                {
#line 4926 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__V_11_11);
                }
#line 321 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 321 "typecheck_info.m"
                  {
#line 4933 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__TypeInfo_20_20 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[4];
#line 4935 "check_hlds.typecheck_info.c"
                    {
#line 4937 "check_hlds.typecheck_info.c"
                      check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_20_20, ((MR_Box) (check_hlds__typecheck_info__V_6_6)), ((MR_Box) (check_hlds__typecheck_info__V_12_12)));
                    }
#line 321 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 321 "typecheck_info.m"
                      {
#line 4944 "check_hlds.typecheck_info.c"
                        {
#line 4946 "check_hlds.typecheck_info.c"
                          check_hlds__typecheck_info__succeeded = hlds__hlds_data____Unify____hlds_constraints_0_0(check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_13_13);
                        }
#line 321 "typecheck_info.m"
                        if (check_hlds__typecheck_info__succeeded)
#line 4951 "check_hlds.typecheck_info.c"
                          {
#line 4953 "check_hlds.typecheck_info.c"
                            return check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____cons_type_info_source_0_0(check_hlds__typecheck_info__V_8_8, check_hlds__typecheck_info__V_14_14);
                          }
#line 321 "typecheck_info.m"
                      }
#line 321 "typecheck_info.m"
                  }
#line 321 "typecheck_info.m"
              }
#line 321 "typecheck_info.m"
          }
#line 321 "typecheck_info.m"
      }
#line 321 "typecheck_info.m"
    return check_hlds__typecheck_info__succeeded;
#line 321 "typecheck_info.m"
  }
#line 321 "typecheck_info.m"
}

#line 291 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info____Compare____args_type_assign_set_0_0(
#line 291 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
#line 291 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 291 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
#line 291 "typecheck_info.m"
{
#line 291 "typecheck_info.m"
  {
#line 291 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 291 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Cast_HeadVar1_4 = check_hlds__typecheck_info__HeadVar__2_2;
#line 291 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Cast_HeadVar2_5 = check_hlds__typecheck_info__HeadVar__3_3;

#line 291 "typecheck_info.m"
    {
#line 291 "typecheck_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[5], check_hlds__typecheck_info__HeadVar__1_1, ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar2_5)));
#line 291 "typecheck_info.m"
      return;
    }
#line 291 "typecheck_info.m"
  }
#line 291 "typecheck_info.m"
}

#line 291 "typecheck_info.m"
MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____args_type_assign_set_0_0(
#line 291 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 291 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
#line 291 "typecheck_info.m"
{
#line 291 "typecheck_info.m"
  {
#line 291 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 291 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Cast_HeadVar1_3 = check_hlds__typecheck_info__HeadVar__1_1;
#line 291 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Cast_HeadVar2_4 = check_hlds__typecheck_info__HeadVar__2_2;

#line 291 "typecheck_info.m"
    {
#line 291 "typecheck_info.m"
      return check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[5], ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar2_4)));
    }
#line 291 "typecheck_info.m"
    return check_hlds__typecheck_info__succeeded;
#line 291 "typecheck_info.m"
  }
#line 291 "typecheck_info.m"
}

#line 293 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info____Compare____args_type_assign_0_0(
#line 293 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
#line 293 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 293 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
#line 293 "typecheck_info.m"
{
#line 293 "typecheck_info.m"
  {
#line 293 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 293 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_12 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;
#line 293 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_13 = (MR_Integer) check_hlds__typecheck_info__HeadVar__3_3;

#line 293 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_12 == check_hlds__typecheck_info__CastY_13);
#line 293 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 5059 "check_hlds.typecheck_info.c"
      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 0;
#line 293 "typecheck_info.m"
    else
#line 293 "typecheck_info.m"
      {
#line 293 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 293 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 293 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
#line 293 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));
#line 293 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));
#line 293 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 2)));
#line 293 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_10_10;

#line 293 "typecheck_info.m"
        {
#line 293 "typecheck_info.m"
          check_hlds__typecheck_info____Compare____type_assign_0_0(&check_hlds__typecheck_info__V_10_10, check_hlds__typecheck_info__V_4_4, check_hlds__typecheck_info__V_7_7);
        }
#line 5085 "check_hlds.typecheck_info.c"
        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_10_10 == (MR_Integer) 0);
#line 293 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 293 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 293 "typecheck_info.m"
          *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_10_10;
#line 293 "typecheck_info.m"
        else
#line 293 "typecheck_info.m"
          {
#line 293 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_11_11;

#line 293 "typecheck_info.m"
            {
#line 293 "typecheck_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[4], &check_hlds__typecheck_info__V_11_11, ((MR_Box) (check_hlds__typecheck_info__V_5_5)), ((MR_Box) (check_hlds__typecheck_info__V_8_8)));
            }
#line 5105 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_11_11 == (MR_Integer) 0);
#line 293 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 293 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 293 "typecheck_info.m"
              *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_11_11;
#line 293 "typecheck_info.m"
            else
#line 293 "typecheck_info.m"
              {
#line 293 "typecheck_info.m"
                hlds__hlds_data____Compare____hlds_constraints_0_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_6_6, check_hlds__typecheck_info__V_9_9);
#line 293 "typecheck_info.m"
                return;
              }
#line 293 "typecheck_info.m"
          }
#line 293 "typecheck_info.m"
      }
#line 293 "typecheck_info.m"
  }
#line 293 "typecheck_info.m"
}

#line 293 "typecheck_info.m"
MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____args_type_assign_0_0(
#line 293 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 293 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
#line 293 "typecheck_info.m"
{
#line 293 "typecheck_info.m"
  {
#line 293 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 293 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastX_9 = (MR_Integer) check_hlds__typecheck_info__HeadVar__1_1;
#line 293 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__CastY_10 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;

#line 293 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_9 == check_hlds__typecheck_info__CastY_10);
#line 293 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 293 "typecheck_info.m"
      check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 293 "typecheck_info.m"
    else
#line 293 "typecheck_info.m"
      {
#line 293 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_11_11;
#line 293 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 293 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 293 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 2)));
#line 293 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 293 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 293 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));

#line 5174 "check_hlds.typecheck_info.c"
        {
#line 5176 "check_hlds.typecheck_info.c"
          check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____type_assign_0_0(check_hlds__typecheck_info__V_3_3, check_hlds__typecheck_info__V_6_6);
        }
#line 293 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 293 "typecheck_info.m"
          {
#line 5183 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__TypeInfo_11_11 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[4];
#line 5185 "check_hlds.typecheck_info.c"
            {
#line 5187 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_11_11, ((MR_Box) (check_hlds__typecheck_info__V_4_4)), ((MR_Box) (check_hlds__typecheck_info__V_7_7)));
            }
#line 293 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 5192 "check_hlds.typecheck_info.c"
              {
#line 5194 "check_hlds.typecheck_info.c"
                return check_hlds__typecheck_info__succeeded = hlds__hlds_data____Unify____hlds_constraints_0_0(check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__V_8_8);
              }
#line 293 "typecheck_info.m"
          }
#line 293 "typecheck_info.m"
      }
#line 293 "typecheck_info.m"
    return check_hlds__typecheck_info__succeeded;
#line 293 "typecheck_info.m"
  }
#line 293 "typecheck_info.m"
}

#line 1017 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__do_type_checkpoint_4_p_0(
#line 1017 "typecheck_info.m"
  MR_String check_hlds__typecheck_info__Msg_5,
#line 1017 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_6)
#line 1017 "typecheck_info.m"
{
#line 1020 "typecheck_info.m"
  {
#line 1020 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 1020 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__ModuleInfo_8;
#line 1020 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Globals_9;
#line 1020 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Statistics_10;
#line 1020 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeAssignSet_11;
#line 1020 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__VarSet_16;
#line 1024 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_33_33;
#line 1024 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_34_34;
#line 1024 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_35_35;
#line 1024 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_36_36;
#line 1024 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_37_37;
#line 1024 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_38_38;
#line 1024 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_39_39;
#line 1029 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_40_40;
#line 1029 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_41_41;
#line 1029 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_42_42;
#line 1029 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_43_43;
#line 1029 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_44_44;
#line 1029 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_45_45;
#line 1029 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_46_46;
#line 5259 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__TypeAssign_12;
#line 1032 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13;

#line 1021 "typecheck_info.m"
    {
#line 1021 "typecheck_info.m"
      mercury__io__write_string_3_p_0((MR_String) "At ");
    }
#line 1022 "typecheck_info.m"
    {
#line 1022 "typecheck_info.m"
      mercury__io__write_string_3_p_0(check_hlds__typecheck_info__Msg_5);
    }
#line 1023 "typecheck_info.m"
    {
#line 1023 "typecheck_info.m"
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
#line 1024 "typecheck_info.m"
    check_hlds__typecheck_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 0)));
#line 1024 "typecheck_info.m"
    check_hlds__typecheck_info__ModuleInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 1)));
#line 1024 "typecheck_info.m"
    check_hlds__typecheck_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 2)));
#line 1024 "typecheck_info.m"
    check_hlds__typecheck_info__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 3)));
#line 1024 "typecheck_info.m"
    check_hlds__typecheck_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 4)));
#line 1024 "typecheck_info.m"
    check_hlds__typecheck_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 5)));
#line 1024 "typecheck_info.m"
    check_hlds__typecheck_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 6)));
#line 1024 "typecheck_info.m"
    check_hlds__typecheck_info__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 7)));
#line 1025 "typecheck_info.m"
    {
#line 1025 "typecheck_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck_info__ModuleInfo_8, &check_hlds__typecheck_info__Globals_9);
    }
#line 1026 "typecheck_info.m"
    {
#line 1026 "typecheck_info.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__typecheck_info__Globals_9, (MR_Integer) 55, &check_hlds__typecheck_info__Statistics_10);
    }
#line 1027 "typecheck_info.m"
    {
#line 1027 "typecheck_info.m"
      libs__file_util__maybe_report_stats_3_p_0(check_hlds__typecheck_info__Statistics_10);
    }
#line 1028 "typecheck_info.m"
    {
#line 1028 "typecheck_info.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1029 "typecheck_info.m"
    check_hlds__typecheck_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 0)));
#line 1029 "typecheck_info.m"
    check_hlds__typecheck_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 1)));
#line 1029 "typecheck_info.m"
    check_hlds__typecheck_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 2)));
#line 1029 "typecheck_info.m"
    check_hlds__typecheck_info__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 3)));
#line 1029 "typecheck_info.m"
    check_hlds__typecheck_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 4)));
#line 1029 "typecheck_info.m"
    check_hlds__typecheck_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 5)));
#line 1029 "typecheck_info.m"
    check_hlds__typecheck_info__TypeAssignSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 6)));
#line 1029 "typecheck_info.m"
    check_hlds__typecheck_info__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 7)));
#line 1041 "typecheck_info.m"
    {
#line 1041 "typecheck_info.m"
      check_hlds__typecheck_info__typecheck_info_get_varset_2_p_0(check_hlds__typecheck_info__Info_6, &check_hlds__typecheck_info__VarSet_16);
    }
#line 1031 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__Statistics_10 == (MR_Integer) 1);
#line 1031 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 1031 "typecheck_info.m"
      {
#line 1032 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck_info__TypeAssignSet_11)) == (MR_mktag((MR_Integer) 1)));
#line 1032 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 1032 "typecheck_info.m"
          {
#line 1032 "typecheck_info.m"
            check_hlds__typecheck_info__TypeAssign_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__TypeAssignSet_11, (MR_Integer) 0)));
#line 1032 "typecheck_info.m"
            check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__TypeAssignSet_11, (MR_Integer) 1)));
#line 1032 "typecheck_info.m"
          }
#line 1031 "typecheck_info.m"
      }
#line 5356 "check_hlds.typecheck_info.c"
    if (check_hlds__typecheck_info__succeeded)
#line 5358 "check_hlds.typecheck_info.c"
      {
#line 5360 "check_hlds.typecheck_info.c"
        MR_Word check_hlds__typecheck_info__VarTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_12, (MR_Integer) 0)));
#line 5362 "check_hlds.typecheck_info.c"
        MR_Word check_hlds__typecheck_info__TypeBindings_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_12, (MR_Integer) 3)));
#line 5364 "check_hlds.typecheck_info.c"
        MR_Integer check_hlds__typecheck_info__Count_61;
#line 5366 "check_hlds.typecheck_info.c"
        MR_Integer check_hlds__typecheck_info__Count_80;
#line 680 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_12, (MR_Integer) 1)));
#line 680 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_12, (MR_Integer) 2)));
#line 680 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_12, (MR_Integer) 4)));
#line 680 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_12, (MR_Integer) 5)));
#line 680 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_12, (MR_Integer) 6)));

#line 1058 "typecheck_info.m"
        {
#line 1058 "typecheck_info.m"
          parse_tree__prog_data__vartypes_count_2_p_0(check_hlds__typecheck_info__VarTypes_14, &check_hlds__typecheck_info__Count_61);
        }
#line 1059 "typecheck_info.m"
        {
#line 1059 "typecheck_info.m"
          mercury__io__write_string_3_p_0((MR_String) "\t\140var -> type\' map");
        }
#line 1060 "typecheck_info.m"
        {
#line 1060 "typecheck_info.m"
          mercury__io__write_string_3_p_0((MR_String) ": count = ");
        }
#line 1061 "typecheck_info.m"
        {
#line 1061 "typecheck_info.m"
          mercury__io__write_int_3_p_0(check_hlds__typecheck_info__Count_61);
        }
#line 1062 "typecheck_info.m"
        {
#line 1062 "typecheck_info.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 1048 "typecheck_info.m"
        {
#line 1048 "typecheck_info.m"
          mercury__map__count_2_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__typecheck_info__TypeBindings_15, &check_hlds__typecheck_info__Count_80);
        }
#line 1049 "typecheck_info.m"
        {
#line 1049 "typecheck_info.m"
          mercury__io__write_string_3_p_0((MR_String) "\t\140type var -> type\' map");
        }
#line 1050 "typecheck_info.m"
        {
#line 1050 "typecheck_info.m"
          mercury__io__write_string_3_p_0((MR_String) ": count = ");
        }
#line 1051 "typecheck_info.m"
        {
#line 1051 "typecheck_info.m"
          mercury__io__write_int_3_p_0(check_hlds__typecheck_info__Count_80);
        }
#line 1052 "typecheck_info.m"
        {
#line 1052 "typecheck_info.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 1042 "typecheck_info.m"
        {
#line 1042 "typecheck_info.m"
          check_hlds__typecheck_info__write_type_assign_set_4_p_0(check_hlds__typecheck_info__TypeAssignSet_11, check_hlds__typecheck_info__VarSet_16);
#line 1042 "typecheck_info.m"
          return;
        }
#line 5436 "check_hlds.typecheck_info.c"
      }
#line 5438 "check_hlds.typecheck_info.c"
    else
#line 1042 "typecheck_info.m"
      {
#line 1042 "typecheck_info.m"
        check_hlds__typecheck_info__write_type_assign_set_4_p_0(check_hlds__typecheck_info__TypeAssignSet_11, check_hlds__typecheck_info__VarSet_16);
#line 1042 "typecheck_info.m"
        return;
      }
#line 1020 "typecheck_info.m"
  }
#line 1017 "typecheck_info.m"
}

#line 966 "typecheck_info.m"
static MR_Word MR_CALL 
check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_f_0(
#line 966 "typecheck_info.m"
  MR_String check_hlds__typecheck_info__Operator_1,
#line 966 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 966 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_3,
#line 966 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeVarSet_4,
#line 966 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__FoundOne_5)
#line 966 "typecheck_info.m"
{
#line 969 "typecheck_info.m"
  {
#line 969 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 969 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadVar__6_6;

#line 969 "typecheck_info.m"
    if ((check_hlds__typecheck_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 969 "typecheck_info.m"
      check_hlds__typecheck_info__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 969 "typecheck_info.m"
    else
#line 971 "typecheck_info.m"
      {
#line 971 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__Constraint_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 971 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__Constraints_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 971 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ThisPieces_17;
#line 971 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TailPieceLists_18;
#line 971 "typecheck_info.m"
        MR_String check_hlds__typecheck_info__Prefix_19;
#line 971 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__BoundConstraint_20;
#line 971 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ProgConstraint_21;
#line 971 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_22_22;
#line 971 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_25_25;
#line 971 "typecheck_info.m"
        MR_String check_hlds__typecheck_info__V_26_26;
#line 971 "typecheck_info.m"
        MR_String check_hlds__typecheck_info__V_27_27;

#line 975 "typecheck_info.m"
        if ((check_hlds__typecheck_info__FoundOne_5 == (MR_Integer) 0))
#line 973 "typecheck_info.m"
          {
#line 974 "typecheck_info.m"
            {
#line 974 "typecheck_info.m"
              check_hlds__typecheck_info__Prefix_19 = mercury__string__f_43_43_2_f_0(check_hlds__typecheck_info__Operator_1, (MR_String) " ");
            }
#line 973 "typecheck_info.m"
          }
#line 975 "typecheck_info.m"
        else
#line 977 "typecheck_info.m"
          check_hlds__typecheck_info__Prefix_19 = (MR_String) "   ";
#line 979 "typecheck_info.m"
        {
#line 979 "typecheck_info.m"
          check_hlds__type_util__apply_rec_subst_to_constraint_3_p_0(check_hlds__typecheck_info__TypeBindings_3, check_hlds__typecheck_info__Constraint_12, &check_hlds__typecheck_info__BoundConstraint_20);
        }
#line 980 "typecheck_info.m"
        {
#line 980 "typecheck_info.m"
          hlds__hlds_data__retrieve_prog_constraint_2_p_0(check_hlds__typecheck_info__BoundConstraint_20, &check_hlds__typecheck_info__ProgConstraint_21);
        }
#line 981 "typecheck_info.m"
        {
#line 981 "typecheck_info.m"
          check_hlds__typecheck_info__V_27_27 = parse_tree__mercury_to_mercury__mercury_constraint_to_string_2_f_0(check_hlds__typecheck_info__TypeVarSet_4, check_hlds__typecheck_info__ProgConstraint_21);
        }
#line 981 "typecheck_info.m"
        {
#line 981 "typecheck_info.m"
          check_hlds__typecheck_info__V_26_26 = mercury__string__f_43_43_2_f_0(check_hlds__typecheck_info__Prefix_19, check_hlds__typecheck_info__V_27_27);
        }
#line 982 "typecheck_info.m"
        {
#line 982 "typecheck_info.m"
          check_hlds__typecheck_info__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 982 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_25_25, 0) = ((MR_Box) (check_hlds__typecheck_info__V_26_26));
#line 982 "typecheck_info.m"
        }
#line 981 "typecheck_info.m"
        {
#line 981 "typecheck_info.m"
          check_hlds__typecheck_info__ThisPieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 981 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__ThisPieces_17, 0) = ((MR_Box) (check_hlds__typecheck_info__V_25_25));
#line 981 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__ThisPieces_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 981 "typecheck_info.m"
        }
#line 971 "typecheck_info.m"
        {
#line 971 "typecheck_info.m"
          check_hlds__typecheck_info__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 971 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_22_22, 0) = ((MR_Box) (check_hlds__typecheck_info__ThisPieces_17));
#line 971 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 971 "typecheck_info.m"
        }
#line 983 "typecheck_info.m"
        {
#line 983 "typecheck_info.m"
          check_hlds__typecheck_info__TailPieceLists_18 = check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_f_0(check_hlds__typecheck_info__Operator_1, check_hlds__typecheck_info__Constraints_13, check_hlds__typecheck_info__TypeBindings_3, check_hlds__typecheck_info__TypeVarSet_4, (MR_Integer) 1);
        }
#line 971 "typecheck_info.m"
        {
#line 971 "typecheck_info.m"
          check_hlds__typecheck_info__HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[3], check_hlds__typecheck_info__V_22_22, check_hlds__typecheck_info__TailPieceLists_18);
        }
#line 971 "typecheck_info.m"
      }
#line 969 "typecheck_info.m"
    return check_hlds__typecheck_info__HeadVar__6_6;
#line 969 "typecheck_info.m"
  }
#line 966 "typecheck_info.m"
}

#line 947 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__write_type_assign_constraints_7_p_0(
#line 947 "typecheck_info.m"
  MR_String check_hlds__typecheck_info__Operator_1,
#line 947 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 947 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_3,
#line 947 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeVarSet_4,
#line 947 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__FoundOne_5)
#line 947 "typecheck_info.m"
{
#line 950 "typecheck_info.m"
  while (MR_TRUE)
#line 950 "typecheck_info.m"
    {
#line 950 "typecheck_info.m"
      /* tailcall optimized into a loop */
#line 950 "typecheck_info.m"
      {
#line 950 "typecheck_info.m"
        MR_bool check_hlds__typecheck_info__succeeded;

#line 950 "typecheck_info.m"
        if ((check_hlds__typecheck_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 950 "typecheck_info.m"
          {
#line 950 "typecheck_info.m"
          }
#line 950 "typecheck_info.m"
        else
#line 952 "typecheck_info.m"
          {
#line 952 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Constraint_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 952 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Constraints_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 952 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__BoundConstraint_22;
#line 952 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__ProgConstraint_23;

#line 956 "typecheck_info.m"
            if ((check_hlds__typecheck_info__FoundOne_5 == (MR_Integer) 0))
#line 954 "typecheck_info.m"
              {
#line 954 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_28_28;
#line 954 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_31_31;

#line 955 "typecheck_info.m"
                {
#line 955 "typecheck_info.m"
                  check_hlds__typecheck_info__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 955 "typecheck_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_31_31, 0) = ((MR_Box) (check_hlds__typecheck_info__Operator_1));
#line 955 "typecheck_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_info_scalar_common_1[22])));
#line 955 "typecheck_info.m"
                }
#line 955 "typecheck_info.m"
                {
#line 955 "typecheck_info.m"
                  check_hlds__typecheck_info__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 955 "typecheck_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_28_28, 0) = ((MR_Box) ((MR_String) "\n\t"));
#line 955 "typecheck_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_28_28, 1) = ((MR_Box) (check_hlds__typecheck_info__V_31_31));
#line 955 "typecheck_info.m"
                }
#line 955 "typecheck_info.m"
                {
#line 955 "typecheck_info.m"
                  mercury__io__write_strings_3_p_0(check_hlds__typecheck_info__V_28_28);
                }
#line 954 "typecheck_info.m"
              }
#line 956 "typecheck_info.m"
            else
#line 957 "typecheck_info.m"
              {
#line 958 "typecheck_info.m"
                {
#line 958 "typecheck_info.m"
                  mercury__io__write_string_3_p_0((MR_String) ",\n\t   ");
                }
#line 957 "typecheck_info.m"
              }
#line 960 "typecheck_info.m"
            {
#line 960 "typecheck_info.m"
              check_hlds__type_util__apply_rec_subst_to_constraint_3_p_0(check_hlds__typecheck_info__TypeBindings_3, check_hlds__typecheck_info__Constraint_16, &check_hlds__typecheck_info__BoundConstraint_22);
            }
#line 961 "typecheck_info.m"
            {
#line 961 "typecheck_info.m"
              hlds__hlds_data__retrieve_prog_constraint_2_p_0(check_hlds__typecheck_info__BoundConstraint_22, &check_hlds__typecheck_info__ProgConstraint_23);
            }
#line 962 "typecheck_info.m"
            {
#line 962 "typecheck_info.m"
              parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(check_hlds__typecheck_info__TypeVarSet_4, (MR_Integer) 1, check_hlds__typecheck_info__ProgConstraint_23);
            }
#line 963 "typecheck_info.m"
            /* direct tailcall eliminated */
#line 963 "typecheck_info.m"
            {
#line 963 "typecheck_info.m"
              MR_Word check_hlds__typecheck_info__HeadVar__2__tmp_copy_2 = check_hlds__typecheck_info__Constraints_17;

#line 963 "typecheck_info.m"
              check_hlds__typecheck_info__FoundOne_5 = (MR_Integer) 1;
#line 963 "typecheck_info.m"
              check_hlds__typecheck_info__HeadVar__2_2 = check_hlds__typecheck_info__HeadVar__2__tmp_copy_2;
#line 963 "typecheck_info.m"
            }
#line 963 "typecheck_info.m"
            continue;
#line 952 "typecheck_info.m"
          }
#line 950 "typecheck_info.m"
      }
#line 950 "typecheck_info.m"
      break;
#line 950 "typecheck_info.m"
    }
#line 947 "typecheck_info.m"
}

#line 933 "typecheck_info.m"
static MR_Word MR_CALL 
check_hlds__typecheck_info__type_assign_hlds_constraints_to_pieces_3_f_0(
#line 933 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Constraints_5,
#line 933 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_6,
#line 933 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeVarSet_7)
#line 933 "typecheck_info.m"
{
#line 937 "typecheck_info.m"
  {
#line 937 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 937 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadVar__4_4;
#line 937 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Pieces1_8;
#line 937 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Pieces2_9;
#line 937 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__ConstraintsToProve_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Constraints_5, (MR_Integer) 0)));
#line 937 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__AssumedConstraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Constraints_5, (MR_Integer) 1)));
#line 937 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__PiecesList1_14;
#line 937 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__PiecesList2_15;
#line 938 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Constraints_5, (MR_Integer) 2)));
#line 938 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Constraints_5, (MR_Integer) 3)));

#line 940 "typecheck_info.m"
    {
#line 940 "typecheck_info.m"
      check_hlds__typecheck_info__PiecesList1_14 = check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_f_0((MR_String) "&", check_hlds__typecheck_info__AssumedConstraints_11, check_hlds__typecheck_info__TypeBindings_6, check_hlds__typecheck_info__TypeVarSet_7, (MR_Integer) 0);
    }
#line 942 "typecheck_info.m"
    {
#line 942 "typecheck_info.m"
      check_hlds__typecheck_info__PiecesList2_15 = check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_f_0((MR_String) "<=", check_hlds__typecheck_info__ConstraintsToProve_10, check_hlds__typecheck_info__TypeBindings_6, check_hlds__typecheck_info__TypeVarSet_7, (MR_Integer) 0);
    }
#line 944 "typecheck_info.m"
    {
#line 944 "typecheck_info.m"
      check_hlds__typecheck_info__Pieces1_8 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(check_hlds__typecheck_info__PiecesList1_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 945 "typecheck_info.m"
    {
#line 945 "typecheck_info.m"
      check_hlds__typecheck_info__Pieces2_9 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(check_hlds__typecheck_info__PiecesList2_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 937 "typecheck_info.m"
    {
#line 937 "typecheck_info.m"
      check_hlds__typecheck_info__HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__typecheck_info__Pieces1_8, check_hlds__typecheck_info__Pieces2_9);
    }
#line 937 "typecheck_info.m"
    return check_hlds__typecheck_info__HeadVar__4_4;
#line 937 "typecheck_info.m"
  }
#line 933 "typecheck_info.m"
}

#line 889 "typecheck_info.m"
static MR_Word MR_CALL 
check_hlds__typecheck_info__type_assign_types_to_pieces_6_f_0(
#line 889 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 889 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarSet_2,
#line 889 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarTypes_3,
#line 889 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_4,
#line 889 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeVarSet_5,
#line 889 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__FoundOne_6)
#line 889 "typecheck_info.m"
{
#line 892 "typecheck_info.m"
  while (MR_TRUE)
#line 892 "typecheck_info.m"
    {
#line 892 "typecheck_info.m"
      /* tailcall optimized into a loop */
#line 892 "typecheck_info.m"
      {
#line 892 "typecheck_info.m"
        MR_bool check_hlds__typecheck_info__succeeded;
#line 892 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__Pieces_7;

#line 892 "typecheck_info.m"
        if ((check_hlds__typecheck_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 896 "typecheck_info.m"
          if ((check_hlds__typecheck_info__FoundOne_6 == (MR_Integer) 0))
#line 894 "typecheck_info.m"
            {
#line 895 "typecheck_info.m"
              check_hlds__typecheck_info__Pieces_7 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_info_scalar_common_1[20]);
#line 894 "typecheck_info.m"
            }
#line 896 "typecheck_info.m"
          else
#line 898 "typecheck_info.m"
            check_hlds__typecheck_info__Pieces_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 892 "typecheck_info.m"
        else
#line 901 "typecheck_info.m"
          {
#line 901 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 901 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Vars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 916 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Type_25;

#line 902 "typecheck_info.m"
            {
#line 902 "typecheck_info.m"
              check_hlds__typecheck_info__succeeded = parse_tree__prog_data__search_var_type_3_p_0(check_hlds__typecheck_info__VarTypes_3, check_hlds__typecheck_info__Var_17, &check_hlds__typecheck_info__Type_25);
            }
#line 916 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 909 "typecheck_info.m"
              {
#line 909 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__TypeCtorInfo_44_44;
#line 909 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__PrefixPieces_26;
#line 909 "typecheck_info.m"
                MR_String check_hlds__typecheck_info__VarStr_27;
#line 909 "typecheck_info.m"
                MR_String check_hlds__typecheck_info__TypeStr_28;
#line 909 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__AssignPieces_29;
#line 909 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__TailPieces_30;
#line 909 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_34_34;
#line 909 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_35_35;
#line 909 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_38_38;
#line 909 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_39_39;
#line 909 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_42_42;
#line 909 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__Type1_49;
#line 909 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__Type_50;

#line 906 "typecheck_info.m"
                if ((check_hlds__typecheck_info__FoundOne_6 == (MR_Integer) 0))
#line 908 "typecheck_info.m"
                  check_hlds__typecheck_info__PrefixPieces_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 906 "typecheck_info.m"
                else
#line 904 "typecheck_info.m"
                  {
#line 905 "typecheck_info.m"
                    check_hlds__typecheck_info__PrefixPieces_26 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_info_scalar_common_1[14]);
#line 904 "typecheck_info.m"
                  }
#line 910 "typecheck_info.m"
                {
#line 910 "typecheck_info.m"
                  check_hlds__typecheck_info__VarStr_27 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__typecheck_info__VarSet_2, (MR_Integer) 1, check_hlds__typecheck_info__Var_17);
                }
#line 1000 "typecheck_info.m"
                {
#line 1000 "typecheck_info.m"
                  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(check_hlds__typecheck_info__TypeBindings_4, check_hlds__typecheck_info__Type_25, &check_hlds__typecheck_info__Type1_49);
                }
#line 1001 "typecheck_info.m"
                {
#line 1001 "typecheck_info.m"
                  parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(check_hlds__typecheck_info__Type1_49, &check_hlds__typecheck_info__Type_50);
                }
#line 1002 "typecheck_info.m"
                {
#line 1002 "typecheck_info.m"
                  check_hlds__typecheck_info__TypeStr_28 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(check_hlds__typecheck_info__TypeVarSet_5, (MR_Integer) 0, check_hlds__typecheck_info__Type_50);
                }
#line 912 "typecheck_info.m"
                {
#line 912 "typecheck_info.m"
                  check_hlds__typecheck_info__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 912 "typecheck_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_34_34, 0) = ((MR_Box) (check_hlds__typecheck_info__VarStr_27));
#line 912 "typecheck_info.m"
                }
#line 912 "typecheck_info.m"
                {
#line 912 "typecheck_info.m"
                  check_hlds__typecheck_info__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 912 "typecheck_info.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 912 "typecheck_info.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__V_39_39, 1) = ((MR_Box) (check_hlds__typecheck_info__TypeStr_28));
#line 912 "typecheck_info.m"
                }
#line 912 "typecheck_info.m"
                {
#line 912 "typecheck_info.m"
                  check_hlds__typecheck_info__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 912 "typecheck_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_38_38, 0) = ((MR_Box) (check_hlds__typecheck_info__V_39_39));
#line 912 "typecheck_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 912 "typecheck_info.m"
                }
#line 912 "typecheck_info.m"
                {
#line 912 "typecheck_info.m"
                  check_hlds__typecheck_info__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 912 "typecheck_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_35_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_info_scalar_common_1[21])));
#line 912 "typecheck_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_35_35, 1) = ((MR_Box) (check_hlds__typecheck_info__V_38_38));
#line 912 "typecheck_info.m"
                }
#line 912 "typecheck_info.m"
                {
#line 912 "typecheck_info.m"
                  check_hlds__typecheck_info__AssignPieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 912 "typecheck_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__AssignPieces_29, 0) = ((MR_Box) (check_hlds__typecheck_info__V_34_34));
#line 912 "typecheck_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__AssignPieces_29, 1) = ((MR_Box) (check_hlds__typecheck_info__V_35_35));
#line 912 "typecheck_info.m"
                }
#line 913 "typecheck_info.m"
                {
#line 913 "typecheck_info.m"
                  check_hlds__typecheck_info__TailPieces_30 = check_hlds__typecheck_info__type_assign_types_to_pieces_6_f_0(check_hlds__typecheck_info__Vars_18, check_hlds__typecheck_info__VarSet_2, check_hlds__typecheck_info__VarTypes_3, check_hlds__typecheck_info__TypeBindings_4, check_hlds__typecheck_info__TypeVarSet_5, (MR_Integer) 1);
                }
#line 5962 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 915 "typecheck_info.m"
                {
#line 915 "typecheck_info.m"
                  check_hlds__typecheck_info__V_42_42 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck_info__TypeCtorInfo_44_44, check_hlds__typecheck_info__AssignPieces_29, check_hlds__typecheck_info__TailPieces_30);
                }
#line 915 "typecheck_info.m"
                {
#line 915 "typecheck_info.m"
                  check_hlds__typecheck_info__Pieces_7 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck_info__TypeCtorInfo_44_44, check_hlds__typecheck_info__PrefixPieces_26, check_hlds__typecheck_info__V_42_42);
                }
#line 909 "typecheck_info.m"
              }
#line 916 "typecheck_info.m"
            else
#line 917 "typecheck_info.m"
              {
#line 917 "typecheck_info.m"
                /* direct tailcall eliminated */
#line 917 "typecheck_info.m"
                {
#line 917 "typecheck_info.m"
                  MR_Word check_hlds__typecheck_info__HeadVar__1__tmp_copy_1 = check_hlds__typecheck_info__Vars_18;

#line 917 "typecheck_info.m"
                  check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__HeadVar__1__tmp_copy_1;
#line 917 "typecheck_info.m"
                }
#line 917 "typecheck_info.m"
                continue;
#line 917 "typecheck_info.m"
              }
#line 901 "typecheck_info.m"
          }
#line 892 "typecheck_info.m"
        return check_hlds__typecheck_info__Pieces_7;
#line 892 "typecheck_info.m"
      }
#line 892 "typecheck_info.m"
      break;
#line 892 "typecheck_info.m"
    }
#line 889 "typecheck_info.m"
}

#line 860 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__write_type_assign_types_8_p_0(
#line 860 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 860 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarSet_2,
#line 860 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarTypes_3,
#line 860 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_4,
#line 860 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeVarSet_5,
#line 860 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__FoundOne_6)
#line 860 "typecheck_info.m"
{
#line 863 "typecheck_info.m"
  while (MR_TRUE)
#line 863 "typecheck_info.m"
    {
#line 863 "typecheck_info.m"
      /* tailcall optimized into a loop */
#line 863 "typecheck_info.m"
      {
#line 863 "typecheck_info.m"
        MR_bool check_hlds__typecheck_info__succeeded;

#line 863 "typecheck_info.m"
        if ((check_hlds__typecheck_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 867 "typecheck_info.m"
          if ((check_hlds__typecheck_info__FoundOne_6 == (MR_Integer) 0))
#line 865 "typecheck_info.m"
            {
#line 866 "typecheck_info.m"
              {
#line 866 "typecheck_info.m"
                mercury__io__write_string_3_p_0((MR_String) "(No variables were assigned a type)");
#line 866 "typecheck_info.m"
                return;
              }
#line 865 "typecheck_info.m"
            }
#line 867 "typecheck_info.m"
          else
#line 868 "typecheck_info.m"
            {
#line 868 "typecheck_info.m"
            }
#line 863 "typecheck_info.m"
        else
#line 871 "typecheck_info.m"
          {
#line 871 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 871 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Vars_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 884 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Type_27;

#line 872 "typecheck_info.m"
            {
#line 872 "typecheck_info.m"
              check_hlds__typecheck_info__succeeded = parse_tree__prog_data__search_var_type_3_p_0(check_hlds__typecheck_info__VarTypes_3, check_hlds__typecheck_info__Var_19, &check_hlds__typecheck_info__Type_27);
            }
#line 884 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 878 "typecheck_info.m"
              {
#line 878 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__Type1_47;
#line 878 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__Type_48;

#line 876 "typecheck_info.m"
                if ((check_hlds__typecheck_info__FoundOne_6 == (MR_Integer) 0))
#line 877 "typecheck_info.m"
                  {
#line 877 "typecheck_info.m"
                  }
#line 876 "typecheck_info.m"
                else
#line 874 "typecheck_info.m"
                  {
#line 875 "typecheck_info.m"
                    {
#line 875 "typecheck_info.m"
                      mercury__io__write_string_3_p_0((MR_String) "\n\t");
                    }
#line 874 "typecheck_info.m"
                  }
#line 879 "typecheck_info.m"
                {
#line 879 "typecheck_info.m"
                  parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__typecheck_info__VarSet_2, (MR_Integer) 1, check_hlds__typecheck_info__Var_19);
                }
#line 880 "typecheck_info.m"
                {
#line 880 "typecheck_info.m"
                  mercury__io__write_string_3_p_0((MR_String) ": ");
                }
#line 993 "typecheck_info.m"
                {
#line 993 "typecheck_info.m"
                  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(check_hlds__typecheck_info__TypeBindings_4, check_hlds__typecheck_info__Type_27, &check_hlds__typecheck_info__Type1_47);
                }
#line 994 "typecheck_info.m"
                {
#line 994 "typecheck_info.m"
                  parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(check_hlds__typecheck_info__Type1_47, &check_hlds__typecheck_info__Type_48);
                }
#line 995 "typecheck_info.m"
                {
#line 995 "typecheck_info.m"
                  parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(check_hlds__typecheck_info__TypeVarSet_5, (MR_Integer) 1, check_hlds__typecheck_info__Type_48);
                }
#line 882 "typecheck_info.m"
                /* direct tailcall eliminated */
#line 882 "typecheck_info.m"
                {
#line 882 "typecheck_info.m"
                  MR_Word check_hlds__typecheck_info__HeadVar__1__tmp_copy_1 = check_hlds__typecheck_info__Vars_20;

#line 882 "typecheck_info.m"
                  check_hlds__typecheck_info__FoundOne_6 = (MR_Integer) 1;
#line 882 "typecheck_info.m"
                  check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__HeadVar__1__tmp_copy_1;
#line 882 "typecheck_info.m"
                }
#line 882 "typecheck_info.m"
                continue;
#line 878 "typecheck_info.m"
              }
#line 884 "typecheck_info.m"
            else
#line 885 "typecheck_info.m"
              {
#line 885 "typecheck_info.m"
                /* direct tailcall eliminated */
#line 885 "typecheck_info.m"
                {
#line 885 "typecheck_info.m"
                  MR_Word check_hlds__typecheck_info__HeadVar__1__tmp_copy_1 = check_hlds__typecheck_info__Vars_20;

#line 885 "typecheck_info.m"
                  check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__HeadVar__1__tmp_copy_1;
#line 885 "typecheck_info.m"
                }
#line 885 "typecheck_info.m"
                continue;
#line 885 "typecheck_info.m"
              }
#line 871 "typecheck_info.m"
          }
#line 863 "typecheck_info.m"
      }
#line 863 "typecheck_info.m"
      break;
#line 863 "typecheck_info.m"
    }
#line 860 "typecheck_info.m"
}

#line 824 "typecheck_info.m"
static MR_Word MR_CALL 
check_hlds__typecheck_info__type_assign_to_pieces_3_f_0(
#line 824 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeAssign_5,
#line 824 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__MaybeSeq_6,
#line 824 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarSet_7)
#line 824 "typecheck_info.m"
{
#line 827 "typecheck_info.m"
  {
#line 827 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 827 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Pieces_8;
#line 827 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeCtorInfo_53_53;
#line 827 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__SeqPieces_11;
#line 827 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadTypeParams_12;
#line 827 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__VarTypes_13;
#line 827 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Constraints_14;
#line 827 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeBindings_15;
#line 827 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeVarSet_16;
#line 827 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Vars_17;
#line 827 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadPieces_18;
#line 827 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypePieces_22;
#line 827 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__ConstraintPieces_23;
#line 827 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_46_46;
#line 827 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_47_47;
#line 827 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_48_48;
#line 682 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_59_59;
#line 682 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_60_60;

#line 836 "typecheck_info.m"
    if ((check_hlds__typecheck_info__MaybeSeq_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 838 "typecheck_info.m"
      check_hlds__typecheck_info__SeqPieces_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 836 "typecheck_info.m"
    else
#line 829 "typecheck_info.m"
      {
#line 829 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__N_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__MaybeSeq_6, (MR_Integer) 0)));
#line 829 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__SeqPieces0_10;
#line 829 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_26_26;
#line 829 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_27_27;

#line 830 "typecheck_info.m"
        {
#line 830 "typecheck_info.m"
          check_hlds__typecheck_info__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 830 "typecheck_info.m"
          MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 830 "typecheck_info.m"
          MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__V_27_27, 1) = ((MR_Box) (check_hlds__typecheck_info__N_9));
#line 830 "typecheck_info.m"
        }
#line 830 "typecheck_info.m"
        {
#line 830 "typecheck_info.m"
          check_hlds__typecheck_info__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 830 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_26_26, 0) = ((MR_Box) (check_hlds__typecheck_info__V_27_27));
#line 830 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_info_scalar_common_1[16])));
#line 830 "typecheck_info.m"
        }
#line 830 "typecheck_info.m"
        {
#line 830 "typecheck_info.m"
          check_hlds__typecheck_info__SeqPieces0_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 830 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__SeqPieces0_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_info_scalar_common_1[18])));
#line 830 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__SeqPieces0_10, 1) = ((MR_Box) (check_hlds__typecheck_info__V_26_26));
#line 830 "typecheck_info.m"
        }
#line 831 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__N_9 > (MR_Integer) 1);
#line 833 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 832 "typecheck_info.m"
          {
#line 832 "typecheck_info.m"
            {
#line 832 "typecheck_info.m"
              check_hlds__typecheck_info__SeqPieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 832 "typecheck_info.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__SeqPieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 832 "typecheck_info.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__SeqPieces_11, 1) = ((MR_Box) (check_hlds__typecheck_info__SeqPieces0_10));
#line 832 "typecheck_info.m"
            }
#line 832 "typecheck_info.m"
          }
#line 833 "typecheck_info.m"
        else
#line 834 "typecheck_info.m"
          check_hlds__typecheck_info__SeqPieces_11 = check_hlds__typecheck_info__SeqPieces0_10;
#line 829 "typecheck_info.m"
      }
#line 682 "typecheck_info.m"
    check_hlds__typecheck_info__VarTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 0)));
#line 682 "typecheck_info.m"
    check_hlds__typecheck_info__TypeVarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 1)));
#line 682 "typecheck_info.m"
    check_hlds__typecheck_info__HeadTypeParams_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 2)));
#line 682 "typecheck_info.m"
    check_hlds__typecheck_info__TypeBindings_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 3)));
#line 682 "typecheck_info.m"
    check_hlds__typecheck_info__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 4)));
#line 682 "typecheck_info.m"
    check_hlds__typecheck_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 5)));
#line 682 "typecheck_info.m"
    check_hlds__typecheck_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 6)));
#line 845 "typecheck_info.m"
    {
#line 845 "typecheck_info.m"
      parse_tree__prog_data__vartypes_vars_2_p_0(check_hlds__typecheck_info__VarTypes_13, &check_hlds__typecheck_info__Vars_17);
    }
#line 849 "typecheck_info.m"
    if ((check_hlds__typecheck_info__HeadTypeParams_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 848 "typecheck_info.m"
      check_hlds__typecheck_info__HeadPieces_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 849 "typecheck_info.m"
    else
#line 850 "typecheck_info.m"
      {
#line 850 "typecheck_info.m"
        MR_String check_hlds__typecheck_info__VarsStr_21;
#line 850 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_37_37;
#line 850 "typecheck_info.m"
        MR_String check_hlds__typecheck_info__V_38_38;
#line 850 "typecheck_info.m"
        MR_String check_hlds__typecheck_info__V_40_40;

#line 851 "typecheck_info.m"
        {
#line 851 "typecheck_info.m"
          check_hlds__typecheck_info__VarsStr_21 = parse_tree__mercury_to_mercury__mercury_vars_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck_info__TypeVarSet_16, (MR_Integer) 1, check_hlds__typecheck_info__HeadTypeParams_12);
        }
#line 852 "typecheck_info.m"
        {
#line 852 "typecheck_info.m"
          check_hlds__typecheck_info__V_40_40 = mercury__string__f_43_43_2_f_0(check_hlds__typecheck_info__VarsStr_21, (MR_String) "]");
        }
#line 852 "typecheck_info.m"
        {
#line 852 "typecheck_info.m"
          check_hlds__typecheck_info__V_38_38 = mercury__string__f_43_43_2_f_0((MR_String) "some [", check_hlds__typecheck_info__V_40_40);
        }
#line 852 "typecheck_info.m"
        {
#line 852 "typecheck_info.m"
          check_hlds__typecheck_info__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 852 "typecheck_info.m"
          MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 852 "typecheck_info.m"
          MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__V_37_37, 1) = ((MR_Box) (check_hlds__typecheck_info__V_38_38));
#line 852 "typecheck_info.m"
        }
#line 852 "typecheck_info.m"
        {
#line 852 "typecheck_info.m"
          check_hlds__typecheck_info__HeadPieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 852 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadPieces_18, 0) = ((MR_Box) (check_hlds__typecheck_info__V_37_37));
#line 852 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadPieces_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_info_scalar_common_1[14])));
#line 852 "typecheck_info.m"
        }
#line 850 "typecheck_info.m"
      }
#line 854 "typecheck_info.m"
    {
#line 854 "typecheck_info.m"
      check_hlds__typecheck_info__TypePieces_22 = check_hlds__typecheck_info__type_assign_types_to_pieces_6_f_0(check_hlds__typecheck_info__Vars_17, check_hlds__typecheck_info__VarSet_7, check_hlds__typecheck_info__VarTypes_13, check_hlds__typecheck_info__TypeBindings_15, check_hlds__typecheck_info__TypeVarSet_16, (MR_Integer) 0);
    }
#line 856 "typecheck_info.m"
    {
#line 856 "typecheck_info.m"
      check_hlds__typecheck_info__ConstraintPieces_23 = check_hlds__typecheck_info__type_assign_hlds_constraints_to_pieces_3_f_0(check_hlds__typecheck_info__Constraints_14, check_hlds__typecheck_info__TypeBindings_15, check_hlds__typecheck_info__TypeVarSet_16);
    }
#line 6375 "check_hlds.typecheck_info.c"
    check_hlds__typecheck_info__TypeCtorInfo_53_53 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 858 "typecheck_info.m"
    {
#line 858 "typecheck_info.m"
      check_hlds__typecheck_info__V_48_48 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck_info__TypeCtorInfo_53_53, check_hlds__typecheck_info__ConstraintPieces_23, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_info_scalar_common_1[14]));
    }
#line 858 "typecheck_info.m"
    {
#line 858 "typecheck_info.m"
      check_hlds__typecheck_info__V_47_47 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck_info__TypeCtorInfo_53_53, check_hlds__typecheck_info__TypePieces_22, check_hlds__typecheck_info__V_48_48);
    }
#line 858 "typecheck_info.m"
    {
#line 858 "typecheck_info.m"
      check_hlds__typecheck_info__V_46_46 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck_info__TypeCtorInfo_53_53, check_hlds__typecheck_info__HeadPieces_18, check_hlds__typecheck_info__V_47_47);
    }
#line 858 "typecheck_info.m"
    {
#line 858 "typecheck_info.m"
      check_hlds__typecheck_info__Pieces_8 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck_info__TypeCtorInfo_53_53, check_hlds__typecheck_info__SeqPieces_11, check_hlds__typecheck_info__V_46_46);
    }
#line 827 "typecheck_info.m"
    return check_hlds__typecheck_info__Pieces_8;
#line 827 "typecheck_info.m"
  }
#line 824 "typecheck_info.m"
}

#line 800 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__write_type_assign_4_p_0(
#line 800 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeAssign_5,
#line 800 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarSet_6)
#line 800 "typecheck_info.m"
{
#line 803 "typecheck_info.m"
  {
#line 803 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 803 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadTypeParams_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 2)));
#line 803 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__VarTypes_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 0)));
#line 803 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Constraints_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 4)));
#line 803 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeBindings_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 3)));
#line 803 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 1)));
#line 803 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Vars_13;
#line 803 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__ConstraintsToProve_71;
#line 803 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__AssumedConstraints_72;
#line 682 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 5)));
#line 682 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 6)));
#line 926 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_73_73;
#line 926 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_74_74;

#line 809 "typecheck_info.m"
    {
#line 809 "typecheck_info.m"
      parse_tree__prog_data__vartypes_vars_2_p_0(check_hlds__typecheck_info__VarTypes_9, &check_hlds__typecheck_info__Vars_13);
    }
#line 812 "typecheck_info.m"
    if ((check_hlds__typecheck_info__HeadTypeParams_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 811 "typecheck_info.m"
      {
#line 811 "typecheck_info.m"
      }
#line 812 "typecheck_info.m"
    else
#line 813 "typecheck_info.m"
      {
#line 814 "typecheck_info.m"
        {
#line 814 "typecheck_info.m"
          mercury__io__write_string_3_p_0((MR_String) "some [");
        }
#line 815 "typecheck_info.m"
        {
#line 815 "typecheck_info.m"
          parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck_info__TypeVarSet_12, (MR_Integer) 1, check_hlds__typecheck_info__HeadTypeParams_8);
        }
#line 816 "typecheck_info.m"
        {
#line 816 "typecheck_info.m"
          mercury__io__write_string_3_p_0((MR_String) "]\n\t");
        }
#line 813 "typecheck_info.m"
      }
#line 818 "typecheck_info.m"
    {
#line 818 "typecheck_info.m"
      check_hlds__typecheck_info__write_type_assign_types_8_p_0(check_hlds__typecheck_info__Vars_13, check_hlds__typecheck_info__VarSet_6, check_hlds__typecheck_info__VarTypes_9, check_hlds__typecheck_info__TypeBindings_11, check_hlds__typecheck_info__TypeVarSet_12, (MR_Integer) 0);
    }
#line 926 "typecheck_info.m"
    check_hlds__typecheck_info__ConstraintsToProve_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Constraints_10, (MR_Integer) 0)));
#line 926 "typecheck_info.m"
    check_hlds__typecheck_info__AssumedConstraints_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Constraints_10, (MR_Integer) 1)));
#line 926 "typecheck_info.m"
    check_hlds__typecheck_info__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Constraints_10, (MR_Integer) 2)));
#line 926 "typecheck_info.m"
    check_hlds__typecheck_info__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Constraints_10, (MR_Integer) 3)));
#line 928 "typecheck_info.m"
    {
#line 928 "typecheck_info.m"
      check_hlds__typecheck_info__write_type_assign_constraints_7_p_0((MR_String) "&", check_hlds__typecheck_info__AssumedConstraints_72, check_hlds__typecheck_info__TypeBindings_11, check_hlds__typecheck_info__TypeVarSet_12, (MR_Integer) 0);
    }
#line 930 "typecheck_info.m"
    {
#line 930 "typecheck_info.m"
      check_hlds__typecheck_info__write_type_assign_constraints_7_p_0((MR_String) "<=", check_hlds__typecheck_info__ConstraintsToProve_71, check_hlds__typecheck_info__TypeBindings_11, check_hlds__typecheck_info__TypeVarSet_12, (MR_Integer) 0);
    }
#line 822 "typecheck_info.m"
    {
#line 822 "typecheck_info.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 822 "typecheck_info.m"
      return;
    }
#line 803 "typecheck_info.m"
  }
#line 800 "typecheck_info.m"
}

#line 573 "typecheck_info.m"
static MR_bool MR_CALL 
check_hlds__typecheck_info__tvar_maps_to_tvar_3_p_0(
#line 573 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_4,
#line 573 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TVar0_5,
#line 573 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__TVar_6)
#line 573 "typecheck_info.m"
{
#line 579 "typecheck_info.m"
  while (MR_TRUE)
#line 579 "typecheck_info.m"
    {
#line 579 "typecheck_info.m"
      /* tailcall optimized into a loop */
#line 579 "typecheck_info.m"
      {
#line 579 "typecheck_info.m"
        MR_bool check_hlds__typecheck_info__succeeded;
#line 579 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__Type_7;
#line 576 "typecheck_info.m"
        MR_Box check_hlds__typecheck_info__conv0_Type_7;

#line 576 "typecheck_info.m"
        {
#line 576 "typecheck_info.m"
          check_hlds__typecheck_info__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__typecheck_info__TypeBindings_4, ((MR_Box) (check_hlds__typecheck_info__TVar0_5)), &check_hlds__typecheck_info__conv0_Type_7);
        }
#line 576 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 576 "typecheck_info.m"
          {
#line 576 "typecheck_info.m"
            check_hlds__typecheck_info__Type_7 = ((MR_Word) check_hlds__typecheck_info__conv0_Type_7);
#line 576 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 576 "typecheck_info.m"
          }
#line 579 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 577 "typecheck_info.m"
          {
#line 577 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__TVar1_8;
#line 577 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_9_9;

#line 577 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck_info__Type_7)) == (MR_mktag((MR_Integer) 0)));
#line 577 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 577 "typecheck_info.m"
              {
#line 577 "typecheck_info.m"
                check_hlds__typecheck_info__TVar1_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Type_7, (MR_Integer) 0)));
#line 577 "typecheck_info.m"
                check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Type_7, (MR_Integer) 1)));
#line 578 "typecheck_info.m"
                /* direct tailcall eliminated */
#line 578 "typecheck_info.m"
                {
#line 578 "typecheck_info.m"
                  MR_Word check_hlds__typecheck_info__TVar0__tmp_copy_5 = check_hlds__typecheck_info__TVar1_8;

#line 578 "typecheck_info.m"
                  check_hlds__typecheck_info__TVar0_5 = check_hlds__typecheck_info__TVar0__tmp_copy_5;
#line 578 "typecheck_info.m"
                }
#line 578 "typecheck_info.m"
                continue;
#line 577 "typecheck_info.m"
              }
#line 577 "typecheck_info.m"
          }
#line 579 "typecheck_info.m"
        else
#line 580 "typecheck_info.m"
          {
#line 580 "typecheck_info.m"
            *check_hlds__typecheck_info__TVar_6 = check_hlds__typecheck_info__TVar0_5;
#line 580 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 580 "typecheck_info.m"
          }
#line 579 "typecheck_info.m"
        return check_hlds__typecheck_info__succeeded;
#line 579 "typecheck_info.m"
      }
#line 579 "typecheck_info.m"
      break;
#line 579 "typecheck_info.m"
    }
#line 573 "typecheck_info.m"
}

#line 559 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__get_existq_tvar_renaming_2_5_p_0(
#line 559 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__OldHeadTypeParams_6,
#line 559 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_7,
#line 559 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TVar_8,
#line 559 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_Renaming_0_11,
#line 559 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_Renaming_12)
#line 559 "typecheck_info.m"
{
#line 569 "typecheck_info.m"
  {
#line 569 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 569 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__NewTVar_10;
#line 565 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeInfo_16_16;
#line 566 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeInfo_14_14;

#line 564 "typecheck_info.m"
    {
#line 564 "typecheck_info.m"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info__tvar_maps_to_tvar_3_p_0(check_hlds__typecheck_info__TypeBindings_7, check_hlds__typecheck_info__TVar_8, &check_hlds__typecheck_info__NewTVar_10);
    }
#line 564 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 564 "typecheck_info.m"
      {
#line 6642 "check_hlds.typecheck_info.c"
        check_hlds__typecheck_info__TypeInfo_16_16 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[0];
#line 565 "typecheck_info.m"
        {
#line 565 "typecheck_info.m"
          check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_16_16, ((MR_Box) (check_hlds__typecheck_info__NewTVar_10)), ((MR_Box) (check_hlds__typecheck_info__TVar_8)));
        }
#line 565 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 564 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 564 "typecheck_info.m"
          {
#line 6655 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__TypeInfo_14_14 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[0];
#line 566 "typecheck_info.m"
            {
#line 566 "typecheck_info.m"
              check_hlds__typecheck_info__succeeded = mercury__list__member_2_p_0(check_hlds__typecheck_info__TypeInfo_14_14, ((MR_Box) (check_hlds__typecheck_info__NewTVar_10)), check_hlds__typecheck_info__OldHeadTypeParams_6);
            }
#line 566 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 564 "typecheck_info.m"
          }
#line 564 "typecheck_info.m"
      }
#line 569 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 568 "typecheck_info.m"
      {
#line 568 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_15_15 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[0];

#line 568 "typecheck_info.m"
        {
#line 568 "typecheck_info.m"
          mercury__map__det_insert_4_p_0(check_hlds__typecheck_info__TypeInfo_15_15, check_hlds__typecheck_info__TypeInfo_15_15, ((MR_Box) (check_hlds__typecheck_info__TVar_8)), ((MR_Box) (check_hlds__typecheck_info__NewTVar_10)), check_hlds__typecheck_info__STATE_VARIABLE_Renaming_0_11, check_hlds__typecheck_info__STATE_VARIABLE_Renaming_12);
#line 568 "typecheck_info.m"
          return;
        }
#line 568 "typecheck_info.m"
      }
#line 569 "typecheck_info.m"
    else
#line 568 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_Renaming_12 = check_hlds__typecheck_info__STATE_VARIABLE_Renaming_0_11;
#line 569 "typecheck_info.m"
  }
#line 559 "typecheck_info.m"
}

#line 556 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__get_existq_tvar_renaming_4_p_0_1(
#line 556 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__closure_arg,
#line 556 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 556 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 556 "typecheck_info.m"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_3)
#line 556 "typecheck_info.m"
{
#line 556 "typecheck_info.m"
  {
#line 556 "typecheck_info.m"
    MR_Box check_hlds__typecheck_info__closure = check_hlds__typecheck_info__closure_arg;
#line 556 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__conv0_STATE_VARIABLE_Renaming_12;

#line 556 "typecheck_info.m"
    {
#line 556 "typecheck_info.m"
      check_hlds__typecheck_info__get_existq_tvar_renaming_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), &check_hlds__typecheck_info__conv0_STATE_VARIABLE_Renaming_12);
    }
#line 556 "typecheck_info.m"
    *check_hlds__typecheck_info__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck_info__conv0_STATE_VARIABLE_Renaming_12));
#line 556 "typecheck_info.m"
  }
#line 556 "typecheck_info.m"
}

#line 551 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__get_existq_tvar_renaming_4_p_0(
#line 551 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__OldHeadTypeParams_5,
#line 551 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__ExistQVars_6,
#line 551 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_7,
#line 551 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__ExistTypeRenaming_8)
#line 551 "typecheck_info.m"
{
#line 555 "typecheck_info.m"
  {
#line 555 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 555 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeInfo_14_14;
#line 555 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9;
#line 555 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10;
#line 556 "typecheck_info.m"
    MR_Box check_hlds__typecheck_info__conv1_ExistTypeRenaming_8;

#line 556 "typecheck_info.m"
    {
#line 556 "typecheck_info.m"
      check_hlds__typecheck_info__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 556 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, 0) = ((MR_Box) (&check_hlds__typecheck_info_scalar_common_4[1]));
#line 556 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, 1) = ((MR_Box) (check_hlds__typecheck_info__get_existq_tvar_renaming_4_p_0_1));
#line 556 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 556 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, 3) = ((MR_Box) (check_hlds__typecheck_info__OldHeadTypeParams_5));
#line 556 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, 4) = ((MR_Box) (check_hlds__typecheck_info__TypeBindings_7));
#line 556 "typecheck_info.m"
    }
#line 6767 "check_hlds.typecheck_info.c"
    check_hlds__typecheck_info__TypeInfo_14_14 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[0];
#line 556 "typecheck_info.m"
    {
#line 556 "typecheck_info.m"
      check_hlds__typecheck_info__V_10_10 = mercury__map__init_0_f_0(check_hlds__typecheck_info__TypeInfo_14_14, check_hlds__typecheck_info__TypeInfo_14_14);
    }
#line 556 "typecheck_info.m"
    {
#line 556 "typecheck_info.m"
      mercury__list__foldl_4_p_0(check_hlds__typecheck_info__TypeInfo_14_14, (MR_Word) &check_hlds__typecheck_info_scalar_common_2[1], check_hlds__typecheck_info__V_9_9, check_hlds__typecheck_info__ExistQVars_6, ((MR_Box) (check_hlds__typecheck_info__V_10_10)), &check_hlds__typecheck_info__conv1_ExistTypeRenaming_8);
    }
#line 556 "typecheck_info.m"
    *check_hlds__typecheck_info__ExistTypeRenaming_8 = ((MR_Word) check_hlds__typecheck_info__conv1_ExistTypeRenaming_8);
#line 555 "typecheck_info.m"
  }
#line 551 "typecheck_info.m"
}

#line 539 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__expand_types_5_p_0(
#line 539 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeSubst_6,
#line 539 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Type0_7,
#line 539 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__Type_8,
#line 539 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_TypeVarsSet_0_11,
#line 539 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_TypeVarsSet_12)
#line 539 "typecheck_info.m"
{
#line 542 "typecheck_info.m"
  {
#line 542 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 542 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeVars_10;

#line 543 "typecheck_info.m"
    {
#line 543 "typecheck_info.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(check_hlds__typecheck_info__TypeSubst_6, check_hlds__typecheck_info__Type0_7, check_hlds__typecheck_info__Type_8);
    }
#line 544 "typecheck_info.m"
    {
#line 544 "typecheck_info.m"
      parse_tree__prog_type__type_vars_2_p_0(*check_hlds__typecheck_info__Type_8, &check_hlds__typecheck_info__TypeVars_10);
    }
#line 545 "typecheck_info.m"
    {
#line 545 "typecheck_info.m"
      mercury__set__insert_list_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[0], check_hlds__typecheck_info__TypeVars_10, check_hlds__typecheck_info__STATE_VARIABLE_TypeVarsSet_0_11, check_hlds__typecheck_info__STATE_VARIABLE_TypeVarsSet_12);
#line 545 "typecheck_info.m"
      return;
    }
#line 542 "typecheck_info.m"
  }
#line 539 "typecheck_info.m"
}

#line 371 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__type_checkpoint_4_p_0(
#line 371 "typecheck_info.m"
  MR_String check_hlds__typecheck_info__Msg_5,
#line 371 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_6)
#line 371 "typecheck_info.m"
{
#line 1006 "typecheck_info.m"
  {
#line 1006 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 1006 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__ModuleInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 1)));
#line 1006 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Globals_9;
#line 1006 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__DoCheckPoint_10;
#line 1007 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 0)));
#line 1007 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 2)));
#line 1007 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 3)));
#line 1007 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 4)));
#line 1007 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 5)));
#line 1007 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 6)));
#line 1007 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 7)));

#line 1008 "typecheck_info.m"
    {
#line 1008 "typecheck_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck_info__ModuleInfo_8, &check_hlds__typecheck_info__Globals_9);
    }
#line 1009 "typecheck_info.m"
    {
#line 1009 "typecheck_info.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__typecheck_info__Globals_9, (MR_Integer) 57, &check_hlds__typecheck_info__DoCheckPoint_10);
    }
#line 1013 "typecheck_info.m"
    if ((check_hlds__typecheck_info__DoCheckPoint_10 == (MR_Integer) 0))
#line 1014 "typecheck_info.m"
      {
#line 1014 "typecheck_info.m"
      }
#line 1013 "typecheck_info.m"
    else
#line 1012 "typecheck_info.m"
      {
#line 1012 "typecheck_info.m"
        check_hlds__typecheck_info__do_type_checkpoint_4_p_0(check_hlds__typecheck_info__Msg_5, check_hlds__typecheck_info__Info_6);
#line 1012 "typecheck_info.m"
        return;
      }
#line 1006 "typecheck_info.m"
  }
#line 371 "typecheck_info.m"
}

#line 364 "typecheck_info.m"
MR_Word MR_CALL 
check_hlds__typecheck_info__args_type_assign_set_to_pieces_3_f_0(
#line 364 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 364 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__MaybeSeq_2,
#line 364 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarSet_3)
#line 364 "typecheck_info.m"
{
#line 790 "typecheck_info.m"
  {
#line 790 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 790 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadVar__4_4;

#line 790 "typecheck_info.m"
    if ((check_hlds__typecheck_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 790 "typecheck_info.m"
      check_hlds__typecheck_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 790 "typecheck_info.m"
    else
#line 792 "typecheck_info.m"
      {
#line 792 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ArgTypeAssign_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 792 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ArgTypeAssigns_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 792 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeAssign_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgTypeAssign_7, (MR_Integer) 0)));
#line 792 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_15_15;
#line 792 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_16_16;
#line 792 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_17_17;
#line 795 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info___ArgTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgTypeAssign_7, (MR_Integer) 1)));
#line 795 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info___Cnstrs_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgTypeAssign_7, (MR_Integer) 2)));

#line 796 "typecheck_info.m"
        {
#line 796 "typecheck_info.m"
          check_hlds__typecheck_info__V_15_15 = check_hlds__typecheck_info__type_assign_to_pieces_3_f_0(check_hlds__typecheck_info__TypeAssign_12, check_hlds__typecheck_info__MaybeSeq_2, check_hlds__typecheck_info__VarSet_3);
        }
#line 765 "typecheck_info.m"
        if ((check_hlds__typecheck_info__MaybeSeq_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 765 "typecheck_info.m"
          check_hlds__typecheck_info__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 765 "typecheck_info.m"
        else
#line 766 "typecheck_info.m"
          {
#line 766 "typecheck_info.m"
            MR_Integer check_hlds__typecheck_info__N_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__MaybeSeq_2, (MR_Integer) 0)));
#line 766 "typecheck_info.m"
            MR_Integer check_hlds__typecheck_info__V_20_20 = (check_hlds__typecheck_info__N_19 + (MR_Integer) 1);

#line 766 "typecheck_info.m"
            {
#line 766 "typecheck_info.m"
              check_hlds__typecheck_info__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 766 "typecheck_info.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_17_17, 0) = ((MR_Box) (check_hlds__typecheck_info__V_20_20));
#line 766 "typecheck_info.m"
            }
#line 766 "typecheck_info.m"
          }
#line 796 "typecheck_info.m"
        {
#line 796 "typecheck_info.m"
          check_hlds__typecheck_info__V_16_16 = check_hlds__typecheck_info__args_type_assign_set_to_pieces_3_f_0(check_hlds__typecheck_info__ArgTypeAssigns_8, check_hlds__typecheck_info__V_17_17, check_hlds__typecheck_info__VarSet_3);
        }
#line 796 "typecheck_info.m"
        {
#line 796 "typecheck_info.m"
          check_hlds__typecheck_info__HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__typecheck_info__V_15_15, check_hlds__typecheck_info__V_16_16);
        }
#line 792 "typecheck_info.m"
      }
#line 790 "typecheck_info.m"
    return check_hlds__typecheck_info__HeadVar__4_4;
#line 790 "typecheck_info.m"
  }
#line 364 "typecheck_info.m"
}

#line 361 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__write_args_type_assign_set_4_p_0(
#line 361 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 361 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarSet_2)
#line 361 "typecheck_info.m"
{
#line 780 "typecheck_info.m"
  while (MR_TRUE)
#line 780 "typecheck_info.m"
    {
#line 780 "typecheck_info.m"
      /* tailcall optimized into a loop */
#line 780 "typecheck_info.m"
      {
#line 780 "typecheck_info.m"
        MR_bool check_hlds__typecheck_info__succeeded;

#line 780 "typecheck_info.m"
        if ((check_hlds__typecheck_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 780 "typecheck_info.m"
          {
#line 780 "typecheck_info.m"
          }
#line 780 "typecheck_info.m"
        else
#line 781 "typecheck_info.m"
          {
#line 781 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__ArgTypeAssign_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 781 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__ArgTypeAssigns_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 781 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__TypeAssign_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgTypeAssign_9, (MR_Integer) 0)));
#line 784 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info___ArgTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgTypeAssign_9, (MR_Integer) 1)));
#line 784 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info___Cnstrs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgTypeAssign_9, (MR_Integer) 2)));

#line 785 "typecheck_info.m"
            {
#line 785 "typecheck_info.m"
              mercury__io__write_string_3_p_0((MR_String) "\t");
            }
#line 786 "typecheck_info.m"
            {
#line 786 "typecheck_info.m"
              check_hlds__typecheck_info__write_type_assign_4_p_0(check_hlds__typecheck_info__TypeAssign_13, check_hlds__typecheck_info__VarSet_2);
            }
#line 787 "typecheck_info.m"
            {
#line 787 "typecheck_info.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 788 "typecheck_info.m"
            /* direct tailcall eliminated */
#line 788 "typecheck_info.m"
            {
#line 788 "typecheck_info.m"
              MR_Word check_hlds__typecheck_info__HeadVar__1__tmp_copy_1 = check_hlds__typecheck_info__ArgTypeAssigns_10;

#line 788 "typecheck_info.m"
              check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__HeadVar__1__tmp_copy_1;
#line 788 "typecheck_info.m"
            }
#line 788 "typecheck_info.m"
            continue;
#line 781 "typecheck_info.m"
          }
#line 780 "typecheck_info.m"
      }
#line 780 "typecheck_info.m"
      break;
#line 780 "typecheck_info.m"
    }
#line 361 "typecheck_info.m"
}

#line 358 "typecheck_info.m"
MR_Word MR_CALL 
check_hlds__typecheck_info__type_assign_set_to_pieces_3_f_0(
#line 358 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 358 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__MaybeSeq_2,
#line 358 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarSet_3)
#line 358 "typecheck_info.m"
{
#line 775 "typecheck_info.m"
  {
#line 775 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 775 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadVar__4_4;

#line 775 "typecheck_info.m"
    if ((check_hlds__typecheck_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 775 "typecheck_info.m"
      check_hlds__typecheck_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 775 "typecheck_info.m"
    else
#line 776 "typecheck_info.m"
      {
#line 776 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeAssign_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 776 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeAssigns_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 776 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_11_11;
#line 776 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_12_12;
#line 776 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_13_13;

#line 777 "typecheck_info.m"
        {
#line 777 "typecheck_info.m"
          check_hlds__typecheck_info__V_11_11 = check_hlds__typecheck_info__type_assign_to_pieces_3_f_0(check_hlds__typecheck_info__TypeAssign_7, check_hlds__typecheck_info__MaybeSeq_2, check_hlds__typecheck_info__VarSet_3);
        }
#line 765 "typecheck_info.m"
        if ((check_hlds__typecheck_info__MaybeSeq_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 765 "typecheck_info.m"
          check_hlds__typecheck_info__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 765 "typecheck_info.m"
        else
#line 766 "typecheck_info.m"
          {
#line 766 "typecheck_info.m"
            MR_Integer check_hlds__typecheck_info__N_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__MaybeSeq_2, (MR_Integer) 0)));
#line 766 "typecheck_info.m"
            MR_Integer check_hlds__typecheck_info__V_16_16 = (check_hlds__typecheck_info__N_15 + (MR_Integer) 1);

#line 766 "typecheck_info.m"
            {
#line 766 "typecheck_info.m"
              check_hlds__typecheck_info__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 766 "typecheck_info.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_13_13, 0) = ((MR_Box) (check_hlds__typecheck_info__V_16_16));
#line 766 "typecheck_info.m"
            }
#line 766 "typecheck_info.m"
          }
#line 777 "typecheck_info.m"
        {
#line 777 "typecheck_info.m"
          check_hlds__typecheck_info__V_12_12 = check_hlds__typecheck_info__type_assign_set_to_pieces_3_f_0(check_hlds__typecheck_info__TypeAssigns_8, check_hlds__typecheck_info__V_13_13, check_hlds__typecheck_info__VarSet_3);
        }
#line 776 "typecheck_info.m"
        {
#line 776 "typecheck_info.m"
          check_hlds__typecheck_info__HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__typecheck_info__V_11_11, check_hlds__typecheck_info__V_12_12);
        }
#line 776 "typecheck_info.m"
      }
#line 775 "typecheck_info.m"
    return check_hlds__typecheck_info__HeadVar__4_4;
#line 775 "typecheck_info.m"
  }
#line 358 "typecheck_info.m"
}

#line 355 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__write_type_assign_set_4_p_0(
#line 355 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 355 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarSet_2)
#line 355 "typecheck_info.m"
{
#line 768 "typecheck_info.m"
  while (MR_TRUE)
#line 768 "typecheck_info.m"
    {
#line 768 "typecheck_info.m"
      /* tailcall optimized into a loop */
#line 768 "typecheck_info.m"
      {
#line 768 "typecheck_info.m"
        MR_bool check_hlds__typecheck_info__succeeded;

#line 768 "typecheck_info.m"
        if ((check_hlds__typecheck_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 768 "typecheck_info.m"
          {
#line 768 "typecheck_info.m"
          }
#line 768 "typecheck_info.m"
        else
#line 769 "typecheck_info.m"
          {
#line 769 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__TypeAssign_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 769 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__TypeAssigns_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 769 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__HeadTypeParams_26;
#line 769 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__VarTypes_27;
#line 769 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Constraints_28;
#line 769 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__TypeBindings_29;
#line 769 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__TypeVarSet_30;
#line 769 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Vars_31;
#line 769 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__ConstraintsToProve_87;
#line 769 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__AssumedConstraints_88;
#line 682 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_51_51;
#line 682 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_52_52;
#line 926 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_89_89;
#line 926 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_90_90;

#line 770 "typecheck_info.m"
            {
#line 770 "typecheck_info.m"
              mercury__io__write_string_3_p_0((MR_String) "\t");
            }
#line 682 "typecheck_info.m"
            check_hlds__typecheck_info__VarTypes_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_9, (MR_Integer) 0)));
#line 682 "typecheck_info.m"
            check_hlds__typecheck_info__TypeVarSet_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_9, (MR_Integer) 1)));
#line 682 "typecheck_info.m"
            check_hlds__typecheck_info__HeadTypeParams_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_9, (MR_Integer) 2)));
#line 682 "typecheck_info.m"
            check_hlds__typecheck_info__TypeBindings_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_9, (MR_Integer) 3)));
#line 682 "typecheck_info.m"
            check_hlds__typecheck_info__Constraints_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_9, (MR_Integer) 4)));
#line 682 "typecheck_info.m"
            check_hlds__typecheck_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_9, (MR_Integer) 5)));
#line 682 "typecheck_info.m"
            check_hlds__typecheck_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_9, (MR_Integer) 6)));
#line 809 "typecheck_info.m"
            {
#line 809 "typecheck_info.m"
              parse_tree__prog_data__vartypes_vars_2_p_0(check_hlds__typecheck_info__VarTypes_27, &check_hlds__typecheck_info__Vars_31);
            }
#line 812 "typecheck_info.m"
            if ((check_hlds__typecheck_info__HeadTypeParams_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 811 "typecheck_info.m"
              {
#line 811 "typecheck_info.m"
              }
#line 812 "typecheck_info.m"
            else
#line 813 "typecheck_info.m"
              {
#line 814 "typecheck_info.m"
                {
#line 814 "typecheck_info.m"
                  mercury__io__write_string_3_p_0((MR_String) "some [");
                }
#line 815 "typecheck_info.m"
                {
#line 815 "typecheck_info.m"
                  parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck_info__TypeVarSet_30, (MR_Integer) 1, check_hlds__typecheck_info__HeadTypeParams_26);
                }
#line 816 "typecheck_info.m"
                {
#line 816 "typecheck_info.m"
                  mercury__io__write_string_3_p_0((MR_String) "]\n\t");
                }
#line 813 "typecheck_info.m"
              }
#line 818 "typecheck_info.m"
            {
#line 818 "typecheck_info.m"
              check_hlds__typecheck_info__write_type_assign_types_8_p_0(check_hlds__typecheck_info__Vars_31, check_hlds__typecheck_info__VarSet_2, check_hlds__typecheck_info__VarTypes_27, check_hlds__typecheck_info__TypeBindings_29, check_hlds__typecheck_info__TypeVarSet_30, (MR_Integer) 0);
            }
#line 926 "typecheck_info.m"
            check_hlds__typecheck_info__ConstraintsToProve_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Constraints_28, (MR_Integer) 0)));
#line 926 "typecheck_info.m"
            check_hlds__typecheck_info__AssumedConstraints_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Constraints_28, (MR_Integer) 1)));
#line 926 "typecheck_info.m"
            check_hlds__typecheck_info__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Constraints_28, (MR_Integer) 2)));
#line 926 "typecheck_info.m"
            check_hlds__typecheck_info__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Constraints_28, (MR_Integer) 3)));
#line 928 "typecheck_info.m"
            {
#line 928 "typecheck_info.m"
              check_hlds__typecheck_info__write_type_assign_constraints_7_p_0((MR_String) "&", check_hlds__typecheck_info__AssumedConstraints_88, check_hlds__typecheck_info__TypeBindings_29, check_hlds__typecheck_info__TypeVarSet_30, (MR_Integer) 0);
            }
#line 930 "typecheck_info.m"
            {
#line 930 "typecheck_info.m"
              check_hlds__typecheck_info__write_type_assign_constraints_7_p_0((MR_String) "<=", check_hlds__typecheck_info__ConstraintsToProve_87, check_hlds__typecheck_info__TypeBindings_29, check_hlds__typecheck_info__TypeVarSet_30, (MR_Integer) 0);
            }
#line 822 "typecheck_info.m"
            {
#line 822 "typecheck_info.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 772 "typecheck_info.m"
            {
#line 772 "typecheck_info.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 773 "typecheck_info.m"
            /* direct tailcall eliminated */
#line 773 "typecheck_info.m"
            {
#line 773 "typecheck_info.m"
              MR_Word check_hlds__typecheck_info__HeadVar__1__tmp_copy_1 = check_hlds__typecheck_info__TypeAssigns_10;

#line 773 "typecheck_info.m"
              check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__HeadVar__1__tmp_copy_1;
#line 773 "typecheck_info.m"
            }
#line 773 "typecheck_info.m"
            continue;
#line 769 "typecheck_info.m"
          }
#line 768 "typecheck_info.m"
      }
#line 768 "typecheck_info.m"
      break;
#line 768 "typecheck_info.m"
    }
#line 355 "typecheck_info.m"
}

#line 351 "typecheck_info.m"
MR_Word MR_CALL 
check_hlds__typecheck_info__project_cons_type_info_source_1_f_0(
#line 351 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__CTI_3)
#line 351 "typecheck_info.m"
{
#line 755 "typecheck_info.m"
  {
#line 755 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 755 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__CTI_3, (MR_Integer) 5)));
#line 755 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__CTI_3, (MR_Integer) 0)));
#line 755 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__CTI_3, (MR_Integer) 1)));
#line 755 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__CTI_3, (MR_Integer) 2)));
#line 755 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__CTI_3, (MR_Integer) 3)));
#line 755 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__CTI_3, (MR_Integer) 4)));

#line 755 "typecheck_info.m"
    return check_hlds__typecheck_info__HeadVar__2_2;
#line 755 "typecheck_info.m"
  }
#line 351 "typecheck_info.m"
}

#line 316 "typecheck_info.m"
MR_Word MR_CALL 
check_hlds__typecheck_info__convert_args_type_assign_set_check_empty_args_1_f_0(
#line 316 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1)
#line 316 "typecheck_info.m"
{
#line 721 "typecheck_info.m"
  {
#line 721 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 721 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadVar__2_2;

#line 721 "typecheck_info.m"
    if ((check_hlds__typecheck_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 721 "typecheck_info.m"
      check_hlds__typecheck_info__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 721 "typecheck_info.m"
    else
#line 723 "typecheck_info.m"
      {
#line 723 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ArgTypeAssign_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 723 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ArgTypeAssigns_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 723 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgTypeAssign_3, (MR_Integer) 0)));
#line 723 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__Args_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgTypeAssign_3, (MR_Integer) 1)));
#line 723 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgTypeAssign_3, (MR_Integer) 2)));

#line 730 "typecheck_info.m"
        if ((check_hlds__typecheck_info__Args_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 726 "typecheck_info.m"
          {
#line 726 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_14_14;
#line 726 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_15_15;
#line 726 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__OldConstraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 4)));
#line 726 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Bindings_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 3)));
#line 726 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Constraints_22;
#line 726 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__NewConstraints_23;
#line 684 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 0)));
#line 684 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 1)));
#line 684 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 2)));
#line 684 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 5)));
#line 684 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 6)));
#line 697 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_43_43;
#line 697 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_44_44;
#line 697 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_45_45;
#line 697 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_46_46;
#line 697 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_48_48;
#line 697 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_49_49;
#line 697 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_47_47;

#line 743 "typecheck_info.m"
            {
#line 743 "typecheck_info.m"
              check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0(check_hlds__typecheck_info__Bindings_21, check_hlds__typecheck_info__V_8_8, &check_hlds__typecheck_info__Constraints_22);
            }
#line 744 "typecheck_info.m"
            {
#line 744 "typecheck_info.m"
              hlds__hlds_data__merge_hlds_constraints_3_p_0(check_hlds__typecheck_info__Constraints_22, check_hlds__typecheck_info__OldConstraints_20, &check_hlds__typecheck_info__NewConstraints_23);
            }
#line 697 "typecheck_info.m"
            check_hlds__typecheck_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 0)));
#line 697 "typecheck_info.m"
            check_hlds__typecheck_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 1)));
#line 697 "typecheck_info.m"
            check_hlds__typecheck_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 2)));
#line 697 "typecheck_info.m"
            check_hlds__typecheck_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 3)));
#line 697 "typecheck_info.m"
            check_hlds__typecheck_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 4)));
#line 697 "typecheck_info.m"
            check_hlds__typecheck_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 5)));
#line 697 "typecheck_info.m"
            check_hlds__typecheck_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 6)));
#line 697 "typecheck_info.m"
            {
#line 697 "typecheck_info.m"
              check_hlds__typecheck_info__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 697 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_14_14, 0) = ((MR_Box) (check_hlds__typecheck_info__V_43_43));
#line 697 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_14_14, 1) = ((MR_Box) (check_hlds__typecheck_info__V_44_44));
#line 697 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_14_14, 2) = ((MR_Box) (check_hlds__typecheck_info__V_45_45));
#line 697 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_14_14, 3) = ((MR_Box) (check_hlds__typecheck_info__V_46_46));
#line 697 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_14_14, 4) = ((MR_Box) (check_hlds__typecheck_info__NewConstraints_23));
#line 697 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_14_14, 5) = ((MR_Box) (check_hlds__typecheck_info__V_48_48));
#line 697 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_14_14, 6) = ((MR_Box) (check_hlds__typecheck_info__V_49_49));
#line 697 "typecheck_info.m"
            }
#line 728 "typecheck_info.m"
            {
#line 728 "typecheck_info.m"
              check_hlds__typecheck_info__V_15_15 = check_hlds__typecheck_info__convert_args_type_assign_set_check_empty_args_1_f_0(check_hlds__typecheck_info__ArgTypeAssigns_4);
            }
#line 727 "typecheck_info.m"
            {
#line 727 "typecheck_info.m"
              check_hlds__typecheck_info__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 727 "typecheck_info.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, 0) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
#line 727 "typecheck_info.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, 1) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
#line 727 "typecheck_info.m"
            }
#line 726 "typecheck_info.m"
          }
#line 730 "typecheck_info.m"
        else
#line 731 "typecheck_info.m"
          {
#line 734 "typecheck_info.m"
            {
#line 734 "typecheck_info.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck_info", (MR_String) "function \140check_hlds.typecheck_info.convert_args_type_assign_set_check_empty_args\'/1", (MR_String) "Args != []");
            }
#line 731 "typecheck_info.m"
          }
#line 723 "typecheck_info.m"
      }
#line 721 "typecheck_info.m"
    return check_hlds__typecheck_info__HeadVar__2_2;
#line 721 "typecheck_info.m"
  }
#line 316 "typecheck_info.m"
}

#line 311 "typecheck_info.m"
MR_Word MR_CALL 
check_hlds__typecheck_info__convert_args_type_assign_set_1_f_0(
#line 311 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1)
#line 311 "typecheck_info.m"
{
#line 716 "typecheck_info.m"
  {
#line 716 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 716 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadVar__2_2;

#line 716 "typecheck_info.m"
    if ((check_hlds__typecheck_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 716 "typecheck_info.m"
      check_hlds__typecheck_info__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 716 "typecheck_info.m"
    else
#line 717 "typecheck_info.m"
      {
#line 717 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ArgsTypeAssign_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 717 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ArgsTypeAssigns_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 717 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5;
#line 717 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6;
#line 717 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeAssign0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgsTypeAssign_3, (MR_Integer) 0)));
#line 717 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__Constraints0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgsTypeAssign_3, (MR_Integer) 2)));
#line 717 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__OldConstraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 4)));
#line 717 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__Bindings_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 3)));
#line 717 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__Constraints_13;
#line 717 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__NewConstraints_14;
#line 740 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgsTypeAssign_3, (MR_Integer) 1)));
#line 684 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 0)));
#line 684 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 1)));
#line 684 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 2)));
#line 684 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 5)));
#line 684 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 6)));
#line 697 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_34_34;
#line 697 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_35_35;
#line 697 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_36_36;
#line 697 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_37_37;
#line 697 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_39_39;
#line 697 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_40_40;
#line 697 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_38_38;

#line 743 "typecheck_info.m"
        {
#line 743 "typecheck_info.m"
          check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0(check_hlds__typecheck_info__Bindings_12, check_hlds__typecheck_info__Constraints0_10, &check_hlds__typecheck_info__Constraints_13);
        }
#line 744 "typecheck_info.m"
        {
#line 744 "typecheck_info.m"
          hlds__hlds_data__merge_hlds_constraints_3_p_0(check_hlds__typecheck_info__Constraints_13, check_hlds__typecheck_info__OldConstraints_11, &check_hlds__typecheck_info__NewConstraints_14);
        }
#line 697 "typecheck_info.m"
        check_hlds__typecheck_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 0)));
#line 697 "typecheck_info.m"
        check_hlds__typecheck_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 1)));
#line 697 "typecheck_info.m"
        check_hlds__typecheck_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 2)));
#line 697 "typecheck_info.m"
        check_hlds__typecheck_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 3)));
#line 697 "typecheck_info.m"
        check_hlds__typecheck_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 4)));
#line 697 "typecheck_info.m"
        check_hlds__typecheck_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 5)));
#line 697 "typecheck_info.m"
        check_hlds__typecheck_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 6)));
#line 697 "typecheck_info.m"
        {
#line 697 "typecheck_info.m"
          check_hlds__typecheck_info__V_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 697 "typecheck_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, 0) = ((MR_Box) (check_hlds__typecheck_info__V_34_34));
#line 697 "typecheck_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, 1) = ((MR_Box) (check_hlds__typecheck_info__V_35_35));
#line 697 "typecheck_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, 2) = ((MR_Box) (check_hlds__typecheck_info__V_36_36));
#line 697 "typecheck_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, 3) = ((MR_Box) (check_hlds__typecheck_info__V_37_37));
#line 697 "typecheck_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, 4) = ((MR_Box) (check_hlds__typecheck_info__NewConstraints_14));
#line 697 "typecheck_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, 5) = ((MR_Box) (check_hlds__typecheck_info__V_39_39));
#line 697 "typecheck_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, 6) = ((MR_Box) (check_hlds__typecheck_info__V_40_40));
#line 697 "typecheck_info.m"
        }
#line 718 "typecheck_info.m"
        {
#line 718 "typecheck_info.m"
          check_hlds__typecheck_info__V_6_6 = check_hlds__typecheck_info__convert_args_type_assign_set_1_f_0(check_hlds__typecheck_info__ArgsTypeAssigns_4);
        }
#line 717 "typecheck_info.m"
        {
#line 717 "typecheck_info.m"
          check_hlds__typecheck_info__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 717 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, 0) = ((MR_Box) (check_hlds__typecheck_info__V_5_5));
#line 717 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, 1) = ((MR_Box) (check_hlds__typecheck_info__V_6_6));
#line 717 "typecheck_info.m"
        }
#line 717 "typecheck_info.m"
      }
#line 716 "typecheck_info.m"
    return check_hlds__typecheck_info__HeadVar__2_2;
#line 716 "typecheck_info.m"
  }
#line 311 "typecheck_info.m"
}

#line 307 "typecheck_info.m"
MR_Word MR_CALL 
check_hlds__typecheck_info__get_callee_constraints_1_f_0(
#line 307 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__ArgsTypeAssign_3)
#line 307 "typecheck_info.m"
{
#line 752 "typecheck_info.m"
  {
#line 752 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 752 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgsTypeAssign_3, (MR_Integer) 2)));
#line 752 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgsTypeAssign_3, (MR_Integer) 0)));
#line 752 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgsTypeAssign_3, (MR_Integer) 1)));

#line 752 "typecheck_info.m"
    return check_hlds__typecheck_info__HeadVar__2_2;
#line 752 "typecheck_info.m"
  }
#line 307 "typecheck_info.m"
}

#line 306 "typecheck_info.m"
MR_Word MR_CALL 
check_hlds__typecheck_info__get_callee_arg_types_1_f_0(
#line 306 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__ArgsTypeAssign_3)
#line 306 "typecheck_info.m"
{
#line 750 "typecheck_info.m"
  {
#line 750 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 750 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgsTypeAssign_3, (MR_Integer) 1)));
#line 750 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgsTypeAssign_3, (MR_Integer) 0)));
#line 750 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgsTypeAssign_3, (MR_Integer) 2)));

#line 750 "typecheck_info.m"
    return check_hlds__typecheck_info__HeadVar__2_2;
#line 750 "typecheck_info.m"
  }
#line 306 "typecheck_info.m"
}

#line 305 "typecheck_info.m"
MR_Word MR_CALL 
check_hlds__typecheck_info__get_caller_arg_assign_1_f_0(
#line 305 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__ArgsTypeAssign_3)
#line 305 "typecheck_info.m"
{
#line 748 "typecheck_info.m"
  {
#line 748 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 748 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgsTypeAssign_3, (MR_Integer) 0)));
#line 748 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgsTypeAssign_3, (MR_Integer) 1)));
#line 748 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgsTypeAssign_3, (MR_Integer) 2)));

#line 748 "typecheck_info.m"
    return check_hlds__typecheck_info__HeadVar__2_2;
#line 748 "typecheck_info.m"
  }
#line 305 "typecheck_info.m"
}

#line 285 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__type_assign_set_reduce_results_7_p_0(
#line 285 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Bindings_8,
#line 285 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TVarSet_9,
#line 285 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Constraints_10,
#line 285 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Proofs_11,
#line 285 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__ConstraintMap_12,
#line 285 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_TA_0_14,
#line 285 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_TA_15)
#line 285 "typecheck_info.m"
{
#line 704 "typecheck_info.m"
  {
#line 704 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 704 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_14, (MR_Integer) 0)));
#line 704 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_14, (MR_Integer) 2)));
#line 704 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_28_28 = check_hlds__typecheck_info__V_21_21;
#line 704 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_30_30 = check_hlds__typecheck_info__V_23_23;
#line 704 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_31_31 = check_hlds__typecheck_info__Bindings_8;
#line 704 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_35_35 = check_hlds__typecheck_info__V_28_28;
#line 704 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_36_36 = check_hlds__typecheck_info__TVarSet_9;
#line 704 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_37_37 = check_hlds__typecheck_info__V_30_30;
#line 704 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_38_38 = check_hlds__typecheck_info__V_31_31;
#line 704 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_42_42 = check_hlds__typecheck_info__V_35_35;
#line 704 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_43_43 = check_hlds__typecheck_info__V_36_36;
#line 704 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_44_44 = check_hlds__typecheck_info__V_37_37;
#line 704 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_45_45 = check_hlds__typecheck_info__V_38_38;
#line 704 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_46_46 = check_hlds__typecheck_info__Constraints_10;
#line 708 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_14, (MR_Integer) 1)));
#line 708 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_14, (MR_Integer) 3)));
#line 708 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_14, (MR_Integer) 4)));
#line 708 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_14, (MR_Integer) 5)));
#line 708 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_14, (MR_Integer) 6)));

#line 712 "typecheck_info.m"
    {
#line 712 "typecheck_info.m"
      MR_Word base;
#line 712 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 712 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_TA_15 = base;
#line 712 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_42_42));
#line 712 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_43_43));
#line 712 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_44_44));
#line 712 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_45_45));
#line 712 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_46_46));
#line 712 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__Proofs_11));
#line 712 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__ConstraintMap_12));
#line 712 "typecheck_info.m"
    }
#line 704 "typecheck_info.m"
  }
#line 285 "typecheck_info.m"
}

#line 282 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__type_assign_set_constraint_map_3_p_0(
#line 282 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__ConstraintMap_4,
#line 282 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6,
#line 282 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_TA_7)
#line 282 "typecheck_info.m"
{
#line 701 "typecheck_info.m"
  {
#line 701 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 701 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 0)));
#line 701 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 1)));
#line 701 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 2)));
#line 701 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 3)));
#line 701 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 4)));
#line 701 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 5)));
#line 701 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 6)));

#line 701 "typecheck_info.m"
    {
#line 701 "typecheck_info.m"
      MR_Word base;
#line 701 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 701 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_TA_7 = base;
#line 701 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_9_9));
#line 701 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_10_10));
#line 701 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_11_11));
#line 701 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_12_12));
#line 701 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 701 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
#line 701 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__ConstraintMap_4));
#line 701 "typecheck_info.m"
    }
#line 701 "typecheck_info.m"
  }
#line 282 "typecheck_info.m"
}

#line 280 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__type_assign_set_constraint_proofs_3_p_0(
#line 280 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Proofs_4,
#line 280 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6,
#line 280 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_TA_7)
#line 280 "typecheck_info.m"
{
#line 699 "typecheck_info.m"
  {
#line 699 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 699 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 0)));
#line 699 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 1)));
#line 699 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 2)));
#line 699 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 3)));
#line 699 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 4)));
#line 699 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 6)));
#line 699 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 5)));

#line 699 "typecheck_info.m"
    {
#line 699 "typecheck_info.m"
      MR_Word base;
#line 699 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 699 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_TA_7 = base;
#line 699 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_9_9));
#line 699 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_10_10));
#line 699 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_11_11));
#line 699 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_12_12));
#line 699 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 699 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__Proofs_4));
#line 699 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
#line 699 "typecheck_info.m"
    }
#line 699 "typecheck_info.m"
  }
#line 280 "typecheck_info.m"
}

#line 278 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__type_assign_set_typeclass_constraints_3_p_0(
#line 278 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Constraints_4,
#line 278 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6,
#line 278 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_TA_7)
#line 278 "typecheck_info.m"
{
#line 697 "typecheck_info.m"
  {
#line 697 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 697 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 0)));
#line 697 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 1)));
#line 697 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 2)));
#line 697 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 3)));
#line 697 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 5)));
#line 697 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 6)));
#line 697 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 4)));

#line 697 "typecheck_info.m"
    {
#line 697 "typecheck_info.m"
      MR_Word base;
#line 697 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 697 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_TA_7 = base;
#line 697 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_9_9));
#line 697 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_10_10));
#line 697 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_11_11));
#line 697 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_12_12));
#line 697 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__Constraints_4));
#line 697 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
#line 697 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
#line 697 "typecheck_info.m"
    }
#line 697 "typecheck_info.m"
  }
#line 278 "typecheck_info.m"
}

#line 276 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__type_assign_set_type_bindings_3_p_0(
#line 276 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_4,
#line 276 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6,
#line 276 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_TA_7)
#line 276 "typecheck_info.m"
{
#line 695 "typecheck_info.m"
  {
#line 695 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 695 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 0)));
#line 695 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 1)));
#line 695 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 2)));
#line 695 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 4)));
#line 695 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 5)));
#line 695 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 6)));
#line 695 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 3)));

#line 695 "typecheck_info.m"
    {
#line 695 "typecheck_info.m"
      MR_Word base;
#line 695 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 695 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_TA_7 = base;
#line 695 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_9_9));
#line 695 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_10_10));
#line 695 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_11_11));
#line 695 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__TypeBindings_4));
#line 695 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 695 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
#line 695 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
#line 695 "typecheck_info.m"
    }
#line 695 "typecheck_info.m"
  }
#line 276 "typecheck_info.m"
}

#line 274 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__type_assign_set_head_type_params_3_p_0(
#line 274 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadTypeParams_4,
#line 274 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6,
#line 274 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_TA_7)
#line 274 "typecheck_info.m"
{
#line 693 "typecheck_info.m"
  {
#line 693 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 693 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 0)));
#line 693 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 1)));
#line 693 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 3)));
#line 693 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 4)));
#line 693 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 5)));
#line 693 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 6)));
#line 693 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 2)));

#line 693 "typecheck_info.m"
    {
#line 693 "typecheck_info.m"
      MR_Word base;
#line 693 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 693 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_TA_7 = base;
#line 693 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_9_9));
#line 693 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_10_10));
#line 693 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__HeadTypeParams_4));
#line 693 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_12_12));
#line 693 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 693 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
#line 693 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
#line 693 "typecheck_info.m"
    }
#line 693 "typecheck_info.m"
  }
#line 274 "typecheck_info.m"
}

#line 272 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__type_assign_set_typevarset_3_p_0(
#line 272 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TVarSet_4,
#line 272 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6,
#line 272 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_TA_7)
#line 272 "typecheck_info.m"
{
#line 691 "typecheck_info.m"
  {
#line 691 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 691 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 0)));
#line 691 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 2)));
#line 691 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 3)));
#line 691 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 4)));
#line 691 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 5)));
#line 691 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 6)));
#line 691 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 1)));

#line 691 "typecheck_info.m"
    {
#line 691 "typecheck_info.m"
      MR_Word base;
#line 691 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 691 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_TA_7 = base;
#line 691 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_9_9));
#line 691 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__TVarSet_4));
#line 691 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_11_11));
#line 691 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_12_12));
#line 691 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 691 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
#line 691 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
#line 691 "typecheck_info.m"
    }
#line 691 "typecheck_info.m"
  }
#line 272 "typecheck_info.m"
}

#line 270 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__type_assign_set_var_types_3_p_0(
#line 270 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarTypes_4,
#line 270 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6,
#line 270 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_TA_7)
#line 270 "typecheck_info.m"
{
#line 689 "typecheck_info.m"
  {
#line 689 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 689 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 1)));
#line 689 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 2)));
#line 689 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 3)));
#line 689 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 4)));
#line 689 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 5)));
#line 689 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 6)));
#line 689 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 0)));

#line 689 "typecheck_info.m"
    {
#line 689 "typecheck_info.m"
      MR_Word base;
#line 689 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 689 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_TA_7 = base;
#line 689 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__VarTypes_4));
#line 689 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_10_10));
#line 689 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_11_11));
#line 689 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_12_12));
#line 689 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 689 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
#line 689 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
#line 689 "typecheck_info.m"
    }
#line 689 "typecheck_info.m"
  }
#line 270 "typecheck_info.m"
}

#line 267 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__type_assign_get_constraint_map_2_p_0(
#line 267 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TA_3,
#line 267 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__2_2)
#line 267 "typecheck_info.m"
{
#line 686 "typecheck_info.m"
  {
#line 686 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 686 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 0)));
#line 686 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 1)));
#line 686 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 2)));
#line 686 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 3)));
#line 686 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 4)));
#line 686 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 5)));

#line 686 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 6)));
#line 686 "typecheck_info.m"
  }
#line 267 "typecheck_info.m"
}

#line 265 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__type_assign_get_constraint_proofs_2_p_0(
#line 265 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TA_3,
#line 265 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__2_2)
#line 265 "typecheck_info.m"
{
#line 685 "typecheck_info.m"
  {
#line 685 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 685 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 0)));
#line 685 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 1)));
#line 685 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 2)));
#line 685 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 3)));
#line 685 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 4)));
#line 685 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9;

#line 685 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 5)));
#line 685 "typecheck_info.m"
    check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 6)));
#line 685 "typecheck_info.m"
  }
#line 265 "typecheck_info.m"
}

#line 263 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__type_assign_get_typeclass_constraints_2_p_0(
#line 263 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TA_3,
#line 263 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__2_2)
#line 263 "typecheck_info.m"
{
#line 684 "typecheck_info.m"
  {
#line 684 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 684 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 0)));
#line 684 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 1)));
#line 684 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 2)));
#line 684 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 3)));
#line 684 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8;
#line 684 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9;

#line 684 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 4)));
#line 684 "typecheck_info.m"
    check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 5)));
#line 684 "typecheck_info.m"
    check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 6)));
#line 684 "typecheck_info.m"
  }
#line 263 "typecheck_info.m"
}

#line 261 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__type_assign_get_type_bindings_2_p_0(
#line 261 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TA_3,
#line 261 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__2_2)
#line 261 "typecheck_info.m"
{
#line 683 "typecheck_info.m"
  {
#line 683 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 683 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 0)));
#line 683 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 1)));
#line 683 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 2)));
#line 683 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7;
#line 683 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8;
#line 683 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9;

#line 683 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 3)));
#line 683 "typecheck_info.m"
    check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 4)));
#line 683 "typecheck_info.m"
    check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 5)));
#line 683 "typecheck_info.m"
    check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 6)));
#line 683 "typecheck_info.m"
  }
#line 261 "typecheck_info.m"
}

#line 259 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__type_assign_get_head_type_params_2_p_0(
#line 259 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TA_3,
#line 259 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__2_2)
#line 259 "typecheck_info.m"
{
#line 682 "typecheck_info.m"
  {
#line 682 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 682 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 0)));
#line 682 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 1)));
#line 682 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6;
#line 682 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7;
#line 682 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8;
#line 682 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9;

#line 682 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 2)));
#line 682 "typecheck_info.m"
    check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 3)));
#line 682 "typecheck_info.m"
    check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 4)));
#line 682 "typecheck_info.m"
    check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 5)));
#line 682 "typecheck_info.m"
    check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 6)));
#line 682 "typecheck_info.m"
  }
#line 259 "typecheck_info.m"
}

#line 257 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__type_assign_get_typevarset_2_p_0(
#line 257 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TA_3,
#line 257 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__2_2)
#line 257 "typecheck_info.m"
{
#line 681 "typecheck_info.m"
  {
#line 681 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 681 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 0)));
#line 681 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5;
#line 681 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6;
#line 681 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7;
#line 681 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8;
#line 681 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9;

#line 681 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 1)));
#line 681 "typecheck_info.m"
    check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 2)));
#line 681 "typecheck_info.m"
    check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 3)));
#line 681 "typecheck_info.m"
    check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 4)));
#line 681 "typecheck_info.m"
    check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 5)));
#line 681 "typecheck_info.m"
    check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 6)));
#line 681 "typecheck_info.m"
  }
#line 257 "typecheck_info.m"
}

#line 255 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__type_assign_get_var_types_2_p_0(
#line 255 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TA_3,
#line 255 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__2_2)
#line 255 "typecheck_info.m"
{
#line 680 "typecheck_info.m"
  {
#line 680 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 680 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4;
#line 680 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5;
#line 680 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6;
#line 680 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7;
#line 680 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8;
#line 680 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9;

#line 680 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 0)));
#line 680 "typecheck_info.m"
    check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 1)));
#line 680 "typecheck_info.m"
    check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 2)));
#line 680 "typecheck_info.m"
    check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 3)));
#line 680 "typecheck_info.m"
    check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 4)));
#line 680 "typecheck_info.m"
    check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 5)));
#line 680 "typecheck_info.m"
    check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 6)));
#line 680 "typecheck_info.m"
  }
#line 255 "typecheck_info.m"
}

#line 219 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_add_pred_marker_3_p_0(
#line 219 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Marker_4,
#line 219 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8,
#line 219 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_Info_9)
#line 219 "typecheck_info.m"
{
#line 673 "typecheck_info.m"
  {
#line 673 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 673 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Markers0_6;
#line 673 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Markers_7;
#line 673 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 673 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12;
#line 673 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13;
#line 673 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_29_29;
#line 673 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_30_30;
#line 673 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_31_31;
#line 673 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_32_32;
#line 673 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_33_33;
#line 673 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_34_34;
#line 673 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_35_35;
#line 674 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 674 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 674 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 674 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 674 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 674 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 674 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
#line 674 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 0)));
#line 674 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 1)));
#line 674 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_23_23;
#line 674 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_24_24;
#line 674 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_25_25;
#line 674 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_26_26;
#line 674 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_27_27;
#line 674 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_28_28;
#line 676 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_36_36;
#line 676 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_37_37;
#line 676 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_39_39;
#line 676 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_40_40;
#line 676 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_41_41;
#line 676 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_42_42;
#line 676 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_43_43;
#line 676 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_44_44;
#line 676 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_38_38;

#line 674 "typecheck_info.m"
    check_hlds__typecheck_info__Markers0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 2)));
#line 674 "typecheck_info.m"
    check_hlds__typecheck_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 3)));
#line 674 "typecheck_info.m"
    check_hlds__typecheck_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 4)));
#line 674 "typecheck_info.m"
    check_hlds__typecheck_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 5)));
#line 674 "typecheck_info.m"
    check_hlds__typecheck_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 6)));
#line 674 "typecheck_info.m"
    check_hlds__typecheck_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 7)));
#line 674 "typecheck_info.m"
    check_hlds__typecheck_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 8)));
#line 675 "typecheck_info.m"
    {
#line 675 "typecheck_info.m"
      hlds__hlds_pred__add_marker_3_p_0(check_hlds__typecheck_info__Marker_4, check_hlds__typecheck_info__Markers0_6, &check_hlds__typecheck_info__Markers_7);
    }
#line 676 "typecheck_info.m"
    check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 676 "typecheck_info.m"
    check_hlds__typecheck_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 676 "typecheck_info.m"
    check_hlds__typecheck_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 676 "typecheck_info.m"
    check_hlds__typecheck_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 676 "typecheck_info.m"
    check_hlds__typecheck_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 676 "typecheck_info.m"
    check_hlds__typecheck_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 676 "typecheck_info.m"
    check_hlds__typecheck_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 676 "typecheck_info.m"
    check_hlds__typecheck_info__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
#line 676 "typecheck_info.m"
    check_hlds__typecheck_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 0)));
#line 676 "typecheck_info.m"
    check_hlds__typecheck_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 1)));
#line 676 "typecheck_info.m"
    check_hlds__typecheck_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 2)));
#line 676 "typecheck_info.m"
    check_hlds__typecheck_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 3)));
#line 676 "typecheck_info.m"
    check_hlds__typecheck_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 4)));
#line 676 "typecheck_info.m"
    check_hlds__typecheck_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 5)));
#line 676 "typecheck_info.m"
    check_hlds__typecheck_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 6)));
#line 676 "typecheck_info.m"
    check_hlds__typecheck_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 7)));
#line 676 "typecheck_info.m"
    check_hlds__typecheck_info__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 8)));
#line 676 "typecheck_info.m"
    {
#line 676 "typecheck_info.m"
      check_hlds__typecheck_info__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 676 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, 0) = ((MR_Box) (check_hlds__typecheck_info__V_36_36));
#line 676 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, 1) = ((MR_Box) (check_hlds__typecheck_info__V_37_37));
#line 676 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, 2) = ((MR_Box) (check_hlds__typecheck_info__Markers_7));
#line 676 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, 3) = ((MR_Box) (check_hlds__typecheck_info__V_39_39));
#line 676 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, 4) = ((MR_Box) (check_hlds__typecheck_info__V_40_40));
#line 676 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, 5) = ((MR_Box) (check_hlds__typecheck_info__V_41_41));
#line 676 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, 6) = ((MR_Box) (check_hlds__typecheck_info__V_42_42));
#line 676 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, 7) = ((MR_Box) (check_hlds__typecheck_info__V_43_43));
#line 676 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, 8) = ((MR_Box) (check_hlds__typecheck_info__V_44_44));
#line 676 "typecheck_info.m"
    }
#line 676 "typecheck_info.m"
    {
#line 676 "typecheck_info.m"
      MR_Word base;
#line 676 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 676 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_Info_9 = base;
#line 676 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 676 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_29_29));
#line 676 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_30_30));
#line 676 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_31_31));
#line 676 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_32_32));
#line 676 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__V_33_33));
#line 676 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__V_34_34));
#line 676 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__typecheck_info__V_35_35));
#line 676 "typecheck_info.m"
    }
#line 673 "typecheck_info.m"
  }
#line 219 "typecheck_info.m"
}

#line 216 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_all_errors_2_p_0(
#line 216 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 216 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__Errors_4)
#line 216 "typecheck_info.m"
{
#line 662 "typecheck_info.m"
  {
#line 662 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 662 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Errors0_5;
#line 662 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__MaybeOverloadError_6;
#line 662 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 615 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 615 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 615 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 615 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 615 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 615 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 615 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));
#line 615 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 0)));
#line 615 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 1)));
#line 615 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 2)));
#line 615 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 3)));
#line 615 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 4)));
#line 615 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_23_23;
#line 615 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_24_24;

#line 615 "typecheck_info.m"
    check_hlds__typecheck_info__Errors0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 5)));
#line 615 "typecheck_info.m"
    check_hlds__typecheck_info__MaybeOverloadError_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 6)));
#line 615 "typecheck_info.m"
    check_hlds__typecheck_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 7)));
#line 615 "typecheck_info.m"
    check_hlds__typecheck_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 8)));
#line 668 "typecheck_info.m"
    if ((check_hlds__typecheck_info__MaybeOverloadError_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 667 "typecheck_info.m"
      *check_hlds__typecheck_info__Errors_4 = check_hlds__typecheck_info__Errors0_5;
#line 668 "typecheck_info.m"
    else
#line 669 "typecheck_info.m"
      {
#line 669 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__OverloadError_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__MaybeOverloadError_6, (MR_Integer) 0)));

#line 670 "typecheck_info.m"
        {
#line 670 "typecheck_info.m"
          MR_Word base;
#line 670 "typecheck_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "typecheck_info.m"
          *check_hlds__typecheck_info__Errors_4 = base;
#line 670 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck_info__OverloadError_7));
#line 670 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck_info__Errors0_5));
#line 670 "typecheck_info.m"
        }
#line 669 "typecheck_info.m"
      }
#line 662 "typecheck_info.m"
  }
#line 216 "typecheck_info.m"
}

#line 213 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(
#line 213 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Error_4,
#line 213 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8,
#line 213 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_Info_9)
#line 213 "typecheck_info.m"
{
#line 657 "typecheck_info.m"
  {
#line 657 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 657 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Errors0_6;
#line 657 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Errors_7;
#line 657 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 657 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 657 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 657 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 657 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 657 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 657 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 657 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
#line 657 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 0)));
#line 657 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 1)));
#line 657 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 2)));
#line 657 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 3)));
#line 657 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 4)));
#line 657 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_25_25;
#line 657 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_26_26;
#line 657 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_27_27;
#line 657 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_31_31;

#line 615 "typecheck_info.m"
    check_hlds__typecheck_info__Errors0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 5)));
#line 615 "typecheck_info.m"
    check_hlds__typecheck_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 6)));
#line 615 "typecheck_info.m"
    check_hlds__typecheck_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 7)));
#line 615 "typecheck_info.m"
    check_hlds__typecheck_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 8)));
#line 659 "typecheck_info.m"
    {
#line 659 "typecheck_info.m"
      check_hlds__typecheck_info__Errors_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 659 "typecheck_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__Errors_7, 0) = ((MR_Box) (check_hlds__typecheck_info__Error_4));
#line 659 "typecheck_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__Errors_7, 1) = ((MR_Box) (check_hlds__typecheck_info__Errors0_6));
#line 659 "typecheck_info.m"
    }
#line 628 "typecheck_info.m"
    {
#line 628 "typecheck_info.m"
      check_hlds__typecheck_info__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 628 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_31_31, 0) = ((MR_Box) (check_hlds__typecheck_info__V_20_20));
#line 628 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_31_31, 1) = ((MR_Box) (check_hlds__typecheck_info__V_21_21));
#line 628 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_31_31, 2) = ((MR_Box) (check_hlds__typecheck_info__V_22_22));
#line 628 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_31_31, 3) = ((MR_Box) (check_hlds__typecheck_info__V_23_23));
#line 628 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_31_31, 4) = ((MR_Box) (check_hlds__typecheck_info__V_24_24));
#line 628 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_31_31, 5) = ((MR_Box) (check_hlds__typecheck_info__Errors_7));
#line 628 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_31_31, 6) = ((MR_Box) (check_hlds__typecheck_info__V_25_25));
#line 628 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_31_31, 7) = ((MR_Box) (check_hlds__typecheck_info__V_26_26));
#line 628 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_31_31, 8) = ((MR_Box) (check_hlds__typecheck_info__V_27_27));
#line 628 "typecheck_info.m"
    }
#line 628 "typecheck_info.m"
    {
#line 628 "typecheck_info.m"
      MR_Word base;
#line 628 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 628 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_Info_9 = base;
#line 628 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_31_31));
#line 628 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 628 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
#line 628 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
#line 628 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_16_16));
#line 628 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__V_17_17));
#line 628 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__V_18_18));
#line 628 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__typecheck_info__V_19_19));
#line 628 "typecheck_info.m"
    }
#line 657 "typecheck_info.m"
  }
#line 213 "typecheck_info.m"
}

#line 210 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_p_0(
#line 210 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Symbol_5,
#line 210 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Context_6,
#line 210 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12,
#line 210 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_Info_13)
#line 210 "typecheck_info.m"
{
#line 646 "typecheck_info.m"
  {
#line 646 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 646 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__SymbolMap0_8;
#line 646 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__SymbolMap_11;
#line 646 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
#line 646 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_42_42;
#line 646 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_43_43;
#line 646 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_44_44;
#line 646 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_45_45;
#line 646 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_46_46;
#line 646 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_47_47;
#line 646 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_48_48;
#line 646 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_49_49;
#line 646 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_50_50;
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 1)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
#line 619 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
#line 619 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 7)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_24_24, (MR_Integer) 0)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_24_24, (MR_Integer) 1)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_24_24, (MR_Integer) 2)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_24_24, (MR_Integer) 3)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_24_24, (MR_Integer) 4)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_24_24, (MR_Integer) 5)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_24_24, (MR_Integer) 6)));
#line 619 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_39_39;
#line 651 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__OldContexts_9;
#line 648 "typecheck_info.m"
    MR_Box check_hlds__typecheck_info__conv0_OldContexts_9;
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_51_51;
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_52_52;
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_53_53;
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_54_54;
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_55_55;
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_56_56;
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_57_57;
#line 632 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_59_59;
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_58_58;

#line 619 "typecheck_info.m"
    check_hlds__typecheck_info__SymbolMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_24_24, (MR_Integer) 7)));
#line 619 "typecheck_info.m"
    check_hlds__typecheck_info__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_24_24, (MR_Integer) 8)));
#line 648 "typecheck_info.m"
    {
#line 648 "typecheck_info.m"
      check_hlds__typecheck_info__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0, (MR_Word) &check_hlds__typecheck_info_scalar_common_1[1], check_hlds__typecheck_info__SymbolMap0_8, ((MR_Box) (check_hlds__typecheck_info__Symbol_5)), &check_hlds__typecheck_info__conv0_OldContexts_9);
    }
#line 648 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 648 "typecheck_info.m"
      {
#line 648 "typecheck_info.m"
        check_hlds__typecheck_info__OldContexts_9 = ((MR_Word) check_hlds__typecheck_info__conv0_OldContexts_9);
#line 648 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 648 "typecheck_info.m"
      }
#line 651 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 649 "typecheck_info.m"
      {
#line 649 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__Contexts_10;

#line 649 "typecheck_info.m"
        {
#line 649 "typecheck_info.m"
          check_hlds__typecheck_info__Contexts_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 649 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__Contexts_10, 0) = ((MR_Box) (check_hlds__typecheck_info__Context_6));
#line 649 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__Contexts_10, 1) = ((MR_Box) (check_hlds__typecheck_info__OldContexts_9));
#line 649 "typecheck_info.m"
        }
#line 650 "typecheck_info.m"
        {
#line 650 "typecheck_info.m"
          mercury__map__det_update_4_p_0((MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0, (MR_Word) &check_hlds__typecheck_info_scalar_common_1[1], ((MR_Box) (check_hlds__typecheck_info__Symbol_5)), ((MR_Box) (check_hlds__typecheck_info__Contexts_10)), check_hlds__typecheck_info__SymbolMap0_8, &check_hlds__typecheck_info__SymbolMap_11);
        }
#line 649 "typecheck_info.m"
      }
#line 651 "typecheck_info.m"
    else
#line 652 "typecheck_info.m"
      {
#line 652 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__Contexts_16;

#line 652 "typecheck_info.m"
        {
#line 652 "typecheck_info.m"
          check_hlds__typecheck_info__Contexts_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 652 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__Contexts_16, 0) = ((MR_Box) (check_hlds__typecheck_info__Context_6));
#line 652 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__Contexts_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 652 "typecheck_info.m"
        }
#line 653 "typecheck_info.m"
        {
#line 653 "typecheck_info.m"
          mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0, (MR_Word) &check_hlds__typecheck_info_scalar_common_1[1], ((MR_Box) (check_hlds__typecheck_info__Symbol_5)), ((MR_Box) (check_hlds__typecheck_info__Contexts_16)), check_hlds__typecheck_info__SymbolMap0_8, &check_hlds__typecheck_info__SymbolMap_11);
        }
#line 652 "typecheck_info.m"
      }
#line 632 "typecheck_info.m"
    check_hlds__typecheck_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
#line 632 "typecheck_info.m"
    check_hlds__typecheck_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 1)));
#line 632 "typecheck_info.m"
    check_hlds__typecheck_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
#line 632 "typecheck_info.m"
    check_hlds__typecheck_info__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
#line 632 "typecheck_info.m"
    check_hlds__typecheck_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
#line 632 "typecheck_info.m"
    check_hlds__typecheck_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
#line 632 "typecheck_info.m"
    check_hlds__typecheck_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
#line 632 "typecheck_info.m"
    check_hlds__typecheck_info__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 7)));
#line 632 "typecheck_info.m"
    check_hlds__typecheck_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_42_42, (MR_Integer) 0)));
#line 632 "typecheck_info.m"
    check_hlds__typecheck_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_42_42, (MR_Integer) 1)));
#line 632 "typecheck_info.m"
    check_hlds__typecheck_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_42_42, (MR_Integer) 2)));
#line 632 "typecheck_info.m"
    check_hlds__typecheck_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_42_42, (MR_Integer) 3)));
#line 632 "typecheck_info.m"
    check_hlds__typecheck_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_42_42, (MR_Integer) 4)));
#line 632 "typecheck_info.m"
    check_hlds__typecheck_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_42_42, (MR_Integer) 5)));
#line 632 "typecheck_info.m"
    check_hlds__typecheck_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_42_42, (MR_Integer) 6)));
#line 632 "typecheck_info.m"
    check_hlds__typecheck_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_42_42, (MR_Integer) 7)));
#line 632 "typecheck_info.m"
    check_hlds__typecheck_info__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_42_42, (MR_Integer) 8)));
#line 632 "typecheck_info.m"
    {
#line 632 "typecheck_info.m"
      check_hlds__typecheck_info__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_43_43, 0) = ((MR_Box) (check_hlds__typecheck_info__V_51_51));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_43_43, 1) = ((MR_Box) (check_hlds__typecheck_info__V_52_52));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_43_43, 2) = ((MR_Box) (check_hlds__typecheck_info__V_53_53));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_43_43, 3) = ((MR_Box) (check_hlds__typecheck_info__V_54_54));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_43_43, 4) = ((MR_Box) (check_hlds__typecheck_info__V_55_55));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_43_43, 5) = ((MR_Box) (check_hlds__typecheck_info__V_56_56));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_43_43, 6) = ((MR_Box) (check_hlds__typecheck_info__V_57_57));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_43_43, 7) = ((MR_Box) (check_hlds__typecheck_info__SymbolMap_11));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_43_43, 8) = ((MR_Box) (check_hlds__typecheck_info__V_59_59));
#line 632 "typecheck_info.m"
    }
#line 632 "typecheck_info.m"
    {
#line 632 "typecheck_info.m"
      MR_Word base;
#line 632 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 632 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_Info_13 = base;
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_43_43));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_44_44));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_45_45));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_46_46));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_47_47));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__V_48_48));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__V_49_49));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__typecheck_info__V_50_50));
#line 632 "typecheck_info.m"
    }
#line 646 "typecheck_info.m"
  }
#line 210 "typecheck_info.m"
}

#line 208 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_ctors_2_p_0(
#line 208 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 208 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__Ctors_4)
#line 208 "typecheck_info.m"
{
#line 643 "typecheck_info.m"
  {
#line 643 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 643 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 644 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 644 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 644 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 644 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 644 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 644 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 644 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));

#line 644 "typecheck_info.m"
    {
#line 644 "typecheck_info.m"
      hlds__hlds_module__module_info_get_cons_table_2_p_0(check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__Ctors_4);
#line 644 "typecheck_info.m"
      return;
    }
#line 643 "typecheck_info.m"
  }
#line 208 "typecheck_info.m"
}

#line 207 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_types_2_p_0(
#line 207 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 207 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__Types_4)
#line 207 "typecheck_info.m"
{
#line 641 "typecheck_info.m"
  {
#line 641 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 641 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 642 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 642 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 642 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 642 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 642 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 642 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 642 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));

#line 642 "typecheck_info.m"
    {
#line 642 "typecheck_info.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__Types_4);
#line 642 "typecheck_info.m"
      return;
    }
#line 641 "typecheck_info.m"
  }
#line 207 "typecheck_info.m"
}

#line 205 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_preds_2_p_0(
#line 205 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 205 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__Preds_4)
#line 205 "typecheck_info.m"
{
#line 639 "typecheck_info.m"
  {
#line 639 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 639 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 640 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 640 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 640 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 640 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 640 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 640 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 640 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));

#line 640 "typecheck_info.m"
    {
#line 640 "typecheck_info.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__Preds_4);
#line 640 "typecheck_info.m"
      return;
    }
#line 639 "typecheck_info.m"
  }
#line 205 "typecheck_info.m"
}

#line 203 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_module_name_2_p_0(
#line 203 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 203 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__Name_4)
#line 203 "typecheck_info.m"
{
#line 637 "typecheck_info.m"
  {
#line 637 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 637 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 638 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 638 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 638 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 638 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 638 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 638 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 638 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));

#line 638 "typecheck_info.m"
    {
#line 638 "typecheck_info.m"
      hlds__hlds_module__module_info_get_name_2_p_0(check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__Name_4);
#line 638 "typecheck_info.m"
      return;
    }
#line 637 "typecheck_info.m"
  }
#line 203 "typecheck_info.m"
}

#line 195 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_set_overloaded_symbols_3_p_0(
#line 195 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Symbols_4,
#line 195 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_5,
#line 195 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__3_3)
#line 195 "typecheck_info.m"
{
#line 632 "typecheck_info.m"
  {
#line 632 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 0)));
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7;
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 1)));
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 2)));
#line 632 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 3)));
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 4)));
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 5)));
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 6)));
#line 632 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 7)));
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 0)));
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 1)));
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 2)));
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 3)));
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 4)));
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 5)));
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 6)));
#line 632 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 8)));
#line 632 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 7)));

#line 632 "typecheck_info.m"
    {
#line 632 "typecheck_info.m"
      check_hlds__typecheck_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 0) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 1) = ((MR_Box) (check_hlds__typecheck_info__V_16_16));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 2) = ((MR_Box) (check_hlds__typecheck_info__V_17_17));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 3) = ((MR_Box) (check_hlds__typecheck_info__V_18_18));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 4) = ((MR_Box) (check_hlds__typecheck_info__V_19_19));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 5) = ((MR_Box) (check_hlds__typecheck_info__V_20_20));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 6) = ((MR_Box) (check_hlds__typecheck_info__V_21_21));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 7) = ((MR_Box) (check_hlds__typecheck_info__Symbols_4));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 8) = ((MR_Box) (check_hlds__typecheck_info__V_23_23));
#line 632 "typecheck_info.m"
    }
#line 632 "typecheck_info.m"
    {
#line 632 "typecheck_info.m"
      MR_Word base;
#line 632 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 632 "typecheck_info.m"
      *check_hlds__typecheck_info__HeadVar__3_3 = base;
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_7_7));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_8_8));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_9_9));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_10_10));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_11_11));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__V_12_12));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 632 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
#line 632 "typecheck_info.m"
    }
#line 632 "typecheck_info.m"
  }
#line 195 "typecheck_info.m"
}

#line 193 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_set_overload_error_3_p_0(
#line 193 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__OverloadSpec_4,
#line 193 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_5,
#line 193 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__3_3)
#line 193 "typecheck_info.m"
{
#line 630 "typecheck_info.m"
  {
#line 630 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 630 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 0)));
#line 630 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7;
#line 630 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 1)));
#line 630 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 2)));
#line 630 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 3)));
#line 630 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 4)));
#line 630 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 5)));
#line 630 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 6)));
#line 630 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 7)));
#line 630 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 0)));
#line 630 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 1)));
#line 630 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 2)));
#line 630 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 3)));
#line 630 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 4)));
#line 630 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 5)));
#line 630 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 7)));
#line 630 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 8)));
#line 630 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 6)));

#line 630 "typecheck_info.m"
    {
#line 630 "typecheck_info.m"
      check_hlds__typecheck_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 630 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 0) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
#line 630 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 1) = ((MR_Box) (check_hlds__typecheck_info__V_16_16));
#line 630 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 2) = ((MR_Box) (check_hlds__typecheck_info__V_17_17));
#line 630 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 3) = ((MR_Box) (check_hlds__typecheck_info__V_18_18));
#line 630 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 4) = ((MR_Box) (check_hlds__typecheck_info__V_19_19));
#line 630 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 5) = ((MR_Box) (check_hlds__typecheck_info__V_20_20));
#line 630 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 6) = ((MR_Box) (check_hlds__typecheck_info__OverloadSpec_4));
#line 630 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 7) = ((MR_Box) (check_hlds__typecheck_info__V_22_22));
#line 630 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 8) = ((MR_Box) (check_hlds__typecheck_info__V_23_23));
#line 630 "typecheck_info.m"
    }
#line 630 "typecheck_info.m"
    {
#line 630 "typecheck_info.m"
      MR_Word base;
#line 630 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 630 "typecheck_info.m"
      *check_hlds__typecheck_info__HeadVar__3_3 = base;
#line 630 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_7_7));
#line 630 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_8_8));
#line 630 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_9_9));
#line 630 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_10_10));
#line 630 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_11_11));
#line 630 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__V_12_12));
#line 630 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 630 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
#line 630 "typecheck_info.m"
    }
#line 630 "typecheck_info.m"
  }
#line 193 "typecheck_info.m"
}

#line 191 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_set_called_predid_3_p_0(
#line 191 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__PredCallId_4,
#line 191 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_5,
#line 191 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__3_3)
#line 191 "typecheck_info.m"
{
#line 626 "typecheck_info.m"
  {
#line 626 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 626 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 0)));
#line 626 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 1)));
#line 626 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 3)));
#line 626 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 4)));
#line 626 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 5)));
#line 626 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 6)));
#line 626 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 7)));
#line 626 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 2)));

#line 626 "typecheck_info.m"
    {
#line 626 "typecheck_info.m"
      MR_Word base;
#line 626 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 626 "typecheck_info.m"
      *check_hlds__typecheck_info__HeadVar__3_3 = base;
#line 626 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_6_6));
#line 626 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_7_7));
#line 626 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__PredCallId_4));
#line 626 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_9_9));
#line 626 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_10_10));
#line 626 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__V_11_11));
#line 626 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__V_12_12));
#line 626 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 626 "typecheck_info.m"
    }
#line 626 "typecheck_info.m"
  }
#line 191 "typecheck_info.m"
}

#line 188 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_ambiguity_error_limit_2_p_0(
#line 188 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 188 "typecheck_info.m"
  MR_Integer * check_hlds__typecheck_info__HeadVar__2_2)
#line 188 "typecheck_info.m"
{
#line 621 "typecheck_info.m"
  {
#line 621 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 621 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 621 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 621 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 621 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 621 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 621 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 621 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 621 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));
#line 621 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 0)));
#line 621 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 1)));
#line 621 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 2)));
#line 621 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 3)));
#line 621 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 4)));
#line 621 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 5)));
#line 621 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 6)));
#line 621 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 7)));

#line 621 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 8)));
#line 621 "typecheck_info.m"
  }
#line 188 "typecheck_info.m"
}

#line 186 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_ambiguity_warn_limit_2_p_0(
#line 186 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 186 "typecheck_info.m"
  MR_Integer * check_hlds__typecheck_info__HeadVar__2_2)
#line 186 "typecheck_info.m"
{
#line 623 "typecheck_info.m"
  {
#line 623 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 623 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 623 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 623 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 623 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 623 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 623 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 623 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));

#line 623 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));
#line 623 "typecheck_info.m"
  }
#line 186 "typecheck_info.m"
}

#line 184 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_overloaded_symbols_2_p_0(
#line 184 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 184 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__2_2)
#line 184 "typecheck_info.m"
{
#line 619 "typecheck_info.m"
  {
#line 619 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 619 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 619 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 0)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 1)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 2)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 3)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 4)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 5)));
#line 619 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 6)));
#line 619 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_19_19;

#line 619 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 7)));
#line 619 "typecheck_info.m"
    check_hlds__typecheck_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 8)));
#line 619 "typecheck_info.m"
  }
#line 184 "typecheck_info.m"
}

#line 182 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_overload_error_2_p_0(
#line 182 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 182 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__2_2)
#line 182 "typecheck_info.m"
{
#line 617 "typecheck_info.m"
  {
#line 617 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 617 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 617 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 617 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 617 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 617 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 617 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 617 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 617 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));
#line 617 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 0)));
#line 617 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 1)));
#line 617 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 2)));
#line 617 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 3)));
#line 617 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 4)));
#line 617 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 5)));
#line 617 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18;
#line 617 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_19_19;

#line 617 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 6)));
#line 617 "typecheck_info.m"
    check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 7)));
#line 617 "typecheck_info.m"
    check_hlds__typecheck_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 8)));
#line 617 "typecheck_info.m"
  }
#line 182 "typecheck_info.m"
}

#line 181 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_varset_2_p_0(
#line 181 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 181 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__2_2)
#line 181 "typecheck_info.m"
{
#line 614 "typecheck_info.m"
  {
#line 614 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 614 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 614 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 614 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 614 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 614 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 614 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 614 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 614 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));
#line 614 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 0)));
#line 614 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 1)));
#line 614 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 2)));
#line 614 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 3)));
#line 614 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16;
#line 614 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17;
#line 614 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18;
#line 614 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_19_19;

#line 614 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 4)));
#line 614 "typecheck_info.m"
    check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 5)));
#line 614 "typecheck_info.m"
    check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 6)));
#line 614 "typecheck_info.m"
    check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 7)));
#line 614 "typecheck_info.m"
    check_hlds__typecheck_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 8)));
#line 614 "typecheck_info.m"
  }
#line 181 "typecheck_info.m"
}

#line 178 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_called_predid_2_p_0(
#line 178 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 178 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__2_2)
#line 178 "typecheck_info.m"
{
#line 613 "typecheck_info.m"
  {
#line 613 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 613 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 613 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 613 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_6_6;
#line 613 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7;
#line 613 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8;
#line 613 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9;
#line 613 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_10_10;

#line 613 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 613 "typecheck_info.m"
    check_hlds__typecheck_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 613 "typecheck_info.m"
    check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 613 "typecheck_info.m"
    check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 613 "typecheck_info.m"
    check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 613 "typecheck_info.m"
    check_hlds__typecheck_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));
#line 613 "typecheck_info.m"
  }
#line 178 "typecheck_info.m"
}

#line 176 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_is_field_access_function_2_p_0(
#line 176 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 176 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__2_2)
#line 176 "typecheck_info.m"
{
#line 611 "typecheck_info.m"
  {
#line 611 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 611 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 611 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 611 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 611 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 611 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 611 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 611 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 611 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));
#line 611 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 0)));
#line 611 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 1)));
#line 611 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 2)));
#line 611 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15;
#line 611 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16;
#line 611 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17;
#line 611 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18;
#line 611 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_19_19;

#line 611 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 3)));
#line 611 "typecheck_info.m"
    check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 4)));
#line 611 "typecheck_info.m"
    check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 5)));
#line 611 "typecheck_info.m"
    check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 6)));
#line 611 "typecheck_info.m"
    check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 7)));
#line 611 "typecheck_info.m"
    check_hlds__typecheck_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 8)));
#line 611 "typecheck_info.m"
  }
#line 176 "typecheck_info.m"
}

#line 174 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_pred_markers_2_p_0(
#line 174 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 174 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__2_2)
#line 174 "typecheck_info.m"
{
#line 607 "typecheck_info.m"
  {
#line 607 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 607 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 607 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 607 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 607 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 607 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 607 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 607 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 607 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));
#line 607 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 0)));
#line 607 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 1)));
#line 607 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14;
#line 607 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15;
#line 607 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16;
#line 607 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17;
#line 607 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18;
#line 607 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_19_19;

#line 607 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 2)));
#line 607 "typecheck_info.m"
    check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 3)));
#line 607 "typecheck_info.m"
    check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 4)));
#line 607 "typecheck_info.m"
    check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 5)));
#line 607 "typecheck_info.m"
    check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 6)));
#line 607 "typecheck_info.m"
    check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 7)));
#line 607 "typecheck_info.m"
    check_hlds__typecheck_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 8)));
#line 607 "typecheck_info.m"
  }
#line 174 "typecheck_info.m"
}

#line 172 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_pred_import_status_2_p_0(
#line 172 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 172 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__2_2)
#line 172 "typecheck_info.m"
{
#line 609 "typecheck_info.m"
  {
#line 609 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 609 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 609 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 609 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 609 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 609 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 609 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 609 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 609 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));
#line 609 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 0)));
#line 609 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13;
#line 609 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14;
#line 609 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15;
#line 609 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16;
#line 609 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17;
#line 609 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18;
#line 609 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_19_19;

#line 609 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 1)));
#line 609 "typecheck_info.m"
    check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 2)));
#line 609 "typecheck_info.m"
    check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 3)));
#line 609 "typecheck_info.m"
    check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 4)));
#line 609 "typecheck_info.m"
    check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 5)));
#line 609 "typecheck_info.m"
    check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 6)));
#line 609 "typecheck_info.m"
    check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 7)));
#line 609 "typecheck_info.m"
    check_hlds__typecheck_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 8)));
#line 609 "typecheck_info.m"
  }
#line 172 "typecheck_info.m"
}

#line 171 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_predid_2_p_0(
#line 171 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_3,
#line 171 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__HeadVar__2_2)
#line 171 "typecheck_info.m"
{
#line 605 "typecheck_info.m"
  {
#line 605 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 605 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 605 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 605 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 605 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 605 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 605 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 605 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 605 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));
#line 605 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12;
#line 605 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13;
#line 605 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14;
#line 605 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15;
#line 605 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16;
#line 605 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17;
#line 605 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18;
#line 605 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_19_19;

#line 605 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 0)));
#line 605 "typecheck_info.m"
    check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 1)));
#line 605 "typecheck_info.m"
    check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 2)));
#line 605 "typecheck_info.m"
    check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 3)));
#line 605 "typecheck_info.m"
    check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 4)));
#line 605 "typecheck_info.m"
    check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 5)));
#line 605 "typecheck_info.m"
    check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 6)));
#line 605 "typecheck_info.m"
    check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 7)));
#line 605 "typecheck_info.m"
    check_hlds__typecheck_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 8)));
#line 605 "typecheck_info.m"
  }
#line 171 "typecheck_info.m"
}

#line 520 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0_4(
#line 520 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__closure_arg,
#line 520 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 520 "typecheck_info.m"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_2)
#line 520 "typecheck_info.m"
{
#line 520 "typecheck_info.m"
  {
#line 520 "typecheck_info.m"
    MR_Box check_hlds__typecheck_info__closure = check_hlds__typecheck_info__closure_arg;
#line 520 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__conv7_HeadVar__3_3;

#line 520 "typecheck_info.m"
    {
#line 520 "typecheck_info.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), &check_hlds__typecheck_info__conv7_HeadVar__3_3);
    }
#line 520 "typecheck_info.m"
    *check_hlds__typecheck_info__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck_info__conv7_HeadVar__3_3));
#line 520 "typecheck_info.m"
  }
#line 520 "typecheck_info.m"
}

#line 468 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0_3(
#line 468 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__closure_arg,
#line 468 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 468 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 468 "typecheck_info.m"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_3)
#line 468 "typecheck_info.m"
{
#line 468 "typecheck_info.m"
  {
#line 468 "typecheck_info.m"
    MR_Box check_hlds__typecheck_info__closure = check_hlds__typecheck_info__closure_arg;
#line 468 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__conv5_HeadVar__3_3;

#line 468 "typecheck_info.m"
    {
#line 468 "typecheck_info.m"
      hlds__hlds_data__update_constraint_map_3_p_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), &check_hlds__typecheck_info__conv5_HeadVar__3_3);
    }
#line 468 "typecheck_info.m"
    *check_hlds__typecheck_info__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck_info__conv5_HeadVar__3_3));
#line 468 "typecheck_info.m"
  }
#line 468 "typecheck_info.m"
}

#line 466 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0_2(
#line 466 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__closure_arg,
#line 466 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 466 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 466 "typecheck_info.m"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_3)
#line 466 "typecheck_info.m"
{
#line 466 "typecheck_info.m"
  {
#line 466 "typecheck_info.m"
    MR_Box check_hlds__typecheck_info__closure = check_hlds__typecheck_info__closure_arg;
#line 466 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__conv3_HeadVar__3_3;

#line 466 "typecheck_info.m"
    {
#line 466 "typecheck_info.m"
      hlds__hlds_data__update_constraint_map_3_p_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), &check_hlds__typecheck_info__conv3_HeadVar__3_3);
    }
#line 466 "typecheck_info.m"
    *check_hlds__typecheck_info__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck_info__conv3_HeadVar__3_3));
#line 466 "typecheck_info.m"
  }
#line 466 "typecheck_info.m"
}

#line 446 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0_1(
#line 446 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__closure_arg,
#line 446 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 446 "typecheck_info.m"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_2,
#line 446 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3,
#line 446 "typecheck_info.m"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_4)
#line 446 "typecheck_info.m"
{
#line 446 "typecheck_info.m"
  {
#line 446 "typecheck_info.m"
    MR_Box check_hlds__typecheck_info__closure = check_hlds__typecheck_info__closure_arg;
#line 446 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__conv1_Type_8;
#line 446 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__conv0_STATE_VARIABLE_TypeVarsSet_12;

#line 446 "typecheck_info.m"
    {
#line 446 "typecheck_info.m"
      check_hlds__typecheck_info__expand_types_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), &check_hlds__typecheck_info__conv1_Type_8, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3), &check_hlds__typecheck_info__conv0_STATE_VARIABLE_TypeVarsSet_12);
    }
#line 446 "typecheck_info.m"
    *check_hlds__typecheck_info__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck_info__conv1_Type_8));
#line 446 "typecheck_info.m"
    *check_hlds__typecheck_info__wrapper_arg_4 = ((MR_Box) (check_hlds__typecheck_info__conv0_STATE_VARIABLE_TypeVarsSet_12));
#line 446 "typecheck_info.m"
  }
#line 446 "typecheck_info.m"
}

#line 147 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0(
#line 147 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_13,
#line 147 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__OldHeadTypeParams_14,
#line 147 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__OldExistQVars_15,
#line 147 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__OldExplicitVarTypes_16,
#line 147 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__NewTypeVarSet_17,
#line 147 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__NewHeadTypeParams_18,
#line 147 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__NewVarTypes_19,
#line 147 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__NewTypeConstraints_20,
#line 147 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__NewConstraintProofs_21,
#line 147 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__NewConstraintMap_22,
#line 147 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__TSubst_23,
#line 147 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__ExistTypeRenaming_24)
#line 147 "typecheck_info.m"
{
#line 427 "typecheck_info.m"
  {
#line 427 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 427 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeAssignSet_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_13, (MR_Integer) 6)));
#line 428 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_13, (MR_Integer) 0)));
#line 428 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_13, (MR_Integer) 1)));
#line 428 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_13, (MR_Integer) 2)));
#line 428 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_13, (MR_Integer) 3)));
#line 428 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_13, (MR_Integer) 4)));
#line 428 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_13, (MR_Integer) 5)));
#line 428 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_13, (MR_Integer) 7)));

#line 530 "typecheck_info.m"
    if ((check_hlds__typecheck_info__TypeAssignSet_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 531 "typecheck_info.m"
      {
#line 532 "typecheck_info.m"
        {
#line 532 "typecheck_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck_info", (MR_String) "predicate \140check_hlds.typecheck_info.typecheck_info_get_final_info\'/12", (MR_String) "TypeAssignSet = []");
#line 532 "typecheck_info.m"
          return;
        }
#line 531 "typecheck_info.m"
      }
#line 530 "typecheck_info.m"
    else
#line 430 "typecheck_info.m"
      {
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeCtorInfo_85_85;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_86_86;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_90_90;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeAssign_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__TypeAssignSet_25, (MR_Integer) 0)));
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__HeadTypeParams_28;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__OldTypeVarSet_29;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__VarTypes0_30;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeBindings_31;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__HLDSTypeConstraints_32;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ConstraintProofs0_33;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ConstraintMap0_34;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__VarTypes1_35;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ConstraintProofs_36;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ConstraintMap1_37;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeVars1_39;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__HLDSUnivConstraints_41;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__HLDSExistConstraints_42;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ConstraintMap2_45;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ConstraintMap_46;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ExplicitTypes_47;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ExplicitTypeVars0_48;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ExistQVarsToBeRenamed_49;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ExistQVarsToRemain_50;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeVars2_51;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeVars_52;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeConstraints_53;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_61_61;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_62_62;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_63_63;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_64_64;
#line 430 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__TypeAssignSet_25, (MR_Integer) 1)));
#line 464 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_43_43;
#line 464 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_44_44;
#line 466 "typecheck_info.m"
        MR_Box check_hlds__typecheck_info__conv4_ConstraintMap2_45;
#line 468 "typecheck_info.m"
        MR_Box check_hlds__typecheck_info__conv6_ConstraintMap_46;

#line 431 "typecheck_info.m"
        {
#line 431 "typecheck_info.m"
          check_hlds__typecheck_info__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck_info__TypeAssign_26, &check_hlds__typecheck_info__HeadTypeParams_28);
        }
#line 432 "typecheck_info.m"
        {
#line 432 "typecheck_info.m"
          check_hlds__typecheck_info__type_assign_get_typevarset_2_p_0(check_hlds__typecheck_info__TypeAssign_26, &check_hlds__typecheck_info__OldTypeVarSet_29);
        }
#line 433 "typecheck_info.m"
        {
#line 433 "typecheck_info.m"
          check_hlds__typecheck_info__type_assign_get_var_types_2_p_0(check_hlds__typecheck_info__TypeAssign_26, &check_hlds__typecheck_info__VarTypes0_30);
        }
#line 434 "typecheck_info.m"
        {
#line 434 "typecheck_info.m"
          check_hlds__typecheck_info__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck_info__TypeAssign_26, &check_hlds__typecheck_info__TypeBindings_31);
        }
#line 435 "typecheck_info.m"
        {
#line 435 "typecheck_info.m"
          check_hlds__typecheck_info__type_assign_get_typeclass_constraints_2_p_0(check_hlds__typecheck_info__TypeAssign_26, &check_hlds__typecheck_info__HLDSTypeConstraints_32);
        }
#line 436 "typecheck_info.m"
        {
#line 436 "typecheck_info.m"
          check_hlds__typecheck_info__type_assign_get_constraint_proofs_2_p_0(check_hlds__typecheck_info__TypeAssign_26, &check_hlds__typecheck_info__ConstraintProofs0_33);
        }
#line 437 "typecheck_info.m"
        {
#line 437 "typecheck_info.m"
          check_hlds__typecheck_info__type_assign_get_constraint_map_2_p_0(check_hlds__typecheck_info__TypeAssign_26, &check_hlds__typecheck_info__ConstraintMap0_34);
        }
#line 439 "typecheck_info.m"
        {
#line 439 "typecheck_info.m"
          check_hlds__typecheck_info__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__typecheck_info__TypeBindings_31);
        }
#line 445 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 440 "typecheck_info.m"
          {
#line 440 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Types1_38;

#line 440 "typecheck_info.m"
            check_hlds__typecheck_info__VarTypes1_35 = check_hlds__typecheck_info__VarTypes0_30;
#line 441 "typecheck_info.m"
            check_hlds__typecheck_info__ConstraintProofs_36 = check_hlds__typecheck_info__ConstraintProofs0_33;
#line 442 "typecheck_info.m"
            check_hlds__typecheck_info__ConstraintMap1_37 = check_hlds__typecheck_info__ConstraintMap0_34;
#line 443 "typecheck_info.m"
            {
#line 443 "typecheck_info.m"
              parse_tree__prog_data__vartypes_types_2_p_0(check_hlds__typecheck_info__VarTypes1_35, &check_hlds__typecheck_info__Types1_38);
            }
#line 444 "typecheck_info.m"
            {
#line 444 "typecheck_info.m"
              parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck_info__Types1_38, &check_hlds__typecheck_info__TypeVars1_39);
            }
#line 440 "typecheck_info.m"
          }
#line 445 "typecheck_info.m"
        else
#line 447 "typecheck_info.m"
          {
#line 447 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__TypeInfo_80_80;
#line 447 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__TypeVarsSet1_40;
#line 447 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_57_57;
#line 447 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_58_58;
#line 446 "typecheck_info.m"
            MR_Box check_hlds__typecheck_info__conv2_TypeVarsSet1_40;

#line 446 "typecheck_info.m"
            {
#line 446 "typecheck_info.m"
              check_hlds__typecheck_info__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 446 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_57_57, 0) = ((MR_Box) (&check_hlds__typecheck_info_scalar_common_4[0]));
#line 446 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_57_57, 1) = ((MR_Box) (check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0_1));
#line 446 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 446 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_57_57, 3) = ((MR_Box) (check_hlds__typecheck_info__TypeBindings_31));
#line 446 "typecheck_info.m"
            }
#line 10530 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__TypeInfo_80_80 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[0];
#line 446 "typecheck_info.m"
            {
#line 446 "typecheck_info.m"
              check_hlds__typecheck_info__V_58_58 = mercury__set__init_0_f_0(check_hlds__typecheck_info__TypeInfo_80_80);
            }
#line 446 "typecheck_info.m"
            {
#line 446 "typecheck_info.m"
              parse_tree__prog_data__transform_foldl_var_types_5_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[2], check_hlds__typecheck_info__V_57_57, check_hlds__typecheck_info__VarTypes0_30, &check_hlds__typecheck_info__VarTypes1_35, ((MR_Box) (check_hlds__typecheck_info__V_58_58)), &check_hlds__typecheck_info__conv2_TypeVarsSet1_40);
            }
#line 446 "typecheck_info.m"
            check_hlds__typecheck_info__TypeVarsSet1_40 = ((MR_Word) check_hlds__typecheck_info__conv2_TypeVarsSet1_40);
#line 448 "typecheck_info.m"
            {
#line 448 "typecheck_info.m"
              mercury__set__to_sorted_list_2_p_0(check_hlds__typecheck_info__TypeInfo_80_80, check_hlds__typecheck_info__TypeVarsSet1_40, &check_hlds__typecheck_info__TypeVars1_39);
            }
#line 449 "typecheck_info.m"
            {
#line 449 "typecheck_info.m"
              check_hlds__type_util__apply_rec_subst_to_constraint_proofs_3_p_0(check_hlds__typecheck_info__TypeBindings_31, check_hlds__typecheck_info__ConstraintProofs0_33, &check_hlds__typecheck_info__ConstraintProofs_36);
            }
#line 451 "typecheck_info.m"
            {
#line 451 "typecheck_info.m"
              check_hlds__type_util__apply_rec_subst_to_constraint_map_3_p_0(check_hlds__typecheck_info__TypeBindings_31, check_hlds__typecheck_info__ConstraintMap0_34, &check_hlds__typecheck_info__ConstraintMap1_37);
            }
#line 447 "typecheck_info.m"
          }
#line 464 "typecheck_info.m"
        check_hlds__typecheck_info__HLDSUnivConstraints_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HLDSTypeConstraints_32, (MR_Integer) 0)));
#line 464 "typecheck_info.m"
        check_hlds__typecheck_info__HLDSExistConstraints_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HLDSTypeConstraints_32, (MR_Integer) 1)));
#line 464 "typecheck_info.m"
        check_hlds__typecheck_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HLDSTypeConstraints_32, (MR_Integer) 2)));
#line 464 "typecheck_info.m"
        check_hlds__typecheck_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HLDSTypeConstraints_32, (MR_Integer) 3)));
#line 10569 "check_hlds.typecheck_info.c"
        check_hlds__typecheck_info__TypeCtorInfo_85_85 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 10571 "check_hlds.typecheck_info.c"
        check_hlds__typecheck_info__TypeInfo_86_86 = (MR_Word) &check_hlds__typecheck_info_scalar_common_2[0];
#line 466 "typecheck_info.m"
        {
#line 466 "typecheck_info.m"
          mercury__list__foldl_4_p_0(check_hlds__typecheck_info__TypeCtorInfo_85_85, check_hlds__typecheck_info__TypeInfo_86_86, (MR_Word) &check_hlds__typecheck_info_scalar_common_2[6], check_hlds__typecheck_info__HLDSUnivConstraints_41, ((MR_Box) (check_hlds__typecheck_info__ConstraintMap1_37)), &check_hlds__typecheck_info__conv4_ConstraintMap2_45);
        }
#line 466 "typecheck_info.m"
        check_hlds__typecheck_info__ConstraintMap2_45 = ((MR_Word) check_hlds__typecheck_info__conv4_ConstraintMap2_45);
#line 468 "typecheck_info.m"
        {
#line 468 "typecheck_info.m"
          mercury__list__foldl_4_p_0(check_hlds__typecheck_info__TypeCtorInfo_85_85, check_hlds__typecheck_info__TypeInfo_86_86, (MR_Word) &check_hlds__typecheck_info_scalar_common_2[7], check_hlds__typecheck_info__HLDSExistConstraints_42, ((MR_Box) (check_hlds__typecheck_info__ConstraintMap2_45)), &check_hlds__typecheck_info__conv6_ConstraintMap_46);
        }
#line 468 "typecheck_info.m"
        check_hlds__typecheck_info__ConstraintMap_46 = ((MR_Word) check_hlds__typecheck_info__conv6_ConstraintMap_46);
#line 474 "typecheck_info.m"
        {
#line 474 "typecheck_info.m"
          check_hlds__typecheck_info__get_existq_tvar_renaming_4_p_0(check_hlds__typecheck_info__OldHeadTypeParams_14, check_hlds__typecheck_info__OldExistQVars_15, check_hlds__typecheck_info__TypeBindings_31, check_hlds__typecheck_info__ExistTypeRenaming_24);
        }
#line 498 "typecheck_info.m"
        {
#line 498 "typecheck_info.m"
          parse_tree__prog_data__vartypes_types_2_p_0(check_hlds__typecheck_info__OldExplicitVarTypes_16, &check_hlds__typecheck_info__ExplicitTypes_47);
        }
#line 499 "typecheck_info.m"
        {
#line 499 "typecheck_info.m"
          parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck_info__ExplicitTypes_47, &check_hlds__typecheck_info__ExplicitTypeVars0_48);
        }
#line 10602 "check_hlds.typecheck_info.c"
        check_hlds__typecheck_info__TypeInfo_90_90 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[0];
#line 500 "typecheck_info.m"
        {
#line 500 "typecheck_info.m"
          mercury__map__keys_2_p_0(check_hlds__typecheck_info__TypeInfo_90_90, check_hlds__typecheck_info__TypeInfo_90_90, *check_hlds__typecheck_info__ExistTypeRenaming_24, &check_hlds__typecheck_info__ExistQVarsToBeRenamed_49);
        }
#line 501 "typecheck_info.m"
        {
#line 501 "typecheck_info.m"
          mercury__list__delete_elems_3_p_0(check_hlds__typecheck_info__TypeInfo_90_90, check_hlds__typecheck_info__OldExistQVars_15, check_hlds__typecheck_info__ExistQVarsToBeRenamed_49, &check_hlds__typecheck_info__ExistQVarsToRemain_50);
        }
#line 504 "typecheck_info.m"
        {
#line 504 "typecheck_info.m"
          check_hlds__typecheck_info__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 504 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_64_64, 0) = ((MR_Box) (check_hlds__typecheck_info__ExplicitTypeVars0_48));
#line 504 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 504 "typecheck_info.m"
        }
#line 503 "typecheck_info.m"
        {
#line 503 "typecheck_info.m"
          check_hlds__typecheck_info__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_63_63, 0) = ((MR_Box) (check_hlds__typecheck_info__TypeVars1_39));
#line 503 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_63_63, 1) = ((MR_Box) (check_hlds__typecheck_info__V_64_64));
#line 503 "typecheck_info.m"
        }
#line 503 "typecheck_info.m"
        {
#line 503 "typecheck_info.m"
          check_hlds__typecheck_info__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_62_62, 0) = ((MR_Box) (check_hlds__typecheck_info__HeadTypeParams_28));
#line 503 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_62_62, 1) = ((MR_Box) (check_hlds__typecheck_info__V_63_63));
#line 503 "typecheck_info.m"
        }
#line 503 "typecheck_info.m"
        {
#line 503 "typecheck_info.m"
          check_hlds__typecheck_info__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_61_61, 0) = ((MR_Box) (check_hlds__typecheck_info__ExistQVarsToRemain_50));
#line 503 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_61_61, 1) = ((MR_Box) (check_hlds__typecheck_info__V_62_62));
#line 503 "typecheck_info.m"
        }
#line 503 "typecheck_info.m"
        {
#line 503 "typecheck_info.m"
          mercury__list__condense_2_p_0(check_hlds__typecheck_info__TypeInfo_90_90, check_hlds__typecheck_info__V_61_61, &check_hlds__typecheck_info__TypeVars2_51);
        }
#line 505 "typecheck_info.m"
        {
#line 505 "typecheck_info.m"
          mercury__list__sort_and_remove_dups_2_p_0(check_hlds__typecheck_info__TypeInfo_90_90, check_hlds__typecheck_info__TypeVars2_51, &check_hlds__typecheck_info__TypeVars_52);
        }
#line 508 "typecheck_info.m"
        {
#line 508 "typecheck_info.m"
          mercury__varset__squash_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck_info__OldTypeVarSet_29, check_hlds__typecheck_info__TypeVars_52, check_hlds__typecheck_info__NewTypeVarSet_17, check_hlds__typecheck_info__TSubst_23);
        }
#line 512 "typecheck_info.m"
        {
#line 512 "typecheck_info.m"
          hlds__hlds_data__retrieve_prog_constraints_2_p_0(check_hlds__typecheck_info__HLDSTypeConstraints_32, &check_hlds__typecheck_info__TypeConstraints_53);
        }
#line 513 "typecheck_info.m"
        {
#line 513 "typecheck_info.m"
          check_hlds__typecheck_info__succeeded = mercury__map__is_empty_1_p_0(check_hlds__typecheck_info__TypeInfo_90_90, check_hlds__typecheck_info__TypeInfo_90_90, *check_hlds__typecheck_info__TSubst_23);
        }
#line 519 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 514 "typecheck_info.m"
          {
#line 514 "typecheck_info.m"
            *check_hlds__typecheck_info__NewVarTypes_19 = check_hlds__typecheck_info__VarTypes1_35;
#line 515 "typecheck_info.m"
            *check_hlds__typecheck_info__NewHeadTypeParams_18 = check_hlds__typecheck_info__HeadTypeParams_28;
#line 516 "typecheck_info.m"
            *check_hlds__typecheck_info__NewTypeConstraints_20 = check_hlds__typecheck_info__TypeConstraints_53;
#line 517 "typecheck_info.m"
            *check_hlds__typecheck_info__NewConstraintProofs_21 = check_hlds__typecheck_info__ConstraintProofs_36;
#line 518 "typecheck_info.m"
            *check_hlds__typecheck_info__NewConstraintMap_22 = check_hlds__typecheck_info__ConstraintMap_46;
#line 514 "typecheck_info.m"
          }
#line 519 "typecheck_info.m"
        else
#line 521 "typecheck_info.m"
          {
#line 521 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_66_66;

#line 520 "typecheck_info.m"
            {
#line 520 "typecheck_info.m"
              check_hlds__typecheck_info__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 520 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_66_66, 0) = ((MR_Box) (&check_hlds__typecheck_info_scalar_common_5[1]));
#line 520 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_66_66, 1) = ((MR_Box) (check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0_4));
#line 520 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_66_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 520 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_66_66, 3) = ((MR_Box) (*check_hlds__typecheck_info__TSubst_23));
#line 520 "typecheck_info.m"
            }
#line 520 "typecheck_info.m"
            {
#line 520 "typecheck_info.m"
              parse_tree__prog_data__transform_var_types_3_p_0(check_hlds__typecheck_info__V_66_66, check_hlds__typecheck_info__VarTypes1_35, check_hlds__typecheck_info__NewVarTypes_19);
            }
#line 522 "typecheck_info.m"
            {
#line 522 "typecheck_info.m"
              mercury__map__apply_to_list_3_p_0(check_hlds__typecheck_info__TypeInfo_90_90, check_hlds__typecheck_info__TypeInfo_90_90, check_hlds__typecheck_info__HeadTypeParams_28, *check_hlds__typecheck_info__TSubst_23, check_hlds__typecheck_info__NewHeadTypeParams_18);
            }
#line 523 "typecheck_info.m"
            {
#line 523 "typecheck_info.m"
              parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(*check_hlds__typecheck_info__TSubst_23, check_hlds__typecheck_info__TypeConstraints_53, check_hlds__typecheck_info__NewTypeConstraints_20);
            }
#line 525 "typecheck_info.m"
            {
#line 525 "typecheck_info.m"
              check_hlds__type_util__apply_variable_renaming_to_constraint_proofs_3_p_0(*check_hlds__typecheck_info__TSubst_23, check_hlds__typecheck_info__ConstraintProofs_36, check_hlds__typecheck_info__NewConstraintProofs_21);
            }
#line 527 "typecheck_info.m"
            {
#line 527 "typecheck_info.m"
              check_hlds__type_util__apply_variable_renaming_to_constraint_map_3_p_0(*check_hlds__typecheck_info__TSubst_23, check_hlds__typecheck_info__ConstraintMap_46, check_hlds__typecheck_info__NewConstraintMap_22);
#line 527 "typecheck_info.m"
              return;
            }
#line 521 "typecheck_info.m"
          }
#line 430 "typecheck_info.m"
      }
#line 427 "typecheck_info.m"
  }
#line 147 "typecheck_info.m"
}

#line 123 "typecheck_info.m"
void MR_CALL 
check_hlds__typecheck_info__typecheck_info_init_12_p_0(
#line 123 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__ModuleInfo_13,
#line 123 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__PredId_14,
#line 123 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__IsFieldAccessFunction_15,
#line 123 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeVarSet_16,
#line 123 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarSet_17,
#line 123 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarTypes_18,
#line 123 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadTypeParams_19,
#line 123 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Constraints_20,
#line 123 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Status_21,
#line 123 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__PredMarkers_22,
#line 123 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__NonOverloadErrors_23,
#line 123 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__Info_24)
#line 123 "typecheck_info.m"
{
#line 398 "typecheck_info.m"
  {
#line 398 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 398 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeCtorInfo_52_52;
#line 398 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Context_27;
#line 398 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeBindings_28;
#line 398 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Proofs_29;
#line 398 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__ConstraintMap_30;
#line 398 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__OverloadedSymbols_32;
#line 398 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Globals_33;
#line 398 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__WarnLimit_34;
#line 398 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__ErrorLimit_35;
#line 398 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeAssignSet_37;
#line 398 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__SubInfo_38;
#line 398 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_48_48;

#line 402 "typecheck_info.m"
    {
#line 402 "typecheck_info.m"
      mercury__term__context_init_1_p_0(&check_hlds__typecheck_info__Context_27);
    }
#line 403 "typecheck_info.m"
    {
#line 403 "typecheck_info.m"
      mercury__map__init_1_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &check_hlds__typecheck_info__TypeBindings_28);
    }
#line 10820 "check_hlds.typecheck_info.c"
    check_hlds__typecheck_info__TypeCtorInfo_52_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 404 "typecheck_info.m"
    {
#line 404 "typecheck_info.m"
      mercury__map__init_1_p_0(check_hlds__typecheck_info__TypeCtorInfo_52_52, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &check_hlds__typecheck_info__Proofs_29);
    }
#line 405 "typecheck_info.m"
    {
#line 405 "typecheck_info.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, check_hlds__typecheck_info__TypeCtorInfo_52_52, &check_hlds__typecheck_info__ConstraintMap_30);
    }
#line 407 "typecheck_info.m"
    {
#line 407 "typecheck_info.m"
      mercury__map__init_1_p_0((MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0, (MR_Word) &check_hlds__typecheck_info_scalar_common_1[1], &check_hlds__typecheck_info__OverloadedSymbols_32);
    }
#line 408 "typecheck_info.m"
    {
#line 408 "typecheck_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck_info__ModuleInfo_13, &check_hlds__typecheck_info__Globals_33);
    }
#line 409 "typecheck_info.m"
    {
#line 409 "typecheck_info.m"
      libs__globals__lookup_int_option_3_p_0(check_hlds__typecheck_info__Globals_33, (MR_Integer) 658, &check_hlds__typecheck_info__WarnLimit_34);
    }
#line 411 "typecheck_info.m"
    {
#line 411 "typecheck_info.m"
      libs__globals__lookup_int_option_3_p_0(check_hlds__typecheck_info__Globals_33, (MR_Integer) 659, &check_hlds__typecheck_info__ErrorLimit_35);
    }
#line 415 "typecheck_info.m"
    {
#line 415 "typecheck_info.m"
      check_hlds__typecheck_info__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 415 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_48_48, 0) = ((MR_Box) (check_hlds__typecheck_info__VarTypes_18));
#line 415 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_48_48, 1) = ((MR_Box) (check_hlds__typecheck_info__TypeVarSet_16));
#line 415 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_48_48, 2) = ((MR_Box) (check_hlds__typecheck_info__HeadTypeParams_19));
#line 415 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_48_48, 3) = ((MR_Box) (check_hlds__typecheck_info__TypeBindings_28));
#line 415 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_48_48, 4) = ((MR_Box) (check_hlds__typecheck_info__Constraints_20));
#line 415 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_48_48, 5) = ((MR_Box) (check_hlds__typecheck_info__Proofs_29));
#line 415 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_48_48, 6) = ((MR_Box) (check_hlds__typecheck_info__ConstraintMap_30));
#line 415 "typecheck_info.m"
    }
#line 414 "typecheck_info.m"
    {
#line 414 "typecheck_info.m"
      check_hlds__typecheck_info__TypeAssignSet_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "typecheck_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__TypeAssignSet_37, 0) = ((MR_Box) (check_hlds__typecheck_info__V_48_48));
#line 414 "typecheck_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__TypeAssignSet_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 414 "typecheck_info.m"
    }
#line 417 "typecheck_info.m"
    {
#line 417 "typecheck_info.m"
      check_hlds__typecheck_info__SubInfo_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 417 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_38, 0) = ((MR_Box) (check_hlds__typecheck_info__PredId_14));
#line 417 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_38, 1) = ((MR_Box) (check_hlds__typecheck_info__Status_21));
#line 417 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_38, 2) = ((MR_Box) (check_hlds__typecheck_info__PredMarkers_22));
#line 417 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_38, 3) = ((MR_Box) (check_hlds__typecheck_info__IsFieldAccessFunction_15));
#line 417 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_38, 4) = ((MR_Box) (check_hlds__typecheck_info__VarSet_17));
#line 417 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_38, 5) = ((MR_Box) (check_hlds__typecheck_info__NonOverloadErrors_23));
#line 417 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_38, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 417 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_38, 7) = ((MR_Box) (check_hlds__typecheck_info__OverloadedSymbols_32));
#line 417 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_38, 8) = ((MR_Box) (check_hlds__typecheck_info__ErrorLimit_35));
#line 417 "typecheck_info.m"
    }
#line 421 "typecheck_info.m"
    {
#line 421 "typecheck_info.m"
      MR_Word base;
#line 421 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 421 "typecheck_info.m"
      *check_hlds__typecheck_info__Info_24 = base;
#line 421 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__SubInfo_38));
#line 421 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__ModuleInfo_13));
#line 421 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (&check_hlds__typecheck_info_scalar_common_3[1]));
#line 421 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Integer) 0));
#line 421 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__Context_27));
#line 421 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (&check_hlds__typecheck_info_scalar_common_1[17]));
#line 421 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__TypeAssignSet_37));
#line 421 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__typecheck_info__WarnLimit_34));
#line 421 "typecheck_info.m"
    }
#line 398 "typecheck_info.m"
  }
#line 123 "typecheck_info.m"
}

void mercury__check_hlds__typecheck_info__init(void)
{
}

void mercury__check_hlds__typecheck_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_args_type_assign_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_args_type_assign_set_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_map_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_assign_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_assign_set_0);
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
