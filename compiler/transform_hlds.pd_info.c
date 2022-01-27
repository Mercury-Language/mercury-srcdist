/*
** Automatically generated from `pd_info.m'
** by the Mercury compiler,
** version 13.05.2, configured for x86_64-apple-darwin12.5.0.
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


/* :- module transform_hlds.pd_info. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__pd_info__init
ENDINIT
*/

#include "transform_hlds.pd_info.mih"


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
#include "counter.mih"
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
#include "check_hlds.common.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.simplify.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.pd_debug.mih"
#include "transform_hlds.pd_term.mih"
#include "transform_hlds.pd_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 139 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 142 "transform_hlds.pd_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__pd_info__tree234__pti_tree234_2__pseudo_1__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 145 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 148 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 151 "transform_hlds.pd_info.c"
static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_maybe_version_0_0;

#line 154 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 157 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 160 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 163 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 166 "transform_hlds.pd_info.c"
static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_maybe_version_0_1[5];

#line 169 "transform_hlds.pd_info.c"
static const MR_ConstString transform_hlds__pd_info__transform_hlds__pd_info__field_names_maybe_version_0_1[5];

#line 172 "transform_hlds.pd_info.c"
static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_maybe_version_0_1;

#line 175 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_maybe_version_0_0[1];

#line 178 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_maybe_version_0_1[1];

#line 181 "transform_hlds.pd_info.c"
static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_maybe_version_0[2];

#line 184 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_maybe_version_0[2];

#line 187 "transform_hlds.pd_info.c"
static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_maybe_version_0[2];

#line 190 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__transform_hlds__pd_info__ti_pd_branch_info_1builtin__type_ctor_info_int_0;

#line 193 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__pd_info__ti_pd_branch_info_1builtin__type_ctor_info_int_0;

#line 196 "transform_hlds.pd_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__pti_set_ordlist_1__pseudo_1;

#line 199 "transform_hlds.pd_info.c"
static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_pd_branch_info_1_0[3];

#line 202 "transform_hlds.pd_info.c"
static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_pd_branch_info_1_0;

#line 205 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_pd_branch_info_1_0[1];

#line 208 "transform_hlds.pd_info.c"
static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_pd_branch_info_1[1];

#line 211 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_pd_branch_info_1[1];

#line 214 "transform_hlds.pd_info.c"
static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_pd_branch_info_1[1];

#line 217 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__maybe__ti_maybe_1transform_hlds__pd_info__type_ctor_info_unfold_info_0;

#line 220 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__pd_info__type_ctor_info_version_info_0;

#line 223 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 226 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 229 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 232 "transform_hlds.pd_info.c"
static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_pd_info_0_0[11];

#line 235 "transform_hlds.pd_info.c"
static const MR_ConstString transform_hlds__pd_info__transform_hlds__pd_info__field_names_pd_info_0_0[11];

#line 238 "transform_hlds.pd_info.c"
static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_pd_info_0_0;

#line 241 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_pd_info_0_0[1];

#line 244 "transform_hlds.pd_info.c"
static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_pd_info_0[1];

#line 247 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_pd_info_0[1];

#line 250 "transform_hlds.pd_info.c"
static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_pd_info_0[1];

#line 253 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 256 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 259 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 262 "transform_hlds.pd_info.c"
static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_unfold_info_0_0[10];

#line 265 "transform_hlds.pd_info.c"
static const MR_ConstString transform_hlds__pd_info__transform_hlds__pd_info__field_names_unfold_info_0_0[10];

#line 268 "transform_hlds.pd_info.c"
static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_unfold_info_0_0;

#line 271 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_unfold_info_0_0[1];

#line 274 "transform_hlds.pd_info.c"
static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_unfold_info_0[1];

#line 277 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_unfold_info_0[1];

#line 280 "transform_hlds.pd_info.c"
static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_unfold_info_0[1];

#line 283 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 286 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 289 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 292 "transform_hlds.pd_info.c"
static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_version_info_0_0[9];

#line 295 "transform_hlds.pd_info.c"
static const MR_ConstString transform_hlds__pd_info__transform_hlds__pd_info__field_names_version_info_0_0[9];

#line 298 "transform_hlds.pd_info.c"
static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_version_info_0_0;

#line 301 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_version_info_0_0[1];

#line 304 "transform_hlds.pd_info.c"
static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_version_info_0[1];

#line 307 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_version_info_0[1];

#line 310 "transform_hlds.pd_info.c"
static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_version_info_0[1];

#line 313 "transform_hlds.pd_info.c"
static const MR_EnumFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__enum_functor_desc_version_is_exact_0_0;

#line 316 "transform_hlds.pd_info.c"
static const MR_EnumFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__enum_functor_desc_version_is_exact_0_1;

#line 319 "transform_hlds.pd_info.c"
static const MR_EnumFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__enum_value_ordered_version_is_exact_0[2];

#line 322 "transform_hlds.pd_info.c"
static const MR_EnumFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__enum_name_ordered_version_is_exact_0[2];

#line 325 "transform_hlds.pd_info.c"
static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_version_is_exact_0[2];

#line 328 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____branch_info_map_1_0_10001(
#line 331 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 333 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 335 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

#line 338 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____branch_info_map_1_0_10001(
#line 341 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 343 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_2,
#line 345 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3,
#line 347 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_4);

#line 350 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____goal_version_index_0_0_10001(
#line 353 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 355 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

#line 358 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____goal_version_index_0_0_10001(
#line 361 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 363 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 365 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

#line 368 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____maybe_version_0_0_10001(
#line 371 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 373 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

#line 376 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____maybe_version_0_0_10001(
#line 379 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 381 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 383 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

#line 386 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_arg_info_0_0_10001(
#line 389 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 391 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

#line 394 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____pd_arg_info_0_0_10001(
#line 397 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 399 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 401 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

#line 404 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_branch_info_1_0_10001(
#line 407 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 409 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 411 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

#line 414 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____pd_branch_info_1_0_10001(
#line 417 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 419 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_2,
#line 421 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3,
#line 423 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_4);

#line 426 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_info_0_0_10001(
#line 429 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 431 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

#line 434 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____pd_info_0_0_10001(
#line 437 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 439 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 441 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

#line 444 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_proc_arg_info_0_0_10001(
#line 447 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 449 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

#line 452 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____pd_proc_arg_info_0_0_10001(
#line 455 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 457 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 459 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

#line 462 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____unfold_info_0_0_10001(
#line 465 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 467 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

#line 470 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____unfold_info_0_0_10001(
#line 473 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 475 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 477 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

#line 480 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____useless_versions_0_0_10001(
#line 483 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 485 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

#line 488 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____useless_versions_0_0_10001(
#line 491 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 493 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 495 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

#line 498 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_index_0_0_10001(
#line 501 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 503 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

#line 506 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____version_index_0_0_10001(
#line 509 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 511 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 513 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

#line 516 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_info_0_0_10001(
#line 519 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 521 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

#line 524 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____version_info_0_0_10001(
#line 527 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 529 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 531 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

#line 534 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_is_exact_0_0_10001(
#line 537 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 539 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

#line 542 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____version_is_exact_0_0_10001(
#line 545 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 547 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 549 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

#line 541 "pd_info.m"
static void MR_CALL 
transform_hlds__pd_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_105_99_107_95_118_101_114_115_105_111_110_95_95_91_49_93_95_48_7_p_0(
#line 541 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 541 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__3_3,
#line 541 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__4_4,
#line 541 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__5_5,
#line 541 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__6_6,
#line 541 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__7_7);

#line 606 "pd_info.m"
static MR_bool MR_CALL 
transform_hlds__pd_info__check_insts_8_p_0(
#line 606 "pd_info.m"
  MR_Word transform_hlds__pd_info__ModuleInfo_1,
#line 606 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 606 "pd_info.m"
  MR_Word transform_hlds__pd_info__VarRenaming_3,
#line 606 "pd_info.m"
  MR_Word transform_hlds__pd_info__OldInstMap_4,
#line 606 "pd_info.m"
  MR_Word transform_hlds__pd_info__NewInstMap_5,
#line 606 "pd_info.m"
  MR_Word transform_hlds__pd_info__VarTypes_6,
#line 606 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_0_7,
#line 606 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_8);

#line 501 "pd_info.m"
static MR_bool MR_CALL 
transform_hlds__pd_info__get_matching_version_7_p_0(
#line 501 "pd_info.m"
  MR_Word transform_hlds__pd_info__ModuleInfo_1,
#line 501 "pd_info.m"
  MR_Word transform_hlds__pd_info__ThisGoal_2,
#line 501 "pd_info.m"
  MR_Word transform_hlds__pd_info__ThisInstMap_3,
#line 501 "pd_info.m"
  MR_Word transform_hlds__pd_info__VarTypes_4,
#line 501 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__5_5,
#line 501 "pd_info.m"
  MR_Word transform_hlds__pd_info__Versions_6,
#line 501 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__7_7);


static /* final */ const MR_Box transform_hlds__pd_info_scalar_common_1[11][2];

static /* final */ const MR_Box transform_hlds__pd_info_scalar_common_2[6][3];




static /* final */ const MR_Box transform_hlds__pd_info_scalar_common_1[11][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_branch_info_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_unfold_info_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__pd_info_scalar_common_2[0]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__pd_info_scalar_common_1[1]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__pd_info_scalar_common_2[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__pd_info_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__pd_info_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__pd_info_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__pd_info_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__pd_info_scalar_common_1[3])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__pd_info_scalar_common_1[4]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0))
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



#line 728 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 736 "transform_hlds.pd_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__pd_info__tree234__pti_tree234_2__pseudo_1__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

#line 745 "transform_hlds.pd_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_branch_info_map_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (transform_hlds__pd_info____Unify____branch_info_map_1_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____branch_info_map_1_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "branch_info_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__pd_info__tree234__pti_tree234_2__pseudo_1__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 766 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 774 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__pd_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__pd_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 783 "transform_hlds.pd_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_goal_version_index_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__pd_info____Unify____goal_version_index_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____goal_version_index_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "goal_version_index",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__pd_info__tree234__ti_tree234_2list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 804 "transform_hlds.pd_info.c"
static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_maybe_version_0_0 = {
  (MR_String) "no_version",
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

#line 819 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 827 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 836 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 844 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 853 "transform_hlds.pd_info.c"
static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_maybe_version_0_1[5] = {
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_is_exact_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 862 "transform_hlds.pd_info.c"
static const MR_ConstString transform_hlds__pd_info__transform_hlds__pd_info__field_names_maybe_version_0_1[5] = {
  (MR_String) "mv_is_exact",
  (MR_String) "mv_ppid",
  (MR_String) "mv_version",
  (MR_String) "mv_renaming",
  (MR_String) "mv_tsubst"
};

#line 871 "transform_hlds.pd_info.c"
static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_maybe_version_0_1 = {
  (MR_String) "version",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  transform_hlds__pd_info__transform_hlds__pd_info__field_types_maybe_version_0_1,
  transform_hlds__pd_info__transform_hlds__pd_info__field_names_maybe_version_0_1,
  NULL,
  NULL
};

#line 886 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_maybe_version_0_0[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_maybe_version_0_0
};

#line 891 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_maybe_version_0_1[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_maybe_version_0_1
};

#line 896 "transform_hlds.pd_info.c"
static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_maybe_version_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_maybe_version_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_maybe_version_0_1
  }
};

#line 910 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_maybe_version_0[2] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_maybe_version_0_0,
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_maybe_version_0_1
};

#line 916 "transform_hlds.pd_info.c"
static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_maybe_version_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 922 "transform_hlds.pd_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_maybe_version_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__pd_info____Unify____maybe_version_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____maybe_version_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "maybe_version",
  {
    transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_maybe_version_0
  },
  {
    transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_maybe_version_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_maybe_version_0
};

#line 943 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__transform_hlds__pd_info__ti_pd_branch_info_1builtin__type_ctor_info_int_0 = {
  &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_branch_info_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 951 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__pd_info__ti_pd_branch_info_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__pd_info__transform_hlds__pd_info__ti_pd_branch_info_1builtin__type_ctor_info_int_0
  }
};

#line 960 "transform_hlds.pd_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_arg_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__pd_info____Unify____pd_arg_info_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____pd_arg_info_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "pd_arg_info",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__pd_info__ti_pd_branch_info_1builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 981 "transform_hlds.pd_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 989 "transform_hlds.pd_info.c"
static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_pd_branch_info_1_0[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__tree234__pti_tree234_2__pseudo_1__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__set_ordlist__pti_set_ordlist_1__pseudo_1,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__set_ordlist__pti_set_ordlist_1__pseudo_1
};

#line 996 "transform_hlds.pd_info.c"
static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_pd_branch_info_1_0 = {
  (MR_String) "pd_branch_info",
  (MR_Integer) 3,
  (MR_Integer) 7,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__pd_info__transform_hlds__pd_info__field_types_pd_branch_info_1_0,
  NULL,
  NULL,
  NULL
};

#line 1011 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_pd_branch_info_1_0[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_pd_branch_info_1_0
};

#line 1016 "transform_hlds.pd_info.c"
static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_pd_branch_info_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_pd_branch_info_1_0
  }
};

#line 1025 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_pd_branch_info_1[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_pd_branch_info_1_0
};

#line 1030 "transform_hlds.pd_info.c"
static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_pd_branch_info_1[1] = {
  (MR_Integer) 0
};

#line 1035 "transform_hlds.pd_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_branch_info_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__pd_info____Unify____pd_branch_info_1_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____pd_branch_info_1_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "pd_branch_info",
  {
    transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_pd_branch_info_1
  },
  {
    transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_pd_branch_info_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_pd_branch_info_1
};

#line 1056 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__maybe__ti_maybe_1transform_hlds__pd_info__type_ctor_info_unfold_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_unfold_info_0
  }
};

#line 1064 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__pd_info__type_ctor_info_version_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0
  }
};

#line 1073 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1081 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1090 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__pd_info__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1098 "transform_hlds.pd_info.c"
static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_pd_info_0_0[11] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__maybe__ti_maybe_1transform_hlds__pd_info__type_ctor_info_unfold_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__tree234__ti_tree234_2list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__pd_info__type_ctor_info_version_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__pd_info__ti_pd_branch_info_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_term__transform_hlds__pd_term__type_ctor_info_global_term_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1113 "transform_hlds.pd_info.c"
static const MR_ConstString transform_hlds__pd_info__transform_hlds__pd_info__field_names_pd_info_0_0[11] = {
  (MR_String) "pdi_module_info",
  (MR_String) "pdi_maybe_unfold_info",
  (MR_String) "pdi_goal_version_index",
  (MR_String) "pdi_versions",
  (MR_String) "pdi_proc_arg_info",
  (MR_String) "pdi_counter",
  (MR_String) "pdi_global_term_info",
  (MR_String) "pdi_parent_versions",
  (MR_String) "pdi_depth",
  (MR_String) "pdi_created_versions",
  (MR_String) "pdi_useless_versions"
};

#line 1128 "transform_hlds.pd_info.c"
static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_pd_info_0_0 = {
  (MR_String) "pd_info",
  (MR_Integer) 11,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__pd_info__transform_hlds__pd_info__field_types_pd_info_0_0,
  transform_hlds__pd_info__transform_hlds__pd_info__field_names_pd_info_0_0,
  NULL,
  NULL
};

#line 1143 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_pd_info_0_0[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_pd_info_0_0
};

#line 1148 "transform_hlds.pd_info.c"
static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_pd_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_pd_info_0_0
  }
};

#line 1157 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_pd_info_0[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_pd_info_0_0
};

#line 1162 "transform_hlds.pd_info.c"
static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_pd_info_0[1] = {
  (MR_Integer) 0
};

#line 1167 "transform_hlds.pd_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__pd_info____Unify____pd_info_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____pd_info_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "pd_info",
  {
    transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_pd_info_0
  },
  {
    transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_pd_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_pd_info_0
};

#line 1188 "transform_hlds.pd_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_proc_arg_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__pd_info____Unify____pd_proc_arg_info_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____pd_proc_arg_info_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "pd_proc_arg_info",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__pd_info__transform_hlds__pd_info__ti_pd_branch_info_1builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1209 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1218 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__pd_info__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  }
};

#line 1226 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__pd_info__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  }
};

#line 1235 "transform_hlds.pd_info.c"
static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_unfold_info_0_0[10] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1249 "transform_hlds.pd_info.c"
static const MR_ConstString transform_hlds__pd_info__transform_hlds__pd_info__field_names_unfold_info_0_0[10] = {
  (MR_String) "ufi_proc_info",
  (MR_String) "ufi_instmap",
  (MR_String) "ufi_cost_delta",
  (MR_String) "ufi_local_term_info",
  (MR_String) "ufi_pred_info",
  (MR_String) "ufi_parents",
  (MR_String) "ufi_pred_proc_id",
  (MR_String) "ufi_changed",
  (MR_String) "ufi_size_delta",
  (MR_String) "ufi_rerun_det"
};

#line 1263 "transform_hlds.pd_info.c"
static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_unfold_info_0_0 = {
  (MR_String) "unfold_info",
  (MR_Integer) 10,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__pd_info__transform_hlds__pd_info__field_types_unfold_info_0_0,
  transform_hlds__pd_info__transform_hlds__pd_info__field_names_unfold_info_0_0,
  NULL,
  NULL
};

#line 1278 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_unfold_info_0_0[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_unfold_info_0_0
};

#line 1283 "transform_hlds.pd_info.c"
static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_unfold_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_unfold_info_0_0
  }
};

#line 1292 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_unfold_info_0[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_unfold_info_0_0
};

#line 1297 "transform_hlds.pd_info.c"
static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_unfold_info_0[1] = {
  (MR_Integer) 0
};

#line 1302 "transform_hlds.pd_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_unfold_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__pd_info____Unify____unfold_info_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____unfold_info_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "unfold_info",
  {
    transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_unfold_info_0
  },
  {
    transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_unfold_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_unfold_info_0
};

#line 1323 "transform_hlds.pd_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_useless_versions_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__pd_info____Unify____useless_versions_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____useless_versions_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "useless_versions",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1344 "transform_hlds.pd_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_index_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__pd_info____Unify____version_index_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____version_index_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "version_index",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__pd_info__type_ctor_info_version_info_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1365 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1373 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1381 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1389 "transform_hlds.pd_info.c"
static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_version_info_0_0[9] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1402 "transform_hlds.pd_info.c"
static const MR_ConstString transform_hlds__pd_info__transform_hlds__pd_info__field_names_version_info_0_0[9] = {
  (MR_String) "version_orig_goal",
  (MR_String) "version_deforest_calls",
  (MR_String) "version_arg_vars",
  (MR_String) "version_arg_types",
  (MR_String) "version_init_insts",
  (MR_String) "version_orig_cost",
  (MR_String) "version_cost_improv",
  (MR_String) "version_parents",
  (MR_String) "version_source"
};

#line 1415 "transform_hlds.pd_info.c"
static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_version_info_0_0 = {
  (MR_String) "version_info",
  (MR_Integer) 9,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__pd_info__transform_hlds__pd_info__field_types_version_info_0_0,
  transform_hlds__pd_info__transform_hlds__pd_info__field_names_version_info_0_0,
  NULL,
  NULL
};

#line 1430 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_version_info_0_0[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_version_info_0_0
};

#line 1435 "transform_hlds.pd_info.c"
static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_version_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_version_info_0_0
  }
};

#line 1444 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_version_info_0[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_version_info_0_0
};

#line 1449 "transform_hlds.pd_info.c"
static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_version_info_0[1] = {
  (MR_Integer) 0
};

#line 1454 "transform_hlds.pd_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__pd_info____Unify____version_info_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____version_info_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "version_info",
  {
    transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_version_info_0
  },
  {
    transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_version_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_version_info_0
};

#line 1475 "transform_hlds.pd_info.c"
static const MR_EnumFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__enum_functor_desc_version_is_exact_0_0 = {
  (MR_String) "exact",
  (MR_Integer) 0
};

#line 1481 "transform_hlds.pd_info.c"
static const MR_EnumFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__enum_functor_desc_version_is_exact_0_1 = {
  (MR_String) "more_general",
  (MR_Integer) 1
};

#line 1487 "transform_hlds.pd_info.c"
static const MR_EnumFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__enum_value_ordered_version_is_exact_0[2] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__enum_functor_desc_version_is_exact_0_0,
  &transform_hlds__pd_info__transform_hlds__pd_info__enum_functor_desc_version_is_exact_0_1
};

#line 1493 "transform_hlds.pd_info.c"
static const MR_EnumFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__enum_name_ordered_version_is_exact_0[2] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__enum_functor_desc_version_is_exact_0_0,
  &transform_hlds__pd_info__transform_hlds__pd_info__enum_functor_desc_version_is_exact_0_1
};

#line 1499 "transform_hlds.pd_info.c"
static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_version_is_exact_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1505 "transform_hlds.pd_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_is_exact_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__pd_info____Unify____version_is_exact_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____version_is_exact_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "version_is_exact",
  {
    transform_hlds__pd_info__transform_hlds__pd_info__enum_name_ordered_version_is_exact_0
  },
  {
    transform_hlds__pd_info__transform_hlds__pd_info__enum_value_ordered_version_is_exact_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_version_is_exact_0
};

#line 1526 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____branch_info_map_1_0_10001(
#line 1529 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 1531 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 1533 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
#line 1535 "transform_hlds.pd_info.c"
{
#line 1537 "transform_hlds.pd_info.c"
  {
#line 1539 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded;

#line 1542 "transform_hlds.pd_info.c"
    {
#line 1544 "transform_hlds.pd_info.c"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____branch_info_map_1_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    }
#line 1547 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 1549 "transform_hlds.pd_info.c"
  }
#line 1551 "transform_hlds.pd_info.c"
}

#line 1554 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____branch_info_map_1_0_10001(
#line 1557 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 1559 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_2,
#line 1561 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3,
#line 1563 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_4)
#line 1565 "transform_hlds.pd_info.c"
{
#line 1567 "transform_hlds.pd_info.c"
  {
#line 1569 "transform_hlds.pd_info.c"
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

#line 1572 "transform_hlds.pd_info.c"
    {
#line 1574 "transform_hlds.pd_info.c"
      transform_hlds__pd_info____Compare____branch_info_map_1_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), &transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_3), ((MR_Word) transform_hlds__pd_info__wrapper_arg_4));
    }
#line 1577 "transform_hlds.pd_info.c"
    *transform_hlds__pd_info__wrapper_arg_2 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
#line 1579 "transform_hlds.pd_info.c"
  }
#line 1581 "transform_hlds.pd_info.c"
}

#line 1584 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____goal_version_index_0_0_10001(
#line 1587 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 1589 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
#line 1591 "transform_hlds.pd_info.c"
{
#line 1593 "transform_hlds.pd_info.c"
  {
#line 1595 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded;

#line 1598 "transform_hlds.pd_info.c"
    {
#line 1600 "transform_hlds.pd_info.c"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____goal_version_index_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    }
#line 1603 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 1605 "transform_hlds.pd_info.c"
  }
#line 1607 "transform_hlds.pd_info.c"
}

#line 1610 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____goal_version_index_0_0_10001(
#line 1613 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 1615 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 1617 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
#line 1619 "transform_hlds.pd_info.c"
{
#line 1621 "transform_hlds.pd_info.c"
  {
#line 1623 "transform_hlds.pd_info.c"
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

#line 1626 "transform_hlds.pd_info.c"
    {
#line 1628 "transform_hlds.pd_info.c"
      transform_hlds__pd_info____Compare____goal_version_index_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    }
#line 1631 "transform_hlds.pd_info.c"
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
#line 1633 "transform_hlds.pd_info.c"
  }
#line 1635 "transform_hlds.pd_info.c"
}

#line 1638 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____maybe_version_0_0_10001(
#line 1641 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 1643 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
#line 1645 "transform_hlds.pd_info.c"
{
#line 1647 "transform_hlds.pd_info.c"
  {
#line 1649 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded;

#line 1652 "transform_hlds.pd_info.c"
    {
#line 1654 "transform_hlds.pd_info.c"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____maybe_version_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    }
#line 1657 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 1659 "transform_hlds.pd_info.c"
  }
#line 1661 "transform_hlds.pd_info.c"
}

#line 1664 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____maybe_version_0_0_10001(
#line 1667 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 1669 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 1671 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
#line 1673 "transform_hlds.pd_info.c"
{
#line 1675 "transform_hlds.pd_info.c"
  {
#line 1677 "transform_hlds.pd_info.c"
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

#line 1680 "transform_hlds.pd_info.c"
    {
#line 1682 "transform_hlds.pd_info.c"
      transform_hlds__pd_info____Compare____maybe_version_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    }
#line 1685 "transform_hlds.pd_info.c"
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
#line 1687 "transform_hlds.pd_info.c"
  }
#line 1689 "transform_hlds.pd_info.c"
}

#line 1692 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_arg_info_0_0_10001(
#line 1695 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 1697 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
#line 1699 "transform_hlds.pd_info.c"
{
#line 1701 "transform_hlds.pd_info.c"
  {
#line 1703 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded;

#line 1706 "transform_hlds.pd_info.c"
    {
#line 1708 "transform_hlds.pd_info.c"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____pd_arg_info_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    }
#line 1711 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 1713 "transform_hlds.pd_info.c"
  }
#line 1715 "transform_hlds.pd_info.c"
}

#line 1718 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____pd_arg_info_0_0_10001(
#line 1721 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 1723 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 1725 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
#line 1727 "transform_hlds.pd_info.c"
{
#line 1729 "transform_hlds.pd_info.c"
  {
#line 1731 "transform_hlds.pd_info.c"
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

#line 1734 "transform_hlds.pd_info.c"
    {
#line 1736 "transform_hlds.pd_info.c"
      transform_hlds__pd_info____Compare____pd_arg_info_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    }
#line 1739 "transform_hlds.pd_info.c"
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
#line 1741 "transform_hlds.pd_info.c"
  }
#line 1743 "transform_hlds.pd_info.c"
}

#line 1746 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_branch_info_1_0_10001(
#line 1749 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 1751 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 1753 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
#line 1755 "transform_hlds.pd_info.c"
{
#line 1757 "transform_hlds.pd_info.c"
  {
#line 1759 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded;

#line 1762 "transform_hlds.pd_info.c"
    {
#line 1764 "transform_hlds.pd_info.c"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____pd_branch_info_1_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    }
#line 1767 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 1769 "transform_hlds.pd_info.c"
  }
#line 1771 "transform_hlds.pd_info.c"
}

#line 1774 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____pd_branch_info_1_0_10001(
#line 1777 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 1779 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_2,
#line 1781 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3,
#line 1783 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_4)
#line 1785 "transform_hlds.pd_info.c"
{
#line 1787 "transform_hlds.pd_info.c"
  {
#line 1789 "transform_hlds.pd_info.c"
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

#line 1792 "transform_hlds.pd_info.c"
    {
#line 1794 "transform_hlds.pd_info.c"
      transform_hlds__pd_info____Compare____pd_branch_info_1_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), &transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_3), ((MR_Word) transform_hlds__pd_info__wrapper_arg_4));
    }
#line 1797 "transform_hlds.pd_info.c"
    *transform_hlds__pd_info__wrapper_arg_2 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
#line 1799 "transform_hlds.pd_info.c"
  }
#line 1801 "transform_hlds.pd_info.c"
}

#line 1804 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_info_0_0_10001(
#line 1807 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 1809 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
#line 1811 "transform_hlds.pd_info.c"
{
#line 1813 "transform_hlds.pd_info.c"
  {
#line 1815 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded;

#line 1818 "transform_hlds.pd_info.c"
    {
#line 1820 "transform_hlds.pd_info.c"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____pd_info_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    }
#line 1823 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 1825 "transform_hlds.pd_info.c"
  }
#line 1827 "transform_hlds.pd_info.c"
}

#line 1830 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____pd_info_0_0_10001(
#line 1833 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 1835 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 1837 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
#line 1839 "transform_hlds.pd_info.c"
{
#line 1841 "transform_hlds.pd_info.c"
  {
#line 1843 "transform_hlds.pd_info.c"
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

#line 1846 "transform_hlds.pd_info.c"
    {
#line 1848 "transform_hlds.pd_info.c"
      transform_hlds__pd_info____Compare____pd_info_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    }
#line 1851 "transform_hlds.pd_info.c"
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
#line 1853 "transform_hlds.pd_info.c"
  }
#line 1855 "transform_hlds.pd_info.c"
}

#line 1858 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_proc_arg_info_0_0_10001(
#line 1861 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 1863 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
#line 1865 "transform_hlds.pd_info.c"
{
#line 1867 "transform_hlds.pd_info.c"
  {
#line 1869 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded;

#line 1872 "transform_hlds.pd_info.c"
    {
#line 1874 "transform_hlds.pd_info.c"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____pd_proc_arg_info_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    }
#line 1877 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 1879 "transform_hlds.pd_info.c"
  }
#line 1881 "transform_hlds.pd_info.c"
}

#line 1884 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____pd_proc_arg_info_0_0_10001(
#line 1887 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 1889 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 1891 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
#line 1893 "transform_hlds.pd_info.c"
{
#line 1895 "transform_hlds.pd_info.c"
  {
#line 1897 "transform_hlds.pd_info.c"
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

#line 1900 "transform_hlds.pd_info.c"
    {
#line 1902 "transform_hlds.pd_info.c"
      transform_hlds__pd_info____Compare____pd_proc_arg_info_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    }
#line 1905 "transform_hlds.pd_info.c"
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
#line 1907 "transform_hlds.pd_info.c"
  }
#line 1909 "transform_hlds.pd_info.c"
}

#line 1912 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____unfold_info_0_0_10001(
#line 1915 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 1917 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
#line 1919 "transform_hlds.pd_info.c"
{
#line 1921 "transform_hlds.pd_info.c"
  {
#line 1923 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded;

#line 1926 "transform_hlds.pd_info.c"
    {
#line 1928 "transform_hlds.pd_info.c"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____unfold_info_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    }
#line 1931 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 1933 "transform_hlds.pd_info.c"
  }
#line 1935 "transform_hlds.pd_info.c"
}

#line 1938 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____unfold_info_0_0_10001(
#line 1941 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 1943 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 1945 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
#line 1947 "transform_hlds.pd_info.c"
{
#line 1949 "transform_hlds.pd_info.c"
  {
#line 1951 "transform_hlds.pd_info.c"
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

#line 1954 "transform_hlds.pd_info.c"
    {
#line 1956 "transform_hlds.pd_info.c"
      transform_hlds__pd_info____Compare____unfold_info_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    }
#line 1959 "transform_hlds.pd_info.c"
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
#line 1961 "transform_hlds.pd_info.c"
  }
#line 1963 "transform_hlds.pd_info.c"
}

#line 1966 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____useless_versions_0_0_10001(
#line 1969 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 1971 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
#line 1973 "transform_hlds.pd_info.c"
{
#line 1975 "transform_hlds.pd_info.c"
  {
#line 1977 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded;

#line 1980 "transform_hlds.pd_info.c"
    {
#line 1982 "transform_hlds.pd_info.c"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____useless_versions_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    }
#line 1985 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 1987 "transform_hlds.pd_info.c"
  }
#line 1989 "transform_hlds.pd_info.c"
}

#line 1992 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____useless_versions_0_0_10001(
#line 1995 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 1997 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 1999 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
#line 2001 "transform_hlds.pd_info.c"
{
#line 2003 "transform_hlds.pd_info.c"
  {
#line 2005 "transform_hlds.pd_info.c"
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

#line 2008 "transform_hlds.pd_info.c"
    {
#line 2010 "transform_hlds.pd_info.c"
      transform_hlds__pd_info____Compare____useless_versions_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    }
#line 2013 "transform_hlds.pd_info.c"
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
#line 2015 "transform_hlds.pd_info.c"
  }
#line 2017 "transform_hlds.pd_info.c"
}

#line 2020 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_index_0_0_10001(
#line 2023 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 2025 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
#line 2027 "transform_hlds.pd_info.c"
{
#line 2029 "transform_hlds.pd_info.c"
  {
#line 2031 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded;

#line 2034 "transform_hlds.pd_info.c"
    {
#line 2036 "transform_hlds.pd_info.c"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____version_index_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    }
#line 2039 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 2041 "transform_hlds.pd_info.c"
  }
#line 2043 "transform_hlds.pd_info.c"
}

#line 2046 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____version_index_0_0_10001(
#line 2049 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 2051 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 2053 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
#line 2055 "transform_hlds.pd_info.c"
{
#line 2057 "transform_hlds.pd_info.c"
  {
#line 2059 "transform_hlds.pd_info.c"
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

#line 2062 "transform_hlds.pd_info.c"
    {
#line 2064 "transform_hlds.pd_info.c"
      transform_hlds__pd_info____Compare____version_index_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    }
#line 2067 "transform_hlds.pd_info.c"
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
#line 2069 "transform_hlds.pd_info.c"
  }
#line 2071 "transform_hlds.pd_info.c"
}

#line 2074 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_info_0_0_10001(
#line 2077 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 2079 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
#line 2081 "transform_hlds.pd_info.c"
{
#line 2083 "transform_hlds.pd_info.c"
  {
#line 2085 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded;

#line 2088 "transform_hlds.pd_info.c"
    {
#line 2090 "transform_hlds.pd_info.c"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____version_info_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    }
#line 2093 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 2095 "transform_hlds.pd_info.c"
  }
#line 2097 "transform_hlds.pd_info.c"
}

#line 2100 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____version_info_0_0_10001(
#line 2103 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 2105 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 2107 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
#line 2109 "transform_hlds.pd_info.c"
{
#line 2111 "transform_hlds.pd_info.c"
  {
#line 2113 "transform_hlds.pd_info.c"
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

#line 2116 "transform_hlds.pd_info.c"
    {
#line 2118 "transform_hlds.pd_info.c"
      transform_hlds__pd_info____Compare____version_info_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    }
#line 2121 "transform_hlds.pd_info.c"
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
#line 2123 "transform_hlds.pd_info.c"
  }
#line 2125 "transform_hlds.pd_info.c"
}

#line 2128 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_is_exact_0_0_10001(
#line 2131 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 2133 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
#line 2135 "transform_hlds.pd_info.c"
{
#line 2137 "transform_hlds.pd_info.c"
  {
#line 2139 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded;

#line 2142 "transform_hlds.pd_info.c"
    {
#line 2144 "transform_hlds.pd_info.c"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____version_is_exact_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    }
#line 2147 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 2149 "transform_hlds.pd_info.c"
  }
#line 2151 "transform_hlds.pd_info.c"
}

#line 2154 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____version_is_exact_0_0_10001(
#line 2157 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 2159 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 2161 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
#line 2163 "transform_hlds.pd_info.c"
{
#line 2165 "transform_hlds.pd_info.c"
  {
#line 2167 "transform_hlds.pd_info.c"
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

#line 2170 "transform_hlds.pd_info.c"
    {
#line 2172 "transform_hlds.pd_info.c"
      transform_hlds__pd_info____Compare____version_is_exact_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    }
#line 2175 "transform_hlds.pd_info.c"
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
#line 2177 "transform_hlds.pd_info.c"
  }
#line 2179 "transform_hlds.pd_info.c"
}

#line 541 "pd_info.m"
static void MR_CALL 
transform_hlds__pd_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_105_99_107_95_118_101_114_115_105_111_110_95_95_91_49_93_95_48_7_p_0(
#line 541 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 541 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__3_3,
#line 541 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__4_4,
#line 541 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__5_5,
#line 541 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__6_6,
#line 541 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__7_7)
#line 541 "pd_info.m"
{
#line 545 "pd_info.m"
  {
#line 545 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;

#line 545 "pd_info.m"
    if ((transform_hlds__pd_info__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 545 "pd_info.m"
      {
#line 545 "pd_info.m"
        {
#line 545 "pd_info.m"
          MR_Word base;
#line 545 "pd_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 545 "pd_info.m"
          *transform_hlds__pd_info__HeadVar__7_7 = base;
#line 545 "pd_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 1));
#line 545 "pd_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_info__HeadVar__2_2));
#line 545 "pd_info.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__pd_info__HeadVar__5_5));
#line 545 "pd_info.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__pd_info__HeadVar__3_3));
#line 545 "pd_info.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__pd_info__HeadVar__4_4));
#line 545 "pd_info.m"
        }
#line 545 "pd_info.m"
      }
#line 545 "pd_info.m"
    else
#line 545 "pd_info.m"
      {
#line 545 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__6_6, (MR_Integer) 4)));
#line 545 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__6_6, (MR_Integer) 3)));
#line 545 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__6_6, (MR_Integer) 2)));
#line 545 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__6_6, (MR_Integer) 1)));
#line 545 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__6_6, (MR_Integer) 0)));

#line 545 "pd_info.m"
        if ((transform_hlds__pd_info__V_60_60 == (MR_Integer) 0))
#line 547 "pd_info.m"
          {
#line 547 "pd_info.m"
            {
#line 547 "pd_info.m"
              MR_Word base;
#line 547 "pd_info.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 547 "pd_info.m"
              *transform_hlds__pd_info__HeadVar__7_7 = base;
#line 547 "pd_info.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 547 "pd_info.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_59_59));
#line 547 "pd_info.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_58_58));
#line 547 "pd_info.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_57_57));
#line 547 "pd_info.m"
              MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_56_56));
#line 547 "pd_info.m"
            }
#line 547 "pd_info.m"
          }
#line 545 "pd_info.m"
        else
#line 552 "pd_info.m"
          {
#line 552 "pd_info.m"
            MR_Integer transform_hlds__pd_info__CostDelta1_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 6)));
#line 552 "pd_info.m"
            MR_Integer transform_hlds__pd_info__CostDelta2_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__V_58_58, (MR_Integer) 6)));
#line 553 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 0)));
#line 553 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 1)));
#line 553 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 2)));
#line 553 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 3)));
#line 553 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 4)));
#line 553 "pd_info.m"
            MR_Integer transform_hlds__pd_info__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 5)));
#line 553 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 7)));
#line 553 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 8)));
#line 554 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__V_58_58, (MR_Integer) 0)));
#line 554 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__V_58_58, (MR_Integer) 1)));
#line 554 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__V_58_58, (MR_Integer) 2)));
#line 554 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__V_58_58, (MR_Integer) 3)));
#line 554 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__V_58_58, (MR_Integer) 4)));
#line 554 "pd_info.m"
            MR_Integer transform_hlds__pd_info__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__V_58_58, (MR_Integer) 5)));
#line 554 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__V_58_58, (MR_Integer) 7)));
#line 554 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__V_58_58, (MR_Integer) 8)));

#line 556 "pd_info.m"
            transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CostDelta1_41 > transform_hlds__pd_info__CostDelta2_50);
