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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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
#include "counter.mih"
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
#include "transform_hlds.pd_debug.mih"
#include "transform_hlds.pd_term.mih"
#include "transform_hlds.pd_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 149 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 152 "transform_hlds.pd_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__pd_info__tree234__pti_tree234_2__pseudo_1__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 155 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 158 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 161 "transform_hlds.pd_info.c"
static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_maybe_version_0_0;

#line 164 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 167 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 170 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 173 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 176 "transform_hlds.pd_info.c"
static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_maybe_version_0_1[5];

#line 179 "transform_hlds.pd_info.c"
static const MR_ConstString transform_hlds__pd_info__transform_hlds__pd_info__field_names_maybe_version_0_1[5];

#line 182 "transform_hlds.pd_info.c"
static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_maybe_version_0_1;

#line 185 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_maybe_version_0_0[1];

#line 188 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_maybe_version_0_1[1];

#line 191 "transform_hlds.pd_info.c"
static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_maybe_version_0[2];

#line 194 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_maybe_version_0[2];

#line 197 "transform_hlds.pd_info.c"
static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_maybe_version_0[2];

#line 200 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__transform_hlds__pd_info__ti_pd_branch_info_1builtin__type_ctor_info_int_0;

#line 203 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__pd_info__ti_pd_branch_info_1builtin__type_ctor_info_int_0;

#line 206 "transform_hlds.pd_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__pti_set_ordlist_1__pseudo_1;

#line 209 "transform_hlds.pd_info.c"
static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_pd_branch_info_1_0[3];

#line 212 "transform_hlds.pd_info.c"
static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_pd_branch_info_1_0;

#line 215 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_pd_branch_info_1_0[1];

#line 218 "transform_hlds.pd_info.c"
static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_pd_branch_info_1[1];

#line 221 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_pd_branch_info_1[1];

#line 224 "transform_hlds.pd_info.c"
static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_pd_branch_info_1[1];

#line 227 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__maybe__ti_maybe_1transform_hlds__pd_info__type_ctor_info_unfold_info_0;

#line 230 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__pd_info__type_ctor_info_version_info_0;

#line 233 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 236 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 239 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 242 "transform_hlds.pd_info.c"
static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_pd_info_0_0[11];

#line 245 "transform_hlds.pd_info.c"
static const MR_ConstString transform_hlds__pd_info__transform_hlds__pd_info__field_names_pd_info_0_0[11];

#line 248 "transform_hlds.pd_info.c"
static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_pd_info_0_0;

#line 251 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_pd_info_0_0[1];

#line 254 "transform_hlds.pd_info.c"
static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_pd_info_0[1];

#line 257 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_pd_info_0[1];

#line 260 "transform_hlds.pd_info.c"
static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_pd_info_0[1];

#line 263 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 266 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 269 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 272 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 275 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 278 "transform_hlds.pd_info.c"
static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_unfold_info_0_0[11];

#line 281 "transform_hlds.pd_info.c"
static const MR_ConstString transform_hlds__pd_info__transform_hlds__pd_info__field_names_unfold_info_0_0[11];

#line 284 "transform_hlds.pd_info.c"
static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_unfold_info_0_0;

#line 287 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_unfold_info_0_0[1];

#line 290 "transform_hlds.pd_info.c"
static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_unfold_info_0[1];

#line 293 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_unfold_info_0[1];

#line 296 "transform_hlds.pd_info.c"
static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_unfold_info_0[1];

#line 299 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 302 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 305 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 308 "transform_hlds.pd_info.c"
static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_version_info_0_0[9];

#line 311 "transform_hlds.pd_info.c"
static const MR_ConstString transform_hlds__pd_info__transform_hlds__pd_info__field_names_version_info_0_0[9];

#line 314 "transform_hlds.pd_info.c"
static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_version_info_0_0;

#line 317 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_version_info_0_0[1];

#line 320 "transform_hlds.pd_info.c"
static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_version_info_0[1];

#line 323 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_version_info_0[1];

#line 326 "transform_hlds.pd_info.c"
static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_version_info_0[1];

#line 329 "transform_hlds.pd_info.c"
static const MR_EnumFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__enum_functor_desc_version_is_exact_0_0;

#line 332 "transform_hlds.pd_info.c"
static const MR_EnumFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__enum_functor_desc_version_is_exact_0_1;

#line 335 "transform_hlds.pd_info.c"
static const MR_EnumFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__enum_value_ordered_version_is_exact_0[2];

#line 338 "transform_hlds.pd_info.c"
static const MR_EnumFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__enum_name_ordered_version_is_exact_0[2];

#line 341 "transform_hlds.pd_info.c"
static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_version_is_exact_0[2];

#line 344 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____branch_info_map_1_0_10001(
#line 347 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 349 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 351 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

#line 354 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____branch_info_map_1_0_10001(
#line 357 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 359 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_2,
#line 361 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3,
#line 363 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_4);

#line 366 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____goal_version_index_0_0_10001(
#line 369 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 371 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

#line 374 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____goal_version_index_0_0_10001(
#line 377 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 379 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 381 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

#line 384 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____maybe_version_0_0_10001(
#line 387 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 389 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

#line 392 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____maybe_version_0_0_10001(
#line 395 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 397 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 399 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

#line 402 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_arg_info_0_0_10001(
#line 405 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 407 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

#line 410 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____pd_arg_info_0_0_10001(
#line 413 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 415 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 417 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

#line 420 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_branch_info_1_0_10001(
#line 423 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 425 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 427 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

#line 430 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____pd_branch_info_1_0_10001(
#line 433 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 435 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_2,
#line 437 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3,
#line 439 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_4);

#line 442 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_info_0_0_10001(
#line 445 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 447 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

#line 450 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____pd_info_0_0_10001(
#line 453 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 455 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 457 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

#line 460 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_proc_arg_info_0_0_10001(
#line 463 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 465 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

#line 468 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____pd_proc_arg_info_0_0_10001(
#line 471 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 473 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 475 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

#line 478 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____unfold_info_0_0_10001(
#line 481 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 483 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

#line 486 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____unfold_info_0_0_10001(
#line 489 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 491 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 493 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

#line 496 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____useless_versions_0_0_10001(
#line 499 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 501 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

#line 504 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____useless_versions_0_0_10001(
#line 507 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 509 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 511 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

#line 514 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_index_0_0_10001(
#line 517 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 519 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

#line 522 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____version_index_0_0_10001(
#line 525 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 527 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 529 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

#line 532 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_info_0_0_10001(
#line 535 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 537 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

#line 540 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____version_info_0_0_10001(
#line 543 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 545 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 547 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

#line 550 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_is_exact_0_0_10001(
#line 553 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 555 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

#line 558 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____version_is_exact_0_0_10001(
#line 561 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 563 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 565 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

#line 546 "pd_info.m"
static void MR_CALL 
transform_hlds__pd_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_105_99_107_95_118_101_114_115_105_111_110_95_95_91_49_93_95_48_7_p_0(
#line 546 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 546 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__3_3,
#line 546 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__4_4,
#line 546 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__5_5,
#line 546 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__6_6,
#line 546 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__7_7);

#line 611 "pd_info.m"
static MR_bool MR_CALL 
transform_hlds__pd_info__check_insts_8_p_0(
#line 611 "pd_info.m"
  MR_Word transform_hlds__pd_info__ModuleInfo_1,
#line 611 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 611 "pd_info.m"
  MR_Word transform_hlds__pd_info__VarRenaming_3,
#line 611 "pd_info.m"
  MR_Word transform_hlds__pd_info__OldInstMap_4,
#line 611 "pd_info.m"
  MR_Word transform_hlds__pd_info__NewInstMap_5,
#line 611 "pd_info.m"
  MR_Word transform_hlds__pd_info__VarTypes_6,
#line 611 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_0_7,
#line 611 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_8);

#line 506 "pd_info.m"
static MR_bool MR_CALL 
transform_hlds__pd_info__get_matching_version_7_p_0(
#line 506 "pd_info.m"
  MR_Word transform_hlds__pd_info__ModuleInfo_1,
#line 506 "pd_info.m"
  MR_Word transform_hlds__pd_info__ThisGoal_2,
#line 506 "pd_info.m"
  MR_Word transform_hlds__pd_info__ThisInstMap_3,
#line 506 "pd_info.m"
  MR_Word transform_hlds__pd_info__VarTypes_4,
#line 506 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__5_5,
#line 506 "pd_info.m"
  MR_Word transform_hlds__pd_info__Versions_6,
#line 506 "pd_info.m"
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



#line 764 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 772 "transform_hlds.pd_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__pd_info__tree234__pti_tree234_2__pseudo_1__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

#line 781 "transform_hlds.pd_info.c"
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

#line 798 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 806 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__pd_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__pd_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 815 "transform_hlds.pd_info.c"
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

#line 832 "transform_hlds.pd_info.c"
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

#line 847 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 855 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 864 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 872 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 881 "transform_hlds.pd_info.c"
static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_maybe_version_0_1[5] = {
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_is_exact_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 890 "transform_hlds.pd_info.c"
static const MR_ConstString transform_hlds__pd_info__transform_hlds__pd_info__field_names_maybe_version_0_1[5] = {
  (MR_String) "mv_is_exact",
  (MR_String) "mv_ppid",
  (MR_String) "mv_version",
  (MR_String) "mv_renaming",
  (MR_String) "mv_tsubst"
};

#line 899 "transform_hlds.pd_info.c"
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

#line 914 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_maybe_version_0_0[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_maybe_version_0_0
};

#line 919 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_maybe_version_0_1[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_maybe_version_0_1
};

#line 924 "transform_hlds.pd_info.c"
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

#line 938 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_maybe_version_0[2] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_maybe_version_0_0,
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_maybe_version_0_1
};

#line 944 "transform_hlds.pd_info.c"
static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_maybe_version_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 950 "transform_hlds.pd_info.c"
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

#line 967 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__transform_hlds__pd_info__ti_pd_branch_info_1builtin__type_ctor_info_int_0 = {
  &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_branch_info_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 975 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__pd_info__ti_pd_branch_info_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__pd_info__transform_hlds__pd_info__ti_pd_branch_info_1builtin__type_ctor_info_int_0
  }
};

#line 984 "transform_hlds.pd_info.c"
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

#line 1001 "transform_hlds.pd_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1009 "transform_hlds.pd_info.c"
static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_pd_branch_info_1_0[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__tree234__pti_tree234_2__pseudo_1__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__set_ordlist__pti_set_ordlist_1__pseudo_1,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__set_ordlist__pti_set_ordlist_1__pseudo_1
};

#line 1016 "transform_hlds.pd_info.c"
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

#line 1031 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_pd_branch_info_1_0[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_pd_branch_info_1_0
};

#line 1036 "transform_hlds.pd_info.c"
static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_pd_branch_info_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_pd_branch_info_1_0
  }
};

#line 1045 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_pd_branch_info_1[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_pd_branch_info_1_0
};

#line 1050 "transform_hlds.pd_info.c"
static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_pd_branch_info_1[1] = {
  (MR_Integer) 0
};

#line 1055 "transform_hlds.pd_info.c"
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

#line 1072 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__maybe__ti_maybe_1transform_hlds__pd_info__type_ctor_info_unfold_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_unfold_info_0
  }
};

#line 1080 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__pd_info__type_ctor_info_version_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0
  }
};

#line 1089 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1097 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1106 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__pd_info__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1114 "transform_hlds.pd_info.c"
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

#line 1129 "transform_hlds.pd_info.c"
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

#line 1144 "transform_hlds.pd_info.c"
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

#line 1159 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_pd_info_0_0[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_pd_info_0_0
};

#line 1164 "transform_hlds.pd_info.c"
static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_pd_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_pd_info_0_0
  }
};

#line 1173 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_pd_info_0[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_pd_info_0_0
};

#line 1178 "transform_hlds.pd_info.c"
static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_pd_info_0[1] = {
  (MR_Integer) 0
};

#line 1183 "transform_hlds.pd_info.c"
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

#line 1200 "transform_hlds.pd_info.c"
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

#line 1217 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1225 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1234 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1243 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__pd_info__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  }
};

#line 1251 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__pd_info__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  }
};

#line 1260 "transform_hlds.pd_info.c"
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

#line 1275 "transform_hlds.pd_info.c"
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

#line 1290 "transform_hlds.pd_info.c"
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

#line 1305 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_unfold_info_0_0[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_unfold_info_0_0
};

#line 1310 "transform_hlds.pd_info.c"
static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_unfold_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_unfold_info_0_0
  }
};

#line 1319 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_unfold_info_0[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_unfold_info_0_0
};

#line 1324 "transform_hlds.pd_info.c"
static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_unfold_info_0[1] = {
  (MR_Integer) 0
};

#line 1329 "transform_hlds.pd_info.c"
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

#line 1346 "transform_hlds.pd_info.c"
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

#line 1363 "transform_hlds.pd_info.c"
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

#line 1380 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1388 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1396 "transform_hlds.pd_info.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1404 "transform_hlds.pd_info.c"
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

#line 1417 "transform_hlds.pd_info.c"
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

#line 1430 "transform_hlds.pd_info.c"
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

#line 1445 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_version_info_0_0[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_version_info_0_0
};

#line 1450 "transform_hlds.pd_info.c"
static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_version_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_version_info_0_0
  }
};

#line 1459 "transform_hlds.pd_info.c"
static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_version_info_0[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_version_info_0_0
};

#line 1464 "transform_hlds.pd_info.c"
static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_version_info_0[1] = {
  (MR_Integer) 0
};

#line 1469 "transform_hlds.pd_info.c"
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

#line 1486 "transform_hlds.pd_info.c"
static const MR_EnumFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__enum_functor_desc_version_is_exact_0_0 = {
  (MR_String) "exact",
  (MR_Integer) 0
};

#line 1492 "transform_hlds.pd_info.c"
static const MR_EnumFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__enum_functor_desc_version_is_exact_0_1 = {
  (MR_String) "more_general",
  (MR_Integer) 1
};

#line 1498 "transform_hlds.pd_info.c"
static const MR_EnumFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__enum_value_ordered_version_is_exact_0[2] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__enum_functor_desc_version_is_exact_0_0,
  &transform_hlds__pd_info__transform_hlds__pd_info__enum_functor_desc_version_is_exact_0_1
};

#line 1504 "transform_hlds.pd_info.c"
static const MR_EnumFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__enum_name_ordered_version_is_exact_0[2] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__enum_functor_desc_version_is_exact_0_0,
  &transform_hlds__pd_info__transform_hlds__pd_info__enum_functor_desc_version_is_exact_0_1
};

#line 1510 "transform_hlds.pd_info.c"
static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_version_is_exact_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1516 "transform_hlds.pd_info.c"
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

#line 1533 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____branch_info_map_1_0_10001(
#line 1536 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 1538 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 1540 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
#line 1542 "transform_hlds.pd_info.c"
{
#line 1544 "transform_hlds.pd_info.c"
  {
#line 1546 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded;

#line 1549 "transform_hlds.pd_info.c"
    {
#line 1551 "transform_hlds.pd_info.c"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____branch_info_map_1_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    }
#line 1554 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 1556 "transform_hlds.pd_info.c"
  }
#line 1558 "transform_hlds.pd_info.c"
}

#line 1561 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____branch_info_map_1_0_10001(
#line 1564 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 1566 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_2,
#line 1568 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3,
#line 1570 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_4)
#line 1572 "transform_hlds.pd_info.c"
{
#line 1574 "transform_hlds.pd_info.c"
  {
#line 1576 "transform_hlds.pd_info.c"
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

#line 1579 "transform_hlds.pd_info.c"
    {
#line 1581 "transform_hlds.pd_info.c"
      transform_hlds__pd_info____Compare____branch_info_map_1_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), &transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_3), ((MR_Word) transform_hlds__pd_info__wrapper_arg_4));
    }
#line 1584 "transform_hlds.pd_info.c"
    *transform_hlds__pd_info__wrapper_arg_2 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
#line 1586 "transform_hlds.pd_info.c"
  }
#line 1588 "transform_hlds.pd_info.c"
}

