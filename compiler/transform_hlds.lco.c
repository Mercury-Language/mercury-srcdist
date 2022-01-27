/*
** Automatically generated from `lco.m'
** by the Mercury compiler,
** version 13.05, configured for x86_64-apple-darwin12.3.0.
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


/* :- module transform_hlds.lco. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__lco__init
ENDINIT
*/

#include "transform_hlds.lco.mih"


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
#include "check_hlds.inst_match.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.arg_info.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
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
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.dependency_graph.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 147 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 150 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0;

#line 153 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0;

#line 156 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 159 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 162 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__lco__type_ctor_info_variant_id_0;

#line 165 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 168 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 171 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 174 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 177 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 180 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 183 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_field_id_0;

#line 186 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 189 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 192 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_transform_hlds__lco__type_ctor_info_variant_arg_0;

#line 195 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0;

#line 198 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0;

#line 201 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_store_target_0;

#line 204 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_0;

#line 207 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_1;

#line 210 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_value_ordered_allow_float_addr_0[2];

#line 213 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_allow_float_addr_0[2];

#line 216 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_allow_float_addr_0[2];

#line 219 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_field_id_0_0[3];

#line 222 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_field_id_0_0[3];

#line 225 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_field_id_0_0;

#line 228 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_field_id_0_0[1];

#line 231 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_field_id_0[1];

#line 234 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_field_id_0[1];

#line 237 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_field_id_0[1];

#line 240 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0;

#line 243 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 246 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 249 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_lco_const_info_0_0[8];

#line 252 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_lco_const_info_0_0[8];

#line 255 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_const_info_0_0;

#line 258 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_const_info_0_0[1];

#line 261 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_const_info_0[1];

#line 264 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_lco_const_info_0[1];

#line 267 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_const_info_0[1];

#line 270 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 273 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 276 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_lco_info_0_0[7];

#line 279 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_lco_info_0_0[7];

#line 282 "transform_hlds.lco.c"
static const MR_DuArgLocn transform_hlds__lco__transform_hlds__lco__field_locns_lco_info_0_0[7];

#line 285 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_info_0_0;

#line 288 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_info_0_0[1];

#line 291 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_info_0[1];

#line 294 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_lco_info_0[1];

#line 297 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_info_0[1];

#line 300 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_0;

#line 303 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_1;

#line 306 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_value_ordered_lco_is_permitted_on_scc_0[2];

#line 309 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_lco_is_permitted_on_scc_0[2];

#line 312 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_is_permitted_on_scc_0[2];

#line 315 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_0;

#line 318 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_1;

#line 321 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_value_ordered_proc_changed_0[2];

#line 324 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_proc_changed_0[2];

#line 327 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_proc_changed_0[2];

#line 330 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__maybe__ti_maybe_1transform_hlds__lco__type_ctor_info_field_id_0;

#line 333 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_store_target_0_0[2];

#line 336 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_store_target_0_0;

#line 339 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_store_target_0_0[1];

#line 342 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_store_target_0[1];

#line 345 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_store_target_0[1];

#line 348 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_store_target_0[1];

#line 351 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0;

#line 354 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_variant_arg_0_0[2];

#line 357 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_variant_arg_0_0[2];

#line 360 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_arg_0_0;

#line 363 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_arg_0_0[1];

#line 366 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_arg_0[1];

#line 369 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_arg_0[1];

#line 372 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_arg_0[1];

#line 375 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_arg_0;

#line 378 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_variant_id_0_0[3];

#line 381 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_id_0_0;

#line 384 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_id_0_0[1];

#line 387 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_id_0[1];

#line 390 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_id_0[1];

#line 393 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_id_0[1];

#line 396 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____allow_float_addr_0_0_10001(
#line 399 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 401 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 404 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____allow_float_addr_0_0_10001(
#line 407 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 409 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 411 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 414 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____field_id_0_0_10001(
#line 417 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 419 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 422 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____field_id_0_0_10001(
#line 425 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 427 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 429 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 432 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_const_info_0_0_10001(
#line 435 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 437 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 440 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____lco_const_info_0_0_10001(
#line 443 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 445 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 447 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 450 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_info_0_0_10001(
#line 453 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 455 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 458 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____lco_info_0_0_10001(
#line 461 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 463 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 465 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 468 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0_10001(
#line 471 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 473 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 476 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0_10001(
#line 479 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 481 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 483 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 486 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____proc_changed_0_0_10001(
#line 489 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 491 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 494 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____proc_changed_0_0_10001(
#line 497 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 499 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 501 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 504 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____store_target_0_0_10001(
#line 507 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 509 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 512 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____store_target_0_0_10001(
#line 515 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 517 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 519 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 522 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____var_to_target_0_0_10001(
#line 525 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 527 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 530 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____var_to_target_0_0_10001(
#line 533 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 535 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 537 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 540 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_arg_0_0_10001(
#line 543 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 545 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 548 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____variant_arg_0_0_10001(
#line 551 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 553 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 555 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 558 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_id_0_0_10001(
#line 561 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 563 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 566 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____variant_id_0_0_10001(
#line 569 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 571 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 573 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 576 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_map_0_0_10001(
#line 579 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 581 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 584 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____variant_map_0_0_10001(
#line 587 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 589 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 591 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 734 "lco.m"
static void MR_CALL 
transform_hlds__lco__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_116_105_116_105_111_110_95_100_101_112_101_110_100_101_110_116_95_103_111_97_108_95_95_91_49_44_32_50_93_95_48_9_p_0(
#line 734 "lco.m"
  MR_Word transform_hlds__lco__Goal_12,
#line 734 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22,
#line 734 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23,
#line 734 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24,
#line 734 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25,
#line 734 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26,
#line 734 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_DelayForVars_27);

#line 1593 "lco.m"
static void MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__lco_transform_variant_plain_call__1593__1_2_p_0(
#line 1593 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_69,
#line 1593 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__2_70);

#line 1323 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__make_addr_vars__1323__1_2_p_0(
#line 1323 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 1323 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_25);

#line 1197 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__update_construct__1197__1_2_p_0(
#line 1197 "lco.m"
  MR_Word transform_hlds__lco__ConsId_23,
#line 1197 "lco.m"
  MR_Word transform_hlds__lco__RHSConsId_43);

#line 1053 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__IntroducedFrom__func__make_variant_args__1053__1_2_f_0(
#line 1053 "lco.m"
  MR_Word transform_hlds__lco__AddrVarFieldIds_6,
#line 1053 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_14);

#line 1050 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__IntroducedFrom__func__make_variant_args__1050__1_1_f_0(
#line 1050 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_17);

#line 892 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__update_call_args__892__1_2_p_0(
#line 892 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 892 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_13);

#line 239 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____variant_map_0_0(
#line 239 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 239 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 239 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 239 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_map_0_0(
#line 239 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 239 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 211 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____variant_id_0_0(
#line 211 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 211 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 211 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 211 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_id_0_0(
#line 211 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 211 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 218 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____variant_arg_0_0(
#line 218 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 218 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 218 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 218 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_arg_0_0(
#line 218 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 218 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 276 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____var_to_target_0_0(
#line 276 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 276 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 276 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 276 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____var_to_target_0_0(
#line 276 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 276 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 278 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____store_target_0_0(
#line 278 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 278 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 278 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 278 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____store_target_0_0(
#line 278 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 278 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 245 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____proc_changed_0_0(
#line 245 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 245 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 245 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 245 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____proc_changed_0_0(
#line 245 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_1,
#line 245 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 241 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0(
#line 241 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 241 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 241 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 241 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0(
#line 241 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_1,
#line 241 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 253 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____lco_info_0_0(
#line 253 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 253 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 253 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 253 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_info_0_0(
#line 253 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 253 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 264 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____lco_const_info_0_0(
#line 264 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 264 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 264 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 264 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_const_info_0_0(
#line 264 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 264 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 232 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____field_id_0_0(
#line 232 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 232 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 232 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 232 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____field_id_0_0(
#line 232 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 232 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 249 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____allow_float_addr_0_0(
#line 249 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 249 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 249 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 249 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____allow_float_addr_0_0(
#line 249 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_1,
#line 249 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 1687 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_unification_args_8_p_0(
#line 1687 "lco.m"
  MR_Word transform_hlds__lco__GroundVar_9,
#line 1687 "lco.m"
  MR_Integer transform_hlds__lco__TargetArgNum_10,
#line 1687 "lco.m"
  MR_Integer transform_hlds__lco__CurArgNum_11,
#line 1687 "lco.m"
  MR_Word transform_hlds__lco__ArgTypes_12,
#line 1687 "lco.m"
  MR_Word * transform_hlds__lco__ArgVars_13,
#line 1687 "lco.m"
  MR_Word * transform_hlds__lco__ArgModes_14,
#line 1687 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22,
#line 1687 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_23);

#line 1643 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_store_goal_6_p_0(
#line 1643 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_7,
#line 1643 "lco.m"
  MR_Word transform_hlds__lco__InstMap_8,
#line 1643 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 1643 "lco.m"
  MR_Word * transform_hlds__lco__Goal_11,
#line 1643 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_32,
#line 1643 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_33);

#line 1618 "lco.m"
static void MR_CALL 
transform_hlds__lco__grounding_to_variant_args_5_p_0(
#line 1618 "lco.m"
  MR_Word transform_hlds__lco__GroundingVarToAddr_6,
#line 1618 "lco.m"
  MR_Integer transform_hlds__lco__OutArgNum_7,
#line 1618 "lco.m"
  MR_Word transform_hlds__lco__OutArgs_8,
#line 1618 "lco.m"
  MR_Word * transform_hlds__lco__Subst_9,
#line 1618 "lco.m"
  MR_Word * transform_hlds__lco__VariantArgs_10);

#line 1608 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__is_grounding_4_p_0(
#line 1608 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_5,
#line 1608 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_6,
#line 1608 "lco.m"
  MR_Word transform_hlds__lco__InstMap_7,
#line 1608 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__4_4);

#line 1593 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_2(
#line 1593 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1593 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1593 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2);

#line 1550 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_1(
#line 1550 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1550 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1);

#line 1541 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0(
#line 1541 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_12,
#line 1541 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_13,
#line 1541 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_14,
#line 1541 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_15,
#line 1541 "lco.m"
  MR_Word transform_hlds__lco__GoalExpr0_16,
#line 1541 "lco.m"
  MR_Word * transform_hlds__lco__GoalExpr_17,
#line 1541 "lco.m"
  MR_Word transform_hlds__lco__GoalInfo0_18,
#line 1541 "lco.m"
  MR_Word * transform_hlds__lco__GoalInfo_19,
#line 1541 "lco.m"
  MR_Word * transform_hlds__lco__Changed_20,
#line 1541 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_53,
#line 1541 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_54);

#line 1534 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_2(
#line 1534 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1534 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1534 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 1534 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_3,
#line 1534 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_4);

#line 1526 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_1(
#line 1526 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1526 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1);

#line 1518 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(
#line 1518 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_10,
#line 1518 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_11,
#line 1518 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_12,
#line 1518 "lco.m"
  MR_Word transform_hlds__lco__GoalInfo_13,
#line 1518 "lco.m"
  MR_Word transform_hlds__lco__GoalExpr0_14,
#line 1518 "lco.m"
  MR_Word * transform_hlds__lco__GoalExpr_15,
#line 1518 "lco.m"
  MR_Word * transform_hlds__lco__Changed_16,
#line 1518 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_23,
#line 1518 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_24);

#line 1507 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_case_9_p_0(
#line 1507 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_10,
#line 1507 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_11,
#line 1507 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_12,
#line 1507 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_13,
#line 1507 "lco.m"
  MR_Word transform_hlds__lco__Case0_14,
#line 1507 "lco.m"
  MR_Word * transform_hlds__lco__Case_15,
#line 1507 "lco.m"
  MR_Word * transform_hlds__lco__Changed_16,
#line 1507 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22,
#line 1507 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_23);

#line 1488 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_conj_9_p_0(
#line 1488 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_1,
#line 1488 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_2,
#line 1488 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_3,
#line 1488 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_4,
#line 1488 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 1488 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6,
#line 1488 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__7_7,
#line 1488 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_8,
#line 1488 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_9);

#line 1414 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_2(
#line 1414 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1414 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1414 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 1414 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 1414 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 1414 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5);

#line 1405 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_1(
#line 1405 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1405 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1405 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 1405 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 1405 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 1405 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5);

#line 1384 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0(
#line 1384 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_10,
#line 1384 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_11,
#line 1384 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_12,
#line 1384 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_13,
#line 1384 "lco.m"
  MR_Word transform_hlds__lco__Goal0_14,
#line 1384 "lco.m"
  MR_Word * transform_hlds__lco__Goal_15,
#line 1384 "lco.m"
  MR_Word * transform_hlds__lco__Changed_16,
#line 1384 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_71,
#line 1384 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_72);

#line 1323 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__make_addr_vars_12_p_0_1(
#line 1323 "lco.m"
  MR_Box transform_hlds__lco__closure_arg);

#line 1316 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_addr_vars_12_p_0(
#line 1316 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 1316 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 1316 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__3_3,
#line 1316 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__4_4,
#line 1316 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 1316 "lco.m"
  MR_Integer transform_hlds__lco__NextOutArgNum_6,
#line 1316 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_7,
#line 1316 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__8_8,
#line 1316 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VarSet_0_9,
#line 1316 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VarSet_10,
#line 1316 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11,
#line 1316 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VarTypes_12);

#line 1271 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__occurs_once_2_p_0(
#line 1271 "lco.m"
  MR_Word transform_hlds__lco__Bag_3,
#line 1271 "lco.m"
  MR_Word transform_hlds__lco__Var_4);

#line 1262 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_mode_2_p_0(
#line 1262 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_3,
#line 1262 "lco.m"
  MR_Word transform_hlds__lco__UniMode_4);

#line 1252 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__bound_inst_with_free_arg_2_f_0(
#line 1252 "lco.m"
  MR_Word transform_hlds__lco__ConsId_4,
#line 1252 "lco.m"
  MR_Integer transform_hlds__lco__FreeArg_5);

#line 1217 "lco.m"
static void MR_CALL 
transform_hlds__lco__update_construct_args_14_p_0(
#line 1217 "lco.m"
  MR_Word transform_hlds__lco__Subst_1,
#line 1217 "lco.m"
  MR_Word transform_hlds__lco__HighLevelData_2,
#line 1217 "lco.m"
  MR_Word transform_hlds__lco__VarType_3,
#line 1217 "lco.m"
  MR_Word transform_hlds__lco__ConsId_4,
#line 1217 "lco.m"
  MR_Integer transform_hlds__lco__ArgNum_5,
#line 1217 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__6_6,
#line 1217 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__7_7,
#line 1217 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__8_8,
#line 1217 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_InstMapDelta_0_9,
#line 1217 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_InstMapDelta_10,
#line 1217 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_0_11,
#line 1217 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_12,
#line 1217 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VarTypes_0_13,
#line 1217 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VarTypes_14);

#line 1197 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__update_construct_8_p_0_1(
#line 1197 "lco.m"
  MR_Box transform_hlds__lco__closure_arg);

#line 1151 "lco.m"
static void MR_CALL 
transform_hlds__lco__update_construct_8_p_0(
#line 1151 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_9,
#line 1151 "lco.m"
  MR_Word transform_hlds__lco__Subst_10,
#line 1151 "lco.m"
  MR_Word transform_hlds__lco__Goal0_11,
#line 1151 "lco.m"
  MR_Word * transform_hlds__lco__Goal_12,
#line 1151 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_AddrVarFieldIds_0_59,
#line 1151 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_AddrVarFieldIds_60,
#line 1151 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_61,
#line 1151 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_62);

#line 1136 "lco.m"
static void MR_CALL 
transform_hlds__lco__create_variant_name_4_p_0(
#line 1136 "lco.m"
  MR_Word transform_hlds__lco__PredOrFunc_5,
#line 1136 "lco.m"
  MR_Integer transform_hlds__lco__VariantNumber_6,
#line 1136 "lco.m"
  MR_String transform_hlds__lco__OrigName_7,
#line 1136 "lco.m"
  MR_String * transform_hlds__lco__VariantName_8);

#line 1099 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__match_existing_variant_3_p_0(
#line 1099 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 1099 "lco.m"
  MR_Word transform_hlds__lco__AddrArgNums_6,
#line 1099 "lco.m"
  MR_Word * transform_hlds__lco__Variant_7);

#line 1059 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__ensure_variant_exists_8_p_0(
#line 1059 "lco.m"
  MR_Word transform_hlds__lco__PredId_9,
#line 1059 "lco.m"
  MR_Integer transform_hlds__lco__ProcId_10,
#line 1059 "lco.m"
  MR_Word transform_hlds__lco__AddrArgNums_11,
#line 1059 "lco.m"
  MR_Word * transform_hlds__lco__VariantPredProcId_12,
#line 1059 "lco.m"
  MR_Word transform_hlds__lco__SymName_13,
#line 1059 "lco.m"
  MR_Word * transform_hlds__lco__VariantSymName_14,
#line 1059 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_30,
#line 1059 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_31);

#line 1053 "lco.m"
static MR_Box MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0_2(
#line 1053 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1053 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1);

#line 1050 "lco.m"
static MR_Box MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0_1(
#line 1050 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1050 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1);

#line 1044 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0(
#line 1044 "lco.m"
  MR_Word transform_hlds__lco__HighLevelData_5,
#line 1044 "lco.m"
  MR_Word transform_hlds__lco__AddrVarFieldIds_6,
#line 1044 "lco.m"
  MR_Word transform_hlds__lco__Mismatches_7,
#line 1044 "lco.m"
  MR_Word * transform_hlds__lco__VariantArgs_8);

#line 1035 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__make_ref_type_1_f_0(
#line 1035 "lco.m"
  MR_Word transform_hlds__lco__FieldType_3);

#line 1012 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_address_var_5_p_0(
#line 1012 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_6,
#line 1012 "lco.m"
  MR_Word transform_hlds__lco__Var_7,
#line 1012 "lco.m"
  MR_Word * transform_hlds__lco__AddrVar_8,
#line 1012 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_19,
#line 1012 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_20);

#line 953 "lco.m"
static void MR_CALL 
transform_hlds__lco__find_args_to_pass_by_addr_10_p_0(
#line 953 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 953 "lco.m"
  MR_Word transform_hlds__lco__UnifyInputVars_2,
#line 953 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 953 "lco.m"
  MR_Integer transform_hlds__lco__ArgNum_4,
#line 953 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__5_5,
#line 953 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6,
#line 953 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Subst_0_7,
#line 953 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Subst_8,
#line 953 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_9,
#line 953 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_10);

#line 925 "lco.m"
static void MR_CALL 
transform_hlds__lco__classify_proc_call_args_7_p_0(
#line 925 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 925 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 925 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 925 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__4_4,
#line 925 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__5_5,
#line 925 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6,
#line 925 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__7_7);

#line 892 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__update_call_args_6_p_0_1(
#line 892 "lco.m"
  MR_Box transform_hlds__lco__closure_arg);

#line 888 "lco.m"
static void MR_CALL 
transform_hlds__lco__update_call_args_6_p_0(
#line 888 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 888 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 888 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 888 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__4_4,
#line 888 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 888 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6);

#line 848 "lco.m"
static void MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0_2(
#line 848 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 848 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 848 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 848 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_3,
#line 848 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_4,
#line 848 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_5,
#line 848 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_6);

#line 846 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0_1(
#line 846 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 846 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1);

#line 806 "lco.m"
static void MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0(
#line 806 "lco.m"
  MR_Word transform_hlds__lco__CallGoal_9,
#line 806 "lco.m"
  MR_Word transform_hlds__lco__CallOutArgs_10,
#line 806 "lco.m"
  MR_Word transform_hlds__lco__UnifyGoals_11,
#line 806 "lco.m"
  MR_Word transform_hlds__lco__UnifyInputVars_12,
#line 806 "lco.m"
  MR_Word * transform_hlds__lco__MaybeGoals_13,
#line 806 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_52,
#line 806 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_53,
#line 806 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_15);

#line 770 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_unification_5_p_0_1(
#line 770 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 770 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1);

#line 756 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_unification_5_p_0(
#line 756 "lco.m"
  MR_Word transform_hlds__lco__Goal_6,
#line 756 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_0_30,
#line 756 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_31,
#line 756 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_32,
#line 756 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_33);

#line 734 "lco.m"
static void MR_CALL 
transform_hlds__lco__partition_dependent_goal_9_p_0(
#line 734 "lco.m"
  MR_Word transform_hlds__lco___Info_10,
#line 734 "lco.m"
  MR_Word transform_hlds__lco___ConstInfo_11,
#line 734 "lco.m"
  MR_Word transform_hlds__lco__Goal_12,
#line 734 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22,
#line 734 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23,
#line 734 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24,
#line 734 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25,
#line 734 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26,
#line 734 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_DelayForVars_27);

#line 699 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__potentially_moveable_goal_1_p_0(
#line 699 "lco.m"
  MR_Word transform_hlds__lco__Goal_2);

#line 631 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__divide_rev_conj_8_p_0(
#line 631 "lco.m"
  MR_Word transform_hlds__lco__Info_9,
#line 631 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_10,
#line 631 "lco.m"
  MR_Word transform_hlds__lco__RevGoals0_11,
#line 631 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_AfterGoals_0_19,
#line 631 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_AfterGoals_20,
#line 631 "lco.m"
  MR_Word * transform_hlds__lco__RecGoal_13,
#line 631 "lco.m"
  MR_Word * transform_hlds__lco__RecOutArgs_14,
#line 631 "lco.m"
  MR_Word * transform_hlds__lco__RevBeforeGoals_15);

#line 601 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0_2(
#line 601 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 601 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 601 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 601 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 601 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 601 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5);

#line 597 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0_1(
#line 597 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 597 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 597 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 597 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 597 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 597 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5,
#line 597 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_6,
#line 597 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_7);

#line 587 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0(
#line 587 "lco.m"
  MR_Word transform_hlds__lco__Goals0_6,
#line 587 "lco.m"
  MR_Word * transform_hlds__lco__MaybeGoals_7,
#line 587 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_26,
#line 587 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_27,
#line 587 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_9);

#line 562 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_cases_5_p_0(
#line 562 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 562 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__2_2,
#line 562 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_3,
#line 562 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_4,
#line 562 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5);

#line 474 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_goal_5_p_0(
#line 474 "lco.m"
  MR_Word transform_hlds__lco__Goal0_6,
#line 474 "lco.m"
  MR_Word * transform_hlds__lco__Goal_7,
#line 474 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_60,
#line 474 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_61,
#line 474 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_9);

#line 376 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_proc_11_p_0(
#line 376 "lco.m"
  MR_Word transform_hlds__lco__LowerSCCVariants_12,
#line 376 "lco.m"
  MR_Word transform_hlds__lco__SCC_13,
#line 376 "lco.m"
  MR_Word transform_hlds__lco__CurProc_14,
#line 376 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_49,
#line 376 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_50,
#line 376 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_51,
#line 376 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_52,
#line 376 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_53,
#line 376 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_54,
#line 376 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Permitted_0_55,
#line 376 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Permitted_56);

#line 372 "lco.m"
static MR_Integer MR_CALL 
transform_hlds__lco__va_pos_1_f_0(
#line 372 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1);

#line 359 "lco.m"
static MR_Box MR_CALL 
transform_hlds__lco__lco_process_proc_variant_4_p_0_1(
#line 359 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 359 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1);

#line 328 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_process_proc_variant_4_p_0(
#line 328 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_5,
#line 328 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 328 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32,
#line 328 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_33);

#line 315 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_process_proc_update_3_p_0(
#line 315 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 315 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_15,
#line 315 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_16);

#line 307 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_3(
#line 307 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 307 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 307 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 307 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3);

#line 306 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_2(
#line 306 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 306 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 306 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 306 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3);

#line 297 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_1(
#line 297 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 297 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 297 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 297 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 297 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 297 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5,
#line 297 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_6,
#line 297 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_7,
#line 297 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_8,
#line 297 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_9);

#line 291 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0(
#line 291 "lco.m"
  MR_Word transform_hlds__lco__SCC_6,
#line 291 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VariantMap_0_17,
#line 291 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VariantMap_18,
#line 291 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_19,
#line 291 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_20);

#line 289 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_modulo_constructors_2_p_0_1(
#line 289 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 289 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 289 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 289 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 289 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 289 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5);


static /* final */ const MR_Box transform_hlds__lco_scalar_common_1[13][2];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_2[13][3];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_3[2][8];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_4[1][14];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_5[2][6];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_6[2][7];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_7[8][5];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_8[3][12];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_9[1][11];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_10[1][9];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_11[1][1];




static /* final */ const MR_Box transform_hlds__lco_scalar_common_1[13][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__bag__bag__type_ctor_info_bag_1)),
    ((MR_Box) (&transform_hlds__lco_scalar_common_1[4]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__lco_scalar_common_1[4]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__lco_scalar_common_2[6]))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__lco_scalar_common_11[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box transform_hlds__lco_scalar_common_2[13][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__lco_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__lco_scalar_common_1[4]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__lco_scalar_common_1[4])),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__lco_scalar_common_1[4])),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__lco_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__lco__lco_modulo_constructors_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__lco_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__lco__lco_scc_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__lco_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__lco__lco_process_proc_variant_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__lco_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__lco__lco_in_conj_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__lco_scalar_common_7[4])),
    ((MR_Box) (transform_hlds__lco__make_variant_args_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__lco_scalar_common_7[7])),
    ((MR_Box) (transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__lco_scalar_common_3[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__lco__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0)),
    ((MR_Box) (&transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__lco__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__lco__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_info_0)),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__lco_scalar_common_4[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0)),
    ((MR_Box) (&transform_hlds__lco__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0)),
    ((MR_Box) (&transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0)),
    ((MR_Box) (&transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_is_permitted_on_scc_0)),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_is_permitted_on_scc_0))
  },
};

static /* final */ const MR_Box transform_hlds__lco_scalar_common_5[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__lco__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__lco__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_field_id_0)),
    ((MR_Box) (&transform_hlds__lco__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0))
  },
};

static /* final */ const MR_Box transform_hlds__lco_scalar_common_6[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0)),
    ((MR_Box) (&transform_hlds__lco__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__lco__type_ctor_info_variant_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&transform_hlds__lco__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_store_target_0))
  },
};

static /* final */ const MR_Box transform_hlds__lco_scalar_common_7[8][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__lco__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__lco__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__lco__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__lco__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__lco__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__lco__list__pti_list_1__plain_transform_hlds__lco__type_ctor_info_variant_arg_0)),
    ((MR_Box) (&transform_hlds__lco__list__pti_list_1__plain_transform_hlds__lco__type_ctor_info_variant_arg_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__lco__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_store_target_0)),
    ((MR_Box) (&transform_hlds__lco__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__lco_scalar_common_8[3][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_info_0)),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_const_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__lco__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__lco__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__lco__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__lco__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__lco__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__lco__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0)),
    ((MR_Box) (&transform_hlds__lco__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0)),
    ((MR_Box) (&transform_hlds__lco__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__lco_scalar_common_9[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_const_info_0)),
    ((MR_Box) (&transform_hlds__lco__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__lco__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_field_id_0)),
    ((MR_Box) (&transform_hlds__lco__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_field_id_0)),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_info_0)),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__lco_scalar_common_10[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&transform_hlds__lco__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_store_target_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__lco_scalar_common_11[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "lcmc"))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 2143 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 2151 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0
  }
};

#line 2159 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0
  }
};

#line 2168 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 2177 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 2186 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__lco__type_ctor_info_variant_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0
  }
};

#line 2195 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 2203 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2211 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2219 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2227 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2235 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2244 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_field_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0
  }
};

#line 2253 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2261 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2270 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_transform_hlds__lco__type_ctor_info_variant_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0
  }
};

#line 2278 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0
  }
};

#line 2287 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0
  }
};

#line 2295 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_store_target_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0
  }
};

#line 2304 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_0 = {
  (MR_String) "do_not_allow_float_addr",
  (MR_Integer) 0
};

#line 2310 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_1 = {
  (MR_String) "allow_float_addr",
  (MR_Integer) 1
};

#line 2316 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_value_ordered_allow_float_addr_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_0,
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_1
};

#line 2322 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_allow_float_addr_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_1,
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_0
};

#line 2328 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_allow_float_addr_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2334 "transform_hlds.lco.c"
const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_allow_float_addr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__lco____Unify____allow_float_addr_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____allow_float_addr_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "allow_float_addr",
  {
    transform_hlds__lco__transform_hlds__lco__enum_name_ordered_allow_float_addr_0
  },
  {
    transform_hlds__lco__transform_hlds__lco__enum_value_ordered_allow_float_addr_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__lco__transform_hlds__lco__functor_number_map_allow_float_addr_0
};

#line 2355 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_field_id_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2362 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_field_id_0_0[3] = {
  (MR_String) "fi_type",
  (MR_String) "fi_cons_id",
  (MR_String) "fi_arg"
};

#line 2369 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_field_id_0_0 = {
  (MR_String) "field_id",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__lco__transform_hlds__lco__field_types_field_id_0_0,
  transform_hlds__lco__transform_hlds__lco__field_names_field_id_0_0,
  NULL,
  NULL
};

#line 2384 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_field_id_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_field_id_0_0
};

#line 2389 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_field_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_field_id_0_0
  }
};

#line 2398 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_field_id_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_field_id_0_0
};

#line 2403 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_field_id_0[1] = {
  (MR_Integer) 0
};

#line 2408 "transform_hlds.lco.c"
const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lco____Unify____field_id_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____field_id_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "field_id",
  {
    transform_hlds__lco__transform_hlds__lco__du_name_ordered_field_id_0
  },
  {
    transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_field_id_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__lco__transform_hlds__lco__functor_number_map_field_id_0
};

#line 2429 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0
  }
};

#line 2438 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 2446 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2454 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_lco_const_info_0_0[8] = {
  (MR_PseudoTypeInfo) &transform_hlds__lco__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 2466 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_lco_const_info_0_0[8] = {
  (MR_String) "lci_lower_scc_variants",
  (MR_String) "lci_cur_scc",
  (MR_String) "lci_cur_proc_id",
  (MR_String) "lci_cur_proc_pred",
  (MR_String) "lci_cur_proc_proc",
  (MR_String) "lci_cur_proc_outputs",
  (MR_String) "lci_cur_proc_detism",
  (MR_String) "lci_highlevel_data"
};

#line 2478 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_const_info_0_0 = {
  (MR_String) "lco_const_info",
  (MR_Integer) 8,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__lco__transform_hlds__lco__field_types_lco_const_info_0_0,
  transform_hlds__lco__transform_hlds__lco__field_names_lco_const_info_0_0,
  NULL,
  NULL
};

#line 2493 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_const_info_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_const_info_0_0
};

#line 2498 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_const_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_const_info_0_0
  }
};

#line 2507 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_lco_const_info_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_const_info_0_0
};

#line 2512 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_const_info_0[1] = {
  (MR_Integer) 0
};

#line 2517 "transform_hlds.lco.c"
const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_const_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lco____Unify____lco_const_info_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____lco_const_info_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "lco_const_info",
  {
    transform_hlds__lco__transform_hlds__lco__du_name_ordered_lco_const_info_0
  },
  {
    transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_const_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_const_info_0
};

#line 2538 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2546 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2555 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_lco_info_0_0[7] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_allow_float_addr_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_is_permitted_on_scc_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_proc_changed_0
};

#line 2566 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_lco_info_0_0[7] = {
  (MR_String) "lco_module_info",
  (MR_String) "lco_cur_scc_variants",
  (MR_String) "lco_var_set",
  (MR_String) "lco_var_types",
  (MR_String) "lco_allow_float_addr",
  (MR_String) "lco_permitted",
  (MR_String) "lco_changed"
};

#line 2577 "transform_hlds.lco.c"
static const MR_DuArgLocn transform_hlds__lco__transform_hlds__lco__field_locns_lco_info_0_0[7] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 2,
    (MR_Integer) 1
  }
};

#line 2616 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_info_0_0 = {
  (MR_String) "lco_info",
  (MR_Integer) 7,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__lco__transform_hlds__lco__field_types_lco_info_0_0,
  transform_hlds__lco__transform_hlds__lco__field_names_lco_info_0_0,
  transform_hlds__lco__transform_hlds__lco__field_locns_lco_info_0_0,
  NULL
};

#line 2631 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_info_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_info_0_0
};

#line 2636 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_info_0_0
  }
};

#line 2645 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_lco_info_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_info_0_0
};

#line 2650 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_info_0[1] = {
  (MR_Integer) 0
};

#line 2655 "transform_hlds.lco.c"
const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lco____Unify____lco_info_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____lco_info_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "lco_info",
  {
    transform_hlds__lco__transform_hlds__lco__du_name_ordered_lco_info_0
  },
  {
    transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_info_0
};

#line 2676 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_0 = {
  (MR_String) "lco_is_not_permitted_on_scc",
  (MR_Integer) 0
};

#line 2682 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_1 = {
  (MR_String) "lco_is_permitted_on_scc",
  (MR_Integer) 1
};

#line 2688 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_value_ordered_lco_is_permitted_on_scc_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_0,
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_1
};

#line 2694 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_lco_is_permitted_on_scc_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_0,
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_1
};

#line 2700 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_is_permitted_on_scc_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2706 "transform_hlds.lco.c"
const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_is_permitted_on_scc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "lco_is_permitted_on_scc",
  {
    transform_hlds__lco__transform_hlds__lco__enum_name_ordered_lco_is_permitted_on_scc_0
  },
  {
    transform_hlds__lco__transform_hlds__lco__enum_value_ordered_lco_is_permitted_on_scc_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_is_permitted_on_scc_0
};

#line 2727 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_0 = {
  (MR_String) "proc_not_changed",
  (MR_Integer) 0
};

#line 2733 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_1 = {
  (MR_String) "proc_changed",
  (MR_Integer) 1
};

#line 2739 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_value_ordered_proc_changed_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_0,
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_1
};

#line 2745 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_proc_changed_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_1,
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_0
};

#line 2751 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_proc_changed_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2757 "transform_hlds.lco.c"
const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_proc_changed_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__lco____Unify____proc_changed_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____proc_changed_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "proc_changed",
  {
    transform_hlds__lco__transform_hlds__lco__enum_name_ordered_proc_changed_0
  },
  {
    transform_hlds__lco__transform_hlds__lco__enum_value_ordered_proc_changed_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__lco__transform_hlds__lco__functor_number_map_proc_changed_0
};

#line 2778 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__maybe__ti_maybe_1transform_hlds__lco__type_ctor_info_field_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0
  }
};

#line 2786 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_store_target_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__maybe__ti_maybe_1transform_hlds__lco__type_ctor_info_field_id_0
};

#line 2792 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_store_target_0_0 = {
  (MR_String) "store_target",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__lco__transform_hlds__lco__field_types_store_target_0_0,
  NULL,
  NULL,
  NULL
};

#line 2807 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_store_target_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_store_target_0_0
};

#line 2812 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_store_target_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_store_target_0_0
  }
};

#line 2821 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_store_target_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_store_target_0_0
};

#line 2826 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_store_target_0[1] = {
  (MR_Integer) 0
};

#line 2831 "transform_hlds.lco.c"
const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lco____Unify____store_target_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____store_target_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "store_target",
  {
    transform_hlds__lco__transform_hlds__lco__du_name_ordered_store_target_0
  },
  {
    transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_store_target_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__lco__transform_hlds__lco__functor_number_map_store_target_0
};

#line 2852 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__lco__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0
  }
};

#line 2860 "transform_hlds.lco.c"
const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_var_to_target_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__lco____Unify____var_to_target_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____var_to_target_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "var_to_target",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2881 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_variant_arg_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__maybe__ti_maybe_1transform_hlds__lco__type_ctor_info_field_id_0
};

#line 2887 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_variant_arg_0_0[2] = {
  (MR_String) "va_pos",
  (MR_String) "va_field"
};

#line 2893 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_arg_0_0 = {
  (MR_String) "variant_arg",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__lco__transform_hlds__lco__field_types_variant_arg_0_0,
  transform_hlds__lco__transform_hlds__lco__field_names_variant_arg_0_0,
  NULL,
  NULL
};

#line 2908 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_arg_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_arg_0_0
};

#line 2913 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_arg_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_arg_0_0
  }
};

#line 2922 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_arg_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_arg_0_0
};

#line 2927 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_arg_0[1] = {
  (MR_Integer) 0
};

#line 2932 "transform_hlds.lco.c"
const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lco____Unify____variant_arg_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____variant_arg_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "variant_arg",
  {
    transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_arg_0
  },
  {
    transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_arg_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_arg_0
};

#line 2953 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0
  }
};

#line 2961 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_variant_id_0_0[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_arg_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2968 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_id_0_0 = {
  (MR_String) "variant_id",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__lco__transform_hlds__lco__field_types_variant_id_0_0,
  NULL,
  NULL,
  NULL
};

#line 2983 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_id_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_id_0_0
};

#line 2988 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_id_0_0
  }
};

#line 2997 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_id_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_id_0_0
};

#line 3002 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_id_0[1] = {
  (MR_Integer) 0
};

#line 3007 "transform_hlds.lco.c"
const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lco____Unify____variant_id_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____variant_id_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "variant_id",
  {
    transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_id_0
  },
  {
    transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_id_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_id_0
};

#line 3028 "transform_hlds.lco.c"
const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__lco____Unify____variant_map_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____variant_map_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "variant_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3049 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____allow_float_addr_0_0_10001(
#line 3052 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3054 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3056 "transform_hlds.lco.c"
{
#line 3058 "transform_hlds.lco.c"
  {
#line 3060 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3063 "transform_hlds.lco.c"
    {
#line 3065 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____allow_float_addr_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3068 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3070 "transform_hlds.lco.c"
  }
#line 3072 "transform_hlds.lco.c"
}

#line 3075 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____allow_float_addr_0_0_10001(
#line 3078 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3080 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3082 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3084 "transform_hlds.lco.c"
{
#line 3086 "transform_hlds.lco.c"
  {
#line 3088 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3091 "transform_hlds.lco.c"
    {
#line 3093 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____allow_float_addr_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3096 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3098 "transform_hlds.lco.c"
  }
#line 3100 "transform_hlds.lco.c"
}

#line 3103 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____field_id_0_0_10001(
#line 3106 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3108 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3110 "transform_hlds.lco.c"
{
#line 3112 "transform_hlds.lco.c"
  {
#line 3114 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3117 "transform_hlds.lco.c"
    {
#line 3119 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____field_id_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3122 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3124 "transform_hlds.lco.c"
  }
#line 3126 "transform_hlds.lco.c"
}

#line 3129 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____field_id_0_0_10001(
#line 3132 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3134 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3136 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3138 "transform_hlds.lco.c"
{
#line 3140 "transform_hlds.lco.c"
  {
#line 3142 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3145 "transform_hlds.lco.c"
    {
#line 3147 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____field_id_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3150 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3152 "transform_hlds.lco.c"
  }
#line 3154 "transform_hlds.lco.c"
}

#line 3157 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_const_info_0_0_10001(
#line 3160 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3162 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3164 "transform_hlds.lco.c"
{
#line 3166 "transform_hlds.lco.c"
  {
#line 3168 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3171 "transform_hlds.lco.c"
    {
#line 3173 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____lco_const_info_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3176 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3178 "transform_hlds.lco.c"
  }
#line 3180 "transform_hlds.lco.c"
}

#line 3183 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____lco_const_info_0_0_10001(
#line 3186 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3188 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3190 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3192 "transform_hlds.lco.c"
{
#line 3194 "transform_hlds.lco.c"
  {
#line 3196 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3199 "transform_hlds.lco.c"
    {
#line 3201 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____lco_const_info_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3204 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3206 "transform_hlds.lco.c"
  }
#line 3208 "transform_hlds.lco.c"
}

#line 3211 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_info_0_0_10001(
#line 3214 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3216 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3218 "transform_hlds.lco.c"
{
#line 3220 "transform_hlds.lco.c"
  {
#line 3222 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3225 "transform_hlds.lco.c"
    {
#line 3227 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____lco_info_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3230 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3232 "transform_hlds.lco.c"
  }
#line 3234 "transform_hlds.lco.c"
}

#line 3237 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____lco_info_0_0_10001(
#line 3240 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3242 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3244 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3246 "transform_hlds.lco.c"
{
#line 3248 "transform_hlds.lco.c"
  {
#line 3250 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3253 "transform_hlds.lco.c"
    {
#line 3255 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____lco_info_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3258 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3260 "transform_hlds.lco.c"
  }
#line 3262 "transform_hlds.lco.c"
}

#line 3265 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0_10001(
#line 3268 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3270 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3272 "transform_hlds.lco.c"
{
#line 3274 "transform_hlds.lco.c"
  {
#line 3276 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3279 "transform_hlds.lco.c"
    {
#line 3281 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3284 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3286 "transform_hlds.lco.c"
  }
#line 3288 "transform_hlds.lco.c"
}

#line 3291 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0_10001(
#line 3294 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3296 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3298 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3300 "transform_hlds.lco.c"
{
#line 3302 "transform_hlds.lco.c"
  {
#line 3304 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3307 "transform_hlds.lco.c"
    {
#line 3309 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3312 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3314 "transform_hlds.lco.c"
  }
#line 3316 "transform_hlds.lco.c"
}

#line 3319 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____proc_changed_0_0_10001(
#line 3322 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3324 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3326 "transform_hlds.lco.c"
{
#line 3328 "transform_hlds.lco.c"
  {
#line 3330 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3333 "transform_hlds.lco.c"
    {
#line 3335 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____proc_changed_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3338 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3340 "transform_hlds.lco.c"
  }
#line 3342 "transform_hlds.lco.c"
}

#line 3345 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____proc_changed_0_0_10001(
#line 3348 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3350 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3352 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3354 "transform_hlds.lco.c"
{
#line 3356 "transform_hlds.lco.c"
  {
#line 3358 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3361 "transform_hlds.lco.c"
    {
#line 3363 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____proc_changed_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3366 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3368 "transform_hlds.lco.c"
  }
#line 3370 "transform_hlds.lco.c"
}

#line 3373 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____store_target_0_0_10001(
#line 3376 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3378 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3380 "transform_hlds.lco.c"
{
#line 3382 "transform_hlds.lco.c"
  {
#line 3384 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3387 "transform_hlds.lco.c"
    {
#line 3389 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____store_target_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3392 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3394 "transform_hlds.lco.c"
  }
#line 3396 "transform_hlds.lco.c"
}

#line 3399 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____store_target_0_0_10001(
#line 3402 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3404 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3406 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3408 "transform_hlds.lco.c"
{
#line 3410 "transform_hlds.lco.c"
  {
#line 3412 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3415 "transform_hlds.lco.c"
    {
#line 3417 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____store_target_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3420 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3422 "transform_hlds.lco.c"
  }
#line 3424 "transform_hlds.lco.c"
}

#line 3427 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____var_to_target_0_0_10001(
#line 3430 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3432 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3434 "transform_hlds.lco.c"
{
#line 3436 "transform_hlds.lco.c"
  {
#line 3438 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3441 "transform_hlds.lco.c"
    {
#line 3443 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____var_to_target_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3446 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3448 "transform_hlds.lco.c"
  }
#line 3450 "transform_hlds.lco.c"
}

#line 3453 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____var_to_target_0_0_10001(
#line 3456 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3458 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3460 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3462 "transform_hlds.lco.c"
{
#line 3464 "transform_hlds.lco.c"
  {
#line 3466 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3469 "transform_hlds.lco.c"
    {
#line 3471 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____var_to_target_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3474 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3476 "transform_hlds.lco.c"
  }
#line 3478 "transform_hlds.lco.c"
}

#line 3481 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_arg_0_0_10001(
#line 3484 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3486 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3488 "transform_hlds.lco.c"
{
#line 3490 "transform_hlds.lco.c"
  {
#line 3492 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3495 "transform_hlds.lco.c"
    {
#line 3497 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____variant_arg_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3500 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3502 "transform_hlds.lco.c"
  }
#line 3504 "transform_hlds.lco.c"
}

#line 3507 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____variant_arg_0_0_10001(
#line 3510 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3512 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3514 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3516 "transform_hlds.lco.c"
{
#line 3518 "transform_hlds.lco.c"
  {
#line 3520 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3523 "transform_hlds.lco.c"
    {
#line 3525 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____variant_arg_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3528 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3530 "transform_hlds.lco.c"
  }
#line 3532 "transform_hlds.lco.c"
}

#line 3535 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_id_0_0_10001(
#line 3538 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3540 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3542 "transform_hlds.lco.c"
{
#line 3544 "transform_hlds.lco.c"
  {
#line 3546 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3549 "transform_hlds.lco.c"
    {
#line 3551 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____variant_id_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3554 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3556 "transform_hlds.lco.c"
  }
#line 3558 "transform_hlds.lco.c"
}

#line 3561 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____variant_id_0_0_10001(
#line 3564 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3566 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3568 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3570 "transform_hlds.lco.c"
{
#line 3572 "transform_hlds.lco.c"
  {
#line 3574 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3577 "transform_hlds.lco.c"
    {
#line 3579 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____variant_id_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3582 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3584 "transform_hlds.lco.c"
  }
#line 3586 "transform_hlds.lco.c"
}

#line 3589 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_map_0_0_10001(
#line 3592 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3594 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3596 "transform_hlds.lco.c"
{
#line 3598 "transform_hlds.lco.c"
  {
#line 3600 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3603 "transform_hlds.lco.c"
    {
#line 3605 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____variant_map_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3608 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3610 "transform_hlds.lco.c"
  }
#line 3612 "transform_hlds.lco.c"
}

#line 3615 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____variant_map_0_0_10001(
#line 3618 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3620 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3622 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3624 "transform_hlds.lco.c"
{
#line 3626 "transform_hlds.lco.c"
  {
#line 3628 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3631 "transform_hlds.lco.c"
    {
#line 3633 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____variant_map_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3636 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3638 "transform_hlds.lco.c"
  }
#line 3640 "transform_hlds.lco.c"
}

#line 734 "lco.m"
static void MR_CALL 
transform_hlds__lco__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_116_105_116_105_111_110_95_100_101_112_101_110_100_101_110_116_95_103_111_97_108_95_95_91_49_44_32_50_93_95_48_9_p_0(
#line 734 "lco.m"
  MR_Word transform_hlds__lco__Goal_12,
#line 734 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22,
#line 734 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23,
#line 734 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24,
#line 734 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25,
#line 734 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26,
#line 734 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_DelayForVars_27)
#line 734 "lco.m"
{
#line 740 "lco.m"
  {
#line 740 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 740 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_31_31;
#line 740 "lco.m"
    MR_Word transform_hlds__lco__GoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_12, (MR_Integer) 1)));
#line 740 "lco.m"
    MR_Word transform_hlds__lco__GoalVars_18;
#line 740 "lco.m"
    MR_Word transform_hlds__lco__Intersection_19;
#line 741 "lco.m"
    MR_Word transform_hlds__lco___GoalExpr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_12, (MR_Integer) 0)));

#line 742 "lco.m"
    {
#line 742 "lco.m"
      hlds__goal_util__goal_vars_2_p_0(transform_hlds__lco__Goal_12, &transform_hlds__lco__GoalVars_18);
    }
#line 3682 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 743 "lco.m"
    {
#line 743 "lco.m"
      parse_tree__set_of_var__intersect_3_p_0(transform_hlds__lco__TypeCtorInfo_31_31, transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26, transform_hlds__lco__GoalVars_18, &transform_hlds__lco__Intersection_19);
    }
#line 744 "lco.m"
    {
#line 744 "lco.m"
      transform_hlds__lco__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__lco__TypeCtorInfo_31_31, transform_hlds__lco__Intersection_19);
    }
#line 746 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 745 "lco.m"
      {
#line 745 "lco.m"
        {
#line 745 "lco.m"
          mercury__list__cons_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (transform_hlds__lco__Goal_12)), transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24, transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25);
        }
#line 745 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_DelayForVars_27 = transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26;
#line 745 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23 = transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22;
#line 745 "lco.m"
      }
#line 746 "lco.m"
    else
#line 747 "lco.m"
      {
#line 747 "lco.m"
        MR_Word transform_hlds__lco__InstmapDelta_20;
#line 747 "lco.m"
        MR_Word transform_hlds__lco__ChangedVars_21;

#line 747 "lco.m"
        {
#line 747 "lco.m"
          mercury__list__cons_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (transform_hlds__lco__Goal_12)), transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22, transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23);
        }
#line 749 "lco.m"
        {
#line 749 "lco.m"
          transform_hlds__lco__InstmapDelta_20 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__lco__GoalInfo_17);
        }
#line 750 "lco.m"
        {
#line 750 "lco.m"
          hlds__instmap__instmap_delta_changed_vars_2_p_0(transform_hlds__lco__InstmapDelta_20, &transform_hlds__lco__ChangedVars_21);
        }
#line 751 "lco.m"
        {
#line 751 "lco.m"
          parse_tree__set_of_var__union_3_p_0(transform_hlds__lco__TypeCtorInfo_31_31, transform_hlds__lco__ChangedVars_21, transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26, transform_hlds__lco__STATE_VARIABLE_DelayForVars_27);
        }
#line 751 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25 = transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24;
#line 747 "lco.m"
      }
#line 740 "lco.m"
  }
#line 734 "lco.m"
}

#line 1593 "lco.m"
static void MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__lco_transform_variant_plain_call__1593__1_2_p_0(
#line 1593 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_69,
#line 1593 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__2_70)
#line 1593 "lco.m"
{
#line 1593 "lco.m"
  {
#line 1593 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1593 "lco.m"
    MR_Box transform_hlds__lco__conv0_HeadVar__2_70;

#line 1593 "lco.m"
    {
#line 1593 "lco.m"
      mercury__pair__fst_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[4], (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0, transform_hlds__lco__HeadVar__1_69, &transform_hlds__lco__conv0_HeadVar__2_70);
    }
#line 1593 "lco.m"
    *transform_hlds__lco__HeadVar__2_70 = ((MR_Word) transform_hlds__lco__conv0_HeadVar__2_70);
#line 1593 "lco.m"
  }
#line 1593 "lco.m"
}

#line 1323 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__make_addr_vars__1323__1_2_p_0(
#line 1323 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 1323 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_25)
#line 1323 "lco.m"
{
#line 1323 "lco.m"
  {
#line 1323 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1323 "lco.m"
    {
#line 1323 "lco.m"
      return transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[7], ((MR_Box) (transform_hlds__lco__HeadVar__5_5)), ((MR_Box) (transform_hlds__lco__HeadVar__2_25)));
    }
#line 1323 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1323 "lco.m"
  }
#line 1323 "lco.m"
}

#line 1197 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__update_construct__1197__1_2_p_0(
#line 1197 "lco.m"
  MR_Word transform_hlds__lco__ConsId_23,
#line 1197 "lco.m"
  MR_Word transform_hlds__lco__RHSConsId_43)
#line 1197 "lco.m"
{
#line 1197 "lco.m"
  {
#line 1197 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1197 "lco.m"
    {
#line 1197 "lco.m"
      return transform_hlds__lco__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__lco__ConsId_23, transform_hlds__lco__RHSConsId_43);
    }
#line 1197 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1197 "lco.m"
  }
#line 1197 "lco.m"
}

#line 1053 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__IntroducedFrom__func__make_variant_args__1053__1_2_f_0(
#line 1053 "lco.m"
  MR_Word transform_hlds__lco__AddrVarFieldIds_6,
#line 1053 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_14)
#line 1053 "lco.m"
{
#line 1053 "lco.m"
  {
#line 1053 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1053 "lco.m"
    MR_Word transform_hlds__lco__HeadVar__3_15;
#line 1053 "lco.m"
    MR_Word transform_hlds__lco__FieldId_13;
#line 1053 "lco.m"
    MR_Word transform_hlds__lco__V_16_16;
#line 1053 "lco.m"
    MR_Integer transform_hlds__lco__Pos_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_14, (MR_Integer) 0)));
#line 1053 "lco.m"
    MR_Word transform_hlds__lco__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_14, (MR_Integer) 1)));
#line 1054 "lco.m"
    MR_Box transform_hlds__lco__conv0_FieldId_13;

#line 1054 "lco.m"
    {
#line 1054 "lco.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[4], (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0, transform_hlds__lco__AddrVarFieldIds_6, ((MR_Box) (transform_hlds__lco__Var_24)), &transform_hlds__lco__conv0_FieldId_13);
    }
#line 1054 "lco.m"
    transform_hlds__lco__FieldId_13 = ((MR_Word) transform_hlds__lco__conv0_FieldId_13);
#line 1053 "lco.m"
    {
#line 1053 "lco.m"
      transform_hlds__lco__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1053 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__V_16_16, 0) = ((MR_Box) (transform_hlds__lco__FieldId_13));
#line 1053 "lco.m"
    }
#line 1053 "lco.m"
    {
#line 1053 "lco.m"
      transform_hlds__lco__HeadVar__3_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1053 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_15, 0) = ((MR_Box) (transform_hlds__lco__Pos_23));
#line 1053 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_15, 1) = ((MR_Box) (transform_hlds__lco__V_16_16));
#line 1053 "lco.m"
    }
#line 1053 "lco.m"
    return transform_hlds__lco__HeadVar__3_15;
#line 1053 "lco.m"
  }
#line 1053 "lco.m"
}

#line 1050 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__IntroducedFrom__func__make_variant_args__1050__1_1_f_0(
#line 1050 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_17)
#line 1050 "lco.m"
{
#line 1050 "lco.m"
  {
#line 1050 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1050 "lco.m"
    MR_Word transform_hlds__lco__HeadVar__2_18;
#line 1050 "lco.m"
    MR_Integer transform_hlds__lco__Pos_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_17, (MR_Integer) 0)));
#line 1050 "lco.m"
    MR_Word transform_hlds__lco___Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_17, (MR_Integer) 1)));

#line 1050 "lco.m"
    {
#line 1050 "lco.m"
      transform_hlds__lco__HeadVar__2_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1050 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_18, 0) = ((MR_Box) (transform_hlds__lco__Pos_21));
#line 1050 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1050 "lco.m"
    }
#line 1050 "lco.m"
    return transform_hlds__lco__HeadVar__2_18;
#line 1050 "lco.m"
  }
#line 1050 "lco.m"
}

#line 892 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__update_call_args__892__1_2_p_0(
#line 892 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 892 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_13)
#line 892 "lco.m"
{
#line 892 "lco.m"
  {
#line 892 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 892 "lco.m"
    {
#line 892 "lco.m"
      return transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[6], ((MR_Box) (transform_hlds__lco__HeadVar__5_5)), ((MR_Box) (transform_hlds__lco__HeadVar__2_13)));
    }
#line 892 "lco.m"
    return transform_hlds__lco__succeeded;
#line 892 "lco.m"
  }
#line 892 "lco.m"
}

#line 239 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____variant_map_0_0(
#line 239 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 239 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 239 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 239 "lco.m"
{
#line 239 "lco.m"
  {
#line 239 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 239 "lco.m"
    MR_Word transform_hlds__lco__Cast_HeadVar1_4 = transform_hlds__lco__HeadVar__2_2;
#line 239 "lco.m"
    MR_Word transform_hlds__lco__Cast_HeadVar2_5 = transform_hlds__lco__HeadVar__3_3;

#line 239 "lco.m"
    {
#line 239 "lco.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[0], transform_hlds__lco__HeadVar__1_1, ((MR_Box) (transform_hlds__lco__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__lco__Cast_HeadVar2_5)));
#line 239 "lco.m"
      return;
    }
#line 239 "lco.m"
  }
#line 239 "lco.m"
}

#line 239 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_map_0_0(
#line 239 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 239 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 239 "lco.m"
{
#line 239 "lco.m"
  {
#line 239 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 239 "lco.m"
    MR_Word transform_hlds__lco__Cast_HeadVar1_3 = transform_hlds__lco__HeadVar__1_1;
#line 239 "lco.m"
    MR_Word transform_hlds__lco__Cast_HeadVar2_4 = transform_hlds__lco__HeadVar__2_2;

#line 239 "lco.m"
    {
#line 239 "lco.m"
      return transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[0], ((MR_Box) (transform_hlds__lco__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__lco__Cast_HeadVar2_4)));
    }
#line 239 "lco.m"
    return transform_hlds__lco__succeeded;
#line 239 "lco.m"
  }
#line 239 "lco.m"
}

#line 211 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____variant_id_0_0(
#line 211 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 211 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 211 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 211 "lco.m"
{
#line 211 "lco.m"
  {
#line 211 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 211 "lco.m"
    MR_Integer transform_hlds__lco__CastX_12 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 211 "lco.m"
    MR_Integer transform_hlds__lco__CastY_13 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 211 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_12 == transform_hlds__lco__CastY_13);
#line 211 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 4032 "transform_hlds.lco.c"
      *transform_hlds__lco__HeadVar__1_1 = (MR_Integer) 0;
#line 211 "lco.m"
    else
#line 211 "lco.m"
      {
#line 211 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 211 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 211 "lco.m"
        MR_String transform_hlds__lco__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));
#line 211 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
#line 211 "lco.m"
        MR_Word transform_hlds__lco__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 211 "lco.m"
        MR_String transform_hlds__lco__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 2)));
#line 211 "lco.m"
        MR_Word transform_hlds__lco__V_10_10;

#line 211 "lco.m"
        {
#line 211 "lco.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[7], &transform_hlds__lco__V_10_10, ((MR_Box) (transform_hlds__lco__V_4_4)), ((MR_Box) (transform_hlds__lco__V_7_7)));
        }
#line 4058 "transform_hlds.lco.c"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_10_10 == (MR_Integer) 0);
#line 211 "lco.m"
        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 211 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 211 "lco.m"
          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_10_10;
#line 211 "lco.m"
        else
#line 211 "lco.m"
          {
#line 211 "lco.m"
            MR_Word transform_hlds__lco__V_11_11;

#line 211 "lco.m"
            {
#line 211 "lco.m"
              hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__lco__V_11_11, transform_hlds__lco__V_5_5, transform_hlds__lco__V_8_8);
            }
#line 4078 "transform_hlds.lco.c"
            transform_hlds__lco__succeeded = (transform_hlds__lco__V_11_11 == (MR_Integer) 0);
#line 211 "lco.m"
            transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 211 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 211 "lco.m"
              *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_11_11;
#line 211 "lco.m"
            else
#line 211 "lco.m"
              {
#line 211 "lco.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__V_6_6, transform_hlds__lco__V_9_9);
#line 211 "lco.m"
                return;
              }
#line 211 "lco.m"
          }
#line 211 "lco.m"
      }
#line 211 "lco.m"
  }
#line 211 "lco.m"
}

#line 211 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_id_0_0(
#line 211 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 211 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 211 "lco.m"
{
#line 211 "lco.m"
  {
#line 211 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 211 "lco.m"
    MR_Integer transform_hlds__lco__CastX_9 = (MR_Integer) transform_hlds__lco__HeadVar__1_1;
#line 211 "lco.m"
    MR_Integer transform_hlds__lco__CastY_10 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;

#line 211 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_9 == transform_hlds__lco__CastY_10);
#line 211 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 211 "lco.m"
      transform_hlds__lco__succeeded = MR_TRUE;
#line 211 "lco.m"
    else
#line 211 "lco.m"
      {
#line 211 "lco.m"
        MR_Word transform_hlds__lco__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 211 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 211 "lco.m"
        MR_String transform_hlds__lco__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 2)));
#line 211 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 211 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 211 "lco.m"
        MR_String transform_hlds__lco__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));

#line 4145 "transform_hlds.lco.c"
        {
#line 4147 "transform_hlds.lco.c"
          transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[7], ((MR_Box) (transform_hlds__lco__V_3_3)), ((MR_Box) (transform_hlds__lco__V_6_6)));
        }
#line 211 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 211 "lco.m"
          {
#line 4154 "transform_hlds.lco.c"
            {
#line 4156 "transform_hlds.lco.c"
              transform_hlds__lco__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__lco__V_4_4, transform_hlds__lco__V_7_7);
            }
#line 211 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 4161 "transform_hlds.lco.c"
              transform_hlds__lco__succeeded = (strcmp(transform_hlds__lco__V_5_5, transform_hlds__lco__V_8_8) == 0);
#line 211 "lco.m"
          }
#line 211 "lco.m"
      }
#line 211 "lco.m"
    return transform_hlds__lco__succeeded;
#line 211 "lco.m"
  }
#line 211 "lco.m"
}

#line 218 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____variant_arg_0_0(
#line 218 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 218 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 218 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 218 "lco.m"
{
#line 218 "lco.m"
  {
#line 218 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 218 "lco.m"
    MR_Integer transform_hlds__lco__CastX_9 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 218 "lco.m"
    MR_Integer transform_hlds__lco__CastY_10 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 218 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_9 == transform_hlds__lco__CastY_10);
#line 218 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 4198 "transform_hlds.lco.c"
      *transform_hlds__lco__HeadVar__1_1 = (MR_Integer) 0;
#line 218 "lco.m"
    else
#line 218 "lco.m"
      {
#line 218 "lco.m"
        MR_Integer transform_hlds__lco__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 218 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 218 "lco.m"
        MR_Integer transform_hlds__lco__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
#line 218 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 218 "lco.m"
        MR_Word transform_hlds__lco__V_8_8;

#line 218 "lco.m"
        {
#line 218 "lco.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__lco__V_8_8, transform_hlds__lco__V_4_4, transform_hlds__lco__V_6_6);
        }
#line 4220 "transform_hlds.lco.c"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_8_8 == (MR_Integer) 0);
#line 218 "lco.m"
        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 218 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 218 "lco.m"
          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_8_8;
#line 218 "lco.m"
        else
#line 218 "lco.m"
          {
#line 218 "lco.m"
            {
#line 218 "lco.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[10], transform_hlds__lco__HeadVar__1_1, ((MR_Box) (transform_hlds__lco__V_5_5)), ((MR_Box) (transform_hlds__lco__V_7_7)));
#line 218 "lco.m"
              return;
            }
#line 218 "lco.m"
          }
#line 218 "lco.m"
      }
#line 218 "lco.m"
  }
#line 218 "lco.m"
}

#line 218 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_arg_0_0(
#line 218 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 218 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 218 "lco.m"
{
#line 218 "lco.m"
  {
#line 218 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 218 "lco.m"
    MR_Integer transform_hlds__lco__CastX_7 = (MR_Integer) transform_hlds__lco__HeadVar__1_1;
#line 218 "lco.m"
    MR_Integer transform_hlds__lco__CastY_8 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;

#line 218 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_7 == transform_hlds__lco__CastY_8);
#line 218 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 218 "lco.m"
      transform_hlds__lco__succeeded = MR_TRUE;
#line 218 "lco.m"
    else
#line 218 "lco.m"
      {
#line 218 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_9_9;
#line 218 "lco.m"
        MR_Integer transform_hlds__lco__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 218 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 218 "lco.m"
        MR_Integer transform_hlds__lco__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 218 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));

#line 4287 "transform_hlds.lco.c"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_3_3 == transform_hlds__lco__V_5_5);
#line 218 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 218 "lco.m"
          {
#line 4293 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_9_9 = (MR_Word) &transform_hlds__lco_scalar_common_1[10];
#line 4295 "transform_hlds.lco.c"
            {
#line 4297 "transform_hlds.lco.c"
              return transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_9_9, ((MR_Box) (transform_hlds__lco__V_4_4)), ((MR_Box) (transform_hlds__lco__V_6_6)));
            }
#line 218 "lco.m"
          }
#line 218 "lco.m"
      }
#line 218 "lco.m"
    return transform_hlds__lco__succeeded;
#line 218 "lco.m"
  }
#line 218 "lco.m"
}

#line 276 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____var_to_target_0_0(
#line 276 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 276 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 276 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 276 "lco.m"
{
#line 276 "lco.m"
  {
#line 276 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 276 "lco.m"
    MR_Word transform_hlds__lco__Cast_HeadVar1_4 = transform_hlds__lco__HeadVar__2_2;
#line 276 "lco.m"
    MR_Word transform_hlds__lco__Cast_HeadVar2_5 = transform_hlds__lco__HeadVar__3_3;

#line 276 "lco.m"
    {
#line 276 "lco.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[11], transform_hlds__lco__HeadVar__1_1, ((MR_Box) (transform_hlds__lco__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__lco__Cast_HeadVar2_5)));
#line 276 "lco.m"
      return;
    }
#line 276 "lco.m"
  }
#line 276 "lco.m"
}

#line 276 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____var_to_target_0_0(
#line 276 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 276 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 276 "lco.m"
{
#line 276 "lco.m"
  {
#line 276 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 276 "lco.m"
    MR_Word transform_hlds__lco__Cast_HeadVar1_3 = transform_hlds__lco__HeadVar__1_1;
#line 276 "lco.m"
    MR_Word transform_hlds__lco__Cast_HeadVar2_4 = transform_hlds__lco__HeadVar__2_2;

#line 276 "lco.m"
    {
#line 276 "lco.m"
      return transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[11], ((MR_Box) (transform_hlds__lco__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__lco__Cast_HeadVar2_4)));
    }
#line 276 "lco.m"
    return transform_hlds__lco__succeeded;
#line 276 "lco.m"
  }
#line 276 "lco.m"
}

#line 278 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____store_target_0_0(
#line 278 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 278 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 278 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 278 "lco.m"
{
#line 278 "lco.m"
  {
#line 278 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 278 "lco.m"
    MR_Integer transform_hlds__lco__CastX_9 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 278 "lco.m"
    MR_Integer transform_hlds__lco__CastY_10 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 278 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_9 == transform_hlds__lco__CastY_10);
#line 278 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 4397 "transform_hlds.lco.c"
      *transform_hlds__lco__HeadVar__1_1 = (MR_Integer) 0;
#line 278 "lco.m"
    else
#line 278 "lco.m"
      {
#line 278 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 278 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 278 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
#line 278 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 278 "lco.m"
        MR_Word transform_hlds__lco__V_8_8;

#line 278 "lco.m"
        {
#line 278 "lco.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[4], &transform_hlds__lco__V_8_8, ((MR_Box) (transform_hlds__lco__V_4_4)), ((MR_Box) (transform_hlds__lco__V_6_6)));
        }
#line 4419 "transform_hlds.lco.c"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_8_8 == (MR_Integer) 0);
#line 278 "lco.m"
        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 278 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 278 "lco.m"
          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_8_8;
#line 278 "lco.m"
        else
#line 278 "lco.m"
          {
#line 278 "lco.m"
            {
#line 278 "lco.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[10], transform_hlds__lco__HeadVar__1_1, ((MR_Box) (transform_hlds__lco__V_5_5)), ((MR_Box) (transform_hlds__lco__V_7_7)));
#line 278 "lco.m"
              return;
            }
#line 278 "lco.m"
          }
#line 278 "lco.m"
      }
#line 278 "lco.m"
  }
#line 278 "lco.m"
}

#line 278 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____store_target_0_0(
#line 278 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 278 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 278 "lco.m"
{
#line 278 "lco.m"
  {
#line 278 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 278 "lco.m"
    MR_Integer transform_hlds__lco__CastX_7 = (MR_Integer) transform_hlds__lco__HeadVar__1_1;
#line 278 "lco.m"
    MR_Integer transform_hlds__lco__CastY_8 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;

#line 278 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_7 == transform_hlds__lco__CastY_8);
#line 278 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 278 "lco.m"
      transform_hlds__lco__succeeded = MR_TRUE;
#line 278 "lco.m"
    else
#line 278 "lco.m"
      {
#line 278 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_10_10;
#line 278 "lco.m"
        MR_Word transform_hlds__lco__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 278 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 278 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 278 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));

#line 4486 "transform_hlds.lco.c"
        {
#line 4488 "transform_hlds.lco.c"
          transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[4], ((MR_Box) (transform_hlds__lco__V_3_3)), ((MR_Box) (transform_hlds__lco__V_5_5)));
        }
#line 278 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 278 "lco.m"
          {
#line 4495 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_10_10 = (MR_Word) &transform_hlds__lco_scalar_common_1[10];
#line 4497 "transform_hlds.lco.c"
            {
#line 4499 "transform_hlds.lco.c"
              return transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_10_10, ((MR_Box) (transform_hlds__lco__V_4_4)), ((MR_Box) (transform_hlds__lco__V_6_6)));
            }
#line 278 "lco.m"
          }
#line 278 "lco.m"
      }
#line 278 "lco.m"
    return transform_hlds__lco__succeeded;
#line 278 "lco.m"
  }
#line 278 "lco.m"
}

#line 245 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____proc_changed_0_0(
#line 245 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 245 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 245 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 245 "lco.m"
{
#line 245 "lco.m"
  {
#line 245 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 245 "lco.m"
    MR_Integer transform_hlds__lco__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 245 "lco.m"
    MR_Integer transform_hlds__lco__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 245 "lco.m"
    {
#line 245 "lco.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__Cast_HeadVar1_4, transform_hlds__lco__Cast_HeadVar2_5);
#line 245 "lco.m"
      return;
    }
#line 245 "lco.m"
  }
#line 245 "lco.m"
}

#line 245 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____proc_changed_0_0(
#line 245 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_1,
#line 245 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 245 "lco.m"
{
#line 4554 "transform_hlds.lco.c"
  {
#line 4556 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded = (transform_hlds__lco__HeadVar__2_1 == transform_hlds__lco__HeadVar__2_2);

#line 4559 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 4561 "transform_hlds.lco.c"
  }
#line 245 "lco.m"
}

#line 241 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0(
#line 241 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 241 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 241 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 241 "lco.m"
{
#line 241 "lco.m"
  {
#line 241 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 241 "lco.m"
    MR_Integer transform_hlds__lco__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 241 "lco.m"
    MR_Integer transform_hlds__lco__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 241 "lco.m"
    {
#line 241 "lco.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__Cast_HeadVar1_4, transform_hlds__lco__Cast_HeadVar2_5);
#line 241 "lco.m"
      return;
    }
#line 241 "lco.m"
  }
#line 241 "lco.m"
}

#line 241 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0(
#line 241 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_1,
#line 241 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 241 "lco.m"
{
#line 4607 "transform_hlds.lco.c"
  {
#line 4609 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded = (transform_hlds__lco__HeadVar__2_1 == transform_hlds__lco__HeadVar__2_2);

#line 4612 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 4614 "transform_hlds.lco.c"
  }
#line 241 "lco.m"
}

#line 253 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____lco_info_0_0(
#line 253 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 253 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 253 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 253 "lco.m"
{
#line 253 "lco.m"
  {
#line 253 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 253 "lco.m"
    MR_Integer transform_hlds__lco__CastX_24 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 253 "lco.m"
    MR_Integer transform_hlds__lco__CastY_25 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 253 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_24 == transform_hlds__lco__CastY_25);
#line 253 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 4643 "transform_hlds.lco.c"
      *transform_hlds__lco__HeadVar__1_1 = (MR_Integer) 0;
#line 253 "lco.m"
    else
#line 253 "lco.m"
      {
#line 253 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 253 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 253 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));
#line 253 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 3)));
#line 253 "lco.m"
        MR_Word transform_hlds__lco__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 253 "lco.m"
        MR_Word transform_hlds__lco__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 253 "lco.m"
        MR_Word transform_hlds__lco__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 253 "lco.m"
        MR_Word transform_hlds__lco__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
#line 253 "lco.m"
        MR_Word transform_hlds__lco__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 253 "lco.m"
        MR_Word transform_hlds__lco__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 2)));
#line 253 "lco.m"
        MR_Word transform_hlds__lco__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 3)));
#line 253 "lco.m"
        MR_Word transform_hlds__lco__V_15_15 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 253 "lco.m"
        MR_Word transform_hlds__lco__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 253 "lco.m"
        MR_Word transform_hlds__lco__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 253 "lco.m"
        MR_Word transform_hlds__lco__V_18_18;

#line 253 "lco.m"
        {
#line 253 "lco.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__lco__V_18_18, transform_hlds__lco__V_4_4, transform_hlds__lco__V_11_11);
        }
#line 4685 "transform_hlds.lco.c"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_18_18 == (MR_Integer) 0);
#line 253 "lco.m"
        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 253 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 253 "lco.m"
          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_18_18;
#line 253 "lco.m"
        else
#line 253 "lco.m"
          {
#line 253 "lco.m"
            MR_Word transform_hlds__lco__V_19_19;

#line 253 "lco.m"
            {
#line 253 "lco.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[0], &transform_hlds__lco__V_19_19, ((MR_Box) (transform_hlds__lco__V_5_5)), ((MR_Box) (transform_hlds__lco__V_12_12)));
            }
#line 4705 "transform_hlds.lco.c"
            transform_hlds__lco__succeeded = (transform_hlds__lco__V_19_19 == (MR_Integer) 0);
#line 253 "lco.m"
            transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 253 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 253 "lco.m"
              *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_19_19;
#line 253 "lco.m"
            else
#line 253 "lco.m"
              {
#line 253 "lco.m"
                MR_Word transform_hlds__lco__V_20_20;

#line 253 "lco.m"
                {
#line 253 "lco.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[9], &transform_hlds__lco__V_20_20, ((MR_Box) (transform_hlds__lco__V_6_6)), ((MR_Box) (transform_hlds__lco__V_13_13)));
                }
#line 4725 "transform_hlds.lco.c"
                transform_hlds__lco__succeeded = (transform_hlds__lco__V_20_20 == (MR_Integer) 0);
#line 253 "lco.m"
                transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 253 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 253 "lco.m"
                  *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_20_20;
#line 253 "lco.m"
                else
#line 253 "lco.m"
                  {
#line 253 "lco.m"
                    MR_Word transform_hlds__lco__V_21_21;

#line 253 "lco.m"
                    {
#line 253 "lco.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &transform_hlds__lco__V_21_21, ((MR_Box) (transform_hlds__lco__V_7_7)), ((MR_Box) (transform_hlds__lco__V_14_14)));
                    }
#line 4745 "transform_hlds.lco.c"
                    transform_hlds__lco__succeeded = (transform_hlds__lco__V_21_21 == (MR_Integer) 0);
#line 253 "lco.m"
                    transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 253 "lco.m"
                    if (transform_hlds__lco__succeeded)
#line 253 "lco.m"
                      *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_21_21;
#line 253 "lco.m"
                    else
#line 253 "lco.m"
                      {
#line 253 "lco.m"
                        MR_Word transform_hlds__lco__V_22_22;
#line 253 "lco.m"
                        MR_Integer transform_hlds__lco__V_33_33 = (MR_Integer) transform_hlds__lco__V_8_8;
#line 253 "lco.m"
                        MR_Integer transform_hlds__lco__V_34_34 = (MR_Integer) transform_hlds__lco__V_15_15;

#line 253 "lco.m"
                        {
#line 253 "lco.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__lco__V_22_22, transform_hlds__lco__V_33_33, transform_hlds__lco__V_34_34);
                        }
#line 4769 "transform_hlds.lco.c"
                        transform_hlds__lco__succeeded = (transform_hlds__lco__V_22_22 == (MR_Integer) 0);
#line 253 "lco.m"
                        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 253 "lco.m"
                        if (transform_hlds__lco__succeeded)
#line 253 "lco.m"
                          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_22_22;
#line 253 "lco.m"
                        else
#line 253 "lco.m"
                          {
#line 253 "lco.m"
                            MR_Word transform_hlds__lco__V_23_23;
#line 253 "lco.m"
                            MR_Integer transform_hlds__lco__V_35_35 = (MR_Integer) transform_hlds__lco__V_9_9;
#line 253 "lco.m"
                            MR_Integer transform_hlds__lco__V_36_36 = (MR_Integer) transform_hlds__lco__V_16_16;

#line 253 "lco.m"
                            {
#line 253 "lco.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__lco__V_23_23, transform_hlds__lco__V_35_35, transform_hlds__lco__V_36_36);
                            }
#line 4793 "transform_hlds.lco.c"
                            transform_hlds__lco__succeeded = (transform_hlds__lco__V_23_23 == (MR_Integer) 0);
#line 253 "lco.m"
                            transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 253 "lco.m"
                            if (transform_hlds__lco__succeeded)
#line 253 "lco.m"
                              *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_23_23;
#line 253 "lco.m"
                            else
#line 253 "lco.m"
                              {
#line 253 "lco.m"
                                MR_Integer transform_hlds__lco__V_37_37 = (MR_Integer) transform_hlds__lco__V_10_10;
#line 253 "lco.m"
                                MR_Integer transform_hlds__lco__V_38_38 = (MR_Integer) transform_hlds__lco__V_17_17;

#line 253 "lco.m"
                                {
#line 253 "lco.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__V_37_37, transform_hlds__lco__V_38_38);
#line 253 "lco.m"
                                  return;
                                }
#line 253 "lco.m"
                              }
#line 253 "lco.m"
                          }
#line 253 "lco.m"
                      }
#line 253 "lco.m"
                  }
#line 253 "lco.m"
              }
#line 253 "lco.m"
          }
#line 253 "lco.m"
      }
#line 253 "lco.m"
  }
#line 253 "lco.m"
}

#line 253 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_info_0_0(
#line 253 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 253 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 253 "lco.m"
{
#line 253 "lco.m"
  {
#line 253 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 253 "lco.m"
    MR_Integer transform_hlds__lco__CastX_17 = (MR_Integer) transform_hlds__lco__HeadVar__1_1;
#line 253 "lco.m"
    MR_Integer transform_hlds__lco__CastY_18 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;

#line 253 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_17 == transform_hlds__lco__CastY_18);
#line 253 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 253 "lco.m"
      transform_hlds__lco__succeeded = MR_TRUE;
#line 253 "lco.m"
    else
#line 253 "lco.m"
      {
#line 253 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_20_20;
#line 253 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_21_21;
#line 253 "lco.m"
        MR_Word transform_hlds__lco__TypeCtorInfo_22_22;
#line 253 "lco.m"
        MR_Word transform_hlds__lco__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 253 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 253 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 2)));
#line 253 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 3)));
#line 253 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 253 "lco.m"
        MR_Word transform_hlds__lco__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 253 "lco.m"
        MR_Word transform_hlds__lco__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 253 "lco.m"
        MR_Word transform_hlds__lco__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 253 "lco.m"
        MR_Word transform_hlds__lco__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 253 "lco.m"
        MR_Word transform_hlds__lco__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));
#line 253 "lco.m"
        MR_Word transform_hlds__lco__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 3)));
#line 253 "lco.m"
        MR_Word transform_hlds__lco__V_14_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 253 "lco.m"
        MR_Word transform_hlds__lco__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 253 "lco.m"
        MR_Word transform_hlds__lco__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 4899 "transform_hlds.lco.c"
        {
#line 4901 "transform_hlds.lco.c"
          transform_hlds__lco__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__lco__V_3_3, transform_hlds__lco__V_10_10);
        }
#line 253 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 253 "lco.m"
          {
#line 4908 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_20_20 = (MR_Word) &transform_hlds__lco_scalar_common_2[0];
#line 4910 "transform_hlds.lco.c"
            {
#line 4912 "transform_hlds.lco.c"
              transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_20_20, ((MR_Box) (transform_hlds__lco__V_4_4)), ((MR_Box) (transform_hlds__lco__V_11_11)));
            }
#line 253 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 253 "lco.m"
              {
#line 4919 "transform_hlds.lco.c"
                transform_hlds__lco__TypeInfo_21_21 = (MR_Word) &transform_hlds__lco_scalar_common_1[9];
#line 4921 "transform_hlds.lco.c"
                {
#line 4923 "transform_hlds.lco.c"
                  transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_21_21, ((MR_Box) (transform_hlds__lco__V_5_5)), ((MR_Box) (transform_hlds__lco__V_12_12)));
                }
#line 253 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 253 "lco.m"
                  {
#line 4930 "transform_hlds.lco.c"
                    transform_hlds__lco__TypeCtorInfo_22_22 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 4932 "transform_hlds.lco.c"
                    {
#line 4934 "transform_hlds.lco.c"
                      transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeCtorInfo_22_22, ((MR_Box) (transform_hlds__lco__V_6_6)), ((MR_Box) (transform_hlds__lco__V_13_13)));
                    }
#line 253 "lco.m"
                    if (transform_hlds__lco__succeeded)
#line 253 "lco.m"
                      {
#line 4941 "transform_hlds.lco.c"
                        transform_hlds__lco__succeeded = (transform_hlds__lco__V_7_7 == transform_hlds__lco__V_14_14);
#line 253 "lco.m"
                        if (transform_hlds__lco__succeeded)
#line 253 "lco.m"
                          {
#line 4947 "transform_hlds.lco.c"
                            transform_hlds__lco__succeeded = (transform_hlds__lco__V_8_8 == transform_hlds__lco__V_15_15);
#line 253 "lco.m"
                            if (transform_hlds__lco__succeeded)
#line 4951 "transform_hlds.lco.c"
                              transform_hlds__lco__succeeded = (transform_hlds__lco__V_9_9 == transform_hlds__lco__V_16_16);
#line 253 "lco.m"
                          }
#line 253 "lco.m"
                      }
#line 253 "lco.m"
                  }
#line 253 "lco.m"
              }
#line 253 "lco.m"
          }
#line 253 "lco.m"
      }
#line 253 "lco.m"
    return transform_hlds__lco__succeeded;
#line 253 "lco.m"
  }
#line 253 "lco.m"
}

#line 264 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____lco_const_info_0_0(
#line 264 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 264 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 264 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 264 "lco.m"
{
#line 264 "lco.m"
  {
#line 264 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 264 "lco.m"
    MR_Integer transform_hlds__lco__CastX_27 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 264 "lco.m"
    MR_Integer transform_hlds__lco__CastY_28 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 264 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_27 == transform_hlds__lco__CastY_28);
#line 264 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 4996 "transform_hlds.lco.c"
      *transform_hlds__lco__HeadVar__1_1 = (MR_Integer) 0;
#line 264 "lco.m"
    else
#line 264 "lco.m"
      {
#line 264 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 264 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 264 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));
#line 264 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 3)));
#line 264 "lco.m"
        MR_Word transform_hlds__lco__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 4)));
#line 264 "lco.m"
        MR_Word transform_hlds__lco__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 5)));
#line 264 "lco.m"
        MR_Word transform_hlds__lco__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 6)));
#line 264 "lco.m"
        MR_Word transform_hlds__lco__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 7)));
#line 264 "lco.m"
        MR_Word transform_hlds__lco__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
#line 264 "lco.m"
        MR_Word transform_hlds__lco__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 264 "lco.m"
        MR_Word transform_hlds__lco__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 2)));
#line 264 "lco.m"
        MR_Word transform_hlds__lco__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 3)));
#line 264 "lco.m"
        MR_Word transform_hlds__lco__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 4)));
#line 264 "lco.m"
        MR_Word transform_hlds__lco__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 5)));
#line 264 "lco.m"
        MR_Word transform_hlds__lco__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 6)));
#line 264 "lco.m"
        MR_Word transform_hlds__lco__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 7)));
#line 264 "lco.m"
        MR_Word transform_hlds__lco__V_20_20;

#line 264 "lco.m"
        {
#line 264 "lco.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[0], &transform_hlds__lco__V_20_20, ((MR_Box) (transform_hlds__lco__V_4_4)), ((MR_Box) (transform_hlds__lco__V_12_12)));
        }
#line 5042 "transform_hlds.lco.c"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_20_20 == (MR_Integer) 0);
#line 264 "lco.m"
        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 264 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 264 "lco.m"
          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_20_20;
#line 264 "lco.m"
        else
#line 264 "lco.m"
          {
#line 264 "lco.m"
            MR_Word transform_hlds__lco__V_21_21;

#line 264 "lco.m"
            {
#line 264 "lco.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[8], &transform_hlds__lco__V_21_21, ((MR_Box) (transform_hlds__lco__V_5_5)), ((MR_Box) (transform_hlds__lco__V_13_13)));
            }
#line 5062 "transform_hlds.lco.c"
            transform_hlds__lco__succeeded = (transform_hlds__lco__V_21_21 == (MR_Integer) 0);
#line 264 "lco.m"
            transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 264 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 264 "lco.m"
              *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_21_21;
#line 264 "lco.m"
            else
#line 264 "lco.m"
              {
#line 264 "lco.m"
                MR_Word transform_hlds__lco__V_22_22;

#line 264 "lco.m"
                {
#line 264 "lco.m"
                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__lco__V_22_22, transform_hlds__lco__V_6_6, transform_hlds__lco__V_14_14);
                }
#line 5082 "transform_hlds.lco.c"
                transform_hlds__lco__succeeded = (transform_hlds__lco__V_22_22 == (MR_Integer) 0);
#line 264 "lco.m"
                transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 264 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 264 "lco.m"
                  *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_22_22;
#line 264 "lco.m"
                else
#line 264 "lco.m"
                  {
#line 264 "lco.m"
                    MR_Word transform_hlds__lco__V_23_23;

#line 264 "lco.m"
                    {
#line 264 "lco.m"
                      hlds__hlds_pred____Compare____pred_info_0_0(&transform_hlds__lco__V_23_23, transform_hlds__lco__V_7_7, transform_hlds__lco__V_15_15);
                    }
#line 5102 "transform_hlds.lco.c"
                    transform_hlds__lco__succeeded = (transform_hlds__lco__V_23_23 == (MR_Integer) 0);
#line 264 "lco.m"
                    transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 264 "lco.m"
                    if (transform_hlds__lco__succeeded)
#line 264 "lco.m"
                      *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_23_23;
#line 264 "lco.m"
                    else
#line 264 "lco.m"
                      {
#line 264 "lco.m"
                        MR_Word transform_hlds__lco__V_24_24;

#line 264 "lco.m"
                        {
#line 264 "lco.m"
                          hlds__hlds_pred____Compare____proc_info_0_0(&transform_hlds__lco__V_24_24, transform_hlds__lco__V_8_8, transform_hlds__lco__V_16_16);
                        }
#line 5122 "transform_hlds.lco.c"
                        transform_hlds__lco__succeeded = (transform_hlds__lco__V_24_24 == (MR_Integer) 0);
#line 264 "lco.m"
                        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 264 "lco.m"
                        if (transform_hlds__lco__succeeded)
#line 264 "lco.m"
                          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_24_24;
#line 264 "lco.m"
                        else
#line 264 "lco.m"
                          {
#line 264 "lco.m"
                            MR_Word transform_hlds__lco__V_25_25;

#line 264 "lco.m"
                            {
#line 264 "lco.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[6], &transform_hlds__lco__V_25_25, ((MR_Box) (transform_hlds__lco__V_9_9)), ((MR_Box) (transform_hlds__lco__V_17_17)));
                            }
#line 5142 "transform_hlds.lco.c"
                            transform_hlds__lco__succeeded = (transform_hlds__lco__V_25_25 == (MR_Integer) 0);
#line 264 "lco.m"
                            transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 264 "lco.m"
                            if (transform_hlds__lco__succeeded)
#line 264 "lco.m"
                              *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_25_25;
#line 264 "lco.m"
                            else
#line 264 "lco.m"
                              {
#line 264 "lco.m"
                                MR_Word transform_hlds__lco__V_26_26;
#line 264 "lco.m"
                                MR_Integer transform_hlds__lco__V_37_37 = (MR_Integer) transform_hlds__lco__V_10_10;
#line 264 "lco.m"
                                MR_Integer transform_hlds__lco__V_38_38 = (MR_Integer) transform_hlds__lco__V_18_18;

#line 264 "lco.m"
                                {
#line 264 "lco.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__lco__V_26_26, transform_hlds__lco__V_37_37, transform_hlds__lco__V_38_38);
                                }
#line 5166 "transform_hlds.lco.c"
                                transform_hlds__lco__succeeded = (transform_hlds__lco__V_26_26 == (MR_Integer) 0);
#line 264 "lco.m"
                                transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 264 "lco.m"
                                if (transform_hlds__lco__succeeded)
#line 264 "lco.m"
                                  *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_26_26;
#line 264 "lco.m"
                                else
#line 264 "lco.m"
                                  {
#line 264 "lco.m"
                                    MR_Integer transform_hlds__lco__V_39_39 = (MR_Integer) transform_hlds__lco__V_11_11;
#line 264 "lco.m"
                                    MR_Integer transform_hlds__lco__V_40_40 = (MR_Integer) transform_hlds__lco__V_19_19;

#line 264 "lco.m"
                                    {
#line 264 "lco.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__V_39_39, transform_hlds__lco__V_40_40);
#line 264 "lco.m"
                                      return;
                                    }
#line 264 "lco.m"
                                  }
#line 264 "lco.m"
                              }
#line 264 "lco.m"
                          }
#line 264 "lco.m"
                      }
#line 264 "lco.m"
                  }
#line 264 "lco.m"
              }
#line 264 "lco.m"
          }
#line 264 "lco.m"
      }
#line 264 "lco.m"
  }
#line 264 "lco.m"
}

#line 264 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_const_info_0_0(
#line 264 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 264 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 264 "lco.m"
{
#line 264 "lco.m"
  {
#line 264 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 264 "lco.m"
    MR_Integer transform_hlds__lco__CastX_19 = (MR_Integer) transform_hlds__lco__HeadVar__1_1;
#line 264 "lco.m"
    MR_Integer transform_hlds__lco__CastY_20 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;

#line 264 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_19 == transform_hlds__lco__CastY_20);
#line 264 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 264 "lco.m"
      transform_hlds__lco__succeeded = MR_TRUE;
#line 264 "lco.m"
    else
#line 264 "lco.m"
      {
#line 264 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_22_22;
#line 264 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_26_26;
#line 264 "lco.m"
        MR_Word transform_hlds__lco__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 264 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 264 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 2)));
#line 264 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 3)));
#line 264 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 4)));
#line 264 "lco.m"
        MR_Word transform_hlds__lco__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 5)));
#line 264 "lco.m"
        MR_Word transform_hlds__lco__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 6)));
#line 264 "lco.m"
        MR_Word transform_hlds__lco__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 7)));
#line 264 "lco.m"
        MR_Word transform_hlds__lco__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 264 "lco.m"
        MR_Word transform_hlds__lco__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 264 "lco.m"
        MR_Word transform_hlds__lco__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));
#line 264 "lco.m"
        MR_Word transform_hlds__lco__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 3)));
#line 264 "lco.m"
        MR_Word transform_hlds__lco__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 4)));
#line 264 "lco.m"
        MR_Word transform_hlds__lco__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 5)));
#line 264 "lco.m"
        MR_Word transform_hlds__lco__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 6)));
#line 264 "lco.m"
        MR_Word transform_hlds__lco__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 7)));

#line 5276 "transform_hlds.lco.c"
        {
#line 5278 "transform_hlds.lco.c"
          transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[0], ((MR_Box) (transform_hlds__lco__V_3_3)), ((MR_Box) (transform_hlds__lco__V_11_11)));
        }
#line 264 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 264 "lco.m"
          {
#line 5285 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_22_22 = (MR_Word) &transform_hlds__lco_scalar_common_1[8];
#line 5287 "transform_hlds.lco.c"
            {
#line 5289 "transform_hlds.lco.c"
              transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_22_22, ((MR_Box) (transform_hlds__lco__V_4_4)), ((MR_Box) (transform_hlds__lco__V_12_12)));
            }
#line 264 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 264 "lco.m"
              {
#line 5296 "transform_hlds.lco.c"
                {
#line 5298 "transform_hlds.lco.c"
                  transform_hlds__lco__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__lco__V_5_5, transform_hlds__lco__V_13_13);
                }
#line 264 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 264 "lco.m"
                  {
#line 5305 "transform_hlds.lco.c"
                    {
#line 5307 "transform_hlds.lco.c"
                      transform_hlds__lco__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(transform_hlds__lco__V_6_6, transform_hlds__lco__V_14_14);
                    }
#line 264 "lco.m"
                    if (transform_hlds__lco__succeeded)
#line 264 "lco.m"
                      {
#line 5314 "transform_hlds.lco.c"
                        {
#line 5316 "transform_hlds.lco.c"
                          transform_hlds__lco__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(transform_hlds__lco__V_7_7, transform_hlds__lco__V_15_15);
                        }
#line 264 "lco.m"
                        if (transform_hlds__lco__succeeded)
#line 264 "lco.m"
                          {
#line 5323 "transform_hlds.lco.c"
                            transform_hlds__lco__TypeInfo_26_26 = (MR_Word) &transform_hlds__lco_scalar_common_1[6];
#line 5325 "transform_hlds.lco.c"
                            {
#line 5327 "transform_hlds.lco.c"
                              transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_26_26, ((MR_Box) (transform_hlds__lco__V_8_8)), ((MR_Box) (transform_hlds__lco__V_16_16)));
                            }
#line 264 "lco.m"
                            if (transform_hlds__lco__succeeded)
#line 264 "lco.m"
                              {
#line 5334 "transform_hlds.lco.c"
                                transform_hlds__lco__succeeded = (transform_hlds__lco__V_9_9 == transform_hlds__lco__V_17_17);
#line 264 "lco.m"
                                if (transform_hlds__lco__succeeded)
#line 5338 "transform_hlds.lco.c"
                                  transform_hlds__lco__succeeded = (transform_hlds__lco__V_10_10 == transform_hlds__lco__V_18_18);
#line 264 "lco.m"
                              }
#line 264 "lco.m"
                          }
#line 264 "lco.m"
                      }
#line 264 "lco.m"
                  }
#line 264 "lco.m"
              }
#line 264 "lco.m"
          }
#line 264 "lco.m"
      }
#line 264 "lco.m"
    return transform_hlds__lco__succeeded;
#line 264 "lco.m"
  }
#line 264 "lco.m"
}

#line 232 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____field_id_0_0(
#line 232 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 232 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 232 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 232 "lco.m"
{
#line 232 "lco.m"
  {
#line 232 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 232 "lco.m"
    MR_Integer transform_hlds__lco__CastX_12 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 232 "lco.m"
    MR_Integer transform_hlds__lco__CastY_13 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 232 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_12 == transform_hlds__lco__CastY_13);
#line 232 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 5385 "transform_hlds.lco.c"
      *transform_hlds__lco__HeadVar__1_1 = (MR_Integer) 0;
#line 232 "lco.m"
    else
#line 232 "lco.m"
      {
#line 232 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 232 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 232 "lco.m"
        MR_Integer transform_hlds__lco__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));
#line 232 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
#line 232 "lco.m"
        MR_Word transform_hlds__lco__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 232 "lco.m"
        MR_Integer transform_hlds__lco__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 2)));
#line 232 "lco.m"
        MR_Word transform_hlds__lco__V_10_10;

#line 232 "lco.m"
        {
#line 232 "lco.m"
          parse_tree__prog_data____Compare____mer_type_0_0(&transform_hlds__lco__V_10_10, transform_hlds__lco__V_4_4, transform_hlds__lco__V_7_7);
        }
#line 5411 "transform_hlds.lco.c"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_10_10 == (MR_Integer) 0);
#line 232 "lco.m"
        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 232 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 232 "lco.m"
          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_10_10;
#line 232 "lco.m"
        else
#line 232 "lco.m"
          {
#line 232 "lco.m"
            MR_Word transform_hlds__lco__V_11_11;

#line 232 "lco.m"
            {
#line 232 "lco.m"
              parse_tree__prog_data____Compare____cons_id_0_0(&transform_hlds__lco__V_11_11, transform_hlds__lco__V_5_5, transform_hlds__lco__V_8_8);
            }
#line 5431 "transform_hlds.lco.c"
            transform_hlds__lco__succeeded = (transform_hlds__lco__V_11_11 == (MR_Integer) 0);
#line 232 "lco.m"
            transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 232 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 232 "lco.m"
              *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_11_11;
#line 232 "lco.m"
            else
#line 232 "lco.m"
              {
#line 232 "lco.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__V_6_6, transform_hlds__lco__V_9_9);
#line 232 "lco.m"
                return;
              }
#line 232 "lco.m"
          }
#line 232 "lco.m"
      }
#line 232 "lco.m"
  }
#line 232 "lco.m"
}

#line 232 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____field_id_0_0(
#line 232 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 232 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 232 "lco.m"
{
#line 232 "lco.m"
  {
#line 232 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 232 "lco.m"
    MR_Integer transform_hlds__lco__CastX_9 = (MR_Integer) transform_hlds__lco__HeadVar__1_1;
#line 232 "lco.m"
    MR_Integer transform_hlds__lco__CastY_10 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;

#line 232 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_9 == transform_hlds__lco__CastY_10);
#line 232 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 232 "lco.m"
      transform_hlds__lco__succeeded = MR_TRUE;
#line 232 "lco.m"
    else
#line 232 "lco.m"
      {
#line 232 "lco.m"
        MR_Word transform_hlds__lco__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 232 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 232 "lco.m"
        MR_Integer transform_hlds__lco__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 2)));
#line 232 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 232 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 232 "lco.m"
        MR_Integer transform_hlds__lco__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));

#line 5498 "transform_hlds.lco.c"
        {
#line 5500 "transform_hlds.lco.c"
          transform_hlds__lco__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__lco__V_3_3, transform_hlds__lco__V_6_6);
        }
#line 232 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 232 "lco.m"
          {
#line 5507 "transform_hlds.lco.c"
            {
#line 5509 "transform_hlds.lco.c"
              transform_hlds__lco__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__lco__V_4_4, transform_hlds__lco__V_7_7);
            }
#line 232 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 5514 "transform_hlds.lco.c"
              transform_hlds__lco__succeeded = (transform_hlds__lco__V_5_5 == transform_hlds__lco__V_8_8);
#line 232 "lco.m"
          }
#line 232 "lco.m"
      }
#line 232 "lco.m"
    return transform_hlds__lco__succeeded;
#line 232 "lco.m"
  }
#line 232 "lco.m"
}

#line 249 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____allow_float_addr_0_0(
#line 249 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 249 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 249 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 249 "lco.m"
{
#line 249 "lco.m"
  {
#line 249 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 249 "lco.m"
    MR_Integer transform_hlds__lco__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 249 "lco.m"
    MR_Integer transform_hlds__lco__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 249 "lco.m"
    {
#line 249 "lco.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__Cast_HeadVar1_4, transform_hlds__lco__Cast_HeadVar2_5);
#line 249 "lco.m"
      return;
    }
#line 249 "lco.m"
  }
#line 249 "lco.m"
}

#line 249 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____allow_float_addr_0_0(
#line 249 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_1,
#line 249 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 249 "lco.m"
{
#line 5568 "transform_hlds.lco.c"
  {
#line 5570 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded = (transform_hlds__lco__HeadVar__2_1 == transform_hlds__lco__HeadVar__2_2);

#line 5573 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 5575 "transform_hlds.lco.c"
  }
#line 249 "lco.m"
}

#line 1687 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_unification_args_8_p_0(
#line 1687 "lco.m"
  MR_Word transform_hlds__lco__GroundVar_9,
#line 1687 "lco.m"
  MR_Integer transform_hlds__lco__TargetArgNum_10,
#line 1687 "lco.m"
  MR_Integer transform_hlds__lco__CurArgNum_11,
#line 1687 "lco.m"
  MR_Word transform_hlds__lco__ArgTypes_12,
#line 1687 "lco.m"
  MR_Word * transform_hlds__lco__ArgVars_13,
#line 1687 "lco.m"
  MR_Word * transform_hlds__lco__ArgModes_14,
#line 1687 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22,
#line 1687 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_23)
#line 1687 "lco.m"
{
#line 1694 "lco.m"
  {
#line 1694 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1694 "lco.m"
    if ((transform_hlds__lco__ArgTypes_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1694 "lco.m"
      {
#line 1695 "lco.m"
        *transform_hlds__lco__ArgVars_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1696 "lco.m"
        *transform_hlds__lco__ArgModes_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1696 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_23 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22;
#line 1694 "lco.m"
      }
#line 1694 "lco.m"
    else
#line 1698 "lco.m"
      {
#line 1698 "lco.m"
        MR_Word transform_hlds__lco__ArgType_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__ArgTypes_12, (MR_Integer) 0)));
#line 1698 "lco.m"
        MR_Word transform_hlds__lco__ArgTypesTail_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__ArgTypes_12, (MR_Integer) 1)));
#line 1698 "lco.m"
        MR_Word transform_hlds__lco__ArgVarsTail_18;
#line 1698 "lco.m"
        MR_Word transform_hlds__lco__ArgModesTail_19;
#line 1698 "lco.m"
        MR_Word transform_hlds__lco__Var_20;
#line 1698 "lco.m"
        MR_Word transform_hlds__lco__UniMode_21;
#line 1698 "lco.m"
        MR_Integer transform_hlds__lco__V_24_24 = (transform_hlds__lco__CurArgNum_11 + (MR_Integer) 1);
#line 1698 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_25_25;

#line 1699 "lco.m"
        {
#line 1699 "lco.m"
          transform_hlds__lco__make_unification_args_8_p_0(transform_hlds__lco__GroundVar_9, transform_hlds__lco__TargetArgNum_10, transform_hlds__lco__V_24_24, transform_hlds__lco__ArgTypesTail_17, &transform_hlds__lco__ArgVarsTail_18, &transform_hlds__lco__ArgModesTail_19, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_25_25);
        }
#line 1712 "lco.m"
        transform_hlds__lco__succeeded = (transform_hlds__lco__CurArgNum_11 == transform_hlds__lco__TargetArgNum_10);
#line 1715 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1713 "lco.m"
          {
#line 1713 "lco.m"
            MR_Word transform_hlds__lco__V_37_37;
#line 1713 "lco.m"
            MR_Word transform_hlds__lco__V_38_38;
#line 1713 "lco.m"
            MR_Word transform_hlds__lco__V_39_39;
#line 1713 "lco.m"
            MR_Word transform_hlds__lco__V_40_40;
#line 1713 "lco.m"
            MR_Word transform_hlds__lco__V_41_41;
#line 1713 "lco.m"
            MR_Word transform_hlds__lco__V_42_42;

#line 1713 "lco.m"
            transform_hlds__lco__Var_20 = transform_hlds__lco__GroundVar_9;
#line 1714 "lco.m"
            {
#line 1714 "lco.m"
              transform_hlds__lco__V_38_38 = parse_tree__prog_mode__free_inst_0_f_0();
            }
#line 1714 "lco.m"
            {
#line 1714 "lco.m"
              transform_hlds__lco__V_39_39 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
#line 1714 "lco.m"
            {
#line 1714 "lco.m"
              transform_hlds__lco__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1714 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_37_37, 0) = ((MR_Box) (transform_hlds__lco__V_38_38));
#line 1714 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_37_37, 1) = ((MR_Box) (transform_hlds__lco__V_39_39));
#line 1714 "lco.m"
            }
#line 1714 "lco.m"
            {
#line 1714 "lco.m"
              transform_hlds__lco__V_41_41 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
#line 1714 "lco.m"
            {
#line 1714 "lco.m"
              transform_hlds__lco__V_42_42 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
#line 1714 "lco.m"
            {
#line 1714 "lco.m"
              transform_hlds__lco__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1714 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_40_40, 0) = ((MR_Box) (transform_hlds__lco__V_41_41));
#line 1714 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_40_40, 1) = ((MR_Box) (transform_hlds__lco__V_42_42));
#line 1714 "lco.m"
            }
#line 1714 "lco.m"
            {
#line 1714 "lco.m"
              transform_hlds__lco__UniMode_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1714 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_21, 0) = ((MR_Box) (transform_hlds__lco__V_37_37));
#line 1714 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_21, 1) = ((MR_Box) (transform_hlds__lco__V_40_40));
#line 1714 "lco.m"
            }
#line 1714 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_ProcInfo_23 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_25_25;
#line 1713 "lco.m"
          }
#line 1715 "lco.m"
        else
#line 1717 "lco.m"
          {
#line 1717 "lco.m"
            MR_Word transform_hlds__lco__V_45_45;
#line 1717 "lco.m"
            MR_Word transform_hlds__lco__V_46_46;
#line 1717 "lco.m"
            MR_Word transform_hlds__lco__V_47_47;
#line 1717 "lco.m"
            MR_Word transform_hlds__lco__V_48_48;
#line 1717 "lco.m"
            MR_Word transform_hlds__lco__V_49_49;
#line 1717 "lco.m"
            MR_Word transform_hlds__lco__V_50_50;

#line 1717 "lco.m"
            {
#line 1717 "lco.m"
              hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__lco__ArgType_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__lco__Var_20, transform_hlds__lco__STATE_VARIABLE_ProcInfo_25_25, transform_hlds__lco__STATE_VARIABLE_ProcInfo_23);
            }
#line 1718 "lco.m"
            {
#line 1718 "lco.m"
              transform_hlds__lco__V_46_46 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
#line 1718 "lco.m"
            {
#line 1718 "lco.m"
              transform_hlds__lco__V_47_47 = parse_tree__prog_mode__free_inst_0_f_0();
            }
#line 1718 "lco.m"
            {
#line 1718 "lco.m"
              transform_hlds__lco__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1718 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_45_45, 0) = ((MR_Box) (transform_hlds__lco__V_46_46));
#line 1718 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_45_45, 1) = ((MR_Box) (transform_hlds__lco__V_47_47));
#line 1718 "lco.m"
            }
#line 1718 "lco.m"
            {
#line 1718 "lco.m"
              transform_hlds__lco__V_49_49 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
#line 1718 "lco.m"
            {
#line 1718 "lco.m"
              transform_hlds__lco__V_50_50 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
#line 1718 "lco.m"
            {
#line 1718 "lco.m"
              transform_hlds__lco__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1718 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_48_48, 0) = ((MR_Box) (transform_hlds__lco__V_49_49));
#line 1718 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_48_48, 1) = ((MR_Box) (transform_hlds__lco__V_50_50));
#line 1718 "lco.m"
            }
#line 1718 "lco.m"
            {
#line 1718 "lco.m"
              transform_hlds__lco__UniMode_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1718 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_21, 0) = ((MR_Box) (transform_hlds__lco__V_45_45));
#line 1718 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_21, 1) = ((MR_Box) (transform_hlds__lco__V_48_48));
#line 1718 "lco.m"
            }
#line 1717 "lco.m"
          }
#line 1703 "lco.m"
        {
#line 1703 "lco.m"
          MR_Word base;
#line 1703 "lco.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1703 "lco.m"
          *transform_hlds__lco__ArgVars_13 = base;
#line 1703 "lco.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Var_20));
#line 1703 "lco.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__ArgVarsTail_18));
#line 1703 "lco.m"
        }
#line 1704 "lco.m"
        {
#line 1704 "lco.m"
          MR_Word base;
#line 1704 "lco.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1704 "lco.m"
          *transform_hlds__lco__ArgModes_14 = base;
#line 1704 "lco.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__UniMode_21));
#line 1704 "lco.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__ArgModesTail_19));
#line 1704 "lco.m"
        }
#line 1698 "lco.m"
      }
#line 1694 "lco.m"
  }
#line 1687 "lco.m"
}

#line 1643 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_store_goal_6_p_0(
#line 1643 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_7,
#line 1643 "lco.m"
  MR_Word transform_hlds__lco__InstMap_8,
#line 1643 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 1643 "lco.m"
  MR_Word * transform_hlds__lco__Goal_11,
#line 1643 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_32,
#line 1643 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_33)
#line 1643 "lco.m"
{
#line 1648 "lco.m"
  {
#line 1648 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1648 "lco.m"
    MR_Word transform_hlds__lco__GroundVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
#line 1648 "lco.m"
    MR_Word transform_hlds__lco__StoreTarget_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 1648 "lco.m"
    MR_Word transform_hlds__lco__AddrVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__StoreTarget_10, (MR_Integer) 0)));
#line 1648 "lco.m"
    MR_Word transform_hlds__lco__MaybeFieldId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__StoreTarget_10, (MR_Integer) 1)));

#line 1659 "lco.m"
    if ((transform_hlds__lco__MaybeFieldId_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1652 "lco.m"
      {
#line 1652 "lco.m"
        MR_Word transform_hlds__lco__V_49_49;
#line 1652 "lco.m"
        MR_Word transform_hlds__lco__V_55_55;
#line 1652 "lco.m"
        MR_Word transform_hlds__lco__V_57_57;
#line 1652 "lco.m"
        MR_Word transform_hlds__lco__V_58_58;
#line 1652 "lco.m"
        MR_Word transform_hlds__lco__V_59_59;

#line 1653 "lco.m"
        {
#line 1653 "lco.m"
          transform_hlds__lco__V_49_49 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
        }
#line 1656 "lco.m"
        {
#line 1656 "lco.m"
          transform_hlds__lco__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1656 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_59_59, 0) = ((MR_Box) (transform_hlds__lco__GroundVar_9));
#line 1656 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1656 "lco.m"
        }
#line 1653 "lco.m"
        {
#line 1653 "lco.m"
          transform_hlds__lco__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1653 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_55_55, 0) = ((MR_Box) (transform_hlds__lco__AddrVar_13));
#line 1653 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_55_55, 1) = ((MR_Box) (transform_hlds__lco__V_59_59));
#line 1653 "lco.m"
        }
#line 1653 "lco.m"
        {
#line 1653 "lco.m"
          transform_hlds__lco__V_57_57 = hlds__instmap__instmap_delta_bind_vars_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 1653 "lco.m"
        {
#line 1653 "lco.m"
          transform_hlds__lco__V_58_58 = mercury__term__context_init_0_f_0();
        }
#line 1653 "lco.m"
        {
#line 1653 "lco.m"
          hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__lco__V_49_49, (MR_String) "store_at_ref_impure", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__lco__V_55_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__lco__V_57_57, transform_hlds__lco__ModuleInfo_7, transform_hlds__lco__V_58_58, transform_hlds__lco__Goal_11);
        }
#line 1653 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_33 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_32;
#line 1652 "lco.m"
      }
#line 1659 "lco.m"
    else
#line 1661 "lco.m"
      {
#line 1661 "lco.m"
        MR_Word transform_hlds__lco__AddrVarType_15;
#line 1661 "lco.m"
        MR_Word transform_hlds__lco__ConsId_16;
#line 1661 "lco.m"
        MR_Integer transform_hlds__lco__ArgNum_17;
#line 1661 "lco.m"
        MR_Word transform_hlds__lco__ArgTypes_18;
#line 1661 "lco.m"
        MR_Word transform_hlds__lco__ArgVars_19;
#line 1661 "lco.m"
        MR_Word transform_hlds__lco__ArgModes_20;
#line 1661 "lco.m"
        MR_Word transform_hlds__lco__RHS_22;
#line 1661 "lco.m"
        MR_Word transform_hlds__lco__AddrVarInst0_23;
#line 1661 "lco.m"
        MR_Word transform_hlds__lco__AddrVarInst_24;
#line 1661 "lco.m"
        MR_Word transform_hlds__lco__UniMode_25;
#line 1661 "lco.m"
        MR_Word transform_hlds__lco__Unification_26;
#line 1661 "lco.m"
        MR_Word transform_hlds__lco__GoalExpr_28;
#line 1661 "lco.m"
        MR_Word transform_hlds__lco__GoalInfo0_29;
#line 1661 "lco.m"
        MR_Word transform_hlds__lco__GoalInfo1_30;
#line 1661 "lco.m"
        MR_Word transform_hlds__lco__GoalInfo_31;
#line 1661 "lco.m"
        MR_Word transform_hlds__lco__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__MaybeFieldId_14, (MR_Integer) 0)));
#line 1661 "lco.m"
        MR_Word transform_hlds__lco__V_37_37;
#line 1661 "lco.m"
        MR_Word transform_hlds__lco__V_38_38;
#line 1661 "lco.m"
        MR_Word transform_hlds__lco__V_39_39;
#line 1661 "lco.m"
        MR_Word transform_hlds__lco__V_40_40;
#line 1661 "lco.m"
        MR_Word transform_hlds__lco__V_41_41;
#line 1661 "lco.m"
        MR_Word transform_hlds__lco__V_48_48;

#line 1661 "lco.m"
        transform_hlds__lco__AddrVarType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_34_34, (MR_Integer) 0)));
#line 1661 "lco.m"
        transform_hlds__lco__ConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_34_34, (MR_Integer) 1)));
#line 1661 "lco.m"
        transform_hlds__lco__ArgNum_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_34_34, (MR_Integer) 2)));
#line 1662 "lco.m"
        {
#line 1662 "lco.m"
          check_hlds__type_util__get_cons_id_arg_types_4_p_0(transform_hlds__lco__ModuleInfo_7, transform_hlds__lco__AddrVarType_15, transform_hlds__lco__ConsId_16, &transform_hlds__lco__ArgTypes_18);
        }
#line 1663 "lco.m"
        {
#line 1663 "lco.m"
          transform_hlds__lco__make_unification_args_8_p_0(transform_hlds__lco__GroundVar_9, transform_hlds__lco__ArgNum_17, (MR_Integer) 1, transform_hlds__lco__ArgTypes_18, &transform_hlds__lco__ArgVars_19, &transform_hlds__lco__ArgModes_20, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_32, transform_hlds__lco__STATE_VARIABLE_ProcInfo_33);
        }
#line 1667 "lco.m"
        {
#line 1667 "lco.m"
          transform_hlds__lco__RHS_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1667 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS_22, 0) = ((MR_Box) (transform_hlds__lco__ConsId_16));
#line 1667 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS_22, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1667 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS_22, 2) = ((MR_Box) (transform_hlds__lco__ArgVars_19));
#line 1667 "lco.m"
        }
#line 1669 "lco.m"
        {
#line 1669 "lco.m"
          hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__lco__InstMap_8, transform_hlds__lco__AddrVar_13, &transform_hlds__lco__AddrVarInst0_23);
        }
#line 1670 "lco.m"
        {
#line 1670 "lco.m"
          check_hlds__inst_match__inst_expand_3_p_0(transform_hlds__lco__ModuleInfo_7, transform_hlds__lco__AddrVarInst0_23, &transform_hlds__lco__AddrVarInst_24);
        }
#line 1671 "lco.m"
        {
#line 1671 "lco.m"
          transform_hlds__lco__V_38_38 = parse_tree__prog_mode__ground_inst_0_f_0();
        }
#line 1671 "lco.m"
        {
#line 1671 "lco.m"
          transform_hlds__lco__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1671 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_37_37, 0) = ((MR_Box) (transform_hlds__lco__AddrVarInst_24));
#line 1671 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_37_37, 1) = ((MR_Box) (transform_hlds__lco__V_38_38));
#line 1671 "lco.m"
        }
#line 1671 "lco.m"
        {
#line 1671 "lco.m"
          transform_hlds__lco__V_40_40 = parse_tree__prog_mode__ground_inst_0_f_0();
        }
#line 1671 "lco.m"
        {
#line 1671 "lco.m"
          transform_hlds__lco__V_41_41 = parse_tree__prog_mode__ground_inst_0_f_0();
        }
#line 1671 "lco.m"
        {
#line 1671 "lco.m"
          transform_hlds__lco__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1671 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_39_39, 0) = ((MR_Box) (transform_hlds__lco__V_40_40));
#line 1671 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_39_39, 1) = ((MR_Box) (transform_hlds__lco__V_41_41));
#line 1671 "lco.m"
        }
#line 1671 "lco.m"
        {
#line 1671 "lco.m"
          transform_hlds__lco__UniMode_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1671 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_25, 0) = ((MR_Box) (transform_hlds__lco__V_37_37));
#line 1671 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_25, 1) = ((MR_Box) (transform_hlds__lco__V_39_39));
#line 1671 "lco.m"
        }
#line 1673 "lco.m"
        {
#line 1673 "lco.m"
          transform_hlds__lco__Unification_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1673 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Unification_26, 0) = ((MR_Box) (transform_hlds__lco__AddrVar_13));
#line 1673 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Unification_26, 1) = ((MR_Box) (transform_hlds__lco__ConsId_16));
#line 1673 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Unification_26, 2) = ((MR_Box) (transform_hlds__lco__ArgVars_19));
#line 1673 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Unification_26, 3) = ((MR_Box) (transform_hlds__lco__ArgModes_20));
#line 1673 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Unification_26, 4) = ((MR_Box) ((MR_Integer) 1));
#line 1673 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Unification_26, 5) = ((MR_Box) ((MR_Integer) 1));
#line 1673 "lco.m"
        }
#line 1677 "lco.m"
        {
#line 1677 "lco.m"
          transform_hlds__lco__GoalExpr_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1677 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_28, 0) = ((MR_Box) (transform_hlds__lco__AddrVar_13));
#line 1677 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_28, 1) = ((MR_Box) (transform_hlds__lco__RHS_22));
#line 1677 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_28, 2) = ((MR_Box) (transform_hlds__lco__UniMode_25));
#line 1677 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_28, 3) = ((MR_Box) (transform_hlds__lco__Unification_26));
#line 1677 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_28, 4) = ((MR_Box) (&transform_hlds__lco_scalar_common_1[12]));
#line 1677 "lco.m"
        }
#line 1679 "lco.m"
        {
#line 1679 "lco.m"
          hlds__hlds_goal__goal_info_init_1_p_0(&transform_hlds__lco__GoalInfo0_29);
        }
#line 1680 "lco.m"
        {
#line 1680 "lco.m"
          hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, transform_hlds__lco__GoalInfo0_29, &transform_hlds__lco__GoalInfo1_30);
        }
#line 1681 "lco.m"
        {
#line 1681 "lco.m"
          transform_hlds__lco__V_48_48 = hlds__instmap__instmap_delta_bind_var_1_f_0(transform_hlds__lco__AddrVar_13);
        }
#line 1681 "lco.m"
        {
#line 1681 "lco.m"
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__lco__V_48_48, transform_hlds__lco__GoalInfo1_30, &transform_hlds__lco__GoalInfo_31);
        }
#line 1684 "lco.m"
        {
#line 1684 "lco.m"
          MR_Word base;
#line 1684 "lco.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1684 "lco.m"
          *transform_hlds__lco__Goal_11 = base;
#line 1684 "lco.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__GoalExpr_28));
#line 1684 "lco.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__GoalInfo_31));
#line 1684 "lco.m"
        }
#line 1661 "lco.m"
      }
#line 1648 "lco.m"
  }
#line 1643 "lco.m"
}

#line 1618 "lco.m"
static void MR_CALL 
transform_hlds__lco__grounding_to_variant_args_5_p_0(
#line 1618 "lco.m"
  MR_Word transform_hlds__lco__GroundingVarToAddr_6,
#line 1618 "lco.m"
  MR_Integer transform_hlds__lco__OutArgNum_7,
#line 1618 "lco.m"
  MR_Word transform_hlds__lco__OutArgs_8,
#line 1618 "lco.m"
  MR_Word * transform_hlds__lco__Subst_9,
#line 1618 "lco.m"
  MR_Word * transform_hlds__lco__VariantArgs_10)
#line 1618 "lco.m"
{
#line 1625 "lco.m"
  {
#line 1625 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1625 "lco.m"
    if ((transform_hlds__lco__OutArgs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1625 "lco.m"
      {
#line 1625 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_21_21 = (MR_Word) &transform_hlds__lco_scalar_common_1[4];

#line 1626 "lco.m"
        {
#line 1626 "lco.m"
          *transform_hlds__lco__Subst_9 = mercury__map__init_0_f_0(transform_hlds__lco__TypeInfo_21_21, transform_hlds__lco__TypeInfo_21_21);
        }
#line 1627 "lco.m"
        *transform_hlds__lco__VariantArgs_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1625 "lco.m"
      }
#line 1625 "lco.m"
    else
#line 1629 "lco.m"
      {
#line 1629 "lco.m"
        MR_Word transform_hlds__lco__OutArg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__OutArgs_8, (MR_Integer) 0)));
#line 1629 "lco.m"
        MR_Word transform_hlds__lco__OutArgsTail_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__OutArgs_8, (MR_Integer) 1)));
#line 1629 "lco.m"
        MR_Word transform_hlds__lco__Subst0_13;
#line 1629 "lco.m"
        MR_Word transform_hlds__lco__VariantArgsTail_14;
#line 1629 "lco.m"
        MR_Integer transform_hlds__lco__V_19_19 = (transform_hlds__lco__OutArgNum_7 + (MR_Integer) 1);
#line 1637 "lco.m"
        MR_Word transform_hlds__lco__StoreTarget_15;
#line 1632 "lco.m"
        MR_Box transform_hlds__lco__conv0_StoreTarget_15;

#line 1630 "lco.m"
        {
#line 1630 "lco.m"
          transform_hlds__lco__grounding_to_variant_args_5_p_0(transform_hlds__lco__GroundingVarToAddr_6, transform_hlds__lco__V_19_19, transform_hlds__lco__OutArgsTail_12, &transform_hlds__lco__Subst0_13, &transform_hlds__lco__VariantArgsTail_14);
        }
#line 1632 "lco.m"
        {
#line 1632 "lco.m"
          transform_hlds__lco__succeeded = mercury__assoc_list__search_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[4], (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0, transform_hlds__lco__GroundingVarToAddr_6, ((MR_Box) (transform_hlds__lco__OutArg_11)), &transform_hlds__lco__conv0_StoreTarget_15);
        }
#line 1632 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1632 "lco.m"
          {
#line 1632 "lco.m"
            transform_hlds__lco__StoreTarget_15 = ((MR_Word) transform_hlds__lco__conv0_StoreTarget_15);
#line 1632 "lco.m"
            transform_hlds__lco__succeeded = MR_TRUE;
#line 1632 "lco.m"
          }
#line 1637 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1633 "lco.m"
          {
#line 1633 "lco.m"
            MR_Word transform_hlds__lco__TypeInfo_24_24 = (MR_Word) &transform_hlds__lco_scalar_common_1[4];
#line 1633 "lco.m"
            MR_Word transform_hlds__lco__StoreArg_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__StoreTarget_15, (MR_Integer) 0)));
#line 1633 "lco.m"
            MR_Word transform_hlds__lco__MaybeFieldId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__StoreTarget_15, (MR_Integer) 1)));
#line 1633 "lco.m"
            MR_Word transform_hlds__lco__VariantArg_18;

#line 1634 "lco.m"
            {
#line 1634 "lco.m"
              mercury__map__det_insert_4_p_0(transform_hlds__lco__TypeInfo_24_24, transform_hlds__lco__TypeInfo_24_24, ((MR_Box) (transform_hlds__lco__OutArg_11)), ((MR_Box) (transform_hlds__lco__StoreArg_16)), transform_hlds__lco__Subst0_13, transform_hlds__lco__Subst_9);
            }
#line 1635 "lco.m"
            {
#line 1635 "lco.m"
              transform_hlds__lco__VariantArg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1635 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantArg_18, 0) = ((MR_Box) (transform_hlds__lco__OutArgNum_7));
#line 1635 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantArg_18, 1) = ((MR_Box) (transform_hlds__lco__MaybeFieldId_17));
#line 1635 "lco.m"
            }
#line 1636 "lco.m"
            {
#line 1636 "lco.m"
              MR_Word base;
#line 1636 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1636 "lco.m"
              *transform_hlds__lco__VariantArgs_10 = base;
#line 1636 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__VariantArg_18));
#line 1636 "lco.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__VariantArgsTail_14));
#line 1636 "lco.m"
            }
#line 1633 "lco.m"
          }
#line 1637 "lco.m"
        else
#line 1638 "lco.m"
          {
#line 1638 "lco.m"
            *transform_hlds__lco__Subst_9 = transform_hlds__lco__Subst0_13;
#line 1639 "lco.m"
            *transform_hlds__lco__VariantArgs_10 = transform_hlds__lco__VariantArgsTail_14;
#line 1638 "lco.m"
          }
#line 1629 "lco.m"
      }
#line 1625 "lco.m"
  }
#line 1618 "lco.m"
}

#line 1608 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__is_grounding_4_p_0(
#line 1608 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_5,
#line 1608 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_6,
#line 1608 "lco.m"
  MR_Word transform_hlds__lco__InstMap_7,
#line 1608 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__4_4)
#line 1608 "lco.m"
{
#line 1611 "lco.m"
  {
#line 1611 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1611 "lco.m"
    MR_Word transform_hlds__lco__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__4_4, (MR_Integer) 0)));
#line 1611 "lco.m"
    MR_Word transform_hlds__lco__Inst0_10;
#line 1611 "lco.m"
    MR_Word transform_hlds__lco__Inst_11;
#line 1611 "lco.m"
    MR_Word transform_hlds__lco___StoreTarget_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__4_4, (MR_Integer) 1)));

#line 1612 "lco.m"
    {
#line 1612 "lco.m"
      hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__lco__InstMap0_6, transform_hlds__lco__Var_8, &transform_hlds__lco__Inst0_10);
    }
#line 1613 "lco.m"
    {
#line 1613 "lco.m"
      transform_hlds__lco__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(transform_hlds__lco__ModuleInfo_5, transform_hlds__lco__Inst0_10);
    }
#line 1613 "lco.m"
    transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 1611 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 1611 "lco.m"
      {
#line 1614 "lco.m"
        {
#line 1614 "lco.m"
          transform_hlds__lco__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(transform_hlds__lco__InstMap_7);
        }
#line 1611 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1611 "lco.m"
          {
#line 1615 "lco.m"
            {
#line 1615 "lco.m"
              hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__lco__InstMap_7, transform_hlds__lco__Var_8, &transform_hlds__lco__Inst_11);
            }
#line 1616 "lco.m"
            {
#line 1616 "lco.m"
              return transform_hlds__lco__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(transform_hlds__lco__ModuleInfo_5, transform_hlds__lco__Inst_11);
            }
#line 1611 "lco.m"
          }
#line 1611 "lco.m"
      }
#line 1611 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1611 "lco.m"
  }
#line 1608 "lco.m"
}

#line 1593 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_2(
#line 1593 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1593 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1593 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2)
#line 1593 "lco.m"
{
#line 1593 "lco.m"
  {
#line 1593 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 1593 "lco.m"
    MR_Word transform_hlds__lco__conv0_HeadVar__2_70;

#line 1593 "lco.m"
    {
#line 1593 "lco.m"
      transform_hlds__lco__IntroducedFrom__pred__lco_transform_variant_plain_call__1593__1_2_p_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), &transform_hlds__lco__conv0_HeadVar__2_70);
    }
#line 1593 "lco.m"
    *transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__2_70));
#line 1593 "lco.m"
  }
#line 1593 "lco.m"
}

#line 1550 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_1(
#line 1550 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1550 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1)
#line 1550 "lco.m"
{
#line 1550 "lco.m"
  {
#line 1550 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1550 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

#line 1550 "lco.m"
    {
#line 1550 "lco.m"
      return transform_hlds__lco__succeeded = transform_hlds__lco__is_grounding_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
#line 1550 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1550 "lco.m"
  }
#line 1550 "lco.m"
}

#line 1541 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0(
#line 1541 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_12,
#line 1541 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_13,
#line 1541 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_14,
#line 1541 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_15,
#line 1541 "lco.m"
  MR_Word transform_hlds__lco__GoalExpr0_16,
#line 1541 "lco.m"
  MR_Word * transform_hlds__lco__GoalExpr_17,
#line 1541 "lco.m"
  MR_Word transform_hlds__lco__GoalInfo0_18,
#line 1541 "lco.m"
  MR_Word * transform_hlds__lco__GoalInfo_19,
#line 1541 "lco.m"
  MR_Word * transform_hlds__lco__Changed_20,
#line 1541 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_53,
#line 1541 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_54)
#line 1541 "lco.m"
{
#line 1548 "lco.m"
  {
#line 1548 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1548 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_65_65;
#line 1548 "lco.m"
    MR_Word transform_hlds__lco__InstMap1_22;
#line 1548 "lco.m"
    MR_Word transform_hlds__lco__GroundingVarToAddr_23;
#line 1548 "lco.m"
    MR_Word transform_hlds__lco__V_55_55;
#line 1548 "lco.m"
    MR_Word transform_hlds__lco__V_56_56;

#line 1549 "lco.m"
    {
#line 1549 "lco.m"
      transform_hlds__lco__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1549 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_55_55, 0) = ((MR_Box) (transform_hlds__lco__GoalExpr0_16));
#line 1549 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_55_55, 1) = ((MR_Box) (transform_hlds__lco__GoalInfo0_18));
#line 1549 "lco.m"
    }
#line 1549 "lco.m"
    {
#line 1549 "lco.m"
      hlds__goal_util__update_instmap_3_p_0(transform_hlds__lco__V_55_55, transform_hlds__lco__InstMap0_15, &transform_hlds__lco__InstMap1_22);
    }
#line 1550 "lco.m"
    {
#line 1550 "lco.m"
      transform_hlds__lco__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1550 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_56_56, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_6[1]));
#line 1550 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_56_56, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_1));
#line 1550 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1550 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_56_56, 3) = ((MR_Box) (transform_hlds__lco__ModuleInfo_12));
#line 1550 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_56_56, 4) = ((MR_Box) (transform_hlds__lco__InstMap0_15));
#line 1550 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_56_56, 5) = ((MR_Box) (transform_hlds__lco__InstMap1_22));
#line 1550 "lco.m"
    }
#line 6465 "transform_hlds.lco.c"
    transform_hlds__lco__TypeInfo_65_65 = (MR_Word) &transform_hlds__lco_scalar_common_2[6];
#line 1550 "lco.m"
    {
#line 1550 "lco.m"
      mercury__list__filter_3_p_0(transform_hlds__lco__TypeInfo_65_65, transform_hlds__lco__V_56_56, transform_hlds__lco__VarToAddr_14, &transform_hlds__lco__GroundingVarToAddr_23);
    }
#line 1557 "lco.m"
    if ((transform_hlds__lco__GroundingVarToAddr_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1553 "lco.m"
      {
#line 1554 "lco.m"
        *transform_hlds__lco__GoalExpr_17 = transform_hlds__lco__GoalExpr0_16;
#line 1555 "lco.m"
        *transform_hlds__lco__GoalInfo_19 = transform_hlds__lco__GoalInfo0_18;
#line 1556 "lco.m"
        *transform_hlds__lco__Changed_20 = (MR_Integer) 0;
#line 1556 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_54 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_53;
#line 1553 "lco.m"
      }
#line 1557 "lco.m"
    else
#line 1558 "lco.m"
      {
#line 1558 "lco.m"
        MR_Word transform_hlds__lco__CallPredId_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr0_16, (MR_Integer) 0)));
#line 1558 "lco.m"
        MR_Integer transform_hlds__lco__CallProcId_27 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr0_16, (MR_Integer) 1)));
#line 1558 "lco.m"
        MR_Word transform_hlds__lco__Args_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr0_16, (MR_Integer) 2)));
#line 1558 "lco.m"
        MR_Word transform_hlds__lco__Builtin_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr0_16, (MR_Integer) 3)));
#line 1558 "lco.m"
        MR_Word transform_hlds__lco__UnifyContext_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr0_16, (MR_Integer) 4)));
#line 1558 "lco.m"
        MR_Word transform_hlds__lco__SymName_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr0_16, (MR_Integer) 5)));
#line 1558 "lco.m"
        MR_Word transform_hlds__lco__CallPredProcId_32;
#line 1558 "lco.m"
        MR_Word transform_hlds__lco__CalleeProcInfo_33;
#line 1558 "lco.m"
        MR_Word transform_hlds__lco__VarTypes_34;
#line 1558 "lco.m"
        MR_Word transform_hlds__lco__CalleeArgModes_35;
#line 1601 "lco.m"
        MR_Word transform_hlds__lco__Subst_40;
#line 1601 "lco.m"
        MR_Word transform_hlds__lco__ExistingVariant_42;
#line 1570 "lco.m"
        MR_Word transform_hlds__lco__ExistingVariants_36;
#line 1570 "lco.m"
        MR_Word transform_hlds__lco__OutArgs_38;
#line 1570 "lco.m"
        MR_Word transform_hlds__lco__VariantArgs_41;
#line 1570 "lco.m"
        MR_Integer transform_hlds__lco__V_57_57;
#line 1571 "lco.m"
        MR_Word transform_hlds__lco___InArgs_37;
#line 1571 "lco.m"
        MR_Word transform_hlds__lco___UnusedArgs_39;

#line 1564 "lco.m"
        {
#line 1564 "lco.m"
          transform_hlds__lco__CallPredProcId_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1564 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__CallPredProcId_32, 0) = ((MR_Box) (transform_hlds__lco__CallPredId_26));
#line 1564 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__CallPredProcId_32, 1) = ((MR_Box) (transform_hlds__lco__CallProcId_27));
#line 1564 "lco.m"
        }
#line 1565 "lco.m"
        {
#line 1565 "lco.m"
          hlds__hlds_module__module_info_proc_info_4_p_0(transform_hlds__lco__ModuleInfo_12, transform_hlds__lco__CallPredId_26, transform_hlds__lco__CallProcId_27, &transform_hlds__lco__CalleeProcInfo_33);
        }
#line 1567 "lco.m"
        {
#line 1567 "lco.m"
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_53, &transform_hlds__lco__VarTypes_34);
        }
#line 1568 "lco.m"
        {
#line 1568 "lco.m"
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__lco__CalleeProcInfo_33, &transform_hlds__lco__CalleeArgModes_35);
        }
#line 1570 "lco.m"
        {
#line 1570 "lco.m"
          transform_hlds__lco__succeeded = mercury__multi_map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0, transform_hlds__lco__VariantMap_13, ((MR_Box) (transform_hlds__lco__CallPredProcId_32)), &transform_hlds__lco__ExistingVariants_36);
        }
#line 1570 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1570 "lco.m"
          {
#line 1571 "lco.m"
            {
#line 1571 "lco.m"
              transform_hlds__lco__classify_proc_call_args_7_p_0(transform_hlds__lco__ModuleInfo_12, transform_hlds__lco__VarTypes_34, transform_hlds__lco__Args_28, transform_hlds__lco__CalleeArgModes_35, &transform_hlds__lco___InArgs_37, &transform_hlds__lco__OutArgs_38, &transform_hlds__lco___UnusedArgs_39);
            }
#line 1573 "lco.m"
            transform_hlds__lco__V_57_57 = (MR_Integer) 1;
#line 1573 "lco.m"
            {
#line 1573 "lco.m"
              transform_hlds__lco__grounding_to_variant_args_5_p_0(transform_hlds__lco__GroundingVarToAddr_23, transform_hlds__lco__V_57_57, transform_hlds__lco__OutArgs_38, &transform_hlds__lco__Subst_40, &transform_hlds__lco__VariantArgs_41);
            }
#line 1575 "lco.m"
            {
#line 1575 "lco.m"
              transform_hlds__lco__succeeded = transform_hlds__lco__match_existing_variant_3_p_0(transform_hlds__lco__ExistingVariants_36, transform_hlds__lco__VariantArgs_41, &transform_hlds__lco__ExistingVariant_42);
            }
#line 1570 "lco.m"
          }
#line 1601 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1578 "lco.m"
          {
#line 1578 "lco.m"
            MR_Word transform_hlds__lco__CallArgs_43;
#line 1578 "lco.m"
            MR_Word transform_hlds__lco__VariantPredId_44;
#line 1578 "lco.m"
            MR_Integer transform_hlds__lco__VariantProcId_45;
#line 1578 "lco.m"
            MR_Word transform_hlds__lco__VariantSymName_46;
#line 1578 "lco.m"
            MR_Word transform_hlds__lco__Globals_47;
#line 1578 "lco.m"
            MR_Word transform_hlds__lco__HighLevelData_48;
#line 1578 "lco.m"
            MR_Word transform_hlds__lco__V_59_59;
#line 1578 "lco.m"
            MR_String transform_hlds__lco__VariantName_79;
#line 1113 "lco.m"
            MR_Word transform_hlds__lco__V_78_78;

#line 1578 "lco.m"
            {
#line 1578 "lco.m"
              parse_tree__prog_data__rename_var_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, transform_hlds__lco__Subst_40, transform_hlds__lco__Args_28, &transform_hlds__lco__CallArgs_43);
            }
#line 1113 "lco.m"
            transform_hlds__lco__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ExistingVariant_42, (MR_Integer) 0)));
#line 1113 "lco.m"
            transform_hlds__lco__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ExistingVariant_42, (MR_Integer) 1)));
#line 1113 "lco.m"
            transform_hlds__lco__VariantName_79 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ExistingVariant_42, (MR_Integer) 2)));
#line 1117 "lco.m"
            if (((MR_tag((MR_Word) transform_hlds__lco__SymName_31)) == (MR_mktag((MR_Integer) 1))))
#line 1118 "lco.m"
              {
#line 1118 "lco.m"
                MR_Word transform_hlds__lco__ModuleName_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SymName_31, (MR_Integer) 0)));
#line 1118 "lco.m"
                MR_String transform_hlds__lco___Name_82 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SymName_31, (MR_Integer) 1)));

#line 1119 "lco.m"
                {
#line 1119 "lco.m"
                  transform_hlds__lco__VariantSymName_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1119 "lco.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__lco__VariantSymName_46, 0) = ((MR_Box) (transform_hlds__lco__ModuleName_81));
#line 1119 "lco.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__lco__VariantSymName_46, 1) = ((MR_Box) (transform_hlds__lco__VariantName_79));
#line 1119 "lco.m"
                }
#line 1118 "lco.m"
              }
#line 1117 "lco.m"
            else
#line 1116 "lco.m"
              {
#line 1116 "lco.m"
                transform_hlds__lco__VariantSymName_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1116 "lco.m"
                MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantSymName_46, 0) = ((MR_Box) (transform_hlds__lco__VariantName_79));
#line 1116 "lco.m"
              }
#line 1579 "lco.m"
            transform_hlds__lco__VariantPredId_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_59_59, (MR_Integer) 0)));
#line 1579 "lco.m"
            transform_hlds__lco__VariantProcId_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_59_59, (MR_Integer) 1)));
#line 1581 "lco.m"
            {
#line 1581 "lco.m"
              MR_Word base;
#line 1581 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1581 "lco.m"
              *transform_hlds__lco__GoalExpr_17 = base;
#line 1581 "lco.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__lco__VariantPredId_44));
#line 1581 "lco.m"
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (transform_hlds__lco__VariantProcId_45));
#line 1581 "lco.m"
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (transform_hlds__lco__CallArgs_43));
#line 1581 "lco.m"
              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (transform_hlds__lco__Builtin_29));
#line 1581 "lco.m"
              MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (transform_hlds__lco__UnifyContext_30));
#line 1581 "lco.m"
              MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (transform_hlds__lco__VariantSymName_46));
#line 1581 "lco.m"
            }
#line 1584 "lco.m"
            {
#line 1584 "lco.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__lco__ModuleInfo_12, &transform_hlds__lco__Globals_47);
            }
#line 1585 "lco.m"
            {
#line 1585 "lco.m"
              libs__globals__lookup_bool_option_3_p_0(transform_hlds__lco__Globals_47, (MR_Integer) 251, &transform_hlds__lco__HighLevelData_48);
            }
#line 1589 "lco.m"
            if ((transform_hlds__lco__HighLevelData_48 == (MR_Integer) 0))
#line 1588 "lco.m"
              *transform_hlds__lco__GoalInfo_19 = transform_hlds__lco__GoalInfo0_18;
#line 1589 "lco.m"
            else
#line 1590 "lco.m"
              {
#line 1590 "lco.m"
                MR_Word transform_hlds__lco__TypeInfo_73_73 = (MR_Word) &transform_hlds__lco_scalar_common_1[4];
#line 1590 "lco.m"
                MR_Word transform_hlds__lco__GroundVars_49;
#line 1590 "lco.m"
                MR_Word transform_hlds__lco__AddrVars_50;
#line 1590 "lco.m"
                MR_Word transform_hlds__lco__InstMapDelta0_51;
#line 1590 "lco.m"
                MR_Word transform_hlds__lco__InstMapDelta_52;
#line 1590 "lco.m"
                MR_Word transform_hlds__lco__V_62_62;

#line 1593 "lco.m"
                {
#line 1593 "lco.m"
                  mercury__list__map_3_p_0(transform_hlds__lco__TypeInfo_65_65, transform_hlds__lco__TypeInfo_73_73, (MR_Word) &transform_hlds__lco_scalar_common_2[12], transform_hlds__lco__GroundingVarToAddr_23, &transform_hlds__lco__GroundVars_49);
                }
#line 1594 "lco.m"
                {
#line 1594 "lco.m"
                  mercury__map__apply_to_list_3_p_0(transform_hlds__lco__TypeInfo_73_73, transform_hlds__lco__TypeInfo_73_73, transform_hlds__lco__GroundVars_49, transform_hlds__lco__Subst_40, &transform_hlds__lco__AddrVars_50);
                }
#line 1595 "lco.m"
                {
#line 1595 "lco.m"
                  transform_hlds__lco__InstMapDelta0_51 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__lco__GoalInfo0_18);
                }
#line 1596 "lco.m"
                {
#line 1596 "lco.m"
                  transform_hlds__lco__V_62_62 = parse_tree__prog_mode__ground_inst_0_f_0();
                }
#line 1596 "lco.m"
                {
#line 1596 "lco.m"
                  hlds__instmap__instmap_delta_set_vars_same_4_p_0(transform_hlds__lco__V_62_62, transform_hlds__lco__AddrVars_50, transform_hlds__lco__InstMapDelta0_51, &transform_hlds__lco__InstMapDelta_52);
                }
#line 1598 "lco.m"
                {
#line 1598 "lco.m"
                  hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__lco__InstMapDelta_52, transform_hlds__lco__GoalInfo0_18, transform_hlds__lco__GoalInfo_19);
                }
#line 1590 "lco.m"
              }
#line 1600 "lco.m"
            *transform_hlds__lco__Changed_20 = (MR_Integer) 1;
#line 1600 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_ProcInfo_54 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_53;
#line 1578 "lco.m"
          }
#line 1601 "lco.m"
        else
#line 1603 "lco.m"
          {
#line 1602 "lco.m"
            {
#line 1602 "lco.m"
              transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(transform_hlds__lco__ModuleInfo_12, transform_hlds__lco__VarToAddr_14, transform_hlds__lco__InstMap0_15, transform_hlds__lco__GoalInfo0_18, transform_hlds__lco__GoalExpr0_16, transform_hlds__lco__GoalExpr_17, transform_hlds__lco__Changed_20, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_53, transform_hlds__lco__STATE_VARIABLE_ProcInfo_54);
            }
#line 1604 "lco.m"
            *transform_hlds__lco__GoalInfo_19 = transform_hlds__lco__GoalInfo0_18;
#line 1603 "lco.m"
          }
#line 1558 "lco.m"
      }
#line 1548 "lco.m"
  }
#line 1541 "lco.m"
}

#line 1534 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_2(
#line 1534 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1534 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1534 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 1534 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_3,
#line 1534 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_4)
#line 1534 "lco.m"
{
#line 1534 "lco.m"
  {
#line 1534 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 1534 "lco.m"
    MR_Word transform_hlds__lco__conv1_Goal_11;
#line 1534 "lco.m"
    MR_Word transform_hlds__lco__conv0_STATE_VARIABLE_ProcInfo_33;

#line 1534 "lco.m"
    {
#line 1534 "lco.m"
      transform_hlds__lco__make_store_goal_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), &transform_hlds__lco__conv1_Goal_11, ((MR_Word) transform_hlds__lco__wrapper_arg_3), &transform_hlds__lco__conv0_STATE_VARIABLE_ProcInfo_33);
    }
#line 1534 "lco.m"
    *transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv1_Goal_11));
#line 1534 "lco.m"
    *transform_hlds__lco__wrapper_arg_4 = ((MR_Box) (transform_hlds__lco__conv0_STATE_VARIABLE_ProcInfo_33));
#line 1534 "lco.m"
  }
#line 1534 "lco.m"
}

#line 1526 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_1(
#line 1526 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1526 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1)
#line 1526 "lco.m"
{
#line 1526 "lco.m"
  {
#line 1526 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1526 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

#line 1526 "lco.m"
    {
#line 1526 "lco.m"
      return transform_hlds__lco__succeeded = transform_hlds__lco__is_grounding_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
#line 1526 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1526 "lco.m"
  }
#line 1526 "lco.m"
}

#line 1518 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(
#line 1518 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_10,
#line 1518 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_11,
#line 1518 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_12,
#line 1518 "lco.m"
  MR_Word transform_hlds__lco__GoalInfo_13,
#line 1518 "lco.m"
  MR_Word transform_hlds__lco__GoalExpr0_14,
#line 1518 "lco.m"
  MR_Word * transform_hlds__lco__GoalExpr_15,
#line 1518 "lco.m"
  MR_Word * transform_hlds__lco__Changed_16,
#line 1518 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_23,
#line 1518 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_24)
#line 1518 "lco.m"
{
#line 1524 "lco.m"
  {
#line 1524 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1524 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_33_33;
#line 1524 "lco.m"
    MR_Word transform_hlds__lco__InstMap1_18;
#line 1524 "lco.m"
    MR_Word transform_hlds__lco__GroundingVarToAddr_19;
#line 1524 "lco.m"
    MR_Word transform_hlds__lco__V_25_25;
#line 1524 "lco.m"
    MR_Word transform_hlds__lco__V_26_26;

#line 1525 "lco.m"
    {
#line 1525 "lco.m"
      transform_hlds__lco__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1525 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_25_25, 0) = ((MR_Box) (transform_hlds__lco__GoalExpr0_14));
#line 1525 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_25_25, 1) = ((MR_Box) (transform_hlds__lco__GoalInfo_13));
#line 1525 "lco.m"
    }
#line 1525 "lco.m"
    {
#line 1525 "lco.m"
      hlds__goal_util__update_instmap_3_p_0(transform_hlds__lco__V_25_25, transform_hlds__lco__InstMap0_12, &transform_hlds__lco__InstMap1_18);
    }
#line 1526 "lco.m"
    {
#line 1526 "lco.m"
      transform_hlds__lco__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1526 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_26_26, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_6[1]));
#line 1526 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_26_26, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_1));
#line 1526 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1526 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_26_26, 3) = ((MR_Box) (transform_hlds__lco__ModuleInfo_10));
#line 1526 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_26_26, 4) = ((MR_Box) (transform_hlds__lco__InstMap0_12));
#line 1526 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_26_26, 5) = ((MR_Box) (transform_hlds__lco__InstMap1_18));
#line 1526 "lco.m"
    }
#line 6897 "transform_hlds.lco.c"
    transform_hlds__lco__TypeInfo_33_33 = (MR_Word) &transform_hlds__lco_scalar_common_2[6];
#line 1526 "lco.m"
    {
#line 1526 "lco.m"
      mercury__list__filter_3_p_0(transform_hlds__lco__TypeInfo_33_33, transform_hlds__lco__V_26_26, transform_hlds__lco__VarToAddr_11, &transform_hlds__lco__GroundingVarToAddr_19);
    }
#line 1532 "lco.m"
    if ((transform_hlds__lco__GroundingVarToAddr_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1529 "lco.m"
      {
#line 1530 "lco.m"
        *transform_hlds__lco__GoalExpr_15 = transform_hlds__lco__GoalExpr0_14;
#line 1531 "lco.m"
        *transform_hlds__lco__Changed_16 = (MR_Integer) 0;
#line 1531 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_24 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_23;
#line 1529 "lco.m"
      }
#line 1532 "lco.m"
    else
#line 1533 "lco.m"
      {
#line 1533 "lco.m"
        MR_Word transform_hlds__lco__StoreGoals_22;
#line 1533 "lco.m"
        MR_Word transform_hlds__lco__V_27_27;
#line 1533 "lco.m"
        MR_Word transform_hlds__lco__V_30_30;
#line 1534 "lco.m"
        MR_Box transform_hlds__lco__conv2_STATE_VARIABLE_ProcInfo_24;

#line 1534 "lco.m"
        {
#line 1534 "lco.m"
          transform_hlds__lco__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1534 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_27_27, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_10[0]));
#line 1534 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_27_27, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_2));
#line 1534 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1534 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_27_27, 3) = ((MR_Box) (transform_hlds__lco__ModuleInfo_10));
#line 1534 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_27_27, 4) = ((MR_Box) (transform_hlds__lco__InstMap1_18));
#line 1534 "lco.m"
        }
#line 1534 "lco.m"
        {
#line 1534 "lco.m"
          mercury__list__map_foldl_5_p_1(transform_hlds__lco__TypeInfo_33_33, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__lco__V_27_27, transform_hlds__lco__GroundingVarToAddr_19, &transform_hlds__lco__StoreGoals_22, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_23)), &transform_hlds__lco__conv2_STATE_VARIABLE_ProcInfo_24);
        }
#line 1534 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_24 = ((MR_Word) transform_hlds__lco__conv2_STATE_VARIABLE_ProcInfo_24);
#line 1536 "lco.m"
        {
#line 1536 "lco.m"
          transform_hlds__lco__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1536 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_30_30, 0) = ((MR_Box) (transform_hlds__lco__V_25_25));
#line 1536 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_30_30, 1) = ((MR_Box) (transform_hlds__lco__StoreGoals_22));
#line 1536 "lco.m"
        }
#line 1536 "lco.m"
        {
#line 1536 "lco.m"
          MR_Word base;
#line 1536 "lco.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1536 "lco.m"
          *transform_hlds__lco__GoalExpr_15 = base;
#line 1536 "lco.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1536 "lco.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1536 "lco.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__lco__V_30_30));
#line 1536 "lco.m"
        }
#line 1538 "lco.m"
        *transform_hlds__lco__Changed_16 = (MR_Integer) 1;
#line 1533 "lco.m"
      }
#line 1524 "lco.m"
  }
#line 1518 "lco.m"
}

#line 1507 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_case_9_p_0(
#line 1507 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_10,
#line 1507 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_11,
#line 1507 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_12,
#line 1507 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_13,
#line 1507 "lco.m"
  MR_Word transform_hlds__lco__Case0_14,
#line 1507 "lco.m"
  MR_Word * transform_hlds__lco__Case_15,
#line 1507 "lco.m"
  MR_Word * transform_hlds__lco__Changed_16,
#line 1507 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22,
#line 1507 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_23)
#line 1507 "lco.m"
{
#line 1512 "lco.m"
  {
#line 1512 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1512 "lco.m"
    MR_Word transform_hlds__lco__MainConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Case0_14, (MR_Integer) 0)));
#line 1512 "lco.m"
    MR_Word transform_hlds__lco__OtherConsIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Case0_14, (MR_Integer) 1)));
#line 1512 "lco.m"
    MR_Word transform_hlds__lco__Goal0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Case0_14, (MR_Integer) 2)));
#line 1512 "lco.m"
    MR_Word transform_hlds__lco__Goal_21;

#line 1514 "lco.m"
    {
#line 1514 "lco.m"
      transform_hlds__lco__lco_transform_variant_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VariantMap_11, transform_hlds__lco__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__Goal0_20, &transform_hlds__lco__Goal_21, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22, transform_hlds__lco__STATE_VARIABLE_ProcInfo_23);
    }
#line 1516 "lco.m"
    {
#line 1516 "lco.m"
      MR_Word base;
#line 1516 "lco.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1516 "lco.m"
      *transform_hlds__lco__Case_15 = base;
#line 1516 "lco.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__MainConsId_18));
#line 1516 "lco.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__OtherConsIds_19));
#line 1516 "lco.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__Goal_21));
#line 1516 "lco.m"
    }
#line 1512 "lco.m"
  }
#line 1507 "lco.m"
}

#line 1488 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_conj_9_p_0(
#line 1488 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_1,
#line 1488 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_2,
#line 1488 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_3,
#line 1488 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_4,
#line 1488 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 1488 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6,
#line 1488 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__7_7,
#line 1488 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_8,
#line 1488 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_9)
#line 1488 "lco.m"
{
#line 1492 "lco.m"
  {
#line 1492 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1492 "lco.m"
    if ((transform_hlds__lco__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1492 "lco.m"
      {
#line 1492 "lco.m"
        *transform_hlds__lco__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1492 "lco.m"
        *transform_hlds__lco__HeadVar__7_7 = (MR_Integer) 0;
#line 1492 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_9 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_8;
#line 1492 "lco.m"
      }
#line 1492 "lco.m"
    else
#line 1494 "lco.m"
      {
#line 1494 "lco.m"
        MR_Word transform_hlds__lco__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__5_5, (MR_Integer) 0)));
#line 1494 "lco.m"
        MR_Word transform_hlds__lco__Goals0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__5_5, (MR_Integer) 1)));
#line 1494 "lco.m"
        MR_Word transform_hlds__lco__Goal_26;
#line 1494 "lco.m"
        MR_Word transform_hlds__lco__HeadChanged_27;
#line 1494 "lco.m"
        MR_Word transform_hlds__lco__InstMap1_28;
#line 1494 "lco.m"
        MR_Word transform_hlds__lco__Goals_29;
#line 1494 "lco.m"
        MR_Word transform_hlds__lco__TailChanged_30;
#line 1494 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_35_35;
#line 1503 "lco.m"
        MR_Word transform_hlds__lco__SubConj_31;
#line 1501 "lco.m"
        MR_Word transform_hlds__lco__V_37_37;
#line 1501 "lco.m"
        MR_Word transform_hlds__lco__V_38_38;
#line 1501 "lco.m"
        MR_Word transform_hlds__lco__V_32_32;

#line 1495 "lco.m"
        {
#line 1495 "lco.m"
          transform_hlds__lco__lco_transform_variant_goal_9_p_0(transform_hlds__lco__ModuleInfo_1, transform_hlds__lco__VariantMap_2, transform_hlds__lco__VarToAddr_3, transform_hlds__lco__InstMap0_4, transform_hlds__lco__Goal0_21, &transform_hlds__lco__Goal_26, &transform_hlds__lco__HeadChanged_27, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_8, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_35_35);
        }
#line 1497 "lco.m"
        {
#line 1497 "lco.m"
          hlds__goal_util__update_instmap_3_p_0(transform_hlds__lco__Goal0_21, transform_hlds__lco__InstMap0_4, &transform_hlds__lco__InstMap1_28);
        }
#line 1498 "lco.m"
        {
#line 1498 "lco.m"
          transform_hlds__lco__lco_transform_variant_conj_9_p_0(transform_hlds__lco__ModuleInfo_1, transform_hlds__lco__VariantMap_2, transform_hlds__lco__VarToAddr_3, transform_hlds__lco__InstMap1_28, transform_hlds__lco__Goals0_22, &transform_hlds__lco__Goals_29, &transform_hlds__lco__TailChanged_30, transform_hlds__lco__STATE_VARIABLE_ProcInfo_35_35, transform_hlds__lco__STATE_VARIABLE_ProcInfo_9);
        }
#line 1500 "lco.m"
        {
#line 1500 "lco.m"
          *transform_hlds__lco__HeadVar__7_7 = mercury__bool__or_2_f_0(transform_hlds__lco__HeadChanged_27, transform_hlds__lco__TailChanged_30);
        }
#line 1501 "lco.m"
        transform_hlds__lco__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_26, (MR_Integer) 0)));
#line 1501 "lco.m"
        transform_hlds__lco__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_26, (MR_Integer) 1)));
#line 1501 "lco.m"
        transform_hlds__lco__succeeded = ((((MR_tag((MR_Word) transform_hlds__lco__V_37_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__V_37_37, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1501 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1501 "lco.m"
          {
#line 1501 "lco.m"
            transform_hlds__lco__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__V_37_37, (MR_Integer) 1)));
#line 1501 "lco.m"
            transform_hlds__lco__SubConj_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__V_37_37, (MR_Integer) 2)));
#line 1501 "lco.m"
            transform_hlds__lco__succeeded = (transform_hlds__lco__V_38_38 == (MR_Integer) 0);
#line 1501 "lco.m"
          }
#line 1503 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1502 "lco.m"
          {
#line 1502 "lco.m"
            {
#line 1502 "lco.m"
              *transform_hlds__lco__HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__lco__SubConj_31, transform_hlds__lco__Goals_29);
            }
#line 1502 "lco.m"
          }
#line 1503 "lco.m"
        else
#line 1504 "lco.m"
          {
#line 1504 "lco.m"
            MR_Word base;
#line 1504 "lco.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1504 "lco.m"
            *transform_hlds__lco__HeadVar__6_6 = base;
#line 1504 "lco.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Goal_26));
#line 1504 "lco.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__Goals_29));
#line 1504 "lco.m"
          }
#line 1494 "lco.m"
      }
#line 1492 "lco.m"
  }
#line 1488 "lco.m"
}

#line 1414 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_2(
#line 1414 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1414 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1414 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 1414 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 1414 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 1414 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5)
#line 1414 "lco.m"
{
#line 1414 "lco.m"
  {
#line 1414 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 1414 "lco.m"
    MR_Word transform_hlds__lco__conv6_Case_15;
#line 1414 "lco.m"
    MR_Word transform_hlds__lco__conv5_Changed_16;
#line 1414 "lco.m"
    MR_Word transform_hlds__lco__conv4_STATE_VARIABLE_ProcInfo_23;

#line 1414 "lco.m"
    {
#line 1414 "lco.m"
      transform_hlds__lco__lco_transform_variant_case_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), &transform_hlds__lco__conv6_Case_15, &transform_hlds__lco__conv5_Changed_16, ((MR_Word) transform_hlds__lco__wrapper_arg_4), &transform_hlds__lco__conv4_STATE_VARIABLE_ProcInfo_23);
    }
#line 1414 "lco.m"
    *transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv6_Case_15));
#line 1414 "lco.m"
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv5_Changed_16));
#line 1414 "lco.m"
    *transform_hlds__lco__wrapper_arg_5 = ((MR_Box) (transform_hlds__lco__conv4_STATE_VARIABLE_ProcInfo_23));
#line 1414 "lco.m"
  }
#line 1414 "lco.m"
}

#line 1405 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_1(
#line 1405 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1405 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1405 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 1405 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 1405 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 1405 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5)
#line 1405 "lco.m"
{
#line 1405 "lco.m"
  {
#line 1405 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 1405 "lco.m"
    MR_Word transform_hlds__lco__conv2_Goal_15;
#line 1405 "lco.m"
    MR_Word transform_hlds__lco__conv1_Changed_16;
#line 1405 "lco.m"
    MR_Word transform_hlds__lco__conv0_STATE_VARIABLE_ProcInfo_72;

#line 1405 "lco.m"
    {
#line 1405 "lco.m"
      transform_hlds__lco__lco_transform_variant_goal_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), &transform_hlds__lco__conv2_Goal_15, &transform_hlds__lco__conv1_Changed_16, ((MR_Word) transform_hlds__lco__wrapper_arg_4), &transform_hlds__lco__conv0_STATE_VARIABLE_ProcInfo_72);
    }
#line 1405 "lco.m"
    *transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv2_Goal_15));
#line 1405 "lco.m"
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv1_Changed_16));
#line 1405 "lco.m"
    *transform_hlds__lco__wrapper_arg_5 = ((MR_Box) (transform_hlds__lco__conv0_STATE_VARIABLE_ProcInfo_72));
#line 1405 "lco.m"
  }
#line 1405 "lco.m"
}

#line 1384 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0(
#line 1384 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_10,
#line 1384 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_11,
#line 1384 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_12,
#line 1384 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_13,
#line 1384 "lco.m"
  MR_Word transform_hlds__lco__Goal0_14,
#line 1384 "lco.m"
  MR_Word * transform_hlds__lco__Goal_15,
#line 1384 "lco.m"
  MR_Word * transform_hlds__lco__Changed_16,
#line 1384 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_71,
#line 1384 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_72)
#line 1384 "lco.m"
{
#line 1389 "lco.m"
  {
#line 1389 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1389 "lco.m"
    MR_Word transform_hlds__lco__GoalExpr0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal0_14, (MR_Integer) 0)));
#line 1389 "lco.m"
    MR_Word transform_hlds__lco__GoalInfo0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal0_14, (MR_Integer) 1)));
#line 1389 "lco.m"
    MR_Word transform_hlds__lco__GoalExpr_23;
#line 1389 "lco.m"
    MR_Word transform_hlds__lco__GoalInfo_24;

#line 1403 "lco.m"
    if (((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_18)) == (MR_mktag((MR_Integer) 0))))
#line 1448 "lco.m"
      {
#line 1449 "lco.m"
        transform_hlds__lco__GoalExpr_23 = transform_hlds__lco__GoalExpr0_18;
#line 1450 "lco.m"
        transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1451 "lco.m"
        *transform_hlds__lco__Changed_16 = (MR_Integer) 0;
#line 1451 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_72 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_71;
#line 1448 "lco.m"
      }
#line 1403 "lco.m"
    else
#line 1403 "lco.m"
      if (((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_18)) == (MR_mktag((MR_Integer) 2))))
#line 1459 "lco.m"
        {
#line 1459 "lco.m"
          transform_hlds__lco__lco_transform_variant_plain_call_11_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VariantMap_11, transform_hlds__lco__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__GoalExpr0_18, &transform_hlds__lco__GoalExpr_23, transform_hlds__lco__GoalInfo0_19, &transform_hlds__lco__GoalInfo_24, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_71, transform_hlds__lco__STATE_VARIABLE_ProcInfo_72);
        }
#line 1403 "lco.m"
      else
#line 1403 "lco.m"
        if (((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_18)) == (MR_mktag((MR_Integer) 1))))
#line 1463 "lco.m"
          {
#line 1464 "lco.m"
            {
#line 1464 "lco.m"
              transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__GoalInfo0_19, transform_hlds__lco__GoalExpr0_18, &transform_hlds__lco__GoalExpr_23, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_71, transform_hlds__lco__STATE_VARIABLE_ProcInfo_72);
            }
#line 1466 "lco.m"
            transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1463 "lco.m"
          }
#line 1403 "lco.m"
        else
#line 1403 "lco.m"
          if (((((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1468 "lco.m"
            {
#line 1469 "lco.m"
              {
#line 1469 "lco.m"
                transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__GoalInfo0_19, transform_hlds__lco__GoalExpr0_18, &transform_hlds__lco__GoalExpr_23, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_71, transform_hlds__lco__STATE_VARIABLE_ProcInfo_72);
              }
#line 1471 "lco.m"
              transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1468 "lco.m"
            }
#line 1403 "lco.m"
          else
#line 1403 "lco.m"
            if (((((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1392 "lco.m"
              {
#line 1392 "lco.m"
                MR_Word transform_hlds__lco__ConjType_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 1)));
#line 1392 "lco.m"
                MR_Word transform_hlds__lco__Goals0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 2)));

#line 1399 "lco.m"
                if ((transform_hlds__lco__ConjType_20 == (MR_Integer) 1))
#line 1400 "lco.m"
                  {
#line 1401 "lco.m"
                    {
#line 1401 "lco.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.lco_transform_variant_goal\'/9", (MR_String) "parallel_conj");
#line 1401 "lco.m"
                      return;
                    }
#line 1400 "lco.m"
                  }
#line 1399 "lco.m"
                else
#line 1394 "lco.m"
                  {
#line 1394 "lco.m"
                    MR_Word transform_hlds__lco__Goals_22;

#line 1395 "lco.m"
                    {
#line 1395 "lco.m"
                      transform_hlds__lco__lco_transform_variant_conj_9_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VariantMap_11, transform_hlds__lco__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__Goals0_21, &transform_hlds__lco__Goals_22, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_71, transform_hlds__lco__STATE_VARIABLE_ProcInfo_72);
                    }
#line 1397 "lco.m"
                    {
#line 1397 "lco.m"
                      transform_hlds__lco__GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1397 "lco.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1397 "lco.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 1) = ((MR_Box) (transform_hlds__lco__ConjType_20));
#line 1397 "lco.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 2) = ((MR_Box) (transform_hlds__lco__Goals_22));
#line 1397 "lco.m"
                    }
#line 1398 "lco.m"
                    transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1394 "lco.m"
                  }
#line 1392 "lco.m"
              }
#line 1403 "lco.m"
            else
#line 1403 "lco.m"
              if (((((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1404 "lco.m"
                {
#line 1404 "lco.m"
                  MR_Word transform_hlds__lco__TypeCtorInfo_99_99;
#line 1404 "lco.m"
                  MR_Word transform_hlds__lco__DisjsChanged_25;
#line 1404 "lco.m"
                  MR_Word transform_hlds__lco__V_85_85;
#line 1404 "lco.m"
                  MR_Word transform_hlds__lco__Goals0_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 1)));
#line 1404 "lco.m"
                  MR_Word transform_hlds__lco__Goals_93;
#line 1405 "lco.m"
                  MR_Box transform_hlds__lco__conv3_STATE_VARIABLE_ProcInfo_72;

#line 1405 "lco.m"
                  {
#line 1405 "lco.m"
                    transform_hlds__lco__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1405 "lco.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__lco__V_85_85, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_8[1]));
#line 1405 "lco.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__lco__V_85_85, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_goal_9_p_0_1));
#line 1405 "lco.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__lco__V_85_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1405 "lco.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__lco__V_85_85, 3) = ((MR_Box) (transform_hlds__lco__ModuleInfo_10));
#line 1405 "lco.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__lco__V_85_85, 4) = ((MR_Box) (transform_hlds__lco__VariantMap_11));
#line 1405 "lco.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__lco__V_85_85, 5) = ((MR_Box) (transform_hlds__lco__VarToAddr_12));
#line 1405 "lco.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__lco__V_85_85, 6) = ((MR_Box) (transform_hlds__lco__InstMap0_13));
#line 1405 "lco.m"
                  }
#line 7460 "transform_hlds.lco.c"
                  transform_hlds__lco__TypeCtorInfo_99_99 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1405 "lco.m"
                  {
#line 1405 "lco.m"
                    mercury__list__map2_foldl_6_p_0(transform_hlds__lco__TypeCtorInfo_99_99, transform_hlds__lco__TypeCtorInfo_99_99, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__lco__V_85_85, transform_hlds__lco__Goals0_92, &transform_hlds__lco__Goals_93, &transform_hlds__lco__DisjsChanged_25, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_71)), &transform_hlds__lco__conv3_STATE_VARIABLE_ProcInfo_72);
                  }
#line 1405 "lco.m"
                  *transform_hlds__lco__STATE_VARIABLE_ProcInfo_72 = ((MR_Word) transform_hlds__lco__conv3_STATE_VARIABLE_ProcInfo_72);
#line 1409 "lco.m"
                  {
#line 1409 "lco.m"
                    *transform_hlds__lco__Changed_16 = mercury__bool__or_list_1_f_0(transform_hlds__lco__DisjsChanged_25);
                  }
#line 1410 "lco.m"
                  {
#line 1410 "lco.m"
                    transform_hlds__lco__GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1410 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1410 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 1) = ((MR_Box) (transform_hlds__lco__Goals_93));
#line 1410 "lco.m"
                  }
#line 1411 "lco.m"
                  transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1404 "lco.m"
                }
#line 1403 "lco.m"
              else
#line 1403 "lco.m"
                if (((((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1453 "lco.m"
                  {
#line 1454 "lco.m"
                    {
#line 1454 "lco.m"
                      transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__GoalInfo0_19, transform_hlds__lco__GoalExpr0_18, &transform_hlds__lco__GoalExpr_23, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_71, transform_hlds__lco__STATE_VARIABLE_ProcInfo_72);
                    }
#line 1456 "lco.m"
                    transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1453 "lco.m"
                  }
#line 1403 "lco.m"
                else
#line 1403 "lco.m"
                  if (((((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1422 "lco.m"
                    {
#line 1422 "lco.m"
                      MR_Word transform_hlds__lco__Vars_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 1)));
#line 1422 "lco.m"
                      MR_Word transform_hlds__lco__Cond_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 2)));
#line 1422 "lco.m"
                      MR_Word transform_hlds__lco__Then0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 3)));
#line 1422 "lco.m"
                      MR_Word transform_hlds__lco__Else0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 4)));
#line 1422 "lco.m"
                      MR_Word transform_hlds__lco__InstMap1_35;
#line 1422 "lco.m"
                      MR_Word transform_hlds__lco__Then_36;
#line 1422 "lco.m"
                      MR_Word transform_hlds__lco__ThenChanged_37;
#line 1422 "lco.m"
                      MR_Word transform_hlds__lco__Else_38;
#line 1422 "lco.m"
                      MR_Word transform_hlds__lco__ElseChanged_39;
#line 1422 "lco.m"
                      MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_81_81;

#line 1423 "lco.m"
                      {
#line 1423 "lco.m"
                        hlds__goal_util__update_instmap_3_p_0(transform_hlds__lco__Cond_32, transform_hlds__lco__InstMap0_13, &transform_hlds__lco__InstMap1_35);
                      }
#line 1424 "lco.m"
                      {
#line 1424 "lco.m"
                        transform_hlds__lco__lco_transform_variant_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VariantMap_11, transform_hlds__lco__VarToAddr_12, transform_hlds__lco__InstMap1_35, transform_hlds__lco__Then0_33, &transform_hlds__lco__Then_36, &transform_hlds__lco__ThenChanged_37, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_71, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_81_81);
                      }
#line 1426 "lco.m"
                      {
#line 1426 "lco.m"
                        transform_hlds__lco__lco_transform_variant_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VariantMap_11, transform_hlds__lco__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__Else0_34, &transform_hlds__lco__Else_38, &transform_hlds__lco__ElseChanged_39, transform_hlds__lco__STATE_VARIABLE_ProcInfo_81_81, transform_hlds__lco__STATE_VARIABLE_ProcInfo_72);
                      }
#line 1428 "lco.m"
                      {
#line 1428 "lco.m"
                        *transform_hlds__lco__Changed_16 = mercury__bool__or_2_f_0(transform_hlds__lco__ThenChanged_37, transform_hlds__lco__ElseChanged_39);
                      }
#line 1429 "lco.m"
                      {
#line 1429 "lco.m"
                        transform_hlds__lco__GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1429 "lco.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1429 "lco.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 1) = ((MR_Box) (transform_hlds__lco__Vars_31));
#line 1429 "lco.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 2) = ((MR_Box) (transform_hlds__lco__Cond_32));
#line 1429 "lco.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 3) = ((MR_Box) (transform_hlds__lco__Then_36));
#line 1429 "lco.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 4) = ((MR_Box) (transform_hlds__lco__Else_38));
#line 1429 "lco.m"
                      }
#line 1430 "lco.m"
                      transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1422 "lco.m"
                    }
#line 1403 "lco.m"
                  else
#line 1403 "lco.m"
                    if (((((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1432 "lco.m"
                      {
#line 1432 "lco.m"
                        MR_Word transform_hlds__lco__Reason_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 1)));
#line 1432 "lco.m"
                        MR_Word transform_hlds__lco__SubGoal0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 2)));
#line 1434 "lco.m"
                        MR_Word transform_hlds__lco__FGT_43;
#line 1434 "lco.m"
                        MR_Word transform_hlds__lco__V_42_42;

#line 1434 "lco.m"
                        transform_hlds__lco__succeeded = ((((MR_tag((MR_Word) transform_hlds__lco__Reason_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_40, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1434 "lco.m"
                        if (transform_hlds__lco__succeeded)
#line 1434 "lco.m"
                          {
#line 1434 "lco.m"
                            transform_hlds__lco__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_40, (MR_Integer) 1)));
#line 1434 "lco.m"
                            transform_hlds__lco__FGT_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_40, (MR_Integer) 2)));
#line 1436 "lco.m"
                            if ((transform_hlds__lco__FGT_43 == (MR_Integer) 1))
#line 1435 "lco.m"
                              transform_hlds__lco__succeeded = MR_TRUE;
#line 1436 "lco.m"
                            else
#line 1436 "lco.m"
                              if ((transform_hlds__lco__FGT_43 == (MR_Integer) 2))
#line 1436 "lco.m"
                                transform_hlds__lco__succeeded = MR_TRUE;
#line 1436 "lco.m"
                              else
#line 1436 "lco.m"
                                transform_hlds__lco__succeeded = MR_FALSE;
#line 1434 "lco.m"
                          }
#line 1441 "lco.m"
                        if (transform_hlds__lco__succeeded)
#line 1439 "lco.m"
                          {
#line 1439 "lco.m"
                            transform_hlds__lco__GoalExpr_23 = transform_hlds__lco__GoalExpr0_18;
#line 1440 "lco.m"
                            *transform_hlds__lco__Changed_16 = (MR_Integer) 0;
#line 1440 "lco.m"
                            *transform_hlds__lco__STATE_VARIABLE_ProcInfo_72 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_71;
#line 1439 "lco.m"
                          }
#line 1441 "lco.m"
                        else
#line 1443 "lco.m"
                          {
#line 1443 "lco.m"
                            MR_Word transform_hlds__lco__SubGoal_44;

#line 1442 "lco.m"
                            {
#line 1442 "lco.m"
                              transform_hlds__lco__lco_transform_variant_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VariantMap_11, transform_hlds__lco__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__SubGoal0_41, &transform_hlds__lco__SubGoal_44, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_71, transform_hlds__lco__STATE_VARIABLE_ProcInfo_72);
                            }
#line 1444 "lco.m"
                            {
#line 1444 "lco.m"
                              transform_hlds__lco__GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1444 "lco.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1444 "lco.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 1) = ((MR_Box) (transform_hlds__lco__Reason_40));
#line 1444 "lco.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 2) = ((MR_Box) (transform_hlds__lco__SubGoal_44));
#line 1444 "lco.m"
                            }
#line 1443 "lco.m"
                          }
#line 1446 "lco.m"
                        transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1432 "lco.m"
                      }
#line 1403 "lco.m"
                    else
#line 1403 "lco.m"
                      if (((((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1473 "lco.m"
                        {
#line 1475 "lco.m"
                          {
#line 1475 "lco.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.lco_transform_variant_goal\'/9", (MR_String) "shorthand");
#line 1475 "lco.m"
                            return;
                          }
#line 1473 "lco.m"
                        }
#line 1403 "lco.m"
                      else
#line 1413 "lco.m"
                        {
#line 1413 "lco.m"
                          MR_Word transform_hlds__lco__TypeCtorInfo_107_107;
#line 1413 "lco.m"
                          MR_Word transform_hlds__lco__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 1)));
#line 1413 "lco.m"
                          MR_Word transform_hlds__lco__CanFail_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 2)));
#line 1413 "lco.m"
                          MR_Word transform_hlds__lco__Cases0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 3)));
#line 1413 "lco.m"
                          MR_Word transform_hlds__lco__Cases_29;
#line 1413 "lco.m"
                          MR_Word transform_hlds__lco__CasesChanged_30;
#line 1413 "lco.m"
                          MR_Word transform_hlds__lco__V_83_83;
#line 1414 "lco.m"
                          MR_Box transform_hlds__lco__conv7_STATE_VARIABLE_ProcInfo_72;

#line 1414 "lco.m"
                          {
#line 1414 "lco.m"
                            transform_hlds__lco__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1414 "lco.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_83_83, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_8[2]));
#line 1414 "lco.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_83_83, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_goal_9_p_0_2));
#line 1414 "lco.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_83_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1414 "lco.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_83_83, 3) = ((MR_Box) (transform_hlds__lco__ModuleInfo_10));
#line 1414 "lco.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_83_83, 4) = ((MR_Box) (transform_hlds__lco__VariantMap_11));
#line 1414 "lco.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_83_83, 5) = ((MR_Box) (transform_hlds__lco__VarToAddr_12));
#line 1414 "lco.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_83_83, 6) = ((MR_Box) (transform_hlds__lco__InstMap0_13));
#line 1414 "lco.m"
                          }
#line 7709 "transform_hlds.lco.c"
                          transform_hlds__lco__TypeCtorInfo_107_107 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 1414 "lco.m"
                          {
#line 1414 "lco.m"
                            mercury__list__map2_foldl_6_p_0(transform_hlds__lco__TypeCtorInfo_107_107, transform_hlds__lco__TypeCtorInfo_107_107, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__lco__V_83_83, transform_hlds__lco__Cases0_28, &transform_hlds__lco__Cases_29, &transform_hlds__lco__CasesChanged_30, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_71)), &transform_hlds__lco__conv7_STATE_VARIABLE_ProcInfo_72);
                          }
#line 1414 "lco.m"
                          *transform_hlds__lco__STATE_VARIABLE_ProcInfo_72 = ((MR_Word) transform_hlds__lco__conv7_STATE_VARIABLE_ProcInfo_72);
#line 1418 "lco.m"
                          {
#line 1418 "lco.m"
                            *transform_hlds__lco__Changed_16 = mercury__bool__or_list_1_f_0(transform_hlds__lco__CasesChanged_30);
                          }
#line 1419 "lco.m"
                          {
#line 1419 "lco.m"
                            transform_hlds__lco__GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1419 "lco.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1419 "lco.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 1) = ((MR_Box) (transform_hlds__lco__Var_26));
#line 1419 "lco.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 2) = ((MR_Box) (transform_hlds__lco__CanFail_27));
#line 1419 "lco.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 3) = ((MR_Box) (transform_hlds__lco__Cases_29));
#line 1419 "lco.m"
                          }
#line 1420 "lco.m"
                          transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1413 "lco.m"
                        }
#line 1483 "lco.m"
    if ((*transform_hlds__lco__Changed_16 == (MR_Integer) 0))
#line 1485 "lco.m"
      *transform_hlds__lco__Goal_15 = transform_hlds__lco__Goal0_14;
#line 1483 "lco.m"
    else
#line 1478 "lco.m"
      {
#line 1478 "lco.m"
        MR_Word transform_hlds__lco__GoalInfoImpure_70;

#line 1481 "lco.m"
        {
#line 1481 "lco.m"
          hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, transform_hlds__lco__GoalInfo_24, &transform_hlds__lco__GoalInfoImpure_70);
        }
#line 1482 "lco.m"
        {
#line 1482 "lco.m"
          MR_Word base;
#line 1482 "lco.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1482 "lco.m"
          *transform_hlds__lco__Goal_15 = base;
#line 1482 "lco.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__GoalExpr_23));
#line 1482 "lco.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__GoalInfoImpure_70));
#line 1482 "lco.m"
        }
#line 1478 "lco.m"
      }
#line 1389 "lco.m"
  }
#line 1384 "lco.m"
}

#line 1323 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__make_addr_vars_12_p_0_1(
#line 1323 "lco.m"
  MR_Box transform_hlds__lco__closure_arg)
#line 1323 "lco.m"
{
#line 1323 "lco.m"
  {
#line 1323 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1323 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

#line 1323 "lco.m"
    {
#line 1323 "lco.m"
      return transform_hlds__lco__succeeded = transform_hlds__lco__IntroducedFrom__pred__make_addr_vars__1323__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))));
    }
#line 1323 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1323 "lco.m"
  }
#line 1323 "lco.m"
}

#line 1316 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_addr_vars_12_p_0(
#line 1316 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 1316 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 1316 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__3_3,
#line 1316 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__4_4,
#line 1316 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 1316 "lco.m"
  MR_Integer transform_hlds__lco__NextOutArgNum_6,
#line 1316 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_7,
#line 1316 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__8_8,
#line 1316 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VarSet_0_9,
#line 1316 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VarSet_10,
#line 1316 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11,
#line 1316 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VarTypes_12)
#line 1316 "lco.m"
{
#line 1322 "lco.m"
  {
#line 1322 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1322 "lco.m"
    if ((transform_hlds__lco__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1322 "lco.m"
      if ((transform_hlds__lco__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1322 "lco.m"
        {
#line 1322 "lco.m"
          MR_Word transform_hlds__lco__V_22_22;

#line 1322 "lco.m"
          *transform_hlds__lco__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1322 "lco.m"
          *transform_hlds__lco__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1322 "lco.m"
          *transform_hlds__lco__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1323 "lco.m"
          {
#line 1323 "lco.m"
            transform_hlds__lco__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1323 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_22_22, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_7[6]));
#line 1323 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_22_22, 1) = ((MR_Box) (transform_hlds__lco__make_addr_vars_12_p_0_1));
#line 1323 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1323 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_22_22, 3) = ((MR_Box) (transform_hlds__lco__HeadVar__5_5));
#line 1323 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_22_22, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1323 "lco.m"
          }
#line 1323 "lco.m"
          {
#line 1323 "lco.m"
            mercury__require__expect_3_p_0(transform_hlds__lco__V_22_22, (MR_String) "transform_hlds.lco", (MR_String) "make_addr_vars: AddrOutArgs != []");
          }
#line 1322 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_VarTypes_12 = transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11;
#line 1322 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_VarSet_10 = transform_hlds__lco__STATE_VARIABLE_VarSet_0_9;
#line 1322 "lco.m"
        }
#line 1322 "lco.m"
      else
#line 1325 "lco.m"
        {
#line 1326 "lco.m"
          {
#line 1326 "lco.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.make_addr_vars\'/12", (MR_String) "mismatched lists");
#line 1326 "lco.m"
            return;
          }
#line 1325 "lco.m"
        }
#line 1322 "lco.m"
    else
#line 1322 "lco.m"
      {
#line 1322 "lco.m"
        MR_Word transform_hlds__lco__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 1322 "lco.m"
        MR_Word transform_hlds__lco__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));

#line 1322 "lco.m"
        if ((transform_hlds__lco__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1327 "lco.m"
          {
#line 1328 "lco.m"
            {
#line 1328 "lco.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.make_addr_vars\'/12", (MR_String) "mismatched lists");
#line 1328 "lco.m"
              return;
            }
#line 1327 "lco.m"
          }
#line 1322 "lco.m"
        else
#line 1331 "lco.m"
          {
#line 1331 "lco.m"
            MR_Word transform_hlds__lco__Mode0_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 1331 "lco.m"
            MR_Word transform_hlds__lco__Modes0_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 1331 "lco.m"
            MR_Word transform_hlds__lco__HeadVar_64;
#line 1331 "lco.m"
            MR_Word transform_hlds__lco__HeadVars_65;
#line 1331 "lco.m"
            MR_Word transform_hlds__lco__Mode_66;
#line 1331 "lco.m"
            MR_Word transform_hlds__lco__Modes_67;
#line 1331 "lco.m"
            MR_Word transform_hlds__lco__HeadVarType_74;
#line 1331 "lco.m"
            MR_Word transform_hlds__lco__ArgMode_75;

#line 1332 "lco.m"
            {
#line 1332 "lco.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11, transform_hlds__lco__V_133_133, &transform_hlds__lco__HeadVarType_74);
            }
#line 1333 "lco.m"
            {
#line 1333 "lco.m"
              check_hlds__mode_util__mode_to_arg_mode_4_p_0(transform_hlds__lco__ModuleInfo_7, transform_hlds__lco__Mode0_62, transform_hlds__lco__HeadVarType_74, &transform_hlds__lco__ArgMode_75);
            }
#line 1340 "lco.m"
            if ((transform_hlds__lco__ArgMode_75 == (MR_Integer) 0))
#line 1335 "lco.m"
              {
#line 1336 "lco.m"
                transform_hlds__lco__HeadVar_64 = transform_hlds__lco__V_133_133;
#line 1337 "lco.m"
                transform_hlds__lco__Mode_66 = transform_hlds__lco__Mode0_62;
#line 1338 "lco.m"
                {
#line 1338 "lco.m"
                  transform_hlds__lco__make_addr_vars_12_p_0(transform_hlds__lco__V_132_132, transform_hlds__lco__Modes0_63, &transform_hlds__lco__HeadVars_65, &transform_hlds__lco__Modes_67, transform_hlds__lco__HeadVar__5_5, transform_hlds__lco__NextOutArgNum_6, transform_hlds__lco__ModuleInfo_7, transform_hlds__lco__HeadVar__8_8, transform_hlds__lco__STATE_VARIABLE_VarSet_0_9, transform_hlds__lco__STATE_VARIABLE_VarSet_10, transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11, transform_hlds__lco__STATE_VARIABLE_VarTypes_12);
                }
#line 1335 "lco.m"
              }
#line 1340 "lco.m"
            else
#line 1340 "lco.m"
              if ((transform_hlds__lco__ArgMode_75 == (MR_Integer) 1))
#line 1341 "lco.m"
                {
#line 1341 "lco.m"
                  MR_Word transform_hlds__lco__MaybeFieldId_77;
#line 1341 "lco.m"
                  MR_Word transform_hlds__lco__STATE_VARIABLE_AddrOutArgs_97_97;
#line 1343 "lco.m"
                  MR_Word transform_hlds__lco__AddrOutArg_76;
#line 1343 "lco.m"
                  MR_Integer transform_hlds__lco__V_131_131;

#line 1343 "lco.m"
                  transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__HeadVar__5_5)) == (MR_mktag((MR_Integer) 1)));
#line 1343 "lco.m"
                  if (transform_hlds__lco__succeeded)
#line 1343 "lco.m"
                    {
#line 1343 "lco.m"
                      transform_hlds__lco__AddrOutArg_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__5_5, (MR_Integer) 0)));
#line 1343 "lco.m"
                      transform_hlds__lco__STATE_VARIABLE_AddrOutArgs_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__5_5, (MR_Integer) 1)));
#line 1344 "lco.m"
                      transform_hlds__lco__V_131_131 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__AddrOutArg_76, (MR_Integer) 0)));
#line 1344 "lco.m"
                      transform_hlds__lco__MaybeFieldId_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__AddrOutArg_76, (MR_Integer) 1)));
#line 1344 "lco.m"
                      transform_hlds__lco__succeeded = (transform_hlds__lco__NextOutArgNum_6 == transform_hlds__lco__V_131_131);
#line 1343 "lco.m"
                    }
#line 1341 "lco.m"
                  if (transform_hlds__lco__succeeded)
#line 1346 "lco.m"
                    {
#line 1346 "lco.m"
                      MR_Word transform_hlds__lco__TypeCtorInfo_130_130 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1346 "lco.m"
                      MR_String transform_hlds__lco__Name_78;
#line 1346 "lco.m"
                      MR_String transform_hlds__lco__AddrName_79;
#line 1346 "lco.m"
                      MR_Word transform_hlds__lco__OldType_81;
#line 1346 "lco.m"
                      MR_Word transform_hlds__lco__VarToAddrTail_87;
#line 1346 "lco.m"
                      MR_Word transform_hlds__lco__VarToAddrHead_88;
#line 1346 "lco.m"
                      MR_Word transform_hlds__lco__STATE_VARIABLE_VarSet_99_99;
#line 1346 "lco.m"
                      MR_Word transform_hlds__lco__STATE_VARIABLE_VarTypes_108_108;
#line 1346 "lco.m"
                      MR_Integer transform_hlds__lco__V_109_109;
#line 1346 "lco.m"
                      MR_Word transform_hlds__lco__V_113_113;

#line 1346 "lco.m"
                      {
#line 1346 "lco.m"
                        mercury__varset__lookup_name_3_p_0(transform_hlds__lco__TypeCtorInfo_130_130, transform_hlds__lco__STATE_VARIABLE_VarSet_0_9, transform_hlds__lco__V_133_133, &transform_hlds__lco__Name_78);
                      }
#line 1347 "lco.m"
                      {
#line 1347 "lco.m"
                        transform_hlds__lco__AddrName_79 = mercury__string__f_43_43_2_f_0((MR_String) "AddrOf", transform_hlds__lco__Name_78);
                      }
#line 1348 "lco.m"
                      {
#line 1348 "lco.m"
                        mercury__varset__new_named_var_4_p_0(transform_hlds__lco__TypeCtorInfo_130_130, transform_hlds__lco__AddrName_79, &transform_hlds__lco__HeadVar_64, transform_hlds__lco__STATE_VARIABLE_VarSet_0_9, &transform_hlds__lco__STATE_VARIABLE_VarSet_99_99);
                      }
#line 1350 "lco.m"
                      {
#line 1350 "lco.m"
                        parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11, transform_hlds__lco__V_133_133, &transform_hlds__lco__OldType_81);
                      }
#line 1357 "lco.m"
                      if ((transform_hlds__lco__MaybeFieldId_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1352 "lco.m"
                        {
#line 1352 "lco.m"
                          MR_Word transform_hlds__lco__V_107_107;

#line 1355 "lco.m"
                          {
#line 1355 "lco.m"
                            transform_hlds__lco__V_107_107 = transform_hlds__lco__make_ref_type_1_f_0(transform_hlds__lco__OldType_81);
                          }
#line 1355 "lco.m"
                          {
#line 1355 "lco.m"
                            parse_tree__prog_data__add_var_type_4_p_0(transform_hlds__lco__HeadVar_64, transform_hlds__lco__V_107_107, transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11, &transform_hlds__lco__STATE_VARIABLE_VarTypes_108_108);
                          }
#line 1356 "lco.m"
                          {
#line 1356 "lco.m"
                            transform_hlds__lco__Mode_66 = parse_tree__prog_mode__in_mode_0_f_0();
                          }
#line 1352 "lco.m"
                        }
#line 1357 "lco.m"
                      else
#line 1358 "lco.m"
                        {
#line 1358 "lco.m"
                          MR_Word transform_hlds__lco__AddrVarType_82;
#line 1358 "lco.m"
                          MR_Word transform_hlds__lco__ConsId_83;
#line 1358 "lco.m"
                          MR_Integer transform_hlds__lco__ArgNum_84;
#line 1358 "lco.m"
                          MR_Word transform_hlds__lco__BoundInst_85;
#line 1358 "lco.m"
                          MR_Word transform_hlds__lco__InitialInst_86;
#line 1358 "lco.m"
                          MR_Word transform_hlds__lco__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__MaybeFieldId_77, (MR_Integer) 0)));
#line 1358 "lco.m"
                          MR_Word transform_hlds__lco__V_104_104;
#line 1358 "lco.m"
                          MR_Word transform_hlds__lco__V_106_106;

#line 1358 "lco.m"
                          transform_hlds__lco__AddrVarType_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_100_100, (MR_Integer) 0)));
#line 1358 "lco.m"
                          transform_hlds__lco__ConsId_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_100_100, (MR_Integer) 1)));
#line 1358 "lco.m"
                          transform_hlds__lco__ArgNum_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_100_100, (MR_Integer) 2)));
#line 1362 "lco.m"
                          {
#line 1362 "lco.m"
                            parse_tree__prog_data__add_var_type_4_p_0(transform_hlds__lco__HeadVar_64, transform_hlds__lco__AddrVarType_82, transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11, &transform_hlds__lco__STATE_VARIABLE_VarTypes_108_108);
                          }
#line 1363 "lco.m"
                          {
#line 1363 "lco.m"
                            transform_hlds__lco__BoundInst_85 = transform_hlds__lco__bound_inst_with_free_arg_2_f_0(transform_hlds__lco__ConsId_83, transform_hlds__lco__ArgNum_84);
                          }
#line 1364 "lco.m"
                          {
#line 1364 "lco.m"
                            transform_hlds__lco__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1364 "lco.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__lco__V_104_104, 0) = ((MR_Box) (transform_hlds__lco__BoundInst_85));
#line 1364 "lco.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__lco__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1364 "lco.m"
                          }
#line 1364 "lco.m"
                          {
#line 1364 "lco.m"
                            transform_hlds__lco__InitialInst_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1364 "lco.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__lco__InitialInst_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1364 "lco.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__lco__InitialInst_86, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1364 "lco.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__lco__InitialInst_86, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1364 "lco.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__lco__InitialInst_86, 3) = ((MR_Box) (transform_hlds__lco__V_104_104));
#line 1364 "lco.m"
                          }
#line 1365 "lco.m"
                          {
#line 1365 "lco.m"
                            transform_hlds__lco__V_106_106 = parse_tree__prog_mode__ground_inst_0_f_0();
                          }
#line 1365 "lco.m"
                          {
#line 1365 "lco.m"
                            transform_hlds__lco__Mode_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1365 "lco.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__lco__Mode_66, 0) = ((MR_Box) (transform_hlds__lco__InitialInst_86));
#line 1365 "lco.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__lco__Mode_66, 1) = ((MR_Box) (transform_hlds__lco__V_106_106));
#line 1365 "lco.m"
                          }
#line 1358 "lco.m"
                        }
#line 1367 "lco.m"
                      transform_hlds__lco__V_109_109 = (transform_hlds__lco__NextOutArgNum_6 + (MR_Integer) 1);
#line 1367 "lco.m"
                      {
#line 1367 "lco.m"
                        transform_hlds__lco__make_addr_vars_12_p_0(transform_hlds__lco__V_132_132, transform_hlds__lco__Modes0_63, &transform_hlds__lco__HeadVars_65, &transform_hlds__lco__Modes_67, transform_hlds__lco__STATE_VARIABLE_AddrOutArgs_97_97, transform_hlds__lco__V_109_109, transform_hlds__lco__ModuleInfo_7, &transform_hlds__lco__VarToAddrTail_87, transform_hlds__lco__STATE_VARIABLE_VarSet_99_99, transform_hlds__lco__STATE_VARIABLE_VarSet_10, transform_hlds__lco__STATE_VARIABLE_VarTypes_108_108, transform_hlds__lco__STATE_VARIABLE_VarTypes_12);
                      }
#line 1370 "lco.m"
                      {
#line 1370 "lco.m"
                        transform_hlds__lco__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1370 "lco.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__lco__V_113_113, 0) = ((MR_Box) (transform_hlds__lco__HeadVar_64));
#line 1370 "lco.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__lco__V_113_113, 1) = ((MR_Box) (transform_hlds__lco__MaybeFieldId_77));
#line 1370 "lco.m"
                      }
#line 1370 "lco.m"
                      {
#line 1370 "lco.m"
                        transform_hlds__lco__VarToAddrHead_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1370 "lco.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__lco__VarToAddrHead_88, 0) = ((MR_Box) (transform_hlds__lco__V_133_133));
#line 1370 "lco.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__lco__VarToAddrHead_88, 1) = ((MR_Box) (transform_hlds__lco__V_113_113));
#line 1370 "lco.m"
                      }
#line 1371 "lco.m"
                      {
#line 1371 "lco.m"
                        MR_Word base;
#line 1371 "lco.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1371 "lco.m"
                        *transform_hlds__lco__HeadVar__8_8 = base;
#line 1371 "lco.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__VarToAddrHead_88));
#line 1371 "lco.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__VarToAddrTail_87));
#line 1371 "lco.m"
                      }
#line 1346 "lco.m"
                    }
#line 1341 "lco.m"
                  else
#line 1373 "lco.m"
                    {
#line 1373 "lco.m"
                      MR_Integer transform_hlds__lco__V_114_114;

#line 1373 "lco.m"
                      transform_hlds__lco__HeadVar_64 = transform_hlds__lco__V_133_133;
#line 1374 "lco.m"
                      transform_hlds__lco__Mode_66 = transform_hlds__lco__Mode0_62;
#line 1375 "lco.m"
                      transform_hlds__lco__V_114_114 = (transform_hlds__lco__NextOutArgNum_6 + (MR_Integer) 1);
#line 1375 "lco.m"
                      {
#line 1375 "lco.m"
                        transform_hlds__lco__make_addr_vars_12_p_0(transform_hlds__lco__V_132_132, transform_hlds__lco__Modes0_63, &transform_hlds__lco__HeadVars_65, &transform_hlds__lco__Modes_67, transform_hlds__lco__HeadVar__5_5, transform_hlds__lco__V_114_114, transform_hlds__lco__ModuleInfo_7, transform_hlds__lco__HeadVar__8_8, transform_hlds__lco__STATE_VARIABLE_VarSet_0_9, transform_hlds__lco__STATE_VARIABLE_VarSet_10, transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11, transform_hlds__lco__STATE_VARIABLE_VarTypes_12);
                      }
#line 1373 "lco.m"
                    }
#line 1341 "lco.m"
                }
#line 1340 "lco.m"
              else
#line 1380 "lco.m"
                {
#line 1381 "lco.m"
                  {
#line 1381 "lco.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.make_addr_vars\'/12", (MR_String) "top_unused");
#line 1381 "lco.m"
                    return;
                  }
#line 1380 "lco.m"
                }
#line 1331 "lco.m"
            {
#line 1331 "lco.m"
              MR_Word base;
#line 1331 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1331 "lco.m"
              *transform_hlds__lco__HeadVar__3_3 = base;
#line 1331 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__HeadVar_64));
#line 1331 "lco.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__HeadVars_65));
#line 1331 "lco.m"
            }
#line 1331 "lco.m"
            {
#line 1331 "lco.m"
              MR_Word base;
#line 1331 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1331 "lco.m"
              *transform_hlds__lco__HeadVar__4_4 = base;
#line 1331 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Mode_66));
#line 1331 "lco.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__Modes_67));
#line 1331 "lco.m"
            }
#line 1331 "lco.m"
          }
#line 1322 "lco.m"
      }
#line 1322 "lco.m"
  }
#line 1316 "lco.m"
}

#line 1271 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__occurs_once_2_p_0(
#line 1271 "lco.m"
  MR_Word transform_hlds__lco__Bag_3,
#line 1271 "lco.m"
  MR_Word transform_hlds__lco__Var_4)
#line 1271 "lco.m"
{
#line 1273 "lco.m"
  {
#line 1273 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1273 "lco.m"
    MR_Integer transform_hlds__lco__V_7_7;

#line 1274 "lco.m"
    {
#line 1274 "lco.m"
      mercury__bag__count_value_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[4], transform_hlds__lco__Bag_3, ((MR_Box) (transform_hlds__lco__Var_4)), &transform_hlds__lco__V_7_7);
    }
#line 1274 "lco.m"
    transform_hlds__lco__succeeded = ((MR_Integer) 1 == transform_hlds__lco__V_7_7);
#line 1273 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1273 "lco.m"
  }
#line 1271 "lco.m"
}

#line 1262 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_mode_2_p_0(
#line 1262 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_3,
#line 1262 "lco.m"
  MR_Word transform_hlds__lco__UniMode_4)
#line 1262 "lco.m"
{
#line 1264 "lco.m"
  {
#line 1264 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1264 "lco.m"
    MR_Word transform_hlds__lco__InitInstX_5;
#line 1264 "lco.m"
    MR_Word transform_hlds__lco__InitInstY_6;
#line 1264 "lco.m"
    MR_Word transform_hlds__lco__FinalInstX_7;
#line 1264 "lco.m"
    MR_Word transform_hlds__lco__FinalInstY_8;
#line 1264 "lco.m"
    MR_Word transform_hlds__lco__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_4, (MR_Integer) 0)));
#line 1264 "lco.m"
    MR_Word transform_hlds__lco__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_4, (MR_Integer) 1)));

#line 1265 "lco.m"
    transform_hlds__lco__InitInstX_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_9_9, (MR_Integer) 0)));
#line 1265 "lco.m"
    transform_hlds__lco__InitInstY_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_9_9, (MR_Integer) 1)));
#line 1265 "lco.m"
    transform_hlds__lco__FinalInstX_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_10_10, (MR_Integer) 0)));
#line 1265 "lco.m"
    transform_hlds__lco__FinalInstY_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_10_10, (MR_Integer) 1)));
#line 1266 "lco.m"
    {
#line 1266 "lco.m"
      transform_hlds__lco__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(transform_hlds__lco__ModuleInfo_3, transform_hlds__lco__InitInstX_5);
    }
#line 1264 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 1264 "lco.m"
      {
#line 1267 "lco.m"
        {
#line 1267 "lco.m"
          transform_hlds__lco__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(transform_hlds__lco__ModuleInfo_3, transform_hlds__lco__InitInstY_6);
        }
#line 1264 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1264 "lco.m"
          {
#line 1268 "lco.m"
            {
#line 1268 "lco.m"
              transform_hlds__lco__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(transform_hlds__lco__ModuleInfo_3, transform_hlds__lco__FinalInstX_7);
            }
#line 1264 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 1269 "lco.m"
              {
#line 1269 "lco.m"
                return transform_hlds__lco__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(transform_hlds__lco__ModuleInfo_3, transform_hlds__lco__FinalInstY_8);
              }
#line 1264 "lco.m"
          }
#line 1264 "lco.m"
      }
#line 1264 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1264 "lco.m"
  }
#line 1262 "lco.m"
}

#line 1252 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__bound_inst_with_free_arg_2_f_0(
#line 1252 "lco.m"
  MR_Word transform_hlds__lco__ConsId_4,
#line 1252 "lco.m"
  MR_Integer transform_hlds__lco__FreeArg_5)
#line 1252 "lco.m"
{
#line 1254 "lco.m"
  {
#line 1254 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1254 "lco.m"
    MR_Word transform_hlds__lco__Inst_6;
#line 1254 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_12_12;
#line 1254 "lco.m"
    MR_Integer transform_hlds__lco__Arity_7;
#line 1254 "lco.m"
    MR_Word transform_hlds__lco__ArgInsts0_8;
#line 1254 "lco.m"
    MR_Word transform_hlds__lco__ArgInsts_9;
#line 1254 "lco.m"
    MR_Word transform_hlds__lco__V_10_10;
#line 1254 "lco.m"
    MR_Word transform_hlds__lco__V_11_11;

#line 1255 "lco.m"
    {
#line 1255 "lco.m"
      transform_hlds__lco__Arity_7 = parse_tree__prog_util__cons_id_arity_1_f_0(transform_hlds__lco__ConsId_4);
    }
#line 1256 "lco.m"
    {
#line 1256 "lco.m"
      transform_hlds__lco__V_10_10 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 8399 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1256 "lco.m"
    {
#line 1256 "lco.m"
      mercury__list__duplicate_3_p_0(transform_hlds__lco__TypeCtorInfo_12_12, transform_hlds__lco__Arity_7, ((MR_Box) (transform_hlds__lco__V_10_10)), &transform_hlds__lco__ArgInsts0_8);
    }
#line 1257 "lco.m"
    {
#line 1257 "lco.m"
      transform_hlds__lco__V_11_11 = parse_tree__prog_mode__free_inst_0_f_0();
    }
#line 1257 "lco.m"
    {
#line 1257 "lco.m"
      mercury__list__det_replace_nth_4_p_0(transform_hlds__lco__TypeCtorInfo_12_12, transform_hlds__lco__ArgInsts0_8, transform_hlds__lco__FreeArg_5, ((MR_Box) (transform_hlds__lco__V_11_11)), &transform_hlds__lco__ArgInsts_9);
    }
#line 1258 "lco.m"
    {
#line 1258 "lco.m"
      transform_hlds__lco__Inst_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1258 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Inst_6, 0) = ((MR_Box) (transform_hlds__lco__ConsId_4));
#line 1258 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Inst_6, 1) = ((MR_Box) (transform_hlds__lco__ArgInsts_9));
#line 1258 "lco.m"
    }
#line 1254 "lco.m"
    return transform_hlds__lco__Inst_6;
#line 1254 "lco.m"
  }
#line 1252 "lco.m"
}

#line 1217 "lco.m"
static void MR_CALL 
transform_hlds__lco__update_construct_args_14_p_0(
#line 1217 "lco.m"
  MR_Word transform_hlds__lco__Subst_1,
#line 1217 "lco.m"
  MR_Word transform_hlds__lco__HighLevelData_2,
#line 1217 "lco.m"
  MR_Word transform_hlds__lco__VarType_3,
#line 1217 "lco.m"
  MR_Word transform_hlds__lco__ConsId_4,
#line 1217 "lco.m"
  MR_Integer transform_hlds__lco__ArgNum_5,
#line 1217 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__6_6,
#line 1217 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__7_7,
#line 1217 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__8_8,
#line 1217 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_InstMapDelta_0_9,
#line 1217 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_InstMapDelta_10,
#line 1217 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_0_11,
#line 1217 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_12,
#line 1217 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VarTypes_0_13,
#line 1217 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VarTypes_14)
#line 1217 "lco.m"
{
#line 1223 "lco.m"
  {
#line 1223 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1223 "lco.m"
    if ((transform_hlds__lco__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1223 "lco.m"
      {
#line 1223 "lco.m"
        *transform_hlds__lco__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1223 "lco.m"
        *transform_hlds__lco__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1223 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_VarTypes_14 = transform_hlds__lco__STATE_VARIABLE_VarTypes_0_13;
#line 1223 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_12 = transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_0_11;
#line 1223 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_InstMapDelta_10 = transform_hlds__lco__STATE_VARIABLE_InstMapDelta_0_9;
#line 1223 "lco.m"
      }
#line 1223 "lco.m"
    else
#line 1227 "lco.m"
      {
#line 1227 "lco.m"
        MR_Word transform_hlds__lco__OrigVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__6_6, (MR_Integer) 0)));
#line 1227 "lco.m"
        MR_Word transform_hlds__lco__OrigVars_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__6_6, (MR_Integer) 1)));
#line 1227 "lco.m"
        MR_Word transform_hlds__lco__UpdatedVar_36;
#line 1227 "lco.m"
        MR_Word transform_hlds__lco__UpdatedVars_37;
#line 1227 "lco.m"
        MR_Word transform_hlds__lco__AddrArgsTail_42;
#line 1227 "lco.m"
        MR_Integer transform_hlds__lco__V_52_52 = (transform_hlds__lco__ArgNum_5 + (MR_Integer) 1);
#line 1227 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_InstMapDelta_53_53;
#line 1227 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_54_54;
#line 1227 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_VarTypes_55_55;
#line 1247 "lco.m"
        MR_Word transform_hlds__lco__AddrVar_43;
#line 1231 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_65_65;
#line 1231 "lco.m"
        MR_Box transform_hlds__lco__conv0_AddrVar_43;

#line 1228 "lco.m"
        {
#line 1228 "lco.m"
          transform_hlds__lco__update_construct_args_14_p_0(transform_hlds__lco__Subst_1, transform_hlds__lco__HighLevelData_2, transform_hlds__lco__VarType_3, transform_hlds__lco__ConsId_4, transform_hlds__lco__V_52_52, transform_hlds__lco__OrigVars_35, &transform_hlds__lco__UpdatedVars_37, &transform_hlds__lco__AddrArgsTail_42, transform_hlds__lco__STATE_VARIABLE_InstMapDelta_0_9, &transform_hlds__lco__STATE_VARIABLE_InstMapDelta_53_53, transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_0_11, &transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_54_54, transform_hlds__lco__STATE_VARIABLE_VarTypes_0_13, &transform_hlds__lco__STATE_VARIABLE_VarTypes_55_55);
        }
#line 8521 "transform_hlds.lco.c"
        transform_hlds__lco__TypeInfo_65_65 = (MR_Word) &transform_hlds__lco_scalar_common_1[4];
#line 1231 "lco.m"
        {
#line 1231 "lco.m"
          transform_hlds__lco__succeeded = mercury__map__search_3_p_0(transform_hlds__lco__TypeInfo_65_65, transform_hlds__lco__TypeInfo_65_65, transform_hlds__lco__Subst_1, ((MR_Box) (transform_hlds__lco__OrigVar_34)), &transform_hlds__lco__conv0_AddrVar_43);
        }
#line 1231 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1231 "lco.m"
          {
#line 1231 "lco.m"
            transform_hlds__lco__AddrVar_43 = ((MR_Word) transform_hlds__lco__conv0_AddrVar_43);
#line 1231 "lco.m"
            transform_hlds__lco__succeeded = MR_TRUE;
#line 1231 "lco.m"
          }
#line 1247 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1232 "lco.m"
          {
#line 1232 "lco.m"
            MR_Word transform_hlds__lco__FinalInst_44;
#line 1232 "lco.m"
            MR_Word transform_hlds__lco__V_63_63;

#line 1232 "lco.m"
            transform_hlds__lco__UpdatedVar_36 = transform_hlds__lco__AddrVar_43;
#line 1236 "lco.m"
            if ((transform_hlds__lco__HighLevelData_2 == (MR_Integer) 0))
#line 1234 "lco.m"
              {
#line 1235 "lco.m"
                {
#line 1235 "lco.m"
                  transform_hlds__lco__FinalInst_44 = parse_tree__prog_mode__ground_inst_0_f_0();
                }
#line 1235 "lco.m"
                *transform_hlds__lco__STATE_VARIABLE_VarTypes_14 = transform_hlds__lco__STATE_VARIABLE_VarTypes_55_55;
#line 1234 "lco.m"
              }
#line 1236 "lco.m"
            else
#line 1237 "lco.m"
              {
#line 1237 "lco.m"
                MR_Word transform_hlds__lco__TypeCtorInfo_12_76;
#line 1237 "lco.m"
                MR_Word transform_hlds__lco__BoundInst_45;
#line 1237 "lco.m"
                MR_Word transform_hlds__lco__V_59_59;
#line 1237 "lco.m"
                MR_Integer transform_hlds__lco__Arity_71;
#line 1237 "lco.m"
                MR_Word transform_hlds__lco__ArgInsts0_72;
#line 1237 "lco.m"
                MR_Word transform_hlds__lco__ArgInsts_73;
#line 1237 "lco.m"
                MR_Word transform_hlds__lco__V_74_74;
#line 1237 "lco.m"
                MR_Word transform_hlds__lco__V_75_75;

#line 1255 "lco.m"
                {
#line 1255 "lco.m"
                  transform_hlds__lco__Arity_71 = parse_tree__prog_util__cons_id_arity_1_f_0(transform_hlds__lco__ConsId_4);
                }
#line 1256 "lco.m"
                {
#line 1256 "lco.m"
                  transform_hlds__lco__V_74_74 = parse_tree__prog_mode__ground_inst_0_f_0();
                }
#line 8593 "transform_hlds.lco.c"
                transform_hlds__lco__TypeCtorInfo_12_76 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1256 "lco.m"
                {
#line 1256 "lco.m"
                  mercury__list__duplicate_3_p_0(transform_hlds__lco__TypeCtorInfo_12_76, transform_hlds__lco__Arity_71, ((MR_Box) (transform_hlds__lco__V_74_74)), &transform_hlds__lco__ArgInsts0_72);
                }
#line 1257 "lco.m"
                {
#line 1257 "lco.m"
                  transform_hlds__lco__V_75_75 = parse_tree__prog_mode__free_inst_0_f_0();
                }
#line 1257 "lco.m"
                {
#line 1257 "lco.m"
                  mercury__list__det_replace_nth_4_p_0(transform_hlds__lco__TypeCtorInfo_12_76, transform_hlds__lco__ArgInsts0_72, transform_hlds__lco__ArgNum_5, ((MR_Box) (transform_hlds__lco__V_75_75)), &transform_hlds__lco__ArgInsts_73);
                }
#line 1258 "lco.m"
                {
#line 1258 "lco.m"
                  transform_hlds__lco__BoundInst_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1258 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__BoundInst_45, 0) = ((MR_Box) (transform_hlds__lco__ConsId_4));
#line 1258 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__BoundInst_45, 1) = ((MR_Box) (transform_hlds__lco__ArgInsts_73));
#line 1258 "lco.m"
                }
#line 1239 "lco.m"
                {
#line 1239 "lco.m"
                  transform_hlds__lco__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1239 "lco.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__lco__V_59_59, 0) = ((MR_Box) (transform_hlds__lco__BoundInst_45));
#line 1239 "lco.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__lco__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1239 "lco.m"
                }
#line 1239 "lco.m"
                {
#line 1239 "lco.m"
                  transform_hlds__lco__FinalInst_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1239 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__FinalInst_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1239 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__FinalInst_44, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1239 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__FinalInst_44, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1239 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__FinalInst_44, 3) = ((MR_Box) (transform_hlds__lco__V_59_59));
#line 1239 "lco.m"
                }
#line 1241 "lco.m"
                {
#line 1241 "lco.m"
                  parse_tree__prog_data__add_var_type_4_p_0(transform_hlds__lco__AddrVar_43, transform_hlds__lco__VarType_3, transform_hlds__lco__STATE_VARIABLE_VarTypes_55_55, transform_hlds__lco__STATE_VARIABLE_VarTypes_14);
                }
#line 1237 "lco.m"
              }
#line 1243 "lco.m"
            {
#line 1243 "lco.m"
              hlds__instmap__instmap_delta_set_var_4_p_0(transform_hlds__lco__AddrVar_43, transform_hlds__lco__FinalInst_44, transform_hlds__lco__STATE_VARIABLE_InstMapDelta_53_53, transform_hlds__lco__STATE_VARIABLE_InstMapDelta_10);
            }
#line 1244 "lco.m"
            {
#line 1244 "lco.m"
              transform_hlds__lco__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1244 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_63_63, 0) = ((MR_Box) (transform_hlds__lco__VarType_3));
#line 1244 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_63_63, 1) = ((MR_Box) (transform_hlds__lco__ConsId_4));
#line 1244 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_63_63, 2) = ((MR_Box) (transform_hlds__lco__ArgNum_5));
#line 1244 "lco.m"
            }
#line 1244 "lco.m"
            {
#line 1244 "lco.m"
              mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[4], (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0, ((MR_Box) (transform_hlds__lco__OrigVar_34)), ((MR_Box) (transform_hlds__lco__V_63_63)), transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_54_54, transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_12);
            }
#line 1246 "lco.m"
            {
#line 1246 "lco.m"
              MR_Word base;
#line 1246 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1246 "lco.m"
              *transform_hlds__lco__HeadVar__8_8 = base;
#line 1246 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__ArgNum_5));
#line 1246 "lco.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__AddrArgsTail_42));
#line 1246 "lco.m"
            }
#line 1232 "lco.m"
          }
#line 1247 "lco.m"
        else
#line 1248 "lco.m"
          {
#line 1248 "lco.m"
            transform_hlds__lco__UpdatedVar_36 = transform_hlds__lco__OrigVar_34;
#line 1249 "lco.m"
            *transform_hlds__lco__HeadVar__8_8 = transform_hlds__lco__AddrArgsTail_42;
#line 1249 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_VarTypes_14 = transform_hlds__lco__STATE_VARIABLE_VarTypes_55_55;
#line 1249 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_12 = transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_54_54;
#line 1249 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_InstMapDelta_10 = transform_hlds__lco__STATE_VARIABLE_InstMapDelta_53_53;
#line 1248 "lco.m"
          }
#line 1227 "lco.m"
        {
#line 1227 "lco.m"
          MR_Word base;
#line 1227 "lco.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1227 "lco.m"
          *transform_hlds__lco__HeadVar__7_7 = base;
#line 1227 "lco.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__UpdatedVar_36));
#line 1227 "lco.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__UpdatedVars_37));
#line 1227 "lco.m"
        }
#line 1227 "lco.m"
      }
#line 1223 "lco.m"
  }
#line 1217 "lco.m"
}

#line 1197 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__update_construct_8_p_0_1(
#line 1197 "lco.m"
  MR_Box transform_hlds__lco__closure_arg)
#line 1197 "lco.m"
{
#line 1197 "lco.m"
  {
#line 1197 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1197 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

#line 1197 "lco.m"
    {
#line 1197 "lco.m"
      return transform_hlds__lco__succeeded = transform_hlds__lco__IntroducedFrom__pred__update_construct__1197__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))));
    }
#line 1197 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1197 "lco.m"
  }
#line 1197 "lco.m"
}

#line 1151 "lco.m"
static void MR_CALL 
transform_hlds__lco__update_construct_8_p_0(
#line 1151 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_9,
#line 1151 "lco.m"
  MR_Word transform_hlds__lco__Subst_10,
#line 1151 "lco.m"
  MR_Word transform_hlds__lco__Goal0_11,
#line 1151 "lco.m"
  MR_Word * transform_hlds__lco__Goal_12,
#line 1151 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_AddrVarFieldIds_0_59,
#line 1151 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_AddrVarFieldIds_60,
#line 1151 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_61,
#line 1151 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_62)
#line 1151 "lco.m"
{
#line 1156 "lco.m"
  {
#line 1156 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1156 "lco.m"
    MR_Word transform_hlds__lco__GoalExpr0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal0_11, (MR_Integer) 0)));
#line 1156 "lco.m"
    MR_Word transform_hlds__lco__GoalInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal0_11, (MR_Integer) 1)));
#line 1213 "lco.m"
    MR_Word transform_hlds__lco__LHS_17;
#line 1213 "lco.m"
    MR_Word transform_hlds__lco__RHS0_18;
#line 1213 "lco.m"
    MR_Word transform_hlds__lco__Mode_19;
#line 1213 "lco.m"
    MR_Word transform_hlds__lco__UnifyContext_21;
#line 1213 "lco.m"
    MR_Word transform_hlds__lco__Var_22;
#line 1213 "lco.m"
    MR_Word transform_hlds__lco__ConsId_23;
#line 1213 "lco.m"
    MR_Word transform_hlds__lco__ArgVars_24;
#line 1213 "lco.m"
    MR_Word transform_hlds__lco__UniModes_25;
#line 1213 "lco.m"
    MR_Word transform_hlds__lco__How_26;
#line 1213 "lco.m"
    MR_Word transform_hlds__lco__IsUnique_27;
#line 1213 "lco.m"
    MR_Word transform_hlds__lco__TermSizeSlot_29;
#line 1159 "lco.m"
    MR_Word transform_hlds__lco__Unification0_20;
#line 1159 "lco.m"
    MR_Word transform_hlds__lco__SubInfo0_28;

#line 1159 "lco.m"
    transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_15)) == (MR_mktag((MR_Integer) 1)));
#line 1159 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 1159 "lco.m"
      {
#line 1159 "lco.m"
        transform_hlds__lco__LHS_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr0_15, (MR_Integer) 0)));
#line 1159 "lco.m"
        transform_hlds__lco__RHS0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr0_15, (MR_Integer) 1)));
#line 1159 "lco.m"
        transform_hlds__lco__Mode_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr0_15, (MR_Integer) 2)));
#line 1159 "lco.m"
        transform_hlds__lco__Unification0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr0_15, (MR_Integer) 3)));
#line 1159 "lco.m"
        transform_hlds__lco__UnifyContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr0_15, (MR_Integer) 4)));
#line 1160 "lco.m"
        transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__Unification0_20)) == (MR_mktag((MR_Integer) 0)));
#line 1160 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1160 "lco.m"
          {
#line 1160 "lco.m"
            transform_hlds__lco__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 0)));
#line 1160 "lco.m"
            transform_hlds__lco__ConsId_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 1)));
#line 1160 "lco.m"
            transform_hlds__lco__ArgVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 2)));
#line 1160 "lco.m"
            transform_hlds__lco__UniModes_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 3)));
#line 1160 "lco.m"
            transform_hlds__lco__How_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 4)));
#line 1160 "lco.m"
            transform_hlds__lco__IsUnique_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 5)));
#line 1160 "lco.m"
            transform_hlds__lco__SubInfo0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 6)));
#line 1165 "lco.m"
            if ((transform_hlds__lco__SubInfo0_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1164 "lco.m"
              {
#line 1164 "lco.m"
                transform_hlds__lco__TermSizeSlot_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1164 "lco.m"
                transform_hlds__lco__succeeded = MR_TRUE;
#line 1164 "lco.m"
              }
#line 1165 "lco.m"
            else
#line 1166 "lco.m"
              {
#line 1166 "lco.m"
                MR_Word transform_hlds__lco__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SubInfo0_28, (MR_Integer) 0)));

#line 1166 "lco.m"
                transform_hlds__lco__TermSizeSlot_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SubInfo0_28, (MR_Integer) 1)));
#line 1166 "lco.m"
                transform_hlds__lco__succeeded = (transform_hlds__lco__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1166 "lco.m"
              }
#line 1160 "lco.m"
          }
#line 1159 "lco.m"
      }
#line 1213 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 1174 "lco.m"
      {
#line 1174 "lco.m"
        MR_Word transform_hlds__lco__HighLevelData_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 7)));
#line 1174 "lco.m"
        MR_Word transform_hlds__lco__VarTypes0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 3)));
#line 1174 "lco.m"
        MR_Word transform_hlds__lco__VarType_32;
#line 1174 "lco.m"
        MR_Word transform_hlds__lco__InstMapDelta0_33;
#line 1174 "lco.m"
        MR_Word transform_hlds__lco__UpdatedArgVars_34;
#line 1174 "lco.m"
        MR_Word transform_hlds__lco__AddrFields_35;
#line 1174 "lco.m"
        MR_Word transform_hlds__lco__InstMapDelta_36;
#line 1174 "lco.m"
        MR_Word transform_hlds__lco__VarTypes_37;
#line 1174 "lco.m"
        MR_Word transform_hlds__lco__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 0)));
#line 1174 "lco.m"
        MR_Word transform_hlds__lco__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 1)));
#line 1174 "lco.m"
        MR_Word transform_hlds__lco__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 2)));
#line 1174 "lco.m"
        MR_Word transform_hlds__lco__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 3)));
#line 1174 "lco.m"
        MR_Word transform_hlds__lco__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 4)));
#line 1174 "lco.m"
        MR_Word transform_hlds__lco__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 5)));
#line 1174 "lco.m"
        MR_Word transform_hlds__lco__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 6)));
#line 1175 "lco.m"
        MR_Word transform_hlds__lco__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 0)));
#line 1175 "lco.m"
        MR_Word transform_hlds__lco__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 1)));
#line 1175 "lco.m"
        MR_Word transform_hlds__lco__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 2)));
#line 1175 "lco.m"
        MR_Word transform_hlds__lco__V_91_91 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 1175 "lco.m"
        MR_Word transform_hlds__lco__V_92_92 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1175 "lco.m"
        MR_Word transform_hlds__lco__V_93_93 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1181 "lco.m"
        MR_Word transform_hlds__lco__V_94_94;
#line 1181 "lco.m"
        MR_Word transform_hlds__lco__V_95_95;
#line 1181 "lco.m"
        MR_Word transform_hlds__lco__V_96_96;
#line 1181 "lco.m"
        MR_Word transform_hlds__lco__V_98_98;
#line 1181 "lco.m"
        MR_Word transform_hlds__lco__V_99_99;
#line 1181 "lco.m"
        MR_Word transform_hlds__lco__V_100_100;
#line 1181 "lco.m"
        MR_Word transform_hlds__lco__V_97_97;

#line 1176 "lco.m"
        {
#line 1176 "lco.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__lco__VarTypes0_31, transform_hlds__lco__Var_22, &transform_hlds__lco__VarType_32);
        }
#line 1177 "lco.m"
        {
#line 1177 "lco.m"
          transform_hlds__lco__InstMapDelta0_33 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__lco__GoalInfo0_16);
        }
#line 1178 "lco.m"
        {
#line 1178 "lco.m"
          transform_hlds__lco__update_construct_args_14_p_0(transform_hlds__lco__Subst_10, transform_hlds__lco__HighLevelData_30, transform_hlds__lco__VarType_32, transform_hlds__lco__ConsId_23, (MR_Integer) 1, transform_hlds__lco__ArgVars_24, &transform_hlds__lco__UpdatedArgVars_34, &transform_hlds__lco__AddrFields_35, transform_hlds__lco__InstMapDelta0_33, &transform_hlds__lco__InstMapDelta_36, transform_hlds__lco__STATE_VARIABLE_AddrVarFieldIds_0_59, transform_hlds__lco__STATE_VARIABLE_AddrVarFieldIds_60, transform_hlds__lco__VarTypes0_31, &transform_hlds__lco__VarTypes_37);
        }
#line 1181 "lco.m"
        transform_hlds__lco__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 0)));
#line 1181 "lco.m"
        transform_hlds__lco__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 1)));
#line 1181 "lco.m"
        transform_hlds__lco__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 2)));
#line 1181 "lco.m"
        transform_hlds__lco__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 3)));
#line 1181 "lco.m"
        transform_hlds__lco__V_98_98 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 1181 "lco.m"
        transform_hlds__lco__V_99_99 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1181 "lco.m"
        transform_hlds__lco__V_100_100 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1181 "lco.m"
        {
#line 1181 "lco.m"
          MR_Word base;
#line 1181 "lco.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1181 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_Info_62 = base;
#line 1181 "lco.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__V_94_94));
#line 1181 "lco.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__V_95_95));
#line 1181 "lco.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__V_96_96));
#line 1181 "lco.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lco__VarTypes_37));
#line 1181 "lco.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((transform_hlds__lco__V_98_98 | ((((transform_hlds__lco__V_99_99 << (MR_Integer) 1)) | ((transform_hlds__lco__V_100_100 << (MR_Integer) 2)))))));
#line 1181 "lco.m"
        }
#line 1185 "lco.m"
        if ((transform_hlds__lco__AddrFields_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1184 "lco.m"
          *transform_hlds__lco__Goal_12 = transform_hlds__lco__Goal0_11;
#line 1185 "lco.m"
        else
#line 1186 "lco.m"
          {
#line 1186 "lco.m"
            MR_Word transform_hlds__lco__SubInfo_40;
#line 1186 "lco.m"
            MR_Word transform_hlds__lco__Unification_41;
#line 1186 "lco.m"
            MR_Word transform_hlds__lco__RHS_47;
#line 1186 "lco.m"
            MR_Word transform_hlds__lco__GoalExpr_57;
#line 1186 "lco.m"
            MR_Word transform_hlds__lco__GoalInfo_58;
#line 1186 "lco.m"
            MR_Word transform_hlds__lco__V_67_67;

#line 1187 "lco.m"
            {
#line 1187 "lco.m"
              transform_hlds__lco__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1187 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__V_67_67, 0) = ((MR_Box) (transform_hlds__lco__AddrFields_35));
#line 1187 "lco.m"
            }
#line 1187 "lco.m"
            {
#line 1187 "lco.m"
              transform_hlds__lco__SubInfo_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1187 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__SubInfo_40, 0) = ((MR_Box) (transform_hlds__lco__V_67_67));
#line 1187 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__SubInfo_40, 1) = ((MR_Box) (transform_hlds__lco__TermSizeSlot_29));
#line 1187 "lco.m"
            }
#line 1188 "lco.m"
            {
#line 1188 "lco.m"
              transform_hlds__lco__Unification_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1188 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 0) = ((MR_Box) (transform_hlds__lco__Var_22));
#line 1188 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 1) = ((MR_Box) (transform_hlds__lco__ConsId_23));
#line 1188 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 2) = ((MR_Box) (transform_hlds__lco__UpdatedArgVars_34));
#line 1188 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 3) = ((MR_Box) (transform_hlds__lco__UniModes_25));
#line 1188 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 4) = ((MR_Box) (transform_hlds__lco__How_26));
#line 1188 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 5) = ((MR_Box) (transform_hlds__lco__IsUnique_27));
#line 1188 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 6) = ((MR_Box) (transform_hlds__lco__SubInfo_40));
#line 1188 "lco.m"
            }
#line 1195 "lco.m"
            if (((MR_tag((MR_Word) transform_hlds__lco__RHS0_18)) == (MR_mktag((MR_Integer) 1))))
#line 1196 "lco.m"
              {
#line 1196 "lco.m"
                MR_Word transform_hlds__lco__RHSConsId_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS0_18, (MR_Integer) 0)));
#line 1196 "lco.m"
                MR_Word transform_hlds__lco__IsExistConstr_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS0_18, (MR_Integer) 1)));
#line 1196 "lco.m"
                MR_Word transform_hlds__lco__RHSVars0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS0_18, (MR_Integer) 2)));
#line 1196 "lco.m"
                MR_Word transform_hlds__lco__RHSVars_46;
#line 1196 "lco.m"
                MR_Word transform_hlds__lco__V_71_71;

#line 1197 "lco.m"
                {
#line 1197 "lco.m"
                  transform_hlds__lco__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1197 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_71_71, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_7[5]));
#line 1197 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_71_71, 1) = ((MR_Box) (transform_hlds__lco__update_construct_8_p_0_1));
#line 1197 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1197 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_71_71, 3) = ((MR_Box) (transform_hlds__lco__ConsId_23));
#line 1197 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_71_71, 4) = ((MR_Box) (transform_hlds__lco__RHSConsId_43));
#line 1197 "lco.m"
                }
#line 1197 "lco.m"
                {
#line 1197 "lco.m"
                  mercury__require__expect_3_p_0(transform_hlds__lco__V_71_71, (MR_String) "transform_hlds.lco", (MR_String) "update_construct: cons_id mismatch");
                }
#line 1199 "lco.m"
                {
#line 1199 "lco.m"
                  parse_tree__prog_data__rename_var_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, transform_hlds__lco__Subst_10, transform_hlds__lco__RHSVars0_45, &transform_hlds__lco__RHSVars_46);
                }
#line 1200 "lco.m"
                {
#line 1200 "lco.m"
                  transform_hlds__lco__RHS_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1200 "lco.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS_47, 0) = ((MR_Box) (transform_hlds__lco__RHSConsId_43));
#line 1200 "lco.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS_47, 1) = ((MR_Box) (transform_hlds__lco__IsExistConstr_44));
#line 1200 "lco.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS_47, 2) = ((MR_Box) (transform_hlds__lco__RHSVars_46));
#line 1200 "lco.m"
                }
#line 1196 "lco.m"
              }
#line 1195 "lco.m"
            else
#line 1195 "lco.m"
              if (((MR_tag((MR_Word) transform_hlds__lco__RHS0_18)) == (MR_mktag((MR_Integer) 2))))
#line 1202 "lco.m"
                {
#line 1203 "lco.m"
                  {
#line 1203 "lco.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_construct\'/8", (MR_String) "lambda RHS");
#line 1203 "lco.m"
                    return;
                  }
#line 1202 "lco.m"
                }
#line 1195 "lco.m"
              else
#line 1193 "lco.m"
                {
#line 1194 "lco.m"
                  {
#line 1194 "lco.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_construct\'/8", (MR_String) "var RHS");
#line 1194 "lco.m"
                    return;
                  }
#line 1193 "lco.m"
                }
#line 1205 "lco.m"
            {
#line 1205 "lco.m"
              transform_hlds__lco__GoalExpr_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1205 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_57, 0) = ((MR_Box) (transform_hlds__lco__LHS_17));
#line 1205 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_57, 1) = ((MR_Box) (transform_hlds__lco__RHS_47));
#line 1205 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_57, 2) = ((MR_Box) (transform_hlds__lco__Mode_19));
#line 1205 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_57, 3) = ((MR_Box) (transform_hlds__lco__Unification_41));
#line 1205 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_57, 4) = ((MR_Box) (transform_hlds__lco__UnifyContext_21));
#line 1205 "lco.m"
            }
#line 1210 "lco.m"
            {
#line 1210 "lco.m"
              hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__lco__InstMapDelta_36, transform_hlds__lco__GoalInfo0_16, &transform_hlds__lco__GoalInfo_58);
            }
#line 1211 "lco.m"
            {
#line 1211 "lco.m"
              MR_Word base;
#line 1211 "lco.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1211 "lco.m"
              *transform_hlds__lco__Goal_12 = base;
#line 1211 "lco.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__GoalExpr_57));
#line 1211 "lco.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__GoalInfo_58));
#line 1211 "lco.m"
            }
#line 1186 "lco.m"
          }
#line 1174 "lco.m"
      }
#line 1213 "lco.m"
    else
#line 1214 "lco.m"
      {
#line 1214 "lco.m"
        {
#line 1214 "lco.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_construct\'/8", (MR_String) "not construct");
#line 1214 "lco.m"
          return;
        }
#line 1214 "lco.m"
      }
#line 1156 "lco.m"
  }
#line 1151 "lco.m"
}

#line 1136 "lco.m"
static void MR_CALL 
transform_hlds__lco__create_variant_name_4_p_0(
#line 1136 "lco.m"
  MR_Word transform_hlds__lco__PredOrFunc_5,
#line 1136 "lco.m"
  MR_Integer transform_hlds__lco__VariantNumber_6,
#line 1136 "lco.m"
  MR_String transform_hlds__lco__OrigName_7,
#line 1136 "lco.m"
  MR_String * transform_hlds__lco__VariantName_8)
#line 1136 "lco.m"
{
#line 1139 "lco.m"
  {
#line 1139 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1139 "lco.m"
    MR_String transform_hlds__lco__Prefix_9;
#line 1139 "lco.m"
    MR_String transform_hlds__lco__V_10_10;
#line 1139 "lco.m"
    MR_String transform_hlds__lco__V_11_11;
#line 1139 "lco.m"
    MR_String transform_hlds__lco__V_13_13;

#line 1143 "lco.m"
    if ((transform_hlds__lco__PredOrFunc_5 == (MR_Integer) 1))
#line 1142 "lco.m"
      transform_hlds__lco__Prefix_9 = (MR_String) "LCMCfn_";
#line 1143 "lco.m"
    else
#line 1145 "lco.m"
      transform_hlds__lco__Prefix_9 = (MR_String) "LCMCpr_";
#line 1147 "lco.m"
    {
#line 1147 "lco.m"
      transform_hlds__lco__V_13_13 = mercury__string__int_to_string_1_f_0(transform_hlds__lco__VariantNumber_6);
    }
#line 1147 "lco.m"
    {
#line 1147 "lco.m"
      transform_hlds__lco__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__lco__V_13_13);
    }
#line 1147 "lco.m"
    {
#line 1147 "lco.m"
      transform_hlds__lco__V_10_10 = mercury__string__f_43_43_2_f_0(transform_hlds__lco__OrigName_7, transform_hlds__lco__V_11_11);
    }
#line 1147 "lco.m"
    {
#line 1147 "lco.m"
      *transform_hlds__lco__VariantName_8 = mercury__string__f_43_43_2_f_0(transform_hlds__lco__Prefix_9, transform_hlds__lco__V_10_10);
    }
#line 1139 "lco.m"
  }
#line 1136 "lco.m"
}

#line 1099 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__match_existing_variant_3_p_0(
#line 1099 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 1099 "lco.m"
  MR_Word transform_hlds__lco__AddrArgNums_6,
#line 1099 "lco.m"
  MR_Word * transform_hlds__lco__Variant_7)
#line 1099 "lco.m"
{
#line 1102 "lco.m"
  while (MR_TRUE)
#line 1102 "lco.m"
    {
#line 1102 "lco.m"
      /* tailcall optimized into a loop */
#line 1102 "lco.m"
      {
#line 1102 "lco.m"
        MR_bool transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1102 "lco.m"
        MR_Word transform_hlds__lco__Variant0_4;
#line 1102 "lco.m"
        MR_Word transform_hlds__lco__Variants_5;
#line 1103 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_11_11;
#line 1103 "lco.m"
        MR_Word transform_hlds__lco__V_10_10;
#line 1103 "lco.m"
        MR_Word transform_hlds__lco__V_8_8;
#line 1103 "lco.m"
        MR_String transform_hlds__lco__V_9_9;

#line 1102 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1102 "lco.m"
          {
#line 1102 "lco.m"
            transform_hlds__lco__Variant0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 1102 "lco.m"
            transform_hlds__lco__Variants_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 1103 "lco.m"
            transform_hlds__lco__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Variant0_4, (MR_Integer) 0)));
#line 1103 "lco.m"
            transform_hlds__lco__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Variant0_4, (MR_Integer) 1)));
#line 1103 "lco.m"
            transform_hlds__lco__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Variant0_4, (MR_Integer) 2)));
#line 9287 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_11_11 = (MR_Word) &transform_hlds__lco_scalar_common_1[7];
#line 1103 "lco.m"
            {
#line 1103 "lco.m"
              transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_11_11, ((MR_Box) (transform_hlds__lco__AddrArgNums_6)), ((MR_Box) (transform_hlds__lco__V_10_10)));
            }
#line 1105 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 1104 "lco.m"
              {
#line 1104 "lco.m"
                *transform_hlds__lco__Variant_7 = transform_hlds__lco__Variant0_4;
#line 1104 "lco.m"
                transform_hlds__lco__succeeded = MR_TRUE;
#line 1104 "lco.m"
              }
#line 1105 "lco.m"
            else
#line 1106 "lco.m"
              {
#line 1106 "lco.m"
                /* direct tailcall eliminated */
#line 1106 "lco.m"
                {
#line 1106 "lco.m"
                  MR_Word transform_hlds__lco__HeadVar__1__tmp_copy_1 = transform_hlds__lco__Variants_5;

#line 1106 "lco.m"
                  transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__HeadVar__1__tmp_copy_1;
#line 1106 "lco.m"
                }
#line 1106 "lco.m"
                continue;
#line 1106 "lco.m"
              }
#line 1102 "lco.m"
          }
#line 1102 "lco.m"
        return transform_hlds__lco__succeeded;
#line 1102 "lco.m"
      }
#line 1102 "lco.m"
      break;
#line 1102 "lco.m"
    }
#line 1099 "lco.m"
}

#line 1059 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__ensure_variant_exists_8_p_0(
#line 1059 "lco.m"
  MR_Word transform_hlds__lco__PredId_9,
#line 1059 "lco.m"
  MR_Integer transform_hlds__lco__ProcId_10,
#line 1059 "lco.m"
  MR_Word transform_hlds__lco__AddrArgNums_11,
#line 1059 "lco.m"
  MR_Word * transform_hlds__lco__VariantPredProcId_12,
#line 1059 "lco.m"
  MR_Word transform_hlds__lco__SymName_13,
#line 1059 "lco.m"
  MR_Word * transform_hlds__lco__VariantSymName_14,
#line 1059 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_30,
#line 1059 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_31)
#line 1059 "lco.m"
{
#line 1064 "lco.m"
  {
#line 1064 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1064 "lco.m"
    MR_Word transform_hlds__lco__PredProcId_16;
#line 1064 "lco.m"
    MR_Word transform_hlds__lco__CurSCCVariants0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 1)));
#line 1066 "lco.m"
    MR_Word transform_hlds__lco__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 0)));
#line 1066 "lco.m"
    MR_Word transform_hlds__lco__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 2)));
#line 1066 "lco.m"
    MR_Word transform_hlds__lco__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 3)));
#line 1066 "lco.m"
    MR_Word transform_hlds__lco__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 1066 "lco.m"
    MR_Word transform_hlds__lco__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1066 "lco.m"
    MR_Word transform_hlds__lco__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1073 "lco.m"
    MR_Word transform_hlds__lco__ExistingVariant_19;
#line 1068 "lco.m"
    MR_Word transform_hlds__lco__ExistingVariants_18;

#line 1065 "lco.m"
    {
#line 1065 "lco.m"
      transform_hlds__lco__PredProcId_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1065 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__PredProcId_16, 0) = ((MR_Box) (transform_hlds__lco__PredId_9));
#line 1065 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__PredProcId_16, 1) = ((MR_Box) (transform_hlds__lco__ProcId_10));
#line 1065 "lco.m"
    }
#line 1068 "lco.m"
    {
#line 1068 "lco.m"
      transform_hlds__lco__succeeded = mercury__multi_map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0, transform_hlds__lco__CurSCCVariants0_17, ((MR_Box) (transform_hlds__lco__PredProcId_16)), &transform_hlds__lco__ExistingVariants_18);
    }
#line 1068 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 1069 "lco.m"
      {
#line 1069 "lco.m"
        transform_hlds__lco__succeeded = transform_hlds__lco__match_existing_variant_3_p_0(transform_hlds__lco__ExistingVariants_18, transform_hlds__lco__AddrArgNums_11, &transform_hlds__lco__ExistingVariant_19);
      }
#line 1073 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 1071 "lco.m"
      {
#line 1071 "lco.m"
        MR_String transform_hlds__lco__VariantName_78;
#line 1113 "lco.m"
        MR_Word transform_hlds__lco__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ExistingVariant_19, (MR_Integer) 0)));

#line 1113 "lco.m"
        *transform_hlds__lco__VariantPredProcId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ExistingVariant_19, (MR_Integer) 1)));
#line 1113 "lco.m"
        transform_hlds__lco__VariantName_78 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ExistingVariant_19, (MR_Integer) 2)));
#line 1117 "lco.m"
        if (((MR_tag((MR_Word) transform_hlds__lco__SymName_13)) == (MR_mktag((MR_Integer) 1))))
#line 1118 "lco.m"
          {
#line 1118 "lco.m"
            MR_Word transform_hlds__lco__ModuleName_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SymName_13, (MR_Integer) 0)));
#line 1118 "lco.m"
            MR_String transform_hlds__lco___Name_81 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SymName_13, (MR_Integer) 1)));

#line 1119 "lco.m"
            {
#line 1119 "lco.m"
              MR_Word base;
#line 1119 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1119 "lco.m"
              *transform_hlds__lco__VariantSymName_14 = base;
#line 1119 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__ModuleName_80));
#line 1119 "lco.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__VariantName_78));
#line 1119 "lco.m"
            }
#line 1118 "lco.m"
          }
#line 1117 "lco.m"
        else
#line 1116 "lco.m"
          {
#line 1116 "lco.m"
            MR_Word base;
#line 1116 "lco.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1116 "lco.m"
            *transform_hlds__lco__VariantSymName_14 = base;
#line 1116 "lco.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__VariantName_78));
#line 1116 "lco.m"
          }
#line 1071 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_Info_31 = transform_hlds__lco__STATE_VARIABLE_Info_0_30;
#line 1071 "lco.m"
        transform_hlds__lco__succeeded = MR_TRUE;
#line 1071 "lco.m"
      }
#line 1073 "lco.m"
    else
#line 1074 "lco.m"
      {
#line 1074 "lco.m"
        MR_Word transform_hlds__lco__TypeCtorInfo_71_71;
#line 1074 "lco.m"
        MR_Word transform_hlds__lco__TypeCtorInfo_72_72;
#line 1074 "lco.m"
        MR_Word transform_hlds__lco__ModuleInfo0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 0)));
#line 1074 "lco.m"
        MR_Word transform_hlds__lco__ClonePredId_21;
#line 1074 "lco.m"
        MR_Word transform_hlds__lco__PredOrFunc_22;
#line 1074 "lco.m"
        MR_Word transform_hlds__lco__ModuleInfo_23;
#line 1074 "lco.m"
        MR_Integer transform_hlds__lco__VariantNumber_24;
#line 1074 "lco.m"
        MR_String transform_hlds__lco__VariantName_26;
#line 1074 "lco.m"
        MR_Word transform_hlds__lco__NewVariant_28;
#line 1074 "lco.m"
        MR_Word transform_hlds__lco__CurSCCVariants_29;
#line 1074 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_Info_32_32;
#line 1074 "lco.m"
        MR_Word transform_hlds__lco__PredInfo_89;
#line 1074 "lco.m"
        MR_Word transform_hlds__lco__PredTable0_90;
#line 1074 "lco.m"
        MR_Word transform_hlds__lco__PredTable_91;
#line 1074 "lco.m"
        MR_Word transform_hlds__lco__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 1)));
#line 1074 "lco.m"
        MR_Word transform_hlds__lco__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 2)));
#line 1074 "lco.m"
        MR_Word transform_hlds__lco__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 3)));
#line 1074 "lco.m"
        MR_Word transform_hlds__lco__V_49_49 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 1074 "lco.m"
        MR_Word transform_hlds__lco__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1074 "lco.m"
        MR_Word transform_hlds__lco__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1078 "lco.m"
        MR_Word transform_hlds__lco__V_53_53;
#line 1078 "lco.m"
        MR_Word transform_hlds__lco__V_54_54;
#line 1078 "lco.m"
        MR_Word transform_hlds__lco__V_55_55;
#line 1078 "lco.m"
        MR_Word transform_hlds__lco__V_56_56;
#line 1078 "lco.m"
        MR_Word transform_hlds__lco__V_57_57;
#line 1078 "lco.m"
        MR_Word transform_hlds__lco__V_58_58;
#line 1078 "lco.m"
        MR_Word transform_hlds__lco__V_52_52;
#line 1081 "lco.m"
        MR_Word transform_hlds__lco__ExistingVariants_37;
#line 1096 "lco.m"
        MR_Word transform_hlds__lco__V_59_59;
#line 1096 "lco.m"
        MR_Word transform_hlds__lco__V_61_61;
#line 1096 "lco.m"
        MR_Word transform_hlds__lco__V_62_62;
#line 1096 "lco.m"
        MR_Word transform_hlds__lco__V_63_63;
#line 1096 "lco.m"
        MR_Word transform_hlds__lco__V_64_64;
#line 1096 "lco.m"
        MR_Word transform_hlds__lco__V_65_65;
#line 1096 "lco.m"
        MR_Word transform_hlds__lco__V_60_60;

#line 1130 "lco.m"
        {
#line 1130 "lco.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__lco__ModuleInfo0_20, transform_hlds__lco__PredId_9, &transform_hlds__lco__PredInfo_89);
        }
#line 1131 "lco.m"
        {
#line 1131 "lco.m"
          transform_hlds__lco__PredOrFunc_22 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__lco__PredInfo_89);
        }
#line 1132 "lco.m"
        {
#line 1132 "lco.m"
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__lco__ModuleInfo0_20, &transform_hlds__lco__PredTable0_90);
        }
#line 1133 "lco.m"
        {
#line 1133 "lco.m"
          hlds__pred_table__predicate_table_insert_4_p_0(transform_hlds__lco__PredInfo_89, &transform_hlds__lco__ClonePredId_21, transform_hlds__lco__PredTable0_90, &transform_hlds__lco__PredTable_91);
        }
#line 1134 "lco.m"
        {
#line 1134 "lco.m"
          hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__lco__PredTable_91, transform_hlds__lco__ModuleInfo0_20, &transform_hlds__lco__ModuleInfo_23);
        }
#line 1077 "lco.m"
        {
#line 1077 "lco.m"
          MR_Word base;
#line 1077 "lco.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1077 "lco.m"
          *transform_hlds__lco__VariantPredProcId_12 = base;
#line 1077 "lco.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__ClonePredId_21));
#line 1077 "lco.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__ProcId_10));
#line 1077 "lco.m"
        }
#line 1078 "lco.m"
        transform_hlds__lco__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 0)));
#line 1078 "lco.m"
        transform_hlds__lco__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 1)));
#line 1078 "lco.m"
        transform_hlds__lco__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 2)));
#line 1078 "lco.m"
        transform_hlds__lco__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 3)));
#line 1078 "lco.m"
        transform_hlds__lco__V_56_56 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 1078 "lco.m"
        transform_hlds__lco__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1078 "lco.m"
        transform_hlds__lco__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1078 "lco.m"
        {
#line 1078 "lco.m"
          transform_hlds__lco__STATE_VARIABLE_Info_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1078 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, 0) = ((MR_Box) (transform_hlds__lco__ModuleInfo_23));
#line 1078 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, 1) = ((MR_Box) (transform_hlds__lco__V_53_53));
#line 1078 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, 2) = ((MR_Box) (transform_hlds__lco__V_54_54));
#line 1078 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, 3) = ((MR_Box) (transform_hlds__lco__V_55_55));
#line 1078 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, 4) = ((MR_Box) ((transform_hlds__lco__V_56_56 | ((((transform_hlds__lco__V_57_57 << (MR_Integer) 1)) | ((transform_hlds__lco__V_58_58 << (MR_Integer) 2)))))));
#line 1078 "lco.m"
        }
#line 1079 "lco.m"
        {
#line 1079 "lco.m"
          transform_hlds__lco__succeeded = mercury__multi_map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0, transform_hlds__lco__CurSCCVariants0_17, ((MR_Box) (transform_hlds__lco__PredProcId_16)), &transform_hlds__lco__ExistingVariants_37);
        }
#line 1081 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1080 "lco.m"
          {
#line 1080 "lco.m"
            MR_Integer transform_hlds__lco__V_33_33;

#line 1080 "lco.m"
            {
#line 1080 "lco.m"
              transform_hlds__lco__V_33_33 = mercury__list__length_1_f_0((MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0, transform_hlds__lco__ExistingVariants_37);
            }
#line 1080 "lco.m"
            transform_hlds__lco__VariantNumber_24 = (transform_hlds__lco__V_33_33 + (MR_Integer) 1);
#line 1080 "lco.m"
          }
#line 1081 "lco.m"
        else
#line 1082 "lco.m"
          transform_hlds__lco__VariantNumber_24 = (MR_Integer) 1;
#line 1084 "lco.m"
        transform_hlds__lco__succeeded = (transform_hlds__lco__VariantNumber_24 <= (MR_Integer) 4);
#line 1074 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1074 "lco.m"
          {
#line 1089 "lco.m"
            if (((MR_tag((MR_Word) transform_hlds__lco__SymName_13)) == (MR_mktag((MR_Integer) 1))))
#line 1090 "lco.m"
              {
#line 1090 "lco.m"
                MR_Word transform_hlds__lco__ModuleName_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SymName_13, (MR_Integer) 0)));
#line 1090 "lco.m"
                MR_String transform_hlds__lco__Name_38 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SymName_13, (MR_Integer) 1)));

#line 1091 "lco.m"
                {
#line 1091 "lco.m"
                  transform_hlds__lco__create_variant_name_4_p_0(transform_hlds__lco__PredOrFunc_22, transform_hlds__lco__VariantNumber_24, transform_hlds__lco__Name_38, &transform_hlds__lco__VariantName_26);
                }
#line 1092 "lco.m"
                {
#line 1092 "lco.m"
                  MR_Word base;
#line 1092 "lco.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1092 "lco.m"
                  *transform_hlds__lco__VariantSymName_14 = base;
#line 1092 "lco.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__ModuleName_27));
#line 1092 "lco.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__VariantName_26));
#line 1092 "lco.m"
                }
#line 1090 "lco.m"
              }
#line 1089 "lco.m"
            else
#line 1086 "lco.m"
              {
#line 1086 "lco.m"
                MR_String transform_hlds__lco__Name_25 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__SymName_13, (MR_Integer) 0)));

#line 1087 "lco.m"
                {
#line 1087 "lco.m"
                  transform_hlds__lco__create_variant_name_4_p_0(transform_hlds__lco__PredOrFunc_22, transform_hlds__lco__VariantNumber_24, transform_hlds__lco__Name_25, &transform_hlds__lco__VariantName_26);
                }
#line 1088 "lco.m"
                {
#line 1088 "lco.m"
                  MR_Word base;
#line 1088 "lco.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1088 "lco.m"
                  *transform_hlds__lco__VariantSymName_14 = base;
#line 1088 "lco.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__VariantName_26));
#line 1088 "lco.m"
                }
#line 1086 "lco.m"
              }
#line 9693 "transform_hlds.lco.c"
            transform_hlds__lco__TypeCtorInfo_71_71 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 9695 "transform_hlds.lco.c"
            transform_hlds__lco__TypeCtorInfo_72_72 = (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0;
#line 1094 "lco.m"
            {
#line 1094 "lco.m"
              transform_hlds__lco__NewVariant_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1094 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__NewVariant_28, 0) = ((MR_Box) (transform_hlds__lco__AddrArgNums_11));
#line 1094 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__NewVariant_28, 1) = ((MR_Box) (*transform_hlds__lco__VariantPredProcId_12));
#line 1094 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__NewVariant_28, 2) = ((MR_Box) (transform_hlds__lco__VariantName_26));
#line 1094 "lco.m"
            }
#line 1095 "lco.m"
            {
#line 1095 "lco.m"
              mercury__multi_map__set_4_p_0(transform_hlds__lco__TypeCtorInfo_71_71, transform_hlds__lco__TypeCtorInfo_72_72, ((MR_Box) (transform_hlds__lco__PredProcId_16)), ((MR_Box) (transform_hlds__lco__NewVariant_28)), transform_hlds__lco__CurSCCVariants0_17, &transform_hlds__lco__CurSCCVariants_29);
            }
#line 1096 "lco.m"
            transform_hlds__lco__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 0)));
#line 1096 "lco.m"
            transform_hlds__lco__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 1)));
#line 1096 "lco.m"
            transform_hlds__lco__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 2)));
#line 1096 "lco.m"
            transform_hlds__lco__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 3)));
#line 1096 "lco.m"
            transform_hlds__lco__V_63_63 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 1096 "lco.m"
            transform_hlds__lco__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1096 "lco.m"
            transform_hlds__lco__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1096 "lco.m"
            {
#line 1096 "lco.m"
              MR_Word base;
#line 1096 "lco.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1096 "lco.m"
              *transform_hlds__lco__STATE_VARIABLE_Info_31 = base;
#line 1096 "lco.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__V_59_59));
#line 1096 "lco.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__CurSCCVariants_29));
#line 1096 "lco.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__V_61_61));
#line 1096 "lco.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lco__V_62_62));
#line 1096 "lco.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((transform_hlds__lco__V_63_63 | ((((transform_hlds__lco__V_64_64 << (MR_Integer) 1)) | ((transform_hlds__lco__V_65_65 << (MR_Integer) 2)))))));
#line 1096 "lco.m"
            }
#line 1096 "lco.m"
            transform_hlds__lco__succeeded = MR_TRUE;
#line 1074 "lco.m"
          }
#line 1074 "lco.m"
      }
#line 1064 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1064 "lco.m"
  }
#line 1059 "lco.m"
}

#line 1053 "lco.m"
static MR_Box MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0_2(
#line 1053 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1053 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1)
#line 1053 "lco.m"
{
#line 1053 "lco.m"
  {
#line 1053 "lco.m"
    MR_Box transform_hlds__lco__wrapper_arg_2;
#line 1053 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 1053 "lco.m"
    MR_Word transform_hlds__lco__conv1_HeadVar__3_15;

#line 1053 "lco.m"
    {
#line 1053 "lco.m"
      transform_hlds__lco__conv1_HeadVar__3_15 = transform_hlds__lco__IntroducedFrom__func__make_variant_args__1053__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
#line 1053 "lco.m"
    transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv1_HeadVar__3_15));
#line 1053 "lco.m"
    return transform_hlds__lco__wrapper_arg_2;
#line 1053 "lco.m"
  }
#line 1053 "lco.m"
}

#line 1050 "lco.m"
static MR_Box MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0_1(
#line 1050 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1050 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1)
#line 1050 "lco.m"
{
#line 1050 "lco.m"
  {
#line 1050 "lco.m"
    MR_Box transform_hlds__lco__wrapper_arg_2;
#line 1050 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 1050 "lco.m"
    MR_Word transform_hlds__lco__conv0_HeadVar__2_18;

#line 1050 "lco.m"
    {
#line 1050 "lco.m"
      transform_hlds__lco__conv0_HeadVar__2_18 = transform_hlds__lco__IntroducedFrom__func__make_variant_args__1050__1_1_f_0(((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
#line 1050 "lco.m"
    transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__2_18));
#line 1050 "lco.m"
    return transform_hlds__lco__wrapper_arg_2;
#line 1050 "lco.m"
  }
#line 1050 "lco.m"
}

#line 1044 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0(
#line 1044 "lco.m"
  MR_Word transform_hlds__lco__HighLevelData_5,
#line 1044 "lco.m"
  MR_Word transform_hlds__lco__AddrVarFieldIds_6,
#line 1044 "lco.m"
  MR_Word transform_hlds__lco__Mismatches_7,
#line 1044 "lco.m"
  MR_Word * transform_hlds__lco__VariantArgs_8)
#line 1044 "lco.m"
{
#line 1047 "lco.m"
  {
#line 1047 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1047 "lco.m"
    MR_Word transform_hlds__lco__MakeArg_9;

#line 1051 "lco.m"
    if ((transform_hlds__lco__HighLevelData_5 == (MR_Integer) 0))
#line 1050 "lco.m"
      transform_hlds__lco__MakeArg_9 = (MR_Word) &transform_hlds__lco_scalar_common_2[11];
#line 1051 "lco.m"
    else
#line 1053 "lco.m"
      {
#line 1053 "lco.m"
        transform_hlds__lco__MakeArg_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1053 "lco.m"
        MR_hl_field(MR_mktag(0), transform_hlds__lco__MakeArg_9, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_5[1]));
#line 1053 "lco.m"
        MR_hl_field(MR_mktag(0), transform_hlds__lco__MakeArg_9, 1) = ((MR_Box) (transform_hlds__lco__make_variant_args_4_p_0_2));
#line 1053 "lco.m"
        MR_hl_field(MR_mktag(0), transform_hlds__lco__MakeArg_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1053 "lco.m"
        MR_hl_field(MR_mktag(0), transform_hlds__lco__MakeArg_9, 3) = ((MR_Box) (transform_hlds__lco__AddrVarFieldIds_6));
#line 1053 "lco.m"
      }
#line 1057 "lco.m"
    {
#line 1057 "lco.m"
      *transform_hlds__lco__VariantArgs_8 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__lco_scalar_common_2[4], (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0, transform_hlds__lco__MakeArg_9, transform_hlds__lco__Mismatches_7);
    }
#line 1047 "lco.m"
  }
#line 1044 "lco.m"
}

#line 1035 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__make_ref_type_1_f_0(
#line 1035 "lco.m"
  MR_Word transform_hlds__lco__FieldType_3)
#line 1035 "lco.m"
{
#line 1037 "lco.m"
  {
#line 1037 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1037 "lco.m"
    MR_Word transform_hlds__lco__PtrType_4;
#line 1037 "lco.m"
    MR_Word transform_hlds__lco__RefTypeName_5;
#line 1037 "lco.m"
    MR_Word transform_hlds__lco__V_6_6;
#line 1037 "lco.m"
    MR_Word transform_hlds__lco__V_8_8;

#line 1038 "lco.m"
    {
#line 1038 "lco.m"
      transform_hlds__lco__V_6_6 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
    }
#line 1038 "lco.m"
    {
#line 1038 "lco.m"
      transform_hlds__lco__RefTypeName_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1038 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__RefTypeName_5, 0) = ((MR_Box) (transform_hlds__lco__V_6_6));
#line 1038 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__RefTypeName_5, 1) = ((MR_Box) ((MR_String) "store_at_ref_type"));
#line 1038 "lco.m"
    }
#line 1040 "lco.m"
    {
#line 1040 "lco.m"
      transform_hlds__lco__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1040 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__V_8_8, 0) = ((MR_Box) (transform_hlds__lco__FieldType_3));
#line 1040 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__V_8_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1040 "lco.m"
    }
#line 1040 "lco.m"
    {
#line 1040 "lco.m"
      transform_hlds__lco__PtrType_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1040 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__PtrType_4, 0) = ((MR_Box) (transform_hlds__lco__RefTypeName_5));
#line 1040 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__PtrType_4, 1) = ((MR_Box) (transform_hlds__lco__V_8_8));
#line 1040 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__PtrType_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1040 "lco.m"
    }
#line 1037 "lco.m"
    return transform_hlds__lco__PtrType_4;
#line 1037 "lco.m"
  }
#line 1035 "lco.m"
}

#line 1012 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_address_var_5_p_0(
#line 1012 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_6,
#line 1012 "lco.m"
  MR_Word transform_hlds__lco__Var_7,
#line 1012 "lco.m"
  MR_Word * transform_hlds__lco__AddrVar_8,
#line 1012 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_19,
#line 1012 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_20)
#line 1012 "lco.m"
{
#line 1015 "lco.m"
  {
#line 1015 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1015 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_58_58 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1015 "lco.m"
    MR_Word transform_hlds__lco__VarSet0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 2)));
#line 1015 "lco.m"
    MR_Word transform_hlds__lco__VarTypes0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 3)));
#line 1015 "lco.m"
    MR_String transform_hlds__lco__Name_12;
#line 1015 "lco.m"
    MR_String transform_hlds__lco__AddrName_13;
#line 1015 "lco.m"
    MR_Word transform_hlds__lco__VarSet_14;
#line 1015 "lco.m"
    MR_Word transform_hlds__lco__HighLevelData_15;
#line 1015 "lco.m"
    MR_Word transform_hlds__lco__VarTypes_18;
#line 1015 "lco.m"
    MR_Word transform_hlds__lco__V_44_44;
#line 1015 "lco.m"
    MR_Word transform_hlds__lco__V_45_45;
#line 1015 "lco.m"
    MR_Word transform_hlds__lco__V_48_48;
#line 1015 "lco.m"
    MR_Word transform_hlds__lco__V_49_49;
#line 1015 "lco.m"
    MR_Word transform_hlds__lco__V_50_50;
#line 1016 "lco.m"
    MR_Word transform_hlds__lco__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 0)));
#line 1016 "lco.m"
    MR_Word transform_hlds__lco__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 1)));
#line 1016 "lco.m"
    MR_Word transform_hlds__lco__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 1016 "lco.m"
    MR_Word transform_hlds__lco__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1016 "lco.m"
    MR_Word transform_hlds__lco__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1021 "lco.m"
    MR_Word transform_hlds__lco__V_37_37;
#line 1021 "lco.m"
    MR_Word transform_hlds__lco__V_38_38;
#line 1021 "lco.m"
    MR_Word transform_hlds__lco__V_39_39;
#line 1021 "lco.m"
    MR_Word transform_hlds__lco__V_40_40;
#line 1021 "lco.m"
    MR_Word transform_hlds__lco__V_41_41;
#line 1021 "lco.m"
    MR_Word transform_hlds__lco__V_42_42;
#line 1021 "lco.m"
    MR_Word transform_hlds__lco__V_43_43;
#line 1032 "lco.m"
    MR_Word transform_hlds__lco__V_46_46;
#line 1032 "lco.m"
    MR_Word transform_hlds__lco__V_47_47;

#line 1018 "lco.m"
    {
#line 1018 "lco.m"
      mercury__varset__lookup_name_4_p_0(transform_hlds__lco__TypeCtorInfo_58_58, transform_hlds__lco__VarSet0_10, transform_hlds__lco__Var_7, (MR_String) "SCCcallarg", &transform_hlds__lco__Name_12);
    }
#line 1019 "lco.m"
    {
#line 1019 "lco.m"
      transform_hlds__lco__AddrName_13 = mercury__string__f_43_43_2_f_0((MR_String) "Addr", transform_hlds__lco__Name_12);
    }
#line 1020 "lco.m"
    {
#line 1020 "lco.m"
      mercury__varset__new_named_var_4_p_0(transform_hlds__lco__TypeCtorInfo_58_58, transform_hlds__lco__AddrName_13, transform_hlds__lco__AddrVar_8, transform_hlds__lco__VarSet0_10, &transform_hlds__lco__VarSet_14);
    }
#line 1021 "lco.m"
    transform_hlds__lco__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 0)));
#line 1021 "lco.m"
    transform_hlds__lco__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 1)));
#line 1021 "lco.m"
    transform_hlds__lco__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 2)));
#line 1021 "lco.m"
    transform_hlds__lco__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 3)));
#line 1021 "lco.m"
    transform_hlds__lco__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 4)));
#line 1021 "lco.m"
    transform_hlds__lco__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 5)));
#line 1021 "lco.m"
    transform_hlds__lco__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)));
#line 1021 "lco.m"
    transform_hlds__lco__HighLevelData_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 7)));
#line 1027 "lco.m"
    if ((transform_hlds__lco__HighLevelData_15 == (MR_Integer) 0))
#line 1023 "lco.m"
      {
#line 1023 "lco.m"
        MR_Word transform_hlds__lco__FieldType_16;
#line 1023 "lco.m"
        MR_Word transform_hlds__lco__AddrVarType_17;
#line 1023 "lco.m"
        MR_Word transform_hlds__lco__RefTypeName_61;
#line 1023 "lco.m"
        MR_Word transform_hlds__lco__V_62_62;
#line 1023 "lco.m"
        MR_Word transform_hlds__lco__V_64_64;

#line 1024 "lco.m"
        {
#line 1024 "lco.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__lco__VarTypes0_11, transform_hlds__lco__Var_7, &transform_hlds__lco__FieldType_16);
        }
#line 1038 "lco.m"
        {
#line 1038 "lco.m"
          transform_hlds__lco__V_62_62 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
        }
#line 1038 "lco.m"
        {
#line 1038 "lco.m"
          transform_hlds__lco__RefTypeName_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1038 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__RefTypeName_61, 0) = ((MR_Box) (transform_hlds__lco__V_62_62));
#line 1038 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__RefTypeName_61, 1) = ((MR_Box) ((MR_String) "store_at_ref_type"));
#line 1038 "lco.m"
        }
#line 1040 "lco.m"
        {
#line 1040 "lco.m"
          transform_hlds__lco__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1040 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_64_64, 0) = ((MR_Box) (transform_hlds__lco__FieldType_16));
#line 1040 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1040 "lco.m"
        }
#line 1040 "lco.m"
        {
#line 1040 "lco.m"
          transform_hlds__lco__AddrVarType_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1040 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__AddrVarType_17, 0) = ((MR_Box) (transform_hlds__lco__RefTypeName_61));
#line 1040 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__AddrVarType_17, 1) = ((MR_Box) (transform_hlds__lco__V_64_64));
#line 1040 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__AddrVarType_17, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1040 "lco.m"
        }
#line 1026 "lco.m"
        {
#line 1026 "lco.m"
          parse_tree__prog_data__add_var_type_4_p_0(*transform_hlds__lco__AddrVar_8, transform_hlds__lco__AddrVarType_17, transform_hlds__lco__VarTypes0_11, &transform_hlds__lco__VarTypes_18);
        }
#line 1023 "lco.m"
      }
#line 1027 "lco.m"
    else
#line 1030 "lco.m"
      transform_hlds__lco__VarTypes_18 = transform_hlds__lco__VarTypes0_11;
#line 1032 "lco.m"
    transform_hlds__lco__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 0)));
#line 1032 "lco.m"
    transform_hlds__lco__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 1)));
#line 1032 "lco.m"
    transform_hlds__lco__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 2)));
#line 1032 "lco.m"
    transform_hlds__lco__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 3)));
#line 1032 "lco.m"
    transform_hlds__lco__V_48_48 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 1032 "lco.m"
    transform_hlds__lco__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1032 "lco.m"
    transform_hlds__lco__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1033 "lco.m"
    {
#line 1033 "lco.m"
      MR_Word base;
#line 1033 "lco.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1033 "lco.m"
      *transform_hlds__lco__STATE_VARIABLE_Info_20 = base;
#line 1033 "lco.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__V_44_44));
#line 1033 "lco.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__V_45_45));
#line 1033 "lco.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__VarSet_14));
#line 1033 "lco.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lco__VarTypes_18));
#line 1033 "lco.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((transform_hlds__lco__V_48_48 | ((((transform_hlds__lco__V_49_49 << (MR_Integer) 1)) | ((transform_hlds__lco__V_50_50 << (MR_Integer) 2)))))));
#line 1033 "lco.m"
    }
#line 1015 "lco.m"
  }
#line 1012 "lco.m"
}

#line 953 "lco.m"
static void MR_CALL 
transform_hlds__lco__find_args_to_pass_by_addr_10_p_0(
#line 953 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 953 "lco.m"
  MR_Word transform_hlds__lco__UnifyInputVars_2,
#line 953 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 953 "lco.m"
  MR_Integer transform_hlds__lco__ArgNum_4,
#line 953 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__5_5,
#line 953 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6,
#line 953 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Subst_0_7,
#line 953 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Subst_8,
#line 953 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_9,
#line 953 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_10)
#line 953 "lco.m"
{
#line 959 "lco.m"
  {
#line 959 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 959 "lco.m"
    if ((transform_hlds__lco__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 959 "lco.m"
      {
#line 959 "lco.m"
        *transform_hlds__lco__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 959 "lco.m"
        *transform_hlds__lco__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 959 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_Info_10 = transform_hlds__lco__STATE_VARIABLE_Info_0_9;
#line 959 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_Subst_8 = transform_hlds__lco__STATE_VARIABLE_Subst_0_7;
#line 959 "lco.m"
      }
#line 959 "lco.m"
    else
#line 962 "lco.m"
      {
#line 962 "lco.m"
        MR_Word transform_hlds__lco__CallArg_22;
#line 962 "lco.m"
        MR_Word transform_hlds__lco__HeadArg_23;
#line 962 "lco.m"
        MR_Word transform_hlds__lco__CallHeadArgs_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 962 "lco.m"
        MR_Word transform_hlds__lco__UpdatedCallArg_27;
#line 962 "lco.m"
        MR_Word transform_hlds__lco__UpdatedCallArgs_28;
#line 962 "lco.m"
        MR_Word transform_hlds__lco__MismatchesTail_31;
#line 962 "lco.m"
        MR_Word transform_hlds__lco__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
#line 962 "lco.m"
        MR_Integer transform_hlds__lco__V_39_39;
#line 962 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_Subst_40_40;
#line 962 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_Info_41_41;
#line 962 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_Info_48_48;
#line 966 "lco.m"
        MR_Word transform_hlds__lco__CallArgType_32;
#line 966 "lco.m"
        MR_Word transform_hlds__lco__CallArgTypeCtor_33;
#line 966 "lco.m"
        MR_Word transform_hlds__lco__V_43_43;
#line 966 "lco.m"
        MR_Word transform_hlds__lco__V_45_45;
#line 966 "lco.m"
        MR_String transform_hlds__lco__V_46_46;
#line 966 "lco.m"
        MR_Integer transform_hlds__lco__V_47_47;
#line 966 "lco.m"
        MR_Word transform_hlds__lco__V_58_58;
#line 966 "lco.m"
        MR_Word transform_hlds__lco__V_55_55;
#line 966 "lco.m"
        MR_Word transform_hlds__lco__V_56_56;
#line 966 "lco.m"
        MR_Word transform_hlds__lco__V_57_57;
#line 966 "lco.m"
        MR_Word transform_hlds__lco__V_59_59;
#line 966 "lco.m"
        MR_Word transform_hlds__lco__V_60_60;

#line 961 "lco.m"
        transform_hlds__lco__CallArg_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_38_38, (MR_Integer) 0)));
#line 961 "lco.m"
        transform_hlds__lco__HeadArg_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_38_38, (MR_Integer) 1)));
#line 963 "lco.m"
        transform_hlds__lco__V_39_39 = (transform_hlds__lco__ArgNum_4 + (MR_Integer) 1);
#line 963 "lco.m"
        {
#line 963 "lco.m"
          transform_hlds__lco__find_args_to_pass_by_addr_10_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__UnifyInputVars_2, transform_hlds__lco__CallHeadArgs_24, transform_hlds__lco__V_39_39, &transform_hlds__lco__MismatchesTail_31, &transform_hlds__lco__UpdatedCallArgs_28, transform_hlds__lco__STATE_VARIABLE_Subst_0_7, &transform_hlds__lco__STATE_VARIABLE_Subst_40_40, transform_hlds__lco__STATE_VARIABLE_Info_0_9, &transform_hlds__lco__STATE_VARIABLE_Info_41_41);
        }
#line 966 "lco.m"
        transform_hlds__lco__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 0)));
#line 966 "lco.m"
        transform_hlds__lco__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 1)));
#line 966 "lco.m"
        transform_hlds__lco__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 2)));
#line 966 "lco.m"
        transform_hlds__lco__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 3)));
#line 966 "lco.m"
        transform_hlds__lco__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 966 "lco.m"
        transform_hlds__lco__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 966 "lco.m"
        transform_hlds__lco__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 966 "lco.m"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_43_43 == (MR_Integer) 0);
#line 966 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 966 "lco.m"
          {
#line 967 "lco.m"
            {
#line 967 "lco.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__lco__V_58_58, transform_hlds__lco__CallArg_22, &transform_hlds__lco__CallArgType_32);
            }
#line 968 "lco.m"
            {
#line 968 "lco.m"
              transform_hlds__lco__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(transform_hlds__lco__CallArgType_32, &transform_hlds__lco__CallArgTypeCtor_33);
            }
#line 966 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 966 "lco.m"
              {
#line 969 "lco.m"
                transform_hlds__lco__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__CallArgTypeCtor_33, (MR_Integer) 0)));
#line 969 "lco.m"
                transform_hlds__lco__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__CallArgTypeCtor_33, (MR_Integer) 1)));
#line 969 "lco.m"
                transform_hlds__lco__succeeded = (transform_hlds__lco__V_47_47 == (MR_Integer) 0);
#line 966 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 966 "lco.m"
                  {
#line 969 "lco.m"
                    transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__V_45_45)) == (MR_mktag((MR_Integer) 0)));
#line 969 "lco.m"
                    if (transform_hlds__lco__succeeded)
#line 969 "lco.m"
                      {
#line 969 "lco.m"
                        transform_hlds__lco__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_45_45, (MR_Integer) 0)));
#line 969 "lco.m"
                        transform_hlds__lco__succeeded = (strcmp(transform_hlds__lco__V_46_46, (MR_String) "float") == 0);
#line 969 "lco.m"
                      }
#line 966 "lco.m"
                  }
#line 966 "lco.m"
              }
#line 966 "lco.m"
          }
#line 972 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 971 "lco.m"
          {
#line 971 "lco.m"
            MR_Word transform_hlds__lco__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 0)));
#line 971 "lco.m"
            MR_Word transform_hlds__lco__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 1)));
#line 971 "lco.m"
            MR_Word transform_hlds__lco__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 2)));
#line 971 "lco.m"
            MR_Word transform_hlds__lco__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 3)));
#line 971 "lco.m"
            MR_Word transform_hlds__lco__V_71_71 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 971 "lco.m"
            MR_Word transform_hlds__lco__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 971 "lco.m"
            MR_Word transform_hlds__lco__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 971 "lco.m"
            {
#line 971 "lco.m"
              transform_hlds__lco__STATE_VARIABLE_Info_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 971 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, 0) = ((MR_Box) (transform_hlds__lco__V_67_67));
#line 971 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, 1) = ((MR_Box) (transform_hlds__lco__V_68_68));
#line 971 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, 2) = ((MR_Box) (transform_hlds__lco__V_69_69));
#line 971 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, 3) = ((MR_Box) (transform_hlds__lco__V_70_70));
#line 971 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, 4) = ((MR_Box) ((transform_hlds__lco__V_71_71 | (((((MR_Integer) 0 << (MR_Integer) 1)) | ((transform_hlds__lco__V_73_73 << (MR_Integer) 2)))))));
#line 971 "lco.m"
            }
#line 971 "lco.m"
          }
#line 972 "lco.m"
        else
#line 971 "lco.m"
          transform_hlds__lco__STATE_VARIABLE_Info_48_48 = transform_hlds__lco__STATE_VARIABLE_Info_41_41;
#line 975 "lco.m"
        {
#line 975 "lco.m"
          transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[4], ((MR_Box) (transform_hlds__lco__CallArg_22)), ((MR_Box) (transform_hlds__lco__HeadArg_23)));
        }
#line 1006 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 976 "lco.m"
          {
#line 976 "lco.m"
            transform_hlds__lco__UpdatedCallArg_27 = transform_hlds__lco__CallArg_22;
#line 977 "lco.m"
            *transform_hlds__lco__HeadVar__5_5 = transform_hlds__lco__MismatchesTail_31;
#line 978 "lco.m"
            {
#line 978 "lco.m"
              transform_hlds__lco__succeeded = mercury__bag__member_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[4], ((MR_Box) (transform_hlds__lco__HeadArg_23)), transform_hlds__lco__UnifyInputVars_2);
            }
#line 1003 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 1002 "lco.m"
              {
#line 1002 "lco.m"
                MR_Word transform_hlds__lco__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 0)));
#line 1002 "lco.m"
                MR_Word transform_hlds__lco__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 1)));
#line 1002 "lco.m"
                MR_Word transform_hlds__lco__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 2)));
#line 1002 "lco.m"
                MR_Word transform_hlds__lco__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 3)));
#line 1002 "lco.m"
                MR_Word transform_hlds__lco__V_78_78 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 1002 "lco.m"
                MR_Word transform_hlds__lco__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1002 "lco.m"
                MR_Word transform_hlds__lco__V_79_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 1002 "lco.m"
                {
#line 1002 "lco.m"
                  MR_Word base;
#line 1002 "lco.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1002 "lco.m"
                  *transform_hlds__lco__STATE_VARIABLE_Info_10 = base;
#line 1002 "lco.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__V_74_74));
#line 1002 "lco.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__V_75_75));
#line 1002 "lco.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__V_76_76));
#line 1002 "lco.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lco__V_77_77));
#line 1002 "lco.m"
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((transform_hlds__lco__V_78_78 | (((((MR_Integer) 0 << (MR_Integer) 1)) | ((transform_hlds__lco__V_80_80 << (MR_Integer) 2)))))));
#line 1002 "lco.m"
                }
#line 1002 "lco.m"
              }
#line 1003 "lco.m"
            else
#line 1002 "lco.m"
              *transform_hlds__lco__STATE_VARIABLE_Info_10 = transform_hlds__lco__STATE_VARIABLE_Info_48_48;
#line 1002 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_Subst_8 = transform_hlds__lco__STATE_VARIABLE_Subst_40_40;
#line 976 "lco.m"
          }
#line 1006 "lco.m"
        else
#line 1007 "lco.m"
          {
#line 1007 "lco.m"
            MR_Word transform_hlds__lco__TypeInfo_82_82;
#line 1007 "lco.m"
            MR_Word transform_hlds__lco__V_53_53;

#line 1007 "lco.m"
            {
#line 1007 "lco.m"
              transform_hlds__lco__make_address_var_5_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__CallArg_22, &transform_hlds__lco__UpdatedCallArg_27, transform_hlds__lco__STATE_VARIABLE_Info_48_48, transform_hlds__lco__STATE_VARIABLE_Info_10);
            }
#line 1008 "lco.m"
            {
#line 1008 "lco.m"
              transform_hlds__lco__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1008 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_53_53, 0) = ((MR_Box) (transform_hlds__lco__ArgNum_4));
#line 1008 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_53_53, 1) = ((MR_Box) (transform_hlds__lco__CallArg_22));
#line 1008 "lco.m"
            }
#line 1008 "lco.m"
            {
#line 1008 "lco.m"
              MR_Word base;
#line 1008 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1008 "lco.m"
              *transform_hlds__lco__HeadVar__5_5 = base;
#line 1008 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__V_53_53));
#line 1008 "lco.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__MismatchesTail_31));
#line 1008 "lco.m"
            }
#line 10465 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_82_82 = (MR_Word) &transform_hlds__lco_scalar_common_1[4];
#line 1009 "lco.m"
            {
#line 1009 "lco.m"
              mercury__map__det_insert_4_p_0(transform_hlds__lco__TypeInfo_82_82, transform_hlds__lco__TypeInfo_82_82, ((MR_Box) (transform_hlds__lco__CallArg_22)), ((MR_Box) (transform_hlds__lco__UpdatedCallArg_27)), transform_hlds__lco__STATE_VARIABLE_Subst_40_40, transform_hlds__lco__STATE_VARIABLE_Subst_8);
            }
#line 1007 "lco.m"
          }
#line 962 "lco.m"
        {
#line 962 "lco.m"
          MR_Word base;
#line 962 "lco.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 962 "lco.m"
          *transform_hlds__lco__HeadVar__6_6 = base;
#line 962 "lco.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__UpdatedCallArg_27));
#line 962 "lco.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__UpdatedCallArgs_28));
#line 962 "lco.m"
        }
#line 962 "lco.m"
      }
#line 959 "lco.m"
  }
#line 953 "lco.m"
}

#line 925 "lco.m"
static void MR_CALL 
transform_hlds__lco__classify_proc_call_args_7_p_0(
#line 925 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 925 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 925 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 925 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__4_4,
#line 925 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__5_5,
#line 925 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6,
#line 925 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__7_7)
#line 925 "lco.m"
{
#line 929 "lco.m"
  {
#line 929 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 929 "lco.m"
    if ((transform_hlds__lco__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 929 "lco.m"
      if ((transform_hlds__lco__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 929 "lco.m"
        {
#line 929 "lco.m"
          *transform_hlds__lco__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 929 "lco.m"
          *transform_hlds__lco__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 929 "lco.m"
          *transform_hlds__lco__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 929 "lco.m"
        }
#line 929 "lco.m"
      else
#line 930 "lco.m"
        {
#line 931 "lco.m"
          {
#line 931 "lco.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.classify_proc_call_args\'/7", (MR_String) "mismatched lists");
#line 931 "lco.m"
            return;
          }
#line 930 "lco.m"
        }
#line 929 "lco.m"
    else
#line 929 "lco.m"
      {
#line 929 "lco.m"
        MR_Word transform_hlds__lco__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 929 "lco.m"
        MR_Word transform_hlds__lco__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));

#line 929 "lco.m"
        if ((transform_hlds__lco__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 932 "lco.m"
          {
#line 933 "lco.m"
            {
#line 933 "lco.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.classify_proc_call_args\'/7", (MR_String) "mismatched lists");
#line 933 "lco.m"
              return;
            }
#line 932 "lco.m"
          }
#line 929 "lco.m"
        else
#line 935 "lco.m"
          {
#line 935 "lco.m"
            MR_Word transform_hlds__lco__CalleeMode_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__4_4, (MR_Integer) 0)));
#line 935 "lco.m"
            MR_Word transform_hlds__lco__CalleeModes_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__4_4, (MR_Integer) 1)));
#line 935 "lco.m"
            MR_Word transform_hlds__lco__CalleeType_39;
#line 935 "lco.m"
            MR_Word transform_hlds__lco__ArgMode_40;
#line 935 "lco.m"
            MR_Word transform_hlds__lco__STATE_VARIABLE_InArgs_44_44;
#line 935 "lco.m"
            MR_Word transform_hlds__lco__STATE_VARIABLE_OutArgs_45_45;
#line 935 "lco.m"
            MR_Word transform_hlds__lco__STATE_VARIABLE_UnusedArgs_46_46;

#line 936 "lco.m"
            {
#line 936 "lco.m"
              transform_hlds__lco__classify_proc_call_args_7_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__HeadVar__2_2, transform_hlds__lco__V_50_50, transform_hlds__lco__CalleeModes_35, &transform_hlds__lco__STATE_VARIABLE_InArgs_44_44, &transform_hlds__lco__STATE_VARIABLE_OutArgs_45_45, &transform_hlds__lco__STATE_VARIABLE_UnusedArgs_46_46);
            }
#line 938 "lco.m"
            {
#line 938 "lco.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__lco__HeadVar__2_2, transform_hlds__lco__V_51_51, &transform_hlds__lco__CalleeType_39);
            }
#line 939 "lco.m"
            {
#line 939 "lco.m"
              check_hlds__mode_util__mode_to_arg_mode_4_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__CalleeMode_34, transform_hlds__lco__CalleeType_39, &transform_hlds__lco__ArgMode_40);
            }
#line 943 "lco.m"
            if ((transform_hlds__lco__ArgMode_40 == (MR_Integer) 0))
#line 941 "lco.m"
              {
#line 942 "lco.m"
                {
#line 942 "lco.m"
                  MR_Word base;
#line 942 "lco.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 942 "lco.m"
                  *transform_hlds__lco__HeadVar__5_5 = base;
#line 942 "lco.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__V_51_51));
#line 942 "lco.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_InArgs_44_44));
#line 942 "lco.m"
                }
#line 942 "lco.m"
                *transform_hlds__lco__HeadVar__6_6 = transform_hlds__lco__STATE_VARIABLE_OutArgs_45_45;
#line 942 "lco.m"
                *transform_hlds__lco__HeadVar__7_7 = transform_hlds__lco__STATE_VARIABLE_UnusedArgs_46_46;
#line 941 "lco.m"
              }
#line 943 "lco.m"
            else
#line 943 "lco.m"
              if ((transform_hlds__lco__ArgMode_40 == (MR_Integer) 1))
#line 944 "lco.m"
                {
#line 945 "lco.m"
                  {
#line 945 "lco.m"
                    MR_Word base;
#line 945 "lco.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 945 "lco.m"
                    *transform_hlds__lco__HeadVar__6_6 = base;
#line 945 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__V_51_51));
#line 945 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_OutArgs_45_45));
#line 945 "lco.m"
                  }
#line 945 "lco.m"
                  *transform_hlds__lco__HeadVar__5_5 = transform_hlds__lco__STATE_VARIABLE_InArgs_44_44;
#line 945 "lco.m"
                  *transform_hlds__lco__HeadVar__7_7 = transform_hlds__lco__STATE_VARIABLE_UnusedArgs_46_46;
#line 944 "lco.m"
                }
#line 943 "lco.m"
              else
#line 947 "lco.m"
                {
#line 948 "lco.m"
                  {
#line 948 "lco.m"
                    MR_Word base;
#line 948 "lco.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 948 "lco.m"
                    *transform_hlds__lco__HeadVar__7_7 = base;
#line 948 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__V_51_51));
#line 948 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_UnusedArgs_46_46));
#line 948 "lco.m"
                  }
#line 948 "lco.m"
                  *transform_hlds__lco__HeadVar__5_5 = transform_hlds__lco__STATE_VARIABLE_InArgs_44_44;
#line 948 "lco.m"
                  *transform_hlds__lco__HeadVar__6_6 = transform_hlds__lco__STATE_VARIABLE_OutArgs_45_45;
#line 947 "lco.m"
                }
#line 935 "lco.m"
          }
#line 929 "lco.m"
      }
#line 929 "lco.m"
  }
#line 925 "lco.m"
}

#line 892 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__update_call_args_6_p_0_1(
#line 892 "lco.m"
  MR_Box transform_hlds__lco__closure_arg)
#line 892 "lco.m"
{
#line 892 "lco.m"
  {
#line 892 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 892 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

#line 892 "lco.m"
    {
#line 892 "lco.m"
      return transform_hlds__lco__succeeded = transform_hlds__lco__IntroducedFrom__pred__update_call_args__892__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))));
    }
#line 892 "lco.m"
    return transform_hlds__lco__succeeded;
#line 892 "lco.m"
  }
#line 892 "lco.m"
}

#line 888 "lco.m"
static void MR_CALL 
transform_hlds__lco__update_call_args_6_p_0(
#line 888 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 888 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 888 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 888 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__4_4,
#line 888 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 888 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6)
#line 888 "lco.m"
{
#line 891 "lco.m"
  {
#line 891 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 891 "lco.m"
    if ((transform_hlds__lco__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 891 "lco.m"
      if ((transform_hlds__lco__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 891 "lco.m"
        {
#line 891 "lco.m"
          MR_Word transform_hlds__lco__V_10_10;

#line 891 "lco.m"
          *transform_hlds__lco__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 892 "lco.m"
          {
#line 892 "lco.m"
            transform_hlds__lco__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 892 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_10_10, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_7[3]));
#line 892 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_10_10, 1) = ((MR_Box) (transform_hlds__lco__update_call_args_6_p_0_1));
#line 892 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 892 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_10_10, 3) = ((MR_Box) (transform_hlds__lco__HeadVar__5_5));
#line 892 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_10_10, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 892 "lco.m"
          }
#line 892 "lco.m"
          {
#line 892 "lco.m"
            mercury__require__expect_3_p_0(transform_hlds__lco__V_10_10, (MR_String) "transform_hlds.lco", (MR_String) "update_call_args: updating nonexistent arg");
#line 892 "lco.m"
            return;
          }
#line 891 "lco.m"
        }
#line 891 "lco.m"
      else
#line 894 "lco.m"
        {
#line 895 "lco.m"
          {
#line 895 "lco.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_call_args\'/6", (MR_String) "mismatched lists");
#line 895 "lco.m"
            return;
          }
#line 894 "lco.m"
        }
#line 891 "lco.m"
    else
#line 891 "lco.m"
      {
#line 891 "lco.m"
        MR_Word transform_hlds__lco__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 891 "lco.m"
        MR_Word transform_hlds__lco__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));

#line 891 "lco.m"
        if ((transform_hlds__lco__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 896 "lco.m"
          {
#line 897 "lco.m"
            {
#line 897 "lco.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_call_args\'/6", (MR_String) "mismatched lists");
#line 897 "lco.m"
              return;
            }
#line 896 "lco.m"
          }
#line 891 "lco.m"
        else
#line 899 "lco.m"
          {
#line 899 "lco.m"
            MR_Word transform_hlds__lco__Arg_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__4_4, (MR_Integer) 0)));
#line 899 "lco.m"
            MR_Word transform_hlds__lco__Args_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__4_4, (MR_Integer) 1)));
#line 899 "lco.m"
            MR_Word transform_hlds__lco__CalleeType_40;
#line 899 "lco.m"
            MR_Word transform_hlds__lco__ArgMode_41;

#line 900 "lco.m"
            {
#line 900 "lco.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__lco__HeadVar__2_2, transform_hlds__lco__Arg_36, &transform_hlds__lco__CalleeType_40);
            }
#line 901 "lco.m"
            {
#line 901 "lco.m"
              check_hlds__mode_util__mode_to_arg_mode_4_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__V_61_61, transform_hlds__lco__CalleeType_40, &transform_hlds__lco__ArgMode_41);
            }
#line 907 "lco.m"
            if ((transform_hlds__lco__ArgMode_41 == (MR_Integer) 0))
#line 903 "lco.m"
              {
#line 903 "lco.m"
                MR_Word transform_hlds__lco__STATE_VARIABLE_UpdatedArgs_54_54;

#line 904 "lco.m"
                {
#line 904 "lco.m"
                  transform_hlds__lco__update_call_args_6_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__HeadVar__2_2, transform_hlds__lco__V_60_60, transform_hlds__lco__Args_37, transform_hlds__lco__HeadVar__5_5, &transform_hlds__lco__STATE_VARIABLE_UpdatedArgs_54_54);
                }
#line 906 "lco.m"
                {
#line 906 "lco.m"
                  MR_Word base;
#line 906 "lco.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 906 "lco.m"
                  *transform_hlds__lco__HeadVar__6_6 = base;
#line 906 "lco.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Arg_36));
#line 906 "lco.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_UpdatedArgs_54_54));
#line 906 "lco.m"
                }
#line 903 "lco.m"
              }
#line 907 "lco.m"
            else
#line 907 "lco.m"
              if ((transform_hlds__lco__ArgMode_41 == (MR_Integer) 1))
#line 908 "lco.m"
                {
#line 908 "lco.m"
                  MR_Word transform_hlds__lco__UpdatedArg_42;
#line 908 "lco.m"
                  MR_Word transform_hlds__lco__STATE_VARIABLE_UpdatedArgs_52_52;
#line 908 "lco.m"
                  MR_Word transform_hlds__lco__STATE_VARIABLE_UpdatedCallOutArgs_51_56;

#line 911 "lco.m"
                  if ((transform_hlds__lco__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 912 "lco.m"
                    {
#line 913 "lco.m"
                      {
#line 913 "lco.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_call_args\'/6", (MR_String) "no UpdatedCallOutArgs");
#line 913 "lco.m"
                        return;
                      }
#line 912 "lco.m"
                    }
#line 911 "lco.m"
                  else
#line 910 "lco.m"
                    {
#line 910 "lco.m"
                      transform_hlds__lco__UpdatedArg_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__5_5, (MR_Integer) 0)));
#line 910 "lco.m"
                      transform_hlds__lco__STATE_VARIABLE_UpdatedCallOutArgs_51_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__5_5, (MR_Integer) 1)));
#line 910 "lco.m"
                    }
#line 915 "lco.m"
                  {
#line 915 "lco.m"
                    transform_hlds__lco__update_call_args_6_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__HeadVar__2_2, transform_hlds__lco__V_60_60, transform_hlds__lco__Args_37, transform_hlds__lco__STATE_VARIABLE_UpdatedCallOutArgs_51_56, &transform_hlds__lco__STATE_VARIABLE_UpdatedArgs_52_52);
                  }
#line 917 "lco.m"
                  {
#line 917 "lco.m"
                    MR_Word base;
#line 917 "lco.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 917 "lco.m"
                    *transform_hlds__lco__HeadVar__6_6 = base;
#line 917 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__UpdatedArg_42));
#line 917 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_UpdatedArgs_52_52));
#line 917 "lco.m"
                  }
#line 908 "lco.m"
                }
#line 907 "lco.m"
              else
#line 919 "lco.m"
                {
#line 920 "lco.m"
                  {
#line 920 "lco.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_call_args\'/6", (MR_String) "top_unused");
#line 920 "lco.m"
                    return;
                  }
#line 919 "lco.m"
                }
#line 899 "lco.m"
          }
#line 891 "lco.m"
      }
#line 891 "lco.m"
  }
#line 888 "lco.m"
}

#line 848 "lco.m"
static void MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0_2(
#line 848 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 848 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 848 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 848 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_3,
#line 848 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_4,
#line 848 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_5,
#line 848 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_6)
#line 848 "lco.m"
{
#line 848 "lco.m"
  {
#line 848 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 848 "lco.m"
    MR_Word transform_hlds__lco__conv2_Goal_12;
#line 848 "lco.m"
    MR_Word transform_hlds__lco__conv1_STATE_VARIABLE_AddrVarFieldIds_60;
#line 848 "lco.m"
    MR_Word transform_hlds__lco__conv0_STATE_VARIABLE_Info_62;

#line 848 "lco.m"
    {
#line 848 "lco.m"
      transform_hlds__lco__update_construct_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), &transform_hlds__lco__conv2_Goal_12, ((MR_Word) transform_hlds__lco__wrapper_arg_3), &transform_hlds__lco__conv1_STATE_VARIABLE_AddrVarFieldIds_60, ((MR_Word) transform_hlds__lco__wrapper_arg_5), &transform_hlds__lco__conv0_STATE_VARIABLE_Info_62);
    }
#line 848 "lco.m"
    *transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv2_Goal_12));
#line 848 "lco.m"
    *transform_hlds__lco__wrapper_arg_4 = ((MR_Box) (transform_hlds__lco__conv1_STATE_VARIABLE_AddrVarFieldIds_60));
#line 848 "lco.m"
    *transform_hlds__lco__wrapper_arg_6 = ((MR_Box) (transform_hlds__lco__conv0_STATE_VARIABLE_Info_62));
#line 848 "lco.m"
  }
#line 848 "lco.m"
}

#line 846 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0_1(
#line 846 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 846 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1)
#line 846 "lco.m"
{
#line 846 "lco.m"
  {
#line 846 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 846 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

#line 846 "lco.m"
    {
#line 846 "lco.m"
      return transform_hlds__lco__succeeded = transform_hlds__lco__occurs_once_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
#line 846 "lco.m"
    return transform_hlds__lco__succeeded;
#line 846 "lco.m"
  }
#line 846 "lco.m"
}

#line 806 "lco.m"
static void MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0(
#line 806 "lco.m"
  MR_Word transform_hlds__lco__CallGoal_9,
#line 806 "lco.m"
  MR_Word transform_hlds__lco__CallOutArgs_10,
#line 806 "lco.m"
  MR_Word transform_hlds__lco__UnifyGoals_11,
#line 806 "lco.m"
  MR_Word transform_hlds__lco__UnifyInputVars_12,
#line 806 "lco.m"
  MR_Word * transform_hlds__lco__MaybeGoals_13,
#line 806 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_52,
#line 806 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_53,
#line 806 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_15)
#line 806 "lco.m"
{
#line 811 "lco.m"
  {
#line 811 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 811 "lco.m"
    MR_Word transform_hlds__lco__CallGoalExpr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__CallGoal_9, (MR_Integer) 0)));
#line 811 "lco.m"
    MR_Word transform_hlds__lco__CallGoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__CallGoal_9, (MR_Integer) 1)));
#line 811 "lco.m"
    MR_Word transform_hlds__lco__ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_52, (MR_Integer) 0)));
#line 811 "lco.m"
    MR_Word transform_hlds__lco__ProcInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 4)));
#line 811 "lco.m"
    MR_Word transform_hlds__lco__VarTypes_20;
#line 813 "lco.m"
    MR_Word transform_hlds__lco__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_52, (MR_Integer) 1)));
#line 813 "lco.m"
    MR_Word transform_hlds__lco__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_52, (MR_Integer) 2)));
#line 813 "lco.m"
    MR_Word transform_hlds__lco__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_52, (MR_Integer) 3)));
#line 813 "lco.m"
    MR_Word transform_hlds__lco__V_106_106 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_52, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 813 "lco.m"
    MR_Word transform_hlds__lco__V_107_107 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_52, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 813 "lco.m"
    MR_Word transform_hlds__lco__V_108_108 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_52, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 814 "lco.m"
    MR_Word transform_hlds__lco__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 0)));
#line 814 "lco.m"
    MR_Word transform_hlds__lco__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 1)));
#line 814 "lco.m"
    MR_Word transform_hlds__lco__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 2)));
#line 814 "lco.m"
    MR_Word transform_hlds__lco__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 3)));
#line 814 "lco.m"
    MR_Word transform_hlds__lco__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 5)));
#line 814 "lco.m"
    MR_Word transform_hlds__lco__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 6)));
#line 814 "lco.m"
    MR_Word transform_hlds__lco__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 7)));
#line 882 "lco.m"
    MR_Word transform_hlds__lco__PredId_21;
#line 882 "lco.m"
    MR_Integer transform_hlds__lco__ProcId_22;
#line 882 "lco.m"
    MR_Word transform_hlds__lco__Args_23;
#line 882 "lco.m"
    MR_Word transform_hlds__lco__Builtin_24;
#line 882 "lco.m"
    MR_Word transform_hlds__lco__UnifyContext_25;
#line 882 "lco.m"
    MR_Word transform_hlds__lco__UpdatedCallOutArgs_30;
#line 882 "lco.m"
    MR_Word transform_hlds__lco__UpdatedUnifyGoals_36;
#line 882 "lco.m"
    MR_Word transform_hlds__lco__VariantPredProcId_41;
#line 882 "lco.m"
    MR_Word transform_hlds__lco__VariantSymName_42;
#line 882 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_Info_98_98;
#line 818 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_143_143;
#line 818 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_148_148;
#line 818 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_156_156;
#line 818 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_157_157;
#line 818 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_158_158;
#line 818 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_159_159;
#line 818 "lco.m"
    MR_Word transform_hlds__lco__SymName_26;
#line 818 "lco.m"
    MR_Word transform_hlds__lco__CurrProcOutArgs_27;
#line 818 "lco.m"
    MR_Word transform_hlds__lco__CallHeadPairs_28;
#line 818 "lco.m"
    MR_Word transform_hlds__lco__Mismatches_29;
#line 818 "lco.m"
    MR_Word transform_hlds__lco__Subst_31;
#line 818 "lco.m"
    MR_Word transform_hlds__lco__MismatchedCallArgs_35;
#line 818 "lco.m"
    MR_Word transform_hlds__lco__AddrFieldIds_37;
#line 818 "lco.m"
    MR_Word transform_hlds__lco__HighLevelData_39;
#line 818 "lco.m"
    MR_Word transform_hlds__lco__VariantArgs_40;
#line 818 "lco.m"
    MR_Integer transform_hlds__lco__V_54_54;
#line 818 "lco.m"
    MR_Word transform_hlds__lco__V_55_55;
#line 818 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_Info_56_56;
#line 818 "lco.m"
    MR_Word transform_hlds__lco__V_77_77;
#line 818 "lco.m"
    MR_Word transform_hlds__lco__V_78_78;
#line 818 "lco.m"
    MR_Word transform_hlds__lco__V_79_79;
#line 818 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_Info_80_80;
#line 819 "lco.m"
    MR_Word transform_hlds__lco__V_116_116;
#line 819 "lco.m"
    MR_Word transform_hlds__lco__V_117_117;
#line 819 "lco.m"
    MR_Word transform_hlds__lco__V_118_118;
#line 819 "lco.m"
    MR_Word transform_hlds__lco__V_119_119;
#line 819 "lco.m"
    MR_Word transform_hlds__lco__V_120_120;
#line 819 "lco.m"
    MR_Word transform_hlds__lco__V_121_121;
#line 819 "lco.m"
    MR_Word transform_hlds__lco__V_122_122;
#line 842 "lco.m"
    MR_Word transform_hlds__lco__V_33_33;
#line 842 "lco.m"
    MR_Word transform_hlds__lco__V_34_34;
#line 848 "lco.m"
    MR_Box transform_hlds__lco__conv4_AddrFieldIds_37;
#line 848 "lco.m"
    MR_Box transform_hlds__lco__conv3_STATE_VARIABLE_Info_80_80;
#line 864 "lco.m"
    MR_Word transform_hlds__lco__V_129_129;
#line 864 "lco.m"
    MR_Word transform_hlds__lco__V_130_130;
#line 864 "lco.m"
    MR_Word transform_hlds__lco__V_131_131;
#line 864 "lco.m"
    MR_Word transform_hlds__lco__V_132_132;
#line 864 "lco.m"
    MR_Word transform_hlds__lco__V_133_133;
#line 864 "lco.m"
    MR_Word transform_hlds__lco__V_134_134;
#line 864 "lco.m"
    MR_Word transform_hlds__lco__V_135_135;

#line 815 "lco.m"
    {
#line 815 "lco.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lco__ProcInfo_19, &transform_hlds__lco__VarTypes_20);
    }
#line 817 "lco.m"
    transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__CallGoalExpr_16)) == (MR_mktag((MR_Integer) 2)));
#line 817 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 817 "lco.m"
      {
#line 817 "lco.m"
        transform_hlds__lco__PredId_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__CallGoalExpr_16, (MR_Integer) 0)));
#line 817 "lco.m"
        transform_hlds__lco__ProcId_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__lco__CallGoalExpr_16, (MR_Integer) 1)));
#line 817 "lco.m"
        transform_hlds__lco__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__CallGoalExpr_16, (MR_Integer) 2)));
#line 817 "lco.m"
        transform_hlds__lco__Builtin_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__CallGoalExpr_16, (MR_Integer) 3)));
#line 817 "lco.m"
        transform_hlds__lco__UnifyContext_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__CallGoalExpr_16, (MR_Integer) 4)));
#line 817 "lco.m"
        transform_hlds__lco__SymName_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__CallGoalExpr_16, (MR_Integer) 5)));
#line 819 "lco.m"
        transform_hlds__lco__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 0)));
#line 819 "lco.m"
        transform_hlds__lco__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 1)));
#line 819 "lco.m"
        transform_hlds__lco__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 2)));
#line 819 "lco.m"
        transform_hlds__lco__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 3)));
#line 819 "lco.m"
        transform_hlds__lco__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 4)));
#line 819 "lco.m"
        transform_hlds__lco__CurrProcOutArgs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 5)));
#line 819 "lco.m"
        transform_hlds__lco__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 6)));
#line 819 "lco.m"
        transform_hlds__lco__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 7)));
#line 11209 "transform_hlds.lco.c"
        transform_hlds__lco__TypeInfo_143_143 = (MR_Word) &transform_hlds__lco_scalar_common_1[4];
#line 820 "lco.m"
        {
#line 820 "lco.m"
          mercury__assoc_list__from_corresponding_lists_3_p_0(transform_hlds__lco__TypeInfo_143_143, transform_hlds__lco__TypeInfo_143_143, transform_hlds__lco__CallOutArgs_10, transform_hlds__lco__CurrProcOutArgs_27, &transform_hlds__lco__CallHeadPairs_28);
        }
#line 822 "lco.m"
        transform_hlds__lco__V_54_54 = (MR_Integer) 1;
#line 822 "lco.m"
        {
#line 822 "lco.m"
          transform_hlds__lco__V_55_55 = mercury__map__init_0_f_0(transform_hlds__lco__TypeInfo_143_143, transform_hlds__lco__TypeInfo_143_143);
        }
#line 822 "lco.m"
        {
#line 822 "lco.m"
          transform_hlds__lco__find_args_to_pass_by_addr_10_p_0(transform_hlds__lco__ConstInfo_15, transform_hlds__lco__UnifyInputVars_12, transform_hlds__lco__CallHeadPairs_28, transform_hlds__lco__V_54_54, &transform_hlds__lco__Mismatches_29, &transform_hlds__lco__UpdatedCallOutArgs_30, transform_hlds__lco__V_55_55, &transform_hlds__lco__Subst_31, transform_hlds__lco__STATE_VARIABLE_Info_0_52, &transform_hlds__lco__STATE_VARIABLE_Info_56_56);
        }
#line 842 "lco.m"
        transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__Mismatches_29)) == (MR_mktag((MR_Integer) 1)));
#line 842 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 842 "lco.m"
          {
#line 842 "lco.m"
            transform_hlds__lco__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__Mismatches_29, (MR_Integer) 0)));
#line 842 "lco.m"
            transform_hlds__lco__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__Mismatches_29, (MR_Integer) 1)));
#line 11238 "transform_hlds.lco.c"
            transform_hlds__lco__TypeCtorInfo_148_148 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 843 "lco.m"
            {
#line 843 "lco.m"
              mercury__assoc_list__values_2_p_0(transform_hlds__lco__TypeCtorInfo_148_148, transform_hlds__lco__TypeInfo_143_143, transform_hlds__lco__Mismatches_29, &transform_hlds__lco__MismatchedCallArgs_35);
            }
#line 846 "lco.m"
            {
#line 846 "lco.m"
              transform_hlds__lco__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 846 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_77_77, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_7[2]));
#line 846 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_77_77, 1) = ((MR_Box) (transform_hlds__lco__transform_call_and_unifies_8_p_0_1));
#line 846 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 846 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_77_77, 3) = ((MR_Box) (transform_hlds__lco__UnifyInputVars_12));
#line 846 "lco.m"
            }
#line 846 "lco.m"
            {
#line 846 "lco.m"
              transform_hlds__lco__succeeded = mercury__list__all_true_2_p_0(transform_hlds__lco__TypeInfo_143_143, transform_hlds__lco__V_77_77, transform_hlds__lco__MismatchedCallArgs_35);
            }
#line 818 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 818 "lco.m"
              {
#line 11268 "transform_hlds.lco.c"
                transform_hlds__lco__TypeCtorInfo_156_156 = (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0;
#line 848 "lco.m"
                {
#line 848 "lco.m"
                  transform_hlds__lco__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 848 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_78_78, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_9[0]));
#line 848 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_78_78, 1) = ((MR_Box) (transform_hlds__lco__transform_call_and_unifies_8_p_0_2));
#line 848 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_78_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 848 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_78_78, 3) = ((MR_Box) (transform_hlds__lco__ConstInfo_15));
#line 848 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_78_78, 4) = ((MR_Box) (transform_hlds__lco__Subst_31));
#line 848 "lco.m"
                }
#line 848 "lco.m"
                {
#line 848 "lco.m"
                  transform_hlds__lco__V_79_79 = mercury__map__init_0_f_0(transform_hlds__lco__TypeInfo_143_143, transform_hlds__lco__TypeCtorInfo_156_156);
                }
#line 11291 "transform_hlds.lco.c"
                transform_hlds__lco__TypeCtorInfo_157_157 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 11293 "transform_hlds.lco.c"
                transform_hlds__lco__TypeInfo_158_158 = (MR_Word) &transform_hlds__lco_scalar_common_2[5];
#line 11295 "transform_hlds.lco.c"
                transform_hlds__lco__TypeCtorInfo_159_159 = (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_info_0;
#line 848 "lco.m"
                {
#line 848 "lco.m"
                  mercury__list__map_foldl2_7_p_0(transform_hlds__lco__TypeCtorInfo_157_157, transform_hlds__lco__TypeCtorInfo_157_157, transform_hlds__lco__TypeInfo_158_158, transform_hlds__lco__TypeCtorInfo_159_159, transform_hlds__lco__V_78_78, transform_hlds__lco__UnifyGoals_11, &transform_hlds__lco__UpdatedUnifyGoals_36, ((MR_Box) (transform_hlds__lco__V_79_79)), &transform_hlds__lco__conv4_AddrFieldIds_37, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_Info_56_56)), &transform_hlds__lco__conv3_STATE_VARIABLE_Info_80_80);
                }
#line 848 "lco.m"
                transform_hlds__lco__AddrFieldIds_37 = ((MR_Word) transform_hlds__lco__conv4_AddrFieldIds_37);
#line 848 "lco.m"
                transform_hlds__lco__STATE_VARIABLE_Info_80_80 = ((MR_Word) transform_hlds__lco__conv3_STATE_VARIABLE_Info_80_80);
#line 864 "lco.m"
                transform_hlds__lco__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 0)));
#line 864 "lco.m"
                transform_hlds__lco__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 1)));
#line 864 "lco.m"
                transform_hlds__lco__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 2)));
#line 864 "lco.m"
                transform_hlds__lco__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 3)));
#line 864 "lco.m"
                transform_hlds__lco__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 4)));
#line 864 "lco.m"
                transform_hlds__lco__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 5)));
#line 864 "lco.m"
                transform_hlds__lco__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 6)));
#line 864 "lco.m"
                transform_hlds__lco__HighLevelData_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 7)));
#line 865 "lco.m"
                {
#line 865 "lco.m"
                  transform_hlds__lco__make_variant_args_4_p_0(transform_hlds__lco__HighLevelData_39, transform_hlds__lco__AddrFieldIds_37, transform_hlds__lco__Mismatches_29, &transform_hlds__lco__VariantArgs_40);
                }
#line 867 "lco.m"
                {
#line 867 "lco.m"
                  transform_hlds__lco__succeeded = transform_hlds__lco__ensure_variant_exists_8_p_0(transform_hlds__lco__PredId_21, transform_hlds__lco__ProcId_22, transform_hlds__lco__VariantArgs_40, &transform_hlds__lco__VariantPredProcId_41, transform_hlds__lco__SymName_26, &transform_hlds__lco__VariantSymName_42, transform_hlds__lco__STATE_VARIABLE_Info_80_80, &transform_hlds__lco__STATE_VARIABLE_Info_98_98);
                }
#line 818 "lco.m"
              }
#line 842 "lco.m"
          }
#line 817 "lco.m"
      }
#line 882 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 870 "lco.m"
      {
#line 870 "lco.m"
        MR_Word transform_hlds__lco__CalleeProcInfo_43;
#line 870 "lco.m"
        MR_Word transform_hlds__lco__CalleeModes_44;
#line 870 "lco.m"
        MR_Word transform_hlds__lco__UpdatedArgs_45;
#line 870 "lco.m"
        MR_Word transform_hlds__lco__VariantPredId_46;
#line 870 "lco.m"
        MR_Integer transform_hlds__lco__VariantProcId_47;
#line 870 "lco.m"
        MR_Word transform_hlds__lco__UpdatedGoalExpr_48;
#line 870 "lco.m"
        MR_Word transform_hlds__lco__UpdatedGoal_50;
#line 870 "lco.m"
        MR_Word transform_hlds__lco__Goals_51;
#line 870 "lco.m"
        MR_Word transform_hlds__lco__V_99_99;
#line 881 "lco.m"
        MR_Word transform_hlds__lco__V_136_136;
#line 881 "lco.m"
        MR_Word transform_hlds__lco__V_137_137;
#line 881 "lco.m"
        MR_Word transform_hlds__lco__V_138_138;
#line 881 "lco.m"
        MR_Word transform_hlds__lco__V_139_139;
#line 881 "lco.m"
        MR_Word transform_hlds__lco__V_140_140;
#line 881 "lco.m"
        MR_Word transform_hlds__lco__V_141_141;
#line 881 "lco.m"
        MR_Word transform_hlds__lco__V_142_142;

#line 870 "lco.m"
        {
#line 870 "lco.m"
          hlds__hlds_module__module_info_proc_info_4_p_0(transform_hlds__lco__ModuleInfo_18, transform_hlds__lco__PredId_21, transform_hlds__lco__ProcId_22, &transform_hlds__lco__CalleeProcInfo_43);
        }
#line 871 "lco.m"
        {
#line 871 "lco.m"
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__lco__CalleeProcInfo_43, &transform_hlds__lco__CalleeModes_44);
        }
#line 872 "lco.m"
        {
#line 872 "lco.m"
          transform_hlds__lco__update_call_args_6_p_0(transform_hlds__lco__ModuleInfo_18, transform_hlds__lco__VarTypes_20, transform_hlds__lco__CalleeModes_44, transform_hlds__lco__Args_23, transform_hlds__lco__UpdatedCallOutArgs_30, &transform_hlds__lco__UpdatedArgs_45);
        }
#line 874 "lco.m"
        transform_hlds__lco__VariantPredId_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantPredProcId_41, (MR_Integer) 0)));
#line 874 "lco.m"
        transform_hlds__lco__VariantProcId_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantPredProcId_41, (MR_Integer) 1)));
#line 875 "lco.m"
        {
#line 875 "lco.m"
          transform_hlds__lco__UpdatedGoalExpr_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 875 "lco.m"
          MR_hl_field(MR_mktag(2), transform_hlds__lco__UpdatedGoalExpr_48, 0) = ((MR_Box) (transform_hlds__lco__VariantPredId_46));
#line 875 "lco.m"
          MR_hl_field(MR_mktag(2), transform_hlds__lco__UpdatedGoalExpr_48, 1) = ((MR_Box) (transform_hlds__lco__VariantProcId_47));
#line 875 "lco.m"
          MR_hl_field(MR_mktag(2), transform_hlds__lco__UpdatedGoalExpr_48, 2) = ((MR_Box) (transform_hlds__lco__UpdatedArgs_45));
#line 875 "lco.m"
          MR_hl_field(MR_mktag(2), transform_hlds__lco__UpdatedGoalExpr_48, 3) = ((MR_Box) (transform_hlds__lco__Builtin_24));
#line 875 "lco.m"
          MR_hl_field(MR_mktag(2), transform_hlds__lco__UpdatedGoalExpr_48, 4) = ((MR_Box) (transform_hlds__lco__UnifyContext_25));
#line 875 "lco.m"
          MR_hl_field(MR_mktag(2), transform_hlds__lco__UpdatedGoalExpr_48, 5) = ((MR_Box) (transform_hlds__lco__VariantSymName_42));
#line 875 "lco.m"
        }
#line 878 "lco.m"
        {
#line 878 "lco.m"
          transform_hlds__lco__UpdatedGoal_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 878 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__UpdatedGoal_50, 0) = ((MR_Box) (transform_hlds__lco__UpdatedGoalExpr_48));
#line 878 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__UpdatedGoal_50, 1) = ((MR_Box) (transform_hlds__lco__CallGoalInfo_17));
#line 878 "lco.m"
        }
#line 879 "lco.m"
        {
#line 879 "lco.m"
          transform_hlds__lco__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 879 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_99_99, 0) = ((MR_Box) (transform_hlds__lco__UpdatedGoal_50));
#line 879 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 879 "lco.m"
        }
#line 879 "lco.m"
        {
#line 879 "lco.m"
          transform_hlds__lco__Goals_51 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__lco__UpdatedUnifyGoals_36, transform_hlds__lco__V_99_99);
        }
#line 880 "lco.m"
        {
#line 880 "lco.m"
          MR_Word base;
#line 880 "lco.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 880 "lco.m"
          *transform_hlds__lco__MaybeGoals_13 = base;
#line 880 "lco.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Goals_51));
#line 880 "lco.m"
        }
#line 881 "lco.m"
        transform_hlds__lco__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_98_98, (MR_Integer) 0)));
#line 881 "lco.m"
        transform_hlds__lco__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_98_98, (MR_Integer) 1)));
#line 881 "lco.m"
        transform_hlds__lco__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_98_98, (MR_Integer) 2)));
#line 881 "lco.m"
        transform_hlds__lco__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_98_98, (MR_Integer) 3)));
#line 881 "lco.m"
        transform_hlds__lco__V_140_140 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_98_98, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 881 "lco.m"
        transform_hlds__lco__V_141_141 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_98_98, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 881 "lco.m"
        transform_hlds__lco__V_142_142 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_98_98, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 881 "lco.m"
        {
#line 881 "lco.m"
          MR_Word base;
#line 881 "lco.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 881 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_Info_53 = base;
#line 881 "lco.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__V_136_136));
#line 881 "lco.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__V_137_137));
#line 881 "lco.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__V_138_138));
#line 881 "lco.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lco__V_139_139));
#line 881 "lco.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((transform_hlds__lco__V_140_140 | ((((transform_hlds__lco__V_141_141 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 2)))))));
#line 881 "lco.m"
        }
#line 870 "lco.m"
      }
#line 882 "lco.m"
    else
#line 885 "lco.m"
      {
#line 885 "lco.m"
        *transform_hlds__lco__MaybeGoals_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 885 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_Info_53 = transform_hlds__lco__STATE_VARIABLE_Info_0_52;
#line 885 "lco.m"
      }
#line 811 "lco.m"
  }
#line 806 "lco.m"
}

#line 770 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_unification_5_p_0_1(
#line 770 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 770 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1)
#line 770 "lco.m"
{
#line 770 "lco.m"
  {
#line 770 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 770 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

#line 770 "lco.m"
    {
#line 770 "lco.m"
      return transform_hlds__lco__succeeded = transform_hlds__lco__acceptable_construct_mode_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
#line 770 "lco.m"
    return transform_hlds__lco__succeeded;
#line 770 "lco.m"
  }
#line 770 "lco.m"
}

#line 756 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_unification_5_p_0(
#line 756 "lco.m"
  MR_Word transform_hlds__lco__Goal_6,
#line 756 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_0_30,
#line 756 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_31,
#line 756 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_32,
#line 756 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_33)
#line 756 "lco.m"
{
#line 759 "lco.m"
  {
#line 759 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 759 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_67_67;
#line 759 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_72_72;
#line 759 "lco.m"
    MR_Word transform_hlds__lco__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_6, (MR_Integer) 0)));
#line 759 "lco.m"
    MR_Word transform_hlds__lco__Unification_14;
#line 759 "lco.m"
    MR_Word transform_hlds__lco__ConstructedVar_16;
#line 759 "lco.m"
    MR_Word transform_hlds__lco__ConsId_17;
#line 759 "lco.m"
    MR_Word transform_hlds__lco__ConstructArgs_18;
#line 759 "lco.m"
    MR_Word transform_hlds__lco__ArgUniModes_19;
#line 759 "lco.m"
    MR_Word transform_hlds__lco__SubInfo_22;
#line 759 "lco.m"
    MR_Word transform_hlds__lco__ModuleInfo_24;
#line 759 "lco.m"
    MR_Word transform_hlds__lco__ConsTag_25;
#line 759 "lco.m"
    MR_Word transform_hlds__lco__V_35_35;
#line 759 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_53_53;
#line 760 "lco.m"
    MR_Word transform_hlds__lco___GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_6, (MR_Integer) 1)));
#line 761 "lco.m"
    MR_Word transform_hlds__lco__V_11_11;
#line 761 "lco.m"
    MR_Word transform_hlds__lco__V_12_12;
#line 761 "lco.m"
    MR_Word transform_hlds__lco__V_13_13;
#line 761 "lco.m"
    MR_Word transform_hlds__lco__V_15_15;
#line 762 "lco.m"
    MR_Word transform_hlds__lco__V_20_20;
#line 762 "lco.m"
    MR_Word transform_hlds__lco__V_21_21;
#line 769 "lco.m"
    MR_Word transform_hlds__lco__V_60_60;
#line 769 "lco.m"
    MR_Word transform_hlds__lco__V_61_61;
#line 769 "lco.m"
    MR_Word transform_hlds__lco__V_62_62;
#line 769 "lco.m"
    MR_Word transform_hlds__lco__V_63_63;
#line 769 "lco.m"
    MR_Word transform_hlds__lco__V_64_64;
#line 769 "lco.m"
    MR_Word transform_hlds__lco__V_65_65;

#line 761 "lco.m"
    transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__GoalExpr_9)) == (MR_mktag((MR_Integer) 1)));
#line 761 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 761 "lco.m"
      {
#line 761 "lco.m"
        transform_hlds__lco__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_9, (MR_Integer) 0)));
#line 761 "lco.m"
        transform_hlds__lco__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_9, (MR_Integer) 1)));
#line 761 "lco.m"
        transform_hlds__lco__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_9, (MR_Integer) 2)));
#line 761 "lco.m"
        transform_hlds__lco__Unification_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_9, (MR_Integer) 3)));
#line 761 "lco.m"
        transform_hlds__lco__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_9, (MR_Integer) 4)));
#line 762 "lco.m"
        transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__Unification_14)) == (MR_mktag((MR_Integer) 0)));
#line 762 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 762 "lco.m"
          {
#line 762 "lco.m"
            transform_hlds__lco__ConstructedVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 0)));
#line 762 "lco.m"
            transform_hlds__lco__ConsId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 1)));
#line 762 "lco.m"
            transform_hlds__lco__ConstructArgs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 2)));
#line 762 "lco.m"
            transform_hlds__lco__ArgUniModes_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 3)));
#line 762 "lco.m"
            transform_hlds__lco__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 4)));
#line 762 "lco.m"
            transform_hlds__lco__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 5)));
#line 762 "lco.m"
            transform_hlds__lco__SubInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 6)));
#line 766 "lco.m"
            if ((transform_hlds__lco__SubInfo_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 765 "lco.m"
              transform_hlds__lco__succeeded = MR_TRUE;
#line 766 "lco.m"
            else
#line 767 "lco.m"
              {
#line 767 "lco.m"
                MR_Word transform_hlds__lco__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SubInfo_22, (MR_Integer) 0)));
#line 767 "lco.m"
                MR_Word transform_hlds__lco__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SubInfo_22, (MR_Integer) 1)));

#line 767 "lco.m"
                transform_hlds__lco__succeeded = (transform_hlds__lco__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 767 "lco.m"
              }
#line 759 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 759 "lco.m"
              {
#line 769 "lco.m"
                transform_hlds__lco__ModuleInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 0)));
#line 769 "lco.m"
                transform_hlds__lco__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 1)));
#line 769 "lco.m"
                transform_hlds__lco__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 2)));
#line 769 "lco.m"
                transform_hlds__lco__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 3)));
#line 769 "lco.m"
                transform_hlds__lco__V_63_63 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 769 "lco.m"
                transform_hlds__lco__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 769 "lco.m"
                transform_hlds__lco__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 11671 "transform_hlds.lco.c"
                transform_hlds__lco__TypeCtorInfo_67_67 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0;
#line 770 "lco.m"
                {
#line 770 "lco.m"
                  transform_hlds__lco__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 770 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_35_35, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_7[1]));
#line 770 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_35_35, 1) = ((MR_Box) (transform_hlds__lco__acceptable_construct_unification_5_p_0_1));
#line 770 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 770 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_35_35, 3) = ((MR_Box) (transform_hlds__lco__ModuleInfo_24));
#line 770 "lco.m"
                }
#line 770 "lco.m"
                {
#line 770 "lco.m"
                  transform_hlds__lco__succeeded = mercury__list__all_true_2_p_0(transform_hlds__lco__TypeCtorInfo_67_67, transform_hlds__lco__V_35_35, transform_hlds__lco__ArgUniModes_19);
                }
#line 759 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 759 "lco.m"
                  {
#line 771 "lco.m"
                    {
#line 771 "lco.m"
                      transform_hlds__lco__ConsTag_25 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(transform_hlds__lco__ModuleInfo_24, transform_hlds__lco__ConsId_17);
                    }
#line 777 "lco.m"
                    if ((transform_hlds__lco__ConsTag_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 776 "lco.m"
                      transform_hlds__lco__succeeded = MR_TRUE;
#line 777 "lco.m"
                    else
#line 777 "lco.m"
                      if (((((MR_tag((MR_Word) transform_hlds__lco__ConsTag_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__ConsTag_25, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 780 "lco.m"
                        transform_hlds__lco__succeeded = MR_TRUE;
#line 777 "lco.m"
                      else
#line 777 "lco.m"
                        if (((((MR_tag((MR_Word) transform_hlds__lco__ConsTag_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__ConsTag_25, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 778 "lco.m"
                          transform_hlds__lco__succeeded = MR_TRUE;
#line 777 "lco.m"
                        else
#line 777 "lco.m"
                          transform_hlds__lco__succeeded = MR_FALSE;
#line 759 "lco.m"
                    if (transform_hlds__lco__succeeded)
#line 759 "lco.m"
                      {
#line 11725 "transform_hlds.lco.c"
                        transform_hlds__lco__TypeInfo_72_72 = (MR_Word) &transform_hlds__lco_scalar_common_1[4];
#line 797 "lco.m"
                        {
#line 797 "lco.m"
                          mercury__bag__delete_3_p_0(transform_hlds__lco__TypeInfo_72_72, ((MR_Box) (transform_hlds__lco__ConstructedVar_16)), transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_0_30, &transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_53_53);
                        }
#line 798 "lco.m"
                        {
#line 798 "lco.m"
                          mercury__bag__insert_list_3_p_0(transform_hlds__lco__TypeInfo_72_72, transform_hlds__lco__ConstructArgs_18, transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_53_53, transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_31);
                        }
#line 799 "lco.m"
                        *transform_hlds__lco__STATE_VARIABLE_Info_33 = transform_hlds__lco__STATE_VARIABLE_Info_0_32;
#line 799 "lco.m"
                        transform_hlds__lco__succeeded = MR_TRUE;
#line 759 "lco.m"
                      }
#line 759 "lco.m"
                  }
#line 759 "lco.m"
              }
#line 762 "lco.m"
          }
#line 761 "lco.m"
      }
#line 759 "lco.m"
    return transform_hlds__lco__succeeded;
#line 759 "lco.m"
  }
#line 756 "lco.m"
}

#line 734 "lco.m"
static void MR_CALL 
transform_hlds__lco__partition_dependent_goal_9_p_0(
#line 734 "lco.m"
  MR_Word transform_hlds__lco___Info_10,
#line 734 "lco.m"
  MR_Word transform_hlds__lco___ConstInfo_11,
#line 734 "lco.m"
  MR_Word transform_hlds__lco__Goal_12,
#line 734 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22,
#line 734 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23,
#line 734 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24,
#line 734 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25,
#line 734 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26,
#line 734 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_DelayForVars_27)
#line 734 "lco.m"
{
#line 740 "lco.m"
  {
#line 740 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 740 "lco.m"
    {
#line 740 "lco.m"
      transform_hlds__lco__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_116_105_116_105_111_110_95_100_101_112_101_110_100_101_110_116_95_103_111_97_108_95_95_91_49_44_32_50_93_95_48_9_p_0(transform_hlds__lco__Goal_12, transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22, transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23, transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24, transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25, transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26, transform_hlds__lco__STATE_VARIABLE_DelayForVars_27);
#line 740 "lco.m"
      return;
    }
#line 740 "lco.m"
  }
#line 734 "lco.m"
}

#line 699 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__potentially_moveable_goal_1_p_0(
#line 699 "lco.m"
  MR_Word transform_hlds__lco__Goal_2)
#line 699 "lco.m"
{
#line 701 "lco.m"
  while (MR_TRUE)
#line 701 "lco.m"
    {
#line 701 "lco.m"
      /* tailcall optimized into a loop */
#line 701 "lco.m"
      {
#line 701 "lco.m"
        MR_bool transform_hlds__lco__succeeded;
#line 701 "lco.m"
        MR_Word transform_hlds__lco__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_2, (MR_Integer) 0)));
#line 701 "lco.m"
        MR_Word transform_hlds__lco__GoalInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_2, (MR_Integer) 1)));
#line 701 "lco.m"
        MR_Word transform_hlds__lco__V_44_44;

#line 703 "lco.m"
        {
#line 703 "lco.m"
          transform_hlds__lco__V_44_44 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__lco__GoalInfo_4);
        }
#line 703 "lco.m"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_44_44 == (MR_Integer) 0);
#line 701 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 707 "lco.m"
          {
#line 707 "lco.m"
            if (((MR_tag((MR_Word) transform_hlds__lco__GoalExpr_3)) == (MR_mktag((MR_Integer) 1))))
#line 706 "lco.m"
              transform_hlds__lco__succeeded = MR_TRUE;
#line 707 "lco.m"
            else
#line 707 "lco.m"
              if (((((MR_tag((MR_Word) transform_hlds__lco__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 708 "lco.m"
                {
#line 708 "lco.m"
                  MR_Word transform_hlds__lco__Reason_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_3, (MR_Integer) 1)));
#line 708 "lco.m"
                  MR_Word transform_hlds__lco__SubGoal_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_3, (MR_Integer) 2)));
#line 709 "lco.m"
                  MR_Word transform_hlds__lco__V_12_12;
#line 709 "lco.m"
                  MR_Word transform_hlds__lco__V_13_13;

#line 709 "lco.m"
                  transform_hlds__lco__succeeded = ((((MR_tag((MR_Word) transform_hlds__lco__Reason_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_10, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 709 "lco.m"
                  if (transform_hlds__lco__succeeded)
#line 709 "lco.m"
                    {
#line 709 "lco.m"
                      transform_hlds__lco__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_10, (MR_Integer) 1)));
#line 709 "lco.m"
                      transform_hlds__lco__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_10, (MR_Integer) 2)));
#line 710 "lco.m"
                      transform_hlds__lco__succeeded = MR_TRUE;
#line 709 "lco.m"
                    }
#line 709 "lco.m"
                  else
#line 712 "lco.m"
                    {
#line 712 "lco.m"
                      /* direct tailcall eliminated */
#line 712 "lco.m"
                      {
#line 712 "lco.m"
                        MR_Word transform_hlds__lco__Goal__tmp_copy_2 = transform_hlds__lco__SubGoal_11;

#line 712 "lco.m"
                        transform_hlds__lco__Goal_2 = transform_hlds__lco__Goal__tmp_copy_2;
#line 712 "lco.m"
                      }
#line 712 "lco.m"
                      continue;
#line 712 "lco.m"
                    }
#line 708 "lco.m"
                }
#line 707 "lco.m"
              else
#line 707 "lco.m"
                if (((((MR_tag((MR_Word) transform_hlds__lco__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 726 "lco.m"
                  {
#line 727 "lco.m"
                    {
#line 727 "lco.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.potentially_moveable_goal\'/1", (MR_String) "shorthand");
                    }
#line 726 "lco.m"
                    transform_hlds__lco__succeeded = MR_TRUE;
#line 726 "lco.m"
                  }
#line 707 "lco.m"
                else
#line 707 "lco.m"
                  transform_hlds__lco__succeeded = MR_FALSE;
#line 707 "lco.m"
          }
#line 701 "lco.m"
        return transform_hlds__lco__succeeded;
#line 701 "lco.m"
      }
#line 701 "lco.m"
      break;
#line 701 "lco.m"
    }
#line 699 "lco.m"
}

#line 631 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__divide_rev_conj_8_p_0(
#line 631 "lco.m"
  MR_Word transform_hlds__lco__Info_9,
#line 631 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_10,
#line 631 "lco.m"
  MR_Word transform_hlds__lco__RevGoals0_11,
#line 631 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_AfterGoals_0_19,
#line 631 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_AfterGoals_20,
#line 631 "lco.m"
  MR_Word * transform_hlds__lco__RecGoal_13,
#line 631 "lco.m"
  MR_Word * transform_hlds__lco__RecOutArgs_14,
#line 631 "lco.m"
  MR_Word * transform_hlds__lco__RevBeforeGoals_15)
#line 631 "lco.m"
{
#line 11940 "transform_hlds.lco.c"
  while (MR_TRUE)
#line 11942 "transform_hlds.lco.c"
    {
#line 11944 "transform_hlds.lco.c"
      /* tailcall optimized into a loop */
#line 11946 "transform_hlds.lco.c"
      {
#line 11948 "transform_hlds.lco.c"
        MR_bool transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__RevGoals0_11)) == (MR_mktag((MR_Integer) 1)));
#line 11950 "transform_hlds.lco.c"
        MR_Word transform_hlds__lco__RevGoal_16;
#line 11952 "transform_hlds.lco.c"
        MR_Word transform_hlds__lco__RevGoalsTail_17;
#line 650 "lco.m"
        MR_Word transform_hlds__lco__OutArgs_18;
#line 664 "lco.m"
        MR_Word transform_hlds__lco__TypeCtorInfo_70_91;
#line 664 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_72_93;
#line 664 "lco.m"
        MR_Word transform_hlds__lco__GoalExpr_30;
#line 664 "lco.m"
        MR_Word transform_hlds__lco__GoalInfo_31;
#line 664 "lco.m"
        MR_Word transform_hlds__lco__PredId_32;
#line 664 "lco.m"
        MR_Integer transform_hlds__lco__ProcId_33;
#line 664 "lco.m"
        MR_Word transform_hlds__lco__Args_34;
#line 664 "lco.m"
        MR_Word transform_hlds__lco__ModuleInfo_38;
#line 664 "lco.m"
        MR_Word transform_hlds__lco__ProcInfo_39;
#line 664 "lco.m"
        MR_Word transform_hlds__lco__VarTypes_40;
#line 664 "lco.m"
        MR_Word transform_hlds__lco__CalleeProcInfo_41;
#line 664 "lco.m"
        MR_Word transform_hlds__lco__CalleeArgModes_42;
#line 664 "lco.m"
        MR_Word transform_hlds__lco__UnusedArgs_44;
#line 664 "lco.m"
        MR_Integer transform_hlds__lco__NumOutArgs_46;
#line 664 "lco.m"
        MR_Word transform_hlds__lco__CurrProcOutArgs_47;
#line 664 "lco.m"
        MR_Integer transform_hlds__lco__NumCurrProcOutArgs_48;
#line 664 "lco.m"
        MR_Word transform_hlds__lco__V_49_49;
#line 664 "lco.m"
        MR_Word transform_hlds__lco__V_50_50;
#line 664 "lco.m"
        MR_Word transform_hlds__lco__V_51_51;
#line 664 "lco.m"
        MR_Word transform_hlds__lco__V_94_94;
#line 666 "lco.m"
        MR_Word transform_hlds__lco___Builtin_35;
#line 666 "lco.m"
        MR_Word transform_hlds__lco___UnifyContext_36;
#line 666 "lco.m"
        MR_Word transform_hlds__lco___SymName_37;
#line 668 "lco.m"
        MR_Word transform_hlds__lco__V_57_57;
#line 668 "lco.m"
        MR_Word transform_hlds__lco__V_58_58;
#line 668 "lco.m"
        MR_Word transform_hlds__lco__V_59_59;
#line 668 "lco.m"
        MR_Word transform_hlds__lco__V_60_60;
#line 668 "lco.m"
        MR_Word transform_hlds__lco__V_61_61;
#line 668 "lco.m"
        MR_Word transform_hlds__lco__V_62_62;
#line 668 "lco.m"
        MR_Word transform_hlds__lco__V_63_63;
#line 669 "lco.m"
        MR_Word transform_hlds__lco__V_64_64;
#line 669 "lco.m"
        MR_Word transform_hlds__lco__V_65_65;
#line 669 "lco.m"
        MR_Word transform_hlds__lco__V_66_66;
#line 669 "lco.m"
        MR_Word transform_hlds__lco__V_67_67;
#line 669 "lco.m"
        MR_Word transform_hlds__lco__V_69_69;
#line 669 "lco.m"
        MR_Word transform_hlds__lco__V_70_70;
#line 671 "lco.m"
        MR_Word transform_hlds__lco__V_71_71;
#line 671 "lco.m"
        MR_Word transform_hlds__lco__V_72_72;
#line 671 "lco.m"
        MR_Word transform_hlds__lco__V_73_73;
#line 671 "lco.m"
        MR_Word transform_hlds__lco__V_74_74;
#line 671 "lco.m"
        MR_Word transform_hlds__lco__V_75_75;
#line 671 "lco.m"
        MR_Word transform_hlds__lco__V_76_76;
#line 677 "lco.m"
        MR_Word transform_hlds__lco___InArgs_43;
#line 687 "lco.m"
        MR_Word transform_hlds__lco__V_84_84;
#line 687 "lco.m"
        MR_Word transform_hlds__lco__V_85_85;
#line 687 "lco.m"
        MR_Word transform_hlds__lco__V_86_86;
#line 687 "lco.m"
        MR_Word transform_hlds__lco__V_87_87;
#line 687 "lco.m"
        MR_Word transform_hlds__lco__V_88_88;
#line 687 "lco.m"
        MR_Word transform_hlds__lco__V_89_89;
#line 687 "lco.m"
        MR_Word transform_hlds__lco__V_90_90;

#line 12057 "transform_hlds.lco.c"
        if (transform_hlds__lco__succeeded)
#line 12059 "transform_hlds.lco.c"
          {
#line 12061 "transform_hlds.lco.c"
            transform_hlds__lco__RevGoal_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__RevGoals0_11, (MR_Integer) 0)));
#line 12063 "transform_hlds.lco.c"
            transform_hlds__lco__RevGoalsTail_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__RevGoals0_11, (MR_Integer) 1)));
#line 665 "lco.m"
            transform_hlds__lco__GoalExpr_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__RevGoal_16, (MR_Integer) 0)));
#line 665 "lco.m"
            transform_hlds__lco__GoalInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__RevGoal_16, (MR_Integer) 1)));
#line 666 "lco.m"
            transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__GoalExpr_30)) == (MR_mktag((MR_Integer) 2)));
#line 666 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 666 "lco.m"
              {
#line 666 "lco.m"
                transform_hlds__lco__PredId_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr_30, (MR_Integer) 0)));
#line 666 "lco.m"
                transform_hlds__lco__ProcId_33 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr_30, (MR_Integer) 1)));
#line 666 "lco.m"
                transform_hlds__lco__Args_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr_30, (MR_Integer) 2)));
#line 666 "lco.m"
                transform_hlds__lco___Builtin_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr_30, (MR_Integer) 3)));
#line 666 "lco.m"
                transform_hlds__lco___UnifyContext_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr_30, (MR_Integer) 4)));
#line 666 "lco.m"
                transform_hlds__lco___SymName_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr_30, (MR_Integer) 5)));
#line 668 "lco.m"
                transform_hlds__lco__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 0)));
#line 668 "lco.m"
                transform_hlds__lco__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 1)));
#line 668 "lco.m"
                transform_hlds__lco__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 2)));
#line 668 "lco.m"
                transform_hlds__lco__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 3)));
#line 668 "lco.m"
                transform_hlds__lco__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 4)));
#line 668 "lco.m"
                transform_hlds__lco__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 5)));
#line 668 "lco.m"
                transform_hlds__lco__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 6)));
#line 668 "lco.m"
                transform_hlds__lco__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 7)));
#line 12103 "transform_hlds.lco.c"
                transform_hlds__lco__TypeCtorInfo_70_91 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 668 "lco.m"
                {
#line 668 "lco.m"
                  transform_hlds__lco__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 668 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_49_49, 0) = ((MR_Box) (transform_hlds__lco__PredId_32));
#line 668 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_49_49, 1) = ((MR_Box) (transform_hlds__lco__ProcId_33));
#line 668 "lco.m"
                }
#line 668 "lco.m"
                {
#line 668 "lco.m"
                  transform_hlds__lco__succeeded = mercury__set__member_2_p_0(transform_hlds__lco__TypeCtorInfo_70_91, ((MR_Box) (transform_hlds__lco__V_49_49)), transform_hlds__lco__V_50_50);
                }
#line 664 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 664 "lco.m"
                  {
#line 669 "lco.m"
                    {
#line 669 "lco.m"
                      transform_hlds__lco__V_51_51 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__lco__GoalInfo_31);
                    }
#line 669 "lco.m"
                    transform_hlds__lco__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 0)));
#line 669 "lco.m"
                    transform_hlds__lco__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 1)));
#line 669 "lco.m"
                    transform_hlds__lco__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 2)));
#line 669 "lco.m"
                    transform_hlds__lco__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 3)));
#line 669 "lco.m"
                    transform_hlds__lco__ProcInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 4)));
#line 669 "lco.m"
                    transform_hlds__lco__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 5)));
#line 669 "lco.m"
                    transform_hlds__lco__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 6)));
#line 669 "lco.m"
                    transform_hlds__lco__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 7)));
#line 669 "lco.m"
                    transform_hlds__lco__succeeded = (transform_hlds__lco__V_51_51 == transform_hlds__lco__V_94_94);
#line 664 "lco.m"
                    if (transform_hlds__lco__succeeded)
#line 664 "lco.m"
                      {
#line 671 "lco.m"
                        transform_hlds__lco__ModuleInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_9, (MR_Integer) 0)));
#line 671 "lco.m"
                        transform_hlds__lco__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_9, (MR_Integer) 1)));
#line 671 "lco.m"
                        transform_hlds__lco__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_9, (MR_Integer) 2)));
#line 671 "lco.m"
                        transform_hlds__lco__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_9, (MR_Integer) 3)));
#line 671 "lco.m"
                        transform_hlds__lco__V_74_74 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_9, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 671 "lco.m"
                        transform_hlds__lco__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_9, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 671 "lco.m"
                        transform_hlds__lco__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_9, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 673 "lco.m"
                        {
#line 673 "lco.m"
                          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lco__ProcInfo_39, &transform_hlds__lco__VarTypes_40);
                        }
#line 675 "lco.m"
                        {
#line 675 "lco.m"
                          hlds__hlds_module__module_info_proc_info_4_p_0(transform_hlds__lco__ModuleInfo_38, transform_hlds__lco__PredId_32, transform_hlds__lco__ProcId_33, &transform_hlds__lco__CalleeProcInfo_41);
                        }
#line 676 "lco.m"
                        {
#line 676 "lco.m"
                          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__lco__CalleeProcInfo_41, &transform_hlds__lco__CalleeArgModes_42);
                        }
#line 677 "lco.m"
                        {
#line 677 "lco.m"
                          transform_hlds__lco__classify_proc_call_args_7_p_0(transform_hlds__lco__ModuleInfo_38, transform_hlds__lco__VarTypes_40, transform_hlds__lco__Args_34, transform_hlds__lco__CalleeArgModes_42, &transform_hlds__lco___InArgs_43, &transform_hlds__lco__OutArgs_18, &transform_hlds__lco__UnusedArgs_44);
                        }
#line 679 "lco.m"
                        transform_hlds__lco__succeeded = (transform_hlds__lco__UnusedArgs_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 664 "lco.m"
                        if (transform_hlds__lco__succeeded)
#line 664 "lco.m"
                          {
#line 12191 "transform_hlds.lco.c"
                            transform_hlds__lco__TypeInfo_72_93 = (MR_Word) &transform_hlds__lco_scalar_common_1[4];
#line 686 "lco.m"
                            {
#line 686 "lco.m"
                              mercury__list__length_2_p_0(transform_hlds__lco__TypeInfo_72_93, transform_hlds__lco__OutArgs_18, &transform_hlds__lco__NumOutArgs_46);
                            }
#line 687 "lco.m"
                            transform_hlds__lco__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 0)));
#line 687 "lco.m"
                            transform_hlds__lco__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 1)));
#line 687 "lco.m"
                            transform_hlds__lco__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 2)));
#line 687 "lco.m"
                            transform_hlds__lco__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 3)));
#line 687 "lco.m"
                            transform_hlds__lco__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 4)));
#line 687 "lco.m"
                            transform_hlds__lco__CurrProcOutArgs_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 5)));
#line 687 "lco.m"
                            transform_hlds__lco__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 6)));
#line 687 "lco.m"
                            transform_hlds__lco__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 7)));
#line 688 "lco.m"
                            {
#line 688 "lco.m"
                              mercury__list__length_2_p_0(transform_hlds__lco__TypeInfo_72_93, transform_hlds__lco__CurrProcOutArgs_47, &transform_hlds__lco__NumCurrProcOutArgs_48);
                            }
#line 689 "lco.m"
                            transform_hlds__lco__succeeded = (transform_hlds__lco__NumOutArgs_46 == transform_hlds__lco__NumCurrProcOutArgs_48);
#line 664 "lco.m"
                          }
#line 664 "lco.m"
                      }
#line 664 "lco.m"
                  }
#line 666 "lco.m"
              }
#line 650 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 647 "lco.m"
              {
#line 647 "lco.m"
                *transform_hlds__lco__RecGoal_13 = transform_hlds__lco__RevGoal_16;
#line 648 "lco.m"
                *transform_hlds__lco__RecOutArgs_14 = transform_hlds__lco__OutArgs_18;
#line 649 "lco.m"
                *transform_hlds__lco__RevBeforeGoals_15 = transform_hlds__lco__RevGoalsTail_17;
#line 649 "lco.m"
                *transform_hlds__lco__STATE_VARIABLE_AfterGoals_20 = transform_hlds__lco__STATE_VARIABLE_AfterGoals_0_19;
#line 647 "lco.m"
                transform_hlds__lco__succeeded = MR_TRUE;
#line 647 "lco.m"
              }
#line 650 "lco.m"
            else
#line 656 "lco.m"
              {
#line 656 "lco.m"
                MR_Word transform_hlds__lco__TypeCtorInfo_23_23;
#line 656 "lco.m"
                MR_Word transform_hlds__lco__STATE_VARIABLE_AfterGoals_21_21;

#line 651 "lco.m"
                {
#line 651 "lco.m"
                  transform_hlds__lco__succeeded = transform_hlds__lco__potentially_moveable_goal_1_p_0(transform_hlds__lco__RevGoal_16);
                }
#line 656 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 656 "lco.m"
                  {
#line 12263 "transform_hlds.lco.c"
                    transform_hlds__lco__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 653 "lco.m"
                    {
#line 653 "lco.m"
                      mercury__list__cons_3_p_0(transform_hlds__lco__TypeCtorInfo_23_23, ((MR_Box) (transform_hlds__lco__RevGoal_16)), transform_hlds__lco__STATE_VARIABLE_AfterGoals_0_19, &transform_hlds__lco__STATE_VARIABLE_AfterGoals_21_21);
                    }
#line 654 "lco.m"
                    /* direct tailcall eliminated */
#line 654 "lco.m"
                    {
#line 654 "lco.m"
                      MR_Word transform_hlds__lco__RevGoals0__tmp_copy_11 = transform_hlds__lco__RevGoalsTail_17;
#line 654 "lco.m"
                      MR_Word transform_hlds__lco__STATE_VARIABLE_AfterGoals_0__tmp_copy_19 = transform_hlds__lco__STATE_VARIABLE_AfterGoals_21_21;

#line 654 "lco.m"
                      transform_hlds__lco__STATE_VARIABLE_AfterGoals_0_19 = transform_hlds__lco__STATE_VARIABLE_AfterGoals_0__tmp_copy_19;
#line 654 "lco.m"
                      transform_hlds__lco__RevGoals0_11 = transform_hlds__lco__RevGoals0__tmp_copy_11;
#line 654 "lco.m"
                    }
#line 654 "lco.m"
                    continue;
#line 656 "lco.m"
                  }
#line 656 "lco.m"
              }
#line 12291 "transform_hlds.lco.c"
          }
#line 12293 "transform_hlds.lco.c"
        return transform_hlds__lco__succeeded;
#line 12295 "transform_hlds.lco.c"
      }
#line 12297 "transform_hlds.lco.c"
      break;
#line 12299 "transform_hlds.lco.c"
    }
#line 631 "lco.m"
}

#line 601 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0_2(
#line 601 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 601 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 601 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 601 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 601 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 601 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5)
#line 601 "lco.m"
{
#line 601 "lco.m"
  {
#line 601 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 601 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 601 "lco.m"
    MR_Word transform_hlds__lco__conv7_STATE_VARIABLE_UnifyInputVars_31;
#line 601 "lco.m"
    MR_Word transform_hlds__lco__conv6_STATE_VARIABLE_Info_33;

#line 601 "lco.m"
    {
#line 601 "lco.m"
      transform_hlds__lco__succeeded = transform_hlds__lco__acceptable_construct_unification_5_p_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2), &transform_hlds__lco__conv7_STATE_VARIABLE_UnifyInputVars_31, ((MR_Word) transform_hlds__lco__wrapper_arg_4), &transform_hlds__lco__conv6_STATE_VARIABLE_Info_33);
    }
#line 601 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 601 "lco.m"
      {
#line 601 "lco.m"
        *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv7_STATE_VARIABLE_UnifyInputVars_31));
#line 601 "lco.m"
        *transform_hlds__lco__wrapper_arg_5 = ((MR_Box) (transform_hlds__lco__conv6_STATE_VARIABLE_Info_33));
#line 601 "lco.m"
        transform_hlds__lco__succeeded = MR_TRUE;
#line 601 "lco.m"
      }
#line 601 "lco.m"
    return transform_hlds__lco__succeeded;
#line 601 "lco.m"
  }
#line 601 "lco.m"
}

#line 597 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0_1(
#line 597 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 597 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 597 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 597 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 597 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 597 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5,
#line 597 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_6,
#line 597 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_7)
#line 597 "lco.m"
{
#line 597 "lco.m"
  {
#line 597 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 597 "lco.m"
    MR_Word transform_hlds__lco__conv2_STATE_VARIABLE_RevDependentGoals_23;
#line 597 "lco.m"
    MR_Word transform_hlds__lco__conv1_STATE_VARIABLE_RevNonDependentGoals_25;
#line 597 "lco.m"
    MR_Word transform_hlds__lco__conv0_STATE_VARIABLE_DelayForVars_27;

#line 597 "lco.m"
    {
#line 597 "lco.m"
      transform_hlds__lco__partition_dependent_goal_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2), &transform_hlds__lco__conv2_STATE_VARIABLE_RevDependentGoals_23, ((MR_Word) transform_hlds__lco__wrapper_arg_4), &transform_hlds__lco__conv1_STATE_VARIABLE_RevNonDependentGoals_25, ((MR_Word) transform_hlds__lco__wrapper_arg_6), &transform_hlds__lco__conv0_STATE_VARIABLE_DelayForVars_27);
    }
#line 597 "lco.m"
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv2_STATE_VARIABLE_RevDependentGoals_23));
#line 597 "lco.m"
    *transform_hlds__lco__wrapper_arg_5 = ((MR_Box) (transform_hlds__lco__conv1_STATE_VARIABLE_RevNonDependentGoals_25));
#line 597 "lco.m"
    *transform_hlds__lco__wrapper_arg_7 = ((MR_Box) (transform_hlds__lco__conv0_STATE_VARIABLE_DelayForVars_27));
#line 597 "lco.m"
  }
#line 597 "lco.m"
}

#line 587 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0(
#line 587 "lco.m"
  MR_Word transform_hlds__lco__Goals0_6,
#line 587 "lco.m"
  MR_Word * transform_hlds__lco__MaybeGoals_7,
#line 587 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_26,
#line 587 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_27,
#line 587 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_9)
#line 587 "lco.m"
{
#line 590 "lco.m"
  {
#line 590 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 590 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_39_39 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 590 "lco.m"
    MR_Word transform_hlds__lco__RevGoals0_10;
#line 617 "lco.m"
    MR_Word transform_hlds__lco__RecGoal_12;
#line 617 "lco.m"
    MR_Word transform_hlds__lco__RecOutArgs_13;
#line 617 "lco.m"
    MR_Word transform_hlds__lco__RevBeforeGoals_14;
#line 617 "lco.m"
    MR_Word transform_hlds__lco__RevAfterDependentGoals_18;
#line 617 "lco.m"
    MR_Word transform_hlds__lco__RevAfterNonDependentGoals_19;
#line 617 "lco.m"
    MR_Word transform_hlds__lco__UnifyInputVars_21;
#line 617 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_Info_34_34;
#line 594 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_40_40;
#line 594 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_48_48;
#line 594 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_49_49;
#line 594 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_55_55;
#line 594 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_56_56;
#line 594 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_57_57;
#line 594 "lco.m"
    MR_Word transform_hlds__lco__AfterGoals_11;
#line 594 "lco.m"
    MR_Word transform_hlds__lco__DelayForVars0_17;
#line 594 "lco.m"
    MR_Word transform_hlds__lco__V_29_29;
#line 594 "lco.m"
    MR_Word transform_hlds__lco__V_30_30;
#line 594 "lco.m"
    MR_Word transform_hlds__lco__V_31_31;
#line 594 "lco.m"
    MR_Word transform_hlds__lco__V_32_32;
#line 594 "lco.m"
    MR_Word transform_hlds__lco__V_33_33;
#line 595 "lco.m"
    MR_Word transform_hlds__lco__V_15_15;
#line 595 "lco.m"
    MR_Word transform_hlds__lco__V_16_16;
#line 597 "lco.m"
    MR_Word transform_hlds__lco___DelayForVars_20;
#line 597 "lco.m"
    MR_Box transform_hlds__lco__conv5_RevAfterDependentGoals_18;
#line 597 "lco.m"
    MR_Box transform_hlds__lco__conv4_RevAfterNonDependentGoals_19;
#line 597 "lco.m"
    MR_Box transform_hlds__lco__conv3__DelayForVars_20;
#line 601 "lco.m"
    MR_Box transform_hlds__lco__conv9_UnifyInputVars_21;
#line 601 "lco.m"
    MR_Box transform_hlds__lco__conv8_STATE_VARIABLE_Info_34_34;

#line 591 "lco.m"
    {
#line 591 "lco.m"
      mercury__list__reverse_2_p_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__Goals0_6, &transform_hlds__lco__RevGoals0_10);
    }
#line 593 "lco.m"
    {
#line 593 "lco.m"
      transform_hlds__lco__succeeded = transform_hlds__lco__divide_rev_conj_8_p_0(transform_hlds__lco__STATE_VARIABLE_Info_0_26, transform_hlds__lco__ConstInfo_9, transform_hlds__lco__RevGoals0_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__lco__AfterGoals_11, &transform_hlds__lco__RecGoal_12, &transform_hlds__lco__RecOutArgs_13, &transform_hlds__lco__RevBeforeGoals_14);
    }
#line 594 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 594 "lco.m"
      {
#line 595 "lco.m"
        transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__AfterGoals_11)) == (MR_mktag((MR_Integer) 1)));
#line 595 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 595 "lco.m"
          {
#line 595 "lco.m"
            transform_hlds__lco__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__AfterGoals_11, (MR_Integer) 0)));
#line 595 "lco.m"
            transform_hlds__lco__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__AfterGoals_11, (MR_Integer) 1)));
#line 12508 "transform_hlds.lco.c"
            transform_hlds__lco__TypeCtorInfo_40_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 596 "lco.m"
            {
#line 596 "lco.m"
              parse_tree__set_of_var__list_to_set_2_p_0(transform_hlds__lco__TypeCtorInfo_40_40, transform_hlds__lco__RecOutArgs_13, &transform_hlds__lco__DelayForVars0_17);
            }
#line 597 "lco.m"
            transform_hlds__lco__V_30_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 597 "lco.m"
            transform_hlds__lco__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 12519 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_48_48 = (MR_Word) &transform_hlds__lco_scalar_common_1[2];
#line 12521 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_49_49 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
#line 597 "lco.m"
            {
#line 597 "lco.m"
              transform_hlds__lco__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 597 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_29_29, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_8[0]));
#line 597 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_29_29, 1) = ((MR_Box) (transform_hlds__lco__lco_in_conj_5_p_0_1));
#line 597 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 597 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_29_29, 3) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_Info_0_26));
#line 597 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_29_29, 4) = ((MR_Box) (transform_hlds__lco__ConstInfo_9));
#line 597 "lco.m"
            }
#line 597 "lco.m"
            {
#line 597 "lco.m"
              mercury__list__foldl3_8_p_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__TypeInfo_48_48, transform_hlds__lco__TypeInfo_48_48, transform_hlds__lco__TypeInfo_49_49, transform_hlds__lco__V_29_29, transform_hlds__lco__AfterGoals_11, ((MR_Box) (transform_hlds__lco__V_30_30)), &transform_hlds__lco__conv5_RevAfterDependentGoals_18, ((MR_Box) (transform_hlds__lco__V_31_31)), &transform_hlds__lco__conv4_RevAfterNonDependentGoals_19, ((MR_Box) (transform_hlds__lco__DelayForVars0_17)), &transform_hlds__lco__conv3__DelayForVars_20);
            }
#line 597 "lco.m"
            transform_hlds__lco__RevAfterDependentGoals_18 = ((MR_Word) transform_hlds__lco__conv5_RevAfterDependentGoals_18);
#line 597 "lco.m"
            transform_hlds__lco__RevAfterNonDependentGoals_19 = ((MR_Word) transform_hlds__lco__conv4_RevAfterNonDependentGoals_19);
#line 597 "lco.m"
            transform_hlds__lco___DelayForVars_20 = ((MR_Word) transform_hlds__lco__conv3__DelayForVars_20);
#line 601 "lco.m"
            transform_hlds__lco__V_32_32 = (MR_Word) &transform_hlds__lco_scalar_common_2[10];
#line 12552 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_55_55 = (MR_Word) &transform_hlds__lco_scalar_common_1[4];
#line 601 "lco.m"
            {
#line 601 "lco.m"
              transform_hlds__lco__V_33_33 = mercury__bag__init_0_f_0(transform_hlds__lco__TypeInfo_55_55);
            }
#line 12559 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_56_56 = (MR_Word) &transform_hlds__lco_scalar_common_1[5];
#line 12561 "transform_hlds.lco.c"
            transform_hlds__lco__TypeCtorInfo_57_57 = (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_info_0;
#line 601 "lco.m"
            {
#line 601 "lco.m"
              transform_hlds__lco__succeeded = mercury__list__foldl2_6_p_4(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__TypeInfo_56_56, transform_hlds__lco__TypeCtorInfo_57_57, transform_hlds__lco__V_32_32, transform_hlds__lco__RevAfterDependentGoals_18, ((MR_Box) (transform_hlds__lco__V_33_33)), &transform_hlds__lco__conv9_UnifyInputVars_21, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_Info_0_26)), &transform_hlds__lco__conv8_STATE_VARIABLE_Info_34_34);
            }
#line 601 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 601 "lco.m"
              {
#line 601 "lco.m"
                transform_hlds__lco__UnifyInputVars_21 = ((MR_Word) transform_hlds__lco__conv9_UnifyInputVars_21);
#line 601 "lco.m"
                transform_hlds__lco__STATE_VARIABLE_Info_34_34 = ((MR_Word) transform_hlds__lco__conv8_STATE_VARIABLE_Info_34_34);
#line 601 "lco.m"
                transform_hlds__lco__succeeded = MR_TRUE;
#line 601 "lco.m"
              }
#line 595 "lco.m"
          }
#line 594 "lco.m"
      }
#line 617 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 604 "lco.m"
      {
#line 604 "lco.m"
        MR_Word transform_hlds__lco__UnifyGoals_22;
#line 604 "lco.m"
        MR_Word transform_hlds__lco__MaybeGoals1_23;

#line 604 "lco.m"
        {
#line 604 "lco.m"
          mercury__list__reverse_2_p_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__RevAfterDependentGoals_18, &transform_hlds__lco__UnifyGoals_22);
        }
#line 605 "lco.m"
        {
#line 605 "lco.m"
          transform_hlds__lco__transform_call_and_unifies_8_p_0(transform_hlds__lco__RecGoal_12, transform_hlds__lco__RecOutArgs_13, transform_hlds__lco__UnifyGoals_22, transform_hlds__lco__UnifyInputVars_21, &transform_hlds__lco__MaybeGoals1_23, transform_hlds__lco__STATE_VARIABLE_Info_34_34, transform_hlds__lco__STATE_VARIABLE_Info_27, transform_hlds__lco__ConstInfo_9);
        }
#line 613 "lco.m"
        if ((transform_hlds__lco__MaybeGoals1_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 615 "lco.m"
          *transform_hlds__lco__MaybeGoals_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 613 "lco.m"
        else
#line 608 "lco.m"
          {
#line 608 "lco.m"
            MR_Word transform_hlds__lco__UpdatedRecAndUnifies_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__MaybeGoals1_23, (MR_Integer) 0)));
#line 608 "lco.m"
            MR_Word transform_hlds__lco__Goals_25;
#line 608 "lco.m"
            MR_Word transform_hlds__lco__V_36_36;
#line 608 "lco.m"
            MR_Word transform_hlds__lco__V_37_37;
#line 608 "lco.m"
            MR_Word transform_hlds__lco__V_38_38;

#line 610 "lco.m"
            {
#line 610 "lco.m"
              transform_hlds__lco__V_36_36 = mercury__list__reverse_1_f_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__RevBeforeGoals_14);
            }
#line 611 "lco.m"
            {
#line 611 "lco.m"
              transform_hlds__lco__V_38_38 = mercury__list__reverse_1_f_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__RevAfterNonDependentGoals_19);
            }
#line 610 "lco.m"
            {
#line 610 "lco.m"
              transform_hlds__lco__V_37_37 = mercury__list__f_43_43_2_f_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__V_38_38, transform_hlds__lco__UpdatedRecAndUnifies_24);
            }
#line 609 "lco.m"
            {
#line 609 "lco.m"
              transform_hlds__lco__Goals_25 = mercury__list__f_43_43_2_f_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__V_36_36, transform_hlds__lco__V_37_37);
            }
#line 612 "lco.m"
            {
#line 612 "lco.m"
              MR_Word base;
#line 612 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 612 "lco.m"
              *transform_hlds__lco__MaybeGoals_7 = base;
#line 612 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Goals_25));
#line 612 "lco.m"
            }
#line 608 "lco.m"
          }
#line 604 "lco.m"
      }
#line 617 "lco.m"
    else
#line 618 "lco.m"
      {
#line 618 "lco.m"
        *transform_hlds__lco__MaybeGoals_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 618 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_Info_27 = transform_hlds__lco__STATE_VARIABLE_Info_0_26;
#line 618 "lco.m"
      }
#line 590 "lco.m"
  }
#line 587 "lco.m"
}

#line 562 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_cases_5_p_0(
#line 562 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 562 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__2_2,
#line 562 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_3,
#line 562 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_4,
#line 562 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5)
#line 562 "lco.m"
{
#line 565 "lco.m"
  {
#line 565 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 565 "lco.m"
    if ((transform_hlds__lco__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 565 "lco.m"
      {
#line 565 "lco.m"
        *transform_hlds__lco__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 565 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_Info_4 = transform_hlds__lco__STATE_VARIABLE_Info_0_3;
#line 565 "lco.m"
      }
#line 565 "lco.m"
    else
#line 566 "lco.m"
      {
#line 566 "lco.m"
        MR_Word transform_hlds__lco__Case0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 566 "lco.m"
        MR_Word transform_hlds__lco__Cases0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 566 "lco.m"
        MR_Word transform_hlds__lco__Case_12;
#line 566 "lco.m"
        MR_Word transform_hlds__lco__Cases_13;
#line 566 "lco.m"
        MR_Word transform_hlds__lco__MainConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Case0_10, (MR_Integer) 0)));
#line 566 "lco.m"
        MR_Word transform_hlds__lco__OtherConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Case0_10, (MR_Integer) 1)));
#line 566 "lco.m"
        MR_Word transform_hlds__lco__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Case0_10, (MR_Integer) 2)));
#line 566 "lco.m"
        MR_Word transform_hlds__lco__Goal_19;
#line 566 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_Info_22_22;

#line 568 "lco.m"
        {
#line 568 "lco.m"
          transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__Goal0_18, &transform_hlds__lco__Goal_19, transform_hlds__lco__STATE_VARIABLE_Info_0_3, &transform_hlds__lco__STATE_VARIABLE_Info_22_22, transform_hlds__lco__HeadVar__5_5);
        }
#line 569 "lco.m"
        {
#line 569 "lco.m"
          transform_hlds__lco__Case_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 569 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__Case_12, 0) = ((MR_Box) (transform_hlds__lco__MainConsId_16));
#line 569 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__Case_12, 1) = ((MR_Box) (transform_hlds__lco__OtherConsIds_17));
#line 569 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__Case_12, 2) = ((MR_Box) (transform_hlds__lco__Goal_19));
#line 569 "lco.m"
        }
#line 570 "lco.m"
        {
#line 570 "lco.m"
          transform_hlds__lco__lco_in_cases_5_p_0(transform_hlds__lco__Cases0_11, &transform_hlds__lco__Cases_13, transform_hlds__lco__STATE_VARIABLE_Info_22_22, transform_hlds__lco__STATE_VARIABLE_Info_4, transform_hlds__lco__HeadVar__5_5);
        }
#line 566 "lco.m"
        {
#line 566 "lco.m"
          MR_Word base;
#line 566 "lco.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 566 "lco.m"
          *transform_hlds__lco__HeadVar__2_2 = base;
#line 566 "lco.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Case_12));
#line 566 "lco.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__Cases_13));
#line 566 "lco.m"
        }
#line 566 "lco.m"
      }
#line 565 "lco.m"
  }
#line 562 "lco.m"
}

#line 474 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_goal_5_p_0(
#line 474 "lco.m"
  MR_Word transform_hlds__lco__Goal0_6,
#line 474 "lco.m"
  MR_Word * transform_hlds__lco__Goal_7,
#line 474 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_60,
#line 474 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_61,
#line 474 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_9)
#line 474 "lco.m"
{
#line 477 "lco.m"
  {
#line 477 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 477 "lco.m"
    MR_Word transform_hlds__lco__GoalExpr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal0_6, (MR_Integer) 0)));
#line 477 "lco.m"
    MR_Word transform_hlds__lco__GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal0_6, (MR_Integer) 1)));
#line 477 "lco.m"
    MR_Word transform_hlds__lco__GoalExpr_16;

#line 505 "lco.m"
    if (((((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 480 "lco.m"
      {
#line 480 "lco.m"
        MR_Word transform_hlds__lco__ConjType_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 1)));
#line 480 "lco.m"
        MR_Word transform_hlds__lco__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 2)));

#line 500 "lco.m"
        if ((transform_hlds__lco__ConjType_12 == (MR_Integer) 1))
#line 501 "lco.m"
          {
#line 503 "lco.m"
            MR_Word transform_hlds__lco__V_90_90;
#line 503 "lco.m"
            MR_Word transform_hlds__lco__V_91_91;
#line 503 "lco.m"
            MR_Word transform_hlds__lco__V_92_92;
#line 503 "lco.m"
            MR_Word transform_hlds__lco__V_93_93;
#line 503 "lco.m"
            MR_Word transform_hlds__lco__V_94_94;
#line 503 "lco.m"
            MR_Word transform_hlds__lco__V_96_96;
#line 503 "lco.m"
            MR_Word transform_hlds__lco__V_95_95;

#line 502 "lco.m"
            transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
#line 503 "lco.m"
            transform_hlds__lco__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 0)));
#line 503 "lco.m"
            transform_hlds__lco__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 1)));
#line 503 "lco.m"
            transform_hlds__lco__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 2)));
#line 503 "lco.m"
            transform_hlds__lco__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 3)));
#line 503 "lco.m"
            transform_hlds__lco__V_94_94 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 503 "lco.m"
            transform_hlds__lco__V_95_95 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 503 "lco.m"
            transform_hlds__lco__V_96_96 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 503 "lco.m"
            {
#line 503 "lco.m"
              MR_Word base;
#line 503 "lco.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 503 "lco.m"
              *transform_hlds__lco__STATE_VARIABLE_Info_61 = base;
#line 503 "lco.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__V_90_90));
#line 503 "lco.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__V_91_91));
#line 503 "lco.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__V_92_92));
#line 503 "lco.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lco__V_93_93));
#line 503 "lco.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((transform_hlds__lco__V_94_94 | (((((MR_Integer) 0 << (MR_Integer) 1)) | ((transform_hlds__lco__V_96_96 << (MR_Integer) 2)))))));
#line 503 "lco.m"
            }
#line 501 "lco.m"
          }
#line 500 "lco.m"
        else
#line 482 "lco.m"
          {
#line 482 "lco.m"
            MR_Word transform_hlds__lco__MaybeGoals_14;
#line 482 "lco.m"
            MR_Word transform_hlds__lco__STATE_VARIABLE_Info_75_75;

#line 483 "lco.m"
            {
#line 483 "lco.m"
              transform_hlds__lco__lco_in_conj_5_p_0(transform_hlds__lco__Goals0_13, &transform_hlds__lco__MaybeGoals_14, transform_hlds__lco__STATE_VARIABLE_Info_0_60, &transform_hlds__lco__STATE_VARIABLE_Info_75_75, transform_hlds__lco__ConstInfo_9);
            }
#line 487 "lco.m"
            if ((transform_hlds__lco__MaybeGoals_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 496 "lco.m"
              {
#line 496 "lco.m"
                MR_Word transform_hlds__lco__AllButLast_17;
#line 496 "lco.m"
                MR_Word transform_hlds__lco__Last0_18;
#line 493 "lco.m"
                MR_Box transform_hlds__lco__conv0_Last0_18;

#line 493 "lco.m"
                {
#line 493 "lco.m"
                  transform_hlds__lco__succeeded = mercury__list__split_last_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__lco__Goals0_13, &transform_hlds__lco__AllButLast_17, &transform_hlds__lco__conv0_Last0_18);
                }
#line 493 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 493 "lco.m"
                  {
#line 493 "lco.m"
                    transform_hlds__lco__Last0_18 = ((MR_Word) transform_hlds__lco__conv0_Last0_18);
#line 493 "lco.m"
                    transform_hlds__lco__succeeded = MR_TRUE;
#line 493 "lco.m"
                  }
#line 496 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 494 "lco.m"
                  {
#line 494 "lco.m"
                    MR_Word transform_hlds__lco__Last_19;
#line 494 "lco.m"
                    MR_Word transform_hlds__lco__V_78_78;
#line 494 "lco.m"
                    MR_Word transform_hlds__lco__V_79_79;

#line 494 "lco.m"
                    {
#line 494 "lco.m"
                      transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__Last0_18, &transform_hlds__lco__Last_19, transform_hlds__lco__STATE_VARIABLE_Info_75_75, transform_hlds__lco__STATE_VARIABLE_Info_61, transform_hlds__lco__ConstInfo_9);
                    }
#line 495 "lco.m"
                    {
#line 495 "lco.m"
                      transform_hlds__lco__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 495 "lco.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__lco__V_79_79, 0) = ((MR_Box) (transform_hlds__lco__Last_19));
#line 495 "lco.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__lco__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 495 "lco.m"
                    }
#line 495 "lco.m"
                    {
#line 495 "lco.m"
                      transform_hlds__lco__V_78_78 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__lco__AllButLast_17, transform_hlds__lco__V_79_79);
                    }
#line 495 "lco.m"
                    {
#line 495 "lco.m"
                      transform_hlds__lco__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 495 "lco.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 495 "lco.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 1) = ((MR_Box) ((MR_Integer) 0));
#line 495 "lco.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__lco__V_78_78));
#line 495 "lco.m"
                    }
#line 494 "lco.m"
                  }
#line 496 "lco.m"
                else
#line 497 "lco.m"
                  {
#line 497 "lco.m"
                    transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
#line 497 "lco.m"
                    *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_75_75;
#line 497 "lco.m"
                  }
#line 496 "lco.m"
              }
#line 487 "lco.m"
            else
#line 485 "lco.m"
              {
#line 485 "lco.m"
                MR_Word transform_hlds__lco__Goals_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__MaybeGoals_14, (MR_Integer) 0)));

#line 486 "lco.m"
                {
#line 486 "lco.m"
                  transform_hlds__lco__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 486 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 486 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 1) = ((MR_Box) ((MR_Integer) 0));
#line 486 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__lco__Goals_15));
#line 486 "lco.m"
                }
#line 486 "lco.m"
                *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_75_75;
#line 485 "lco.m"
              }
#line 482 "lco.m"
          }
#line 480 "lco.m"
      }
#line 505 "lco.m"
    else
#line 505 "lco.m"
      if (((((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 506 "lco.m"
        {
#line 506 "lco.m"
          MR_Word transform_hlds__lco__Goals0_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 1)));
#line 512 "lco.m"
          MR_Word transform_hlds__lco__AllButLast_83;
#line 512 "lco.m"
          MR_Word transform_hlds__lco__Last0_84;
#line 509 "lco.m"
          MR_Box transform_hlds__lco__conv1_Last0_84;

#line 509 "lco.m"
          {
#line 509 "lco.m"
            transform_hlds__lco__succeeded = mercury__list__split_last_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__lco__Goals0_86, &transform_hlds__lco__AllButLast_83, &transform_hlds__lco__conv1_Last0_84);
          }
#line 509 "lco.m"
          if (transform_hlds__lco__succeeded)
#line 509 "lco.m"
            {
#line 509 "lco.m"
              transform_hlds__lco__Last0_84 = ((MR_Word) transform_hlds__lco__conv1_Last0_84);
#line 509 "lco.m"
              transform_hlds__lco__succeeded = MR_TRUE;
#line 509 "lco.m"
            }
#line 512 "lco.m"
          if (transform_hlds__lco__succeeded)
#line 510 "lco.m"
            {
#line 510 "lco.m"
              MR_Word transform_hlds__lco__V_70_70;
#line 510 "lco.m"
              MR_Word transform_hlds__lco__V_71_71;
#line 510 "lco.m"
              MR_Word transform_hlds__lco__Last_82;

#line 510 "lco.m"
              {
#line 510 "lco.m"
                transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__Last0_84, &transform_hlds__lco__Last_82, transform_hlds__lco__STATE_VARIABLE_Info_0_60, transform_hlds__lco__STATE_VARIABLE_Info_61, transform_hlds__lco__ConstInfo_9);
              }
#line 511 "lco.m"
              {
#line 511 "lco.m"
                transform_hlds__lco__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "lco.m"
                MR_hl_field(MR_mktag(1), transform_hlds__lco__V_71_71, 0) = ((MR_Box) (transform_hlds__lco__Last_82));
#line 511 "lco.m"
                MR_hl_field(MR_mktag(1), transform_hlds__lco__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 511 "lco.m"
              }
#line 511 "lco.m"
              {
#line 511 "lco.m"
                transform_hlds__lco__V_70_70 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__lco__AllButLast_83, transform_hlds__lco__V_71_71);
              }
#line 511 "lco.m"
              {
#line 511 "lco.m"
                transform_hlds__lco__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "lco.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 511 "lco.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__lco__V_70_70));
#line 511 "lco.m"
              }
#line 510 "lco.m"
            }
#line 512 "lco.m"
          else
#line 513 "lco.m"
            {
#line 513 "lco.m"
              transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
#line 513 "lco.m"
              *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_0_60;
#line 513 "lco.m"
            }
#line 506 "lco.m"
        }
#line 505 "lco.m"
      else
#line 505 "lco.m"
        if (((((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 520 "lco.m"
          {
#line 520 "lco.m"
            MR_Word transform_hlds__lco__Vars_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 1)));
#line 520 "lco.m"
            MR_Word transform_hlds__lco__Cond_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 2)));
#line 520 "lco.m"
            MR_Word transform_hlds__lco__Then0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 3)));
#line 520 "lco.m"
            MR_Word transform_hlds__lco__Else0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 4)));
#line 520 "lco.m"
            MR_Word transform_hlds__lco__Then_28;
#line 520 "lco.m"
            MR_Word transform_hlds__lco__Else_29;
#line 520 "lco.m"
            MR_Word transform_hlds__lco__STATE_VARIABLE_Info_66_66;

#line 521 "lco.m"
            {
#line 521 "lco.m"
              transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__Then0_26, &transform_hlds__lco__Then_28, transform_hlds__lco__STATE_VARIABLE_Info_0_60, &transform_hlds__lco__STATE_VARIABLE_Info_66_66, transform_hlds__lco__ConstInfo_9);
            }
#line 522 "lco.m"
            {
#line 522 "lco.m"
              transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__Else0_27, &transform_hlds__lco__Else_29, transform_hlds__lco__STATE_VARIABLE_Info_66_66, transform_hlds__lco__STATE_VARIABLE_Info_61, transform_hlds__lco__ConstInfo_9);
            }
#line 523 "lco.m"
            {
#line 523 "lco.m"
              transform_hlds__lco__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 523 "lco.m"
              MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 523 "lco.m"
              MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__lco__Vars_24));
#line 523 "lco.m"
              MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__lco__Cond_25));
#line 523 "lco.m"
              MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 3) = ((MR_Box) (transform_hlds__lco__Then_28));
#line 523 "lco.m"
              MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 4) = ((MR_Box) (transform_hlds__lco__Else_29));
#line 523 "lco.m"
            }
#line 520 "lco.m"
          }
#line 505 "lco.m"
        else
#line 505 "lco.m"
          if (((((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 525 "lco.m"
            {
#line 525 "lco.m"
              MR_Word transform_hlds__lco__Reason_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 1)));
#line 525 "lco.m"
              MR_Word transform_hlds__lco__SubGoal0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 2)));
#line 527 "lco.m"
              MR_Word transform_hlds__lco__FGT_33;
#line 527 "lco.m"
              MR_Word transform_hlds__lco__V_32_32;

#line 527 "lco.m"
              transform_hlds__lco__succeeded = ((((MR_tag((MR_Word) transform_hlds__lco__Reason_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_30, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 527 "lco.m"
              if (transform_hlds__lco__succeeded)
#line 527 "lco.m"
                {
#line 527 "lco.m"
                  transform_hlds__lco__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_30, (MR_Integer) 1)));
#line 527 "lco.m"
                  transform_hlds__lco__FGT_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_30, (MR_Integer) 2)));
#line 529 "lco.m"
                  if ((transform_hlds__lco__FGT_33 == (MR_Integer) 1))
#line 528 "lco.m"
                    transform_hlds__lco__succeeded = MR_TRUE;
#line 529 "lco.m"
                  else
#line 529 "lco.m"
                    if ((transform_hlds__lco__FGT_33 == (MR_Integer) 2))
#line 529 "lco.m"
                      transform_hlds__lco__succeeded = MR_TRUE;
#line 529 "lco.m"
                    else
#line 529 "lco.m"
                      transform_hlds__lco__succeeded = MR_FALSE;
#line 527 "lco.m"
                }
#line 533 "lco.m"
              if (transform_hlds__lco__succeeded)
#line 532 "lco.m"
                {
#line 532 "lco.m"
                  transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
#line 532 "lco.m"
                  *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_0_60;
#line 532 "lco.m"
                }
#line 533 "lco.m"
              else
#line 534 "lco.m"
                {
#line 534 "lco.m"
                  MR_Word transform_hlds__lco__SubGoal_34;

#line 534 "lco.m"
                  {
#line 534 "lco.m"
                    transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__SubGoal0_31, &transform_hlds__lco__SubGoal_34, transform_hlds__lco__STATE_VARIABLE_Info_0_60, transform_hlds__lco__STATE_VARIABLE_Info_61, transform_hlds__lco__ConstInfo_9);
                  }
#line 535 "lco.m"
                  {
#line 535 "lco.m"
                    transform_hlds__lco__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 535 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 535 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__lco__Reason_30));
#line 535 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__lco__SubGoal_34));
#line 535 "lco.m"
                  }
#line 534 "lco.m"
                }
#line 525 "lco.m"
            }
#line 505 "lco.m"
          else
#line 505 "lco.m"
            if (((((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 546 "lco.m"
              {
#line 548 "lco.m"
                {
#line 548 "lco.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.lco_in_goal\'/5", (MR_String) "shorthand");
#line 548 "lco.m"
                  return;
                }
#line 546 "lco.m"
              }
#line 505 "lco.m"
            else
#line 505 "lco.m"
              if (((((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 516 "lco.m"
                {
#line 516 "lco.m"
                  MR_Word transform_hlds__lco__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 1)));
#line 516 "lco.m"
                  MR_Word transform_hlds__lco__CanFail_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 2)));
#line 516 "lco.m"
                  MR_Word transform_hlds__lco__Cases0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 3)));
#line 516 "lco.m"
                  MR_Word transform_hlds__lco__Cases_23;

#line 517 "lco.m"
                  {
#line 517 "lco.m"
                    transform_hlds__lco__lco_in_cases_5_p_0(transform_hlds__lco__Cases0_22, &transform_hlds__lco__Cases_23, transform_hlds__lco__STATE_VARIABLE_Info_0_60, transform_hlds__lco__STATE_VARIABLE_Info_61, transform_hlds__lco__ConstInfo_9);
                  }
#line 518 "lco.m"
                  {
#line 518 "lco.m"
                    transform_hlds__lco__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 518 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 518 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__lco__Var_20));
#line 518 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__lco__CanFail_21));
#line 518 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 3) = ((MR_Box) (transform_hlds__lco__Cases_23));
#line 518 "lco.m"
                  }
#line 516 "lco.m"
                }
#line 505 "lco.m"
              else
#line 543 "lco.m"
                {
#line 544 "lco.m"
                  transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
#line 544 "lco.m"
                  *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_0_60;
#line 543 "lco.m"
                }
#line 550 "lco.m"
    {
#line 550 "lco.m"
      MR_Word base;
#line 550 "lco.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 550 "lco.m"
      *transform_hlds__lco__Goal_7 = base;
#line 550 "lco.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__GoalExpr_16));
#line 550 "lco.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__GoalInfo_11));
#line 550 "lco.m"
    }
#line 477 "lco.m"
  }
#line 474 "lco.m"
}

#line 376 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_proc_11_p_0(
#line 376 "lco.m"
  MR_Word transform_hlds__lco__LowerSCCVariants_12,
#line 376 "lco.m"
  MR_Word transform_hlds__lco__SCC_13,
#line 376 "lco.m"
  MR_Word transform_hlds__lco__CurProc_14,
#line 376 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_49,
#line 376 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_50,
#line 376 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_51,
#line 376 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_52,
#line 376 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_53,
#line 376 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_54,
#line 376 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Permitted_0_55,
#line 376 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Permitted_56)
#line 376 "lco.m"
{
#line 385 "lco.m"
  {
#line 385 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 385 "lco.m"
    if ((transform_hlds__lco__STATE_VARIABLE_Permitted_0_55 == (MR_Integer) 0))
#line 385 "lco.m"
      {
#line 385 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ModuleInfo_50 = transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_49;
#line 385 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_52 = transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_51;
#line 385 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_54 = transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_53;
#line 385 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_Permitted_56 = transform_hlds__lco__STATE_VARIABLE_Permitted_0_55;
#line 385 "lco.m"
      }
#line 385 "lco.m"
    else
#line 387 "lco.m"
      {
#line 387 "lco.m"
        MR_Word transform_hlds__lco__PredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__CurProc_14, (MR_Integer) 0)));
#line 387 "lco.m"
        MR_Integer transform_hlds__lco__ProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__CurProc_14, (MR_Integer) 1)));
#line 387 "lco.m"
        MR_Word transform_hlds__lco__PredInfo_21;
#line 387 "lco.m"
        MR_Word transform_hlds__lco__ProcInfo0_22;
#line 387 "lco.m"
        MR_Word transform_hlds__lco__Status_23;
#line 387 "lco.m"
        MR_Word transform_hlds__lco__DefInThisModule_24;
#line 387 "lco.m"
        MR_Word transform_hlds__lco__Detism_25;

#line 389 "lco.m"
        {
#line 389 "lco.m"
          hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_49, transform_hlds__lco__PredId_19, transform_hlds__lco__ProcId_20, &transform_hlds__lco__PredInfo_21, &transform_hlds__lco__ProcInfo0_22);
        }
#line 391 "lco.m"
        {
#line 391 "lco.m"
          hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__lco__PredInfo_21, &transform_hlds__lco__Status_23);
        }
#line 392 "lco.m"
        {
#line 392 "lco.m"
          transform_hlds__lco__DefInThisModule_24 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(transform_hlds__lco__Status_23);
        }
#line 393 "lco.m"
        {
#line 393 "lco.m"
          hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(transform_hlds__lco__ProcInfo0_22, &transform_hlds__lco__Detism_25);
        }
#line 395 "lco.m"
        transform_hlds__lco__succeeded = (transform_hlds__lco__DefInThisModule_24 == (MR_Integer) 0);
#line 396 "lco.m"
        if (!(transform_hlds__lco__succeeded))
#line 396 "lco.m"
          {
#line 466 "lco.m"
            if ((transform_hlds__lco__Detism_25 == (MR_Integer) 4))
#line 468 "lco.m"
              transform_hlds__lco__succeeded = MR_TRUE;
#line 466 "lco.m"
            else
#line 466 "lco.m"
              if ((transform_hlds__lco__Detism_25 == (MR_Integer) 5))
#line 469 "lco.m"
                transform_hlds__lco__succeeded = MR_TRUE;
#line 466 "lco.m"
              else
#line 466 "lco.m"
                if ((transform_hlds__lco__Detism_25 == (MR_Integer) 0))
#line 466 "lco.m"
                  transform_hlds__lco__succeeded = MR_TRUE;
#line 466 "lco.m"
                else
#line 466 "lco.m"
                  if ((transform_hlds__lco__Detism_25 == (MR_Integer) 1))
#line 467 "lco.m"
                    transform_hlds__lco__succeeded = MR_TRUE;
#line 466 "lco.m"
                  else
#line 466 "lco.m"
                    transform_hlds__lco__succeeded = MR_FALSE;
#line 396 "lco.m"
            transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 396 "lco.m"
          }
#line 400 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 399 "lco.m"
          {
#line 399 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_Permitted_56 = (MR_Integer) 0;
#line 399 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_54 = transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_53;
#line 399 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_52 = transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_51;
#line 399 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_ModuleInfo_50 = transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_49;
#line 399 "lco.m"
          }
#line 400 "lco.m"
        else
#line 401 "lco.m"
          {
#line 401 "lco.m"
            MR_Word transform_hlds__lco__TypeCtorInfo_82_82;
#line 401 "lco.m"
            MR_Word transform_hlds__lco__VarSet0_26;
#line 401 "lco.m"
            MR_Word transform_hlds__lco__VarTypes0_27;
#line 401 "lco.m"
            MR_Word transform_hlds__lco__HeadVars_28;
#line 401 "lco.m"
            MR_Word transform_hlds__lco__ArgModes_29;
#line 401 "lco.m"
            MR_Word transform_hlds__lco__ArgTypes_30;
#line 401 "lco.m"
            MR_Word transform_hlds__lco__OutputHeadVars_32;
#line 401 "lco.m"
            MR_Word transform_hlds__lco__CurProcDetism_33;
#line 401 "lco.m"
            MR_Word transform_hlds__lco__Globals_34;
#line 401 "lco.m"
            MR_Word transform_hlds__lco__HighLevelData_35;
#line 401 "lco.m"
            MR_Word transform_hlds__lco__ConstInfo_36;
#line 401 "lco.m"
            MR_Word transform_hlds__lco__UnboxedFloat_37;
#line 401 "lco.m"
            MR_Word transform_hlds__lco__AllowFloatAddr_38;
#line 401 "lco.m"
            MR_Word transform_hlds__lco__Info0_39;
#line 401 "lco.m"
            MR_Word transform_hlds__lco__Goal0_40;
#line 401 "lco.m"
            MR_Word transform_hlds__lco__Goal_41;
#line 401 "lco.m"
            MR_Word transform_hlds__lco__Info_42;
#line 401 "lco.m"
            MR_Word transform_hlds__lco__VarSet_43;
#line 401 "lco.m"
            MR_Word transform_hlds__lco__VarTypes_44;
#line 401 "lco.m"
            MR_Word transform_hlds__lco__Changed_46;
#line 401 "lco.m"
            MR_Word transform_hlds__lco__V_59_59;
#line 406 "lco.m"
            MR_Word transform_hlds__lco___InputHeadVars_31;
#line 431 "lco.m"
            MR_Word transform_hlds__lco___AllowFloatAddr_45;

#line 401 "lco.m"
            {
#line 401 "lco.m"
              hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__lco__ProcInfo0_22, &transform_hlds__lco__VarSet0_26);
            }
#line 402 "lco.m"
            {
#line 402 "lco.m"
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lco__ProcInfo0_22, &transform_hlds__lco__VarTypes0_27);
            }
#line 403 "lco.m"
            {
#line 403 "lco.m"
              hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__lco__ProcInfo0_22, &transform_hlds__lco__HeadVars_28);
            }
#line 404 "lco.m"
            {
#line 404 "lco.m"
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__lco__ProcInfo0_22, &transform_hlds__lco__ArgModes_29);
            }
#line 405 "lco.m"
            {
#line 405 "lco.m"
              parse_tree__prog_data__lookup_var_types_3_p_0(transform_hlds__lco__VarTypes0_27, transform_hlds__lco__HeadVars_28, &transform_hlds__lco__ArgTypes_30);
            }
#line 406 "lco.m"
            {
#line 406 "lco.m"
              hlds__arg_info__compute_in_and_out_vars_6_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_49, transform_hlds__lco__HeadVars_28, transform_hlds__lco__ArgModes_29, transform_hlds__lco__ArgTypes_30, &transform_hlds__lco___InputHeadVars_31, &transform_hlds__lco__OutputHeadVars_32);
            }
#line 408 "lco.m"
            {
#line 408 "lco.m"
              hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(transform_hlds__lco__ProcInfo0_22, &transform_hlds__lco__CurProcDetism_33);
            }
#line 13499 "transform_hlds.lco.c"
            transform_hlds__lco__TypeCtorInfo_82_82 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 410 "lco.m"
            {
#line 410 "lco.m"
              transform_hlds__lco__V_59_59 = mercury__set__list_to_set_1_f_0(transform_hlds__lco__TypeCtorInfo_82_82, transform_hlds__lco__SCC_13);
            }
#line 413 "lco.m"
            {
#line 413 "lco.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_49, &transform_hlds__lco__Globals_34);
            }
#line 409 "lco.m"
            {
#line 409 "lco.m"
              libs__globals__lookup_bool_option_3_p_0(transform_hlds__lco__Globals_34, (MR_Integer) 251, &transform_hlds__lco__HighLevelData_35);
            }
#line 410 "lco.m"
            {
#line 410 "lco.m"
              transform_hlds__lco__ConstInfo_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 410 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_36, 0) = ((MR_Box) (transform_hlds__lco__LowerSCCVariants_12));
#line 410 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_36, 1) = ((MR_Box) (transform_hlds__lco__V_59_59));
#line 410 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_36, 2) = ((MR_Box) (transform_hlds__lco__CurProc_14));
#line 410 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_36, 3) = ((MR_Box) (transform_hlds__lco__PredInfo_21));
#line 410 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_36, 4) = ((MR_Box) (transform_hlds__lco__ProcInfo0_22));
#line 410 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_36, 5) = ((MR_Box) (transform_hlds__lco__OutputHeadVars_32));
#line 410 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_36, 6) = ((MR_Box) (transform_hlds__lco__CurProcDetism_33));
#line 410 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_36, 7) = ((MR_Box) (transform_hlds__lco__HighLevelData_35));
#line 410 "lco.m"
            }
#line 414 "lco.m"
            {
#line 414 "lco.m"
              libs__globals__lookup_bool_option_3_p_0(transform_hlds__lco__Globals_34, (MR_Integer) 239, &transform_hlds__lco__UnboxedFloat_37);
            }
#line 422 "lco.m"
            if ((transform_hlds__lco__UnboxedFloat_37 == (MR_Integer) 0))
#line 421 "lco.m"
              transform_hlds__lco__AllowFloatAddr_38 = (MR_Integer) 0;
#line 422 "lco.m"
            else
#line 424 "lco.m"
              transform_hlds__lco__AllowFloatAddr_38 = (MR_Integer) 1;
#line 426 "lco.m"
            {
#line 426 "lco.m"
              transform_hlds__lco__Info0_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 426 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Info0_39, 0) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_49));
#line 426 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Info0_39, 1) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_51));
#line 426 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Info0_39, 2) = ((MR_Box) (transform_hlds__lco__VarSet0_26));
#line 426 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Info0_39, 3) = ((MR_Box) (transform_hlds__lco__VarTypes0_27));
#line 426 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Info0_39, 4) = ((MR_Box) ((transform_hlds__lco__AllowFloatAddr_38 | (((((MR_Integer) 1 << (MR_Integer) 1)) | (((MR_Integer) 0 << (MR_Integer) 2)))))));
#line 426 "lco.m"
            }
#line 429 "lco.m"
            {
#line 429 "lco.m"
              hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__lco__ProcInfo0_22, &transform_hlds__lco__Goal0_40);
            }
#line 430 "lco.m"
            {
#line 430 "lco.m"
              transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__Goal0_40, &transform_hlds__lco__Goal_41, transform_hlds__lco__Info0_39, &transform_hlds__lco__Info_42, transform_hlds__lco__ConstInfo_36);
            }
#line 431 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_ModuleInfo_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_42, (MR_Integer) 0)));
#line 431 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_42, (MR_Integer) 1)));
#line 431 "lco.m"
            transform_hlds__lco__VarSet_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_42, (MR_Integer) 2)));
#line 431 "lco.m"
            transform_hlds__lco__VarTypes_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_42, (MR_Integer) 3)));
#line 431 "lco.m"
            transform_hlds__lco___AllowFloatAddr_45 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_42, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 431 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_Permitted_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_42, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 431 "lco.m"
            transform_hlds__lco__Changed_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_42, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 434 "lco.m"
            transform_hlds__lco__succeeded = (*transform_hlds__lco__STATE_VARIABLE_Permitted_56 == (MR_Integer) 1);
#line 434 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 435 "lco.m"
              transform_hlds__lco__succeeded = (transform_hlds__lco__Changed_46 == (MR_Integer) 1);
#line 454 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 444 "lco.m"
              {
#line 444 "lco.m"
                MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_76_76;
#line 444 "lco.m"
                MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_77_77;
#line 444 "lco.m"
                MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_78_78;
#line 444 "lco.m"
                MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_80_80;

#line 447 "lco.m"
                {
#line 447 "lco.m"
                  hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__lco__VarSet_43, transform_hlds__lco__ProcInfo0_22, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_76_76);
                }
#line 448 "lco.m"
                {
#line 448 "lco.m"
                  hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__lco__VarTypes_44, transform_hlds__lco__STATE_VARIABLE_ProcInfo_76_76, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_77_77);
                }
#line 449 "lco.m"
                {
#line 449 "lco.m"
                  hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__lco__Goal_41, transform_hlds__lco__STATE_VARIABLE_ProcInfo_77_77, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_78_78);
                }
#line 450 "lco.m"
                {
#line 450 "lco.m"
                  hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__lco__STATE_VARIABLE_ProcInfo_78_78, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_80_80);
                }
#line 452 "lco.m"
                {
#line 452 "lco.m"
                  mercury__map__det_insert_4_p_0(transform_hlds__lco__TypeCtorInfo_82_82, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ((MR_Box) (transform_hlds__lco__CurProc_14)), ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ProcInfo_80_80)), transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_53, transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_54);
#line 452 "lco.m"
                  return;
                }
#line 444 "lco.m"
              }
#line 454 "lco.m"
            else
#line 452 "lco.m"
              *transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_54 = transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_53;
#line 401 "lco.m"
          }
#line 387 "lco.m"
      }
#line 385 "lco.m"
  }
#line 376 "lco.m"
}

#line 372 "lco.m"
static MR_Integer MR_CALL 
transform_hlds__lco__va_pos_1_f_0(
#line 372 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1)
#line 372 "lco.m"
{
#line 372 "lco.m"
  {
#line 372 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 372 "lco.m"
    MR_Integer transform_hlds__lco__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 372 "lco.m"
    MR_Word transform_hlds__lco__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));

#line 372 "lco.m"
    return transform_hlds__lco__HeadVar__2_2;
#line 372 "lco.m"
  }
#line 372 "lco.m"
}

#line 359 "lco.m"
static MR_Box MR_CALL 
transform_hlds__lco__lco_process_proc_variant_4_p_0_1(
#line 359 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 359 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1)
#line 359 "lco.m"
{
#line 359 "lco.m"
  {
#line 359 "lco.m"
    MR_Box transform_hlds__lco__wrapper_arg_2;
#line 359 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 359 "lco.m"
    MR_Integer transform_hlds__lco__conv1_HeadVar__2_2;

#line 359 "lco.m"
    {
#line 359 "lco.m"
      transform_hlds__lco__conv1_HeadVar__2_2 = transform_hlds__lco__va_pos_1_f_0(((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
#line 359 "lco.m"
    transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv1_HeadVar__2_2));
#line 359 "lco.m"
    return transform_hlds__lco__wrapper_arg_2;
#line 359 "lco.m"
  }
#line 359 "lco.m"
}

#line 328 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_process_proc_variant_4_p_0(
#line 328 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_5,
#line 328 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 328 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32,
#line 328 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_33)
#line 328 "lco.m"
{
#line 332 "lco.m"
  {
#line 332 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_46_46;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_47_47;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__PredProcId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 332 "lco.m"
    MR_Word transform_hlds__lco__VariantId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 332 "lco.m"
    MR_Word transform_hlds__lco__AddrOutArgs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantId_7, (MR_Integer) 0)));
#line 332 "lco.m"
    MR_Word transform_hlds__lco__VariantPredProcId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantId_7, (MR_Integer) 1)));
#line 332 "lco.m"
    MR_String transform_hlds__lco__VariantName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantId_7, (MR_Integer) 2)));
#line 332 "lco.m"
    MR_Word transform_hlds__lco__VariantPredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantPredProcId_10, (MR_Integer) 0)));
#line 332 "lco.m"
    MR_Integer transform_hlds__lco__VariantProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantPredProcId_10, (MR_Integer) 1)));
#line 332 "lco.m"
    MR_Word transform_hlds__lco__PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__PredProcId_6, (MR_Integer) 0)));
#line 332 "lco.m"
    MR_Integer transform_hlds__lco__ProcId_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__PredProcId_6, (MR_Integer) 1)));
#line 332 "lco.m"
    MR_Word transform_hlds__lco__ProcInfo_17;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__VariantProcInfo_18;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__HeadVars_19;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__VarTypes_20;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__ArgTypes_21;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__TVarSet_24;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__ExistQVars_25;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__Origin0_27;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__AddrOutArgPosns_28;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__Transform_29;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__Origin_30;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__VariantProcs_31;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_34_34;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_PredTable_35_35;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_36_36;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_37_37;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_39_39;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_40_40;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_42_42;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_43_43;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_PredTable_44_44;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__VarSet0_62;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__VarTypes0_63;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__HeadVars0_64;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__ArgModes0_65;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__HeadVars_66;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__ArgModes_67;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__VarToAddr_68;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__VarSet_69;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__VarTypes_70;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__InstMap0_71;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__Goal0_72;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__Goal_73;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__Globals_75;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__HighLevelData_76;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_32_79;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_33_80;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_34_81;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_35_82;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_36_83;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_37_84;
#line 332 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_39_86;
#line 337 "lco.m"
    MR_Word transform_hlds__lco___PredInfo_16;
#line 1298 "lco.m"
    MR_Word transform_hlds__lco___Changed_74;
#line 348 "lco.m"
    MR_Box transform_hlds__lco__conv0_STATE_VARIABLE_VariantPredInfo_36_36;
#line 353 "lco.m"
    MR_Word transform_hlds__lco___ArgTypes0_26;

#line 337 "lco.m"
    {
#line 337 "lco.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32, transform_hlds__lco__PredId_14, transform_hlds__lco__ProcId_15, &transform_hlds__lco___PredInfo_16, &transform_hlds__lco__ProcInfo_17);
    }
#line 1284 "lco.m"
    {
#line 1284 "lco.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__lco__ProcInfo_17, &transform_hlds__lco__VarSet0_62);
    }
#line 1285 "lco.m"
    {
#line 1285 "lco.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lco__ProcInfo_17, &transform_hlds__lco__VarTypes0_63);
    }
#line 1286 "lco.m"
    {
#line 1286 "lco.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__lco__ProcInfo_17, &transform_hlds__lco__HeadVars0_64);
    }
#line 1287 "lco.m"
    {
#line 1287 "lco.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__lco__ProcInfo_17, &transform_hlds__lco__ArgModes0_65);
    }
#line 1288 "lco.m"
    {
#line 1288 "lco.m"
      transform_hlds__lco__make_addr_vars_12_p_0(transform_hlds__lco__HeadVars0_64, transform_hlds__lco__ArgModes0_65, &transform_hlds__lco__HeadVars_66, &transform_hlds__lco__ArgModes_67, transform_hlds__lco__AddrOutArgs_9, (MR_Integer) 1, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32, &transform_hlds__lco__VarToAddr_68, transform_hlds__lco__VarSet0_62, &transform_hlds__lco__VarSet_69, transform_hlds__lco__VarTypes0_63, &transform_hlds__lco__VarTypes_70);
    }
#line 1291 "lco.m"
    {
#line 1291 "lco.m"
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__lco__HeadVars_66, transform_hlds__lco__ProcInfo_17, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_32_79);
    }
#line 1292 "lco.m"
    {
#line 1292 "lco.m"
      hlds__hlds_pred__proc_info_set_argmodes_3_p_0(transform_hlds__lco__ArgModes_67, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_32_79, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_33_80);
    }
#line 1293 "lco.m"
    {
#line 1293 "lco.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__lco__VarSet_69, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_33_80, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_34_81);
    }
#line 1294 "lco.m"
    {
#line 1294 "lco.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__lco__VarTypes_70, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_34_81, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_35_82);
    }
#line 1296 "lco.m"
    {
#line 1296 "lco.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__lco__ProcInfo_17, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32, &transform_hlds__lco__InstMap0_71);
    }
#line 1297 "lco.m"
    {
#line 1297 "lco.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__lco__ProcInfo_17, &transform_hlds__lco__Goal0_72);
    }
#line 1298 "lco.m"
    {
#line 1298 "lco.m"
      transform_hlds__lco__lco_transform_variant_goal_9_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32, transform_hlds__lco__VariantMap_5, transform_hlds__lco__VarToAddr_68, transform_hlds__lco__InstMap0_71, transform_hlds__lco__Goal0_72, &transform_hlds__lco__Goal_73, &transform_hlds__lco___Changed_74, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_35_82, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_36_83);
    }
#line 1300 "lco.m"
    {
#line 1300 "lco.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__lco__Goal_73, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_36_83, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_37_84);
    }
#line 1302 "lco.m"
    {
#line 1302 "lco.m"
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_37_84, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_39_86);
    }
#line 1306 "lco.m"
    {
#line 1306 "lco.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32, &transform_hlds__lco__Globals_75);
    }
#line 1307 "lco.m"
    {
#line 1307 "lco.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__lco__Globals_75, (MR_Integer) 251, &transform_hlds__lco__HighLevelData_76);
    }
#line 1312 "lco.m"
    if ((transform_hlds__lco__HighLevelData_76 == (MR_Integer) 0))
#line 1313 "lco.m"
      {
#line 1313 "lco.m"
        transform_hlds__lco__VariantProcInfo_18 = transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_39_86;
#line 1313 "lco.m"
        transform_hlds__lco__STATE_VARIABLE_ModuleInfo_34_34 = transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32;
#line 1313 "lco.m"
      }
#line 1312 "lco.m"
    else
#line 1309 "lco.m"
      {
#line 1310 "lco.m"
        {
#line 1310 "lco.m"
          check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_39_86, &transform_hlds__lco__VariantProcInfo_18, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32, &transform_hlds__lco__STATE_VARIABLE_ModuleInfo_34_34);
        }
#line 1309 "lco.m"
      }
#line 342 "lco.m"
    {
#line 342 "lco.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__lco__VariantProcInfo_18, &transform_hlds__lco__HeadVars_19);
    }
#line 343 "lco.m"
    {
#line 343 "lco.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lco__VariantProcInfo_18, &transform_hlds__lco__VarTypes_20);
    }
#line 344 "lco.m"
    {
#line 344 "lco.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(transform_hlds__lco__VarTypes_20, transform_hlds__lco__HeadVars_19, &transform_hlds__lco__ArgTypes_21);
    }
#line 347 "lco.m"
    {
#line 347 "lco.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_34_34, &transform_hlds__lco__STATE_VARIABLE_PredTable_35_35);
    }
#line 13965 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_46_46 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 13967 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_47_47 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 348 "lco.m"
    {
#line 348 "lco.m"
      mercury__map__lookup_3_p_0(transform_hlds__lco__TypeCtorInfo_46_46, transform_hlds__lco__TypeCtorInfo_47_47, transform_hlds__lco__STATE_VARIABLE_PredTable_35_35, ((MR_Box) (transform_hlds__lco__VariantPredId_12)), &transform_hlds__lco__conv0_STATE_VARIABLE_VariantPredInfo_36_36);
    }
#line 348 "lco.m"
    transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_36_36 = ((MR_Word) transform_hlds__lco__conv0_STATE_VARIABLE_VariantPredInfo_36_36);
#line 349 "lco.m"
    {
#line 349 "lco.m"
      hlds__hlds_pred__pred_info_set_name_3_p_0(transform_hlds__lco__VariantName_11, transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_36_36, &transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_37_37);
    }
#line 350 "lco.m"
    {
#line 350 "lco.m"
      hlds__hlds_pred__pred_info_set_is_pred_or_func_3_p_0((MR_Integer) 0, transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_37_37, &transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_39_39);
    }
#line 353 "lco.m"
    {
#line 353 "lco.m"
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_39_39, &transform_hlds__lco__TVarSet_24, &transform_hlds__lco__ExistQVars_25, &transform_hlds__lco___ArgTypes0_26);
    }
#line 355 "lco.m"
    {
#line 355 "lco.m"
      hlds__hlds_pred__pred_info_set_arg_types_5_p_0(transform_hlds__lco__TVarSet_24, transform_hlds__lco__ExistQVars_25, transform_hlds__lco__ArgTypes_21, transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_39_39, &transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_40_40);
    }
#line 358 "lco.m"
    {
#line 358 "lco.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_40_40, &transform_hlds__lco__Origin0_27);
    }
#line 359 "lco.m"
    {
#line 359 "lco.m"
      transform_hlds__lco__AddrOutArgPosns_28 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__lco_scalar_common_2[9], transform_hlds__lco__AddrOutArgs_9);
    }
#line 360 "lco.m"
    {
#line 360 "lco.m"
      transform_hlds__lco__Transform_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 360 "lco.m"
      MR_hl_field(MR_mktag(3), transform_hlds__lco__Transform_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 360 "lco.m"
      MR_hl_field(MR_mktag(3), transform_hlds__lco__Transform_29, 1) = ((MR_Box) (transform_hlds__lco__ProcId_15));
#line 360 "lco.m"
      MR_hl_field(MR_mktag(3), transform_hlds__lco__Transform_29, 2) = ((MR_Box) (transform_hlds__lco__AddrOutArgPosns_28));
#line 360 "lco.m"
    }
#line 361 "lco.m"
    {
#line 361 "lco.m"
      transform_hlds__lco__Origin_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 361 "lco.m"
      MR_hl_field(MR_mktag(2), transform_hlds__lco__Origin_30, 0) = ((MR_Box) (transform_hlds__lco__Transform_29));
#line 361 "lco.m"
      MR_hl_field(MR_mktag(2), transform_hlds__lco__Origin_30, 1) = ((MR_Box) (transform_hlds__lco__Origin0_27));
#line 361 "lco.m"
      MR_hl_field(MR_mktag(2), transform_hlds__lco__Origin_30, 2) = ((MR_Box) (transform_hlds__lco__PredId_14));
#line 361 "lco.m"
    }
#line 362 "lco.m"
    {
#line 362 "lco.m"
      hlds__hlds_pred__pred_info_set_origin_3_p_0(transform_hlds__lco__Origin_30, transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_40_40, &transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_42_42);
    }
#line 366 "lco.m"
    {
#line 366 "lco.m"
      transform_hlds__lco__VariantProcs_31 = mercury__map__singleton_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ((MR_Box) (transform_hlds__lco__VariantProcId_13)), ((MR_Box) (transform_hlds__lco__VariantProcInfo_18)));
    }
#line 367 "lco.m"
    {
#line 367 "lco.m"
      hlds__hlds_pred__pred_info_set_procedures_3_p_0(transform_hlds__lco__VariantProcs_31, transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_42_42, &transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_43_43);
    }
#line 368 "lco.m"
    {
#line 368 "lco.m"
      mercury__map__det_update_4_p_0(transform_hlds__lco__TypeCtorInfo_46_46, transform_hlds__lco__TypeCtorInfo_47_47, ((MR_Box) (transform_hlds__lco__VariantPredId_12)), ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_43_43)), transform_hlds__lco__STATE_VARIABLE_PredTable_35_35, &transform_hlds__lco__STATE_VARIABLE_PredTable_44_44);
    }
#line 369 "lco.m"
    {
#line 369 "lco.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__lco__STATE_VARIABLE_PredTable_44_44, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_34_34, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_33);
#line 369 "lco.m"
      return;
    }
#line 332 "lco.m"
  }
#line 328 "lco.m"
}

#line 315 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_process_proc_update_3_p_0(
#line 315 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 315 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_15,
#line 315 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_16)
#line 315 "lco.m"
{
#line 318 "lco.m"
  {
#line 318 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 318 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_18_18;
#line 318 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_19_19;
#line 318 "lco.m"
    MR_Word transform_hlds__lco__PredProcId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 318 "lco.m"
    MR_Word transform_hlds__lco__NewProcInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 318 "lco.m"
    MR_Word transform_hlds__lco__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__PredProcId_4, (MR_Integer) 0)));
#line 318 "lco.m"
    MR_Integer transform_hlds__lco__ProcId_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__PredProcId_4, (MR_Integer) 1)));
#line 318 "lco.m"
    MR_Word transform_hlds__lco__PredTable0_9;
#line 318 "lco.m"
    MR_Word transform_hlds__lco__PredInfo0_10;
#line 318 "lco.m"
    MR_Word transform_hlds__lco__Procs0_11;
#line 318 "lco.m"
    MR_Word transform_hlds__lco__Procs_12;
#line 318 "lco.m"
    MR_Word transform_hlds__lco__PredInfo_13;
#line 318 "lco.m"
    MR_Word transform_hlds__lco__PredTable_14;
#line 321 "lco.m"
    MR_Box transform_hlds__lco__conv0_PredInfo0_10;

#line 320 "lco.m"
    {
#line 320 "lco.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_15, &transform_hlds__lco__PredTable0_9);
    }
#line 14109 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 14111 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 321 "lco.m"
    {
#line 321 "lco.m"
      mercury__map__lookup_3_p_0(transform_hlds__lco__TypeCtorInfo_18_18, transform_hlds__lco__TypeCtorInfo_19_19, transform_hlds__lco__PredTable0_9, ((MR_Box) (transform_hlds__lco__PredId_7)), &transform_hlds__lco__conv0_PredInfo0_10);
    }
#line 321 "lco.m"
    transform_hlds__lco__PredInfo0_10 = ((MR_Word) transform_hlds__lco__conv0_PredInfo0_10);
#line 322 "lco.m"
    {
#line 322 "lco.m"
      hlds__hlds_pred__pred_info_get_procedures_2_p_0(transform_hlds__lco__PredInfo0_10, &transform_hlds__lco__Procs0_11);
    }
#line 323 "lco.m"
    {
#line 323 "lco.m"
      mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ((MR_Box) (transform_hlds__lco__ProcId_8)), ((MR_Box) (transform_hlds__lco__NewProcInfo_5)), transform_hlds__lco__Procs0_11, &transform_hlds__lco__Procs_12);
    }
#line 324 "lco.m"
    {
#line 324 "lco.m"
      hlds__hlds_pred__pred_info_set_procedures_3_p_0(transform_hlds__lco__Procs_12, transform_hlds__lco__PredInfo0_10, &transform_hlds__lco__PredInfo_13);
    }
#line 325 "lco.m"
    {
#line 325 "lco.m"
      mercury__map__det_update_4_p_0(transform_hlds__lco__TypeCtorInfo_18_18, transform_hlds__lco__TypeCtorInfo_19_19, ((MR_Box) (transform_hlds__lco__PredId_7)), ((MR_Box) (transform_hlds__lco__PredInfo_13)), transform_hlds__lco__PredTable0_9, &transform_hlds__lco__PredTable_14);
    }
#line 326 "lco.m"
    {
#line 326 "lco.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__lco__PredTable_14, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_15, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_16);
#line 326 "lco.m"
      return;
    }
#line 318 "lco.m"
  }
#line 315 "lco.m"
}

#line 307 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_3(
#line 307 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 307 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 307 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 307 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3)
#line 307 "lco.m"
{
#line 307 "lco.m"
  {
#line 307 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 307 "lco.m"
    MR_Word transform_hlds__lco__conv10_STATE_VARIABLE_ModuleInfo_33;

#line 307 "lco.m"
    {
#line 307 "lco.m"
      transform_hlds__lco__lco_process_proc_variant_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2), &transform_hlds__lco__conv10_STATE_VARIABLE_ModuleInfo_33);
    }
#line 307 "lco.m"
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv10_STATE_VARIABLE_ModuleInfo_33));
#line 307 "lco.m"
  }
#line 307 "lco.m"
}

#line 306 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_2(
#line 306 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 306 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 306 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 306 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3)
#line 306 "lco.m"
{
#line 306 "lco.m"
  {
#line 306 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 306 "lco.m"
    MR_Word transform_hlds__lco__conv8_STATE_VARIABLE_ModuleInfo_16;

#line 306 "lco.m"
    {
#line 306 "lco.m"
      transform_hlds__lco__lco_process_proc_update_3_p_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2), &transform_hlds__lco__conv8_STATE_VARIABLE_ModuleInfo_16);
    }
#line 306 "lco.m"
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv8_STATE_VARIABLE_ModuleInfo_16));
#line 306 "lco.m"
  }
#line 306 "lco.m"
}

#line 297 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_1(
#line 297 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 297 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 297 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 297 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 297 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 297 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5,
#line 297 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_6,
#line 297 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_7,
#line 297 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_8,
#line 297 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_9)
#line 297 "lco.m"
{
#line 297 "lco.m"
  {
#line 297 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 297 "lco.m"
    MR_Word transform_hlds__lco__conv3_STATE_VARIABLE_ModuleInfo_50;
#line 297 "lco.m"
    MR_Word transform_hlds__lco__conv2_STATE_VARIABLE_CurSCCVariants_52;
#line 297 "lco.m"
    MR_Word transform_hlds__lco__conv1_STATE_VARIABLE_CurSCCUpdates_54;
#line 297 "lco.m"
    MR_Word transform_hlds__lco__conv0_STATE_VARIABLE_Permitted_56;

#line 297 "lco.m"
    {
#line 297 "lco.m"
      transform_hlds__lco__lco_proc_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2), &transform_hlds__lco__conv3_STATE_VARIABLE_ModuleInfo_50, ((MR_Word) transform_hlds__lco__wrapper_arg_4), &transform_hlds__lco__conv2_STATE_VARIABLE_CurSCCVariants_52, ((MR_Word) transform_hlds__lco__wrapper_arg_6), &transform_hlds__lco__conv1_STATE_VARIABLE_CurSCCUpdates_54, ((MR_Word) transform_hlds__lco__wrapper_arg_8), &transform_hlds__lco__conv0_STATE_VARIABLE_Permitted_56);
    }
#line 297 "lco.m"
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv3_STATE_VARIABLE_ModuleInfo_50));
#line 297 "lco.m"
    *transform_hlds__lco__wrapper_arg_5 = ((MR_Box) (transform_hlds__lco__conv2_STATE_VARIABLE_CurSCCVariants_52));
#line 297 "lco.m"
    *transform_hlds__lco__wrapper_arg_7 = ((MR_Box) (transform_hlds__lco__conv1_STATE_VARIABLE_CurSCCUpdates_54));
#line 297 "lco.m"
    *transform_hlds__lco__wrapper_arg_9 = ((MR_Box) (transform_hlds__lco__conv0_STATE_VARIABLE_Permitted_56));
#line 297 "lco.m"
  }
#line 297 "lco.m"
}

#line 291 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0(
#line 291 "lco.m"
  MR_Word transform_hlds__lco__SCC_6,
#line 291 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VariantMap_0_17,
#line 291 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VariantMap_18,
#line 291 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_19,
#line 291 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_20)
#line 291 "lco.m"
{
#line 294 "lco.m"
  {
#line 294 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 294 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_40_40;
#line 294 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_42_42;
#line 294 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_43_43;
#line 294 "lco.m"
    MR_Word transform_hlds__lco__CurSCCVariantMap_10;
#line 294 "lco.m"
    MR_Word transform_hlds__lco__CurSCCUpdateMap_11;
#line 294 "lco.m"
    MR_Word transform_hlds__lco__Permitted_12;
#line 294 "lco.m"
    MR_Word transform_hlds__lco__CurSCCVariants_13;
#line 294 "lco.m"
    MR_Word transform_hlds__lco__CurSCCUpdates_14;
#line 294 "lco.m"
    MR_Word transform_hlds__lco__V_21_21;
#line 294 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_22_22;
#line 294 "lco.m"
    MR_Word transform_hlds__lco__V_23_23;
#line 294 "lco.m"
    MR_Word transform_hlds__lco__V_24_24;
#line 297 "lco.m"
    MR_Box transform_hlds__lco__conv7_STATE_VARIABLE_ModuleInfo_22_22;
#line 297 "lco.m"
    MR_Box transform_hlds__lco__conv6_CurSCCVariantMap_10;
#line 297 "lco.m"
    MR_Box transform_hlds__lco__conv5_CurSCCUpdateMap_11;
#line 297 "lco.m"
    MR_Box transform_hlds__lco__conv4_Permitted_12;
#line 304 "lco.m"
    MR_Word transform_hlds__lco__V_15_15;
#line 304 "lco.m"
    MR_Word transform_hlds__lco__V_16_16;

#line 297 "lco.m"
    {
#line 297 "lco.m"
      transform_hlds__lco__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 297 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_21_21, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_4[0]));
#line 297 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_21_21, 1) = ((MR_Box) (transform_hlds__lco__lco_scc_5_p_0_1));
#line 297 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 297 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_21_21, 3) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_VariantMap_0_17));
#line 297 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_21_21, 4) = ((MR_Box) (transform_hlds__lco__SCC_6));
#line 297 "lco.m"
    }
#line 14344 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_40_40 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 297 "lco.m"
    {
#line 297 "lco.m"
      transform_hlds__lco__V_23_23 = mercury__map__init_0_f_0(transform_hlds__lco__TypeCtorInfo_40_40, (MR_Word) &transform_hlds__lco_scalar_common_1[0]);
    }
#line 14351 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_42_42 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 297 "lco.m"
    {
#line 297 "lco.m"
      transform_hlds__lco__V_24_24 = mercury__map__init_0_f_0(transform_hlds__lco__TypeCtorInfo_40_40, transform_hlds__lco__TypeCtorInfo_42_42);
    }
#line 14358 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_43_43 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0;
#line 297 "lco.m"
    {
#line 297 "lco.m"
      mercury__list__foldl4_10_p_0(transform_hlds__lco__TypeCtorInfo_40_40, transform_hlds__lco__TypeCtorInfo_43_43, (MR_Word) &transform_hlds__lco_scalar_common_2[0], (MR_Word) &transform_hlds__lco_scalar_common_2[1], (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_is_permitted_on_scc_0, transform_hlds__lco__V_21_21, transform_hlds__lco__SCC_6, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_19)), &transform_hlds__lco__conv7_STATE_VARIABLE_ModuleInfo_22_22, ((MR_Box) (transform_hlds__lco__V_23_23)), &transform_hlds__lco__conv6_CurSCCVariantMap_10, ((MR_Box) (transform_hlds__lco__V_24_24)), &transform_hlds__lco__conv5_CurSCCUpdateMap_11, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__lco__conv4_Permitted_12);
    }
#line 297 "lco.m"
    transform_hlds__lco__STATE_VARIABLE_ModuleInfo_22_22 = ((MR_Word) transform_hlds__lco__conv7_STATE_VARIABLE_ModuleInfo_22_22);
#line 297 "lco.m"
    transform_hlds__lco__CurSCCVariantMap_10 = ((MR_Word) transform_hlds__lco__conv6_CurSCCVariantMap_10);
#line 297 "lco.m"
    transform_hlds__lco__CurSCCUpdateMap_11 = ((MR_Word) transform_hlds__lco__conv5_CurSCCUpdateMap_11);
#line 297 "lco.m"
    transform_hlds__lco__Permitted_12 = ((MR_Word) transform_hlds__lco__conv4_Permitted_12);
#line 300 "lco.m"
    {
#line 300 "lco.m"
      mercury__multi_map__to_flat_assoc_list_2_p_0(transform_hlds__lco__TypeCtorInfo_40_40, (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0, transform_hlds__lco__CurSCCVariantMap_10, &transform_hlds__lco__CurSCCVariants_13);
    }
#line 301 "lco.m"
    {
#line 301 "lco.m"
      mercury__map__to_assoc_list_2_p_0(transform_hlds__lco__TypeCtorInfo_40_40, transform_hlds__lco__TypeCtorInfo_42_42, transform_hlds__lco__CurSCCUpdateMap_11, &transform_hlds__lco__CurSCCUpdates_14);
    }
#line 303 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__Permitted_12 == (MR_Integer) 1);
#line 303 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 303 "lco.m"
      {
#line 304 "lco.m"
        transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__CurSCCUpdates_14)) == (MR_mktag((MR_Integer) 1)));
#line 304 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 304 "lco.m"
          {
#line 304 "lco.m"
            transform_hlds__lco__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__CurSCCUpdates_14, (MR_Integer) 0)));
#line 304 "lco.m"
            transform_hlds__lco__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__CurSCCUpdates_14, (MR_Integer) 1)));
#line 304 "lco.m"
          }
#line 303 "lco.m"
      }
#line 309 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 306 "lco.m"
      {
#line 306 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_27_27;
#line 306 "lco.m"
        MR_Word transform_hlds__lco__V_28_28;
#line 306 "lco.m"
        MR_Box transform_hlds__lco__conv9_STATE_VARIABLE_ModuleInfo_27_27;
#line 307 "lco.m"
        MR_Box transform_hlds__lco__conv11_STATE_VARIABLE_ModuleInfo_20;

#line 306 "lco.m"
        {
#line 306 "lco.m"
          mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[2], transform_hlds__lco__TypeCtorInfo_43_43, (MR_Word) &transform_hlds__lco_scalar_common_2[8], transform_hlds__lco__CurSCCUpdates_14, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ModuleInfo_22_22)), &transform_hlds__lco__conv9_STATE_VARIABLE_ModuleInfo_27_27);
        }
#line 306 "lco.m"
        transform_hlds__lco__STATE_VARIABLE_ModuleInfo_27_27 = ((MR_Word) transform_hlds__lco__conv9_STATE_VARIABLE_ModuleInfo_27_27);
#line 307 "lco.m"
        {
#line 307 "lco.m"
          transform_hlds__lco__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 307 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_28_28, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_6[0]));
#line 307 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_28_28, 1) = ((MR_Box) (transform_hlds__lco__lco_scc_5_p_0_3));
#line 307 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 307 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_28_28, 3) = ((MR_Box) (transform_hlds__lco__CurSCCVariantMap_10));
#line 307 "lco.m"
        }
#line 307 "lco.m"
        {
#line 307 "lco.m"
          mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[3], transform_hlds__lco__TypeCtorInfo_43_43, transform_hlds__lco__V_28_28, transform_hlds__lco__CurSCCVariants_13, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ModuleInfo_27_27)), &transform_hlds__lco__conv11_STATE_VARIABLE_ModuleInfo_20);
        }
#line 307 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ModuleInfo_20 = ((MR_Word) transform_hlds__lco__conv11_STATE_VARIABLE_ModuleInfo_20);
#line 306 "lco.m"
      }
#line 309 "lco.m"
    else
#line 310 "lco.m"
      *transform_hlds__lco__STATE_VARIABLE_ModuleInfo_20 = transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_19;
#line 310 "lco.m"
    *transform_hlds__lco__STATE_VARIABLE_VariantMap_18 = transform_hlds__lco__STATE_VARIABLE_VariantMap_0_17;
#line 294 "lco.m"
  }
#line 291 "lco.m"
}

#line 289 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_modulo_constructors_2_p_0_1(
#line 289 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 289 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 289 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 289 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 289 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 289 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5)
#line 289 "lco.m"
{
#line 289 "lco.m"
  {
#line 289 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 289 "lco.m"
    MR_Word transform_hlds__lco__conv1_STATE_VARIABLE_VariantMap_18;
#line 289 "lco.m"
    MR_Word transform_hlds__lco__conv0_STATE_VARIABLE_ModuleInfo_20;

#line 289 "lco.m"
    {
#line 289 "lco.m"
      transform_hlds__lco__lco_scc_5_p_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2), &transform_hlds__lco__conv1_STATE_VARIABLE_VariantMap_18, ((MR_Word) transform_hlds__lco__wrapper_arg_4), &transform_hlds__lco__conv0_STATE_VARIABLE_ModuleInfo_20);
    }
#line 289 "lco.m"
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv1_STATE_VARIABLE_VariantMap_18));
#line 289 "lco.m"
    *transform_hlds__lco__wrapper_arg_5 = ((MR_Box) (transform_hlds__lco__conv0_STATE_VARIABLE_ModuleInfo_20));
#line 289 "lco.m"
  }
#line 289 "lco.m"
}

#line 162 "lco.m"
void MR_CALL 
transform_hlds__lco__lco_modulo_constructors_2_p_0(
#line 162 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_7,
#line 162 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_8)
#line 162 "lco.m"
{
#line 286 "lco.m"
  {
#line 286 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 286 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_13_13;
#line 286 "lco.m"
    MR_Word transform_hlds__lco__DepInfo_4;
#line 286 "lco.m"
    MR_Word transform_hlds__lco__SCCs_5;
#line 286 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_9_9;
#line 286 "lco.m"
    MR_Word transform_hlds__lco__V_11_11;
#line 289 "lco.m"
    MR_Word transform_hlds__lco__V_6_6;
#line 289 "lco.m"
    MR_Box transform_hlds__lco__conv3_V_6_6;
#line 289 "lco.m"
    MR_Box transform_hlds__lco__conv2_STATE_VARIABLE_ModuleInfo_8;

#line 287 "lco.m"
    {
#line 287 "lco.m"
      transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_7, &transform_hlds__lco__STATE_VARIABLE_ModuleInfo_9_9, &transform_hlds__lco__DepInfo_4);
    }
#line 14532 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_13_13 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 288 "lco.m"
    {
#line 288 "lco.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0(transform_hlds__lco__TypeCtorInfo_13_13, transform_hlds__lco__DepInfo_4, &transform_hlds__lco__SCCs_5);
    }
#line 289 "lco.m"
    {
#line 289 "lco.m"
      transform_hlds__lco__V_11_11 = mercury__map__init_0_f_0(transform_hlds__lco__TypeCtorInfo_13_13, (MR_Word) &transform_hlds__lco_scalar_common_1[0]);
    }
#line 289 "lco.m"
    {
#line 289 "lco.m"
      mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[1], (MR_Word) &transform_hlds__lco_scalar_common_2[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__lco_scalar_common_2[7], transform_hlds__lco__SCCs_5, ((MR_Box) (transform_hlds__lco__V_11_11)), &transform_hlds__lco__conv3_V_6_6, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ModuleInfo_9_9)), &transform_hlds__lco__conv2_STATE_VARIABLE_ModuleInfo_8);
    }
#line 289 "lco.m"
    transform_hlds__lco__V_6_6 = ((MR_Word) transform_hlds__lco__conv3_V_6_6);
#line 289 "lco.m"
    *transform_hlds__lco__STATE_VARIABLE_ModuleInfo_8 = ((MR_Word) transform_hlds__lco__conv2_STATE_VARIABLE_ModuleInfo_8);
#line 286 "lco.m"
  }
#line 162 "lco.m"
}

void mercury__transform_hlds__lco__init(void)
{
}

void mercury__transform_hlds__lco__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__lco__transform_hlds__lco__type_ctor_info_allow_float_addr_0);
	MR_register_type_ctor_info(&transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0);
	MR_register_type_ctor_info(&transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_const_info_0);
	MR_register_type_ctor_info(&transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_info_0);
	MR_register_type_ctor_info(&transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_is_permitted_on_scc_0);
	MR_register_type_ctor_info(&transform_hlds__lco__transform_hlds__lco__type_ctor_info_proc_changed_0);
	MR_register_type_ctor_info(&transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0);
	MR_register_type_ctor_info(&transform_hlds__lco__transform_hlds__lco__type_ctor_info_var_to_target_0);
	MR_register_type_ctor_info(&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0);
	MR_register_type_ctor_info(&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0);
	MR_register_type_ctor_info(&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_map_0);
}

void mercury__transform_hlds__lco__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.lco. */