#line 559 "pd_info.m"
            if (transform_hlds__pd_info__succeeded)
#line 557 "pd_info.m"
              {
#line 557 "pd_info.m"
                {
#line 557 "pd_info.m"
                  MR_Word base;
#line 557 "pd_info.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 557 "pd_info.m"
                  *transform_hlds__pd_info__HeadVar__7_7 = base;
#line 557 "pd_info.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 1));
#line 557 "pd_info.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_info__HeadVar__2_2));
#line 557 "pd_info.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__pd_info__HeadVar__5_5));
#line 557 "pd_info.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__pd_info__HeadVar__3_3));
#line 557 "pd_info.m"
                  MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__pd_info__HeadVar__4_4));
#line 557 "pd_info.m"
                }
#line 557 "pd_info.m"
              }
#line 559 "pd_info.m"
            else
#line 560 "pd_info.m"
              {
#line 560 "pd_info.m"
                {
#line 560 "pd_info.m"
                  MR_Word base;
#line 560 "pd_info.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 560 "pd_info.m"
                  *transform_hlds__pd_info__HeadVar__7_7 = base;
#line 560 "pd_info.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 1));
#line 560 "pd_info.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_59_59));
#line 560 "pd_info.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_58_58));
#line 560 "pd_info.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_57_57));
#line 560 "pd_info.m"
                  MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_56_56));
#line 560 "pd_info.m"
                }
#line 560 "pd_info.m"
              }
#line 552 "pd_info.m"
          }
#line 545 "pd_info.m"
      }
#line 545 "pd_info.m"
  }
#line 541 "pd_info.m"
}

#line 437 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info____Compare____version_is_exact_0_0(
#line 437 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
#line 437 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 437 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
#line 437 "pd_info.m"
{
#line 437 "pd_info.m"
  {
#line 437 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 437 "pd_info.m"
    MR_Integer transform_hlds__pd_info__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;
#line 437 "pd_info.m"
    MR_Integer transform_hlds__pd_info__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__pd_info__HeadVar__3_3;

#line 437 "pd_info.m"
    {
#line 437 "pd_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__pd_info__HeadVar__1_1, transform_hlds__pd_info__Cast_HeadVar1_4, transform_hlds__pd_info__Cast_HeadVar2_5);
#line 437 "pd_info.m"
      return;
    }
#line 437 "pd_info.m"
  }
#line 437 "pd_info.m"
}

#line 437 "pd_info.m"
MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_is_exact_0_0(
#line 437 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_1,
#line 437 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
#line 437 "pd_info.m"
{
#line 2416 "transform_hlds.pd_info.c"
  {
#line 2418 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__HeadVar__2_1 == transform_hlds__pd_info__HeadVar__2_2);

#line 2421 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 2423 "transform_hlds.pd_info.c"
  }
#line 437 "pd_info.m"
}

#line 441 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info____Compare____version_info_0_0(
#line 441 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
#line 441 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 441 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
#line 441 "pd_info.m"
{
#line 441 "pd_info.m"
  {
#line 441 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 441 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastX_30 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;
#line 441 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastY_31 = (MR_Integer) transform_hlds__pd_info__HeadVar__3_3;

#line 441 "pd_info.m"
    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastX_30 == transform_hlds__pd_info__CastY_31);
#line 441 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 2452 "transform_hlds.pd_info.c"
      *transform_hlds__pd_info__HeadVar__1_1 = (MR_Integer) 0;
#line 441 "pd_info.m"
    else
#line 441 "pd_info.m"
      {
#line 441 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));
#line 441 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
#line 441 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 2)));
#line 441 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 3)));
#line 441 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 4)));
#line 441 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 5)));
#line 441 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 6)));
#line 441 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 7)));
#line 441 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 8)));
#line 441 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 0)));
#line 441 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 1)));
#line 441 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 2)));
#line 441 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 3)));
#line 441 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 4)));
#line 441 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 5)));
#line 441 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 6)));
#line 441 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 7)));
#line 441 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 8)));
#line 441 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_22_22;

#line 441 "pd_info.m"
        {
#line 441 "pd_info.m"
          hlds__hlds_goal____Compare____hlds_goal_0_0(&transform_hlds__pd_info__V_22_22, transform_hlds__pd_info__V_4_4, transform_hlds__pd_info__V_13_13);
        }
#line 2502 "transform_hlds.pd_info.c"
        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_22_22 == (MR_Integer) 0);
#line 441 "pd_info.m"
        transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 441 "pd_info.m"
        if (transform_hlds__pd_info__succeeded)
#line 441 "pd_info.m"
          *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_22_22;
#line 441 "pd_info.m"
        else
#line 441 "pd_info.m"
          {
#line 441 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_23_23;

#line 441 "pd_info.m"
            {
#line 441 "pd_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[0], &transform_hlds__pd_info__V_23_23, ((MR_Box) (transform_hlds__pd_info__V_5_5)), ((MR_Box) (transform_hlds__pd_info__V_14_14)));
            }
#line 2522 "transform_hlds.pd_info.c"
            transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_23_23 == (MR_Integer) 0);
#line 441 "pd_info.m"
            transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 441 "pd_info.m"
            if (transform_hlds__pd_info__succeeded)
#line 441 "pd_info.m"
              *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_23_23;
#line 441 "pd_info.m"
            else
#line 441 "pd_info.m"
              {
#line 441 "pd_info.m"
                MR_Word transform_hlds__pd_info__V_24_24;

#line 441 "pd_info.m"
                {
#line 441 "pd_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[8], &transform_hlds__pd_info__V_24_24, ((MR_Box) (transform_hlds__pd_info__V_6_6)), ((MR_Box) (transform_hlds__pd_info__V_15_15)));
                }
#line 2542 "transform_hlds.pd_info.c"
                transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_24_24 == (MR_Integer) 0);
#line 441 "pd_info.m"
                transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 441 "pd_info.m"
                if (transform_hlds__pd_info__succeeded)
#line 441 "pd_info.m"
                  *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_24_24;
#line 441 "pd_info.m"
                else
#line 441 "pd_info.m"
                  {
#line 441 "pd_info.m"
                    MR_Word transform_hlds__pd_info__V_25_25;

#line 441 "pd_info.m"
                    {
#line 441 "pd_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[9], &transform_hlds__pd_info__V_25_25, ((MR_Box) (transform_hlds__pd_info__V_7_7)), ((MR_Box) (transform_hlds__pd_info__V_16_16)));
                    }
#line 2562 "transform_hlds.pd_info.c"
                    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_25_25 == (MR_Integer) 0);
#line 441 "pd_info.m"
                    transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 441 "pd_info.m"
                    if (transform_hlds__pd_info__succeeded)
#line 441 "pd_info.m"
                      *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_25_25;
#line 441 "pd_info.m"
                    else
#line 441 "pd_info.m"
                      {
#line 441 "pd_info.m"
                        MR_Word transform_hlds__pd_info__V_26_26;

#line 441 "pd_info.m"
                        {
#line 441 "pd_info.m"
                          hlds__instmap____Compare____instmap_0_0(&transform_hlds__pd_info__V_26_26, transform_hlds__pd_info__V_8_8, transform_hlds__pd_info__V_17_17);
                        }
#line 2582 "transform_hlds.pd_info.c"
                        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_26_26 == (MR_Integer) 0);
#line 441 "pd_info.m"
                        transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 441 "pd_info.m"
                        if (transform_hlds__pd_info__succeeded)
#line 441 "pd_info.m"
                          *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_26_26;
#line 441 "pd_info.m"
                        else
#line 441 "pd_info.m"
                          {
#line 441 "pd_info.m"
                            MR_Word transform_hlds__pd_info__V_27_27;

#line 441 "pd_info.m"
                            {
#line 441 "pd_info.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__pd_info__V_27_27, transform_hlds__pd_info__V_9_9, transform_hlds__pd_info__V_18_18);
                            }
#line 2602 "transform_hlds.pd_info.c"
                            transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_27_27 == (MR_Integer) 0);
#line 441 "pd_info.m"
                            transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 441 "pd_info.m"
                            if (transform_hlds__pd_info__succeeded)
#line 441 "pd_info.m"
                              *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_27_27;
#line 441 "pd_info.m"
                            else
#line 441 "pd_info.m"
                              {
#line 441 "pd_info.m"
                                MR_Word transform_hlds__pd_info__V_28_28;

#line 441 "pd_info.m"
                                {
#line 441 "pd_info.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__pd_info__V_28_28, transform_hlds__pd_info__V_10_10, transform_hlds__pd_info__V_19_19);
                                }
#line 2622 "transform_hlds.pd_info.c"
                                transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_28_28 == (MR_Integer) 0);
#line 441 "pd_info.m"
                                transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 441 "pd_info.m"
                                if (transform_hlds__pd_info__succeeded)
#line 441 "pd_info.m"
                                  *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_28_28;
#line 441 "pd_info.m"
                                else
#line 441 "pd_info.m"
                                  {
#line 441 "pd_info.m"
                                    MR_Word transform_hlds__pd_info__V_29_29;

#line 441 "pd_info.m"
                                    {
#line 441 "pd_info.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[6], &transform_hlds__pd_info__V_29_29, ((MR_Box) (transform_hlds__pd_info__V_11_11)), ((MR_Box) (transform_hlds__pd_info__V_20_20)));
                                    }
#line 2642 "transform_hlds.pd_info.c"
                                    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_29_29 == (MR_Integer) 0);
#line 441 "pd_info.m"
                                    transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 441 "pd_info.m"
                                    if (transform_hlds__pd_info__succeeded)
#line 441 "pd_info.m"
                                      *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_29_29;
#line 441 "pd_info.m"
                                    else
#line 441 "pd_info.m"
                                      {
#line 441 "pd_info.m"
                                        {
#line 441 "pd_info.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[10], transform_hlds__pd_info__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_info__V_12_12)), ((MR_Box) (transform_hlds__pd_info__V_21_21)));
#line 441 "pd_info.m"
                                          return;
                                        }
#line 441 "pd_info.m"
                                      }
#line 441 "pd_info.m"
                                  }
#line 441 "pd_info.m"
                              }
#line 441 "pd_info.m"
                          }
#line 441 "pd_info.m"
                      }
#line 441 "pd_info.m"
                  }
#line 441 "pd_info.m"
              }
#line 441 "pd_info.m"
          }
#line 441 "pd_info.m"
      }
#line 441 "pd_info.m"
  }
#line 441 "pd_info.m"
}

#line 441 "pd_info.m"
MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_info_0_0(
#line 441 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__1_1,
#line 441 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
#line 441 "pd_info.m"
{
#line 441 "pd_info.m"
  {
#line 441 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 441 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastX_21 = (MR_Integer) transform_hlds__pd_info__HeadVar__1_1;
#line 441 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastY_22 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;

#line 441 "pd_info.m"
    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastX_21 == transform_hlds__pd_info__CastY_22);
#line 441 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 441 "pd_info.m"
      transform_hlds__pd_info__succeeded = MR_TRUE;
#line 441 "pd_info.m"
    else
#line 441 "pd_info.m"
      {
#line 441 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_24_24;
#line 441 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_25_25;
#line 441 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_26_26;
#line 441 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_28_28;
#line 441 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_29_29;
#line 441 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 0)));
#line 441 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 1)));
#line 441 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 2)));
#line 441 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 3)));
#line 441 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 4)));
#line 441 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 5)));
#line 441 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 6)));
#line 441 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 7)));
#line 441 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 8)));
#line 441 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));
#line 441 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
#line 441 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 2)));
#line 441 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 3)));
#line 441 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 4)));
#line 441 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 5)));
#line 441 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 6)));
#line 441 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 7)));
#line 441 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 8)));

#line 2759 "transform_hlds.pd_info.c"
        {
#line 2761 "transform_hlds.pd_info.c"
          transform_hlds__pd_info__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__pd_info__V_3_3, transform_hlds__pd_info__V_12_12);
        }
#line 441 "pd_info.m"
        if (transform_hlds__pd_info__succeeded)
#line 441 "pd_info.m"
          {
#line 2768 "transform_hlds.pd_info.c"
            transform_hlds__pd_info__TypeInfo_24_24 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[0];
#line 2770 "transform_hlds.pd_info.c"
            {
#line 2772 "transform_hlds.pd_info.c"
              transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_24_24, ((MR_Box) (transform_hlds__pd_info__V_4_4)), ((MR_Box) (transform_hlds__pd_info__V_13_13)));
            }
#line 441 "pd_info.m"
            if (transform_hlds__pd_info__succeeded)
#line 441 "pd_info.m"
              {
#line 2779 "transform_hlds.pd_info.c"
                transform_hlds__pd_info__TypeInfo_25_25 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[8];
#line 2781 "transform_hlds.pd_info.c"
                {
#line 2783 "transform_hlds.pd_info.c"
                  transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_25_25, ((MR_Box) (transform_hlds__pd_info__V_5_5)), ((MR_Box) (transform_hlds__pd_info__V_14_14)));
                }
#line 441 "pd_info.m"
                if (transform_hlds__pd_info__succeeded)
#line 441 "pd_info.m"
                  {
#line 2790 "transform_hlds.pd_info.c"
                    transform_hlds__pd_info__TypeInfo_26_26 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[9];
#line 2792 "transform_hlds.pd_info.c"
                    {
#line 2794 "transform_hlds.pd_info.c"
                      transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_26_26, ((MR_Box) (transform_hlds__pd_info__V_6_6)), ((MR_Box) (transform_hlds__pd_info__V_15_15)));
                    }
#line 441 "pd_info.m"
                    if (transform_hlds__pd_info__succeeded)
#line 441 "pd_info.m"
                      {
#line 2801 "transform_hlds.pd_info.c"
                        {
#line 2803 "transform_hlds.pd_info.c"
                          transform_hlds__pd_info__succeeded = hlds__instmap____Unify____instmap_0_0(transform_hlds__pd_info__V_7_7, transform_hlds__pd_info__V_16_16);
                        }
#line 441 "pd_info.m"
                        if (transform_hlds__pd_info__succeeded)
#line 441 "pd_info.m"
                          {
#line 2810 "transform_hlds.pd_info.c"
                            transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_8_8 == transform_hlds__pd_info__V_17_17);
#line 441 "pd_info.m"
                            if (transform_hlds__pd_info__succeeded)
#line 441 "pd_info.m"
                              {
#line 2816 "transform_hlds.pd_info.c"
                                transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_9_9 == transform_hlds__pd_info__V_18_18);
#line 441 "pd_info.m"
                                if (transform_hlds__pd_info__succeeded)
#line 441 "pd_info.m"
                                  {
#line 2822 "transform_hlds.pd_info.c"
                                    transform_hlds__pd_info__TypeInfo_28_28 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[6];
#line 2824 "transform_hlds.pd_info.c"
                                    {
#line 2826 "transform_hlds.pd_info.c"
                                      transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_28_28, ((MR_Box) (transform_hlds__pd_info__V_10_10)), ((MR_Box) (transform_hlds__pd_info__V_19_19)));
                                    }
#line 441 "pd_info.m"
                                    if (transform_hlds__pd_info__succeeded)
#line 441 "pd_info.m"
                                      {
#line 2833 "transform_hlds.pd_info.c"
                                        transform_hlds__pd_info__TypeInfo_29_29 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[10];
#line 2835 "transform_hlds.pd_info.c"
                                        {
#line 2837 "transform_hlds.pd_info.c"
                                          return transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_29_29, ((MR_Box) (transform_hlds__pd_info__V_11_11)), ((MR_Box) (transform_hlds__pd_info__V_20_20)));
                                        }
#line 441 "pd_info.m"
                                      }
#line 441 "pd_info.m"
                                  }
#line 441 "pd_info.m"
                              }
#line 441 "pd_info.m"
                          }
#line 441 "pd_info.m"
                      }
#line 441 "pd_info.m"
                  }
#line 441 "pd_info.m"
              }
#line 441 "pd_info.m"
          }
#line 441 "pd_info.m"
      }
#line 441 "pd_info.m"
    return transform_hlds__pd_info__succeeded;
#line 441 "pd_info.m"
  }
#line 441 "pd_info.m"
}

#line 60 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info____Compare____version_index_0_0(
#line 60 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
#line 60 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 60 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
#line 60 "pd_info.m"
{
#line 60 "pd_info.m"
  {
#line 60 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 60 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar1_4 = transform_hlds__pd_info__HeadVar__2_2;
#line 60 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar2_5 = transform_hlds__pd_info__HeadVar__3_3;

#line 60 "pd_info.m"
    {
#line 60 "pd_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[5], transform_hlds__pd_info__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar2_5)));
#line 60 "pd_info.m"
      return;
    }
#line 60 "pd_info.m"
  }
#line 60 "pd_info.m"
}

#line 60 "pd_info.m"
MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_index_0_0(
#line 60 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__1_1,
#line 60 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
#line 60 "pd_info.m"
{
#line 60 "pd_info.m"
  {
#line 60 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 60 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar1_3 = transform_hlds__pd_info__HeadVar__1_1;
#line 60 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar2_4 = transform_hlds__pd_info__HeadVar__2_2;

#line 60 "pd_info.m"
    {
#line 60 "pd_info.m"
      return transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[5], ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar2_4)));
    }
#line 60 "pd_info.m"
    return transform_hlds__pd_info__succeeded;
#line 60 "pd_info.m"
  }
#line 60 "pd_info.m"
}

#line 56 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info____Compare____useless_versions_0_0(
#line 56 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
#line 56 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 56 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
#line 56 "pd_info.m"
{
#line 56 "pd_info.m"
  {
#line 56 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 56 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar1_4 = transform_hlds__pd_info__HeadVar__2_2;
#line 56 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar2_5 = transform_hlds__pd_info__HeadVar__3_3;

#line 56 "pd_info.m"
    {
#line 56 "pd_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[7], transform_hlds__pd_info__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar2_5)));
#line 56 "pd_info.m"
      return;
    }
#line 56 "pd_info.m"
  }
#line 56 "pd_info.m"
}

#line 56 "pd_info.m"
MR_bool MR_CALL 
transform_hlds__pd_info____Unify____useless_versions_0_0(
#line 56 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__1_1,
#line 56 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
#line 56 "pd_info.m"
{
#line 56 "pd_info.m"
  {
#line 56 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 56 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar1_3 = transform_hlds__pd_info__HeadVar__1_1;
#line 56 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar2_4 = transform_hlds__pd_info__HeadVar__2_2;

#line 56 "pd_info.m"
    {
#line 56 "pd_info.m"
      return transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[7], ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar2_4)));
    }
#line 56 "pd_info.m"
    return transform_hlds__pd_info__succeeded;
#line 56 "pd_info.m"
  }
#line 56 "pd_info.m"
}

#line 224 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info____Compare____unfold_info_0_0(
#line 224 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
#line 224 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 224 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
#line 224 "pd_info.m"
{
#line 224 "pd_info.m"
  {
#line 224 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 224 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastX_33 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;
#line 224 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastY_34 = (MR_Integer) transform_hlds__pd_info__HeadVar__3_3;

#line 224 "pd_info.m"
    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastX_33 == transform_hlds__pd_info__CastY_34);
#line 224 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 3013 "transform_hlds.pd_info.c"
      *transform_hlds__pd_info__HeadVar__1_1 = (MR_Integer) 0;
#line 224 "pd_info.m"
    else
#line 224 "pd_info.m"
      {
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
#line 224 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 2)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 3)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 4)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 5)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 6)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 7)));
#line 224 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 8)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 9)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 0)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 1)));
#line 224 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 2)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 3)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 4)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 5)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 6)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 7)));
#line 224 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 8)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 9)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_24_24;

#line 224 "pd_info.m"
        {
#line 224 "pd_info.m"
          hlds__hlds_pred____Compare____proc_info_0_0(&transform_hlds__pd_info__V_24_24, transform_hlds__pd_info__V_4_4, transform_hlds__pd_info__V_14_14);
        }
#line 3067 "transform_hlds.pd_info.c"
        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_24_24 == (MR_Integer) 0);
#line 224 "pd_info.m"
        transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 224 "pd_info.m"
        if (transform_hlds__pd_info__succeeded)
#line 224 "pd_info.m"
          *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_24_24;
#line 224 "pd_info.m"
        else
#line 224 "pd_info.m"
          {
#line 224 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_25_25;

#line 224 "pd_info.m"
            {
#line 224 "pd_info.m"
              hlds__instmap____Compare____instmap_0_0(&transform_hlds__pd_info__V_25_25, transform_hlds__pd_info__V_5_5, transform_hlds__pd_info__V_15_15);
            }
#line 3087 "transform_hlds.pd_info.c"
            transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_25_25 == (MR_Integer) 0);
#line 224 "pd_info.m"
            transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 224 "pd_info.m"
            if (transform_hlds__pd_info__succeeded)
#line 224 "pd_info.m"
              *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_25_25;
#line 224 "pd_info.m"
            else
#line 224 "pd_info.m"
              {
#line 224 "pd_info.m"
                MR_Word transform_hlds__pd_info__V_26_26;

#line 224 "pd_info.m"
                {
#line 224 "pd_info.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__pd_info__V_26_26, transform_hlds__pd_info__V_6_6, transform_hlds__pd_info__V_16_16);
                }
#line 3107 "transform_hlds.pd_info.c"
                transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_26_26 == (MR_Integer) 0);
#line 224 "pd_info.m"
                transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 224 "pd_info.m"
                if (transform_hlds__pd_info__succeeded)
#line 224 "pd_info.m"
                  *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_26_26;
#line 224 "pd_info.m"
                else
#line 224 "pd_info.m"
                  {
#line 224 "pd_info.m"
                    MR_Word transform_hlds__pd_info__V_27_27;

#line 224 "pd_info.m"
                    {
#line 224 "pd_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_term__transform_hlds__pd_term__type_ctor_info_local_term_info_0, &transform_hlds__pd_info__V_27_27, ((MR_Box) (transform_hlds__pd_info__V_7_7)), ((MR_Box) (transform_hlds__pd_info__V_17_17)));
                    }
#line 3127 "transform_hlds.pd_info.c"
                    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_27_27 == (MR_Integer) 0);
#line 224 "pd_info.m"
                    transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 224 "pd_info.m"
                    if (transform_hlds__pd_info__succeeded)
#line 224 "pd_info.m"
                      *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_27_27;
#line 224 "pd_info.m"
                    else
#line 224 "pd_info.m"
                      {
#line 224 "pd_info.m"
                        MR_Word transform_hlds__pd_info__V_28_28;

#line 224 "pd_info.m"
                        {
#line 224 "pd_info.m"
                          hlds__hlds_pred____Compare____pred_info_0_0(&transform_hlds__pd_info__V_28_28, transform_hlds__pd_info__V_8_8, transform_hlds__pd_info__V_18_18);
                        }
#line 3147 "transform_hlds.pd_info.c"
                        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_28_28 == (MR_Integer) 0);
#line 224 "pd_info.m"
                        transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 224 "pd_info.m"
                        if (transform_hlds__pd_info__succeeded)
#line 224 "pd_info.m"
                          *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_28_28;
#line 224 "pd_info.m"
                        else
#line 224 "pd_info.m"
                          {
#line 224 "pd_info.m"
                            MR_Word transform_hlds__pd_info__V_29_29;

#line 224 "pd_info.m"
                            {
#line 224 "pd_info.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[6], &transform_hlds__pd_info__V_29_29, ((MR_Box) (transform_hlds__pd_info__V_9_9)), ((MR_Box) (transform_hlds__pd_info__V_19_19)));
                            }
#line 3167 "transform_hlds.pd_info.c"
                            transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_29_29 == (MR_Integer) 0);
#line 224 "pd_info.m"
                            transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 224 "pd_info.m"
                            if (transform_hlds__pd_info__succeeded)
#line 224 "pd_info.m"
                              *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_29_29;
#line 224 "pd_info.m"
                            else
#line 224 "pd_info.m"
                              {
#line 224 "pd_info.m"
                                MR_Word transform_hlds__pd_info__V_30_30;

#line 224 "pd_info.m"
                                {
#line 224 "pd_info.m"
                                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__pd_info__V_30_30, transform_hlds__pd_info__V_10_10, transform_hlds__pd_info__V_20_20);
                                }
#line 3187 "transform_hlds.pd_info.c"
                                transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_30_30 == (MR_Integer) 0);
#line 224 "pd_info.m"
                                transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 224 "pd_info.m"
                                if (transform_hlds__pd_info__succeeded)
#line 224 "pd_info.m"
                                  *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_30_30;
#line 224 "pd_info.m"
                                else