#line 1591 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____goal_version_index_0_0_10001(
#line 1594 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 1596 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
#line 1598 "transform_hlds.pd_info.c"
{
#line 1600 "transform_hlds.pd_info.c"
  {
#line 1602 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded;

#line 1605 "transform_hlds.pd_info.c"
    {
#line 1607 "transform_hlds.pd_info.c"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____goal_version_index_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    }
#line 1610 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 1612 "transform_hlds.pd_info.c"
  }
#line 1614 "transform_hlds.pd_info.c"
}

#line 1617 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____goal_version_index_0_0_10001(
#line 1620 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 1622 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 1624 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
#line 1626 "transform_hlds.pd_info.c"
{
#line 1628 "transform_hlds.pd_info.c"
  {
#line 1630 "transform_hlds.pd_info.c"
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

#line 1633 "transform_hlds.pd_info.c"
    {
#line 1635 "transform_hlds.pd_info.c"
      transform_hlds__pd_info____Compare____goal_version_index_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    }
#line 1638 "transform_hlds.pd_info.c"
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
#line 1640 "transform_hlds.pd_info.c"
  }
#line 1642 "transform_hlds.pd_info.c"
}

#line 1645 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____maybe_version_0_0_10001(
#line 1648 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 1650 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
#line 1652 "transform_hlds.pd_info.c"
{
#line 1654 "transform_hlds.pd_info.c"
  {
#line 1656 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded;

#line 1659 "transform_hlds.pd_info.c"
    {
#line 1661 "transform_hlds.pd_info.c"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____maybe_version_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    }
#line 1664 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 1666 "transform_hlds.pd_info.c"
  }
#line 1668 "transform_hlds.pd_info.c"
}

#line 1671 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____maybe_version_0_0_10001(
#line 1674 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 1676 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 1678 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
#line 1680 "transform_hlds.pd_info.c"
{
#line 1682 "transform_hlds.pd_info.c"
  {
#line 1684 "transform_hlds.pd_info.c"
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

#line 1687 "transform_hlds.pd_info.c"
    {
#line 1689 "transform_hlds.pd_info.c"
      transform_hlds__pd_info____Compare____maybe_version_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    }
#line 1692 "transform_hlds.pd_info.c"
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
#line 1694 "transform_hlds.pd_info.c"
  }
#line 1696 "transform_hlds.pd_info.c"
}

#line 1699 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_arg_info_0_0_10001(
#line 1702 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 1704 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
#line 1706 "transform_hlds.pd_info.c"
{
#line 1708 "transform_hlds.pd_info.c"
  {
#line 1710 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded;

#line 1713 "transform_hlds.pd_info.c"
    {
#line 1715 "transform_hlds.pd_info.c"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____pd_arg_info_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    }
#line 1718 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 1720 "transform_hlds.pd_info.c"
  }
#line 1722 "transform_hlds.pd_info.c"
}

#line 1725 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____pd_arg_info_0_0_10001(
#line 1728 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 1730 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 1732 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
#line 1734 "transform_hlds.pd_info.c"
{
#line 1736 "transform_hlds.pd_info.c"
  {
#line 1738 "transform_hlds.pd_info.c"
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

#line 1741 "transform_hlds.pd_info.c"
    {
#line 1743 "transform_hlds.pd_info.c"
      transform_hlds__pd_info____Compare____pd_arg_info_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    }
#line 1746 "transform_hlds.pd_info.c"
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
#line 1748 "transform_hlds.pd_info.c"
  }
#line 1750 "transform_hlds.pd_info.c"
}

#line 1753 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_branch_info_1_0_10001(
#line 1756 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 1758 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 1760 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
#line 1762 "transform_hlds.pd_info.c"
{
#line 1764 "transform_hlds.pd_info.c"
  {
#line 1766 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded;

#line 1769 "transform_hlds.pd_info.c"
    {
#line 1771 "transform_hlds.pd_info.c"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____pd_branch_info_1_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    }
#line 1774 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 1776 "transform_hlds.pd_info.c"
  }
#line 1778 "transform_hlds.pd_info.c"
}

#line 1781 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____pd_branch_info_1_0_10001(
#line 1784 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 1786 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_2,
#line 1788 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3,
#line 1790 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_4)
#line 1792 "transform_hlds.pd_info.c"
{
#line 1794 "transform_hlds.pd_info.c"
  {
#line 1796 "transform_hlds.pd_info.c"
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

#line 1799 "transform_hlds.pd_info.c"
    {
#line 1801 "transform_hlds.pd_info.c"
      transform_hlds__pd_info____Compare____pd_branch_info_1_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), &transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_3), ((MR_Word) transform_hlds__pd_info__wrapper_arg_4));
    }
#line 1804 "transform_hlds.pd_info.c"
    *transform_hlds__pd_info__wrapper_arg_2 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
#line 1806 "transform_hlds.pd_info.c"
  }
#line 1808 "transform_hlds.pd_info.c"
}

#line 1811 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_info_0_0_10001(
#line 1814 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 1816 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
#line 1818 "transform_hlds.pd_info.c"
{
#line 1820 "transform_hlds.pd_info.c"
  {
#line 1822 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded;

#line 1825 "transform_hlds.pd_info.c"
    {
#line 1827 "transform_hlds.pd_info.c"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____pd_info_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    }
#line 1830 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 1832 "transform_hlds.pd_info.c"
  }
#line 1834 "transform_hlds.pd_info.c"
}

#line 1837 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____pd_info_0_0_10001(
#line 1840 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 1842 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 1844 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
#line 1846 "transform_hlds.pd_info.c"
{
#line 1848 "transform_hlds.pd_info.c"
  {
#line 1850 "transform_hlds.pd_info.c"
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

#line 1853 "transform_hlds.pd_info.c"
    {
#line 1855 "transform_hlds.pd_info.c"
      transform_hlds__pd_info____Compare____pd_info_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    }
#line 1858 "transform_hlds.pd_info.c"
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
#line 1860 "transform_hlds.pd_info.c"
  }
#line 1862 "transform_hlds.pd_info.c"
}

#line 1865 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_proc_arg_info_0_0_10001(
#line 1868 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 1870 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
#line 1872 "transform_hlds.pd_info.c"
{
#line 1874 "transform_hlds.pd_info.c"
  {
#line 1876 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded;

#line 1879 "transform_hlds.pd_info.c"
    {
#line 1881 "transform_hlds.pd_info.c"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____pd_proc_arg_info_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    }
#line 1884 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 1886 "transform_hlds.pd_info.c"
  }
#line 1888 "transform_hlds.pd_info.c"
}

#line 1891 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____pd_proc_arg_info_0_0_10001(
#line 1894 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 1896 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 1898 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
#line 1900 "transform_hlds.pd_info.c"
{
#line 1902 "transform_hlds.pd_info.c"
  {
#line 1904 "transform_hlds.pd_info.c"
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

#line 1907 "transform_hlds.pd_info.c"
    {
#line 1909 "transform_hlds.pd_info.c"
      transform_hlds__pd_info____Compare____pd_proc_arg_info_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    }
#line 1912 "transform_hlds.pd_info.c"
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
#line 1914 "transform_hlds.pd_info.c"
  }
#line 1916 "transform_hlds.pd_info.c"
}

#line 1919 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____unfold_info_0_0_10001(
#line 1922 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 1924 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
#line 1926 "transform_hlds.pd_info.c"
{
#line 1928 "transform_hlds.pd_info.c"
  {
#line 1930 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded;

#line 1933 "transform_hlds.pd_info.c"
    {
#line 1935 "transform_hlds.pd_info.c"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____unfold_info_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    }
#line 1938 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 1940 "transform_hlds.pd_info.c"
  }
#line 1942 "transform_hlds.pd_info.c"
}

#line 1945 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____unfold_info_0_0_10001(
#line 1948 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 1950 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 1952 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
#line 1954 "transform_hlds.pd_info.c"
{
#line 1956 "transform_hlds.pd_info.c"
  {
#line 1958 "transform_hlds.pd_info.c"
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

#line 1961 "transform_hlds.pd_info.c"
    {
#line 1963 "transform_hlds.pd_info.c"
      transform_hlds__pd_info____Compare____unfold_info_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    }
#line 1966 "transform_hlds.pd_info.c"
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
#line 1968 "transform_hlds.pd_info.c"
  }
#line 1970 "transform_hlds.pd_info.c"
}

#line 1973 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____useless_versions_0_0_10001(
#line 1976 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 1978 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
#line 1980 "transform_hlds.pd_info.c"
{
#line 1982 "transform_hlds.pd_info.c"
  {
#line 1984 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded;

#line 1987 "transform_hlds.pd_info.c"
    {
#line 1989 "transform_hlds.pd_info.c"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____useless_versions_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    }
#line 1992 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 1994 "transform_hlds.pd_info.c"
  }
#line 1996 "transform_hlds.pd_info.c"
}

#line 1999 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____useless_versions_0_0_10001(
#line 2002 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 2004 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 2006 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
#line 2008 "transform_hlds.pd_info.c"
{
#line 2010 "transform_hlds.pd_info.c"
  {
#line 2012 "transform_hlds.pd_info.c"
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

#line 2015 "transform_hlds.pd_info.c"
    {
#line 2017 "transform_hlds.pd_info.c"
      transform_hlds__pd_info____Compare____useless_versions_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    }
#line 2020 "transform_hlds.pd_info.c"
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
#line 2022 "transform_hlds.pd_info.c"
  }
#line 2024 "transform_hlds.pd_info.c"
}

#line 2027 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_index_0_0_10001(
#line 2030 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 2032 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
#line 2034 "transform_hlds.pd_info.c"
{
#line 2036 "transform_hlds.pd_info.c"
  {
#line 2038 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded;

#line 2041 "transform_hlds.pd_info.c"
    {
#line 2043 "transform_hlds.pd_info.c"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____version_index_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    }
#line 2046 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 2048 "transform_hlds.pd_info.c"
  }
#line 2050 "transform_hlds.pd_info.c"
}

#line 2053 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____version_index_0_0_10001(
#line 2056 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 2058 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 2060 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
#line 2062 "transform_hlds.pd_info.c"
{
#line 2064 "transform_hlds.pd_info.c"
  {
#line 2066 "transform_hlds.pd_info.c"
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

#line 2069 "transform_hlds.pd_info.c"
    {
#line 2071 "transform_hlds.pd_info.c"
      transform_hlds__pd_info____Compare____version_index_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    }
#line 2074 "transform_hlds.pd_info.c"
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
#line 2076 "transform_hlds.pd_info.c"
  }
#line 2078 "transform_hlds.pd_info.c"
}

#line 2081 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_info_0_0_10001(
#line 2084 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 2086 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
#line 2088 "transform_hlds.pd_info.c"
{
#line 2090 "transform_hlds.pd_info.c"
  {
#line 2092 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded;

#line 2095 "transform_hlds.pd_info.c"
    {
#line 2097 "transform_hlds.pd_info.c"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____version_info_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    }
#line 2100 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 2102 "transform_hlds.pd_info.c"
  }
#line 2104 "transform_hlds.pd_info.c"
}

#line 2107 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____version_info_0_0_10001(
#line 2110 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 2112 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 2114 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
#line 2116 "transform_hlds.pd_info.c"
{
#line 2118 "transform_hlds.pd_info.c"
  {
#line 2120 "transform_hlds.pd_info.c"
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

#line 2123 "transform_hlds.pd_info.c"
    {
#line 2125 "transform_hlds.pd_info.c"
      transform_hlds__pd_info____Compare____version_info_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    }
#line 2128 "transform_hlds.pd_info.c"
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
#line 2130 "transform_hlds.pd_info.c"
  }
#line 2132 "transform_hlds.pd_info.c"
}

#line 2135 "transform_hlds.pd_info.c"
static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_is_exact_0_0_10001(
#line 2138 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
#line 2140 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
#line 2142 "transform_hlds.pd_info.c"
{
#line 2144 "transform_hlds.pd_info.c"
  {
#line 2146 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded;

#line 2149 "transform_hlds.pd_info.c"
    {
#line 2151 "transform_hlds.pd_info.c"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____version_is_exact_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    }
#line 2154 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 2156 "transform_hlds.pd_info.c"
  }
#line 2158 "transform_hlds.pd_info.c"
}

#line 2161 "transform_hlds.pd_info.c"
static void MR_CALL 
transform_hlds__pd_info____Compare____version_is_exact_0_0_10001(
#line 2164 "transform_hlds.pd_info.c"
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
#line 2166 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
#line 2168 "transform_hlds.pd_info.c"
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
#line 2170 "transform_hlds.pd_info.c"
{
#line 2172 "transform_hlds.pd_info.c"
  {
#line 2174 "transform_hlds.pd_info.c"
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

#line 2177 "transform_hlds.pd_info.c"
    {
#line 2179 "transform_hlds.pd_info.c"
      transform_hlds__pd_info____Compare____version_is_exact_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    }
#line 2182 "transform_hlds.pd_info.c"
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
#line 2184 "transform_hlds.pd_info.c"
  }
#line 2186 "transform_hlds.pd_info.c"
}

#line 546 "pd_info.m"
static void MR_CALL 
transform_hlds__pd_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_105_99_107_95_118_101_114_115_105_111_110_95_95_91_49_93_95_48_7_p_0(
#line 546 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 546 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__3_3,
#line 546 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__4_4,
#line 546 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__5_5,
#line 546 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__6_6,
#line 546 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__7_7)
#line 546 "pd_info.m"
{
#line 550 "pd_info.m"
  {
#line 550 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;

#line 550 "pd_info.m"
    if ((transform_hlds__pd_info__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 550 "pd_info.m"
      {
#line 551 "pd_info.m"
        {
#line 551 "pd_info.m"
          MR_Word base;
#line 551 "pd_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 551 "pd_info.m"
          *transform_hlds__pd_info__HeadVar__7_7 = base;
#line 551 "pd_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 1));
#line 551 "pd_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_info__HeadVar__2_2));
#line 551 "pd_info.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__pd_info__HeadVar__5_5));
#line 551 "pd_info.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__pd_info__HeadVar__3_3));
#line 551 "pd_info.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__pd_info__HeadVar__4_4));
#line 551 "pd_info.m"
        }
#line 550 "pd_info.m"
      }
#line 550 "pd_info.m"
    else
#line 550 "pd_info.m"
      {
#line 550 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__6_6, (MR_Integer) 4)));
#line 550 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__6_6, (MR_Integer) 3)));
#line 550 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__6_6, (MR_Integer) 2)));
#line 550 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__6_6, (MR_Integer) 1)));
#line 550 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__6_6, (MR_Integer) 0)));

#line 550 "pd_info.m"
#line 550 "pd_info.m"
        switch (transform_hlds__pd_info__V_60_60) {
#line 550 "pd_info.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 550 "pd_info.m"
          case (MR_Integer) 0:
#line 552 "pd_info.m"
            {
#line 554 "pd_info.m"
              {
#line 554 "pd_info.m"
                MR_Word base;
#line 554 "pd_info.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 554 "pd_info.m"
                *transform_hlds__pd_info__HeadVar__7_7 = base;
#line 554 "pd_info.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 554 "pd_info.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_59_59));
#line 554 "pd_info.m"
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_58_58));
#line 554 "pd_info.m"
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_57_57));
#line 554 "pd_info.m"
                MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_56_56));
#line 554 "pd_info.m"
              }
#line 552 "pd_info.m"
            }
#line 550 "pd_info.m"
            break;
#line 550 "pd_info.m"
          case (MR_Integer) 1:
#line 557 "pd_info.m"
            {
#line 557 "pd_info.m"
              MR_Integer transform_hlds__pd_info__CostDelta1_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 6)));
#line 557 "pd_info.m"
              MR_Integer transform_hlds__pd_info__CostDelta2_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__V_58_58, (MR_Integer) 6)));
#line 558 "pd_info.m"
              MR_Word transform_hlds__pd_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 0)));
#line 558 "pd_info.m"
              MR_Word transform_hlds__pd_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 1)));
#line 558 "pd_info.m"
              MR_Word transform_hlds__pd_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 2)));
#line 558 "pd_info.m"
              MR_Word transform_hlds__pd_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 3)));
#line 558 "pd_info.m"
              MR_Word transform_hlds__pd_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 4)));
#line 558 "pd_info.m"
              MR_Integer transform_hlds__pd_info__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 5)));
#line 558 "pd_info.m"
              MR_Word transform_hlds__pd_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 7)));
#line 558 "pd_info.m"
              MR_Word transform_hlds__pd_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 8)));
#line 559 "pd_info.m"
              MR_Word transform_hlds__pd_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__V_58_58, (MR_Integer) 0)));
#line 559 "pd_info.m"
              MR_Word transform_hlds__pd_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__V_58_58, (MR_Integer) 1)));
#line 559 "pd_info.m"
              MR_Word transform_hlds__pd_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__V_58_58, (MR_Integer) 2)));
#line 559 "pd_info.m"
              MR_Word transform_hlds__pd_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__V_58_58, (MR_Integer) 3)));
#line 559 "pd_info.m"
              MR_Word transform_hlds__pd_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__V_58_58, (MR_Integer) 4)));
#line 559 "pd_info.m"
              MR_Integer transform_hlds__pd_info__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__V_58_58, (MR_Integer) 5)));
#line 559 "pd_info.m"
              MR_Word transform_hlds__pd_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__V_58_58, (MR_Integer) 7)));
#line 559 "pd_info.m"
              MR_Word transform_hlds__pd_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__V_58_58, (MR_Integer) 8)));

#line 561 "pd_info.m"
              transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CostDelta1_41 > transform_hlds__pd_info__CostDelta2_50);
#line 564 "pd_info.m"
              if (transform_hlds__pd_info__succeeded)
#line 562 "pd_info.m"
                {
#line 562 "pd_info.m"
                  {
#line 562 "pd_info.m"
                    MR_Word base;
#line 562 "pd_info.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 562 "pd_info.m"
                    *transform_hlds__pd_info__HeadVar__7_7 = base;
#line 562 "pd_info.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 1));
#line 562 "pd_info.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_info__HeadVar__2_2));
#line 562 "pd_info.m"
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__pd_info__HeadVar__5_5));
#line 562 "pd_info.m"
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__pd_info__HeadVar__3_3));
#line 562 "pd_info.m"
                    MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__pd_info__HeadVar__4_4));
#line 562 "pd_info.m"
                  }
#line 562 "pd_info.m"
                }
#line 564 "pd_info.m"
              else
#line 565 "pd_info.m"
                {
#line 565 "pd_info.m"
                  {
#line 565 "pd_info.m"
                    MR_Word base;
#line 565 "pd_info.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 565 "pd_info.m"
                    *transform_hlds__pd_info__HeadVar__7_7 = base;
#line 565 "pd_info.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 1));
#line 565 "pd_info.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_59_59));
#line 565 "pd_info.m"
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_58_58));
#line 565 "pd_info.m"
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_57_57));
#line 565 "pd_info.m"
                    MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_56_56));
#line 565 "pd_info.m"
                  }
#line 565 "pd_info.m"
                }
#line 557 "pd_info.m"
            }
#line 550 "pd_info.m"
            break;
#line 550 "pd_info.m"
        }
#line 550 "pd_info.m"
      }
#line 550 "pd_info.m"
  }
#line 546 "pd_info.m"
}

#line 442 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info____Compare____version_is_exact_0_0(
#line 442 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
#line 442 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 442 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
#line 442 "pd_info.m"
{
#line 442 "pd_info.m"
  {
#line 442 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 442 "pd_info.m"
    MR_Integer transform_hlds__pd_info__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;
#line 442 "pd_info.m"
    MR_Integer transform_hlds__pd_info__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__pd_info__HeadVar__3_3;

#line 442 "pd_info.m"
    {
#line 442 "pd_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__pd_info__HeadVar__1_1, transform_hlds__pd_info__Cast_HeadVar1_4, transform_hlds__pd_info__Cast_HeadVar2_5);
    }
#line 442 "pd_info.m"
  }
#line 442 "pd_info.m"
}

#line 442 "pd_info.m"
MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_is_exact_0_0(
#line 442 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_1,
#line 442 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
#line 442 "pd_info.m"
{
#line 2432 "transform_hlds.pd_info.c"
  {
#line 2434 "transform_hlds.pd_info.c"
    MR_bool transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__HeadVar__2_1 == transform_hlds__pd_info__HeadVar__2_2);

#line 2437 "transform_hlds.pd_info.c"
    return transform_hlds__pd_info__succeeded;
#line 2439 "transform_hlds.pd_info.c"
  }
#line 442 "pd_info.m"
}

#line 446 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info____Compare____version_info_0_0(
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
    MR_Integer transform_hlds__pd_info__CastX_30 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;
#line 446 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastY_31 = (MR_Integer) transform_hlds__pd_info__HeadVar__3_3;

#line 446 "pd_info.m"
    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastX_30 == transform_hlds__pd_info__CastY_31);
#line 446 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 2468 "transform_hlds.pd_info.c"
      *transform_hlds__pd_info__HeadVar__1_1 = (MR_Integer) 0;
#line 446 "pd_info.m"
    else
#line 446 "pd_info.m"
      {
#line 446 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));
#line 446 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
#line 446 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 2)));
#line 446 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 3)));
#line 446 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 4)));
#line 446 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 5)));
#line 446 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 6)));
#line 446 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 7)));
#line 446 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 8)));
#line 446 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 0)));
#line 446 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 1)));
#line 446 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 2)));
#line 446 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 3)));
#line 446 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 4)));
#line 446 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 5)));
#line 446 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 6)));
#line 446 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 7)));
#line 446 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 8)));
#line 446 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_22_22;

#line 446 "pd_info.m"
        {
#line 446 "pd_info.m"
          hlds__hlds_goal____Compare____hlds_goal_0_0(&transform_hlds__pd_info__V_22_22, transform_hlds__pd_info__V_4_4, transform_hlds__pd_info__V_13_13);
        }
#line 2518 "transform_hlds.pd_info.c"
        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_22_22 == (MR_Integer) 0);
#line 446 "pd_info.m"
        transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 446 "pd_info.m"
        if (transform_hlds__pd_info__succeeded)
#line 446 "pd_info.m"
          *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_22_22;
#line 446 "pd_info.m"
        else
#line 446 "pd_info.m"
          {
#line 446 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_23_23;

#line 446 "pd_info.m"
            {
#line 446 "pd_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[0], &transform_hlds__pd_info__V_23_23, ((MR_Box) (transform_hlds__pd_info__V_5_5)), ((MR_Box) (transform_hlds__pd_info__V_14_14)));
            }
#line 2538 "transform_hlds.pd_info.c"
            transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_23_23 == (MR_Integer) 0);
#line 446 "pd_info.m"
            transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 446 "pd_info.m"
            if (transform_hlds__pd_info__succeeded)
#line 446 "pd_info.m"
              *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_23_23;
#line 446 "pd_info.m"
            else
#line 446 "pd_info.m"
              {
#line 446 "pd_info.m"
                MR_Word transform_hlds__pd_info__V_24_24;

#line 446 "pd_info.m"
                {
#line 446 "pd_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[10], &transform_hlds__pd_info__V_24_24, ((MR_Box) (transform_hlds__pd_info__V_6_6)), ((MR_Box) (transform_hlds__pd_info__V_15_15)));
                }
#line 2558 "transform_hlds.pd_info.c"
                transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_24_24 == (MR_Integer) 0);
#line 446 "pd_info.m"
                transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 446 "pd_info.m"
                if (transform_hlds__pd_info__succeeded)
#line 446 "pd_info.m"
                  *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_24_24;
#line 446 "pd_info.m"
                else
#line 446 "pd_info.m"
                  {
#line 446 "pd_info.m"
                    MR_Word transform_hlds__pd_info__V_25_25;

#line 446 "pd_info.m"
                    {
#line 446 "pd_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[11], &transform_hlds__pd_info__V_25_25, ((MR_Box) (transform_hlds__pd_info__V_7_7)), ((MR_Box) (transform_hlds__pd_info__V_16_16)));
                    }
#line 2578 "transform_hlds.pd_info.c"
                    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_25_25 == (MR_Integer) 0);
#line 446 "pd_info.m"
                    transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 446 "pd_info.m"
                    if (transform_hlds__pd_info__succeeded)
#line 446 "pd_info.m"
                      *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_25_25;
#line 446 "pd_info.m"
                    else
#line 446 "pd_info.m"
                      {
#line 446 "pd_info.m"
                        MR_Word transform_hlds__pd_info__V_26_26;

#line 446 "pd_info.m"
                        {
#line 446 "pd_info.m"
                          hlds__instmap____Compare____instmap_0_0(&transform_hlds__pd_info__V_26_26, transform_hlds__pd_info__V_8_8, transform_hlds__pd_info__V_17_17);
                        }
#line 2598 "transform_hlds.pd_info.c"
                        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_26_26 == (MR_Integer) 0);
#line 446 "pd_info.m"
                        transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 446 "pd_info.m"
                        if (transform_hlds__pd_info__succeeded)
#line 446 "pd_info.m"
                          *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_26_26;
#line 446 "pd_info.m"
                        else
#line 446 "pd_info.m"
                          {
#line 446 "pd_info.m"
                            MR_Word transform_hlds__pd_info__V_27_27;

#line 446 "pd_info.m"
                            {
#line 446 "pd_info.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__pd_info__V_27_27, transform_hlds__pd_info__V_9_9, transform_hlds__pd_info__V_18_18);
                            }
#line 2618 "transform_hlds.pd_info.c"
                            transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_27_27 == (MR_Integer) 0);
#line 446 "pd_info.m"
                            transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 446 "pd_info.m"
                            if (transform_hlds__pd_info__succeeded)
#line 446 "pd_info.m"
                              *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_27_27;
#line 446 "pd_info.m"
                            else
#line 446 "pd_info.m"
                              {
#line 446 "pd_info.m"
                                MR_Word transform_hlds__pd_info__V_28_28;

#line 446 "pd_info.m"
                                {
#line 446 "pd_info.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__pd_info__V_28_28, transform_hlds__pd_info__V_10_10, transform_hlds__pd_info__V_19_19);
                                }
#line 2638 "transform_hlds.pd_info.c"
                                transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_28_28 == (MR_Integer) 0);
#line 446 "pd_info.m"
                                transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 446 "pd_info.m"
                                if (transform_hlds__pd_info__succeeded)
#line 446 "pd_info.m"
                                  *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_28_28;
#line 446 "pd_info.m"
                                else
#line 446 "pd_info.m"
                                  {
#line 446 "pd_info.m"
                                    MR_Word transform_hlds__pd_info__V_29_29;

#line 446 "pd_info.m"
                                    {
#line 446 "pd_info.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[6], &transform_hlds__pd_info__V_29_29, ((MR_Box) (transform_hlds__pd_info__V_11_11)), ((MR_Box) (transform_hlds__pd_info__V_20_20)));
                                    }
#line 2658 "transform_hlds.pd_info.c"
                                    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_29_29 == (MR_Integer) 0);
