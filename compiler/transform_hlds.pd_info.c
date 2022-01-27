/*
** Automatically generated from `pd_info.m'
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
#include "cord.mih"
#include "counter.mih"
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
#include "check_hlds.inst_match.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.modecheck_util.mih"
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
#include "transform_hlds.pd_debug.mih"
#include "transform_hlds.pd_term.mih"
#include "transform_hlds.pd_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 148 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 151 "transform_hlds.pd_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__pd_info__tree234__pti_tree234_2__pseudo_1__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 154 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 157 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 160 "transform_hlds.pd_info.c"
static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_maybe_version_0_0;

#line 163 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 166 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 169 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 172 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 175 "transform_hlds.pd_info.c"
static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_maybe_version_0_1[5];

#line 178 "transform_hlds.pd_info.c"
static const MR_ConstString transform_hlds__pd_info__transform_hlds__pd_info__field_names_maybe_version_0_1[5];

#line 181 "transform_hlds.pd_info.c"
static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_maybe_version_0_1;

#line 184 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_maybe_version_0_0[1];

#line 187 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_maybe_version_0_1[1];

#line 190 "transform_hlds.pd_info.c"
static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_maybe_version_0[2];

#line 193 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_maybe_version_0[2];

#line 196 "transform_hlds.pd_info.c"
static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_maybe_version_0[2];

#line 199 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__transform_hlds__pd_info__ti_pd_branch_info_1builtin__type_ctor_info_int_0;

#line 202 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__pd_info__ti_pd_branch_info_1builtin__type_ctor_info_int_0;

#line 205 "transform_hlds.pd_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__pti_set_ordlist_1__pseudo_1;

#line 208 "transform_hlds.pd_info.c"
static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_pd_branch_info_1_0[3];

#line 211 "transform_hlds.pd_info.c"
static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_pd_branch_info_1_0;

#line 214 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_pd_branch_info_1_0[1];

#line 217 "transform_hlds.pd_info.c"
static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_pd_branch_info_1[1];

#line 220 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_pd_branch_info_1[1];

#line 223 "transform_hlds.pd_info.c"
static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_pd_branch_info_1[1];

#line 226 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__maybe__ti_maybe_1transform_hlds__pd_info__type_ctor_info_unfold_info_0;

#line 229 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__pd_info__type_ctor_info_version_info_0;

#line 232 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 235 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 238 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 241 "transform_hlds.pd_info.c"
static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_pd_info_0_0[11];

#line 244 "transform_hlds.pd_info.c"
static const MR_ConstString transform_hlds__pd_info__transform_hlds__pd_info__field_names_pd_info_0_0[11];

#line 247 "transform_hlds.pd_info.c"
static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_pd_info_0_0;

#line 250 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_pd_info_0_0[1];

#line 253 "transform_hlds.pd_info.c"
static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_pd_info_0[1];

#line 256 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_pd_info_0[1];

#line 259 "transform_hlds.pd_info.c"
static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_pd_info_0[1];

#line 262 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 265 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 268 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 271 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 274 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 277 "transform_hlds.pd_info.c"
static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_unfold_info_0_0[11];

#line 280 "transform_hlds.pd_info.c"
static const MR_ConstString transform_hlds__pd_info__transform_hlds__pd_info__field_names_unfold_info_0_0[11];

#line 283 "transform_hlds.pd_info.c"
static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_unfold_info_0_0;

#line 286 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_unfold_info_0_0[1];

#line 289 "transform_hlds.pd_info.c"
static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_unfold_info_0[1];

#line 292 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_unfold_info_0[1];

#line 295 "transform_hlds.pd_info.c"
static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_unfold_info_0[1];

#line 298 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 301 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 304 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 307 "transform_hlds.pd_info.c"
static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_version_info_0_0[9];

#line 310 "transform_hlds.pd_info.c"
static const MR_ConstString transform_hlds__pd_info__transform_hlds__pd_info__field_names_version_info_0_0[9];

#line 313 "transform_hlds.pd_info.c"
static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_version_info_0_0;

#line 316 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_version_info_0_0[1];

#line 319 "transform_hlds.pd_info.c"
static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_version_info_0[1];

#line 322 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_version_info_0[1];

#line 325 "transform_hlds.pd_info.c"
static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_version_info_0[1];

#line 328 "transform_hlds.pd_info.c"
static const MR_EnumFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__enum_functor_desc_version_is_exact_0_0;

#line 331 "transform_hlds.pd_info.c"
static const MR_EnumFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__enum_functor_desc_version_is_exact_0_1;

#line 334 "transform_hlds.pd_info.c"
static const MR_EnumFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__enum_value_ordered_version_is_exact_0[2];

#line 337 "transform_hlds.pd_info.c"
static const MR_EnumFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__enum_name_ordered_version_is_exact_0[2];

#line 340 "transform_hlds.pd_info.c"
static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_version_is_exact_0[2];

#line 343 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____branch_info_map_1_0_10001(
#line 346 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 348 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 350 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

#line 353 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____branch_info_map_1_0_10001(
#line 356 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 358 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_2,
#line 360 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3,
#line 362 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_4);

#line 365 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____goal_version_index_0_0_10001(
#line 368 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 370 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

#line 373 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____goal_version_index_0_0_10001(
#line 376 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 378 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 380 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

#line 383 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____maybe_version_0_0_10001(
#line 386 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 388 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

#line 391 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____maybe_version_0_0_10001(
#line 394 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 396 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 398 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

#line 401 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_arg_info_0_0_10001(
#line 404 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 406 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

#line 409 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____pd_arg_info_0_0_10001(
#line 412 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 414 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 416 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

#line 419 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_branch_info_1_0_10001(
#line 422 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 424 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 426 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

#line 429 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____pd_branch_info_1_0_10001(
#line 432 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 434 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_2,
#line 436 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3,
#line 438 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_4);

#line 441 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_info_0_0_10001(
#line 444 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 446 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

#line 449 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____pd_info_0_0_10001(
#line 452 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 454 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 456 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

#line 459 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_proc_arg_info_0_0_10001(
#line 462 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 464 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

#line 467 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____pd_proc_arg_info_0_0_10001(
#line 470 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 472 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 474 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

#line 477 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____unfold_info_0_0_10001(
#line 480 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 482 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

#line 485 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____unfold_info_0_0_10001(
#line 488 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 490 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 492 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

#line 495 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____useless_versions_0_0_10001(
#line 498 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 500 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

#line 503 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____useless_versions_0_0_10001(
#line 506 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 508 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 510 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

#line 513 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_index_0_0_10001(
#line 516 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 518 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

#line 521 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____version_index_0_0_10001(
#line 524 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 526 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 528 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

#line 531 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_info_0_0_10001(
#line 534 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 536 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

#line 539 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____version_info_0_0_10001(
#line 542 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 544 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 546 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

#line 549 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_is_exact_0_0_10001(
#line 552 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 554 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

#line 557 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____version_is_exact_0_0_10001(
#line 560 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 562 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 564 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

#line 550 "pd_info.m"
static void MR_CALL 
transform_hlds__pd_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_105_99_107_95_118_101_114_115_105_111_110_95_95_91_49_93_95_48_7_p_0(
#line 550 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 550 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__3_3,
#line 550 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__4_4,
#line 550 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__5_5,
#line 550 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__6_6,
#line 550 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__7_7);

#line 615 "pd_info.m"
static MR_bool MR_CALL 
transform_hlds__pd_info__check_insts_8_p_0(
#line 615 "pd_info.m"
  MR_Word transform_hlds__pd_info__ModuleInfo_1,
#line 615 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 615 "pd_info.m"
  MR_Word transform_hlds__pd_info__VarRenaming_3,
#line 615 "pd_info.m"
  MR_Word transform_hlds__pd_info__OldInstMap_4,
#line 615 "pd_info.m"
  MR_Word transform_hlds__pd_info__NewInstMap_5,
#line 615 "pd_info.m"
  MR_Word transform_hlds__pd_info__VarTypes_6,
#line 615 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_0_7,
#line 615 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_8);

#line 510 "pd_info.m"
static MR_bool MR_CALL 
transform_hlds__pd_info__get_matching_version_7_p_0(
#line 510 "pd_info.m"
  MR_Word transform_hlds__pd_info__ModuleInfo_1,
#line 510 "pd_info.m"
  MR_Word transform_hlds__pd_info__ThisGoal_2,
#line 510 "pd_info.m"
  MR_Word transform_hlds__pd_info__ThisInstMap_3,
#line 510 "pd_info.m"
  MR_Word transform_hlds__pd_info__VarTypes_4,
#line 510 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__5_5,
#line 510 "pd_info.m"
  MR_Word transform_hlds__pd_info__Versions_6,
#line 510 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__7_7);


static /* final */ const MR_Box transform_hlds__pd_info_scalar_common_1[13][2];

static /* final */ const MR_Box transform_hlds__pd_info_scalar_common_2[9][3];




static /* final */ const MR_Box transform_hlds__pd_info_scalar_common_1[13][2] = {
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
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__pd_info_scalar_common_2[7]))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__pd_info_scalar_common_1[1]))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__pd_info_scalar_common_2[9][3] = {
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
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__pd_info_scalar_common_1[8])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__pd_info_scalar_common_1[9]))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 763 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 771 "transform_hlds.pd_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__pd_info__tree234__pti_tree234_2__pseudo_1__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

#line 780 "transform_hlds.pd_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_branch_info_map_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (transform_hlds__pd_info____Unify____branch_info_map_1_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____branch_info_map_1_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "branch_info_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__pd_info__tree234__pti_tree234_2__pseudo_1__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 797 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 805 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__pd_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__pd_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 814 "transform_hlds.pd_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_goal_version_index_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__pd_info____Unify____goal_version_index_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____goal_version_index_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "goal_version_index",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__pd_info__tree234__ti_tree234_2list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 831 "transform_hlds.pd_info.c"
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

#line 846 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 854 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 863 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 871 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 880 "transform_hlds.pd_info.c"
static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_maybe_version_0_1[5] = {
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_is_exact_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 889 "transform_hlds.pd_info.c"
static const MR_ConstString transform_hlds__pd_info__transform_hlds__pd_info__field_names_maybe_version_0_1[5] = {
  (MR_String) "mv_is_exact",
  (MR_String) "mv_ppid",
  (MR_String) "mv_version",
  (MR_String) "mv_renaming",
  (MR_String) "mv_tsubst"
};

#line 898 "transform_hlds.pd_info.c"
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

#line 913 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_maybe_version_0_0[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_maybe_version_0_0
};

#line 918 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_maybe_version_0_1[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_maybe_version_0_1
};

#line 923 "transform_hlds.pd_info.c"
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

#line 937 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_maybe_version_0[2] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_maybe_version_0_0,
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_maybe_version_0_1
};

#line 943 "transform_hlds.pd_info.c"
static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_maybe_version_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 949 "transform_hlds.pd_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_maybe_version_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__pd_info____Unify____maybe_version_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____maybe_version_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "maybe_version",
  {     transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_maybe_version_0 },
  {     transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_maybe_version_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_maybe_version_0
};

#line 966 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__transform_hlds__pd_info__ti_pd_branch_info_1builtin__type_ctor_info_int_0 = {
  &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_branch_info_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 974 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__pd_info__ti_pd_branch_info_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__pd_info__transform_hlds__pd_info__ti_pd_branch_info_1builtin__type_ctor_info_int_0
  }
};

#line 983 "transform_hlds.pd_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_arg_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__pd_info____Unify____pd_arg_info_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____pd_arg_info_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "pd_arg_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__pd_info__ti_pd_branch_info_1builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1000 "transform_hlds.pd_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1008 "transform_hlds.pd_info.c"
static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_pd_branch_info_1_0[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__tree234__pti_tree234_2__pseudo_1__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__set_ordlist__pti_set_ordlist_1__pseudo_1,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__set_ordlist__pti_set_ordlist_1__pseudo_1
};

#line 1015 "transform_hlds.pd_info.c"
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

#line 1030 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_pd_branch_info_1_0[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_pd_branch_info_1_0
};

#line 1035 "transform_hlds.pd_info.c"
static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_pd_branch_info_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_pd_branch_info_1_0
  }
};

#line 1044 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_pd_branch_info_1[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_pd_branch_info_1_0
};

#line 1049 "transform_hlds.pd_info.c"
static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_pd_branch_info_1[1] = {
  (MR_Integer) 0
};

#line 1054 "transform_hlds.pd_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_branch_info_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__pd_info____Unify____pd_branch_info_1_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____pd_branch_info_1_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "pd_branch_info",
  {     transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_pd_branch_info_1 },
  {     transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_pd_branch_info_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_pd_branch_info_1
};

#line 1071 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__maybe__ti_maybe_1transform_hlds__pd_info__type_ctor_info_unfold_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_unfold_info_0
  }
};

#line 1079 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__pd_info__type_ctor_info_version_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0
  }
};

#line 1088 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1096 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1105 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__pd_info__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1113 "transform_hlds.pd_info.c"
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

#line 1128 "transform_hlds.pd_info.c"
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

#line 1143 "transform_hlds.pd_info.c"
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

#line 1158 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_pd_info_0_0[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_pd_info_0_0
};

#line 1163 "transform_hlds.pd_info.c"
static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_pd_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_pd_info_0_0
  }
};

#line 1172 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_pd_info_0[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_pd_info_0_0
};

#line 1177 "transform_hlds.pd_info.c"
static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_pd_info_0[1] = {
  (MR_Integer) 0
};

#line 1182 "transform_hlds.pd_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__pd_info____Unify____pd_info_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____pd_info_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "pd_info",
  {     transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_pd_info_0 },
  {     transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_pd_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_pd_info_0
};

#line 1199 "transform_hlds.pd_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_proc_arg_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__pd_info____Unify____pd_proc_arg_info_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____pd_proc_arg_info_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "pd_proc_arg_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__pd_info__transform_hlds__pd_info__ti_pd_branch_info_1builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1216 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1224 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1233 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1242 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__pd_info__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  }
};

#line 1250 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__pd_info__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  }
};

#line 1259 "transform_hlds.pd_info.c"
static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_unfold_info_0_0[11] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0,
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

#line 1274 "transform_hlds.pd_info.c"
static const MR_ConstString transform_hlds__pd_info__transform_hlds__pd_info__field_names_unfold_info_0_0[11] = {
  (MR_String) "ufi_proc_info",
  (MR_String) "ufi_head_inst_vars",
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

#line 1289 "transform_hlds.pd_info.c"
static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_unfold_info_0_0 = {
  (MR_String) "unfold_info",
  (MR_Integer) 11,
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

#line 1304 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_unfold_info_0_0[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_unfold_info_0_0
};

#line 1309 "transform_hlds.pd_info.c"
static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_unfold_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_unfold_info_0_0
  }
};

#line 1318 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_unfold_info_0[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_unfold_info_0_0
};

#line 1323 "transform_hlds.pd_info.c"
static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_unfold_info_0[1] = {
  (MR_Integer) 0
};

#line 1328 "transform_hlds.pd_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_unfold_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__pd_info____Unify____unfold_info_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____unfold_info_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "unfold_info",
  {     transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_unfold_info_0 },
  {     transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_unfold_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_unfold_info_0
};

#line 1345 "transform_hlds.pd_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_useless_versions_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__pd_info____Unify____useless_versions_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____useless_versions_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "useless_versions",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1362 "transform_hlds.pd_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_index_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__pd_info____Unify____version_index_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____version_index_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "version_index",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__pd_info__type_ctor_info_version_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1379 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1387 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1395 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1403 "transform_hlds.pd_info.c"
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

#line 1416 "transform_hlds.pd_info.c"
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

#line 1429 "transform_hlds.pd_info.c"
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

#line 1444 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_version_info_0_0[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_version_info_0_0
};

#line 1449 "transform_hlds.pd_info.c"
static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_version_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_version_info_0_0
  }
};

#line 1458 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_version_info_0[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_version_info_0_0
};

#line 1463 "transform_hlds.pd_info.c"
static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_version_info_0[1] = {
  (MR_Integer) 0
};

#line 1468 "transform_hlds.pd_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__pd_info____Unify____version_info_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____version_info_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "version_info",
  {     transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_version_info_0 },
  {     transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_version_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_version_info_0
};

#line 1485 "transform_hlds.pd_info.c"
static const MR_EnumFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__enum_functor_desc_version_is_exact_0_0 = {
  (MR_String) "exact",
  (MR_Integer) 0
};

#line 1491 "transform_hlds.pd_info.c"
static const MR_EnumFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__enum_functor_desc_version_is_exact_0_1 = {
  (MR_String) "more_general",
  (MR_Integer) 1
};

#line 1497 "transform_hlds.pd_info.c"
static const MR_EnumFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__enum_value_ordered_version_is_exact_0[2] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__enum_functor_desc_version_is_exact_0_0,
  &transform_hlds__pd_info__transform_hlds__pd_info__enum_functor_desc_version_is_exact_0_1
};

#line 1503 "transform_hlds.pd_info.c"
static const MR_EnumFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__enum_name_ordered_version_is_exact_0[2] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__enum_functor_desc_version_is_exact_0_0,
  &transform_hlds__pd_info__transform_hlds__pd_info__enum_functor_desc_version_is_exact_0_1
};

#line 1509 "transform_hlds.pd_info.c"
static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_version_is_exact_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1515 "transform_hlds.pd_info.c"
const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_is_exact_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__pd_info____Unify____version_is_exact_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____version_is_exact_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "version_is_exact",
  {     transform_hlds__pd_info__transform_hlds__pd_info__enum_name_ordered_version_is_exact_0 },
  {     transform_hlds__pd_info__transform_hlds__pd_info__enum_value_ordered_version_is_exact_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_version_is_exact_0
};

#line 1532 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____branch_info_map_1_0_10001(
#line 1535 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 1537 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 1539 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
#line 1541 "transform_hlds.pd_info.c"
{
#line 1543 "transform_hlds.pd_info.c"
  {
#line 1545 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded;

#line 1548 "transform_hlds.pd_info.c"
    {
#line 1550 "transform_hlds.pd_info.c"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____branch_info_map_1_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    }
#line 1553 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 1555 "transform_hlds.pd_info.c"
  }
#line 1557 "transform_hlds.pd_info.c"
}

#line 1560 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____branch_info_map_1_0_10001(
#line 1563 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 1565 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_2,
#line 1567 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3,
#line 1569 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_4)
#line 1571 "transform_hlds.pd_info.c"
{
#line 1573 "transform_hlds.pd_info.c"
  {
#line 1575 "transform_hlds.pd_info.c"
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

#line 1578 "transform_hlds.pd_info.c"
    {
#line 1580 "transform_hlds.pd_info.c"
      transform_hlds__pd_info____Compare____branch_info_map_1_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), &transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_3), ((MR_Word) transform_hlds__pd_info__wrapper_arg_4));
    }
#line 1583 "transform_hlds.pd_info.c"
    *transform_hlds__pd_info__wrapper_arg_2 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
#line 1585 "transform_hlds.pd_info.c"
  }
#line 1587 "transform_hlds.pd_info.c"
}

#line 1590 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____goal_version_index_0_0_10001(
#line 1593 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 1595 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
#line 1597 "transform_hlds.pd_info.c"
{
#line 1599 "transform_hlds.pd_info.c"
  {
#line 1601 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded;

#line 1604 "transform_hlds.pd_info.c"
    {
#line 1606 "transform_hlds.pd_info.c"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____goal_version_index_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    }
#line 1609 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 1611 "transform_hlds.pd_info.c"
  }
#line 1613 "transform_hlds.pd_info.c"
}

#line 1616 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____goal_version_index_0_0_10001(
#line 1619 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 1621 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 1623 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
#line 1625 "transform_hlds.pd_info.c"
{
#line 1627 "transform_hlds.pd_info.c"
  {
#line 1629 "transform_hlds.pd_info.c"
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

#line 1632 "transform_hlds.pd_info.c"
    {
#line 1634 "transform_hlds.pd_info.c"
      transform_hlds__pd_info____Compare____goal_version_index_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    }
#line 1637 "transform_hlds.pd_info.c"
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
#line 1639 "transform_hlds.pd_info.c"
  }
#line 1641 "transform_hlds.pd_info.c"
}

#line 1644 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____maybe_version_0_0_10001(
#line 1647 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 1649 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
#line 1651 "transform_hlds.pd_info.c"
{
#line 1653 "transform_hlds.pd_info.c"
  {
#line 1655 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded;

#line 1658 "transform_hlds.pd_info.c"
    {
#line 1660 "transform_hlds.pd_info.c"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____maybe_version_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    }
#line 1663 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 1665 "transform_hlds.pd_info.c"
  }
#line 1667 "transform_hlds.pd_info.c"
}

#line 1670 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____maybe_version_0_0_10001(
#line 1673 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 1675 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 1677 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
#line 1679 "transform_hlds.pd_info.c"
{
#line 1681 "transform_hlds.pd_info.c"
  {
#line 1683 "transform_hlds.pd_info.c"
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

#line 1686 "transform_hlds.pd_info.c"
    {
#line 1688 "transform_hlds.pd_info.c"
      transform_hlds__pd_info____Compare____maybe_version_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    }
#line 1691 "transform_hlds.pd_info.c"
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
#line 1693 "transform_hlds.pd_info.c"
  }
#line 1695 "transform_hlds.pd_info.c"
}

#line 1698 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_arg_info_0_0_10001(
#line 1701 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 1703 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
#line 1705 "transform_hlds.pd_info.c"
{
#line 1707 "transform_hlds.pd_info.c"
  {
#line 1709 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded;

#line 1712 "transform_hlds.pd_info.c"
    {
#line 1714 "transform_hlds.pd_info.c"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____pd_arg_info_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    }
#line 1717 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 1719 "transform_hlds.pd_info.c"
  }
#line 1721 "transform_hlds.pd_info.c"
}

#line 1724 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____pd_arg_info_0_0_10001(
#line 1727 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 1729 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 1731 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
#line 1733 "transform_hlds.pd_info.c"
{
#line 1735 "transform_hlds.pd_info.c"
  {
#line 1737 "transform_hlds.pd_info.c"
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

#line 1740 "transform_hlds.pd_info.c"
    {
#line 1742 "transform_hlds.pd_info.c"
      transform_hlds__pd_info____Compare____pd_arg_info_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    }
#line 1745 "transform_hlds.pd_info.c"
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
#line 1747 "transform_hlds.pd_info.c"
  }
#line 1749 "transform_hlds.pd_info.c"
}

#line 1752 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_branch_info_1_0_10001(
#line 1755 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 1757 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 1759 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
#line 1761 "transform_hlds.pd_info.c"
{
#line 1763 "transform_hlds.pd_info.c"
  {
#line 1765 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded;

#line 1768 "transform_hlds.pd_info.c"
    {
#line 1770 "transform_hlds.pd_info.c"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____pd_branch_info_1_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    }
#line 1773 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 1775 "transform_hlds.pd_info.c"
  }
#line 1777 "transform_hlds.pd_info.c"
}

#line 1780 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____pd_branch_info_1_0_10001(
#line 1783 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 1785 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_2,
#line 1787 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3,
#line 1789 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_4)
#line 1791 "transform_hlds.pd_info.c"
{
#line 1793 "transform_hlds.pd_info.c"
  {
#line 1795 "transform_hlds.pd_info.c"
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

#line 1798 "transform_hlds.pd_info.c"
    {
#line 1800 "transform_hlds.pd_info.c"
      transform_hlds__pd_info____Compare____pd_branch_info_1_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), &transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_3), ((MR_Word) transform_hlds__pd_info__wrapper_arg_4));
    }
#line 1803 "transform_hlds.pd_info.c"
    *transform_hlds__pd_info__wrapper_arg_2 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
#line 1805 "transform_hlds.pd_info.c"
  }
#line 1807 "transform_hlds.pd_info.c"
}

#line 1810 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_info_0_0_10001(
#line 1813 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 1815 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
#line 1817 "transform_hlds.pd_info.c"
{
#line 1819 "transform_hlds.pd_info.c"
  {
#line 1821 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded;

#line 1824 "transform_hlds.pd_info.c"
    {
#line 1826 "transform_hlds.pd_info.c"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____pd_info_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    }
#line 1829 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 1831 "transform_hlds.pd_info.c"
  }
#line 1833 "transform_hlds.pd_info.c"
}

#line 1836 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____pd_info_0_0_10001(
#line 1839 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 1841 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 1843 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
#line 1845 "transform_hlds.pd_info.c"
{
#line 1847 "transform_hlds.pd_info.c"
  {
#line 1849 "transform_hlds.pd_info.c"
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

#line 1852 "transform_hlds.pd_info.c"
    {
#line 1854 "transform_hlds.pd_info.c"
      transform_hlds__pd_info____Compare____pd_info_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    }
#line 1857 "transform_hlds.pd_info.c"
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
#line 1859 "transform_hlds.pd_info.c"
  }
#line 1861 "transform_hlds.pd_info.c"
}

#line 1864 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_proc_arg_info_0_0_10001(
#line 1867 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 1869 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
#line 1871 "transform_hlds.pd_info.c"
{
#line 1873 "transform_hlds.pd_info.c"
  {
#line 1875 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded;

#line 1878 "transform_hlds.pd_info.c"
    {
#line 1880 "transform_hlds.pd_info.c"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____pd_proc_arg_info_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    }
#line 1883 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 1885 "transform_hlds.pd_info.c"
  }
#line 1887 "transform_hlds.pd_info.c"
}

#line 1890 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____pd_proc_arg_info_0_0_10001(
#line 1893 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 1895 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 1897 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
#line 1899 "transform_hlds.pd_info.c"
{
#line 1901 "transform_hlds.pd_info.c"
  {
#line 1903 "transform_hlds.pd_info.c"
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

#line 1906 "transform_hlds.pd_info.c"
    {
#line 1908 "transform_hlds.pd_info.c"
      transform_hlds__pd_info____Compare____pd_proc_arg_info_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    }
#line 1911 "transform_hlds.pd_info.c"
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
#line 1913 "transform_hlds.pd_info.c"
  }
#line 1915 "transform_hlds.pd_info.c"
}

#line 1918 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____unfold_info_0_0_10001(
#line 1921 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 1923 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
#line 1925 "transform_hlds.pd_info.c"
{
#line 1927 "transform_hlds.pd_info.c"
  {
#line 1929 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded;

#line 1932 "transform_hlds.pd_info.c"
    {
#line 1934 "transform_hlds.pd_info.c"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____unfold_info_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    }
#line 1937 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 1939 "transform_hlds.pd_info.c"
  }
#line 1941 "transform_hlds.pd_info.c"
}

#line 1944 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____unfold_info_0_0_10001(
#line 1947 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 1949 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 1951 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
#line 1953 "transform_hlds.pd_info.c"
{
#line 1955 "transform_hlds.pd_info.c"
  {
#line 1957 "transform_hlds.pd_info.c"
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

#line 1960 "transform_hlds.pd_info.c"
    {
#line 1962 "transform_hlds.pd_info.c"
      transform_hlds__pd_info____Compare____unfold_info_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    }
#line 1965 "transform_hlds.pd_info.c"
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
#line 1967 "transform_hlds.pd_info.c"
  }
#line 1969 "transform_hlds.pd_info.c"
}

#line 1972 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____useless_versions_0_0_10001(
#line 1975 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 1977 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
#line 1979 "transform_hlds.pd_info.c"
{
#line 1981 "transform_hlds.pd_info.c"
  {
#line 1983 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded;

#line 1986 "transform_hlds.pd_info.c"
    {
#line 1988 "transform_hlds.pd_info.c"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____useless_versions_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    }
#line 1991 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 1993 "transform_hlds.pd_info.c"
  }
#line 1995 "transform_hlds.pd_info.c"
}

#line 1998 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____useless_versions_0_0_10001(
#line 2001 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 2003 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 2005 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
#line 2007 "transform_hlds.pd_info.c"
{
#line 2009 "transform_hlds.pd_info.c"
  {
#line 2011 "transform_hlds.pd_info.c"
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

#line 2014 "transform_hlds.pd_info.c"
    {
#line 2016 "transform_hlds.pd_info.c"
      transform_hlds__pd_info____Compare____useless_versions_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    }
#line 2019 "transform_hlds.pd_info.c"
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
#line 2021 "transform_hlds.pd_info.c"
  }
#line 2023 "transform_hlds.pd_info.c"
}

#line 2026 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_index_0_0_10001(
#line 2029 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 2031 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
#line 2033 "transform_hlds.pd_info.c"
{
#line 2035 "transform_hlds.pd_info.c"
  {
#line 2037 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded;

#line 2040 "transform_hlds.pd_info.c"
    {
#line 2042 "transform_hlds.pd_info.c"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____version_index_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    }
#line 2045 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 2047 "transform_hlds.pd_info.c"
  }
#line 2049 "transform_hlds.pd_info.c"
}

#line 2052 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____version_index_0_0_10001(
#line 2055 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 2057 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 2059 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
#line 2061 "transform_hlds.pd_info.c"
{
#line 2063 "transform_hlds.pd_info.c"
  {
#line 2065 "transform_hlds.pd_info.c"
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

#line 2068 "transform_hlds.pd_info.c"
    {
#line 2070 "transform_hlds.pd_info.c"
      transform_hlds__pd_info____Compare____version_index_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    }
#line 2073 "transform_hlds.pd_info.c"
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
#line 2075 "transform_hlds.pd_info.c"
  }
#line 2077 "transform_hlds.pd_info.c"
}

#line 2080 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_info_0_0_10001(
#line 2083 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 2085 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
#line 2087 "transform_hlds.pd_info.c"
{
#line 2089 "transform_hlds.pd_info.c"
  {
#line 2091 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded;

#line 2094 "transform_hlds.pd_info.c"
    {
#line 2096 "transform_hlds.pd_info.c"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____version_info_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    }
#line 2099 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 2101 "transform_hlds.pd_info.c"
  }
#line 2103 "transform_hlds.pd_info.c"
}

#line 2106 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____version_info_0_0_10001(
#line 2109 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 2111 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 2113 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
#line 2115 "transform_hlds.pd_info.c"
{
#line 2117 "transform_hlds.pd_info.c"
  {
#line 2119 "transform_hlds.pd_info.c"
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

#line 2122 "transform_hlds.pd_info.c"
    {
#line 2124 "transform_hlds.pd_info.c"
      transform_hlds__pd_info____Compare____version_info_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    }
#line 2127 "transform_hlds.pd_info.c"
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
#line 2129 "transform_hlds.pd_info.c"
  }
#line 2131 "transform_hlds.pd_info.c"
}

#line 2134 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_is_exact_0_0_10001(
#line 2137 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 2139 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
#line 2141 "transform_hlds.pd_info.c"
{
#line 2143 "transform_hlds.pd_info.c"
  {
#line 2145 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded;

#line 2148 "transform_hlds.pd_info.c"
    {
#line 2150 "transform_hlds.pd_info.c"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____version_is_exact_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    }
#line 2153 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 2155 "transform_hlds.pd_info.c"
  }
#line 2157 "transform_hlds.pd_info.c"
}

#line 2160 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____version_is_exact_0_0_10001(
#line 2163 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 2165 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 2167 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
#line 2169 "transform_hlds.pd_info.c"
{
#line 2171 "transform_hlds.pd_info.c"
  {
#line 2173 "transform_hlds.pd_info.c"
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

#line 2176 "transform_hlds.pd_info.c"
    {
#line 2178 "transform_hlds.pd_info.c"
      transform_hlds__pd_info____Compare____version_is_exact_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    }
#line 2181 "transform_hlds.pd_info.c"
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
#line 2183 "transform_hlds.pd_info.c"
  }
#line 2185 "transform_hlds.pd_info.c"
}

#line 550 "pd_info.m"
static void MR_CALL 
transform_hlds__pd_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_105_99_107_95_118_101_114_115_105_111_110_95_95_91_49_93_95_48_7_p_0(
#line 550 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 550 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__3_3,
#line 550 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__4_4,
#line 550 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__5_5,
#line 550 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__6_6,
#line 550 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__7_7)
#line 550 "pd_info.m"
{
#line 554 "pd_info.m"
  {
#line 554 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;

#line 554 "pd_info.m"
    if ((transform_hlds__pd_info__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 554 "pd_info.m"
      {
#line 555 "pd_info.m"
        {
#line 555 "pd_info.m"
          MR_Word base;
#line 555 "pd_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 555 "pd_info.m"
          *transform_hlds__pd_info__HeadVar__7_7 = base;
#line 555 "pd_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 1));
#line 555 "pd_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_info__HeadVar__2_2));
#line 555 "pd_info.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__pd_info__HeadVar__5_5));
#line 555 "pd_info.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__pd_info__HeadVar__3_3));
#line 555 "pd_info.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__pd_info__HeadVar__4_4));
#line 555 "pd_info.m"
        }
#line 554 "pd_info.m"
      }
#line 554 "pd_info.m"
    else
#line 554 "pd_info.m"
      {
#line 554 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__6_6, (MR_Integer) 4)));
#line 554 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__6_6, (MR_Integer) 3)));
#line 554 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__6_6, (MR_Integer) 2)));
#line 554 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__6_6, (MR_Integer) 1)));
#line 554 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__6_6, (MR_Integer) 0)));

#line 554 "pd_info.m"
#line 554 "pd_info.m"
        switch (transform_hlds__pd_info__V_60_60) {
#line 554 "pd_info.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 554 "pd_info.m"
          case (MR_Integer) 0:
#line 556 "pd_info.m"
            {
#line 558 "pd_info.m"
              {
#line 558 "pd_info.m"
                MR_Word base;
#line 558 "pd_info.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 558 "pd_info.m"
                *transform_hlds__pd_info__HeadVar__7_7 = base;
#line 558 "pd_info.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 558 "pd_info.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_59_59));
#line 558 "pd_info.m"
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_58_58));
#line 558 "pd_info.m"
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_57_57));
#line 558 "pd_info.m"
                MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_56_56));
#line 558 "pd_info.m"
              }
#line 556 "pd_info.m"
            }
#line 554 "pd_info.m"
            break;
#line 554 "pd_info.m"
          case (MR_Integer) 1:
#line 561 "pd_info.m"
            {
#line 561 "pd_info.m"
              MR_Integer transform_hlds__pd_info__CostDelta1_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 6)));
#line 561 "pd_info.m"
              MR_Integer transform_hlds__pd_info__CostDelta2_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__V_58_58, (MR_Integer) 6)));
#line 562 "pd_info.m"
              MR_Word transform_hlds__pd_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 0)));
#line 562 "pd_info.m"
              MR_Word transform_hlds__pd_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 1)));