#line 224 "pd_info.m"
                                  {
#line 224 "pd_info.m"
                                    MR_Word transform_hlds__pd_info__V_31_31;
#line 224 "pd_info.m"
                                    MR_Integer transform_hlds__pd_info__V_45_45 = (MR_Integer) transform_hlds__pd_info__V_11_11;
#line 224 "pd_info.m"
                                    MR_Integer transform_hlds__pd_info__V_46_46 = (MR_Integer) transform_hlds__pd_info__V_21_21;

#line 224 "pd_info.m"
                                    {
#line 224 "pd_info.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__pd_info__V_31_31, transform_hlds__pd_info__V_45_45, transform_hlds__pd_info__V_46_46);
                                    }
#line 3211 "transform_hlds.pd_info.c"
                                    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_31_31 == (MR_Integer) 0);
#line 224 "pd_info.m"
                                    transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 224 "pd_info.m"
                                    if (transform_hlds__pd_info__succeeded)
#line 224 "pd_info.m"
                                      *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_31_31;
#line 224 "pd_info.m"
                                    else
#line 224 "pd_info.m"
                                      {
#line 224 "pd_info.m"
                                        MR_Word transform_hlds__pd_info__V_32_32;

#line 224 "pd_info.m"
                                        {
#line 224 "pd_info.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__pd_info__V_32_32, transform_hlds__pd_info__V_12_12, transform_hlds__pd_info__V_22_22);
                                        }
#line 3231 "transform_hlds.pd_info.c"
                                        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_32_32 == (MR_Integer) 0);
#line 224 "pd_info.m"
                                        transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 224 "pd_info.m"
                                        if (transform_hlds__pd_info__succeeded)
#line 224 "pd_info.m"
                                          *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_32_32;
#line 224 "pd_info.m"
                                        else
#line 224 "pd_info.m"
                                          {
#line 224 "pd_info.m"
                                            MR_Integer transform_hlds__pd_info__V_47_47 = (MR_Integer) transform_hlds__pd_info__V_13_13;
#line 224 "pd_info.m"
                                            MR_Integer transform_hlds__pd_info__V_48_48 = (MR_Integer) transform_hlds__pd_info__V_23_23;

#line 224 "pd_info.m"
                                            {
#line 224 "pd_info.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__pd_info__HeadVar__1_1, transform_hlds__pd_info__V_47_47, transform_hlds__pd_info__V_48_48);
#line 224 "pd_info.m"
                                              return;
                                            }
#line 224 "pd_info.m"
                                          }
#line 224 "pd_info.m"
                                      }
#line 224 "pd_info.m"
                                  }
#line 224 "pd_info.m"
                              }
#line 224 "pd_info.m"
                          }
#line 224 "pd_info.m"
                      }
#line 224 "pd_info.m"
                  }
#line 224 "pd_info.m"
              }
#line 224 "pd_info.m"
          }
#line 224 "pd_info.m"
      }
#line 224 "pd_info.m"
  }
#line 224 "pd_info.m"
}

#line 224 "pd_info.m"
MR_bool MR_CALL 
transform_hlds__pd_info____Unify____unfold_info_0_0(
#line 224 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__1_1,
#line 224 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
#line 224 "pd_info.m"
{
#line 224 "pd_info.m"
  {
#line 224 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 224 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastX_23 = (MR_Integer) transform_hlds__pd_info__HeadVar__1_1;
#line 224 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastY_24 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;

#line 224 "pd_info.m"
    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastX_23 == transform_hlds__pd_info__CastY_24);
#line 224 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 224 "pd_info.m"
      transform_hlds__pd_info__succeeded = MR_TRUE;
#line 224 "pd_info.m"
    else
#line 224 "pd_info.m"
      {
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeCtorInfo_27_27;
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_29_29;
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 0)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 1)));
#line 224 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 2)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 3)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 4)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 5)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 6)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 7)));
#line 224 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 8)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 9)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
#line 224 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 2)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 3)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 4)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 5)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 6)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 7)));
#line 224 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 8)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 9)));

#line 3353 "transform_hlds.pd_info.c"
        {
#line 3355 "transform_hlds.pd_info.c"
          transform_hlds__pd_info__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(transform_hlds__pd_info__V_3_3, transform_hlds__pd_info__V_13_13);
        }
#line 224 "pd_info.m"
        if (transform_hlds__pd_info__succeeded)
#line 224 "pd_info.m"
          {
#line 3362 "transform_hlds.pd_info.c"
            {
#line 3364 "transform_hlds.pd_info.c"
              transform_hlds__pd_info__succeeded = hlds__instmap____Unify____instmap_0_0(transform_hlds__pd_info__V_4_4, transform_hlds__pd_info__V_14_14);
            }
#line 224 "pd_info.m"
            if (transform_hlds__pd_info__succeeded)
#line 224 "pd_info.m"
              {
#line 3371 "transform_hlds.pd_info.c"
                transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_5_5 == transform_hlds__pd_info__V_15_15);
#line 224 "pd_info.m"
                if (transform_hlds__pd_info__succeeded)
#line 224 "pd_info.m"
                  {
#line 3377 "transform_hlds.pd_info.c"
                    transform_hlds__pd_info__TypeCtorInfo_27_27 = (MR_Word) &transform_hlds__pd_term__transform_hlds__pd_term__type_ctor_info_local_term_info_0;
#line 3379 "transform_hlds.pd_info.c"
                    {
#line 3381 "transform_hlds.pd_info.c"
                      transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeCtorInfo_27_27, ((MR_Box) (transform_hlds__pd_info__V_6_6)), ((MR_Box) (transform_hlds__pd_info__V_16_16)));
                    }
#line 224 "pd_info.m"
                    if (transform_hlds__pd_info__succeeded)
#line 224 "pd_info.m"
                      {
#line 3388 "transform_hlds.pd_info.c"
                        {
#line 3390 "transform_hlds.pd_info.c"
                          transform_hlds__pd_info__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(transform_hlds__pd_info__V_7_7, transform_hlds__pd_info__V_17_17);
                        }
#line 224 "pd_info.m"
                        if (transform_hlds__pd_info__succeeded)
#line 224 "pd_info.m"
                          {
#line 3397 "transform_hlds.pd_info.c"
                            transform_hlds__pd_info__TypeInfo_29_29 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[6];
#line 3399 "transform_hlds.pd_info.c"
                            {
#line 3401 "transform_hlds.pd_info.c"
                              transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_29_29, ((MR_Box) (transform_hlds__pd_info__V_8_8)), ((MR_Box) (transform_hlds__pd_info__V_18_18)));
                            }
#line 224 "pd_info.m"
                            if (transform_hlds__pd_info__succeeded)
#line 224 "pd_info.m"
                              {
#line 3408 "transform_hlds.pd_info.c"
                                {
#line 3410 "transform_hlds.pd_info.c"
                                  transform_hlds__pd_info__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__pd_info__V_9_9, transform_hlds__pd_info__V_19_19);
                                }
#line 224 "pd_info.m"
                                if (transform_hlds__pd_info__succeeded)
#line 224 "pd_info.m"
                                  {
#line 3417 "transform_hlds.pd_info.c"
                                    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_10_10 == transform_hlds__pd_info__V_20_20);
#line 224 "pd_info.m"
                                    if (transform_hlds__pd_info__succeeded)
#line 224 "pd_info.m"
                                      {
#line 3423 "transform_hlds.pd_info.c"
                                        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_11_11 == transform_hlds__pd_info__V_21_21);
#line 224 "pd_info.m"
                                        if (transform_hlds__pd_info__succeeded)
#line 3427 "transform_hlds.pd_info.c"
                                          transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_12_12 == transform_hlds__pd_info__V_22_22);
#line 224 "pd_info.m"
                                      }
#line 224 "pd_info.m"
                                  }
#line 224 "pd_info.m"
                              }
#line 224 "pd_info.m"
                          }
#line 224 "pd_info.m"
                      }
#line 224 "pd_info.m"
                  }
#line 224 "pd_info.m"
              }
#line 224 "pd_info.m"
          }
#line 224 "pd_info.m"
      }
#line 224 "pd_info.m"
    return transform_hlds__pd_info__succeeded;
#line 224 "pd_info.m"
  }
#line 224 "pd_info.m"
}

#line 259 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info____Compare____pd_proc_arg_info_0_0(
#line 259 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
#line 259 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 259 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
#line 259 "pd_info.m"
{
#line 259 "pd_info.m"
  {
#line 259 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 259 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar1_4 = transform_hlds__pd_info__HeadVar__2_2;
#line 259 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar2_5 = transform_hlds__pd_info__HeadVar__3_3;

#line 259 "pd_info.m"
    {
#line 259 "pd_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[4], transform_hlds__pd_info__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar2_5)));
#line 259 "pd_info.m"
      return;
    }
#line 259 "pd_info.m"
  }
#line 259 "pd_info.m"
}

#line 259 "pd_info.m"
MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_proc_arg_info_0_0(
#line 259 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__1_1,
#line 259 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
#line 259 "pd_info.m"
{
#line 259 "pd_info.m"
  {
#line 259 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 259 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar1_3 = transform_hlds__pd_info__HeadVar__1_1;
#line 259 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar2_4 = transform_hlds__pd_info__HeadVar__2_2;

#line 259 "pd_info.m"
    {
#line 259 "pd_info.m"
      return transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____pd_branch_info_1_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__pd_info__Cast_HeadVar1_3, transform_hlds__pd_info__Cast_HeadVar2_4);
    }
#line 259 "pd_info.m"
    return transform_hlds__pd_info__succeeded;
#line 259 "pd_info.m"
  }
#line 259 "pd_info.m"
}

#line 36 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info____Compare____pd_info_0_0(
#line 36 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
#line 36 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 36 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
#line 36 "pd_info.m"
{
#line 36 "pd_info.m"
  {
#line 36 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 36 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastX_36 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;
#line 36 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastY_37 = (MR_Integer) transform_hlds__pd_info__HeadVar__3_3;

#line 36 "pd_info.m"
    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastX_36 == transform_hlds__pd_info__CastY_37);
#line 36 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 3540 "transform_hlds.pd_info.c"
      *transform_hlds__pd_info__HeadVar__1_1 = (MR_Integer) 0;
#line 36 "pd_info.m"
    else
#line 36 "pd_info.m"
      {
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 2)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 3)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 4)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 5)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 6)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 7)));
#line 36 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 8)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 9)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 10)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 0)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 1)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 2)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 3)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 4)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 5)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 6)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 7)));
#line 36 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 8)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 9)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 10)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_26_26;

#line 36 "pd_info.m"
        {
#line 36 "pd_info.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__pd_info__V_26_26, transform_hlds__pd_info__V_4_4, transform_hlds__pd_info__V_15_15);
        }
#line 3598 "transform_hlds.pd_info.c"
        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_26_26 == (MR_Integer) 0);
#line 36 "pd_info.m"
        transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 36 "pd_info.m"
        if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
          *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_26_26;
#line 36 "pd_info.m"
        else
#line 36 "pd_info.m"
          {
#line 36 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_27_27;

#line 36 "pd_info.m"
            {
#line 36 "pd_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[5], &transform_hlds__pd_info__V_27_27, ((MR_Box) (transform_hlds__pd_info__V_5_5)), ((MR_Box) (transform_hlds__pd_info__V_16_16)));
            }
#line 3618 "transform_hlds.pd_info.c"
            transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_27_27 == (MR_Integer) 0);
#line 36 "pd_info.m"
            transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 36 "pd_info.m"
            if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
              *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_27_27;
#line 36 "pd_info.m"
            else
#line 36 "pd_info.m"
              {
#line 36 "pd_info.m"
                MR_Word transform_hlds__pd_info__V_28_28;

#line 36 "pd_info.m"
                {
#line 36 "pd_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[1], &transform_hlds__pd_info__V_28_28, ((MR_Box) (transform_hlds__pd_info__V_6_6)), ((MR_Box) (transform_hlds__pd_info__V_17_17)));
                }
#line 3638 "transform_hlds.pd_info.c"
                transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_28_28 == (MR_Integer) 0);
#line 36 "pd_info.m"
                transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 36 "pd_info.m"
                if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
                  *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_28_28;
#line 36 "pd_info.m"
                else
#line 36 "pd_info.m"
                  {
#line 36 "pd_info.m"
                    MR_Word transform_hlds__pd_info__V_29_29;

#line 36 "pd_info.m"
                    {
#line 36 "pd_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[5], &transform_hlds__pd_info__V_29_29, ((MR_Box) (transform_hlds__pd_info__V_7_7)), ((MR_Box) (transform_hlds__pd_info__V_18_18)));
                    }
#line 3658 "transform_hlds.pd_info.c"
                    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_29_29 == (MR_Integer) 0);
#line 36 "pd_info.m"
                    transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 36 "pd_info.m"
                    if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
                      *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_29_29;
#line 36 "pd_info.m"
                    else
#line 36 "pd_info.m"
                      {
#line 36 "pd_info.m"
                        MR_Word transform_hlds__pd_info__V_30_30;

#line 36 "pd_info.m"
                        {
#line 36 "pd_info.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[4], &transform_hlds__pd_info__V_30_30, ((MR_Box) (transform_hlds__pd_info__V_8_8)), ((MR_Box) (transform_hlds__pd_info__V_19_19)));
                        }
#line 3678 "transform_hlds.pd_info.c"
                        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_30_30 == (MR_Integer) 0);
#line 36 "pd_info.m"
                        transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 36 "pd_info.m"
                        if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
                          *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_30_30;
#line 36 "pd_info.m"
                        else
#line 36 "pd_info.m"
                          {
#line 36 "pd_info.m"
                            MR_Word transform_hlds__pd_info__V_31_31;

#line 36 "pd_info.m"
                            {
#line 36 "pd_info.m"
                              mercury__counter____Compare____counter_0_0(&transform_hlds__pd_info__V_31_31, transform_hlds__pd_info__V_9_9, transform_hlds__pd_info__V_20_20);
                            }
#line 3698 "transform_hlds.pd_info.c"
                            transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_31_31 == (MR_Integer) 0);
#line 36 "pd_info.m"
                            transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 36 "pd_info.m"
                            if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
                              *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_31_31;
#line 36 "pd_info.m"
                            else
#line 36 "pd_info.m"
                              {
#line 36 "pd_info.m"
                                MR_Word transform_hlds__pd_info__V_32_32;

#line 36 "pd_info.m"
                                {
#line 36 "pd_info.m"
                                  transform_hlds__pd_term____Compare____global_term_info_0_0(&transform_hlds__pd_info__V_32_32, transform_hlds__pd_info__V_10_10, transform_hlds__pd_info__V_21_21);
                                }
#line 3718 "transform_hlds.pd_info.c"
                                transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_32_32 == (MR_Integer) 0);
#line 36 "pd_info.m"
                                transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 36 "pd_info.m"
                                if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
                                  *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_32_32;
#line 36 "pd_info.m"
                                else
#line 36 "pd_info.m"
                                  {
#line 36 "pd_info.m"
                                    MR_Word transform_hlds__pd_info__V_33_33;

#line 36 "pd_info.m"
                                    {
#line 36 "pd_info.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[6], &transform_hlds__pd_info__V_33_33, ((MR_Box) (transform_hlds__pd_info__V_11_11)), ((MR_Box) (transform_hlds__pd_info__V_22_22)));
                                    }
#line 3738 "transform_hlds.pd_info.c"
                                    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_33_33 == (MR_Integer) 0);
#line 36 "pd_info.m"
                                    transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 36 "pd_info.m"
                                    if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
                                      *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_33_33;
#line 36 "pd_info.m"
                                    else
#line 36 "pd_info.m"
                                      {
#line 36 "pd_info.m"
                                        MR_Word transform_hlds__pd_info__V_34_34;

#line 36 "pd_info.m"
                                        {
#line 36 "pd_info.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__pd_info__V_34_34, transform_hlds__pd_info__V_12_12, transform_hlds__pd_info__V_23_23);
                                        }
#line 3758 "transform_hlds.pd_info.c"
                                        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_34_34 == (MR_Integer) 0);
#line 36 "pd_info.m"
                                        transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 36 "pd_info.m"
                                        if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
                                          *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_34_34;
#line 36 "pd_info.m"
                                        else
#line 36 "pd_info.m"
                                          {
#line 36 "pd_info.m"
                                            MR_Word transform_hlds__pd_info__V_35_35;

#line 36 "pd_info.m"
                                            {
#line 36 "pd_info.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[6], &transform_hlds__pd_info__V_35_35, ((MR_Box) (transform_hlds__pd_info__V_13_13)), ((MR_Box) (transform_hlds__pd_info__V_24_24)));
                                            }
#line 3778 "transform_hlds.pd_info.c"
                                            transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_35_35 == (MR_Integer) 0);
#line 36 "pd_info.m"
                                            transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 36 "pd_info.m"
                                            if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
                                              *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_35_35;
#line 36 "pd_info.m"
                                            else
#line 36 "pd_info.m"
                                              {
#line 36 "pd_info.m"
                                                {
#line 36 "pd_info.m"
                                                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[7], transform_hlds__pd_info__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_info__V_14_14)), ((MR_Box) (transform_hlds__pd_info__V_25_25)));
#line 36 "pd_info.m"
                                                  return;
                                                }
#line 36 "pd_info.m"
                                              }
#line 36 "pd_info.m"
                                          }
#line 36 "pd_info.m"
                                      }
#line 36 "pd_info.m"
                                  }
#line 36 "pd_info.m"
                              }
#line 36 "pd_info.m"
                          }
#line 36 "pd_info.m"
                      }
#line 36 "pd_info.m"
                  }
#line 36 "pd_info.m"
              }
#line 36 "pd_info.m"
          }
#line 36 "pd_info.m"
      }
#line 36 "pd_info.m"
  }
#line 36 "pd_info.m"
}

#line 36 "pd_info.m"
MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_info_0_0(
#line 36 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__1_1,
#line 36 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
#line 36 "pd_info.m"
{
#line 36 "pd_info.m"
  {
#line 36 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 36 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastX_25 = (MR_Integer) transform_hlds__pd_info__HeadVar__1_1;
#line 36 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastY_26 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;

#line 36 "pd_info.m"
    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastX_25 == transform_hlds__pd_info__CastY_26);
#line 36 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
      transform_hlds__pd_info__succeeded = MR_TRUE;
#line 36 "pd_info.m"
    else
#line 36 "pd_info.m"
      {
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_28_28;
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_29_29;
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_30_30;
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_31_31;
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_34_34;
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_35_35;
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_36_36;
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 0)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 1)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 2)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 3)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 4)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 5)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 6)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 7)));
#line 36 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 8)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 9)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 10)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 2)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 3)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 4)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 5)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 6)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 7)));
#line 36 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 8)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 9)));
#line 36 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 10)));

#line 3911 "transform_hlds.pd_info.c"
        {
#line 3913 "transform_hlds.pd_info.c"
          transform_hlds__pd_info__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__pd_info__V_3_3, transform_hlds__pd_info__V_14_14);
        }
#line 36 "pd_info.m"
        if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
          {
#line 3920 "transform_hlds.pd_info.c"
            transform_hlds__pd_info__TypeInfo_28_28 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[5];
#line 3922 "transform_hlds.pd_info.c"
            {
#line 3924 "transform_hlds.pd_info.c"
              transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_28_28, ((MR_Box) (transform_hlds__pd_info__V_4_4)), ((MR_Box) (transform_hlds__pd_info__V_15_15)));
            }
#line 36 "pd_info.m"
            if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
              {
#line 3931 "transform_hlds.pd_info.c"
                transform_hlds__pd_info__TypeInfo_29_29 = (MR_Word) &transform_hlds__pd_info_scalar_common_2[1];
#line 3933 "transform_hlds.pd_info.c"
                {
#line 3935 "transform_hlds.pd_info.c"
                  transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_29_29, ((MR_Box) (transform_hlds__pd_info__V_5_5)), ((MR_Box) (transform_hlds__pd_info__V_16_16)));
                }
#line 36 "pd_info.m"
                if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
                  {
#line 3942 "transform_hlds.pd_info.c"
                    transform_hlds__pd_info__TypeInfo_30_30 = (MR_Word) &transform_hlds__pd_info_scalar_common_2[5];
#line 3944 "transform_hlds.pd_info.c"
                    {
#line 3946 "transform_hlds.pd_info.c"
                      transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_30_30, ((MR_Box) (transform_hlds__pd_info__V_6_6)), ((MR_Box) (transform_hlds__pd_info__V_17_17)));
                    }
#line 36 "pd_info.m"
                    if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
                      {
#line 3953 "transform_hlds.pd_info.c"
                        transform_hlds__pd_info__TypeInfo_31_31 = (MR_Word) &transform_hlds__pd_info_scalar_common_2[4];
#line 3955 "transform_hlds.pd_info.c"
                        {
#line 3957 "transform_hlds.pd_info.c"
                          transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_31_31, ((MR_Box) (transform_hlds__pd_info__V_7_7)), ((MR_Box) (transform_hlds__pd_info__V_18_18)));
                        }
#line 36 "pd_info.m"
                        if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
                          {
#line 3964 "transform_hlds.pd_info.c"
                            {
#line 3966 "transform_hlds.pd_info.c"
                              transform_hlds__pd_info__succeeded = mercury__counter____Unify____counter_0_0(transform_hlds__pd_info__V_8_8, transform_hlds__pd_info__V_19_19);
                            }
#line 36 "pd_info.m"
                            if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
                              {
#line 3973 "transform_hlds.pd_info.c"
                                {
#line 3975 "transform_hlds.pd_info.c"
                                  transform_hlds__pd_info__succeeded = transform_hlds__pd_term____Unify____global_term_info_0_0(transform_hlds__pd_info__V_9_9, transform_hlds__pd_info__V_20_20);
                                }
#line 36 "pd_info.m"
                                if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
                                  {
#line 3982 "transform_hlds.pd_info.c"
                                    transform_hlds__pd_info__TypeInfo_34_34 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[6];
#line 3984 "transform_hlds.pd_info.c"
                                    {
#line 3986 "transform_hlds.pd_info.c"
                                      transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_34_34, ((MR_Box) (transform_hlds__pd_info__V_10_10)), ((MR_Box) (transform_hlds__pd_info__V_21_21)));
                                    }
#line 36 "pd_info.m"
                                    if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
                                      {
#line 3993 "transform_hlds.pd_info.c"
                                        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_11_11 == transform_hlds__pd_info__V_22_22);
#line 36 "pd_info.m"
                                        if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
                                          {
#line 3999 "transform_hlds.pd_info.c"
                                            transform_hlds__pd_info__TypeInfo_35_35 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[6];
#line 4001 "transform_hlds.pd_info.c"
                                            {
#line 4003 "transform_hlds.pd_info.c"
                                              transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_35_35, ((MR_Box) (transform_hlds__pd_info__V_12_12)), ((MR_Box) (transform_hlds__pd_info__V_23_23)));
                                            }
#line 36 "pd_info.m"
                                            if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
                                              {
#line 4010 "transform_hlds.pd_info.c"
                                                transform_hlds__pd_info__TypeInfo_36_36 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[7];
#line 4012 "transform_hlds.pd_info.c"
                                                {
#line 4014 "transform_hlds.pd_info.c"
                                                  return transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_36_36, ((MR_Box) (transform_hlds__pd_info__V_13_13)), ((MR_Box) (transform_hlds__pd_info__V_24_24)));
                                                }
#line 36 "pd_info.m"
                                              }
#line 36 "pd_info.m"
                                          }
#line 36 "pd_info.m"
                                      }
#line 36 "pd_info.m"
                                  }
#line 36 "pd_info.m"
                              }
#line 36 "pd_info.m"
                          }
#line 36 "pd_info.m"
                      }
#line 36 "pd_info.m"
                  }
#line 36 "pd_info.m"
              }
#line 36 "pd_info.m"
          }
#line 36 "pd_info.m"
      }
#line 36 "pd_info.m"
    return transform_hlds__pd_info__succeeded;
#line 36 "pd_info.m"
  }
#line 36 "pd_info.m"
}

#line 261 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info____Compare____pd_branch_info_1_0(
#line 261 "pd_info.m"
  MR_Word transform_hlds__pd_info__TypeInfo_for_T_14,
#line 261 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
#line 261 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 261 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
#line 261 "pd_info.m"
{
#line 261 "pd_info.m"
  {
#line 261 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 261 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastX_12 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;
#line 261 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastY_13 = (MR_Integer) transform_hlds__pd_info__HeadVar__3_3;

#line 261 "pd_info.m"
    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastX_12 == transform_hlds__pd_info__CastY_13);
#line 261 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 4072 "transform_hlds.pd_info.c"
      *transform_hlds__pd_info__HeadVar__1_1 = (MR_Integer) 0;
#line 261 "pd_info.m"
    else
#line 261 "pd_info.m"
      {
#line 261 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));
#line 261 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
#line 261 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 2)));
#line 261 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 0)));
#line 261 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 1)));
#line 261 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 2)));
#line 261 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_10_10;

#line 261 "pd_info.m"
        {
#line 261 "pd_info.m"
          mercury__tree234____Compare____tree234_2_0(transform_hlds__pd_info__TypeInfo_for_T_14, (MR_Word) &transform_hlds__pd_info_scalar_common_1[2], &transform_hlds__pd_info__V_10_10, transform_hlds__pd_info__V_4_4, transform_hlds__pd_info__V_7_7);
        }
#line 4098 "transform_hlds.pd_info.c"
        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_10_10 == (MR_Integer) 0);
#line 261 "pd_info.m"
        transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 261 "pd_info.m"
        if (transform_hlds__pd_info__succeeded)
#line 261 "pd_info.m"
          *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_10_10;
#line 261 "pd_info.m"
        else
#line 261 "pd_info.m"
          {
#line 261 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_11_11;

#line 261 "pd_info.m"
            {
#line 261 "pd_info.m"
              mercury__set_ordlist____Compare____set_ordlist_1_0(transform_hlds__pd_info__TypeInfo_for_T_14, &transform_hlds__pd_info__V_11_11, transform_hlds__pd_info__V_5_5, transform_hlds__pd_info__V_8_8);
            }
#line 4118 "transform_hlds.pd_info.c"
            transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_11_11 == (MR_Integer) 0);
#line 261 "pd_info.m"
            transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 261 "pd_info.m"
            if (transform_hlds__pd_info__succeeded)
#line 261 "pd_info.m"
              *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_11_11;
#line 261 "pd_info.m"
            else
#line 261 "pd_info.m"
              {
#line 261 "pd_info.m"
                mercury__set_ordlist____Compare____set_ordlist_1_0(transform_hlds__pd_info__TypeInfo_for_T_14, transform_hlds__pd_info__HeadVar__1_1, transform_hlds__pd_info__V_6_6, transform_hlds__pd_info__V_9_9);
#line 261 "pd_info.m"
                return;
              }
#line 261 "pd_info.m"
          }
#line 261 "pd_info.m"
      }
#line 261 "pd_info.m"
  }
#line 261 "pd_info.m"
}

#line 261 "pd_info.m"
MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_branch_info_1_0(
#line 261 "pd_info.m"
  MR_Word transform_hlds__pd_info__TypeInfo_for_T_11,
#line 261 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__1_1,
#line 261 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
#line 261 "pd_info.m"
{
#line 261 "pd_info.m"
  {
#line 261 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 261 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastX_9 = (MR_Integer) transform_hlds__pd_info__HeadVar__1_1;
#line 261 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastY_10 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;

#line 261 "pd_info.m"
    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastX_9 == transform_hlds__pd_info__CastY_10);
#line 261 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 261 "pd_info.m"
      transform_hlds__pd_info__succeeded = MR_TRUE;
#line 261 "pd_info.m"
    else
#line 261 "pd_info.m"
      {
#line 261 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 0)));
#line 261 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 1)));
#line 261 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 2)));
#line 261 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));
#line 261 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
#line 261 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 2)));

#line 4187 "transform_hlds.pd_info.c"
        {
#line 4189 "transform_hlds.pd_info.c"
          transform_hlds__pd_info__succeeded = mercury__tree234____Unify____tree234_2_0(transform_hlds__pd_info__TypeInfo_for_T_11, (MR_Word) &transform_hlds__pd_info_scalar_common_1[2], transform_hlds__pd_info__V_3_3, transform_hlds__pd_info__V_6_6);
        }
#line 261 "pd_info.m"
        if (transform_hlds__pd_info__succeeded)
#line 261 "pd_info.m"
          {
#line 4196 "transform_hlds.pd_info.c"
            {
#line 4198 "transform_hlds.pd_info.c"
              transform_hlds__pd_info__succeeded = mercury__set_ordlist____Unify____set_ordlist_1_0(transform_hlds__pd_info__TypeInfo_for_T_11, transform_hlds__pd_info__V_4_4, transform_hlds__pd_info__V_7_7);
            }
#line 261 "pd_info.m"
            if (transform_hlds__pd_info__succeeded)
#line 4203 "transform_hlds.pd_info.c"
              {
#line 4205 "transform_hlds.pd_info.c"
                return transform_hlds__pd_info__succeeded = mercury__set_ordlist____Unify____set_ordlist_1_0(transform_hlds__pd_info__TypeInfo_for_T_11, transform_hlds__pd_info__V_5_5, transform_hlds__pd_info__V_8_8);
              }
#line 261 "pd_info.m"
          }
#line 261 "pd_info.m"
      }
#line 261 "pd_info.m"
    return transform_hlds__pd_info__succeeded;
#line 261 "pd_info.m"
  }
#line 261 "pd_info.m"
}

#line 257 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info____Compare____pd_arg_info_0_0(
#line 257 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
#line 257 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 257 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
#line 257 "pd_info.m"
{
#line 257 "pd_info.m"
  {
#line 257 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 257 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar1_4 = transform_hlds__pd_info__HeadVar__2_2;
#line 257 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar2_5 = transform_hlds__pd_info__HeadVar__3_3;

#line 257 "pd_info.m"
    {
#line 257 "pd_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[4], transform_hlds__pd_info__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar2_5)));
#line 257 "pd_info.m"
      return;
    }
#line 257 "pd_info.m"
  }
#line 257 "pd_info.m"
}

#line 257 "pd_info.m"
MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_arg_info_0_0(
#line 257 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__1_1,
#line 257 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
#line 257 "pd_info.m"
{
#line 257 "pd_info.m"
  {
#line 257 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 257 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar1_3 = transform_hlds__pd_info__HeadVar__1_1;
#line 257 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar2_4 = transform_hlds__pd_info__HeadVar__2_2;

#line 257 "pd_info.m"
    {
#line 257 "pd_info.m"
      return transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[4], ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar2_4)));
    }
#line 257 "pd_info.m"
    return transform_hlds__pd_info__succeeded;
#line 257 "pd_info.m"
  }
#line 257 "pd_info.m"
}

#line 423 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info____Compare____maybe_version_0_0(
#line 423 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
#line 423 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 423 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
#line 423 "pd_info.m"
{
#line 423 "pd_info.m"
  {
#line 423 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 423 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastX_28 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;
#line 423 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastY_29 = (MR_Integer) transform_hlds__pd_info__HeadVar__3_3;

#line 423 "pd_info.m"
    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastX_28 == transform_hlds__pd_info__CastY_29);
#line 423 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 4305 "transform_hlds.pd_info.c"
      *transform_hlds__pd_info__HeadVar__1_1 = (MR_Integer) 0;
#line 423 "pd_info.m"
    else
#line 423 "pd_info.m"
      if ((transform_hlds__pd_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 423 "pd_info.m"
        if ((transform_hlds__pd_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 423 "pd_info.m"
          *transform_hlds__pd_info__HeadVar__1_1 = (MR_Integer) 0;
#line 423 "pd_info.m"
        else
#line 4317 "transform_hlds.pd_info.c"
          *transform_hlds__pd_info__HeadVar__1_1 = (MR_Integer) 1;
#line 423 "pd_info.m"
      else
#line 423 "pd_info.m"
        {
#line 423 "pd_info.m"
          MR_Word transform_hlds__pd_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 4)));
#line 423 "pd_info.m"
          MR_Word transform_hlds__pd_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 3)));