#line 446 "pd_info.m"
                                    transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 446 "pd_info.m"
                                    if (transform_hlds__pd_info__succeeded)
#line 446 "pd_info.m"
                                      *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_29_29;
#line 446 "pd_info.m"
                                    else
#line 446 "pd_info.m"
                                      {
#line 446 "pd_info.m"
                                        {
#line 446 "pd_info.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[12], transform_hlds__pd_info__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_info__V_12_12)), ((MR_Box) (transform_hlds__pd_info__V_21_21)));
                                        }
#line 446 "pd_info.m"
                                      }
#line 446 "pd_info.m"
                                  }
#line 446 "pd_info.m"
                              }
#line 446 "pd_info.m"
                          }
#line 446 "pd_info.m"
                      }
#line 446 "pd_info.m"
                  }
#line 446 "pd_info.m"
              }
#line 446 "pd_info.m"
          }
#line 446 "pd_info.m"
      }
#line 446 "pd_info.m"
  }
#line 446 "pd_info.m"
}

#line 446 "pd_info.m"
MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_info_0_0(
#line 446 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__1_1,
#line 446 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
#line 446 "pd_info.m"
{
#line 446 "pd_info.m"
  {
#line 446 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 446 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastX_21 = (MR_Integer) transform_hlds__pd_info__HeadVar__1_1;
#line 446 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastY_22 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;

#line 446 "pd_info.m"
    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastX_21 == transform_hlds__pd_info__CastY_22);
#line 446 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 446 "pd_info.m"
      transform_hlds__pd_info__succeeded = MR_TRUE;
#line 446 "pd_info.m"
    else
#line 446 "pd_info.m"
      {
#line 446 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_24_24;
#line 446 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_25_25;
#line 446 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_26_26;
#line 446 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_28_28;
#line 446 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_29_29;
#line 446 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 0)));
#line 446 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 1)));
#line 446 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 2)));
#line 446 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 3)));
#line 446 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 4)));
#line 446 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 5)));
#line 446 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 6)));
#line 446 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 7)));
#line 446 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 8)));
#line 446 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));
#line 446 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
#line 446 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 2)));
#line 446 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 3)));
#line 446 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 4)));
#line 446 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 5)));
#line 446 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 6)));
#line 446 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 7)));
#line 446 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 8)));

#line 2773 "transform_hlds.pd_info.c"
        {
#line 2775 "transform_hlds.pd_info.c"
          transform_hlds__pd_info__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__pd_info__V_3_3, transform_hlds__pd_info__V_12_12);
        }
#line 446 "pd_info.m"
        if (transform_hlds__pd_info__succeeded)
#line 446 "pd_info.m"
          {
#line 2782 "transform_hlds.pd_info.c"
            transform_hlds__pd_info__TypeInfo_24_24 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[0];
#line 2784 "transform_hlds.pd_info.c"
            {
#line 2786 "transform_hlds.pd_info.c"
              transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_24_24, ((MR_Box) (transform_hlds__pd_info__V_4_4)), ((MR_Box) (transform_hlds__pd_info__V_13_13)));
            }
#line 446 "pd_info.m"
            if (transform_hlds__pd_info__succeeded)
#line 446 "pd_info.m"
              {
#line 2793 "transform_hlds.pd_info.c"
                transform_hlds__pd_info__TypeInfo_25_25 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[10];
#line 2795 "transform_hlds.pd_info.c"
                {
#line 2797 "transform_hlds.pd_info.c"
                  transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_25_25, ((MR_Box) (transform_hlds__pd_info__V_5_5)), ((MR_Box) (transform_hlds__pd_info__V_14_14)));
                }
#line 446 "pd_info.m"
                if (transform_hlds__pd_info__succeeded)
#line 446 "pd_info.m"
                  {
#line 2804 "transform_hlds.pd_info.c"
                    transform_hlds__pd_info__TypeInfo_26_26 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[11];
#line 2806 "transform_hlds.pd_info.c"
                    {
#line 2808 "transform_hlds.pd_info.c"
                      transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_26_26, ((MR_Box) (transform_hlds__pd_info__V_6_6)), ((MR_Box) (transform_hlds__pd_info__V_15_15)));
                    }
#line 446 "pd_info.m"
                    if (transform_hlds__pd_info__succeeded)
#line 446 "pd_info.m"
                      {
#line 2815 "transform_hlds.pd_info.c"
                        {
#line 2817 "transform_hlds.pd_info.c"
                          transform_hlds__pd_info__succeeded = hlds__instmap____Unify____instmap_0_0(transform_hlds__pd_info__V_7_7, transform_hlds__pd_info__V_16_16);
                        }
#line 446 "pd_info.m"
                        if (transform_hlds__pd_info__succeeded)
#line 446 "pd_info.m"
                          {
#line 2824 "transform_hlds.pd_info.c"
                            transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_8_8 == transform_hlds__pd_info__V_17_17);
#line 446 "pd_info.m"
                            if (transform_hlds__pd_info__succeeded)
#line 446 "pd_info.m"
                              {
#line 2830 "transform_hlds.pd_info.c"
                                transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_9_9 == transform_hlds__pd_info__V_18_18);
#line 446 "pd_info.m"
                                if (transform_hlds__pd_info__succeeded)
#line 446 "pd_info.m"
                                  {
#line 2836 "transform_hlds.pd_info.c"
                                    transform_hlds__pd_info__TypeInfo_28_28 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[6];
#line 2838 "transform_hlds.pd_info.c"
                                    {
#line 2840 "transform_hlds.pd_info.c"
                                      transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_28_28, ((MR_Box) (transform_hlds__pd_info__V_10_10)), ((MR_Box) (transform_hlds__pd_info__V_19_19)));
                                    }
#line 446 "pd_info.m"
                                    if (transform_hlds__pd_info__succeeded)
#line 446 "pd_info.m"
                                      {
#line 2847 "transform_hlds.pd_info.c"
                                        transform_hlds__pd_info__TypeInfo_29_29 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[12];
#line 2849 "transform_hlds.pd_info.c"
                                        {
#line 2851 "transform_hlds.pd_info.c"
                                          transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_29_29, ((MR_Box) (transform_hlds__pd_info__V_11_11)), ((MR_Box) (transform_hlds__pd_info__V_20_20)));
                                        }
#line 446 "pd_info.m"
                                      }
#line 446 "pd_info.m"
                                  }
#line 446 "pd_info.m"
                              }
#line 446 "pd_info.m"
                          }
#line 446 "pd_info.m"
                      }
#line 446 "pd_info.m"
                  }
#line 446 "pd_info.m"
              }
#line 446 "pd_info.m"
          }
#line 446 "pd_info.m"
      }
#line 446 "pd_info.m"
    return transform_hlds__pd_info__succeeded;
#line 446 "pd_info.m"
  }
#line 446 "pd_info.m"
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
      transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[5], ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar2_4)));
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
      transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[7], ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar2_4)));
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
    MR_Integer transform_hlds__pd_info__CastX_36 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;
#line 224 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastY_37 = (MR_Integer) transform_hlds__pd_info__HeadVar__3_3;

#line 224 "pd_info.m"
    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastX_36 == transform_hlds__pd_info__CastY_37);
#line 224 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 3023 "transform_hlds.pd_info.c"
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
        MR_Word transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 2)));
#line 224 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 3)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 4)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 5)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 6)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 7)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 8)));
#line 224 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 9)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 10)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 0)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 1)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 2)));
#line 224 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 3)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 4)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 5)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 6)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 7)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 8)));
#line 224 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 9)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 10)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_26_26;

#line 224 "pd_info.m"
        {
#line 224 "pd_info.m"
          hlds__hlds_pred____Compare____proc_info_0_0(&transform_hlds__pd_info__V_26_26, transform_hlds__pd_info__V_4_4, transform_hlds__pd_info__V_15_15);
        }
#line 3081 "transform_hlds.pd_info.c"
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
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[6], &transform_hlds__pd_info__V_27_27, ((MR_Box) (transform_hlds__pd_info__V_5_5)), ((MR_Box) (transform_hlds__pd_info__V_16_16)));
            }
#line 3101 "transform_hlds.pd_info.c"
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
                  hlds__instmap____Compare____instmap_0_0(&transform_hlds__pd_info__V_28_28, transform_hlds__pd_info__V_6_6, transform_hlds__pd_info__V_17_17);
                }
#line 3121 "transform_hlds.pd_info.c"
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
                      mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__pd_info__V_29_29, transform_hlds__pd_info__V_7_7, transform_hlds__pd_info__V_18_18);
                    }
#line 3141 "transform_hlds.pd_info.c"
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
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[8], &transform_hlds__pd_info__V_30_30, ((MR_Box) (transform_hlds__pd_info__V_8_8)), ((MR_Box) (transform_hlds__pd_info__V_19_19)));
                        }
#line 3161 "transform_hlds.pd_info.c"
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
                            {
#line 224 "pd_info.m"
                              hlds__hlds_pred____Compare____pred_info_0_0(&transform_hlds__pd_info__V_31_31, transform_hlds__pd_info__V_9_9, transform_hlds__pd_info__V_20_20);
                            }
#line 3181 "transform_hlds.pd_info.c"
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
                                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[6], &transform_hlds__pd_info__V_32_32, ((MR_Box) (transform_hlds__pd_info__V_10_10)), ((MR_Box) (transform_hlds__pd_info__V_21_21)));
                                }
#line 3201 "transform_hlds.pd_info.c"
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
                                    MR_Word transform_hlds__pd_info__V_33_33;

#line 224 "pd_info.m"
                                    {
#line 224 "pd_info.m"
                                      hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__pd_info__V_33_33, transform_hlds__pd_info__V_11_11, transform_hlds__pd_info__V_22_22);
                                    }
#line 3221 "transform_hlds.pd_info.c"
                                    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_33_33 == (MR_Integer) 0);
#line 224 "pd_info.m"
                                    transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 224 "pd_info.m"
                                    if (transform_hlds__pd_info__succeeded)
#line 224 "pd_info.m"
                                      *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_33_33;
#line 224 "pd_info.m"
                                    else
#line 224 "pd_info.m"
                                      {
#line 224 "pd_info.m"
                                        MR_Word transform_hlds__pd_info__V_34_34;
#line 224 "pd_info.m"
                                        MR_Integer transform_hlds__pd_info__V_49_49 = (MR_Integer) transform_hlds__pd_info__V_12_12;
#line 224 "pd_info.m"
                                        MR_Integer transform_hlds__pd_info__V_50_50 = (MR_Integer) transform_hlds__pd_info__V_23_23;

#line 224 "pd_info.m"
                                        {
#line 224 "pd_info.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__pd_info__V_34_34, transform_hlds__pd_info__V_49_49, transform_hlds__pd_info__V_50_50);
                                        }
#line 3245 "transform_hlds.pd_info.c"
                                        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_34_34 == (MR_Integer) 0);
#line 224 "pd_info.m"
                                        transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 224 "pd_info.m"
                                        if (transform_hlds__pd_info__succeeded)
#line 224 "pd_info.m"
                                          *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_34_34;
#line 224 "pd_info.m"
                                        else
#line 224 "pd_info.m"
                                          {
#line 224 "pd_info.m"
                                            MR_Word transform_hlds__pd_info__V_35_35;

#line 224 "pd_info.m"
                                            {
#line 224 "pd_info.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__pd_info__V_35_35, transform_hlds__pd_info__V_13_13, transform_hlds__pd_info__V_24_24);
                                            }
#line 3265 "transform_hlds.pd_info.c"
                                            transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_35_35 == (MR_Integer) 0);
#line 224 "pd_info.m"
                                            transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 224 "pd_info.m"
                                            if (transform_hlds__pd_info__succeeded)
#line 224 "pd_info.m"
                                              *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_35_35;
#line 224 "pd_info.m"
                                            else
#line 224 "pd_info.m"
                                              {
#line 224 "pd_info.m"
                                                MR_Integer transform_hlds__pd_info__V_51_51 = (MR_Integer) transform_hlds__pd_info__V_14_14;
#line 224 "pd_info.m"
                                                MR_Integer transform_hlds__pd_info__V_52_52 = (MR_Integer) transform_hlds__pd_info__V_25_25;

#line 224 "pd_info.m"
                                                {
#line 224 "pd_info.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__pd_info__HeadVar__1_1, transform_hlds__pd_info__V_51_51, transform_hlds__pd_info__V_52_52);
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
    MR_Integer transform_hlds__pd_info__CastX_25 = (MR_Integer) transform_hlds__pd_info__HeadVar__1_1;
#line 224 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastY_26 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;

#line 224 "pd_info.m"
    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastX_25 == transform_hlds__pd_info__CastY_26);
#line 224 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 224 "pd_info.m"
      transform_hlds__pd_info__succeeded = MR_TRUE;
#line 224 "pd_info.m"
    else
#line 224 "pd_info.m"
      {
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_28_28;
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_30_30;
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_32_32;
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 0)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 1)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 2)));
#line 224 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 3)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 4)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 5)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 6)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 7)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 8)));
#line 224 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 9)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 10)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 2)));
#line 224 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 3)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 4)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 5)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 6)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 7)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 8)));
#line 224 "pd_info.m"
        MR_Integer transform_hlds__pd_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 9)));
#line 224 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 10)));

#line 3393 "transform_hlds.pd_info.c"
        {
#line 3395 "transform_hlds.pd_info.c"
          transform_hlds__pd_info__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(transform_hlds__pd_info__V_3_3, transform_hlds__pd_info__V_14_14);
        }
#line 224 "pd_info.m"
        if (transform_hlds__pd_info__succeeded)
#line 224 "pd_info.m"
          {
#line 3402 "transform_hlds.pd_info.c"
            transform_hlds__pd_info__TypeInfo_28_28 = (MR_Word) &transform_hlds__pd_info_scalar_common_2[6];
#line 3404 "transform_hlds.pd_info.c"
            {
#line 3406 "transform_hlds.pd_info.c"
              transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_28_28, ((MR_Box) (transform_hlds__pd_info__V_4_4)), ((MR_Box) (transform_hlds__pd_info__V_15_15)));
            }
#line 224 "pd_info.m"
            if (transform_hlds__pd_info__succeeded)
#line 224 "pd_info.m"
              {
#line 3413 "transform_hlds.pd_info.c"
                {
#line 3415 "transform_hlds.pd_info.c"
                  transform_hlds__pd_info__succeeded = hlds__instmap____Unify____instmap_0_0(transform_hlds__pd_info__V_5_5, transform_hlds__pd_info__V_16_16);
                }
#line 224 "pd_info.m"
                if (transform_hlds__pd_info__succeeded)
#line 224 "pd_info.m"
                  {
#line 3422 "transform_hlds.pd_info.c"
                    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_6_6 == transform_hlds__pd_info__V_17_17);
#line 224 "pd_info.m"
                    if (transform_hlds__pd_info__succeeded)
#line 224 "pd_info.m"
                      {
#line 3428 "transform_hlds.pd_info.c"
                        transform_hlds__pd_info__TypeInfo_30_30 = (MR_Word) &transform_hlds__pd_info_scalar_common_2[8];
#line 3430 "transform_hlds.pd_info.c"
                        {
#line 3432 "transform_hlds.pd_info.c"
                          transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_30_30, ((MR_Box) (transform_hlds__pd_info__V_7_7)), ((MR_Box) (transform_hlds__pd_info__V_18_18)));
                        }
#line 224 "pd_info.m"
                        if (transform_hlds__pd_info__succeeded)
#line 224 "pd_info.m"
                          {
#line 3439 "transform_hlds.pd_info.c"
                            {
#line 3441 "transform_hlds.pd_info.c"
                              transform_hlds__pd_info__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(transform_hlds__pd_info__V_8_8, transform_hlds__pd_info__V_19_19);
                            }
#line 224 "pd_info.m"
                            if (transform_hlds__pd_info__succeeded)
#line 224 "pd_info.m"
                              {
#line 3448 "transform_hlds.pd_info.c"
                                transform_hlds__pd_info__TypeInfo_32_32 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[6];
#line 3450 "transform_hlds.pd_info.c"
                                {
#line 3452 "transform_hlds.pd_info.c"
                                  transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_32_32, ((MR_Box) (transform_hlds__pd_info__V_9_9)), ((MR_Box) (transform_hlds__pd_info__V_20_20)));
                                }
#line 224 "pd_info.m"
                                if (transform_hlds__pd_info__succeeded)
#line 224 "pd_info.m"
                                  {
#line 3459 "transform_hlds.pd_info.c"
                                    {
#line 3461 "transform_hlds.pd_info.c"
                                      transform_hlds__pd_info__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__pd_info__V_10_10, transform_hlds__pd_info__V_21_21);
                                    }
#line 224 "pd_info.m"
                                    if (transform_hlds__pd_info__succeeded)
#line 224 "pd_info.m"
                                      {
#line 3468 "transform_hlds.pd_info.c"
                                        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_11_11 == transform_hlds__pd_info__V_22_22);
#line 224 "pd_info.m"
                                        if (transform_hlds__pd_info__succeeded)
#line 224 "pd_info.m"
                                          {
#line 3474 "transform_hlds.pd_info.c"
                                            transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_12_12 == transform_hlds__pd_info__V_23_23);
#line 224 "pd_info.m"
                                            if (transform_hlds__pd_info__succeeded)
#line 3478 "transform_hlds.pd_info.c"
                                              transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_13_13 == transform_hlds__pd_info__V_24_24);
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
    return transform_hlds__pd_info__succeeded;
#line 224 "pd_info.m"
  }
#line 224 "pd_info.m"
}

#line 260 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info____Compare____pd_proc_arg_info_0_0(
#line 260 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
#line 260 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 260 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
#line 260 "pd_info.m"
{
#line 260 "pd_info.m"
  {
#line 260 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 260 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar1_4 = transform_hlds__pd_info__HeadVar__2_2;
#line 260 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar2_5 = transform_hlds__pd_info__HeadVar__3_3;

#line 260 "pd_info.m"
    {
#line 260 "pd_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[4], transform_hlds__pd_info__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar2_5)));
    }
#line 260 "pd_info.m"
  }
#line 260 "pd_info.m"
}

#line 260 "pd_info.m"
MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_proc_arg_info_0_0(
#line 260 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__1_1,
#line 260 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
#line 260 "pd_info.m"
{
#line 260 "pd_info.m"
  {
#line 260 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 260 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar1_3 = transform_hlds__pd_info__HeadVar__1_1;
#line 260 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar2_4 = transform_hlds__pd_info__HeadVar__2_2;

#line 260 "pd_info.m"
    {
#line 260 "pd_info.m"
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____pd_branch_info_1_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__pd_info__Cast_HeadVar1_3, transform_hlds__pd_info__Cast_HeadVar2_4);
    }
#line 260 "pd_info.m"
    return transform_hlds__pd_info__succeeded;
#line 260 "pd_info.m"
  }
#line 260 "pd_info.m"
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
#line 3591 "transform_hlds.pd_info.c"
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
#line 3649 "transform_hlds.pd_info.c"
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
#line 3669 "transform_hlds.pd_info.c"
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
#line 3689 "transform_hlds.pd_info.c"
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
#line 3709 "transform_hlds.pd_info.c"
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
#line 3729 "transform_hlds.pd_info.c"
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
#line 3749 "transform_hlds.pd_info.c"
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
#line 3769 "transform_hlds.pd_info.c"
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
#line 3789 "transform_hlds.pd_info.c"
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
#line 3809 "transform_hlds.pd_info.c"
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
#line 3829 "transform_hlds.pd_info.c"
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

#line 3960 "transform_hlds.pd_info.c"
        {
#line 3962 "transform_hlds.pd_info.c"
          transform_hlds__pd_info__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__pd_info__V_3_3, transform_hlds__pd_info__V_14_14);
        }
#line 36 "pd_info.m"
        if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
          {
#line 3969 "transform_hlds.pd_info.c"
            transform_hlds__pd_info__TypeInfo_28_28 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[5];
#line 3971 "transform_hlds.pd_info.c"
            {
#line 3973 "transform_hlds.pd_info.c"
              transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_28_28, ((MR_Box) (transform_hlds__pd_info__V_4_4)), ((MR_Box) (transform_hlds__pd_info__V_15_15)));
            }
#line 36 "pd_info.m"
            if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
              {
#line 3980 "transform_hlds.pd_info.c"
                transform_hlds__pd_info__TypeInfo_29_29 = (MR_Word) &transform_hlds__pd_info_scalar_common_2[1];
#line 3982 "transform_hlds.pd_info.c"
                {
#line 3984 "transform_hlds.pd_info.c"
                  transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_29_29, ((MR_Box) (transform_hlds__pd_info__V_5_5)), ((MR_Box) (transform_hlds__pd_info__V_16_16)));
                }
#line 36 "pd_info.m"
                if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
                  {
#line 3991 "transform_hlds.pd_info.c"
                    transform_hlds__pd_info__TypeInfo_30_30 = (MR_Word) &transform_hlds__pd_info_scalar_common_2[5];
#line 3993 "transform_hlds.pd_info.c"
                    {
#line 3995 "transform_hlds.pd_info.c"
                      transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_30_30, ((MR_Box) (transform_hlds__pd_info__V_6_6)), ((MR_Box) (transform_hlds__pd_info__V_17_17)));
                    }