#line 562 "pd_info.m"
              MR_Word transform_hlds__pd_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 2)));
#line 562 "pd_info.m"
              MR_Word transform_hlds__pd_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 3)));
#line 562 "pd_info.m"
              MR_Word transform_hlds__pd_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 4)));
#line 562 "pd_info.m"
              MR_Integer transform_hlds__pd_info__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 5)));
#line 562 "pd_info.m"
              MR_Word transform_hlds__pd_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 7)));
#line 562 "pd_info.m"
              MR_Word transform_hlds__pd_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 8)));
#line 563 "pd_info.m"
              MR_Word transform_hlds__pd_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__V_58_58, (MR_Integer) 0)));
#line 563 "pd_info.m"
              MR_Word transform_hlds__pd_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__V_58_58, (MR_Integer) 1)));
#line 563 "pd_info.m"
              MR_Word transform_hlds__pd_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__V_58_58, (MR_Integer) 2)));
#line 563 "pd_info.m"
              MR_Word transform_hlds__pd_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__V_58_58, (MR_Integer) 3)));
#line 563 "pd_info.m"
              MR_Word transform_hlds__pd_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__V_58_58, (MR_Integer) 4)));
#line 563 "pd_info.m"
              MR_Integer transform_hlds__pd_info__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__V_58_58, (MR_Integer) 5)));
#line 563 "pd_info.m"
              MR_Word transform_hlds__pd_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__V_58_58, (MR_Integer) 7)));
#line 563 "pd_info.m"
              MR_Word transform_hlds__pd_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__V_58_58, (MR_Integer) 8)));

#line 565 "pd_info.m"
              transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CostDelta1_41 > transform_hlds__pd_info__CostDelta2_50);
#line 568 "pd_info.m"
              if (transform_hlds__pd_info__succeeded)
#line 566 "pd_info.m"
                {
#line 566 "pd_info.m"
                  {
#line 566 "pd_info.m"
                    MR_Word base;
#line 566 "pd_info.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 566 "pd_info.m"
                    *transform_hlds__pd_info__HeadVar__7_7 = base;
#line 566 "pd_info.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 1));
#line 566 "pd_info.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_info__HeadVar__2_2));
#line 566 "pd_info.m"
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__pd_info__HeadVar__5_5));
#line 566 "pd_info.m"
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__pd_info__HeadVar__3_3));
#line 566 "pd_info.m"
                    MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__pd_info__HeadVar__4_4));
#line 566 "pd_info.m"
                  }
#line 566 "pd_info.m"
                }
#line 568 "pd_info.m"
              else
#line 569 "pd_info.m"
                {
#line 569 "pd_info.m"
                  {
#line 569 "pd_info.m"
                    MR_Word base;
#line 569 "pd_info.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 569 "pd_info.m"
                    *transform_hlds__pd_info__HeadVar__7_7 = base;
#line 569 "pd_info.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 1));
#line 569 "pd_info.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_59_59));
#line 569 "pd_info.m"
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_58_58));
#line 569 "pd_info.m"
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_57_57));
#line 569 "pd_info.m"
                    MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_56_56));
#line 569 "pd_info.m"
                  }
#line 569 "pd_info.m"
                }
#line 561 "pd_info.m"
            }
#line 554 "pd_info.m"
            break;
#line 554 "pd_info.m"
        }
#line 554 "pd_info.m"
      }
#line 554 "pd_info.m"
  }
#line 550 "pd_info.m"
}

#line 446 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info____Compare____version_is_exact_0_0(
#line 446 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
#line 446 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 446 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
#line 446 "pd_info.m"
{
#line 446 "pd_info.m"
  {
#line 446 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 446 "pd_info.m"
    MR_Integer transform_hlds__pd_info__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;
#line 446 "pd_info.m"
    MR_Integer transform_hlds__pd_info__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__pd_info__HeadVar__3_3;

#line 446 "pd_info.m"
    {
#line 446 "pd_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__pd_info__HeadVar__1_1, transform_hlds__pd_info__Cast_HeadVar1_4, transform_hlds__pd_info__Cast_HeadVar2_5);
#line 446 "pd_info.m"
      return;
    }
#line 446 "pd_info.m"
  }
#line 446 "pd_info.m"
}

#line 446 "pd_info.m"
MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_is_exact_0_0(
#line 446 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_1,
#line 446 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
#line 446 "pd_info.m"
{
#line 2433 "transform_hlds.pd_info.c"
  {
#line 2435 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__HeadVar__2_1 == transform_hlds__pd_info__HeadVar__2_2);

#line 2438 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 2440 "transform_hlds.pd_info.c"
  }
#line 446 "pd_info.m"
}

#line 450 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info____Compare____version_info_0_0(
#line 450 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
#line 450 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 450 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
#line 450 "pd_info.m"
{
#line 450 "pd_info.m"
  {
#line 450 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 450 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastX_30 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;
#line 450 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastY_31 = (MR_Integer) transform_hlds__pd_info__HeadVar__3_3;

#line 450 "pd_info.m"
    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastX_30 == transform_hlds__pd_info__CastY_31);
#line 450 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 2469 "transform_hlds.pd_info.c"
      *transform_hlds__pd_info__HeadVar__1_1 = (MR_Integer) 0;
#line 450 "pd_info.m"
    else
#line 450 "pd_info.m"
      {
#line 450 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));
#line 450 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
#line 450 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 2)));
#line 450 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 3)));
#line 450 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 4)));
#line 450 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 5)));
#line 450 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 6)));
#line 450 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 7)));
#line 450 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 8)));
#line 450 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 0)));
#line 450 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 1)));
#line 450 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 2)));
#line 450 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 3)));
#line 450 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 4)));
#line 450 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 5)));
#line 450 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 6)));
#line 450 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 7)));
#line 450 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 8)));
#line 450 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_22_22;

#line 450 "pd_info.m"
        {
#line 450 "pd_info.m"
          hlds__hlds_goal____Compare____hlds_goal_0_0(&transform_hlds__pd_info__V_22_22, transform_hlds__pd_info__V_4_4, transform_hlds__pd_info__V_13_13);
        }
#line 2519 "transform_hlds.pd_info.c"
        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_22_22 == (MR_Integer) 0);
#line 450 "pd_info.m"
        transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 450 "pd_info.m"
        if (transform_hlds__pd_info__succeeded)
#line 450 "pd_info.m"
          *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_22_22;
#line 450 "pd_info.m"
        else
#line 450 "pd_info.m"
          {
#line 450 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_23_23;

#line 450 "pd_info.m"
            {
#line 450 "pd_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[0], &transform_hlds__pd_info__V_23_23, ((MR_Box) (transform_hlds__pd_info__V_5_5)), ((MR_Box) (transform_hlds__pd_info__V_14_14)));
            }
#line 2539 "transform_hlds.pd_info.c"
            transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_23_23 == (MR_Integer) 0);
#line 450 "pd_info.m"
            transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 450 "pd_info.m"
            if (transform_hlds__pd_info__succeeded)
#line 450 "pd_info.m"
              *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_23_23;
#line 450 "pd_info.m"
            else
#line 450 "pd_info.m"
              {
#line 450 "pd_info.m"
                MR_Word transform_hlds__pd_info__V_24_24;

#line 450 "pd_info.m"
                {
#line 450 "pd_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[10], &transform_hlds__pd_info__V_24_24, ((MR_Box) (transform_hlds__pd_info__V_6_6)), ((MR_Box) (transform_hlds__pd_info__V_15_15)));
                }
#line 2559 "transform_hlds.pd_info.c"
                transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_24_24 == (MR_Integer) 0);
#line 450 "pd_info.m"
                transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 450 "pd_info.m"
                if (transform_hlds__pd_info__succeeded)
#line 450 "pd_info.m"
                  *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_24_24;
#line 450 "pd_info.m"
                else
#line 450 "pd_info.m"
                  {
#line 450 "pd_info.m"
                    MR_Word transform_hlds__pd_info__V_25_25;

#line 450 "pd_info.m"
                    {
#line 450 "pd_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[11], &transform_hlds__pd_info__V_25_25, ((MR_Box) (transform_hlds__pd_info__V_7_7)), ((MR_Box) (transform_hlds__pd_info__V_16_16)));
                    }
#line 2579 "transform_hlds.pd_info.c"
                    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_25_25 == (MR_Integer) 0);
#line 450 "pd_info.m"
                    transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 450 "pd_info.m"
                    if (transform_hlds__pd_info__succeeded)
#line 450 "pd_info.m"
                      *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_25_25;
#line 450 "pd_info.m"
                    else
#line 450 "pd_info.m"
                      {
#line 450 "pd_info.m"
                        MR_Word transform_hlds__pd_info__V_26_26;

#line 450 "pd_info.m"
                        {
#line 450 "pd_info.m"
                          hlds__instmap____Compare____instmap_0_0(&transform_hlds__pd_info__V_26_26, transform_hlds__pd_info__V_8_8, transform_hlds__pd_info__V_17_17);
                        }
#line 2599 "transform_hlds.pd_info.c"
                        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_26_26 == (MR_Integer) 0);
#line 450 "pd_info.m"
                        transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 450 "pd_info.m"
                        if (transform_hlds__pd_info__succeeded)
#line 450 "pd_info.m"
                          *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_26_26;
#line 450 "pd_info.m"
                        else
#line 450 "pd_info.m"
                          {
#line 450 "pd_info.m"
                            MR_Word transform_hlds__pd_info__V_27_27;

#line 450 "pd_info.m"
                            {
#line 450 "pd_info.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__pd_info__V_27_27, transform_hlds__pd_info__V_9_9, transform_hlds__pd_info__V_18_18);
                            }
#line 2619 "transform_hlds.pd_info.c"
                            transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_27_27 == (MR_Integer) 0);
#line 450 "pd_info.m"
                            transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 450 "pd_info.m"
                            if (transform_hlds__pd_info__succeeded)
#line 450 "pd_info.m"
                              *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_27_27;
#line 450 "pd_info.m"
                            else
#line 450 "pd_info.m"
                              {
#line 450 "pd_info.m"
                                MR_Word transform_hlds__pd_info__V_28_28;

#line 450 "pd_info.m"
                                {
#line 450 "pd_info.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__pd_info__V_28_28, transform_hlds__pd_info__V_10_10, transform_hlds__pd_info__V_19_19);
                                }
#line 2639 "transform_hlds.pd_info.c"
                                transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_28_28 == (MR_Integer) 0);
#line 450 "pd_info.m"
                                transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 450 "pd_info.m"
                                if (transform_hlds__pd_info__succeeded)
#line 450 "pd_info.m"
                                  *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_28_28;
#line 450 "pd_info.m"
                                else
#line 450 "pd_info.m"
                                  {
#line 450 "pd_info.m"
                                    MR_Word transform_hlds__pd_info__V_29_29;

#line 450 "pd_info.m"
                                    {
#line 450 "pd_info.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[6], &transform_hlds__pd_info__V_29_29, ((MR_Box) (transform_hlds__pd_info__V_11_11)), ((MR_Box) (transform_hlds__pd_info__V_20_20)));
                                    }
#line 2659 "transform_hlds.pd_info.c"
                                    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_29_29 == (MR_Integer) 0);
#line 450 "pd_info.m"
                                    transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 450 "pd_info.m"
                                    if (transform_hlds__pd_info__succeeded)
#line 450 "pd_info.m"
                                      *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_29_29;
#line 450 "pd_info.m"
                                    else
#line 450 "pd_info.m"
                                      {
#line 450 "pd_info.m"
                                        {
#line 450 "pd_info.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[12], transform_hlds__pd_info__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_info__V_12_12)), ((MR_Box) (transform_hlds__pd_info__V_21_21)));
#line 450 "pd_info.m"
                                          return;
                                        }
#line 450 "pd_info.m"
                                      }
#line 450 "pd_info.m"
                                  }
#line 450 "pd_info.m"
                              }
#line 450 "pd_info.m"
                          }
#line 450 "pd_info.m"
                      }
#line 450 "pd_info.m"
                  }
#line 450 "pd_info.m"
              }
#line 450 "pd_info.m"
          }
#line 450 "pd_info.m"
      }
#line 450 "pd_info.m"
  }
#line 450 "pd_info.m"
}

#line 450 "pd_info.m"
MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_info_0_0(
#line 450 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__1_1,
#line 450 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
#line 450 "pd_info.m"
{
#line 450 "pd_info.m"
  {
#line 450 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 450 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastX_21 = (MR_Integer) transform_hlds__pd_info__HeadVar__1_1;
#line 450 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastY_22 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;

#line 450 "pd_info.m"
    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastX_21 == transform_hlds__pd_info__CastY_22);
#line 450 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 450 "pd_info.m"
      transform_hlds__pd_info__succeeded = MR_TRUE;
#line 450 "pd_info.m"
    else
#line 450 "pd_info.m"
      {
#line 450 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_24_24;
#line 450 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_25_25;
#line 450 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_26_26;
#line 450 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_28_28;
#line 450 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_29_29;
#line 450 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 0)));
#line 450 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 1)));
#line 450 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 2)));
#line 450 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 3)));
#line 450 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 4)));
#line 450 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 5)));
#line 450 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 6)));
#line 450 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 7)));
#line 450 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 8)));
#line 450 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));
#line 450 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
#line 450 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 2)));
#line 450 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 3)));
#line 450 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 4)));
#line 450 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 5)));
#line 450 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 6)));
#line 450 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 7)));
#line 450 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 8)));

#line 2776 "transform_hlds.pd_info.c"
        {
#line 2778 "transform_hlds.pd_info.c"
          transform_hlds__pd_info__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__pd_info__V_3_3, transform_hlds__pd_info__V_12_12);
        }
#line 450 "pd_info.m"
        if (transform_hlds__pd_info__succeeded)
#line 450 "pd_info.m"
          {
#line 2785 "transform_hlds.pd_info.c"
            transform_hlds__pd_info__TypeInfo_24_24 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[0];
#line 2787 "transform_hlds.pd_info.c"
            {
#line 2789 "transform_hlds.pd_info.c"
              transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_24_24, ((MR_Box) (transform_hlds__pd_info__V_4_4)), ((MR_Box) (transform_hlds__pd_info__V_13_13)));
            }
#line 450 "pd_info.m"
            if (transform_hlds__pd_info__succeeded)
#line 450 "pd_info.m"
              {
#line 2796 "transform_hlds.pd_info.c"
                transform_hlds__pd_info__TypeInfo_25_25 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[10];
#line 2798 "transform_hlds.pd_info.c"
                {
#line 2800 "transform_hlds.pd_info.c"
                  transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_25_25, ((MR_Box) (transform_hlds__pd_info__V_5_5)), ((MR_Box) (transform_hlds__pd_info__V_14_14)));
                }
#line 450 "pd_info.m"
                if (transform_hlds__pd_info__succeeded)
#line 450 "pd_info.m"
                  {
#line 2807 "transform_hlds.pd_info.c"
                    transform_hlds__pd_info__TypeInfo_26_26 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[11];
#line 2809 "transform_hlds.pd_info.c"
                    {
#line 2811 "transform_hlds.pd_info.c"
                      transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_26_26, ((MR_Box) (transform_hlds__pd_info__V_6_6)), ((MR_Box) (transform_hlds__pd_info__V_15_15)));
                    }
#line 450 "pd_info.m"
                    if (transform_hlds__pd_info__succeeded)
#line 450 "pd_info.m"
                      {
#line 2818 "transform_hlds.pd_info.c"
                        {
#line 2820 "transform_hlds.pd_info.c"
                          transform_hlds__pd_info__succeeded = hlds__instmap____Unify____instmap_0_0(transform_hlds__pd_info__V_7_7, transform_hlds__pd_info__V_16_16);
                        }
#line 450 "pd_info.m"
                        if (transform_hlds__pd_info__succeeded)
#line 450 "pd_info.m"
                          {
#line 2827 "transform_hlds.pd_info.c"
                            transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_8_8 == transform_hlds__pd_info__V_17_17);
#line 450 "pd_info.m"
                            if (transform_hlds__pd_info__succeeded)
#line 450 "pd_info.m"
                              {
#line 2833 "transform_hlds.pd_info.c"
                                transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_9_9 == transform_hlds__pd_info__V_18_18);
#line 450 "pd_info.m"
                                if (transform_hlds__pd_info__succeeded)
#line 450 "pd_info.m"
                                  {
#line 2839 "transform_hlds.pd_info.c"
                                    transform_hlds__pd_info__TypeInfo_28_28 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[6];
#line 2841 "transform_hlds.pd_info.c"
                                    {
#line 2843 "transform_hlds.pd_info.c"
                                      transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_28_28, ((MR_Box) (transform_hlds__pd_info__V_10_10)), ((MR_Box) (transform_hlds__pd_info__V_19_19)));
                                    }
#line 450 "pd_info.m"
                                    if (transform_hlds__pd_info__succeeded)
#line 450 "pd_info.m"
                                      {
#line 2850 "transform_hlds.pd_info.c"
                                        transform_hlds__pd_info__TypeInfo_29_29 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[12];
#line 2852 "transform_hlds.pd_info.c"
                                        {
#line 2854 "transform_hlds.pd_info.c"
                                          return transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_29_29, ((MR_Box) (transform_hlds__pd_info__V_11_11)), ((MR_Box) (transform_hlds__pd_info__V_20_20)));
                                        }
#line 450 "pd_info.m"
                                      }
#line 450 "pd_info.m"
                                  }
#line 450 "pd_info.m"
                              }
#line 450 "pd_info.m"
                          }
#line 450 "pd_info.m"
                      }
#line 450 "pd_info.m"
                  }
#line 450 "pd_info.m"
              }
#line 450 "pd_info.m"
          }
#line 450 "pd_info.m"
      }
#line 450 "pd_info.m"
    return transform_hlds__pd_info__succeeded;
#line 450 "pd_info.m"
  }
#line 450 "pd_info.m"
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

#line 228 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info____Compare____unfold_info_0_0(
#line 228 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
#line 228 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 228 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
#line 228 "pd_info.m"
{
#line 228 "pd_info.m"
  {
#line 228 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 228 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastX_36 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;
#line 228 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastY_37 = (MR_Integer) transform_hlds__pd_info__HeadVar__3_3;

#line 228 "pd_info.m"
    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastX_36 == transform_hlds__pd_info__CastY_37);
#line 228 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 3030 "transform_hlds.pd_info.c"
      *transform_hlds__pd_info__HeadVar__1_1 = (MR_Integer) 0;
#line 228 "pd_info.m"
    else
#line 228 "pd_info.m"
      {
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 2)));
#line 228 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 3)));
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 4)));
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 5)));
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 6)));
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 7)));
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 8)));
#line 228 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 9)));
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 10)));
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 0)));
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 1)));
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 2)));
#line 228 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 3)));
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 4)));
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 5)));
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 6)));
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 7)));
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 8)));
#line 228 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 9)));
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 10)));
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_26_26;

#line 228 "pd_info.m"
        {
#line 228 "pd_info.m"
          hlds__hlds_pred____Compare____proc_info_0_0(&transform_hlds__pd_info__V_26_26, transform_hlds__pd_info__V_4_4, transform_hlds__pd_info__V_15_15);
        }
#line 3088 "transform_hlds.pd_info.c"
        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_26_26 == (MR_Integer) 0);
#line 228 "pd_info.m"
        transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 228 "pd_info.m"
        if (transform_hlds__pd_info__succeeded)
#line 228 "pd_info.m"
          *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_26_26;
#line 228 "pd_info.m"
        else
#line 228 "pd_info.m"
          {
#line 228 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_27_27;

#line 228 "pd_info.m"
            {
#line 228 "pd_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[6], &transform_hlds__pd_info__V_27_27, ((MR_Box) (transform_hlds__pd_info__V_5_5)), ((MR_Box) (transform_hlds__pd_info__V_16_16)));
            }
#line 3108 "transform_hlds.pd_info.c"
            transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_27_27 == (MR_Integer) 0);
#line 228 "pd_info.m"
            transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 228 "pd_info.m"
            if (transform_hlds__pd_info__succeeded)
#line 228 "pd_info.m"
              *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_27_27;
#line 228 "pd_info.m"
            else
#line 228 "pd_info.m"
              {
#line 228 "pd_info.m"
                MR_Word transform_hlds__pd_info__V_28_28;

#line 228 "pd_info.m"
                {
#line 228 "pd_info.m"
                  hlds__instmap____Compare____instmap_0_0(&transform_hlds__pd_info__V_28_28, transform_hlds__pd_info__V_6_6, transform_hlds__pd_info__V_17_17);
                }
#line 3128 "transform_hlds.pd_info.c"
                transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_28_28 == (MR_Integer) 0);
#line 228 "pd_info.m"
                transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 228 "pd_info.m"
                if (transform_hlds__pd_info__succeeded)
#line 228 "pd_info.m"
                  *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_28_28;
#line 228 "pd_info.m"
                else
#line 228 "pd_info.m"
                  {
#line 228 "pd_info.m"
                    MR_Word transform_hlds__pd_info__V_29_29;

#line 228 "pd_info.m"
                    {
#line 228 "pd_info.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__pd_info__V_29_29, transform_hlds__pd_info__V_7_7, transform_hlds__pd_info__V_18_18);
                    }
#line 3148 "transform_hlds.pd_info.c"
                    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_29_29 == (MR_Integer) 0);
#line 228 "pd_info.m"
                    transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 228 "pd_info.m"
                    if (transform_hlds__pd_info__succeeded)
#line 228 "pd_info.m"
                      *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_29_29;
#line 228 "pd_info.m"
                    else
#line 228 "pd_info.m"
                      {
#line 228 "pd_info.m"
                        MR_Word transform_hlds__pd_info__V_30_30;

#line 228 "pd_info.m"
                        {
#line 228 "pd_info.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[8], &transform_hlds__pd_info__V_30_30, ((MR_Box) (transform_hlds__pd_info__V_8_8)), ((MR_Box) (transform_hlds__pd_info__V_19_19)));
                        }
#line 3168 "transform_hlds.pd_info.c"
                        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_30_30 == (MR_Integer) 0);
#line 228 "pd_info.m"
                        transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 228 "pd_info.m"
                        if (transform_hlds__pd_info__succeeded)
#line 228 "pd_info.m"
                          *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_30_30;
#line 228 "pd_info.m"
                        else
#line 228 "pd_info.m"
                          {
#line 228 "pd_info.m"
                            MR_Word transform_hlds__pd_info__V_31_31;

#line 228 "pd_info.m"
                            {
#line 228 "pd_info.m"
                              hlds__hlds_pred____Compare____pred_info_0_0(&transform_hlds__pd_info__V_31_31, transform_hlds__pd_info__V_9_9, transform_hlds__pd_info__V_20_20);
                            }
#line 3188 "transform_hlds.pd_info.c"
                            transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_31_31 == (MR_Integer) 0);
#line 228 "pd_info.m"
                            transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 228 "pd_info.m"
                            if (transform_hlds__pd_info__succeeded)
#line 228 "pd_info.m"
                              *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_31_31;
#line 228 "pd_info.m"
                            else
#line 228 "pd_info.m"
                              {
#line 228 "pd_info.m"
                                MR_Word transform_hlds__pd_info__V_32_32;

#line 228 "pd_info.m"
                                {
#line 228 "pd_info.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[6], &transform_hlds__pd_info__V_32_32, ((MR_Box) (transform_hlds__pd_info__V_10_10)), ((MR_Box) (transform_hlds__pd_info__V_21_21)));
                                }
#line 3208 "transform_hlds.pd_info.c"
                                transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_32_32 == (MR_Integer) 0);