#line 423 "pd_info.m"
          MR_Word transform_hlds__pd_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 2)));
#line 423 "pd_info.m"
          MR_Word transform_hlds__pd_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
#line 423 "pd_info.m"
          MR_Word transform_hlds__pd_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));

#line 423 "pd_info.m"
          if ((transform_hlds__pd_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4336 "transform_hlds.pd_info.c"
            *transform_hlds__pd_info__HeadVar__1_1 = (MR_Integer) 2;
#line 423 "pd_info.m"
          else
#line 423 "pd_info.m"
            {
#line 423 "pd_info.m"
              MR_Word transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 0)));
#line 423 "pd_info.m"
              MR_Word transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 1)));
#line 423 "pd_info.m"
              MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 2)));
#line 423 "pd_info.m"
              MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 3)));
#line 423 "pd_info.m"
              MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 4)));
#line 423 "pd_info.m"
              MR_Word transform_hlds__pd_info__V_24_24;
#line 423 "pd_info.m"
              MR_Integer transform_hlds__pd_info__V_40_40 = (MR_Integer) transform_hlds__pd_info__V_39_39;
#line 423 "pd_info.m"
              MR_Integer transform_hlds__pd_info__V_41_41 = (MR_Integer) transform_hlds__pd_info__V_19_19;

#line 423 "pd_info.m"
              {
#line 423 "pd_info.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__pd_info__V_24_24, transform_hlds__pd_info__V_40_40, transform_hlds__pd_info__V_41_41);
              }
#line 4364 "transform_hlds.pd_info.c"
              transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_24_24 == (MR_Integer) 0);
#line 423 "pd_info.m"
              transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 423 "pd_info.m"
              if (transform_hlds__pd_info__succeeded)
#line 423 "pd_info.m"
                *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_24_24;
#line 423 "pd_info.m"
              else
#line 423 "pd_info.m"
                {
#line 423 "pd_info.m"
                  MR_Word transform_hlds__pd_info__V_25_25;

#line 423 "pd_info.m"
                  {
#line 423 "pd_info.m"
                    hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__pd_info__V_25_25, transform_hlds__pd_info__V_38_38, transform_hlds__pd_info__V_20_20);
                  }
#line 4384 "transform_hlds.pd_info.c"
                  transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_25_25 == (MR_Integer) 0);
#line 423 "pd_info.m"
                  transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 423 "pd_info.m"
                  if (transform_hlds__pd_info__succeeded)
#line 423 "pd_info.m"
                    *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_25_25;
#line 423 "pd_info.m"
                  else
#line 423 "pd_info.m"
                    {
#line 423 "pd_info.m"
                      MR_Word transform_hlds__pd_info__V_26_26;

#line 423 "pd_info.m"
                      {
#line 423 "pd_info.m"
                        transform_hlds__pd_info____Compare____version_info_0_0(&transform_hlds__pd_info__V_26_26, transform_hlds__pd_info__V_37_37, transform_hlds__pd_info__V_21_21);
                      }
#line 4404 "transform_hlds.pd_info.c"
                      transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_26_26 == (MR_Integer) 0);
#line 423 "pd_info.m"
                      transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 423 "pd_info.m"
                      if (transform_hlds__pd_info__succeeded)
#line 423 "pd_info.m"
                        *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_26_26;
#line 423 "pd_info.m"
                      else
#line 423 "pd_info.m"
                        {
#line 423 "pd_info.m"
                          MR_Word transform_hlds__pd_info__V_27_27;

#line 423 "pd_info.m"
                          {
#line 423 "pd_info.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[2], &transform_hlds__pd_info__V_27_27, ((MR_Box) (transform_hlds__pd_info__V_36_36)), ((MR_Box) (transform_hlds__pd_info__V_22_22)));
                          }
#line 4424 "transform_hlds.pd_info.c"
                          transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_27_27 == (MR_Integer) 0);
#line 423 "pd_info.m"
                          transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 423 "pd_info.m"
                          if (transform_hlds__pd_info__succeeded)
#line 423 "pd_info.m"
                            *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_27_27;
#line 423 "pd_info.m"
                          else
#line 423 "pd_info.m"
                            {
#line 423 "pd_info.m"
                              {
#line 423 "pd_info.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[3], transform_hlds__pd_info__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_info__V_35_35)), ((MR_Box) (transform_hlds__pd_info__V_23_23)));
#line 423 "pd_info.m"
                                return;
                              }
#line 423 "pd_info.m"
                            }
#line 423 "pd_info.m"
                        }
#line 423 "pd_info.m"
                    }
#line 423 "pd_info.m"
                }
#line 423 "pd_info.m"
            }
#line 423 "pd_info.m"
        }
#line 423 "pd_info.m"
  }
#line 423 "pd_info.m"
}

#line 423 "pd_info.m"
MR_bool MR_CALL 
transform_hlds__pd_info____Unify____maybe_version_0_0(
#line 423 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__1_1,
#line 423 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
#line 423 "pd_info.m"
{
#line 423 "pd_info.m"
  {
#line 423 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 423 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastX_15 = (MR_Integer) transform_hlds__pd_info__HeadVar__1_1;
#line 423 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastY_16 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;

#line 423 "pd_info.m"
    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastX_15 == transform_hlds__pd_info__CastY_16);
#line 423 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 423 "pd_info.m"
      transform_hlds__pd_info__succeeded = MR_TRUE;
#line 423 "pd_info.m"
    else
#line 423 "pd_info.m"
      if ((transform_hlds__pd_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 423 "pd_info.m"
        {
#line 423 "pd_info.m"
          MR_Integer transform_hlds__pd_info__CastX_3 = (MR_Integer) transform_hlds__pd_info__HeadVar__1_1;
#line 423 "pd_info.m"
          MR_Integer transform_hlds__pd_info__CastY_4 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;

#line 423 "pd_info.m"
          transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastY_4 == transform_hlds__pd_info__CastX_3);
#line 423 "pd_info.m"
        }
#line 423 "pd_info.m"
      else
#line 423 "pd_info.m"
        {
#line 423 "pd_info.m"
          MR_Word transform_hlds__pd_info__TypeInfo_18_18;
#line 423 "pd_info.m"
          MR_Word transform_hlds__pd_info__TypeInfo_19_19;
#line 423 "pd_info.m"
          MR_Word transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 0)));
#line 423 "pd_info.m"
          MR_Word transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 1)));
#line 423 "pd_info.m"
          MR_Word transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 2)));
#line 423 "pd_info.m"
          MR_Word transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 3)));
#line 423 "pd_info.m"
          MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 4)));
#line 423 "pd_info.m"
          MR_Word transform_hlds__pd_info__V_10_10;
#line 423 "pd_info.m"
          MR_Word transform_hlds__pd_info__V_11_11;
#line 423 "pd_info.m"
          MR_Word transform_hlds__pd_info__V_12_12;
#line 423 "pd_info.m"
          MR_Word transform_hlds__pd_info__V_13_13;
#line 423 "pd_info.m"
          MR_Word transform_hlds__pd_info__V_14_14;

#line 423 "pd_info.m"
          transform_hlds__pd_info__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 423 "pd_info.m"
          if (transform_hlds__pd_info__succeeded)
#line 423 "pd_info.m"
            {
#line 423 "pd_info.m"
              transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));
#line 423 "pd_info.m"
              transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
#line 423 "pd_info.m"
              transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 2)));
#line 423 "pd_info.m"
              transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 3)));
#line 423 "pd_info.m"
              transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 4)));
#line 4544 "transform_hlds.pd_info.c"
              transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_5_5 == transform_hlds__pd_info__V_10_10);
#line 423 "pd_info.m"
              if (transform_hlds__pd_info__succeeded)
#line 423 "pd_info.m"
                {
#line 4550 "transform_hlds.pd_info.c"
                  {
#line 4552 "transform_hlds.pd_info.c"
                    transform_hlds__pd_info__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__pd_info__V_6_6, transform_hlds__pd_info__V_11_11);
                  }
#line 423 "pd_info.m"
                  if (transform_hlds__pd_info__succeeded)
#line 423 "pd_info.m"
                    {
#line 4559 "transform_hlds.pd_info.c"
                      {
#line 4561 "transform_hlds.pd_info.c"
                        transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____version_info_0_0(transform_hlds__pd_info__V_7_7, transform_hlds__pd_info__V_12_12);
                      }
#line 423 "pd_info.m"
                      if (transform_hlds__pd_info__succeeded)
#line 423 "pd_info.m"
                        {
#line 4568 "transform_hlds.pd_info.c"
                          transform_hlds__pd_info__TypeInfo_18_18 = (MR_Word) &transform_hlds__pd_info_scalar_common_2[2];
#line 4570 "transform_hlds.pd_info.c"
                          {
#line 4572 "transform_hlds.pd_info.c"
                            transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_18_18, ((MR_Box) (transform_hlds__pd_info__V_8_8)), ((MR_Box) (transform_hlds__pd_info__V_13_13)));
                          }
#line 423 "pd_info.m"
                          if (transform_hlds__pd_info__succeeded)
#line 423 "pd_info.m"
                            {
#line 4579 "transform_hlds.pd_info.c"
                              transform_hlds__pd_info__TypeInfo_19_19 = (MR_Word) &transform_hlds__pd_info_scalar_common_2[3];
#line 4581 "transform_hlds.pd_info.c"
                              {
#line 4583 "transform_hlds.pd_info.c"
                                return transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_19_19, ((MR_Box) (transform_hlds__pd_info__V_9_9)), ((MR_Box) (transform_hlds__pd_info__V_14_14)));
                              }
#line 423 "pd_info.m"
                            }
#line 423 "pd_info.m"
                        }
#line 423 "pd_info.m"
                    }
#line 423 "pd_info.m"
                }
#line 423 "pd_info.m"
            }
#line 423 "pd_info.m"
        }
#line 423 "pd_info.m"
    return transform_hlds__pd_info__succeeded;
#line 423 "pd_info.m"
  }
#line 423 "pd_info.m"
}

#line 54 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info____Compare____goal_version_index_0_0(
#line 54 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
#line 54 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 54 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
#line 54 "pd_info.m"
{
#line 54 "pd_info.m"
  {
#line 54 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 54 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar1_4 = transform_hlds__pd_info__HeadVar__2_2;
#line 54 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar2_5 = transform_hlds__pd_info__HeadVar__3_3;

#line 54 "pd_info.m"
    {
#line 54 "pd_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[1], transform_hlds__pd_info__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar2_5)));
#line 54 "pd_info.m"
      return;
    }
#line 54 "pd_info.m"
  }
#line 54 "pd_info.m"
}

#line 54 "pd_info.m"
MR_bool MR_CALL 
transform_hlds__pd_info____Unify____goal_version_index_0_0(
#line 54 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__1_1,
#line 54 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
#line 54 "pd_info.m"
{
#line 54 "pd_info.m"
  {
#line 54 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 54 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar1_3 = transform_hlds__pd_info__HeadVar__1_1;
#line 54 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar2_4 = transform_hlds__pd_info__HeadVar__2_2;

#line 54 "pd_info.m"
    {
#line 54 "pd_info.m"
      return transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[1], ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar2_4)));
    }
#line 54 "pd_info.m"
    return transform_hlds__pd_info__succeeded;
#line 54 "pd_info.m"
  }
#line 54 "pd_info.m"
}

#line 275 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info____Compare____branch_info_map_1_0(
#line 275 "pd_info.m"
  MR_Word transform_hlds__pd_info__TypeInfo_for_T_6,
#line 275 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
#line 275 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 275 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
#line 275 "pd_info.m"
{
#line 275 "pd_info.m"
  {
#line 275 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 275 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar1_4 = transform_hlds__pd_info__HeadVar__2_2;
#line 275 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar2_5 = transform_hlds__pd_info__HeadVar__3_3;

#line 275 "pd_info.m"
    {
#line 275 "pd_info.m"
      mercury__tree234____Compare____tree234_2_0(transform_hlds__pd_info__TypeInfo_for_T_6, (MR_Word) &transform_hlds__pd_info_scalar_common_1[2], transform_hlds__pd_info__HeadVar__1_1, transform_hlds__pd_info__Cast_HeadVar1_4, transform_hlds__pd_info__Cast_HeadVar2_5);
#line 275 "pd_info.m"
      return;
    }
#line 275 "pd_info.m"
  }
#line 275 "pd_info.m"
}

#line 275 "pd_info.m"
MR_bool MR_CALL 
transform_hlds__pd_info____Unify____branch_info_map_1_0(
#line 275 "pd_info.m"
  MR_Word transform_hlds__pd_info__TypeInfo_for_T_5,
#line 275 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__1_1,
#line 275 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
#line 275 "pd_info.m"
{
#line 275 "pd_info.m"
  {
#line 275 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 275 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar1_3 = transform_hlds__pd_info__HeadVar__1_1;
#line 275 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar2_4 = transform_hlds__pd_info__HeadVar__2_2;

#line 275 "pd_info.m"
    {
#line 275 "pd_info.m"
      return transform_hlds__pd_info__succeeded = mercury__tree234____Unify____tree234_2_0(transform_hlds__pd_info__TypeInfo_for_T_5, (MR_Word) &transform_hlds__pd_info_scalar_common_1[2], transform_hlds__pd_info__Cast_HeadVar1_3, transform_hlds__pd_info__Cast_HeadVar2_4);
    }
#line 275 "pd_info.m"
    return transform_hlds__pd_info__succeeded;
#line 275 "pd_info.m"
  }
#line 275 "pd_info.m"
}

#line 606 "pd_info.m"
static MR_bool MR_CALL 
transform_hlds__pd_info__check_insts_8_p_0(
#line 606 "pd_info.m"
  MR_Word transform_hlds__pd_info__ModuleInfo_1,
#line 606 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 606 "pd_info.m"
  MR_Word transform_hlds__pd_info__VarRenaming_3,
#line 606 "pd_info.m"
  MR_Word transform_hlds__pd_info__OldInstMap_4,
#line 606 "pd_info.m"
  MR_Word transform_hlds__pd_info__NewInstMap_5,
#line 606 "pd_info.m"
  MR_Word transform_hlds__pd_info__VarTypes_6,
#line 606 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_0_7,
#line 606 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_8)
#line 606 "pd_info.m"
{
#line 610 "pd_info.m"
  while (MR_TRUE)
#line 610 "pd_info.m"
    {
#line 610 "pd_info.m"
      /* tailcall optimized into a loop */
#line 610 "pd_info.m"
      {
#line 610 "pd_info.m"
        MR_bool transform_hlds__pd_info__succeeded;

#line 610 "pd_info.m"
        if ((transform_hlds__pd_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 610 "pd_info.m"
          {
#line 610 "pd_info.m"
            *transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_8 = transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_0_7;
#line 610 "pd_info.m"
            transform_hlds__pd_info__succeeded = MR_TRUE;
#line 610 "pd_info.m"
          }
#line 610 "pd_info.m"
        else
#line 612 "pd_info.m"
          {
#line 612 "pd_info.m"
            MR_Word transform_hlds__pd_info__TypeInfo_34_34;
#line 612 "pd_info.m"
            MR_Word transform_hlds__pd_info__OldVar_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));
#line 612 "pd_info.m"
            MR_Word transform_hlds__pd_info__Vars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
#line 612 "pd_info.m"
            MR_Word transform_hlds__pd_info__OldVarInst_25;
#line 612 "pd_info.m"
            MR_Word transform_hlds__pd_info__NewVar_26;
#line 612 "pd_info.m"
            MR_Word transform_hlds__pd_info__NewVarInst_27;
#line 612 "pd_info.m"
            MR_Word transform_hlds__pd_info__Type_28;
#line 612 "pd_info.m"
            MR_Word transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_31_31;
#line 614 "pd_info.m"
            MR_Box transform_hlds__pd_info__conv0_NewVar_26;

#line 613 "pd_info.m"
            {
#line 613 "pd_info.m"
              hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__pd_info__OldInstMap_4, transform_hlds__pd_info__OldVar_18, &transform_hlds__pd_info__OldVarInst_25);
            }
#line 4803 "transform_hlds.pd_info.c"
            transform_hlds__pd_info__TypeInfo_34_34 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[1];
#line 614 "pd_info.m"
            {
#line 614 "pd_info.m"
              mercury__map__lookup_3_p_0(transform_hlds__pd_info__TypeInfo_34_34, transform_hlds__pd_info__TypeInfo_34_34, transform_hlds__pd_info__VarRenaming_3, ((MR_Box) (transform_hlds__pd_info__OldVar_18)), &transform_hlds__pd_info__conv0_NewVar_26);
            }
#line 614 "pd_info.m"
            transform_hlds__pd_info__NewVar_26 = ((MR_Word) transform_hlds__pd_info__conv0_NewVar_26);
#line 615 "pd_info.m"
            {
#line 615 "pd_info.m"
              hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__pd_info__NewInstMap_5, transform_hlds__pd_info__NewVar_26, &transform_hlds__pd_info__NewVarInst_27);
            }
#line 616 "pd_info.m"
            {
#line 616 "pd_info.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__pd_info__VarTypes_6, transform_hlds__pd_info__NewVar_26, &transform_hlds__pd_info__Type_28);
            }
#line 617 "pd_info.m"
            {
#line 617 "pd_info.m"
              transform_hlds__pd_info__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(transform_hlds__pd_info__NewVarInst_27, transform_hlds__pd_info__OldVarInst_25, transform_hlds__pd_info__Type_28, transform_hlds__pd_info__ModuleInfo_1);
            }
#line 612 "pd_info.m"
            if (transform_hlds__pd_info__succeeded)
#line 612 "pd_info.m"
              {
#line 628 "pd_info.m"
                if ((transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_0_7 == (MR_Integer) 0))
#line 625 "pd_info.m"
                  {
#line 623 "pd_info.m"
                    {
#line 623 "pd_info.m"
                      transform_hlds__pd_info__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(transform_hlds__pd_info__OldVarInst_25, transform_hlds__pd_info__NewVarInst_27, transform_hlds__pd_info__Type_28, transform_hlds__pd_info__ModuleInfo_1);
                    }
#line 625 "pd_info.m"
                    if (transform_hlds__pd_info__succeeded)
#line 624 "pd_info.m"
                      transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_31_31 = (MR_Integer) 0;
#line 625 "pd_info.m"
                    else
#line 626 "pd_info.m"
                      transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_31_31 = (MR_Integer) 1;
#line 625 "pd_info.m"
                  }
#line 628 "pd_info.m"
                else
#line 629 "pd_info.m"
                  transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_31_31 = transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_0_7;
#line 631 "pd_info.m"
                /* direct tailcall eliminated */
#line 631 "pd_info.m"
                {
#line 631 "pd_info.m"
                  MR_Word transform_hlds__pd_info__HeadVar__2__tmp_copy_2 = transform_hlds__pd_info__Vars_19;
#line 631 "pd_info.m"
                  MR_Word transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_0__tmp_copy_7 = transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_31_31;

#line 631 "pd_info.m"
                  transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_0_7 = transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_0__tmp_copy_7;
#line 631 "pd_info.m"
                  transform_hlds__pd_info__HeadVar__2_2 = transform_hlds__pd_info__HeadVar__2__tmp_copy_2;
#line 631 "pd_info.m"
                }
#line 631 "pd_info.m"
                continue;
#line 612 "pd_info.m"
              }
#line 612 "pd_info.m"
          }
#line 610 "pd_info.m"
        return transform_hlds__pd_info__succeeded;
#line 610 "pd_info.m"
      }
#line 610 "pd_info.m"
      break;
#line 610 "pd_info.m"
    }
#line 606 "pd_info.m"
}

#line 501 "pd_info.m"
static MR_bool MR_CALL 
transform_hlds__pd_info__get_matching_version_7_p_0(
#line 501 "pd_info.m"
  MR_Word transform_hlds__pd_info__ModuleInfo_1,
#line 501 "pd_info.m"
  MR_Word transform_hlds__pd_info__ThisGoal_2,
#line 501 "pd_info.m"
  MR_Word transform_hlds__pd_info__ThisInstMap_3,
#line 501 "pd_info.m"
  MR_Word transform_hlds__pd_info__VarTypes_4,
#line 501 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__5_5,
#line 501 "pd_info.m"
  MR_Word transform_hlds__pd_info__Versions_6,
#line 501 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__7_7)
#line 501 "pd_info.m"
{
#line 505 "pd_info.m"
  while (MR_TRUE)
#line 505 "pd_info.m"
    {
#line 505 "pd_info.m"
      /* tailcall optimized into a loop */
#line 505 "pd_info.m"
      {
#line 505 "pd_info.m"
        MR_bool transform_hlds__pd_info__succeeded;

#line 505 "pd_info.m"
        if ((transform_hlds__pd_info__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 505 "pd_info.m"
          {
#line 505 "pd_info.m"
            *transform_hlds__pd_info__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 505 "pd_info.m"
            transform_hlds__pd_info__succeeded = MR_TRUE;
#line 505 "pd_info.m"
          }
#line 505 "pd_info.m"
        else
#line 507 "pd_info.m"
          {
#line 507 "pd_info.m"
            MR_Word transform_hlds__pd_info__VersionId_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 0)));
#line 507 "pd_info.m"
            MR_Word transform_hlds__pd_info__VersionIds_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 1)));
#line 507 "pd_info.m"
            MR_Word transform_hlds__pd_info__Version_21;
#line 507 "pd_info.m"
            MR_Word transform_hlds__pd_info__OldGoal_22;
#line 507 "pd_info.m"
            MR_Word transform_hlds__pd_info__OldArgs_24;
#line 507 "pd_info.m"
            MR_Word transform_hlds__pd_info__OldArgTypes_25;
#line 507 "pd_info.m"
            MR_Word transform_hlds__pd_info__OldInstMap_26;
#line 508 "pd_info.m"
            MR_Box transform_hlds__pd_info__conv0_Version_21;
#line 509 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_23_23;
#line 509 "pd_info.m"
            MR_Integer transform_hlds__pd_info__V_27_27;
#line 509 "pd_info.m"
            MR_Integer transform_hlds__pd_info__V_28_28;
#line 509 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_29_29;
#line 509 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_30_30;
#line 532 "pd_info.m"
            MR_Word transform_hlds__pd_info__MaybeVersion1_31;
#line 532 "pd_info.m"
            MR_Word transform_hlds__pd_info__OldNewRenaming_61;
#line 532 "pd_info.m"
            MR_Word transform_hlds__pd_info__TypeRenaming_62;
#line 532 "pd_info.m"
            MR_Word transform_hlds__pd_info__Exact_67;
#line 589 "pd_info.m"
            MR_Word transform_hlds__pd_info__TypeCtorInfo_31_69;
#line 589 "pd_info.m"
            MR_Word transform_hlds__pd_info__OldGoalInfo_64;
#line 589 "pd_info.m"
            MR_Word transform_hlds__pd_info__OldNonLocals0_65;
#line 589 "pd_info.m"
            MR_Word transform_hlds__pd_info__OldNonLocalsList_66;
#line 589 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_68_68;
#line 592 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_63_63;

#line 508 "pd_info.m"
            {
#line 508 "pd_info.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0, transform_hlds__pd_info__Versions_6, ((MR_Box) (transform_hlds__pd_info__VersionId_17)), &transform_hlds__pd_info__conv0_Version_21);
            }
#line 508 "pd_info.m"
            transform_hlds__pd_info__Version_21 = ((MR_Word) transform_hlds__pd_info__conv0_Version_21);
#line 509 "pd_info.m"
            transform_hlds__pd_info__OldGoal_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_21, (MR_Integer) 0)));
#line 509 "pd_info.m"
            transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_21, (MR_Integer) 1)));
#line 509 "pd_info.m"
            transform_hlds__pd_info__OldArgs_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_21, (MR_Integer) 2)));
#line 509 "pd_info.m"
            transform_hlds__pd_info__OldArgTypes_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_21, (MR_Integer) 3)));
#line 509 "pd_info.m"
            transform_hlds__pd_info__OldInstMap_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_21, (MR_Integer) 4)));
#line 509 "pd_info.m"
            transform_hlds__pd_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_21, (MR_Integer) 5)));
#line 509 "pd_info.m"
            transform_hlds__pd_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_21, (MR_Integer) 6)));
#line 509 "pd_info.m"
            transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_21, (MR_Integer) 7)));
#line 509 "pd_info.m"
            transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_21, (MR_Integer) 8)));
#line 590 "pd_info.m"
            {
#line 590 "pd_info.m"
              transform_hlds__pd_info__succeeded = transform_hlds__pd_util__goals_match_8_p_0(transform_hlds__pd_info__ModuleInfo_1, transform_hlds__pd_info__OldGoal_22, transform_hlds__pd_info__OldArgs_24, transform_hlds__pd_info__OldArgTypes_25, transform_hlds__pd_info__ThisGoal_2, transform_hlds__pd_info__VarTypes_4, &transform_hlds__pd_info__OldNewRenaming_61, &transform_hlds__pd_info__TypeRenaming_62);
            }
#line 589 "pd_info.m"
            if (transform_hlds__pd_info__succeeded)
#line 589 "pd_info.m"
              {
#line 592 "pd_info.m"
                transform_hlds__pd_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__OldGoal_22, (MR_Integer) 0)));
#line 592 "pd_info.m"
                transform_hlds__pd_info__OldGoalInfo_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__OldGoal_22, (MR_Integer) 1)));
#line 593 "pd_info.m"
                {
#line 593 "pd_info.m"
                  transform_hlds__pd_info__OldNonLocals0_65 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__pd_info__OldGoalInfo_64);
                }
#line 5020 "transform_hlds.pd_info.c"
                transform_hlds__pd_info__TypeCtorInfo_31_69 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 594 "pd_info.m"
                {
#line 594 "pd_info.m"
                  parse_tree__set_of_var__to_sorted_list_2_p_0(transform_hlds__pd_info__TypeCtorInfo_31_69, transform_hlds__pd_info__OldNonLocals0_65, &transform_hlds__pd_info__OldNonLocalsList_66);
                }
#line 595 "pd_info.m"
                transform_hlds__pd_info__V_68_68 = (MR_Integer) 0;
#line 595 "pd_info.m"
                {
#line 595 "pd_info.m"
                  transform_hlds__pd_info__succeeded = transform_hlds__pd_info__check_insts_8_p_0(transform_hlds__pd_info__ModuleInfo_1, transform_hlds__pd_info__OldNonLocalsList_66, transform_hlds__pd_info__OldNewRenaming_61, transform_hlds__pd_info__OldInstMap_26, transform_hlds__pd_info__ThisInstMap_3, transform_hlds__pd_info__VarTypes_4, transform_hlds__pd_info__V_68_68, &transform_hlds__pd_info__Exact_67);
                }
#line 589 "pd_info.m"
                if (transform_hlds__pd_info__succeeded)
#line 589 "pd_info.m"
                  {
#line 598 "pd_info.m"
                    {
#line 598 "pd_info.m"
                      transform_hlds__pd_info__MaybeVersion1_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 598 "pd_info.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeVersion1_31, 0) = ((MR_Box) (transform_hlds__pd_info__Exact_67));
#line 598 "pd_info.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeVersion1_31, 1) = ((MR_Box) (transform_hlds__pd_info__VersionId_17));
#line 598 "pd_info.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeVersion1_31, 2) = ((MR_Box) (transform_hlds__pd_info__Version_21));
#line 598 "pd_info.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeVersion1_31, 3) = ((MR_Box) (transform_hlds__pd_info__OldNewRenaming_61));
#line 598 "pd_info.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeVersion1_31, 4) = ((MR_Box) (transform_hlds__pd_info__TypeRenaming_62));
#line 598 "pd_info.m"
                    }
#line 598 "pd_info.m"
                    transform_hlds__pd_info__succeeded = MR_TRUE;
#line 589 "pd_info.m"
                  }
#line 589 "pd_info.m"
              }
#line 532 "pd_info.m"
            if (transform_hlds__pd_info__succeeded)
#line 520 "pd_info.m"
              if ((transform_hlds__pd_info__Exact_67 == (MR_Integer) 0))
#line 522 "pd_info.m"
                {
#line 522 "pd_info.m"
                  *transform_hlds__pd_info__HeadVar__7_7 = transform_hlds__pd_info__MaybeVersion1_31;
#line 522 "pd_info.m"
                  transform_hlds__pd_info__succeeded = MR_TRUE;
#line 522 "pd_info.m"
                }
#line 520 "pd_info.m"
              else
#line 525 "pd_info.m"
                {
#line 525 "pd_info.m"
                  MR_Word transform_hlds__pd_info__MaybeVersion2_40;

#line 526 "pd_info.m"
                  {
#line 526 "pd_info.m"
                    transform_hlds__pd_info__succeeded = transform_hlds__pd_info__get_matching_version_7_p_0(transform_hlds__pd_info__ModuleInfo_1, transform_hlds__pd_info__ThisGoal_2, transform_hlds__pd_info__ThisInstMap_3, transform_hlds__pd_info__VarTypes_4, transform_hlds__pd_info__VersionIds_18, transform_hlds__pd_info__Versions_6, &transform_hlds__pd_info__MaybeVersion2_40);
                  }
#line 525 "pd_info.m"
                  if (transform_hlds__pd_info__succeeded)
#line 525 "pd_info.m"
                    {
#line 529 "pd_info.m"
                      {
#line 529 "pd_info.m"
                        transform_hlds__pd_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_105_99_107_95_118_101_114_115_105_111_110_95_95_91_49_93_95_48_7_p_0(transform_hlds__pd_info__VersionId_17, transform_hlds__pd_info__OldNewRenaming_61, transform_hlds__pd_info__TypeRenaming_62, transform_hlds__pd_info__Version_21, transform_hlds__pd_info__MaybeVersion2_40, transform_hlds__pd_info__HeadVar__7_7);
                      }
#line 529 "pd_info.m"
                      transform_hlds__pd_info__succeeded = MR_TRUE;
#line 525 "pd_info.m"
                    }
#line 525 "pd_info.m"
                }
#line 532 "pd_info.m"
            else
#line 533 "pd_info.m"
              {
#line 533 "pd_info.m"
                /* direct tailcall eliminated */
#line 533 "pd_info.m"
                {
#line 533 "pd_info.m"
                  MR_Word transform_hlds__pd_info__HeadVar__5__tmp_copy_5 = transform_hlds__pd_info__VersionIds_18;

#line 533 "pd_info.m"
                  transform_hlds__pd_info__HeadVar__5_5 = transform_hlds__pd_info__HeadVar__5__tmp_copy_5;
#line 533 "pd_info.m"
                }
#line 533 "pd_info.m"
                continue;
#line 533 "pd_info.m"
              }
#line 507 "pd_info.m"
          }
#line 505 "pd_info.m"
        return transform_hlds__pd_info__succeeded;
#line 505 "pd_info.m"
      }
#line 505 "pd_info.m"
      break;
#line 505 "pd_info.m"
    }
#line 501 "pd_info.m"
}

#line 419 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__remove_version_3_p_0(
#line 419 "pd_info.m"
  MR_Word transform_hlds__pd_info__PredProcId_4,
#line 419 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21,
#line 419 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_22)
#line 419 "pd_info.m"
{
#line 715 "pd_info.m"
  {
#line 715 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 715 "pd_info.m"
    MR_Word transform_hlds__pd_info__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 715 "pd_info.m"
    MR_Word transform_hlds__pd_info__TypeCtorInfo_36_36 = (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0;
#line 715 "pd_info.m"
    MR_Word transform_hlds__pd_info__Versions0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 3)));