#line 36 "pd_info.m"
                    if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
                      {
#line 4002 "transform_hlds.pd_info.c"
                        transform_hlds__pd_info__TypeInfo_31_31 = (MR_Word) &transform_hlds__pd_info_scalar_common_2[4];
#line 4004 "transform_hlds.pd_info.c"
                        {
#line 4006 "transform_hlds.pd_info.c"
                          transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_31_31, ((MR_Box) (transform_hlds__pd_info__V_7_7)), ((MR_Box) (transform_hlds__pd_info__V_18_18)));
                        }
#line 36 "pd_info.m"
                        if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
                          {
#line 4013 "transform_hlds.pd_info.c"
                            {
#line 4015 "transform_hlds.pd_info.c"
                              transform_hlds__pd_info__succeeded = mercury__counter____Unify____counter_0_0(transform_hlds__pd_info__V_8_8, transform_hlds__pd_info__V_19_19);
                            }
#line 36 "pd_info.m"
                            if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
                              {
#line 4022 "transform_hlds.pd_info.c"
                                {
#line 4024 "transform_hlds.pd_info.c"
                                  transform_hlds__pd_info__succeeded = transform_hlds__pd_term____Unify____global_term_info_0_0(transform_hlds__pd_info__V_9_9, transform_hlds__pd_info__V_20_20);
                                }
#line 36 "pd_info.m"
                                if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
                                  {
#line 4031 "transform_hlds.pd_info.c"
                                    transform_hlds__pd_info__TypeInfo_34_34 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[6];
#line 4033 "transform_hlds.pd_info.c"
                                    {
#line 4035 "transform_hlds.pd_info.c"
                                      transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_34_34, ((MR_Box) (transform_hlds__pd_info__V_10_10)), ((MR_Box) (transform_hlds__pd_info__V_21_21)));
                                    }
#line 36 "pd_info.m"
                                    if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
                                      {
#line 4042 "transform_hlds.pd_info.c"
                                        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_11_11 == transform_hlds__pd_info__V_22_22);
#line 36 "pd_info.m"
                                        if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
                                          {
#line 4048 "transform_hlds.pd_info.c"
                                            transform_hlds__pd_info__TypeInfo_35_35 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[6];
#line 4050 "transform_hlds.pd_info.c"
                                            {
#line 4052 "transform_hlds.pd_info.c"
                                              transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_35_35, ((MR_Box) (transform_hlds__pd_info__V_12_12)), ((MR_Box) (transform_hlds__pd_info__V_23_23)));
                                            }
#line 36 "pd_info.m"
                                            if (transform_hlds__pd_info__succeeded)
#line 36 "pd_info.m"
                                              {
#line 4059 "transform_hlds.pd_info.c"
                                                transform_hlds__pd_info__TypeInfo_36_36 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[7];
#line 4061 "transform_hlds.pd_info.c"
                                                {
#line 4063 "transform_hlds.pd_info.c"
                                                  transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_36_36, ((MR_Box) (transform_hlds__pd_info__V_13_13)), ((MR_Box) (transform_hlds__pd_info__V_24_24)));
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

#line 262 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info____Compare____pd_branch_info_1_0(
#line 262 "pd_info.m"
  MR_Word transform_hlds__pd_info__TypeInfo_for_T_14,
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
    MR_Integer transform_hlds__pd_info__CastX_12 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;
#line 262 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastY_13 = (MR_Integer) transform_hlds__pd_info__HeadVar__3_3;

#line 262 "pd_info.m"
    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastX_12 == transform_hlds__pd_info__CastY_13);
#line 262 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 4121 "transform_hlds.pd_info.c"
      *transform_hlds__pd_info__HeadVar__1_1 = (MR_Integer) 0;
#line 262 "pd_info.m"
    else
#line 262 "pd_info.m"
      {
#line 262 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));
#line 262 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
#line 262 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 2)));
#line 262 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 0)));
#line 262 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 1)));
#line 262 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 2)));
#line 262 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_10_10;

#line 262 "pd_info.m"
        {
#line 262 "pd_info.m"
          mercury__tree234____Compare____tree234_2_0(transform_hlds__pd_info__TypeInfo_for_T_14, (MR_Word) &transform_hlds__pd_info_scalar_common_1[2], &transform_hlds__pd_info__V_10_10, transform_hlds__pd_info__V_4_4, transform_hlds__pd_info__V_7_7);
        }
#line 4147 "transform_hlds.pd_info.c"
        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_10_10 == (MR_Integer) 0);
#line 262 "pd_info.m"
        transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 262 "pd_info.m"
        if (transform_hlds__pd_info__succeeded)
#line 262 "pd_info.m"
          *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_10_10;
#line 262 "pd_info.m"
        else
#line 262 "pd_info.m"
          {
#line 262 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_11_11;

#line 262 "pd_info.m"
            {
#line 262 "pd_info.m"
              mercury__set_ordlist____Compare____set_ordlist_1_0(transform_hlds__pd_info__TypeInfo_for_T_14, &transform_hlds__pd_info__V_11_11, transform_hlds__pd_info__V_5_5, transform_hlds__pd_info__V_8_8);
            }
#line 4167 "transform_hlds.pd_info.c"
            transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_11_11 == (MR_Integer) 0);
#line 262 "pd_info.m"
            transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 262 "pd_info.m"
            if (transform_hlds__pd_info__succeeded)
#line 262 "pd_info.m"
              *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_11_11;
#line 262 "pd_info.m"
            else
#line 262 "pd_info.m"
              {
#line 262 "pd_info.m"
                mercury__set_ordlist____Compare____set_ordlist_1_0(transform_hlds__pd_info__TypeInfo_for_T_14, transform_hlds__pd_info__HeadVar__1_1, transform_hlds__pd_info__V_6_6, transform_hlds__pd_info__V_9_9);
              }
#line 262 "pd_info.m"
          }
#line 262 "pd_info.m"
      }
#line 262 "pd_info.m"
  }
#line 262 "pd_info.m"
}

#line 262 "pd_info.m"
MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_branch_info_1_0(
#line 262 "pd_info.m"
  MR_Word transform_hlds__pd_info__TypeInfo_for_T_11,
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
    MR_Integer transform_hlds__pd_info__CastX_9 = (MR_Integer) transform_hlds__pd_info__HeadVar__1_1;
#line 262 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastY_10 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;

#line 262 "pd_info.m"
    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastX_9 == transform_hlds__pd_info__CastY_10);
#line 262 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 262 "pd_info.m"
      transform_hlds__pd_info__succeeded = MR_TRUE;
#line 262 "pd_info.m"
    else
#line 262 "pd_info.m"
      {
#line 262 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 0)));
#line 262 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 1)));
#line 262 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 2)));
#line 262 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));
#line 262 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
#line 262 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 2)));

#line 4234 "transform_hlds.pd_info.c"
        {
#line 4236 "transform_hlds.pd_info.c"
          transform_hlds__pd_info__succeeded = mercury__tree234____Unify____tree234_2_0(transform_hlds__pd_info__TypeInfo_for_T_11, (MR_Word) &transform_hlds__pd_info_scalar_common_1[2], transform_hlds__pd_info__V_3_3, transform_hlds__pd_info__V_6_6);
        }
#line 262 "pd_info.m"
        if (transform_hlds__pd_info__succeeded)
#line 262 "pd_info.m"
          {
#line 4243 "transform_hlds.pd_info.c"
            {
#line 4245 "transform_hlds.pd_info.c"
              transform_hlds__pd_info__succeeded = mercury__set_ordlist____Unify____set_ordlist_1_0(transform_hlds__pd_info__TypeInfo_for_T_11, transform_hlds__pd_info__V_4_4, transform_hlds__pd_info__V_7_7);
            }
#line 262 "pd_info.m"
            if (transform_hlds__pd_info__succeeded)
#line 4250 "transform_hlds.pd_info.c"
              {
#line 4252 "transform_hlds.pd_info.c"
                transform_hlds__pd_info__succeeded = mercury__set_ordlist____Unify____set_ordlist_1_0(transform_hlds__pd_info__TypeInfo_for_T_11, transform_hlds__pd_info__V_5_5, transform_hlds__pd_info__V_8_8);
              }
#line 262 "pd_info.m"
          }
#line 262 "pd_info.m"
      }
#line 262 "pd_info.m"
    return transform_hlds__pd_info__succeeded;
#line 262 "pd_info.m"
  }
#line 262 "pd_info.m"
}

#line 258 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info____Compare____pd_arg_info_0_0(
#line 258 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
#line 258 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 258 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
#line 258 "pd_info.m"
{
#line 258 "pd_info.m"
  {
#line 258 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 258 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar1_4 = transform_hlds__pd_info__HeadVar__2_2;
#line 258 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar2_5 = transform_hlds__pd_info__HeadVar__3_3;

#line 258 "pd_info.m"
    {
#line 258 "pd_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[4], transform_hlds__pd_info__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar2_5)));
    }
#line 258 "pd_info.m"
  }
#line 258 "pd_info.m"
}

#line 258 "pd_info.m"
MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_arg_info_0_0(
#line 258 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__1_1,
#line 258 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
#line 258 "pd_info.m"
{
#line 258 "pd_info.m"
  {
#line 258 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 258 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar1_3 = transform_hlds__pd_info__HeadVar__1_1;
#line 258 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar2_4 = transform_hlds__pd_info__HeadVar__2_2;

#line 258 "pd_info.m"
    {
#line 258 "pd_info.m"
      transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[4], ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar2_4)));
    }
#line 258 "pd_info.m"
    return transform_hlds__pd_info__succeeded;
#line 258 "pd_info.m"
  }
#line 258 "pd_info.m"
}

#line 428 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info____Compare____maybe_version_0_0(
#line 428 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
#line 428 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 428 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
#line 428 "pd_info.m"
{
#line 428 "pd_info.m"
  {
#line 428 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 428 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastX_28 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;
#line 428 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastY_29 = (MR_Integer) transform_hlds__pd_info__HeadVar__3_3;

#line 428 "pd_info.m"
    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastX_28 == transform_hlds__pd_info__CastY_29);
#line 428 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 4350 "transform_hlds.pd_info.c"
      *transform_hlds__pd_info__HeadVar__1_1 = (MR_Integer) 0;
#line 428 "pd_info.m"
    else
#line 428 "pd_info.m"
    if ((transform_hlds__pd_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 428 "pd_info.m"
      if ((transform_hlds__pd_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 428 "pd_info.m"
        *transform_hlds__pd_info__HeadVar__1_1 = (MR_Integer) 0;
#line 428 "pd_info.m"
      else
#line 4362 "transform_hlds.pd_info.c"
        *transform_hlds__pd_info__HeadVar__1_1 = (MR_Integer) 1;
#line 428 "pd_info.m"
    else
#line 428 "pd_info.m"
      {
#line 428 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 4)));
#line 428 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 3)));
#line 428 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 2)));
#line 428 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
#line 428 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));

#line 428 "pd_info.m"
        if ((transform_hlds__pd_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4381 "transform_hlds.pd_info.c"
          *transform_hlds__pd_info__HeadVar__1_1 = (MR_Integer) 2;
#line 428 "pd_info.m"
        else
#line 428 "pd_info.m"
          {
#line 428 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 0)));
#line 428 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 1)));
#line 428 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 2)));
#line 428 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 3)));
#line 428 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 4)));
#line 428 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_24_24;
#line 428 "pd_info.m"
            MR_Integer transform_hlds__pd_info__V_40_40 = (MR_Integer) transform_hlds__pd_info__V_39_39;
#line 428 "pd_info.m"
            MR_Integer transform_hlds__pd_info__V_41_41 = (MR_Integer) transform_hlds__pd_info__V_19_19;

#line 428 "pd_info.m"
            {
#line 428 "pd_info.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__pd_info__V_24_24, transform_hlds__pd_info__V_40_40, transform_hlds__pd_info__V_41_41);
            }
#line 4409 "transform_hlds.pd_info.c"
            transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_24_24 == (MR_Integer) 0);
#line 428 "pd_info.m"
            transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 428 "pd_info.m"
            if (transform_hlds__pd_info__succeeded)
#line 428 "pd_info.m"
              *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_24_24;
#line 428 "pd_info.m"
            else
#line 428 "pd_info.m"
              {
#line 428 "pd_info.m"
                MR_Word transform_hlds__pd_info__V_25_25;

#line 428 "pd_info.m"
                {
#line 428 "pd_info.m"
                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__pd_info__V_25_25, transform_hlds__pd_info__V_38_38, transform_hlds__pd_info__V_20_20);
                }
#line 4429 "transform_hlds.pd_info.c"
                transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_25_25 == (MR_Integer) 0);
#line 428 "pd_info.m"
                transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 428 "pd_info.m"
                if (transform_hlds__pd_info__succeeded)
#line 428 "pd_info.m"
                  *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_25_25;
#line 428 "pd_info.m"
                else
#line 428 "pd_info.m"
                  {
#line 428 "pd_info.m"
                    MR_Word transform_hlds__pd_info__V_26_26;

#line 428 "pd_info.m"
                    {
#line 428 "pd_info.m"
                      transform_hlds__pd_info____Compare____version_info_0_0(&transform_hlds__pd_info__V_26_26, transform_hlds__pd_info__V_37_37, transform_hlds__pd_info__V_21_21);
                    }
#line 4449 "transform_hlds.pd_info.c"
                    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_26_26 == (MR_Integer) 0);
#line 428 "pd_info.m"
                    transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 428 "pd_info.m"
                    if (transform_hlds__pd_info__succeeded)
#line 428 "pd_info.m"
                      *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_26_26;
#line 428 "pd_info.m"
                    else
#line 428 "pd_info.m"
                      {
#line 428 "pd_info.m"
                        MR_Word transform_hlds__pd_info__V_27_27;

#line 428 "pd_info.m"
                        {
#line 428 "pd_info.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[2], &transform_hlds__pd_info__V_27_27, ((MR_Box) (transform_hlds__pd_info__V_36_36)), ((MR_Box) (transform_hlds__pd_info__V_22_22)));
                        }
#line 4469 "transform_hlds.pd_info.c"
                        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_27_27 == (MR_Integer) 0);
#line 428 "pd_info.m"
                        transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
#line 428 "pd_info.m"
                        if (transform_hlds__pd_info__succeeded)
#line 428 "pd_info.m"
                          *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__V_27_27;
#line 428 "pd_info.m"
                        else
#line 428 "pd_info.m"
                          {
#line 428 "pd_info.m"
                            {
#line 428 "pd_info.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[3], transform_hlds__pd_info__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_info__V_35_35)), ((MR_Box) (transform_hlds__pd_info__V_23_23)));
                            }
#line 428 "pd_info.m"
                          }
#line 428 "pd_info.m"
                      }
#line 428 "pd_info.m"
                  }
#line 428 "pd_info.m"
              }
#line 428 "pd_info.m"
          }
#line 428 "pd_info.m"
      }
#line 428 "pd_info.m"
  }
#line 428 "pd_info.m"
}

#line 428 "pd_info.m"
MR_bool MR_CALL 
transform_hlds__pd_info____Unify____maybe_version_0_0(
#line 428 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__1_1,
#line 428 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
#line 428 "pd_info.m"
{
#line 428 "pd_info.m"
  {
#line 428 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 428 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastX_15 = (MR_Integer) transform_hlds__pd_info__HeadVar__1_1;
#line 428 "pd_info.m"
    MR_Integer transform_hlds__pd_info__CastY_16 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;

#line 428 "pd_info.m"
    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastX_15 == transform_hlds__pd_info__CastY_16);
#line 428 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 428 "pd_info.m"
      transform_hlds__pd_info__succeeded = MR_TRUE;
#line 428 "pd_info.m"
    else
#line 428 "pd_info.m"
    if ((transform_hlds__pd_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 428 "pd_info.m"
      {
#line 428 "pd_info.m"
        MR_Integer transform_hlds__pd_info__CastX_3 = (MR_Integer) transform_hlds__pd_info__HeadVar__1_1;
#line 428 "pd_info.m"
        MR_Integer transform_hlds__pd_info__CastY_4 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;

#line 428 "pd_info.m"
        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastY_4 == transform_hlds__pd_info__CastX_3);
#line 428 "pd_info.m"
      }
#line 428 "pd_info.m"
    else
#line 428 "pd_info.m"
      {
#line 428 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_18_18;
#line 428 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_19_19;
#line 428 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 0)));
#line 428 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 1)));
#line 428 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 2)));
#line 428 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 3)));
#line 428 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 4)));
#line 428 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_10_10;
#line 428 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_11_11;
#line 428 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_12_12;
#line 428 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_13_13;
#line 428 "pd_info.m"
        MR_Word transform_hlds__pd_info__V_14_14;

#line 428 "pd_info.m"
        transform_hlds__pd_info__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 428 "pd_info.m"
        if (transform_hlds__pd_info__succeeded)
#line 428 "pd_info.m"
          {
#line 428 "pd_info.m"
            transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));
#line 428 "pd_info.m"
            transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
#line 428 "pd_info.m"
            transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 2)));
#line 428 "pd_info.m"
            transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 3)));
#line 428 "pd_info.m"
            transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 4)));
#line 4587 "transform_hlds.pd_info.c"
            transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__V_5_5 == transform_hlds__pd_info__V_10_10);
#line 428 "pd_info.m"
            if (transform_hlds__pd_info__succeeded)
#line 428 "pd_info.m"
              {
#line 4593 "transform_hlds.pd_info.c"
                {
#line 4595 "transform_hlds.pd_info.c"
                  transform_hlds__pd_info__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__pd_info__V_6_6, transform_hlds__pd_info__V_11_11);
                }
#line 428 "pd_info.m"
                if (transform_hlds__pd_info__succeeded)
#line 428 "pd_info.m"
                  {
#line 4602 "transform_hlds.pd_info.c"
                    {
#line 4604 "transform_hlds.pd_info.c"
                      transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____version_info_0_0(transform_hlds__pd_info__V_7_7, transform_hlds__pd_info__V_12_12);
                    }
#line 428 "pd_info.m"
                    if (transform_hlds__pd_info__succeeded)
#line 428 "pd_info.m"
                      {
#line 4611 "transform_hlds.pd_info.c"
                        transform_hlds__pd_info__TypeInfo_18_18 = (MR_Word) &transform_hlds__pd_info_scalar_common_2[2];
#line 4613 "transform_hlds.pd_info.c"
                        {
#line 4615 "transform_hlds.pd_info.c"
                          transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_18_18, ((MR_Box) (transform_hlds__pd_info__V_8_8)), ((MR_Box) (transform_hlds__pd_info__V_13_13)));
                        }
#line 428 "pd_info.m"
                        if (transform_hlds__pd_info__succeeded)
#line 428 "pd_info.m"
                          {
#line 4622 "transform_hlds.pd_info.c"
                            transform_hlds__pd_info__TypeInfo_19_19 = (MR_Word) &transform_hlds__pd_info_scalar_common_2[3];
#line 4624 "transform_hlds.pd_info.c"
                            {
#line 4626 "transform_hlds.pd_info.c"
                              transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_19_19, ((MR_Box) (transform_hlds__pd_info__V_9_9)), ((MR_Box) (transform_hlds__pd_info__V_14_14)));
                            }
#line 428 "pd_info.m"
                          }
#line 428 "pd_info.m"
                      }
#line 428 "pd_info.m"
                  }
#line 428 "pd_info.m"
              }
#line 428 "pd_info.m"
          }
#line 428 "pd_info.m"
      }
#line 428 "pd_info.m"
    return transform_hlds__pd_info__succeeded;
#line 428 "pd_info.m"
  }
#line 428 "pd_info.m"
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
      transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[1], ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar2_4)));
    }
#line 54 "pd_info.m"
    return transform_hlds__pd_info__succeeded;
#line 54 "pd_info.m"
  }
#line 54 "pd_info.m"
}

#line 276 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info____Compare____branch_info_map_1_0(
#line 276 "pd_info.m"
  MR_Word transform_hlds__pd_info__TypeInfo_for_T_6,
#line 276 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
#line 276 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 276 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
#line 276 "pd_info.m"
{
#line 276 "pd_info.m"
  {
#line 276 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 276 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar1_4 = transform_hlds__pd_info__HeadVar__2_2;
#line 276 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar2_5 = transform_hlds__pd_info__HeadVar__3_3;

#line 276 "pd_info.m"
    {
#line 276 "pd_info.m"
      mercury__tree234____Compare____tree234_2_0(transform_hlds__pd_info__TypeInfo_for_T_6, (MR_Word) &transform_hlds__pd_info_scalar_common_1[2], transform_hlds__pd_info__HeadVar__1_1, transform_hlds__pd_info__Cast_HeadVar1_4, transform_hlds__pd_info__Cast_HeadVar2_5);
    }
#line 276 "pd_info.m"
  }
#line 276 "pd_info.m"
}