#line 228 "pd_info.m"
                                transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 228 "pd_info.m"
                                if (transform_hlds__pd_info__succeeded)
#line 228 "pd_info.m"
                                  *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_32_32;
#line 228 "pd_info.m"
                                else
#line 228 "pd_info.m"
                                  {
#line 228 "pd_info.m"
                                    MR_Word transform_hlds__pd_info__V_33_33;

#line 228 "pd_info.m"
                                    {
#line 228 "pd_info.m"
                                      hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__pd_info__V_33_33, transform_hlds__pd_info__V_11_11, transform_hlds__pd_info__V_22_22);
                                    }
#line 3228 "transform_hlds.pd_info.c"
                                    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_33_33 == (MR_Integer) 0);
#line 228 "pd_info.m"
                                    transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 228 "pd_info.m"
                                    if (transform_hlds__pd_info__succeeded)
#line 228 "pd_info.m"
                                      *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_33_33;
#line 228 "pd_info.m"
                                    else
#line 228 "pd_info.m"
                                      {
#line 228 "pd_info.m"
                                        MR_Word transform_hlds__pd_info__V_34_34;
#line 228 "pd_info.m"
                                        MR_Integer transform_hlds__pd_info__V_49_49 = (MR_Integer) transform_hlds__pd_info__V_12_12;
#line 228 "pd_info.m"
                                        MR_Integer transform_hlds__pd_info__V_50_50 = (MR_Integer) transform_hlds__pd_info__V_23_23;

#line 228 "pd_info.m"
                                        {
#line 228 "pd_info.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__pd_info__V_34_34, transform_hlds__pd_info__V_49_49, transform_hlds__pd_info__V_50_50);
                                        }
#line 3252 "transform_hlds.pd_info.c"
                                        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_34_34 == (MR_Integer) 0);
#line 228 "pd_info.m"
                                        transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 228 "pd_info.m"
                                        if (transform_hlds__pd_info__succeeded)
#line 228 "pd_info.m"
                                          *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_34_34;
#line 228 "pd_info.m"
                                        else
#line 228 "pd_info.m"
                                          {
#line 228 "pd_info.m"
                                            MR_Word transform_hlds__pd_info__V_35_35;

#line 228 "pd_info.m"
                                            {
#line 228 "pd_info.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__pd_info__V_35_35, transform_hlds__pd_info__V_13_13, transform_hlds__pd_info__V_24_24);
                                            }
#line 3272 "transform_hlds.pd_info.c"
                                            transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_35_35 == (MR_Integer) 0);
#line 228 "pd_info.m"
                                            transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 228 "pd_info.m"
                                            if (transform_hlds__pd_info__succeeded)
#line 228 "pd_info.m"
                                              *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_35_35;
#line 228 "pd_info.m"
                                            else
#line 228 "pd_info.m"
                                              {
#line 228 "pd_info.m"
                                                MR_Integer transform_hlds__pd_info__V_51_51 = (MR_Integer) transform_hlds__pd_info__V_14_14;
#line 228 "pd_info.m"
                                                MR_Integer transform_hlds__pd_info__V_52_52 = (MR_Integer) transform_hlds__pd_info__V_25_25;

#line 228 "pd_info.m"
                                                {
#line 228 "pd_info.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__pd_info__HeadVar__1_1, transform_hlds__pd_info__V_51_51, transform_hlds__pd_info__V_52_52);
#line 228 "pd_info.m"
                                                  return;
                                                }
#line 228 "pd_info.m"
                                              }
#line 228 "pd_info.m"
                                          }
#line 228 "pd_info.m"
                                      }
#line 228 "pd_info.m"
                                  }
#line 228 "pd_info.m"
                              }
#line 228 "pd_info.m"
                          }
#line 228 "pd_info.m"
                      }
#line 228 "pd_info.m"
                  }
#line 228 "pd_info.m"
              }
#line 228 "pd_info.m"
          }
#line 228 "pd_info.m"
      }
#line 228 "pd_info.m"
  }
#line 228 "pd_info.m"
}

#line 228 "pd_info.m"
MR_bool MR_CALL 
transform_hlds__pd_info____Unify____unfold_info_0_0(
#line 228 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__1_1,
#line 228 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
#line 228 "pd_info.m"
{
#line 228 "pd_info.m"
  {
#line 228 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 228 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastX_25 = (MR_Integer) transform_hlds__pd_info__HeadVar__1_1;
#line 228 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastY_26 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;

#line 228 "pd_info.m"
    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastX_25 == transform_hlds__pd_info__CastY_26);
#line 228 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 228 "pd_info.m"
      transform_hlds__pd_info__succeeded = MR_TRUE;
#line 228 "pd_info.m"
    else
#line 228 "pd_info.m"
      {
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_28_28;
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_30_30;
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_32_32;
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 0)));
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 1)));
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 2)));
#line 228 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 3)));
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 4)));
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 5)));
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 6)));
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 7)));
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 8)));
#line 228 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 9)));
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 10)));
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 2)));
#line 228 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 3)));
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 4)));
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 5)));
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 6)));
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 7)));
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 8)));
#line 228 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 9)));
#line 228 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 10)));

#line 3402 "transform_hlds.pd_info.c"
        {
#line 3404 "transform_hlds.pd_info.c"
          transform_hlds__pd_info__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(transform_hlds__pd_info__V_3_3, transform_hlds__pd_info__V_14_14);
        }
#line 228 "pd_info.m"
        if (transform_hlds__pd_info__succeeded)
#line 228 "pd_info.m"
          {
#line 3411 "transform_hlds.pd_info.c"
            transform_hlds__pd_info__TypeInfo_28_28 = (MR_Word) &transform_hlds__pd_info_scalar_common_2[6];
#line 3413 "transform_hlds.pd_info.c"
            {
#line 3415 "transform_hlds.pd_info.c"
              transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_28_28, ((MR_Box) (transform_hlds__pd_info__V_4_4)), ((MR_Box) (transform_hlds__pd_info__V_15_15)));
            }
#line 228 "pd_info.m"
            if (transform_hlds__pd_info__succeeded)
#line 228 "pd_info.m"
              {
#line 3422 "transform_hlds.pd_info.c"
                {
#line 3424 "transform_hlds.pd_info.c"
                  transform_hlds__pd_info__succeeded = hlds__instmap____Unify____instmap_0_0(transform_hlds__pd_info__V_5_5, transform_hlds__pd_info__V_16_16);
                }
#line 228 "pd_info.m"
                if (transform_hlds__pd_info__succeeded)
#line 228 "pd_info.m"
                  {
#line 3431 "transform_hlds.pd_info.c"
                    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_6_6 == transform_hlds__pd_info__V_17_17);
#line 228 "pd_info.m"
                    if (transform_hlds__pd_info__succeeded)
#line 228 "pd_info.m"
                      {
#line 3437 "transform_hlds.pd_info.c"
                        transform_hlds__pd_info__TypeInfo_30_30 = (MR_Word) &transform_hlds__pd_info_scalar_common_2[8];
#line 3439 "transform_hlds.pd_info.c"
                        {
#line 3441 "transform_hlds.pd_info.c"
                          transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_30_30, ((MR_Box) (transform_hlds__pd_info__V_7_7)), ((MR_Box) (transform_hlds__pd_info__V_18_18)));
                        }
#line 228 "pd_info.m"
                        if (transform_hlds__pd_info__succeeded)
#line 228 "pd_info.m"
                          {
#line 3448 "transform_hlds.pd_info.c"
                            {
#line 3450 "transform_hlds.pd_info.c"
                              transform_hlds__pd_info__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(transform_hlds__pd_info__V_8_8, transform_hlds__pd_info__V_19_19);
                            }
#line 228 "pd_info.m"
                            if (transform_hlds__pd_info__succeeded)
#line 228 "pd_info.m"
                              {
#line 3457 "transform_hlds.pd_info.c"
                                transform_hlds__pd_info__TypeInfo_32_32 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[6];
#line 3459 "transform_hlds.pd_info.c"
                                {
#line 3461 "transform_hlds.pd_info.c"
                                  transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_32_32, ((MR_Box) (transform_hlds__pd_info__V_9_9)), ((MR_Box) (transform_hlds__pd_info__V_20_20)));
                                }
#line 228 "pd_info.m"
                                if (transform_hlds__pd_info__succeeded)
#line 228 "pd_info.m"
                                  {
#line 3468 "transform_hlds.pd_info.c"
                                    {
#line 3470 "transform_hlds.pd_info.c"
                                      transform_hlds__pd_info__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__pd_info__V_10_10, transform_hlds__pd_info__V_21_21);
                                    }
#line 228 "pd_info.m"
                                    if (transform_hlds__pd_info__succeeded)
#line 228 "pd_info.m"
                                      {
#line 3477 "transform_hlds.pd_info.c"
                                        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_11_11 == transform_hlds__pd_info__V_22_22);
#line 228 "pd_info.m"
                                        if (transform_hlds__pd_info__succeeded)
#line 228 "pd_info.m"
                                          {
#line 3483 "transform_hlds.pd_info.c"
                                            transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_12_12 == transform_hlds__pd_info__V_23_23);
#line 228 "pd_info.m"
                                            if (transform_hlds__pd_info__succeeded)
#line 3487 "transform_hlds.pd_info.c"
                                              transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_13_13 == transform_hlds__pd_info__V_24_24);
#line 228 "pd_info.m"
                                          }
#line 228 "pd_info.m"
                                      }
#line 228 "pd_info.m"
                                  }
#line 228 "pd_info.m"
                              }
#line 228 "pd_info.m"
                          }
#line 228 "pd_info.m"
                      }
#line 228 "pd_info.m"
                  }
#line 228 "pd_info.m"
              }
#line 228 "pd_info.m"
          }
#line 228 "pd_info.m"
      }
#line 228 "pd_info.m"
    return transform_hlds__pd_info__succeeded;
#line 228 "pd_info.m"
  }
#line 228 "pd_info.m"
}

#line 264 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info____Compare____pd_proc_arg_info_0_0(
#line 264 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
#line 264 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 264 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
#line 264 "pd_info.m"
{
#line 264 "pd_info.m"
  {
#line 264 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 264 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar1_4 = transform_hlds__pd_info__HeadVar__2_2;
#line 264 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar2_5 = transform_hlds__pd_info__HeadVar__3_3;

#line 264 "pd_info.m"
    {
#line 264 "pd_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[4], transform_hlds__pd_info__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar2_5)));
#line 264 "pd_info.m"
      return;
    }
#line 264 "pd_info.m"
  }
#line 264 "pd_info.m"
}

#line 264 "pd_info.m"
MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_proc_arg_info_0_0(
#line 264 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__1_1,
#line 264 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
#line 264 "pd_info.m"
{
#line 264 "pd_info.m"
  {
#line 264 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 264 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar1_3 = transform_hlds__pd_info__HeadVar__1_1;
#line 264 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar2_4 = transform_hlds__pd_info__HeadVar__2_2;

#line 264 "pd_info.m"
    {
#line 264 "pd_info.m"
      return transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____pd_branch_info_1_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__pd_info__Cast_HeadVar1_3, transform_hlds__pd_info__Cast_HeadVar2_4);
    }
#line 264 "pd_info.m"
    return transform_hlds__pd_info__succeeded;
#line 264 "pd_info.m"
  }
#line 264 "pd_info.m"
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
#line 3602 "transform_hlds.pd_info.c"
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
#line 3660 "transform_hlds.pd_info.c"
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
#line 3680 "transform_hlds.pd_info.c"
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
#line 3700 "transform_hlds.pd_info.c"
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
#line 3720 "transform_hlds.pd_info.c"
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
#line 3740 "transform_hlds.pd_info.c"
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
#line 3760 "transform_hlds.pd_info.c"
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
#line 3780 "transform_hlds.pd_info.c"
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
#line 3800 "transform_hlds.pd_info.c"
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
#line 3820 "transform_hlds.pd_info.c"
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
#line 3840 "transform_hlds.pd_info.c"
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

#line 3973 "transform_hlds.pd_info.c"
        {
#line 3975 "transform_hlds.pd_info.c"
          transform_hlds__pd_info__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__pd_info__V_3_3, transform_hlds__pd_info__V_14_14);
        }
#line 36 "pd_info.m"
        if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
          {
#line 3982 "transform_hlds.pd_info.c"
            transform_hlds__pd_info__TypeInfo_28_28 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[5];
#line 3984 "transform_hlds.pd_info.c"
            {
#line 3986 "transform_hlds.pd_info.c"
              transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_28_28, ((MR_Box) (transform_hlds__pd_info__V_4_4)), ((MR_Box) (transform_hlds__pd_info__V_15_15)));
            }
#line 36 "pd_info.m"
            if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
              {
#line 3993 "transform_hlds.pd_info.c"
                transform_hlds__pd_info__TypeInfo_29_29 = (MR_Word) &transform_hlds__pd_info_scalar_common_2[1];
#line 3995 "transform_hlds.pd_info.c"
                {
#line 3997 "transform_hlds.pd_info.c"
                  transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_29_29, ((MR_Box) (transform_hlds__pd_info__V_5_5)), ((MR_Box) (transform_hlds__pd_info__V_16_16)));
                }
#line 36 "pd_info.m"
                if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
                  {
#line 4004 "transform_hlds.pd_info.c"
                    transform_hlds__pd_info__TypeInfo_30_30 = (MR_Word) &transform_hlds__pd_info_scalar_common_2[5];
#line 4006 "transform_hlds.pd_info.c"
                    {
#line 4008 "transform_hlds.pd_info.c"
                      transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_30_30, ((MR_Box) (transform_hlds__pd_info__V_6_6)), ((MR_Box) (transform_hlds__pd_info__V_17_17)));
                    }
#line 36 "pd_info.m"
                    if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
                      {
#line 4015 "transform_hlds.pd_info.c"
                        transform_hlds__pd_info__TypeInfo_31_31 = (MR_Word) &transform_hlds__pd_info_scalar_common_2[4];
#line 4017 "transform_hlds.pd_info.c"
                        {
#line 4019 "transform_hlds.pd_info.c"
                          transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_31_31, ((MR_Box) (transform_hlds__pd_info__V_7_7)), ((MR_Box) (transform_hlds__pd_info__V_18_18)));
                        }
#line 36 "pd_info.m"
                        if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
                          {
#line 4026 "transform_hlds.pd_info.c"
                            {
#line 4028 "transform_hlds.pd_info.c"
                              transform_hlds__pd_info__succeeded = mercury__counter____Unify____counter_0_0(transform_hlds__pd_info__V_8_8, transform_hlds__pd_info__V_19_19);
                            }
#line 36 "pd_info.m"
                            if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
                              {
#line 4035 "transform_hlds.pd_info.c"
                                {
#line 4037 "transform_hlds.pd_info.c"
                                  transform_hlds__pd_info__succeeded = transform_hlds__pd_term____Unify____global_term_info_0_0(transform_hlds__pd_info__V_9_9, transform_hlds__pd_info__V_20_20);
                                }
#line 36 "pd_info.m"
                                if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
                                  {
#line 4044 "transform_hlds.pd_info.c"
                                    transform_hlds__pd_info__TypeInfo_34_34 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[6];
#line 4046 "transform_hlds.pd_info.c"
                                    {
#line 4048 "transform_hlds.pd_info.c"
                                      transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_34_34, ((MR_Box) (transform_hlds__pd_info__V_10_10)), ((MR_Box) (transform_hlds__pd_info__V_21_21)));
                                    }
#line 36 "pd_info.m"
                                    if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
                                      {
#line 4055 "transform_hlds.pd_info.c"
                                        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_11_11 == transform_hlds__pd_info__V_22_22);
#line 36 "pd_info.m"
                                        if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
                                          {
#line 4061 "transform_hlds.pd_info.c"
                                            transform_hlds__pd_info__TypeInfo_35_35 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[6];
#line 4063 "transform_hlds.pd_info.c"
                                            {
#line 4065 "transform_hlds.pd_info.c"
                                              transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_35_35, ((MR_Box) (transform_hlds__pd_info__V_12_12)), ((MR_Box) (transform_hlds__pd_info__V_23_23)));
                                            }
#line 36 "pd_info.m"
                                            if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
                                              {
#line 4072 "transform_hlds.pd_info.c"
                                                transform_hlds__pd_info__TypeInfo_36_36 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[7];
#line 4074 "transform_hlds.pd_info.c"
                                                {
#line 4076 "transform_hlds.pd_info.c"
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

#line 266 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info____Compare____pd_branch_info_1_0(
#line 266 "pd_info.m"
  MR_Word transform_hlds__pd_info__TypeInfo_for_T_14,
#line 266 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
#line 266 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 266 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
#line 266 "pd_info.m"
{
#line 266 "pd_info.m"
  {
#line 266 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 266 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastX_12 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;
#line 266 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastY_13 = (MR_Integer) transform_hlds__pd_info__HeadVar__3_3;

#line 266 "pd_info.m"
    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastX_12 == transform_hlds__pd_info__CastY_13);
#line 266 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 4134 "transform_hlds.pd_info.c"
      *transform_hlds__pd_info__HeadVar__1_1 = (MR_Integer) 0;
#line 266 "pd_info.m"
    else
#line 266 "pd_info.m"
      {
#line 266 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));
#line 266 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
#line 266 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 2)));
#line 266 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 0)));
#line 266 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 1)));
#line 266 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 2)));
#line 266 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_10_10;

#line 266 "pd_info.m"
        {
#line 266 "pd_info.m"
          mercury__tree234____Compare____tree234_2_0(transform_hlds__pd_info__TypeInfo_for_T_14, (MR_Word) &transform_hlds__pd_info_scalar_common_1[2], &transform_hlds__pd_info__V_10_10, transform_hlds__pd_info__V_4_4, transform_hlds__pd_info__V_7_7);
        }
#line 4160 "transform_hlds.pd_info.c"
        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_10_10 == (MR_Integer) 0);
#line 266 "pd_info.m"
        transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 266 "pd_info.m"
        if (transform_hlds__pd_info__succeeded)
#line 266 "pd_info.m"
          *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_10_10;
#line 266 "pd_info.m"
        else
#line 266 "pd_info.m"
          {
#line 266 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_11_11;

#line 266 "pd_info.m"
            {
#line 266 "pd_info.m"
              mercury__set_ordlist____Compare____set_ordlist_1_0(transform_hlds__pd_info__TypeInfo_for_T_14, &transform_hlds__pd_info__V_11_11, transform_hlds__pd_info__V_5_5, transform_hlds__pd_info__V_8_8);
            }
#line 4180 "transform_hlds.pd_info.c"
            transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_11_11 == (MR_Integer) 0);
#line 266 "pd_info.m"
            transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 266 "pd_info.m"
            if (transform_hlds__pd_info__succeeded)
#line 266 "pd_info.m"
              *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_11_11;
#line 266 "pd_info.m"
            else
#line 266 "pd_info.m"
              {
#line 266 "pd_info.m"
                mercury__set_ordlist____Compare____set_ordlist_1_0(transform_hlds__pd_info__TypeInfo_for_T_14, transform_hlds__pd_info__HeadVar__1_1, transform_hlds__pd_info__V_6_6, transform_hlds__pd_info__V_9_9);
#line 266 "pd_info.m"
                return;
              }
#line 266 "pd_info.m"
          }
#line 266 "pd_info.m"
      }
#line 266 "pd_info.m"
  }
#line 266 "pd_info.m"
}

#line 266 "pd_info.m"
MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_branch_info_1_0(
#line 266 "pd_info.m"
  MR_Word transform_hlds__pd_info__TypeInfo_for_T_11,
#line 266 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__1_1,
#line 266 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
#line 266 "pd_info.m"
{
#line 266 "pd_info.m"
  {
#line 266 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 266 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastX_9 = (MR_Integer) transform_hlds__pd_info__HeadVar__1_1;
#line 266 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastY_10 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;

#line 266 "pd_info.m"
    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastX_9 == transform_hlds__pd_info__CastY_10);
#line 266 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 266 "pd_info.m"
      transform_hlds__pd_info__succeeded = MR_TRUE;
#line 266 "pd_info.m"
    else
#line 266 "pd_info.m"
      {
#line 266 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 0)));
#line 266 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 1)));
#line 266 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 2)));
#line 266 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));
#line 266 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
#line 266 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 2)));

#line 4249 "transform_hlds.pd_info.c"
        {
#line 4251 "transform_hlds.pd_info.c"
          transform_hlds__pd_info__succeeded = mercury__tree234____Unify____tree234_2_0(transform_hlds__pd_info__TypeInfo_for_T_11, (MR_Word) &transform_hlds__pd_info_scalar_common_1[2], transform_hlds__pd_info__V_3_3, transform_hlds__pd_info__V_6_6);
        }
#line 266 "pd_info.m"
        if (transform_hlds__pd_info__succeeded)
#line 266 "pd_info.m"
          {
#line 4258 "transform_hlds.pd_info.c"
            {
#line 4260 "transform_hlds.pd_info.c"
              transform_hlds__pd_info__succeeded = mercury__set_ordlist____Unify____set_ordlist_1_0(transform_hlds__pd_info__TypeInfo_for_T_11, transform_hlds__pd_info__V_4_4, transform_hlds__pd_info__V_7_7);
            }
#line 266 "pd_info.m"
            if (transform_hlds__pd_info__succeeded)
#line 4265 "transform_hlds.pd_info.c"
              {
#line 4267 "transform_hlds.pd_info.c"
                return transform_hlds__pd_info__succeeded = mercury__set_ordlist____Unify____set_ordlist_1_0(transform_hlds__pd_info__TypeInfo_for_T_11, transform_hlds__pd_info__V_5_5, transform_hlds__pd_info__V_8_8);
              }
#line 266 "pd_info.m"
          }
#line 266 "pd_info.m"
      }
#line 266 "pd_info.m"
    return transform_hlds__pd_info__succeeded;
#line 266 "pd_info.m"
  }
#line 266 "pd_info.m"
}

#line 262 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info____Compare____pd_arg_info_0_0(
#line 262 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
#line 262 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 262 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
#line 262 "pd_info.m"
{
#line 262 "pd_info.m"
  {
#line 262 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 262 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar1_4 = transform_hlds__pd_info__HeadVar__2_2;
#line 262 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar2_5 = transform_hlds__pd_info__HeadVar__3_3;

#line 262 "pd_info.m"
    {
#line 262 "pd_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[4], transform_hlds__pd_info__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar2_5)));
#line 262 "pd_info.m"
      return;
    }
#line 262 "pd_info.m"
  }
#line 262 "pd_info.m"
}

#line 262 "pd_info.m"
MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_arg_info_0_0(
#line 262 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__1_1,
#line 262 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
#line 262 "pd_info.m"
{
#line 262 "pd_info.m"
  {
#line 262 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 262 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar1_3 = transform_hlds__pd_info__HeadVar__1_1;
#line 262 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar2_4 = transform_hlds__pd_info__HeadVar__2_2;

#line 262 "pd_info.m"
    {
#line 262 "pd_info.m"
      return transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[4], ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar2_4)));
    }
#line 262 "pd_info.m"
    return transform_hlds__pd_info__succeeded;
#line 262 "pd_info.m"
  }
#line 262 "pd_info.m"
}

#line 432 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info____Compare____maybe_version_0_0(
#line 432 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
#line 432 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 432 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
#line 432 "pd_info.m"
{
#line 432 "pd_info.m"
  {
#line 432 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 432 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastX_28 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;
#line 432 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastY_29 = (MR_Integer) transform_hlds__pd_info__HeadVar__3_3;

#line 432 "pd_info.m"
    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastX_28 == transform_hlds__pd_info__CastY_29);
#line 432 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 4367 "transform_hlds.pd_info.c"
      *transform_hlds__pd_info__HeadVar__1_1 = (MR_Integer) 0;
#line 432 "pd_info.m"
    else
#line 432 "pd_info.m"
    if ((transform_hlds__pd_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 432 "pd_info.m"
      if ((transform_hlds__pd_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 432 "pd_info.m"
        *transform_hlds__pd_info__HeadVar__1_1 = (MR_Integer) 0;
#line 432 "pd_info.m"
      else
#line 4379 "transform_hlds.pd_info.c"
        *transform_hlds__pd_info__HeadVar__1_1 = (MR_Integer) 1;
#line 432 "pd_info.m"
    else
#line 432 "pd_info.m"
      {
#line 432 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 4)));
#line 432 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 3)));
#line 432 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 2)));
#line 432 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
#line 432 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));

#line 432 "pd_info.m"
        if ((transform_hlds__pd_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4398 "transform_hlds.pd_info.c"
          *transform_hlds__pd_info__HeadVar__1_1 = (MR_Integer) 2;
#line 432 "pd_info.m"
        else
#line 432 "pd_info.m"
          {
#line 432 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 0)));
#line 432 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 1)));
#line 432 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 2)));
#line 432 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 3)));
#line 432 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 4)));
#line 432 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_24_24;
#line 432 "pd_info.m"
            MR_Integer transform_hlds__pd_info__V_40_40 = (MR_Integer) transform_hlds__pd_info__V_39_39;
#line 432 "pd_info.m"
            MR_Integer transform_hlds__pd_info__V_41_41 = (MR_Integer) transform_hlds__pd_info__V_19_19;

#line 432 "pd_info.m"
            {
#line 432 "pd_info.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__pd_info__V_24_24, transform_hlds__pd_info__V_40_40, transform_hlds__pd_info__V_41_41);
            }
#line 4426 "transform_hlds.pd_info.c"
            transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_24_24 == (MR_Integer) 0);
#line 432 "pd_info.m"
            transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 432 "pd_info.m"
            if (transform_hlds__pd_info__succeeded)
#line 432 "pd_info.m"
              *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_24_24;
#line 432 "pd_info.m"
            else
#line 432 "pd_info.m"
              {
#line 432 "pd_info.m"
                MR_Word transform_hlds__pd_info__V_25_25;

#line 432 "pd_info.m"
                {
#line 432 "pd_info.m"
                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__pd_info__V_25_25, transform_hlds__pd_info__V_38_38, transform_hlds__pd_info__V_20_20);
                }
#line 4446 "transform_hlds.pd_info.c"
                transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_25_25 == (MR_Integer) 0);
#line 432 "pd_info.m"
                transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 432 "pd_info.m"
                if (transform_hlds__pd_info__succeeded)
#line 432 "pd_info.m"
                  *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_25_25;
#line 432 "pd_info.m"
                else
#line 432 "pd_info.m"
                  {
#line 432 "pd_info.m"
                    MR_Word transform_hlds__pd_info__V_26_26;

#line 432 "pd_info.m"
                    {
#line 432 "pd_info.m"
                      transform_hlds__pd_info____Compare____version_info_0_0(&transform_hlds__pd_info__V_26_26, transform_hlds__pd_info__V_37_37, transform_hlds__pd_info__V_21_21);
                    }
#line 4466 "transform_hlds.pd_info.c"
                    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_26_26 == (MR_Integer) 0);
#line 432 "pd_info.m"
                    transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 432 "pd_info.m"
                    if (transform_hlds__pd_info__succeeded)
#line 432 "pd_info.m"
                      *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_26_26;
#line 432 "pd_info.m"
                    else
#line 432 "pd_info.m"
                      {
#line 432 "pd_info.m"
                        MR_Word transform_hlds__pd_info__V_27_27;

#line 432 "pd_info.m"
                        {
#line 432 "pd_info.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[2], &transform_hlds__pd_info__V_27_27, ((MR_Box) (transform_hlds__pd_info__V_36_36)), ((MR_Box) (transform_hlds__pd_info__V_22_22)));
                        }
#line 4486 "transform_hlds.pd_info.c"
                        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_27_27 == (MR_Integer) 0);
#line 432 "pd_info.m"
                        transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 432 "pd_info.m"
                        if (transform_hlds__pd_info__succeeded)
#line 432 "pd_info.m"
                          *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_27_27;
#line 432 "pd_info.m"
                        else
#line 432 "pd_info.m"
                          {
#line 432 "pd_info.m"
                            {
#line 432 "pd_info.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[3], transform_hlds__pd_info__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_info__V_35_35)), ((MR_Box) (transform_hlds__pd_info__V_23_23)));
#line 432 "pd_info.m"
                              return;
                            }
#line 432 "pd_info.m"
                          }
#line 432 "pd_info.m"
                      }
#line 432 "pd_info.m"
                  }
#line 432 "pd_info.m"
              }
#line 432 "pd_info.m"
          }
#line 432 "pd_info.m"
      }
#line 432 "pd_info.m"
  }
#line 432 "pd_info.m"
}