#line 715 "pd_info.m"
    MR_Word transform_hlds__pd_info__Version_7;
#line 715 "pd_info.m"
    MR_Word transform_hlds__pd_info__Goal_8;
#line 715 "pd_info.m"
    MR_Word transform_hlds__pd_info__Calls_9;
#line 715 "pd_info.m"
    MR_Word transform_hlds__pd_info__Versions_10;
#line 715 "pd_info.m"
    MR_Word transform_hlds__pd_info__GoalIndex0_11;
#line 715 "pd_info.m"
    MR_Word transform_hlds__pd_info__CreatedVersions0_15;
#line 715 "pd_info.m"
    MR_Word transform_hlds__pd_info__CreatedVersions_16;
#line 715 "pd_info.m"
    MR_Word transform_hlds__pd_info__ModuleInfo0_17;
#line 715 "pd_info.m"
    MR_Word transform_hlds__pd_info__PredId_18;
#line 715 "pd_info.m"
    MR_Word transform_hlds__pd_info__ModuleInfo_20;
#line 715 "pd_info.m"
    MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23;
#line 715 "pd_info.m"
    MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24;
#line 715 "pd_info.m"
    MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25;
#line 167 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 0)));
#line 167 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 1)));
#line 167 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 2)));
#line 167 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 4)));
#line 167 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 5)));
#line 167 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 6)));
#line 167 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 7)));
#line 167 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 8)));
#line 167 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 9)));
#line 167 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 10)));
#line 717 "pd_info.m"
    MR_Box transform_hlds__pd_info__conv0_Version_7;
#line 718 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27;
#line 718 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28;
#line 718 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29;
#line 718 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30;
#line 718 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_31_31;
#line 718 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_32_32;
#line 718 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_33_33;
#line 718 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_34_34;
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_55_55;
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_56_56;
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_59_59;
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_60_60;
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_61_61;
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_62_62;
#line 185 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_63_63;
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_64_64;
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_65_65;
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_58_58;
#line 728 "pd_info.m"
    MR_Word transform_hlds__pd_info__GoalVersions0_12;
#line 724 "pd_info.m"
    MR_Word transform_hlds__pd_info__TypeInfo_37_37;
#line 724 "pd_info.m"
    MR_Box transform_hlds__pd_info__conv1_GoalVersions0_12;
#line 737 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_19_19;

#line 717 "pd_info.m"
    {
#line 717 "pd_info.m"
      mercury__map__lookup_3_p_0(transform_hlds__pd_info__TypeCtorInfo_35_35, transform_hlds__pd_info__TypeCtorInfo_36_36, transform_hlds__pd_info__Versions0_6, ((MR_Box) (transform_hlds__pd_info__PredProcId_4)), &transform_hlds__pd_info__conv0_Version_7);
    }
#line 717 "pd_info.m"
    transform_hlds__pd_info__Version_7 = ((MR_Word) transform_hlds__pd_info__conv0_Version_7);
#line 718 "pd_info.m"
    transform_hlds__pd_info__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 0)));
#line 718 "pd_info.m"
    transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 1)));
#line 718 "pd_info.m"
    transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 2)));
#line 718 "pd_info.m"
    transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 3)));
#line 718 "pd_info.m"
    transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 4)));
#line 718 "pd_info.m"
    transform_hlds__pd_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 5)));
#line 718 "pd_info.m"
    transform_hlds__pd_info__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 6)));
#line 718 "pd_info.m"
    transform_hlds__pd_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 7)));
#line 718 "pd_info.m"
    transform_hlds__pd_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 8)));
#line 719 "pd_info.m"
    {
#line 719 "pd_info.m"
      transform_hlds__pd_util__goal_get_calls_2_p_0(transform_hlds__pd_info__Goal_8, &transform_hlds__pd_info__Calls_9);
    }
#line 720 "pd_info.m"
    {
#line 720 "pd_info.m"
      mercury__map__delete_3_p_0(transform_hlds__pd_info__TypeCtorInfo_35_35, transform_hlds__pd_info__TypeCtorInfo_36_36, ((MR_Box) (transform_hlds__pd_info__PredProcId_4)), transform_hlds__pd_info__Versions0_6, &transform_hlds__pd_info__Versions_10);
    }
#line 185 "pd_info.m"
    transform_hlds__pd_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 0)));
#line 185 "pd_info.m"
    transform_hlds__pd_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 1)));
#line 185 "pd_info.m"
    transform_hlds__pd_info__GoalIndex0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 2)));
#line 185 "pd_info.m"
    transform_hlds__pd_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 3)));
#line 185 "pd_info.m"
    transform_hlds__pd_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 4)));
#line 185 "pd_info.m"
    transform_hlds__pd_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 5)));
#line 185 "pd_info.m"
    transform_hlds__pd_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 6)));
#line 185 "pd_info.m"
    transform_hlds__pd_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 7)));
#line 185 "pd_info.m"
    transform_hlds__pd_info__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 8)));
#line 185 "pd_info.m"
    transform_hlds__pd_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 9)));
#line 185 "pd_info.m"
    transform_hlds__pd_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 10)));
#line 185 "pd_info.m"
    {
#line 185 "pd_info.m"
      transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, 0) = ((MR_Box) (transform_hlds__pd_info__V_55_55));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, 1) = ((MR_Box) (transform_hlds__pd_info__V_56_56));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, 2) = ((MR_Box) (transform_hlds__pd_info__GoalIndex0_11));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, 3) = ((MR_Box) (transform_hlds__pd_info__Versions_10));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, 4) = ((MR_Box) (transform_hlds__pd_info__V_59_59));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, 5) = ((MR_Box) (transform_hlds__pd_info__V_60_60));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, 6) = ((MR_Box) (transform_hlds__pd_info__V_61_61));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, 7) = ((MR_Box) (transform_hlds__pd_info__V_62_62));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, 8) = ((MR_Box) (transform_hlds__pd_info__V_63_63));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, 9) = ((MR_Box) (transform_hlds__pd_info__V_64_64));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, 10) = ((MR_Box) (transform_hlds__pd_info__V_65_65));
#line 185 "pd_info.m"
    }
#line 5330 "transform_hlds.pd_info.c"
    transform_hlds__pd_info__TypeInfo_37_37 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[0];
#line 724 "pd_info.m"
    {
#line 724 "pd_info.m"
      transform_hlds__pd_info__succeeded = mercury__map__search_3_p_0(transform_hlds__pd_info__TypeInfo_37_37, transform_hlds__pd_info__TypeInfo_37_37, transform_hlds__pd_info__GoalIndex0_11, ((MR_Box) (transform_hlds__pd_info__Calls_9)), &transform_hlds__pd_info__conv1_GoalVersions0_12);
    }
#line 724 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 724 "pd_info.m"
      {
#line 724 "pd_info.m"
        transform_hlds__pd_info__GoalVersions0_12 = ((MR_Word) transform_hlds__pd_info__conv1_GoalVersions0_12);
#line 724 "pd_info.m"
        transform_hlds__pd_info__succeeded = MR_TRUE;
#line 724 "pd_info.m"
      }
#line 728 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 725 "pd_info.m"
      {
#line 725 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_38_38;
#line 725 "pd_info.m"
        MR_Word transform_hlds__pd_info__GoalVersions_13;
#line 725 "pd_info.m"
        MR_Word transform_hlds__pd_info__GoalIndex_14;
#line 183 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_82_82;
#line 183 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_83_83;
#line 183 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_85_85;
#line 183 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_86_86;
#line 183 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_87_87;
#line 183 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_88_88;
#line 183 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_89_89;
#line 183 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_90_90;
#line 183 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_91_91;
#line 183 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_92_92;
#line 183 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_84_84;

#line 725 "pd_info.m"
        {
#line 725 "pd_info.m"
          mercury__list__delete_all_3_p_1(transform_hlds__pd_info__TypeCtorInfo_35_35, transform_hlds__pd_info__GoalVersions0_12, ((MR_Box) (transform_hlds__pd_info__PredProcId_4)), &transform_hlds__pd_info__GoalVersions_13);
        }
#line 5385 "transform_hlds.pd_info.c"
        transform_hlds__pd_info__TypeInfo_38_38 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[0];
#line 726 "pd_info.m"
        {
#line 726 "pd_info.m"
          mercury__map__det_update_4_p_0(transform_hlds__pd_info__TypeInfo_38_38, transform_hlds__pd_info__TypeInfo_38_38, ((MR_Box) (transform_hlds__pd_info__Calls_9)), ((MR_Box) (transform_hlds__pd_info__GoalVersions_13)), transform_hlds__pd_info__GoalIndex0_11, &transform_hlds__pd_info__GoalIndex_14);
        }
#line 183 "pd_info.m"
        transform_hlds__pd_info__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, (MR_Integer) 0)));
#line 183 "pd_info.m"
        transform_hlds__pd_info__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, (MR_Integer) 1)));
#line 183 "pd_info.m"
        transform_hlds__pd_info__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, (MR_Integer) 2)));
#line 183 "pd_info.m"
        transform_hlds__pd_info__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, (MR_Integer) 3)));
#line 183 "pd_info.m"
        transform_hlds__pd_info__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, (MR_Integer) 4)));
#line 183 "pd_info.m"
        transform_hlds__pd_info__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, (MR_Integer) 5)));
#line 183 "pd_info.m"
        transform_hlds__pd_info__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, (MR_Integer) 6)));
#line 183 "pd_info.m"
        transform_hlds__pd_info__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, (MR_Integer) 7)));
#line 183 "pd_info.m"
        transform_hlds__pd_info__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, (MR_Integer) 8)));
#line 183 "pd_info.m"
        transform_hlds__pd_info__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, (MR_Integer) 9)));
#line 183 "pd_info.m"
        transform_hlds__pd_info__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, (MR_Integer) 10)));
#line 183 "pd_info.m"
        {
#line 183 "pd_info.m"
          transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 183 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 0) = ((MR_Box) (transform_hlds__pd_info__V_82_82));
#line 183 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 1) = ((MR_Box) (transform_hlds__pd_info__V_83_83));
#line 183 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 2) = ((MR_Box) (transform_hlds__pd_info__GoalIndex_14));
#line 183 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 3) = ((MR_Box) (transform_hlds__pd_info__V_85_85));
#line 183 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 4) = ((MR_Box) (transform_hlds__pd_info__V_86_86));
#line 183 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 5) = ((MR_Box) (transform_hlds__pd_info__V_87_87));
#line 183 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 6) = ((MR_Box) (transform_hlds__pd_info__V_88_88));
#line 183 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 7) = ((MR_Box) (transform_hlds__pd_info__V_89_89));
#line 183 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 8) = ((MR_Box) (transform_hlds__pd_info__V_90_90));
#line 183 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 9) = ((MR_Box) (transform_hlds__pd_info__V_91_91));
#line 183 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 10) = ((MR_Box) (transform_hlds__pd_info__V_92_92));
#line 183 "pd_info.m"
        }
#line 725 "pd_info.m"
      }
#line 728 "pd_info.m"
    else
#line 727 "pd_info.m"
      transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24 = transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23;
#line 732 "pd_info.m"
    {
#line 732 "pd_info.m"
      transform_hlds__pd_info__pd_info_get_created_versions_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, &transform_hlds__pd_info__CreatedVersions0_15);
    }
#line 733 "pd_info.m"
    {
#line 733 "pd_info.m"
      mercury__set__delete_3_p_0(transform_hlds__pd_info__TypeCtorInfo_35_35, ((MR_Box) (transform_hlds__pd_info__PredProcId_4)), transform_hlds__pd_info__CreatedVersions0_15, &transform_hlds__pd_info__CreatedVersions_16);
    }
#line 734 "pd_info.m"
    {
#line 734 "pd_info.m"
      transform_hlds__pd_info__pd_info_set_created_versions_3_p_0(transform_hlds__pd_info__CreatedVersions_16, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, &transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25);
    }
#line 736 "pd_info.m"
    {
#line 736 "pd_info.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, &transform_hlds__pd_info__ModuleInfo0_17);
    }
#line 737 "pd_info.m"
    transform_hlds__pd_info__PredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PredProcId_4, (MR_Integer) 0)));
#line 737 "pd_info.m"
    transform_hlds__pd_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PredProcId_4, (MR_Integer) 1)));
#line 738 "pd_info.m"
    {
#line 738 "pd_info.m"
      hlds__hlds_module__module_info_remove_predicate_3_p_0(transform_hlds__pd_info__PredId_18, transform_hlds__pd_info__ModuleInfo0_17, &transform_hlds__pd_info__ModuleInfo_20);
    }
#line 739 "pd_info.m"
    {
#line 739 "pd_info.m"
      transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__pd_info__ModuleInfo_20, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_22);
#line 739 "pd_info.m"
      return;
    }
#line 715 "pd_info.m"
  }
#line 419 "pd_info.m"
}

#line 413 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__invalidate_version_3_p_0(
#line 413 "pd_info.m"
  MR_Word transform_hlds__pd_info__PredProcId_4,
#line 413 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15,
#line 413 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_16)
#line 413 "pd_info.m"
{
#line 696 "pd_info.m"
  {
#line 696 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 696 "pd_info.m"
    MR_Word transform_hlds__pd_info__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 696 "pd_info.m"
    MR_Word transform_hlds__pd_info__Versions0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 3)));
#line 696 "pd_info.m"
    MR_Word transform_hlds__pd_info__Version_7;
#line 696 "pd_info.m"
    MR_Word transform_hlds__pd_info__Goal_8;
#line 696 "pd_info.m"
    MR_Word transform_hlds__pd_info__Calls_9;
#line 696 "pd_info.m"
    MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18;
#line 167 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 0)));
#line 167 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 1)));
#line 167 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 2)));
#line 167 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 4)));
#line 167 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 5)));
#line 167 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 6)));
#line 167 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 7)));
#line 167 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 8)));
#line 167 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 9)));
#line 167 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 10)));
#line 698 "pd_info.m"
    MR_Box transform_hlds__pd_info__conv0_Version_7;
#line 699 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_20_20;
#line 699 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21;
#line 699 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22;
#line 699 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23;
#line 699 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_24_24;
#line 699 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_25_25;
#line 699 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26;
#line 699 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27;
#line 710 "pd_info.m"
    MR_Word transform_hlds__pd_info__FirstCall_10;
#line 710 "pd_info.m"
    MR_Word transform_hlds__pd_info__LastCall_12;
#line 702 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 703 "pd_info.m"
    MR_Box transform_hlds__pd_info__conv1_LastCall_12;

#line 698 "pd_info.m"
    {
#line 698 "pd_info.m"
      mercury__map__lookup_3_p_0(transform_hlds__pd_info__TypeCtorInfo_28_28, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0, transform_hlds__pd_info__Versions0_6, ((MR_Box) (transform_hlds__pd_info__PredProcId_4)), &transform_hlds__pd_info__conv0_Version_7);
    }
#line 698 "pd_info.m"
    transform_hlds__pd_info__Version_7 = ((MR_Word) transform_hlds__pd_info__conv0_Version_7);
#line 699 "pd_info.m"
    transform_hlds__pd_info__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 0)));
#line 699 "pd_info.m"
    transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 1)));
#line 699 "pd_info.m"
    transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 2)));
#line 699 "pd_info.m"
    transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 3)));
#line 699 "pd_info.m"
    transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 4)));
#line 699 "pd_info.m"
    transform_hlds__pd_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 5)));
#line 699 "pd_info.m"
    transform_hlds__pd_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 6)));
#line 699 "pd_info.m"
    transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 7)));
#line 699 "pd_info.m"
    transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 8)));
#line 700 "pd_info.m"
    {
#line 700 "pd_info.m"
      transform_hlds__pd_util__goal_get_calls_2_p_0(transform_hlds__pd_info__Goal_8, &transform_hlds__pd_info__Calls_9);
    }
#line 702 "pd_info.m"
    transform_hlds__pd_info__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_info__Calls_9)) == (MR_mktag((MR_Integer) 1)));
#line 702 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 702 "pd_info.m"
      {
#line 702 "pd_info.m"
        transform_hlds__pd_info__FirstCall_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__Calls_9, (MR_Integer) 0)));
#line 702 "pd_info.m"
        transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__Calls_9, (MR_Integer) 1)));
#line 703 "pd_info.m"
        {
#line 703 "pd_info.m"
          transform_hlds__pd_info__succeeded = mercury__list__last_2_p_0(transform_hlds__pd_info__TypeCtorInfo_28_28, transform_hlds__pd_info__Calls_9, &transform_hlds__pd_info__conv1_LastCall_12);
        }
#line 703 "pd_info.m"
        if (transform_hlds__pd_info__succeeded)
#line 703 "pd_info.m"
          {
#line 703 "pd_info.m"
            transform_hlds__pd_info__LastCall_12 = ((MR_Word) transform_hlds__pd_info__conv1_LastCall_12);
#line 703 "pd_info.m"
            transform_hlds__pd_info__succeeded = MR_TRUE;
#line 703 "pd_info.m"
          }
#line 702 "pd_info.m"
      }
#line 710 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 707 "pd_info.m"
      {
#line 707 "pd_info.m"
        MR_Word transform_hlds__pd_info__Useless0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 10)));
#line 707 "pd_info.m"
        MR_Word transform_hlds__pd_info__Useless_14;
#line 707 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_17_17;
#line 174 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 0)));
#line 174 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 1)));
#line 174 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 2)));
#line 174 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 3)));
#line 174 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 4)));
#line 174 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 5)));
#line 174 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 6)));
#line 174 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 7)));
#line 174 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 8)));
#line 174 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 9)));
#line 199 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_58_58;
#line 199 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_59_59;
#line 199 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_60_60;
#line 199 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_61_61;
#line 199 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_62_62;
#line 199 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_63_63;
#line 199 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_64_64;
#line 199 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_65_65;
#line 199 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_66_66;
#line 199 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_67_67;
#line 199 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_68_68;

#line 708 "pd_info.m"
        {
#line 708 "pd_info.m"
          transform_hlds__pd_info__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 708 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__V_17_17, 0) = ((MR_Box) (transform_hlds__pd_info__FirstCall_10));
#line 708 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__V_17_17, 1) = ((MR_Box) (transform_hlds__pd_info__LastCall_12));
#line 708 "pd_info.m"
        }
#line 708 "pd_info.m"
        {
#line 708 "pd_info.m"
          mercury__set__insert_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[0], ((MR_Box) (transform_hlds__pd_info__V_17_17)), transform_hlds__pd_info__Useless0_13, &transform_hlds__pd_info__Useless_14);
        }
#line 199 "pd_info.m"
        transform_hlds__pd_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 0)));
#line 199 "pd_info.m"
        transform_hlds__pd_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 1)));
#line 199 "pd_info.m"
        transform_hlds__pd_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 2)));
#line 199 "pd_info.m"
        transform_hlds__pd_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 3)));
#line 199 "pd_info.m"
        transform_hlds__pd_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 4)));
#line 199 "pd_info.m"
        transform_hlds__pd_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 5)));
#line 199 "pd_info.m"
        transform_hlds__pd_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 6)));
#line 199 "pd_info.m"
        transform_hlds__pd_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 7)));
#line 199 "pd_info.m"
        transform_hlds__pd_info__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 8)));
#line 199 "pd_info.m"
        transform_hlds__pd_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 9)));
#line 199 "pd_info.m"
        transform_hlds__pd_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 10)));
#line 199 "pd_info.m"
        {
#line 199 "pd_info.m"
          transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 199 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, 0) = ((MR_Box) (transform_hlds__pd_info__V_58_58));
#line 199 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, 1) = ((MR_Box) (transform_hlds__pd_info__V_59_59));
#line 199 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, 2) = ((MR_Box) (transform_hlds__pd_info__V_60_60));
#line 199 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, 3) = ((MR_Box) (transform_hlds__pd_info__V_61_61));
#line 199 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, 4) = ((MR_Box) (transform_hlds__pd_info__V_62_62));
#line 199 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, 5) = ((MR_Box) (transform_hlds__pd_info__V_63_63));
#line 199 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, 6) = ((MR_Box) (transform_hlds__pd_info__V_64_64));
#line 199 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, 7) = ((MR_Box) (transform_hlds__pd_info__V_65_65));
#line 199 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, 8) = ((MR_Box) (transform_hlds__pd_info__V_66_66));
#line 199 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, 9) = ((MR_Box) (transform_hlds__pd_info__V_67_67));
#line 199 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, 10) = ((MR_Box) (transform_hlds__pd_info__Useless_14));
#line 199 "pd_info.m"
        }
#line 707 "pd_info.m"
      }
#line 710 "pd_info.m"
    else
#line 709 "pd_info.m"
      transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18 = transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15;
#line 713 "pd_info.m"
    {
#line 713 "pd_info.m"
      transform_hlds__pd_info__remove_version_3_p_0(transform_hlds__pd_info__PredProcId_4, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_16);
#line 713 "pd_info.m"
      return;
    }
#line 696 "pd_info.m"
  }
#line 413 "pd_info.m"
}

#line 408 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__register_version_4_p_0(
#line 408 "pd_info.m"
  MR_Word transform_hlds__pd_info__PredProcId_5,
#line 408 "pd_info.m"
  MR_Word transform_hlds__pd_info__Version_6,
#line 408 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19,
#line 408 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_20)
#line 408 "pd_info.m"
{
#line 672 "pd_info.m"
  {
#line 672 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 672 "pd_info.m"
    MR_Word transform_hlds__pd_info__TypeCtorInfo_39_39;
#line 672 "pd_info.m"
    MR_Word transform_hlds__pd_info__GoalVersionIndex0_9;
#line 672 "pd_info.m"
    MR_Word transform_hlds__pd_info__Goal_10;
#line 672 "pd_info.m"
    MR_Word transform_hlds__pd_info__Calls_11;
#line 672 "pd_info.m"
    MR_Word transform_hlds__pd_info__GoalVersionIndex_14;
#line 672 "pd_info.m"
    MR_Word transform_hlds__pd_info__Versions0_15;
#line 672 "pd_info.m"
    MR_Word transform_hlds__pd_info__Versions_16;
#line 672 "pd_info.m"
    MR_Word transform_hlds__pd_info__CreatedVersions0_17;
#line 672 "pd_info.m"
    MR_Word transform_hlds__pd_info__CreatedVersions_18;
#line 672 "pd_info.m"
    MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24;
#line 672 "pd_info.m"
    MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25;
#line 166 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_42_42;
#line 166 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_43_43;
#line 166 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_44_44;
#line 166 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_45_45;
#line 166 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_46_46;
#line 166 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_47_47;
#line 166 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_48_48;
#line 166 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_49_49;
#line 166 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_50_50;
#line 166 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_51_51;
#line 677 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28;
#line 677 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29;
#line 677 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30;
#line 677 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_31_31;
#line 677 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_32_32;
#line 677 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_33_33;
#line 677 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_34_34;
#line 677 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_35_35;
#line 682 "pd_info.m"
    MR_Word transform_hlds__pd_info__VersionList0_12;
#line 679 "pd_info.m"
    MR_Word transform_hlds__pd_info__TypeInfo_36_36;
#line 679 "pd_info.m"
    MR_Box transform_hlds__pd_info__conv0_VersionList0_12;
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_57_57;
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_58_58;
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_61_61;
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_62_62;
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_63_63;
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_64_64;
#line 183 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_65_65;
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_66_66;
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_67_67;
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_59_59;
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_84_84;
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_85_85;
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_86_86;
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_88_88;
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_89_89;
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_90_90;
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_91_91;
#line 185 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_92_92;
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_93_93;
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_94_94;
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_87_87;

#line 674 "pd_info.m"
    {
#line 674 "pd_info.m"
      transform_hlds__pd_debug__pd_debug_register_version_5_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, transform_hlds__pd_info__PredProcId_5, transform_hlds__pd_info__Version_6);
    }
#line 166 "pd_info.m"
    transform_hlds__pd_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 0)));
#line 166 "pd_info.m"
    transform_hlds__pd_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 1)));
#line 166 "pd_info.m"
    transform_hlds__pd_info__GoalVersionIndex0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 2)));
#line 166 "pd_info.m"
    transform_hlds__pd_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 3)));
#line 166 "pd_info.m"
    transform_hlds__pd_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 4)));
#line 166 "pd_info.m"
    transform_hlds__pd_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 5)));
#line 166 "pd_info.m"
    transform_hlds__pd_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 6)));
#line 166 "pd_info.m"
    transform_hlds__pd_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 7)));
#line 166 "pd_info.m"
    transform_hlds__pd_info__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 8)));
#line 166 "pd_info.m"
    transform_hlds__pd_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 9)));
#line 166 "pd_info.m"
    transform_hlds__pd_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 10)));
#line 677 "pd_info.m"
    transform_hlds__pd_info__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_6, (MR_Integer) 0)));
#line 677 "pd_info.m"
    transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_6, (MR_Integer) 1)));
#line 677 "pd_info.m"
    transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_6, (MR_Integer) 2)));
#line 677 "pd_info.m"
    transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_6, (MR_Integer) 3)));
#line 677 "pd_info.m"
    transform_hlds__pd_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_6, (MR_Integer) 4)));
#line 677 "pd_info.m"
    transform_hlds__pd_info__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_6, (MR_Integer) 5)));
#line 677 "pd_info.m"
    transform_hlds__pd_info__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_6, (MR_Integer) 6)));
#line 677 "pd_info.m"
    transform_hlds__pd_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_6, (MR_Integer) 7)));
#line 677 "pd_info.m"
    transform_hlds__pd_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_6, (MR_Integer) 8)));
#line 678 "pd_info.m"
    {
#line 678 "pd_info.m"
      transform_hlds__pd_util__goal_get_calls_2_p_0(transform_hlds__pd_info__Goal_10, &transform_hlds__pd_info__Calls_11);
    }
#line 5930 "transform_hlds.pd_info.c"
    transform_hlds__pd_info__TypeInfo_36_36 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[0];
#line 679 "pd_info.m"
    {
#line 679 "pd_info.m"
      transform_hlds__pd_info__succeeded = mercury__map__search_3_p_0(transform_hlds__pd_info__TypeInfo_36_36, transform_hlds__pd_info__TypeInfo_36_36, transform_hlds__pd_info__GoalVersionIndex0_9, ((MR_Box) (transform_hlds__pd_info__Calls_11)), &transform_hlds__pd_info__conv0_VersionList0_12);
    }
#line 679 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 679 "pd_info.m"
      {
#line 679 "pd_info.m"
        transform_hlds__pd_info__VersionList0_12 = ((MR_Word) transform_hlds__pd_info__conv0_VersionList0_12);
#line 679 "pd_info.m"
        transform_hlds__pd_info__succeeded = MR_TRUE;
#line 679 "pd_info.m"
      }
#line 682 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 680 "pd_info.m"
      {
#line 680 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_37_37;
#line 680 "pd_info.m"
        MR_Word transform_hlds__pd_info__VersionList_13;

#line 680 "pd_info.m"
        {
#line 680 "pd_info.m"
          transform_hlds__pd_info__VersionList_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 680 "pd_info.m"
          MR_hl_field(MR_mktag(1), transform_hlds__pd_info__VersionList_13, 0) = ((MR_Box) (transform_hlds__pd_info__PredProcId_5));
#line 680 "pd_info.m"
          MR_hl_field(MR_mktag(1), transform_hlds__pd_info__VersionList_13, 1) = ((MR_Box) (transform_hlds__pd_info__VersionList0_12));
#line 680 "pd_info.m"
        }
#line 5966 "transform_hlds.pd_info.c"
        transform_hlds__pd_info__TypeInfo_37_37 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[0];
#line 681 "pd_info.m"
        {
#line 681 "pd_info.m"
          mercury__map__det_update_4_p_0(transform_hlds__pd_info__TypeInfo_37_37, transform_hlds__pd_info__TypeInfo_37_37, ((MR_Box) (transform_hlds__pd_info__Calls_11)), ((MR_Box) (transform_hlds__pd_info__VersionList_13)), transform_hlds__pd_info__GoalVersionIndex0_9, &transform_hlds__pd_info__GoalVersionIndex_14);
        }
#line 680 "pd_info.m"
      }
#line 682 "pd_info.m"
    else
#line 683 "pd_info.m"
      {
#line 683 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_38_38;
#line 683 "pd_info.m"
        MR_Word transform_hlds__pd_info__VersionList_27;

#line 683 "pd_info.m"
        {
#line 683 "pd_info.m"
          transform_hlds__pd_info__VersionList_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 683 "pd_info.m"
          MR_hl_field(MR_mktag(1), transform_hlds__pd_info__VersionList_27, 0) = ((MR_Box) (transform_hlds__pd_info__PredProcId_5));
#line 683 "pd_info.m"
          MR_hl_field(MR_mktag(1), transform_hlds__pd_info__VersionList_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 683 "pd_info.m"
        }
#line 5994 "transform_hlds.pd_info.c"
        transform_hlds__pd_info__TypeInfo_38_38 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[0];
#line 684 "pd_info.m"
        {
#line 684 "pd_info.m"
          mercury__map__det_insert_4_p_0(transform_hlds__pd_info__TypeInfo_38_38, transform_hlds__pd_info__TypeInfo_38_38, ((MR_Box) (transform_hlds__pd_info__Calls_11)), ((MR_Box) (transform_hlds__pd_info__VersionList_27)), transform_hlds__pd_info__GoalVersionIndex0_9, &transform_hlds__pd_info__GoalVersionIndex_14);
        }
#line 683 "pd_info.m"
      }
#line 183 "pd_info.m"
    transform_hlds__pd_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 0)));
#line 183 "pd_info.m"
    transform_hlds__pd_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 1)));
#line 183 "pd_info.m"
    transform_hlds__pd_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 2)));
#line 183 "pd_info.m"
    transform_hlds__pd_info__Versions0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 3)));
#line 183 "pd_info.m"
    transform_hlds__pd_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 4)));
#line 183 "pd_info.m"
    transform_hlds__pd_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 5)));
#line 183 "pd_info.m"
    transform_hlds__pd_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 6)));
#line 183 "pd_info.m"
    transform_hlds__pd_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 7)));
#line 183 "pd_info.m"
    transform_hlds__pd_info__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 8)));
#line 183 "pd_info.m"
    transform_hlds__pd_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 9)));
#line 183 "pd_info.m"
    transform_hlds__pd_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 10)));
#line 183 "pd_info.m"
    {
#line 183 "pd_info.m"
      transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 0) = ((MR_Box) (transform_hlds__pd_info__V_57_57));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 1) = ((MR_Box) (transform_hlds__pd_info__V_58_58));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 2) = ((MR_Box) (transform_hlds__pd_info__GoalVersionIndex_14));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 3) = ((MR_Box) (transform_hlds__pd_info__Versions0_15));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 4) = ((MR_Box) (transform_hlds__pd_info__V_61_61));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 5) = ((MR_Box) (transform_hlds__pd_info__V_62_62));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 6) = ((MR_Box) (transform_hlds__pd_info__V_63_63));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 7) = ((MR_Box) (transform_hlds__pd_info__V_64_64));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 8) = ((MR_Box) (transform_hlds__pd_info__V_65_65));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 9) = ((MR_Box) (transform_hlds__pd_info__V_66_66));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 10) = ((MR_Box) (transform_hlds__pd_info__V_67_67));
#line 183 "pd_info.m"
    }
#line 6053 "transform_hlds.pd_info.c"
    transform_hlds__pd_info__TypeCtorInfo_39_39 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 688 "pd_info.m"
    {
#line 688 "pd_info.m"
      mercury__map__det_insert_4_p_0(transform_hlds__pd_info__TypeCtorInfo_39_39, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0, ((MR_Box) (transform_hlds__pd_info__PredProcId_5)), ((MR_Box) (transform_hlds__pd_info__Version_6)), transform_hlds__pd_info__Versions0_15, &transform_hlds__pd_info__Versions_16);
    }