#line 276 "pd_info.m"
MR_bool MR_CALL 
transform_hlds__pd_info____Unify____branch_info_map_1_0(
#line 276 "pd_info.m"
  MR_Word transform_hlds__pd_info__TypeInfo_for_T_5,
#line 276 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__1_1,
#line 276 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
#line 276 "pd_info.m"
{
#line 276 "pd_info.m"
  {
#line 276 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 276 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar1_3 = transform_hlds__pd_info__HeadVar__1_1;
#line 276 "pd_info.m"
    MR_Word transform_hlds__pd_info__Cast_HeadVar2_4 = transform_hlds__pd_info__HeadVar__2_2;

#line 276 "pd_info.m"
    {
#line 276 "pd_info.m"
      transform_hlds__pd_info__succeeded = mercury__tree234____Unify____tree234_2_0(transform_hlds__pd_info__TypeInfo_for_T_5, (MR_Word) &transform_hlds__pd_info_scalar_common_1[2], transform_hlds__pd_info__Cast_HeadVar1_3, transform_hlds__pd_info__Cast_HeadVar2_4);
    }
#line 276 "pd_info.m"
    return transform_hlds__pd_info__succeeded;
#line 276 "pd_info.m"
  }
#line 276 "pd_info.m"
}

#line 611 "pd_info.m"
static MR_bool MR_CALL 
transform_hlds__pd_info__check_insts_8_p_0(
#line 611 "pd_info.m"
  MR_Word transform_hlds__pd_info__ModuleInfo_1,
#line 611 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
#line 611 "pd_info.m"
  MR_Word transform_hlds__pd_info__VarRenaming_3,
#line 611 "pd_info.m"
  MR_Word transform_hlds__pd_info__OldInstMap_4,
#line 611 "pd_info.m"
  MR_Word transform_hlds__pd_info__NewInstMap_5,
#line 611 "pd_info.m"
  MR_Word transform_hlds__pd_info__VarTypes_6,
#line 611 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_0_7,
#line 611 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_8)
#line 611 "pd_info.m"
{
#line 615 "pd_info.m"
  while (MR_TRUE)
#line 615 "pd_info.m"
    {
#line 615 "pd_info.m"
      /* tailcall optimized into a loop */
#line 615 "pd_info.m"
      {
#line 615 "pd_info.m"
        MR_bool transform_hlds__pd_info__succeeded;

#line 615 "pd_info.m"
        if ((transform_hlds__pd_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 615 "pd_info.m"
          {
#line 615 "pd_info.m"
            *transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_8 = transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_0_7;
#line 615 "pd_info.m"
            transform_hlds__pd_info__succeeded = MR_TRUE;
#line 615 "pd_info.m"
          }
#line 615 "pd_info.m"
        else
#line 617 "pd_info.m"
          {
#line 617 "pd_info.m"
            MR_Word transform_hlds__pd_info__TypeInfo_34_34;
#line 617 "pd_info.m"
            MR_Word transform_hlds__pd_info__OldVar_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));
#line 617 "pd_info.m"
            MR_Word transform_hlds__pd_info__Vars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
#line 617 "pd_info.m"
            MR_Word transform_hlds__pd_info__OldVarInst_25;
#line 617 "pd_info.m"
            MR_Word transform_hlds__pd_info__NewVar_26;
#line 617 "pd_info.m"
            MR_Word transform_hlds__pd_info__NewVarInst_27;
#line 617 "pd_info.m"
            MR_Word transform_hlds__pd_info__Type_28;
#line 617 "pd_info.m"
            MR_Word transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_31_31;
#line 619 "pd_info.m"
            MR_Box transform_hlds__pd_info__conv0_NewVar_26;

#line 618 "pd_info.m"
            {
#line 618 "pd_info.m"
              hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__pd_info__OldInstMap_4, transform_hlds__pd_info__OldVar_18, &transform_hlds__pd_info__OldVarInst_25);
            }
#line 4842 "transform_hlds.pd_info.c"
            transform_hlds__pd_info__TypeInfo_34_34 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[1];
#line 619 "pd_info.m"
            {
#line 619 "pd_info.m"
              mercury__map__lookup_3_p_0(transform_hlds__pd_info__TypeInfo_34_34, transform_hlds__pd_info__TypeInfo_34_34, transform_hlds__pd_info__VarRenaming_3, ((MR_Box) (transform_hlds__pd_info__OldVar_18)), &transform_hlds__pd_info__conv0_NewVar_26);
            }
#line 619 "pd_info.m"
            transform_hlds__pd_info__NewVar_26 = ((MR_Word) transform_hlds__pd_info__conv0_NewVar_26);
#line 620 "pd_info.m"
            {
#line 620 "pd_info.m"
              hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__pd_info__NewInstMap_5, transform_hlds__pd_info__NewVar_26, &transform_hlds__pd_info__NewVarInst_27);
            }
#line 621 "pd_info.m"
            {
#line 621 "pd_info.m"
              hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__pd_info__VarTypes_6, transform_hlds__pd_info__NewVar_26, &transform_hlds__pd_info__Type_28);
            }
#line 622 "pd_info.m"
            {
#line 622 "pd_info.m"
              transform_hlds__pd_info__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(transform_hlds__pd_info__NewVarInst_27, transform_hlds__pd_info__OldVarInst_25, transform_hlds__pd_info__Type_28, transform_hlds__pd_info__ModuleInfo_1);
            }
#line 617 "pd_info.m"
            if (transform_hlds__pd_info__succeeded)
#line 617 "pd_info.m"
              {
#line 633 "pd_info.m"
#line 633 "pd_info.m"
                switch (transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_0_7) {
#line 633 "pd_info.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 633 "pd_info.m"
                  case (MR_Integer) 0:
#line 630 "pd_info.m"
                    {
#line 628 "pd_info.m"
                      {
#line 628 "pd_info.m"
                        transform_hlds__pd_info__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(transform_hlds__pd_info__OldVarInst_25, transform_hlds__pd_info__NewVarInst_27, transform_hlds__pd_info__Type_28, transform_hlds__pd_info__ModuleInfo_1);
                      }
#line 630 "pd_info.m"
                      if (transform_hlds__pd_info__succeeded)
#line 629 "pd_info.m"
                        transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_31_31 = (MR_Integer) 0;
#line 630 "pd_info.m"
                      else
#line 631 "pd_info.m"
                        transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_31_31 = (MR_Integer) 1;
#line 630 "pd_info.m"
                    }
#line 633 "pd_info.m"
                    break;
#line 633 "pd_info.m"
                  case (MR_Integer) 1:
#line 634 "pd_info.m"
                    transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_31_31 = transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_0_7;
#line 633 "pd_info.m"
                    break;
#line 633 "pd_info.m"
                }
#line 636 "pd_info.m"
                /* direct tailcall eliminated */
#line 636 "pd_info.m"
                {
#line 636 "pd_info.m"
                  MR_Word transform_hlds__pd_info__HeadVar__2__tmp_copy_2 = transform_hlds__pd_info__Vars_19;
#line 636 "pd_info.m"
                  MR_Word transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_0__tmp_copy_7 = transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_31_31;

#line 636 "pd_info.m"
                  transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_0_7 = transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_0__tmp_copy_7;
#line 636 "pd_info.m"
                  transform_hlds__pd_info__HeadVar__2_2 = transform_hlds__pd_info__HeadVar__2__tmp_copy_2;
#line 636 "pd_info.m"
                }
#line 636 "pd_info.m"
                continue;
#line 617 "pd_info.m"
              }
#line 617 "pd_info.m"
          }
#line 615 "pd_info.m"
        return transform_hlds__pd_info__succeeded;
#line 615 "pd_info.m"
      }
#line 615 "pd_info.m"
      break;
#line 615 "pd_info.m"
    }
#line 611 "pd_info.m"
}

#line 506 "pd_info.m"
static MR_bool MR_CALL 
transform_hlds__pd_info__get_matching_version_7_p_0(
#line 506 "pd_info.m"
  MR_Word transform_hlds__pd_info__ModuleInfo_1,
#line 506 "pd_info.m"
  MR_Word transform_hlds__pd_info__ThisGoal_2,
#line 506 "pd_info.m"
  MR_Word transform_hlds__pd_info__ThisInstMap_3,
#line 506 "pd_info.m"
  MR_Word transform_hlds__pd_info__VarTypes_4,
#line 506 "pd_info.m"
  MR_Word transform_hlds__pd_info__HeadVar__5_5,
#line 506 "pd_info.m"
  MR_Word transform_hlds__pd_info__Versions_6,
#line 506 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__7_7)
#line 506 "pd_info.m"
{
#line 510 "pd_info.m"
  while (MR_TRUE)
#line 510 "pd_info.m"
    {
#line 510 "pd_info.m"
      /* tailcall optimized into a loop */
#line 510 "pd_info.m"
      {
#line 510 "pd_info.m"
        MR_bool transform_hlds__pd_info__succeeded;

#line 510 "pd_info.m"
        if ((transform_hlds__pd_info__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 510 "pd_info.m"
          {
#line 510 "pd_info.m"
            *transform_hlds__pd_info__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 510 "pd_info.m"
            transform_hlds__pd_info__succeeded = MR_TRUE;
#line 510 "pd_info.m"
          }
#line 510 "pd_info.m"
        else
#line 512 "pd_info.m"
          {
#line 512 "pd_info.m"
            MR_Word transform_hlds__pd_info__VersionId_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 0)));
#line 512 "pd_info.m"
            MR_Word transform_hlds__pd_info__VersionIds_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 1)));
#line 512 "pd_info.m"
            MR_Word transform_hlds__pd_info__Version_21;
#line 512 "pd_info.m"
            MR_Word transform_hlds__pd_info__OldGoal_22;
#line 512 "pd_info.m"
            MR_Word transform_hlds__pd_info__OldArgs_24;
#line 512 "pd_info.m"
            MR_Word transform_hlds__pd_info__OldArgTypes_25;
#line 512 "pd_info.m"
            MR_Word transform_hlds__pd_info__OldInstMap_26;
#line 513 "pd_info.m"
            MR_Box transform_hlds__pd_info__conv0_Version_21;
#line 514 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_23_23;
#line 514 "pd_info.m"
            MR_Integer transform_hlds__pd_info__V_27_27;
#line 514 "pd_info.m"
            MR_Integer transform_hlds__pd_info__V_28_28;
#line 514 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_29_29;
#line 514 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_30_30;
#line 537 "pd_info.m"
            MR_Word transform_hlds__pd_info__MaybeVersion1_31;
#line 537 "pd_info.m"
            MR_Word transform_hlds__pd_info__OldNewRenaming_61;
#line 537 "pd_info.m"
            MR_Word transform_hlds__pd_info__TypeRenaming_62;
#line 537 "pd_info.m"
            MR_Word transform_hlds__pd_info__Exact_67;
#line 594 "pd_info.m"
            MR_Word transform_hlds__pd_info__TypeCtorInfo_31_69;
#line 594 "pd_info.m"
            MR_Word transform_hlds__pd_info__OldGoalInfo_64;
#line 594 "pd_info.m"
            MR_Word transform_hlds__pd_info__OldNonLocals0_65;
#line 594 "pd_info.m"
            MR_Word transform_hlds__pd_info__OldNonLocalsList_66;
#line 594 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_68_68;
#line 597 "pd_info.m"
            MR_Word transform_hlds__pd_info__V_63_63;

#line 513 "pd_info.m"
            {
#line 513 "pd_info.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0, transform_hlds__pd_info__Versions_6, ((MR_Box) (transform_hlds__pd_info__VersionId_17)), &transform_hlds__pd_info__conv0_Version_21);
            }
#line 513 "pd_info.m"
            transform_hlds__pd_info__Version_21 = ((MR_Word) transform_hlds__pd_info__conv0_Version_21);
#line 514 "pd_info.m"
            transform_hlds__pd_info__OldGoal_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_21, (MR_Integer) 0)));
#line 514 "pd_info.m"
            transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_21, (MR_Integer) 1)));
#line 514 "pd_info.m"
            transform_hlds__pd_info__OldArgs_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_21, (MR_Integer) 2)));
#line 514 "pd_info.m"
            transform_hlds__pd_info__OldArgTypes_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_21, (MR_Integer) 3)));
#line 514 "pd_info.m"
            transform_hlds__pd_info__OldInstMap_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_21, (MR_Integer) 4)));
#line 514 "pd_info.m"
            transform_hlds__pd_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_21, (MR_Integer) 5)));
#line 514 "pd_info.m"
            transform_hlds__pd_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_21, (MR_Integer) 6)));
#line 514 "pd_info.m"
            transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_21, (MR_Integer) 7)));
#line 514 "pd_info.m"
            transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_21, (MR_Integer) 8)));
#line 595 "pd_info.m"
            {
#line 595 "pd_info.m"
              transform_hlds__pd_info__succeeded = transform_hlds__pd_util__goals_match_8_p_0(transform_hlds__pd_info__ModuleInfo_1, transform_hlds__pd_info__OldGoal_22, transform_hlds__pd_info__OldArgs_24, transform_hlds__pd_info__OldArgTypes_25, transform_hlds__pd_info__ThisGoal_2, transform_hlds__pd_info__VarTypes_4, &transform_hlds__pd_info__OldNewRenaming_61, &transform_hlds__pd_info__TypeRenaming_62);
            }
#line 594 "pd_info.m"
            if (transform_hlds__pd_info__succeeded)
#line 594 "pd_info.m"
              {
#line 597 "pd_info.m"
                transform_hlds__pd_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__OldGoal_22, (MR_Integer) 0)));
#line 597 "pd_info.m"
                transform_hlds__pd_info__OldGoalInfo_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__OldGoal_22, (MR_Integer) 1)));
#line 598 "pd_info.m"
                {
#line 598 "pd_info.m"
                  transform_hlds__pd_info__OldNonLocals0_65 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__pd_info__OldGoalInfo_64);
                }
#line 5070 "transform_hlds.pd_info.c"
                transform_hlds__pd_info__TypeCtorInfo_31_69 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 599 "pd_info.m"
                {
#line 599 "pd_info.m"
                  parse_tree__set_of_var__to_sorted_list_2_p_0(transform_hlds__pd_info__TypeCtorInfo_31_69, transform_hlds__pd_info__OldNonLocals0_65, &transform_hlds__pd_info__OldNonLocalsList_66);
                }
#line 601 "pd_info.m"
                transform_hlds__pd_info__V_68_68 = (MR_Integer) 0;
#line 600 "pd_info.m"
                {
#line 600 "pd_info.m"
                  transform_hlds__pd_info__succeeded = transform_hlds__pd_info__check_insts_8_p_0(transform_hlds__pd_info__ModuleInfo_1, transform_hlds__pd_info__OldNonLocalsList_66, transform_hlds__pd_info__OldNewRenaming_61, transform_hlds__pd_info__OldInstMap_26, transform_hlds__pd_info__ThisInstMap_3, transform_hlds__pd_info__VarTypes_4, transform_hlds__pd_info__V_68_68, &transform_hlds__pd_info__Exact_67);
                }
#line 594 "pd_info.m"
                if (transform_hlds__pd_info__succeeded)
#line 594 "pd_info.m"
                  {
#line 603 "pd_info.m"
                    {
#line 603 "pd_info.m"
                      transform_hlds__pd_info__MaybeVersion1_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 603 "pd_info.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeVersion1_31, 0) = ((MR_Box) (transform_hlds__pd_info__Exact_67));
#line 603 "pd_info.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeVersion1_31, 1) = ((MR_Box) (transform_hlds__pd_info__VersionId_17));
#line 603 "pd_info.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeVersion1_31, 2) = ((MR_Box) (transform_hlds__pd_info__Version_21));
#line 603 "pd_info.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeVersion1_31, 3) = ((MR_Box) (transform_hlds__pd_info__OldNewRenaming_61));
#line 603 "pd_info.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeVersion1_31, 4) = ((MR_Box) (transform_hlds__pd_info__TypeRenaming_62));
#line 603 "pd_info.m"
                    }
#line 603 "pd_info.m"
                    transform_hlds__pd_info__succeeded = MR_TRUE;
#line 594 "pd_info.m"
                  }
#line 594 "pd_info.m"
              }
#line 537 "pd_info.m"
            if (transform_hlds__pd_info__succeeded)
#line 525 "pd_info.m"
#line 525 "pd_info.m"
              switch (transform_hlds__pd_info__Exact_67) {
#line 525 "pd_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 525 "pd_info.m"
                case (MR_Integer) 0:
#line 527 "pd_info.m"
                  {
#line 527 "pd_info.m"
                    *transform_hlds__pd_info__HeadVar__7_7 = transform_hlds__pd_info__MaybeVersion1_31;
#line 527 "pd_info.m"
                    transform_hlds__pd_info__succeeded = MR_TRUE;
#line 527 "pd_info.m"
                  }
#line 525 "pd_info.m"
                  break;
#line 525 "pd_info.m"
                case (MR_Integer) 1:
#line 530 "pd_info.m"
                  {
#line 530 "pd_info.m"
                    MR_Word transform_hlds__pd_info__MaybeVersion2_40;

#line 531 "pd_info.m"
                    {
#line 531 "pd_info.m"
                      transform_hlds__pd_info__succeeded = transform_hlds__pd_info__get_matching_version_7_p_0(transform_hlds__pd_info__ModuleInfo_1, transform_hlds__pd_info__ThisGoal_2, transform_hlds__pd_info__ThisInstMap_3, transform_hlds__pd_info__VarTypes_4, transform_hlds__pd_info__VersionIds_18, transform_hlds__pd_info__Versions_6, &transform_hlds__pd_info__MaybeVersion2_40);
                    }
#line 530 "pd_info.m"
                    if (transform_hlds__pd_info__succeeded)
#line 530 "pd_info.m"
                      {
#line 534 "pd_info.m"
                        {
#line 534 "pd_info.m"
                          transform_hlds__pd_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_105_99_107_95_118_101_114_115_105_111_110_95_95_91_49_93_95_48_7_p_0(transform_hlds__pd_info__VersionId_17, transform_hlds__pd_info__OldNewRenaming_61, transform_hlds__pd_info__TypeRenaming_62, transform_hlds__pd_info__Version_21, transform_hlds__pd_info__MaybeVersion2_40, transform_hlds__pd_info__HeadVar__7_7);
                        }
#line 534 "pd_info.m"
                        transform_hlds__pd_info__succeeded = MR_TRUE;
#line 530 "pd_info.m"
                      }
#line 530 "pd_info.m"
                  }
#line 525 "pd_info.m"
                  break;
#line 525 "pd_info.m"
              }
#line 537 "pd_info.m"
            else
#line 538 "pd_info.m"
              {
#line 538 "pd_info.m"
                /* direct tailcall eliminated */
#line 538 "pd_info.m"
                {
#line 538 "pd_info.m"
                  MR_Word transform_hlds__pd_info__HeadVar__5__tmp_copy_5 = transform_hlds__pd_info__VersionIds_18;

#line 538 "pd_info.m"
                  transform_hlds__pd_info__HeadVar__5_5 = transform_hlds__pd_info__HeadVar__5__tmp_copy_5;
#line 538 "pd_info.m"
                }
#line 538 "pd_info.m"
                continue;
#line 538 "pd_info.m"
              }
#line 512 "pd_info.m"
          }
#line 510 "pd_info.m"
        return transform_hlds__pd_info__succeeded;
#line 510 "pd_info.m"
      }
#line 510 "pd_info.m"
      break;
#line 510 "pd_info.m"
    }
#line 506 "pd_info.m"
}

#line 424 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__remove_version_3_p_0(
#line 424 "pd_info.m"
  MR_Word transform_hlds__pd_info__PredProcId_4,
#line 424 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21,
#line 424 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_22)
#line 424 "pd_info.m"
{
#line 721 "pd_info.m"
  {
#line 721 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 721 "pd_info.m"
    MR_Word transform_hlds__pd_info__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 721 "pd_info.m"
    MR_Word transform_hlds__pd_info__TypeCtorInfo_36_36 = (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0;
#line 721 "pd_info.m"
    MR_Word transform_hlds__pd_info__Versions0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 3)));
#line 721 "pd_info.m"
    MR_Word transform_hlds__pd_info__Version_7;
#line 721 "pd_info.m"
    MR_Word transform_hlds__pd_info__Goal_8;
#line 721 "pd_info.m"
    MR_Word transform_hlds__pd_info__Calls_9;
#line 721 "pd_info.m"
    MR_Word transform_hlds__pd_info__Versions_10;
#line 721 "pd_info.m"
    MR_Word transform_hlds__pd_info__GoalIndex0_11;
#line 721 "pd_info.m"
    MR_Word transform_hlds__pd_info__CreatedVersions0_15;
#line 721 "pd_info.m"
    MR_Word transform_hlds__pd_info__CreatedVersions_16;
#line 721 "pd_info.m"
    MR_Word transform_hlds__pd_info__ModuleInfo0_17;
#line 721 "pd_info.m"
    MR_Word transform_hlds__pd_info__PredId_18;
#line 721 "pd_info.m"
    MR_Word transform_hlds__pd_info__ModuleInfo_20;
#line 721 "pd_info.m"
    MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23;
#line 721 "pd_info.m"
    MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24;
#line 721 "pd_info.m"
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
#line 723 "pd_info.m"
    MR_Box transform_hlds__pd_info__conv0_Version_7;
#line 724 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27;
#line 724 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28;
#line 724 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29;
#line 724 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30;
#line 724 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_31_31;
#line 724 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_32_32;
#line 724 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_33_33;
#line 724 "pd_info.m"
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
#line 734 "pd_info.m"
    MR_Word transform_hlds__pd_info__GoalVersions0_12;
#line 730 "pd_info.m"
    MR_Word transform_hlds__pd_info__TypeInfo_37_37;