#line 432 "pd_info.m"
MR_bool MR_CALL 
transform_hlds__pd_info____Unify____maybe_version_0_0(
#line 432 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__1_1,
#line 432 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
#line 432 "pd_info.m"
{
#line 432 "pd_info.m"
  {
#line 432 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 432 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastX_15 = (MR_Integer) transform_hlds__pd_info__HeadVar__1_1;
#line 432 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastY_16 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;

#line 432 "pd_info.m"
    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastX_15 == transform_hlds__pd_info__CastY_16);
#line 432 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 432 "pd_info.m"
      transform_hlds__pd_info__succeeded = MR_TRUE;
#line 432 "pd_info.m"
    else
#line 432 "pd_info.m"
    if ((transform_hlds__pd_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 432 "pd_info.m"
      {
#line 432 "pd_info.m"
        MR_Integer transform_hlds__pd_info__CastX_3 = (MR_Integer) transform_hlds__pd_info__HeadVar__1_1;
#line 432 "pd_info.m"
        MR_Integer transform_hlds__pd_info__CastY_4 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;

#line 432 "pd_info.m"
        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastY_4 == transform_hlds__pd_info__CastX_3);
#line 432 "pd_info.m"
      }
#line 432 "pd_info.m"
    else
#line 432 "pd_info.m"
      {
#line 432 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_18_18;
#line 432 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_19_19;
#line 432 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 0)));
#line 432 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 1)));
#line 432 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 2)));
#line 432 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 3)));
#line 432 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 4)));
#line 432 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_10_10;
#line 432 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_11_11;
#line 432 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_12_12;
#line 432 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_13_13;
#line 432 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_14_14;

#line 432 "pd_info.m"
        transform_hlds__pd_info__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 432 "pd_info.m"
        if (transform_hlds__pd_info__succeeded)
#line 432 "pd_info.m"
          {
#line 432 "pd_info.m"
            transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));
#line 432 "pd_info.m"
            transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
#line 432 "pd_info.m"
            transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 2)));
#line 432 "pd_info.m"
            transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 3)));
#line 432 "pd_info.m"
            transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 4)));
#line 4606 "transform_hlds.pd_info.c"
            transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_5_5 == transform_hlds__pd_info__V_10_10);
#line 432 "pd_info.m"
            if (transform_hlds__pd_info__succeeded)
#line 432 "pd_info.m"
              {
#line 4612 "transform_hlds.pd_info.c"
                {
#line 4614 "transform_hlds.pd_info.c"
                  transform_hlds__pd_info__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__pd_info__V_6_6, transform_hlds__pd_info__V_11_11);
                }
#line 432 "pd_info.m"
                if (transform_hlds__pd_info__succeeded)
#line 432 "pd_info.m"
                  {
#line 4621 "transform_hlds.pd_info.c"
                    {
#line 4623 "transform_hlds.pd_info.c"
                      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____version_info_0_0(transform_hlds__pd_info__V_7_7, transform_hlds__pd_info__V_12_12);
                    }
#line 432 "pd_info.m"
                    if (transform_hlds__pd_info__succeeded)
#line 432 "pd_info.m"
                      {
#line 4630 "transform_hlds.pd_info.c"
                        transform_hlds__pd_info__TypeInfo_18_18 = (MR_Word) &transform_hlds__pd_info_scalar_common_2[2];
#line 4632 "transform_hlds.pd_info.c"
                        {
#line 4634 "transform_hlds.pd_info.c"
                          transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_18_18, ((MR_Box) (transform_hlds__pd_info__V_8_8)), ((MR_Box) (transform_hlds__pd_info__V_13_13)));
                        }
#line 432 "pd_info.m"
                        if (transform_hlds__pd_info__succeeded)
#line 432 "pd_info.m"
                          {
#line 4641 "transform_hlds.pd_info.c"
                            transform_hlds__pd_info__TypeInfo_19_19 = (MR_Word) &transform_hlds__pd_info_scalar_common_2[3];
#line 4643 "transform_hlds.pd_info.c"
                            {
#line 4645 "transform_hlds.pd_info.c"
                              return transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_19_19, ((MR_Box) (transform_hlds__pd_info__V_9_9)), ((MR_Box) (transform_hlds__pd_info__V_14_14)));
                            }
#line 432 "pd_info.m"
                          }
#line 432 "pd_info.m"
                      }
#line 432 "pd_info.m"
                  }
#line 432 "pd_info.m"
              }
#line 432 "pd_info.m"
          }
#line 432 "pd_info.m"
      }
#line 432 "pd_info.m"
    return transform_hlds__pd_info__succeeded;
#line 432 "pd_info.m"
  }
#line 432 "pd_info.m"
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

#line 280 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info____Compare____branch_info_map_1_0(
#line 280 "pd_info.m"
  MR_Word transform_hlds__pd_info__TypeInfo_for_T_6,
#line 280 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
#line 280 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 280 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
#line 280 "pd_info.m"
{
#line 280 "pd_info.m"
  {
#line 280 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 280 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar1_4 = transform_hlds__pd_info__HeadVar__2_2;
#line 280 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar2_5 = transform_hlds__pd_info__HeadVar__3_3;

#line 280 "pd_info.m"
    {
#line 280 "pd_info.m"
      mercury__tree234____Compare____tree234_2_0(transform_hlds__pd_info__TypeInfo_for_T_6, (MR_Word) &transform_hlds__pd_info_scalar_common_1[2], transform_hlds__pd_info__HeadVar__1_1, transform_hlds__pd_info__Cast_HeadVar1_4, transform_hlds__pd_info__Cast_HeadVar2_5);
#line 280 "pd_info.m"
      return;
    }
#line 280 "pd_info.m"
  }
#line 280 "pd_info.m"
}

#line 280 "pd_info.m"
MR_bool MR_CALL 
transform_hlds__pd_info____Unify____branch_info_map_1_0(
#line 280 "pd_info.m"
  MR_Word transform_hlds__pd_info__TypeInfo_for_T_5,
#line 280 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__1_1,
#line 280 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
#line 280 "pd_info.m"
{
#line 280 "pd_info.m"
  {
#line 280 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 280 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar1_3 = transform_hlds__pd_info__HeadVar__1_1;
#line 280 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar2_4 = transform_hlds__pd_info__HeadVar__2_2;

#line 280 "pd_info.m"
    {
#line 280 "pd_info.m"
      return transform_hlds__pd_info__succeeded = mercury__tree234____Unify____tree234_2_0(transform_hlds__pd_info__TypeInfo_for_T_5, (MR_Word) &transform_hlds__pd_info_scalar_common_1[2], transform_hlds__pd_info__Cast_HeadVar1_3, transform_hlds__pd_info__Cast_HeadVar2_4);
    }
#line 280 "pd_info.m"
    return transform_hlds__pd_info__succeeded;
#line 280 "pd_info.m"
  }
#line 280 "pd_info.m"
}

#line 615 "pd_info.m"
static MR_bool MR_CALL 
transform_hlds__pd_info__check_insts_8_p_0(
#line 615 "pd_info.m"
  MR_Word transform_hlds__pd_info__ModuleInfo_1,
#line 615 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 615 "pd_info.m"
  MR_Word transform_hlds__pd_info__VarRenaming_3,
#line 615 "pd_info.m"
  MR_Word transform_hlds__pd_info__OldInstMap_4,
#line 615 "pd_info.m"
  MR_Word transform_hlds__pd_info__NewInstMap_5,
#line 615 "pd_info.m"
  MR_Word transform_hlds__pd_info__VarTypes_6,
#line 615 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_0_7,
#line 615 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_8)
#line 615 "pd_info.m"
{
#line 619 "pd_info.m"
  while (MR_TRUE)
#line 619 "pd_info.m"
    {
#line 619 "pd_info.m"
      /* tailcall optimized into a loop */
#line 619 "pd_info.m"
      {
#line 619 "pd_info.m"
        MR_bool transform_hlds__pd_info__succeeded;

#line 619 "pd_info.m"
        if ((transform_hlds__pd_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 619 "pd_info.m"
          {
#line 619 "pd_info.m"
            *transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_8 = transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_0_7;
#line 619 "pd_info.m"
            transform_hlds__pd_info__succeeded = MR_TRUE;
#line 619 "pd_info.m"
          }
#line 619 "pd_info.m"
        else
#line 621 "pd_info.m"
          {
#line 621 "pd_info.m"
            MR_Word transform_hlds__pd_info__TypeInfo_34_34;
#line 621 "pd_info.m"
            MR_Word transform_hlds__pd_info__OldVar_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));
#line 621 "pd_info.m"
            MR_Word transform_hlds__pd_info__Vars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
#line 621 "pd_info.m"
            MR_Word transform_hlds__pd_info__OldVarInst_25;
#line 621 "pd_info.m"
            MR_Word transform_hlds__pd_info__NewVar_26;
#line 621 "pd_info.m"
            MR_Word transform_hlds__pd_info__NewVarInst_27;
#line 621 "pd_info.m"
            MR_Word transform_hlds__pd_info__Type_28;
#line 621 "pd_info.m"
            MR_Word transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_31_31;
#line 623 "pd_info.m"
            MR_Box transform_hlds__pd_info__conv0_NewVar_26;

#line 622 "pd_info.m"
            {
#line 622 "pd_info.m"
              hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__pd_info__OldInstMap_4, transform_hlds__pd_info__OldVar_18, &transform_hlds__pd_info__OldVarInst_25);
            }
#line 4865 "transform_hlds.pd_info.c"
            transform_hlds__pd_info__TypeInfo_34_34 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[1];
#line 623 "pd_info.m"
            {
#line 623 "pd_info.m"
              mercury__map__lookup_3_p_0(transform_hlds__pd_info__TypeInfo_34_34, transform_hlds__pd_info__TypeInfo_34_34, transform_hlds__pd_info__VarRenaming_3, ((MR_Box) (transform_hlds__pd_info__OldVar_18)), &transform_hlds__pd_info__conv0_NewVar_26);
            }
#line 623 "pd_info.m"
            transform_hlds__pd_info__NewVar_26 = ((MR_Word) transform_hlds__pd_info__conv0_NewVar_26);
#line 624 "pd_info.m"
            {
#line 624 "pd_info.m"
              hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__pd_info__NewInstMap_5, transform_hlds__pd_info__NewVar_26, &transform_hlds__pd_info__NewVarInst_27);
            }
#line 625 "pd_info.m"
            {
#line 625 "pd_info.m"
              hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__pd_info__VarTypes_6, transform_hlds__pd_info__NewVar_26, &transform_hlds__pd_info__Type_28);
            }
#line 626 "pd_info.m"
            {
#line 626 "pd_info.m"
              transform_hlds__pd_info__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(transform_hlds__pd_info__NewVarInst_27, transform_hlds__pd_info__OldVarInst_25, transform_hlds__pd_info__Type_28, transform_hlds__pd_info__ModuleInfo_1);
            }
#line 621 "pd_info.m"
            if (transform_hlds__pd_info__succeeded)
#line 621 "pd_info.m"
              {
#line 637 "pd_info.m"
#line 637 "pd_info.m"
                switch (transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_0_7) {
#line 637 "pd_info.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 637 "pd_info.m"
                  case (MR_Integer) 0:
#line 634 "pd_info.m"
                    {
#line 632 "pd_info.m"
                      {
#line 632 "pd_info.m"
                        transform_hlds__pd_info__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(transform_hlds__pd_info__OldVarInst_25, transform_hlds__pd_info__NewVarInst_27, transform_hlds__pd_info__Type_28, transform_hlds__pd_info__ModuleInfo_1);
                      }
#line 634 "pd_info.m"
                      if (transform_hlds__pd_info__succeeded)
#line 633 "pd_info.m"
                        transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_31_31 = (MR_Integer) 0;
#line 634 "pd_info.m"
                      else
#line 635 "pd_info.m"
                        transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_31_31 = (MR_Integer) 1;
#line 634 "pd_info.m"
                    }
#line 637 "pd_info.m"
                    break;
#line 637 "pd_info.m"
                  case (MR_Integer) 1:
#line 638 "pd_info.m"
                    transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_31_31 = transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_0_7;
#line 637 "pd_info.m"
                    break;
#line 637 "pd_info.m"
                }
#line 640 "pd_info.m"
                /* direct tailcall eliminated */
#line 640 "pd_info.m"
                {
#line 640 "pd_info.m"
                  MR_Word transform_hlds__pd_info__HeadVar__2__tmp_copy_2 = transform_hlds__pd_info__Vars_19;
#line 640 "pd_info.m"
                  MR_Word transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_0__tmp_copy_7 = transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_31_31;

#line 640 "pd_info.m"
                  transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_0_7 = transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_0__tmp_copy_7;
#line 640 "pd_info.m"
                  transform_hlds__pd_info__HeadVar__2_2 = transform_hlds__pd_info__HeadVar__2__tmp_copy_2;
#line 640 "pd_info.m"
                }
#line 640 "pd_info.m"
                continue;
#line 621 "pd_info.m"
              }
#line 621 "pd_info.m"
          }
#line 619 "pd_info.m"
        return transform_hlds__pd_info__succeeded;
#line 619 "pd_info.m"
      }
#line 619 "pd_info.m"
      break;
#line 619 "pd_info.m"
    }
#line 615 "pd_info.m"
}

#line 510 "pd_info.m"
static MR_bool MR_CALL 
transform_hlds__pd_info__get_matching_version_7_p_0(
#line 510 "pd_info.m"
  MR_Word transform_hlds__pd_info__ModuleInfo_1,
#line 510 "pd_info.m"
  MR_Word transform_hlds__pd_info__ThisGoal_2,
#line 510 "pd_info.m"
  MR_Word transform_hlds__pd_info__ThisInstMap_3,
#line 510 "pd_info.m"
  MR_Word transform_hlds__pd_info__VarTypes_4,
#line 510 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__5_5,
#line 510 "pd_info.m"
  MR_Word transform_hlds__pd_info__Versions_6,
#line 510 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__7_7)
#line 510 "pd_info.m"
{
#line 514 "pd_info.m"
  while (MR_TRUE)
#line 514 "pd_info.m"
    {
#line 514 "pd_info.m"
      /* tailcall optimized into a loop */
#line 514 "pd_info.m"
      {
#line 514 "pd_info.m"
        MR_bool transform_hlds__pd_info__succeeded;

#line 514 "pd_info.m"
        if ((transform_hlds__pd_info__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 514 "pd_info.m"
          {
#line 514 "pd_info.m"
            *transform_hlds__pd_info__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 514 "pd_info.m"
            transform_hlds__pd_info__succeeded = MR_TRUE;
#line 514 "pd_info.m"
          }
#line 514 "pd_info.m"
        else
#line 516 "pd_info.m"
          {
#line 516 "pd_info.m"
            MR_Word transform_hlds__pd_info__VersionId_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 0)));
#line 516 "pd_info.m"
            MR_Word transform_hlds__pd_info__VersionIds_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 1)));
#line 516 "pd_info.m"
            MR_Word transform_hlds__pd_info__Version_21;
#line 516 "pd_info.m"
            MR_Word transform_hlds__pd_info__OldGoal_22;
#line 516 "pd_info.m"
            MR_Word transform_hlds__pd_info__OldArgs_24;
#line 516 "pd_info.m"
            MR_Word transform_hlds__pd_info__OldArgTypes_25;
#line 516 "pd_info.m"
            MR_Word transform_hlds__pd_info__OldInstMap_26;
#line 517 "pd_info.m"
            MR_Box transform_hlds__pd_info__conv0_Version_21;
#line 518 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_23_23;
#line 518 "pd_info.m"
            MR_Integer transform_hlds__pd_info__V_27_27;
#line 518 "pd_info.m"
            MR_Integer transform_hlds__pd_info__V_28_28;
#line 518 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_29_29;
#line 518 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_30_30;
#line 541 "pd_info.m"
            MR_Word transform_hlds__pd_info__MaybeVersion1_31;
#line 541 "pd_info.m"
            MR_Word transform_hlds__pd_info__OldNewRenaming_61;
#line 541 "pd_info.m"
            MR_Word transform_hlds__pd_info__TypeRenaming_62;
#line 541 "pd_info.m"
            MR_Word transform_hlds__pd_info__Exact_67;
#line 598 "pd_info.m"
            MR_Word transform_hlds__pd_info__TypeCtorInfo_31_69;
#line 598 "pd_info.m"
            MR_Word transform_hlds__pd_info__OldGoalInfo_64;
#line 598 "pd_info.m"
            MR_Word transform_hlds__pd_info__OldNonLocals0_65;
#line 598 "pd_info.m"
            MR_Word transform_hlds__pd_info__OldNonLocalsList_66;
#line 598 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_68_68;
#line 601 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_63_63;

#line 517 "pd_info.m"
            {
#line 517 "pd_info.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0, transform_hlds__pd_info__Versions_6, ((MR_Box) (transform_hlds__pd_info__VersionId_17)), &transform_hlds__pd_info__conv0_Version_21);
            }
#line 517 "pd_info.m"
            transform_hlds__pd_info__Version_21 = ((MR_Word) transform_hlds__pd_info__conv0_Version_21);
#line 518 "pd_info.m"
            transform_hlds__pd_info__OldGoal_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_21, (MR_Integer) 0)));
#line 518 "pd_info.m"
            transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_21, (MR_Integer) 1)));
#line 518 "pd_info.m"
            transform_hlds__pd_info__OldArgs_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_21, (MR_Integer) 2)));
#line 518 "pd_info.m"
            transform_hlds__pd_info__OldArgTypes_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_21, (MR_Integer) 3)));
#line 518 "pd_info.m"
            transform_hlds__pd_info__OldInstMap_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_21, (MR_Integer) 4)));
#line 518 "pd_info.m"
            transform_hlds__pd_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_21, (MR_Integer) 5)));
#line 518 "pd_info.m"
            transform_hlds__pd_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_21, (MR_Integer) 6)));
#line 518 "pd_info.m"
            transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_21, (MR_Integer) 7)));
#line 518 "pd_info.m"
            transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_21, (MR_Integer) 8)));
#line 599 "pd_info.m"
            {
#line 599 "pd_info.m"
              transform_hlds__pd_info__succeeded = transform_hlds__pd_util__goals_match_8_p_0(transform_hlds__pd_info__ModuleInfo_1, transform_hlds__pd_info__OldGoal_22, transform_hlds__pd_info__OldArgs_24, transform_hlds__pd_info__OldArgTypes_25, transform_hlds__pd_info__ThisGoal_2, transform_hlds__pd_info__VarTypes_4, &transform_hlds__pd_info__OldNewRenaming_61, &transform_hlds__pd_info__TypeRenaming_62);
            }
#line 598 "pd_info.m"
            if (transform_hlds__pd_info__succeeded)
#line 598 "pd_info.m"
              {
#line 601 "pd_info.m"
                transform_hlds__pd_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__OldGoal_22, (MR_Integer) 0)));
#line 601 "pd_info.m"
                transform_hlds__pd_info__OldGoalInfo_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__OldGoal_22, (MR_Integer) 1)));
#line 602 "pd_info.m"
                {
#line 602 "pd_info.m"
                  transform_hlds__pd_info__OldNonLocals0_65 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__pd_info__OldGoalInfo_64);
                }
#line 5093 "transform_hlds.pd_info.c"
                transform_hlds__pd_info__TypeCtorInfo_31_69 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 603 "pd_info.m"
                {
#line 603 "pd_info.m"
                  parse_tree__set_of_var__to_sorted_list_2_p_0(transform_hlds__pd_info__TypeCtorInfo_31_69, transform_hlds__pd_info__OldNonLocals0_65, &transform_hlds__pd_info__OldNonLocalsList_66);
                }
#line 605 "pd_info.m"
                transform_hlds__pd_info__V_68_68 = (MR_Integer) 0;
#line 604 "pd_info.m"
                {
#line 604 "pd_info.m"
                  transform_hlds__pd_info__succeeded = transform_hlds__pd_info__check_insts_8_p_0(transform_hlds__pd_info__ModuleInfo_1, transform_hlds__pd_info__OldNonLocalsList_66, transform_hlds__pd_info__OldNewRenaming_61, transform_hlds__pd_info__OldInstMap_26, transform_hlds__pd_info__ThisInstMap_3, transform_hlds__pd_info__VarTypes_4, transform_hlds__pd_info__V_68_68, &transform_hlds__pd_info__Exact_67);
                }
#line 598 "pd_info.m"
                if (transform_hlds__pd_info__succeeded)
#line 598 "pd_info.m"
                  {
#line 607 "pd_info.m"
                    {
#line 607 "pd_info.m"
                      transform_hlds__pd_info__MaybeVersion1_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 607 "pd_info.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeVersion1_31, 0) = ((MR_Box) (transform_hlds__pd_info__Exact_67));
#line 607 "pd_info.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeVersion1_31, 1) = ((MR_Box) (transform_hlds__pd_info__VersionId_17));
#line 607 "pd_info.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeVersion1_31, 2) = ((MR_Box) (transform_hlds__pd_info__Version_21));
#line 607 "pd_info.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeVersion1_31, 3) = ((MR_Box) (transform_hlds__pd_info__OldNewRenaming_61));
#line 607 "pd_info.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeVersion1_31, 4) = ((MR_Box) (transform_hlds__pd_info__TypeRenaming_62));
#line 607 "pd_info.m"
                    }
#line 607 "pd_info.m"
                    transform_hlds__pd_info__succeeded = MR_TRUE;
#line 598 "pd_info.m"
                  }
#line 598 "pd_info.m"
              }
#line 541 "pd_info.m"
            if (transform_hlds__pd_info__succeeded)
#line 529 "pd_info.m"
#line 529 "pd_info.m"
              switch (transform_hlds__pd_info__Exact_67) {
#line 529 "pd_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 529 "pd_info.m"
                case (MR_Integer) 0:
#line 531 "pd_info.m"
                  {
#line 531 "pd_info.m"
                    *transform_hlds__pd_info__HeadVar__7_7 = transform_hlds__pd_info__MaybeVersion1_31;
#line 531 "pd_info.m"
                    transform_hlds__pd_info__succeeded = MR_TRUE;
#line 531 "pd_info.m"
                  }
#line 529 "pd_info.m"
                  break;
#line 529 "pd_info.m"
                case (MR_Integer) 1:
#line 534 "pd_info.m"
                  {
#line 534 "pd_info.m"
                    MR_Word transform_hlds__pd_info__MaybeVersion2_40;

#line 535 "pd_info.m"
                    {
#line 535 "pd_info.m"
                      transform_hlds__pd_info__succeeded = transform_hlds__pd_info__get_matching_version_7_p_0(transform_hlds__pd_info__ModuleInfo_1, transform_hlds__pd_info__ThisGoal_2, transform_hlds__pd_info__ThisInstMap_3, transform_hlds__pd_info__VarTypes_4, transform_hlds__pd_info__VersionIds_18, transform_hlds__pd_info__Versions_6, &transform_hlds__pd_info__MaybeVersion2_40);
                    }
#line 534 "pd_info.m"
                    if (transform_hlds__pd_info__succeeded)
#line 534 "pd_info.m"
                      {
#line 538 "pd_info.m"
                        {
#line 538 "pd_info.m"
                          transform_hlds__pd_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_105_99_107_95_118_101_114_115_105_111_110_95_95_91_49_93_95_48_7_p_0(transform_hlds__pd_info__VersionId_17, transform_hlds__pd_info__OldNewRenaming_61, transform_hlds__pd_info__TypeRenaming_62, transform_hlds__pd_info__Version_21, transform_hlds__pd_info__MaybeVersion2_40, transform_hlds__pd_info__HeadVar__7_7);
                        }
#line 538 "pd_info.m"
                        transform_hlds__pd_info__succeeded = MR_TRUE;
#line 534 "pd_info.m"
                      }
#line 534 "pd_info.m"
                  }
#line 529 "pd_info.m"
                  break;
#line 529 "pd_info.m"
              }
#line 541 "pd_info.m"
            else
#line 542 "pd_info.m"
              {
#line 542 "pd_info.m"
                /* direct tailcall eliminated */
#line 542 "pd_info.m"
                {
#line 542 "pd_info.m"
                  MR_Word transform_hlds__pd_info__HeadVar__5__tmp_copy_5 = transform_hlds__pd_info__VersionIds_18;

#line 542 "pd_info.m"
                  transform_hlds__pd_info__HeadVar__5_5 = transform_hlds__pd_info__HeadVar__5__tmp_copy_5;
#line 542 "pd_info.m"
                }
#line 542 "pd_info.m"
                continue;
#line 542 "pd_info.m"
              }
#line 516 "pd_info.m"
          }
#line 514 "pd_info.m"
        return transform_hlds__pd_info__succeeded;
#line 514 "pd_info.m"
      }
#line 514 "pd_info.m"
      break;
#line 514 "pd_info.m"
    }
#line 510 "pd_info.m"
}

#line 428 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__remove_version_3_p_0(
#line 428 "pd_info.m"
  MR_Word transform_hlds__pd_info__PredProcId_4,
#line 428 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21,
#line 428 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_22)
#line 428 "pd_info.m"
{
#line 725 "pd_info.m"
  {
#line 725 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 725 "pd_info.m"
    MR_Word transform_hlds__pd_info__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 725 "pd_info.m"
    MR_Word transform_hlds__pd_info__TypeCtorInfo_36_36 = (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0;
#line 725 "pd_info.m"
    MR_Word transform_hlds__pd_info__Versions0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 3)));
#line 725 "pd_info.m"
    MR_Word transform_hlds__pd_info__Version_7;
#line 725 "pd_info.m"
    MR_Word transform_hlds__pd_info__Goal_8;
#line 725 "pd_info.m"
    MR_Word transform_hlds__pd_info__Calls_9;
#line 725 "pd_info.m"
    MR_Word transform_hlds__pd_info__Versions_10;
#line 725 "pd_info.m"
    MR_Word transform_hlds__pd_info__GoalIndex0_11;
#line 725 "pd_info.m"
    MR_Word transform_hlds__pd_info__CreatedVersions0_15;
#line 725 "pd_info.m"
    MR_Word transform_hlds__pd_info__CreatedVersions_16;
#line 725 "pd_info.m"
    MR_Word transform_hlds__pd_info__ModuleInfo0_17;
#line 725 "pd_info.m"
    MR_Word transform_hlds__pd_info__PredId_18;
#line 725 "pd_info.m"
    MR_Word transform_hlds__pd_info__ModuleInfo_20;
#line 725 "pd_info.m"
    MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23;
#line 725 "pd_info.m"
    MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24;
#line 725 "pd_info.m"
    MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25;
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 0)));
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 1)));
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 2)));
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 4)));
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 5)));
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 6)));
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 7)));
#line 171 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 8)));
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 9)));
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 10)));
#line 727 "pd_info.m"
    MR_Box transform_hlds__pd_info__conv0_Version_7;
#line 728 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27;
#line 728 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28;
#line 728 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29;
#line 728 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30;
#line 728 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_31_31;
#line 728 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_32_32;
#line 728 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_33_33;
#line 728 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_34_34;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_55_55;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_56_56;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_59_59;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_60_60;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_61_61;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_62_62;
#line 189 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_63_63;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_64_64;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_65_65;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_58_58;
#line 738 "pd_info.m"
    MR_Word transform_hlds__pd_info__GoalVersions0_12;
#line 734 "pd_info.m"
    MR_Word transform_hlds__pd_info__TypeInfo_37_37;
#line 734 "pd_info.m"
    MR_Box transform_hlds__pd_info__conv1_GoalVersions0_12;
#line 747 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_19_19;

#line 727 "pd_info.m"
    {
#line 727 "pd_info.m"
      mercury__map__lookup_3_p_0(transform_hlds__pd_info__TypeCtorInfo_35_35, transform_hlds__pd_info__TypeCtorInfo_36_36, transform_hlds__pd_info__Versions0_6, ((MR_Box) (transform_hlds__pd_info__PredProcId_4)), &transform_hlds__pd_info__conv0_Version_7);
    }
#line 727 "pd_info.m"
    transform_hlds__pd_info__Version_7 = ((MR_Word) transform_hlds__pd_info__conv0_Version_7);
#line 728 "pd_info.m"
    transform_hlds__pd_info__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 0)));
#line 728 "pd_info.m"
    transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 1)));
#line 728 "pd_info.m"
    transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 2)));
#line 728 "pd_info.m"
    transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 3)));
#line 728 "pd_info.m"
    transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 4)));
#line 728 "pd_info.m"
    transform_hlds__pd_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 5)));
#line 728 "pd_info.m"
    transform_hlds__pd_info__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 6)));
#line 728 "pd_info.m"
    transform_hlds__pd_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 7)));
#line 728 "pd_info.m"
    transform_hlds__pd_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 8)));
#line 729 "pd_info.m"
    {
#line 729 "pd_info.m"
      transform_hlds__pd_util__goal_get_calls_2_p_0(transform_hlds__pd_info__Goal_8, &transform_hlds__pd_info__Calls_9);
    }