#line 185 "pd_info.m"
    transform_hlds__pd_info__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, (MR_Integer) 0)));
#line 185 "pd_info.m"
    transform_hlds__pd_info__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, (MR_Integer) 1)));
#line 185 "pd_info.m"
    transform_hlds__pd_info__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, (MR_Integer) 2)));
#line 185 "pd_info.m"
    transform_hlds__pd_info__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, (MR_Integer) 3)));
#line 185 "pd_info.m"
    transform_hlds__pd_info__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, (MR_Integer) 4)));
#line 185 "pd_info.m"
    transform_hlds__pd_info__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, (MR_Integer) 5)));
#line 185 "pd_info.m"
    transform_hlds__pd_info__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, (MR_Integer) 6)));
#line 185 "pd_info.m"
    transform_hlds__pd_info__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, (MR_Integer) 7)));
#line 185 "pd_info.m"
    transform_hlds__pd_info__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, (MR_Integer) 8)));
#line 185 "pd_info.m"
    transform_hlds__pd_info__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, (MR_Integer) 9)));
#line 185 "pd_info.m"
    transform_hlds__pd_info__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, (MR_Integer) 10)));
#line 185 "pd_info.m"
    {
#line 185 "pd_info.m"
      transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, 0) = ((MR_Box) (transform_hlds__pd_info__V_84_84));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, 1) = ((MR_Box) (transform_hlds__pd_info__V_85_85));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, 2) = ((MR_Box) (transform_hlds__pd_info__V_86_86));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, 3) = ((MR_Box) (transform_hlds__pd_info__Versions_16));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, 4) = ((MR_Box) (transform_hlds__pd_info__V_88_88));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, 5) = ((MR_Box) (transform_hlds__pd_info__V_89_89));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, 6) = ((MR_Box) (transform_hlds__pd_info__V_90_90));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, 7) = ((MR_Box) (transform_hlds__pd_info__V_91_91));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, 8) = ((MR_Box) (transform_hlds__pd_info__V_92_92));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, 9) = ((MR_Box) (transform_hlds__pd_info__V_93_93));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, 10) = ((MR_Box) (transform_hlds__pd_info__V_94_94));
#line 185 "pd_info.m"
    }
#line 690 "pd_info.m"
    {
#line 690 "pd_info.m"
      transform_hlds__pd_info__pd_info_get_created_versions_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, &transform_hlds__pd_info__CreatedVersions0_17);
    }
#line 691 "pd_info.m"
    {
#line 691 "pd_info.m"
      mercury__set__insert_3_p_0(transform_hlds__pd_info__TypeCtorInfo_39_39, ((MR_Box) (transform_hlds__pd_info__PredProcId_5)), transform_hlds__pd_info__CreatedVersions0_17, &transform_hlds__pd_info__CreatedVersions_18);
    }
#line 692 "pd_info.m"
    {
#line 692 "pd_info.m"
      transform_hlds__pd_info__pd_info_set_created_versions_3_p_0(transform_hlds__pd_info__CreatedVersions_18, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_20);
#line 692 "pd_info.m"
      return;
    }
#line 672 "pd_info.m"
  }
#line 408 "pd_info.m"
}

#line 403 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__define_new_pred_6_p_0(
#line 403 "pd_info.m"
  MR_Word transform_hlds__pd_info__Origin_7,
#line 403 "pd_info.m"
  MR_Word transform_hlds__pd_info__Goal_8,
#line 403 "pd_info.m"
  MR_Word * transform_hlds__pd_info__PredProcId_9,
#line 403 "pd_info.m"
  MR_Word * transform_hlds__pd_info__CallGoal_10,
#line 403 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_38,
#line 403 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_39)
#line 403 "pd_info.m"
{
#line 636 "pd_info.m"
  {
#line 636 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 636 "pd_info.m"
    MR_Word transform_hlds__pd_info__InstMap_12;
#line 636 "pd_info.m"
    MR_Word transform_hlds__pd_info__GoalInfo_14;
#line 636 "pd_info.m"
    MR_Word transform_hlds__pd_info__NonLocals_15;
#line 636 "pd_info.m"
    MR_Word transform_hlds__pd_info__Args_16;
#line 636 "pd_info.m"
    MR_Word transform_hlds__pd_info__Counter0_17;
#line 636 "pd_info.m"
    MR_Integer transform_hlds__pd_info__Count_18;
#line 636 "pd_info.m"
    MR_Word transform_hlds__pd_info__Counter_19;
#line 636 "pd_info.m"
    MR_Word transform_hlds__pd_info__PredInfo_20;
#line 636 "pd_info.m"
    MR_Word transform_hlds__pd_info__PredModule_21;
#line 636 "pd_info.m"
    MR_String transform_hlds__pd_info__PredName_22;
#line 636 "pd_info.m"
    MR_Word transform_hlds__pd_info__Context_23;
#line 636 "pd_info.m"
    MR_Integer transform_hlds__pd_info__Line_24;
#line 636 "pd_info.m"
    MR_Word transform_hlds__pd_info__ModuleInfo0_25;
#line 636 "pd_info.m"
    MR_Word transform_hlds__pd_info__SymName_26;
#line 636 "pd_info.m"
    MR_Word transform_hlds__pd_info__ProcInfo_27;
#line 636 "pd_info.m"
    MR_Word transform_hlds__pd_info__TVarSet_28;
#line 636 "pd_info.m"
    MR_Word transform_hlds__pd_info__Markers_29;
#line 636 "pd_info.m"
    MR_Word transform_hlds__pd_info__ClassContext_30;
#line 636 "pd_info.m"
    MR_Word transform_hlds__pd_info__VarSet_31;
#line 636 "pd_info.m"
    MR_Word transform_hlds__pd_info__VarTypes_32;
#line 636 "pd_info.m"
    MR_Word transform_hlds__pd_info__RttiVarMaps_33;
#line 636 "pd_info.m"
    MR_Word transform_hlds__pd_info__InstVarSet_34;
#line 636 "pd_info.m"
    MR_Word transform_hlds__pd_info__VarNameRemap_35;
#line 636 "pd_info.m"
    MR_Word transform_hlds__pd_info__ModuleInfo_37;
#line 636 "pd_info.m"
    MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_40_40;
#line 638 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;
#line 169 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_47_47;
#line 169 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_48_48;
#line 169 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_49_49;
#line 169 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_50_50;
#line 169 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_51_51;
#line 169 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_52_52;
#line 169 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_53_53;
#line 169 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_54_54;
#line 169 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_55_55;
#line 169 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_56_56;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_62_62;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_63_63;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_64_64;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_65_65;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_66_66;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_68_68;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_69_69;
#line 189 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_70_70;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_71_71;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_72_72;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_67_67;
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_74_74;
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_75_75;
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_76_76;
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_77_77;
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_78_78;
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_79_79;
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_80_80;
#line 157 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_81_81;
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_82_82;
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_83_83;
#line 664 "pd_info.m"
    MR_Word transform_hlds__pd_info___ExtraArgs_36;

#line 637 "pd_info.m"
    {
#line 637 "pd_info.m"
      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_38, &transform_hlds__pd_info__InstMap_12);
    }
#line 638 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Goal_8, (MR_Integer) 0)));
#line 638 "pd_info.m"
    transform_hlds__pd_info__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Goal_8, (MR_Integer) 1)));
#line 639 "pd_info.m"
    {
#line 639 "pd_info.m"
      transform_hlds__pd_info__NonLocals_15 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__pd_info__GoalInfo_14);
    }
#line 640 "pd_info.m"
    {
#line 640 "pd_info.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__pd_info__NonLocals_15, &transform_hlds__pd_info__Args_16);
    }
#line 169 "pd_info.m"
    transform_hlds__pd_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_38, (MR_Integer) 0)));
#line 169 "pd_info.m"
    transform_hlds__pd_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_38, (MR_Integer) 1)));
#line 169 "pd_info.m"
    transform_hlds__pd_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_38, (MR_Integer) 2)));
#line 169 "pd_info.m"
    transform_hlds__pd_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_38, (MR_Integer) 3)));
#line 169 "pd_info.m"
    transform_hlds__pd_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_38, (MR_Integer) 4)));
#line 169 "pd_info.m"
    transform_hlds__pd_info__Counter0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_38, (MR_Integer) 5)));
#line 169 "pd_info.m"
    transform_hlds__pd_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_38, (MR_Integer) 6)));
#line 169 "pd_info.m"
    transform_hlds__pd_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_38, (MR_Integer) 7)));
#line 169 "pd_info.m"
    transform_hlds__pd_info__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_38, (MR_Integer) 8)));
#line 169 "pd_info.m"
    transform_hlds__pd_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_38, (MR_Integer) 9)));
#line 169 "pd_info.m"
    transform_hlds__pd_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_38, (MR_Integer) 10)));
#line 642 "pd_info.m"
    {
#line 642 "pd_info.m"
      mercury__counter__allocate_3_p_0(&transform_hlds__pd_info__Count_18, transform_hlds__pd_info__Counter0_17, &transform_hlds__pd_info__Counter_19);
    }
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_38, (MR_Integer) 0)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_38, (MR_Integer) 1)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_38, (MR_Integer) 2)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_38, (MR_Integer) 3)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_38, (MR_Integer) 4)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_38, (MR_Integer) 5)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_38, (MR_Integer) 6)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_38, (MR_Integer) 7)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_38, (MR_Integer) 8)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_38, (MR_Integer) 9)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_38, (MR_Integer) 10)));
#line 189 "pd_info.m"
    {
#line 189 "pd_info.m"
      transform_hlds__pd_info__STATE_VARIABLE_PDInfo_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_40_40, 0) = ((MR_Box) (transform_hlds__pd_info__V_62_62));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_40_40, 1) = ((MR_Box) (transform_hlds__pd_info__V_63_63));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_40_40, 2) = ((MR_Box) (transform_hlds__pd_info__V_64_64));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_40_40, 3) = ((MR_Box) (transform_hlds__pd_info__V_65_65));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_40_40, 4) = ((MR_Box) (transform_hlds__pd_info__V_66_66));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_40_40, 5) = ((MR_Box) (transform_hlds__pd_info__Counter_19));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_40_40, 6) = ((MR_Box) (transform_hlds__pd_info__V_68_68));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_40_40, 7) = ((MR_Box) (transform_hlds__pd_info__V_69_69));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_40_40, 8) = ((MR_Box) (transform_hlds__pd_info__V_70_70));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_40_40, 9) = ((MR_Box) (transform_hlds__pd_info__V_71_71));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_40_40, 10) = ((MR_Box) (transform_hlds__pd_info__V_72_72));
#line 189 "pd_info.m"
    }
#line 644 "pd_info.m"
    {
#line 644 "pd_info.m"
      transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_40_40, &transform_hlds__pd_info__PredInfo_20);
    }
#line 645 "pd_info.m"
    {
#line 645 "pd_info.m"
      transform_hlds__pd_info__PredModule_21 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__pd_info__PredInfo_20);
    }
#line 646 "pd_info.m"
    {
#line 646 "pd_info.m"
      transform_hlds__pd_info__PredName_22 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__pd_info__PredInfo_20);
    }
#line 647 "pd_info.m"
    {
#line 647 "pd_info.m"
      transform_hlds__pd_info__Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__pd_info__GoalInfo_14);
    }
#line 648 "pd_info.m"
    {
#line 648 "pd_info.m"
      mercury__term__context_line_2_p_0(transform_hlds__pd_info__Context_23, &transform_hlds__pd_info__Line_24);
    }
#line 157 "pd_info.m"
    transform_hlds__pd_info__ModuleInfo0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_40_40, (MR_Integer) 0)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_40_40, (MR_Integer) 1)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_40_40, (MR_Integer) 2)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_40_40, (MR_Integer) 3)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_40_40, (MR_Integer) 4)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_40_40, (MR_Integer) 5)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_40_40, (MR_Integer) 6)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_40_40, (MR_Integer) 7)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_40_40, (MR_Integer) 8)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_40_40, (MR_Integer) 9)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_40_40, (MR_Integer) 10)));
#line 650 "pd_info.m"
    {
#line 650 "pd_info.m"
      parse_tree__prog_util__make_pred_name_with_context_7_p_0(transform_hlds__pd_info__PredModule_21, (MR_String) "DeforestationIn", (MR_Integer) 0, transform_hlds__pd_info__PredName_22, transform_hlds__pd_info__Line_24, transform_hlds__pd_info__Count_18, &transform_hlds__pd_info__SymName_26);
    }
#line 653 "pd_info.m"
    {
#line 653 "pd_info.m"
      transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_40_40, &transform_hlds__pd_info__ProcInfo_27);
    }
#line 654 "pd_info.m"
    {
#line 654 "pd_info.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__pd_info__PredInfo_20, &transform_hlds__pd_info__TVarSet_28);
    }
#line 655 "pd_info.m"
    {
#line 655 "pd_info.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__pd_info__PredInfo_20, &transform_hlds__pd_info__Markers_29);
    }
#line 656 "pd_info.m"
    {
#line 656 "pd_info.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__pd_info__PredInfo_20, &transform_hlds__pd_info__ClassContext_30);
    }
#line 657 "pd_info.m"
    {
#line 657 "pd_info.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__pd_info__ProcInfo_27, &transform_hlds__pd_info__VarSet_31);
    }
#line 658 "pd_info.m"
    {
#line 658 "pd_info.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__pd_info__ProcInfo_27, &transform_hlds__pd_info__VarTypes_32);
    }
#line 659 "pd_info.m"
    {
#line 659 "pd_info.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__pd_info__ProcInfo_27, &transform_hlds__pd_info__RttiVarMaps_33);
    }
#line 660 "pd_info.m"
    {
#line 660 "pd_info.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__pd_info__ProcInfo_27, &transform_hlds__pd_info__InstVarSet_34);
    }
#line 661 "pd_info.m"
    {
#line 661 "pd_info.m"
      hlds__hlds_pred__proc_info_get_var_name_remap_2_p_0(transform_hlds__pd_info__ProcInfo_27, &transform_hlds__pd_info__VarNameRemap_35);
    }
#line 664 "pd_info.m"
    {
#line 664 "pd_info.m"
      hlds__hlds_pred__define_new_pred_19_p_0(transform_hlds__pd_info__Origin_7, transform_hlds__pd_info__Goal_8, transform_hlds__pd_info__CallGoal_10, transform_hlds__pd_info__Args_16, &transform_hlds__pd_info___ExtraArgs_36, transform_hlds__pd_info__InstMap_12, transform_hlds__pd_info__SymName_26, transform_hlds__pd_info__TVarSet_28, transform_hlds__pd_info__VarTypes_32, transform_hlds__pd_info__ClassContext_30, transform_hlds__pd_info__RttiVarMaps_33, transform_hlds__pd_info__VarSet_31, transform_hlds__pd_info__InstVarSet_34, transform_hlds__pd_info__Markers_29, (MR_Integer) 1, transform_hlds__pd_info__VarNameRemap_35, transform_hlds__pd_info__ModuleInfo0_25, &transform_hlds__pd_info__ModuleInfo_37, transform_hlds__pd_info__PredProcId_9);
    }
#line 668 "pd_info.m"
    {
#line 668 "pd_info.m"
      transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__pd_info__ModuleInfo_37, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_40_40, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_39);
#line 668 "pd_info.m"
      return;
    }
#line 636 "pd_info.m"
  }
#line 403 "pd_info.m"
}

#line 397 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__search_version_3_p_0(
#line 397 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_4,
#line 397 "pd_info.m"
  MR_Word transform_hlds__pd_info__Goal_5,
#line 397 "pd_info.m"
  MR_Word * transform_hlds__pd_info__MaybeVersion_6)
#line 397 "pd_info.m"
{
#line 475 "pd_info.m"
  {
#line 475 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 475 "pd_info.m"
    MR_Word transform_hlds__pd_info__CalledPreds_8;
#line 475 "pd_info.m"
    MR_Word transform_hlds__pd_info__Versions_9;
#line 475 "pd_info.m"
    MR_Word transform_hlds__pd_info__GoalVersionIndex_10;
#line 475 "pd_info.m"
    MR_Word transform_hlds__pd_info__ModuleInfo_11;
#line 475 "pd_info.m"
    MR_Word transform_hlds__pd_info__ProcInfo_12;
#line 475 "pd_info.m"
    MR_Word transform_hlds__pd_info__InstMap_13;
#line 475 "pd_info.m"
    MR_Word transform_hlds__pd_info__VarTypes_14;
#line 167 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25;
#line 167 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27;
#line 167 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28;
#line 167 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29;
#line 167 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30;
#line 167 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_31_31;
#line 167 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_32_32;
#line 167 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_33_33;
#line 492 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeVersion0_16;
#line 487 "pd_info.m"
    MR_Word transform_hlds__pd_info__TypeInfo_22_22;
#line 487 "pd_info.m"
    MR_Word transform_hlds__pd_info__VersionIds_15;
#line 487 "pd_info.m"
    MR_Box transform_hlds__pd_info__conv0_VersionIds_15;

#line 477 "pd_info.m"
    {
#line 477 "pd_info.m"
      transform_hlds__pd_debug__pd_debug_output_goal_5_p_0(transform_hlds__pd_info__PDInfo_4, (MR_String) "Searching for version:\n", transform_hlds__pd_info__Goal_5);
    }
#line 479 "pd_info.m"
    {
#line 479 "pd_info.m"
      transform_hlds__pd_util__goal_get_calls_2_p_0(transform_hlds__pd_info__Goal_5, &transform_hlds__pd_info__CalledPreds_8);
    }
#line 167 "pd_info.m"
    transform_hlds__pd_info__ModuleInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_4, (MR_Integer) 0)));
#line 167 "pd_info.m"
    transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_4, (MR_Integer) 1)));
#line 167 "pd_info.m"
    transform_hlds__pd_info__GoalVersionIndex_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_4, (MR_Integer) 2)));
#line 167 "pd_info.m"
    transform_hlds__pd_info__Versions_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_4, (MR_Integer) 3)));
#line 167 "pd_info.m"
    transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_4, (MR_Integer) 4)));
#line 167 "pd_info.m"
    transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_4, (MR_Integer) 5)));
#line 167 "pd_info.m"
    transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_4, (MR_Integer) 6)));
#line 167 "pd_info.m"
    transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_4, (MR_Integer) 7)));
#line 167 "pd_info.m"
    transform_hlds__pd_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_4, (MR_Integer) 8)));
#line 167 "pd_info.m"
    transform_hlds__pd_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_4, (MR_Integer) 9)));
#line 167 "pd_info.m"
    transform_hlds__pd_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_4, (MR_Integer) 10)));
#line 483 "pd_info.m"
    {
#line 483 "pd_info.m"
      transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__pd_info__PDInfo_4, &transform_hlds__pd_info__ProcInfo_12);
    }
#line 484 "pd_info.m"
    {
#line 484 "pd_info.m"
      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_info__PDInfo_4, &transform_hlds__pd_info__InstMap_13);
    }
#line 485 "pd_info.m"
    {
#line 485 "pd_info.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__pd_info__ProcInfo_12, &transform_hlds__pd_info__VarTypes_14);
    }
#line 6581 "transform_hlds.pd_info.c"
    transform_hlds__pd_info__TypeInfo_22_22 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[0];
#line 487 "pd_info.m"
    {
#line 487 "pd_info.m"
      transform_hlds__pd_info__succeeded = mercury__map__search_3_p_0(transform_hlds__pd_info__TypeInfo_22_22, transform_hlds__pd_info__TypeInfo_22_22, transform_hlds__pd_info__GoalVersionIndex_10, ((MR_Box) (transform_hlds__pd_info__CalledPreds_8)), &transform_hlds__pd_info__conv0_VersionIds_15);
    }
#line 487 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 487 "pd_info.m"
      {
#line 487 "pd_info.m"
        transform_hlds__pd_info__VersionIds_15 = ((MR_Word) transform_hlds__pd_info__conv0_VersionIds_15);
#line 487 "pd_info.m"
        transform_hlds__pd_info__succeeded = MR_TRUE;
#line 487 "pd_info.m"
      }
#line 487 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 488 "pd_info.m"
      {
#line 488 "pd_info.m"
        transform_hlds__pd_info__succeeded = transform_hlds__pd_info__get_matching_version_7_p_0(transform_hlds__pd_info__ModuleInfo_11, transform_hlds__pd_info__Goal_5, transform_hlds__pd_info__InstMap_13, transform_hlds__pd_info__VarTypes_14, transform_hlds__pd_info__VersionIds_15, transform_hlds__pd_info__Versions_9, &transform_hlds__pd_info__MaybeVersion0_16);
      }
#line 492 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 491 "pd_info.m"
      *transform_hlds__pd_info__MaybeVersion_6 = transform_hlds__pd_info__MaybeVersion0_16;
#line 492 "pd_info.m"
    else
#line 493 "pd_info.m"
      *transform_hlds__pd_info__MaybeVersion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 496 "pd_info.m"
    {
#line 496 "pd_info.m"
      transform_hlds__pd_debug__pd_debug_search_version_result_4_p_0(transform_hlds__pd_info__PDInfo_4, *transform_hlds__pd_info__MaybeVersion_6);
#line 496 "pd_info.m"
      return;
    }
#line 475 "pd_info.m"
  }
#line 397 "pd_info.m"
}

#line 310 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_incr_size_delta_3_p_0(
#line 310 "pd_info.m"
  MR_Integer transform_hlds__pd_info__Delta1_4,
#line 310 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
#line 310 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
#line 310 "pd_info.m"
{
#line 384 "pd_info.m"
  {
#line 384 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 384 "pd_info.m"
    MR_Integer transform_hlds__pd_info__Delta0_6;
#line 384 "pd_info.m"
    MR_Integer transform_hlds__pd_info__Delta_7;

#line 385 "pd_info.m"
    {
#line 385 "pd_info.m"
      transform_hlds__pd_info__pd_info_get_size_delta_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, &transform_hlds__pd_info__Delta0_6);
    }
#line 386 "pd_info.m"
    transform_hlds__pd_info__Delta_7 = (transform_hlds__pd_info__Delta0_6 + transform_hlds__pd_info__Delta1_4);
#line 387 "pd_info.m"
    {
#line 387 "pd_info.m"
      transform_hlds__pd_info__pd_info_set_size_delta_3_p_0(transform_hlds__pd_info__Delta_7, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9);
#line 387 "pd_info.m"
      return;
    }
#line 384 "pd_info.m"
  }
#line 310 "pd_info.m"
}

#line 308 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_incr_cost_delta_3_p_0(
#line 308 "pd_info.m"
  MR_Integer transform_hlds__pd_info__Delta1_4,
#line 308 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
#line 308 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
#line 308 "pd_info.m"
{
#line 379 "pd_info.m"
  {
#line 379 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 379 "pd_info.m"
    MR_Integer transform_hlds__pd_info__Delta0_6;
#line 379 "pd_info.m"
    MR_Integer transform_hlds__pd_info__Delta_7;

#line 380 "pd_info.m"
    {
#line 380 "pd_info.m"
      transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, &transform_hlds__pd_info__Delta0_6);
    }
#line 381 "pd_info.m"
    transform_hlds__pd_info__Delta_7 = (transform_hlds__pd_info__Delta0_6 + transform_hlds__pd_info__Delta1_4);
#line 382 "pd_info.m"
    {
#line 382 "pd_info.m"
      transform_hlds__pd_info__pd_info_set_cost_delta_3_p_0(transform_hlds__pd_info__Delta_7, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9);
#line 382 "pd_info.m"
      return;
    }
#line 379 "pd_info.m"
  }
#line 308 "pd_info.m"
}

#line 306 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_rerun_det_3_p_0(
#line 306 "pd_info.m"
  MR_Word transform_hlds__pd_info__Rerun_4,
#line 306 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
#line 306 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
#line 306 "pd_info.m"
{
#line 374 "pd_info.m"
  {
#line 374 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 374 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo0_6;
#line 374 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_7;
#line 374 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 1)));
#line 374 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 0)));
#line 374 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 2)));
#line 374 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 3)));
#line 374 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 4)));
#line 374 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 5)));
#line 374 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 6)));
#line 374 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 7)));
#line 374 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 8)));
#line 374 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 9)));
#line 374 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 10)));
#line 374 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_42_42;
#line 376 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 376 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 376 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_13_13;
#line 376 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14;
#line 376 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15;
#line 376 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16;
#line 376 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_17_17;
#line 376 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18;
#line 376 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_19_19;
#line 376 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_20_20;

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 163 "pd_info.m"
      {
#line 164 "pd_info.m"
        {
#line 164 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 164 "pd_info.m"
          return;
        }
#line 163 "pd_info.m"
      }
#line 162 "pd_info.m"
    else
#line 161 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_23, (MR_Integer) 0)));
#line 376 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 0)));
#line 376 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 1)));
#line 376 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 2)));
#line 376 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 3)));
#line 376 "pd_info.m"
    transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 4)));
#line 376 "pd_info.m"
    transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 5)));
#line 376 "pd_info.m"
    transform_hlds__pd_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 6)));
#line 376 "pd_info.m"
    transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 7)));
#line 376 "pd_info.m"
    transform_hlds__pd_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 8)));
#line 376 "pd_info.m"
    transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 9)));
#line 376 "pd_info.m"
    {
#line 376 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 376 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 0) = ((MR_Box) (transform_hlds__pd_info__V_11_11));
#line 376 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 1) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 376 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 2) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 376 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 3) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 376 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 4) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 376 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 5) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 376 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 6) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 376 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 7) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 376 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 8) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 376 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 9) = ((MR_Box) (transform_hlds__pd_info__Rerun_4));
#line 376 "pd_info.m"
    }
#line 179 "pd_info.m"
    {
#line 179 "pd_info.m"
      transform_hlds__pd_info__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__V_42_42, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
#line 179 "pd_info.m"
    }
#line 179 "pd_info.m"
    {
#line 179 "pd_info.m"
      MR_Word base;
#line 179 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 179 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9 = base;
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_27_27));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_42_42));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_28_28));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_29_29));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_30_30));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_31_31));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_32_32));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_33_33));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_34_34));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_35_35));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_36_36));
#line 179 "pd_info.m"
    }
#line 374 "pd_info.m"
  }
#line 306 "pd_info.m"
}

#line 304 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_size_delta_3_p_0(
#line 304 "pd_info.m"
  MR_Integer transform_hlds__pd_info__SizeDelta_4,
#line 304 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
#line 304 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
#line 304 "pd_info.m"
{
#line 370 "pd_info.m"
  {
#line 370 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 370 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo0_6;
#line 370 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_7;
#line 370 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 1)));
#line 370 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 0)));
#line 370 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 2)));
#line 370 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 3)));
#line 370 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 4)));
#line 370 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 5)));
#line 370 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 6)));
#line 370 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 7)));
#line 370 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 8)));
#line 370 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 9)));
#line 370 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 10)));
#line 370 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_42_42;
#line 372 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 372 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 372 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_13_13;
#line 372 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14;
#line 372 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15;
#line 372 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16;
#line 372 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_17_17;
#line 372 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18;
#line 372 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_20_20;
#line 372 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_19_19;

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 163 "pd_info.m"
      {
#line 164 "pd_info.m"
        {
#line 164 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 164 "pd_info.m"
          return;
        }
#line 163 "pd_info.m"
      }
#line 162 "pd_info.m"
    else
#line 161 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_23, (MR_Integer) 0)));
#line 372 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 0)));
#line 372 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 1)));
#line 372 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 2)));
#line 372 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 3)));
#line 372 "pd_info.m"
    transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 4)));
#line 372 "pd_info.m"
    transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 5)));
#line 372 "pd_info.m"
    transform_hlds__pd_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 6)));
#line 372 "pd_info.m"
    transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 7)));
#line 372 "pd_info.m"
    transform_hlds__pd_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 8)));
#line 372 "pd_info.m"
    transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 9)));
#line 372 "pd_info.m"
    {
#line 372 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 372 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 0) = ((MR_Box) (transform_hlds__pd_info__V_11_11));
#line 372 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 1) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 372 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 2) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 372 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 3) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 372 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 4) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 372 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 5) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 372 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 6) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 372 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 7) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 372 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 8) = ((MR_Box) (transform_hlds__pd_info__SizeDelta_4));
#line 372 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 9) = ((MR_Box) (transform_hlds__pd_info__V_20_20));
#line 372 "pd_info.m"
    }
#line 179 "pd_info.m"
    {
#line 179 "pd_info.m"
      transform_hlds__pd_info__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__V_42_42, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
#line 179 "pd_info.m"
    }
#line 179 "pd_info.m"
    {
#line 179 "pd_info.m"
      MR_Word base;
#line 179 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 179 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9 = base;
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_27_27));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_42_42));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_28_28));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_29_29));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_30_30));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_31_31));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_32_32));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_33_33));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_34_34));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_35_35));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_36_36));
#line 179 "pd_info.m"
    }
#line 370 "pd_info.m"
  }
#line 304 "pd_info.m"
}

#line 302 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_changed_3_p_0(
#line 302 "pd_info.m"
  MR_Word transform_hlds__pd_info__Changed_4,
#line 302 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
#line 302 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
#line 302 "pd_info.m"
{
#line 366 "pd_info.m"
  {
#line 366 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 366 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo0_6;
#line 366 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_7;
#line 366 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 1)));
#line 366 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 0)));
#line 366 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 2)));
#line 366 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 3)));
#line 366 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 4)));
#line 366 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 5)));
#line 366 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 6)));
#line 366 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 7)));
#line 366 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 8)));
#line 366 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 9)));
#line 366 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 10)));
#line 366 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_42_42;
#line 368 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 368 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 368 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_13_13;
#line 368 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14;
#line 368 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15;
#line 368 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16;
#line 368 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_17_17;
#line 368 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_19_19;
#line 368 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_20_20;
#line 368 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18;

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 163 "pd_info.m"
      {
#line 164 "pd_info.m"
        {
#line 164 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 164 "pd_info.m"
          return;
        }
#line 163 "pd_info.m"
      }
#line 162 "pd_info.m"
    else
#line 161 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_23, (MR_Integer) 0)));
#line 368 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 0)));
#line 368 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 1)));
#line 368 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 2)));
#line 368 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 3)));
#line 368 "pd_info.m"
    transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 4)));
#line 368 "pd_info.m"
    transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 5)));
#line 368 "pd_info.m"
    transform_hlds__pd_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 6)));
#line 368 "pd_info.m"
    transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 7)));
#line 368 "pd_info.m"
    transform_hlds__pd_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 8)));
#line 368 "pd_info.m"
    transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 9)));
#line 368 "pd_info.m"
    {
#line 368 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 368 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 0) = ((MR_Box) (transform_hlds__pd_info__V_11_11));
#line 368 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 1) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 368 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 2) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 368 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 3) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 368 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 4) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 368 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 5) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 368 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 6) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 368 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 7) = ((MR_Box) (transform_hlds__pd_info__Changed_4));
#line 368 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 8) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 368 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 9) = ((MR_Box) (transform_hlds__pd_info__V_20_20));
#line 368 "pd_info.m"
    }
#line 179 "pd_info.m"
    {
#line 179 "pd_info.m"
      transform_hlds__pd_info__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__V_42_42, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
#line 179 "pd_info.m"
    }
#line 179 "pd_info.m"
    {
#line 179 "pd_info.m"
      MR_Word base;
#line 179 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 179 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9 = base;
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_27_27));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_42_42));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_28_28));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_29_29));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_30_30));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_31_31));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_32_32));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_33_33));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_34_34));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_35_35));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_36_36));
#line 179 "pd_info.m"
    }
#line 366 "pd_info.m"
  }
#line 302 "pd_info.m"
}

#line 300 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_pred_proc_id_3_p_0(
#line 300 "pd_info.m"
  MR_Word transform_hlds__pd_info__PredProcId_4,