#line 730 "pd_info.m"
    MR_Box transform_hlds__pd_info__conv1_GoalVersions0_12;
#line 743 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_19_19;

#line 723 "pd_info.m"
    {
#line 723 "pd_info.m"
      mercury__map__lookup_3_p_0(transform_hlds__pd_info__TypeCtorInfo_35_35, transform_hlds__pd_info__TypeCtorInfo_36_36, transform_hlds__pd_info__Versions0_6, ((MR_Box) (transform_hlds__pd_info__PredProcId_4)), &transform_hlds__pd_info__conv0_Version_7);
    }
#line 723 "pd_info.m"
    transform_hlds__pd_info__Version_7 = ((MR_Word) transform_hlds__pd_info__conv0_Version_7);
#line 724 "pd_info.m"
    transform_hlds__pd_info__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 0)));
#line 724 "pd_info.m"
    transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 1)));
#line 724 "pd_info.m"
    transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 2)));
#line 724 "pd_info.m"
    transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 3)));
#line 724 "pd_info.m"
    transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 4)));
#line 724 "pd_info.m"
    transform_hlds__pd_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 5)));
#line 724 "pd_info.m"
    transform_hlds__pd_info__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 6)));
#line 724 "pd_info.m"
    transform_hlds__pd_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 7)));
#line 724 "pd_info.m"
    transform_hlds__pd_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 8)));
#line 725 "pd_info.m"
    {
#line 725 "pd_info.m"
      transform_hlds__pd_util__goal_get_calls_2_p_0(transform_hlds__pd_info__Goal_8, &transform_hlds__pd_info__Calls_9);
    }
#line 726 "pd_info.m"
    {
#line 726 "pd_info.m"
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
#line 5391 "transform_hlds.pd_info.c"
    transform_hlds__pd_info__TypeInfo_37_37 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[0];
#line 730 "pd_info.m"
    {
#line 730 "pd_info.m"
      transform_hlds__pd_info__succeeded = mercury__map__search_3_p_0(transform_hlds__pd_info__TypeInfo_37_37, transform_hlds__pd_info__TypeInfo_37_37, transform_hlds__pd_info__GoalIndex0_11, ((MR_Box) (transform_hlds__pd_info__Calls_9)), &transform_hlds__pd_info__conv1_GoalVersions0_12);
    }
#line 730 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 730 "pd_info.m"
      {
#line 730 "pd_info.m"
        transform_hlds__pd_info__GoalVersions0_12 = ((MR_Word) transform_hlds__pd_info__conv1_GoalVersions0_12);
#line 730 "pd_info.m"
        transform_hlds__pd_info__succeeded = MR_TRUE;
#line 730 "pd_info.m"
      }
#line 734 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 731 "pd_info.m"
      {
#line 731 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_38_38;
#line 731 "pd_info.m"
        MR_Word transform_hlds__pd_info__GoalVersions_13;
#line 731 "pd_info.m"
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

#line 731 "pd_info.m"
        {
#line 731 "pd_info.m"
          mercury__list__delete_all_3_p_1(transform_hlds__pd_info__TypeCtorInfo_35_35, transform_hlds__pd_info__GoalVersions0_12, ((MR_Box) (transform_hlds__pd_info__PredProcId_4)), &transform_hlds__pd_info__GoalVersions_13);
        }
#line 5446 "transform_hlds.pd_info.c"
        transform_hlds__pd_info__TypeInfo_38_38 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[0];
#line 732 "pd_info.m"
        {
#line 732 "pd_info.m"
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
#line 731 "pd_info.m"
      }
#line 734 "pd_info.m"
    else
#line 734 "pd_info.m"
      transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24 = transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23;
#line 738 "pd_info.m"
    {
#line 738 "pd_info.m"
      transform_hlds__pd_info__pd_info_get_created_versions_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, &transform_hlds__pd_info__CreatedVersions0_15);
    }
#line 739 "pd_info.m"
    {
#line 739 "pd_info.m"
      mercury__set__delete_3_p_0(transform_hlds__pd_info__TypeCtorInfo_35_35, ((MR_Box) (transform_hlds__pd_info__PredProcId_4)), transform_hlds__pd_info__CreatedVersions0_15, &transform_hlds__pd_info__CreatedVersions_16);
    }
#line 740 "pd_info.m"
    {
#line 740 "pd_info.m"
      transform_hlds__pd_info__pd_info_set_created_versions_3_p_0(transform_hlds__pd_info__CreatedVersions_16, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, &transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25);
    }
#line 742 "pd_info.m"
    {
#line 742 "pd_info.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, &transform_hlds__pd_info__ModuleInfo0_17);
    }
#line 743 "pd_info.m"
    transform_hlds__pd_info__PredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PredProcId_4, (MR_Integer) 0)));
#line 743 "pd_info.m"
    transform_hlds__pd_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PredProcId_4, (MR_Integer) 1)));
#line 744 "pd_info.m"
    {
#line 744 "pd_info.m"
      hlds__hlds_module__module_info_remove_predicate_3_p_0(transform_hlds__pd_info__PredId_18, transform_hlds__pd_info__ModuleInfo0_17, &transform_hlds__pd_info__ModuleInfo_20);
    }
#line 745 "pd_info.m"
    {
#line 745 "pd_info.m"
      transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__pd_info__ModuleInfo_20, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_22);
    }
#line 721 "pd_info.m"
  }
#line 424 "pd_info.m"
}

#line 418 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__invalidate_version_3_p_0(
#line 418 "pd_info.m"
  MR_Word transform_hlds__pd_info__PredProcId_4,
#line 418 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15,
#line 418 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_16)
#line 418 "pd_info.m"
{
#line 702 "pd_info.m"
  {
#line 702 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 702 "pd_info.m"
    MR_Word transform_hlds__pd_info__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 702 "pd_info.m"
    MR_Word transform_hlds__pd_info__Versions0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 3)));
#line 702 "pd_info.m"
    MR_Word transform_hlds__pd_info__Version_7;
#line 702 "pd_info.m"
    MR_Word transform_hlds__pd_info__Goal_8;
#line 702 "pd_info.m"
    MR_Word transform_hlds__pd_info__Calls_9;
#line 702 "pd_info.m"
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
#line 704 "pd_info.m"
    MR_Box transform_hlds__pd_info__conv0_Version_7;
#line 705 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_20_20;
#line 705 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21;
#line 705 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22;
#line 705 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23;
#line 705 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_24_24;
#line 705 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_25_25;
#line 705 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26;
#line 705 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27;
#line 716 "pd_info.m"
    MR_Word transform_hlds__pd_info__FirstCall_10;
#line 716 "pd_info.m"
    MR_Word transform_hlds__pd_info__LastCall_12;
#line 708 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 709 "pd_info.m"
    MR_Box transform_hlds__pd_info__conv1_LastCall_12;

#line 704 "pd_info.m"
    {
#line 704 "pd_info.m"
      mercury__map__lookup_3_p_0(transform_hlds__pd_info__TypeCtorInfo_28_28, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0, transform_hlds__pd_info__Versions0_6, ((MR_Box) (transform_hlds__pd_info__PredProcId_4)), &transform_hlds__pd_info__conv0_Version_7);
    }
#line 704 "pd_info.m"
    transform_hlds__pd_info__Version_7 = ((MR_Word) transform_hlds__pd_info__conv0_Version_7);
#line 705 "pd_info.m"
    transform_hlds__pd_info__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 0)));
#line 705 "pd_info.m"
    transform_hlds__pd_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 1)));
#line 705 "pd_info.m"
    transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 2)));
#line 705 "pd_info.m"
    transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 3)));
#line 705 "pd_info.m"
    transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 4)));
#line 705 "pd_info.m"
    transform_hlds__pd_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 5)));
#line 705 "pd_info.m"
    transform_hlds__pd_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 6)));
#line 705 "pd_info.m"
    transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 7)));
#line 705 "pd_info.m"
    transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 8)));
#line 706 "pd_info.m"
    {
#line 706 "pd_info.m"
      transform_hlds__pd_util__goal_get_calls_2_p_0(transform_hlds__pd_info__Goal_8, &transform_hlds__pd_info__Calls_9);
    }
#line 708 "pd_info.m"
    transform_hlds__pd_info__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_info__Calls_9)) == (MR_mktag((MR_Integer) 1)));
#line 708 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 708 "pd_info.m"
      {
#line 708 "pd_info.m"
        transform_hlds__pd_info__FirstCall_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__Calls_9, (MR_Integer) 0)));
#line 708 "pd_info.m"
        transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__Calls_9, (MR_Integer) 1)));
#line 709 "pd_info.m"
        {
#line 709 "pd_info.m"
          transform_hlds__pd_info__succeeded = mercury__list__last_2_p_0(transform_hlds__pd_info__TypeCtorInfo_28_28, transform_hlds__pd_info__Calls_9, &transform_hlds__pd_info__conv1_LastCall_12);
        }
#line 709 "pd_info.m"
        if (transform_hlds__pd_info__succeeded)
#line 709 "pd_info.m"
          {
#line 709 "pd_info.m"
            transform_hlds__pd_info__LastCall_12 = ((MR_Word) transform_hlds__pd_info__conv1_LastCall_12);
#line 709 "pd_info.m"
            transform_hlds__pd_info__succeeded = MR_TRUE;
#line 709 "pd_info.m"
          }
#line 708 "pd_info.m"
      }
#line 716 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 713 "pd_info.m"
      {
#line 713 "pd_info.m"
        MR_Word transform_hlds__pd_info__Useless0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 10)));
#line 713 "pd_info.m"
        MR_Word transform_hlds__pd_info__Useless_14;
#line 713 "pd_info.m"
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

#line 714 "pd_info.m"
        {
#line 714 "pd_info.m"
          transform_hlds__pd_info__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 714 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__V_17_17, 0) = ((MR_Box) (transform_hlds__pd_info__FirstCall_10));
#line 714 "pd_info.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_info__V_17_17, 1) = ((MR_Box) (transform_hlds__pd_info__LastCall_12));
#line 714 "pd_info.m"
        }
#line 714 "pd_info.m"
        {
#line 714 "pd_info.m"
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
#line 713 "pd_info.m"
      }
#line 716 "pd_info.m"
    else
#line 716 "pd_info.m"
      transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18 = transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15;
#line 719 "pd_info.m"
    {
#line 719 "pd_info.m"
      transform_hlds__pd_info__remove_version_3_p_0(transform_hlds__pd_info__PredProcId_4, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_16);
    }
#line 702 "pd_info.m"
  }
#line 418 "pd_info.m"
}

#line 413 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__register_version_4_p_0(
#line 413 "pd_info.m"
  MR_Word transform_hlds__pd_info__PredProcId_5,
#line 413 "pd_info.m"
  MR_Word transform_hlds__pd_info__Version_6,
#line 413 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19,
#line 413 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_20)
#line 413 "pd_info.m"
{
#line 678 "pd_info.m"
  {
#line 678 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 678 "pd_info.m"
    MR_Word transform_hlds__pd_info__TypeCtorInfo_39_39;
#line 678 "pd_info.m"
    MR_Word transform_hlds__pd_info__GoalVersionIndex0_9;
#line 678 "pd_info.m"
    MR_Word transform_hlds__pd_info__Goal_10;
#line 678 "pd_info.m"
    MR_Word transform_hlds__pd_info__Calls_11;
#line 678 "pd_info.m"
    MR_Word transform_hlds__pd_info__GoalVersionIndex_14;
#line 678 "pd_info.m"
    MR_Word transform_hlds__pd_info__Versions0_15;
#line 678 "pd_info.m"
    MR_Word transform_hlds__pd_info__Versions_16;
#line 678 "pd_info.m"
    MR_Word transform_hlds__pd_info__CreatedVersions0_17;
#line 678 "pd_info.m"
    MR_Word transform_hlds__pd_info__CreatedVersions_18;
#line 678 "pd_info.m"
    MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24;
#line 678 "pd_info.m"
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
#line 683 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28;
#line 683 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29;
#line 683 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30;
#line 683 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_31_31;
#line 683 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_32_32;
#line 683 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_33_33;
#line 683 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_34_34;
#line 683 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_35_35;
#line 688 "pd_info.m"
    MR_Word transform_hlds__pd_info__VersionList0_12;
#line 685 "pd_info.m"
    MR_Word transform_hlds__pd_info__TypeInfo_36_36;
#line 685 "pd_info.m"
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

#line 680 "pd_info.m"
    {
#line 680 "pd_info.m"
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
#line 683 "pd_info.m"
    transform_hlds__pd_info__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_6, (MR_Integer) 0)));
#line 683 "pd_info.m"
    transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_6, (MR_Integer) 1)));
#line 683 "pd_info.m"
    transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_6, (MR_Integer) 2)));
#line 683 "pd_info.m"
    transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_6, (MR_Integer) 3)));
#line 683 "pd_info.m"
    transform_hlds__pd_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_6, (MR_Integer) 4)));
#line 683 "pd_info.m"
    transform_hlds__pd_info__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_6, (MR_Integer) 5)));
#line 683 "pd_info.m"
    transform_hlds__pd_info__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_6, (MR_Integer) 6)));
#line 683 "pd_info.m"
    transform_hlds__pd_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_6, (MR_Integer) 7)));
#line 683 "pd_info.m"
    transform_hlds__pd_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_6, (MR_Integer) 8)));
#line 684 "pd_info.m"
    {
#line 684 "pd_info.m"
      transform_hlds__pd_util__goal_get_calls_2_p_0(transform_hlds__pd_info__Goal_10, &transform_hlds__pd_info__Calls_11);
    }
#line 5987 "transform_hlds.pd_info.c"
    transform_hlds__pd_info__TypeInfo_36_36 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[0];
#line 685 "pd_info.m"
    {
#line 685 "pd_info.m"
      transform_hlds__pd_info__succeeded = mercury__map__search_3_p_0(transform_hlds__pd_info__TypeInfo_36_36, transform_hlds__pd_info__TypeInfo_36_36, transform_hlds__pd_info__GoalVersionIndex0_9, ((MR_Box) (transform_hlds__pd_info__Calls_11)), &transform_hlds__pd_info__conv0_VersionList0_12);
    }
#line 685 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 685 "pd_info.m"
      {
#line 685 "pd_info.m"
        transform_hlds__pd_info__VersionList0_12 = ((MR_Word) transform_hlds__pd_info__conv0_VersionList0_12);
#line 685 "pd_info.m"
        transform_hlds__pd_info__succeeded = MR_TRUE;
#line 685 "pd_info.m"
      }
#line 688 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 686 "pd_info.m"
      {
#line 686 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_37_37;
#line 686 "pd_info.m"
        MR_Word transform_hlds__pd_info__VersionList_13;

#line 686 "pd_info.m"
        {
#line 686 "pd_info.m"
          transform_hlds__pd_info__VersionList_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 686 "pd_info.m"
          MR_hl_field(MR_mktag(1), transform_hlds__pd_info__VersionList_13, 0) = ((MR_Box) (transform_hlds__pd_info__PredProcId_5));
#line 686 "pd_info.m"
          MR_hl_field(MR_mktag(1), transform_hlds__pd_info__VersionList_13, 1) = ((MR_Box) (transform_hlds__pd_info__VersionList0_12));
#line 686 "pd_info.m"
        }
#line 6023 "transform_hlds.pd_info.c"
        transform_hlds__pd_info__TypeInfo_37_37 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[0];
#line 687 "pd_info.m"
        {
#line 687 "pd_info.m"
          mercury__map__det_update_4_p_0(transform_hlds__pd_info__TypeInfo_37_37, transform_hlds__pd_info__TypeInfo_37_37, ((MR_Box) (transform_hlds__pd_info__Calls_11)), ((MR_Box) (transform_hlds__pd_info__VersionList_13)), transform_hlds__pd_info__GoalVersionIndex0_9, &transform_hlds__pd_info__GoalVersionIndex_14);
        }
#line 686 "pd_info.m"
      }
#line 688 "pd_info.m"
    else
#line 689 "pd_info.m"
      {
#line 689 "pd_info.m"
        MR_Word transform_hlds__pd_info__TypeInfo_38_38;
#line 689 "pd_info.m"
        MR_Word transform_hlds__pd_info__VersionList_27;

#line 689 "pd_info.m"
        {
#line 689 "pd_info.m"
          transform_hlds__pd_info__VersionList_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 689 "pd_info.m"
          MR_hl_field(MR_mktag(1), transform_hlds__pd_info__VersionList_27, 0) = ((MR_Box) (transform_hlds__pd_info__PredProcId_5));
#line 689 "pd_info.m"
          MR_hl_field(MR_mktag(1), transform_hlds__pd_info__VersionList_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 689 "pd_info.m"
        }
#line 6051 "transform_hlds.pd_info.c"
        transform_hlds__pd_info__TypeInfo_38_38 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[0];
#line 690 "pd_info.m"
        {
#line 690 "pd_info.m"
          mercury__map__det_insert_4_p_0(transform_hlds__pd_info__TypeInfo_38_38, transform_hlds__pd_info__TypeInfo_38_38, ((MR_Box) (transform_hlds__pd_info__Calls_11)), ((MR_Box) (transform_hlds__pd_info__VersionList_27)), transform_hlds__pd_info__GoalVersionIndex0_9, &transform_hlds__pd_info__GoalVersionIndex_14);
        }
#line 689 "pd_info.m"
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
#line 6110 "transform_hlds.pd_info.c"
    transform_hlds__pd_info__TypeCtorInfo_39_39 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 694 "pd_info.m"
    {
#line 694 "pd_info.m"
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
#line 696 "pd_info.m"
    {
#line 696 "pd_info.m"
      transform_hlds__pd_info__pd_info_get_created_versions_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, &transform_hlds__pd_info__CreatedVersions0_17);
    }
#line 697 "pd_info.m"
    {
#line 697 "pd_info.m"
      mercury__set__insert_3_p_0(transform_hlds__pd_info__TypeCtorInfo_39_39, ((MR_Box) (transform_hlds__pd_info__PredProcId_5)), transform_hlds__pd_info__CreatedVersions0_17, &transform_hlds__pd_info__CreatedVersions_18);
    }
#line 698 "pd_info.m"
    {
#line 698 "pd_info.m"
      transform_hlds__pd_info__pd_info_set_created_versions_3_p_0(transform_hlds__pd_info__CreatedVersions_18, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_20);
    }
#line 678 "pd_info.m"
  }
#line 413 "pd_info.m"
}

#line 408 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__define_new_pred_6_p_0(
#line 408 "pd_info.m"
  MR_Word transform_hlds__pd_info__Origin_7,
#line 408 "pd_info.m"
  MR_Word transform_hlds__pd_info__Goal_8,
#line 408 "pd_info.m"
  MR_Word * transform_hlds__pd_info__PredProcId_9,
#line 408 "pd_info.m"
  MR_Word * transform_hlds__pd_info__CallGoal_10,
#line 408 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39,
#line 408 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_40)
#line 408 "pd_info.m"
{
#line 641 "pd_info.m"
  {
#line 641 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 641 "pd_info.m"
    MR_Word transform_hlds__pd_info__InstMap_12;
#line 641 "pd_info.m"
    MR_Word transform_hlds__pd_info__GoalInfo_14;
#line 641 "pd_info.m"
    MR_Word transform_hlds__pd_info__NonLocals_15;
#line 641 "pd_info.m"
    MR_Word transform_hlds__pd_info__Args_16;
#line 641 "pd_info.m"
    MR_Word transform_hlds__pd_info__Counter0_17;
#line 641 "pd_info.m"
    MR_Integer transform_hlds__pd_info__Count_18;
#line 641 "pd_info.m"
    MR_Word transform_hlds__pd_info__Counter_19;
#line 641 "pd_info.m"
    MR_Word transform_hlds__pd_info__PredInfo_20;
#line 641 "pd_info.m"
    MR_Word transform_hlds__pd_info__PredModule_21;
#line 641 "pd_info.m"
    MR_String transform_hlds__pd_info__PredName_22;
#line 641 "pd_info.m"
    MR_Word transform_hlds__pd_info__Context_23;
#line 641 "pd_info.m"
    MR_Integer transform_hlds__pd_info__Line_24;
#line 641 "pd_info.m"
    MR_Word transform_hlds__pd_info__ModuleInfo0_25;
#line 641 "pd_info.m"
    MR_Word transform_hlds__pd_info__SymName_26;
#line 641 "pd_info.m"
    MR_Word transform_hlds__pd_info__ProcInfo_27;
#line 641 "pd_info.m"
    MR_Word transform_hlds__pd_info__TVarSet_28;
#line 641 "pd_info.m"
    MR_Word transform_hlds__pd_info__Markers_29;
#line 641 "pd_info.m"
    MR_Word transform_hlds__pd_info__ClassContext_30;
#line 641 "pd_info.m"
    MR_Word transform_hlds__pd_info__VarSet_31;
#line 641 "pd_info.m"
    MR_Word transform_hlds__pd_info__VarTypes_32;
#line 641 "pd_info.m"
    MR_Word transform_hlds__pd_info__RttiVarMaps_33;
#line 641 "pd_info.m"
    MR_Word transform_hlds__pd_info__InstVarSet_34;
#line 641 "pd_info.m"
    MR_Word transform_hlds__pd_info__HasParallelConj_35;
#line 641 "pd_info.m"
    MR_Word transform_hlds__pd_info__VarNameRemap_36;
#line 641 "pd_info.m"
    MR_Word transform_hlds__pd_info__ModuleInfo_38;
#line 641 "pd_info.m"
    MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41;
#line 643 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;
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
    MR_Word transform_hlds__pd_info__V_54_54;
#line 169 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_55_55;
#line 169 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_56_56;
#line 169 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_57_57;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_63_63;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_64_64;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_65_65;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_66_66;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_67_67;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_69_69;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_70_70;
#line 189 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_71_71;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_72_72;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_73_73;
#line 189 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_68_68;
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
    MR_Word transform_hlds__pd_info__V_81_81;
#line 157 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_82_82;
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_83_83;
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_84_84;
#line 670 "pd_info.m"
    MR_Word transform_hlds__pd_info___ExtraArgs_37;

#line 642 "pd_info.m"
    {
#line 642 "pd_info.m"
      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, &transform_hlds__pd_info__InstMap_12);
    }
#line 643 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Goal_8, (MR_Integer) 0)));
#line 643 "pd_info.m"
    transform_hlds__pd_info__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Goal_8, (MR_Integer) 1)));