#line 730 "pd_info.m"
    {
#line 730 "pd_info.m"
      mercury__map__delete_3_p_0(transform_hlds__pd_info__TypeCtorInfo_35_35, transform_hlds__pd_info__TypeCtorInfo_36_36, ((MR_Box) (transform_hlds__pd_info__PredProcId_4)), transform_hlds__pd_info__Versions0_6, &transform_hlds__pd_info__Versions_10);
    }
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 0)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 1)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__GoalIndex0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 2)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 3)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 4)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 5)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 6)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 7)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 8)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 9)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 10)));
#line 189 "pd_info.m"
    {
#line 189 "pd_info.m"
      transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, 0) = ((MR_Box) (transform_hlds__pd_info__V_55_55));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, 1) = ((MR_Box) (transform_hlds__pd_info__V_56_56));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, 2) = ((MR_Box) (transform_hlds__pd_info__GoalIndex0_11));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, 3) = ((MR_Box) (transform_hlds__pd_info__Versions_10));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, 4) = ((MR_Box) (transform_hlds__pd_info__V_59_59));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, 5) = ((MR_Box) (transform_hlds__pd_info__V_60_60));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, 6) = ((MR_Box) (transform_hlds__pd_info__V_61_61));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, 7) = ((MR_Box) (transform_hlds__pd_info__V_62_62));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, 8) = ((MR_Box) (transform_hlds__pd_info__V_63_63));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, 9) = ((MR_Box) (transform_hlds__pd_info__V_64_64));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, 10) = ((MR_Box) (transform_hlds__pd_info__V_65_65));
#line 189 "pd_info.m"
    }
#line 5414 "transform_hlds.pd_info.c"
    transform_hlds__pd_info__TypeInfo_37_37 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[0];
#line 734 "pd_info.m"
    {
#line 734 "pd_info.m"
      transform_hlds__pd_info__succeeded = mercury__map__search_3_p_0(transform_hlds__pd_info__TypeInfo_37_37, transform_hlds__pd_info__TypeInfo_37_37, transform_hlds__pd_info__GoalIndex0_11, ((MR_Box) (transform_hlds__pd_info__Calls_9)), &transform_hlds__pd_info__conv1_GoalVersions0_12);
    }
#line 734 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 734 "pd_info.m"
      {
#line 734 "pd_info.m"
        transform_hlds__pd_info__GoalVersions0_12 = ((MR_Word) transform_hlds__pd_info__conv1_GoalVersions0_12);
#line 734 "pd_info.m"
        transform_hlds__pd_info__succeeded = MR_TRUE;
#line 734 "pd_info.m"
      }
#line 738 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 735 "pd_info.m"
      {
#line 735 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_38_38;
#line 735 "pd_info.m"
        MR_Word transform_hlds__pd_info__GoalVersions_13;
#line 735 "pd_info.m"
        MR_Word transform_hlds__pd_info__GoalIndex_14;
#line 187 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_82_82;
#line 187 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_83_83;
#line 187 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_85_85;
#line 187 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_86_86;
#line 187 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_87_87;
#line 187 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_88_88;
#line 187 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_89_89;
#line 187 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_90_90;
#line 187 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_91_91;
#line 187 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_92_92;
#line 187 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_84_84;

#line 735 "pd_info.m"
        {
#line 735 "pd_info.m"
          mercury__list__delete_all_3_p_1(transform_hlds__pd_info__TypeCtorInfo_35_35, transform_hlds__pd_info__GoalVersions0_12, ((MR_Box) (transform_hlds__pd_info__PredProcId_4)), &transform_hlds__pd_info__GoalVersions_13);
        }
#line 5469 "transform_hlds.pd_info.c"
        transform_hlds__pd_info__TypeInfo_38_38 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[0];
#line 736 "pd_info.m"
        {
#line 736 "pd_info.m"
          mercury__map__det_update_4_p_0(transform_hlds__pd_info__TypeInfo_38_38, transform_hlds__pd_info__TypeInfo_38_38, ((MR_Box) (transform_hlds__pd_info__Calls_9)), ((MR_Box) (transform_hlds__pd_info__GoalVersions_13)), transform_hlds__pd_info__GoalIndex0_11, &transform_hlds__pd_info__GoalIndex_14);
        }
#line 187 "pd_info.m"
        transform_hlds__pd_info__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, (MR_Integer) 0)));
#line 187 "pd_info.m"
        transform_hlds__pd_info__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, (MR_Integer) 1)));
#line 187 "pd_info.m"
        transform_hlds__pd_info__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, (MR_Integer) 2)));
#line 187 "pd_info.m"
        transform_hlds__pd_info__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, (MR_Integer) 3)));
#line 187 "pd_info.m"
        transform_hlds__pd_info__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, (MR_Integer) 4)));
#line 187 "pd_info.m"
        transform_hlds__pd_info__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, (MR_Integer) 5)));
#line 187 "pd_info.m"
        transform_hlds__pd_info__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, (MR_Integer) 6)));
#line 187 "pd_info.m"
        transform_hlds__pd_info__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, (MR_Integer) 7)));
#line 187 "pd_info.m"
        transform_hlds__pd_info__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, (MR_Integer) 8)));
#line 187 "pd_info.m"
        transform_hlds__pd_info__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, (MR_Integer) 9)));
#line 187 "pd_info.m"
        transform_hlds__pd_info__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, (MR_Integer) 10)));
#line 187 "pd_info.m"
        {
#line 187 "pd_info.m"
          transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 187 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 0) = ((MR_Box) (transform_hlds__pd_info__V_82_82));
#line 187 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 1) = ((MR_Box) (transform_hlds__pd_info__V_83_83));
#line 187 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 2) = ((MR_Box) (transform_hlds__pd_info__GoalIndex_14));
#line 187 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 3) = ((MR_Box) (transform_hlds__pd_info__V_85_85));
#line 187 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 4) = ((MR_Box) (transform_hlds__pd_info__V_86_86));
#line 187 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 5) = ((MR_Box) (transform_hlds__pd_info__V_87_87));
#line 187 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 6) = ((MR_Box) (transform_hlds__pd_info__V_88_88));
#line 187 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 7) = ((MR_Box) (transform_hlds__pd_info__V_89_89));
#line 187 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 8) = ((MR_Box) (transform_hlds__pd_info__V_90_90));
#line 187 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 9) = ((MR_Box) (transform_hlds__pd_info__V_91_91));
#line 187 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 10) = ((MR_Box) (transform_hlds__pd_info__V_92_92));
#line 187 "pd_info.m"
        }
#line 735 "pd_info.m"
      }
#line 738 "pd_info.m"
    else
#line 738 "pd_info.m"
      transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24 = transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23;
#line 742 "pd_info.m"
    {
#line 742 "pd_info.m"
      transform_hlds__pd_info__pd_info_get_created_versions_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, &transform_hlds__pd_info__CreatedVersions0_15);
    }
#line 743 "pd_info.m"
    {
#line 743 "pd_info.m"
      mercury__set__delete_3_p_0(transform_hlds__pd_info__TypeCtorInfo_35_35, ((MR_Box) (transform_hlds__pd_info__PredProcId_4)), transform_hlds__pd_info__CreatedVersions0_15, &transform_hlds__pd_info__CreatedVersions_16);
    }
#line 744 "pd_info.m"
    {
#line 744 "pd_info.m"
      transform_hlds__pd_info__pd_info_set_created_versions_3_p_0(transform_hlds__pd_info__CreatedVersions_16, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, &transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25);
    }
#line 746 "pd_info.m"
    {
#line 746 "pd_info.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, &transform_hlds__pd_info__ModuleInfo0_17);
    }
#line 747 "pd_info.m"
    transform_hlds__pd_info__PredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PredProcId_4, (MR_Integer) 0)));
#line 747 "pd_info.m"
    transform_hlds__pd_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PredProcId_4, (MR_Integer) 1)));
#line 748 "pd_info.m"
    {
#line 748 "pd_info.m"
      hlds__hlds_module__module_info_remove_predicate_3_p_0(transform_hlds__pd_info__PredId_18, transform_hlds__pd_info__ModuleInfo0_17, &transform_hlds__pd_info__ModuleInfo_20);
    }
#line 749 "pd_info.m"
    {
#line 749 "pd_info.m"
      transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__pd_info__ModuleInfo_20, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_22);
#line 749 "pd_info.m"
      return;
    }
#line 725 "pd_info.m"
  }
#line 428 "pd_info.m"
}

#line 422 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__invalidate_version_3_p_0(
#line 422 "pd_info.m"
  MR_Word transform_hlds__pd_info__PredProcId_4,
#line 422 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15,
#line 422 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_16)
#line 422 "pd_info.m"
{
#line 706 "pd_info.m"
  {
#line 706 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 706 "pd_info.m"
    MR_Word transform_hlds__pd_info__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 706 "pd_info.m"
    MR_Word transform_hlds__pd_info__Versions0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 3)));
#line 706 "pd_info.m"
    MR_Word transform_hlds__pd_info__Version_7;
#line 706 "pd_info.m"
    MR_Word transform_hlds__pd_info__Goal_8;
#line 706 "pd_info.m"
    MR_Word transform_hlds__pd_info__Calls_9;
#line 706 "pd_info.m"
    MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18;
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 0)));
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 1)));
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 2)));
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 4)));
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 5)));
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 6)));
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 7)));
#line 171 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 8)));
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 9)));
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 10)));
#line 708 "pd_info.m"
    MR_Box transform_hlds__pd_info__conv0_Version_7;
#line 709 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_20_20;
#line 709 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21;
#line 709 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22;
#line 709 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23;
#line 709 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_24_24;
#line 709 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_25_25;
#line 709 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26;
#line 709 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27;
#line 720 "pd_info.m"
    MR_Word transform_hlds__pd_info__FirstCall_10;
#line 720 "pd_info.m"
    MR_Word transform_hlds__pd_info__LastCall_12;
#line 712 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 713 "pd_info.m"
    MR_Box transform_hlds__pd_info__conv1_LastCall_12;

#line 708 "pd_info.m"
    {
#line 708 "pd_info.m"
      mercury__map__lookup_3_p_0(transform_hlds__pd_info__TypeCtorInfo_28_28, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0, transform_hlds__pd_info__Versions0_6, ((MR_Box) (transform_hlds__pd_info__PredProcId_4)), &transform_hlds__pd_info__conv0_Version_7);
    }
#line 708 "pd_info.m"
    transform_hlds__pd_info__Version_7 = ((MR_Word) transform_hlds__pd_info__conv0_Version_7);
#line 709 "pd_info.m"
    transform_hlds__pd_info__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 0)));
#line 709 "pd_info.m"
    transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 1)));
#line 709 "pd_info.m"
    transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 2)));
#line 709 "pd_info.m"
    transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 3)));
#line 709 "pd_info.m"
    transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 4)));
#line 709 "pd_info.m"
    transform_hlds__pd_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 5)));
#line 709 "pd_info.m"
    transform_hlds__pd_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 6)));
#line 709 "pd_info.m"
    transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 7)));
#line 709 "pd_info.m"
    transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 8)));
#line 710 "pd_info.m"
    {
#line 710 "pd_info.m"
      transform_hlds__pd_util__goal_get_calls_2_p_0(transform_hlds__pd_info__Goal_8, &transform_hlds__pd_info__Calls_9);
    }
#line 712 "pd_info.m"
    transform_hlds__pd_info__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_info__Calls_9)) == (MR_mktag((MR_Integer) 1)));
#line 712 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 712 "pd_info.m"
      {
#line 712 "pd_info.m"
        transform_hlds__pd_info__FirstCall_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__Calls_9, (MR_Integer) 0)));
#line 712 "pd_info.m"
        transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__Calls_9, (MR_Integer) 1)));
#line 713 "pd_info.m"
        {
#line 713 "pd_info.m"
          transform_hlds__pd_info__succeeded = mercury__list__last_2_p_0(transform_hlds__pd_info__TypeCtorInfo_28_28, transform_hlds__pd_info__Calls_9, &transform_hlds__pd_info__conv1_LastCall_12);
        }
#line 713 "pd_info.m"
        if (transform_hlds__pd_info__succeeded)
#line 713 "pd_info.m"
          {
#line 713 "pd_info.m"
            transform_hlds__pd_info__LastCall_12 = ((MR_Word) transform_hlds__pd_info__conv1_LastCall_12);
#line 713 "pd_info.m"
            transform_hlds__pd_info__succeeded = MR_TRUE;
#line 713 "pd_info.m"
          }
#line 712 "pd_info.m"
      }
#line 720 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 717 "pd_info.m"
      {
#line 717 "pd_info.m"
        MR_Word transform_hlds__pd_info__Useless0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 10)));
#line 717 "pd_info.m"
        MR_Word transform_hlds__pd_info__Useless_14;
#line 717 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_17_17;
#line 178 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 0)));
#line 178 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 1)));
#line 178 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 2)));
#line 178 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 3)));
#line 178 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 4)));
#line 178 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 5)));
#line 178 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 6)));
#line 178 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 7)));
#line 178 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 8)));
#line 178 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 9)));
#line 203 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_58_58;
#line 203 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_59_59;
#line 203 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_60_60;
#line 203 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_61_61;
#line 203 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_62_62;
#line 203 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_63_63;
#line 203 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_64_64;
#line 203 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_65_65;
#line 203 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_66_66;
#line 203 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_67_67;
#line 203 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_68_68;

#line 718 "pd_info.m"
        {
#line 718 "pd_info.m"
          transform_hlds__pd_info__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 718 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__V_17_17, 0) = ((MR_Box) (transform_hlds__pd_info__FirstCall_10));
#line 718 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__V_17_17, 1) = ((MR_Box) (transform_hlds__pd_info__LastCall_12));
#line 718 "pd_info.m"
        }
#line 718 "pd_info.m"
        {
#line 718 "pd_info.m"
          mercury__set__insert_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[0], ((MR_Box) (transform_hlds__pd_info__V_17_17)), transform_hlds__pd_info__Useless0_13, &transform_hlds__pd_info__Useless_14);
        }
#line 203 "pd_info.m"
        transform_hlds__pd_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 0)));
#line 203 "pd_info.m"
        transform_hlds__pd_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 1)));
#line 203 "pd_info.m"
        transform_hlds__pd_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 2)));
#line 203 "pd_info.m"
        transform_hlds__pd_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 3)));
#line 203 "pd_info.m"
        transform_hlds__pd_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 4)));
#line 203 "pd_info.m"
        transform_hlds__pd_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 5)));
#line 203 "pd_info.m"
        transform_hlds__pd_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 6)));
#line 203 "pd_info.m"
        transform_hlds__pd_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 7)));
#line 203 "pd_info.m"
        transform_hlds__pd_info__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 8)));
#line 203 "pd_info.m"
        transform_hlds__pd_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 9)));
#line 203 "pd_info.m"
        transform_hlds__pd_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 10)));
#line 203 "pd_info.m"
        {
#line 203 "pd_info.m"
          transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 203 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, 0) = ((MR_Box) (transform_hlds__pd_info__V_58_58));
#line 203 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, 1) = ((MR_Box) (transform_hlds__pd_info__V_59_59));
#line 203 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, 2) = ((MR_Box) (transform_hlds__pd_info__V_60_60));
#line 203 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, 3) = ((MR_Box) (transform_hlds__pd_info__V_61_61));
#line 203 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, 4) = ((MR_Box) (transform_hlds__pd_info__V_62_62));
#line 203 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, 5) = ((MR_Box) (transform_hlds__pd_info__V_63_63));
#line 203 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, 6) = ((MR_Box) (transform_hlds__pd_info__V_64_64));
#line 203 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, 7) = ((MR_Box) (transform_hlds__pd_info__V_65_65));
#line 203 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, 8) = ((MR_Box) (transform_hlds__pd_info__V_66_66));
#line 203 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, 9) = ((MR_Box) (transform_hlds__pd_info__V_67_67));
#line 203 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, 10) = ((MR_Box) (transform_hlds__pd_info__Useless_14));
#line 203 "pd_info.m"
        }
#line 717 "pd_info.m"
      }
#line 720 "pd_info.m"
    else
#line 720 "pd_info.m"
      transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18 = transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15;
#line 723 "pd_info.m"
    {
#line 723 "pd_info.m"
      transform_hlds__pd_info__remove_version_3_p_0(transform_hlds__pd_info__PredProcId_4, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_16);
#line 723 "pd_info.m"
      return;
    }
#line 706 "pd_info.m"
  }
#line 422 "pd_info.m"
}

#line 417 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__register_version_4_p_0(
#line 417 "pd_info.m"
  MR_Word transform_hlds__pd_info__PredProcId_5,
#line 417 "pd_info.m"
  MR_Word transform_hlds__pd_info__Version_6,
#line 417 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19,
#line 417 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_20)
#line 417 "pd_info.m"
{
#line 682 "pd_info.m"
  {
#line 682 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 682 "pd_info.m"
    MR_Word transform_hlds__pd_info__TypeCtorInfo_39_39;
#line 682 "pd_info.m"
    MR_Word transform_hlds__pd_info__GoalVersionIndex0_9;
#line 682 "pd_info.m"
    MR_Word transform_hlds__pd_info__Goal_10;
#line 682 "pd_info.m"
    MR_Word transform_hlds__pd_info__Calls_11;
#line 682 "pd_info.m"
    MR_Word transform_hlds__pd_info__GoalVersionIndex_14;
#line 682 "pd_info.m"
    MR_Word transform_hlds__pd_info__Versions0_15;
#line 682 "pd_info.m"
    MR_Word transform_hlds__pd_info__Versions_16;
#line 682 "pd_info.m"
    MR_Word transform_hlds__pd_info__CreatedVersions0_17;
#line 682 "pd_info.m"
    MR_Word transform_hlds__pd_info__CreatedVersions_18;
#line 682 "pd_info.m"
    MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24;
#line 682 "pd_info.m"
    MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25;
#line 170 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_42_42;
#line 170 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_43_43;
#line 170 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_44_44;
#line 170 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_45_45;
#line 170 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_46_46;
#line 170 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_47_47;
#line 170 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_48_48;
#line 170 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_49_49;
#line 170 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_50_50;
#line 170 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_51_51;
#line 687 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28;
#line 687 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29;
#line 687 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30;
#line 687 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_31_31;
#line 687 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_32_32;
#line 687 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_33_33;
#line 687 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_34_34;
#line 687 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_35_35;
#line 692 "pd_info.m"
    MR_Word transform_hlds__pd_info__VersionList0_12;
#line 689 "pd_info.m"
    MR_Word transform_hlds__pd_info__TypeInfo_36_36;
#line 689 "pd_info.m"
    MR_Box transform_hlds__pd_info__conv0_VersionList0_12;
#line 187 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_57_57;
#line 187 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_58_58;
#line 187 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_61_61;
#line 187 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_62_62;
#line 187 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_63_63;
#line 187 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_64_64;
#line 187 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_65_65;
#line 187 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_66_66;
#line 187 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_67_67;
#line 187 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_59_59;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_84_84;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_85_85;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_86_86;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_88_88;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_89_89;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_90_90;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_91_91;
#line 189 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_92_92;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_93_93;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_94_94;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_87_87;

#line 684 "pd_info.m"
    {
#line 684 "pd_info.m"
      transform_hlds__pd_debug__pd_debug_register_version_5_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, transform_hlds__pd_info__PredProcId_5, transform_hlds__pd_info__Version_6);
    }
#line 170 "pd_info.m"
    transform_hlds__pd_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 0)));
#line 170 "pd_info.m"
    transform_hlds__pd_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 1)));
#line 170 "pd_info.m"
    transform_hlds__pd_info__GoalVersionIndex0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 2)));
#line 170 "pd_info.m"
    transform_hlds__pd_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 3)));
#line 170 "pd_info.m"
    transform_hlds__pd_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 4)));
#line 170 "pd_info.m"
    transform_hlds__pd_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 5)));
#line 170 "pd_info.m"
    transform_hlds__pd_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 6)));
#line 170 "pd_info.m"
    transform_hlds__pd_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 7)));
#line 170 "pd_info.m"
    transform_hlds__pd_info__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 8)));
#line 170 "pd_info.m"
    transform_hlds__pd_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 9)));
#line 170 "pd_info.m"
    transform_hlds__pd_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 10)));
#line 687 "pd_info.m"
    transform_hlds__pd_info__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_6, (MR_Integer) 0)));
#line 687 "pd_info.m"
    transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_6, (MR_Integer) 1)));
#line 687 "pd_info.m"
    transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_6, (MR_Integer) 2)));
#line 687 "pd_info.m"
    transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_6, (MR_Integer) 3)));
#line 687 "pd_info.m"
    transform_hlds__pd_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_6, (MR_Integer) 4)));
#line 687 "pd_info.m"
    transform_hlds__pd_info__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_6, (MR_Integer) 5)));
#line 687 "pd_info.m"
    transform_hlds__pd_info__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_6, (MR_Integer) 6)));
#line 687 "pd_info.m"
    transform_hlds__pd_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_6, (MR_Integer) 7)));
#line 687 "pd_info.m"
    transform_hlds__pd_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_6, (MR_Integer) 8)));
#line 688 "pd_info.m"
    {
#line 688 "pd_info.m"
      transform_hlds__pd_util__goal_get_calls_2_p_0(transform_hlds__pd_info__Goal_10, &transform_hlds__pd_info__Calls_11);
    }
#line 6014 "transform_hlds.pd_info.c"
    transform_hlds__pd_info__TypeInfo_36_36 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[0];
#line 689 "pd_info.m"
    {
#line 689 "pd_info.m"
      transform_hlds__pd_info__succeeded = mercury__map__search_3_p_0(transform_hlds__pd_info__TypeInfo_36_36, transform_hlds__pd_info__TypeInfo_36_36, transform_hlds__pd_info__GoalVersionIndex0_9, ((MR_Box) (transform_hlds__pd_info__Calls_11)), &transform_hlds__pd_info__conv0_VersionList0_12);
    }
#line 689 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 689 "pd_info.m"
      {
#line 689 "pd_info.m"
        transform_hlds__pd_info__VersionList0_12 = ((MR_Word) transform_hlds__pd_info__conv0_VersionList0_12);
#line 689 "pd_info.m"
        transform_hlds__pd_info__succeeded = MR_TRUE;
#line 689 "pd_info.m"
      }
#line 692 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 690 "pd_info.m"
      {
#line 690 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_37_37;
#line 690 "pd_info.m"
        MR_Word transform_hlds__pd_info__VersionList_13;

#line 690 "pd_info.m"
        {
#line 690 "pd_info.m"
          transform_hlds__pd_info__VersionList_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 690 "pd_info.m"
          MR_hl_field(MR_mktag(1), transform_hlds__pd_info__VersionList_13, 0) = ((MR_Box) (transform_hlds__pd_info__PredProcId_5));
#line 690 "pd_info.m"
          MR_hl_field(MR_mktag(1), transform_hlds__pd_info__VersionList_13, 1) = ((MR_Box) (transform_hlds__pd_info__VersionList0_12));
#line 690 "pd_info.m"
        }
#line 6050 "transform_hlds.pd_info.c"
        transform_hlds__pd_info__TypeInfo_37_37 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[0];
#line 691 "pd_info.m"
        {
#line 691 "pd_info.m"
          mercury__map__det_update_4_p_0(transform_hlds__pd_info__TypeInfo_37_37, transform_hlds__pd_info__TypeInfo_37_37, ((MR_Box) (transform_hlds__pd_info__Calls_11)), ((MR_Box) (transform_hlds__pd_info__VersionList_13)), transform_hlds__pd_info__GoalVersionIndex0_9, &transform_hlds__pd_info__GoalVersionIndex_14);
        }
#line 690 "pd_info.m"
      }
#line 692 "pd_info.m"
    else
#line 693 "pd_info.m"
      {
#line 693 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_38_38;
#line 693 "pd_info.m"
        MR_Word transform_hlds__pd_info__VersionList_27;

#line 693 "pd_info.m"
        {
#line 693 "pd_info.m"
          transform_hlds__pd_info__VersionList_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 693 "pd_info.m"
          MR_hl_field(MR_mktag(1), transform_hlds__pd_info__VersionList_27, 0) = ((MR_Box) (transform_hlds__pd_info__PredProcId_5));
#line 693 "pd_info.m"
          MR_hl_field(MR_mktag(1), transform_hlds__pd_info__VersionList_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 693 "pd_info.m"
        }
#line 6078 "transform_hlds.pd_info.c"
        transform_hlds__pd_info__TypeInfo_38_38 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[0];
#line 694 "pd_info.m"
        {
#line 694 "pd_info.m"
          mercury__map__det_insert_4_p_0(transform_hlds__pd_info__TypeInfo_38_38, transform_hlds__pd_info__TypeInfo_38_38, ((MR_Box) (transform_hlds__pd_info__Calls_11)), ((MR_Box) (transform_hlds__pd_info__VersionList_27)), transform_hlds__pd_info__GoalVersionIndex0_9, &transform_hlds__pd_info__GoalVersionIndex_14);
        }
#line 693 "pd_info.m"
      }
#line 187 "pd_info.m"
    transform_hlds__pd_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 0)));
#line 187 "pd_info.m"
    transform_hlds__pd_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 1)));
#line 187 "pd_info.m"
    transform_hlds__pd_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 2)));
#line 187 "pd_info.m"
    transform_hlds__pd_info__Versions0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 3)));
#line 187 "pd_info.m"
    transform_hlds__pd_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 4)));
#line 187 "pd_info.m"
    transform_hlds__pd_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 5)));
#line 187 "pd_info.m"
    transform_hlds__pd_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 6)));
#line 187 "pd_info.m"
    transform_hlds__pd_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 7)));
#line 187 "pd_info.m"
    transform_hlds__pd_info__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 8)));
#line 187 "pd_info.m"
    transform_hlds__pd_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 9)));
#line 187 "pd_info.m"
    transform_hlds__pd_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 10)));
#line 187 "pd_info.m"
    {
#line 187 "pd_info.m"
      transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 187 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 0) = ((MR_Box) (transform_hlds__pd_info__V_57_57));
#line 187 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 1) = ((MR_Box) (transform_hlds__pd_info__V_58_58));
#line 187 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 2) = ((MR_Box) (transform_hlds__pd_info__GoalVersionIndex_14));
#line 187 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 3) = ((MR_Box) (transform_hlds__pd_info__Versions0_15));
#line 187 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 4) = ((MR_Box) (transform_hlds__pd_info__V_61_61));
#line 187 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 5) = ((MR_Box) (transform_hlds__pd_info__V_62_62));
#line 187 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 6) = ((MR_Box) (transform_hlds__pd_info__V_63_63));
#line 187 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 7) = ((MR_Box) (transform_hlds__pd_info__V_64_64));
#line 187 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 8) = ((MR_Box) (transform_hlds__pd_info__V_65_65));
#line 187 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 9) = ((MR_Box) (transform_hlds__pd_info__V_66_66));
#line 187 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 10) = ((MR_Box) (transform_hlds__pd_info__V_67_67));
#line 187 "pd_info.m"
    }
#line 6137 "transform_hlds.pd_info.c"
    transform_hlds__pd_info__TypeCtorInfo_39_39 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 698 "pd_info.m"
    {
#line 698 "pd_info.m"
      mercury__map__det_insert_4_p_0(transform_hlds__pd_info__TypeCtorInfo_39_39, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0, ((MR_Box) (transform_hlds__pd_info__PredProcId_5)), ((MR_Box) (transform_hlds__pd_info__Version_6)), transform_hlds__pd_info__Versions0_15, &transform_hlds__pd_info__Versions_16);
    }
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, (MR_Integer) 0)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, (MR_Integer) 1)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, (MR_Integer) 2)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, (MR_Integer) 3)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, (MR_Integer) 4)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, (MR_Integer) 5)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, (MR_Integer) 6)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, (MR_Integer) 7)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, (MR_Integer) 8)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, (MR_Integer) 9)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, (MR_Integer) 10)));
#line 189 "pd_info.m"
    {
#line 189 "pd_info.m"
      transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, 0) = ((MR_Box) (transform_hlds__pd_info__V_84_84));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, 1) = ((MR_Box) (transform_hlds__pd_info__V_85_85));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, 2) = ((MR_Box) (transform_hlds__pd_info__V_86_86));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, 3) = ((MR_Box) (transform_hlds__pd_info__Versions_16));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, 4) = ((MR_Box) (transform_hlds__pd_info__V_88_88));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, 5) = ((MR_Box) (transform_hlds__pd_info__V_89_89));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, 6) = ((MR_Box) (transform_hlds__pd_info__V_90_90));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, 7) = ((MR_Box) (transform_hlds__pd_info__V_91_91));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, 8) = ((MR_Box) (transform_hlds__pd_info__V_92_92));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, 9) = ((MR_Box) (transform_hlds__pd_info__V_93_93));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, 10) = ((MR_Box) (transform_hlds__pd_info__V_94_94));
#line 189 "pd_info.m"
    }
#line 700 "pd_info.m"
    {
#line 700 "pd_info.m"
      transform_hlds__pd_info__pd_info_get_created_versions_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, &transform_hlds__pd_info__CreatedVersions0_17);
    }
#line 701 "pd_info.m"
    {
#line 701 "pd_info.m"
      mercury__set__insert_3_p_0(transform_hlds__pd_info__TypeCtorInfo_39_39, ((MR_Box) (transform_hlds__pd_info__PredProcId_5)), transform_hlds__pd_info__CreatedVersions0_17, &transform_hlds__pd_info__CreatedVersions_18);
    }
#line 702 "pd_info.m"
    {
#line 702 "pd_info.m"
      transform_hlds__pd_info__pd_info_set_created_versions_3_p_0(transform_hlds__pd_info__CreatedVersions_18, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_20);
#line 702 "pd_info.m"
      return;
    }
#line 682 "pd_info.m"
  }
#line 417 "pd_info.m"
}