#line 300 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
#line 300 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
#line 300 "pd_info.m"
{
#line 362 "pd_info.m"
  {
#line 362 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 362 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo0_6;
#line 362 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_7;
#line 362 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 1)));
#line 362 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 0)));
#line 362 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 2)));
#line 362 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 3)));
#line 362 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 4)));
#line 362 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 5)));
#line 362 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 6)));
#line 362 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 7)));
#line 362 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 8)));
#line 362 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 9)));
#line 362 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 10)));
#line 362 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_42_42;
#line 364 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 364 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 364 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_13_13;
#line 364 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14;
#line 364 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15;
#line 364 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16;
#line 364 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18;
#line 364 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_19_19;
#line 364 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_20_20;
#line 364 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_17_17;

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 163 "pd_info.m"
      {
#line 164 "pd_info.m"
        {
#line 164 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 164 "pd_info.m"
          return;
        }
#line 163 "pd_info.m"
      }
#line 162 "pd_info.m"
    else
#line 161 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_23, (MR_Integer) 0)));
#line 364 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 0)));
#line 364 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 1)));
#line 364 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 2)));
#line 364 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 3)));
#line 364 "pd_info.m"
    transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 4)));
#line 364 "pd_info.m"
    transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 5)));
#line 364 "pd_info.m"
    transform_hlds__pd_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 6)));
#line 364 "pd_info.m"
    transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 7)));
#line 364 "pd_info.m"
    transform_hlds__pd_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 8)));
#line 364 "pd_info.m"
    transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 9)));
#line 364 "pd_info.m"
    {
#line 364 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 364 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 0) = ((MR_Box) (transform_hlds__pd_info__V_11_11));
#line 364 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 1) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 364 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 2) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 364 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 3) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 364 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 4) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 364 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 5) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 364 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 6) = ((MR_Box) (transform_hlds__pd_info__PredProcId_4));
#line 364 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 7) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 364 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 8) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 364 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 9) = ((MR_Box) (transform_hlds__pd_info__V_20_20));
#line 364 "pd_info.m"
    }
#line 179 "pd_info.m"
    {
#line 179 "pd_info.m"
      transform_hlds__pd_info__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__V_42_42, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
#line 179 "pd_info.m"
    }
#line 179 "pd_info.m"
    {
#line 179 "pd_info.m"
      MR_Word base;
#line 179 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 179 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9 = base;
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_27_27));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_42_42));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_28_28));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_29_29));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_30_30));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_31_31));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_32_32));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_33_33));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_34_34));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_35_35));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_36_36));
#line 179 "pd_info.m"
    }
#line 362 "pd_info.m"
  }
#line 300 "pd_info.m"
}

#line 298 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_parents_3_p_0(
#line 298 "pd_info.m"
  MR_Word transform_hlds__pd_info__Parents_4,
#line 298 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
#line 298 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
#line 298 "pd_info.m"
{
#line 358 "pd_info.m"
  {
#line 358 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 358 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo0_6;
#line 358 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_7;
#line 358 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 1)));
#line 358 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 0)));
#line 358 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 2)));
#line 358 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 3)));
#line 358 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 4)));
#line 358 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 5)));
#line 358 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 6)));
#line 358 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 7)));
#line 358 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 8)));
#line 358 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 9)));
#line 358 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 10)));
#line 358 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_42_42;
#line 360 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 360 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 360 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_13_13;
#line 360 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14;
#line 360 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15;
#line 360 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_17_17;
#line 360 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18;
#line 360 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_19_19;
#line 360 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_20_20;
#line 360 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16;

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 163 "pd_info.m"
      {
#line 164 "pd_info.m"
        {
#line 164 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 164 "pd_info.m"
          return;
        }
#line 163 "pd_info.m"
      }
#line 162 "pd_info.m"
    else
#line 161 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_23, (MR_Integer) 0)));
#line 360 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 0)));
#line 360 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 1)));
#line 360 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 2)));
#line 360 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 3)));
#line 360 "pd_info.m"
    transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 4)));
#line 360 "pd_info.m"
    transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 5)));
#line 360 "pd_info.m"
    transform_hlds__pd_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 6)));
#line 360 "pd_info.m"
    transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 7)));
#line 360 "pd_info.m"
    transform_hlds__pd_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 8)));
#line 360 "pd_info.m"
    transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 9)));
#line 360 "pd_info.m"
    {
#line 360 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 360 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 0) = ((MR_Box) (transform_hlds__pd_info__V_11_11));
#line 360 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 1) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 360 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 2) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 360 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 3) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 360 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 4) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 360 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 5) = ((MR_Box) (transform_hlds__pd_info__Parents_4));
#line 360 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 6) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 360 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 7) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 360 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 8) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 360 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 9) = ((MR_Box) (transform_hlds__pd_info__V_20_20));
#line 360 "pd_info.m"
    }
#line 179 "pd_info.m"
    {
#line 179 "pd_info.m"
      transform_hlds__pd_info__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__V_42_42, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
#line 179 "pd_info.m"
    }
#line 179 "pd_info.m"
    {
#line 179 "pd_info.m"
      MR_Word base;
#line 179 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 179 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9 = base;
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_27_27));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_42_42));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_28_28));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_29_29));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_30_30));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_31_31));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_32_32));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_33_33));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_34_34));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_35_35));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_36_36));
#line 179 "pd_info.m"
    }
#line 358 "pd_info.m"
  }
#line 298 "pd_info.m"
}

#line 296 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_pred_info_3_p_0(
#line 296 "pd_info.m"
  MR_Word transform_hlds__pd_info__PredInfo_4,
#line 296 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
#line 296 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
#line 296 "pd_info.m"
{
#line 354 "pd_info.m"
  {
#line 354 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 354 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo0_6;
#line 354 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_7;
#line 354 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 1)));
#line 354 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 0)));
#line 354 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 2)));
#line 354 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 3)));
#line 354 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 4)));
#line 354 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 5)));
#line 354 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 6)));
#line 354 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 7)));
#line 354 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 8)));
#line 354 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 9)));
#line 354 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 10)));
#line 354 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_42_42;
#line 356 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 356 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 356 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_13_13;
#line 356 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14;
#line 356 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16;
#line 356 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_17_17;
#line 356 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18;
#line 356 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_19_19;
#line 356 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_20_20;
#line 356 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15;

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 163 "pd_info.m"
      {
#line 164 "pd_info.m"
        {
#line 164 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 164 "pd_info.m"
          return;
        }
#line 163 "pd_info.m"
      }
#line 162 "pd_info.m"
    else
#line 161 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_23, (MR_Integer) 0)));
#line 356 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 0)));
#line 356 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 1)));
#line 356 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 2)));
#line 356 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 3)));
#line 356 "pd_info.m"
    transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 4)));
#line 356 "pd_info.m"
    transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 5)));
#line 356 "pd_info.m"
    transform_hlds__pd_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 6)));
#line 356 "pd_info.m"
    transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 7)));
#line 356 "pd_info.m"
    transform_hlds__pd_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 8)));
#line 356 "pd_info.m"
    transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 9)));
#line 356 "pd_info.m"
    {
#line 356 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 356 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 0) = ((MR_Box) (transform_hlds__pd_info__V_11_11));
#line 356 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 1) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 356 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 2) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 356 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 3) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 356 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 4) = ((MR_Box) (transform_hlds__pd_info__PredInfo_4));
#line 356 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 5) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 356 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 6) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 356 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 7) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 356 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 8) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 356 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 9) = ((MR_Box) (transform_hlds__pd_info__V_20_20));
#line 356 "pd_info.m"
    }
#line 179 "pd_info.m"
    {
#line 179 "pd_info.m"
      transform_hlds__pd_info__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__V_42_42, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
#line 179 "pd_info.m"
    }
#line 179 "pd_info.m"
    {
#line 179 "pd_info.m"
      MR_Word base;
#line 179 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 179 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9 = base;
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_27_27));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_42_42));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_28_28));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_29_29));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_30_30));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_31_31));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_32_32));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_33_33));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_34_34));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_35_35));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_36_36));
#line 179 "pd_info.m"
    }
#line 354 "pd_info.m"
  }
#line 296 "pd_info.m"
}

#line 294 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_local_term_info_3_p_0(
#line 294 "pd_info.m"
  MR_Word transform_hlds__pd_info__TermInfo_4,
#line 294 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
#line 294 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
#line 294 "pd_info.m"
{
#line 350 "pd_info.m"
  {
#line 350 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 350 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo0_6;
#line 350 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_7;
#line 350 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 1)));
#line 350 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 0)));
#line 350 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 2)));
#line 350 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 3)));
#line 350 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 4)));
#line 350 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 5)));
#line 350 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 6)));
#line 350 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 7)));
#line 350 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 8)));
#line 350 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 9)));
#line 350 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 10)));
#line 350 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_42_42;
#line 352 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 352 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 352 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_13_13;
#line 352 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15;
#line 352 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16;
#line 352 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_17_17;
#line 352 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18;
#line 352 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_19_19;
#line 352 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_20_20;
#line 352 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14;

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 163 "pd_info.m"
      {
#line 164 "pd_info.m"
        {
#line 164 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 164 "pd_info.m"
          return;
        }
#line 163 "pd_info.m"
      }
#line 162 "pd_info.m"
    else
#line 161 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_23, (MR_Integer) 0)));
#line 352 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 0)));
#line 352 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 1)));
#line 352 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 2)));
#line 352 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 3)));
#line 352 "pd_info.m"
    transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 4)));
#line 352 "pd_info.m"
    transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 5)));
#line 352 "pd_info.m"
    transform_hlds__pd_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 6)));
#line 352 "pd_info.m"
    transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 7)));
#line 352 "pd_info.m"
    transform_hlds__pd_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 8)));
#line 352 "pd_info.m"
    transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 9)));
#line 352 "pd_info.m"
    {
#line 352 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 352 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 0) = ((MR_Box) (transform_hlds__pd_info__V_11_11));
#line 352 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 1) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 352 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 2) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 352 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 3) = ((MR_Box) (transform_hlds__pd_info__TermInfo_4));
#line 352 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 4) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 352 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 5) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 352 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 6) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 352 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 7) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 352 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 8) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 352 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 9) = ((MR_Box) (transform_hlds__pd_info__V_20_20));
#line 352 "pd_info.m"
    }
#line 179 "pd_info.m"
    {
#line 179 "pd_info.m"
      transform_hlds__pd_info__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__V_42_42, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
#line 179 "pd_info.m"
    }
#line 179 "pd_info.m"
    {
#line 179 "pd_info.m"
      MR_Word base;
#line 179 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 179 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9 = base;
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_27_27));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_42_42));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_28_28));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_29_29));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_30_30));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_31_31));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_32_32));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_33_33));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_34_34));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_35_35));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_36_36));
#line 179 "pd_info.m"
    }
#line 350 "pd_info.m"
  }
#line 294 "pd_info.m"
}

#line 292 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_cost_delta_3_p_0(
#line 292 "pd_info.m"
  MR_Integer transform_hlds__pd_info__CostDelta_4,
#line 292 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
#line 292 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
#line 292 "pd_info.m"
{
#line 346 "pd_info.m"
  {
#line 346 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 346 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo0_6;
#line 346 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_7;
#line 346 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 1)));
#line 346 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 0)));
#line 346 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 2)));
#line 346 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 3)));
#line 346 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 4)));
#line 346 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 5)));
#line 346 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 6)));
#line 346 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 7)));
#line 346 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 8)));
#line 346 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 9)));
#line 346 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 10)));
#line 346 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_42_42;
#line 348 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 348 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 348 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14;
#line 348 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15;
#line 348 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16;
#line 348 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_17_17;
#line 348 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18;
#line 348 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_19_19;
#line 348 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_20_20;
#line 348 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_13_13;

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 163 "pd_info.m"
      {
#line 164 "pd_info.m"
        {
#line 164 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 164 "pd_info.m"
          return;
        }
#line 163 "pd_info.m"
      }
#line 162 "pd_info.m"
    else
#line 161 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_23, (MR_Integer) 0)));
#line 348 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 0)));
#line 348 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 1)));
#line 348 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 2)));
#line 348 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 3)));
#line 348 "pd_info.m"
    transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 4)));
#line 348 "pd_info.m"
    transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 5)));
#line 348 "pd_info.m"
    transform_hlds__pd_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 6)));
#line 348 "pd_info.m"
    transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 7)));
#line 348 "pd_info.m"
    transform_hlds__pd_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 8)));
#line 348 "pd_info.m"
    transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 9)));
#line 348 "pd_info.m"
    {
#line 348 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 348 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 0) = ((MR_Box) (transform_hlds__pd_info__V_11_11));
#line 348 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 1) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 348 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 2) = ((MR_Box) (transform_hlds__pd_info__CostDelta_4));
#line 348 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 3) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 348 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 4) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 348 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 5) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 348 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 6) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 348 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 7) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 348 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 8) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 348 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 9) = ((MR_Box) (transform_hlds__pd_info__V_20_20));
#line 348 "pd_info.m"
    }
#line 179 "pd_info.m"
    {
#line 179 "pd_info.m"
      transform_hlds__pd_info__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__V_42_42, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
#line 179 "pd_info.m"
    }
#line 179 "pd_info.m"
    {
#line 179 "pd_info.m"
      MR_Word base;
#line 179 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 179 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9 = base;
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_27_27));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_42_42));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_28_28));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_29_29));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_30_30));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_31_31));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_32_32));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_33_33));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_34_34));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_35_35));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_36_36));
#line 179 "pd_info.m"
    }
#line 346 "pd_info.m"
  }
#line 292 "pd_info.m"
}

#line 290 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_instmap_3_p_0(
#line 290 "pd_info.m"
  MR_Word transform_hlds__pd_info__InstMap_4,
#line 290 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
#line 290 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
#line 290 "pd_info.m"
{
#line 342 "pd_info.m"
  {
#line 342 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 342 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo0_6;
#line 342 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_7;
#line 342 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 1)));
#line 342 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 0)));
#line 342 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 2)));
#line 342 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 3)));
#line 342 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 4)));
#line 342 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 5)));
#line 342 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 6)));
#line 342 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 7)));
#line 342 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 8)));
#line 342 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 9)));
#line 342 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 10)));
#line 342 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_42_42;
#line 344 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 344 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_13_13;
#line 344 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14;
#line 344 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15;
#line 344 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16;
#line 344 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_17_17;
#line 344 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18;
#line 344 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_19_19;
#line 344 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_20_20;
#line 344 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 163 "pd_info.m"
      {
#line 164 "pd_info.m"
        {
#line 164 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 164 "pd_info.m"
          return;
        }
#line 163 "pd_info.m"
      }
#line 162 "pd_info.m"
    else
#line 161 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_23, (MR_Integer) 0)));
#line 344 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 0)));
#line 344 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 1)));
#line 344 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 2)));
#line 344 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 3)));
#line 344 "pd_info.m"
    transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 4)));
#line 344 "pd_info.m"
    transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 5)));
#line 344 "pd_info.m"
    transform_hlds__pd_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 6)));
#line 344 "pd_info.m"
    transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 7)));
#line 344 "pd_info.m"
    transform_hlds__pd_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 8)));
#line 344 "pd_info.m"
    transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 9)));
#line 344 "pd_info.m"
    {
#line 344 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 344 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 0) = ((MR_Box) (transform_hlds__pd_info__V_11_11));
#line 344 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 1) = ((MR_Box) (transform_hlds__pd_info__InstMap_4));
#line 344 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 2) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 344 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 3) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 344 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 4) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 344 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 5) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 344 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 6) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 344 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 7) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 344 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 8) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 344 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 9) = ((MR_Box) (transform_hlds__pd_info__V_20_20));
#line 344 "pd_info.m"
    }
#line 179 "pd_info.m"
    {
#line 179 "pd_info.m"
      transform_hlds__pd_info__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__V_42_42, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
#line 179 "pd_info.m"
    }
#line 179 "pd_info.m"
    {
#line 179 "pd_info.m"
      MR_Word base;
#line 179 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 179 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9 = base;
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_27_27));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_42_42));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_28_28));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_29_29));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_30_30));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_31_31));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_32_32));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_33_33));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_34_34));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_35_35));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_36_36));
#line 179 "pd_info.m"
    }
#line 342 "pd_info.m"
  }
#line 290 "pd_info.m"
}

#line 288 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_proc_info_3_p_0(
#line 288 "pd_info.m"
  MR_Word transform_hlds__pd_info__ProcInfo_4,
#line 288 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
#line 288 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
#line 288 "pd_info.m"
{
#line 338 "pd_info.m"
  {
#line 338 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 338 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo0_6;
#line 338 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_7;
#line 338 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 1)));
#line 338 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 0)));
#line 338 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 2)));
#line 338 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 3)));
#line 338 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 4)));
#line 338 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 5)));
#line 338 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 6)));
#line 338 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 7)));
#line 338 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 8)));
#line 338 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 9)));
#line 338 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 10)));
#line 338 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_42_42;
#line 340 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 340 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_13_13;
#line 340 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14;
#line 340 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15;
#line 340 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16;
#line 340 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_17_17;
#line 340 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18;
#line 340 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_19_19;
#line 340 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_20_20;
#line 340 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 163 "pd_info.m"
      {
#line 164 "pd_info.m"
        {
#line 164 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 164 "pd_info.m"
          return;
        }
#line 163 "pd_info.m"
      }
#line 162 "pd_info.m"
    else
#line 161 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_23, (MR_Integer) 0)));
#line 340 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 0)));
#line 340 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 1)));
#line 340 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 2)));
#line 340 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 3)));
#line 340 "pd_info.m"
    transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 4)));
#line 340 "pd_info.m"
    transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 5)));
#line 340 "pd_info.m"
    transform_hlds__pd_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 6)));
#line 340 "pd_info.m"
    transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 7)));
#line 340 "pd_info.m"
    transform_hlds__pd_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 8)));
#line 340 "pd_info.m"
    transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 9)));
#line 340 "pd_info.m"
    {
#line 340 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 340 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 0) = ((MR_Box) (transform_hlds__pd_info__ProcInfo_4));
#line 340 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 1) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 340 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 2) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 340 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 3) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 340 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 4) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 340 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 5) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 340 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 6) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 340 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 7) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 340 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 8) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 340 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 9) = ((MR_Box) (transform_hlds__pd_info__V_20_20));
#line 340 "pd_info.m"
    }
#line 179 "pd_info.m"
    {
#line 179 "pd_info.m"
      transform_hlds__pd_info__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__V_42_42, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
#line 179 "pd_info.m"
    }
#line 179 "pd_info.m"
    {
#line 179 "pd_info.m"
      MR_Word base;
#line 179 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 179 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9 = base;
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_27_27));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_42_42));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_28_28));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_29_29));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_30_30));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_31_31));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_32_32));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_33_33));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_34_34));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_35_35));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_36_36));
#line 179 "pd_info.m"
    }
#line 338 "pd_info.m"
  }
#line 288 "pd_info.m"
}

#line 286 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_rerun_det_2_p_0(
#line 286 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 286 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
#line 286 "pd_info.m"
{
#line 335 "pd_info.m"
  {
#line 335 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 335 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
#line 335 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 159 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 335 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5;
#line 335 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6;
#line 335 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_7_7;
#line 335 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_8_8;
#line 335 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9;
#line 335 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10;
#line 335 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 335 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 335 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_13_13;

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 163 "pd_info.m"
      {
#line 164 "pd_info.m"
        {
#line 164 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 164 "pd_info.m"
          return;
        }
#line 163 "pd_info.m"
      }
#line 162 "pd_info.m"
    else
#line 161 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_16, (MR_Integer) 0)));
#line 335 "pd_info.m"
    transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
#line 335 "pd_info.m"
    transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
#line 335 "pd_info.m"
    transform_hlds__pd_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
#line 335 "pd_info.m"
    transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
#line 335 "pd_info.m"
    transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
#line 335 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
#line 335 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
#line 335 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
#line 335 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
#line 335 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
#line 335 "pd_info.m"
  }
#line 286 "pd_info.m"
}

#line 285 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_size_delta_2_p_0(
#line 285 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 285 "pd_info.m"
  MR_Integer * transform_hlds__pd_info__HeadVar__2_2)
#line 285 "pd_info.m"
{
#line 333 "pd_info.m"
  {
#line 333 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 333 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
#line 333 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 159 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 333 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5;
#line 333 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6;
#line 333 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_7_7;
#line 333 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_8_8;
#line 333 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9;
#line 333 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10;
#line 333 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 333 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 333 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 163 "pd_info.m"
      {
#line 164 "pd_info.m"
        {
#line 164 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 164 "pd_info.m"
          return;
        }
#line 163 "pd_info.m"
      }
#line 162 "pd_info.m"
    else
#line 161 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_16, (MR_Integer) 0)));
#line 333 "pd_info.m"
    transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
#line 333 "pd_info.m"
    transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
#line 333 "pd_info.m"
    transform_hlds__pd_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
#line 333 "pd_info.m"
    transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
#line 333 "pd_info.m"
    transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
#line 333 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
#line 333 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
#line 333 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
#line 333 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
#line 333 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
#line 333 "pd_info.m"
  }
#line 285 "pd_info.m"
}

#line 284 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_changed_2_p_0(
#line 284 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 284 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
#line 284 "pd_info.m"
{
#line 331 "pd_info.m"
  {
#line 331 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 331 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
#line 331 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 159 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 331 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5;
#line 331 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6;
#line 331 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_7_7;
#line 331 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_8_8;
#line 331 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9;
#line 331 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10;
#line 331 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 331 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_12_12;
#line 331 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 163 "pd_info.m"
      {
#line 164 "pd_info.m"
        {
#line 164 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 164 "pd_info.m"
          return;
        }
#line 163 "pd_info.m"
      }
#line 162 "pd_info.m"
    else
#line 161 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_16, (MR_Integer) 0)));
#line 331 "pd_info.m"
    transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
#line 331 "pd_info.m"
    transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
#line 331 "pd_info.m"
    transform_hlds__pd_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
#line 331 "pd_info.m"
    transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
#line 331 "pd_info.m"
    transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
#line 331 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
#line 331 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
#line 331 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
#line 331 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
#line 331 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
#line 331 "pd_info.m"
  }
#line 284 "pd_info.m"
}

#line 283 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_pred_proc_id_2_p_0(
#line 283 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 283 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
#line 283 "pd_info.m"
{
#line 329 "pd_info.m"
  {
#line 329 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 329 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
#line 329 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 159 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 329 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5;
#line 329 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6;
#line 329 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_7_7;
#line 329 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_8_8;
#line 329 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9;
#line 329 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10;
#line 329 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 329 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_12_12;
#line 329 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 163 "pd_info.m"
      {
#line 164 "pd_info.m"
        {
#line 164 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 164 "pd_info.m"
          return;
        }
#line 163 "pd_info.m"
      }
#line 162 "pd_info.m"
    else
#line 161 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_16, (MR_Integer) 0)));
#line 329 "pd_info.m"
    transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
#line 329 "pd_info.m"
    transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
#line 329 "pd_info.m"
    transform_hlds__pd_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
#line 329 "pd_info.m"
    transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
#line 329 "pd_info.m"
    transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
#line 329 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
#line 329 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
#line 329 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
#line 329 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
#line 329 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
#line 329 "pd_info.m"
  }
#line 283 "pd_info.m"
}

#line 282 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_parents_2_p_0(
#line 282 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 282 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
#line 282 "pd_info.m"
{
#line 327 "pd_info.m"
  {
#line 327 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 327 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
#line 327 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 159 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 327 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5;
#line 327 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6;
#line 327 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_7_7;
#line 327 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_8_8;
#line 327 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9;
#line 327 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10;
#line 327 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 327 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_12_12;
#line 327 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 163 "pd_info.m"
      {
#line 164 "pd_info.m"
        {
#line 164 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 164 "pd_info.m"
          return;
        }
#line 163 "pd_info.m"
      }
#line 162 "pd_info.m"
    else
#line 161 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_16, (MR_Integer) 0)));
#line 327 "pd_info.m"
    transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
#line 327 "pd_info.m"
    transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
#line 327 "pd_info.m"
    transform_hlds__pd_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
#line 327 "pd_info.m"
    transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
#line 327 "pd_info.m"
    transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
#line 327 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
#line 327 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
#line 327 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
#line 327 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
#line 327 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
#line 327 "pd_info.m"
  }
#line 282 "pd_info.m"
}

#line 281 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(
#line 281 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 281 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
#line 281 "pd_info.m"
{
#line 325 "pd_info.m"
  {
#line 325 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 325 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
#line 325 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 159 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 325 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5;
#line 325 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6;
#line 325 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_7_7;
#line 325 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_8_8;
#line 325 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9;
#line 325 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10;
#line 325 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 325 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_12_12;
#line 325 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 163 "pd_info.m"
      {
#line 164 "pd_info.m"
        {
#line 164 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 164 "pd_info.m"
          return;
        }
#line 163 "pd_info.m"
      }
#line 162 "pd_info.m"
    else
#line 161 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_16, (MR_Integer) 0)));
#line 325 "pd_info.m"
    transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
#line 325 "pd_info.m"
    transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
#line 325 "pd_info.m"
    transform_hlds__pd_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
#line 325 "pd_info.m"
    transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
#line 325 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
#line 325 "pd_info.m"
    transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
#line 325 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
#line 325 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
#line 325 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
#line 325 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
#line 325 "pd_info.m"
  }
#line 281 "pd_info.m"
}

#line 280 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_local_term_info_2_p_0(
#line 280 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 280 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
#line 280 "pd_info.m"
{
#line 323 "pd_info.m"
  {
#line 323 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 323 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
#line 323 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 159 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 323 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5;
#line 323 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6;
#line 323 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_7_7;
#line 323 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_8_8;
#line 323 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9;
#line 323 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10;
#line 323 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 323 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_12_12;
#line 323 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 163 "pd_info.m"
      {
#line 164 "pd_info.m"
        {
#line 164 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 164 "pd_info.m"
          return;
        }
#line 163 "pd_info.m"
      }
#line 162 "pd_info.m"
    else
#line 161 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_16, (MR_Integer) 0)));
#line 323 "pd_info.m"
    transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
#line 323 "pd_info.m"
    transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
#line 323 "pd_info.m"
    transform_hlds__pd_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
#line 323 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
#line 323 "pd_info.m"
    transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
#line 323 "pd_info.m"
    transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
#line 323 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
#line 323 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
#line 323 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
#line 323 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
#line 323 "pd_info.m"
  }
#line 280 "pd_info.m"
}

#line 279 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(
#line 279 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 279 "pd_info.m"
  MR_Integer * transform_hlds__pd_info__HeadVar__2_2)
#line 279 "pd_info.m"
{
#line 321 "pd_info.m"
  {
#line 321 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 321 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
#line 321 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 159 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 321 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5;
#line 321 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6;
#line 321 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_7_7;
#line 321 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_8_8;
#line 321 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9;
#line 321 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10;
#line 321 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 321 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_12_12;
#line 321 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 163 "pd_info.m"
      {
#line 164 "pd_info.m"
        {
#line 164 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 164 "pd_info.m"
          return;
        }
#line 163 "pd_info.m"
      }
#line 162 "pd_info.m"
    else
#line 161 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_16, (MR_Integer) 0)));
#line 321 "pd_info.m"
    transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
#line 321 "pd_info.m"
    transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
#line 321 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
#line 321 "pd_info.m"
    transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
#line 321 "pd_info.m"
    transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
#line 321 "pd_info.m"
    transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
#line 321 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
#line 321 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
#line 321 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
#line 321 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
#line 321 "pd_info.m"
  }
#line 279 "pd_info.m"
}

#line 278 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_instmap_2_p_0(
#line 278 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 278 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
#line 278 "pd_info.m"
{
#line 319 "pd_info.m"
  {
#line 319 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 319 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
#line 319 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 159 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 319 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5;
#line 319 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_6_6;
#line 319 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_7_7;
#line 319 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_8_8;
#line 319 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9;
#line 319 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10;
#line 319 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 319 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_12_12;
#line 319 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 163 "pd_info.m"
      {
#line 164 "pd_info.m"
        {
#line 164 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 164 "pd_info.m"
          return;
        }
#line 163 "pd_info.m"
      }
#line 162 "pd_info.m"
    else
#line 161 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_16, (MR_Integer) 0)));
#line 319 "pd_info.m"
    transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
#line 319 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
#line 319 "pd_info.m"
    transform_hlds__pd_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
#line 319 "pd_info.m"
    transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
#line 319 "pd_info.m"
    transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
#line 319 "pd_info.m"
    transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
#line 319 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
#line 319 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
#line 319 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
#line 319 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
#line 319 "pd_info.m"
  }
#line 278 "pd_info.m"
}

#line 277 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(
#line 277 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 277 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
#line 277 "pd_info.m"
{
#line 317 "pd_info.m"
  {
#line 317 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 317 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
#line 317 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 159 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 317 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5;
#line 317 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_6_6;
#line 317 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_7_7;
#line 317 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_8_8;
#line 317 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9;
#line 317 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10;
#line 317 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 317 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_12_12;
#line 317 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 163 "pd_info.m"
      {
#line 164 "pd_info.m"
        {
#line 164 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 164 "pd_info.m"
          return;
        }
#line 163 "pd_info.m"
      }
#line 162 "pd_info.m"
    else
#line 161 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_16, (MR_Integer) 0)));
#line 317 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
#line 317 "pd_info.m"
    transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
#line 317 "pd_info.m"
    transform_hlds__pd_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
#line 317 "pd_info.m"
    transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
#line 317 "pd_info.m"
    transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
#line 317 "pd_info.m"
    transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
#line 317 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
#line 317 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
#line 317 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
#line 317 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
#line 317 "pd_info.m"
  }
#line 277 "pd_info.m"
}

#line 112 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_unset_unfold_info_2_p_0(
#line 112 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_4,
#line 112 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_5)
#line 112 "pd_info.m"
{
#line 180 "pd_info.m"
  {
#line 180 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 181 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_4, (MR_Integer) 0)));
#line 181 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_4, (MR_Integer) 2)));
#line 181 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_4, (MR_Integer) 3)));
#line 181 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_4, (MR_Integer) 4)));
#line 181 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_4, (MR_Integer) 5)));
#line 181 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_4, (MR_Integer) 6)));
#line 181 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_4, (MR_Integer) 7)));
#line 181 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_4, (MR_Integer) 8)));
#line 181 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_4, (MR_Integer) 9)));
#line 181 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_4, (MR_Integer) 10)));
#line 181 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_4, (MR_Integer) 1)));

#line 181 "pd_info.m"
    {
#line 181 "pd_info.m"
      MR_Word base;
#line 181 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 181 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_5 = base;
#line 181 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_8_8));
#line 181 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 181 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_10_10));
#line 181 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_11_11));
#line 181 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 181 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 181 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 181 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 181 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 181 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 181 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 181 "pd_info.m"
    }
#line 180 "pd_info.m"
  }
#line 112 "pd_info.m"
}

#line 109 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_bind_var_to_functors_5_p_0(
#line 109 "pd_info.m"
  MR_Word transform_hlds__pd_info__Var_6,
#line 109 "pd_info.m"
  MR_Word transform_hlds__pd_info__MainConsId_7,
#line 109 "pd_info.m"
  MR_Word transform_hlds__pd_info__OtherConsIds_8,