#line 644 "pd_info.m"
    {
#line 644 "pd_info.m"
      transform_hlds__pd_info__NonLocals_15 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__pd_info__GoalInfo_14);
    }
#line 645 "pd_info.m"
    {
#line 645 "pd_info.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__pd_info__NonLocals_15, &transform_hlds__pd_info__Args_16);
    }
#line 169 "pd_info.m"
    transform_hlds__pd_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 0)));
#line 169 "pd_info.m"
    transform_hlds__pd_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 1)));
#line 169 "pd_info.m"
    transform_hlds__pd_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 2)));
#line 169 "pd_info.m"
    transform_hlds__pd_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 3)));
#line 169 "pd_info.m"
    transform_hlds__pd_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 4)));
#line 169 "pd_info.m"
    transform_hlds__pd_info__Counter0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 5)));
#line 169 "pd_info.m"
    transform_hlds__pd_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 6)));
#line 169 "pd_info.m"
    transform_hlds__pd_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 7)));
#line 169 "pd_info.m"
    transform_hlds__pd_info__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 8)));
#line 169 "pd_info.m"
    transform_hlds__pd_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 9)));
#line 169 "pd_info.m"
    transform_hlds__pd_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 10)));
#line 647 "pd_info.m"
    {
#line 647 "pd_info.m"
      mercury__counter__allocate_3_p_0(&transform_hlds__pd_info__Count_18, transform_hlds__pd_info__Counter0_17, &transform_hlds__pd_info__Counter_19);
    }
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 0)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 1)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 2)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 3)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 4)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 5)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 6)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 7)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 8)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 9)));
#line 189 "pd_info.m"
    transform_hlds__pd_info__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 10)));
#line 189 "pd_info.m"
    {
#line 189 "pd_info.m"
      transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, 0) = ((MR_Box) (transform_hlds__pd_info__V_63_63));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, 1) = ((MR_Box) (transform_hlds__pd_info__V_64_64));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, 2) = ((MR_Box) (transform_hlds__pd_info__V_65_65));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, 3) = ((MR_Box) (transform_hlds__pd_info__V_66_66));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, 4) = ((MR_Box) (transform_hlds__pd_info__V_67_67));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, 5) = ((MR_Box) (transform_hlds__pd_info__Counter_19));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, 6) = ((MR_Box) (transform_hlds__pd_info__V_69_69));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, 7) = ((MR_Box) (transform_hlds__pd_info__V_70_70));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, 8) = ((MR_Box) (transform_hlds__pd_info__V_71_71));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, 9) = ((MR_Box) (transform_hlds__pd_info__V_72_72));
#line 189 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, 10) = ((MR_Box) (transform_hlds__pd_info__V_73_73));
#line 189 "pd_info.m"
    }
#line 649 "pd_info.m"
    {
#line 649 "pd_info.m"
      transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, &transform_hlds__pd_info__PredInfo_20);
    }
#line 650 "pd_info.m"
    {
#line 650 "pd_info.m"
      transform_hlds__pd_info__PredModule_21 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__pd_info__PredInfo_20);
    }
#line 651 "pd_info.m"
    {
#line 651 "pd_info.m"
      transform_hlds__pd_info__PredName_22 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__pd_info__PredInfo_20);
    }
#line 652 "pd_info.m"
    {
#line 652 "pd_info.m"
      transform_hlds__pd_info__Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__pd_info__GoalInfo_14);
    }
#line 653 "pd_info.m"
    {
#line 653 "pd_info.m"
      mercury__term__context_line_2_p_0(transform_hlds__pd_info__Context_23, &transform_hlds__pd_info__Line_24);
    }
#line 157 "pd_info.m"
    transform_hlds__pd_info__ModuleInfo0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, (MR_Integer) 0)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, (MR_Integer) 1)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, (MR_Integer) 2)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, (MR_Integer) 3)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, (MR_Integer) 4)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, (MR_Integer) 5)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, (MR_Integer) 6)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, (MR_Integer) 7)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, (MR_Integer) 8)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, (MR_Integer) 9)));
#line 157 "pd_info.m"
    transform_hlds__pd_info__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, (MR_Integer) 10)));
#line 655 "pd_info.m"
    {
#line 655 "pd_info.m"
      parse_tree__prog_util__make_pred_name_with_context_7_p_0(transform_hlds__pd_info__PredModule_21, (MR_String) "DeforestationIn", (MR_Integer) 0, transform_hlds__pd_info__PredName_22, transform_hlds__pd_info__Line_24, transform_hlds__pd_info__Count_18, &transform_hlds__pd_info__SymName_26);
    }
#line 658 "pd_info.m"
    {
#line 658 "pd_info.m"
      transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, &transform_hlds__pd_info__ProcInfo_27);
    }
#line 659 "pd_info.m"
    {
#line 659 "pd_info.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__pd_info__PredInfo_20, &transform_hlds__pd_info__TVarSet_28);
    }
#line 660 "pd_info.m"
    {
#line 660 "pd_info.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__pd_info__PredInfo_20, &transform_hlds__pd_info__Markers_29);
    }
#line 661 "pd_info.m"
    {
#line 661 "pd_info.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__pd_info__PredInfo_20, &transform_hlds__pd_info__ClassContext_30);
    }
#line 662 "pd_info.m"
    {
#line 662 "pd_info.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__pd_info__ProcInfo_27, &transform_hlds__pd_info__VarSet_31);
    }
#line 663 "pd_info.m"
    {
#line 663 "pd_info.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__pd_info__ProcInfo_27, &transform_hlds__pd_info__VarTypes_32);
    }
#line 664 "pd_info.m"
    {
#line 664 "pd_info.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__pd_info__ProcInfo_27, &transform_hlds__pd_info__RttiVarMaps_33);
    }
#line 665 "pd_info.m"
    {
#line 665 "pd_info.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__pd_info__ProcInfo_27, &transform_hlds__pd_info__InstVarSet_34);
    }
#line 666 "pd_info.m"
    {
#line 666 "pd_info.m"
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__pd_info__ProcInfo_27, &transform_hlds__pd_info__HasParallelConj_35);
    }
#line 667 "pd_info.m"
    {
#line 667 "pd_info.m"
      hlds__hlds_pred__proc_info_get_var_name_remap_2_p_0(transform_hlds__pd_info__ProcInfo_27, &transform_hlds__pd_info__VarNameRemap_36);
    }
#line 670 "pd_info.m"
    {
#line 670 "pd_info.m"
      hlds__hlds_pred__define_new_pred_20_p_0(transform_hlds__pd_info__Origin_7, transform_hlds__pd_info__Goal_8, transform_hlds__pd_info__CallGoal_10, transform_hlds__pd_info__Args_16, &transform_hlds__pd_info___ExtraArgs_37, transform_hlds__pd_info__InstMap_12, transform_hlds__pd_info__SymName_26, transform_hlds__pd_info__TVarSet_28, transform_hlds__pd_info__VarTypes_32, transform_hlds__pd_info__ClassContext_30, transform_hlds__pd_info__RttiVarMaps_33, transform_hlds__pd_info__VarSet_31, transform_hlds__pd_info__InstVarSet_34, transform_hlds__pd_info__Markers_29, (MR_Integer) 1, transform_hlds__pd_info__HasParallelConj_35, transform_hlds__pd_info__VarNameRemap_36, transform_hlds__pd_info__ModuleInfo0_25, &transform_hlds__pd_info__ModuleInfo_38, transform_hlds__pd_info__PredProcId_9);
    }
#line 674 "pd_info.m"
    {
#line 674 "pd_info.m"
      transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__pd_info__ModuleInfo_38, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_40);
    }
#line 641 "pd_info.m"
  }
#line 408 "pd_info.m"
}

#line 402 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__search_version_3_p_0(
#line 402 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_4,
#line 402 "pd_info.m"
  MR_Word transform_hlds__pd_info__Goal_5,
#line 402 "pd_info.m"
  MR_Word * transform_hlds__pd_info__MaybeVersion_6)
#line 402 "pd_info.m"
{
#line 480 "pd_info.m"
  {
#line 480 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 480 "pd_info.m"
    MR_Word transform_hlds__pd_info__CalledPreds_8;
#line 480 "pd_info.m"
    MR_Word transform_hlds__pd_info__Versions_9;
#line 480 "pd_info.m"
    MR_Word transform_hlds__pd_info__GoalVersionIndex_10;
#line 480 "pd_info.m"
    MR_Word transform_hlds__pd_info__ModuleInfo_11;
#line 480 "pd_info.m"
    MR_Word transform_hlds__pd_info__ProcInfo_12;
#line 480 "pd_info.m"
    MR_Word transform_hlds__pd_info__InstMap_13;
#line 480 "pd_info.m"
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
#line 497 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeVersion0_16;
#line 492 "pd_info.m"
    MR_Word transform_hlds__pd_info__TypeInfo_22_22;
#line 492 "pd_info.m"
    MR_Word transform_hlds__pd_info__VersionIds_15;
#line 492 "pd_info.m"
    MR_Box transform_hlds__pd_info__conv0_VersionIds_15;

#line 482 "pd_info.m"
    {
#line 482 "pd_info.m"
      transform_hlds__pd_debug__pd_debug_output_goal_5_p_0(transform_hlds__pd_info__PDInfo_4, (MR_String) "Searching for version:\n", transform_hlds__pd_info__Goal_5);
    }
#line 484 "pd_info.m"
    {
#line 484 "pd_info.m"
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
#line 488 "pd_info.m"
    {
#line 488 "pd_info.m"
      transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__pd_info__PDInfo_4, &transform_hlds__pd_info__ProcInfo_12);
    }
#line 489 "pd_info.m"
    {
#line 489 "pd_info.m"
      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_info__PDInfo_4, &transform_hlds__pd_info__InstMap_13);
    }
#line 490 "pd_info.m"
    {
#line 490 "pd_info.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__pd_info__ProcInfo_12, &transform_hlds__pd_info__VarTypes_14);
    }
#line 6641 "transform_hlds.pd_info.c"
    transform_hlds__pd_info__TypeInfo_22_22 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[0];
#line 492 "pd_info.m"
    {
#line 492 "pd_info.m"
      transform_hlds__pd_info__succeeded = mercury__map__search_3_p_0(transform_hlds__pd_info__TypeInfo_22_22, transform_hlds__pd_info__TypeInfo_22_22, transform_hlds__pd_info__GoalVersionIndex_10, ((MR_Box) (transform_hlds__pd_info__CalledPreds_8)), &transform_hlds__pd_info__conv0_VersionIds_15);
    }
#line 492 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 492 "pd_info.m"
      {
#line 492 "pd_info.m"
        transform_hlds__pd_info__VersionIds_15 = ((MR_Word) transform_hlds__pd_info__conv0_VersionIds_15);
#line 492 "pd_info.m"
        transform_hlds__pd_info__succeeded = MR_TRUE;
#line 492 "pd_info.m"
      }
#line 492 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 493 "pd_info.m"
      {
#line 493 "pd_info.m"
        transform_hlds__pd_info__succeeded = transform_hlds__pd_info__get_matching_version_7_p_0(transform_hlds__pd_info__ModuleInfo_11, transform_hlds__pd_info__Goal_5, transform_hlds__pd_info__InstMap_13, transform_hlds__pd_info__VarTypes_14, transform_hlds__pd_info__VersionIds_15, transform_hlds__pd_info__Versions_9, &transform_hlds__pd_info__MaybeVersion0_16);
      }
#line 497 "pd_info.m"
    if (transform_hlds__pd_info__succeeded)
#line 496 "pd_info.m"
      *transform_hlds__pd_info__MaybeVersion_6 = transform_hlds__pd_info__MaybeVersion0_16;
#line 497 "pd_info.m"
    else
#line 498 "pd_info.m"
      *transform_hlds__pd_info__MaybeVersion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 501 "pd_info.m"
    {
#line 501 "pd_info.m"
      transform_hlds__pd_debug__pd_debug_search_version_result_4_p_0(transform_hlds__pd_info__PDInfo_4, *transform_hlds__pd_info__MaybeVersion_6);
    }
#line 480 "pd_info.m"
  }
#line 402 "pd_info.m"
}

#line 313 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_incr_size_delta_3_p_0(
#line 313 "pd_info.m"
  MR_Integer transform_hlds__pd_info__Delta1_4,
#line 313 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
#line 313 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
#line 313 "pd_info.m"
{
#line 389 "pd_info.m"
  {
#line 389 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 389 "pd_info.m"
    MR_Integer transform_hlds__pd_info__Delta0_6;
#line 389 "pd_info.m"
    MR_Integer transform_hlds__pd_info__Delta_7;

#line 390 "pd_info.m"
    {
#line 390 "pd_info.m"
      transform_hlds__pd_info__pd_info_get_size_delta_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, &transform_hlds__pd_info__Delta0_6);
    }
#line 391 "pd_info.m"
    transform_hlds__pd_info__Delta_7 = (transform_hlds__pd_info__Delta0_6 + transform_hlds__pd_info__Delta1_4);
#line 392 "pd_info.m"
    {
#line 392 "pd_info.m"
      transform_hlds__pd_info__pd_info_set_size_delta_3_p_0(transform_hlds__pd_info__Delta_7, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9);
    }
#line 389 "pd_info.m"
  }
#line 313 "pd_info.m"
}

#line 311 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_incr_cost_delta_3_p_0(
#line 311 "pd_info.m"
  MR_Integer transform_hlds__pd_info__Delta1_4,
#line 311 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
#line 311 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
#line 311 "pd_info.m"
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
      transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, &transform_hlds__pd_info__Delta0_6);
    }
#line 386 "pd_info.m"
    transform_hlds__pd_info__Delta_7 = (transform_hlds__pd_info__Delta0_6 + transform_hlds__pd_info__Delta1_4);
#line 387 "pd_info.m"
    {
#line 387 "pd_info.m"
      transform_hlds__pd_info__pd_info_set_cost_delta_3_p_0(transform_hlds__pd_info__Delta_7, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9);
    }
#line 384 "pd_info.m"
  }
#line 311 "pd_info.m"
}

#line 309 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_rerun_det_3_p_0(
#line 309 "pd_info.m"
  MR_Word transform_hlds__pd_info__Rerun_4,
#line 309 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
#line 309 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
#line 309 "pd_info.m"
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
    MR_Integer transform_hlds__pd_info__V_20_20;
#line 381 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21;

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 9) = ((MR_Box) (transform_hlds__pd_info__V_20_20));
#line 381 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 10) = ((MR_Box) (transform_hlds__pd_info__Rerun_4));
#line 381 "pd_info.m"
    }
#line 179 "pd_info.m"
    {
#line 179 "pd_info.m"
      transform_hlds__pd_info__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__V_43_43, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
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
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_28_28));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_43_43));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_29_29));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_30_30));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_31_31));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_32_32));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_33_33));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_34_34));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_35_35));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_36_36));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_37_37));
#line 179 "pd_info.m"
    }
#line 379 "pd_info.m"
  }
#line 309 "pd_info.m"
}

#line 307 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_size_delta_3_p_0(
#line 307 "pd_info.m"
  MR_Integer transform_hlds__pd_info__SizeDelta_4,
#line 307 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
#line 307 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
#line 307 "pd_info.m"
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
    MR_Word transform_hlds__pd_info__V_19_19;
#line 377 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21;
#line 377 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_20_20;

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 8) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 377 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 9) = ((MR_Box) (transform_hlds__pd_info__SizeDelta_4));
#line 377 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 10) = ((MR_Box) (transform_hlds__pd_info__V_21_21));
#line 377 "pd_info.m"
    }
#line 179 "pd_info.m"
    {
#line 179 "pd_info.m"
      transform_hlds__pd_info__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__V_43_43, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
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
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_28_28));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_43_43));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_29_29));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_30_30));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_31_31));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_32_32));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_33_33));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_34_34));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_35_35));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_36_36));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_37_37));
#line 179 "pd_info.m"
    }
#line 375 "pd_info.m"
  }
#line 307 "pd_info.m"
}

#line 305 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_changed_3_p_0(
#line 305 "pd_info.m"
  MR_Word transform_hlds__pd_info__Changed_4,
#line 305 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
#line 305 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
#line 305 "pd_info.m"
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
    MR_Word transform_hlds__pd_info__V_18_18;
#line 373 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_20_20;
#line 373 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21;
#line 373 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_19_19;

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 7) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 373 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 8) = ((MR_Box) (transform_hlds__pd_info__Changed_4));
#line 373 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 9) = ((MR_Box) (transform_hlds__pd_info__V_20_20));
#line 373 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 10) = ((MR_Box) (transform_hlds__pd_info__V_21_21));
#line 373 "pd_info.m"
    }
#line 179 "pd_info.m"
    {
#line 179 "pd_info.m"
      transform_hlds__pd_info__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__V_43_43, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
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
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_28_28));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_43_43));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_29_29));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_30_30));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_31_31));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_32_32));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_33_33));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_34_34));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_35_35));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_36_36));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_37_37));
#line 179 "pd_info.m"
    }
#line 371 "pd_info.m"
  }
#line 305 "pd_info.m"
}

#line 303 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_pred_proc_id_3_p_0(
#line 303 "pd_info.m"
  MR_Word transform_hlds__pd_info__PredProcId_4,
#line 303 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
#line 303 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
#line 303 "pd_info.m"
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
    MR_Word transform_hlds__pd_info__V_17_17;
#line 369 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_19_19;
#line 369 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_20_20;
#line 369 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21;
#line 369 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18;

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 6) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 369 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 7) = ((MR_Box) (transform_hlds__pd_info__PredProcId_4));
#line 369 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 8) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 369 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 9) = ((MR_Box) (transform_hlds__pd_info__V_20_20));
#line 369 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 10) = ((MR_Box) (transform_hlds__pd_info__V_21_21));
#line 369 "pd_info.m"
    }
#line 179 "pd_info.m"
    {
#line 179 "pd_info.m"
      transform_hlds__pd_info__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__V_43_43, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
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
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_28_28));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_43_43));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_29_29));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_30_30));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_31_31));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_32_32));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_33_33));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_34_34));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_35_35));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_36_36));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_37_37));
#line 179 "pd_info.m"
    }
#line 367 "pd_info.m"
  }
#line 303 "pd_info.m"
}

#line 301 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_parents_3_p_0(
#line 301 "pd_info.m"
  MR_Word transform_hlds__pd_info__Parents_4,
#line 301 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
#line 301 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
#line 301 "pd_info.m"
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
    MR_Word transform_hlds__pd_info__V_16_16;
#line 365 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18;
#line 365 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_19_19;
#line 365 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_20_20;
#line 365 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21;
#line 365 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_17_17;

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 5) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 365 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 6) = ((MR_Box) (transform_hlds__pd_info__Parents_4));
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
#line 179 "pd_info.m"
    {
#line 179 "pd_info.m"
      transform_hlds__pd_info__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__V_43_43, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
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
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_28_28));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_43_43));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_29_29));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_30_30));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_31_31));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_32_32));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_33_33));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_34_34));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_35_35));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_36_36));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_37_37));
#line 179 "pd_info.m"
    }
#line 363 "pd_info.m"
  }
#line 301 "pd_info.m"
}

#line 299 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_pred_info_3_p_0(
#line 299 "pd_info.m"
  MR_Word transform_hlds__pd_info__PredInfo_4,
#line 299 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
#line 299 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
#line 299 "pd_info.m"
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
    MR_Word transform_hlds__pd_info__V_15_15;
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
    MR_Word transform_hlds__pd_info__V_16_16;

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 4) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 361 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 5) = ((MR_Box) (transform_hlds__pd_info__PredInfo_4));
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
#line 179 "pd_info.m"
    {
#line 179 "pd_info.m"
      transform_hlds__pd_info__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__V_43_43, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
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
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_28_28));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_43_43));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_29_29));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_30_30));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_31_31));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_32_32));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_33_33));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_34_34));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_35_35));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_36_36));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_37_37));
#line 179 "pd_info.m"
    }
#line 359 "pd_info.m"
  }
#line 299 "pd_info.m"
}

#line 297 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_local_term_info_3_p_0(
#line 297 "pd_info.m"
  MR_Word transform_hlds__pd_info__TermInfo_4,