#line 412 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__define_new_pred_6_p_0(
#line 412 "pd_info.m"
  MR_Word transform_hlds__pd_info__Origin_7,
#line 412 "pd_info.m"
  MR_Word transform_hlds__pd_info__Goal_8,
#line 412 "pd_info.m"
  MR_Word * transform_hlds__pd_info__PredProcId_9,
#line 412 "pd_info.m"
  MR_Word * transform_hlds__pd_info__CallGoal_10,
#line 412 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39,
#line 412 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_40)
#line 412 "pd_info.m"
{
#line 645 "pd_info.m"
  {
#line 645 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 645 "pd_info.m"
    MR_Word transform_hlds__pd_info__InstMap_12;
#line 645 "pd_info.m"
    MR_Word transform_hlds__pd_info__GoalInfo_14;
#line 645 "pd_info.m"
    MR_Word transform_hlds__pd_info__NonLocals_15;
#line 645 "pd_info.m"
    MR_Word transform_hlds__pd_info__Args_16;
#line 645 "pd_info.m"
    MR_Word transform_hlds__pd_info__Counter0_17;
#line 645 "pd_info.m"
    MR_Integer transform_hlds__pd_info__Count_18;
#line 645 "pd_info.m"
    MR_Word transform_hlds__pd_info__Counter_19;
#line 645 "pd_info.m"
    MR_Word transform_hlds__pd_info__PredInfo_20;
#line 645 "pd_info.m"
    MR_Word transform_hlds__pd_info__PredModule_21;
#line 645 "pd_info.m"
    MR_String transform_hlds__pd_info__PredName_22;
#line 645 "pd_info.m"
    MR_Word transform_hlds__pd_info__Context_23;
#line 645 "pd_info.m"
    MR_Integer transform_hlds__pd_info__Line_24;
#line 645 "pd_info.m"
    MR_Word transform_hlds__pd_info__ModuleInfo0_25;
#line 645 "pd_info.m"
    MR_Word transform_hlds__pd_info__SymName_26;
#line 645 "pd_info.m"
    MR_Word transform_hlds__pd_info__ProcInfo_27;
#line 645 "pd_info.m"
    MR_Word transform_hlds__pd_info__TVarSet_28;
#line 645 "pd_info.m"
    MR_Word transform_hlds__pd_info__Markers_29;
#line 645 "pd_info.m"
    MR_Word transform_hlds__pd_info__ClassContext_30;
#line 645 "pd_info.m"
    MR_Word transform_hlds__pd_info__VarSet_31;
#line 645 "pd_info.m"
    MR_Word transform_hlds__pd_info__VarTypes_32;
#line 645 "pd_info.m"
    MR_Word transform_hlds__pd_info__RttiVarMaps_33;
#line 645 "pd_info.m"
    MR_Word transform_hlds__pd_info__InstVarSet_34;
#line 645 "pd_info.m"
    MR_Word transform_hlds__pd_info__HasParallelConj_35;
#line 645 "pd_info.m"
    MR_Word transform_hlds__pd_info__VarNameRemap_36;
#line 645 "pd_info.m"
    MR_Word transform_hlds__pd_info__ModuleInfo_38;
#line 645 "pd_info.m"
    MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41;
#line 647 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;
#line 173 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_48_48;
#line 173 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_49_49;
#line 173 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_50_50;
#line 173 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_51_51;
#line 173 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_52_52;
#line 173 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_53_53;
#line 173 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_54_54;
#line 173 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_55_55;
#line 173 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_56_56;
#line 173 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_57_57;
#line 193 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_63_63;
#line 193 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_64_64;
#line 193 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_65_65;
#line 193 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_66_66;
#line 193 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_67_67;
#line 193 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_69_69;
#line 193 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_70_70;
#line 193 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_71_71;
#line 193 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_72_72;
#line 193 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_73_73;
#line 193 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_68_68;
#line 161 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_75_75;
#line 161 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_76_76;
#line 161 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_77_77;
#line 161 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_78_78;
#line 161 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_79_79;
#line 161 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_80_80;
#line 161 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_81_81;
#line 161 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_82_82;
#line 161 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_83_83;
#line 161 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_84_84;
#line 674 "pd_info.m"
    MR_Word transform_hlds__pd_info___ExtraArgs_37;

#line 646 "pd_info.m"
    {
#line 646 "pd_info.m"
      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, &transform_hlds__pd_info__InstMap_12);
    }
#line 647 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Goal_8, (MR_Integer) 0)));
#line 647 "pd_info.m"
    transform_hlds__pd_info__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Goal_8, (MR_Integer) 1)));
#line 648 "pd_info.m"
    {
#line 648 "pd_info.m"
      transform_hlds__pd_info__NonLocals_15 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__pd_info__GoalInfo_14);
    }
#line 649 "pd_info.m"
    {
#line 649 "pd_info.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__pd_info__NonLocals_15, &transform_hlds__pd_info__Args_16);
    }
#line 173 "pd_info.m"
    transform_hlds__pd_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 0)));
#line 173 "pd_info.m"
    transform_hlds__pd_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 1)));
#line 173 "pd_info.m"
    transform_hlds__pd_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 2)));
#line 173 "pd_info.m"
    transform_hlds__pd_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 3)));
#line 173 "pd_info.m"
    transform_hlds__pd_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 4)));
#line 173 "pd_info.m"
    transform_hlds__pd_info__Counter0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 5)));
#line 173 "pd_info.m"
    transform_hlds__pd_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 6)));
#line 173 "pd_info.m"
    transform_hlds__pd_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 7)));
#line 173 "pd_info.m"
    transform_hlds__pd_info__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 8)));
#line 173 "pd_info.m"
    transform_hlds__pd_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 9)));
#line 173 "pd_info.m"
    transform_hlds__pd_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 10)));
#line 651 "pd_info.m"
    {
#line 651 "pd_info.m"
      mercury__counter__allocate_3_p_0(&transform_hlds__pd_info__Count_18, transform_hlds__pd_info__Counter0_17, &transform_hlds__pd_info__Counter_19);
    }
#line 193 "pd_info.m"
    transform_hlds__pd_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 0)));
#line 193 "pd_info.m"
    transform_hlds__pd_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 1)));
#line 193 "pd_info.m"
    transform_hlds__pd_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 2)));
#line 193 "pd_info.m"
    transform_hlds__pd_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 3)));
#line 193 "pd_info.m"
    transform_hlds__pd_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 4)));
#line 193 "pd_info.m"
    transform_hlds__pd_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 5)));
#line 193 "pd_info.m"
    transform_hlds__pd_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 6)));
#line 193 "pd_info.m"
    transform_hlds__pd_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 7)));
#line 193 "pd_info.m"
    transform_hlds__pd_info__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 8)));
#line 193 "pd_info.m"
    transform_hlds__pd_info__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 9)));
#line 193 "pd_info.m"
    transform_hlds__pd_info__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 10)));
#line 193 "pd_info.m"
    {
#line 193 "pd_info.m"
      transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 193 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, 0) = ((MR_Box) (transform_hlds__pd_info__V_63_63));
#line 193 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, 1) = ((MR_Box) (transform_hlds__pd_info__V_64_64));
#line 193 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, 2) = ((MR_Box) (transform_hlds__pd_info__V_65_65));
#line 193 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, 3) = ((MR_Box) (transform_hlds__pd_info__V_66_66));
#line 193 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, 4) = ((MR_Box) (transform_hlds__pd_info__V_67_67));
#line 193 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, 5) = ((MR_Box) (transform_hlds__pd_info__Counter_19));
#line 193 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, 6) = ((MR_Box) (transform_hlds__pd_info__V_69_69));
#line 193 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, 7) = ((MR_Box) (transform_hlds__pd_info__V_70_70));
#line 193 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, 8) = ((MR_Box) (transform_hlds__pd_info__V_71_71));
#line 193 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, 9) = ((MR_Box) (transform_hlds__pd_info__V_72_72));
#line 193 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, 10) = ((MR_Box) (transform_hlds__pd_info__V_73_73));
#line 193 "pd_info.m"
    }
#line 653 "pd_info.m"
    {
#line 653 "pd_info.m"
      transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, &transform_hlds__pd_info__PredInfo_20);
    }
#line 654 "pd_info.m"
    {
#line 654 "pd_info.m"
      transform_hlds__pd_info__PredModule_21 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__pd_info__PredInfo_20);
    }
#line 655 "pd_info.m"
    {
#line 655 "pd_info.m"
      transform_hlds__pd_info__PredName_22 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__pd_info__PredInfo_20);
    }
#line 656 "pd_info.m"
    {
#line 656 "pd_info.m"
      transform_hlds__pd_info__Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__pd_info__GoalInfo_14);
    }
#line 657 "pd_info.m"
    {
#line 657 "pd_info.m"
      mercury__term__context_line_2_p_0(transform_hlds__pd_info__Context_23, &transform_hlds__pd_info__Line_24);
    }
#line 161 "pd_info.m"
    transform_hlds__pd_info__ModuleInfo0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, (MR_Integer) 0)));
#line 161 "pd_info.m"
    transform_hlds__pd_info__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, (MR_Integer) 1)));
#line 161 "pd_info.m"
    transform_hlds__pd_info__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, (MR_Integer) 2)));
#line 161 "pd_info.m"
    transform_hlds__pd_info__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, (MR_Integer) 3)));
#line 161 "pd_info.m"
    transform_hlds__pd_info__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, (MR_Integer) 4)));
#line 161 "pd_info.m"
    transform_hlds__pd_info__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, (MR_Integer) 5)));
#line 161 "pd_info.m"
    transform_hlds__pd_info__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, (MR_Integer) 6)));
#line 161 "pd_info.m"
    transform_hlds__pd_info__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, (MR_Integer) 7)));
#line 161 "pd_info.m"
    transform_hlds__pd_info__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, (MR_Integer) 8)));
#line 161 "pd_info.m"
    transform_hlds__pd_info__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, (MR_Integer) 9)));
#line 161 "pd_info.m"
    transform_hlds__pd_info__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, (MR_Integer) 10)));
#line 659 "pd_info.m"
    {
#line 659 "pd_info.m"
      parse_tree__prog_util__make_pred_name_with_context_7_p_0(transform_hlds__pd_info__PredModule_21, (MR_String) "DeforestationIn", (MR_Integer) 0, transform_hlds__pd_info__PredName_22, transform_hlds__pd_info__Line_24, transform_hlds__pd_info__Count_18, &transform_hlds__pd_info__SymName_26);
    }
#line 662 "pd_info.m"
    {
#line 662 "pd_info.m"
      transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, &transform_hlds__pd_info__ProcInfo_27);
    }
#line 663 "pd_info.m"
    {
#line 663 "pd_info.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__pd_info__PredInfo_20, &transform_hlds__pd_info__TVarSet_28);
    }
#line 664 "pd_info.m"
    {
#line 664 "pd_info.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__pd_info__PredInfo_20, &transform_hlds__pd_info__Markers_29);
    }
#line 665 "pd_info.m"
    {
#line 665 "pd_info.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__pd_info__PredInfo_20, &transform_hlds__pd_info__ClassContext_30);
    }
#line 666 "pd_info.m"
    {
#line 666 "pd_info.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__pd_info__ProcInfo_27, &transform_hlds__pd_info__VarSet_31);
    }
#line 667 "pd_info.m"
    {
#line 667 "pd_info.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__pd_info__ProcInfo_27, &transform_hlds__pd_info__VarTypes_32);
    }
#line 668 "pd_info.m"
    {
#line 668 "pd_info.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__pd_info__ProcInfo_27, &transform_hlds__pd_info__RttiVarMaps_33);
    }
#line 669 "pd_info.m"
    {
#line 669 "pd_info.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__pd_info__ProcInfo_27, &transform_hlds__pd_info__InstVarSet_34);
    }
#line 670 "pd_info.m"
    {
#line 670 "pd_info.m"
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__pd_info__ProcInfo_27, &transform_hlds__pd_info__HasParallelConj_35);
    }
#line 671 "pd_info.m"
    {
#line 671 "pd_info.m"
      hlds__hlds_pred__proc_info_get_var_name_remap_2_p_0(transform_hlds__pd_info__ProcInfo_27, &transform_hlds__pd_info__VarNameRemap_36);
    }
#line 674 "pd_info.m"
    {
#line 674 "pd_info.m"
      hlds__hlds_pred__define_new_pred_20_p_0(transform_hlds__pd_info__Origin_7, transform_hlds__pd_info__Goal_8, transform_hlds__pd_info__CallGoal_10, transform_hlds__pd_info__Args_16, &transform_hlds__pd_info___ExtraArgs_37, transform_hlds__pd_info__InstMap_12, transform_hlds__pd_info__SymName_26, transform_hlds__pd_info__TVarSet_28, transform_hlds__pd_info__VarTypes_32, transform_hlds__pd_info__ClassContext_30, transform_hlds__pd_info__RttiVarMaps_33, transform_hlds__pd_info__VarSet_31, transform_hlds__pd_info__InstVarSet_34, transform_hlds__pd_info__Markers_29, (MR_Integer) 1, transform_hlds__pd_info__HasParallelConj_35, transform_hlds__pd_info__VarNameRemap_36, transform_hlds__pd_info__ModuleInfo0_25, &transform_hlds__pd_info__ModuleInfo_38, transform_hlds__pd_info__PredProcId_9);
    }
#line 678 "pd_info.m"
    {
#line 678 "pd_info.m"
      transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__pd_info__ModuleInfo_38, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_40);
#line 678 "pd_info.m"
      return;
    }
#line 645 "pd_info.m"
  }
#line 412 "pd_info.m"
}

#line 406 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__search_version_3_p_0(
#line 406 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_4,
#line 406 "pd_info.m"
  MR_Word transform_hlds__pd_info__Goal_5,
#line 406 "pd_info.m"
  MR_Word * transform_hlds__pd_info__MaybeVersion_6)
#line 406 "pd_info.m"
{
#line 484 "pd_info.m"
  {
#line 484 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 484 "pd_info.m"
    MR_Word transform_hlds__pd_info__CalledPreds_8;
#line 484 "pd_info.m"
    MR_Word transform_hlds__pd_info__Versions_9;
#line 484 "pd_info.m"
    MR_Word transform_hlds__pd_info__GoalVersionIndex_10;
#line 484 "pd_info.m"
    MR_Word transform_hlds__pd_info__ModuleInfo_11;
#line 484 "pd_info.m"
    MR_Word transform_hlds__pd_info__ProcInfo_12;
#line 484 "pd_info.m"
    MR_Word transform_hlds__pd_info__InstMap_13;
#line 484 "pd_info.m"
    MR_Word transform_hlds__pd_info__VarTypes_14;
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25;
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27;
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28;
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29;
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30;
#line 171 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_31_31;
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_32_32;
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_33_33;
#line 501 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeVersion0_16;
#line 496 "pd_info.m"
    MR_Word transform_hlds__pd_info__TypeInfo_22_22;
#line 496 "pd_info.m"
    MR_Word transform_hlds__pd_info__VersionIds_15;
#line 496 "pd_info.m"
    MR_Box transform_hlds__pd_info__conv0_VersionIds_15;

#line 486 "pd_info.m"
    {
#line 486 "pd_info.m"
      transform_hlds__pd_debug__pd_debug_output_goal_5_p_0(transform_hlds__pd_info__PDInfo_4, (MR_String) "Searching for version:\n", transform_hlds__pd_info__Goal_5);
    }
#line 488 "pd_info.m"
    {
#line 488 "pd_info.m"
      transform_hlds__pd_util__goal_get_calls_2_p_0(transform_hlds__pd_info__Goal_5, &transform_hlds__pd_info__CalledPreds_8);
    }
#line 171 "pd_info.m"
    transform_hlds__pd_info__ModuleInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_4, (MR_Integer) 0)));
#line 171 "pd_info.m"
    transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_4, (MR_Integer) 1)));
#line 171 "pd_info.m"
    transform_hlds__pd_info__GoalVersionIndex_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_4, (MR_Integer) 2)));
#line 171 "pd_info.m"
    transform_hlds__pd_info__Versions_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_4, (MR_Integer) 3)));
#line 171 "pd_info.m"
    transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_4, (MR_Integer) 4)));
#line 171 "pd_info.m"
    transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_4, (MR_Integer) 5)));
#line 171 "pd_info.m"
    transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_4, (MR_Integer) 6)));
#line 171 "pd_info.m"
    transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_4, (MR_Integer) 7)));
#line 171 "pd_info.m"
    transform_hlds__pd_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_4, (MR_Integer) 8)));
#line 171 "pd_info.m"
    transform_hlds__pd_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_4, (MR_Integer) 9)));
#line 171 "pd_info.m"
    transform_hlds__pd_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_4, (MR_Integer) 10)));
#line 492 "pd_info.m"
    {
#line 492 "pd_info.m"
      transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__pd_info__PDInfo_4, &transform_hlds__pd_info__ProcInfo_12);
    }
#line 493 "pd_info.m"
    {
#line 493 "pd_info.m"
      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_info__PDInfo_4, &transform_hlds__pd_info__InstMap_13);
    }
#line 494 "pd_info.m"
    {
#line 494 "pd_info.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__pd_info__ProcInfo_12, &transform_hlds__pd_info__VarTypes_14);
    }
#line 6672 "transform_hlds.pd_info.c"
    transform_hlds__pd_info__TypeInfo_22_22 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[0];
#line 496 "pd_info.m"
    {
#line 496 "pd_info.m"
      transform_hlds__pd_info__succeeded = mercury__map__search_3_p_0(transform_hlds__pd_info__TypeInfo_22_22, transform_hlds__pd_info__TypeInfo_22_22, transform_hlds__pd_info__GoalVersionIndex_10, ((MR_Box) (transform_hlds__pd_info__CalledPreds_8)), &transform_hlds__pd_info__conv0_VersionIds_15);
    }
#line 496 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 496 "pd_info.m"
      {
#line 496 "pd_info.m"
        transform_hlds__pd_info__VersionIds_15 = ((MR_Word) transform_hlds__pd_info__conv0_VersionIds_15);
#line 496 "pd_info.m"
        transform_hlds__pd_info__succeeded = MR_TRUE;
#line 496 "pd_info.m"
      }
#line 496 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 497 "pd_info.m"
      {
#line 497 "pd_info.m"
        transform_hlds__pd_info__succeeded = transform_hlds__pd_info__get_matching_version_7_p_0(transform_hlds__pd_info__ModuleInfo_11, transform_hlds__pd_info__Goal_5, transform_hlds__pd_info__InstMap_13, transform_hlds__pd_info__VarTypes_14, transform_hlds__pd_info__VersionIds_15, transform_hlds__pd_info__Versions_9, &transform_hlds__pd_info__MaybeVersion0_16);
      }
#line 501 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 500 "pd_info.m"
      *transform_hlds__pd_info__MaybeVersion_6 = transform_hlds__pd_info__MaybeVersion0_16;
#line 501 "pd_info.m"
    else
#line 502 "pd_info.m"
      *transform_hlds__pd_info__MaybeVersion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 505 "pd_info.m"
    {
#line 505 "pd_info.m"
      transform_hlds__pd_debug__pd_debug_search_version_result_4_p_0(transform_hlds__pd_info__PDInfo_4, *transform_hlds__pd_info__MaybeVersion_6);
#line 505 "pd_info.m"
      return;
    }
#line 484 "pd_info.m"
  }
#line 406 "pd_info.m"
}

#line 317 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_incr_size_delta_3_p_0(
#line 317 "pd_info.m"
  MR_Integer transform_hlds__pd_info__Delta1_4,
#line 317 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
#line 317 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
#line 317 "pd_info.m"
{
#line 393 "pd_info.m"
  {
#line 393 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 393 "pd_info.m"
    MR_Integer transform_hlds__pd_info__Delta0_6;
#line 393 "pd_info.m"
    MR_Integer transform_hlds__pd_info__Delta_7;

#line 394 "pd_info.m"
    {
#line 394 "pd_info.m"
      transform_hlds__pd_info__pd_info_get_size_delta_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, &transform_hlds__pd_info__Delta0_6);
    }
#line 395 "pd_info.m"
    transform_hlds__pd_info__Delta_7 = (transform_hlds__pd_info__Delta0_6 + transform_hlds__pd_info__Delta1_4);
#line 396 "pd_info.m"
    {
#line 396 "pd_info.m"
      transform_hlds__pd_info__pd_info_set_size_delta_3_p_0(transform_hlds__pd_info__Delta_7, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9);
#line 396 "pd_info.m"
      return;
    }
#line 393 "pd_info.m"
  }
#line 317 "pd_info.m"
}

#line 315 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_incr_cost_delta_3_p_0(
#line 315 "pd_info.m"
  MR_Integer transform_hlds__pd_info__Delta1_4,
#line 315 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
#line 315 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
#line 315 "pd_info.m"
{
#line 388 "pd_info.m"
  {
#line 388 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 388 "pd_info.m"
    MR_Integer transform_hlds__pd_info__Delta0_6;
#line 388 "pd_info.m"
    MR_Integer transform_hlds__pd_info__Delta_7;

#line 389 "pd_info.m"
    {
#line 389 "pd_info.m"
      transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, &transform_hlds__pd_info__Delta0_6);
    }
#line 390 "pd_info.m"
    transform_hlds__pd_info__Delta_7 = (transform_hlds__pd_info__Delta0_6 + transform_hlds__pd_info__Delta1_4);
#line 391 "pd_info.m"
    {
#line 391 "pd_info.m"
      transform_hlds__pd_info__pd_info_set_cost_delta_3_p_0(transform_hlds__pd_info__Delta_7, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9);
#line 391 "pd_info.m"
      return;
    }
#line 388 "pd_info.m"
  }
#line 315 "pd_info.m"
}

#line 313 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_rerun_det_3_p_0(
#line 313 "pd_info.m"
  MR_Word transform_hlds__pd_info__Rerun_4,
#line 313 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
#line 313 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
#line 313 "pd_info.m"
{
#line 383 "pd_info.m"
  {
#line 383 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 383 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo0_6;
#line 383 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_7;
#line 383 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 1)));
#line 383 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 0)));
#line 383 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 2)));
#line 383 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 3)));
#line 383 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 4)));
#line 383 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 5)));
#line 383 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 6)));
#line 383 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 7)));
#line 383 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 8)));
#line 383 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 9)));
#line 383 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 10)));
#line 383 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_43_43;
#line 385 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 385 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 385 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;
#line 385 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_14_14;
#line 385 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15;
#line 385 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16;
#line 385 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_17_17;
#line 385 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18;
#line 385 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_19_19;
#line 385 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_20_20;
#line 385 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21;

#line 166 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 167 "pd_info.m"
      {
#line 168 "pd_info.m"
        {
#line 168 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 168 "pd_info.m"
          return;
        }
#line 167 "pd_info.m"
      }
#line 166 "pd_info.m"
    else
#line 165 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_24, (MR_Integer) 0)));
#line 385 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 0)));
#line 385 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 1)));
#line 385 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 2)));
#line 385 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 3)));
#line 385 "pd_info.m"
    transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 4)));
#line 385 "pd_info.m"
    transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 5)));
#line 385 "pd_info.m"
    transform_hlds__pd_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 6)));
#line 385 "pd_info.m"
    transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 7)));
#line 385 "pd_info.m"
    transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 8)));
#line 385 "pd_info.m"
    transform_hlds__pd_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 9)));
#line 385 "pd_info.m"
    transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 10)));
#line 385 "pd_info.m"
    {
#line 385 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 385 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 0) = ((MR_Box) (transform_hlds__pd_info__V_11_11));
#line 385 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 1) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 385 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 2) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 385 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 3) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 385 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 4) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 385 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 5) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 385 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 6) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 385 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 7) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 385 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 8) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 385 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 9) = ((MR_Box) (transform_hlds__pd_info__V_20_20));
#line 385 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 10) = ((MR_Box) (transform_hlds__pd_info__Rerun_4));
#line 385 "pd_info.m"
    }
#line 183 "pd_info.m"
    {
#line 183 "pd_info.m"
      transform_hlds__pd_info__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__V_43_43, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
#line 183 "pd_info.m"
    }
#line 183 "pd_info.m"
    {
#line 183 "pd_info.m"
      MR_Word base;
#line 183 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 183 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9 = base;
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_28_28));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_43_43));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_29_29));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_30_30));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_31_31));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_32_32));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_33_33));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_34_34));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_35_35));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_36_36));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_37_37));
#line 183 "pd_info.m"
    }
#line 383 "pd_info.m"
  }
#line 313 "pd_info.m"
}

#line 311 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_size_delta_3_p_0(
#line 311 "pd_info.m"
  MR_Integer transform_hlds__pd_info__SizeDelta_4,
#line 311 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
#line 311 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
#line 311 "pd_info.m"
{
#line 379 "pd_info.m"
  {
#line 379 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 379 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo0_6;
#line 379 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_7;
#line 379 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 1)));
#line 379 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 0)));
#line 379 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 2)));
#line 379 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 3)));
#line 379 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 4)));
#line 379 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 5)));
#line 379 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 6)));
#line 379 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 7)));
#line 379 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 8)));
#line 379 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 9)));
#line 379 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 10)));
#line 379 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_43_43;
#line 381 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 381 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 381 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;
#line 381 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_14_14;
#line 381 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15;
#line 381 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16;
#line 381 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_17_17;
#line 381 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18;
#line 381 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_19_19;
#line 381 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21;
#line 381 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_20_20;

#line 166 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 167 "pd_info.m"
      {
#line 168 "pd_info.m"
        {
#line 168 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 168 "pd_info.m"
          return;
        }
#line 167 "pd_info.m"
      }
#line 166 "pd_info.m"
    else
#line 165 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_24, (MR_Integer) 0)));
#line 381 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 0)));
#line 381 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 1)));
#line 381 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 2)));
#line 381 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 3)));
#line 381 "pd_info.m"
    transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 4)));
#line 381 "pd_info.m"
    transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 5)));
#line 381 "pd_info.m"
    transform_hlds__pd_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 6)));
#line 381 "pd_info.m"
    transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 7)));
#line 381 "pd_info.m"
    transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 8)));
#line 381 "pd_info.m"
    transform_hlds__pd_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 9)));
#line 381 "pd_info.m"
    transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 10)));
#line 381 "pd_info.m"
    {
#line 381 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 381 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 0) = ((MR_Box) (transform_hlds__pd_info__V_11_11));
#line 381 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 1) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 381 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 2) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 381 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 3) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 381 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 4) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 381 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 5) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 381 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 6) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 381 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 7) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 381 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 8) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 381 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 9) = ((MR_Box) (transform_hlds__pd_info__SizeDelta_4));
#line 381 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 10) = ((MR_Box) (transform_hlds__pd_info__V_21_21));
#line 381 "pd_info.m"
    }
#line 183 "pd_info.m"
    {
#line 183 "pd_info.m"
      transform_hlds__pd_info__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__V_43_43, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
#line 183 "pd_info.m"
    }
#line 183 "pd_info.m"
    {
#line 183 "pd_info.m"
      MR_Word base;
#line 183 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 183 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9 = base;
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_28_28));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_43_43));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_29_29));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_30_30));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_31_31));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_32_32));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_33_33));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_34_34));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_35_35));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_36_36));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_37_37));
#line 183 "pd_info.m"
    }
#line 379 "pd_info.m"
  }
#line 311 "pd_info.m"
}

#line 309 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_changed_3_p_0(
#line 309 "pd_info.m"
  MR_Word transform_hlds__pd_info__Changed_4,
#line 309 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
#line 309 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
#line 309 "pd_info.m"
{
#line 375 "pd_info.m"
  {
#line 375 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 375 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo0_6;
#line 375 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_7;
#line 375 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 1)));
#line 375 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 0)));
#line 375 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 2)));
#line 375 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 3)));
#line 375 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 4)));
#line 375 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 5)));
#line 375 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 6)));
#line 375 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 7)));
#line 375 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 8)));
#line 375 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 9)));
#line 375 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 10)));
#line 375 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_43_43;
#line 377 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 377 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 377 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;
#line 377 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_14_14;
#line 377 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15;
#line 377 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16;
#line 377 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_17_17;
#line 377 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18;
#line 377 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_20_20;
#line 377 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21;
#line 377 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_19_19;

#line 166 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 167 "pd_info.m"
      {
#line 168 "pd_info.m"
        {
#line 168 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 168 "pd_info.m"
          return;
        }
#line 167 "pd_info.m"
      }
#line 166 "pd_info.m"
    else
#line 165 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_24, (MR_Integer) 0)));
#line 377 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 0)));
#line 377 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 1)));
#line 377 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 2)));
#line 377 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 3)));
#line 377 "pd_info.m"
    transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 4)));
#line 377 "pd_info.m"
    transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 5)));
#line 377 "pd_info.m"
    transform_hlds__pd_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 6)));
#line 377 "pd_info.m"
    transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 7)));
#line 377 "pd_info.m"
    transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 8)));
#line 377 "pd_info.m"
    transform_hlds__pd_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 9)));
#line 377 "pd_info.m"
    transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 10)));