#line 109 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17,
#line 109 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18)
#line 109 "pd_info.m"
{
#line 207 "pd_info.m"
  {
#line 207 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 207 "pd_info.m"
    MR_Word transform_hlds__pd_info__InstMap0_10;
#line 207 "pd_info.m"
    MR_Word transform_hlds__pd_info__ModuleInfo0_11;
#line 207 "pd_info.m"
    MR_Word transform_hlds__pd_info__ProcInfo_12;
#line 207 "pd_info.m"
    MR_Word transform_hlds__pd_info__VarTypes_13;
#line 207 "pd_info.m"
    MR_Word transform_hlds__pd_info__Type_14;
#line 207 "pd_info.m"
    MR_Word transform_hlds__pd_info__InstMap_15;
#line 207 "pd_info.m"
    MR_Word transform_hlds__pd_info__ModuleInfo_16;
#line 207 "pd_info.m"
    MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19;
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22;
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23;
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_24_24;
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25;
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26;
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27;
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28;
#line 157 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_29_29;
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30;
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_31_31;
#line 177 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_38_38;
#line 177 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_39_39;
#line 177 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_40_40;
#line 177 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_41_41;
#line 177 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_42_42;
#line 177 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_43_43;
#line 177 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_44_44;
#line 177 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_45_45;
#line 177 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_46_46;
#line 177 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_47_47;
#line 177 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_37_37;

#line 208 "pd_info.m"
    {
#line 208 "pd_info.m"
      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, &transform_hlds__pd_info__InstMap0_10);
    }
#line 157 "pd_info.m"
    transform_hlds__pd_info__ModuleInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, (MR_Integer) 0)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, (MR_Integer) 1)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, (MR_Integer) 2)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, (MR_Integer) 3)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, (MR_Integer) 4)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, (MR_Integer) 5)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, (MR_Integer) 6)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, (MR_Integer) 7)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, (MR_Integer) 8)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, (MR_Integer) 9)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, (MR_Integer) 10)));
#line 210 "pd_info.m"
    {
#line 210 "pd_info.m"
      transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, &transform_hlds__pd_info__ProcInfo_12);
    }
#line 211 "pd_info.m"
    {
#line 211 "pd_info.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__pd_info__ProcInfo_12, &transform_hlds__pd_info__VarTypes_13);
    }
#line 212 "pd_info.m"
    {
#line 212 "pd_info.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__pd_info__VarTypes_13, transform_hlds__pd_info__Var_6, &transform_hlds__pd_info__Type_14);
    }
#line 213 "pd_info.m"
    {
#line 213 "pd_info.m"
      hlds__instmap__bind_var_to_functors_8_p_0(transform_hlds__pd_info__Var_6, transform_hlds__pd_info__Type_14, transform_hlds__pd_info__MainConsId_7, transform_hlds__pd_info__OtherConsIds_8, transform_hlds__pd_info__InstMap0_10, &transform_hlds__pd_info__InstMap_15, transform_hlds__pd_info__ModuleInfo0_11, &transform_hlds__pd_info__ModuleInfo_16);
    }
#line 215 "pd_info.m"
    {
#line 215 "pd_info.m"
      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__pd_info__InstMap_15, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, &transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19);
    }
#line 177 "pd_info.m"
    transform_hlds__pd_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19, (MR_Integer) 0)));
#line 177 "pd_info.m"
    transform_hlds__pd_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19, (MR_Integer) 1)));
#line 177 "pd_info.m"
    transform_hlds__pd_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19, (MR_Integer) 2)));
#line 177 "pd_info.m"
    transform_hlds__pd_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19, (MR_Integer) 3)));
#line 177 "pd_info.m"
    transform_hlds__pd_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19, (MR_Integer) 4)));
#line 177 "pd_info.m"
    transform_hlds__pd_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19, (MR_Integer) 5)));
#line 177 "pd_info.m"
    transform_hlds__pd_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19, (MR_Integer) 6)));
#line 177 "pd_info.m"
    transform_hlds__pd_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19, (MR_Integer) 7)));
#line 177 "pd_info.m"
    transform_hlds__pd_info__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19, (MR_Integer) 8)));
#line 177 "pd_info.m"
    transform_hlds__pd_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19, (MR_Integer) 9)));
#line 177 "pd_info.m"
    transform_hlds__pd_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19, (MR_Integer) 10)));
#line 177 "pd_info.m"
    {
#line 177 "pd_info.m"
      MR_Word base;
#line 177 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 177 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18 = base;
#line 177 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__ModuleInfo_16));
#line 177 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_38_38));
#line 177 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_39_39));
#line 177 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_40_40));
#line 177 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_41_41));
#line 177 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_42_42));
#line 177 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_43_43));
#line 177 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_44_44));
#line 177 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_45_45));
#line 177 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_46_46));
#line 177 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_47_47));
#line 177 "pd_info.m"
    }
#line 207 "pd_info.m"
  }
#line 109 "pd_info.m"
}

#line 107 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_update_goal_3_p_0(
#line 107 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__1_1,
#line 107 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_10,
#line 107 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_11)
#line 107 "pd_info.m"
{
#line 201 "pd_info.m"
  {
#line 201 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 201 "pd_info.m"
    MR_Word transform_hlds__pd_info__GoalInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 1)));
#line 201 "pd_info.m"
    MR_Word transform_hlds__pd_info__InstMap0_7;
#line 201 "pd_info.m"
    MR_Word transform_hlds__pd_info__Delta_8;
#line 201 "pd_info.m"
    MR_Word transform_hlds__pd_info__InstMap_9;
#line 201 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 0)));

#line 202 "pd_info.m"
    {
#line 202 "pd_info.m"
      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_10, &transform_hlds__pd_info__InstMap0_7);
    }
#line 203 "pd_info.m"
    {
#line 203 "pd_info.m"
      transform_hlds__pd_info__Delta_8 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_info__GoalInfo_5);
    }
#line 204 "pd_info.m"
    {
#line 204 "pd_info.m"
      hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__pd_info__InstMap0_7, transform_hlds__pd_info__Delta_8, &transform_hlds__pd_info__InstMap_9);
    }
#line 205 "pd_info.m"
    {
#line 205 "pd_info.m"
      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__pd_info__InstMap_9, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_10, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_11);
#line 205 "pd_info.m"
      return;
    }
#line 201 "pd_info.m"
  }
#line 107 "pd_info.m"
}

#line 104 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_useless_versions_3_p_0(
#line 104 "pd_info.m"
  MR_Word transform_hlds__pd_info__Versions_4,
#line 104 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6,
#line 104 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7)
#line 104 "pd_info.m"
{
#line 199 "pd_info.m"
  {
#line 199 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 199 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 0)));
#line 199 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 1)));
#line 199 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 2)));
#line 199 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 3)));
#line 199 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 4)));
#line 199 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 5)));
#line 199 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 6)));
#line 199 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 7)));
#line 199 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 8)));
#line 199 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 9)));
#line 199 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 10)));

#line 199 "pd_info.m"
    {
#line 199 "pd_info.m"
      MR_Word base;
#line 199 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 199 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7 = base;
#line 199 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_9_9));
#line 199 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_10_10));
#line 199 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_11_11));
#line 199 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 199 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 199 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 199 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 199 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 199 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 199 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 199 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__Versions_4));
#line 199 "pd_info.m"
    }
#line 199 "pd_info.m"
  }
#line 104 "pd_info.m"
}

#line 102 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_created_versions_3_p_0(
#line 102 "pd_info.m"
  MR_Word transform_hlds__pd_info__Versions_4,
#line 102 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6,
#line 102 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7)
#line 102 "pd_info.m"
{
#line 197 "pd_info.m"
  {
#line 197 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 197 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 0)));
#line 197 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 1)));
#line 197 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 2)));
#line 197 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 3)));
#line 197 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 4)));
#line 197 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 5)));
#line 197 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 6)));
#line 197 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 7)));
#line 197 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 8)));
#line 197 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 10)));
#line 197 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 9)));

#line 197 "pd_info.m"
    {
#line 197 "pd_info.m"
      MR_Word base;
#line 197 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 197 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7 = base;
#line 197 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_9_9));
#line 197 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_10_10));
#line 197 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_11_11));
#line 197 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 197 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 197 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 197 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 197 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 197 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 197 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__Versions_4));
#line 197 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 197 "pd_info.m"
    }
#line 197 "pd_info.m"
  }
#line 102 "pd_info.m"
}

#line 100 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_depth_3_p_0(
#line 100 "pd_info.m"
  MR_Integer transform_hlds__pd_info__Depth_4,
#line 100 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6,
#line 100 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7)
#line 100 "pd_info.m"
{
#line 195 "pd_info.m"
  {
#line 195 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 195 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 0)));
#line 195 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 1)));
#line 195 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 2)));
#line 195 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 3)));
#line 195 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 4)));
#line 195 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 5)));
#line 195 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 6)));
#line 195 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 7)));
#line 195 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 9)));
#line 195 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 10)));
#line 195 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 8)));

#line 195 "pd_info.m"
    {
#line 195 "pd_info.m"
      MR_Word base;
#line 195 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 195 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7 = base;
#line 195 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_9_9));
#line 195 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_10_10));
#line 195 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_11_11));
#line 195 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 195 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 195 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 195 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 195 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 195 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__Depth_4));
#line 195 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 195 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 195 "pd_info.m"
    }
#line 195 "pd_info.m"
  }
#line 100 "pd_info.m"
}

#line 98 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_parent_versions_3_p_0(
#line 98 "pd_info.m"
  MR_Word transform_hlds__pd_info__Parents_4,
#line 98 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6,
#line 98 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7)
#line 98 "pd_info.m"
{
#line 193 "pd_info.m"
  {
#line 193 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 193 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 0)));
#line 193 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 1)));
#line 193 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 2)));
#line 193 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 3)));
#line 193 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 4)));
#line 193 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 5)));
#line 193 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 6)));
#line 193 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 8)));
#line 193 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 9)));
#line 193 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 10)));
#line 193 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 7)));

#line 193 "pd_info.m"
    {
#line 193 "pd_info.m"
      MR_Word base;
#line 193 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 193 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7 = base;
#line 193 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_9_9));
#line 193 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_10_10));
#line 193 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_11_11));
#line 193 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 193 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 193 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 193 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 193 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__Parents_4));
#line 193 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 193 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 193 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 193 "pd_info.m"
    }
#line 193 "pd_info.m"
  }
#line 98 "pd_info.m"
}

#line 96 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_global_term_info_3_p_0(
#line 96 "pd_info.m"
  MR_Word transform_hlds__pd_info__TermInfo_4,
#line 96 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6,
#line 96 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7)
#line 96 "pd_info.m"
{
#line 191 "pd_info.m"
  {
#line 191 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 191 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 0)));
#line 191 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 1)));
#line 191 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 2)));
#line 191 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 3)));
#line 191 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 4)));
#line 191 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 5)));
#line 191 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 7)));
#line 191 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 8)));
#line 191 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 9)));
#line 191 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 10)));
#line 191 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 6)));

#line 191 "pd_info.m"
    {
#line 191 "pd_info.m"
      MR_Word base;
#line 191 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 191 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7 = base;
#line 191 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_9_9));
#line 191 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_10_10));
#line 191 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_11_11));
#line 191 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 191 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 191 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 191 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__TermInfo_4));
#line 191 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 191 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 191 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 191 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 191 "pd_info.m"
    }
#line 191 "pd_info.m"
  }
#line 96 "pd_info.m"
}

#line 94 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_counter_3_p_0(
#line 94 "pd_info.m"
  MR_Word transform_hlds__pd_info__Counter_4,
#line 94 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6,
#line 94 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7)
#line 94 "pd_info.m"
{
#line 189 "pd_info.m"
  {
#line 189 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 0)));
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 1)));
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 2)));
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 3)));
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 4)));
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 6)));
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 7)));
#line 189 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 8)));
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 9)));
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 10)));
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 5)));

#line 189 "pd_info.m"
    {
#line 189 "pd_info.m"
      MR_Word base;
#line 189 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 189 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7 = base;
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_9_9));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_10_10));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_11_11));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__Counter_4));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 189 "pd_info.m"
    }
#line 189 "pd_info.m"
  }
#line 94 "pd_info.m"
}

#line 92 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_proc_arg_info_3_p_0(
#line 92 "pd_info.m"
  MR_Word transform_hlds__pd_info__ProcArgInfo_4,
#line 92 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6,
#line 92 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7)
#line 92 "pd_info.m"
{
#line 187 "pd_info.m"
  {
#line 187 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 187 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 0)));
#line 187 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 1)));
#line 187 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 2)));
#line 187 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 3)));
#line 187 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 5)));
#line 187 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 6)));
#line 187 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 7)));
#line 187 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 8)));
#line 187 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 9)));
#line 187 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 10)));
#line 187 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 4)));

#line 187 "pd_info.m"
    {
#line 187 "pd_info.m"
      MR_Word base;
#line 187 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 187 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7 = base;
#line 187 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_9_9));
#line 187 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_10_10));
#line 187 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_11_11));
#line 187 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 187 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__ProcArgInfo_4));
#line 187 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 187 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 187 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 187 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 187 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 187 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 187 "pd_info.m"
    }
#line 187 "pd_info.m"
  }
#line 92 "pd_info.m"
}

#line 90 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_versions_3_p_0(
#line 90 "pd_info.m"
  MR_Word transform_hlds__pd_info__Versions_4,
#line 90 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6,
#line 90 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7)
#line 90 "pd_info.m"
{
#line 185 "pd_info.m"
  {
#line 185 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 0)));
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 1)));
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 2)));
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 4)));
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 5)));
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 6)));
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 7)));
#line 185 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 8)));
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 9)));
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 10)));
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 3)));

#line 185 "pd_info.m"
    {
#line 185 "pd_info.m"
      MR_Word base;
#line 185 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 185 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7 = base;
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_9_9));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_10_10));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_11_11));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__Versions_4));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 185 "pd_info.m"
    }
#line 185 "pd_info.m"
  }
#line 90 "pd_info.m"
}

#line 88 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_goal_version_index_3_p_0(
#line 88 "pd_info.m"
  MR_Word transform_hlds__pd_info__Index_4,
#line 88 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6,
#line 88 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7)
#line 88 "pd_info.m"
{
#line 183 "pd_info.m"
  {
#line 183 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 0)));
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 1)));
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 3)));
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 4)));
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 5)));
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 6)));
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 7)));
#line 183 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 8)));
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 9)));
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 10)));
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 2)));

#line 183 "pd_info.m"
    {
#line 183 "pd_info.m"
      MR_Word base;
#line 183 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 183 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7 = base;
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_9_9));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_10_10));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__Index_4));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 183 "pd_info.m"
    }
#line 183 "pd_info.m"
  }
#line 88 "pd_info.m"
}

#line 86 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_unfold_info_3_p_0(
#line 86 "pd_info.m"
  MR_Word transform_hlds__pd_info__UnfoldInfo_4,
#line 86 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6,
#line 86 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7)
#line 86 "pd_info.m"
{
#line 178 "pd_info.m"
  {
#line 178 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 178 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9;
#line 179 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10;
#line 179 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 179 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;
#line 179 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14;
#line 179 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15;
#line 179 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16;
#line 179 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_17_17;
#line 179 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_18_18;
#line 179 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_19_19;
#line 179 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_20_20;
#line 179 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;

#line 179 "pd_info.m"
    {
#line 179 "pd_info.m"
      transform_hlds__pd_info__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__V_9_9, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_4));
#line 179 "pd_info.m"
    }
#line 179 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 0)));
#line 179 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 1)));
#line 179 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 2)));
#line 179 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 3)));
#line 179 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 4)));
#line 179 "pd_info.m"
    transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 5)));
#line 179 "pd_info.m"
    transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 6)));
#line 179 "pd_info.m"
    transform_hlds__pd_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 7)));
#line 179 "pd_info.m"
    transform_hlds__pd_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 8)));
#line 179 "pd_info.m"
    transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 9)));
#line 179 "pd_info.m"
    transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 10)));
#line 179 "pd_info.m"
    {
#line 179 "pd_info.m"
      MR_Word base;
#line 179 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 179 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7 = base;
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_10_10));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_9_9));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_20_20));
#line 179 "pd_info.m"
    }
#line 178 "pd_info.m"
  }
#line 86 "pd_info.m"
}

#line 84 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_module_info_3_p_0(
#line 84 "pd_info.m"
  MR_Word transform_hlds__pd_info__ModuleInfo_4,
#line 84 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6,
#line 84 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7)
#line 84 "pd_info.m"
{
#line 177 "pd_info.m"
  {
#line 177 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 177 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 1)));
#line 177 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 2)));
#line 177 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 3)));
#line 177 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 4)));
#line 177 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 5)));
#line 177 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 6)));
#line 177 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 7)));
#line 177 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 8)));
#line 177 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 9)));
#line 177 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 10)));
#line 177 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 0)));

#line 177 "pd_info.m"
    {
#line 177 "pd_info.m"
      MR_Word base;
#line 177 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 177 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7 = base;
#line 177 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__ModuleInfo_4));
#line 177 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_10_10));
#line 177 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_11_11));
#line 177 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 177 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 177 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 177 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 177 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 177 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 177 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 177 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 177 "pd_info.m"
    }
#line 177 "pd_info.m"
  }
#line 84 "pd_info.m"
}

#line 81 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_useless_versions_2_p_0(
#line 81 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 81 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
#line 81 "pd_info.m"
{
#line 174 "pd_info.m"
  {
#line 174 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 174 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 174 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 174 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 174 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 174 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 174 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 174 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 174 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 174 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 174 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));

#line 174 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 174 "pd_info.m"
  }
#line 81 "pd_info.m"
}

#line 79 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_created_versions_2_p_0(
#line 79 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 79 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
#line 79 "pd_info.m"
{
#line 173 "pd_info.m"
  {
#line 173 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 173 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 173 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 173 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 173 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 173 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 173 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 173 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 173 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 173 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 173 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;

#line 173 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 173 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 173 "pd_info.m"
  }
#line 79 "pd_info.m"
}

#line 78 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_depth_2_p_0(
#line 78 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 78 "pd_info.m"
  MR_Integer * transform_hlds__pd_info__HeadVar__2_2)
#line 78 "pd_info.m"
{
#line 172 "pd_info.m"
  {
#line 172 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 172 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 172 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 172 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 172 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 172 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 172 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 172 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 172 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 172 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 172 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;

#line 172 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 172 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 172 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 172 "pd_info.m"
  }
#line 78 "pd_info.m"
}

#line 76 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_parent_versions_2_p_0(
#line 76 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 76 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
#line 76 "pd_info.m"
{
#line 171 "pd_info.m"
  {
#line 171 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 171 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_11_11;
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;

#line 171 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 171 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 171 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 171 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 171 "pd_info.m"
  }
#line 76 "pd_info.m"
}

#line 74 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_global_term_info_2_p_0(
#line 74 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 74 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
#line 74 "pd_info.m"
{
#line 170 "pd_info.m"
  {
#line 170 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 170 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 170 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 170 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 170 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 170 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 170 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 170 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10;
#line 170 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_11_11;
#line 170 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 170 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;

#line 170 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 170 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 170 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 170 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 170 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 170 "pd_info.m"
  }
#line 74 "pd_info.m"
}

#line 73 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_counter_2_p_0(
#line 73 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 73 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
#line 73 "pd_info.m"
{
#line 169 "pd_info.m"
  {
#line 169 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 169 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 169 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 169 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 169 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 169 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 169 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9;
#line 169 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10;
#line 169 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_11_11;
#line 169 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 169 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;

#line 169 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 169 "pd_info.m"
    transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 169 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 169 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 169 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 169 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 169 "pd_info.m"
  }
#line 73 "pd_info.m"
}

#line 72 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_proc_arg_info_2_p_0(
#line 72 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 72 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
#line 72 "pd_info.m"
{
#line 168 "pd_info.m"
  {
#line 168 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 168 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 168 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 168 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 168 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 168 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_8_8;
#line 168 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9;
#line 168 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10;
#line 168 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_11_11;
#line 168 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 168 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;

#line 168 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 168 "pd_info.m"
    transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 168 "pd_info.m"
    transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 168 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 168 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 168 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 168 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 168 "pd_info.m"
  }
#line 72 "pd_info.m"
}

#line 71 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_versions_2_p_0(
#line 71 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 71 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
#line 71 "pd_info.m"
{
#line 167 "pd_info.m"
  {
#line 167 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 167 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 167 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 167 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 167 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_7_7;
#line 167 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_8_8;
#line 167 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9;
#line 167 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10;
#line 167 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_11_11;
#line 167 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 167 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;

#line 167 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 167 "pd_info.m"
    transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 167 "pd_info.m"
    transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 167 "pd_info.m"
    transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 167 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 167 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 167 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 167 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 167 "pd_info.m"
  }
#line 71 "pd_info.m"
}

#line 69 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_goal_version_index_2_p_0(
#line 69 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 69 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
#line 69 "pd_info.m"
{
#line 166 "pd_info.m"
  {
#line 166 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 166 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 166 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 166 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6;
#line 166 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_7_7;
#line 166 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_8_8;
#line 166 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9;
#line 166 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10;
#line 166 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_11_11;
#line 166 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 166 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;

#line 166 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 166 "pd_info.m"
    transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 166 "pd_info.m"
    transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 166 "pd_info.m"
    transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 166 "pd_info.m"
    transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 166 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 166 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 166 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 166 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 166 "pd_info.m"
  }
#line 69 "pd_info.m"
}

#line 68 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_unfold_info_2_p_0(
#line 68 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 68 "pd_info.m"
  MR_Word * transform_hlds__pd_info__UnfoldInfo_4)
#line 68 "pd_info.m"
{
#line 158 "pd_info.m"
  {
#line 158 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 158 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 159 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 163 "pd_info.m"
      {
#line 164 "pd_info.m"
        {
#line 164 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 164 "pd_info.m"
          return;
        }
#line 163 "pd_info.m"
      }
#line 162 "pd_info.m"
    else
#line 161 "pd_info.m"
      *transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_5, (MR_Integer) 0)));
#line 158 "pd_info.m"
  }
#line 68 "pd_info.m"
}

#line 67 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_module_info_2_p_0(
#line 67 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 67 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
#line 67 "pd_info.m"
{
#line 157 "pd_info.m"
  {
#line 157 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_4_4;
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5;
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6;
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_7_7;
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_8_8;
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9;
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10;
#line 157 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_11_11;
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;

#line 157 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 157 "pd_info.m"
  }
#line 67 "pd_info.m"
}

#line 64 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_init_unfold_info_5_p_0(
#line 64 "pd_info.m"
  MR_Word transform_hlds__pd_info__PredProcId_6,
#line 64 "pd_info.m"
  MR_Word transform_hlds__pd_info__PredInfo_7,
#line 64 "pd_info.m"
  MR_Word transform_hlds__pd_info__ProcInfo_8,
#line 64 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_16,
#line 64 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_17)
#line 64 "pd_info.m"
{
#line 147 "pd_info.m"
  {
#line 147 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 147 "pd_info.m"
    MR_Word transform_hlds__pd_info__ModuleInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_16, (MR_Integer) 0)));
#line 147 "pd_info.m"
    MR_Word transform_hlds__pd_info__InstMap_11;
#line 147 "pd_info.m"
    MR_Word transform_hlds__pd_info__LocalTermInfo_13;
#line 147 "pd_info.m"
    MR_Word transform_hlds__pd_info__Parents_14;
#line 147 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_15;
#line 147 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_39_39;
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_16, (MR_Integer) 1)));
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_16, (MR_Integer) 2)));
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_16, (MR_Integer) 3)));
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_16, (MR_Integer) 4)));
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_16, (MR_Integer) 5)));
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_16, (MR_Integer) 6)));
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_16, (MR_Integer) 7)));
#line 157 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_16, (MR_Integer) 8)));
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_16, (MR_Integer) 9)));
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_16, (MR_Integer) 10)));
#line 179 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_40_40;
#line 179 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_42_42;
#line 179 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_43_43;
#line 179 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_44_44;
#line 179 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_45_45;
#line 179 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_46_46;
#line 179 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_47_47;
#line 179 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_48_48;
#line 179 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_49_49;
#line 179 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_50_50;
#line 179 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_41_41;

#line 149 "pd_info.m"
    {
#line 149 "pd_info.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__pd_info__ProcInfo_8, transform_hlds__pd_info__ModuleInfo_10, &transform_hlds__pd_info__InstMap_11);
    }
#line 151 "pd_info.m"
    {
#line 151 "pd_info.m"
      transform_hlds__pd_term__local_term_info_init_1_p_0(&transform_hlds__pd_info__LocalTermInfo_13);
    }
#line 152 "pd_info.m"
    {
#line 152 "pd_info.m"
      transform_hlds__pd_info__Parents_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__pd_info__PredProcId_6)));
    }
#line 153 "pd_info.m"
    {
#line 153 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 153 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_15, 0) = ((MR_Box) (transform_hlds__pd_info__ProcInfo_8));
#line 153 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_15, 1) = ((MR_Box) (transform_hlds__pd_info__InstMap_11));
#line 153 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_15, 2) = ((MR_Box) ((MR_Integer) 0));
#line 153 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_15, 3) = ((MR_Box) (transform_hlds__pd_info__LocalTermInfo_13));
#line 153 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_15, 4) = ((MR_Box) (transform_hlds__pd_info__PredInfo_7));
#line 153 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_15, 5) = ((MR_Box) (transform_hlds__pd_info__Parents_14));
#line 153 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_15, 6) = ((MR_Box) (transform_hlds__pd_info__PredProcId_6));
#line 153 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_15, 7) = ((MR_Box) ((MR_Integer) 0));
#line 153 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_15, 8) = ((MR_Box) ((MR_Integer) 0));
#line 153 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_15, 9) = ((MR_Box) ((MR_Integer) 0));
#line 153 "pd_info.m"
    }
#line 179 "pd_info.m"
    {
#line 179 "pd_info.m"
      transform_hlds__pd_info__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__V_39_39, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_15));
#line 179 "pd_info.m"
    }
#line 179 "pd_info.m"
    transform_hlds__pd_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_16, (MR_Integer) 0)));
#line 179 "pd_info.m"
    transform_hlds__pd_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_16, (MR_Integer) 1)));
#line 179 "pd_info.m"
    transform_hlds__pd_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_16, (MR_Integer) 2)));
#line 179 "pd_info.m"
    transform_hlds__pd_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_16, (MR_Integer) 3)));
#line 179 "pd_info.m"
    transform_hlds__pd_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_16, (MR_Integer) 4)));
#line 179 "pd_info.m"
    transform_hlds__pd_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_16, (MR_Integer) 5)));
#line 179 "pd_info.m"
    transform_hlds__pd_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_16, (MR_Integer) 6)));
#line 179 "pd_info.m"
    transform_hlds__pd_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_16, (MR_Integer) 7)));
#line 179 "pd_info.m"
    transform_hlds__pd_info__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_16, (MR_Integer) 8)));
#line 179 "pd_info.m"
    transform_hlds__pd_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_16, (MR_Integer) 9)));
#line 179 "pd_info.m"
    transform_hlds__pd_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_16, (MR_Integer) 10)));
#line 179 "pd_info.m"
    {
#line 179 "pd_info.m"
      MR_Word base;
#line 179 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 179 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_17 = base;
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_40_40));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_39_39));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_42_42));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_43_43));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_44_44));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_45_45));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_46_46));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_47_47));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_48_48));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_49_49));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_50_50));
#line 179 "pd_info.m"
    }
#line 147 "pd_info.m"
  }
#line 64 "pd_info.m"
}

#line 62 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_init_3_p_0(
#line 62 "pd_info.m"
  MR_Word transform_hlds__pd_info__ModuleInfo_4,
#line 62 "pd_info.m"
  MR_Word transform_hlds__pd_info__ProcArgInfos_5,
#line 62 "pd_info.m"
  MR_Word * transform_hlds__pd_info__PDInfo_6)
#line 62 "pd_info.m"
{
#line 136 "pd_info.m"
  {
#line 136 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 136 "pd_info.m"
    MR_Word transform_hlds__pd_info__TypeInfo_17_17 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[0];
#line 136 "pd_info.m"
    MR_Word transform_hlds__pd_info__TypeCtorInfo_18_18;
#line 136 "pd_info.m"
    MR_Word transform_hlds__pd_info__GoalVersionIndex_7;
#line 136 "pd_info.m"
    MR_Word transform_hlds__pd_info__Versions_8;
#line 136 "pd_info.m"
    MR_Word transform_hlds__pd_info__ParentVersions_9;
#line 136 "pd_info.m"
    MR_Word transform_hlds__pd_info__GlobalInfo_10;
#line 136 "pd_info.m"
    MR_Word transform_hlds__pd_info__CreatedVersions_11;
#line 136 "pd_info.m"
    MR_Word transform_hlds__pd_info__UselessVersions_12;
#line 136 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14;

#line 137 "pd_info.m"
    {
#line 137 "pd_info.m"
      mercury__map__init_1_p_0(transform_hlds__pd_info__TypeInfo_17_17, transform_hlds__pd_info__TypeInfo_17_17, &transform_hlds__pd_info__GoalVersionIndex_7);
    }
#line 11356 "transform_hlds.pd_info.c"
    transform_hlds__pd_info__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 138 "pd_info.m"
    {
#line 138 "pd_info.m"
      mercury__map__init_1_p_0(transform_hlds__pd_info__TypeCtorInfo_18_18, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0, &transform_hlds__pd_info__Versions_8);
    }
#line 139 "pd_info.m"
    {
#line 139 "pd_info.m"
      mercury__set__init_1_p_0(transform_hlds__pd_info__TypeCtorInfo_18_18, &transform_hlds__pd_info__ParentVersions_9);
    }
#line 140 "pd_info.m"
    {
#line 140 "pd_info.m"
      transform_hlds__pd_term__global_term_info_init_1_p_0(&transform_hlds__pd_info__GlobalInfo_10);
    }
#line 141 "pd_info.m"
    {
#line 141 "pd_info.m"
      mercury__set__init_1_p_0(transform_hlds__pd_info__TypeCtorInfo_18_18, &transform_hlds__pd_info__CreatedVersions_11);
    }
#line 142 "pd_info.m"
    {
#line 142 "pd_info.m"
      mercury__set__init_1_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[0], &transform_hlds__pd_info__UselessVersions_12);
    }
#line 143 "pd_info.m"
    {
#line 143 "pd_info.m"
      transform_hlds__pd_info__V_14_14 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 143 "pd_info.m"
    {
#line 143 "pd_info.m"
      MR_Word base;
#line 143 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 143 "pd_info.m"
      *transform_hlds__pd_info__PDInfo_6 = base;
#line 143 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__ModuleInfo_4));
#line 143 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 143 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__GoalVersionIndex_7));
#line 143 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__Versions_8));
#line 143 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__ProcArgInfos_5));
#line 143 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 143 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__GlobalInfo_10));
#line 143 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__ParentVersions_9));
#line 143 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Integer) 0));
#line 143 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__CreatedVersions_11));
#line 143 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__UselessVersions_12));
#line 143 "pd_info.m"
    }
#line 136 "pd_info.m"
  }
#line 62 "pd_info.m"
}

void mercury__transform_hlds__pd_info__init(void)
{
}

void mercury__transform_hlds__pd_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_branch_info_map_1);
	MR_register_type_ctor_info(&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_goal_version_index_0);
	MR_register_type_ctor_info(&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_maybe_version_0);
	MR_register_type_ctor_info(&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_arg_info_0);
	MR_register_type_ctor_info(&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_branch_info_1);
	MR_register_type_ctor_info(&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_info_0);
	MR_register_type_ctor_info(&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_proc_arg_info_0);
	MR_register_type_ctor_info(&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_unfold_info_0);
	MR_register_type_ctor_info(&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_useless_versions_0);
	MR_register_type_ctor_info(&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_index_0);
	MR_register_type_ctor_info(&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0);
	MR_register_type_ctor_info(&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_is_exact_0);
}

void mercury__transform_hlds__pd_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.pd_info. */