#line 297 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
#line 297 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
#line 297 "pd_info.m"
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
    MR_Integer transform_hlds__pd_info__V_14_14;
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
    MR_Word transform_hlds__pd_info__V_15_15;

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 3) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 357 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 4) = ((MR_Box) (transform_hlds__pd_info__TermInfo_4));
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
#line 179 "pd_info.m"
    {
#line 179 "pd_info.m"
      transform_hlds__pd_info__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__V_43_43, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
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
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_28_28));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_43_43));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_29_29));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_30_30));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_31_31));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_32_32));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_33_33));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_34_34));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_35_35));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_36_36));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_37_37));
#line 179 "pd_info.m"
    }
#line 355 "pd_info.m"
  }
#line 297 "pd_info.m"
}

#line 295 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_cost_delta_3_p_0(
#line 295 "pd_info.m"
  MR_Integer transform_hlds__pd_info__CostDelta_4,
#line 295 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
#line 295 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
#line 295 "pd_info.m"
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
    MR_Word transform_hlds__pd_info__V_13_13;
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
    MR_Integer transform_hlds__pd_info__V_14_14;

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 2) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 353 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 3) = ((MR_Box) (transform_hlds__pd_info__CostDelta_4));
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
#line 179 "pd_info.m"
    {
#line 179 "pd_info.m"
      transform_hlds__pd_info__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__V_43_43, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
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
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_28_28));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_43_43));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_29_29));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_30_30));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_31_31));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_32_32));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_33_33));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_34_34));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_35_35));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_36_36));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_37_37));
#line 179 "pd_info.m"
    }
#line 351 "pd_info.m"
  }
#line 295 "pd_info.m"
}

#line 293 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_instmap_3_p_0(
#line 293 "pd_info.m"
  MR_Word transform_hlds__pd_info__InstMap_4,
#line 293 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
#line 293 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
#line 293 "pd_info.m"
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
    MR_Word transform_hlds__pd_info__V_11_11;
#line 349 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
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
    MR_Word transform_hlds__pd_info__V_13_13;

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 0) = ((MR_Box) (transform_hlds__pd_info__V_11_11));
#line 349 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 1) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 349 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 2) = ((MR_Box) (transform_hlds__pd_info__InstMap_4));
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
#line 179 "pd_info.m"
    {
#line 179 "pd_info.m"
      transform_hlds__pd_info__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__V_43_43, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
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
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_28_28));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_43_43));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_29_29));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_30_30));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_31_31));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_32_32));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_33_33));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_34_34));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_35_35));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_36_36));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_37_37));
#line 179 "pd_info.m"
    }
#line 347 "pd_info.m"
  }
#line 293 "pd_info.m"
}

#line 291 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_set_proc_info_3_p_0(
#line 291 "pd_info.m"
  MR_Word transform_hlds__pd_info__ProcInfo_4,
#line 291 "pd_info.m"
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
#line 291 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
#line 291 "pd_info.m"
{
#line 343 "pd_info.m"
  {
#line 343 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 343 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo0_6;
#line 343 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_7;
#line 343 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 1)));
#line 343 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 0)));
#line 343 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 2)));
#line 343 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 3)));
#line 343 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 4)));
#line 343 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 5)));
#line 343 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 6)));
#line 343 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 7)));
#line 343 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 8)));
#line 343 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 9)));
#line 343 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 10)));
#line 343 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_43_43;
#line 345 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 345 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_13_13;
#line 345 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_14_14;
#line 345 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_15_15;
#line 345 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_16_16;
#line 345 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_17_17;
#line 345 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_18_18;
#line 345 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_19_19;
#line 345 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_20_20;
#line 345 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21;
#line 345 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
      transform_hlds__pd_info__UnfoldInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_24, (MR_Integer) 0)));
#line 345 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 0)));
#line 345 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 1)));
#line 345 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 2)));
#line 345 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 3)));
#line 345 "pd_info.m"
    transform_hlds__pd_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 4)));
#line 345 "pd_info.m"
    transform_hlds__pd_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 5)));
#line 345 "pd_info.m"
    transform_hlds__pd_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 6)));
#line 345 "pd_info.m"
    transform_hlds__pd_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 7)));
#line 345 "pd_info.m"
    transform_hlds__pd_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 8)));
#line 345 "pd_info.m"
    transform_hlds__pd_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 9)));
#line 345 "pd_info.m"
    transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 10)));
#line 345 "pd_info.m"
    {
#line 345 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 345 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 0) = ((MR_Box) (transform_hlds__pd_info__ProcInfo_4));
#line 345 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 1) = ((MR_Box) (transform_hlds__pd_info__V_12_12));
#line 345 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 2) = ((MR_Box) (transform_hlds__pd_info__V_13_13));
#line 345 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 3) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 345 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 4) = ((MR_Box) (transform_hlds__pd_info__V_15_15));
#line 345 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 5) = ((MR_Box) (transform_hlds__pd_info__V_16_16));
#line 345 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 6) = ((MR_Box) (transform_hlds__pd_info__V_17_17));
#line 345 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 7) = ((MR_Box) (transform_hlds__pd_info__V_18_18));
#line 345 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 8) = ((MR_Box) (transform_hlds__pd_info__V_19_19));
#line 345 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 9) = ((MR_Box) (transform_hlds__pd_info__V_20_20));
#line 345 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 10) = ((MR_Box) (transform_hlds__pd_info__V_21_21));
#line 345 "pd_info.m"
    }
#line 179 "pd_info.m"
    {
#line 179 "pd_info.m"
      transform_hlds__pd_info__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__V_43_43, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
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
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_28_28));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_43_43));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_29_29));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_30_30));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_31_31));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_32_32));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_33_33));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_34_34));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_35_35));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_36_36));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_37_37));
#line 179 "pd_info.m"
    }
#line 343 "pd_info.m"
  }
#line 291 "pd_info.m"
}

#line 289 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_rerun_det_2_p_0(
#line 289 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 289 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
#line 289 "pd_info.m"
{
#line 340 "pd_info.m"
  {
#line 340 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 340 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
#line 340 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 159 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 159 "pd_info.m"
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
    MR_Word transform_hlds__pd_info__V_13_13;
#line 340 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_14_14;

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
#line 340 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
#line 340 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 10)));
#line 340 "pd_info.m"
  }
#line 289 "pd_info.m"
}

#line 288 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_size_delta_2_p_0(
#line 288 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 288 "pd_info.m"
  MR_Integer * transform_hlds__pd_info__HeadVar__2_2)
#line 288 "pd_info.m"
{
#line 338 "pd_info.m"
  {
#line 338 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 338 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
#line 338 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 159 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 159 "pd_info.m"
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
    MR_Word transform_hlds__pd_info__V_13_13;
#line 338 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14;

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
#line 338 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
#line 338 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
#line 338 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 10)));
#line 338 "pd_info.m"
  }
#line 288 "pd_info.m"
}

#line 287 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_changed_2_p_0(
#line 287 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 287 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
#line 287 "pd_info.m"
{
#line 336 "pd_info.m"
  {
#line 336 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 336 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
#line 336 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 159 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 159 "pd_info.m"
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

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
#line 336 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
#line 336 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
#line 336 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
#line 336 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 10)));
#line 336 "pd_info.m"
  }
#line 287 "pd_info.m"
}

#line 286 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_pred_proc_id_2_p_0(
#line 286 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 286 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
#line 286 "pd_info.m"
{
#line 334 "pd_info.m"
  {
#line 334 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 334 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
#line 334 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 159 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 159 "pd_info.m"
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

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
#line 334 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
#line 334 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
#line 334 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
#line 334 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
#line 334 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 10)));
#line 334 "pd_info.m"
  }
#line 286 "pd_info.m"
}

#line 285 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_parents_2_p_0(
#line 285 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 285 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
#line 285 "pd_info.m"
{
#line 332 "pd_info.m"
  {
#line 332 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 332 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
#line 332 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 159 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 159 "pd_info.m"
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

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
    transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
#line 332 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
#line 332 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
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
#line 285 "pd_info.m"
}

#line 284 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(
#line 284 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 284 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
#line 284 "pd_info.m"
{
#line 330 "pd_info.m"
  {
#line 330 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 330 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
#line 330 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 159 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 330 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5;
#line 330 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6;
#line 330 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_7_7;
#line 330 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_8_8;
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

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_17, (MR_Integer) 0)));
#line 330 "pd_info.m"
    transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
#line 330 "pd_info.m"
    transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
#line 330 "pd_info.m"
    transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
#line 330 "pd_info.m"
    transform_hlds__pd_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
#line 330 "pd_info.m"
    transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
#line 330 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
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
#line 284 "pd_info.m"
}

#line 283 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_local_term_info_2_p_0(
#line 283 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 283 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
#line 283 "pd_info.m"
{
#line 328 "pd_info.m"
  {
#line 328 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 328 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
#line 328 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 159 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 328 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5;
#line 328 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6;
#line 328 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_7_7;
#line 328 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_8_8;
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

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_17, (MR_Integer) 0)));
#line 328 "pd_info.m"
    transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
#line 328 "pd_info.m"
    transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
#line 328 "pd_info.m"
    transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
#line 328 "pd_info.m"
    transform_hlds__pd_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
#line 328 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
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
#line 283 "pd_info.m"
}

#line 282 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(
#line 282 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 282 "pd_info.m"
  MR_Integer * transform_hlds__pd_info__HeadVar__2_2)
#line 282 "pd_info.m"
{
#line 326 "pd_info.m"
  {
#line 326 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 326 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
#line 326 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 159 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 326 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5;
#line 326 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6;
#line 326 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_7_7;
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

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_17, (MR_Integer) 0)));
#line 326 "pd_info.m"
    transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
#line 326 "pd_info.m"
    transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
#line 326 "pd_info.m"
    transform_hlds__pd_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
#line 326 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
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
#line 282 "pd_info.m"
}

#line 281 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_instmap_2_p_0(
#line 281 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 281 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
#line 281 "pd_info.m"
{
#line 324 "pd_info.m"
  {
#line 324 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 324 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
#line 324 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 159 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 159 "pd_info.m"
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

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_17, (MR_Integer) 0)));
#line 324 "pd_info.m"
    transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
#line 324 "pd_info.m"
    transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
#line 324 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
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
#line 281 "pd_info.m"
}

#line 279 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_head_inst_vars_2_p_0(
#line 279 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 279 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
#line 279 "pd_info.m"
{
#line 322 "pd_info.m"
  {
#line 322 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 322 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
#line 322 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 159 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 322 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5;
#line 322 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6;
#line 322 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_7_7;
#line 322 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_8_8;
#line 322 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9;
#line 322 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10;
#line 322 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 322 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 322 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_13_13;
#line 322 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14;

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_17, (MR_Integer) 0)));
#line 322 "pd_info.m"
    transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
#line 322 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
#line 322 "pd_info.m"
    transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
#line 322 "pd_info.m"
    transform_hlds__pd_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
#line 322 "pd_info.m"
    transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
#line 322 "pd_info.m"
    transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
#line 322 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
#line 322 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
#line 322 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
#line 322 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
#line 322 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 10)));
#line 322 "pd_info.m"
  }
#line 279 "pd_info.m"
}

#line 278 "pd_info.m"
void MR_CALL 
transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(
#line 278 "pd_info.m"
  MR_Word transform_hlds__pd_info__PDInfo_3,
#line 278 "pd_info.m"
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
#line 278 "pd_info.m"
{
#line 320 "pd_info.m"
  {
#line 320 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 320 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
#line 320 "pd_info.m"
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
#line 159 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
#line 159 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
#line 320 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_5_5;
#line 320 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_6_6;
#line 320 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_7_7;
#line 320 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_8_8;
#line 320 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_9_9;
#line 320 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_10_10;
#line 320 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_11_11;
#line 320 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_12_12;
#line 320 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_13_13;
#line 320 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14;

#line 162 "pd_info.m"
    if ((transform_hlds__pd_info__MaybeUnfoldInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_17, (MR_Integer) 0)));
#line 320 "pd_info.m"
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
#line 320 "pd_info.m"
    transform_hlds__pd_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
#line 320 "pd_info.m"
    transform_hlds__pd_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
#line 320 "pd_info.m"
    transform_hlds__pd_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
#line 320 "pd_info.m"
    transform_hlds__pd_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
#line 320 "pd_info.m"
    transform_hlds__pd_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
#line 320 "pd_info.m"
    transform_hlds__pd_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
#line 320 "pd_info.m"
    transform_hlds__pd_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
#line 320 "pd_info.m"
    transform_hlds__pd_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
#line 320 "pd_info.m"
    transform_hlds__pd_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
#line 320 "pd_info.m"
    transform_hlds__pd_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 10)));
#line 320 "pd_info.m"
  }
#line 278 "pd_info.m"
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
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__pd_info__VarTypes_13, transform_hlds__pd_info__Var_6, &transform_hlds__pd_info__Type_14);
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
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18,
#line 64 "pd_info.m"
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19)
#line 64 "pd_info.m"
{
#line 145 "pd_info.m"
  {
#line 145 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 145 "pd_info.m"
    MR_Word transform_hlds__pd_info__ModuleInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 0)));
#line 145 "pd_info.m"
    MR_Word transform_hlds__pd_info__ArgModes_11;
#line 145 "pd_info.m"
    MR_Word transform_hlds__pd_info__HeadInstVars_12;
#line 145 "pd_info.m"
    MR_Word transform_hlds__pd_info__InstMap_13;
#line 145 "pd_info.m"
    MR_Word transform_hlds__pd_info__LocalTermInfo_15;
#line 145 "pd_info.m"
    MR_Word transform_hlds__pd_info__Parents_16;
#line 145 "pd_info.m"
    MR_Word transform_hlds__pd_info__UnfoldInfo_17;
#line 145 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_41_41;
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 1)));
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 2)));
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 3)));
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 4)));
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 5)));
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 6)));
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 7)));
#line 157 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 8)));
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 9)));
#line 157 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 10)));
#line 179 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_42_42;
#line 179 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_44_44;
#line 179 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_45_45;
#line 179 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_46_46;
#line 179 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_47_47;
#line 179 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_48_48;
#line 179 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_49_49;
#line 179 "pd_info.m"
    MR_Integer transform_hlds__pd_info__V_50_50;
#line 179 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_51_51;
#line 179 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_52_52;
#line 179 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_43_43;

#line 147 "pd_info.m"
    {
#line 147 "pd_info.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__pd_info__ProcInfo_8, &transform_hlds__pd_info__ArgModes_11);
    }
#line 148 "pd_info.m"
    {
#line 148 "pd_info.m"
      check_hlds__modecheck_util__get_constrained_inst_vars_3_p_0(transform_hlds__pd_info__ModuleInfo_10, transform_hlds__pd_info__ArgModes_11, &transform_hlds__pd_info__HeadInstVars_12);
    }
#line 149 "pd_info.m"
    {
#line 149 "pd_info.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__pd_info__ProcInfo_8, transform_hlds__pd_info__ModuleInfo_10, &transform_hlds__pd_info__InstMap_13);
    }
#line 151 "pd_info.m"
    {
#line 151 "pd_info.m"
      transform_hlds__pd_term__local_term_info_init_1_p_0(&transform_hlds__pd_info__LocalTermInfo_15);
    }
#line 152 "pd_info.m"
    {
#line 152 "pd_info.m"
      transform_hlds__pd_info__Parents_16 = mercury__set__make_singleton_set_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__pd_info__PredProcId_6)));
    }
#line 153 "pd_info.m"
    {
#line 153 "pd_info.m"
      transform_hlds__pd_info__UnfoldInfo_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 153 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_17, 0) = ((MR_Box) (transform_hlds__pd_info__ProcInfo_8));
#line 153 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_17, 1) = ((MR_Box) (transform_hlds__pd_info__HeadInstVars_12));
#line 153 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_17, 2) = ((MR_Box) (transform_hlds__pd_info__InstMap_13));
#line 153 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_17, 3) = ((MR_Box) ((MR_Integer) 0));
#line 153 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_17, 4) = ((MR_Box) (transform_hlds__pd_info__LocalTermInfo_15));
#line 153 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_17, 5) = ((MR_Box) (transform_hlds__pd_info__PredInfo_7));
#line 153 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_17, 6) = ((MR_Box) (transform_hlds__pd_info__Parents_16));
#line 153 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_17, 7) = ((MR_Box) (transform_hlds__pd_info__PredProcId_6));
#line 153 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_17, 8) = ((MR_Box) ((MR_Integer) 0));
#line 153 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_17, 9) = ((MR_Box) ((MR_Integer) 0));
#line 153 "pd_info.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_17, 10) = ((MR_Box) ((MR_Integer) 0));
#line 153 "pd_info.m"
    }
#line 179 "pd_info.m"
    {
#line 179 "pd_info.m"
      transform_hlds__pd_info__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__V_41_41, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_17));
#line 179 "pd_info.m"
    }
#line 179 "pd_info.m"
    transform_hlds__pd_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 0)));
#line 179 "pd_info.m"
    transform_hlds__pd_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 1)));
#line 179 "pd_info.m"
    transform_hlds__pd_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 2)));
#line 179 "pd_info.m"
    transform_hlds__pd_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 3)));
#line 179 "pd_info.m"
    transform_hlds__pd_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 4)));
#line 179 "pd_info.m"
    transform_hlds__pd_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 5)));
#line 179 "pd_info.m"
    transform_hlds__pd_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 6)));
#line 179 "pd_info.m"
    transform_hlds__pd_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 7)));
#line 179 "pd_info.m"
    transform_hlds__pd_info__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 8)));
#line 179 "pd_info.m"
    transform_hlds__pd_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 9)));
#line 179 "pd_info.m"
    transform_hlds__pd_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 10)));
#line 179 "pd_info.m"
    {
#line 179 "pd_info.m"
      MR_Word base;
#line 179 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 179 "pd_info.m"
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19 = base;
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__V_42_42));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__V_41_41));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__V_44_44));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__V_45_45));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__V_46_46));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_47_47));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__V_48_48));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__V_49_49));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__V_50_50));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__V_51_51));
#line 179 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__V_52_52));
#line 179 "pd_info.m"
    }
#line 145 "pd_info.m"
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
#line 134 "pd_info.m"
  {
#line 134 "pd_info.m"
    MR_bool transform_hlds__pd_info__succeeded;
#line 134 "pd_info.m"
    MR_Word transform_hlds__pd_info__TypeInfo_17_17 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[0];
#line 134 "pd_info.m"
    MR_Word transform_hlds__pd_info__TypeCtorInfo_18_18;
#line 134 "pd_info.m"
    MR_Word transform_hlds__pd_info__GoalVersionIndex_7;
#line 134 "pd_info.m"
    MR_Word transform_hlds__pd_info__Versions_8;
#line 134 "pd_info.m"
    MR_Word transform_hlds__pd_info__ParentVersions_9;
#line 134 "pd_info.m"
    MR_Word transform_hlds__pd_info__GlobalInfo_10;
#line 134 "pd_info.m"
    MR_Word transform_hlds__pd_info__CreatedVersions_11;
#line 134 "pd_info.m"
    MR_Word transform_hlds__pd_info__UselessVersions_12;
#line 134 "pd_info.m"
    MR_Word transform_hlds__pd_info__V_14_14;

#line 135 "pd_info.m"
    {
#line 135 "pd_info.m"
      mercury__map__init_1_p_0(transform_hlds__pd_info__TypeInfo_17_17, transform_hlds__pd_info__TypeInfo_17_17, &transform_hlds__pd_info__GoalVersionIndex_7);
    }
#line 11626 "transform_hlds.pd_info.c"
    transform_hlds__pd_info__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 136 "pd_info.m"
    {
#line 136 "pd_info.m"
      mercury__map__init_1_p_0(transform_hlds__pd_info__TypeCtorInfo_18_18, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0, &transform_hlds__pd_info__Versions_8);
    }
#line 137 "pd_info.m"
    {
#line 137 "pd_info.m"
      mercury__set__init_1_p_0(transform_hlds__pd_info__TypeCtorInfo_18_18, &transform_hlds__pd_info__ParentVersions_9);
    }
#line 138 "pd_info.m"
    {
#line 138 "pd_info.m"
      transform_hlds__pd_term__global_term_info_init_1_p_0(&transform_hlds__pd_info__GlobalInfo_10);
    }
#line 139 "pd_info.m"
    {
#line 139 "pd_info.m"
      mercury__set__init_1_p_0(transform_hlds__pd_info__TypeCtorInfo_18_18, &transform_hlds__pd_info__CreatedVersions_11);
    }
#line 140 "pd_info.m"
    {
#line 140 "pd_info.m"
      mercury__set__init_1_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[0], &transform_hlds__pd_info__UselessVersions_12);
    }
#line 142 "pd_info.m"
    {
#line 142 "pd_info.m"
      transform_hlds__pd_info__V_14_14 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 141 "pd_info.m"
    {
#line 141 "pd_info.m"
      MR_Word base;
#line 141 "pd_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 141 "pd_info.m"
      *transform_hlds__pd_info__PDInfo_6 = base;
#line 141 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__ModuleInfo_4));
#line 141 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 141 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__GoalVersionIndex_7));
#line 141 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__Versions_8));
#line 141 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__ProcArgInfos_5));
#line 141 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__V_14_14));
#line 141 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__GlobalInfo_10));
#line 141 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__ParentVersions_9));
#line 141 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Integer) 0));
#line 141 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__CreatedVersions_11));
#line 141 "pd_info.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__UselessVersions_12));
#line 141 "pd_info.m"
    }
#line 134 "pd_info.m"
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