#line 377 "pd_info.m"
    {
#line 377 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 377 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 0) = ((MR_Box) (transform_hlds__pd_info__V_11_11));
#line 377 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 1) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 377 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 2) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 377 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 3) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 377 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 4) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 377 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 5) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 377 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 6) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 377 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 7) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 377 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 8) = ((MR_Box) (transform_hlds__pd_info__Changed_4));
#line 377 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 9) = ((MR_Box) (transform_hlds__pd_info__V_20_20));
#line 377 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 10) = ((MR_Box) (transform_hlds__pd_info__V_21_21));
#line 377 "pd_info.m"
    }
#line 183 "pd_info.m"
    {
#line 183 "pd_info.m"
      transform_hlds__pd_info__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__V_43_43, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
#line 183 "pd_info.m"
    }
#line 183 "pd_info.m"
    {
#line 183 "pd_info.m"
      MR_Word base;
#line 183 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 183 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9 = base;
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_28_28));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_43_43));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_29_29));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_30_30));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_31_31));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_32_32));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_33_33));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_34_34));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_35_35));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_36_36));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_37_37));
#line 183 "pd_info.m"
    }
#line 375 "pd_info.m"
  }
#line 309 "pd_info.m"
}

#line 307 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_pred_proc_id_3_p_0(
#line 307 "pd_info.m"
  MR_Word transform_hlds__pd_info__PredProcId_4,
#line 307 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
#line 307 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
#line 307 "pd_info.m"
{
#line 371 "pd_info.m"
  {
#line 371 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 371 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo0_6;
#line 371 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_7;
#line 371 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 1)));
#line 371 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 0)));
#line 371 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 2)));
#line 371 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 3)));
#line 371 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 4)));
#line 371 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 5)));
#line 371 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 6)));
#line 371 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 7)));
#line 371 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 8)));
#line 371 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 9)));
#line 371 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 10)));
#line 371 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_43_43;
#line 373 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 373 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 373 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;
#line 373 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_14_14;
#line 373 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15;
#line 373 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16;
#line 373 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_17_17;
#line 373 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_19_19;
#line 373 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_20_20;
#line 373 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21;
#line 373 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18;

#line 166 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 167 "pd_info.m"
      {
#line 168 "pd_info.m"
        {
#line 168 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 168 "pd_info.m"
          return;
        }
#line 167 "pd_info.m"
      }
#line 166 "pd_info.m"
    else
#line 165 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_24, (MR_Integer) 0)));
#line 373 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 0)));
#line 373 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 1)));
#line 373 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 2)));
#line 373 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 3)));
#line 373 "pd_info.m"
    transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 4)));
#line 373 "pd_info.m"
    transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 5)));
#line 373 "pd_info.m"
    transform_hlds__pd_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 6)));
#line 373 "pd_info.m"
    transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 7)));
#line 373 "pd_info.m"
    transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 8)));
#line 373 "pd_info.m"
    transform_hlds__pd_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 9)));
#line 373 "pd_info.m"
    transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 10)));
#line 373 "pd_info.m"
    {
#line 373 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 373 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 0) = ((MR_Box) (transform_hlds__pd_info__V_11_11));
#line 373 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 1) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 373 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 2) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 373 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 3) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 373 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 4) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 373 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 5) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 373 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 6) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 373 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 7) = ((MR_Box) (transform_hlds__pd_info__PredProcId_4));
#line 373 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 8) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 373 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 9) = ((MR_Box) (transform_hlds__pd_info__V_20_20));
#line 373 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 10) = ((MR_Box) (transform_hlds__pd_info__V_21_21));
#line 373 "pd_info.m"
    }
#line 183 "pd_info.m"
    {
#line 183 "pd_info.m"
      transform_hlds__pd_info__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__V_43_43, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
#line 183 "pd_info.m"
    }
#line 183 "pd_info.m"
    {
#line 183 "pd_info.m"
      MR_Word base;
#line 183 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 183 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9 = base;
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_28_28));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_43_43));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_29_29));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_30_30));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_31_31));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_32_32));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_33_33));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_34_34));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_35_35));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_36_36));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_37_37));
#line 183 "pd_info.m"
    }
#line 371 "pd_info.m"
  }
#line 307 "pd_info.m"
}

#line 305 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_parents_3_p_0(
#line 305 "pd_info.m"
  MR_Word transform_hlds__pd_info__Parents_4,
#line 305 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
#line 305 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
#line 305 "pd_info.m"
{
#line 367 "pd_info.m"
  {
#line 367 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 367 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo0_6;
#line 367 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_7;
#line 367 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 1)));
#line 367 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 0)));
#line 367 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 2)));
#line 367 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 3)));
#line 367 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 4)));
#line 367 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 5)));
#line 367 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 6)));
#line 367 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 7)));
#line 367 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 8)));
#line 367 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 9)));
#line 367 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 10)));
#line 367 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_43_43;
#line 369 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 369 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 369 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;
#line 369 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_14_14;
#line 369 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15;
#line 369 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16;
#line 369 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18;
#line 369 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_19_19;
#line 369 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_20_20;
#line 369 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21;
#line 369 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_17_17;

#line 166 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 167 "pd_info.m"
      {
#line 168 "pd_info.m"
        {
#line 168 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 168 "pd_info.m"
          return;
        }
#line 167 "pd_info.m"
      }
#line 166 "pd_info.m"
    else
#line 165 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_24, (MR_Integer) 0)));
#line 369 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 0)));
#line 369 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 1)));
#line 369 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 2)));
#line 369 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 3)));
#line 369 "pd_info.m"
    transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 4)));
#line 369 "pd_info.m"
    transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 5)));
#line 369 "pd_info.m"
    transform_hlds__pd_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 6)));
#line 369 "pd_info.m"
    transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 7)));
#line 369 "pd_info.m"
    transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 8)));
#line 369 "pd_info.m"
    transform_hlds__pd_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 9)));
#line 369 "pd_info.m"
    transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 10)));
#line 369 "pd_info.m"
    {
#line 369 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 369 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 0) = ((MR_Box) (transform_hlds__pd_info__V_11_11));
#line 369 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 1) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 369 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 2) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 369 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 3) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 369 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 4) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 369 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 5) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 369 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 6) = ((MR_Box) (transform_hlds__pd_info__Parents_4));
#line 369 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 7) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 369 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 8) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 369 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 9) = ((MR_Box) (transform_hlds__pd_info__V_20_20));
#line 369 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 10) = ((MR_Box) (transform_hlds__pd_info__V_21_21));
#line 369 "pd_info.m"
    }
#line 183 "pd_info.m"
    {
#line 183 "pd_info.m"
      transform_hlds__pd_info__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__V_43_43, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
#line 183 "pd_info.m"
    }
#line 183 "pd_info.m"
    {
#line 183 "pd_info.m"
      MR_Word base;
#line 183 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 183 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9 = base;
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_28_28));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_43_43));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_29_29));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_30_30));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_31_31));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_32_32));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_33_33));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_34_34));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_35_35));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_36_36));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_37_37));
#line 183 "pd_info.m"
    }
#line 367 "pd_info.m"
  }
#line 305 "pd_info.m"
}

#line 303 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_pred_info_3_p_0(
#line 303 "pd_info.m"
  MR_Word transform_hlds__pd_info__PredInfo_4,
#line 303 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
#line 303 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
#line 303 "pd_info.m"
{
#line 363 "pd_info.m"
  {
#line 363 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 363 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo0_6;
#line 363 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_7;
#line 363 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 1)));
#line 363 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 0)));
#line 363 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 2)));
#line 363 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 3)));
#line 363 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 4)));
#line 363 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 5)));
#line 363 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 6)));
#line 363 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 7)));
#line 363 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 8)));
#line 363 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 9)));
#line 363 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 10)));
#line 363 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_43_43;
#line 365 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 365 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 365 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;
#line 365 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_14_14;
#line 365 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15;
#line 365 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_17_17;
#line 365 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18;
#line 365 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_19_19;
#line 365 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_20_20;
#line 365 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21;
#line 365 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16;

#line 166 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 167 "pd_info.m"
      {
#line 168 "pd_info.m"
        {
#line 168 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 168 "pd_info.m"
          return;
        }
#line 167 "pd_info.m"
      }
#line 166 "pd_info.m"
    else
#line 165 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_24, (MR_Integer) 0)));
#line 365 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 0)));
#line 365 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 1)));
#line 365 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 2)));
#line 365 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 3)));
#line 365 "pd_info.m"
    transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 4)));
#line 365 "pd_info.m"
    transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 5)));
#line 365 "pd_info.m"
    transform_hlds__pd_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 6)));
#line 365 "pd_info.m"
    transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 7)));
#line 365 "pd_info.m"
    transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 8)));
#line 365 "pd_info.m"
    transform_hlds__pd_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 9)));
#line 365 "pd_info.m"
    transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 10)));
#line 365 "pd_info.m"
    {
#line 365 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 365 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 0) = ((MR_Box) (transform_hlds__pd_info__V_11_11));
#line 365 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 1) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 365 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 2) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 365 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 3) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 365 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 4) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 365 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 5) = ((MR_Box) (transform_hlds__pd_info__PredInfo_4));
#line 365 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 6) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 365 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 7) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 365 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 8) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 365 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 9) = ((MR_Box) (transform_hlds__pd_info__V_20_20));
#line 365 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 10) = ((MR_Box) (transform_hlds__pd_info__V_21_21));
#line 365 "pd_info.m"
    }
#line 183 "pd_info.m"
    {
#line 183 "pd_info.m"
      transform_hlds__pd_info__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__V_43_43, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
#line 183 "pd_info.m"
    }
#line 183 "pd_info.m"
    {
#line 183 "pd_info.m"
      MR_Word base;
#line 183 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 183 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9 = base;
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_28_28));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_43_43));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_29_29));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_30_30));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_31_31));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_32_32));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_33_33));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_34_34));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_35_35));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_36_36));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_37_37));
#line 183 "pd_info.m"
    }
#line 363 "pd_info.m"
  }
#line 303 "pd_info.m"
}

#line 301 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_local_term_info_3_p_0(
#line 301 "pd_info.m"
  MR_Word transform_hlds__pd_info__TermInfo_4,
#line 301 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
#line 301 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
#line 301 "pd_info.m"
{
#line 359 "pd_info.m"
  {
#line 359 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 359 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo0_6;
#line 359 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_7;
#line 359 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 1)));
#line 359 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 0)));
#line 359 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 2)));
#line 359 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 3)));
#line 359 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 4)));
#line 359 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 5)));
#line 359 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 6)));
#line 359 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 7)));
#line 359 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 8)));
#line 359 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 9)));
#line 359 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 10)));
#line 359 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_43_43;
#line 361 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 361 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 361 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;
#line 361 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_14_14;
#line 361 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16;
#line 361 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_17_17;
#line 361 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18;
#line 361 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_19_19;
#line 361 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_20_20;
#line 361 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21;
#line 361 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15;

#line 166 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 167 "pd_info.m"
      {
#line 168 "pd_info.m"
        {
#line 168 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 168 "pd_info.m"
          return;
        }
#line 167 "pd_info.m"
      }
#line 166 "pd_info.m"
    else
#line 165 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_24, (MR_Integer) 0)));
#line 361 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 0)));
#line 361 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 1)));
#line 361 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 2)));
#line 361 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 3)));
#line 361 "pd_info.m"
    transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 4)));
#line 361 "pd_info.m"
    transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 5)));
#line 361 "pd_info.m"
    transform_hlds__pd_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 6)));
#line 361 "pd_info.m"
    transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 7)));
#line 361 "pd_info.m"
    transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 8)));
#line 361 "pd_info.m"
    transform_hlds__pd_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 9)));
#line 361 "pd_info.m"
    transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 10)));
#line 361 "pd_info.m"
    {
#line 361 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 361 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 0) = ((MR_Box) (transform_hlds__pd_info__V_11_11));
#line 361 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 1) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 361 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 2) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 361 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 3) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 361 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 4) = ((MR_Box) (transform_hlds__pd_info__TermInfo_4));
#line 361 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 5) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 361 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 6) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 361 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 7) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 361 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 8) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 361 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 9) = ((MR_Box) (transform_hlds__pd_info__V_20_20));
#line 361 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 10) = ((MR_Box) (transform_hlds__pd_info__V_21_21));
#line 361 "pd_info.m"
    }
#line 183 "pd_info.m"
    {
#line 183 "pd_info.m"
      transform_hlds__pd_info__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__V_43_43, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
#line 183 "pd_info.m"
    }
#line 183 "pd_info.m"
    {
#line 183 "pd_info.m"
      MR_Word base;
#line 183 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 183 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9 = base;
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_28_28));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_43_43));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_29_29));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_30_30));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_31_31));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_32_32));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_33_33));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_34_34));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_35_35));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_36_36));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_37_37));
#line 183 "pd_info.m"
    }
#line 359 "pd_info.m"
  }
#line 301 "pd_info.m"
}

#line 299 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_cost_delta_3_p_0(
#line 299 "pd_info.m"
  MR_Integer transform_hlds__pd_info__CostDelta_4,
#line 299 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
#line 299 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
#line 299 "pd_info.m"
{
#line 355 "pd_info.m"
  {
#line 355 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 355 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo0_6;
#line 355 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_7;
#line 355 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 1)));
#line 355 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 0)));
#line 355 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 2)));
#line 355 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 3)));
#line 355 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 4)));
#line 355 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 5)));
#line 355 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 6)));
#line 355 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 7)));
#line 355 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 8)));
#line 355 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 9)));
#line 355 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 10)));
#line 355 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_43_43;
#line 357 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 357 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 357 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;
#line 357 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15;
#line 357 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16;
#line 357 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_17_17;
#line 357 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18;
#line 357 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_19_19;
#line 357 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_20_20;
#line 357 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21;
#line 357 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_14_14;

#line 166 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 167 "pd_info.m"
      {
#line 168 "pd_info.m"
        {
#line 168 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 168 "pd_info.m"
          return;
        }
#line 167 "pd_info.m"
      }
#line 166 "pd_info.m"
    else
#line 165 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_24, (MR_Integer) 0)));
#line 357 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 0)));
#line 357 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 1)));
#line 357 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 2)));
#line 357 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 3)));
#line 357 "pd_info.m"
    transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 4)));
#line 357 "pd_info.m"
    transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 5)));
#line 357 "pd_info.m"
    transform_hlds__pd_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 6)));
#line 357 "pd_info.m"
    transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 7)));
#line 357 "pd_info.m"
    transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 8)));
#line 357 "pd_info.m"
    transform_hlds__pd_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 9)));
#line 357 "pd_info.m"
    transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 10)));
#line 357 "pd_info.m"
    {
#line 357 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 357 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 0) = ((MR_Box) (transform_hlds__pd_info__V_11_11));
#line 357 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 1) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 357 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 2) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 357 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 3) = ((MR_Box) (transform_hlds__pd_info__CostDelta_4));
#line 357 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 4) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 357 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 5) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 357 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 6) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 357 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 7) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 357 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 8) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 357 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 9) = ((MR_Box) (transform_hlds__pd_info__V_20_20));
#line 357 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 10) = ((MR_Box) (transform_hlds__pd_info__V_21_21));
#line 357 "pd_info.m"
    }
#line 183 "pd_info.m"
    {
#line 183 "pd_info.m"
      transform_hlds__pd_info__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__V_43_43, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
#line 183 "pd_info.m"
    }
#line 183 "pd_info.m"
    {
#line 183 "pd_info.m"
      MR_Word base;
#line 183 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 183 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9 = base;
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_28_28));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_43_43));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_29_29));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_30_30));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_31_31));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_32_32));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_33_33));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_34_34));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_35_35));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_36_36));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_37_37));
#line 183 "pd_info.m"
    }
#line 355 "pd_info.m"
  }
#line 299 "pd_info.m"
}

#line 297 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_instmap_3_p_0(
#line 297 "pd_info.m"
  MR_Word transform_hlds__pd_info__InstMap_4,
#line 297 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
#line 297 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
#line 297 "pd_info.m"
{
#line 351 "pd_info.m"
  {
#line 351 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 351 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo0_6;
#line 351 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_7;
#line 351 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 1)));
#line 351 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 0)));
#line 351 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 2)));
#line 351 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 3)));
#line 351 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 4)));
#line 351 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 5)));
#line 351 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 6)));
#line 351 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 7)));
#line 351 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 8)));
#line 351 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 9)));
#line 351 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 10)));
#line 351 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_43_43;
#line 353 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 353 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 353 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_14_14;
#line 353 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15;
#line 353 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16;
#line 353 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_17_17;
#line 353 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18;
#line 353 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_19_19;
#line 353 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_20_20;
#line 353 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21;
#line 353 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;

#line 166 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 167 "pd_info.m"
      {
#line 168 "pd_info.m"
        {
#line 168 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 168 "pd_info.m"
          return;
        }
#line 167 "pd_info.m"
      }
#line 166 "pd_info.m"
    else
#line 165 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_24, (MR_Integer) 0)));
#line 353 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 0)));
#line 353 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 1)));
#line 353 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 2)));
#line 353 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 3)));
#line 353 "pd_info.m"
    transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 4)));
#line 353 "pd_info.m"
    transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 5)));
#line 353 "pd_info.m"
    transform_hlds__pd_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 6)));
#line 353 "pd_info.m"
    transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 7)));
#line 353 "pd_info.m"
    transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 8)));
#line 353 "pd_info.m"
    transform_hlds__pd_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 9)));
#line 353 "pd_info.m"
    transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 10)));
#line 353 "pd_info.m"
    {
#line 353 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 353 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 0) = ((MR_Box) (transform_hlds__pd_info__V_11_11));
#line 353 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 1) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 353 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 2) = ((MR_Box) (transform_hlds__pd_info__InstMap_4));
#line 353 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 3) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 353 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 4) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 353 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 5) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 353 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 6) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 353 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 7) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 353 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 8) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 353 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 9) = ((MR_Box) (transform_hlds__pd_info__V_20_20));
#line 353 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 10) = ((MR_Box) (transform_hlds__pd_info__V_21_21));
#line 353 "pd_info.m"
    }
#line 183 "pd_info.m"
    {
#line 183 "pd_info.m"
      transform_hlds__pd_info__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__V_43_43, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
#line 183 "pd_info.m"
    }
#line 183 "pd_info.m"
    {
#line 183 "pd_info.m"
      MR_Word base;
#line 183 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 183 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9 = base;
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_28_28));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_43_43));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_29_29));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_30_30));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_31_31));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_32_32));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_33_33));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_34_34));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_35_35));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_36_36));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_37_37));
#line 183 "pd_info.m"
    }
#line 351 "pd_info.m"
  }
#line 297 "pd_info.m"
}

#line 295 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_proc_info_3_p_0(
#line 295 "pd_info.m"
  MR_Word transform_hlds__pd_info__ProcInfo_4,
#line 295 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
#line 295 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
#line 295 "pd_info.m"
{
#line 347 "pd_info.m"
  {
#line 347 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 347 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo0_6;
#line 347 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_7;
#line 347 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 1)));
#line 347 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 0)));
#line 347 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 2)));
#line 347 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 3)));
#line 347 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 4)));
#line 347 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 5)));
#line 347 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 6)));
#line 347 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 7)));
#line 347 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 8)));
#line 347 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 9)));
#line 347 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 10)));
#line 347 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_43_43;
#line 349 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 349 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;
#line 349 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_14_14;
#line 349 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15;
#line 349 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16;
#line 349 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_17_17;
#line 349 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18;
#line 349 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_19_19;
#line 349 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_20_20;
#line 349 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21;
#line 349 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;

#line 166 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 167 "pd_info.m"
      {
#line 168 "pd_info.m"
        {
#line 168 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 168 "pd_info.m"
          return;
        }
#line 167 "pd_info.m"
      }
#line 166 "pd_info.m"
    else
#line 165 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_24, (MR_Integer) 0)));
#line 349 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 0)));
#line 349 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 1)));
#line 349 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 2)));
#line 349 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 3)));
#line 349 "pd_info.m"
    transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 4)));
#line 349 "pd_info.m"
    transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 5)));
#line 349 "pd_info.m"
    transform_hlds__pd_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 6)));
#line 349 "pd_info.m"
    transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 7)));
#line 349 "pd_info.m"
    transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 8)));
#line 349 "pd_info.m"
    transform_hlds__pd_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 9)));
#line 349 "pd_info.m"
    transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 10)));
#line 349 "pd_info.m"
    {
#line 349 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 349 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 0) = ((MR_Box) (transform_hlds__pd_info__ProcInfo_4));
#line 349 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 1) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 349 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 2) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 349 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 3) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 349 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 4) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 349 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 5) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 349 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 6) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 349 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 7) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 349 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 8) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 349 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 9) = ((MR_Box) (transform_hlds__pd_info__V_20_20));
#line 349 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 10) = ((MR_Box) (transform_hlds__pd_info__V_21_21));
#line 349 "pd_info.m"
    }
#line 183 "pd_info.m"
    {
#line 183 "pd_info.m"
      transform_hlds__pd_info__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__V_43_43, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
#line 183 "pd_info.m"
    }
#line 183 "pd_info.m"
    {
#line 183 "pd_info.m"
      MR_Word base;
#line 183 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 183 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9 = base;
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_28_28));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_43_43));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_29_29));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_30_30));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_31_31));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_32_32));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_33_33));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_34_34));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_35_35));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_36_36));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_37_37));
#line 183 "pd_info.m"
    }
#line 347 "pd_info.m"
  }
#line 295 "pd_info.m"
}

#line 293 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_rerun_det_2_p_0(
#line 293 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 293 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
#line 293 "pd_info.m"
{
#line 344 "pd_info.m"
  {
#line 344 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 344 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
#line 344 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 163 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 344 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5;
#line 344 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6;
#line 344 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_7_7;
#line 344 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_8_8;
#line 344 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9;
#line 344 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10;
#line 344 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 344 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 344 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;
#line 344 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_14_14;

#line 166 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 167 "pd_info.m"
      {
#line 168 "pd_info.m"
        {
#line 168 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 168 "pd_info.m"
          return;
        }
#line 167 "pd_info.m"
      }
#line 166 "pd_info.m"
    else
#line 165 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_17, (MR_Integer) 0)));
#line 344 "pd_info.m"
    transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
#line 344 "pd_info.m"
    transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
#line 344 "pd_info.m"
    transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
#line 344 "pd_info.m"
    transform_hlds__pd_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
#line 344 "pd_info.m"
    transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
#line 344 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
#line 344 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
#line 344 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
#line 344 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
#line 344 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
#line 344 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 10)));
#line 344 "pd_info.m"
  }
#line 293 "pd_info.m"
}

#line 292 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_size_delta_2_p_0(
#line 292 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 292 "pd_info.m"
  MR_Integer * transform_hlds__pd_info__HeadVar__2_2)
#line 292 "pd_info.m"
{
#line 342 "pd_info.m"
  {
#line 342 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 342 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
#line 342 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 163 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 342 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5;
#line 342 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6;
#line 342 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_7_7;
#line 342 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_8_8;
#line 342 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9;
#line 342 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10;
#line 342 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 342 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 342 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;
#line 342 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14;

#line 166 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 167 "pd_info.m"
      {
#line 168 "pd_info.m"
        {
#line 168 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 168 "pd_info.m"
          return;
        }
#line 167 "pd_info.m"
      }
#line 166 "pd_info.m"
    else
#line 165 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_17, (MR_Integer) 0)));
#line 342 "pd_info.m"
    transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
#line 342 "pd_info.m"
    transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
#line 342 "pd_info.m"
    transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
#line 342 "pd_info.m"
    transform_hlds__pd_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
#line 342 "pd_info.m"
    transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
#line 342 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
#line 342 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
#line 342 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
#line 342 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
#line 342 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
#line 342 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 10)));
#line 342 "pd_info.m"
  }
#line 292 "pd_info.m"
}

#line 291 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_changed_2_p_0(
#line 291 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 291 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
#line 291 "pd_info.m"
{
#line 340 "pd_info.m"
  {
#line 340 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 340 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
#line 340 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 163 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 340 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5;
#line 340 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6;
#line 340 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_7_7;
#line 340 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_8_8;
#line 340 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9;
#line 340 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10;
#line 340 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 340 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 340 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_13_13;
#line 340 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14;

#line 166 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 167 "pd_info.m"
      {
#line 168 "pd_info.m"
        {
#line 168 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 168 "pd_info.m"
          return;
        }
#line 167 "pd_info.m"
      }
#line 166 "pd_info.m"
    else
#line 165 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_17, (MR_Integer) 0)));
#line 340 "pd_info.m"
    transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
#line 340 "pd_info.m"
    transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
#line 340 "pd_info.m"
    transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
#line 340 "pd_info.m"
    transform_hlds__pd_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
#line 340 "pd_info.m"
    transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
#line 340 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
#line 340 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
#line 340 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
#line 340 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
#line 340 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
#line 340 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 10)));
#line 340 "pd_info.m"
  }
#line 291 "pd_info.m"
}

#line 290 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_pred_proc_id_2_p_0(
#line 290 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 290 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
#line 290 "pd_info.m"
{
#line 338 "pd_info.m"
  {
#line 338 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 338 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
#line 338 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 163 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 338 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5;
#line 338 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6;
#line 338 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_7_7;
#line 338 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_8_8;
#line 338 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9;
#line 338 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10;
#line 338 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 338 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 338 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_13_13;
#line 338 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14;

#line 166 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 167 "pd_info.m"
      {
#line 168 "pd_info.m"
        {
#line 168 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 168 "pd_info.m"
          return;
        }
#line 167 "pd_info.m"
      }
#line 166 "pd_info.m"
    else
#line 165 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_17, (MR_Integer) 0)));
#line 338 "pd_info.m"
    transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
#line 338 "pd_info.m"
    transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
#line 338 "pd_info.m"
    transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
#line 338 "pd_info.m"
    transform_hlds__pd_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
#line 338 "pd_info.m"
    transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
#line 338 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
#line 338 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
#line 338 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
#line 338 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
#line 338 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
#line 338 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 10)));
#line 338 "pd_info.m"
  }
#line 290 "pd_info.m"
}

#line 289 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_parents_2_p_0(
#line 289 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 289 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
#line 289 "pd_info.m"
{
#line 336 "pd_info.m"
  {
#line 336 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 336 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
#line 336 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 163 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 336 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5;
#line 336 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6;
#line 336 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_7_7;
#line 336 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_8_8;
#line 336 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9;
#line 336 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10;
#line 336 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 336 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 336 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_13_13;
#line 336 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14;

#line 166 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 167 "pd_info.m"
      {
#line 168 "pd_info.m"
        {
#line 168 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 168 "pd_info.m"
          return;
        }
#line 167 "pd_info.m"
      }
#line 166 "pd_info.m"
    else
#line 165 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_17, (MR_Integer) 0)));
#line 336 "pd_info.m"
    transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
#line 336 "pd_info.m"
    transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
#line 336 "pd_info.m"
    transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
#line 336 "pd_info.m"
    transform_hlds__pd_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
#line 336 "pd_info.m"
    transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
#line 336 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
#line 336 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
#line 336 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
#line 336 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
#line 336 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
#line 336 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 10)));
#line 336 "pd_info.m"
  }
#line 289 "pd_info.m"
}

#line 288 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(
#line 288 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 288 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
#line 288 "pd_info.m"
{
#line 334 "pd_info.m"
  {
#line 334 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 334 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
#line 334 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 163 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 334 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5;
#line 334 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6;
#line 334 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_7_7;
#line 334 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_8_8;
#line 334 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9;
#line 334 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10;
#line 334 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 334 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 334 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_13_13;
#line 334 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14;

#line 166 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 167 "pd_info.m"
      {
#line 168 "pd_info.m"
        {
#line 168 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 168 "pd_info.m"
          return;
        }
#line 167 "pd_info.m"
      }
#line 166 "pd_info.m"
    else
#line 165 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_17, (MR_Integer) 0)));
#line 334 "pd_info.m"
    transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
#line 334 "pd_info.m"
    transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
#line 334 "pd_info.m"
    transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
#line 334 "pd_info.m"
    transform_hlds__pd_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
#line 334 "pd_info.m"
    transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
#line 334 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
#line 334 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
#line 334 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
#line 334 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
#line 334 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
#line 334 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 10)));
#line 334 "pd_info.m"
  }
#line 288 "pd_info.m"
}

#line 287 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_local_term_info_2_p_0(
#line 287 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 287 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
#line 287 "pd_info.m"
{
#line 332 "pd_info.m"
  {
#line 332 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 332 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
#line 332 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 163 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 332 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5;
#line 332 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6;
#line 332 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_7_7;
#line 332 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_8_8;
#line 332 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9;
#line 332 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10;
#line 332 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 332 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 332 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_13_13;
#line 332 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14;

#line 166 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 167 "pd_info.m"
      {
#line 168 "pd_info.m"
        {
#line 168 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 168 "pd_info.m"
          return;
        }
#line 167 "pd_info.m"
      }
#line 166 "pd_info.m"
    else
#line 165 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_17, (MR_Integer) 0)));
#line 332 "pd_info.m"
    transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
#line 332 "pd_info.m"
    transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
#line 332 "pd_info.m"
    transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
#line 332 "pd_info.m"
    transform_hlds__pd_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
#line 332 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
#line 332 "pd_info.m"
    transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
#line 332 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
#line 332 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
#line 332 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
#line 332 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
#line 332 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 10)));
#line 332 "pd_info.m"
  }
#line 287 "pd_info.m"
}

#line 286 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(
#line 286 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 286 "pd_info.m"
  MR_Integer * transform_hlds__pd_info__HeadVar__2_2)
#line 286 "pd_info.m"
{
#line 330 "pd_info.m"
  {
#line 330 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 330 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
#line 330 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 163 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 330 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5;
#line 330 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6;
#line 330 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_7_7;
#line 330 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_8_8;
#line 330 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9;
#line 330 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10;
#line 330 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 330 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 330 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_13_13;
#line 330 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14;

#line 166 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 167 "pd_info.m"
      {
#line 168 "pd_info.m"
        {
#line 168 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 168 "pd_info.m"
          return;
        }
#line 167 "pd_info.m"
      }
#line 166 "pd_info.m"
    else
#line 165 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_17, (MR_Integer) 0)));
#line 330 "pd_info.m"
    transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
#line 330 "pd_info.m"
    transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
#line 330 "pd_info.m"
    transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
#line 330 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
#line 330 "pd_info.m"
    transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
#line 330 "pd_info.m"
    transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
#line 330 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
#line 330 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
#line 330 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
#line 330 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
#line 330 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 10)));
#line 330 "pd_info.m"
  }
#line 286 "pd_info.m"
}

#line 285 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_instmap_2_p_0(
#line 285 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 285 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
#line 285 "pd_info.m"
{
#line 328 "pd_info.m"
  {
#line 328 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 328 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
#line 328 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 163 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 328 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5;
#line 328 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6;
#line 328 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_7_7;
#line 328 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_8_8;
#line 328 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9;
#line 328 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10;
#line 328 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 328 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 328 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_13_13;
#line 328 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14;

#line 166 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 167 "pd_info.m"
      {
#line 168 "pd_info.m"
        {
#line 168 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 168 "pd_info.m"
          return;
        }
#line 167 "pd_info.m"
      }
#line 166 "pd_info.m"
    else
#line 165 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_17, (MR_Integer) 0)));
#line 328 "pd_info.m"
    transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
#line 328 "pd_info.m"
    transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
#line 328 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
#line 328 "pd_info.m"
    transform_hlds__pd_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
#line 328 "pd_info.m"
    transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
#line 328 "pd_info.m"
    transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
#line 328 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
#line 328 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
#line 328 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
#line 328 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
#line 328 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 10)));
#line 328 "pd_info.m"
  }
#line 285 "pd_info.m"
}

#line 283 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_head_inst_vars_2_p_0(
#line 283 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 283 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
#line 283 "pd_info.m"
{
#line 326 "pd_info.m"
  {
#line 326 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 326 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
#line 326 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 163 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 326 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5;
#line 326 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6;
#line 326 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_7_7;
#line 326 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_8_8;
#line 326 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9;
#line 326 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10;
#line 326 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 326 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 326 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_13_13;
#line 326 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14;

#line 166 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 167 "pd_info.m"
      {
#line 168 "pd_info.m"
        {
#line 168 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 168 "pd_info.m"
          return;
        }
#line 167 "pd_info.m"
      }
#line 166 "pd_info.m"
    else
#line 165 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_17, (MR_Integer) 0)));
#line 326 "pd_info.m"
    transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
#line 326 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
#line 326 "pd_info.m"
    transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
#line 326 "pd_info.m"
    transform_hlds__pd_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
#line 326 "pd_info.m"
    transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
#line 326 "pd_info.m"
    transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
#line 326 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
#line 326 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
#line 326 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
#line 326 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
#line 326 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 10)));
#line 326 "pd_info.m"
  }
#line 283 "pd_info.m"
}

#line 282 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(
#line 282 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 282 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
#line 282 "pd_info.m"
{
#line 324 "pd_info.m"
  {
#line 324 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 324 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
#line 324 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 163 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 324 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5;
#line 324 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6;
#line 324 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_7_7;
#line 324 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_8_8;
#line 324 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9;
#line 324 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10;
#line 324 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 324 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 324 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_13_13;
#line 324 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14;

#line 166 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 167 "pd_info.m"
      {
#line 168 "pd_info.m"
        {
#line 168 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 168 "pd_info.m"
          return;
        }
#line 167 "pd_info.m"
      }
#line 166 "pd_info.m"
    else
#line 165 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_17, (MR_Integer) 0)));
#line 324 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
#line 324 "pd_info.m"
    transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
#line 324 "pd_info.m"
    transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
#line 324 "pd_info.m"
    transform_hlds__pd_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
#line 324 "pd_info.m"
    transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
#line 324 "pd_info.m"
    transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
#line 324 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
#line 324 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
#line 324 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
#line 324 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
#line 324 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 10)));
#line 324 "pd_info.m"
  }
#line 282 "pd_info.m"
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
#line 184 "pd_info.m"
  {
#line 184 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_4, (MR_Integer) 0)));
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_4, (MR_Integer) 2)));
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_4, (MR_Integer) 3)));
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_4, (MR_Integer) 4)));
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_4, (MR_Integer) 5)));
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_4, (MR_Integer) 6)));
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_4, (MR_Integer) 7)));
#line 185 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_4, (MR_Integer) 8)));
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_4, (MR_Integer) 9)));
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_4, (MR_Integer) 10)));
#line 185 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_4, (MR_Integer) 1)));

#line 185 "pd_info.m"
    {
#line 185 "pd_info.m"
      MR_Word base;
#line 185 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 185 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_5 = base;
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_8_8));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_10_10));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_11_11));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 185 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 185 "pd_info.m"
    }
#line 184 "pd_info.m"
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
#line 211 "pd_info.m"
  {
#line 211 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 211 "pd_info.m"
    MR_Word transform_hlds__pd_info__InstMap0_10;
#line 211 "pd_info.m"
    MR_Word transform_hlds__pd_info__ModuleInfo0_11;
#line 211 "pd_info.m"
    MR_Word transform_hlds__pd_info__ProcInfo_12;
#line 211 "pd_info.m"
    MR_Word transform_hlds__pd_info__VarTypes_13;
#line 211 "pd_info.m"
    MR_Word transform_hlds__pd_info__Type_14;
#line 211 "pd_info.m"
    MR_Word transform_hlds__pd_info__InstMap_15;
#line 211 "pd_info.m"
    MR_Word transform_hlds__pd_info__ModuleInfo_16;
#line 211 "pd_info.m"
    MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19;
#line 161 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22;
#line 161 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23;
#line 161 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_24_24;
#line 161 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25;
#line 161 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26;
#line 161 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27;
#line 161 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28;
#line 161 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_29_29;
#line 161 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30;
#line 161 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_31_31;
#line 181 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_38_38;
#line 181 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_39_39;
#line 181 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_40_40;
#line 181 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_41_41;
#line 181 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_42_42;
#line 181 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_43_43;
#line 181 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_44_44;
#line 181 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_45_45;
#line 181 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_46_46;
#line 181 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_47_47;
#line 181 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_37_37;

#line 212 "pd_info.m"
    {
#line 212 "pd_info.m"
      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, &transform_hlds__pd_info__InstMap0_10);
    }
#line 161 "pd_info.m"
    transform_hlds__pd_info__ModuleInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, (MR_Integer) 0)));
#line 161 "pd_info.m"
    transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, (MR_Integer) 1)));
#line 161 "pd_info.m"
    transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, (MR_Integer) 2)));
#line 161 "pd_info.m"
    transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, (MR_Integer) 3)));
#line 161 "pd_info.m"
    transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, (MR_Integer) 4)));
#line 161 "pd_info.m"
    transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, (MR_Integer) 5)));
#line 161 "pd_info.m"
    transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, (MR_Integer) 6)));
#line 161 "pd_info.m"
    transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, (MR_Integer) 7)));
#line 161 "pd_info.m"
    transform_hlds__pd_info__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, (MR_Integer) 8)));
#line 161 "pd_info.m"
    transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, (MR_Integer) 9)));
#line 161 "pd_info.m"
    transform_hlds__pd_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, (MR_Integer) 10)));
#line 214 "pd_info.m"
    {
#line 214 "pd_info.m"
      transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, &transform_hlds__pd_info__ProcInfo_12);
    }
#line 215 "pd_info.m"
    {
#line 215 "pd_info.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__pd_info__ProcInfo_12, &transform_hlds__pd_info__VarTypes_13);
    }
#line 216 "pd_info.m"
    {
#line 216 "pd_info.m"
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__pd_info__VarTypes_13, transform_hlds__pd_info__Var_6, &transform_hlds__pd_info__Type_14);
    }
#line 217 "pd_info.m"
    {
#line 217 "pd_info.m"
      hlds__instmap__bind_var_to_functors_8_p_0(transform_hlds__pd_info__Var_6, transform_hlds__pd_info__Type_14, transform_hlds__pd_info__MainConsId_7, transform_hlds__pd_info__OtherConsIds_8, transform_hlds__pd_info__InstMap0_10, &transform_hlds__pd_info__InstMap_15, transform_hlds__pd_info__ModuleInfo0_11, &transform_hlds__pd_info__ModuleInfo_16);
    }
#line 219 "pd_info.m"
    {
#line 219 "pd_info.m"
      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__pd_info__InstMap_15, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, &transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19);
    }
#line 181 "pd_info.m"
    transform_hlds__pd_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19, (MR_Integer) 0)));
#line 181 "pd_info.m"
    transform_hlds__pd_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19, (MR_Integer) 1)));
#line 181 "pd_info.m"
    transform_hlds__pd_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19, (MR_Integer) 2)));
#line 181 "pd_info.m"
    transform_hlds__pd_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19, (MR_Integer) 3)));
#line 181 "pd_info.m"
    transform_hlds__pd_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19, (MR_Integer) 4)));
#line 181 "pd_info.m"
    transform_hlds__pd_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19, (MR_Integer) 5)));
#line 181 "pd_info.m"
    transform_hlds__pd_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19, (MR_Integer) 6)));
#line 181 "pd_info.m"
    transform_hlds__pd_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19, (MR_Integer) 7)));
#line 181 "pd_info.m"
    transform_hlds__pd_info__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19, (MR_Integer) 8)));
#line 181 "pd_info.m"
    transform_hlds__pd_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19, (MR_Integer) 9)));
#line 181 "pd_info.m"
    transform_hlds__pd_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19, (MR_Integer) 10)));
#line 181 "pd_info.m"
    {
#line 181 "pd_info.m"
      MR_Word base;
#line 181 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 181 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18 = base;
#line 181 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__ModuleInfo_16));
#line 181 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_38_38));
#line 181 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_39_39));
#line 181 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_40_40));
#line 181 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_41_41));
#line 181 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_42_42));
#line 181 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_43_43));
#line 181 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_44_44));
#line 181 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_45_45));
#line 181 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_46_46));
#line 181 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_47_47));
#line 181 "pd_info.m"
    }
#line 211 "pd_info.m"
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
#line 205 "pd_info.m"
  {
#line 205 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 205 "pd_info.m"
    MR_Word transform_hlds__pd_info__GoalInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 1)));
#line 205 "pd_info.m"
    MR_Word transform_hlds__pd_info__InstMap0_7;
#line 205 "pd_info.m"
    MR_Word transform_hlds__pd_info__Delta_8;
#line 205 "pd_info.m"
    MR_Word transform_hlds__pd_info__InstMap_9;
#line 205 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 0)));

#line 206 "pd_info.m"
    {
#line 206 "pd_info.m"
      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_10, &transform_hlds__pd_info__InstMap0_7);
    }
#line 207 "pd_info.m"
    {
#line 207 "pd_info.m"
      transform_hlds__pd_info__Delta_8 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_info__GoalInfo_5);
    }
#line 208 "pd_info.m"
    {
#line 208 "pd_info.m"
      hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__pd_info__InstMap0_7, transform_hlds__pd_info__Delta_8, &transform_hlds__pd_info__InstMap_9);
    }
#line 209 "pd_info.m"
    {
#line 209 "pd_info.m"
      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__pd_info__InstMap_9, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_10, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_11);
#line 209 "pd_info.m"
      return;
    }
#line 205 "pd_info.m"
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
#line 203 "pd_info.m"
  {
#line 203 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 203 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 0)));
#line 203 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 1)));
#line 203 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 2)));
#line 203 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 3)));
#line 203 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 4)));
#line 203 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 5)));
#line 203 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 6)));
#line 203 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 7)));
#line 203 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 8)));
#line 203 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 9)));
#line 203 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 10)));

#line 203 "pd_info.m"
    {
#line 203 "pd_info.m"
      MR_Word base;
#line 203 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 203 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7 = base;
#line 203 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_9_9));
#line 203 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_10_10));
#line 203 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_11_11));
#line 203 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 203 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 203 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 203 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 203 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 203 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 203 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 203 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__Versions_4));
#line 203 "pd_info.m"
    }
#line 203 "pd_info.m"
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
#line 201 "pd_info.m"
  {
#line 201 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 201 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 0)));
#line 201 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 1)));
#line 201 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 2)));
#line 201 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 3)));
#line 201 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 4)));
#line 201 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 5)));
#line 201 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 6)));
#line 201 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 7)));
#line 201 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 8)));
#line 201 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 10)));
#line 201 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 9)));

#line 201 "pd_info.m"
    {
#line 201 "pd_info.m"
      MR_Word base;
#line 201 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 201 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7 = base;
#line 201 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_9_9));
#line 201 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_10_10));
#line 201 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_11_11));
#line 201 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 201 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 201 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 201 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 201 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 201 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 201 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__Versions_4));
#line 201 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 201 "pd_info.m"
    }
#line 201 "pd_info.m"
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
    MR_Word transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 9)));
#line 199 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 10)));
#line 199 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 8)));

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
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__Depth_4));
#line 199 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 199 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 199 "pd_info.m"
    }
#line 199 "pd_info.m"
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
    MR_Integer transform_hlds__pd_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 8)));
#line 197 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 9)));
#line 197 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 10)));
#line 197 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 7)));

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
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__Parents_4));
#line 197 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 197 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 197 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 197 "pd_info.m"
    }
#line 197 "pd_info.m"
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
    MR_Word transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 7)));
#line 195 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 8)));
#line 195 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 9)));
#line 195 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 10)));
#line 195 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 6)));

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
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__TermInfo_4));
#line 195 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 195 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 195 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 195 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 195 "pd_info.m"
    }
#line 195 "pd_info.m"
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
    MR_Word transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 6)));
#line 193 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 7)));
#line 193 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 8)));
#line 193 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 9)));
#line 193 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 10)));
#line 193 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 5)));

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
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__Counter_4));
#line 193 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 193 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
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
    MR_Word transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 5)));
#line 191 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 6)));
#line 191 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 7)));
#line 191 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 8)));
#line 191 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 9)));
#line 191 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 10)));
#line 191 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 4)));

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
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__ProcArgInfo_4));
#line 191 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 191 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
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
    MR_Word transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 4)));
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 5)));
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
    MR_Word transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 3)));

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
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__Versions_4));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
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
#line 187 "pd_info.m"
  {
#line 187 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 187 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 0)));
#line 187 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 1)));
#line 187 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 3)));
#line 187 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 4)));
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
    MR_Word transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 2)));

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
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__Index_4));
#line 187 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 187 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
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
#line 182 "pd_info.m"
  {
#line 182 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 182 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9;
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10;
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14;
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15;
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16;
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_17_17;
#line 183 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_18_18;
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_19_19;
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_20_20;
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;

#line 183 "pd_info.m"
    {
#line 183 "pd_info.m"
      transform_hlds__pd_info__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__V_9_9, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_4));
#line 183 "pd_info.m"
    }
#line 183 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 0)));
#line 183 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 1)));
#line 183 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 2)));
#line 183 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 3)));
#line 183 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 4)));
#line 183 "pd_info.m"
    transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 5)));
#line 183 "pd_info.m"
    transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 6)));
#line 183 "pd_info.m"
    transform_hlds__pd_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 7)));
#line 183 "pd_info.m"
    transform_hlds__pd_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 8)));
#line 183 "pd_info.m"
    transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 9)));
#line 183 "pd_info.m"
    transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 10)));
#line 183 "pd_info.m"
    {
#line 183 "pd_info.m"
      MR_Word base;
#line 183 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 183 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7 = base;
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_10_10));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_9_9));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_20_20));
#line 183 "pd_info.m"
    }
#line 182 "pd_info.m"
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
#line 181 "pd_info.m"
  {
#line 181 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 181 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 1)));
#line 181 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 2)));
#line 181 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 3)));
#line 181 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 4)));
#line 181 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 5)));
#line 181 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 6)));
#line 181 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 7)));
#line 181 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 8)));
#line 181 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 9)));
#line 181 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 10)));
#line 181 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 0)));

#line 181 "pd_info.m"
    {
#line 181 "pd_info.m"
      MR_Word base;
#line 181 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 181 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7 = base;
#line 181 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__ModuleInfo_4));
#line 181 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_10_10));
#line 181 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_11_11));
#line 181 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 181 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 181 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 181 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 181 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 181 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 181 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 181 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 181 "pd_info.m"
    }
#line 181 "pd_info.m"
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
#line 178 "pd_info.m"
  {
#line 178 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 178 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 178 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 178 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 178 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 178 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 178 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 178 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 178 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 178 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 178 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));

#line 178 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 178 "pd_info.m"
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
#line 177 "pd_info.m"
  {
#line 177 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 177 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 177 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 177 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 177 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 177 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 177 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 177 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 177 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 177 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 177 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;

#line 177 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 177 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 177 "pd_info.m"
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
#line 176 "pd_info.m"
  {
#line 176 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 176 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 176 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 176 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 176 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 176 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 176 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 176 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 176 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 176 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 176 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;

#line 176 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 176 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 176 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 176 "pd_info.m"
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
#line 175 "pd_info.m"
  {
#line 175 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 175 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 175 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 175 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 175 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 175 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 175 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 175 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 175 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_11_11;
#line 175 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 175 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;

#line 175 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 175 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 175 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 175 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 175 "pd_info.m"
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
    MR_Word transform_hlds__pd_info__V_10_10;
#line 174 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_11_11;
#line 174 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 174 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;

#line 174 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 174 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 174 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 174 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 174 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 174 "pd_info.m"
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
    MR_Word transform_hlds__pd_info__V_9_9;
#line 173 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10;
#line 173 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_11_11;
#line 173 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 173 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;

#line 173 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 173 "pd_info.m"
    transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 173 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 173 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 173 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 173 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 173 "pd_info.m"
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
    MR_Word transform_hlds__pd_info__V_8_8;
#line 172 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9;
#line 172 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10;
#line 172 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_11_11;
#line 172 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 172 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;

#line 172 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 172 "pd_info.m"
    transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 172 "pd_info.m"
    transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 172 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 172 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 172 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 172 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 172 "pd_info.m"
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
    MR_Word transform_hlds__pd_info__V_7_7;
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_8_8;
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9;
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10;
#line 171 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_11_11;
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 171 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;

#line 171 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 171 "pd_info.m"
    transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 171 "pd_info.m"
    transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 171 "pd_info.m"
    transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 171 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 171 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 171 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 171 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 171 "pd_info.m"
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
#line 170 "pd_info.m"
  {
#line 170 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 170 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 170 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 170 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6;
#line 170 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_7_7;
#line 170 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_8_8;
#line 170 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9;
#line 170 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10;
#line 170 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_11_11;
#line 170 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 170 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;

#line 170 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 170 "pd_info.m"
    transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 170 "pd_info.m"
    transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 170 "pd_info.m"
    transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 170 "pd_info.m"
    transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
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
#line 162 "pd_info.m"
  {
#line 162 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 162 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 163 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 163 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));

#line 166 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 167 "pd_info.m"
      {
#line 168 "pd_info.m"
        {
#line 168 "pd_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
#line 168 "pd_info.m"
          return;
        }
#line 167 "pd_info.m"
      }
#line 166 "pd_info.m"
    else
#line 165 "pd_info.m"
      *transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_5, (MR_Integer) 0)));
#line 162 "pd_info.m"
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
#line 161 "pd_info.m"
  {
#line 161 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 161 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_4_4;
#line 161 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5;
#line 161 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6;
#line 161 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_7_7;
#line 161 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_8_8;
#line 161 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9;
#line 161 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10;
#line 161 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_11_11;
#line 161 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 161 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;

#line 161 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 161 "pd_info.m"
    transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 161 "pd_info.m"
    transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 161 "pd_info.m"
    transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 161 "pd_info.m"
    transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 161 "pd_info.m"
    transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 161 "pd_info.m"
    transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 161 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 161 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 161 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 161 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 161 "pd_info.m"
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
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18,
#line 64 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19)
#line 64 "pd_info.m"
{
#line 149 "pd_info.m"
  {
#line 149 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 149 "pd_info.m"
    MR_Word transform_hlds__pd_info__ModuleInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 0)));
#line 149 "pd_info.m"
    MR_Word transform_hlds__pd_info__ArgModes_11;
#line 149 "pd_info.m"
    MR_Word transform_hlds__pd_info__HeadInstVars_12;
#line 149 "pd_info.m"
    MR_Word transform_hlds__pd_info__InstMap_13;
#line 149 "pd_info.m"
    MR_Word transform_hlds__pd_info__LocalTermInfo_15;
#line 149 "pd_info.m"
    MR_Word transform_hlds__pd_info__Parents_16;
#line 149 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_17;
#line 149 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_41_41;
#line 161 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 1)));
#line 161 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 2)));
#line 161 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 3)));
#line 161 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 4)));
#line 161 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 5)));
#line 161 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 6)));
#line 161 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 7)));
#line 161 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 8)));
#line 161 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 9)));
#line 161 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 10)));
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_42_42;
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_44_44;
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_45_45;
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_46_46;
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_47_47;
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_48_48;
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_49_49;
#line 183 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_50_50;
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_51_51;
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_52_52;
#line 183 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_43_43;

#line 151 "pd_info.m"
    {
#line 151 "pd_info.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__pd_info__ProcInfo_8, &transform_hlds__pd_info__ArgModes_11);
    }
#line 152 "pd_info.m"
    {
#line 152 "pd_info.m"
      check_hlds__modecheck_util__get_constrained_inst_vars_3_p_0(transform_hlds__pd_info__ModuleInfo_10, transform_hlds__pd_info__ArgModes_11, &transform_hlds__pd_info__HeadInstVars_12);
    }
#line 153 "pd_info.m"
    {
#line 153 "pd_info.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__pd_info__ProcInfo_8, transform_hlds__pd_info__ModuleInfo_10, &transform_hlds__pd_info__InstMap_13);
    }
#line 155 "pd_info.m"
    {
#line 155 "pd_info.m"
      transform_hlds__pd_term__local_term_info_init_1_p_0(&transform_hlds__pd_info__LocalTermInfo_15);
    }
#line 156 "pd_info.m"
    {
#line 156 "pd_info.m"
      transform_hlds__pd_info__Parents_16 = mercury__set__make_singleton_set_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__pd_info__PredProcId_6)));
    }
#line 157 "pd_info.m"
    {
#line 157 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 157 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_17, 0) = ((MR_Box) (transform_hlds__pd_info__ProcInfo_8));
#line 157 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_17, 1) = ((MR_Box) (transform_hlds__pd_info__HeadInstVars_12));
#line 157 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_17, 2) = ((MR_Box) (transform_hlds__pd_info__InstMap_13));
#line 157 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_17, 3) = ((MR_Box) ((MR_Integer) 0));
#line 157 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_17, 4) = ((MR_Box) (transform_hlds__pd_info__LocalTermInfo_15));
#line 157 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_17, 5) = ((MR_Box) (transform_hlds__pd_info__PredInfo_7));
#line 157 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_17, 6) = ((MR_Box) (transform_hlds__pd_info__Parents_16));
#line 157 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_17, 7) = ((MR_Box) (transform_hlds__pd_info__PredProcId_6));
#line 157 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_17, 8) = ((MR_Box) ((MR_Integer) 0));
#line 157 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_17, 9) = ((MR_Box) ((MR_Integer) 0));
#line 157 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_17, 10) = ((MR_Box) ((MR_Integer) 0));
#line 157 "pd_info.m"
    }
#line 183 "pd_info.m"
    {
#line 183 "pd_info.m"
      transform_hlds__pd_info__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__V_41_41, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_17));
#line 183 "pd_info.m"
    }
#line 183 "pd_info.m"
    transform_hlds__pd_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 0)));
#line 183 "pd_info.m"
    transform_hlds__pd_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 1)));
#line 183 "pd_info.m"
    transform_hlds__pd_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 2)));
#line 183 "pd_info.m"
    transform_hlds__pd_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 3)));
#line 183 "pd_info.m"
    transform_hlds__pd_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 4)));
#line 183 "pd_info.m"
    transform_hlds__pd_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 5)));
#line 183 "pd_info.m"
    transform_hlds__pd_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 6)));
#line 183 "pd_info.m"
    transform_hlds__pd_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 7)));
#line 183 "pd_info.m"
    transform_hlds__pd_info__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 8)));
#line 183 "pd_info.m"
    transform_hlds__pd_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 9)));
#line 183 "pd_info.m"
    transform_hlds__pd_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 10)));
#line 183 "pd_info.m"
    {
#line 183 "pd_info.m"
      MR_Word base;
#line 183 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 183 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19 = base;
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_42_42));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_41_41));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_44_44));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_45_45));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_46_46));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_47_47));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_48_48));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_49_49));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_50_50));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_51_51));
#line 183 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_52_52));
#line 183 "pd_info.m"
    }
#line 149 "pd_info.m"
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
#line 138 "pd_info.m"
  {
#line 138 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 138 "pd_info.m"
    MR_Word transform_hlds__pd_info__TypeInfo_17_17 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[0];
#line 138 "pd_info.m"
    MR_Word transform_hlds__pd_info__TypeCtorInfo_18_18;
#line 138 "pd_info.m"
    MR_Word transform_hlds__pd_info__GoalVersionIndex_7;
#line 138 "pd_info.m"
    MR_Word transform_hlds__pd_info__Versions_8;
#line 138 "pd_info.m"
    MR_Word transform_hlds__pd_info__ParentVersions_9;
#line 138 "pd_info.m"
    MR_Word transform_hlds__pd_info__GlobalInfo_10;
#line 138 "pd_info.m"
    MR_Word transform_hlds__pd_info__CreatedVersions_11;
#line 138 "pd_info.m"
    MR_Word transform_hlds__pd_info__UselessVersions_12;
#line 138 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14;

#line 139 "pd_info.m"
    {
#line 139 "pd_info.m"
      mercury__map__init_1_p_0(transform_hlds__pd_info__TypeInfo_17_17, transform_hlds__pd_info__TypeInfo_17_17, &transform_hlds__pd_info__GoalVersionIndex_7);
    }
#line 11665 "transform_hlds.pd_info.c"
    transform_hlds__pd_info__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 140 "pd_info.m"
    {
#line 140 "pd_info.m"
      mercury__map__init_1_p_0(transform_hlds__pd_info__TypeCtorInfo_18_18, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0, &transform_hlds__pd_info__Versions_8);
    }
#line 141 "pd_info.m"
    {
#line 141 "pd_info.m"
      mercury__set__init_1_p_0(transform_hlds__pd_info__TypeCtorInfo_18_18, &transform_hlds__pd_info__ParentVersions_9);
    }
#line 142 "pd_info.m"
    {
#line 142 "pd_info.m"
      transform_hlds__pd_term__global_term_info_init_1_p_0(&transform_hlds__pd_info__GlobalInfo_10);
    }
#line 143 "pd_info.m"
    {
#line 143 "pd_info.m"
      mercury__set__init_1_p_0(transform_hlds__pd_info__TypeCtorInfo_18_18, &transform_hlds__pd_info__CreatedVersions_11);
    }
#line 144 "pd_info.m"
    {
#line 144 "pd_info.m"
      mercury__set__init_1_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[0], &transform_hlds__pd_info__UselessVersions_12);
    }
#line 146 "pd_info.m"
    {
#line 146 "pd_info.m"
      transform_hlds__pd_info__V_14_14 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 145 "pd_info.m"
    {
#line 145 "pd_info.m"
      MR_Word base;
#line 145 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 145 "pd_info.m"
      *transform_hlds__pd_info__PDInfo_6 = base;
#line 145 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__ModuleInfo_4));
#line 145 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 145 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__GoalVersionIndex_7));
#line 145 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__Versions_8));
#line 145 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__ProcArgInfos_5));
#line 145 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 145 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__GlobalInfo_10));
#line 145 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__ParentVersions_9));
#line 145 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Integer) 0));
#line 145 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__CreatedVersions_11));
#line 145 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__UselessVersions_12));
#line 145 "pd_info.m"
    }
#line 138 "pd_info.m"
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
