/*
** Automatically generated from `lco.m'
** by the Mercury compiler,
** version rotd-2014-12-08
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
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
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



#line 1386 "lco.m"
struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s {
#line 1386 "lco.m"
  MR_Word transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12;
#line 1391 "lco.m"
  MR_bool transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded;
#line 1455 "lco.m"
  MR_Word transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVar_42;
#line 1442 "lco.m"
  jmp_buf transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__commit_0;
#line 1442 "lco.m"
  MR_Word transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__TypeInfo_115_115;
#line 1442 "lco.m"
  MR_Word transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVarPair_44;
#line 1442 "lco.m"
  MR_Word transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__V_114_114;
#line 1442 "lco.m"
  MR_Box transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__conv4_FGTVarPair_44;
#line 1386 "lco.m"
};


#line 171 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 174 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0;

#line 177 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0;

#line 180 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 183 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 186 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__lco__type_ctor_info_variant_id_0;

#line 189 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 192 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 195 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 198 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 201 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 204 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 207 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_field_id_0;

#line 210 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 213 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 216 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_transform_hlds__lco__type_ctor_info_variant_arg_0;

#line 219 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0;

#line 222 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0;

#line 225 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_store_target_0;

#line 228 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_0;

#line 231 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_1;

#line 234 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_value_ordered_allow_float_addr_0[2];

#line 237 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_allow_float_addr_0[2];

#line 240 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_allow_float_addr_0[2];

#line 243 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_field_id_0_0[3];

#line 246 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_field_id_0_0[3];

#line 249 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_field_id_0_0;

#line 252 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_field_id_0_0[1];

#line 255 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_field_id_0[1];

#line 258 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_field_id_0[1];

#line 261 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_field_id_0[1];

#line 264 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0;

#line 267 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 270 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 273 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_lco_const_info_0_0[8];

#line 276 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_lco_const_info_0_0[8];

#line 279 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_const_info_0_0;

#line 282 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_const_info_0_0[1];

#line 285 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_const_info_0[1];

#line 288 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_lco_const_info_0[1];

#line 291 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_const_info_0[1];

#line 294 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 297 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 300 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_lco_info_0_0[7];

#line 303 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_lco_info_0_0[7];

#line 306 "transform_hlds.lco.c"
static const MR_DuArgLocn transform_hlds__lco__transform_hlds__lco__field_locns_lco_info_0_0[7];

#line 309 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_info_0_0;

#line 312 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_info_0_0[1];

#line 315 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_info_0[1];

#line 318 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_lco_info_0[1];

#line 321 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_info_0[1];

#line 324 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_0;

#line 327 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_1;

#line 330 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_value_ordered_lco_is_permitted_on_scc_0[2];

#line 333 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_lco_is_permitted_on_scc_0[2];

#line 336 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_is_permitted_on_scc_0[2];

#line 339 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_0;

#line 342 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_1;

#line 345 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_value_ordered_proc_changed_0[2];

#line 348 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_proc_changed_0[2];

#line 351 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_proc_changed_0[2];

#line 354 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__maybe__ti_maybe_1transform_hlds__lco__type_ctor_info_field_id_0;

#line 357 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_store_target_0_0[2];

#line 360 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_store_target_0_0;

#line 363 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_store_target_0_0[1];

#line 366 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_store_target_0[1];

#line 369 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_store_target_0[1];

#line 372 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_store_target_0[1];

#line 375 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0;

#line 378 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_variant_arg_0_0[2];

#line 381 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_variant_arg_0_0[2];

#line 384 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_arg_0_0;

#line 387 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_arg_0_0[1];

#line 390 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_arg_0[1];

#line 393 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_arg_0[1];

#line 396 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_arg_0[1];

#line 399 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_arg_0;

#line 402 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_variant_id_0_0[3];

#line 405 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_id_0_0;

#line 408 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_id_0_0[1];

#line 411 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_id_0[1];

#line 414 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_id_0[1];

#line 417 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_id_0[1];

#line 420 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____allow_float_addr_0_0_10001(
#line 423 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 425 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 428 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____allow_float_addr_0_0_10001(
#line 431 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 433 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 435 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 438 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____field_id_0_0_10001(
#line 441 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 443 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 446 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____field_id_0_0_10001(
#line 449 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 451 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 453 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 456 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_const_info_0_0_10001(
#line 459 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 461 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 464 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____lco_const_info_0_0_10001(
#line 467 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 469 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 471 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 474 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_info_0_0_10001(
#line 477 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 479 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 482 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____lco_info_0_0_10001(
#line 485 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 487 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 489 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 492 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0_10001(
#line 495 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 497 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 500 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0_10001(
#line 503 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 505 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 507 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 510 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____proc_changed_0_0_10001(
#line 513 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 515 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 518 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____proc_changed_0_0_10001(
#line 521 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 523 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 525 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 528 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____store_target_0_0_10001(
#line 531 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 533 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 536 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____store_target_0_0_10001(
#line 539 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 541 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 543 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 546 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____var_to_target_0_0_10001(
#line 549 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 551 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 554 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____var_to_target_0_0_10001(
#line 557 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 559 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 561 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 564 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_arg_0_0_10001(
#line 567 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 569 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 572 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____variant_arg_0_0_10001(
#line 575 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 577 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 579 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 582 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_id_0_0_10001(
#line 585 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 587 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 590 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____variant_id_0_0_10001(
#line 593 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 595 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 597 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 600 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_map_0_0_10001(
#line 603 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 605 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 608 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____variant_map_0_0_10001(
#line 611 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 613 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 615 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 736 "lco.m"
static void MR_CALL 
transform_hlds__lco__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_116_105_116_105_111_110_95_100_101_112_101_110_100_101_110_116_95_103_111_97_108_95_95_91_49_44_32_50_93_95_48_9_p_0(
#line 736 "lco.m"
  MR_Word transform_hlds__lco__Goal_12,
#line 736 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22,
#line 736 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23,
#line 736 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24,
#line 736 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25,
#line 736 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26,
#line 736 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_DelayForVars_27);

#line 1607 "lco.m"
static void MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__lco_transform_variant_plain_call__1607__1_2_p_0(
#line 1607 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_69,
#line 1607 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__2_70);

#line 1325 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__make_addr_vars__1325__1_2_p_0(
#line 1325 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 1325 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_25);

#line 1199 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__update_construct__1199__1_2_p_0(
#line 1199 "lco.m"
  MR_Word transform_hlds__lco__ConsId_23,
#line 1199 "lco.m"
  MR_Word transform_hlds__lco__RHSConsId_43);

#line 1055 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__IntroducedFrom__func__make_variant_args__1055__1_2_f_0(
#line 1055 "lco.m"
  MR_Word transform_hlds__lco__AddrVarFieldIds_6,
#line 1055 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_14);

#line 1052 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__IntroducedFrom__func__make_variant_args__1052__1_1_f_0(
#line 1052 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_17);

#line 894 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__update_call_args__894__1_2_p_0(
#line 894 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 894 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_13);

#line 241 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____variant_map_0_0(
#line 241 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 241 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 241 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 241 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_map_0_0(
#line 241 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 241 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 213 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____variant_id_0_0(
#line 213 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 213 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 213 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 213 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_id_0_0(
#line 213 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 213 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 220 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____variant_arg_0_0(
#line 220 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 220 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 220 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 220 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_arg_0_0(
#line 220 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 220 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 278 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____var_to_target_0_0(
#line 278 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 278 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 278 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 278 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____var_to_target_0_0(
#line 278 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 278 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 280 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____store_target_0_0(
#line 280 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 280 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 280 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 280 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____store_target_0_0(
#line 280 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 280 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 247 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____proc_changed_0_0(
#line 247 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 247 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 247 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 247 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____proc_changed_0_0(
#line 247 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_1,
#line 247 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 243 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0(
#line 243 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 243 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 243 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 243 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0(
#line 243 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_1,
#line 243 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 255 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____lco_info_0_0(
#line 255 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 255 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 255 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 255 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_info_0_0(
#line 255 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 255 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 266 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____lco_const_info_0_0(
#line 266 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 266 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 266 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 266 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_const_info_0_0(
#line 266 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 266 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 234 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____field_id_0_0(
#line 234 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 234 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 234 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 234 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____field_id_0_0(
#line 234 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 234 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 251 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____allow_float_addr_0_0(
#line 251 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 251 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 251 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 251 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____allow_float_addr_0_0(
#line 251 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_1,
#line 251 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 1700 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_unification_args_8_p_0(
#line 1700 "lco.m"
  MR_Word transform_hlds__lco__GroundVar_9,
#line 1700 "lco.m"
  MR_Integer transform_hlds__lco__TargetArgNum_10,
#line 1700 "lco.m"
  MR_Integer transform_hlds__lco__CurArgNum_11,
#line 1700 "lco.m"
  MR_Word transform_hlds__lco__ArgTypes_12,
#line 1700 "lco.m"
  MR_Word * transform_hlds__lco__ArgVars_13,
#line 1700 "lco.m"
  MR_Word * transform_hlds__lco__ArgModes_14,
#line 1700 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22,
#line 1700 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_23);

#line 1657 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_store_goal_6_p_0(
#line 1657 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_7,
#line 1657 "lco.m"
  MR_Word transform_hlds__lco__InstMap_8,
#line 1657 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 1657 "lco.m"
  MR_Word * transform_hlds__lco__Goal_11,
#line 1657 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_31,
#line 1657 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_32);

#line 1632 "lco.m"
static void MR_CALL 
transform_hlds__lco__grounding_to_variant_args_5_p_0(
#line 1632 "lco.m"
  MR_Word transform_hlds__lco__GroundingVarToAddr_6,
#line 1632 "lco.m"
  MR_Integer transform_hlds__lco__OutArgNum_7,
#line 1632 "lco.m"
  MR_Word transform_hlds__lco__OutArgs_8,
#line 1632 "lco.m"
  MR_Word * transform_hlds__lco__Subst_9,
#line 1632 "lco.m"
  MR_Word * transform_hlds__lco__VariantArgs_10);

#line 1622 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__is_grounding_4_p_0(
#line 1622 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_5,
#line 1622 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_6,
#line 1622 "lco.m"
  MR_Word transform_hlds__lco__InstMap_7,
#line 1622 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__4_4);

#line 1607 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_2(
#line 1607 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1607 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1607 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2);

#line 1564 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_1(
#line 1564 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1564 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1);

#line 1555 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0(
#line 1555 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_12,
#line 1555 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_13,
#line 1555 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_14,
#line 1555 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_15,
#line 1555 "lco.m"
  MR_Word transform_hlds__lco__GoalExpr0_16,
#line 1555 "lco.m"
  MR_Word * transform_hlds__lco__GoalExpr_17,
#line 1555 "lco.m"
  MR_Word transform_hlds__lco__GoalInfo0_18,
#line 1555 "lco.m"
  MR_Word * transform_hlds__lco__GoalInfo_19,
#line 1555 "lco.m"
  MR_Word * transform_hlds__lco__Changed_20,
#line 1555 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_53,
#line 1555 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_54);

#line 1548 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_2(
#line 1548 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1548 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1548 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 1548 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_3,
#line 1548 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_4);

#line 1540 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_1(
#line 1540 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1540 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1);

#line 1532 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(
#line 1532 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_10,
#line 1532 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_11,
#line 1532 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_12,
#line 1532 "lco.m"
  MR_Word transform_hlds__lco__GoalInfo_13,
#line 1532 "lco.m"
  MR_Word transform_hlds__lco__GoalExpr0_14,
#line 1532 "lco.m"
  MR_Word * transform_hlds__lco__GoalExpr_15,
#line 1532 "lco.m"
  MR_Word * transform_hlds__lco__Changed_16,
#line 1532 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_23,
#line 1532 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_24);

#line 1521 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_case_9_p_0(
#line 1521 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_10,
#line 1521 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_11,
#line 1521 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_12,
#line 1521 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_13,
#line 1521 "lco.m"
  MR_Word transform_hlds__lco__Case0_14,
#line 1521 "lco.m"
  MR_Word * transform_hlds__lco__Case_15,
#line 1521 "lco.m"
  MR_Word * transform_hlds__lco__Changed_16,
#line 1521 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22,
#line 1521 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_23);

#line 1502 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_conj_9_p_0(
#line 1502 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_1,
#line 1502 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_2,
#line 1502 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_3,
#line 1502 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_4,
#line 1502 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 1502 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6,
#line 1502 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__7_7,
#line 1502 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_8,
#line 1502 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_9);

#line 1417 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_6(
#line 1417 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1417 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1417 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 1417 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 1417 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 1417 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5);

#line 1408 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_1(
#line 1408 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1408 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1408 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 1408 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 1408 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 1408 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5);

#line 1442 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_2(
#line 1442 "lco.m"
  void * transform_hlds__lco__env_ptr_arg);

#line 1442 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_4(
#line 1442 "lco.m"
  void * transform_hlds__lco__env_ptr_arg);

#line 1442 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_3(
#line 1442 "lco.m"
  void * transform_hlds__lco__env_ptr_arg);

#line 1442 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_5(
#line 1442 "lco.m"
  void * transform_hlds__lco__env_ptr_arg);

#line 1386 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0(
#line 1386 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_10,
#line 1386 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_11,
#line 1386 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_12,
#line 1386 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_13,
#line 1386 "lco.m"
  MR_Word transform_hlds__lco__Goal0_14,
#line 1386 "lco.m"
  MR_Word * transform_hlds__lco__Goal_15,
#line 1386 "lco.m"
  MR_Word * transform_hlds__lco__Changed_16,
#line 1386 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73,
#line 1386 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);

#line 1325 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__make_addr_vars_12_p_0_1(
#line 1325 "lco.m"
  MR_Box transform_hlds__lco__closure_arg);

#line 1318 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_addr_vars_12_p_0(
#line 1318 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 1318 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 1318 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__3_3,
#line 1318 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__4_4,
#line 1318 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 1318 "lco.m"
  MR_Integer transform_hlds__lco__NextOutArgNum_6,
#line 1318 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_7,
#line 1318 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__8_8,
#line 1318 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VarSet_0_9,
#line 1318 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VarSet_10,
#line 1318 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11,
#line 1318 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VarTypes_12);

#line 1273 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__occurs_once_2_p_0(
#line 1273 "lco.m"
  MR_Word transform_hlds__lco__Bag_3,
#line 1273 "lco.m"
  MR_Word transform_hlds__lco__Var_4);

#line 1264 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_mode_2_p_0(
#line 1264 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_3,
#line 1264 "lco.m"
  MR_Word transform_hlds__lco__UniMode_4);

#line 1254 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__bound_inst_with_free_arg_2_f_0(
#line 1254 "lco.m"
  MR_Word transform_hlds__lco__ConsId_4,
#line 1254 "lco.m"
  MR_Integer transform_hlds__lco__FreeArg_5);

#line 1219 "lco.m"
static void MR_CALL 
transform_hlds__lco__update_construct_args_14_p_0(
#line 1219 "lco.m"
  MR_Word transform_hlds__lco__Subst_1,
#line 1219 "lco.m"
  MR_Word transform_hlds__lco__HighLevelData_2,
#line 1219 "lco.m"
  MR_Word transform_hlds__lco__VarType_3,
#line 1219 "lco.m"
  MR_Word transform_hlds__lco__ConsId_4,
#line 1219 "lco.m"
  MR_Integer transform_hlds__lco__ArgNum_5,
#line 1219 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__6_6,
#line 1219 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__7_7,
#line 1219 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__8_8,
#line 1219 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_InstMapDelta_0_9,
#line 1219 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_InstMapDelta_10,
#line 1219 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_0_11,
#line 1219 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_12,
#line 1219 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VarTypes_0_13,
#line 1219 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VarTypes_14);

#line 1199 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__update_construct_8_p_0_1(
#line 1199 "lco.m"
  MR_Box transform_hlds__lco__closure_arg);

#line 1153 "lco.m"
static void MR_CALL 
transform_hlds__lco__update_construct_8_p_0(
#line 1153 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_9,
#line 1153 "lco.m"
  MR_Word transform_hlds__lco__Subst_10,
#line 1153 "lco.m"
  MR_Word transform_hlds__lco__Goal0_11,
#line 1153 "lco.m"
  MR_Word * transform_hlds__lco__Goal_12,
#line 1153 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_AddrVarFieldIds_0_59,
#line 1153 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_AddrVarFieldIds_60,
#line 1153 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_61,
#line 1153 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_62);

#line 1138 "lco.m"
static void MR_CALL 
transform_hlds__lco__create_variant_name_4_p_0(
#line 1138 "lco.m"
  MR_Word transform_hlds__lco__PredOrFunc_5,
#line 1138 "lco.m"
  MR_Integer transform_hlds__lco__VariantNumber_6,
#line 1138 "lco.m"
  MR_String transform_hlds__lco__OrigName_7,
#line 1138 "lco.m"
  MR_String * transform_hlds__lco__VariantName_8);

#line 1101 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__match_existing_variant_3_p_0(
#line 1101 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 1101 "lco.m"
  MR_Word transform_hlds__lco__AddrArgNums_6,
#line 1101 "lco.m"
  MR_Word * transform_hlds__lco__Variant_7);

#line 1061 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__ensure_variant_exists_8_p_0(
#line 1061 "lco.m"
  MR_Word transform_hlds__lco__PredId_9,
#line 1061 "lco.m"
  MR_Integer transform_hlds__lco__ProcId_10,
#line 1061 "lco.m"
  MR_Word transform_hlds__lco__AddrArgNums_11,
#line 1061 "lco.m"
  MR_Word * transform_hlds__lco__VariantPredProcId_12,
#line 1061 "lco.m"
  MR_Word transform_hlds__lco__SymName_13,
#line 1061 "lco.m"
  MR_Word * transform_hlds__lco__VariantSymName_14,
#line 1061 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_30,
#line 1061 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_31);

#line 1055 "lco.m"
static MR_Box MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0_2(
#line 1055 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1055 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1);

#line 1052 "lco.m"
static MR_Box MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0_1(
#line 1052 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1052 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1);

#line 1046 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0(
#line 1046 "lco.m"
  MR_Word transform_hlds__lco__HighLevelData_5,
#line 1046 "lco.m"
  MR_Word transform_hlds__lco__AddrVarFieldIds_6,
#line 1046 "lco.m"
  MR_Word transform_hlds__lco__Mismatches_7,
#line 1046 "lco.m"
  MR_Word * transform_hlds__lco__VariantArgs_8);

#line 1037 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__make_ref_type_1_f_0(
#line 1037 "lco.m"
  MR_Word transform_hlds__lco__FieldType_3);

#line 1014 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_address_var_5_p_0(
#line 1014 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_6,
#line 1014 "lco.m"
  MR_Word transform_hlds__lco__Var_7,
#line 1014 "lco.m"
  MR_Word * transform_hlds__lco__AddrVar_8,
#line 1014 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_19,
#line 1014 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_20);

#line 955 "lco.m"
static void MR_CALL 
transform_hlds__lco__find_args_to_pass_by_addr_10_p_0(
#line 955 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 955 "lco.m"
  MR_Word transform_hlds__lco__UnifyInputVars_2,
#line 955 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 955 "lco.m"
  MR_Integer transform_hlds__lco__ArgNum_4,
#line 955 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__5_5,
#line 955 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6,
#line 955 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Subst_0_7,
#line 955 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Subst_8,
#line 955 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_9,
#line 955 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_10);

#line 927 "lco.m"
static void MR_CALL 
transform_hlds__lco__classify_proc_call_args_7_p_0(
#line 927 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 927 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 927 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 927 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__4_4,
#line 927 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__5_5,
#line 927 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6,
#line 927 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__7_7);

#line 894 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__update_call_args_6_p_0_1(
#line 894 "lco.m"
  MR_Box transform_hlds__lco__closure_arg);

#line 890 "lco.m"
static void MR_CALL 
transform_hlds__lco__update_call_args_6_p_0(
#line 890 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 890 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 890 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 890 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__4_4,
#line 890 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 890 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6);

#line 850 "lco.m"
static void MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0_2(
#line 850 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 850 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 850 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 850 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_3,
#line 850 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_4,
#line 850 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_5,
#line 850 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_6);

#line 848 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0_1(
#line 848 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 848 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1);

#line 808 "lco.m"
static void MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0(
#line 808 "lco.m"
  MR_Word transform_hlds__lco__CallGoal_9,
#line 808 "lco.m"
  MR_Word transform_hlds__lco__CallOutArgs_10,
#line 808 "lco.m"
  MR_Word transform_hlds__lco__UnifyGoals_11,
#line 808 "lco.m"
  MR_Word transform_hlds__lco__UnifyInputVars_12,
#line 808 "lco.m"
  MR_Word * transform_hlds__lco__MaybeGoals_13,
#line 808 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_52,
#line 808 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_53,
#line 808 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_15);

#line 772 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_unification_5_p_0_1(
#line 772 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 772 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1);

#line 758 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_unification_5_p_0(
#line 758 "lco.m"
  MR_Word transform_hlds__lco__Goal_6,
#line 758 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_0_30,
#line 758 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_31,
#line 758 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_32,
#line 758 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_33);

#line 736 "lco.m"
static void MR_CALL 
transform_hlds__lco__partition_dependent_goal_9_p_0(
#line 736 "lco.m"
  MR_Word transform_hlds__lco___Info_10,
#line 736 "lco.m"
  MR_Word transform_hlds__lco___ConstInfo_11,
#line 736 "lco.m"
  MR_Word transform_hlds__lco__Goal_12,
#line 736 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22,
#line 736 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23,
#line 736 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24,
#line 736 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25,
#line 736 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26,
#line 736 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_DelayForVars_27);

#line 701 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__potentially_moveable_goal_1_p_0(
#line 701 "lco.m"
  MR_Word transform_hlds__lco__Goal_2);

#line 633 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__divide_rev_conj_8_p_0(
#line 633 "lco.m"
  MR_Word transform_hlds__lco__Info_9,
#line 633 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_10,
#line 633 "lco.m"
  MR_Word transform_hlds__lco__RevGoals0_11,
#line 633 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_AfterGoals_0_19,
#line 633 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_AfterGoals_20,
#line 633 "lco.m"
  MR_Word * transform_hlds__lco__RecGoal_13,
#line 633 "lco.m"
  MR_Word * transform_hlds__lco__RecOutArgs_14,
#line 633 "lco.m"
  MR_Word * transform_hlds__lco__RevBeforeGoals_15);

#line 603 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0_2(
#line 603 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 603 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 603 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 603 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 603 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 603 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5);

#line 599 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0_1(
#line 599 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 599 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 599 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 599 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 599 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 599 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5,
#line 599 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_6,
#line 599 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_7);

#line 589 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0(
#line 589 "lco.m"
  MR_Word transform_hlds__lco__Goals0_6,
#line 589 "lco.m"
  MR_Word * transform_hlds__lco__MaybeGoals_7,
#line 589 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_26,
#line 589 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_27,
#line 589 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_9);

#line 564 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_cases_5_p_0(
#line 564 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 564 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__2_2,
#line 564 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_3,
#line 564 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_4,
#line 564 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5);

#line 476 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_goal_5_p_0(
#line 476 "lco.m"
  MR_Word transform_hlds__lco__Goal0_6,
#line 476 "lco.m"
  MR_Word * transform_hlds__lco__Goal_7,
#line 476 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_60,
#line 476 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_61,
#line 476 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_9);

#line 378 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_proc_11_p_0(
#line 378 "lco.m"
  MR_Word transform_hlds__lco__LowerSCCVariants_12,
#line 378 "lco.m"
  MR_Word transform_hlds__lco__SCC_13,
#line 378 "lco.m"
  MR_Word transform_hlds__lco__CurProc_14,
#line 378 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_49,
#line 378 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_50,
#line 378 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_51,
#line 378 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_52,
#line 378 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_53,
#line 378 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_54,
#line 378 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Permitted_0_55,
#line 378 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Permitted_56);

#line 374 "lco.m"
static MR_Integer MR_CALL 
transform_hlds__lco__va_pos_1_f_0(
#line 374 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1);

#line 361 "lco.m"
static MR_Box MR_CALL 
transform_hlds__lco__lco_process_proc_variant_4_p_0_1(
#line 361 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 361 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1);

#line 330 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_process_proc_variant_4_p_0(
#line 330 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_5,
#line 330 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 330 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32,
#line 330 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_33);

#line 317 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_process_proc_update_3_p_0(
#line 317 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 317 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_15,
#line 317 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_16);

#line 309 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_3(
#line 309 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 309 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 309 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 309 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3);

#line 308 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_2(
#line 308 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 308 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 308 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 308 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3);

#line 299 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_1(
#line 299 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 299 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 299 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 299 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 299 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 299 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5,
#line 299 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_6,
#line 299 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_7,
#line 299 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_8,
#line 299 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_9);

#line 293 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0(
#line 293 "lco.m"
  MR_Word transform_hlds__lco__SCC_6,
#line 293 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VariantMap_0_17,
#line 293 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VariantMap_18,
#line 293 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_19,
#line 293 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_20);

#line 291 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_modulo_constructors_2_p_0_1(
#line 291 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 291 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 291 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 291 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 291 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 291 "lco.m"
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
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 2191 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 2199 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0
  }
};

#line 2207 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0
  }
};

#line 2216 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 2225 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 2234 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__lco__type_ctor_info_variant_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0
  }
};

#line 2243 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 2251 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2259 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2267 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2275 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2283 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2292 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_field_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0
  }
};

#line 2301 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2309 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2318 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_transform_hlds__lco__type_ctor_info_variant_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0
  }
};

#line 2326 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0
  }
};

#line 2335 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0
  }
};

#line 2343 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_store_target_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0
  }
};

#line 2352 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_0 = {
  (MR_String) "do_not_allow_float_addr",
  (MR_Integer) 0
};

#line 2358 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_1 = {
  (MR_String) "allow_float_addr",
  (MR_Integer) 1
};

#line 2364 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_value_ordered_allow_float_addr_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_0,
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_1
};

#line 2370 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_allow_float_addr_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_1,
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_0
};

#line 2376 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_allow_float_addr_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2382 "transform_hlds.lco.c"
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

#line 2403 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_field_id_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2410 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_field_id_0_0[3] = {
  (MR_String) "fi_type",
  (MR_String) "fi_cons_id",
  (MR_String) "fi_arg"
};

#line 2417 "transform_hlds.lco.c"
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

#line 2432 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_field_id_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_field_id_0_0
};

#line 2437 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_field_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_field_id_0_0
  }
};

#line 2446 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_field_id_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_field_id_0_0
};

#line 2451 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_field_id_0[1] = {
  (MR_Integer) 0
};

#line 2456 "transform_hlds.lco.c"
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

#line 2477 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0
  }
};

#line 2486 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 2494 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2502 "transform_hlds.lco.c"
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

#line 2514 "transform_hlds.lco.c"
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

#line 2526 "transform_hlds.lco.c"
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

#line 2541 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_const_info_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_const_info_0_0
};

#line 2546 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_const_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_const_info_0_0
  }
};

#line 2555 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_lco_const_info_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_const_info_0_0
};

#line 2560 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_const_info_0[1] = {
  (MR_Integer) 0
};

#line 2565 "transform_hlds.lco.c"
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

#line 2586 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2594 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2603 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_lco_info_0_0[7] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_allow_float_addr_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_is_permitted_on_scc_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_proc_changed_0
};

#line 2614 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_lco_info_0_0[7] = {
  (MR_String) "lco_module_info",
  (MR_String) "lco_cur_scc_variants",
  (MR_String) "lco_var_set",
  (MR_String) "lco_var_types",
  (MR_String) "lco_allow_float_addr",
  (MR_String) "lco_permitted",
  (MR_String) "lco_changed"
};

#line 2625 "transform_hlds.lco.c"
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

#line 2664 "transform_hlds.lco.c"
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

#line 2679 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_info_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_info_0_0
};

#line 2684 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_info_0_0
  }
};

#line 2693 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_lco_info_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_info_0_0
};

#line 2698 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_info_0[1] = {
  (MR_Integer) 0
};

#line 2703 "transform_hlds.lco.c"
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

#line 2724 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_0 = {
  (MR_String) "lco_is_not_permitted_on_scc",
  (MR_Integer) 0
};

#line 2730 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_1 = {
  (MR_String) "lco_is_permitted_on_scc",
  (MR_Integer) 1
};

#line 2736 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_value_ordered_lco_is_permitted_on_scc_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_0,
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_1
};

#line 2742 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_lco_is_permitted_on_scc_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_0,
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_1
};

#line 2748 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_is_permitted_on_scc_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2754 "transform_hlds.lco.c"
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

#line 2775 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_0 = {
  (MR_String) "proc_not_changed",
  (MR_Integer) 0
};

#line 2781 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_1 = {
  (MR_String) "proc_changed",
  (MR_Integer) 1
};

#line 2787 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_value_ordered_proc_changed_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_0,
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_1
};

#line 2793 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_proc_changed_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_1,
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_0
};

#line 2799 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_proc_changed_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2805 "transform_hlds.lco.c"
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

#line 2826 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__maybe__ti_maybe_1transform_hlds__lco__type_ctor_info_field_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0
  }
};

#line 2834 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_store_target_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__maybe__ti_maybe_1transform_hlds__lco__type_ctor_info_field_id_0
};

#line 2840 "transform_hlds.lco.c"
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

#line 2855 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_store_target_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_store_target_0_0
};

#line 2860 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_store_target_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_store_target_0_0
  }
};

#line 2869 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_store_target_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_store_target_0_0
};

#line 2874 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_store_target_0[1] = {
  (MR_Integer) 0
};

#line 2879 "transform_hlds.lco.c"
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

#line 2900 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__lco__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0
  }
};

#line 2908 "transform_hlds.lco.c"
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

#line 2929 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_variant_arg_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__maybe__ti_maybe_1transform_hlds__lco__type_ctor_info_field_id_0
};

#line 2935 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_variant_arg_0_0[2] = {
  (MR_String) "va_pos",
  (MR_String) "va_field"
};

#line 2941 "transform_hlds.lco.c"
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

#line 2956 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_arg_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_arg_0_0
};

#line 2961 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_arg_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_arg_0_0
  }
};

#line 2970 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_arg_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_arg_0_0
};

#line 2975 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_arg_0[1] = {
  (MR_Integer) 0
};

#line 2980 "transform_hlds.lco.c"
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

#line 3001 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0
  }
};

#line 3009 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_variant_id_0_0[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_arg_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3016 "transform_hlds.lco.c"
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

#line 3031 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_id_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_id_0_0
};

#line 3036 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_id_0_0
  }
};

#line 3045 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_id_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_id_0_0
};

#line 3050 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_id_0[1] = {
  (MR_Integer) 0
};

#line 3055 "transform_hlds.lco.c"
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

#line 3076 "transform_hlds.lco.c"
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

#line 3097 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____allow_float_addr_0_0_10001(
#line 3100 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3102 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3104 "transform_hlds.lco.c"
{
#line 3106 "transform_hlds.lco.c"
  {
#line 3108 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3111 "transform_hlds.lco.c"
    {
#line 3113 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____allow_float_addr_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3116 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3118 "transform_hlds.lco.c"
  }
#line 3120 "transform_hlds.lco.c"
}

#line 3123 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____allow_float_addr_0_0_10001(
#line 3126 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3128 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3130 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3132 "transform_hlds.lco.c"
{
#line 3134 "transform_hlds.lco.c"
  {
#line 3136 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3139 "transform_hlds.lco.c"
    {
#line 3141 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____allow_float_addr_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3144 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3146 "transform_hlds.lco.c"
  }
#line 3148 "transform_hlds.lco.c"
}

#line 3151 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____field_id_0_0_10001(
#line 3154 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3156 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3158 "transform_hlds.lco.c"
{
#line 3160 "transform_hlds.lco.c"
  {
#line 3162 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3165 "transform_hlds.lco.c"
    {
#line 3167 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____field_id_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3170 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3172 "transform_hlds.lco.c"
  }
#line 3174 "transform_hlds.lco.c"
}

#line 3177 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____field_id_0_0_10001(
#line 3180 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3182 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3184 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3186 "transform_hlds.lco.c"
{
#line 3188 "transform_hlds.lco.c"
  {
#line 3190 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3193 "transform_hlds.lco.c"
    {
#line 3195 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____field_id_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3198 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3200 "transform_hlds.lco.c"
  }
#line 3202 "transform_hlds.lco.c"
}

#line 3205 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_const_info_0_0_10001(
#line 3208 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3210 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3212 "transform_hlds.lco.c"
{
#line 3214 "transform_hlds.lco.c"
  {
#line 3216 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3219 "transform_hlds.lco.c"
    {
#line 3221 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____lco_const_info_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3224 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3226 "transform_hlds.lco.c"
  }
#line 3228 "transform_hlds.lco.c"
}

#line 3231 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____lco_const_info_0_0_10001(
#line 3234 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3236 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3238 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3240 "transform_hlds.lco.c"
{
#line 3242 "transform_hlds.lco.c"
  {
#line 3244 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3247 "transform_hlds.lco.c"
    {
#line 3249 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____lco_const_info_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3252 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3254 "transform_hlds.lco.c"
  }
#line 3256 "transform_hlds.lco.c"
}

#line 3259 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_info_0_0_10001(
#line 3262 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3264 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3266 "transform_hlds.lco.c"
{
#line 3268 "transform_hlds.lco.c"
  {
#line 3270 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3273 "transform_hlds.lco.c"
    {
#line 3275 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____lco_info_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3278 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3280 "transform_hlds.lco.c"
  }
#line 3282 "transform_hlds.lco.c"
}

#line 3285 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____lco_info_0_0_10001(
#line 3288 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3290 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3292 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3294 "transform_hlds.lco.c"
{
#line 3296 "transform_hlds.lco.c"
  {
#line 3298 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3301 "transform_hlds.lco.c"
    {
#line 3303 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____lco_info_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3306 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3308 "transform_hlds.lco.c"
  }
#line 3310 "transform_hlds.lco.c"
}

#line 3313 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0_10001(
#line 3316 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3318 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3320 "transform_hlds.lco.c"
{
#line 3322 "transform_hlds.lco.c"
  {
#line 3324 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3327 "transform_hlds.lco.c"
    {
#line 3329 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3332 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3334 "transform_hlds.lco.c"
  }
#line 3336 "transform_hlds.lco.c"
}

#line 3339 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0_10001(
#line 3342 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3344 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3346 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3348 "transform_hlds.lco.c"
{
#line 3350 "transform_hlds.lco.c"
  {
#line 3352 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3355 "transform_hlds.lco.c"
    {
#line 3357 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3360 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3362 "transform_hlds.lco.c"
  }
#line 3364 "transform_hlds.lco.c"
}

#line 3367 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____proc_changed_0_0_10001(
#line 3370 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3372 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3374 "transform_hlds.lco.c"
{
#line 3376 "transform_hlds.lco.c"
  {
#line 3378 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3381 "transform_hlds.lco.c"
    {
#line 3383 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____proc_changed_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3386 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3388 "transform_hlds.lco.c"
  }
#line 3390 "transform_hlds.lco.c"
}

#line 3393 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____proc_changed_0_0_10001(
#line 3396 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3398 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3400 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3402 "transform_hlds.lco.c"
{
#line 3404 "transform_hlds.lco.c"
  {
#line 3406 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3409 "transform_hlds.lco.c"
    {
#line 3411 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____proc_changed_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3414 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3416 "transform_hlds.lco.c"
  }
#line 3418 "transform_hlds.lco.c"
}

#line 3421 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____store_target_0_0_10001(
#line 3424 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3426 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3428 "transform_hlds.lco.c"
{
#line 3430 "transform_hlds.lco.c"
  {
#line 3432 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3435 "transform_hlds.lco.c"
    {
#line 3437 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____store_target_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3440 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3442 "transform_hlds.lco.c"
  }
#line 3444 "transform_hlds.lco.c"
}

#line 3447 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____store_target_0_0_10001(
#line 3450 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3452 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3454 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3456 "transform_hlds.lco.c"
{
#line 3458 "transform_hlds.lco.c"
  {
#line 3460 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3463 "transform_hlds.lco.c"
    {
#line 3465 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____store_target_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3468 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3470 "transform_hlds.lco.c"
  }
#line 3472 "transform_hlds.lco.c"
}

#line 3475 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____var_to_target_0_0_10001(
#line 3478 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3480 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3482 "transform_hlds.lco.c"
{
#line 3484 "transform_hlds.lco.c"
  {
#line 3486 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3489 "transform_hlds.lco.c"
    {
#line 3491 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____var_to_target_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3494 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3496 "transform_hlds.lco.c"
  }
#line 3498 "transform_hlds.lco.c"
}

#line 3501 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____var_to_target_0_0_10001(
#line 3504 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3506 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3508 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3510 "transform_hlds.lco.c"
{
#line 3512 "transform_hlds.lco.c"
  {
#line 3514 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3517 "transform_hlds.lco.c"
    {
#line 3519 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____var_to_target_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3522 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3524 "transform_hlds.lco.c"
  }
#line 3526 "transform_hlds.lco.c"
}

#line 3529 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_arg_0_0_10001(
#line 3532 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3534 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3536 "transform_hlds.lco.c"
{
#line 3538 "transform_hlds.lco.c"
  {
#line 3540 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3543 "transform_hlds.lco.c"
    {
#line 3545 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____variant_arg_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3548 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3550 "transform_hlds.lco.c"
  }
#line 3552 "transform_hlds.lco.c"
}

#line 3555 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____variant_arg_0_0_10001(
#line 3558 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3560 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3562 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3564 "transform_hlds.lco.c"
{
#line 3566 "transform_hlds.lco.c"
  {
#line 3568 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3571 "transform_hlds.lco.c"
    {
#line 3573 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____variant_arg_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3576 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3578 "transform_hlds.lco.c"
  }
#line 3580 "transform_hlds.lco.c"
}

#line 3583 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_id_0_0_10001(
#line 3586 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3588 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3590 "transform_hlds.lco.c"
{
#line 3592 "transform_hlds.lco.c"
  {
#line 3594 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3597 "transform_hlds.lco.c"
    {
#line 3599 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____variant_id_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3602 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3604 "transform_hlds.lco.c"
  }
#line 3606 "transform_hlds.lco.c"
}

#line 3609 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____variant_id_0_0_10001(
#line 3612 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3614 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3616 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3618 "transform_hlds.lco.c"
{
#line 3620 "transform_hlds.lco.c"
  {
#line 3622 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3625 "transform_hlds.lco.c"
    {
#line 3627 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____variant_id_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3630 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3632 "transform_hlds.lco.c"
  }
#line 3634 "transform_hlds.lco.c"
}

#line 3637 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_map_0_0_10001(
#line 3640 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3642 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3644 "transform_hlds.lco.c"
{
#line 3646 "transform_hlds.lco.c"
  {
#line 3648 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3651 "transform_hlds.lco.c"
    {
#line 3653 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____variant_map_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3656 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3658 "transform_hlds.lco.c"
  }
#line 3660 "transform_hlds.lco.c"
}

#line 3663 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____variant_map_0_0_10001(
#line 3666 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3668 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3670 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3672 "transform_hlds.lco.c"
{
#line 3674 "transform_hlds.lco.c"
  {
#line 3676 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3679 "transform_hlds.lco.c"
    {
#line 3681 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____variant_map_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3684 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3686 "transform_hlds.lco.c"
  }
#line 3688 "transform_hlds.lco.c"
}

#line 736 "lco.m"
static void MR_CALL 
transform_hlds__lco__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_116_105_116_105_111_110_95_100_101_112_101_110_100_101_110_116_95_103_111_97_108_95_95_91_49_44_32_50_93_95_48_9_p_0(
#line 736 "lco.m"
  MR_Word transform_hlds__lco__Goal_12,
#line 736 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22,
#line 736 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23,
#line 736 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24,
#line 736 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25,
#line 736 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26,
#line 736 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_DelayForVars_27)
#line 736 "lco.m"
{
#line 742 "lco.m"
  {
#line 742 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 742 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_31_31;
#line 742 "lco.m"
    MR_Word transform_hlds__lco__GoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_12, (MR_Integer) 1)));
#line 742 "lco.m"
    MR_Word transform_hlds__lco__GoalVars_18;
#line 742 "lco.m"
    MR_Word transform_hlds__lco__Intersection_19;
#line 743 "lco.m"
    MR_Word transform_hlds__lco___GoalExpr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_12, (MR_Integer) 0)));

#line 744 "lco.m"
    {
#line 744 "lco.m"
      hlds__goal_util__goal_vars_2_p_0(transform_hlds__lco__Goal_12, &transform_hlds__lco__GoalVars_18);
    }
#line 3730 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 745 "lco.m"
    {
#line 745 "lco.m"
      parse_tree__set_of_var__intersect_3_p_0(transform_hlds__lco__TypeCtorInfo_31_31, transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26, transform_hlds__lco__GoalVars_18, &transform_hlds__lco__Intersection_19);
    }
#line 746 "lco.m"
    {
#line 746 "lco.m"
      transform_hlds__lco__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__lco__TypeCtorInfo_31_31, transform_hlds__lco__Intersection_19);
    }
#line 748 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 747 "lco.m"
      {
#line 747 "lco.m"
        {
#line 747 "lco.m"
          mercury__list__cons_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (transform_hlds__lco__Goal_12)), transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24, transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25);
        }
#line 747 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_DelayForVars_27 = transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26;
#line 747 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23 = transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22;
#line 747 "lco.m"
      }
#line 748 "lco.m"
    else
#line 749 "lco.m"
      {
#line 749 "lco.m"
        MR_Word transform_hlds__lco__InstmapDelta_20;
#line 749 "lco.m"
        MR_Word transform_hlds__lco__ChangedVars_21;

#line 749 "lco.m"
        {
#line 749 "lco.m"
          mercury__list__cons_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (transform_hlds__lco__Goal_12)), transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22, transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23);
        }
#line 751 "lco.m"
        {
#line 751 "lco.m"
          transform_hlds__lco__InstmapDelta_20 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__lco__GoalInfo_17);
        }
#line 752 "lco.m"
        {
#line 752 "lco.m"
          hlds__instmap__instmap_delta_changed_vars_2_p_0(transform_hlds__lco__InstmapDelta_20, &transform_hlds__lco__ChangedVars_21);
        }
#line 753 "lco.m"
        {
#line 753 "lco.m"
          parse_tree__set_of_var__union_3_p_0(transform_hlds__lco__TypeCtorInfo_31_31, transform_hlds__lco__ChangedVars_21, transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26, transform_hlds__lco__STATE_VARIABLE_DelayForVars_27);
        }
#line 753 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25 = transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24;
#line 749 "lco.m"
      }
#line 742 "lco.m"
  }
#line 736 "lco.m"
}

#line 1607 "lco.m"
static void MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__lco_transform_variant_plain_call__1607__1_2_p_0(
#line 1607 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_69,
#line 1607 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__2_70)
#line 1607 "lco.m"
{
#line 1607 "lco.m"
  {
#line 1607 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1607 "lco.m"
    MR_Box transform_hlds__lco__conv0_HeadVar__2_70;

#line 1607 "lco.m"
    {
#line 1607 "lco.m"
      mercury__pair__fst_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[4], (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0, transform_hlds__lco__HeadVar__1_69, &transform_hlds__lco__conv0_HeadVar__2_70);
    }
#line 1607 "lco.m"
    *transform_hlds__lco__HeadVar__2_70 = ((MR_Word) transform_hlds__lco__conv0_HeadVar__2_70);
#line 1607 "lco.m"
  }
#line 1607 "lco.m"
}

#line 1325 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__make_addr_vars__1325__1_2_p_0(
#line 1325 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 1325 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_25)
#line 1325 "lco.m"
{
#line 1325 "lco.m"
  {
#line 1325 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1325 "lco.m"
    {
#line 1325 "lco.m"
      return transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[7], ((MR_Box) (transform_hlds__lco__HeadVar__5_5)), ((MR_Box) (transform_hlds__lco__HeadVar__2_25)));
    }
#line 1325 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1325 "lco.m"
  }
#line 1325 "lco.m"
}

#line 1199 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__update_construct__1199__1_2_p_0(
#line 1199 "lco.m"
  MR_Word transform_hlds__lco__ConsId_23,
#line 1199 "lco.m"
  MR_Word transform_hlds__lco__RHSConsId_43)
#line 1199 "lco.m"
{
#line 1199 "lco.m"
  {
#line 1199 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1199 "lco.m"
    {
#line 1199 "lco.m"
      return transform_hlds__lco__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__lco__ConsId_23, transform_hlds__lco__RHSConsId_43);
    }
#line 1199 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1199 "lco.m"
  }
#line 1199 "lco.m"
}

#line 1055 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__IntroducedFrom__func__make_variant_args__1055__1_2_f_0(
#line 1055 "lco.m"
  MR_Word transform_hlds__lco__AddrVarFieldIds_6,
#line 1055 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_14)
#line 1055 "lco.m"
{
#line 1055 "lco.m"
  {
#line 1055 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1055 "lco.m"
    MR_Word transform_hlds__lco__HeadVar__3_15;
#line 1055 "lco.m"
    MR_Word transform_hlds__lco__FieldId_13;
#line 1055 "lco.m"
    MR_Word transform_hlds__lco__V_16_16;
#line 1055 "lco.m"
    MR_Integer transform_hlds__lco__Pos_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_14, (MR_Integer) 0)));
#line 1055 "lco.m"
    MR_Word transform_hlds__lco__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_14, (MR_Integer) 1)));
#line 1056 "lco.m"
    MR_Box transform_hlds__lco__conv0_FieldId_13;

#line 1056 "lco.m"
    {
#line 1056 "lco.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[4], (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0, transform_hlds__lco__AddrVarFieldIds_6, ((MR_Box) (transform_hlds__lco__Var_24)), &transform_hlds__lco__conv0_FieldId_13);
    }
#line 1056 "lco.m"
    transform_hlds__lco__FieldId_13 = ((MR_Word) transform_hlds__lco__conv0_FieldId_13);
#line 1055 "lco.m"
    {
#line 1055 "lco.m"
      transform_hlds__lco__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1055 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__V_16_16, 0) = ((MR_Box) (transform_hlds__lco__FieldId_13));
#line 1055 "lco.m"
    }
#line 1055 "lco.m"
    {
#line 1055 "lco.m"
      transform_hlds__lco__HeadVar__3_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1055 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_15, 0) = ((MR_Box) (transform_hlds__lco__Pos_23));
#line 1055 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_15, 1) = ((MR_Box) (transform_hlds__lco__V_16_16));
#line 1055 "lco.m"
    }
#line 1055 "lco.m"
    return transform_hlds__lco__HeadVar__3_15;
#line 1055 "lco.m"
  }
#line 1055 "lco.m"
}

#line 1052 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__IntroducedFrom__func__make_variant_args__1052__1_1_f_0(
#line 1052 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_17)
#line 1052 "lco.m"
{
#line 1052 "lco.m"
  {
#line 1052 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1052 "lco.m"
    MR_Word transform_hlds__lco__HeadVar__2_18;
#line 1052 "lco.m"
    MR_Integer transform_hlds__lco__Pos_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_17, (MR_Integer) 0)));
#line 1052 "lco.m"
    MR_Word transform_hlds__lco___Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_17, (MR_Integer) 1)));

#line 1052 "lco.m"
    {
#line 1052 "lco.m"
      transform_hlds__lco__HeadVar__2_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1052 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_18, 0) = ((MR_Box) (transform_hlds__lco__Pos_21));
#line 1052 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1052 "lco.m"
    }
#line 1052 "lco.m"
    return transform_hlds__lco__HeadVar__2_18;
#line 1052 "lco.m"
  }
#line 1052 "lco.m"
}

#line 894 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__update_call_args__894__1_2_p_0(
#line 894 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 894 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_13)
#line 894 "lco.m"
{
#line 894 "lco.m"
  {
#line 894 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 894 "lco.m"
    {
#line 894 "lco.m"
      return transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[6], ((MR_Box) (transform_hlds__lco__HeadVar__5_5)), ((MR_Box) (transform_hlds__lco__HeadVar__2_13)));
    }
#line 894 "lco.m"
    return transform_hlds__lco__succeeded;
#line 894 "lco.m"
  }
#line 894 "lco.m"
}

#line 241 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____variant_map_0_0(
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
    MR_Word transform_hlds__lco__Cast_HeadVar1_4 = transform_hlds__lco__HeadVar__2_2;
#line 241 "lco.m"
    MR_Word transform_hlds__lco__Cast_HeadVar2_5 = transform_hlds__lco__HeadVar__3_3;

#line 241 "lco.m"
    {
#line 241 "lco.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[0], transform_hlds__lco__HeadVar__1_1, ((MR_Box) (transform_hlds__lco__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__lco__Cast_HeadVar2_5)));
#line 241 "lco.m"
      return;
    }
#line 241 "lco.m"
  }
#line 241 "lco.m"
}

#line 241 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_map_0_0(
#line 241 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 241 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 241 "lco.m"
{
#line 241 "lco.m"
  {
#line 241 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 241 "lco.m"
    MR_Word transform_hlds__lco__Cast_HeadVar1_3 = transform_hlds__lco__HeadVar__1_1;
#line 241 "lco.m"
    MR_Word transform_hlds__lco__Cast_HeadVar2_4 = transform_hlds__lco__HeadVar__2_2;

#line 241 "lco.m"
    {
#line 241 "lco.m"
      return transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[0], ((MR_Box) (transform_hlds__lco__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__lco__Cast_HeadVar2_4)));
    }
#line 241 "lco.m"
    return transform_hlds__lco__succeeded;
#line 241 "lco.m"
  }
#line 241 "lco.m"
}

#line 213 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____variant_id_0_0(
#line 213 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 213 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 213 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 213 "lco.m"
{
#line 213 "lco.m"
  {
#line 213 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 213 "lco.m"
    MR_Integer transform_hlds__lco__CastX_12 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 213 "lco.m"
    MR_Integer transform_hlds__lco__CastY_13 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 213 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_12 == transform_hlds__lco__CastY_13);
#line 213 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 4080 "transform_hlds.lco.c"
      *transform_hlds__lco__HeadVar__1_1 = (MR_Integer) 0;
#line 213 "lco.m"
    else
#line 213 "lco.m"
      {
#line 213 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 213 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 213 "lco.m"
        MR_String transform_hlds__lco__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));
#line 213 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
#line 213 "lco.m"
        MR_Word transform_hlds__lco__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 213 "lco.m"
        MR_String transform_hlds__lco__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 2)));
#line 213 "lco.m"
        MR_Word transform_hlds__lco__V_10_10;

#line 213 "lco.m"
        {
#line 213 "lco.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[7], &transform_hlds__lco__V_10_10, ((MR_Box) (transform_hlds__lco__V_4_4)), ((MR_Box) (transform_hlds__lco__V_7_7)));
        }
#line 4106 "transform_hlds.lco.c"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_10_10 == (MR_Integer) 0);
#line 213 "lco.m"
        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 213 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 213 "lco.m"
          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_10_10;
#line 213 "lco.m"
        else
#line 213 "lco.m"
          {
#line 213 "lco.m"
            MR_Word transform_hlds__lco__V_11_11;

#line 213 "lco.m"
            {
#line 213 "lco.m"
              hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__lco__V_11_11, transform_hlds__lco__V_5_5, transform_hlds__lco__V_8_8);
            }
#line 4126 "transform_hlds.lco.c"
            transform_hlds__lco__succeeded = (transform_hlds__lco__V_11_11 == (MR_Integer) 0);
#line 213 "lco.m"
            transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 213 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 213 "lco.m"
              *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_11_11;
#line 213 "lco.m"
            else
#line 213 "lco.m"
              {
#line 213 "lco.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__V_6_6, transform_hlds__lco__V_9_9);
#line 213 "lco.m"
                return;
              }
#line 213 "lco.m"
          }
#line 213 "lco.m"
      }
#line 213 "lco.m"
  }
#line 213 "lco.m"
}

#line 213 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_id_0_0(
#line 213 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 213 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 213 "lco.m"
{
#line 213 "lco.m"
  {
#line 213 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 213 "lco.m"
    MR_Integer transform_hlds__lco__CastX_9 = (MR_Integer) transform_hlds__lco__HeadVar__1_1;
#line 213 "lco.m"
    MR_Integer transform_hlds__lco__CastY_10 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;

#line 213 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_9 == transform_hlds__lco__CastY_10);
#line 213 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 213 "lco.m"
      transform_hlds__lco__succeeded = MR_TRUE;
#line 213 "lco.m"
    else
#line 213 "lco.m"
      {
#line 213 "lco.m"
        MR_Word transform_hlds__lco__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 213 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 213 "lco.m"
        MR_String transform_hlds__lco__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 2)));
#line 213 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 213 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 213 "lco.m"
        MR_String transform_hlds__lco__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));

#line 4193 "transform_hlds.lco.c"
        {
#line 4195 "transform_hlds.lco.c"
          transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[7], ((MR_Box) (transform_hlds__lco__V_3_3)), ((MR_Box) (transform_hlds__lco__V_6_6)));
        }
#line 213 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 213 "lco.m"
          {
#line 4202 "transform_hlds.lco.c"
            {
#line 4204 "transform_hlds.lco.c"
              transform_hlds__lco__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__lco__V_4_4, transform_hlds__lco__V_7_7);
            }
#line 213 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 4209 "transform_hlds.lco.c"
              transform_hlds__lco__succeeded = (strcmp(transform_hlds__lco__V_5_5, transform_hlds__lco__V_8_8) == 0);
#line 213 "lco.m"
          }
#line 213 "lco.m"
      }
#line 213 "lco.m"
    return transform_hlds__lco__succeeded;
#line 213 "lco.m"
  }
#line 213 "lco.m"
}

#line 220 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____variant_arg_0_0(
#line 220 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 220 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 220 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 220 "lco.m"
{
#line 220 "lco.m"
  {
#line 220 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 220 "lco.m"
    MR_Integer transform_hlds__lco__CastX_9 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 220 "lco.m"
    MR_Integer transform_hlds__lco__CastY_10 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 220 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_9 == transform_hlds__lco__CastY_10);
#line 220 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 4246 "transform_hlds.lco.c"
      *transform_hlds__lco__HeadVar__1_1 = (MR_Integer) 0;
#line 220 "lco.m"
    else
#line 220 "lco.m"
      {
#line 220 "lco.m"
        MR_Integer transform_hlds__lco__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 220 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 220 "lco.m"
        MR_Integer transform_hlds__lco__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
#line 220 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 220 "lco.m"
        MR_Word transform_hlds__lco__V_8_8;

#line 220 "lco.m"
        {
#line 220 "lco.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__lco__V_8_8, transform_hlds__lco__V_4_4, transform_hlds__lco__V_6_6);
        }
#line 4268 "transform_hlds.lco.c"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_8_8 == (MR_Integer) 0);
#line 220 "lco.m"
        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 220 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 220 "lco.m"
          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_8_8;
#line 220 "lco.m"
        else
#line 220 "lco.m"
          {
#line 220 "lco.m"
            {
#line 220 "lco.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[10], transform_hlds__lco__HeadVar__1_1, ((MR_Box) (transform_hlds__lco__V_5_5)), ((MR_Box) (transform_hlds__lco__V_7_7)));
#line 220 "lco.m"
              return;
            }
#line 220 "lco.m"
          }
#line 220 "lco.m"
      }
#line 220 "lco.m"
  }
#line 220 "lco.m"
}

#line 220 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_arg_0_0(
#line 220 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 220 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 220 "lco.m"
{
#line 220 "lco.m"
  {
#line 220 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 220 "lco.m"
    MR_Integer transform_hlds__lco__CastX_7 = (MR_Integer) transform_hlds__lco__HeadVar__1_1;
#line 220 "lco.m"
    MR_Integer transform_hlds__lco__CastY_8 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;

#line 220 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_7 == transform_hlds__lco__CastY_8);
#line 220 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 220 "lco.m"
      transform_hlds__lco__succeeded = MR_TRUE;
#line 220 "lco.m"
    else
#line 220 "lco.m"
      {
#line 220 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_9_9;
#line 220 "lco.m"
        MR_Integer transform_hlds__lco__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 220 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 220 "lco.m"
        MR_Integer transform_hlds__lco__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 220 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));

#line 4335 "transform_hlds.lco.c"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_3_3 == transform_hlds__lco__V_5_5);
#line 220 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 220 "lco.m"
          {
#line 4341 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_9_9 = (MR_Word) &transform_hlds__lco_scalar_common_1[10];
#line 4343 "transform_hlds.lco.c"
            {
#line 4345 "transform_hlds.lco.c"
              return transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_9_9, ((MR_Box) (transform_hlds__lco__V_4_4)), ((MR_Box) (transform_hlds__lco__V_6_6)));
            }
#line 220 "lco.m"
          }
#line 220 "lco.m"
      }
#line 220 "lco.m"
    return transform_hlds__lco__succeeded;
#line 220 "lco.m"
  }
#line 220 "lco.m"
}

#line 278 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____var_to_target_0_0(
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
    MR_Word transform_hlds__lco__Cast_HeadVar1_4 = transform_hlds__lco__HeadVar__2_2;
#line 278 "lco.m"
    MR_Word transform_hlds__lco__Cast_HeadVar2_5 = transform_hlds__lco__HeadVar__3_3;

#line 278 "lco.m"
    {
#line 278 "lco.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[11], transform_hlds__lco__HeadVar__1_1, ((MR_Box) (transform_hlds__lco__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__lco__Cast_HeadVar2_5)));
#line 278 "lco.m"
      return;
    }
#line 278 "lco.m"
  }
#line 278 "lco.m"
}

#line 278 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____var_to_target_0_0(
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
    MR_Word transform_hlds__lco__Cast_HeadVar1_3 = transform_hlds__lco__HeadVar__1_1;
#line 278 "lco.m"
    MR_Word transform_hlds__lco__Cast_HeadVar2_4 = transform_hlds__lco__HeadVar__2_2;

#line 278 "lco.m"
    {
#line 278 "lco.m"
      return transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[11], ((MR_Box) (transform_hlds__lco__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__lco__Cast_HeadVar2_4)));
    }
#line 278 "lco.m"
    return transform_hlds__lco__succeeded;
#line 278 "lco.m"
  }
#line 278 "lco.m"
}

#line 280 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____store_target_0_0(
#line 280 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 280 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 280 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 280 "lco.m"
{
#line 280 "lco.m"
  {
#line 280 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 280 "lco.m"
    MR_Integer transform_hlds__lco__CastX_9 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 280 "lco.m"
    MR_Integer transform_hlds__lco__CastY_10 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 280 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_9 == transform_hlds__lco__CastY_10);
#line 280 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 4445 "transform_hlds.lco.c"
      *transform_hlds__lco__HeadVar__1_1 = (MR_Integer) 0;
#line 280 "lco.m"
    else
#line 280 "lco.m"
      {
#line 280 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 280 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 280 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
#line 280 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 280 "lco.m"
        MR_Word transform_hlds__lco__V_8_8;

#line 280 "lco.m"
        {
#line 280 "lco.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[4], &transform_hlds__lco__V_8_8, ((MR_Box) (transform_hlds__lco__V_4_4)), ((MR_Box) (transform_hlds__lco__V_6_6)));
        }
#line 4467 "transform_hlds.lco.c"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_8_8 == (MR_Integer) 0);
#line 280 "lco.m"
        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 280 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 280 "lco.m"
          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_8_8;
#line 280 "lco.m"
        else
#line 280 "lco.m"
          {
#line 280 "lco.m"
            {
#line 280 "lco.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[10], transform_hlds__lco__HeadVar__1_1, ((MR_Box) (transform_hlds__lco__V_5_5)), ((MR_Box) (transform_hlds__lco__V_7_7)));
#line 280 "lco.m"
              return;
            }
#line 280 "lco.m"
          }
#line 280 "lco.m"
      }
#line 280 "lco.m"
  }
#line 280 "lco.m"
}

#line 280 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____store_target_0_0(
#line 280 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 280 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 280 "lco.m"
{
#line 280 "lco.m"
  {
#line 280 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 280 "lco.m"
    MR_Integer transform_hlds__lco__CastX_7 = (MR_Integer) transform_hlds__lco__HeadVar__1_1;
#line 280 "lco.m"
    MR_Integer transform_hlds__lco__CastY_8 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;

#line 280 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_7 == transform_hlds__lco__CastY_8);
#line 280 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 280 "lco.m"
      transform_hlds__lco__succeeded = MR_TRUE;
#line 280 "lco.m"
    else
#line 280 "lco.m"
      {
#line 280 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_10_10;
#line 280 "lco.m"
        MR_Word transform_hlds__lco__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 280 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 280 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 280 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));

#line 4534 "transform_hlds.lco.c"
        {
#line 4536 "transform_hlds.lco.c"
          transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[4], ((MR_Box) (transform_hlds__lco__V_3_3)), ((MR_Box) (transform_hlds__lco__V_5_5)));
        }
#line 280 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 280 "lco.m"
          {
#line 4543 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_10_10 = (MR_Word) &transform_hlds__lco_scalar_common_1[10];
#line 4545 "transform_hlds.lco.c"
            {
#line 4547 "transform_hlds.lco.c"
              return transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_10_10, ((MR_Box) (transform_hlds__lco__V_4_4)), ((MR_Box) (transform_hlds__lco__V_6_6)));
            }
#line 280 "lco.m"
          }
#line 280 "lco.m"
      }
#line 280 "lco.m"
    return transform_hlds__lco__succeeded;
#line 280 "lco.m"
  }
#line 280 "lco.m"
}

#line 247 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____proc_changed_0_0(
#line 247 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 247 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 247 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 247 "lco.m"
{
#line 247 "lco.m"
  {
#line 247 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 247 "lco.m"
    MR_Integer transform_hlds__lco__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 247 "lco.m"
    MR_Integer transform_hlds__lco__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 247 "lco.m"
    {
#line 247 "lco.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__Cast_HeadVar1_4, transform_hlds__lco__Cast_HeadVar2_5);
#line 247 "lco.m"
      return;
    }
#line 247 "lco.m"
  }
#line 247 "lco.m"
}

#line 247 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____proc_changed_0_0(
#line 247 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_1,
#line 247 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 247 "lco.m"
{
#line 4602 "transform_hlds.lco.c"
  {
#line 4604 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded = (transform_hlds__lco__HeadVar__2_1 == transform_hlds__lco__HeadVar__2_2);

#line 4607 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 4609 "transform_hlds.lco.c"
  }
#line 247 "lco.m"
}

#line 243 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0(
#line 243 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 243 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 243 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 243 "lco.m"
{
#line 243 "lco.m"
  {
#line 243 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 243 "lco.m"
    MR_Integer transform_hlds__lco__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 243 "lco.m"
    MR_Integer transform_hlds__lco__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 243 "lco.m"
    {
#line 243 "lco.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__Cast_HeadVar1_4, transform_hlds__lco__Cast_HeadVar2_5);
#line 243 "lco.m"
      return;
    }
#line 243 "lco.m"
  }
#line 243 "lco.m"
}

#line 243 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0(
#line 243 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_1,
#line 243 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 243 "lco.m"
{
#line 4655 "transform_hlds.lco.c"
  {
#line 4657 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded = (transform_hlds__lco__HeadVar__2_1 == transform_hlds__lco__HeadVar__2_2);

#line 4660 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 4662 "transform_hlds.lco.c"
  }
#line 243 "lco.m"
}

#line 255 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____lco_info_0_0(
#line 255 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 255 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 255 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 255 "lco.m"
{
#line 255 "lco.m"
  {
#line 255 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 255 "lco.m"
    MR_Integer transform_hlds__lco__CastX_24 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 255 "lco.m"
    MR_Integer transform_hlds__lco__CastY_25 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 255 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_24 == transform_hlds__lco__CastY_25);
#line 255 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 4691 "transform_hlds.lco.c"
      *transform_hlds__lco__HeadVar__1_1 = (MR_Integer) 0;
#line 255 "lco.m"
    else
#line 255 "lco.m"
      {
#line 255 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 255 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 255 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));
#line 255 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 3)));
#line 255 "lco.m"
        MR_Word transform_hlds__lco__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 255 "lco.m"
        MR_Word transform_hlds__lco__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 255 "lco.m"
        MR_Word transform_hlds__lco__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 255 "lco.m"
        MR_Word transform_hlds__lco__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
#line 255 "lco.m"
        MR_Word transform_hlds__lco__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 255 "lco.m"
        MR_Word transform_hlds__lco__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 2)));
#line 255 "lco.m"
        MR_Word transform_hlds__lco__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 3)));
#line 255 "lco.m"
        MR_Word transform_hlds__lco__V_15_15 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 255 "lco.m"
        MR_Word transform_hlds__lco__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 255 "lco.m"
        MR_Word transform_hlds__lco__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 255 "lco.m"
        MR_Word transform_hlds__lco__V_18_18;

#line 255 "lco.m"
        {
#line 255 "lco.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__lco__V_18_18, transform_hlds__lco__V_4_4, transform_hlds__lco__V_11_11);
        }
#line 4733 "transform_hlds.lco.c"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_18_18 == (MR_Integer) 0);
#line 255 "lco.m"
        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 255 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 255 "lco.m"
          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_18_18;
#line 255 "lco.m"
        else
#line 255 "lco.m"
          {
#line 255 "lco.m"
            MR_Word transform_hlds__lco__V_19_19;

#line 255 "lco.m"
            {
#line 255 "lco.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[0], &transform_hlds__lco__V_19_19, ((MR_Box) (transform_hlds__lco__V_5_5)), ((MR_Box) (transform_hlds__lco__V_12_12)));
            }
#line 4753 "transform_hlds.lco.c"
            transform_hlds__lco__succeeded = (transform_hlds__lco__V_19_19 == (MR_Integer) 0);
#line 255 "lco.m"
            transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 255 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 255 "lco.m"
              *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_19_19;
#line 255 "lco.m"
            else
#line 255 "lco.m"
              {
#line 255 "lco.m"
                MR_Word transform_hlds__lco__V_20_20;

#line 255 "lco.m"
                {
#line 255 "lco.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[9], &transform_hlds__lco__V_20_20, ((MR_Box) (transform_hlds__lco__V_6_6)), ((MR_Box) (transform_hlds__lco__V_13_13)));
                }
#line 4773 "transform_hlds.lco.c"
                transform_hlds__lco__succeeded = (transform_hlds__lco__V_20_20 == (MR_Integer) 0);
#line 255 "lco.m"
                transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 255 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 255 "lco.m"
                  *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_20_20;
#line 255 "lco.m"
                else
#line 255 "lco.m"
                  {
#line 255 "lco.m"
                    MR_Word transform_hlds__lco__V_21_21;

#line 255 "lco.m"
                    {
#line 255 "lco.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &transform_hlds__lco__V_21_21, ((MR_Box) (transform_hlds__lco__V_7_7)), ((MR_Box) (transform_hlds__lco__V_14_14)));
                    }
#line 4793 "transform_hlds.lco.c"
                    transform_hlds__lco__succeeded = (transform_hlds__lco__V_21_21 == (MR_Integer) 0);
#line 255 "lco.m"
                    transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 255 "lco.m"
                    if (transform_hlds__lco__succeeded)
#line 255 "lco.m"
                      *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_21_21;
#line 255 "lco.m"
                    else
#line 255 "lco.m"
                      {
#line 255 "lco.m"
                        MR_Word transform_hlds__lco__V_22_22;
#line 255 "lco.m"
                        MR_Integer transform_hlds__lco__V_33_33 = (MR_Integer) transform_hlds__lco__V_8_8;
#line 255 "lco.m"
                        MR_Integer transform_hlds__lco__V_34_34 = (MR_Integer) transform_hlds__lco__V_15_15;

#line 255 "lco.m"
                        {
#line 255 "lco.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__lco__V_22_22, transform_hlds__lco__V_33_33, transform_hlds__lco__V_34_34);
                        }
#line 4817 "transform_hlds.lco.c"
                        transform_hlds__lco__succeeded = (transform_hlds__lco__V_22_22 == (MR_Integer) 0);
#line 255 "lco.m"
                        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 255 "lco.m"
                        if (transform_hlds__lco__succeeded)
#line 255 "lco.m"
                          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_22_22;
#line 255 "lco.m"
                        else
#line 255 "lco.m"
                          {
#line 255 "lco.m"
                            MR_Word transform_hlds__lco__V_23_23;
#line 255 "lco.m"
                            MR_Integer transform_hlds__lco__V_35_35 = (MR_Integer) transform_hlds__lco__V_9_9;
#line 255 "lco.m"
                            MR_Integer transform_hlds__lco__V_36_36 = (MR_Integer) transform_hlds__lco__V_16_16;

#line 255 "lco.m"
                            {
#line 255 "lco.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__lco__V_23_23, transform_hlds__lco__V_35_35, transform_hlds__lco__V_36_36);
                            }
#line 4841 "transform_hlds.lco.c"
                            transform_hlds__lco__succeeded = (transform_hlds__lco__V_23_23 == (MR_Integer) 0);
#line 255 "lco.m"
                            transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 255 "lco.m"
                            if (transform_hlds__lco__succeeded)
#line 255 "lco.m"
                              *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_23_23;
#line 255 "lco.m"
                            else
#line 255 "lco.m"
                              {
#line 255 "lco.m"
                                MR_Integer transform_hlds__lco__V_37_37 = (MR_Integer) transform_hlds__lco__V_10_10;
#line 255 "lco.m"
                                MR_Integer transform_hlds__lco__V_38_38 = (MR_Integer) transform_hlds__lco__V_17_17;

#line 255 "lco.m"
                                {
#line 255 "lco.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__V_37_37, transform_hlds__lco__V_38_38);
#line 255 "lco.m"
                                  return;
                                }
#line 255 "lco.m"
                              }
#line 255 "lco.m"
                          }
#line 255 "lco.m"
                      }
#line 255 "lco.m"
                  }
#line 255 "lco.m"
              }
#line 255 "lco.m"
          }
#line 255 "lco.m"
      }
#line 255 "lco.m"
  }
#line 255 "lco.m"
}

#line 255 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_info_0_0(
#line 255 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 255 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 255 "lco.m"
{
#line 255 "lco.m"
  {
#line 255 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 255 "lco.m"
    MR_Integer transform_hlds__lco__CastX_17 = (MR_Integer) transform_hlds__lco__HeadVar__1_1;
#line 255 "lco.m"
    MR_Integer transform_hlds__lco__CastY_18 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;

#line 255 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_17 == transform_hlds__lco__CastY_18);
#line 255 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 255 "lco.m"
      transform_hlds__lco__succeeded = MR_TRUE;
#line 255 "lco.m"
    else
#line 255 "lco.m"
      {
#line 255 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_20_20;
#line 255 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_21_21;
#line 255 "lco.m"
        MR_Word transform_hlds__lco__TypeCtorInfo_22_22;
#line 255 "lco.m"
        MR_Word transform_hlds__lco__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 255 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 255 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 2)));
#line 255 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 3)));
#line 255 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 255 "lco.m"
        MR_Word transform_hlds__lco__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 255 "lco.m"
        MR_Word transform_hlds__lco__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 255 "lco.m"
        MR_Word transform_hlds__lco__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 255 "lco.m"
        MR_Word transform_hlds__lco__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 255 "lco.m"
        MR_Word transform_hlds__lco__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));
#line 255 "lco.m"
        MR_Word transform_hlds__lco__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 3)));
#line 255 "lco.m"
        MR_Word transform_hlds__lco__V_14_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 255 "lco.m"
        MR_Word transform_hlds__lco__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 255 "lco.m"
        MR_Word transform_hlds__lco__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 4947 "transform_hlds.lco.c"
        {
#line 4949 "transform_hlds.lco.c"
          transform_hlds__lco__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__lco__V_3_3, transform_hlds__lco__V_10_10);
        }
#line 255 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 255 "lco.m"
          {
#line 4956 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_20_20 = (MR_Word) &transform_hlds__lco_scalar_common_2[0];
#line 4958 "transform_hlds.lco.c"
            {
#line 4960 "transform_hlds.lco.c"
              transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_20_20, ((MR_Box) (transform_hlds__lco__V_4_4)), ((MR_Box) (transform_hlds__lco__V_11_11)));
            }
#line 255 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 255 "lco.m"
              {
#line 4967 "transform_hlds.lco.c"
                transform_hlds__lco__TypeInfo_21_21 = (MR_Word) &transform_hlds__lco_scalar_common_1[9];
#line 4969 "transform_hlds.lco.c"
                {
#line 4971 "transform_hlds.lco.c"
                  transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_21_21, ((MR_Box) (transform_hlds__lco__V_5_5)), ((MR_Box) (transform_hlds__lco__V_12_12)));
                }
#line 255 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 255 "lco.m"
                  {
#line 4978 "transform_hlds.lco.c"
                    transform_hlds__lco__TypeCtorInfo_22_22 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 4980 "transform_hlds.lco.c"
                    {
#line 4982 "transform_hlds.lco.c"
                      transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeCtorInfo_22_22, ((MR_Box) (transform_hlds__lco__V_6_6)), ((MR_Box) (transform_hlds__lco__V_13_13)));
                    }
#line 255 "lco.m"
                    if (transform_hlds__lco__succeeded)
#line 255 "lco.m"
                      {
#line 4989 "transform_hlds.lco.c"
                        transform_hlds__lco__succeeded = (transform_hlds__lco__V_7_7 == transform_hlds__lco__V_14_14);
#line 255 "lco.m"
                        if (transform_hlds__lco__succeeded)
#line 255 "lco.m"
                          {
#line 4995 "transform_hlds.lco.c"
                            transform_hlds__lco__succeeded = (transform_hlds__lco__V_8_8 == transform_hlds__lco__V_15_15);
#line 255 "lco.m"
                            if (transform_hlds__lco__succeeded)
#line 4999 "transform_hlds.lco.c"
                              transform_hlds__lco__succeeded = (transform_hlds__lco__V_9_9 == transform_hlds__lco__V_16_16);
#line 255 "lco.m"
                          }
#line 255 "lco.m"
                      }
#line 255 "lco.m"
                  }
#line 255 "lco.m"
              }
#line 255 "lco.m"
          }
#line 255 "lco.m"
      }
#line 255 "lco.m"
    return transform_hlds__lco__succeeded;
#line 255 "lco.m"
  }
#line 255 "lco.m"
}

#line 266 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____lco_const_info_0_0(
#line 266 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 266 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 266 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 266 "lco.m"
{
#line 266 "lco.m"
  {
#line 266 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 266 "lco.m"
    MR_Integer transform_hlds__lco__CastX_27 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 266 "lco.m"
    MR_Integer transform_hlds__lco__CastY_28 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 266 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_27 == transform_hlds__lco__CastY_28);
#line 266 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 5044 "transform_hlds.lco.c"
      *transform_hlds__lco__HeadVar__1_1 = (MR_Integer) 0;
#line 266 "lco.m"
    else
#line 266 "lco.m"
      {
#line 266 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 266 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 266 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));
#line 266 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 3)));
#line 266 "lco.m"
        MR_Word transform_hlds__lco__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 4)));
#line 266 "lco.m"
        MR_Word transform_hlds__lco__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 5)));
#line 266 "lco.m"
        MR_Word transform_hlds__lco__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 6)));
#line 266 "lco.m"
        MR_Word transform_hlds__lco__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 7)));
#line 266 "lco.m"
        MR_Word transform_hlds__lco__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
#line 266 "lco.m"
        MR_Word transform_hlds__lco__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 266 "lco.m"
        MR_Word transform_hlds__lco__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 2)));
#line 266 "lco.m"
        MR_Word transform_hlds__lco__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 3)));
#line 266 "lco.m"
        MR_Word transform_hlds__lco__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 4)));
#line 266 "lco.m"
        MR_Word transform_hlds__lco__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 5)));
#line 266 "lco.m"
        MR_Word transform_hlds__lco__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 6)));
#line 266 "lco.m"
        MR_Word transform_hlds__lco__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 7)));
#line 266 "lco.m"
        MR_Word transform_hlds__lco__V_20_20;

#line 266 "lco.m"
        {
#line 266 "lco.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[0], &transform_hlds__lco__V_20_20, ((MR_Box) (transform_hlds__lco__V_4_4)), ((MR_Box) (transform_hlds__lco__V_12_12)));
        }
#line 5090 "transform_hlds.lco.c"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_20_20 == (MR_Integer) 0);
#line 266 "lco.m"
        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 266 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 266 "lco.m"
          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_20_20;
#line 266 "lco.m"
        else
#line 266 "lco.m"
          {
#line 266 "lco.m"
            MR_Word transform_hlds__lco__V_21_21;

#line 266 "lco.m"
            {
#line 266 "lco.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[8], &transform_hlds__lco__V_21_21, ((MR_Box) (transform_hlds__lco__V_5_5)), ((MR_Box) (transform_hlds__lco__V_13_13)));
            }
#line 5110 "transform_hlds.lco.c"
            transform_hlds__lco__succeeded = (transform_hlds__lco__V_21_21 == (MR_Integer) 0);
#line 266 "lco.m"
            transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 266 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 266 "lco.m"
              *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_21_21;
#line 266 "lco.m"
            else
#line 266 "lco.m"
              {
#line 266 "lco.m"
                MR_Word transform_hlds__lco__V_22_22;

#line 266 "lco.m"
                {
#line 266 "lco.m"
                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__lco__V_22_22, transform_hlds__lco__V_6_6, transform_hlds__lco__V_14_14);
                }
#line 5130 "transform_hlds.lco.c"
                transform_hlds__lco__succeeded = (transform_hlds__lco__V_22_22 == (MR_Integer) 0);
#line 266 "lco.m"
                transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 266 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 266 "lco.m"
                  *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_22_22;
#line 266 "lco.m"
                else
#line 266 "lco.m"
                  {
#line 266 "lco.m"
                    MR_Word transform_hlds__lco__V_23_23;

#line 266 "lco.m"
                    {
#line 266 "lco.m"
                      hlds__hlds_pred____Compare____pred_info_0_0(&transform_hlds__lco__V_23_23, transform_hlds__lco__V_7_7, transform_hlds__lco__V_15_15);
                    }
#line 5150 "transform_hlds.lco.c"
                    transform_hlds__lco__succeeded = (transform_hlds__lco__V_23_23 == (MR_Integer) 0);
#line 266 "lco.m"
                    transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 266 "lco.m"
                    if (transform_hlds__lco__succeeded)
#line 266 "lco.m"
                      *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_23_23;
#line 266 "lco.m"
                    else
#line 266 "lco.m"
                      {
#line 266 "lco.m"
                        MR_Word transform_hlds__lco__V_24_24;

#line 266 "lco.m"
                        {
#line 266 "lco.m"
                          hlds__hlds_pred____Compare____proc_info_0_0(&transform_hlds__lco__V_24_24, transform_hlds__lco__V_8_8, transform_hlds__lco__V_16_16);
                        }
#line 5170 "transform_hlds.lco.c"
                        transform_hlds__lco__succeeded = (transform_hlds__lco__V_24_24 == (MR_Integer) 0);
#line 266 "lco.m"
                        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 266 "lco.m"
                        if (transform_hlds__lco__succeeded)
#line 266 "lco.m"
                          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_24_24;
#line 266 "lco.m"
                        else
#line 266 "lco.m"
                          {
#line 266 "lco.m"
                            MR_Word transform_hlds__lco__V_25_25;

#line 266 "lco.m"
                            {
#line 266 "lco.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[6], &transform_hlds__lco__V_25_25, ((MR_Box) (transform_hlds__lco__V_9_9)), ((MR_Box) (transform_hlds__lco__V_17_17)));
                            }
#line 5190 "transform_hlds.lco.c"
                            transform_hlds__lco__succeeded = (transform_hlds__lco__V_25_25 == (MR_Integer) 0);
#line 266 "lco.m"
                            transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 266 "lco.m"
                            if (transform_hlds__lco__succeeded)
#line 266 "lco.m"
                              *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_25_25;
#line 266 "lco.m"
                            else
#line 266 "lco.m"
                              {
#line 266 "lco.m"
                                MR_Word transform_hlds__lco__V_26_26;
#line 266 "lco.m"
                                MR_Integer transform_hlds__lco__V_37_37 = (MR_Integer) transform_hlds__lco__V_10_10;
#line 266 "lco.m"
                                MR_Integer transform_hlds__lco__V_38_38 = (MR_Integer) transform_hlds__lco__V_18_18;

#line 266 "lco.m"
                                {
#line 266 "lco.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__lco__V_26_26, transform_hlds__lco__V_37_37, transform_hlds__lco__V_38_38);
                                }
#line 5214 "transform_hlds.lco.c"
                                transform_hlds__lco__succeeded = (transform_hlds__lco__V_26_26 == (MR_Integer) 0);
#line 266 "lco.m"
                                transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 266 "lco.m"
                                if (transform_hlds__lco__succeeded)
#line 266 "lco.m"
                                  *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_26_26;
#line 266 "lco.m"
                                else
#line 266 "lco.m"
                                  {
#line 266 "lco.m"
                                    MR_Integer transform_hlds__lco__V_39_39 = (MR_Integer) transform_hlds__lco__V_11_11;
#line 266 "lco.m"
                                    MR_Integer transform_hlds__lco__V_40_40 = (MR_Integer) transform_hlds__lco__V_19_19;

#line 266 "lco.m"
                                    {
#line 266 "lco.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__V_39_39, transform_hlds__lco__V_40_40);
#line 266 "lco.m"
                                      return;
                                    }
#line 266 "lco.m"
                                  }
#line 266 "lco.m"
                              }
#line 266 "lco.m"
                          }
#line 266 "lco.m"
                      }
#line 266 "lco.m"
                  }
#line 266 "lco.m"
              }
#line 266 "lco.m"
          }
#line 266 "lco.m"
      }
#line 266 "lco.m"
  }
#line 266 "lco.m"
}

#line 266 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_const_info_0_0(
#line 266 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 266 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 266 "lco.m"
{
#line 266 "lco.m"
  {
#line 266 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 266 "lco.m"
    MR_Integer transform_hlds__lco__CastX_19 = (MR_Integer) transform_hlds__lco__HeadVar__1_1;
#line 266 "lco.m"
    MR_Integer transform_hlds__lco__CastY_20 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;

#line 266 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_19 == transform_hlds__lco__CastY_20);
#line 266 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 266 "lco.m"
      transform_hlds__lco__succeeded = MR_TRUE;
#line 266 "lco.m"
    else
#line 266 "lco.m"
      {
#line 266 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_22_22;
#line 266 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_26_26;
#line 266 "lco.m"
        MR_Word transform_hlds__lco__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 266 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 266 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 2)));
#line 266 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 3)));
#line 266 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 4)));
#line 266 "lco.m"
        MR_Word transform_hlds__lco__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 5)));
#line 266 "lco.m"
        MR_Word transform_hlds__lco__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 6)));
#line 266 "lco.m"
        MR_Word transform_hlds__lco__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 7)));
#line 266 "lco.m"
        MR_Word transform_hlds__lco__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 266 "lco.m"
        MR_Word transform_hlds__lco__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 266 "lco.m"
        MR_Word transform_hlds__lco__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));
#line 266 "lco.m"
        MR_Word transform_hlds__lco__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 3)));
#line 266 "lco.m"
        MR_Word transform_hlds__lco__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 4)));
#line 266 "lco.m"
        MR_Word transform_hlds__lco__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 5)));
#line 266 "lco.m"
        MR_Word transform_hlds__lco__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 6)));
#line 266 "lco.m"
        MR_Word transform_hlds__lco__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 7)));

#line 5324 "transform_hlds.lco.c"
        {
#line 5326 "transform_hlds.lco.c"
          transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[0], ((MR_Box) (transform_hlds__lco__V_3_3)), ((MR_Box) (transform_hlds__lco__V_11_11)));
        }
#line 266 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 266 "lco.m"
          {
#line 5333 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_22_22 = (MR_Word) &transform_hlds__lco_scalar_common_1[8];
#line 5335 "transform_hlds.lco.c"
            {
#line 5337 "transform_hlds.lco.c"
              transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_22_22, ((MR_Box) (transform_hlds__lco__V_4_4)), ((MR_Box) (transform_hlds__lco__V_12_12)));
            }
#line 266 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 266 "lco.m"
              {
#line 5344 "transform_hlds.lco.c"
                {
#line 5346 "transform_hlds.lco.c"
                  transform_hlds__lco__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__lco__V_5_5, transform_hlds__lco__V_13_13);
                }
#line 266 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 266 "lco.m"
                  {
#line 5353 "transform_hlds.lco.c"
                    {
#line 5355 "transform_hlds.lco.c"
                      transform_hlds__lco__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(transform_hlds__lco__V_6_6, transform_hlds__lco__V_14_14);
                    }
#line 266 "lco.m"
                    if (transform_hlds__lco__succeeded)
#line 266 "lco.m"
                      {
#line 5362 "transform_hlds.lco.c"
                        {
#line 5364 "transform_hlds.lco.c"
                          transform_hlds__lco__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(transform_hlds__lco__V_7_7, transform_hlds__lco__V_15_15);
                        }
#line 266 "lco.m"
                        if (transform_hlds__lco__succeeded)
#line 266 "lco.m"
                          {
#line 5371 "transform_hlds.lco.c"
                            transform_hlds__lco__TypeInfo_26_26 = (MR_Word) &transform_hlds__lco_scalar_common_1[6];
#line 5373 "transform_hlds.lco.c"
                            {
#line 5375 "transform_hlds.lco.c"
                              transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_26_26, ((MR_Box) (transform_hlds__lco__V_8_8)), ((MR_Box) (transform_hlds__lco__V_16_16)));
                            }
#line 266 "lco.m"
                            if (transform_hlds__lco__succeeded)
#line 266 "lco.m"
                              {
#line 5382 "transform_hlds.lco.c"
                                transform_hlds__lco__succeeded = (transform_hlds__lco__V_9_9 == transform_hlds__lco__V_17_17);
#line 266 "lco.m"
                                if (transform_hlds__lco__succeeded)
#line 5386 "transform_hlds.lco.c"
                                  transform_hlds__lco__succeeded = (transform_hlds__lco__V_10_10 == transform_hlds__lco__V_18_18);
#line 266 "lco.m"
                              }
#line 266 "lco.m"
                          }
#line 266 "lco.m"
                      }
#line 266 "lco.m"
                  }
#line 266 "lco.m"
              }
#line 266 "lco.m"
          }
#line 266 "lco.m"
      }
#line 266 "lco.m"
    return transform_hlds__lco__succeeded;
#line 266 "lco.m"
  }
#line 266 "lco.m"
}

#line 234 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____field_id_0_0(
#line 234 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 234 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 234 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 234 "lco.m"
{
#line 234 "lco.m"
  {
#line 234 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 234 "lco.m"
    MR_Integer transform_hlds__lco__CastX_12 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 234 "lco.m"
    MR_Integer transform_hlds__lco__CastY_13 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 234 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_12 == transform_hlds__lco__CastY_13);
#line 234 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 5433 "transform_hlds.lco.c"
      *transform_hlds__lco__HeadVar__1_1 = (MR_Integer) 0;
#line 234 "lco.m"
    else
#line 234 "lco.m"
      {
#line 234 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 234 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 234 "lco.m"
        MR_Integer transform_hlds__lco__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));
#line 234 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
#line 234 "lco.m"
        MR_Word transform_hlds__lco__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 234 "lco.m"
        MR_Integer transform_hlds__lco__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 2)));
#line 234 "lco.m"
        MR_Word transform_hlds__lco__V_10_10;

#line 234 "lco.m"
        {
#line 234 "lco.m"
          parse_tree__prog_data____Compare____mer_type_0_0(&transform_hlds__lco__V_10_10, transform_hlds__lco__V_4_4, transform_hlds__lco__V_7_7);
        }
#line 5459 "transform_hlds.lco.c"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_10_10 == (MR_Integer) 0);
#line 234 "lco.m"
        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 234 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 234 "lco.m"
          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_10_10;
#line 234 "lco.m"
        else
#line 234 "lco.m"
          {
#line 234 "lco.m"
            MR_Word transform_hlds__lco__V_11_11;

#line 234 "lco.m"
            {
#line 234 "lco.m"
              parse_tree__prog_data____Compare____cons_id_0_0(&transform_hlds__lco__V_11_11, transform_hlds__lco__V_5_5, transform_hlds__lco__V_8_8);
            }
#line 5479 "transform_hlds.lco.c"
            transform_hlds__lco__succeeded = (transform_hlds__lco__V_11_11 == (MR_Integer) 0);
#line 234 "lco.m"
            transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 234 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 234 "lco.m"
              *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_11_11;
#line 234 "lco.m"
            else
#line 234 "lco.m"
              {
#line 234 "lco.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__V_6_6, transform_hlds__lco__V_9_9);
#line 234 "lco.m"
                return;
              }
#line 234 "lco.m"
          }
#line 234 "lco.m"
      }
#line 234 "lco.m"
  }
#line 234 "lco.m"
}

#line 234 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____field_id_0_0(
#line 234 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 234 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 234 "lco.m"
{
#line 234 "lco.m"
  {
#line 234 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 234 "lco.m"
    MR_Integer transform_hlds__lco__CastX_9 = (MR_Integer) transform_hlds__lco__HeadVar__1_1;
#line 234 "lco.m"
    MR_Integer transform_hlds__lco__CastY_10 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;

#line 234 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_9 == transform_hlds__lco__CastY_10);
#line 234 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 234 "lco.m"
      transform_hlds__lco__succeeded = MR_TRUE;
#line 234 "lco.m"
    else
#line 234 "lco.m"
      {
#line 234 "lco.m"
        MR_Word transform_hlds__lco__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 234 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 234 "lco.m"
        MR_Integer transform_hlds__lco__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 2)));
#line 234 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 234 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 234 "lco.m"
        MR_Integer transform_hlds__lco__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));

#line 5546 "transform_hlds.lco.c"
        {
#line 5548 "transform_hlds.lco.c"
          transform_hlds__lco__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__lco__V_3_3, transform_hlds__lco__V_6_6);
        }
#line 234 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 234 "lco.m"
          {
#line 5555 "transform_hlds.lco.c"
            {
#line 5557 "transform_hlds.lco.c"
              transform_hlds__lco__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__lco__V_4_4, transform_hlds__lco__V_7_7);
            }
#line 234 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 5562 "transform_hlds.lco.c"
              transform_hlds__lco__succeeded = (transform_hlds__lco__V_5_5 == transform_hlds__lco__V_8_8);
#line 234 "lco.m"
          }
#line 234 "lco.m"
      }
#line 234 "lco.m"
    return transform_hlds__lco__succeeded;
#line 234 "lco.m"
  }
#line 234 "lco.m"
}

#line 251 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____allow_float_addr_0_0(
#line 251 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 251 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 251 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 251 "lco.m"
{
#line 251 "lco.m"
  {
#line 251 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 251 "lco.m"
    MR_Integer transform_hlds__lco__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 251 "lco.m"
    MR_Integer transform_hlds__lco__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 251 "lco.m"
    {
#line 251 "lco.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__Cast_HeadVar1_4, transform_hlds__lco__Cast_HeadVar2_5);
#line 251 "lco.m"
      return;
    }
#line 251 "lco.m"
  }
#line 251 "lco.m"
}

#line 251 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____allow_float_addr_0_0(
#line 251 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_1,
#line 251 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 251 "lco.m"
{
#line 5616 "transform_hlds.lco.c"
  {
#line 5618 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded = (transform_hlds__lco__HeadVar__2_1 == transform_hlds__lco__HeadVar__2_2);

#line 5621 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 5623 "transform_hlds.lco.c"
  }
#line 251 "lco.m"
}

#line 1700 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_unification_args_8_p_0(
#line 1700 "lco.m"
  MR_Word transform_hlds__lco__GroundVar_9,
#line 1700 "lco.m"
  MR_Integer transform_hlds__lco__TargetArgNum_10,
#line 1700 "lco.m"
  MR_Integer transform_hlds__lco__CurArgNum_11,
#line 1700 "lco.m"
  MR_Word transform_hlds__lco__ArgTypes_12,
#line 1700 "lco.m"
  MR_Word * transform_hlds__lco__ArgVars_13,
#line 1700 "lco.m"
  MR_Word * transform_hlds__lco__ArgModes_14,
#line 1700 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22,
#line 1700 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_23)
#line 1700 "lco.m"
{
#line 1707 "lco.m"
  {
#line 1707 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1707 "lco.m"
    if ((transform_hlds__lco__ArgTypes_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1707 "lco.m"
      {
#line 1708 "lco.m"
        *transform_hlds__lco__ArgVars_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1709 "lco.m"
        *transform_hlds__lco__ArgModes_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1709 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_23 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22;
#line 1707 "lco.m"
      }
#line 1707 "lco.m"
    else
#line 1711 "lco.m"
      {
#line 1711 "lco.m"
        MR_Word transform_hlds__lco__ArgType_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__ArgTypes_12, (MR_Integer) 0)));
#line 1711 "lco.m"
        MR_Word transform_hlds__lco__ArgTypesTail_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__ArgTypes_12, (MR_Integer) 1)));
#line 1711 "lco.m"
        MR_Word transform_hlds__lco__ArgVarsTail_18;
#line 1711 "lco.m"
        MR_Word transform_hlds__lco__ArgModesTail_19;
#line 1711 "lco.m"
        MR_Word transform_hlds__lco__Var_20;
#line 1711 "lco.m"
        MR_Word transform_hlds__lco__UniMode_21;
#line 1711 "lco.m"
        MR_Integer transform_hlds__lco__V_24_24 = (transform_hlds__lco__CurArgNum_11 + (MR_Integer) 1);
#line 1711 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_25_25;

#line 1712 "lco.m"
        {
#line 1712 "lco.m"
          transform_hlds__lco__make_unification_args_8_p_0(transform_hlds__lco__GroundVar_9, transform_hlds__lco__TargetArgNum_10, transform_hlds__lco__V_24_24, transform_hlds__lco__ArgTypesTail_17, &transform_hlds__lco__ArgVarsTail_18, &transform_hlds__lco__ArgModesTail_19, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_25_25);
        }
#line 1725 "lco.m"
        transform_hlds__lco__succeeded = (transform_hlds__lco__CurArgNum_11 == transform_hlds__lco__TargetArgNum_10);
#line 1728 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1726 "lco.m"
          {
#line 1726 "lco.m"
            MR_Word transform_hlds__lco__V_37_37;
#line 1726 "lco.m"
            MR_Word transform_hlds__lco__V_38_38;
#line 1726 "lco.m"
            MR_Word transform_hlds__lco__V_39_39;
#line 1726 "lco.m"
            MR_Word transform_hlds__lco__V_40_40;
#line 1726 "lco.m"
            MR_Word transform_hlds__lco__V_41_41;
#line 1726 "lco.m"
            MR_Word transform_hlds__lco__V_42_42;

#line 1726 "lco.m"
            transform_hlds__lco__Var_20 = transform_hlds__lco__GroundVar_9;
#line 1727 "lco.m"
            {
#line 1727 "lco.m"
              transform_hlds__lco__V_38_38 = parse_tree__prog_mode__free_inst_0_f_0();
            }
#line 1727 "lco.m"
            {
#line 1727 "lco.m"
              transform_hlds__lco__V_39_39 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
#line 1727 "lco.m"
            {
#line 1727 "lco.m"
              transform_hlds__lco__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1727 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_37_37, 0) = ((MR_Box) (transform_hlds__lco__V_38_38));
#line 1727 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_37_37, 1) = ((MR_Box) (transform_hlds__lco__V_39_39));
#line 1727 "lco.m"
            }
#line 1727 "lco.m"
            {
#line 1727 "lco.m"
              transform_hlds__lco__V_41_41 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
#line 1727 "lco.m"
            {
#line 1727 "lco.m"
              transform_hlds__lco__V_42_42 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
#line 1727 "lco.m"
            {
#line 1727 "lco.m"
              transform_hlds__lco__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1727 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_40_40, 0) = ((MR_Box) (transform_hlds__lco__V_41_41));
#line 1727 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_40_40, 1) = ((MR_Box) (transform_hlds__lco__V_42_42));
#line 1727 "lco.m"
            }
#line 1727 "lco.m"
            {
#line 1727 "lco.m"
              transform_hlds__lco__UniMode_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1727 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_21, 0) = ((MR_Box) (transform_hlds__lco__V_37_37));
#line 1727 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_21, 1) = ((MR_Box) (transform_hlds__lco__V_40_40));
#line 1727 "lco.m"
            }
#line 1727 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_ProcInfo_23 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_25_25;
#line 1726 "lco.m"
          }
#line 1728 "lco.m"
        else
#line 1730 "lco.m"
          {
#line 1730 "lco.m"
            MR_Word transform_hlds__lco__V_45_45;
#line 1730 "lco.m"
            MR_Word transform_hlds__lco__V_46_46;
#line 1730 "lco.m"
            MR_Word transform_hlds__lco__V_47_47;
#line 1730 "lco.m"
            MR_Word transform_hlds__lco__V_48_48;
#line 1730 "lco.m"
            MR_Word transform_hlds__lco__V_49_49;
#line 1730 "lco.m"
            MR_Word transform_hlds__lco__V_50_50;

#line 1730 "lco.m"
            {
#line 1730 "lco.m"
              hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__lco__ArgType_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__lco__Var_20, transform_hlds__lco__STATE_VARIABLE_ProcInfo_25_25, transform_hlds__lco__STATE_VARIABLE_ProcInfo_23);
            }
#line 1731 "lco.m"
            {
#line 1731 "lco.m"
              transform_hlds__lco__V_46_46 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
#line 1731 "lco.m"
            {
#line 1731 "lco.m"
              transform_hlds__lco__V_47_47 = parse_tree__prog_mode__free_inst_0_f_0();
            }
#line 1731 "lco.m"
            {
#line 1731 "lco.m"
              transform_hlds__lco__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1731 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_45_45, 0) = ((MR_Box) (transform_hlds__lco__V_46_46));
#line 1731 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_45_45, 1) = ((MR_Box) (transform_hlds__lco__V_47_47));
#line 1731 "lco.m"
            }
#line 1731 "lco.m"
            {
#line 1731 "lco.m"
              transform_hlds__lco__V_49_49 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
#line 1731 "lco.m"
            {
#line 1731 "lco.m"
              transform_hlds__lco__V_50_50 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
#line 1731 "lco.m"
            {
#line 1731 "lco.m"
              transform_hlds__lco__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1731 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_48_48, 0) = ((MR_Box) (transform_hlds__lco__V_49_49));
#line 1731 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_48_48, 1) = ((MR_Box) (transform_hlds__lco__V_50_50));
#line 1731 "lco.m"
            }
#line 1731 "lco.m"
            {
#line 1731 "lco.m"
              transform_hlds__lco__UniMode_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1731 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_21, 0) = ((MR_Box) (transform_hlds__lco__V_45_45));
#line 1731 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_21, 1) = ((MR_Box) (transform_hlds__lco__V_48_48));
#line 1731 "lco.m"
            }
#line 1730 "lco.m"
          }
#line 1716 "lco.m"
        {
#line 1716 "lco.m"
          MR_Word base;
#line 1716 "lco.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1716 "lco.m"
          *transform_hlds__lco__ArgVars_13 = base;
#line 1716 "lco.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Var_20));
#line 1716 "lco.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__ArgVarsTail_18));
#line 1716 "lco.m"
        }
#line 1717 "lco.m"
        {
#line 1717 "lco.m"
          MR_Word base;
#line 1717 "lco.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1717 "lco.m"
          *transform_hlds__lco__ArgModes_14 = base;
#line 1717 "lco.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__UniMode_21));
#line 1717 "lco.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__ArgModesTail_19));
#line 1717 "lco.m"
        }
#line 1711 "lco.m"
      }
#line 1707 "lco.m"
  }
#line 1700 "lco.m"
}

#line 1657 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_store_goal_6_p_0(
#line 1657 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_7,
#line 1657 "lco.m"
  MR_Word transform_hlds__lco__InstMap_8,
#line 1657 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 1657 "lco.m"
  MR_Word * transform_hlds__lco__Goal_11,
#line 1657 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_31,
#line 1657 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_32)
#line 1657 "lco.m"
{
#line 1662 "lco.m"
  {
#line 1662 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1662 "lco.m"
    MR_Word transform_hlds__lco__GroundVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
#line 1662 "lco.m"
    MR_Word transform_hlds__lco__StoreTarget_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 1662 "lco.m"
    MR_Word transform_hlds__lco__AddrVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__StoreTarget_10, (MR_Integer) 0)));
#line 1662 "lco.m"
    MR_Word transform_hlds__lco__MaybeFieldId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__StoreTarget_10, (MR_Integer) 1)));

#line 1673 "lco.m"
    if ((transform_hlds__lco__MaybeFieldId_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1666 "lco.m"
      {
#line 1666 "lco.m"
        MR_Word transform_hlds__lco__V_49_49;
#line 1666 "lco.m"
        MR_Word transform_hlds__lco__V_55_55;
#line 1666 "lco.m"
        MR_Word transform_hlds__lco__V_57_57;
#line 1666 "lco.m"
        MR_Word transform_hlds__lco__V_58_58;
#line 1666 "lco.m"
        MR_Word transform_hlds__lco__V_59_59;

#line 1667 "lco.m"
        {
#line 1667 "lco.m"
          transform_hlds__lco__V_49_49 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
        }
#line 1670 "lco.m"
        {
#line 1670 "lco.m"
          transform_hlds__lco__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1670 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_59_59, 0) = ((MR_Box) (transform_hlds__lco__GroundVar_9));
#line 1670 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1670 "lco.m"
        }
#line 1670 "lco.m"
        {
#line 1670 "lco.m"
          transform_hlds__lco__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1670 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_55_55, 0) = ((MR_Box) (transform_hlds__lco__AddrVar_13));
#line 1670 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_55_55, 1) = ((MR_Box) (transform_hlds__lco__V_59_59));
#line 1670 "lco.m"
        }
#line 1671 "lco.m"
        {
#line 1671 "lco.m"
          transform_hlds__lco__V_57_57 = hlds__instmap__instmap_delta_bind_vars_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 1671 "lco.m"
        {
#line 1671 "lco.m"
          transform_hlds__lco__V_58_58 = mercury__term__context_init_0_f_0();
        }
#line 1667 "lco.m"
        {
#line 1667 "lco.m"
          hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__lco__V_49_49, (MR_String) "store_at_ref_impure", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__lco__V_55_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__lco__V_57_57, transform_hlds__lco__ModuleInfo_7, transform_hlds__lco__V_58_58, transform_hlds__lco__Goal_11);
        }
#line 1667 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_32 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_31;
#line 1666 "lco.m"
      }
#line 1673 "lco.m"
    else
#line 1675 "lco.m"
      {
#line 1675 "lco.m"
        MR_Word transform_hlds__lco__AddrVarType_15;
#line 1675 "lco.m"
        MR_Word transform_hlds__lco__ConsId_16;
#line 1675 "lco.m"
        MR_Integer transform_hlds__lco__ArgNum_17;
#line 1675 "lco.m"
        MR_Word transform_hlds__lco__ArgTypes_18;
#line 1675 "lco.m"
        MR_Word transform_hlds__lco__ArgVars_19;
#line 1675 "lco.m"
        MR_Word transform_hlds__lco__ArgModes_20;
#line 1675 "lco.m"
        MR_Word transform_hlds__lco__RHS_21;
#line 1675 "lco.m"
        MR_Word transform_hlds__lco__AddrVarInst0_22;
#line 1675 "lco.m"
        MR_Word transform_hlds__lco__AddrVarInst_23;
#line 1675 "lco.m"
        MR_Word transform_hlds__lco__UniMode_24;
#line 1675 "lco.m"
        MR_Word transform_hlds__lco__Unification_25;
#line 1675 "lco.m"
        MR_Word transform_hlds__lco__GoalExpr_27;
#line 1675 "lco.m"
        MR_Word transform_hlds__lco__GoalInfo0_28;
#line 1675 "lco.m"
        MR_Word transform_hlds__lco__GoalInfo1_29;
#line 1675 "lco.m"
        MR_Word transform_hlds__lco__GoalInfo_30;
#line 1675 "lco.m"
        MR_Word transform_hlds__lco__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__MaybeFieldId_14, (MR_Integer) 0)));
#line 1675 "lco.m"
        MR_Word transform_hlds__lco__V_37_37;
#line 1675 "lco.m"
        MR_Word transform_hlds__lco__V_38_38;
#line 1675 "lco.m"
        MR_Word transform_hlds__lco__V_39_39;
#line 1675 "lco.m"
        MR_Word transform_hlds__lco__V_40_40;
#line 1675 "lco.m"
        MR_Word transform_hlds__lco__V_41_41;
#line 1675 "lco.m"
        MR_Word transform_hlds__lco__V_48_48;

#line 1675 "lco.m"
        transform_hlds__lco__AddrVarType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_33_33, (MR_Integer) 0)));
#line 1675 "lco.m"
        transform_hlds__lco__ConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_33_33, (MR_Integer) 1)));
#line 1675 "lco.m"
        transform_hlds__lco__ArgNum_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_33_33, (MR_Integer) 2)));
#line 1676 "lco.m"
        {
#line 1676 "lco.m"
          check_hlds__type_util__get_cons_id_arg_types_4_p_0(transform_hlds__lco__ModuleInfo_7, transform_hlds__lco__AddrVarType_15, transform_hlds__lco__ConsId_16, &transform_hlds__lco__ArgTypes_18);
        }
#line 1677 "lco.m"
        {
#line 1677 "lco.m"
          transform_hlds__lco__make_unification_args_8_p_0(transform_hlds__lco__GroundVar_9, transform_hlds__lco__ArgNum_17, (MR_Integer) 1, transform_hlds__lco__ArgTypes_18, &transform_hlds__lco__ArgVars_19, &transform_hlds__lco__ArgModes_20, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_31, transform_hlds__lco__STATE_VARIABLE_ProcInfo_32);
        }
#line 1680 "lco.m"
        {
#line 1680 "lco.m"
          transform_hlds__lco__RHS_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1680 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS_21, 0) = ((MR_Box) (transform_hlds__lco__ConsId_16));
#line 1680 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS_21, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1680 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS_21, 2) = ((MR_Box) (transform_hlds__lco__ArgVars_19));
#line 1680 "lco.m"
        }
#line 1682 "lco.m"
        {
#line 1682 "lco.m"
          hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__lco__InstMap_8, transform_hlds__lco__AddrVar_13, &transform_hlds__lco__AddrVarInst0_22);
        }
#line 1683 "lco.m"
        {
#line 1683 "lco.m"
          check_hlds__inst_match__inst_expand_3_p_0(transform_hlds__lco__ModuleInfo_7, transform_hlds__lco__AddrVarInst0_22, &transform_hlds__lco__AddrVarInst_23);
        }
#line 1684 "lco.m"
        {
#line 1684 "lco.m"
          transform_hlds__lco__V_38_38 = parse_tree__prog_mode__ground_inst_0_f_0();
        }
#line 1684 "lco.m"
        {
#line 1684 "lco.m"
          transform_hlds__lco__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1684 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_37_37, 0) = ((MR_Box) (transform_hlds__lco__AddrVarInst_23));
#line 1684 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_37_37, 1) = ((MR_Box) (transform_hlds__lco__V_38_38));
#line 1684 "lco.m"
        }
#line 1684 "lco.m"
        {
#line 1684 "lco.m"
          transform_hlds__lco__V_40_40 = parse_tree__prog_mode__ground_inst_0_f_0();
        }
#line 1684 "lco.m"
        {
#line 1684 "lco.m"
          transform_hlds__lco__V_41_41 = parse_tree__prog_mode__ground_inst_0_f_0();
        }
#line 1684 "lco.m"
        {
#line 1684 "lco.m"
          transform_hlds__lco__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1684 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_39_39, 0) = ((MR_Box) (transform_hlds__lco__V_40_40));
#line 1684 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_39_39, 1) = ((MR_Box) (transform_hlds__lco__V_41_41));
#line 1684 "lco.m"
        }
#line 1684 "lco.m"
        {
#line 1684 "lco.m"
          transform_hlds__lco__UniMode_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1684 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_24, 0) = ((MR_Box) (transform_hlds__lco__V_37_37));
#line 1684 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_24, 1) = ((MR_Box) (transform_hlds__lco__V_39_39));
#line 1684 "lco.m"
        }
#line 1686 "lco.m"
        {
#line 1686 "lco.m"
          transform_hlds__lco__Unification_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1686 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Unification_25, 0) = ((MR_Box) (transform_hlds__lco__AddrVar_13));
#line 1686 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Unification_25, 1) = ((MR_Box) (transform_hlds__lco__ConsId_16));
#line 1686 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Unification_25, 2) = ((MR_Box) (transform_hlds__lco__ArgVars_19));
#line 1686 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Unification_25, 3) = ((MR_Box) (transform_hlds__lco__ArgModes_20));
#line 1686 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Unification_25, 4) = ((MR_Box) ((MR_Integer) 1));
#line 1686 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Unification_25, 5) = ((MR_Box) ((MR_Integer) 1));
#line 1686 "lco.m"
        }
#line 1690 "lco.m"
        {
#line 1690 "lco.m"
          transform_hlds__lco__GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1690 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_27, 0) = ((MR_Box) (transform_hlds__lco__AddrVar_13));
#line 1690 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_27, 1) = ((MR_Box) (transform_hlds__lco__RHS_21));
#line 1690 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_27, 2) = ((MR_Box) (transform_hlds__lco__UniMode_24));
#line 1690 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_27, 3) = ((MR_Box) (transform_hlds__lco__Unification_25));
#line 1690 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_27, 4) = ((MR_Box) (&transform_hlds__lco_scalar_common_1[12]));
#line 1690 "lco.m"
        }
#line 1692 "lco.m"
        {
#line 1692 "lco.m"
          hlds__hlds_goal__goal_info_init_1_p_0(&transform_hlds__lco__GoalInfo0_28);
        }
#line 1693 "lco.m"
        {
#line 1693 "lco.m"
          hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, transform_hlds__lco__GoalInfo0_28, &transform_hlds__lco__GoalInfo1_29);
        }
#line 1694 "lco.m"
        {
#line 1694 "lco.m"
          transform_hlds__lco__V_48_48 = hlds__instmap__instmap_delta_bind_var_1_f_0(transform_hlds__lco__AddrVar_13);
        }
#line 1694 "lco.m"
        {
#line 1694 "lco.m"
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__lco__V_48_48, transform_hlds__lco__GoalInfo1_29, &transform_hlds__lco__GoalInfo_30);
        }
#line 1697 "lco.m"
        {
#line 1697 "lco.m"
          MR_Word base;
#line 1697 "lco.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1697 "lco.m"
          *transform_hlds__lco__Goal_11 = base;
#line 1697 "lco.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__GoalExpr_27));
#line 1697 "lco.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__GoalInfo_30));
#line 1697 "lco.m"
        }
#line 1675 "lco.m"
      }
#line 1662 "lco.m"
  }
#line 1657 "lco.m"
}

#line 1632 "lco.m"
static void MR_CALL 
transform_hlds__lco__grounding_to_variant_args_5_p_0(
#line 1632 "lco.m"
  MR_Word transform_hlds__lco__GroundingVarToAddr_6,
#line 1632 "lco.m"
  MR_Integer transform_hlds__lco__OutArgNum_7,
#line 1632 "lco.m"
  MR_Word transform_hlds__lco__OutArgs_8,
#line 1632 "lco.m"
  MR_Word * transform_hlds__lco__Subst_9,
#line 1632 "lco.m"
  MR_Word * transform_hlds__lco__VariantArgs_10)
#line 1632 "lco.m"
{
#line 1639 "lco.m"
  {
#line 1639 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1639 "lco.m"
    if ((transform_hlds__lco__OutArgs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1639 "lco.m"
      {
#line 1639 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_21_21 = (MR_Word) &transform_hlds__lco_scalar_common_1[4];

#line 1640 "lco.m"
        {
#line 1640 "lco.m"
          *transform_hlds__lco__Subst_9 = mercury__map__init_0_f_0(transform_hlds__lco__TypeInfo_21_21, transform_hlds__lco__TypeInfo_21_21);
        }
#line 1641 "lco.m"
        *transform_hlds__lco__VariantArgs_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1639 "lco.m"
      }
#line 1639 "lco.m"
    else
#line 1643 "lco.m"
      {
#line 1643 "lco.m"
        MR_Word transform_hlds__lco__OutArg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__OutArgs_8, (MR_Integer) 0)));
#line 1643 "lco.m"
        MR_Word transform_hlds__lco__OutArgsTail_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__OutArgs_8, (MR_Integer) 1)));
#line 1643 "lco.m"
        MR_Word transform_hlds__lco__Subst0_13;
#line 1643 "lco.m"
        MR_Word transform_hlds__lco__VariantArgsTail_14;
#line 1643 "lco.m"
        MR_Integer transform_hlds__lco__V_19_19 = (transform_hlds__lco__OutArgNum_7 + (MR_Integer) 1);
#line 1651 "lco.m"
        MR_Word transform_hlds__lco__StoreTarget_15;
#line 1646 "lco.m"
        MR_Box transform_hlds__lco__conv0_StoreTarget_15;

#line 1644 "lco.m"
        {
#line 1644 "lco.m"
          transform_hlds__lco__grounding_to_variant_args_5_p_0(transform_hlds__lco__GroundingVarToAddr_6, transform_hlds__lco__V_19_19, transform_hlds__lco__OutArgsTail_12, &transform_hlds__lco__Subst0_13, &transform_hlds__lco__VariantArgsTail_14);
        }
#line 1646 "lco.m"
        {
#line 1646 "lco.m"
          transform_hlds__lco__succeeded = mercury__assoc_list__search_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[4], (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0, transform_hlds__lco__GroundingVarToAddr_6, ((MR_Box) (transform_hlds__lco__OutArg_11)), &transform_hlds__lco__conv0_StoreTarget_15);
        }
#line 1646 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1646 "lco.m"
          {
#line 1646 "lco.m"
            transform_hlds__lco__StoreTarget_15 = ((MR_Word) transform_hlds__lco__conv0_StoreTarget_15);
#line 1646 "lco.m"
            transform_hlds__lco__succeeded = MR_TRUE;
#line 1646 "lco.m"
          }
#line 1651 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1647 "lco.m"
          {
#line 1647 "lco.m"
            MR_Word transform_hlds__lco__TypeInfo_24_24 = (MR_Word) &transform_hlds__lco_scalar_common_1[4];
#line 1647 "lco.m"
            MR_Word transform_hlds__lco__StoreArg_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__StoreTarget_15, (MR_Integer) 0)));
#line 1647 "lco.m"
            MR_Word transform_hlds__lco__MaybeFieldId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__StoreTarget_15, (MR_Integer) 1)));
#line 1647 "lco.m"
            MR_Word transform_hlds__lco__VariantArg_18;

#line 1648 "lco.m"
            {
#line 1648 "lco.m"
              mercury__map__det_insert_4_p_0(transform_hlds__lco__TypeInfo_24_24, transform_hlds__lco__TypeInfo_24_24, ((MR_Box) (transform_hlds__lco__OutArg_11)), ((MR_Box) (transform_hlds__lco__StoreArg_16)), transform_hlds__lco__Subst0_13, transform_hlds__lco__Subst_9);
            }
#line 1649 "lco.m"
            {
#line 1649 "lco.m"
              transform_hlds__lco__VariantArg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1649 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantArg_18, 0) = ((MR_Box) (transform_hlds__lco__OutArgNum_7));
#line 1649 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantArg_18, 1) = ((MR_Box) (transform_hlds__lco__MaybeFieldId_17));
#line 1649 "lco.m"
            }
#line 1650 "lco.m"
            {
#line 1650 "lco.m"
              MR_Word base;
#line 1650 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1650 "lco.m"
              *transform_hlds__lco__VariantArgs_10 = base;
#line 1650 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__VariantArg_18));
#line 1650 "lco.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__VariantArgsTail_14));
#line 1650 "lco.m"
            }
#line 1647 "lco.m"
          }
#line 1651 "lco.m"
        else
#line 1652 "lco.m"
          {
#line 1652 "lco.m"
            *transform_hlds__lco__Subst_9 = transform_hlds__lco__Subst0_13;
#line 1653 "lco.m"
            *transform_hlds__lco__VariantArgs_10 = transform_hlds__lco__VariantArgsTail_14;
#line 1652 "lco.m"
          }
#line 1643 "lco.m"
      }
#line 1639 "lco.m"
  }
#line 1632 "lco.m"
}

#line 1622 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__is_grounding_4_p_0(
#line 1622 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_5,
#line 1622 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_6,
#line 1622 "lco.m"
  MR_Word transform_hlds__lco__InstMap_7,
#line 1622 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__4_4)
#line 1622 "lco.m"
{
#line 1625 "lco.m"
  {
#line 1625 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1625 "lco.m"
    MR_Word transform_hlds__lco__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__4_4, (MR_Integer) 0)));
#line 1625 "lco.m"
    MR_Word transform_hlds__lco__Inst0_10;
#line 1625 "lco.m"
    MR_Word transform_hlds__lco__Inst_11;
#line 1625 "lco.m"
    MR_Word transform_hlds__lco___StoreTarget_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__4_4, (MR_Integer) 1)));

#line 1626 "lco.m"
    {
#line 1626 "lco.m"
      hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__lco__InstMap0_6, transform_hlds__lco__Var_8, &transform_hlds__lco__Inst0_10);
    }
#line 1627 "lco.m"
    {
#line 1627 "lco.m"
      transform_hlds__lco__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(transform_hlds__lco__ModuleInfo_5, transform_hlds__lco__Inst0_10);
    }
#line 1627 "lco.m"
    transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 1625 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 1625 "lco.m"
      {
#line 1628 "lco.m"
        {
#line 1628 "lco.m"
          transform_hlds__lco__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(transform_hlds__lco__InstMap_7);
        }
#line 1625 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1625 "lco.m"
          {
#line 1629 "lco.m"
            {
#line 1629 "lco.m"
              hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__lco__InstMap_7, transform_hlds__lco__Var_8, &transform_hlds__lco__Inst_11);
            }
#line 1630 "lco.m"
            {
#line 1630 "lco.m"
              return transform_hlds__lco__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(transform_hlds__lco__ModuleInfo_5, transform_hlds__lco__Inst_11);
            }
#line 1625 "lco.m"
          }
#line 1625 "lco.m"
      }
#line 1625 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1625 "lco.m"
  }
#line 1622 "lco.m"
}

#line 1607 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_2(
#line 1607 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1607 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1607 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2)
#line 1607 "lco.m"
{
#line 1607 "lco.m"
  {
#line 1607 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 1607 "lco.m"
    MR_Word transform_hlds__lco__conv0_HeadVar__2_70;

#line 1607 "lco.m"
    {
#line 1607 "lco.m"
      transform_hlds__lco__IntroducedFrom__pred__lco_transform_variant_plain_call__1607__1_2_p_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), &transform_hlds__lco__conv0_HeadVar__2_70);
    }
#line 1607 "lco.m"
    *transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__2_70));
#line 1607 "lco.m"
  }
#line 1607 "lco.m"
}

#line 1564 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_1(
#line 1564 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1564 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1)
#line 1564 "lco.m"
{
#line 1564 "lco.m"
  {
#line 1564 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1564 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

#line 1564 "lco.m"
    {
#line 1564 "lco.m"
      return transform_hlds__lco__succeeded = transform_hlds__lco__is_grounding_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
#line 1564 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1564 "lco.m"
  }
#line 1564 "lco.m"
}

#line 1555 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0(
#line 1555 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_12,
#line 1555 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_13,
#line 1555 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_14,
#line 1555 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_15,
#line 1555 "lco.m"
  MR_Word transform_hlds__lco__GoalExpr0_16,
#line 1555 "lco.m"
  MR_Word * transform_hlds__lco__GoalExpr_17,
#line 1555 "lco.m"
  MR_Word transform_hlds__lco__GoalInfo0_18,
#line 1555 "lco.m"
  MR_Word * transform_hlds__lco__GoalInfo_19,
#line 1555 "lco.m"
  MR_Word * transform_hlds__lco__Changed_20,
#line 1555 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_53,
#line 1555 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_54)
#line 1555 "lco.m"
{
#line 1562 "lco.m"
  {
#line 1562 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1562 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_65_65;
#line 1562 "lco.m"
    MR_Word transform_hlds__lco__InstMap1_22;
#line 1562 "lco.m"
    MR_Word transform_hlds__lco__GroundingVarToAddr_23;
#line 1562 "lco.m"
    MR_Word transform_hlds__lco__V_55_55;
#line 1562 "lco.m"
    MR_Word transform_hlds__lco__V_56_56;

#line 1563 "lco.m"
    {
#line 1563 "lco.m"
      transform_hlds__lco__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1563 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_55_55, 0) = ((MR_Box) (transform_hlds__lco__GoalExpr0_16));
#line 1563 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_55_55, 1) = ((MR_Box) (transform_hlds__lco__GoalInfo0_18));
#line 1563 "lco.m"
    }
#line 1563 "lco.m"
    {
#line 1563 "lco.m"
      hlds__goal_util__update_instmap_3_p_0(transform_hlds__lco__V_55_55, transform_hlds__lco__InstMap0_15, &transform_hlds__lco__InstMap1_22);
    }
#line 1564 "lco.m"
    {
#line 1564 "lco.m"
      transform_hlds__lco__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1564 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_56_56, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_6[1]));
#line 1564 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_56_56, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_1));
#line 1564 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1564 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_56_56, 3) = ((MR_Box) (transform_hlds__lco__ModuleInfo_12));
#line 1564 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_56_56, 4) = ((MR_Box) (transform_hlds__lco__InstMap0_15));
#line 1564 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_56_56, 5) = ((MR_Box) (transform_hlds__lco__InstMap1_22));
#line 1564 "lco.m"
    }
#line 6513 "transform_hlds.lco.c"
    transform_hlds__lco__TypeInfo_65_65 = (MR_Word) &transform_hlds__lco_scalar_common_2[6];
#line 1564 "lco.m"
    {
#line 1564 "lco.m"
      mercury__list__filter_3_p_0(transform_hlds__lco__TypeInfo_65_65, transform_hlds__lco__V_56_56, transform_hlds__lco__VarToAddr_14, &transform_hlds__lco__GroundingVarToAddr_23);
    }
#line 1571 "lco.m"
    if ((transform_hlds__lco__GroundingVarToAddr_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1567 "lco.m"
      {
#line 1568 "lco.m"
        *transform_hlds__lco__GoalExpr_17 = transform_hlds__lco__GoalExpr0_16;
#line 1569 "lco.m"
        *transform_hlds__lco__GoalInfo_19 = transform_hlds__lco__GoalInfo0_18;
#line 1570 "lco.m"
        *transform_hlds__lco__Changed_20 = (MR_Integer) 0;
#line 1570 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_54 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_53;
#line 1567 "lco.m"
      }
#line 1571 "lco.m"
    else
#line 1572 "lco.m"
      {
#line 1572 "lco.m"
        MR_Word transform_hlds__lco__CallPredId_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr0_16, (MR_Integer) 0)));
#line 1572 "lco.m"
        MR_Integer transform_hlds__lco__CallProcId_27 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr0_16, (MR_Integer) 1)));
#line 1572 "lco.m"
        MR_Word transform_hlds__lco__Args_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr0_16, (MR_Integer) 2)));
#line 1572 "lco.m"
        MR_Word transform_hlds__lco__Builtin_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr0_16, (MR_Integer) 3)));
#line 1572 "lco.m"
        MR_Word transform_hlds__lco__UnifyContext_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr0_16, (MR_Integer) 4)));
#line 1572 "lco.m"
        MR_Word transform_hlds__lco__SymName_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr0_16, (MR_Integer) 5)));
#line 1572 "lco.m"
        MR_Word transform_hlds__lco__CallPredProcId_32;
#line 1572 "lco.m"
        MR_Word transform_hlds__lco__CalleeProcInfo_33;
#line 1572 "lco.m"
        MR_Word transform_hlds__lco__VarTypes_34;
#line 1572 "lco.m"
        MR_Word transform_hlds__lco__CalleeArgModes_35;
#line 1615 "lco.m"
        MR_Word transform_hlds__lco__Subst_40;
#line 1615 "lco.m"
        MR_Word transform_hlds__lco__ExistingVariant_42;
#line 1584 "lco.m"
        MR_Word transform_hlds__lco__ExistingVariants_36;
#line 1584 "lco.m"
        MR_Word transform_hlds__lco__OutArgs_38;
#line 1584 "lco.m"
        MR_Word transform_hlds__lco__VariantArgs_41;
#line 1584 "lco.m"
        MR_Integer transform_hlds__lco__V_57_57;
#line 1585 "lco.m"
        MR_Word transform_hlds__lco___InArgs_37;
#line 1585 "lco.m"
        MR_Word transform_hlds__lco___UnusedArgs_39;

#line 1578 "lco.m"
        {
#line 1578 "lco.m"
          transform_hlds__lco__CallPredProcId_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1578 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__CallPredProcId_32, 0) = ((MR_Box) (transform_hlds__lco__CallPredId_26));
#line 1578 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__CallPredProcId_32, 1) = ((MR_Box) (transform_hlds__lco__CallProcId_27));
#line 1578 "lco.m"
        }
#line 1579 "lco.m"
        {
#line 1579 "lco.m"
          hlds__hlds_module__module_info_proc_info_4_p_0(transform_hlds__lco__ModuleInfo_12, transform_hlds__lco__CallPredId_26, transform_hlds__lco__CallProcId_27, &transform_hlds__lco__CalleeProcInfo_33);
        }
#line 1581 "lco.m"
        {
#line 1581 "lco.m"
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_53, &transform_hlds__lco__VarTypes_34);
        }
#line 1582 "lco.m"
        {
#line 1582 "lco.m"
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__lco__CalleeProcInfo_33, &transform_hlds__lco__CalleeArgModes_35);
        }
#line 1584 "lco.m"
        {
#line 1584 "lco.m"
          transform_hlds__lco__succeeded = mercury__multi_map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0, transform_hlds__lco__VariantMap_13, ((MR_Box) (transform_hlds__lco__CallPredProcId_32)), &transform_hlds__lco__ExistingVariants_36);
        }
#line 1584 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1584 "lco.m"
          {
#line 1585 "lco.m"
            {
#line 1585 "lco.m"
              transform_hlds__lco__classify_proc_call_args_7_p_0(transform_hlds__lco__ModuleInfo_12, transform_hlds__lco__VarTypes_34, transform_hlds__lco__Args_28, transform_hlds__lco__CalleeArgModes_35, &transform_hlds__lco___InArgs_37, &transform_hlds__lco__OutArgs_38, &transform_hlds__lco___UnusedArgs_39);
            }
#line 1587 "lco.m"
            transform_hlds__lco__V_57_57 = (MR_Integer) 1;
#line 1587 "lco.m"
            {
#line 1587 "lco.m"
              transform_hlds__lco__grounding_to_variant_args_5_p_0(transform_hlds__lco__GroundingVarToAddr_23, transform_hlds__lco__V_57_57, transform_hlds__lco__OutArgs_38, &transform_hlds__lco__Subst_40, &transform_hlds__lco__VariantArgs_41);
            }
#line 1589 "lco.m"
            {
#line 1589 "lco.m"
              transform_hlds__lco__succeeded = transform_hlds__lco__match_existing_variant_3_p_0(transform_hlds__lco__ExistingVariants_36, transform_hlds__lco__VariantArgs_41, &transform_hlds__lco__ExistingVariant_42);
            }
#line 1584 "lco.m"
          }
#line 1615 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1592 "lco.m"
          {
#line 1592 "lco.m"
            MR_Word transform_hlds__lco__CallArgs_43;
#line 1592 "lco.m"
            MR_Word transform_hlds__lco__VariantPredId_44;
#line 1592 "lco.m"
            MR_Integer transform_hlds__lco__VariantProcId_45;
#line 1592 "lco.m"
            MR_Word transform_hlds__lco__VariantSymName_46;
#line 1592 "lco.m"
            MR_Word transform_hlds__lco__Globals_47;
#line 1592 "lco.m"
            MR_Word transform_hlds__lco__HighLevelData_48;
#line 1592 "lco.m"
            MR_Word transform_hlds__lco__V_59_59;
#line 1592 "lco.m"
            MR_String transform_hlds__lco__VariantName_79;
#line 1115 "lco.m"
            MR_Word transform_hlds__lco__V_78_78;

#line 1592 "lco.m"
            {
#line 1592 "lco.m"
              parse_tree__prog_data__rename_var_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, transform_hlds__lco__Subst_40, transform_hlds__lco__Args_28, &transform_hlds__lco__CallArgs_43);
            }
#line 1115 "lco.m"
            transform_hlds__lco__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ExistingVariant_42, (MR_Integer) 0)));
#line 1115 "lco.m"
            transform_hlds__lco__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ExistingVariant_42, (MR_Integer) 1)));
#line 1115 "lco.m"
            transform_hlds__lco__VariantName_79 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ExistingVariant_42, (MR_Integer) 2)));
#line 1119 "lco.m"
            if (((MR_tag((MR_Word) transform_hlds__lco__SymName_31)) == (MR_mktag((MR_Integer) 1))))
#line 1120 "lco.m"
              {
#line 1120 "lco.m"
                MR_Word transform_hlds__lco__ModuleName_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SymName_31, (MR_Integer) 0)));
#line 1120 "lco.m"
                MR_String transform_hlds__lco___Name_82 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SymName_31, (MR_Integer) 1)));

#line 1121 "lco.m"
                {
#line 1121 "lco.m"
                  transform_hlds__lco__VariantSymName_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1121 "lco.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__lco__VariantSymName_46, 0) = ((MR_Box) (transform_hlds__lco__ModuleName_81));
#line 1121 "lco.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__lco__VariantSymName_46, 1) = ((MR_Box) (transform_hlds__lco__VariantName_79));
#line 1121 "lco.m"
                }
#line 1120 "lco.m"
              }
#line 1119 "lco.m"
            else
#line 1118 "lco.m"
              {
#line 1118 "lco.m"
                transform_hlds__lco__VariantSymName_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1118 "lco.m"
                MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantSymName_46, 0) = ((MR_Box) (transform_hlds__lco__VariantName_79));
#line 1118 "lco.m"
              }
#line 1594 "lco.m"
            transform_hlds__lco__VariantPredId_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_59_59, (MR_Integer) 0)));
#line 1594 "lco.m"
            transform_hlds__lco__VariantProcId_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_59_59, (MR_Integer) 1)));
#line 1595 "lco.m"
            {
#line 1595 "lco.m"
              MR_Word base;
#line 1595 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1595 "lco.m"
              *transform_hlds__lco__GoalExpr_17 = base;
#line 1595 "lco.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__lco__VariantPredId_44));
#line 1595 "lco.m"
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (transform_hlds__lco__VariantProcId_45));
#line 1595 "lco.m"
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (transform_hlds__lco__CallArgs_43));
#line 1595 "lco.m"
              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (transform_hlds__lco__Builtin_29));
#line 1595 "lco.m"
              MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (transform_hlds__lco__UnifyContext_30));
#line 1595 "lco.m"
              MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (transform_hlds__lco__VariantSymName_46));
#line 1595 "lco.m"
            }
#line 1598 "lco.m"
            {
#line 1598 "lco.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__lco__ModuleInfo_12, &transform_hlds__lco__Globals_47);
            }
#line 1599 "lco.m"
            {
#line 1599 "lco.m"
              libs__globals__lookup_bool_option_3_p_0(transform_hlds__lco__Globals_47, (MR_Integer) 252, &transform_hlds__lco__HighLevelData_48);
            }
#line 1603 "lco.m"
            if ((transform_hlds__lco__HighLevelData_48 == (MR_Integer) 0))
#line 1602 "lco.m"
              *transform_hlds__lco__GoalInfo_19 = transform_hlds__lco__GoalInfo0_18;
#line 1603 "lco.m"
            else
#line 1604 "lco.m"
              {
#line 1604 "lco.m"
                MR_Word transform_hlds__lco__TypeInfo_73_73 = (MR_Word) &transform_hlds__lco_scalar_common_1[4];
#line 1604 "lco.m"
                MR_Word transform_hlds__lco__GroundVars_49;
#line 1604 "lco.m"
                MR_Word transform_hlds__lco__AddrVars_50;
#line 1604 "lco.m"
                MR_Word transform_hlds__lco__InstMapDelta0_51;
#line 1604 "lco.m"
                MR_Word transform_hlds__lco__InstMapDelta_52;
#line 1604 "lco.m"
                MR_Word transform_hlds__lco__V_62_62;

#line 1607 "lco.m"
                {
#line 1607 "lco.m"
                  mercury__list__map_3_p_0(transform_hlds__lco__TypeInfo_65_65, transform_hlds__lco__TypeInfo_73_73, (MR_Word) &transform_hlds__lco_scalar_common_2[12], transform_hlds__lco__GroundingVarToAddr_23, &transform_hlds__lco__GroundVars_49);
                }
#line 1608 "lco.m"
                {
#line 1608 "lco.m"
                  mercury__map__apply_to_list_3_p_0(transform_hlds__lco__TypeInfo_73_73, transform_hlds__lco__TypeInfo_73_73, transform_hlds__lco__GroundVars_49, transform_hlds__lco__Subst_40, &transform_hlds__lco__AddrVars_50);
                }
#line 1609 "lco.m"
                {
#line 1609 "lco.m"
                  transform_hlds__lco__InstMapDelta0_51 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__lco__GoalInfo0_18);
                }
#line 1610 "lco.m"
                {
#line 1610 "lco.m"
                  transform_hlds__lco__V_62_62 = parse_tree__prog_mode__ground_inst_0_f_0();
                }
#line 1610 "lco.m"
                {
#line 1610 "lco.m"
                  hlds__instmap__instmap_delta_set_vars_same_4_p_0(transform_hlds__lco__V_62_62, transform_hlds__lco__AddrVars_50, transform_hlds__lco__InstMapDelta0_51, &transform_hlds__lco__InstMapDelta_52);
                }
#line 1612 "lco.m"
                {
#line 1612 "lco.m"
                  hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__lco__InstMapDelta_52, transform_hlds__lco__GoalInfo0_18, transform_hlds__lco__GoalInfo_19);
                }
#line 1604 "lco.m"
              }
#line 1614 "lco.m"
            *transform_hlds__lco__Changed_20 = (MR_Integer) 1;
#line 1614 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_ProcInfo_54 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_53;
#line 1592 "lco.m"
          }
#line 1615 "lco.m"
        else
#line 1617 "lco.m"
          {
#line 1616 "lco.m"
            {
#line 1616 "lco.m"
              transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(transform_hlds__lco__ModuleInfo_12, transform_hlds__lco__VarToAddr_14, transform_hlds__lco__InstMap0_15, transform_hlds__lco__GoalInfo0_18, transform_hlds__lco__GoalExpr0_16, transform_hlds__lco__GoalExpr_17, transform_hlds__lco__Changed_20, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_53, transform_hlds__lco__STATE_VARIABLE_ProcInfo_54);
            }
#line 1618 "lco.m"
            *transform_hlds__lco__GoalInfo_19 = transform_hlds__lco__GoalInfo0_18;
#line 1617 "lco.m"
          }
#line 1572 "lco.m"
      }
#line 1562 "lco.m"
  }
#line 1555 "lco.m"
}

#line 1548 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_2(
#line 1548 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1548 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1548 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 1548 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_3,
#line 1548 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_4)
#line 1548 "lco.m"
{
#line 1548 "lco.m"
  {
#line 1548 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 1548 "lco.m"
    MR_Word transform_hlds__lco__conv1_Goal_11;
#line 1548 "lco.m"
    MR_Word transform_hlds__lco__conv0_STATE_VARIABLE_ProcInfo_32;

#line 1548 "lco.m"
    {
#line 1548 "lco.m"
      transform_hlds__lco__make_store_goal_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), &transform_hlds__lco__conv1_Goal_11, ((MR_Word) transform_hlds__lco__wrapper_arg_3), &transform_hlds__lco__conv0_STATE_VARIABLE_ProcInfo_32);
    }
#line 1548 "lco.m"
    *transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv1_Goal_11));
#line 1548 "lco.m"
    *transform_hlds__lco__wrapper_arg_4 = ((MR_Box) (transform_hlds__lco__conv0_STATE_VARIABLE_ProcInfo_32));
#line 1548 "lco.m"
  }
#line 1548 "lco.m"
}

#line 1540 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_1(
#line 1540 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1540 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1)
#line 1540 "lco.m"
{
#line 1540 "lco.m"
  {
#line 1540 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1540 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

#line 1540 "lco.m"
    {
#line 1540 "lco.m"
      return transform_hlds__lco__succeeded = transform_hlds__lco__is_grounding_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
#line 1540 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1540 "lco.m"
  }
#line 1540 "lco.m"
}

#line 1532 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(
#line 1532 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_10,
#line 1532 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_11,
#line 1532 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_12,
#line 1532 "lco.m"
  MR_Word transform_hlds__lco__GoalInfo_13,
#line 1532 "lco.m"
  MR_Word transform_hlds__lco__GoalExpr0_14,
#line 1532 "lco.m"
  MR_Word * transform_hlds__lco__GoalExpr_15,
#line 1532 "lco.m"
  MR_Word * transform_hlds__lco__Changed_16,
#line 1532 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_23,
#line 1532 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_24)
#line 1532 "lco.m"
{
#line 1538 "lco.m"
  {
#line 1538 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1538 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_33_33;
#line 1538 "lco.m"
    MR_Word transform_hlds__lco__InstMap1_18;
#line 1538 "lco.m"
    MR_Word transform_hlds__lco__GroundingVarToAddr_19;
#line 1538 "lco.m"
    MR_Word transform_hlds__lco__V_25_25;
#line 1538 "lco.m"
    MR_Word transform_hlds__lco__V_26_26;

#line 1539 "lco.m"
    {
#line 1539 "lco.m"
      transform_hlds__lco__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1539 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_25_25, 0) = ((MR_Box) (transform_hlds__lco__GoalExpr0_14));
#line 1539 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_25_25, 1) = ((MR_Box) (transform_hlds__lco__GoalInfo_13));
#line 1539 "lco.m"
    }
#line 1539 "lco.m"
    {
#line 1539 "lco.m"
      hlds__goal_util__update_instmap_3_p_0(transform_hlds__lco__V_25_25, transform_hlds__lco__InstMap0_12, &transform_hlds__lco__InstMap1_18);
    }
#line 1540 "lco.m"
    {
#line 1540 "lco.m"
      transform_hlds__lco__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1540 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_26_26, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_6[1]));
#line 1540 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_26_26, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_1));
#line 1540 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1540 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_26_26, 3) = ((MR_Box) (transform_hlds__lco__ModuleInfo_10));
#line 1540 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_26_26, 4) = ((MR_Box) (transform_hlds__lco__InstMap0_12));
#line 1540 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_26_26, 5) = ((MR_Box) (transform_hlds__lco__InstMap1_18));
#line 1540 "lco.m"
    }
#line 6945 "transform_hlds.lco.c"
    transform_hlds__lco__TypeInfo_33_33 = (MR_Word) &transform_hlds__lco_scalar_common_2[6];
#line 1540 "lco.m"
    {
#line 1540 "lco.m"
      mercury__list__filter_3_p_0(transform_hlds__lco__TypeInfo_33_33, transform_hlds__lco__V_26_26, transform_hlds__lco__VarToAddr_11, &transform_hlds__lco__GroundingVarToAddr_19);
    }
#line 1546 "lco.m"
    if ((transform_hlds__lco__GroundingVarToAddr_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1543 "lco.m"
      {
#line 1544 "lco.m"
        *transform_hlds__lco__GoalExpr_15 = transform_hlds__lco__GoalExpr0_14;
#line 1545 "lco.m"
        *transform_hlds__lco__Changed_16 = (MR_Integer) 0;
#line 1545 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_24 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_23;
#line 1543 "lco.m"
      }
#line 1546 "lco.m"
    else
#line 1547 "lco.m"
      {
#line 1547 "lco.m"
        MR_Word transform_hlds__lco__StoreGoals_22;
#line 1547 "lco.m"
        MR_Word transform_hlds__lco__V_27_27;
#line 1547 "lco.m"
        MR_Word transform_hlds__lco__V_30_30;
#line 1548 "lco.m"
        MR_Box transform_hlds__lco__conv2_STATE_VARIABLE_ProcInfo_24;

#line 1548 "lco.m"
        {
#line 1548 "lco.m"
          transform_hlds__lco__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1548 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_27_27, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_10[0]));
#line 1548 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_27_27, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_2));
#line 1548 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1548 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_27_27, 3) = ((MR_Box) (transform_hlds__lco__ModuleInfo_10));
#line 1548 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_27_27, 4) = ((MR_Box) (transform_hlds__lco__InstMap1_18));
#line 1548 "lco.m"
        }
#line 1548 "lco.m"
        {
#line 1548 "lco.m"
          mercury__list__map_foldl_5_p_0(transform_hlds__lco__TypeInfo_33_33, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__lco__V_27_27, transform_hlds__lco__GroundingVarToAddr_19, &transform_hlds__lco__StoreGoals_22, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_23)), &transform_hlds__lco__conv2_STATE_VARIABLE_ProcInfo_24);
        }
#line 1548 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_24 = ((MR_Word) transform_hlds__lco__conv2_STATE_VARIABLE_ProcInfo_24);
#line 1551 "lco.m"
        {
#line 1551 "lco.m"
          transform_hlds__lco__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1551 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_30_30, 0) = ((MR_Box) (transform_hlds__lco__V_25_25));
#line 1551 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_30_30, 1) = ((MR_Box) (transform_hlds__lco__StoreGoals_22));
#line 1551 "lco.m"
        }
#line 1550 "lco.m"
        {
#line 1550 "lco.m"
          MR_Word base;
#line 1550 "lco.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1550 "lco.m"
          *transform_hlds__lco__GoalExpr_15 = base;
#line 1550 "lco.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1550 "lco.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1550 "lco.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__lco__V_30_30));
#line 1550 "lco.m"
        }
#line 1552 "lco.m"
        *transform_hlds__lco__Changed_16 = (MR_Integer) 1;
#line 1547 "lco.m"
      }
#line 1538 "lco.m"
  }
#line 1532 "lco.m"
}

#line 1521 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_case_9_p_0(
#line 1521 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_10,
#line 1521 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_11,
#line 1521 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_12,
#line 1521 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_13,
#line 1521 "lco.m"
  MR_Word transform_hlds__lco__Case0_14,
#line 1521 "lco.m"
  MR_Word * transform_hlds__lco__Case_15,
#line 1521 "lco.m"
  MR_Word * transform_hlds__lco__Changed_16,
#line 1521 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22,
#line 1521 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_23)
#line 1521 "lco.m"
{
#line 1526 "lco.m"
  {
#line 1526 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1526 "lco.m"
    MR_Word transform_hlds__lco__MainConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Case0_14, (MR_Integer) 0)));
#line 1526 "lco.m"
    MR_Word transform_hlds__lco__OtherConsIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Case0_14, (MR_Integer) 1)));
#line 1526 "lco.m"
    MR_Word transform_hlds__lco__Goal0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Case0_14, (MR_Integer) 2)));
#line 1526 "lco.m"
    MR_Word transform_hlds__lco__Goal_21;

#line 1528 "lco.m"
    {
#line 1528 "lco.m"
      transform_hlds__lco__lco_transform_variant_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VariantMap_11, transform_hlds__lco__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__Goal0_20, &transform_hlds__lco__Goal_21, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22, transform_hlds__lco__STATE_VARIABLE_ProcInfo_23);
    }
#line 1530 "lco.m"
    {
#line 1530 "lco.m"
      MR_Word base;
#line 1530 "lco.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1530 "lco.m"
      *transform_hlds__lco__Case_15 = base;
#line 1530 "lco.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__MainConsId_18));
#line 1530 "lco.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__OtherConsIds_19));
#line 1530 "lco.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__Goal_21));
#line 1530 "lco.m"
    }
#line 1526 "lco.m"
  }
#line 1521 "lco.m"
}

#line 1502 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_conj_9_p_0(
#line 1502 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_1,
#line 1502 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_2,
#line 1502 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_3,
#line 1502 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_4,
#line 1502 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 1502 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6,
#line 1502 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__7_7,
#line 1502 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_8,
#line 1502 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_9)
#line 1502 "lco.m"
{
#line 1506 "lco.m"
  {
#line 1506 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1506 "lco.m"
    if ((transform_hlds__lco__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1506 "lco.m"
      {
#line 1506 "lco.m"
        *transform_hlds__lco__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1506 "lco.m"
        *transform_hlds__lco__HeadVar__7_7 = (MR_Integer) 0;
#line 1506 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_9 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_8;
#line 1506 "lco.m"
      }
#line 1506 "lco.m"
    else
#line 1508 "lco.m"
      {
#line 1508 "lco.m"
        MR_Word transform_hlds__lco__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__5_5, (MR_Integer) 0)));
#line 1508 "lco.m"
        MR_Word transform_hlds__lco__Goals0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__5_5, (MR_Integer) 1)));
#line 1508 "lco.m"
        MR_Word transform_hlds__lco__Goal_26;
#line 1508 "lco.m"
        MR_Word transform_hlds__lco__HeadChanged_27;
#line 1508 "lco.m"
        MR_Word transform_hlds__lco__InstMap1_28;
#line 1508 "lco.m"
        MR_Word transform_hlds__lco__Goals_29;
#line 1508 "lco.m"
        MR_Word transform_hlds__lco__TailChanged_30;
#line 1508 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_35_35;
#line 1517 "lco.m"
        MR_Word transform_hlds__lco__SubConj_31;
#line 1515 "lco.m"
        MR_Word transform_hlds__lco__V_37_37;
#line 1515 "lco.m"
        MR_Word transform_hlds__lco__V_38_38;
#line 1515 "lco.m"
        MR_Word transform_hlds__lco__V_32_32;

#line 1509 "lco.m"
        {
#line 1509 "lco.m"
          transform_hlds__lco__lco_transform_variant_goal_9_p_0(transform_hlds__lco__ModuleInfo_1, transform_hlds__lco__VariantMap_2, transform_hlds__lco__VarToAddr_3, transform_hlds__lco__InstMap0_4, transform_hlds__lco__Goal0_21, &transform_hlds__lco__Goal_26, &transform_hlds__lco__HeadChanged_27, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_8, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_35_35);
        }
#line 1511 "lco.m"
        {
#line 1511 "lco.m"
          hlds__goal_util__update_instmap_3_p_0(transform_hlds__lco__Goal0_21, transform_hlds__lco__InstMap0_4, &transform_hlds__lco__InstMap1_28);
        }
#line 1512 "lco.m"
        {
#line 1512 "lco.m"
          transform_hlds__lco__lco_transform_variant_conj_9_p_0(transform_hlds__lco__ModuleInfo_1, transform_hlds__lco__VariantMap_2, transform_hlds__lco__VarToAddr_3, transform_hlds__lco__InstMap1_28, transform_hlds__lco__Goals0_22, &transform_hlds__lco__Goals_29, &transform_hlds__lco__TailChanged_30, transform_hlds__lco__STATE_VARIABLE_ProcInfo_35_35, transform_hlds__lco__STATE_VARIABLE_ProcInfo_9);
        }
#line 1514 "lco.m"
        {
#line 1514 "lco.m"
          *transform_hlds__lco__HeadVar__7_7 = mercury__bool__or_2_f_0(transform_hlds__lco__HeadChanged_27, transform_hlds__lco__TailChanged_30);
        }
#line 1515 "lco.m"
        transform_hlds__lco__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_26, (MR_Integer) 0)));
#line 1515 "lco.m"
        transform_hlds__lco__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_26, (MR_Integer) 1)));
#line 1515 "lco.m"
        transform_hlds__lco__succeeded = ((((MR_tag((MR_Word) transform_hlds__lco__V_37_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__V_37_37, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1515 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1515 "lco.m"
          {
#line 1515 "lco.m"
            transform_hlds__lco__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__V_37_37, (MR_Integer) 1)));
#line 1515 "lco.m"
            transform_hlds__lco__SubConj_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__V_37_37, (MR_Integer) 2)));
#line 1515 "lco.m"
            transform_hlds__lco__succeeded = (transform_hlds__lco__V_38_38 == (MR_Integer) 0);
#line 1515 "lco.m"
          }
#line 1517 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1516 "lco.m"
          {
#line 1516 "lco.m"
            {
#line 1516 "lco.m"
              *transform_hlds__lco__HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__lco__SubConj_31, transform_hlds__lco__Goals_29);
            }
#line 1516 "lco.m"
          }
#line 1517 "lco.m"
        else
#line 1518 "lco.m"
          {
#line 1518 "lco.m"
            MR_Word base;
#line 1518 "lco.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1518 "lco.m"
            *transform_hlds__lco__HeadVar__6_6 = base;
#line 1518 "lco.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Goal_26));
#line 1518 "lco.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__Goals_29));
#line 1518 "lco.m"
          }
#line 1508 "lco.m"
      }
#line 1506 "lco.m"
  }
#line 1502 "lco.m"
}

#line 1417 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_6(
#line 1417 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1417 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1417 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 1417 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 1417 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 1417 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5)
#line 1417 "lco.m"
{
#line 1417 "lco.m"
  {
#line 1417 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 1417 "lco.m"
    MR_Word transform_hlds__lco__conv7_Case_15;
#line 1417 "lco.m"
    MR_Word transform_hlds__lco__conv6_Changed_16;
#line 1417 "lco.m"
    MR_Word transform_hlds__lco__conv5_STATE_VARIABLE_ProcInfo_23;

#line 1417 "lco.m"
    {
#line 1417 "lco.m"
      transform_hlds__lco__lco_transform_variant_case_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), &transform_hlds__lco__conv7_Case_15, &transform_hlds__lco__conv6_Changed_16, ((MR_Word) transform_hlds__lco__wrapper_arg_4), &transform_hlds__lco__conv5_STATE_VARIABLE_ProcInfo_23);
    }
#line 1417 "lco.m"
    *transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv7_Case_15));
#line 1417 "lco.m"
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv6_Changed_16));
#line 1417 "lco.m"
    *transform_hlds__lco__wrapper_arg_5 = ((MR_Box) (transform_hlds__lco__conv5_STATE_VARIABLE_ProcInfo_23));
#line 1417 "lco.m"
  }
#line 1417 "lco.m"
}

#line 1408 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_1(
#line 1408 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1408 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1408 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 1408 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 1408 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 1408 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5)
#line 1408 "lco.m"
{
#line 1408 "lco.m"
  {
#line 1408 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 1408 "lco.m"
    MR_Word transform_hlds__lco__conv2_Goal_15;
#line 1408 "lco.m"
    MR_Word transform_hlds__lco__conv1_Changed_16;
#line 1408 "lco.m"
    MR_Word transform_hlds__lco__conv0_STATE_VARIABLE_ProcInfo_74;

#line 1408 "lco.m"
    {
#line 1408 "lco.m"
      transform_hlds__lco__lco_transform_variant_goal_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), &transform_hlds__lco__conv2_Goal_15, &transform_hlds__lco__conv1_Changed_16, ((MR_Word) transform_hlds__lco__wrapper_arg_4), &transform_hlds__lco__conv0_STATE_VARIABLE_ProcInfo_74);
    }
#line 1408 "lco.m"
    *transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv2_Goal_15));
#line 1408 "lco.m"
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv1_Changed_16));
#line 1408 "lco.m"
    *transform_hlds__lco__wrapper_arg_5 = ((MR_Box) (transform_hlds__lco__conv0_STATE_VARIABLE_ProcInfo_74));
#line 1408 "lco.m"
  }
#line 1408 "lco.m"
}

#line 1442 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_2(
#line 1442 "lco.m"
  void * transform_hlds__lco__env_ptr_arg)
#line 1442 "lco.m"
{
#line 1442 "lco.m"
  {
#line 1442 "lco.m"
    struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s * transform_hlds__lco__env_ptr = (struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s *) transform_hlds__lco__env_ptr_arg;

#line 1442 "lco.m"
    MR_builtin_longjmp((transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__commit_0, 1);
#line 1442 "lco.m"
  }
#line 1442 "lco.m"
}

#line 1442 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_4(
#line 1442 "lco.m"
  void * transform_hlds__lco__env_ptr_arg)
#line 1442 "lco.m"
{
#line 1442 "lco.m"
  {
#line 1442 "lco.m"
    struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s * transform_hlds__lco__env_ptr = (struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s *) transform_hlds__lco__env_ptr_arg;

#line 1442 "lco.m"
    (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVarPair_44 = ((MR_Word) (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__conv4_FGTVarPair_44);
#line 1442 "lco.m"
    {
#line 1442 "lco.m"
      transform_hlds__lco__lco_transform_variant_goal_9_p_0_3(transform_hlds__lco__env_ptr);
#line 1442 "lco.m"
      return;
    }
#line 1442 "lco.m"
  }
#line 1442 "lco.m"
}

#line 1442 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_3(
#line 1442 "lco.m"
  void * transform_hlds__lco__env_ptr_arg)
#line 1442 "lco.m"
{
#line 1442 "lco.m"
  {
#line 1442 "lco.m"
    struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s * transform_hlds__lco__env_ptr = (struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s *) transform_hlds__lco__env_ptr_arg;

#line 1442 "lco.m"
    {
#line 1443 "lco.m"
      MR_Word transform_hlds__lco__V_45_45;

#line 1443 "lco.m"
      (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVarPair_44, (MR_Integer) 0)));
#line 1443 "lco.m"
      transform_hlds__lco__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVarPair_44, (MR_Integer) 1)));
#line 7392 "transform_hlds.lco.c"
      (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__TypeInfo_115_115 = (MR_Word) &transform_hlds__lco_scalar_common_1[4];
#line 1443 "lco.m"
      {
#line 1443 "lco.m"
        (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__TypeInfo_115_115, ((MR_Box) ((transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVar_42)), ((MR_Box) ((transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__V_114_114)));
      }
#line 1443 "lco.m"
      if ((transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded)
#line 1443 "lco.m"
        {
#line 1443 "lco.m"
          transform_hlds__lco__lco_transform_variant_goal_9_p_0_2(transform_hlds__lco__env_ptr);
#line 1443 "lco.m"
          return;
        }
#line 1442 "lco.m"
    }
#line 1442 "lco.m"
  }
#line 1442 "lco.m"
}

#line 1442 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_5(
#line 1442 "lco.m"
  void * transform_hlds__lco__env_ptr_arg)
#line 1442 "lco.m"
{
#line 1442 "lco.m"
  {
#line 1442 "lco.m"
    struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s * transform_hlds__lco__env_ptr = (struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s *) transform_hlds__lco__env_ptr_arg;

#line 1442 "lco.m"
    if (MR_builtin_setjmp((transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__commit_0) == 0)
#line 1442 "lco.m"
      {
#line 1442 "lco.m"
        {
#line 1442 "lco.m"
          {
#line 1442 "lco.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__lco_scalar_common_2[6], &(transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__conv4_FGTVarPair_44, (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__lco_transform_variant_goal_9_p_0_4, transform_hlds__lco__env_ptr);
          }
#line 1442 "lco.m"
        }
#line 1442 "lco.m"
        (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = MR_FALSE;
#line 1442 "lco.m"
      }
#line 1442 "lco.m"
    else
#line 1442 "lco.m"
      (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = MR_TRUE;
#line 1442 "lco.m"
  }
#line 1442 "lco.m"
}

#line 1386 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0(
#line 1386 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_10,
#line 1386 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_11,
#line 1386 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_12,
#line 1386 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_13,
#line 1386 "lco.m"
  MR_Word transform_hlds__lco__Goal0_14,
#line 1386 "lco.m"
  MR_Word * transform_hlds__lco__Goal_15,
#line 1386 "lco.m"
  MR_Word * transform_hlds__lco__Changed_16,
#line 1386 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73,
#line 1386 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_74)
#line 1386 "lco.m"
{
#line 1386 "lco.m"
  {
#line 1386 "lco.m"
    struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s transform_hlds__lco__env;

#line 1386 "lco.m"
    (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12 = transform_hlds__lco__VarToAddr_12;
#line 1391 "lco.m"
    {
#line 1391 "lco.m"
      MR_Word transform_hlds__lco__GoalExpr0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal0_14, (MR_Integer) 0)));
#line 1391 "lco.m"
      MR_Word transform_hlds__lco__GoalInfo0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal0_14, (MR_Integer) 1)));
#line 1391 "lco.m"
      MR_Word transform_hlds__lco__GoalExpr_23;
#line 1391 "lco.m"
      MR_Word transform_hlds__lco__GoalInfo_24;

#line 1405 "lco.m"
      if (((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_18)) == (MR_mktag((MR_Integer) 0))))
#line 1462 "lco.m"
        {
#line 1463 "lco.m"
          transform_hlds__lco__GoalExpr_23 = transform_hlds__lco__GoalExpr0_18;
#line 1464 "lco.m"
          transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1465 "lco.m"
          *transform_hlds__lco__Changed_16 = (MR_Integer) 0;
#line 1465 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_ProcInfo_74 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73;
#line 1462 "lco.m"
        }
#line 1405 "lco.m"
      else
#line 1405 "lco.m"
        if (((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_18)) == (MR_mktag((MR_Integer) 2))))
#line 1473 "lco.m"
          {
#line 1473 "lco.m"
            transform_hlds__lco__lco_transform_variant_plain_call_11_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VariantMap_11, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__GoalExpr0_18, &transform_hlds__lco__GoalExpr_23, transform_hlds__lco__GoalInfo0_19, &transform_hlds__lco__GoalInfo_24, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
          }
#line 1405 "lco.m"
        else
#line 1405 "lco.m"
          if (((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_18)) == (MR_mktag((MR_Integer) 1))))
#line 1477 "lco.m"
            {
#line 1478 "lco.m"
              {
#line 1478 "lco.m"
                transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__GoalInfo0_19, transform_hlds__lco__GoalExpr0_18, &transform_hlds__lco__GoalExpr_23, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
              }
#line 1480 "lco.m"
              transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1477 "lco.m"
            }
#line 1405 "lco.m"
          else
#line 1405 "lco.m"
            if (((((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1482 "lco.m"
              {
#line 1483 "lco.m"
                {
#line 1483 "lco.m"
                  transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__GoalInfo0_19, transform_hlds__lco__GoalExpr0_18, &transform_hlds__lco__GoalExpr_23, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
                }
#line 1485 "lco.m"
                transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1482 "lco.m"
              }
#line 1405 "lco.m"
            else
#line 1405 "lco.m"
              if (((((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1394 "lco.m"
                {
#line 1394 "lco.m"
                  MR_Word transform_hlds__lco__ConjType_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 1)));
#line 1394 "lco.m"
                  MR_Word transform_hlds__lco__Goals0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 2)));

#line 1401 "lco.m"
                  if ((transform_hlds__lco__ConjType_20 == (MR_Integer) 1))
#line 1402 "lco.m"
                    {
#line 1403 "lco.m"
                      {
#line 1403 "lco.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.lco_transform_variant_goal\'/9", (MR_String) "parallel_conj");
#line 1403 "lco.m"
                        return;
                      }
#line 1402 "lco.m"
                    }
#line 1401 "lco.m"
                  else
#line 1396 "lco.m"
                    {
#line 1396 "lco.m"
                      MR_Word transform_hlds__lco__Goals_22;

#line 1397 "lco.m"
                      {
#line 1397 "lco.m"
                        transform_hlds__lco__lco_transform_variant_conj_9_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VariantMap_11, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__Goals0_21, &transform_hlds__lco__Goals_22, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
                      }
#line 1399 "lco.m"
                      {
#line 1399 "lco.m"
                        transform_hlds__lco__GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1399 "lco.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1399 "lco.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 1) = ((MR_Box) (transform_hlds__lco__ConjType_20));
#line 1399 "lco.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 2) = ((MR_Box) (transform_hlds__lco__Goals_22));
#line 1399 "lco.m"
                      }
#line 1400 "lco.m"
                      transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1396 "lco.m"
                    }
#line 1394 "lco.m"
                }
#line 1405 "lco.m"
              else
#line 1405 "lco.m"
                if (((((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1406 "lco.m"
                  {
#line 1406 "lco.m"
                    MR_Word transform_hlds__lco__TypeCtorInfo_102_102;
#line 1406 "lco.m"
                    MR_Word transform_hlds__lco__DisjsChanged_25;
#line 1406 "lco.m"
                    MR_Word transform_hlds__lco__V_88_88;
#line 1406 "lco.m"
                    MR_Word transform_hlds__lco__Goals0_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 1)));
#line 1406 "lco.m"
                    MR_Word transform_hlds__lco__Goals_96;
#line 1407 "lco.m"
                    MR_Box transform_hlds__lco__conv3_STATE_VARIABLE_ProcInfo_74;

#line 1408 "lco.m"
                    {
#line 1408 "lco.m"
                      transform_hlds__lco__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1408 "lco.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_88_88, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_8[1]));
#line 1408 "lco.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_88_88, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_goal_9_p_0_1));
#line 1408 "lco.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_88_88, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1408 "lco.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_88_88, 3) = ((MR_Box) (transform_hlds__lco__ModuleInfo_10));
#line 1408 "lco.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_88_88, 4) = ((MR_Box) (transform_hlds__lco__VariantMap_11));
#line 1408 "lco.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_88_88, 5) = ((MR_Box) ((transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12));
#line 1408 "lco.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_88_88, 6) = ((MR_Box) (transform_hlds__lco__InstMap0_13));
#line 1408 "lco.m"
                    }
#line 7640 "transform_hlds.lco.c"
                    transform_hlds__lco__TypeCtorInfo_102_102 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1407 "lco.m"
                    {
#line 1407 "lco.m"
                      mercury__list__map2_foldl_6_p_0(transform_hlds__lco__TypeCtorInfo_102_102, transform_hlds__lco__TypeCtorInfo_102_102, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__lco__V_88_88, transform_hlds__lco__Goals0_95, &transform_hlds__lco__Goals_96, &transform_hlds__lco__DisjsChanged_25, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73)), &transform_hlds__lco__conv3_STATE_VARIABLE_ProcInfo_74);
                    }
#line 1407 "lco.m"
                    *transform_hlds__lco__STATE_VARIABLE_ProcInfo_74 = ((MR_Word) transform_hlds__lco__conv3_STATE_VARIABLE_ProcInfo_74);
#line 1411 "lco.m"
                    {
#line 1411 "lco.m"
                      *transform_hlds__lco__Changed_16 = mercury__bool__or_list_1_f_0(transform_hlds__lco__DisjsChanged_25);
                    }
#line 1412 "lco.m"
                    {
#line 1412 "lco.m"
                      transform_hlds__lco__GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1412 "lco.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1412 "lco.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 1) = ((MR_Box) (transform_hlds__lco__Goals_96));
#line 1412 "lco.m"
                    }
#line 1413 "lco.m"
                    transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1406 "lco.m"
                  }
#line 1405 "lco.m"
                else
#line 1405 "lco.m"
                  if (((((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1467 "lco.m"
                    {
#line 1468 "lco.m"
                      {
#line 1468 "lco.m"
                        transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__GoalInfo0_19, transform_hlds__lco__GoalExpr0_18, &transform_hlds__lco__GoalExpr_23, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
                      }
#line 1470 "lco.m"
                      transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1467 "lco.m"
                    }
#line 1405 "lco.m"
                  else
#line 1405 "lco.m"
                    if (((((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1424 "lco.m"
                      {
#line 1424 "lco.m"
                        MR_Word transform_hlds__lco__Vars_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 1)));
#line 1424 "lco.m"
                        MR_Word transform_hlds__lco__Cond_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 2)));
#line 1424 "lco.m"
                        MR_Word transform_hlds__lco__Then0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 3)));
#line 1424 "lco.m"
                        MR_Word transform_hlds__lco__Else0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 4)));
#line 1424 "lco.m"
                        MR_Word transform_hlds__lco__InstMap1_35;
#line 1424 "lco.m"
                        MR_Word transform_hlds__lco__Then_36;
#line 1424 "lco.m"
                        MR_Word transform_hlds__lco__ThenChanged_37;
#line 1424 "lco.m"
                        MR_Word transform_hlds__lco__Else_38;
#line 1424 "lco.m"
                        MR_Word transform_hlds__lco__ElseChanged_39;
#line 1424 "lco.m"
                        MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_84_84;

#line 1425 "lco.m"
                        {
#line 1425 "lco.m"
                          hlds__goal_util__update_instmap_3_p_0(transform_hlds__lco__Cond_32, transform_hlds__lco__InstMap0_13, &transform_hlds__lco__InstMap1_35);
                        }
#line 1426 "lco.m"
                        {
#line 1426 "lco.m"
                          transform_hlds__lco__lco_transform_variant_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VariantMap_11, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap1_35, transform_hlds__lco__Then0_33, &transform_hlds__lco__Then_36, &transform_hlds__lco__ThenChanged_37, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_84_84);
                        }
#line 1428 "lco.m"
                        {
#line 1428 "lco.m"
                          transform_hlds__lco__lco_transform_variant_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VariantMap_11, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__Else0_34, &transform_hlds__lco__Else_38, &transform_hlds__lco__ElseChanged_39, transform_hlds__lco__STATE_VARIABLE_ProcInfo_84_84, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
                        }
#line 1430 "lco.m"
                        {
#line 1430 "lco.m"
                          *transform_hlds__lco__Changed_16 = mercury__bool__or_2_f_0(transform_hlds__lco__ThenChanged_37, transform_hlds__lco__ElseChanged_39);
                        }
#line 1431 "lco.m"
                        {
#line 1431 "lco.m"
                          transform_hlds__lco__GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1431 "lco.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1431 "lco.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 1) = ((MR_Box) (transform_hlds__lco__Vars_31));
#line 1431 "lco.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 2) = ((MR_Box) (transform_hlds__lco__Cond_32));
#line 1431 "lco.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 3) = ((MR_Box) (transform_hlds__lco__Then_36));
#line 1431 "lco.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 4) = ((MR_Box) (transform_hlds__lco__Else_38));
#line 1431 "lco.m"
                        }
#line 1432 "lco.m"
                        transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1424 "lco.m"
                      }
#line 1405 "lco.m"
                    else
#line 1405 "lco.m"
                      if (((((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1434 "lco.m"
                        {
#line 1434 "lco.m"
                          MR_Word transform_hlds__lco__Reason_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 1)));
#line 1434 "lco.m"
                          MR_Word transform_hlds__lco__SubGoal0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 2)));
#line 1436 "lco.m"
                          MR_Word transform_hlds__lco__FGT_43;

#line 1436 "lco.m"
                          (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = ((((MR_tag((MR_Word) transform_hlds__lco__Reason_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_40, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1436 "lco.m"
                          if ((transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded)
#line 1436 "lco.m"
                            {
#line 1436 "lco.m"
                              (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVar_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_40, (MR_Integer) 1)));
#line 1436 "lco.m"
                              transform_hlds__lco__FGT_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_40, (MR_Integer) 2)));
#line 1438 "lco.m"
                              if ((transform_hlds__lco__FGT_43 == (MR_Integer) 1))
#line 1437 "lco.m"
                                (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = MR_TRUE;
#line 1438 "lco.m"
                              else
#line 1438 "lco.m"
                                if ((transform_hlds__lco__FGT_43 == (MR_Integer) 2))
#line 1438 "lco.m"
                                  (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = MR_TRUE;
#line 1438 "lco.m"
                                else
#line 1438 "lco.m"
                                  (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = MR_FALSE;
#line 1436 "lco.m"
                            }
#line 1455 "lco.m"
                          if ((transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded)
#line 1451 "lco.m"
                            {
#line 1442 "lco.m"
                              {
#line 1442 "lco.m"
                                transform_hlds__lco__lco_transform_variant_goal_9_p_0_5(&transform_hlds__lco__env);
                              }
#line 1451 "lco.m"
                              if ((transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded)
#line 1448 "lco.m"
                                {
#line 1448 "lco.m"
                                  transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__GoalInfo0_19, transform_hlds__lco__GoalExpr0_18, &transform_hlds__lco__GoalExpr_23, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
                                }
#line 1451 "lco.m"
                              else
#line 1452 "lco.m"
                                {
#line 1452 "lco.m"
                                  transform_hlds__lco__GoalExpr_23 = transform_hlds__lco__GoalExpr0_18;
#line 1453 "lco.m"
                                  *transform_hlds__lco__Changed_16 = (MR_Integer) 0;
#line 1453 "lco.m"
                                  *transform_hlds__lco__STATE_VARIABLE_ProcInfo_74 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73;
#line 1452 "lco.m"
                                }
#line 1451 "lco.m"
                            }
#line 1455 "lco.m"
                          else
#line 1457 "lco.m"
                            {
#line 1457 "lco.m"
                              MR_Word transform_hlds__lco__SubGoal_46;

#line 1456 "lco.m"
                              {
#line 1456 "lco.m"
                                transform_hlds__lco__lco_transform_variant_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VariantMap_11, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__SubGoal0_41, &transform_hlds__lco__SubGoal_46, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
                              }
#line 1458 "lco.m"
                              {
#line 1458 "lco.m"
                                transform_hlds__lco__GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1458 "lco.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1458 "lco.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 1) = ((MR_Box) (transform_hlds__lco__Reason_40));
#line 1458 "lco.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 2) = ((MR_Box) (transform_hlds__lco__SubGoal_46));
#line 1458 "lco.m"
                              }
#line 1457 "lco.m"
                            }
#line 1460 "lco.m"
                          transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1434 "lco.m"
                        }
#line 1405 "lco.m"
                      else
#line 1405 "lco.m"
                        if (((((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1487 "lco.m"
                          {
#line 1489 "lco.m"
                            {
#line 1489 "lco.m"
                              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.lco_transform_variant_goal\'/9", (MR_String) "shorthand");
#line 1489 "lco.m"
                              return;
                            }
#line 1487 "lco.m"
                          }
#line 1405 "lco.m"
                        else
#line 1415 "lco.m"
                          {
#line 1415 "lco.m"
                            MR_Word transform_hlds__lco__TypeCtorInfo_110_110;
#line 1415 "lco.m"
                            MR_Word transform_hlds__lco__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 1)));
#line 1415 "lco.m"
                            MR_Word transform_hlds__lco__CanFail_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 2)));
#line 1415 "lco.m"
                            MR_Word transform_hlds__lco__Cases0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 3)));
#line 1415 "lco.m"
                            MR_Word transform_hlds__lco__Cases_29;
#line 1415 "lco.m"
                            MR_Word transform_hlds__lco__CasesChanged_30;
#line 1415 "lco.m"
                            MR_Word transform_hlds__lco__V_86_86;
#line 1416 "lco.m"
                            MR_Box transform_hlds__lco__conv8_STATE_VARIABLE_ProcInfo_74;

#line 1417 "lco.m"
                            {
#line 1417 "lco.m"
                              transform_hlds__lco__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1417 "lco.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_86_86, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_8[2]));
#line 1417 "lco.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_86_86, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_goal_9_p_0_6));
#line 1417 "lco.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_86_86, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1417 "lco.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_86_86, 3) = ((MR_Box) (transform_hlds__lco__ModuleInfo_10));
#line 1417 "lco.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_86_86, 4) = ((MR_Box) (transform_hlds__lco__VariantMap_11));
#line 1417 "lco.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_86_86, 5) = ((MR_Box) ((transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12));
#line 1417 "lco.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_86_86, 6) = ((MR_Box) (transform_hlds__lco__InstMap0_13));
#line 1417 "lco.m"
                            }
#line 7905 "transform_hlds.lco.c"
                            transform_hlds__lco__TypeCtorInfo_110_110 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 1416 "lco.m"
                            {
#line 1416 "lco.m"
                              mercury__list__map2_foldl_6_p_0(transform_hlds__lco__TypeCtorInfo_110_110, transform_hlds__lco__TypeCtorInfo_110_110, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__lco__V_86_86, transform_hlds__lco__Cases0_28, &transform_hlds__lco__Cases_29, &transform_hlds__lco__CasesChanged_30, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73)), &transform_hlds__lco__conv8_STATE_VARIABLE_ProcInfo_74);
                            }
#line 1416 "lco.m"
                            *transform_hlds__lco__STATE_VARIABLE_ProcInfo_74 = ((MR_Word) transform_hlds__lco__conv8_STATE_VARIABLE_ProcInfo_74);
#line 1420 "lco.m"
                            {
#line 1420 "lco.m"
                              *transform_hlds__lco__Changed_16 = mercury__bool__or_list_1_f_0(transform_hlds__lco__CasesChanged_30);
                            }
#line 1421 "lco.m"
                            {
#line 1421 "lco.m"
                              transform_hlds__lco__GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1421 "lco.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1421 "lco.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 1) = ((MR_Box) (transform_hlds__lco__Var_26));
#line 1421 "lco.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 2) = ((MR_Box) (transform_hlds__lco__CanFail_27));
#line 1421 "lco.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 3) = ((MR_Box) (transform_hlds__lco__Cases_29));
#line 1421 "lco.m"
                            }
#line 1422 "lco.m"
                            transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1415 "lco.m"
                          }
#line 1497 "lco.m"
      if ((*transform_hlds__lco__Changed_16 == (MR_Integer) 0))
#line 1499 "lco.m"
        *transform_hlds__lco__Goal_15 = transform_hlds__lco__Goal0_14;
#line 1497 "lco.m"
      else
#line 1492 "lco.m"
        {
#line 1492 "lco.m"
          MR_Word transform_hlds__lco__GoalInfoImpure_72;

#line 1495 "lco.m"
          {
#line 1495 "lco.m"
            hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, transform_hlds__lco__GoalInfo_24, &transform_hlds__lco__GoalInfoImpure_72);
          }
#line 1496 "lco.m"
          {
#line 1496 "lco.m"
            MR_Word base;
#line 1496 "lco.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1496 "lco.m"
            *transform_hlds__lco__Goal_15 = base;
#line 1496 "lco.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__GoalExpr_23));
#line 1496 "lco.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__GoalInfoImpure_72));
#line 1496 "lco.m"
          }
#line 1492 "lco.m"
        }
#line 1391 "lco.m"
    }
#line 1386 "lco.m"
  }
#line 1386 "lco.m"
}

#line 1325 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__make_addr_vars_12_p_0_1(
#line 1325 "lco.m"
  MR_Box transform_hlds__lco__closure_arg)
#line 1325 "lco.m"
{
#line 1325 "lco.m"
  {
#line 1325 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1325 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

#line 1325 "lco.m"
    {
#line 1325 "lco.m"
      return transform_hlds__lco__succeeded = transform_hlds__lco__IntroducedFrom__pred__make_addr_vars__1325__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))));
    }
#line 1325 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1325 "lco.m"
  }
#line 1325 "lco.m"
}

#line 1318 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_addr_vars_12_p_0(
#line 1318 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 1318 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 1318 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__3_3,
#line 1318 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__4_4,
#line 1318 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 1318 "lco.m"
  MR_Integer transform_hlds__lco__NextOutArgNum_6,
#line 1318 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_7,
#line 1318 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__8_8,
#line 1318 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VarSet_0_9,
#line 1318 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VarSet_10,
#line 1318 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11,
#line 1318 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VarTypes_12)
#line 1318 "lco.m"
{
#line 1324 "lco.m"
  {
#line 1324 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1324 "lco.m"
    if ((transform_hlds__lco__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1324 "lco.m"
      if ((transform_hlds__lco__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1324 "lco.m"
        {
#line 1324 "lco.m"
          MR_Word transform_hlds__lco__V_22_22;

#line 1323 "lco.m"
          *transform_hlds__lco__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1323 "lco.m"
          *transform_hlds__lco__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1323 "lco.m"
          *transform_hlds__lco__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1325 "lco.m"
          {
#line 1325 "lco.m"
            transform_hlds__lco__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1325 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_22_22, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_7[6]));
#line 1325 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_22_22, 1) = ((MR_Box) (transform_hlds__lco__make_addr_vars_12_p_0_1));
#line 1325 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1325 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_22_22, 3) = ((MR_Box) (transform_hlds__lco__HeadVar__5_5));
#line 1325 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_22_22, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1325 "lco.m"
          }
#line 1325 "lco.m"
          {
#line 1325 "lco.m"
            mercury__require__expect_3_p_0(transform_hlds__lco__V_22_22, (MR_String) "transform_hlds.lco", (MR_String) "make_addr_vars: AddrOutArgs != []");
          }
#line 1324 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_VarTypes_12 = transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11;
#line 1324 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_VarSet_10 = transform_hlds__lco__STATE_VARIABLE_VarSet_0_9;
#line 1324 "lco.m"
        }
#line 1324 "lco.m"
      else
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
#line 1324 "lco.m"
    else
#line 1324 "lco.m"
      {
#line 1324 "lco.m"
        MR_Word transform_hlds__lco__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 1324 "lco.m"
        MR_Word transform_hlds__lco__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));

#line 1324 "lco.m"
        if ((transform_hlds__lco__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1329 "lco.m"
          {
#line 1330 "lco.m"
            {
#line 1330 "lco.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.make_addr_vars\'/12", (MR_String) "mismatched lists");
#line 1330 "lco.m"
              return;
            }
#line 1329 "lco.m"
          }
#line 1324 "lco.m"
        else
#line 1333 "lco.m"
          {
#line 1333 "lco.m"
            MR_Word transform_hlds__lco__Mode0_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 1333 "lco.m"
            MR_Word transform_hlds__lco__Modes0_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 1333 "lco.m"
            MR_Word transform_hlds__lco__HeadVar_64;
#line 1333 "lco.m"
            MR_Word transform_hlds__lco__HeadVars_65;
#line 1333 "lco.m"
            MR_Word transform_hlds__lco__Mode_66;
#line 1333 "lco.m"
            MR_Word transform_hlds__lco__Modes_67;
#line 1333 "lco.m"
            MR_Word transform_hlds__lco__HeadVarType_74;
#line 1333 "lco.m"
            MR_Word transform_hlds__lco__ArgMode_75;

#line 1334 "lco.m"
            {
#line 1334 "lco.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11, transform_hlds__lco__V_133_133, &transform_hlds__lco__HeadVarType_74);
            }
#line 1335 "lco.m"
            {
#line 1335 "lco.m"
              check_hlds__mode_util__mode_to_arg_mode_4_p_0(transform_hlds__lco__ModuleInfo_7, transform_hlds__lco__Mode0_62, transform_hlds__lco__HeadVarType_74, &transform_hlds__lco__ArgMode_75);
            }
#line 1342 "lco.m"
            if ((transform_hlds__lco__ArgMode_75 == (MR_Integer) 0))
#line 1337 "lco.m"
              {
#line 1338 "lco.m"
                transform_hlds__lco__HeadVar_64 = transform_hlds__lco__V_133_133;
#line 1339 "lco.m"
                transform_hlds__lco__Mode_66 = transform_hlds__lco__Mode0_62;
#line 1340 "lco.m"
                {
#line 1340 "lco.m"
                  transform_hlds__lco__make_addr_vars_12_p_0(transform_hlds__lco__V_132_132, transform_hlds__lco__Modes0_63, &transform_hlds__lco__HeadVars_65, &transform_hlds__lco__Modes_67, transform_hlds__lco__HeadVar__5_5, transform_hlds__lco__NextOutArgNum_6, transform_hlds__lco__ModuleInfo_7, transform_hlds__lco__HeadVar__8_8, transform_hlds__lco__STATE_VARIABLE_VarSet_0_9, transform_hlds__lco__STATE_VARIABLE_VarSet_10, transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11, transform_hlds__lco__STATE_VARIABLE_VarTypes_12);
                }
#line 1337 "lco.m"
              }
#line 1342 "lco.m"
            else
#line 1342 "lco.m"
              if ((transform_hlds__lco__ArgMode_75 == (MR_Integer) 1))
#line 1343 "lco.m"
                {
#line 1343 "lco.m"
                  MR_Word transform_hlds__lco__MaybeFieldId_77;
#line 1343 "lco.m"
                  MR_Word transform_hlds__lco__STATE_VARIABLE_AddrOutArgs_97_97;
#line 1345 "lco.m"
                  MR_Word transform_hlds__lco__AddrOutArg_76;
#line 1345 "lco.m"
                  MR_Integer transform_hlds__lco__V_131_131;

#line 1345 "lco.m"
                  transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__HeadVar__5_5)) == (MR_mktag((MR_Integer) 1)));
#line 1345 "lco.m"
                  if (transform_hlds__lco__succeeded)
#line 1345 "lco.m"
                    {
#line 1345 "lco.m"
                      transform_hlds__lco__AddrOutArg_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__5_5, (MR_Integer) 0)));
#line 1345 "lco.m"
                      transform_hlds__lco__STATE_VARIABLE_AddrOutArgs_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__5_5, (MR_Integer) 1)));
#line 1346 "lco.m"
                      transform_hlds__lco__V_131_131 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__AddrOutArg_76, (MR_Integer) 0)));
#line 1346 "lco.m"
                      transform_hlds__lco__MaybeFieldId_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__AddrOutArg_76, (MR_Integer) 1)));
#line 1346 "lco.m"
                      transform_hlds__lco__succeeded = (transform_hlds__lco__NextOutArgNum_6 == transform_hlds__lco__V_131_131);
#line 1345 "lco.m"
                    }
#line 1343 "lco.m"
                  if (transform_hlds__lco__succeeded)
#line 1348 "lco.m"
                    {
#line 1348 "lco.m"
                      MR_Word transform_hlds__lco__TypeCtorInfo_130_130 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1348 "lco.m"
                      MR_String transform_hlds__lco__Name_78;
#line 1348 "lco.m"
                      MR_String transform_hlds__lco__AddrName_79;
#line 1348 "lco.m"
                      MR_Word transform_hlds__lco__OldType_81;
#line 1348 "lco.m"
                      MR_Word transform_hlds__lco__VarToAddrTail_87;
#line 1348 "lco.m"
                      MR_Word transform_hlds__lco__VarToAddrHead_88;
#line 1348 "lco.m"
                      MR_Word transform_hlds__lco__STATE_VARIABLE_VarSet_99_99;
#line 1348 "lco.m"
                      MR_Word transform_hlds__lco__STATE_VARIABLE_VarTypes_108_108;
#line 1348 "lco.m"
                      MR_Integer transform_hlds__lco__V_109_109;
#line 1348 "lco.m"
                      MR_Word transform_hlds__lco__V_113_113;

#line 1348 "lco.m"
                      {
#line 1348 "lco.m"
                        mercury__varset__lookup_name_3_p_0(transform_hlds__lco__TypeCtorInfo_130_130, transform_hlds__lco__STATE_VARIABLE_VarSet_0_9, transform_hlds__lco__V_133_133, &transform_hlds__lco__Name_78);
                      }
#line 1349 "lco.m"
                      {
#line 1349 "lco.m"
                        transform_hlds__lco__AddrName_79 = mercury__string__f_43_43_2_f_0((MR_String) "AddrOf", transform_hlds__lco__Name_78);
                      }
#line 1350 "lco.m"
                      {
#line 1350 "lco.m"
                        mercury__varset__new_named_var_4_p_0(transform_hlds__lco__TypeCtorInfo_130_130, transform_hlds__lco__AddrName_79, &transform_hlds__lco__HeadVar_64, transform_hlds__lco__STATE_VARIABLE_VarSet_0_9, &transform_hlds__lco__STATE_VARIABLE_VarSet_99_99);
                      }
#line 1352 "lco.m"
                      {
#line 1352 "lco.m"
                        parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11, transform_hlds__lco__V_133_133, &transform_hlds__lco__OldType_81);
                      }
#line 1359 "lco.m"
                      if ((transform_hlds__lco__MaybeFieldId_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1354 "lco.m"
                        {
#line 1354 "lco.m"
                          MR_Word transform_hlds__lco__V_107_107;

#line 1357 "lco.m"
                          {
#line 1357 "lco.m"
                            transform_hlds__lco__V_107_107 = transform_hlds__lco__make_ref_type_1_f_0(transform_hlds__lco__OldType_81);
                          }
#line 1357 "lco.m"
                          {
#line 1357 "lco.m"
                            parse_tree__prog_data__add_var_type_4_p_0(transform_hlds__lco__HeadVar_64, transform_hlds__lco__V_107_107, transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11, &transform_hlds__lco__STATE_VARIABLE_VarTypes_108_108);
                          }
#line 1358 "lco.m"
                          {
#line 1358 "lco.m"
                            transform_hlds__lco__Mode_66 = parse_tree__prog_mode__in_mode_0_f_0();
                          }
#line 1354 "lco.m"
                        }
#line 1359 "lco.m"
                      else
#line 1360 "lco.m"
                        {
#line 1360 "lco.m"
                          MR_Word transform_hlds__lco__AddrVarType_82;
#line 1360 "lco.m"
                          MR_Word transform_hlds__lco__ConsId_83;
#line 1360 "lco.m"
                          MR_Integer transform_hlds__lco__ArgNum_84;
#line 1360 "lco.m"
                          MR_Word transform_hlds__lco__BoundInst_85;
#line 1360 "lco.m"
                          MR_Word transform_hlds__lco__InitialInst_86;
#line 1360 "lco.m"
                          MR_Word transform_hlds__lco__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__MaybeFieldId_77, (MR_Integer) 0)));
#line 1360 "lco.m"
                          MR_Word transform_hlds__lco__V_104_104;
#line 1360 "lco.m"
                          MR_Word transform_hlds__lco__V_106_106;

#line 1360 "lco.m"
                          transform_hlds__lco__AddrVarType_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_100_100, (MR_Integer) 0)));
#line 1360 "lco.m"
                          transform_hlds__lco__ConsId_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_100_100, (MR_Integer) 1)));
#line 1360 "lco.m"
                          transform_hlds__lco__ArgNum_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_100_100, (MR_Integer) 2)));
#line 1364 "lco.m"
                          {
#line 1364 "lco.m"
                            parse_tree__prog_data__add_var_type_4_p_0(transform_hlds__lco__HeadVar_64, transform_hlds__lco__AddrVarType_82, transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11, &transform_hlds__lco__STATE_VARIABLE_VarTypes_108_108);
                          }
#line 1365 "lco.m"
                          {
#line 1365 "lco.m"
                            transform_hlds__lco__BoundInst_85 = transform_hlds__lco__bound_inst_with_free_arg_2_f_0(transform_hlds__lco__ConsId_83, transform_hlds__lco__ArgNum_84);
                          }
#line 1366 "lco.m"
                          {
#line 1366 "lco.m"
                            transform_hlds__lco__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1366 "lco.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__lco__V_104_104, 0) = ((MR_Box) (transform_hlds__lco__BoundInst_85));
#line 1366 "lco.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__lco__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1366 "lco.m"
                          }
#line 1366 "lco.m"
                          {
#line 1366 "lco.m"
                            transform_hlds__lco__InitialInst_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1366 "lco.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__lco__InitialInst_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1366 "lco.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__lco__InitialInst_86, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1366 "lco.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__lco__InitialInst_86, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1366 "lco.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__lco__InitialInst_86, 3) = ((MR_Box) (transform_hlds__lco__V_104_104));
#line 1366 "lco.m"
                          }
#line 1367 "lco.m"
                          {
#line 1367 "lco.m"
                            transform_hlds__lco__V_106_106 = parse_tree__prog_mode__ground_inst_0_f_0();
                          }
#line 1367 "lco.m"
                          {
#line 1367 "lco.m"
                            transform_hlds__lco__Mode_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1367 "lco.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__lco__Mode_66, 0) = ((MR_Box) (transform_hlds__lco__InitialInst_86));
#line 1367 "lco.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__lco__Mode_66, 1) = ((MR_Box) (transform_hlds__lco__V_106_106));
#line 1367 "lco.m"
                          }
#line 1360 "lco.m"
                        }
#line 1370 "lco.m"
                      transform_hlds__lco__V_109_109 = (transform_hlds__lco__NextOutArgNum_6 + (MR_Integer) 1);
#line 1369 "lco.m"
                      {
#line 1369 "lco.m"
                        transform_hlds__lco__make_addr_vars_12_p_0(transform_hlds__lco__V_132_132, transform_hlds__lco__Modes0_63, &transform_hlds__lco__HeadVars_65, &transform_hlds__lco__Modes_67, transform_hlds__lco__STATE_VARIABLE_AddrOutArgs_97_97, transform_hlds__lco__V_109_109, transform_hlds__lco__ModuleInfo_7, &transform_hlds__lco__VarToAddrTail_87, transform_hlds__lco__STATE_VARIABLE_VarSet_99_99, transform_hlds__lco__STATE_VARIABLE_VarSet_10, transform_hlds__lco__STATE_VARIABLE_VarTypes_108_108, transform_hlds__lco__STATE_VARIABLE_VarTypes_12);
                      }
#line 1372 "lco.m"
                      {
#line 1372 "lco.m"
                        transform_hlds__lco__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1372 "lco.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__lco__V_113_113, 0) = ((MR_Box) (transform_hlds__lco__HeadVar_64));
#line 1372 "lco.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__lco__V_113_113, 1) = ((MR_Box) (transform_hlds__lco__MaybeFieldId_77));
#line 1372 "lco.m"
                      }
#line 1372 "lco.m"
                      {
#line 1372 "lco.m"
                        transform_hlds__lco__VarToAddrHead_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1372 "lco.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__lco__VarToAddrHead_88, 0) = ((MR_Box) (transform_hlds__lco__V_133_133));
#line 1372 "lco.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__lco__VarToAddrHead_88, 1) = ((MR_Box) (transform_hlds__lco__V_113_113));
#line 1372 "lco.m"
                      }
#line 1373 "lco.m"
                      {
#line 1373 "lco.m"
                        MR_Word base;
#line 1373 "lco.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1373 "lco.m"
                        *transform_hlds__lco__HeadVar__8_8 = base;
#line 1373 "lco.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__VarToAddrHead_88));
#line 1373 "lco.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__VarToAddrTail_87));
#line 1373 "lco.m"
                      }
#line 1348 "lco.m"
                    }
#line 1343 "lco.m"
                  else
#line 1375 "lco.m"
                    {
#line 1375 "lco.m"
                      MR_Integer transform_hlds__lco__V_114_114;

#line 1375 "lco.m"
                      transform_hlds__lco__HeadVar_64 = transform_hlds__lco__V_133_133;
#line 1376 "lco.m"
                      transform_hlds__lco__Mode_66 = transform_hlds__lco__Mode0_62;
#line 1378 "lco.m"
                      transform_hlds__lco__V_114_114 = (transform_hlds__lco__NextOutArgNum_6 + (MR_Integer) 1);
#line 1377 "lco.m"
                      {
#line 1377 "lco.m"
                        transform_hlds__lco__make_addr_vars_12_p_0(transform_hlds__lco__V_132_132, transform_hlds__lco__Modes0_63, &transform_hlds__lco__HeadVars_65, &transform_hlds__lco__Modes_67, transform_hlds__lco__HeadVar__5_5, transform_hlds__lco__V_114_114, transform_hlds__lco__ModuleInfo_7, transform_hlds__lco__HeadVar__8_8, transform_hlds__lco__STATE_VARIABLE_VarSet_0_9, transform_hlds__lco__STATE_VARIABLE_VarSet_10, transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11, transform_hlds__lco__STATE_VARIABLE_VarTypes_12);
                      }
#line 1375 "lco.m"
                    }
#line 1343 "lco.m"
                }
#line 1342 "lco.m"
              else
#line 1382 "lco.m"
                {
#line 1383 "lco.m"
                  {
#line 1383 "lco.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.make_addr_vars\'/12", (MR_String) "top_unused");
#line 1383 "lco.m"
                    return;
                  }
#line 1382 "lco.m"
                }
#line 1332 "lco.m"
            {
#line 1332 "lco.m"
              MR_Word base;
#line 1332 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1332 "lco.m"
              *transform_hlds__lco__HeadVar__3_3 = base;
#line 1332 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__HeadVar_64));
#line 1332 "lco.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__HeadVars_65));
#line 1332 "lco.m"
            }
#line 1332 "lco.m"
            {
#line 1332 "lco.m"
              MR_Word base;
#line 1332 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1332 "lco.m"
              *transform_hlds__lco__HeadVar__4_4 = base;
#line 1332 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Mode_66));
#line 1332 "lco.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__Modes_67));
#line 1332 "lco.m"
            }
#line 1333 "lco.m"
          }
#line 1324 "lco.m"
      }
#line 1324 "lco.m"
  }
#line 1318 "lco.m"
}

#line 1273 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__occurs_once_2_p_0(
#line 1273 "lco.m"
  MR_Word transform_hlds__lco__Bag_3,
#line 1273 "lco.m"
  MR_Word transform_hlds__lco__Var_4)
#line 1273 "lco.m"
{
#line 1275 "lco.m"
  {
#line 1275 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1275 "lco.m"
    MR_Integer transform_hlds__lco__V_7_7;

#line 1276 "lco.m"
    {
#line 1276 "lco.m"
      mercury__bag__count_value_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[4], transform_hlds__lco__Bag_3, ((MR_Box) (transform_hlds__lco__Var_4)), &transform_hlds__lco__V_7_7);
    }
#line 1276 "lco.m"
    transform_hlds__lco__succeeded = ((MR_Integer) 1 == transform_hlds__lco__V_7_7);
#line 1275 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1275 "lco.m"
  }
#line 1273 "lco.m"
}

#line 1264 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_mode_2_p_0(
#line 1264 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_3,
#line 1264 "lco.m"
  MR_Word transform_hlds__lco__UniMode_4)
#line 1264 "lco.m"
{
#line 1266 "lco.m"
  {
#line 1266 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1266 "lco.m"
    MR_Word transform_hlds__lco__InitInstX_5;
#line 1266 "lco.m"
    MR_Word transform_hlds__lco__InitInstY_6;
#line 1266 "lco.m"
    MR_Word transform_hlds__lco__FinalInstX_7;
#line 1266 "lco.m"
    MR_Word transform_hlds__lco__FinalInstY_8;
#line 1266 "lco.m"
    MR_Word transform_hlds__lco__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_4, (MR_Integer) 0)));
#line 1266 "lco.m"
    MR_Word transform_hlds__lco__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_4, (MR_Integer) 1)));

#line 1267 "lco.m"
    transform_hlds__lco__InitInstX_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_9_9, (MR_Integer) 0)));
#line 1267 "lco.m"
    transform_hlds__lco__InitInstY_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_9_9, (MR_Integer) 1)));
#line 1267 "lco.m"
    transform_hlds__lco__FinalInstX_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_10_10, (MR_Integer) 0)));
#line 1267 "lco.m"
    transform_hlds__lco__FinalInstY_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_10_10, (MR_Integer) 1)));
#line 1268 "lco.m"
    {
#line 1268 "lco.m"
      transform_hlds__lco__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(transform_hlds__lco__ModuleInfo_3, transform_hlds__lco__InitInstX_5);
    }
#line 1266 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 1266 "lco.m"
      {
#line 1269 "lco.m"
        {
#line 1269 "lco.m"
          transform_hlds__lco__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(transform_hlds__lco__ModuleInfo_3, transform_hlds__lco__InitInstY_6);
        }
#line 1266 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1266 "lco.m"
          {
#line 1270 "lco.m"
            {
#line 1270 "lco.m"
              transform_hlds__lco__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(transform_hlds__lco__ModuleInfo_3, transform_hlds__lco__FinalInstX_7);
            }
#line 1266 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 1271 "lco.m"
              {
#line 1271 "lco.m"
                return transform_hlds__lco__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(transform_hlds__lco__ModuleInfo_3, transform_hlds__lco__FinalInstY_8);
              }
#line 1266 "lco.m"
          }
#line 1266 "lco.m"
      }
#line 1266 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1266 "lco.m"
  }
#line 1264 "lco.m"
}

#line 1254 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__bound_inst_with_free_arg_2_f_0(
#line 1254 "lco.m"
  MR_Word transform_hlds__lco__ConsId_4,
#line 1254 "lco.m"
  MR_Integer transform_hlds__lco__FreeArg_5)
#line 1254 "lco.m"
{
#line 1256 "lco.m"
  {
#line 1256 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1256 "lco.m"
    MR_Word transform_hlds__lco__Inst_6;
#line 1256 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_12_12;
#line 1256 "lco.m"
    MR_Integer transform_hlds__lco__Arity_7;
#line 1256 "lco.m"
    MR_Word transform_hlds__lco__ArgInsts0_8;
#line 1256 "lco.m"
    MR_Word transform_hlds__lco__ArgInsts_9;
#line 1256 "lco.m"
    MR_Word transform_hlds__lco__V_10_10;
#line 1256 "lco.m"
    MR_Word transform_hlds__lco__V_11_11;

#line 1257 "lco.m"
    {
#line 1257 "lco.m"
      transform_hlds__lco__Arity_7 = parse_tree__prog_util__cons_id_arity_1_f_0(transform_hlds__lco__ConsId_4);
    }
#line 1258 "lco.m"
    {
#line 1258 "lco.m"
      transform_hlds__lco__V_10_10 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 8597 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1258 "lco.m"
    {
#line 1258 "lco.m"
      mercury__list__duplicate_3_p_0(transform_hlds__lco__TypeCtorInfo_12_12, transform_hlds__lco__Arity_7, ((MR_Box) (transform_hlds__lco__V_10_10)), &transform_hlds__lco__ArgInsts0_8);
    }
#line 1259 "lco.m"
    {
#line 1259 "lco.m"
      transform_hlds__lco__V_11_11 = parse_tree__prog_mode__free_inst_0_f_0();
    }
#line 1259 "lco.m"
    {
#line 1259 "lco.m"
      mercury__list__det_replace_nth_4_p_0(transform_hlds__lco__TypeCtorInfo_12_12, transform_hlds__lco__ArgInsts0_8, transform_hlds__lco__FreeArg_5, ((MR_Box) (transform_hlds__lco__V_11_11)), &transform_hlds__lco__ArgInsts_9);
    }
#line 1260 "lco.m"
    {
#line 1260 "lco.m"
      transform_hlds__lco__Inst_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1260 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Inst_6, 0) = ((MR_Box) (transform_hlds__lco__ConsId_4));
#line 1260 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Inst_6, 1) = ((MR_Box) (transform_hlds__lco__ArgInsts_9));
#line 1260 "lco.m"
    }
#line 1256 "lco.m"
    return transform_hlds__lco__Inst_6;
#line 1256 "lco.m"
  }
#line 1254 "lco.m"
}

#line 1219 "lco.m"
static void MR_CALL 
transform_hlds__lco__update_construct_args_14_p_0(
#line 1219 "lco.m"
  MR_Word transform_hlds__lco__Subst_1,
#line 1219 "lco.m"
  MR_Word transform_hlds__lco__HighLevelData_2,
#line 1219 "lco.m"
  MR_Word transform_hlds__lco__VarType_3,
#line 1219 "lco.m"
  MR_Word transform_hlds__lco__ConsId_4,
#line 1219 "lco.m"
  MR_Integer transform_hlds__lco__ArgNum_5,
#line 1219 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__6_6,
#line 1219 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__7_7,
#line 1219 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__8_8,
#line 1219 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_InstMapDelta_0_9,
#line 1219 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_InstMapDelta_10,
#line 1219 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_0_11,
#line 1219 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_12,
#line 1219 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VarTypes_0_13,
#line 1219 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VarTypes_14)
#line 1219 "lco.m"
{
#line 1225 "lco.m"
  {
#line 1225 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1225 "lco.m"
    if ((transform_hlds__lco__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1225 "lco.m"
      {
#line 1225 "lco.m"
        *transform_hlds__lco__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1225 "lco.m"
        *transform_hlds__lco__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1226 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_VarTypes_14 = transform_hlds__lco__STATE_VARIABLE_VarTypes_0_13;
#line 1226 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_12 = transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_0_11;
#line 1226 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_InstMapDelta_10 = transform_hlds__lco__STATE_VARIABLE_InstMapDelta_0_9;
#line 1225 "lco.m"
      }
#line 1225 "lco.m"
    else
#line 1229 "lco.m"
      {
#line 1229 "lco.m"
        MR_Word transform_hlds__lco__OrigVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__6_6, (MR_Integer) 0)));
#line 1229 "lco.m"
        MR_Word transform_hlds__lco__OrigVars_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__6_6, (MR_Integer) 1)));
#line 1229 "lco.m"
        MR_Word transform_hlds__lco__UpdatedVar_36;
#line 1229 "lco.m"
        MR_Word transform_hlds__lco__UpdatedVars_37;
#line 1229 "lco.m"
        MR_Word transform_hlds__lco__AddrArgsTail_42;
#line 1229 "lco.m"
        MR_Integer transform_hlds__lco__V_52_52 = (transform_hlds__lco__ArgNum_5 + (MR_Integer) 1);
#line 1229 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_InstMapDelta_53_53;
#line 1229 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_54_54;
#line 1229 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_VarTypes_55_55;
#line 1249 "lco.m"
        MR_Word transform_hlds__lco__AddrVar_43;
#line 1233 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_65_65;
#line 1233 "lco.m"
        MR_Box transform_hlds__lco__conv0_AddrVar_43;

#line 1230 "lco.m"
        {
#line 1230 "lco.m"
          transform_hlds__lco__update_construct_args_14_p_0(transform_hlds__lco__Subst_1, transform_hlds__lco__HighLevelData_2, transform_hlds__lco__VarType_3, transform_hlds__lco__ConsId_4, transform_hlds__lco__V_52_52, transform_hlds__lco__OrigVars_35, &transform_hlds__lco__UpdatedVars_37, &transform_hlds__lco__AddrArgsTail_42, transform_hlds__lco__STATE_VARIABLE_InstMapDelta_0_9, &transform_hlds__lco__STATE_VARIABLE_InstMapDelta_53_53, transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_0_11, &transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_54_54, transform_hlds__lco__STATE_VARIABLE_VarTypes_0_13, &transform_hlds__lco__STATE_VARIABLE_VarTypes_55_55);
        }
#line 8719 "transform_hlds.lco.c"
        transform_hlds__lco__TypeInfo_65_65 = (MR_Word) &transform_hlds__lco_scalar_common_1[4];
#line 1233 "lco.m"
        {
#line 1233 "lco.m"
          transform_hlds__lco__succeeded = mercury__map__search_3_p_0(transform_hlds__lco__TypeInfo_65_65, transform_hlds__lco__TypeInfo_65_65, transform_hlds__lco__Subst_1, ((MR_Box) (transform_hlds__lco__OrigVar_34)), &transform_hlds__lco__conv0_AddrVar_43);
        }
#line 1233 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1233 "lco.m"
          {
#line 1233 "lco.m"
            transform_hlds__lco__AddrVar_43 = ((MR_Word) transform_hlds__lco__conv0_AddrVar_43);
#line 1233 "lco.m"
            transform_hlds__lco__succeeded = MR_TRUE;
#line 1233 "lco.m"
          }
#line 1249 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1234 "lco.m"
          {
#line 1234 "lco.m"
            MR_Word transform_hlds__lco__FinalInst_44;
#line 1234 "lco.m"
            MR_Word transform_hlds__lco__V_63_63;

#line 1234 "lco.m"
            transform_hlds__lco__UpdatedVar_36 = transform_hlds__lco__AddrVar_43;
#line 1238 "lco.m"
            if ((transform_hlds__lco__HighLevelData_2 == (MR_Integer) 0))
#line 1236 "lco.m"
              {
#line 1237 "lco.m"
                {
#line 1237 "lco.m"
                  transform_hlds__lco__FinalInst_44 = parse_tree__prog_mode__ground_inst_0_f_0();
                }
#line 1237 "lco.m"
                *transform_hlds__lco__STATE_VARIABLE_VarTypes_14 = transform_hlds__lco__STATE_VARIABLE_VarTypes_55_55;
#line 1236 "lco.m"
              }
#line 1238 "lco.m"
            else
#line 1239 "lco.m"
              {
#line 1239 "lco.m"
                MR_Word transform_hlds__lco__TypeCtorInfo_12_76;
#line 1239 "lco.m"
                MR_Word transform_hlds__lco__BoundInst_45;
#line 1239 "lco.m"
                MR_Word transform_hlds__lco__V_59_59;
#line 1239 "lco.m"
                MR_Integer transform_hlds__lco__Arity_71;
#line 1239 "lco.m"
                MR_Word transform_hlds__lco__ArgInsts0_72;
#line 1239 "lco.m"
                MR_Word transform_hlds__lco__ArgInsts_73;
#line 1239 "lco.m"
                MR_Word transform_hlds__lco__V_74_74;
#line 1239 "lco.m"
                MR_Word transform_hlds__lco__V_75_75;

#line 1257 "lco.m"
                {
#line 1257 "lco.m"
                  transform_hlds__lco__Arity_71 = parse_tree__prog_util__cons_id_arity_1_f_0(transform_hlds__lco__ConsId_4);
                }
#line 1258 "lco.m"
                {
#line 1258 "lco.m"
                  transform_hlds__lco__V_74_74 = parse_tree__prog_mode__ground_inst_0_f_0();
                }
#line 8791 "transform_hlds.lco.c"
                transform_hlds__lco__TypeCtorInfo_12_76 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1258 "lco.m"
                {
#line 1258 "lco.m"
                  mercury__list__duplicate_3_p_0(transform_hlds__lco__TypeCtorInfo_12_76, transform_hlds__lco__Arity_71, ((MR_Box) (transform_hlds__lco__V_74_74)), &transform_hlds__lco__ArgInsts0_72);
                }
#line 1259 "lco.m"
                {
#line 1259 "lco.m"
                  transform_hlds__lco__V_75_75 = parse_tree__prog_mode__free_inst_0_f_0();
                }
#line 1259 "lco.m"
                {
#line 1259 "lco.m"
                  mercury__list__det_replace_nth_4_p_0(transform_hlds__lco__TypeCtorInfo_12_76, transform_hlds__lco__ArgInsts0_72, transform_hlds__lco__ArgNum_5, ((MR_Box) (transform_hlds__lco__V_75_75)), &transform_hlds__lco__ArgInsts_73);
                }
#line 1260 "lco.m"
                {
#line 1260 "lco.m"
                  transform_hlds__lco__BoundInst_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1260 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__BoundInst_45, 0) = ((MR_Box) (transform_hlds__lco__ConsId_4));
#line 1260 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__BoundInst_45, 1) = ((MR_Box) (transform_hlds__lco__ArgInsts_73));
#line 1260 "lco.m"
                }
#line 1241 "lco.m"
                {
#line 1241 "lco.m"
                  transform_hlds__lco__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1241 "lco.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__lco__V_59_59, 0) = ((MR_Box) (transform_hlds__lco__BoundInst_45));
#line 1241 "lco.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__lco__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1241 "lco.m"
                }
#line 1241 "lco.m"
                {
#line 1241 "lco.m"
                  transform_hlds__lco__FinalInst_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1241 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__FinalInst_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1241 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__FinalInst_44, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1241 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__FinalInst_44, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1241 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__FinalInst_44, 3) = ((MR_Box) (transform_hlds__lco__V_59_59));
#line 1241 "lco.m"
                }
#line 1243 "lco.m"
                {
#line 1243 "lco.m"
                  parse_tree__prog_data__add_var_type_4_p_0(transform_hlds__lco__AddrVar_43, transform_hlds__lco__VarType_3, transform_hlds__lco__STATE_VARIABLE_VarTypes_55_55, transform_hlds__lco__STATE_VARIABLE_VarTypes_14);
                }
#line 1239 "lco.m"
              }
#line 1245 "lco.m"
            {
#line 1245 "lco.m"
              hlds__instmap__instmap_delta_set_var_4_p_0(transform_hlds__lco__AddrVar_43, transform_hlds__lco__FinalInst_44, transform_hlds__lco__STATE_VARIABLE_InstMapDelta_53_53, transform_hlds__lco__STATE_VARIABLE_InstMapDelta_10);
            }
#line 1246 "lco.m"
            {
#line 1246 "lco.m"
              transform_hlds__lco__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1246 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_63_63, 0) = ((MR_Box) (transform_hlds__lco__VarType_3));
#line 1246 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_63_63, 1) = ((MR_Box) (transform_hlds__lco__ConsId_4));
#line 1246 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_63_63, 2) = ((MR_Box) (transform_hlds__lco__ArgNum_5));
#line 1246 "lco.m"
            }
#line 1246 "lco.m"
            {
#line 1246 "lco.m"
              mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[4], (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0, ((MR_Box) (transform_hlds__lco__OrigVar_34)), ((MR_Box) (transform_hlds__lco__V_63_63)), transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_54_54, transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_12);
            }
#line 1248 "lco.m"
            {
#line 1248 "lco.m"
              MR_Word base;
#line 1248 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1248 "lco.m"
              *transform_hlds__lco__HeadVar__8_8 = base;
#line 1248 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__ArgNum_5));
#line 1248 "lco.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__AddrArgsTail_42));
#line 1248 "lco.m"
            }
#line 1234 "lco.m"
          }
#line 1249 "lco.m"
        else
#line 1250 "lco.m"
          {
#line 1250 "lco.m"
            transform_hlds__lco__UpdatedVar_36 = transform_hlds__lco__OrigVar_34;
#line 1251 "lco.m"
            *transform_hlds__lco__HeadVar__8_8 = transform_hlds__lco__AddrArgsTail_42;
#line 1251 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_VarTypes_14 = transform_hlds__lco__STATE_VARIABLE_VarTypes_55_55;
#line 1251 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_12 = transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_54_54;
#line 1251 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_InstMapDelta_10 = transform_hlds__lco__STATE_VARIABLE_InstMapDelta_53_53;
#line 1250 "lco.m"
          }
#line 1228 "lco.m"
        {
#line 1228 "lco.m"
          MR_Word base;
#line 1228 "lco.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1228 "lco.m"
          *transform_hlds__lco__HeadVar__7_7 = base;
#line 1228 "lco.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__UpdatedVar_36));
#line 1228 "lco.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__UpdatedVars_37));
#line 1228 "lco.m"
        }
#line 1229 "lco.m"
      }
#line 1225 "lco.m"
  }
#line 1219 "lco.m"
}

#line 1199 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__update_construct_8_p_0_1(
#line 1199 "lco.m"
  MR_Box transform_hlds__lco__closure_arg)
#line 1199 "lco.m"
{
#line 1199 "lco.m"
  {
#line 1199 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1199 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

#line 1199 "lco.m"
    {
#line 1199 "lco.m"
      return transform_hlds__lco__succeeded = transform_hlds__lco__IntroducedFrom__pred__update_construct__1199__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))));
    }
#line 1199 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1199 "lco.m"
  }
#line 1199 "lco.m"
}

#line 1153 "lco.m"
static void MR_CALL 
transform_hlds__lco__update_construct_8_p_0(
#line 1153 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_9,
#line 1153 "lco.m"
  MR_Word transform_hlds__lco__Subst_10,
#line 1153 "lco.m"
  MR_Word transform_hlds__lco__Goal0_11,
#line 1153 "lco.m"
  MR_Word * transform_hlds__lco__Goal_12,
#line 1153 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_AddrVarFieldIds_0_59,
#line 1153 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_AddrVarFieldIds_60,
#line 1153 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_61,
#line 1153 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_62)
#line 1153 "lco.m"
{
#line 1158 "lco.m"
  {
#line 1158 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1158 "lco.m"
    MR_Word transform_hlds__lco__GoalExpr0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal0_11, (MR_Integer) 0)));
#line 1158 "lco.m"
    MR_Word transform_hlds__lco__GoalInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal0_11, (MR_Integer) 1)));
#line 1215 "lco.m"
    MR_Word transform_hlds__lco__LHS_17;
#line 1215 "lco.m"
    MR_Word transform_hlds__lco__RHS0_18;
#line 1215 "lco.m"
    MR_Word transform_hlds__lco__Mode_19;
#line 1215 "lco.m"
    MR_Word transform_hlds__lco__UnifyContext_21;
#line 1215 "lco.m"
    MR_Word transform_hlds__lco__Var_22;
#line 1215 "lco.m"
    MR_Word transform_hlds__lco__ConsId_23;
#line 1215 "lco.m"
    MR_Word transform_hlds__lco__ArgVars_24;
#line 1215 "lco.m"
    MR_Word transform_hlds__lco__UniModes_25;
#line 1215 "lco.m"
    MR_Word transform_hlds__lco__How_26;
#line 1215 "lco.m"
    MR_Word transform_hlds__lco__IsUnique_27;
#line 1215 "lco.m"
    MR_Word transform_hlds__lco__TermSizeSlot_29;
#line 1161 "lco.m"
    MR_Word transform_hlds__lco__Unification0_20;
#line 1161 "lco.m"
    MR_Word transform_hlds__lco__SubInfo0_28;

#line 1161 "lco.m"
    transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_15)) == (MR_mktag((MR_Integer) 1)));
#line 1161 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 1161 "lco.m"
      {
#line 1161 "lco.m"
        transform_hlds__lco__LHS_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr0_15, (MR_Integer) 0)));
#line 1161 "lco.m"
        transform_hlds__lco__RHS0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr0_15, (MR_Integer) 1)));
#line 1161 "lco.m"
        transform_hlds__lco__Mode_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr0_15, (MR_Integer) 2)));
#line 1161 "lco.m"
        transform_hlds__lco__Unification0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr0_15, (MR_Integer) 3)));
#line 1161 "lco.m"
        transform_hlds__lco__UnifyContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr0_15, (MR_Integer) 4)));
#line 1162 "lco.m"
        transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__Unification0_20)) == (MR_mktag((MR_Integer) 0)));
#line 1162 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1162 "lco.m"
          {
#line 1162 "lco.m"
            transform_hlds__lco__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 0)));
#line 1162 "lco.m"
            transform_hlds__lco__ConsId_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 1)));
#line 1162 "lco.m"
            transform_hlds__lco__ArgVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 2)));
#line 1162 "lco.m"
            transform_hlds__lco__UniModes_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 3)));
#line 1162 "lco.m"
            transform_hlds__lco__How_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 4)));
#line 1162 "lco.m"
            transform_hlds__lco__IsUnique_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 5)));
#line 1162 "lco.m"
            transform_hlds__lco__SubInfo0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 6)));
#line 1167 "lco.m"
            if ((transform_hlds__lco__SubInfo0_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1166 "lco.m"
              {
#line 1166 "lco.m"
                transform_hlds__lco__TermSizeSlot_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1166 "lco.m"
                transform_hlds__lco__succeeded = MR_TRUE;
#line 1166 "lco.m"
              }
#line 1167 "lco.m"
            else
#line 1168 "lco.m"
              {
#line 1168 "lco.m"
                MR_Word transform_hlds__lco__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SubInfo0_28, (MR_Integer) 0)));

#line 1168 "lco.m"
                transform_hlds__lco__TermSizeSlot_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SubInfo0_28, (MR_Integer) 1)));
#line 1168 "lco.m"
                transform_hlds__lco__succeeded = (transform_hlds__lco__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1168 "lco.m"
              }
#line 1162 "lco.m"
          }
#line 1161 "lco.m"
      }
#line 1215 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 1176 "lco.m"
      {
#line 1176 "lco.m"
        MR_Word transform_hlds__lco__HighLevelData_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 7)));
#line 1176 "lco.m"
        MR_Word transform_hlds__lco__VarTypes0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 3)));
#line 1176 "lco.m"
        MR_Word transform_hlds__lco__VarType_32;
#line 1176 "lco.m"
        MR_Word transform_hlds__lco__InstMapDelta0_33;
#line 1176 "lco.m"
        MR_Word transform_hlds__lco__UpdatedArgVars_34;
#line 1176 "lco.m"
        MR_Word transform_hlds__lco__AddrFields_35;
#line 1176 "lco.m"
        MR_Word transform_hlds__lco__InstMapDelta_36;
#line 1176 "lco.m"
        MR_Word transform_hlds__lco__VarTypes_37;
#line 1176 "lco.m"
        MR_Word transform_hlds__lco__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 0)));
#line 1176 "lco.m"
        MR_Word transform_hlds__lco__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 1)));
#line 1176 "lco.m"
        MR_Word transform_hlds__lco__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 2)));
#line 1176 "lco.m"
        MR_Word transform_hlds__lco__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 3)));
#line 1176 "lco.m"
        MR_Word transform_hlds__lco__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 4)));
#line 1176 "lco.m"
        MR_Word transform_hlds__lco__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 5)));
#line 1176 "lco.m"
        MR_Word transform_hlds__lco__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 6)));
#line 1177 "lco.m"
        MR_Word transform_hlds__lco__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 0)));
#line 1177 "lco.m"
        MR_Word transform_hlds__lco__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 1)));
#line 1177 "lco.m"
        MR_Word transform_hlds__lco__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 2)));
#line 1177 "lco.m"
        MR_Word transform_hlds__lco__V_91_91 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 1177 "lco.m"
        MR_Word transform_hlds__lco__V_92_92 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1177 "lco.m"
        MR_Word transform_hlds__lco__V_93_93 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1183 "lco.m"
        MR_Word transform_hlds__lco__V_94_94;
#line 1183 "lco.m"
        MR_Word transform_hlds__lco__V_95_95;
#line 1183 "lco.m"
        MR_Word transform_hlds__lco__V_96_96;
#line 1183 "lco.m"
        MR_Word transform_hlds__lco__V_98_98;
#line 1183 "lco.m"
        MR_Word transform_hlds__lco__V_99_99;
#line 1183 "lco.m"
        MR_Word transform_hlds__lco__V_100_100;
#line 1183 "lco.m"
        MR_Word transform_hlds__lco__V_97_97;

#line 1178 "lco.m"
        {
#line 1178 "lco.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__lco__VarTypes0_31, transform_hlds__lco__Var_22, &transform_hlds__lco__VarType_32);
        }
#line 1179 "lco.m"
        {
#line 1179 "lco.m"
          transform_hlds__lco__InstMapDelta0_33 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__lco__GoalInfo0_16);
        }
#line 1180 "lco.m"
        {
#line 1180 "lco.m"
          transform_hlds__lco__update_construct_args_14_p_0(transform_hlds__lco__Subst_10, transform_hlds__lco__HighLevelData_30, transform_hlds__lco__VarType_32, transform_hlds__lco__ConsId_23, (MR_Integer) 1, transform_hlds__lco__ArgVars_24, &transform_hlds__lco__UpdatedArgVars_34, &transform_hlds__lco__AddrFields_35, transform_hlds__lco__InstMapDelta0_33, &transform_hlds__lco__InstMapDelta_36, transform_hlds__lco__STATE_VARIABLE_AddrVarFieldIds_0_59, transform_hlds__lco__STATE_VARIABLE_AddrVarFieldIds_60, transform_hlds__lco__VarTypes0_31, &transform_hlds__lco__VarTypes_37);
        }
#line 1183 "lco.m"
        transform_hlds__lco__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 0)));
#line 1183 "lco.m"
        transform_hlds__lco__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 1)));
#line 1183 "lco.m"
        transform_hlds__lco__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 2)));
#line 1183 "lco.m"
        transform_hlds__lco__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 3)));
#line 1183 "lco.m"
        transform_hlds__lco__V_98_98 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 1183 "lco.m"
        transform_hlds__lco__V_99_99 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1183 "lco.m"
        transform_hlds__lco__V_100_100 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1183 "lco.m"
        {
#line 1183 "lco.m"
          MR_Word base;
#line 1183 "lco.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1183 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_Info_62 = base;
#line 1183 "lco.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__V_94_94));
#line 1183 "lco.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__V_95_95));
#line 1183 "lco.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__V_96_96));
#line 1183 "lco.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lco__VarTypes_37));
#line 1183 "lco.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((transform_hlds__lco__V_98_98 | ((((transform_hlds__lco__V_99_99 << (MR_Integer) 1)) | ((transform_hlds__lco__V_100_100 << (MR_Integer) 2)))))));
#line 1183 "lco.m"
        }
#line 1187 "lco.m"
        if ((transform_hlds__lco__AddrFields_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1186 "lco.m"
          *transform_hlds__lco__Goal_12 = transform_hlds__lco__Goal0_11;
#line 1187 "lco.m"
        else
#line 1188 "lco.m"
          {
#line 1188 "lco.m"
            MR_Word transform_hlds__lco__SubInfo_40;
#line 1188 "lco.m"
            MR_Word transform_hlds__lco__Unification_41;
#line 1188 "lco.m"
            MR_Word transform_hlds__lco__RHS_47;
#line 1188 "lco.m"
            MR_Word transform_hlds__lco__GoalExpr_57;
#line 1188 "lco.m"
            MR_Word transform_hlds__lco__GoalInfo_58;
#line 1188 "lco.m"
            MR_Word transform_hlds__lco__V_67_67;

#line 1189 "lco.m"
            {
#line 1189 "lco.m"
              transform_hlds__lco__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1189 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__V_67_67, 0) = ((MR_Box) (transform_hlds__lco__AddrFields_35));
#line 1189 "lco.m"
            }
#line 1189 "lco.m"
            {
#line 1189 "lco.m"
              transform_hlds__lco__SubInfo_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1189 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__SubInfo_40, 0) = ((MR_Box) (transform_hlds__lco__V_67_67));
#line 1189 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__SubInfo_40, 1) = ((MR_Box) (transform_hlds__lco__TermSizeSlot_29));
#line 1189 "lco.m"
            }
#line 1190 "lco.m"
            {
#line 1190 "lco.m"
              transform_hlds__lco__Unification_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1190 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 0) = ((MR_Box) (transform_hlds__lco__Var_22));
#line 1190 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 1) = ((MR_Box) (transform_hlds__lco__ConsId_23));
#line 1190 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 2) = ((MR_Box) (transform_hlds__lco__UpdatedArgVars_34));
#line 1190 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 3) = ((MR_Box) (transform_hlds__lco__UniModes_25));
#line 1190 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 4) = ((MR_Box) (transform_hlds__lco__How_26));
#line 1190 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 5) = ((MR_Box) (transform_hlds__lco__IsUnique_27));
#line 1190 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 6) = ((MR_Box) (transform_hlds__lco__SubInfo_40));
#line 1190 "lco.m"
            }
#line 1197 "lco.m"
            if (((MR_tag((MR_Word) transform_hlds__lco__RHS0_18)) == (MR_mktag((MR_Integer) 1))))
#line 1198 "lco.m"
              {
#line 1198 "lco.m"
                MR_Word transform_hlds__lco__RHSConsId_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS0_18, (MR_Integer) 0)));
#line 1198 "lco.m"
                MR_Word transform_hlds__lco__IsExistConstr_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS0_18, (MR_Integer) 1)));
#line 1198 "lco.m"
                MR_Word transform_hlds__lco__RHSVars0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS0_18, (MR_Integer) 2)));
#line 1198 "lco.m"
                MR_Word transform_hlds__lco__RHSVars_46;
#line 1198 "lco.m"
                MR_Word transform_hlds__lco__V_71_71;

#line 1199 "lco.m"
                {
#line 1199 "lco.m"
                  transform_hlds__lco__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1199 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_71_71, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_7[5]));
#line 1199 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_71_71, 1) = ((MR_Box) (transform_hlds__lco__update_construct_8_p_0_1));
#line 1199 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1199 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_71_71, 3) = ((MR_Box) (transform_hlds__lco__ConsId_23));
#line 1199 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_71_71, 4) = ((MR_Box) (transform_hlds__lco__RHSConsId_43));
#line 1199 "lco.m"
                }
#line 1199 "lco.m"
                {
#line 1199 "lco.m"
                  mercury__require__expect_3_p_0(transform_hlds__lco__V_71_71, (MR_String) "transform_hlds.lco", (MR_String) "update_construct: cons_id mismatch");
                }
#line 1201 "lco.m"
                {
#line 1201 "lco.m"
                  parse_tree__prog_data__rename_var_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, transform_hlds__lco__Subst_10, transform_hlds__lco__RHSVars0_45, &transform_hlds__lco__RHSVars_46);
                }
#line 1202 "lco.m"
                {
#line 1202 "lco.m"
                  transform_hlds__lco__RHS_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1202 "lco.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS_47, 0) = ((MR_Box) (transform_hlds__lco__RHSConsId_43));
#line 1202 "lco.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS_47, 1) = ((MR_Box) (transform_hlds__lco__IsExistConstr_44));
#line 1202 "lco.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS_47, 2) = ((MR_Box) (transform_hlds__lco__RHSVars_46));
#line 1202 "lco.m"
                }
#line 1198 "lco.m"
              }
#line 1197 "lco.m"
            else
#line 1197 "lco.m"
              if (((MR_tag((MR_Word) transform_hlds__lco__RHS0_18)) == (MR_mktag((MR_Integer) 2))))
#line 1204 "lco.m"
                {
#line 1205 "lco.m"
                  {
#line 1205 "lco.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_construct\'/8", (MR_String) "lambda RHS");
#line 1205 "lco.m"
                    return;
                  }
#line 1204 "lco.m"
                }
#line 1197 "lco.m"
              else
#line 1195 "lco.m"
                {
#line 1196 "lco.m"
                  {
#line 1196 "lco.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_construct\'/8", (MR_String) "var RHS");
#line 1196 "lco.m"
                    return;
                  }
#line 1195 "lco.m"
                }
#line 1207 "lco.m"
            {
#line 1207 "lco.m"
              transform_hlds__lco__GoalExpr_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1207 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_57, 0) = ((MR_Box) (transform_hlds__lco__LHS_17));
#line 1207 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_57, 1) = ((MR_Box) (transform_hlds__lco__RHS_47));
#line 1207 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_57, 2) = ((MR_Box) (transform_hlds__lco__Mode_19));
#line 1207 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_57, 3) = ((MR_Box) (transform_hlds__lco__Unification_41));
#line 1207 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_57, 4) = ((MR_Box) (transform_hlds__lco__UnifyContext_21));
#line 1207 "lco.m"
            }
#line 1212 "lco.m"
            {
#line 1212 "lco.m"
              hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__lco__InstMapDelta_36, transform_hlds__lco__GoalInfo0_16, &transform_hlds__lco__GoalInfo_58);
            }
#line 1213 "lco.m"
            {
#line 1213 "lco.m"
              MR_Word base;
#line 1213 "lco.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1213 "lco.m"
              *transform_hlds__lco__Goal_12 = base;
#line 1213 "lco.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__GoalExpr_57));
#line 1213 "lco.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__GoalInfo_58));
#line 1213 "lco.m"
            }
#line 1188 "lco.m"
          }
#line 1176 "lco.m"
      }
#line 1215 "lco.m"
    else
#line 1216 "lco.m"
      {
#line 1216 "lco.m"
        {
#line 1216 "lco.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_construct\'/8", (MR_String) "not construct");
#line 1216 "lco.m"
          return;
        }
#line 1216 "lco.m"
      }
#line 1158 "lco.m"
  }
#line 1153 "lco.m"
}

#line 1138 "lco.m"
static void MR_CALL 
transform_hlds__lco__create_variant_name_4_p_0(
#line 1138 "lco.m"
  MR_Word transform_hlds__lco__PredOrFunc_5,
#line 1138 "lco.m"
  MR_Integer transform_hlds__lco__VariantNumber_6,
#line 1138 "lco.m"
  MR_String transform_hlds__lco__OrigName_7,
#line 1138 "lco.m"
  MR_String * transform_hlds__lco__VariantName_8)
#line 1138 "lco.m"
{
#line 1141 "lco.m"
  {
#line 1141 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1141 "lco.m"
    MR_String transform_hlds__lco__Prefix_9;
#line 1141 "lco.m"
    MR_String transform_hlds__lco__V_10_10;
#line 1141 "lco.m"
    MR_String transform_hlds__lco__V_11_11;
#line 1141 "lco.m"
    MR_String transform_hlds__lco__V_13_13;

#line 1145 "lco.m"
    if ((transform_hlds__lco__PredOrFunc_5 == (MR_Integer) 1))
#line 1144 "lco.m"
      transform_hlds__lco__Prefix_9 = (MR_String) "LCMCfn_";
#line 1145 "lco.m"
    else
#line 1147 "lco.m"
      transform_hlds__lco__Prefix_9 = (MR_String) "LCMCpr_";
#line 1149 "lco.m"
    {
#line 1149 "lco.m"
      transform_hlds__lco__V_13_13 = mercury__string__int_to_string_1_f_0(transform_hlds__lco__VariantNumber_6);
    }
#line 1149 "lco.m"
    {
#line 1149 "lco.m"
      transform_hlds__lco__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__lco__V_13_13);
    }
#line 1149 "lco.m"
    {
#line 1149 "lco.m"
      transform_hlds__lco__V_10_10 = mercury__string__f_43_43_2_f_0(transform_hlds__lco__OrigName_7, transform_hlds__lco__V_11_11);
    }
#line 1149 "lco.m"
    {
#line 1149 "lco.m"
      *transform_hlds__lco__VariantName_8 = mercury__string__f_43_43_2_f_0(transform_hlds__lco__Prefix_9, transform_hlds__lco__V_10_10);
    }
#line 1141 "lco.m"
  }
#line 1138 "lco.m"
}

#line 1101 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__match_existing_variant_3_p_0(
#line 1101 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 1101 "lco.m"
  MR_Word transform_hlds__lco__AddrArgNums_6,
#line 1101 "lco.m"
  MR_Word * transform_hlds__lco__Variant_7)
#line 1101 "lco.m"
{
#line 1104 "lco.m"
  while (MR_TRUE)
#line 1104 "lco.m"
    {
#line 1104 "lco.m"
      /* tailcall optimized into a loop */
#line 1104 "lco.m"
      {
#line 1104 "lco.m"
        MR_bool transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1104 "lco.m"
        MR_Word transform_hlds__lco__Variant0_4;
#line 1104 "lco.m"
        MR_Word transform_hlds__lco__Variants_5;
#line 1105 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_11_11;
#line 1105 "lco.m"
        MR_Word transform_hlds__lco__V_10_10;
#line 1105 "lco.m"
        MR_Word transform_hlds__lco__V_8_8;
#line 1105 "lco.m"
        MR_String transform_hlds__lco__V_9_9;

#line 1104 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1104 "lco.m"
          {
#line 1104 "lco.m"
            transform_hlds__lco__Variant0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 1104 "lco.m"
            transform_hlds__lco__Variants_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 1105 "lco.m"
            transform_hlds__lco__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Variant0_4, (MR_Integer) 0)));
#line 1105 "lco.m"
            transform_hlds__lco__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Variant0_4, (MR_Integer) 1)));
#line 1105 "lco.m"
            transform_hlds__lco__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Variant0_4, (MR_Integer) 2)));
#line 9485 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_11_11 = (MR_Word) &transform_hlds__lco_scalar_common_1[7];
#line 1105 "lco.m"
            {
#line 1105 "lco.m"
              transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_11_11, ((MR_Box) (transform_hlds__lco__AddrArgNums_6)), ((MR_Box) (transform_hlds__lco__V_10_10)));
            }
#line 1107 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 1106 "lco.m"
              {
#line 1106 "lco.m"
                *transform_hlds__lco__Variant_7 = transform_hlds__lco__Variant0_4;
#line 1106 "lco.m"
                transform_hlds__lco__succeeded = MR_TRUE;
#line 1106 "lco.m"
              }
#line 1107 "lco.m"
            else
#line 1108 "lco.m"
              {
#line 1108 "lco.m"
                /* direct tailcall eliminated */
#line 1108 "lco.m"
                {
#line 1108 "lco.m"
                  MR_Word transform_hlds__lco__HeadVar__1__tmp_copy_1 = transform_hlds__lco__Variants_5;

#line 1108 "lco.m"
                  transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__HeadVar__1__tmp_copy_1;
#line 1108 "lco.m"
                }
#line 1108 "lco.m"
                continue;
#line 1108 "lco.m"
              }
#line 1104 "lco.m"
          }
#line 1104 "lco.m"
        return transform_hlds__lco__succeeded;
#line 1104 "lco.m"
      }
#line 1104 "lco.m"
      break;
#line 1104 "lco.m"
    }
#line 1101 "lco.m"
}

#line 1061 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__ensure_variant_exists_8_p_0(
#line 1061 "lco.m"
  MR_Word transform_hlds__lco__PredId_9,
#line 1061 "lco.m"
  MR_Integer transform_hlds__lco__ProcId_10,
#line 1061 "lco.m"
  MR_Word transform_hlds__lco__AddrArgNums_11,
#line 1061 "lco.m"
  MR_Word * transform_hlds__lco__VariantPredProcId_12,
#line 1061 "lco.m"
  MR_Word transform_hlds__lco__SymName_13,
#line 1061 "lco.m"
  MR_Word * transform_hlds__lco__VariantSymName_14,
#line 1061 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_30,
#line 1061 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_31)
#line 1061 "lco.m"
{
#line 1066 "lco.m"
  {
#line 1066 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1066 "lco.m"
    MR_Word transform_hlds__lco__PredProcId_16;
#line 1066 "lco.m"
    MR_Word transform_hlds__lco__CurSCCVariants0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 1)));
#line 1068 "lco.m"
    MR_Word transform_hlds__lco__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 0)));
#line 1068 "lco.m"
    MR_Word transform_hlds__lco__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 2)));
#line 1068 "lco.m"
    MR_Word transform_hlds__lco__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 3)));
#line 1068 "lco.m"
    MR_Word transform_hlds__lco__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 1068 "lco.m"
    MR_Word transform_hlds__lco__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1068 "lco.m"
    MR_Word transform_hlds__lco__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1075 "lco.m"
    MR_Word transform_hlds__lco__ExistingVariant_19;
#line 1070 "lco.m"
    MR_Word transform_hlds__lco__ExistingVariants_18;

#line 1067 "lco.m"
    {
#line 1067 "lco.m"
      transform_hlds__lco__PredProcId_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1067 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__PredProcId_16, 0) = ((MR_Box) (transform_hlds__lco__PredId_9));
#line 1067 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__PredProcId_16, 1) = ((MR_Box) (transform_hlds__lco__ProcId_10));
#line 1067 "lco.m"
    }
#line 1070 "lco.m"
    {
#line 1070 "lco.m"
      transform_hlds__lco__succeeded = mercury__multi_map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0, transform_hlds__lco__CurSCCVariants0_17, ((MR_Box) (transform_hlds__lco__PredProcId_16)), &transform_hlds__lco__ExistingVariants_18);
    }
#line 1070 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 1071 "lco.m"
      {
#line 1071 "lco.m"
        transform_hlds__lco__succeeded = transform_hlds__lco__match_existing_variant_3_p_0(transform_hlds__lco__ExistingVariants_18, transform_hlds__lco__AddrArgNums_11, &transform_hlds__lco__ExistingVariant_19);
      }
#line 1075 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 1073 "lco.m"
      {
#line 1073 "lco.m"
        MR_String transform_hlds__lco__VariantName_78;
#line 1115 "lco.m"
        MR_Word transform_hlds__lco__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ExistingVariant_19, (MR_Integer) 0)));

#line 1115 "lco.m"
        *transform_hlds__lco__VariantPredProcId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ExistingVariant_19, (MR_Integer) 1)));
#line 1115 "lco.m"
        transform_hlds__lco__VariantName_78 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ExistingVariant_19, (MR_Integer) 2)));
#line 1119 "lco.m"
        if (((MR_tag((MR_Word) transform_hlds__lco__SymName_13)) == (MR_mktag((MR_Integer) 1))))
#line 1120 "lco.m"
          {
#line 1120 "lco.m"
            MR_Word transform_hlds__lco__ModuleName_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SymName_13, (MR_Integer) 0)));
#line 1120 "lco.m"
            MR_String transform_hlds__lco___Name_81 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SymName_13, (MR_Integer) 1)));

#line 1121 "lco.m"
            {
#line 1121 "lco.m"
              MR_Word base;
#line 1121 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1121 "lco.m"
              *transform_hlds__lco__VariantSymName_14 = base;
#line 1121 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__ModuleName_80));
#line 1121 "lco.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__VariantName_78));
#line 1121 "lco.m"
            }
#line 1120 "lco.m"
          }
#line 1119 "lco.m"
        else
#line 1118 "lco.m"
          {
#line 1118 "lco.m"
            MR_Word base;
#line 1118 "lco.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1118 "lco.m"
            *transform_hlds__lco__VariantSymName_14 = base;
#line 1118 "lco.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__VariantName_78));
#line 1118 "lco.m"
          }
#line 1073 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_Info_31 = transform_hlds__lco__STATE_VARIABLE_Info_0_30;
#line 1073 "lco.m"
        transform_hlds__lco__succeeded = MR_TRUE;
#line 1073 "lco.m"
      }
#line 1075 "lco.m"
    else
#line 1076 "lco.m"
      {
#line 1076 "lco.m"
        MR_Word transform_hlds__lco__TypeCtorInfo_71_71;
#line 1076 "lco.m"
        MR_Word transform_hlds__lco__TypeCtorInfo_72_72;
#line 1076 "lco.m"
        MR_Word transform_hlds__lco__ModuleInfo0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 0)));
#line 1076 "lco.m"
        MR_Word transform_hlds__lco__ClonePredId_21;
#line 1076 "lco.m"
        MR_Word transform_hlds__lco__PredOrFunc_22;
#line 1076 "lco.m"
        MR_Word transform_hlds__lco__ModuleInfo_23;
#line 1076 "lco.m"
        MR_Integer transform_hlds__lco__VariantNumber_24;
#line 1076 "lco.m"
        MR_String transform_hlds__lco__VariantName_26;
#line 1076 "lco.m"
        MR_Word transform_hlds__lco__NewVariant_28;
#line 1076 "lco.m"
        MR_Word transform_hlds__lco__CurSCCVariants_29;
#line 1076 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_Info_32_32;
#line 1076 "lco.m"
        MR_Word transform_hlds__lco__PredInfo_89;
#line 1076 "lco.m"
        MR_Word transform_hlds__lco__PredTable0_90;
#line 1076 "lco.m"
        MR_Word transform_hlds__lco__PredTable_91;
#line 1076 "lco.m"
        MR_Word transform_hlds__lco__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 1)));
#line 1076 "lco.m"
        MR_Word transform_hlds__lco__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 2)));
#line 1076 "lco.m"
        MR_Word transform_hlds__lco__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 3)));
#line 1076 "lco.m"
        MR_Word transform_hlds__lco__V_49_49 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 1076 "lco.m"
        MR_Word transform_hlds__lco__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1076 "lco.m"
        MR_Word transform_hlds__lco__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1080 "lco.m"
        MR_Word transform_hlds__lco__V_53_53;
#line 1080 "lco.m"
        MR_Word transform_hlds__lco__V_54_54;
#line 1080 "lco.m"
        MR_Word transform_hlds__lco__V_55_55;
#line 1080 "lco.m"
        MR_Word transform_hlds__lco__V_56_56;
#line 1080 "lco.m"
        MR_Word transform_hlds__lco__V_57_57;
#line 1080 "lco.m"
        MR_Word transform_hlds__lco__V_58_58;
#line 1080 "lco.m"
        MR_Word transform_hlds__lco__V_52_52;
#line 1083 "lco.m"
        MR_Word transform_hlds__lco__ExistingVariants_37;
#line 1098 "lco.m"
        MR_Word transform_hlds__lco__V_59_59;
#line 1098 "lco.m"
        MR_Word transform_hlds__lco__V_61_61;
#line 1098 "lco.m"
        MR_Word transform_hlds__lco__V_62_62;
#line 1098 "lco.m"
        MR_Word transform_hlds__lco__V_63_63;
#line 1098 "lco.m"
        MR_Word transform_hlds__lco__V_64_64;
#line 1098 "lco.m"
        MR_Word transform_hlds__lco__V_65_65;
#line 1098 "lco.m"
        MR_Word transform_hlds__lco__V_60_60;

#line 1132 "lco.m"
        {
#line 1132 "lco.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__lco__ModuleInfo0_20, transform_hlds__lco__PredId_9, &transform_hlds__lco__PredInfo_89);
        }
#line 1133 "lco.m"
        {
#line 1133 "lco.m"
          transform_hlds__lco__PredOrFunc_22 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__lco__PredInfo_89);
        }
#line 1134 "lco.m"
        {
#line 1134 "lco.m"
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__lco__ModuleInfo0_20, &transform_hlds__lco__PredTable0_90);
        }
#line 1135 "lco.m"
        {
#line 1135 "lco.m"
          hlds__pred_table__predicate_table_insert_4_p_0(transform_hlds__lco__PredInfo_89, &transform_hlds__lco__ClonePredId_21, transform_hlds__lco__PredTable0_90, &transform_hlds__lco__PredTable_91);
        }
#line 1136 "lco.m"
        {
#line 1136 "lco.m"
          hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__lco__PredTable_91, transform_hlds__lco__ModuleInfo0_20, &transform_hlds__lco__ModuleInfo_23);
        }
#line 1079 "lco.m"
        {
#line 1079 "lco.m"
          MR_Word base;
#line 1079 "lco.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1079 "lco.m"
          *transform_hlds__lco__VariantPredProcId_12 = base;
#line 1079 "lco.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__ClonePredId_21));
#line 1079 "lco.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__ProcId_10));
#line 1079 "lco.m"
        }
#line 1080 "lco.m"
        transform_hlds__lco__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 0)));
#line 1080 "lco.m"
        transform_hlds__lco__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 1)));
#line 1080 "lco.m"
        transform_hlds__lco__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 2)));
#line 1080 "lco.m"
        transform_hlds__lco__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 3)));
#line 1080 "lco.m"
        transform_hlds__lco__V_56_56 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 1080 "lco.m"
        transform_hlds__lco__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1080 "lco.m"
        transform_hlds__lco__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1080 "lco.m"
        {
#line 1080 "lco.m"
          transform_hlds__lco__STATE_VARIABLE_Info_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1080 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, 0) = ((MR_Box) (transform_hlds__lco__ModuleInfo_23));
#line 1080 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, 1) = ((MR_Box) (transform_hlds__lco__V_53_53));
#line 1080 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, 2) = ((MR_Box) (transform_hlds__lco__V_54_54));
#line 1080 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, 3) = ((MR_Box) (transform_hlds__lco__V_55_55));
#line 1080 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, 4) = ((MR_Box) ((transform_hlds__lco__V_56_56 | ((((transform_hlds__lco__V_57_57 << (MR_Integer) 1)) | ((transform_hlds__lco__V_58_58 << (MR_Integer) 2)))))));
#line 1080 "lco.m"
        }
#line 1081 "lco.m"
        {
#line 1081 "lco.m"
          transform_hlds__lco__succeeded = mercury__multi_map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0, transform_hlds__lco__CurSCCVariants0_17, ((MR_Box) (transform_hlds__lco__PredProcId_16)), &transform_hlds__lco__ExistingVariants_37);
        }
#line 1083 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1082 "lco.m"
          {
#line 1082 "lco.m"
            MR_Integer transform_hlds__lco__V_33_33;

#line 1082 "lco.m"
            {
#line 1082 "lco.m"
              transform_hlds__lco__V_33_33 = mercury__list__length_1_f_0((MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0, transform_hlds__lco__ExistingVariants_37);
            }
#line 1082 "lco.m"
            transform_hlds__lco__VariantNumber_24 = (transform_hlds__lco__V_33_33 + (MR_Integer) 1);
#line 1082 "lco.m"
          }
#line 1083 "lco.m"
        else
#line 1084 "lco.m"
          transform_hlds__lco__VariantNumber_24 = (MR_Integer) 1;
#line 1086 "lco.m"
        transform_hlds__lco__succeeded = (transform_hlds__lco__VariantNumber_24 <= (MR_Integer) 4);
#line 1076 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1076 "lco.m"
          {
#line 1091 "lco.m"
            if (((MR_tag((MR_Word) transform_hlds__lco__SymName_13)) == (MR_mktag((MR_Integer) 1))))
#line 1092 "lco.m"
              {
#line 1092 "lco.m"
                MR_Word transform_hlds__lco__ModuleName_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SymName_13, (MR_Integer) 0)));
#line 1092 "lco.m"
                MR_String transform_hlds__lco__Name_38 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SymName_13, (MR_Integer) 1)));

#line 1093 "lco.m"
                {
#line 1093 "lco.m"
                  transform_hlds__lco__create_variant_name_4_p_0(transform_hlds__lco__PredOrFunc_22, transform_hlds__lco__VariantNumber_24, transform_hlds__lco__Name_38, &transform_hlds__lco__VariantName_26);
                }
#line 1094 "lco.m"
                {
#line 1094 "lco.m"
                  MR_Word base;
#line 1094 "lco.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1094 "lco.m"
                  *transform_hlds__lco__VariantSymName_14 = base;
#line 1094 "lco.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__ModuleName_27));
#line 1094 "lco.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__VariantName_26));
#line 1094 "lco.m"
                }
#line 1092 "lco.m"
              }
#line 1091 "lco.m"
            else
#line 1088 "lco.m"
              {
#line 1088 "lco.m"
                MR_String transform_hlds__lco__Name_25 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__SymName_13, (MR_Integer) 0)));

#line 1089 "lco.m"
                {
#line 1089 "lco.m"
                  transform_hlds__lco__create_variant_name_4_p_0(transform_hlds__lco__PredOrFunc_22, transform_hlds__lco__VariantNumber_24, transform_hlds__lco__Name_25, &transform_hlds__lco__VariantName_26);
                }
#line 1090 "lco.m"
                {
#line 1090 "lco.m"
                  MR_Word base;
#line 1090 "lco.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1090 "lco.m"
                  *transform_hlds__lco__VariantSymName_14 = base;
#line 1090 "lco.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__VariantName_26));
#line 1090 "lco.m"
                }
#line 1088 "lco.m"
              }
#line 9891 "transform_hlds.lco.c"
            transform_hlds__lco__TypeCtorInfo_71_71 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 9893 "transform_hlds.lco.c"
            transform_hlds__lco__TypeCtorInfo_72_72 = (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0;
#line 1096 "lco.m"
            {
#line 1096 "lco.m"
              transform_hlds__lco__NewVariant_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1096 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__NewVariant_28, 0) = ((MR_Box) (transform_hlds__lco__AddrArgNums_11));
#line 1096 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__NewVariant_28, 1) = ((MR_Box) (*transform_hlds__lco__VariantPredProcId_12));
#line 1096 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__NewVariant_28, 2) = ((MR_Box) (transform_hlds__lco__VariantName_26));
#line 1096 "lco.m"
            }
#line 1097 "lco.m"
            {
#line 1097 "lco.m"
              mercury__multi_map__set_4_p_0(transform_hlds__lco__TypeCtorInfo_71_71, transform_hlds__lco__TypeCtorInfo_72_72, ((MR_Box) (transform_hlds__lco__PredProcId_16)), ((MR_Box) (transform_hlds__lco__NewVariant_28)), transform_hlds__lco__CurSCCVariants0_17, &transform_hlds__lco__CurSCCVariants_29);
            }
#line 1098 "lco.m"
            transform_hlds__lco__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 0)));
#line 1098 "lco.m"
            transform_hlds__lco__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 1)));
#line 1098 "lco.m"
            transform_hlds__lco__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 2)));
#line 1098 "lco.m"
            transform_hlds__lco__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 3)));
#line 1098 "lco.m"
            transform_hlds__lco__V_63_63 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 1098 "lco.m"
            transform_hlds__lco__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1098 "lco.m"
            transform_hlds__lco__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1098 "lco.m"
            {
#line 1098 "lco.m"
              MR_Word base;
#line 1098 "lco.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1098 "lco.m"
              *transform_hlds__lco__STATE_VARIABLE_Info_31 = base;
#line 1098 "lco.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__V_59_59));
#line 1098 "lco.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__CurSCCVariants_29));
#line 1098 "lco.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__V_61_61));
#line 1098 "lco.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lco__V_62_62));
#line 1098 "lco.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((transform_hlds__lco__V_63_63 | ((((transform_hlds__lco__V_64_64 << (MR_Integer) 1)) | ((transform_hlds__lco__V_65_65 << (MR_Integer) 2)))))));
#line 1098 "lco.m"
            }
#line 1098 "lco.m"
            transform_hlds__lco__succeeded = MR_TRUE;
#line 1076 "lco.m"
          }
#line 1076 "lco.m"
      }
#line 1066 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1066 "lco.m"
  }
#line 1061 "lco.m"
}

#line 1055 "lco.m"
static MR_Box MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0_2(
#line 1055 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1055 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1)
#line 1055 "lco.m"
{
#line 1055 "lco.m"
  {
#line 1055 "lco.m"
    MR_Box transform_hlds__lco__wrapper_arg_2;
#line 1055 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 1055 "lco.m"
    MR_Word transform_hlds__lco__conv1_HeadVar__3_15;

#line 1055 "lco.m"
    {
#line 1055 "lco.m"
      transform_hlds__lco__conv1_HeadVar__3_15 = transform_hlds__lco__IntroducedFrom__func__make_variant_args__1055__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
#line 1055 "lco.m"
    transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv1_HeadVar__3_15));
#line 1055 "lco.m"
    return transform_hlds__lco__wrapper_arg_2;
#line 1055 "lco.m"
  }
#line 1055 "lco.m"
}

#line 1052 "lco.m"
static MR_Box MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0_1(
#line 1052 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1052 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1)
#line 1052 "lco.m"
{
#line 1052 "lco.m"
  {
#line 1052 "lco.m"
    MR_Box transform_hlds__lco__wrapper_arg_2;
#line 1052 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 1052 "lco.m"
    MR_Word transform_hlds__lco__conv0_HeadVar__2_18;

#line 1052 "lco.m"
    {
#line 1052 "lco.m"
      transform_hlds__lco__conv0_HeadVar__2_18 = transform_hlds__lco__IntroducedFrom__func__make_variant_args__1052__1_1_f_0(((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
#line 1052 "lco.m"
    transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__2_18));
#line 1052 "lco.m"
    return transform_hlds__lco__wrapper_arg_2;
#line 1052 "lco.m"
  }
#line 1052 "lco.m"
}

#line 1046 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0(
#line 1046 "lco.m"
  MR_Word transform_hlds__lco__HighLevelData_5,
#line 1046 "lco.m"
  MR_Word transform_hlds__lco__AddrVarFieldIds_6,
#line 1046 "lco.m"
  MR_Word transform_hlds__lco__Mismatches_7,
#line 1046 "lco.m"
  MR_Word * transform_hlds__lco__VariantArgs_8)
#line 1046 "lco.m"
{
#line 1049 "lco.m"
  {
#line 1049 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1049 "lco.m"
    MR_Word transform_hlds__lco__MakeArg_9;

#line 1053 "lco.m"
    if ((transform_hlds__lco__HighLevelData_5 == (MR_Integer) 0))
#line 1052 "lco.m"
      transform_hlds__lco__MakeArg_9 = (MR_Word) &transform_hlds__lco_scalar_common_2[11];
#line 1053 "lco.m"
    else
#line 1055 "lco.m"
      {
#line 1055 "lco.m"
        transform_hlds__lco__MakeArg_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1055 "lco.m"
        MR_hl_field(MR_mktag(0), transform_hlds__lco__MakeArg_9, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_5[1]));
#line 1055 "lco.m"
        MR_hl_field(MR_mktag(0), transform_hlds__lco__MakeArg_9, 1) = ((MR_Box) (transform_hlds__lco__make_variant_args_4_p_0_2));
#line 1055 "lco.m"
        MR_hl_field(MR_mktag(0), transform_hlds__lco__MakeArg_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1055 "lco.m"
        MR_hl_field(MR_mktag(0), transform_hlds__lco__MakeArg_9, 3) = ((MR_Box) (transform_hlds__lco__AddrVarFieldIds_6));
#line 1055 "lco.m"
      }
#line 1059 "lco.m"
    {
#line 1059 "lco.m"
      *transform_hlds__lco__VariantArgs_8 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__lco_scalar_common_2[4], (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0, transform_hlds__lco__MakeArg_9, transform_hlds__lco__Mismatches_7);
    }
#line 1049 "lco.m"
  }
#line 1046 "lco.m"
}

#line 1037 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__make_ref_type_1_f_0(
#line 1037 "lco.m"
  MR_Word transform_hlds__lco__FieldType_3)
#line 1037 "lco.m"
{
#line 1039 "lco.m"
  {
#line 1039 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1039 "lco.m"
    MR_Word transform_hlds__lco__PtrType_4;
#line 1039 "lco.m"
    MR_Word transform_hlds__lco__RefTypeName_5;
#line 1039 "lco.m"
    MR_Word transform_hlds__lco__V_6_6;
#line 1039 "lco.m"
    MR_Word transform_hlds__lco__V_8_8;

#line 1040 "lco.m"
    {
#line 1040 "lco.m"
      transform_hlds__lco__V_6_6 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 1040 "lco.m"
    {
#line 1040 "lco.m"
      transform_hlds__lco__RefTypeName_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1040 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__RefTypeName_5, 0) = ((MR_Box) (transform_hlds__lco__V_6_6));
#line 1040 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__RefTypeName_5, 1) = ((MR_Box) ((MR_String) "store_at_ref_type"));
#line 1040 "lco.m"
    }
#line 1042 "lco.m"
    {
#line 1042 "lco.m"
      transform_hlds__lco__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1042 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__V_8_8, 0) = ((MR_Box) (transform_hlds__lco__FieldType_3));
#line 1042 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__V_8_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1042 "lco.m"
    }
#line 1042 "lco.m"
    {
#line 1042 "lco.m"
      transform_hlds__lco__PtrType_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1042 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__PtrType_4, 0) = ((MR_Box) (transform_hlds__lco__RefTypeName_5));
#line 1042 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__PtrType_4, 1) = ((MR_Box) (transform_hlds__lco__V_8_8));
#line 1042 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__PtrType_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1042 "lco.m"
    }
#line 1039 "lco.m"
    return transform_hlds__lco__PtrType_4;
#line 1039 "lco.m"
  }
#line 1037 "lco.m"
}

#line 1014 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_address_var_5_p_0(
#line 1014 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_6,
#line 1014 "lco.m"
  MR_Word transform_hlds__lco__Var_7,
#line 1014 "lco.m"
  MR_Word * transform_hlds__lco__AddrVar_8,
#line 1014 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_19,
#line 1014 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_20)
#line 1014 "lco.m"
{
#line 1017 "lco.m"
  {
#line 1017 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1017 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_58_58 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1017 "lco.m"
    MR_Word transform_hlds__lco__VarSet0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 2)));
#line 1017 "lco.m"
    MR_Word transform_hlds__lco__VarTypes0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 3)));
#line 1017 "lco.m"
    MR_String transform_hlds__lco__Name_12;
#line 1017 "lco.m"
    MR_String transform_hlds__lco__AddrName_13;
#line 1017 "lco.m"
    MR_Word transform_hlds__lco__VarSet_14;
#line 1017 "lco.m"
    MR_Word transform_hlds__lco__HighLevelData_15;
#line 1017 "lco.m"
    MR_Word transform_hlds__lco__VarTypes_18;
#line 1017 "lco.m"
    MR_Word transform_hlds__lco__V_44_44;
#line 1017 "lco.m"
    MR_Word transform_hlds__lco__V_45_45;
#line 1017 "lco.m"
    MR_Word transform_hlds__lco__V_48_48;
#line 1017 "lco.m"
    MR_Word transform_hlds__lco__V_49_49;
#line 1017 "lco.m"
    MR_Word transform_hlds__lco__V_50_50;
#line 1018 "lco.m"
    MR_Word transform_hlds__lco__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 0)));
#line 1018 "lco.m"
    MR_Word transform_hlds__lco__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 1)));
#line 1018 "lco.m"
    MR_Word transform_hlds__lco__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 1018 "lco.m"
    MR_Word transform_hlds__lco__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1018 "lco.m"
    MR_Word transform_hlds__lco__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1023 "lco.m"
    MR_Word transform_hlds__lco__V_37_37;
#line 1023 "lco.m"
    MR_Word transform_hlds__lco__V_38_38;
#line 1023 "lco.m"
    MR_Word transform_hlds__lco__V_39_39;
#line 1023 "lco.m"
    MR_Word transform_hlds__lco__V_40_40;
#line 1023 "lco.m"
    MR_Word transform_hlds__lco__V_41_41;
#line 1023 "lco.m"
    MR_Word transform_hlds__lco__V_42_42;
#line 1023 "lco.m"
    MR_Word transform_hlds__lco__V_43_43;
#line 1034 "lco.m"
    MR_Word transform_hlds__lco__V_46_46;
#line 1034 "lco.m"
    MR_Word transform_hlds__lco__V_47_47;

#line 1020 "lco.m"
    {
#line 1020 "lco.m"
      mercury__varset__lookup_name_4_p_0(transform_hlds__lco__TypeCtorInfo_58_58, transform_hlds__lco__VarSet0_10, transform_hlds__lco__Var_7, (MR_String) "SCCcallarg", &transform_hlds__lco__Name_12);
    }
#line 1021 "lco.m"
    {
#line 1021 "lco.m"
      transform_hlds__lco__AddrName_13 = mercury__string__f_43_43_2_f_0((MR_String) "Addr", transform_hlds__lco__Name_12);
    }
#line 1022 "lco.m"
    {
#line 1022 "lco.m"
      mercury__varset__new_named_var_4_p_0(transform_hlds__lco__TypeCtorInfo_58_58, transform_hlds__lco__AddrName_13, transform_hlds__lco__AddrVar_8, transform_hlds__lco__VarSet0_10, &transform_hlds__lco__VarSet_14);
    }
#line 1023 "lco.m"
    transform_hlds__lco__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 0)));
#line 1023 "lco.m"
    transform_hlds__lco__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 1)));
#line 1023 "lco.m"
    transform_hlds__lco__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 2)));
#line 1023 "lco.m"
    transform_hlds__lco__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 3)));
#line 1023 "lco.m"
    transform_hlds__lco__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 4)));
#line 1023 "lco.m"
    transform_hlds__lco__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 5)));
#line 1023 "lco.m"
    transform_hlds__lco__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)));
#line 1023 "lco.m"
    transform_hlds__lco__HighLevelData_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 7)));
#line 1029 "lco.m"
    if ((transform_hlds__lco__HighLevelData_15 == (MR_Integer) 0))
#line 1025 "lco.m"
      {
#line 1025 "lco.m"
        MR_Word transform_hlds__lco__FieldType_16;
#line 1025 "lco.m"
        MR_Word transform_hlds__lco__AddrVarType_17;
#line 1025 "lco.m"
        MR_Word transform_hlds__lco__RefTypeName_61;
#line 1025 "lco.m"
        MR_Word transform_hlds__lco__V_62_62;
#line 1025 "lco.m"
        MR_Word transform_hlds__lco__V_64_64;

#line 1026 "lco.m"
        {
#line 1026 "lco.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__lco__VarTypes0_11, transform_hlds__lco__Var_7, &transform_hlds__lco__FieldType_16);
        }
#line 1040 "lco.m"
        {
#line 1040 "lco.m"
          transform_hlds__lco__V_62_62 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
        }
#line 1040 "lco.m"
        {
#line 1040 "lco.m"
          transform_hlds__lco__RefTypeName_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1040 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__RefTypeName_61, 0) = ((MR_Box) (transform_hlds__lco__V_62_62));
#line 1040 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__RefTypeName_61, 1) = ((MR_Box) ((MR_String) "store_at_ref_type"));
#line 1040 "lco.m"
        }
#line 1042 "lco.m"
        {
#line 1042 "lco.m"
          transform_hlds__lco__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1042 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_64_64, 0) = ((MR_Box) (transform_hlds__lco__FieldType_16));
#line 1042 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1042 "lco.m"
        }
#line 1042 "lco.m"
        {
#line 1042 "lco.m"
          transform_hlds__lco__AddrVarType_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1042 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__AddrVarType_17, 0) = ((MR_Box) (transform_hlds__lco__RefTypeName_61));
#line 1042 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__AddrVarType_17, 1) = ((MR_Box) (transform_hlds__lco__V_64_64));
#line 1042 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__AddrVarType_17, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1042 "lco.m"
        }
#line 1028 "lco.m"
        {
#line 1028 "lco.m"
          parse_tree__prog_data__add_var_type_4_p_0(*transform_hlds__lco__AddrVar_8, transform_hlds__lco__AddrVarType_17, transform_hlds__lco__VarTypes0_11, &transform_hlds__lco__VarTypes_18);
        }
#line 1025 "lco.m"
      }
#line 1029 "lco.m"
    else
#line 1032 "lco.m"
      transform_hlds__lco__VarTypes_18 = transform_hlds__lco__VarTypes0_11;
#line 1034 "lco.m"
    transform_hlds__lco__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 0)));
#line 1034 "lco.m"
    transform_hlds__lco__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 1)));
#line 1034 "lco.m"
    transform_hlds__lco__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 2)));
#line 1034 "lco.m"
    transform_hlds__lco__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 3)));
#line 1034 "lco.m"
    transform_hlds__lco__V_48_48 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 1034 "lco.m"
    transform_hlds__lco__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1034 "lco.m"
    transform_hlds__lco__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1035 "lco.m"
    {
#line 1035 "lco.m"
      MR_Word base;
#line 1035 "lco.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1035 "lco.m"
      *transform_hlds__lco__STATE_VARIABLE_Info_20 = base;
#line 1035 "lco.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__V_44_44));
#line 1035 "lco.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__V_45_45));
#line 1035 "lco.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__VarSet_14));
#line 1035 "lco.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lco__VarTypes_18));
#line 1035 "lco.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((transform_hlds__lco__V_48_48 | ((((transform_hlds__lco__V_49_49 << (MR_Integer) 1)) | ((transform_hlds__lco__V_50_50 << (MR_Integer) 2)))))));
#line 1035 "lco.m"
    }
#line 1017 "lco.m"
  }
#line 1014 "lco.m"
}

#line 955 "lco.m"
static void MR_CALL 
transform_hlds__lco__find_args_to_pass_by_addr_10_p_0(
#line 955 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 955 "lco.m"
  MR_Word transform_hlds__lco__UnifyInputVars_2,
#line 955 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 955 "lco.m"
  MR_Integer transform_hlds__lco__ArgNum_4,
#line 955 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__5_5,
#line 955 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6,
#line 955 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Subst_0_7,
#line 955 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Subst_8,
#line 955 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_9,
#line 955 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_10)
#line 955 "lco.m"
{
#line 961 "lco.m"
  {
#line 961 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 961 "lco.m"
    if ((transform_hlds__lco__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 961 "lco.m"
      {
#line 961 "lco.m"
        *transform_hlds__lco__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 961 "lco.m"
        *transform_hlds__lco__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 961 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_Info_10 = transform_hlds__lco__STATE_VARIABLE_Info_0_9;
#line 961 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_Subst_8 = transform_hlds__lco__STATE_VARIABLE_Subst_0_7;
#line 961 "lco.m"
      }
#line 961 "lco.m"
    else
#line 964 "lco.m"
      {
#line 964 "lco.m"
        MR_Word transform_hlds__lco__CallArg_22;
#line 964 "lco.m"
        MR_Word transform_hlds__lco__HeadArg_23;
#line 964 "lco.m"
        MR_Word transform_hlds__lco__CallHeadArgs_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 964 "lco.m"
        MR_Word transform_hlds__lco__UpdatedCallArg_27;
#line 964 "lco.m"
        MR_Word transform_hlds__lco__UpdatedCallArgs_28;
#line 964 "lco.m"
        MR_Word transform_hlds__lco__MismatchesTail_31;
#line 964 "lco.m"
        MR_Word transform_hlds__lco__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
#line 964 "lco.m"
        MR_Integer transform_hlds__lco__V_39_39;
#line 964 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_Subst_40_40;
#line 964 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_Info_41_41;
#line 964 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_Info_48_48;
#line 968 "lco.m"
        MR_Word transform_hlds__lco__CallArgType_32;
#line 968 "lco.m"
        MR_Word transform_hlds__lco__CallArgTypeCtor_33;
#line 968 "lco.m"
        MR_Word transform_hlds__lco__V_43_43;
#line 968 "lco.m"
        MR_Word transform_hlds__lco__V_45_45;
#line 968 "lco.m"
        MR_String transform_hlds__lco__V_46_46;
#line 968 "lco.m"
        MR_Integer transform_hlds__lco__V_47_47;
#line 968 "lco.m"
        MR_Word transform_hlds__lco__V_58_58;
#line 968 "lco.m"
        MR_Word transform_hlds__lco__V_55_55;
#line 968 "lco.m"
        MR_Word transform_hlds__lco__V_56_56;
#line 968 "lco.m"
        MR_Word transform_hlds__lco__V_57_57;
#line 968 "lco.m"
        MR_Word transform_hlds__lco__V_59_59;
#line 968 "lco.m"
        MR_Word transform_hlds__lco__V_60_60;

#line 963 "lco.m"
        transform_hlds__lco__CallArg_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_38_38, (MR_Integer) 0)));
#line 963 "lco.m"
        transform_hlds__lco__HeadArg_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_38_38, (MR_Integer) 1)));
#line 966 "lco.m"
        transform_hlds__lco__V_39_39 = (transform_hlds__lco__ArgNum_4 + (MR_Integer) 1);
#line 965 "lco.m"
        {
#line 965 "lco.m"
          transform_hlds__lco__find_args_to_pass_by_addr_10_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__UnifyInputVars_2, transform_hlds__lco__CallHeadArgs_24, transform_hlds__lco__V_39_39, &transform_hlds__lco__MismatchesTail_31, &transform_hlds__lco__UpdatedCallArgs_28, transform_hlds__lco__STATE_VARIABLE_Subst_0_7, &transform_hlds__lco__STATE_VARIABLE_Subst_40_40, transform_hlds__lco__STATE_VARIABLE_Info_0_9, &transform_hlds__lco__STATE_VARIABLE_Info_41_41);
        }
#line 968 "lco.m"
        transform_hlds__lco__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 0)));
#line 968 "lco.m"
        transform_hlds__lco__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 1)));
#line 968 "lco.m"
        transform_hlds__lco__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 2)));
#line 968 "lco.m"
        transform_hlds__lco__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 3)));
#line 968 "lco.m"
        transform_hlds__lco__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 968 "lco.m"
        transform_hlds__lco__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 968 "lco.m"
        transform_hlds__lco__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 968 "lco.m"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_43_43 == (MR_Integer) 0);
#line 968 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 968 "lco.m"
          {
#line 969 "lco.m"
            {
#line 969 "lco.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__lco__V_58_58, transform_hlds__lco__CallArg_22, &transform_hlds__lco__CallArgType_32);
            }
#line 970 "lco.m"
            {
#line 970 "lco.m"
              transform_hlds__lco__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(transform_hlds__lco__CallArgType_32, &transform_hlds__lco__CallArgTypeCtor_33);
            }
#line 968 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 968 "lco.m"
              {
#line 971 "lco.m"
                transform_hlds__lco__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__CallArgTypeCtor_33, (MR_Integer) 0)));
#line 971 "lco.m"
                transform_hlds__lco__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__CallArgTypeCtor_33, (MR_Integer) 1)));
#line 971 "lco.m"
                transform_hlds__lco__succeeded = (transform_hlds__lco__V_47_47 == (MR_Integer) 0);
#line 968 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 968 "lco.m"
                  {
#line 971 "lco.m"
                    transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__V_45_45)) == (MR_mktag((MR_Integer) 0)));
#line 971 "lco.m"
                    if (transform_hlds__lco__succeeded)
#line 971 "lco.m"
                      {
#line 971 "lco.m"
                        transform_hlds__lco__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_45_45, (MR_Integer) 0)));
#line 971 "lco.m"
                        transform_hlds__lco__succeeded = (strcmp(transform_hlds__lco__V_46_46, (MR_String) "float") == 0);
#line 971 "lco.m"
                      }
#line 968 "lco.m"
                  }
#line 968 "lco.m"
              }
#line 968 "lco.m"
          }
#line 974 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 973 "lco.m"
          {
#line 973 "lco.m"
            MR_Word transform_hlds__lco__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 0)));
#line 973 "lco.m"
            MR_Word transform_hlds__lco__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 1)));
#line 973 "lco.m"
            MR_Word transform_hlds__lco__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 2)));
#line 973 "lco.m"
            MR_Word transform_hlds__lco__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 3)));
#line 973 "lco.m"
            MR_Word transform_hlds__lco__V_71_71 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 973 "lco.m"
            MR_Word transform_hlds__lco__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 973 "lco.m"
            MR_Word transform_hlds__lco__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 973 "lco.m"
            {
#line 973 "lco.m"
              transform_hlds__lco__STATE_VARIABLE_Info_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 973 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, 0) = ((MR_Box) (transform_hlds__lco__V_67_67));
#line 973 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, 1) = ((MR_Box) (transform_hlds__lco__V_68_68));
#line 973 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, 2) = ((MR_Box) (transform_hlds__lco__V_69_69));
#line 973 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, 3) = ((MR_Box) (transform_hlds__lco__V_70_70));
#line 973 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, 4) = ((MR_Box) ((transform_hlds__lco__V_71_71 | (((((MR_Integer) 0 << (MR_Integer) 1)) | ((transform_hlds__lco__V_73_73 << (MR_Integer) 2)))))));
#line 973 "lco.m"
            }
#line 973 "lco.m"
          }
#line 974 "lco.m"
        else
#line 973 "lco.m"
          transform_hlds__lco__STATE_VARIABLE_Info_48_48 = transform_hlds__lco__STATE_VARIABLE_Info_41_41;
#line 977 "lco.m"
        {
#line 977 "lco.m"
          transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[4], ((MR_Box) (transform_hlds__lco__CallArg_22)), ((MR_Box) (transform_hlds__lco__HeadArg_23)));
        }
#line 1008 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 978 "lco.m"
          {
#line 978 "lco.m"
            transform_hlds__lco__UpdatedCallArg_27 = transform_hlds__lco__CallArg_22;
#line 979 "lco.m"
            *transform_hlds__lco__HeadVar__5_5 = transform_hlds__lco__MismatchesTail_31;
#line 980 "lco.m"
            {
#line 980 "lco.m"
              transform_hlds__lco__succeeded = mercury__bag__member_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[4], ((MR_Box) (transform_hlds__lco__HeadArg_23)), transform_hlds__lco__UnifyInputVars_2);
            }
#line 1005 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 1004 "lco.m"
              {
#line 1004 "lco.m"
                MR_Word transform_hlds__lco__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 0)));
#line 1004 "lco.m"
                MR_Word transform_hlds__lco__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 1)));
#line 1004 "lco.m"
                MR_Word transform_hlds__lco__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 2)));
#line 1004 "lco.m"
                MR_Word transform_hlds__lco__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 3)));
#line 1004 "lco.m"
                MR_Word transform_hlds__lco__V_78_78 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 1004 "lco.m"
                MR_Word transform_hlds__lco__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1004 "lco.m"
                MR_Word transform_hlds__lco__V_79_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 1004 "lco.m"
                {
#line 1004 "lco.m"
                  MR_Word base;
#line 1004 "lco.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1004 "lco.m"
                  *transform_hlds__lco__STATE_VARIABLE_Info_10 = base;
#line 1004 "lco.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__V_74_74));
#line 1004 "lco.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__V_75_75));
#line 1004 "lco.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__V_76_76));
#line 1004 "lco.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lco__V_77_77));
#line 1004 "lco.m"
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((transform_hlds__lco__V_78_78 | (((((MR_Integer) 0 << (MR_Integer) 1)) | ((transform_hlds__lco__V_80_80 << (MR_Integer) 2)))))));
#line 1004 "lco.m"
                }
#line 1004 "lco.m"
              }
#line 1005 "lco.m"
            else
#line 1004 "lco.m"
              *transform_hlds__lco__STATE_VARIABLE_Info_10 = transform_hlds__lco__STATE_VARIABLE_Info_48_48;
#line 1004 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_Subst_8 = transform_hlds__lco__STATE_VARIABLE_Subst_40_40;
#line 978 "lco.m"
          }
#line 1008 "lco.m"
        else
#line 1009 "lco.m"
          {
#line 1009 "lco.m"
            MR_Word transform_hlds__lco__TypeInfo_82_82;
#line 1009 "lco.m"
            MR_Word transform_hlds__lco__V_53_53;

#line 1009 "lco.m"
            {
#line 1009 "lco.m"
              transform_hlds__lco__make_address_var_5_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__CallArg_22, &transform_hlds__lco__UpdatedCallArg_27, transform_hlds__lco__STATE_VARIABLE_Info_48_48, transform_hlds__lco__STATE_VARIABLE_Info_10);
            }
#line 1010 "lco.m"
            {
#line 1010 "lco.m"
              transform_hlds__lco__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1010 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_53_53, 0) = ((MR_Box) (transform_hlds__lco__ArgNum_4));
#line 1010 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_53_53, 1) = ((MR_Box) (transform_hlds__lco__CallArg_22));
#line 1010 "lco.m"
            }
#line 1010 "lco.m"
            {
#line 1010 "lco.m"
              MR_Word base;
#line 1010 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1010 "lco.m"
              *transform_hlds__lco__HeadVar__5_5 = base;
#line 1010 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__V_53_53));
#line 1010 "lco.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__MismatchesTail_31));
#line 1010 "lco.m"
            }
#line 10663 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_82_82 = (MR_Word) &transform_hlds__lco_scalar_common_1[4];
#line 1011 "lco.m"
            {
#line 1011 "lco.m"
              mercury__map__det_insert_4_p_0(transform_hlds__lco__TypeInfo_82_82, transform_hlds__lco__TypeInfo_82_82, ((MR_Box) (transform_hlds__lco__CallArg_22)), ((MR_Box) (transform_hlds__lco__UpdatedCallArg_27)), transform_hlds__lco__STATE_VARIABLE_Subst_40_40, transform_hlds__lco__STATE_VARIABLE_Subst_8);
            }
#line 1009 "lco.m"
          }
#line 964 "lco.m"
        {
#line 964 "lco.m"
          MR_Word base;
#line 964 "lco.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 964 "lco.m"
          *transform_hlds__lco__HeadVar__6_6 = base;
#line 964 "lco.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__UpdatedCallArg_27));
#line 964 "lco.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__UpdatedCallArgs_28));
#line 964 "lco.m"
        }
#line 964 "lco.m"
      }
#line 961 "lco.m"
  }
#line 955 "lco.m"
}

#line 927 "lco.m"
static void MR_CALL 
transform_hlds__lco__classify_proc_call_args_7_p_0(
#line 927 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 927 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 927 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 927 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__4_4,
#line 927 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__5_5,
#line 927 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6,
#line 927 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__7_7)
#line 927 "lco.m"
{
#line 931 "lco.m"
  {
#line 931 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 931 "lco.m"
    if ((transform_hlds__lco__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 931 "lco.m"
      if ((transform_hlds__lco__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 931 "lco.m"
        {
#line 931 "lco.m"
          *transform_hlds__lco__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 931 "lco.m"
          *transform_hlds__lco__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 931 "lco.m"
          *transform_hlds__lco__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 931 "lco.m"
        }
#line 931 "lco.m"
      else
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
#line 931 "lco.m"
    else
#line 931 "lco.m"
      {
#line 931 "lco.m"
        MR_Word transform_hlds__lco__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 931 "lco.m"
        MR_Word transform_hlds__lco__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));

#line 931 "lco.m"
        if ((transform_hlds__lco__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 934 "lco.m"
          {
#line 935 "lco.m"
            {
#line 935 "lco.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.classify_proc_call_args\'/7", (MR_String) "mismatched lists");
#line 935 "lco.m"
              return;
            }
#line 934 "lco.m"
          }
#line 931 "lco.m"
        else
#line 937 "lco.m"
          {
#line 937 "lco.m"
            MR_Word transform_hlds__lco__CalleeMode_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__4_4, (MR_Integer) 0)));
#line 937 "lco.m"
            MR_Word transform_hlds__lco__CalleeModes_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__4_4, (MR_Integer) 1)));
#line 937 "lco.m"
            MR_Word transform_hlds__lco__CalleeType_39;
#line 937 "lco.m"
            MR_Word transform_hlds__lco__ArgMode_40;
#line 937 "lco.m"
            MR_Word transform_hlds__lco__STATE_VARIABLE_InArgs_44_44;
#line 937 "lco.m"
            MR_Word transform_hlds__lco__STATE_VARIABLE_OutArgs_45_45;
#line 937 "lco.m"
            MR_Word transform_hlds__lco__STATE_VARIABLE_UnusedArgs_46_46;

#line 938 "lco.m"
            {
#line 938 "lco.m"
              transform_hlds__lco__classify_proc_call_args_7_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__HeadVar__2_2, transform_hlds__lco__V_50_50, transform_hlds__lco__CalleeModes_35, &transform_hlds__lco__STATE_VARIABLE_InArgs_44_44, &transform_hlds__lco__STATE_VARIABLE_OutArgs_45_45, &transform_hlds__lco__STATE_VARIABLE_UnusedArgs_46_46);
            }
#line 940 "lco.m"
            {
#line 940 "lco.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__lco__HeadVar__2_2, transform_hlds__lco__V_51_51, &transform_hlds__lco__CalleeType_39);
            }
#line 941 "lco.m"
            {
#line 941 "lco.m"
              check_hlds__mode_util__mode_to_arg_mode_4_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__CalleeMode_34, transform_hlds__lco__CalleeType_39, &transform_hlds__lco__ArgMode_40);
            }
#line 945 "lco.m"
            if ((transform_hlds__lco__ArgMode_40 == (MR_Integer) 0))
#line 943 "lco.m"
              {
#line 944 "lco.m"
                {
#line 944 "lco.m"
                  MR_Word base;
#line 944 "lco.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 944 "lco.m"
                  *transform_hlds__lco__HeadVar__5_5 = base;
#line 944 "lco.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__V_51_51));
#line 944 "lco.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_InArgs_44_44));
#line 944 "lco.m"
                }
#line 944 "lco.m"
                *transform_hlds__lco__HeadVar__6_6 = transform_hlds__lco__STATE_VARIABLE_OutArgs_45_45;
#line 944 "lco.m"
                *transform_hlds__lco__HeadVar__7_7 = transform_hlds__lco__STATE_VARIABLE_UnusedArgs_46_46;
#line 943 "lco.m"
              }
#line 945 "lco.m"
            else
#line 945 "lco.m"
              if ((transform_hlds__lco__ArgMode_40 == (MR_Integer) 1))
#line 946 "lco.m"
                {
#line 947 "lco.m"
                  {
#line 947 "lco.m"
                    MR_Word base;
#line 947 "lco.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 947 "lco.m"
                    *transform_hlds__lco__HeadVar__6_6 = base;
#line 947 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__V_51_51));
#line 947 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_OutArgs_45_45));
#line 947 "lco.m"
                  }
#line 947 "lco.m"
                  *transform_hlds__lco__HeadVar__5_5 = transform_hlds__lco__STATE_VARIABLE_InArgs_44_44;
#line 947 "lco.m"
                  *transform_hlds__lco__HeadVar__7_7 = transform_hlds__lco__STATE_VARIABLE_UnusedArgs_46_46;
#line 946 "lco.m"
                }
#line 945 "lco.m"
              else
#line 949 "lco.m"
                {
#line 950 "lco.m"
                  {
#line 950 "lco.m"
                    MR_Word base;
#line 950 "lco.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 950 "lco.m"
                    *transform_hlds__lco__HeadVar__7_7 = base;
#line 950 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__V_51_51));
#line 950 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_UnusedArgs_46_46));
#line 950 "lco.m"
                  }
#line 950 "lco.m"
                  *transform_hlds__lco__HeadVar__5_5 = transform_hlds__lco__STATE_VARIABLE_InArgs_44_44;
#line 950 "lco.m"
                  *transform_hlds__lco__HeadVar__6_6 = transform_hlds__lco__STATE_VARIABLE_OutArgs_45_45;
#line 949 "lco.m"
                }
#line 937 "lco.m"
          }
#line 931 "lco.m"
      }
#line 931 "lco.m"
  }
#line 927 "lco.m"
}

#line 894 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__update_call_args_6_p_0_1(
#line 894 "lco.m"
  MR_Box transform_hlds__lco__closure_arg)
#line 894 "lco.m"
{
#line 894 "lco.m"
  {
#line 894 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 894 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

#line 894 "lco.m"
    {
#line 894 "lco.m"
      return transform_hlds__lco__succeeded = transform_hlds__lco__IntroducedFrom__pred__update_call_args__894__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))));
    }
#line 894 "lco.m"
    return transform_hlds__lco__succeeded;
#line 894 "lco.m"
  }
#line 894 "lco.m"
}

#line 890 "lco.m"
static void MR_CALL 
transform_hlds__lco__update_call_args_6_p_0(
#line 890 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 890 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 890 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 890 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__4_4,
#line 890 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 890 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6)
#line 890 "lco.m"
{
#line 893 "lco.m"
  {
#line 893 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 893 "lco.m"
    if ((transform_hlds__lco__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 893 "lco.m"
      if ((transform_hlds__lco__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 893 "lco.m"
        {
#line 893 "lco.m"
          MR_Word transform_hlds__lco__V_10_10;

#line 893 "lco.m"
          *transform_hlds__lco__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 894 "lco.m"
          {
#line 894 "lco.m"
            transform_hlds__lco__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 894 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_10_10, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_7[3]));
#line 894 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_10_10, 1) = ((MR_Box) (transform_hlds__lco__update_call_args_6_p_0_1));
#line 894 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 894 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_10_10, 3) = ((MR_Box) (transform_hlds__lco__HeadVar__5_5));
#line 894 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_10_10, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 894 "lco.m"
          }
#line 894 "lco.m"
          {
#line 894 "lco.m"
            mercury__require__expect_3_p_0(transform_hlds__lco__V_10_10, (MR_String) "transform_hlds.lco", (MR_String) "update_call_args: updating nonexistent arg");
#line 894 "lco.m"
            return;
          }
#line 893 "lco.m"
        }
#line 893 "lco.m"
      else
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
#line 893 "lco.m"
    else
#line 893 "lco.m"
      {
#line 893 "lco.m"
        MR_Word transform_hlds__lco__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 893 "lco.m"
        MR_Word transform_hlds__lco__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));

#line 893 "lco.m"
        if ((transform_hlds__lco__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 898 "lco.m"
          {
#line 899 "lco.m"
            {
#line 899 "lco.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_call_args\'/6", (MR_String) "mismatched lists");
#line 899 "lco.m"
              return;
            }
#line 898 "lco.m"
          }
#line 893 "lco.m"
        else
#line 901 "lco.m"
          {
#line 901 "lco.m"
            MR_Word transform_hlds__lco__Arg_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__4_4, (MR_Integer) 0)));
#line 901 "lco.m"
            MR_Word transform_hlds__lco__Args_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__4_4, (MR_Integer) 1)));
#line 901 "lco.m"
            MR_Word transform_hlds__lco__CalleeType_40;
#line 901 "lco.m"
            MR_Word transform_hlds__lco__ArgMode_41;

#line 902 "lco.m"
            {
#line 902 "lco.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__lco__HeadVar__2_2, transform_hlds__lco__Arg_36, &transform_hlds__lco__CalleeType_40);
            }
#line 903 "lco.m"
            {
#line 903 "lco.m"
              check_hlds__mode_util__mode_to_arg_mode_4_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__V_61_61, transform_hlds__lco__CalleeType_40, &transform_hlds__lco__ArgMode_41);
            }
#line 909 "lco.m"
            if ((transform_hlds__lco__ArgMode_41 == (MR_Integer) 0))
#line 905 "lco.m"
              {
#line 905 "lco.m"
                MR_Word transform_hlds__lco__STATE_VARIABLE_UpdatedArgs_54_54;

#line 906 "lco.m"
                {
#line 906 "lco.m"
                  transform_hlds__lco__update_call_args_6_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__HeadVar__2_2, transform_hlds__lco__V_60_60, transform_hlds__lco__Args_37, transform_hlds__lco__HeadVar__5_5, &transform_hlds__lco__STATE_VARIABLE_UpdatedArgs_54_54);
                }
#line 908 "lco.m"
                {
#line 908 "lco.m"
                  MR_Word base;
#line 908 "lco.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 908 "lco.m"
                  *transform_hlds__lco__HeadVar__6_6 = base;
#line 908 "lco.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Arg_36));
#line 908 "lco.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_UpdatedArgs_54_54));
#line 908 "lco.m"
                }
#line 905 "lco.m"
              }
#line 909 "lco.m"
            else
#line 909 "lco.m"
              if ((transform_hlds__lco__ArgMode_41 == (MR_Integer) 1))
#line 910 "lco.m"
                {
#line 910 "lco.m"
                  MR_Word transform_hlds__lco__UpdatedArg_42;
#line 910 "lco.m"
                  MR_Word transform_hlds__lco__STATE_VARIABLE_UpdatedArgs_52_52;
#line 910 "lco.m"
                  MR_Word transform_hlds__lco__STATE_VARIABLE_UpdatedCallOutArgs_51_56;

#line 913 "lco.m"
                  if ((transform_hlds__lco__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 914 "lco.m"
                    {
#line 915 "lco.m"
                      {
#line 915 "lco.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_call_args\'/6", (MR_String) "no UpdatedCallOutArgs");
#line 915 "lco.m"
                        return;
                      }
#line 914 "lco.m"
                    }
#line 913 "lco.m"
                  else
#line 912 "lco.m"
                    {
#line 912 "lco.m"
                      transform_hlds__lco__UpdatedArg_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__5_5, (MR_Integer) 0)));
#line 912 "lco.m"
                      transform_hlds__lco__STATE_VARIABLE_UpdatedCallOutArgs_51_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__5_5, (MR_Integer) 1)));
#line 912 "lco.m"
                    }
#line 917 "lco.m"
                  {
#line 917 "lco.m"
                    transform_hlds__lco__update_call_args_6_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__HeadVar__2_2, transform_hlds__lco__V_60_60, transform_hlds__lco__Args_37, transform_hlds__lco__STATE_VARIABLE_UpdatedCallOutArgs_51_56, &transform_hlds__lco__STATE_VARIABLE_UpdatedArgs_52_52);
                  }
#line 919 "lco.m"
                  {
#line 919 "lco.m"
                    MR_Word base;
#line 919 "lco.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 919 "lco.m"
                    *transform_hlds__lco__HeadVar__6_6 = base;
#line 919 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__UpdatedArg_42));
#line 919 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_UpdatedArgs_52_52));
#line 919 "lco.m"
                  }
#line 910 "lco.m"
                }
#line 909 "lco.m"
              else
#line 921 "lco.m"
                {
#line 922 "lco.m"
                  {
#line 922 "lco.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_call_args\'/6", (MR_String) "top_unused");
#line 922 "lco.m"
                    return;
                  }
#line 921 "lco.m"
                }
#line 901 "lco.m"
          }
#line 893 "lco.m"
      }
#line 893 "lco.m"
  }
#line 890 "lco.m"
}

#line 850 "lco.m"
static void MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0_2(
#line 850 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 850 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 850 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 850 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_3,
#line 850 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_4,
#line 850 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_5,
#line 850 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_6)
#line 850 "lco.m"
{
#line 850 "lco.m"
  {
#line 850 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 850 "lco.m"
    MR_Word transform_hlds__lco__conv2_Goal_12;
#line 850 "lco.m"
    MR_Word transform_hlds__lco__conv1_STATE_VARIABLE_AddrVarFieldIds_60;
#line 850 "lco.m"
    MR_Word transform_hlds__lco__conv0_STATE_VARIABLE_Info_62;

#line 850 "lco.m"
    {
#line 850 "lco.m"
      transform_hlds__lco__update_construct_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), &transform_hlds__lco__conv2_Goal_12, ((MR_Word) transform_hlds__lco__wrapper_arg_3), &transform_hlds__lco__conv1_STATE_VARIABLE_AddrVarFieldIds_60, ((MR_Word) transform_hlds__lco__wrapper_arg_5), &transform_hlds__lco__conv0_STATE_VARIABLE_Info_62);
    }
#line 850 "lco.m"
    *transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv2_Goal_12));
#line 850 "lco.m"
    *transform_hlds__lco__wrapper_arg_4 = ((MR_Box) (transform_hlds__lco__conv1_STATE_VARIABLE_AddrVarFieldIds_60));
#line 850 "lco.m"
    *transform_hlds__lco__wrapper_arg_6 = ((MR_Box) (transform_hlds__lco__conv0_STATE_VARIABLE_Info_62));
#line 850 "lco.m"
  }
#line 850 "lco.m"
}

#line 848 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0_1(
#line 848 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 848 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1)
#line 848 "lco.m"
{
#line 848 "lco.m"
  {
#line 848 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 848 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

#line 848 "lco.m"
    {
#line 848 "lco.m"
      return transform_hlds__lco__succeeded = transform_hlds__lco__occurs_once_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
#line 848 "lco.m"
    return transform_hlds__lco__succeeded;
#line 848 "lco.m"
  }
#line 848 "lco.m"
}

#line 808 "lco.m"
static void MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0(
#line 808 "lco.m"
  MR_Word transform_hlds__lco__CallGoal_9,
#line 808 "lco.m"
  MR_Word transform_hlds__lco__CallOutArgs_10,
#line 808 "lco.m"
  MR_Word transform_hlds__lco__UnifyGoals_11,
#line 808 "lco.m"
  MR_Word transform_hlds__lco__UnifyInputVars_12,
#line 808 "lco.m"
  MR_Word * transform_hlds__lco__MaybeGoals_13,
#line 808 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_52,
#line 808 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_53,
#line 808 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_15)
#line 808 "lco.m"
{
#line 813 "lco.m"
  {
#line 813 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 813 "lco.m"
    MR_Word transform_hlds__lco__CallGoalExpr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__CallGoal_9, (MR_Integer) 0)));
#line 813 "lco.m"
    MR_Word transform_hlds__lco__CallGoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__CallGoal_9, (MR_Integer) 1)));
#line 813 "lco.m"
    MR_Word transform_hlds__lco__ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_52, (MR_Integer) 0)));
#line 813 "lco.m"
    MR_Word transform_hlds__lco__ProcInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 4)));
#line 813 "lco.m"
    MR_Word transform_hlds__lco__VarTypes_20;
#line 815 "lco.m"
    MR_Word transform_hlds__lco__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_52, (MR_Integer) 1)));
#line 815 "lco.m"
    MR_Word transform_hlds__lco__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_52, (MR_Integer) 2)));
#line 815 "lco.m"
    MR_Word transform_hlds__lco__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_52, (MR_Integer) 3)));
#line 815 "lco.m"
    MR_Word transform_hlds__lco__V_106_106 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_52, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 815 "lco.m"
    MR_Word transform_hlds__lco__V_107_107 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_52, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 815 "lco.m"
    MR_Word transform_hlds__lco__V_108_108 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_52, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 816 "lco.m"
    MR_Word transform_hlds__lco__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 0)));
#line 816 "lco.m"
    MR_Word transform_hlds__lco__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 1)));
#line 816 "lco.m"
    MR_Word transform_hlds__lco__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 2)));
#line 816 "lco.m"
    MR_Word transform_hlds__lco__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 3)));
#line 816 "lco.m"
    MR_Word transform_hlds__lco__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 5)));
#line 816 "lco.m"
    MR_Word transform_hlds__lco__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 6)));
#line 816 "lco.m"
    MR_Word transform_hlds__lco__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 7)));
#line 884 "lco.m"
    MR_Word transform_hlds__lco__PredId_21;
#line 884 "lco.m"
    MR_Integer transform_hlds__lco__ProcId_22;
#line 884 "lco.m"
    MR_Word transform_hlds__lco__Args_23;
#line 884 "lco.m"
    MR_Word transform_hlds__lco__Builtin_24;
#line 884 "lco.m"
    MR_Word transform_hlds__lco__UnifyContext_25;
#line 884 "lco.m"
    MR_Word transform_hlds__lco__UpdatedCallOutArgs_30;
#line 884 "lco.m"
    MR_Word transform_hlds__lco__UpdatedUnifyGoals_36;
#line 884 "lco.m"
    MR_Word transform_hlds__lco__VariantPredProcId_41;
#line 884 "lco.m"
    MR_Word transform_hlds__lco__VariantSymName_42;
#line 884 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_Info_98_98;
#line 820 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_143_143;
#line 820 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_148_148;
#line 820 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_156_156;
#line 820 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_157_157;
#line 820 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_158_158;
#line 820 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_159_159;
#line 820 "lco.m"
    MR_Word transform_hlds__lco__SymName_26;
#line 820 "lco.m"
    MR_Word transform_hlds__lco__CurrProcOutArgs_27;
#line 820 "lco.m"
    MR_Word transform_hlds__lco__CallHeadPairs_28;
#line 820 "lco.m"
    MR_Word transform_hlds__lco__Mismatches_29;
#line 820 "lco.m"
    MR_Word transform_hlds__lco__Subst_31;
#line 820 "lco.m"
    MR_Word transform_hlds__lco__MismatchedCallArgs_35;
#line 820 "lco.m"
    MR_Word transform_hlds__lco__AddrFieldIds_37;
#line 820 "lco.m"
    MR_Word transform_hlds__lco__HighLevelData_39;
#line 820 "lco.m"
    MR_Word transform_hlds__lco__VariantArgs_40;
#line 820 "lco.m"
    MR_Integer transform_hlds__lco__V_54_54;
#line 820 "lco.m"
    MR_Word transform_hlds__lco__V_55_55;
#line 820 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_Info_56_56;
#line 820 "lco.m"
    MR_Word transform_hlds__lco__V_77_77;
#line 820 "lco.m"
    MR_Word transform_hlds__lco__V_78_78;
#line 820 "lco.m"
    MR_Word transform_hlds__lco__V_79_79;
#line 820 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_Info_80_80;
#line 821 "lco.m"
    MR_Word transform_hlds__lco__V_116_116;
#line 821 "lco.m"
    MR_Word transform_hlds__lco__V_117_117;
#line 821 "lco.m"
    MR_Word transform_hlds__lco__V_118_118;
#line 821 "lco.m"
    MR_Word transform_hlds__lco__V_119_119;
#line 821 "lco.m"
    MR_Word transform_hlds__lco__V_120_120;
#line 821 "lco.m"
    MR_Word transform_hlds__lco__V_121_121;
#line 821 "lco.m"
    MR_Word transform_hlds__lco__V_122_122;
#line 844 "lco.m"
    MR_Word transform_hlds__lco__V_33_33;
#line 844 "lco.m"
    MR_Word transform_hlds__lco__V_34_34;
#line 850 "lco.m"
    MR_Box transform_hlds__lco__conv4_AddrFieldIds_37;
#line 850 "lco.m"
    MR_Box transform_hlds__lco__conv3_STATE_VARIABLE_Info_80_80;
#line 866 "lco.m"
    MR_Word transform_hlds__lco__V_129_129;
#line 866 "lco.m"
    MR_Word transform_hlds__lco__V_130_130;
#line 866 "lco.m"
    MR_Word transform_hlds__lco__V_131_131;
#line 866 "lco.m"
    MR_Word transform_hlds__lco__V_132_132;
#line 866 "lco.m"
    MR_Word transform_hlds__lco__V_133_133;
#line 866 "lco.m"
    MR_Word transform_hlds__lco__V_134_134;
#line 866 "lco.m"
    MR_Word transform_hlds__lco__V_135_135;

#line 817 "lco.m"
    {
#line 817 "lco.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lco__ProcInfo_19, &transform_hlds__lco__VarTypes_20);
    }
#line 819 "lco.m"
    transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__CallGoalExpr_16)) == (MR_mktag((MR_Integer) 2)));
#line 819 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 819 "lco.m"
      {
#line 819 "lco.m"
        transform_hlds__lco__PredId_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__CallGoalExpr_16, (MR_Integer) 0)));
#line 819 "lco.m"
        transform_hlds__lco__ProcId_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__lco__CallGoalExpr_16, (MR_Integer) 1)));
#line 819 "lco.m"
        transform_hlds__lco__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__CallGoalExpr_16, (MR_Integer) 2)));
#line 819 "lco.m"
        transform_hlds__lco__Builtin_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__CallGoalExpr_16, (MR_Integer) 3)));
#line 819 "lco.m"
        transform_hlds__lco__UnifyContext_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__CallGoalExpr_16, (MR_Integer) 4)));
#line 819 "lco.m"
        transform_hlds__lco__SymName_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__CallGoalExpr_16, (MR_Integer) 5)));
#line 821 "lco.m"
        transform_hlds__lco__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 0)));
#line 821 "lco.m"
        transform_hlds__lco__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 1)));
#line 821 "lco.m"
        transform_hlds__lco__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 2)));
#line 821 "lco.m"
        transform_hlds__lco__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 3)));
#line 821 "lco.m"
        transform_hlds__lco__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 4)));
#line 821 "lco.m"
        transform_hlds__lco__CurrProcOutArgs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 5)));
#line 821 "lco.m"
        transform_hlds__lco__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 6)));
#line 821 "lco.m"
        transform_hlds__lco__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 7)));
#line 11407 "transform_hlds.lco.c"
        transform_hlds__lco__TypeInfo_143_143 = (MR_Word) &transform_hlds__lco_scalar_common_1[4];
#line 822 "lco.m"
        {
#line 822 "lco.m"
          mercury__assoc_list__from_corresponding_lists_3_p_0(transform_hlds__lco__TypeInfo_143_143, transform_hlds__lco__TypeInfo_143_143, transform_hlds__lco__CallOutArgs_10, transform_hlds__lco__CurrProcOutArgs_27, &transform_hlds__lco__CallHeadPairs_28);
        }
#line 825 "lco.m"
        transform_hlds__lco__V_54_54 = (MR_Integer) 1;
#line 825 "lco.m"
        {
#line 825 "lco.m"
          transform_hlds__lco__V_55_55 = mercury__map__init_0_f_0(transform_hlds__lco__TypeInfo_143_143, transform_hlds__lco__TypeInfo_143_143);
        }
#line 824 "lco.m"
        {
#line 824 "lco.m"
          transform_hlds__lco__find_args_to_pass_by_addr_10_p_0(transform_hlds__lco__ConstInfo_15, transform_hlds__lco__UnifyInputVars_12, transform_hlds__lco__CallHeadPairs_28, transform_hlds__lco__V_54_54, &transform_hlds__lco__Mismatches_29, &transform_hlds__lco__UpdatedCallOutArgs_30, transform_hlds__lco__V_55_55, &transform_hlds__lco__Subst_31, transform_hlds__lco__STATE_VARIABLE_Info_0_52, &transform_hlds__lco__STATE_VARIABLE_Info_56_56);
        }
#line 844 "lco.m"
        transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__Mismatches_29)) == (MR_mktag((MR_Integer) 1)));
#line 844 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 844 "lco.m"
          {
#line 844 "lco.m"
            transform_hlds__lco__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__Mismatches_29, (MR_Integer) 0)));
#line 844 "lco.m"
            transform_hlds__lco__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__Mismatches_29, (MR_Integer) 1)));
#line 11436 "transform_hlds.lco.c"
            transform_hlds__lco__TypeCtorInfo_148_148 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 845 "lco.m"
            {
#line 845 "lco.m"
              mercury__assoc_list__values_2_p_0(transform_hlds__lco__TypeCtorInfo_148_148, transform_hlds__lco__TypeInfo_143_143, transform_hlds__lco__Mismatches_29, &transform_hlds__lco__MismatchedCallArgs_35);
            }
#line 848 "lco.m"
            {
#line 848 "lco.m"
              transform_hlds__lco__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 848 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_77_77, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_7[2]));
#line 848 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_77_77, 1) = ((MR_Box) (transform_hlds__lco__transform_call_and_unifies_8_p_0_1));
#line 848 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 848 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_77_77, 3) = ((MR_Box) (transform_hlds__lco__UnifyInputVars_12));
#line 848 "lco.m"
            }
#line 848 "lco.m"
            {
#line 848 "lco.m"
              transform_hlds__lco__succeeded = mercury__list__all_true_2_p_0(transform_hlds__lco__TypeInfo_143_143, transform_hlds__lco__V_77_77, transform_hlds__lco__MismatchedCallArgs_35);
            }
#line 820 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 820 "lco.m"
              {
#line 11466 "transform_hlds.lco.c"
                transform_hlds__lco__TypeCtorInfo_156_156 = (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0;
#line 850 "lco.m"
                {
#line 850 "lco.m"
                  transform_hlds__lco__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 850 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_78_78, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_9[0]));
#line 850 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_78_78, 1) = ((MR_Box) (transform_hlds__lco__transform_call_and_unifies_8_p_0_2));
#line 850 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_78_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 850 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_78_78, 3) = ((MR_Box) (transform_hlds__lco__ConstInfo_15));
#line 850 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_78_78, 4) = ((MR_Box) (transform_hlds__lco__Subst_31));
#line 850 "lco.m"
                }
#line 851 "lco.m"
                {
#line 851 "lco.m"
                  transform_hlds__lco__V_79_79 = mercury__map__init_0_f_0(transform_hlds__lco__TypeInfo_143_143, transform_hlds__lco__TypeCtorInfo_156_156);
                }
#line 11489 "transform_hlds.lco.c"
                transform_hlds__lco__TypeCtorInfo_157_157 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 11491 "transform_hlds.lco.c"
                transform_hlds__lco__TypeInfo_158_158 = (MR_Word) &transform_hlds__lco_scalar_common_2[5];
#line 11493 "transform_hlds.lco.c"
                transform_hlds__lco__TypeCtorInfo_159_159 = (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_info_0;
#line 850 "lco.m"
                {
#line 850 "lco.m"
                  mercury__list__map_foldl2_7_p_0(transform_hlds__lco__TypeCtorInfo_157_157, transform_hlds__lco__TypeCtorInfo_157_157, transform_hlds__lco__TypeInfo_158_158, transform_hlds__lco__TypeCtorInfo_159_159, transform_hlds__lco__V_78_78, transform_hlds__lco__UnifyGoals_11, &transform_hlds__lco__UpdatedUnifyGoals_36, ((MR_Box) (transform_hlds__lco__V_79_79)), &transform_hlds__lco__conv4_AddrFieldIds_37, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_Info_56_56)), &transform_hlds__lco__conv3_STATE_VARIABLE_Info_80_80);
                }
#line 850 "lco.m"
                transform_hlds__lco__AddrFieldIds_37 = ((MR_Word) transform_hlds__lco__conv4_AddrFieldIds_37);
#line 850 "lco.m"
                transform_hlds__lco__STATE_VARIABLE_Info_80_80 = ((MR_Word) transform_hlds__lco__conv3_STATE_VARIABLE_Info_80_80);
#line 866 "lco.m"
                transform_hlds__lco__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 0)));
#line 866 "lco.m"
                transform_hlds__lco__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 1)));
#line 866 "lco.m"
                transform_hlds__lco__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 2)));
#line 866 "lco.m"
                transform_hlds__lco__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 3)));
#line 866 "lco.m"
                transform_hlds__lco__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 4)));
#line 866 "lco.m"
                transform_hlds__lco__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 5)));
#line 866 "lco.m"
                transform_hlds__lco__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 6)));
#line 866 "lco.m"
                transform_hlds__lco__HighLevelData_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 7)));
#line 867 "lco.m"
                {
#line 867 "lco.m"
                  transform_hlds__lco__make_variant_args_4_p_0(transform_hlds__lco__HighLevelData_39, transform_hlds__lco__AddrFieldIds_37, transform_hlds__lco__Mismatches_29, &transform_hlds__lco__VariantArgs_40);
                }
#line 869 "lco.m"
                {
#line 869 "lco.m"
                  transform_hlds__lco__succeeded = transform_hlds__lco__ensure_variant_exists_8_p_0(transform_hlds__lco__PredId_21, transform_hlds__lco__ProcId_22, transform_hlds__lco__VariantArgs_40, &transform_hlds__lco__VariantPredProcId_41, transform_hlds__lco__SymName_26, &transform_hlds__lco__VariantSymName_42, transform_hlds__lco__STATE_VARIABLE_Info_80_80, &transform_hlds__lco__STATE_VARIABLE_Info_98_98);
                }
#line 820 "lco.m"
              }
#line 844 "lco.m"
          }
#line 819 "lco.m"
      }
#line 884 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 872 "lco.m"
      {
#line 872 "lco.m"
        MR_Word transform_hlds__lco__CalleeProcInfo_43;
#line 872 "lco.m"
        MR_Word transform_hlds__lco__CalleeModes_44;
#line 872 "lco.m"
        MR_Word transform_hlds__lco__UpdatedArgs_45;
#line 872 "lco.m"
        MR_Word transform_hlds__lco__VariantPredId_46;
#line 872 "lco.m"
        MR_Integer transform_hlds__lco__VariantProcId_47;
#line 872 "lco.m"
        MR_Word transform_hlds__lco__UpdatedGoalExpr_48;
#line 872 "lco.m"
        MR_Word transform_hlds__lco__UpdatedGoal_50;
#line 872 "lco.m"
        MR_Word transform_hlds__lco__Goals_51;
#line 872 "lco.m"
        MR_Word transform_hlds__lco__V_99_99;
#line 883 "lco.m"
        MR_Word transform_hlds__lco__V_136_136;
#line 883 "lco.m"
        MR_Word transform_hlds__lco__V_137_137;
#line 883 "lco.m"
        MR_Word transform_hlds__lco__V_138_138;
#line 883 "lco.m"
        MR_Word transform_hlds__lco__V_139_139;
#line 883 "lco.m"
        MR_Word transform_hlds__lco__V_140_140;
#line 883 "lco.m"
        MR_Word transform_hlds__lco__V_141_141;
#line 883 "lco.m"
        MR_Word transform_hlds__lco__V_142_142;

#line 872 "lco.m"
        {
#line 872 "lco.m"
          hlds__hlds_module__module_info_proc_info_4_p_0(transform_hlds__lco__ModuleInfo_18, transform_hlds__lco__PredId_21, transform_hlds__lco__ProcId_22, &transform_hlds__lco__CalleeProcInfo_43);
        }
#line 873 "lco.m"
        {
#line 873 "lco.m"
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__lco__CalleeProcInfo_43, &transform_hlds__lco__CalleeModes_44);
        }
#line 874 "lco.m"
        {
#line 874 "lco.m"
          transform_hlds__lco__update_call_args_6_p_0(transform_hlds__lco__ModuleInfo_18, transform_hlds__lco__VarTypes_20, transform_hlds__lco__CalleeModes_44, transform_hlds__lco__Args_23, transform_hlds__lco__UpdatedCallOutArgs_30, &transform_hlds__lco__UpdatedArgs_45);
        }
#line 876 "lco.m"
        transform_hlds__lco__VariantPredId_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantPredProcId_41, (MR_Integer) 0)));
#line 876 "lco.m"
        transform_hlds__lco__VariantProcId_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantPredProcId_41, (MR_Integer) 1)));
#line 877 "lco.m"
        {
#line 877 "lco.m"
          transform_hlds__lco__UpdatedGoalExpr_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 877 "lco.m"
          MR_hl_field(MR_mktag(2), transform_hlds__lco__UpdatedGoalExpr_48, 0) = ((MR_Box) (transform_hlds__lco__VariantPredId_46));
#line 877 "lco.m"
          MR_hl_field(MR_mktag(2), transform_hlds__lco__UpdatedGoalExpr_48, 1) = ((MR_Box) (transform_hlds__lco__VariantProcId_47));
#line 877 "lco.m"
          MR_hl_field(MR_mktag(2), transform_hlds__lco__UpdatedGoalExpr_48, 2) = ((MR_Box) (transform_hlds__lco__UpdatedArgs_45));
#line 877 "lco.m"
          MR_hl_field(MR_mktag(2), transform_hlds__lco__UpdatedGoalExpr_48, 3) = ((MR_Box) (transform_hlds__lco__Builtin_24));
#line 877 "lco.m"
          MR_hl_field(MR_mktag(2), transform_hlds__lco__UpdatedGoalExpr_48, 4) = ((MR_Box) (transform_hlds__lco__UnifyContext_25));
#line 877 "lco.m"
          MR_hl_field(MR_mktag(2), transform_hlds__lco__UpdatedGoalExpr_48, 5) = ((MR_Box) (transform_hlds__lco__VariantSymName_42));
#line 877 "lco.m"
        }
#line 880 "lco.m"
        {
#line 880 "lco.m"
          transform_hlds__lco__UpdatedGoal_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 880 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__UpdatedGoal_50, 0) = ((MR_Box) (transform_hlds__lco__UpdatedGoalExpr_48));
#line 880 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__UpdatedGoal_50, 1) = ((MR_Box) (transform_hlds__lco__CallGoalInfo_17));
#line 880 "lco.m"
        }
#line 881 "lco.m"
        {
#line 881 "lco.m"
          transform_hlds__lco__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 881 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_99_99, 0) = ((MR_Box) (transform_hlds__lco__UpdatedGoal_50));
#line 881 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 881 "lco.m"
        }
#line 881 "lco.m"
        {
#line 881 "lco.m"
          transform_hlds__lco__Goals_51 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__lco__UpdatedUnifyGoals_36, transform_hlds__lco__V_99_99);
        }
#line 882 "lco.m"
        {
#line 882 "lco.m"
          MR_Word base;
#line 882 "lco.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 882 "lco.m"
          *transform_hlds__lco__MaybeGoals_13 = base;
#line 882 "lco.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Goals_51));
#line 882 "lco.m"
        }
#line 883 "lco.m"
        transform_hlds__lco__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_98_98, (MR_Integer) 0)));
#line 883 "lco.m"
        transform_hlds__lco__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_98_98, (MR_Integer) 1)));
#line 883 "lco.m"
        transform_hlds__lco__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_98_98, (MR_Integer) 2)));
#line 883 "lco.m"
        transform_hlds__lco__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_98_98, (MR_Integer) 3)));
#line 883 "lco.m"
        transform_hlds__lco__V_140_140 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_98_98, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 883 "lco.m"
        transform_hlds__lco__V_141_141 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_98_98, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 883 "lco.m"
        transform_hlds__lco__V_142_142 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_98_98, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 883 "lco.m"
        {
#line 883 "lco.m"
          MR_Word base;
#line 883 "lco.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 883 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_Info_53 = base;
#line 883 "lco.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__V_136_136));
#line 883 "lco.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__V_137_137));
#line 883 "lco.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__V_138_138));
#line 883 "lco.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lco__V_139_139));
#line 883 "lco.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((transform_hlds__lco__V_140_140 | ((((transform_hlds__lco__V_141_141 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 2)))))));
#line 883 "lco.m"
        }
#line 872 "lco.m"
      }
#line 884 "lco.m"
    else
#line 887 "lco.m"
      {
#line 887 "lco.m"
        *transform_hlds__lco__MaybeGoals_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 887 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_Info_53 = transform_hlds__lco__STATE_VARIABLE_Info_0_52;
#line 887 "lco.m"
      }
#line 813 "lco.m"
  }
#line 808 "lco.m"
}

#line 772 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_unification_5_p_0_1(
#line 772 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 772 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1)
#line 772 "lco.m"
{
#line 772 "lco.m"
  {
#line 772 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 772 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

#line 772 "lco.m"
    {
#line 772 "lco.m"
      return transform_hlds__lco__succeeded = transform_hlds__lco__acceptable_construct_mode_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
#line 772 "lco.m"
    return transform_hlds__lco__succeeded;
#line 772 "lco.m"
  }
#line 772 "lco.m"
}

#line 758 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_unification_5_p_0(
#line 758 "lco.m"
  MR_Word transform_hlds__lco__Goal_6,
#line 758 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_0_30,
#line 758 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_31,
#line 758 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_32,
#line 758 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_33)
#line 758 "lco.m"
{
#line 761 "lco.m"
  {
#line 761 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 761 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_67_67;
#line 761 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_72_72;
#line 761 "lco.m"
    MR_Word transform_hlds__lco__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_6, (MR_Integer) 0)));
#line 761 "lco.m"
    MR_Word transform_hlds__lco__Unification_14;
#line 761 "lco.m"
    MR_Word transform_hlds__lco__ConstructedVar_16;
#line 761 "lco.m"
    MR_Word transform_hlds__lco__ConsId_17;
#line 761 "lco.m"
    MR_Word transform_hlds__lco__ConstructArgs_18;
#line 761 "lco.m"
    MR_Word transform_hlds__lco__ArgUniModes_19;
#line 761 "lco.m"
    MR_Word transform_hlds__lco__SubInfo_22;
#line 761 "lco.m"
    MR_Word transform_hlds__lco__ModuleInfo_24;
#line 761 "lco.m"
    MR_Word transform_hlds__lco__ConsTag_25;
#line 761 "lco.m"
    MR_Word transform_hlds__lco__V_35_35;
#line 761 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_53_53;
#line 762 "lco.m"
    MR_Word transform_hlds__lco___GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_6, (MR_Integer) 1)));
#line 763 "lco.m"
    MR_Word transform_hlds__lco__V_11_11;
#line 763 "lco.m"
    MR_Word transform_hlds__lco__V_12_12;
#line 763 "lco.m"
    MR_Word transform_hlds__lco__V_13_13;
#line 763 "lco.m"
    MR_Word transform_hlds__lco__V_15_15;
#line 764 "lco.m"
    MR_Word transform_hlds__lco__V_20_20;
#line 764 "lco.m"
    MR_Word transform_hlds__lco__V_21_21;
#line 771 "lco.m"
    MR_Word transform_hlds__lco__V_60_60;
#line 771 "lco.m"
    MR_Word transform_hlds__lco__V_61_61;
#line 771 "lco.m"
    MR_Word transform_hlds__lco__V_62_62;
#line 771 "lco.m"
    MR_Word transform_hlds__lco__V_63_63;
#line 771 "lco.m"
    MR_Word transform_hlds__lco__V_64_64;
#line 771 "lco.m"
    MR_Word transform_hlds__lco__V_65_65;

#line 763 "lco.m"
    transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__GoalExpr_9)) == (MR_mktag((MR_Integer) 1)));
#line 763 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 763 "lco.m"
      {
#line 763 "lco.m"
        transform_hlds__lco__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_9, (MR_Integer) 0)));
#line 763 "lco.m"
        transform_hlds__lco__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_9, (MR_Integer) 1)));
#line 763 "lco.m"
        transform_hlds__lco__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_9, (MR_Integer) 2)));
#line 763 "lco.m"
        transform_hlds__lco__Unification_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_9, (MR_Integer) 3)));
#line 763 "lco.m"
        transform_hlds__lco__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_9, (MR_Integer) 4)));
#line 764 "lco.m"
        transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__Unification_14)) == (MR_mktag((MR_Integer) 0)));
#line 764 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 764 "lco.m"
          {
#line 764 "lco.m"
            transform_hlds__lco__ConstructedVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 0)));
#line 764 "lco.m"
            transform_hlds__lco__ConsId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 1)));
#line 764 "lco.m"
            transform_hlds__lco__ConstructArgs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 2)));
#line 764 "lco.m"
            transform_hlds__lco__ArgUniModes_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 3)));
#line 764 "lco.m"
            transform_hlds__lco__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 4)));
#line 764 "lco.m"
            transform_hlds__lco__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 5)));
#line 764 "lco.m"
            transform_hlds__lco__SubInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 6)));
#line 768 "lco.m"
            if ((transform_hlds__lco__SubInfo_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 767 "lco.m"
              transform_hlds__lco__succeeded = MR_TRUE;
#line 768 "lco.m"
            else
#line 769 "lco.m"
              {
#line 769 "lco.m"
                MR_Word transform_hlds__lco__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SubInfo_22, (MR_Integer) 0)));
#line 769 "lco.m"
                MR_Word transform_hlds__lco__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SubInfo_22, (MR_Integer) 1)));

#line 769 "lco.m"
                transform_hlds__lco__succeeded = (transform_hlds__lco__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 769 "lco.m"
              }
#line 761 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 761 "lco.m"
              {
#line 771 "lco.m"
                transform_hlds__lco__ModuleInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 0)));
#line 771 "lco.m"
                transform_hlds__lco__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 1)));
#line 771 "lco.m"
                transform_hlds__lco__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 2)));
#line 771 "lco.m"
                transform_hlds__lco__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 3)));
#line 771 "lco.m"
                transform_hlds__lco__V_63_63 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 771 "lco.m"
                transform_hlds__lco__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 771 "lco.m"
                transform_hlds__lco__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 11869 "transform_hlds.lco.c"
                transform_hlds__lco__TypeCtorInfo_67_67 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0;
#line 772 "lco.m"
                {
#line 772 "lco.m"
                  transform_hlds__lco__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 772 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_35_35, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_7[1]));
#line 772 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_35_35, 1) = ((MR_Box) (transform_hlds__lco__acceptable_construct_unification_5_p_0_1));
#line 772 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 772 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_35_35, 3) = ((MR_Box) (transform_hlds__lco__ModuleInfo_24));
#line 772 "lco.m"
                }
#line 772 "lco.m"
                {
#line 772 "lco.m"
                  transform_hlds__lco__succeeded = mercury__list__all_true_2_p_0(transform_hlds__lco__TypeCtorInfo_67_67, transform_hlds__lco__V_35_35, transform_hlds__lco__ArgUniModes_19);
                }
#line 761 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 761 "lco.m"
                  {
#line 773 "lco.m"
                    {
#line 773 "lco.m"
                      transform_hlds__lco__ConsTag_25 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(transform_hlds__lco__ModuleInfo_24, transform_hlds__lco__ConsId_17);
                    }
#line 779 "lco.m"
                    if ((transform_hlds__lco__ConsTag_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 778 "lco.m"
                      transform_hlds__lco__succeeded = MR_TRUE;
#line 779 "lco.m"
                    else
#line 779 "lco.m"
                      if (((((MR_tag((MR_Word) transform_hlds__lco__ConsTag_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__ConsTag_25, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 782 "lco.m"
                        transform_hlds__lco__succeeded = MR_TRUE;
#line 779 "lco.m"
                      else
#line 779 "lco.m"
                        if (((((MR_tag((MR_Word) transform_hlds__lco__ConsTag_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__ConsTag_25, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 780 "lco.m"
                          transform_hlds__lco__succeeded = MR_TRUE;
#line 779 "lco.m"
                        else
#line 779 "lco.m"
                          transform_hlds__lco__succeeded = MR_FALSE;
#line 761 "lco.m"
                    if (transform_hlds__lco__succeeded)
#line 761 "lco.m"
                      {
#line 11923 "transform_hlds.lco.c"
                        transform_hlds__lco__TypeInfo_72_72 = (MR_Word) &transform_hlds__lco_scalar_common_1[4];
#line 799 "lco.m"
                        {
#line 799 "lco.m"
                          mercury__bag__delete_3_p_0(transform_hlds__lco__TypeInfo_72_72, ((MR_Box) (transform_hlds__lco__ConstructedVar_16)), transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_0_30, &transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_53_53);
                        }
#line 800 "lco.m"
                        {
#line 800 "lco.m"
                          mercury__bag__insert_list_3_p_0(transform_hlds__lco__TypeInfo_72_72, transform_hlds__lco__ConstructArgs_18, transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_53_53, transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_31);
                        }
#line 801 "lco.m"
                        *transform_hlds__lco__STATE_VARIABLE_Info_33 = transform_hlds__lco__STATE_VARIABLE_Info_0_32;
#line 801 "lco.m"
                        transform_hlds__lco__succeeded = MR_TRUE;
#line 761 "lco.m"
                      }
#line 761 "lco.m"
                  }
#line 761 "lco.m"
              }
#line 764 "lco.m"
          }
#line 763 "lco.m"
      }
#line 761 "lco.m"
    return transform_hlds__lco__succeeded;
#line 761 "lco.m"
  }
#line 758 "lco.m"
}

#line 736 "lco.m"
static void MR_CALL 
transform_hlds__lco__partition_dependent_goal_9_p_0(
#line 736 "lco.m"
  MR_Word transform_hlds__lco___Info_10,
#line 736 "lco.m"
  MR_Word transform_hlds__lco___ConstInfo_11,
#line 736 "lco.m"
  MR_Word transform_hlds__lco__Goal_12,
#line 736 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22,
#line 736 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23,
#line 736 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24,
#line 736 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25,
#line 736 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26,
#line 736 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_DelayForVars_27)
#line 736 "lco.m"
{
#line 742 "lco.m"
  {
#line 742 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 742 "lco.m"
    {
#line 742 "lco.m"
      transform_hlds__lco__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_116_105_116_105_111_110_95_100_101_112_101_110_100_101_110_116_95_103_111_97_108_95_95_91_49_44_32_50_93_95_48_9_p_0(transform_hlds__lco__Goal_12, transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22, transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23, transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24, transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25, transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26, transform_hlds__lco__STATE_VARIABLE_DelayForVars_27);
#line 742 "lco.m"
      return;
    }
#line 742 "lco.m"
  }
#line 736 "lco.m"
}

#line 701 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__potentially_moveable_goal_1_p_0(
#line 701 "lco.m"
  MR_Word transform_hlds__lco__Goal_2)
#line 701 "lco.m"
{
#line 703 "lco.m"
  while (MR_TRUE)
#line 703 "lco.m"
    {
#line 703 "lco.m"
      /* tailcall optimized into a loop */
#line 703 "lco.m"
      {
#line 703 "lco.m"
        MR_bool transform_hlds__lco__succeeded;
#line 703 "lco.m"
        MR_Word transform_hlds__lco__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_2, (MR_Integer) 0)));
#line 703 "lco.m"
        MR_Word transform_hlds__lco__GoalInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_2, (MR_Integer) 1)));
#line 703 "lco.m"
        MR_Word transform_hlds__lco__V_44_44;

#line 705 "lco.m"
        {
#line 705 "lco.m"
          transform_hlds__lco__V_44_44 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__lco__GoalInfo_4);
        }
#line 705 "lco.m"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_44_44 == (MR_Integer) 0);
#line 703 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 709 "lco.m"
          {
#line 709 "lco.m"
            if (((MR_tag((MR_Word) transform_hlds__lco__GoalExpr_3)) == (MR_mktag((MR_Integer) 1))))
#line 708 "lco.m"
              transform_hlds__lco__succeeded = MR_TRUE;
#line 709 "lco.m"
            else
#line 709 "lco.m"
              if (((((MR_tag((MR_Word) transform_hlds__lco__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 710 "lco.m"
                {
#line 710 "lco.m"
                  MR_Word transform_hlds__lco__Reason_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_3, (MR_Integer) 1)));
#line 710 "lco.m"
                  MR_Word transform_hlds__lco__SubGoal_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_3, (MR_Integer) 2)));
#line 711 "lco.m"
                  MR_Word transform_hlds__lco__V_12_12;
#line 711 "lco.m"
                  MR_Word transform_hlds__lco__V_13_13;

#line 711 "lco.m"
                  transform_hlds__lco__succeeded = ((((MR_tag((MR_Word) transform_hlds__lco__Reason_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_10, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 711 "lco.m"
                  if (transform_hlds__lco__succeeded)
#line 711 "lco.m"
                    {
#line 711 "lco.m"
                      transform_hlds__lco__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_10, (MR_Integer) 1)));
#line 711 "lco.m"
                      transform_hlds__lco__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_10, (MR_Integer) 2)));
#line 712 "lco.m"
                      transform_hlds__lco__succeeded = MR_TRUE;
#line 711 "lco.m"
                    }
#line 711 "lco.m"
                  else
#line 714 "lco.m"
                    {
#line 714 "lco.m"
                      /* direct tailcall eliminated */
#line 714 "lco.m"
                      {
#line 714 "lco.m"
                        MR_Word transform_hlds__lco__Goal__tmp_copy_2 = transform_hlds__lco__SubGoal_11;

#line 714 "lco.m"
                        transform_hlds__lco__Goal_2 = transform_hlds__lco__Goal__tmp_copy_2;
#line 714 "lco.m"
                      }
#line 714 "lco.m"
                      continue;
#line 714 "lco.m"
                    }
#line 710 "lco.m"
                }
#line 709 "lco.m"
              else
#line 709 "lco.m"
                if (((((MR_tag((MR_Word) transform_hlds__lco__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 728 "lco.m"
                  {
#line 729 "lco.m"
                    {
#line 729 "lco.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.potentially_moveable_goal\'/1", (MR_String) "shorthand");
                    }
#line 728 "lco.m"
                    transform_hlds__lco__succeeded = MR_TRUE;
#line 728 "lco.m"
                  }
#line 709 "lco.m"
                else
#line 709 "lco.m"
                  transform_hlds__lco__succeeded = MR_FALSE;
#line 709 "lco.m"
          }
#line 703 "lco.m"
        return transform_hlds__lco__succeeded;
#line 703 "lco.m"
      }
#line 703 "lco.m"
      break;
#line 703 "lco.m"
    }
#line 701 "lco.m"
}

#line 633 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__divide_rev_conj_8_p_0(
#line 633 "lco.m"
  MR_Word transform_hlds__lco__Info_9,
#line 633 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_10,
#line 633 "lco.m"
  MR_Word transform_hlds__lco__RevGoals0_11,
#line 633 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_AfterGoals_0_19,
#line 633 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_AfterGoals_20,
#line 633 "lco.m"
  MR_Word * transform_hlds__lco__RecGoal_13,
#line 633 "lco.m"
  MR_Word * transform_hlds__lco__RecOutArgs_14,
#line 633 "lco.m"
  MR_Word * transform_hlds__lco__RevBeforeGoals_15)
#line 633 "lco.m"
{
#line 12138 "transform_hlds.lco.c"
  while (MR_TRUE)
#line 12140 "transform_hlds.lco.c"
    {
#line 12142 "transform_hlds.lco.c"
      /* tailcall optimized into a loop */
#line 12144 "transform_hlds.lco.c"
      {
#line 12146 "transform_hlds.lco.c"
        MR_bool transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__RevGoals0_11)) == (MR_mktag((MR_Integer) 1)));
#line 12148 "transform_hlds.lco.c"
        MR_Word transform_hlds__lco__RevGoal_16;
#line 12150 "transform_hlds.lco.c"
        MR_Word transform_hlds__lco__RevGoalsTail_17;
#line 652 "lco.m"
        MR_Word transform_hlds__lco__OutArgs_18;
#line 666 "lco.m"
        MR_Word transform_hlds__lco__TypeCtorInfo_70_91;
#line 666 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_72_93;
#line 666 "lco.m"
        MR_Word transform_hlds__lco__GoalExpr_30;
#line 666 "lco.m"
        MR_Word transform_hlds__lco__GoalInfo_31;
#line 666 "lco.m"
        MR_Word transform_hlds__lco__PredId_32;
#line 666 "lco.m"
        MR_Integer transform_hlds__lco__ProcId_33;
#line 666 "lco.m"
        MR_Word transform_hlds__lco__Args_34;
#line 666 "lco.m"
        MR_Word transform_hlds__lco__ModuleInfo_38;
#line 666 "lco.m"
        MR_Word transform_hlds__lco__ProcInfo_39;
#line 666 "lco.m"
        MR_Word transform_hlds__lco__VarTypes_40;
#line 666 "lco.m"
        MR_Word transform_hlds__lco__CalleeProcInfo_41;
#line 666 "lco.m"
        MR_Word transform_hlds__lco__CalleeArgModes_42;
#line 666 "lco.m"
        MR_Word transform_hlds__lco__UnusedArgs_44;
#line 666 "lco.m"
        MR_Integer transform_hlds__lco__NumOutArgs_46;
#line 666 "lco.m"
        MR_Word transform_hlds__lco__CurrProcOutArgs_47;
#line 666 "lco.m"
        MR_Integer transform_hlds__lco__NumCurrProcOutArgs_48;
#line 666 "lco.m"
        MR_Word transform_hlds__lco__V_49_49;
#line 666 "lco.m"
        MR_Word transform_hlds__lco__V_50_50;
#line 666 "lco.m"
        MR_Word transform_hlds__lco__V_51_51;
#line 666 "lco.m"
        MR_Word transform_hlds__lco__V_94_94;
#line 668 "lco.m"
        MR_Word transform_hlds__lco___Builtin_35;
#line 668 "lco.m"
        MR_Word transform_hlds__lco___UnifyContext_36;
#line 668 "lco.m"
        MR_Word transform_hlds__lco___SymName_37;
#line 670 "lco.m"
        MR_Word transform_hlds__lco__V_57_57;
#line 670 "lco.m"
        MR_Word transform_hlds__lco__V_58_58;
#line 670 "lco.m"
        MR_Word transform_hlds__lco__V_59_59;
#line 670 "lco.m"
        MR_Word transform_hlds__lco__V_60_60;
#line 670 "lco.m"
        MR_Word transform_hlds__lco__V_61_61;
#line 670 "lco.m"
        MR_Word transform_hlds__lco__V_62_62;
#line 670 "lco.m"
        MR_Word transform_hlds__lco__V_63_63;
#line 671 "lco.m"
        MR_Word transform_hlds__lco__V_64_64;
#line 671 "lco.m"
        MR_Word transform_hlds__lco__V_65_65;
#line 671 "lco.m"
        MR_Word transform_hlds__lco__V_66_66;
#line 671 "lco.m"
        MR_Word transform_hlds__lco__V_67_67;
#line 671 "lco.m"
        MR_Word transform_hlds__lco__V_69_69;
#line 671 "lco.m"
        MR_Word transform_hlds__lco__V_70_70;
#line 673 "lco.m"
        MR_Word transform_hlds__lco__V_71_71;
#line 673 "lco.m"
        MR_Word transform_hlds__lco__V_72_72;
#line 673 "lco.m"
        MR_Word transform_hlds__lco__V_73_73;
#line 673 "lco.m"
        MR_Word transform_hlds__lco__V_74_74;
#line 673 "lco.m"
        MR_Word transform_hlds__lco__V_75_75;
#line 673 "lco.m"
        MR_Word transform_hlds__lco__V_76_76;
#line 679 "lco.m"
        MR_Word transform_hlds__lco___InArgs_43;
#line 689 "lco.m"
        MR_Word transform_hlds__lco__V_84_84;
#line 689 "lco.m"
        MR_Word transform_hlds__lco__V_85_85;
#line 689 "lco.m"
        MR_Word transform_hlds__lco__V_86_86;
#line 689 "lco.m"
        MR_Word transform_hlds__lco__V_87_87;
#line 689 "lco.m"
        MR_Word transform_hlds__lco__V_88_88;
#line 689 "lco.m"
        MR_Word transform_hlds__lco__V_89_89;
#line 689 "lco.m"
        MR_Word transform_hlds__lco__V_90_90;

#line 12255 "transform_hlds.lco.c"
        if (transform_hlds__lco__succeeded)
#line 12257 "transform_hlds.lco.c"
          {
#line 12259 "transform_hlds.lco.c"
            transform_hlds__lco__RevGoal_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__RevGoals0_11, (MR_Integer) 0)));
#line 12261 "transform_hlds.lco.c"
            transform_hlds__lco__RevGoalsTail_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__RevGoals0_11, (MR_Integer) 1)));
#line 667 "lco.m"
            transform_hlds__lco__GoalExpr_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__RevGoal_16, (MR_Integer) 0)));
#line 667 "lco.m"
            transform_hlds__lco__GoalInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__RevGoal_16, (MR_Integer) 1)));
#line 668 "lco.m"
            transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__GoalExpr_30)) == (MR_mktag((MR_Integer) 2)));
#line 668 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 668 "lco.m"
              {
#line 668 "lco.m"
                transform_hlds__lco__PredId_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr_30, (MR_Integer) 0)));
#line 668 "lco.m"
                transform_hlds__lco__ProcId_33 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr_30, (MR_Integer) 1)));
#line 668 "lco.m"
                transform_hlds__lco__Args_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr_30, (MR_Integer) 2)));
#line 668 "lco.m"
                transform_hlds__lco___Builtin_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr_30, (MR_Integer) 3)));
#line 668 "lco.m"
                transform_hlds__lco___UnifyContext_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr_30, (MR_Integer) 4)));
#line 668 "lco.m"
                transform_hlds__lco___SymName_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr_30, (MR_Integer) 5)));
#line 670 "lco.m"
                transform_hlds__lco__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 0)));
#line 670 "lco.m"
                transform_hlds__lco__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 1)));
#line 670 "lco.m"
                transform_hlds__lco__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 2)));
#line 670 "lco.m"
                transform_hlds__lco__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 3)));
#line 670 "lco.m"
                transform_hlds__lco__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 4)));
#line 670 "lco.m"
                transform_hlds__lco__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 5)));
#line 670 "lco.m"
                transform_hlds__lco__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 6)));
#line 670 "lco.m"
                transform_hlds__lco__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 7)));
#line 12301 "transform_hlds.lco.c"
                transform_hlds__lco__TypeCtorInfo_70_91 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 670 "lco.m"
                {
#line 670 "lco.m"
                  transform_hlds__lco__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 670 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_49_49, 0) = ((MR_Box) (transform_hlds__lco__PredId_32));
#line 670 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_49_49, 1) = ((MR_Box) (transform_hlds__lco__ProcId_33));
#line 670 "lco.m"
                }
#line 670 "lco.m"
                {
#line 670 "lco.m"
                  transform_hlds__lco__succeeded = mercury__set__member_2_p_0(transform_hlds__lco__TypeCtorInfo_70_91, ((MR_Box) (transform_hlds__lco__V_49_49)), transform_hlds__lco__V_50_50);
                }
#line 666 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 666 "lco.m"
                  {
#line 671 "lco.m"
                    {
#line 671 "lco.m"
                      transform_hlds__lco__V_51_51 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__lco__GoalInfo_31);
                    }
#line 671 "lco.m"
                    transform_hlds__lco__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 0)));
#line 671 "lco.m"
                    transform_hlds__lco__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 1)));
#line 671 "lco.m"
                    transform_hlds__lco__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 2)));
#line 671 "lco.m"
                    transform_hlds__lco__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 3)));
#line 671 "lco.m"
                    transform_hlds__lco__ProcInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 4)));
#line 671 "lco.m"
                    transform_hlds__lco__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 5)));
#line 671 "lco.m"
                    transform_hlds__lco__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 6)));
#line 671 "lco.m"
                    transform_hlds__lco__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 7)));
#line 671 "lco.m"
                    transform_hlds__lco__succeeded = (transform_hlds__lco__V_51_51 == transform_hlds__lco__V_94_94);
#line 666 "lco.m"
                    if (transform_hlds__lco__succeeded)
#line 666 "lco.m"
                      {
#line 673 "lco.m"
                        transform_hlds__lco__ModuleInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_9, (MR_Integer) 0)));
#line 673 "lco.m"
                        transform_hlds__lco__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_9, (MR_Integer) 1)));
#line 673 "lco.m"
                        transform_hlds__lco__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_9, (MR_Integer) 2)));
#line 673 "lco.m"
                        transform_hlds__lco__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_9, (MR_Integer) 3)));
#line 673 "lco.m"
                        transform_hlds__lco__V_74_74 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_9, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 673 "lco.m"
                        transform_hlds__lco__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_9, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 673 "lco.m"
                        transform_hlds__lco__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_9, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 675 "lco.m"
                        {
#line 675 "lco.m"
                          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lco__ProcInfo_39, &transform_hlds__lco__VarTypes_40);
                        }
#line 677 "lco.m"
                        {
#line 677 "lco.m"
                          hlds__hlds_module__module_info_proc_info_4_p_0(transform_hlds__lco__ModuleInfo_38, transform_hlds__lco__PredId_32, transform_hlds__lco__ProcId_33, &transform_hlds__lco__CalleeProcInfo_41);
                        }
#line 678 "lco.m"
                        {
#line 678 "lco.m"
                          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__lco__CalleeProcInfo_41, &transform_hlds__lco__CalleeArgModes_42);
                        }
#line 679 "lco.m"
                        {
#line 679 "lco.m"
                          transform_hlds__lco__classify_proc_call_args_7_p_0(transform_hlds__lco__ModuleInfo_38, transform_hlds__lco__VarTypes_40, transform_hlds__lco__Args_34, transform_hlds__lco__CalleeArgModes_42, &transform_hlds__lco___InArgs_43, &transform_hlds__lco__OutArgs_18, &transform_hlds__lco__UnusedArgs_44);
                        }
#line 681 "lco.m"
                        transform_hlds__lco__succeeded = (transform_hlds__lco__UnusedArgs_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 666 "lco.m"
                        if (transform_hlds__lco__succeeded)
#line 666 "lco.m"
                          {
#line 12389 "transform_hlds.lco.c"
                            transform_hlds__lco__TypeInfo_72_93 = (MR_Word) &transform_hlds__lco_scalar_common_1[4];
#line 688 "lco.m"
                            {
#line 688 "lco.m"
                              mercury__list__length_2_p_0(transform_hlds__lco__TypeInfo_72_93, transform_hlds__lco__OutArgs_18, &transform_hlds__lco__NumOutArgs_46);
                            }
#line 689 "lco.m"
                            transform_hlds__lco__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 0)));
#line 689 "lco.m"
                            transform_hlds__lco__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 1)));
#line 689 "lco.m"
                            transform_hlds__lco__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 2)));
#line 689 "lco.m"
                            transform_hlds__lco__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 3)));
#line 689 "lco.m"
                            transform_hlds__lco__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 4)));
#line 689 "lco.m"
                            transform_hlds__lco__CurrProcOutArgs_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 5)));
#line 689 "lco.m"
                            transform_hlds__lco__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 6)));
#line 689 "lco.m"
                            transform_hlds__lco__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 7)));
#line 690 "lco.m"
                            {
#line 690 "lco.m"
                              mercury__list__length_2_p_0(transform_hlds__lco__TypeInfo_72_93, transform_hlds__lco__CurrProcOutArgs_47, &transform_hlds__lco__NumCurrProcOutArgs_48);
                            }
#line 691 "lco.m"
                            transform_hlds__lco__succeeded = (transform_hlds__lco__NumOutArgs_46 == transform_hlds__lco__NumCurrProcOutArgs_48);
#line 666 "lco.m"
                          }
#line 666 "lco.m"
                      }
#line 666 "lco.m"
                  }
#line 668 "lco.m"
              }
#line 652 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 649 "lco.m"
              {
#line 649 "lco.m"
                *transform_hlds__lco__RecGoal_13 = transform_hlds__lco__RevGoal_16;
#line 650 "lco.m"
                *transform_hlds__lco__RecOutArgs_14 = transform_hlds__lco__OutArgs_18;
#line 651 "lco.m"
                *transform_hlds__lco__RevBeforeGoals_15 = transform_hlds__lco__RevGoalsTail_17;
#line 651 "lco.m"
                *transform_hlds__lco__STATE_VARIABLE_AfterGoals_20 = transform_hlds__lco__STATE_VARIABLE_AfterGoals_0_19;
#line 649 "lco.m"
                transform_hlds__lco__succeeded = MR_TRUE;
#line 649 "lco.m"
              }
#line 652 "lco.m"
            else
#line 658 "lco.m"
              {
#line 658 "lco.m"
                MR_Word transform_hlds__lco__TypeCtorInfo_23_23;
#line 658 "lco.m"
                MR_Word transform_hlds__lco__STATE_VARIABLE_AfterGoals_21_21;

#line 653 "lco.m"
                {
#line 653 "lco.m"
                  transform_hlds__lco__succeeded = transform_hlds__lco__potentially_moveable_goal_1_p_0(transform_hlds__lco__RevGoal_16);
                }
#line 658 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 658 "lco.m"
                  {
#line 12461 "transform_hlds.lco.c"
                    transform_hlds__lco__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 655 "lco.m"
                    {
#line 655 "lco.m"
                      mercury__list__cons_3_p_0(transform_hlds__lco__TypeCtorInfo_23_23, ((MR_Box) (transform_hlds__lco__RevGoal_16)), transform_hlds__lco__STATE_VARIABLE_AfterGoals_0_19, &transform_hlds__lco__STATE_VARIABLE_AfterGoals_21_21);
                    }
#line 656 "lco.m"
                    /* direct tailcall eliminated */
#line 656 "lco.m"
                    {
#line 656 "lco.m"
                      MR_Word transform_hlds__lco__RevGoals0__tmp_copy_11 = transform_hlds__lco__RevGoalsTail_17;
#line 656 "lco.m"
                      MR_Word transform_hlds__lco__STATE_VARIABLE_AfterGoals_0__tmp_copy_19 = transform_hlds__lco__STATE_VARIABLE_AfterGoals_21_21;

#line 656 "lco.m"
                      transform_hlds__lco__STATE_VARIABLE_AfterGoals_0_19 = transform_hlds__lco__STATE_VARIABLE_AfterGoals_0__tmp_copy_19;
#line 656 "lco.m"
                      transform_hlds__lco__RevGoals0_11 = transform_hlds__lco__RevGoals0__tmp_copy_11;
#line 656 "lco.m"
                    }
#line 656 "lco.m"
                    continue;
#line 658 "lco.m"
                  }
#line 658 "lco.m"
              }
#line 12489 "transform_hlds.lco.c"
          }
#line 12491 "transform_hlds.lco.c"
        return transform_hlds__lco__succeeded;
#line 12493 "transform_hlds.lco.c"
      }
#line 12495 "transform_hlds.lco.c"
      break;
#line 12497 "transform_hlds.lco.c"
    }
#line 633 "lco.m"
}

#line 603 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0_2(
#line 603 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 603 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 603 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 603 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 603 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 603 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5)
#line 603 "lco.m"
{
#line 603 "lco.m"
  {
#line 603 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 603 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 603 "lco.m"
    MR_Word transform_hlds__lco__conv7_STATE_VARIABLE_UnifyInputVars_31;
#line 603 "lco.m"
    MR_Word transform_hlds__lco__conv6_STATE_VARIABLE_Info_33;

#line 603 "lco.m"
    {
#line 603 "lco.m"
      transform_hlds__lco__succeeded = transform_hlds__lco__acceptable_construct_unification_5_p_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2), &transform_hlds__lco__conv7_STATE_VARIABLE_UnifyInputVars_31, ((MR_Word) transform_hlds__lco__wrapper_arg_4), &transform_hlds__lco__conv6_STATE_VARIABLE_Info_33);
    }
#line 603 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 603 "lco.m"
      {
#line 603 "lco.m"
        *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv7_STATE_VARIABLE_UnifyInputVars_31));
#line 603 "lco.m"
        *transform_hlds__lco__wrapper_arg_5 = ((MR_Box) (transform_hlds__lco__conv6_STATE_VARIABLE_Info_33));
#line 603 "lco.m"
        transform_hlds__lco__succeeded = MR_TRUE;
#line 603 "lco.m"
      }
#line 603 "lco.m"
    return transform_hlds__lco__succeeded;
#line 603 "lco.m"
  }
#line 603 "lco.m"
}

#line 599 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0_1(
#line 599 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 599 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 599 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 599 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 599 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 599 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5,
#line 599 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_6,
#line 599 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_7)
#line 599 "lco.m"
{
#line 599 "lco.m"
  {
#line 599 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 599 "lco.m"
    MR_Word transform_hlds__lco__conv2_STATE_VARIABLE_RevDependentGoals_23;
#line 599 "lco.m"
    MR_Word transform_hlds__lco__conv1_STATE_VARIABLE_RevNonDependentGoals_25;
#line 599 "lco.m"
    MR_Word transform_hlds__lco__conv0_STATE_VARIABLE_DelayForVars_27;

#line 599 "lco.m"
    {
#line 599 "lco.m"
      transform_hlds__lco__partition_dependent_goal_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2), &transform_hlds__lco__conv2_STATE_VARIABLE_RevDependentGoals_23, ((MR_Word) transform_hlds__lco__wrapper_arg_4), &transform_hlds__lco__conv1_STATE_VARIABLE_RevNonDependentGoals_25, ((MR_Word) transform_hlds__lco__wrapper_arg_6), &transform_hlds__lco__conv0_STATE_VARIABLE_DelayForVars_27);
    }
#line 599 "lco.m"
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv2_STATE_VARIABLE_RevDependentGoals_23));
#line 599 "lco.m"
    *transform_hlds__lco__wrapper_arg_5 = ((MR_Box) (transform_hlds__lco__conv1_STATE_VARIABLE_RevNonDependentGoals_25));
#line 599 "lco.m"
    *transform_hlds__lco__wrapper_arg_7 = ((MR_Box) (transform_hlds__lco__conv0_STATE_VARIABLE_DelayForVars_27));
#line 599 "lco.m"
  }
#line 599 "lco.m"
}

#line 589 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0(
#line 589 "lco.m"
  MR_Word transform_hlds__lco__Goals0_6,
#line 589 "lco.m"
  MR_Word * transform_hlds__lco__MaybeGoals_7,
#line 589 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_26,
#line 589 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_27,
#line 589 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_9)
#line 589 "lco.m"
{
#line 592 "lco.m"
  {
#line 592 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 592 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_39_39 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 592 "lco.m"
    MR_Word transform_hlds__lco__RevGoals0_10;
#line 619 "lco.m"
    MR_Word transform_hlds__lco__RecGoal_12;
#line 619 "lco.m"
    MR_Word transform_hlds__lco__RecOutArgs_13;
#line 619 "lco.m"
    MR_Word transform_hlds__lco__RevBeforeGoals_14;
#line 619 "lco.m"
    MR_Word transform_hlds__lco__RevAfterDependentGoals_18;
#line 619 "lco.m"
    MR_Word transform_hlds__lco__RevAfterNonDependentGoals_19;
#line 619 "lco.m"
    MR_Word transform_hlds__lco__UnifyInputVars_21;
#line 619 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_Info_34_34;
#line 596 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_40_40;
#line 596 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_48_48;
#line 596 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_49_49;
#line 596 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_55_55;
#line 596 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_56_56;
#line 596 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_57_57;
#line 596 "lco.m"
    MR_Word transform_hlds__lco__AfterGoals_11;
#line 596 "lco.m"
    MR_Word transform_hlds__lco__DelayForVars0_17;
#line 596 "lco.m"
    MR_Word transform_hlds__lco__V_29_29;
#line 596 "lco.m"
    MR_Word transform_hlds__lco__V_30_30;
#line 596 "lco.m"
    MR_Word transform_hlds__lco__V_31_31;
#line 596 "lco.m"
    MR_Word transform_hlds__lco__V_32_32;
#line 596 "lco.m"
    MR_Word transform_hlds__lco__V_33_33;
#line 597 "lco.m"
    MR_Word transform_hlds__lco__V_15_15;
#line 597 "lco.m"
    MR_Word transform_hlds__lco__V_16_16;
#line 599 "lco.m"
    MR_Word transform_hlds__lco___DelayForVars_20;
#line 599 "lco.m"
    MR_Box transform_hlds__lco__conv5_RevAfterDependentGoals_18;
#line 599 "lco.m"
    MR_Box transform_hlds__lco__conv4_RevAfterNonDependentGoals_19;
#line 599 "lco.m"
    MR_Box transform_hlds__lco__conv3__DelayForVars_20;
#line 603 "lco.m"
    MR_Box transform_hlds__lco__conv9_UnifyInputVars_21;
#line 603 "lco.m"
    MR_Box transform_hlds__lco__conv8_STATE_VARIABLE_Info_34_34;

#line 593 "lco.m"
    {
#line 593 "lco.m"
      mercury__list__reverse_2_p_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__Goals0_6, &transform_hlds__lco__RevGoals0_10);
    }
#line 595 "lco.m"
    {
#line 595 "lco.m"
      transform_hlds__lco__succeeded = transform_hlds__lco__divide_rev_conj_8_p_0(transform_hlds__lco__STATE_VARIABLE_Info_0_26, transform_hlds__lco__ConstInfo_9, transform_hlds__lco__RevGoals0_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__lco__AfterGoals_11, &transform_hlds__lco__RecGoal_12, &transform_hlds__lco__RecOutArgs_13, &transform_hlds__lco__RevBeforeGoals_14);
    }
#line 596 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 596 "lco.m"
      {
#line 597 "lco.m"
        transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__AfterGoals_11)) == (MR_mktag((MR_Integer) 1)));
#line 597 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 597 "lco.m"
          {
#line 597 "lco.m"
            transform_hlds__lco__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__AfterGoals_11, (MR_Integer) 0)));
#line 597 "lco.m"
            transform_hlds__lco__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__AfterGoals_11, (MR_Integer) 1)));
#line 12706 "transform_hlds.lco.c"
            transform_hlds__lco__TypeCtorInfo_40_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 598 "lco.m"
            {
#line 598 "lco.m"
              parse_tree__set_of_var__list_to_set_2_p_0(transform_hlds__lco__TypeCtorInfo_40_40, transform_hlds__lco__RecOutArgs_13, &transform_hlds__lco__DelayForVars0_17);
            }
#line 600 "lco.m"
            transform_hlds__lco__V_30_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 601 "lco.m"
            transform_hlds__lco__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 12717 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_48_48 = (MR_Word) &transform_hlds__lco_scalar_common_1[2];
#line 12719 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_49_49 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
#line 599 "lco.m"
            {
#line 599 "lco.m"
              transform_hlds__lco__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 599 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_29_29, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_8[0]));
#line 599 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_29_29, 1) = ((MR_Box) (transform_hlds__lco__lco_in_conj_5_p_0_1));
#line 599 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 599 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_29_29, 3) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_Info_0_26));
#line 599 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_29_29, 4) = ((MR_Box) (transform_hlds__lco__ConstInfo_9));
#line 599 "lco.m"
            }
#line 599 "lco.m"
            {
#line 599 "lco.m"
              mercury__list__foldl3_8_p_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__TypeInfo_48_48, transform_hlds__lco__TypeInfo_48_48, transform_hlds__lco__TypeInfo_49_49, transform_hlds__lco__V_29_29, transform_hlds__lco__AfterGoals_11, ((MR_Box) (transform_hlds__lco__V_30_30)), &transform_hlds__lco__conv5_RevAfterDependentGoals_18, ((MR_Box) (transform_hlds__lco__V_31_31)), &transform_hlds__lco__conv4_RevAfterNonDependentGoals_19, ((MR_Box) (transform_hlds__lco__DelayForVars0_17)), &transform_hlds__lco__conv3__DelayForVars_20);
            }
#line 599 "lco.m"
            transform_hlds__lco__RevAfterDependentGoals_18 = ((MR_Word) transform_hlds__lco__conv5_RevAfterDependentGoals_18);
#line 599 "lco.m"
            transform_hlds__lco__RevAfterNonDependentGoals_19 = ((MR_Word) transform_hlds__lco__conv4_RevAfterNonDependentGoals_19);
#line 599 "lco.m"
            transform_hlds__lco___DelayForVars_20 = ((MR_Word) transform_hlds__lco__conv3__DelayForVars_20);
#line 603 "lco.m"
            transform_hlds__lco__V_32_32 = (MR_Word) &transform_hlds__lco_scalar_common_2[10];
#line 12750 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_55_55 = (MR_Word) &transform_hlds__lco_scalar_common_1[4];
#line 604 "lco.m"
            {
#line 604 "lco.m"
              transform_hlds__lco__V_33_33 = mercury__bag__init_0_f_0(transform_hlds__lco__TypeInfo_55_55);
            }
#line 12757 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_56_56 = (MR_Word) &transform_hlds__lco_scalar_common_1[5];
#line 12759 "transform_hlds.lco.c"
            transform_hlds__lco__TypeCtorInfo_57_57 = (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_info_0;
#line 603 "lco.m"
            {
#line 603 "lco.m"
              transform_hlds__lco__succeeded = mercury__list__foldl2_6_p_4(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__TypeInfo_56_56, transform_hlds__lco__TypeCtorInfo_57_57, transform_hlds__lco__V_32_32, transform_hlds__lco__RevAfterDependentGoals_18, ((MR_Box) (transform_hlds__lco__V_33_33)), &transform_hlds__lco__conv9_UnifyInputVars_21, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_Info_0_26)), &transform_hlds__lco__conv8_STATE_VARIABLE_Info_34_34);
            }
#line 603 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 603 "lco.m"
              {
#line 603 "lco.m"
                transform_hlds__lco__UnifyInputVars_21 = ((MR_Word) transform_hlds__lco__conv9_UnifyInputVars_21);
#line 603 "lco.m"
                transform_hlds__lco__STATE_VARIABLE_Info_34_34 = ((MR_Word) transform_hlds__lco__conv8_STATE_VARIABLE_Info_34_34);
#line 603 "lco.m"
                transform_hlds__lco__succeeded = MR_TRUE;
#line 603 "lco.m"
              }
#line 597 "lco.m"
          }
#line 596 "lco.m"
      }
#line 619 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 606 "lco.m"
      {
#line 606 "lco.m"
        MR_Word transform_hlds__lco__UnifyGoals_22;
#line 606 "lco.m"
        MR_Word transform_hlds__lco__MaybeGoals1_23;

#line 606 "lco.m"
        {
#line 606 "lco.m"
          mercury__list__reverse_2_p_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__RevAfterDependentGoals_18, &transform_hlds__lco__UnifyGoals_22);
        }
#line 607 "lco.m"
        {
#line 607 "lco.m"
          transform_hlds__lco__transform_call_and_unifies_8_p_0(transform_hlds__lco__RecGoal_12, transform_hlds__lco__RecOutArgs_13, transform_hlds__lco__UnifyGoals_22, transform_hlds__lco__UnifyInputVars_21, &transform_hlds__lco__MaybeGoals1_23, transform_hlds__lco__STATE_VARIABLE_Info_34_34, transform_hlds__lco__STATE_VARIABLE_Info_27, transform_hlds__lco__ConstInfo_9);
        }
#line 615 "lco.m"
        if ((transform_hlds__lco__MaybeGoals1_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 617 "lco.m"
          *transform_hlds__lco__MaybeGoals_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 615 "lco.m"
        else
#line 610 "lco.m"
          {
#line 610 "lco.m"
            MR_Word transform_hlds__lco__UpdatedRecAndUnifies_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__MaybeGoals1_23, (MR_Integer) 0)));
#line 610 "lco.m"
            MR_Word transform_hlds__lco__Goals_25;
#line 610 "lco.m"
            MR_Word transform_hlds__lco__V_36_36;
#line 610 "lco.m"
            MR_Word transform_hlds__lco__V_37_37;
#line 610 "lco.m"
            MR_Word transform_hlds__lco__V_38_38;

#line 611 "lco.m"
            {
#line 611 "lco.m"
              transform_hlds__lco__V_36_36 = mercury__list__reverse_1_f_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__RevBeforeGoals_14);
            }
#line 612 "lco.m"
            {
#line 612 "lco.m"
              transform_hlds__lco__V_38_38 = mercury__list__reverse_1_f_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__RevAfterNonDependentGoals_19);
            }
#line 613 "lco.m"
            {
#line 613 "lco.m"
              transform_hlds__lco__V_37_37 = mercury__list__f_43_43_2_f_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__V_38_38, transform_hlds__lco__UpdatedRecAndUnifies_24);
            }
#line 612 "lco.m"
            {
#line 612 "lco.m"
              transform_hlds__lco__Goals_25 = mercury__list__f_43_43_2_f_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__V_36_36, transform_hlds__lco__V_37_37);
            }
#line 614 "lco.m"
            {
#line 614 "lco.m"
              MR_Word base;
#line 614 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 614 "lco.m"
              *transform_hlds__lco__MaybeGoals_7 = base;
#line 614 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Goals_25));
#line 614 "lco.m"
            }
#line 610 "lco.m"
          }
#line 606 "lco.m"
      }
#line 619 "lco.m"
    else
#line 620 "lco.m"
      {
#line 620 "lco.m"
        *transform_hlds__lco__MaybeGoals_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 620 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_Info_27 = transform_hlds__lco__STATE_VARIABLE_Info_0_26;
#line 620 "lco.m"
      }
#line 592 "lco.m"
  }
#line 589 "lco.m"
}

#line 564 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_cases_5_p_0(
#line 564 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 564 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__2_2,
#line 564 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_3,
#line 564 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_4,
#line 564 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5)
#line 564 "lco.m"
{
#line 567 "lco.m"
  {
#line 567 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 567 "lco.m"
    if ((transform_hlds__lco__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 567 "lco.m"
      {
#line 567 "lco.m"
        *transform_hlds__lco__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 567 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_Info_4 = transform_hlds__lco__STATE_VARIABLE_Info_0_3;
#line 567 "lco.m"
      }
#line 567 "lco.m"
    else
#line 568 "lco.m"
      {
#line 568 "lco.m"
        MR_Word transform_hlds__lco__Case0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 568 "lco.m"
        MR_Word transform_hlds__lco__Cases0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 568 "lco.m"
        MR_Word transform_hlds__lco__Case_12;
#line 568 "lco.m"
        MR_Word transform_hlds__lco__Cases_13;
#line 568 "lco.m"
        MR_Word transform_hlds__lco__MainConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Case0_10, (MR_Integer) 0)));
#line 568 "lco.m"
        MR_Word transform_hlds__lco__OtherConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Case0_10, (MR_Integer) 1)));
#line 568 "lco.m"
        MR_Word transform_hlds__lco__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Case0_10, (MR_Integer) 2)));
#line 568 "lco.m"
        MR_Word transform_hlds__lco__Goal_19;
#line 568 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_Info_22_22;

#line 570 "lco.m"
        {
#line 570 "lco.m"
          transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__Goal0_18, &transform_hlds__lco__Goal_19, transform_hlds__lco__STATE_VARIABLE_Info_0_3, &transform_hlds__lco__STATE_VARIABLE_Info_22_22, transform_hlds__lco__HeadVar__5_5);
        }
#line 571 "lco.m"
        {
#line 571 "lco.m"
          transform_hlds__lco__Case_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 571 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__Case_12, 0) = ((MR_Box) (transform_hlds__lco__MainConsId_16));
#line 571 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__Case_12, 1) = ((MR_Box) (transform_hlds__lco__OtherConsIds_17));
#line 571 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__Case_12, 2) = ((MR_Box) (transform_hlds__lco__Goal_19));
#line 571 "lco.m"
        }
#line 572 "lco.m"
        {
#line 572 "lco.m"
          transform_hlds__lco__lco_in_cases_5_p_0(transform_hlds__lco__Cases0_11, &transform_hlds__lco__Cases_13, transform_hlds__lco__STATE_VARIABLE_Info_22_22, transform_hlds__lco__STATE_VARIABLE_Info_4, transform_hlds__lco__HeadVar__5_5);
        }
#line 568 "lco.m"
        {
#line 568 "lco.m"
          MR_Word base;
#line 568 "lco.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 568 "lco.m"
          *transform_hlds__lco__HeadVar__2_2 = base;
#line 568 "lco.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Case_12));
#line 568 "lco.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__Cases_13));
#line 568 "lco.m"
        }
#line 568 "lco.m"
      }
#line 567 "lco.m"
  }
#line 564 "lco.m"
}

#line 476 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_goal_5_p_0(
#line 476 "lco.m"
  MR_Word transform_hlds__lco__Goal0_6,
#line 476 "lco.m"
  MR_Word * transform_hlds__lco__Goal_7,
#line 476 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_60,
#line 476 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_61,
#line 476 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_9)
#line 476 "lco.m"
{
#line 479 "lco.m"
  {
#line 479 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 479 "lco.m"
    MR_Word transform_hlds__lco__GoalExpr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal0_6, (MR_Integer) 0)));
#line 479 "lco.m"
    MR_Word transform_hlds__lco__GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal0_6, (MR_Integer) 1)));
#line 479 "lco.m"
    MR_Word transform_hlds__lco__GoalExpr_16;

#line 507 "lco.m"
    if (((((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 482 "lco.m"
      {
#line 482 "lco.m"
        MR_Word transform_hlds__lco__ConjType_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 1)));
#line 482 "lco.m"
        MR_Word transform_hlds__lco__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 2)));

#line 502 "lco.m"
        if ((transform_hlds__lco__ConjType_12 == (MR_Integer) 1))
#line 503 "lco.m"
          {
#line 505 "lco.m"
            MR_Word transform_hlds__lco__V_90_90;
#line 505 "lco.m"
            MR_Word transform_hlds__lco__V_91_91;
#line 505 "lco.m"
            MR_Word transform_hlds__lco__V_92_92;
#line 505 "lco.m"
            MR_Word transform_hlds__lco__V_93_93;
#line 505 "lco.m"
            MR_Word transform_hlds__lco__V_94_94;
#line 505 "lco.m"
            MR_Word transform_hlds__lco__V_96_96;
#line 505 "lco.m"
            MR_Word transform_hlds__lco__V_95_95;

#line 504 "lco.m"
            transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
#line 505 "lco.m"
            transform_hlds__lco__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 0)));
#line 505 "lco.m"
            transform_hlds__lco__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 1)));
#line 505 "lco.m"
            transform_hlds__lco__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 2)));
#line 505 "lco.m"
            transform_hlds__lco__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 3)));
#line 505 "lco.m"
            transform_hlds__lco__V_94_94 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 505 "lco.m"
            transform_hlds__lco__V_95_95 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 505 "lco.m"
            transform_hlds__lco__V_96_96 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 505 "lco.m"
            {
#line 505 "lco.m"
              MR_Word base;
#line 505 "lco.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 505 "lco.m"
              *transform_hlds__lco__STATE_VARIABLE_Info_61 = base;
#line 505 "lco.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__V_90_90));
#line 505 "lco.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__V_91_91));
#line 505 "lco.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__V_92_92));
#line 505 "lco.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lco__V_93_93));
#line 505 "lco.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((transform_hlds__lco__V_94_94 | (((((MR_Integer) 0 << (MR_Integer) 1)) | ((transform_hlds__lco__V_96_96 << (MR_Integer) 2)))))));
#line 505 "lco.m"
            }
#line 503 "lco.m"
          }
#line 502 "lco.m"
        else
#line 484 "lco.m"
          {
#line 484 "lco.m"
            MR_Word transform_hlds__lco__MaybeGoals_14;
#line 484 "lco.m"
            MR_Word transform_hlds__lco__STATE_VARIABLE_Info_75_75;

#line 485 "lco.m"
            {
#line 485 "lco.m"
              transform_hlds__lco__lco_in_conj_5_p_0(transform_hlds__lco__Goals0_13, &transform_hlds__lco__MaybeGoals_14, transform_hlds__lco__STATE_VARIABLE_Info_0_60, &transform_hlds__lco__STATE_VARIABLE_Info_75_75, transform_hlds__lco__ConstInfo_9);
            }
#line 489 "lco.m"
            if ((transform_hlds__lco__MaybeGoals_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 498 "lco.m"
              {
#line 498 "lco.m"
                MR_Word transform_hlds__lco__AllButLast_17;
#line 498 "lco.m"
                MR_Word transform_hlds__lco__Last0_18;
#line 495 "lco.m"
                MR_Box transform_hlds__lco__conv0_Last0_18;

#line 495 "lco.m"
                {
#line 495 "lco.m"
                  transform_hlds__lco__succeeded = mercury__list__split_last_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__lco__Goals0_13, &transform_hlds__lco__AllButLast_17, &transform_hlds__lco__conv0_Last0_18);
                }
#line 495 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 495 "lco.m"
                  {
#line 495 "lco.m"
                    transform_hlds__lco__Last0_18 = ((MR_Word) transform_hlds__lco__conv0_Last0_18);
#line 495 "lco.m"
                    transform_hlds__lco__succeeded = MR_TRUE;
#line 495 "lco.m"
                  }
#line 498 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 496 "lco.m"
                  {
#line 496 "lco.m"
                    MR_Word transform_hlds__lco__Last_19;
#line 496 "lco.m"
                    MR_Word transform_hlds__lco__V_78_78;
#line 496 "lco.m"
                    MR_Word transform_hlds__lco__V_79_79;

#line 496 "lco.m"
                    {
#line 496 "lco.m"
                      transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__Last0_18, &transform_hlds__lco__Last_19, transform_hlds__lco__STATE_VARIABLE_Info_75_75, transform_hlds__lco__STATE_VARIABLE_Info_61, transform_hlds__lco__ConstInfo_9);
                    }
#line 497 "lco.m"
                    {
#line 497 "lco.m"
                      transform_hlds__lco__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 497 "lco.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__lco__V_79_79, 0) = ((MR_Box) (transform_hlds__lco__Last_19));
#line 497 "lco.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__lco__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 497 "lco.m"
                    }
#line 497 "lco.m"
                    {
#line 497 "lco.m"
                      transform_hlds__lco__V_78_78 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__lco__AllButLast_17, transform_hlds__lco__V_79_79);
                    }
#line 497 "lco.m"
                    {
#line 497 "lco.m"
                      transform_hlds__lco__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 497 "lco.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 497 "lco.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 1) = ((MR_Box) ((MR_Integer) 0));
#line 497 "lco.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__lco__V_78_78));
#line 497 "lco.m"
                    }
#line 496 "lco.m"
                  }
#line 498 "lco.m"
                else
#line 499 "lco.m"
                  {
#line 499 "lco.m"
                    transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
#line 499 "lco.m"
                    *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_75_75;
#line 499 "lco.m"
                  }
#line 498 "lco.m"
              }
#line 489 "lco.m"
            else
#line 487 "lco.m"
              {
#line 487 "lco.m"
                MR_Word transform_hlds__lco__Goals_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__MaybeGoals_14, (MR_Integer) 0)));

#line 488 "lco.m"
                {
#line 488 "lco.m"
                  transform_hlds__lco__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 488 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 488 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 1) = ((MR_Box) ((MR_Integer) 0));
#line 488 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__lco__Goals_15));
#line 488 "lco.m"
                }
#line 488 "lco.m"
                *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_75_75;
#line 487 "lco.m"
              }
#line 484 "lco.m"
          }
#line 482 "lco.m"
      }
#line 507 "lco.m"
    else
#line 507 "lco.m"
      if (((((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 508 "lco.m"
        {
#line 508 "lco.m"
          MR_Word transform_hlds__lco__Goals0_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 1)));
#line 514 "lco.m"
          MR_Word transform_hlds__lco__AllButLast_83;
#line 514 "lco.m"
          MR_Word transform_hlds__lco__Last0_84;
#line 511 "lco.m"
          MR_Box transform_hlds__lco__conv1_Last0_84;

#line 511 "lco.m"
          {
#line 511 "lco.m"
            transform_hlds__lco__succeeded = mercury__list__split_last_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__lco__Goals0_86, &transform_hlds__lco__AllButLast_83, &transform_hlds__lco__conv1_Last0_84);
          }
#line 511 "lco.m"
          if (transform_hlds__lco__succeeded)
#line 511 "lco.m"
            {
#line 511 "lco.m"
              transform_hlds__lco__Last0_84 = ((MR_Word) transform_hlds__lco__conv1_Last0_84);
#line 511 "lco.m"
              transform_hlds__lco__succeeded = MR_TRUE;
#line 511 "lco.m"
            }
#line 514 "lco.m"
          if (transform_hlds__lco__succeeded)
#line 512 "lco.m"
            {
#line 512 "lco.m"
              MR_Word transform_hlds__lco__V_70_70;
#line 512 "lco.m"
              MR_Word transform_hlds__lco__V_71_71;
#line 512 "lco.m"
              MR_Word transform_hlds__lco__Last_82;

#line 512 "lco.m"
              {
#line 512 "lco.m"
                transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__Last0_84, &transform_hlds__lco__Last_82, transform_hlds__lco__STATE_VARIABLE_Info_0_60, transform_hlds__lco__STATE_VARIABLE_Info_61, transform_hlds__lco__ConstInfo_9);
              }
#line 513 "lco.m"
              {
#line 513 "lco.m"
                transform_hlds__lco__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "lco.m"
                MR_hl_field(MR_mktag(1), transform_hlds__lco__V_71_71, 0) = ((MR_Box) (transform_hlds__lco__Last_82));
#line 513 "lco.m"
                MR_hl_field(MR_mktag(1), transform_hlds__lco__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 513 "lco.m"
              }
#line 513 "lco.m"
              {
#line 513 "lco.m"
                transform_hlds__lco__V_70_70 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__lco__AllButLast_83, transform_hlds__lco__V_71_71);
              }
#line 513 "lco.m"
              {
#line 513 "lco.m"
                transform_hlds__lco__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "lco.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 513 "lco.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__lco__V_70_70));
#line 513 "lco.m"
              }
#line 512 "lco.m"
            }
#line 514 "lco.m"
          else
#line 515 "lco.m"
            {
#line 515 "lco.m"
              transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
#line 515 "lco.m"
              *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_0_60;
#line 515 "lco.m"
            }
#line 508 "lco.m"
        }
#line 507 "lco.m"
      else
#line 507 "lco.m"
        if (((((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 522 "lco.m"
          {
#line 522 "lco.m"
            MR_Word transform_hlds__lco__Vars_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 1)));
#line 522 "lco.m"
            MR_Word transform_hlds__lco__Cond_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 2)));
#line 522 "lco.m"
            MR_Word transform_hlds__lco__Then0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 3)));
#line 522 "lco.m"
            MR_Word transform_hlds__lco__Else0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 4)));
#line 522 "lco.m"
            MR_Word transform_hlds__lco__Then_28;
#line 522 "lco.m"
            MR_Word transform_hlds__lco__Else_29;
#line 522 "lco.m"
            MR_Word transform_hlds__lco__STATE_VARIABLE_Info_66_66;

#line 523 "lco.m"
            {
#line 523 "lco.m"
              transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__Then0_26, &transform_hlds__lco__Then_28, transform_hlds__lco__STATE_VARIABLE_Info_0_60, &transform_hlds__lco__STATE_VARIABLE_Info_66_66, transform_hlds__lco__ConstInfo_9);
            }
#line 524 "lco.m"
            {
#line 524 "lco.m"
              transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__Else0_27, &transform_hlds__lco__Else_29, transform_hlds__lco__STATE_VARIABLE_Info_66_66, transform_hlds__lco__STATE_VARIABLE_Info_61, transform_hlds__lco__ConstInfo_9);
            }
#line 525 "lco.m"
            {
#line 525 "lco.m"
              transform_hlds__lco__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 525 "lco.m"
              MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 525 "lco.m"
              MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__lco__Vars_24));
#line 525 "lco.m"
              MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__lco__Cond_25));
#line 525 "lco.m"
              MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 3) = ((MR_Box) (transform_hlds__lco__Then_28));
#line 525 "lco.m"
              MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 4) = ((MR_Box) (transform_hlds__lco__Else_29));
#line 525 "lco.m"
            }
#line 522 "lco.m"
          }
#line 507 "lco.m"
        else
#line 507 "lco.m"
          if (((((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 527 "lco.m"
            {
#line 527 "lco.m"
              MR_Word transform_hlds__lco__Reason_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 1)));
#line 527 "lco.m"
              MR_Word transform_hlds__lco__SubGoal0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 2)));
#line 529 "lco.m"
              MR_Word transform_hlds__lco__FGT_33;
#line 529 "lco.m"
              MR_Word transform_hlds__lco__V_32_32;

#line 529 "lco.m"
              transform_hlds__lco__succeeded = ((((MR_tag((MR_Word) transform_hlds__lco__Reason_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_30, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 529 "lco.m"
              if (transform_hlds__lco__succeeded)
#line 529 "lco.m"
                {
#line 529 "lco.m"
                  transform_hlds__lco__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_30, (MR_Integer) 1)));
#line 529 "lco.m"
                  transform_hlds__lco__FGT_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_30, (MR_Integer) 2)));
#line 531 "lco.m"
                  if ((transform_hlds__lco__FGT_33 == (MR_Integer) 1))
#line 530 "lco.m"
                    transform_hlds__lco__succeeded = MR_TRUE;
#line 531 "lco.m"
                  else
#line 531 "lco.m"
                    if ((transform_hlds__lco__FGT_33 == (MR_Integer) 2))
#line 531 "lco.m"
                      transform_hlds__lco__succeeded = MR_TRUE;
#line 531 "lco.m"
                    else
#line 531 "lco.m"
                      transform_hlds__lco__succeeded = MR_FALSE;
#line 529 "lco.m"
                }
#line 535 "lco.m"
              if (transform_hlds__lco__succeeded)
#line 534 "lco.m"
                {
#line 534 "lco.m"
                  transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
#line 534 "lco.m"
                  *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_0_60;
#line 534 "lco.m"
                }
#line 535 "lco.m"
              else
#line 536 "lco.m"
                {
#line 536 "lco.m"
                  MR_Word transform_hlds__lco__SubGoal_34;

#line 536 "lco.m"
                  {
#line 536 "lco.m"
                    transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__SubGoal0_31, &transform_hlds__lco__SubGoal_34, transform_hlds__lco__STATE_VARIABLE_Info_0_60, transform_hlds__lco__STATE_VARIABLE_Info_61, transform_hlds__lco__ConstInfo_9);
                  }
#line 537 "lco.m"
                  {
#line 537 "lco.m"
                    transform_hlds__lco__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 537 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 537 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__lco__Reason_30));
#line 537 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__lco__SubGoal_34));
#line 537 "lco.m"
                  }
#line 536 "lco.m"
                }
#line 527 "lco.m"
            }
#line 507 "lco.m"
          else
#line 507 "lco.m"
            if (((((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 548 "lco.m"
              {
#line 550 "lco.m"
                {
#line 550 "lco.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.lco_in_goal\'/5", (MR_String) "shorthand");
#line 550 "lco.m"
                  return;
                }
#line 548 "lco.m"
              }
#line 507 "lco.m"
            else
#line 507 "lco.m"
              if (((((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 518 "lco.m"
                {
#line 518 "lco.m"
                  MR_Word transform_hlds__lco__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 1)));
#line 518 "lco.m"
                  MR_Word transform_hlds__lco__CanFail_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 2)));
#line 518 "lco.m"
                  MR_Word transform_hlds__lco__Cases0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 3)));
#line 518 "lco.m"
                  MR_Word transform_hlds__lco__Cases_23;

#line 519 "lco.m"
                  {
#line 519 "lco.m"
                    transform_hlds__lco__lco_in_cases_5_p_0(transform_hlds__lco__Cases0_22, &transform_hlds__lco__Cases_23, transform_hlds__lco__STATE_VARIABLE_Info_0_60, transform_hlds__lco__STATE_VARIABLE_Info_61, transform_hlds__lco__ConstInfo_9);
                  }
#line 520 "lco.m"
                  {
#line 520 "lco.m"
                    transform_hlds__lco__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 520 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 520 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__lco__Var_20));
#line 520 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__lco__CanFail_21));
#line 520 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 3) = ((MR_Box) (transform_hlds__lco__Cases_23));
#line 520 "lco.m"
                  }
#line 518 "lco.m"
                }
#line 507 "lco.m"
              else
#line 545 "lco.m"
                {
#line 546 "lco.m"
                  transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
#line 546 "lco.m"
                  *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_0_60;
#line 545 "lco.m"
                }
#line 552 "lco.m"
    {
#line 552 "lco.m"
      MR_Word base;
#line 552 "lco.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 552 "lco.m"
      *transform_hlds__lco__Goal_7 = base;
#line 552 "lco.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__GoalExpr_16));
#line 552 "lco.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__GoalInfo_11));
#line 552 "lco.m"
    }
#line 479 "lco.m"
  }
#line 476 "lco.m"
}

#line 378 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_proc_11_p_0(
#line 378 "lco.m"
  MR_Word transform_hlds__lco__LowerSCCVariants_12,
#line 378 "lco.m"
  MR_Word transform_hlds__lco__SCC_13,
#line 378 "lco.m"
  MR_Word transform_hlds__lco__CurProc_14,
#line 378 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_49,
#line 378 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_50,
#line 378 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_51,
#line 378 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_52,
#line 378 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_53,
#line 378 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_54,
#line 378 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Permitted_0_55,
#line 378 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Permitted_56)
#line 378 "lco.m"
{
#line 387 "lco.m"
  {
#line 387 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 387 "lco.m"
    if ((transform_hlds__lco__STATE_VARIABLE_Permitted_0_55 == (MR_Integer) 0))
#line 387 "lco.m"
      {
#line 387 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ModuleInfo_50 = transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_49;
#line 387 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_52 = transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_51;
#line 387 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_54 = transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_53;
#line 387 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_Permitted_56 = transform_hlds__lco__STATE_VARIABLE_Permitted_0_55;
#line 387 "lco.m"
      }
#line 387 "lco.m"
    else
#line 389 "lco.m"
      {
#line 389 "lco.m"
        MR_Word transform_hlds__lco__PredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__CurProc_14, (MR_Integer) 0)));
#line 389 "lco.m"
        MR_Integer transform_hlds__lco__ProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__CurProc_14, (MR_Integer) 1)));
#line 389 "lco.m"
        MR_Word transform_hlds__lco__PredInfo_21;
#line 389 "lco.m"
        MR_Word transform_hlds__lco__ProcInfo0_22;
#line 389 "lco.m"
        MR_Word transform_hlds__lco__Status_23;
#line 389 "lco.m"
        MR_Word transform_hlds__lco__DefInThisModule_24;
#line 389 "lco.m"
        MR_Word transform_hlds__lco__Detism_25;

#line 391 "lco.m"
        {
#line 391 "lco.m"
          hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_49, transform_hlds__lco__PredId_19, transform_hlds__lco__ProcId_20, &transform_hlds__lco__PredInfo_21, &transform_hlds__lco__ProcInfo0_22);
        }
#line 393 "lco.m"
        {
#line 393 "lco.m"
          hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__lco__PredInfo_21, &transform_hlds__lco__Status_23);
        }
#line 394 "lco.m"
        {
#line 394 "lco.m"
          transform_hlds__lco__DefInThisModule_24 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(transform_hlds__lco__Status_23);
        }
#line 395 "lco.m"
        {
#line 395 "lco.m"
          hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(transform_hlds__lco__ProcInfo0_22, &transform_hlds__lco__Detism_25);
        }
#line 397 "lco.m"
        transform_hlds__lco__succeeded = (transform_hlds__lco__DefInThisModule_24 == (MR_Integer) 0);
#line 398 "lco.m"
        if (!(transform_hlds__lco__succeeded))
#line 398 "lco.m"
          {
#line 468 "lco.m"
            if ((transform_hlds__lco__Detism_25 == (MR_Integer) 4))
#line 470 "lco.m"
              transform_hlds__lco__succeeded = MR_TRUE;
#line 468 "lco.m"
            else
#line 468 "lco.m"
              if ((transform_hlds__lco__Detism_25 == (MR_Integer) 5))
#line 471 "lco.m"
                transform_hlds__lco__succeeded = MR_TRUE;
#line 468 "lco.m"
              else
#line 468 "lco.m"
                if ((transform_hlds__lco__Detism_25 == (MR_Integer) 0))
#line 468 "lco.m"
                  transform_hlds__lco__succeeded = MR_TRUE;
#line 468 "lco.m"
                else
#line 468 "lco.m"
                  if ((transform_hlds__lco__Detism_25 == (MR_Integer) 1))
#line 469 "lco.m"
                    transform_hlds__lco__succeeded = MR_TRUE;
#line 468 "lco.m"
                  else
#line 468 "lco.m"
                    transform_hlds__lco__succeeded = MR_FALSE;
#line 398 "lco.m"
            transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 398 "lco.m"
          }
#line 402 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 401 "lco.m"
          {
#line 401 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_Permitted_56 = (MR_Integer) 0;
#line 401 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_54 = transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_53;
#line 401 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_52 = transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_51;
#line 401 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_ModuleInfo_50 = transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_49;
#line 401 "lco.m"
          }
#line 402 "lco.m"
        else
#line 403 "lco.m"
          {
#line 403 "lco.m"
            MR_Word transform_hlds__lco__TypeCtorInfo_82_82;
#line 403 "lco.m"
            MR_Word transform_hlds__lco__VarSet0_26;
#line 403 "lco.m"
            MR_Word transform_hlds__lco__VarTypes0_27;
#line 403 "lco.m"
            MR_Word transform_hlds__lco__HeadVars_28;
#line 403 "lco.m"
            MR_Word transform_hlds__lco__ArgModes_29;
#line 403 "lco.m"
            MR_Word transform_hlds__lco__ArgTypes_30;
#line 403 "lco.m"
            MR_Word transform_hlds__lco__OutputHeadVars_32;
#line 403 "lco.m"
            MR_Word transform_hlds__lco__CurProcDetism_33;
#line 403 "lco.m"
            MR_Word transform_hlds__lco__Globals_34;
#line 403 "lco.m"
            MR_Word transform_hlds__lco__HighLevelData_35;
#line 403 "lco.m"
            MR_Word transform_hlds__lco__ConstInfo_36;
#line 403 "lco.m"
            MR_Word transform_hlds__lco__UnboxedFloat_37;
#line 403 "lco.m"
            MR_Word transform_hlds__lco__AllowFloatAddr_38;
#line 403 "lco.m"
            MR_Word transform_hlds__lco__Info0_39;
#line 403 "lco.m"
            MR_Word transform_hlds__lco__Goal0_40;
#line 403 "lco.m"
            MR_Word transform_hlds__lco__Goal_41;
#line 403 "lco.m"
            MR_Word transform_hlds__lco__Info_42;
#line 403 "lco.m"
            MR_Word transform_hlds__lco__VarSet_43;
#line 403 "lco.m"
            MR_Word transform_hlds__lco__VarTypes_44;
#line 403 "lco.m"
            MR_Word transform_hlds__lco__Changed_46;
#line 403 "lco.m"
            MR_Word transform_hlds__lco__V_59_59;
#line 408 "lco.m"
            MR_Word transform_hlds__lco___InputHeadVars_31;
#line 433 "lco.m"
            MR_Word transform_hlds__lco___AllowFloatAddr_45;

#line 403 "lco.m"
            {
#line 403 "lco.m"
              hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__lco__ProcInfo0_22, &transform_hlds__lco__VarSet0_26);
            }
#line 404 "lco.m"
            {
#line 404 "lco.m"
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lco__ProcInfo0_22, &transform_hlds__lco__VarTypes0_27);
            }
#line 405 "lco.m"
            {
#line 405 "lco.m"
              hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__lco__ProcInfo0_22, &transform_hlds__lco__HeadVars_28);
            }
#line 406 "lco.m"
            {
#line 406 "lco.m"
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__lco__ProcInfo0_22, &transform_hlds__lco__ArgModes_29);
            }
#line 407 "lco.m"
            {
#line 407 "lco.m"
              parse_tree__prog_data__lookup_var_types_3_p_0(transform_hlds__lco__VarTypes0_27, transform_hlds__lco__HeadVars_28, &transform_hlds__lco__ArgTypes_30);
            }
#line 408 "lco.m"
            {
#line 408 "lco.m"
              hlds__arg_info__compute_in_and_out_vars_6_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_49, transform_hlds__lco__HeadVars_28, transform_hlds__lco__ArgModes_29, transform_hlds__lco__ArgTypes_30, &transform_hlds__lco___InputHeadVars_31, &transform_hlds__lco__OutputHeadVars_32);
            }
#line 410 "lco.m"
            {
#line 410 "lco.m"
              hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(transform_hlds__lco__ProcInfo0_22, &transform_hlds__lco__CurProcDetism_33);
            }
#line 13697 "transform_hlds.lco.c"
            transform_hlds__lco__TypeCtorInfo_82_82 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 412 "lco.m"
            {
#line 412 "lco.m"
              transform_hlds__lco__V_59_59 = mercury__set__list_to_set_1_f_0(transform_hlds__lco__TypeCtorInfo_82_82, transform_hlds__lco__SCC_13);
            }
#line 415 "lco.m"
            {
#line 415 "lco.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_49, &transform_hlds__lco__Globals_34);
            }
#line 411 "lco.m"
            {
#line 411 "lco.m"
              libs__globals__lookup_bool_option_3_p_0(transform_hlds__lco__Globals_34, (MR_Integer) 252, &transform_hlds__lco__HighLevelData_35);
            }
#line 412 "lco.m"
            {
#line 412 "lco.m"
              transform_hlds__lco__ConstInfo_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 412 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_36, 0) = ((MR_Box) (transform_hlds__lco__LowerSCCVariants_12));
#line 412 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_36, 1) = ((MR_Box) (transform_hlds__lco__V_59_59));
#line 412 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_36, 2) = ((MR_Box) (transform_hlds__lco__CurProc_14));
#line 412 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_36, 3) = ((MR_Box) (transform_hlds__lco__PredInfo_21));
#line 412 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_36, 4) = ((MR_Box) (transform_hlds__lco__ProcInfo0_22));
#line 412 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_36, 5) = ((MR_Box) (transform_hlds__lco__OutputHeadVars_32));
#line 412 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_36, 6) = ((MR_Box) (transform_hlds__lco__CurProcDetism_33));
#line 412 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_36, 7) = ((MR_Box) (transform_hlds__lco__HighLevelData_35));
#line 412 "lco.m"
            }
#line 416 "lco.m"
            {
#line 416 "lco.m"
              libs__globals__lookup_bool_option_3_p_0(transform_hlds__lco__Globals_34, (MR_Integer) 240, &transform_hlds__lco__UnboxedFloat_37);
            }
#line 424 "lco.m"
            if ((transform_hlds__lco__UnboxedFloat_37 == (MR_Integer) 0))
#line 423 "lco.m"
              transform_hlds__lco__AllowFloatAddr_38 = (MR_Integer) 0;
#line 424 "lco.m"
            else
#line 426 "lco.m"
              transform_hlds__lco__AllowFloatAddr_38 = (MR_Integer) 1;
#line 428 "lco.m"
            {
#line 428 "lco.m"
              transform_hlds__lco__Info0_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 428 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Info0_39, 0) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_49));
#line 428 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Info0_39, 1) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_51));
#line 428 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Info0_39, 2) = ((MR_Box) (transform_hlds__lco__VarSet0_26));
#line 428 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Info0_39, 3) = ((MR_Box) (transform_hlds__lco__VarTypes0_27));
#line 428 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Info0_39, 4) = ((MR_Box) ((transform_hlds__lco__AllowFloatAddr_38 | (((((MR_Integer) 1 << (MR_Integer) 1)) | (((MR_Integer) 0 << (MR_Integer) 2)))))));
#line 428 "lco.m"
            }
#line 431 "lco.m"
            {
#line 431 "lco.m"
              hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__lco__ProcInfo0_22, &transform_hlds__lco__Goal0_40);
            }
#line 432 "lco.m"
            {
#line 432 "lco.m"
              transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__Goal0_40, &transform_hlds__lco__Goal_41, transform_hlds__lco__Info0_39, &transform_hlds__lco__Info_42, transform_hlds__lco__ConstInfo_36);
            }
#line 433 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_ModuleInfo_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_42, (MR_Integer) 0)));
#line 433 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_42, (MR_Integer) 1)));
#line 433 "lco.m"
            transform_hlds__lco__VarSet_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_42, (MR_Integer) 2)));
#line 433 "lco.m"
            transform_hlds__lco__VarTypes_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_42, (MR_Integer) 3)));
#line 433 "lco.m"
            transform_hlds__lco___AllowFloatAddr_45 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_42, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 433 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_Permitted_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_42, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 433 "lco.m"
            transform_hlds__lco__Changed_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_42, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 436 "lco.m"
            transform_hlds__lco__succeeded = (*transform_hlds__lco__STATE_VARIABLE_Permitted_56 == (MR_Integer) 1);
#line 436 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 437 "lco.m"
              transform_hlds__lco__succeeded = (transform_hlds__lco__Changed_46 == (MR_Integer) 1);
#line 456 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 446 "lco.m"
              {
#line 446 "lco.m"
                MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_76_76;
#line 446 "lco.m"
                MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_77_77;
#line 446 "lco.m"
                MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_78_78;
#line 446 "lco.m"
                MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_80_80;

#line 449 "lco.m"
                {
#line 449 "lco.m"
                  hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__lco__VarSet_43, transform_hlds__lco__ProcInfo0_22, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_76_76);
                }
#line 450 "lco.m"
                {
#line 450 "lco.m"
                  hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__lco__VarTypes_44, transform_hlds__lco__STATE_VARIABLE_ProcInfo_76_76, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_77_77);
                }
#line 451 "lco.m"
                {
#line 451 "lco.m"
                  hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__lco__Goal_41, transform_hlds__lco__STATE_VARIABLE_ProcInfo_77_77, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_78_78);
                }
#line 452 "lco.m"
                {
#line 452 "lco.m"
                  hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__lco__STATE_VARIABLE_ProcInfo_78_78, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_80_80);
                }
#line 454 "lco.m"
                {
#line 454 "lco.m"
                  mercury__map__det_insert_4_p_0(transform_hlds__lco__TypeCtorInfo_82_82, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ((MR_Box) (transform_hlds__lco__CurProc_14)), ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ProcInfo_80_80)), transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_53, transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_54);
#line 454 "lco.m"
                  return;
                }
#line 446 "lco.m"
              }
#line 456 "lco.m"
            else
#line 454 "lco.m"
              *transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_54 = transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_53;
#line 403 "lco.m"
          }
#line 389 "lco.m"
      }
#line 387 "lco.m"
  }
#line 378 "lco.m"
}

#line 374 "lco.m"
static MR_Integer MR_CALL 
transform_hlds__lco__va_pos_1_f_0(
#line 374 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1)
#line 374 "lco.m"
{
#line 374 "lco.m"
  {
#line 374 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 374 "lco.m"
    MR_Integer transform_hlds__lco__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 374 "lco.m"
    MR_Word transform_hlds__lco__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));

#line 374 "lco.m"
    return transform_hlds__lco__HeadVar__2_2;
#line 374 "lco.m"
  }
#line 374 "lco.m"
}

#line 361 "lco.m"
static MR_Box MR_CALL 
transform_hlds__lco__lco_process_proc_variant_4_p_0_1(
#line 361 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 361 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1)
#line 361 "lco.m"
{
#line 361 "lco.m"
  {
#line 361 "lco.m"
    MR_Box transform_hlds__lco__wrapper_arg_2;
#line 361 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 361 "lco.m"
    MR_Integer transform_hlds__lco__conv1_HeadVar__2_2;

#line 361 "lco.m"
    {
#line 361 "lco.m"
      transform_hlds__lco__conv1_HeadVar__2_2 = transform_hlds__lco__va_pos_1_f_0(((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
#line 361 "lco.m"
    transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv1_HeadVar__2_2));
#line 361 "lco.m"
    return transform_hlds__lco__wrapper_arg_2;
#line 361 "lco.m"
  }
#line 361 "lco.m"
}

#line 330 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_process_proc_variant_4_p_0(
#line 330 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_5,
#line 330 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 330 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32,
#line 330 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_33)
#line 330 "lco.m"
{
#line 334 "lco.m"
  {
#line 334 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_46_46;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_47_47;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__PredProcId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 334 "lco.m"
    MR_Word transform_hlds__lco__VariantId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 334 "lco.m"
    MR_Word transform_hlds__lco__AddrOutArgs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantId_7, (MR_Integer) 0)));
#line 334 "lco.m"
    MR_Word transform_hlds__lco__VariantPredProcId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantId_7, (MR_Integer) 1)));
#line 334 "lco.m"
    MR_String transform_hlds__lco__VariantName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantId_7, (MR_Integer) 2)));
#line 334 "lco.m"
    MR_Word transform_hlds__lco__VariantPredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantPredProcId_10, (MR_Integer) 0)));
#line 334 "lco.m"
    MR_Integer transform_hlds__lco__VariantProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantPredProcId_10, (MR_Integer) 1)));
#line 334 "lco.m"
    MR_Word transform_hlds__lco__PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__PredProcId_6, (MR_Integer) 0)));
#line 334 "lco.m"
    MR_Integer transform_hlds__lco__ProcId_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__PredProcId_6, (MR_Integer) 1)));
#line 334 "lco.m"
    MR_Word transform_hlds__lco__ProcInfo_17;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__VariantProcInfo_18;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__HeadVars_19;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__VarTypes_20;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__ArgTypes_21;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__TVarSet_24;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__ExistQVars_25;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__Origin0_27;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__AddrOutArgPosns_28;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__Transform_29;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__Origin_30;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__VariantProcs_31;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_34_34;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_PredTable_35_35;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_36_36;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_37_37;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_39_39;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_40_40;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_42_42;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_43_43;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_PredTable_44_44;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__VarSet0_62;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__VarTypes0_63;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__HeadVars0_64;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__ArgModes0_65;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__HeadVars_66;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__ArgModes_67;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__VarToAddr_68;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__VarSet_69;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__VarTypes_70;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__InstMap0_71;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__Goal0_72;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__Goal_73;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__Globals_75;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__HighLevelData_76;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_32_79;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_33_80;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_34_81;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_35_82;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_36_83;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_37_84;
#line 334 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_39_86;
#line 339 "lco.m"
    MR_Word transform_hlds__lco___PredInfo_16;
#line 1300 "lco.m"
    MR_Word transform_hlds__lco___Changed_74;
#line 350 "lco.m"
    MR_Box transform_hlds__lco__conv0_STATE_VARIABLE_VariantPredInfo_36_36;
#line 355 "lco.m"
    MR_Word transform_hlds__lco___ArgTypes0_26;

#line 339 "lco.m"
    {
#line 339 "lco.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32, transform_hlds__lco__PredId_14, transform_hlds__lco__ProcId_15, &transform_hlds__lco___PredInfo_16, &transform_hlds__lco__ProcInfo_17);
    }
#line 1286 "lco.m"
    {
#line 1286 "lco.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__lco__ProcInfo_17, &transform_hlds__lco__VarSet0_62);
    }
#line 1287 "lco.m"
    {
#line 1287 "lco.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lco__ProcInfo_17, &transform_hlds__lco__VarTypes0_63);
    }
#line 1288 "lco.m"
    {
#line 1288 "lco.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__lco__ProcInfo_17, &transform_hlds__lco__HeadVars0_64);
    }
#line 1289 "lco.m"
    {
#line 1289 "lco.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__lco__ProcInfo_17, &transform_hlds__lco__ArgModes0_65);
    }
#line 1290 "lco.m"
    {
#line 1290 "lco.m"
      transform_hlds__lco__make_addr_vars_12_p_0(transform_hlds__lco__HeadVars0_64, transform_hlds__lco__ArgModes0_65, &transform_hlds__lco__HeadVars_66, &transform_hlds__lco__ArgModes_67, transform_hlds__lco__AddrOutArgs_9, (MR_Integer) 1, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32, &transform_hlds__lco__VarToAddr_68, transform_hlds__lco__VarSet0_62, &transform_hlds__lco__VarSet_69, transform_hlds__lco__VarTypes0_63, &transform_hlds__lco__VarTypes_70);
    }
#line 1293 "lco.m"
    {
#line 1293 "lco.m"
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__lco__HeadVars_66, transform_hlds__lco__ProcInfo_17, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_32_79);
    }
#line 1294 "lco.m"
    {
#line 1294 "lco.m"
      hlds__hlds_pred__proc_info_set_argmodes_3_p_0(transform_hlds__lco__ArgModes_67, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_32_79, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_33_80);
    }
#line 1295 "lco.m"
    {
#line 1295 "lco.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__lco__VarSet_69, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_33_80, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_34_81);
    }
#line 1296 "lco.m"
    {
#line 1296 "lco.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__lco__VarTypes_70, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_34_81, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_35_82);
    }
#line 1298 "lco.m"
    {
#line 1298 "lco.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__lco__ProcInfo_17, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32, &transform_hlds__lco__InstMap0_71);
    }
#line 1299 "lco.m"
    {
#line 1299 "lco.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__lco__ProcInfo_17, &transform_hlds__lco__Goal0_72);
    }
#line 1300 "lco.m"
    {
#line 1300 "lco.m"
      transform_hlds__lco__lco_transform_variant_goal_9_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32, transform_hlds__lco__VariantMap_5, transform_hlds__lco__VarToAddr_68, transform_hlds__lco__InstMap0_71, transform_hlds__lco__Goal0_72, &transform_hlds__lco__Goal_73, &transform_hlds__lco___Changed_74, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_35_82, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_36_83);
    }
#line 1302 "lco.m"
    {
#line 1302 "lco.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__lco__Goal_73, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_36_83, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_37_84);
    }
#line 1304 "lco.m"
    {
#line 1304 "lco.m"
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_37_84, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_39_86);
    }
#line 1308 "lco.m"
    {
#line 1308 "lco.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32, &transform_hlds__lco__Globals_75);
    }
#line 1309 "lco.m"
    {
#line 1309 "lco.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__lco__Globals_75, (MR_Integer) 252, &transform_hlds__lco__HighLevelData_76);
    }
#line 1314 "lco.m"
    if ((transform_hlds__lco__HighLevelData_76 == (MR_Integer) 0))
#line 1315 "lco.m"
      {
#line 1315 "lco.m"
        transform_hlds__lco__VariantProcInfo_18 = transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_39_86;
#line 1315 "lco.m"
        transform_hlds__lco__STATE_VARIABLE_ModuleInfo_34_34 = transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32;
#line 1315 "lco.m"
      }
#line 1314 "lco.m"
    else
#line 1311 "lco.m"
      {
#line 1312 "lco.m"
        {
#line 1312 "lco.m"
          check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_39_86, &transform_hlds__lco__VariantProcInfo_18, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32, &transform_hlds__lco__STATE_VARIABLE_ModuleInfo_34_34);
        }
#line 1311 "lco.m"
      }
#line 344 "lco.m"
    {
#line 344 "lco.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__lco__VariantProcInfo_18, &transform_hlds__lco__HeadVars_19);
    }
#line 345 "lco.m"
    {
#line 345 "lco.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lco__VariantProcInfo_18, &transform_hlds__lco__VarTypes_20);
    }
#line 346 "lco.m"
    {
#line 346 "lco.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(transform_hlds__lco__VarTypes_20, transform_hlds__lco__HeadVars_19, &transform_hlds__lco__ArgTypes_21);
    }
#line 349 "lco.m"
    {
#line 349 "lco.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_34_34, &transform_hlds__lco__STATE_VARIABLE_PredTable_35_35);
    }
#line 14163 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_46_46 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 14165 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_47_47 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 350 "lco.m"
    {
#line 350 "lco.m"
      mercury__map__lookup_3_p_0(transform_hlds__lco__TypeCtorInfo_46_46, transform_hlds__lco__TypeCtorInfo_47_47, transform_hlds__lco__STATE_VARIABLE_PredTable_35_35, ((MR_Box) (transform_hlds__lco__VariantPredId_12)), &transform_hlds__lco__conv0_STATE_VARIABLE_VariantPredInfo_36_36);
    }
#line 350 "lco.m"
    transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_36_36 = ((MR_Word) transform_hlds__lco__conv0_STATE_VARIABLE_VariantPredInfo_36_36);
#line 351 "lco.m"
    {
#line 351 "lco.m"
      hlds__hlds_pred__pred_info_set_name_3_p_0(transform_hlds__lco__VariantName_11, transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_36_36, &transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_37_37);
    }
#line 352 "lco.m"
    {
#line 352 "lco.m"
      hlds__hlds_pred__pred_info_set_is_pred_or_func_3_p_0((MR_Integer) 0, transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_37_37, &transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_39_39);
    }
#line 355 "lco.m"
    {
#line 355 "lco.m"
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_39_39, &transform_hlds__lco__TVarSet_24, &transform_hlds__lco__ExistQVars_25, &transform_hlds__lco___ArgTypes0_26);
    }
#line 357 "lco.m"
    {
#line 357 "lco.m"
      hlds__hlds_pred__pred_info_set_arg_types_5_p_0(transform_hlds__lco__TVarSet_24, transform_hlds__lco__ExistQVars_25, transform_hlds__lco__ArgTypes_21, transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_39_39, &transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_40_40);
    }
#line 360 "lco.m"
    {
#line 360 "lco.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_40_40, &transform_hlds__lco__Origin0_27);
    }
#line 361 "lco.m"
    {
#line 361 "lco.m"
      transform_hlds__lco__AddrOutArgPosns_28 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__lco_scalar_common_2[9], transform_hlds__lco__AddrOutArgs_9);
    }
#line 362 "lco.m"
    {
#line 362 "lco.m"
      transform_hlds__lco__Transform_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 362 "lco.m"
      MR_hl_field(MR_mktag(3), transform_hlds__lco__Transform_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 362 "lco.m"
      MR_hl_field(MR_mktag(3), transform_hlds__lco__Transform_29, 1) = ((MR_Box) (transform_hlds__lco__ProcId_15));
#line 362 "lco.m"
      MR_hl_field(MR_mktag(3), transform_hlds__lco__Transform_29, 2) = ((MR_Box) (transform_hlds__lco__AddrOutArgPosns_28));
#line 362 "lco.m"
    }
#line 363 "lco.m"
    {
#line 363 "lco.m"
      transform_hlds__lco__Origin_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 363 "lco.m"
      MR_hl_field(MR_mktag(2), transform_hlds__lco__Origin_30, 0) = ((MR_Box) (transform_hlds__lco__Transform_29));
#line 363 "lco.m"
      MR_hl_field(MR_mktag(2), transform_hlds__lco__Origin_30, 1) = ((MR_Box) (transform_hlds__lco__Origin0_27));
#line 363 "lco.m"
      MR_hl_field(MR_mktag(2), transform_hlds__lco__Origin_30, 2) = ((MR_Box) (transform_hlds__lco__PredId_14));
#line 363 "lco.m"
    }
#line 364 "lco.m"
    {
#line 364 "lco.m"
      hlds__hlds_pred__pred_info_set_origin_3_p_0(transform_hlds__lco__Origin_30, transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_40_40, &transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_42_42);
    }
#line 368 "lco.m"
    {
#line 368 "lco.m"
      transform_hlds__lco__VariantProcs_31 = mercury__map__singleton_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ((MR_Box) (transform_hlds__lco__VariantProcId_13)), ((MR_Box) (transform_hlds__lco__VariantProcInfo_18)));
    }
#line 369 "lco.m"
    {
#line 369 "lco.m"
      hlds__hlds_pred__pred_info_set_procedures_3_p_0(transform_hlds__lco__VariantProcs_31, transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_42_42, &transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_43_43);
    }
#line 370 "lco.m"
    {
#line 370 "lco.m"
      mercury__map__det_update_4_p_0(transform_hlds__lco__TypeCtorInfo_46_46, transform_hlds__lco__TypeCtorInfo_47_47, ((MR_Box) (transform_hlds__lco__VariantPredId_12)), ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_43_43)), transform_hlds__lco__STATE_VARIABLE_PredTable_35_35, &transform_hlds__lco__STATE_VARIABLE_PredTable_44_44);
    }
#line 371 "lco.m"
    {
#line 371 "lco.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__lco__STATE_VARIABLE_PredTable_44_44, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_34_34, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_33);
#line 371 "lco.m"
      return;
    }
#line 334 "lco.m"
  }
#line 330 "lco.m"
}

#line 317 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_process_proc_update_3_p_0(
#line 317 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 317 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_15,
#line 317 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_16)
#line 317 "lco.m"
{
#line 320 "lco.m"
  {
#line 320 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 320 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_18_18;
#line 320 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_19_19;
#line 320 "lco.m"
    MR_Word transform_hlds__lco__PredProcId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 320 "lco.m"
    MR_Word transform_hlds__lco__NewProcInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 320 "lco.m"
    MR_Word transform_hlds__lco__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__PredProcId_4, (MR_Integer) 0)));
#line 320 "lco.m"
    MR_Integer transform_hlds__lco__ProcId_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__PredProcId_4, (MR_Integer) 1)));
#line 320 "lco.m"
    MR_Word transform_hlds__lco__PredTable0_9;
#line 320 "lco.m"
    MR_Word transform_hlds__lco__PredInfo0_10;
#line 320 "lco.m"
    MR_Word transform_hlds__lco__Procs0_11;
#line 320 "lco.m"
    MR_Word transform_hlds__lco__Procs_12;
#line 320 "lco.m"
    MR_Word transform_hlds__lco__PredInfo_13;
#line 320 "lco.m"
    MR_Word transform_hlds__lco__PredTable_14;
#line 323 "lco.m"
    MR_Box transform_hlds__lco__conv0_PredInfo0_10;

#line 322 "lco.m"
    {
#line 322 "lco.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_15, &transform_hlds__lco__PredTable0_9);
    }
#line 14307 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 14309 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 323 "lco.m"
    {
#line 323 "lco.m"
      mercury__map__lookup_3_p_0(transform_hlds__lco__TypeCtorInfo_18_18, transform_hlds__lco__TypeCtorInfo_19_19, transform_hlds__lco__PredTable0_9, ((MR_Box) (transform_hlds__lco__PredId_7)), &transform_hlds__lco__conv0_PredInfo0_10);
    }
#line 323 "lco.m"
    transform_hlds__lco__PredInfo0_10 = ((MR_Word) transform_hlds__lco__conv0_PredInfo0_10);
#line 324 "lco.m"
    {
#line 324 "lco.m"
      hlds__hlds_pred__pred_info_get_procedures_2_p_0(transform_hlds__lco__PredInfo0_10, &transform_hlds__lco__Procs0_11);
    }
#line 325 "lco.m"
    {
#line 325 "lco.m"
      mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ((MR_Box) (transform_hlds__lco__ProcId_8)), ((MR_Box) (transform_hlds__lco__NewProcInfo_5)), transform_hlds__lco__Procs0_11, &transform_hlds__lco__Procs_12);
    }
#line 326 "lco.m"
    {
#line 326 "lco.m"
      hlds__hlds_pred__pred_info_set_procedures_3_p_0(transform_hlds__lco__Procs_12, transform_hlds__lco__PredInfo0_10, &transform_hlds__lco__PredInfo_13);
    }
#line 327 "lco.m"
    {
#line 327 "lco.m"
      mercury__map__det_update_4_p_0(transform_hlds__lco__TypeCtorInfo_18_18, transform_hlds__lco__TypeCtorInfo_19_19, ((MR_Box) (transform_hlds__lco__PredId_7)), ((MR_Box) (transform_hlds__lco__PredInfo_13)), transform_hlds__lco__PredTable0_9, &transform_hlds__lco__PredTable_14);
    }
#line 328 "lco.m"
    {
#line 328 "lco.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__lco__PredTable_14, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_15, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_16);
#line 328 "lco.m"
      return;
    }
#line 320 "lco.m"
  }
#line 317 "lco.m"
}

#line 309 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_3(
#line 309 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 309 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 309 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 309 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3)
#line 309 "lco.m"
{
#line 309 "lco.m"
  {
#line 309 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 309 "lco.m"
    MR_Word transform_hlds__lco__conv10_STATE_VARIABLE_ModuleInfo_33;

#line 309 "lco.m"
    {
#line 309 "lco.m"
      transform_hlds__lco__lco_process_proc_variant_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2), &transform_hlds__lco__conv10_STATE_VARIABLE_ModuleInfo_33);
    }
#line 309 "lco.m"
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv10_STATE_VARIABLE_ModuleInfo_33));
#line 309 "lco.m"
  }
#line 309 "lco.m"
}

#line 308 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_2(
#line 308 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 308 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 308 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 308 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3)
#line 308 "lco.m"
{
#line 308 "lco.m"
  {
#line 308 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 308 "lco.m"
    MR_Word transform_hlds__lco__conv8_STATE_VARIABLE_ModuleInfo_16;

#line 308 "lco.m"
    {
#line 308 "lco.m"
      transform_hlds__lco__lco_process_proc_update_3_p_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2), &transform_hlds__lco__conv8_STATE_VARIABLE_ModuleInfo_16);
    }
#line 308 "lco.m"
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv8_STATE_VARIABLE_ModuleInfo_16));
#line 308 "lco.m"
  }
#line 308 "lco.m"
}

#line 299 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_1(
#line 299 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 299 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 299 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 299 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 299 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 299 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5,
#line 299 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_6,
#line 299 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_7,
#line 299 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_8,
#line 299 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_9)
#line 299 "lco.m"
{
#line 299 "lco.m"
  {
#line 299 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 299 "lco.m"
    MR_Word transform_hlds__lco__conv3_STATE_VARIABLE_ModuleInfo_50;
#line 299 "lco.m"
    MR_Word transform_hlds__lco__conv2_STATE_VARIABLE_CurSCCVariants_52;
#line 299 "lco.m"
    MR_Word transform_hlds__lco__conv1_STATE_VARIABLE_CurSCCUpdates_54;
#line 299 "lco.m"
    MR_Word transform_hlds__lco__conv0_STATE_VARIABLE_Permitted_56;

#line 299 "lco.m"
    {
#line 299 "lco.m"
      transform_hlds__lco__lco_proc_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2), &transform_hlds__lco__conv3_STATE_VARIABLE_ModuleInfo_50, ((MR_Word) transform_hlds__lco__wrapper_arg_4), &transform_hlds__lco__conv2_STATE_VARIABLE_CurSCCVariants_52, ((MR_Word) transform_hlds__lco__wrapper_arg_6), &transform_hlds__lco__conv1_STATE_VARIABLE_CurSCCUpdates_54, ((MR_Word) transform_hlds__lco__wrapper_arg_8), &transform_hlds__lco__conv0_STATE_VARIABLE_Permitted_56);
    }
#line 299 "lco.m"
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv3_STATE_VARIABLE_ModuleInfo_50));
#line 299 "lco.m"
    *transform_hlds__lco__wrapper_arg_5 = ((MR_Box) (transform_hlds__lco__conv2_STATE_VARIABLE_CurSCCVariants_52));
#line 299 "lco.m"
    *transform_hlds__lco__wrapper_arg_7 = ((MR_Box) (transform_hlds__lco__conv1_STATE_VARIABLE_CurSCCUpdates_54));
#line 299 "lco.m"
    *transform_hlds__lco__wrapper_arg_9 = ((MR_Box) (transform_hlds__lco__conv0_STATE_VARIABLE_Permitted_56));
#line 299 "lco.m"
  }
#line 299 "lco.m"
}

#line 293 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0(
#line 293 "lco.m"
  MR_Word transform_hlds__lco__SCC_6,
#line 293 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VariantMap_0_17,
#line 293 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VariantMap_18,
#line 293 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_19,
#line 293 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_20)
#line 293 "lco.m"
{
#line 296 "lco.m"
  {
#line 296 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 296 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_40_40;
#line 296 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_42_42;
#line 296 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_43_43;
#line 296 "lco.m"
    MR_Word transform_hlds__lco__CurSCCVariantMap_10;
#line 296 "lco.m"
    MR_Word transform_hlds__lco__CurSCCUpdateMap_11;
#line 296 "lco.m"
    MR_Word transform_hlds__lco__Permitted_12;
#line 296 "lco.m"
    MR_Word transform_hlds__lco__CurSCCVariants_13;
#line 296 "lco.m"
    MR_Word transform_hlds__lco__CurSCCUpdates_14;
#line 296 "lco.m"
    MR_Word transform_hlds__lco__V_21_21;
#line 296 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_22_22;
#line 296 "lco.m"
    MR_Word transform_hlds__lco__V_23_23;
#line 296 "lco.m"
    MR_Word transform_hlds__lco__V_24_24;
#line 299 "lco.m"
    MR_Box transform_hlds__lco__conv7_STATE_VARIABLE_ModuleInfo_22_22;
#line 299 "lco.m"
    MR_Box transform_hlds__lco__conv6_CurSCCVariantMap_10;
#line 299 "lco.m"
    MR_Box transform_hlds__lco__conv5_CurSCCUpdateMap_11;
#line 299 "lco.m"
    MR_Box transform_hlds__lco__conv4_Permitted_12;
#line 306 "lco.m"
    MR_Word transform_hlds__lco__V_15_15;
#line 306 "lco.m"
    MR_Word transform_hlds__lco__V_16_16;

#line 299 "lco.m"
    {
#line 299 "lco.m"
      transform_hlds__lco__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 299 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_21_21, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_4[0]));
#line 299 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_21_21, 1) = ((MR_Box) (transform_hlds__lco__lco_scc_5_p_0_1));
#line 299 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 299 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_21_21, 3) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_VariantMap_0_17));
#line 299 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_21_21, 4) = ((MR_Box) (transform_hlds__lco__SCC_6));
#line 299 "lco.m"
    }
#line 14542 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_40_40 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 300 "lco.m"
    {
#line 300 "lco.m"
      transform_hlds__lco__V_23_23 = mercury__map__init_0_f_0(transform_hlds__lco__TypeCtorInfo_40_40, (MR_Word) &transform_hlds__lco_scalar_common_1[0]);
    }
#line 14549 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_42_42 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 300 "lco.m"
    {
#line 300 "lco.m"
      transform_hlds__lco__V_24_24 = mercury__map__init_0_f_0(transform_hlds__lco__TypeCtorInfo_40_40, transform_hlds__lco__TypeCtorInfo_42_42);
    }
#line 14556 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_43_43 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0;
#line 299 "lco.m"
    {
#line 299 "lco.m"
      mercury__list__foldl4_10_p_0(transform_hlds__lco__TypeCtorInfo_40_40, transform_hlds__lco__TypeCtorInfo_43_43, (MR_Word) &transform_hlds__lco_scalar_common_2[0], (MR_Word) &transform_hlds__lco_scalar_common_2[1], (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_is_permitted_on_scc_0, transform_hlds__lco__V_21_21, transform_hlds__lco__SCC_6, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_19)), &transform_hlds__lco__conv7_STATE_VARIABLE_ModuleInfo_22_22, ((MR_Box) (transform_hlds__lco__V_23_23)), &transform_hlds__lco__conv6_CurSCCVariantMap_10, ((MR_Box) (transform_hlds__lco__V_24_24)), &transform_hlds__lco__conv5_CurSCCUpdateMap_11, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__lco__conv4_Permitted_12);
    }
#line 299 "lco.m"
    transform_hlds__lco__STATE_VARIABLE_ModuleInfo_22_22 = ((MR_Word) transform_hlds__lco__conv7_STATE_VARIABLE_ModuleInfo_22_22);
#line 299 "lco.m"
    transform_hlds__lco__CurSCCVariantMap_10 = ((MR_Word) transform_hlds__lco__conv6_CurSCCVariantMap_10);
#line 299 "lco.m"
    transform_hlds__lco__CurSCCUpdateMap_11 = ((MR_Word) transform_hlds__lco__conv5_CurSCCUpdateMap_11);
#line 299 "lco.m"
    transform_hlds__lco__Permitted_12 = ((MR_Word) transform_hlds__lco__conv4_Permitted_12);
#line 302 "lco.m"
    {
#line 302 "lco.m"
      mercury__multi_map__to_flat_assoc_list_2_p_0(transform_hlds__lco__TypeCtorInfo_40_40, (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0, transform_hlds__lco__CurSCCVariantMap_10, &transform_hlds__lco__CurSCCVariants_13);
    }
#line 303 "lco.m"
    {
#line 303 "lco.m"
      mercury__map__to_assoc_list_2_p_0(transform_hlds__lco__TypeCtorInfo_40_40, transform_hlds__lco__TypeCtorInfo_42_42, transform_hlds__lco__CurSCCUpdateMap_11, &transform_hlds__lco__CurSCCUpdates_14);
    }
#line 305 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__Permitted_12 == (MR_Integer) 1);
#line 305 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 305 "lco.m"
      {
#line 306 "lco.m"
        transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__CurSCCUpdates_14)) == (MR_mktag((MR_Integer) 1)));
#line 306 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 306 "lco.m"
          {
#line 306 "lco.m"
            transform_hlds__lco__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__CurSCCUpdates_14, (MR_Integer) 0)));
#line 306 "lco.m"
            transform_hlds__lco__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__CurSCCUpdates_14, (MR_Integer) 1)));
#line 306 "lco.m"
          }
#line 305 "lco.m"
      }
#line 311 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 308 "lco.m"
      {
#line 308 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_27_27;
#line 308 "lco.m"
        MR_Word transform_hlds__lco__V_28_28;
#line 308 "lco.m"
        MR_Box transform_hlds__lco__conv9_STATE_VARIABLE_ModuleInfo_27_27;
#line 309 "lco.m"
        MR_Box transform_hlds__lco__conv11_STATE_VARIABLE_ModuleInfo_20;

#line 308 "lco.m"
        {
#line 308 "lco.m"
          mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[2], transform_hlds__lco__TypeCtorInfo_43_43, (MR_Word) &transform_hlds__lco_scalar_common_2[8], transform_hlds__lco__CurSCCUpdates_14, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ModuleInfo_22_22)), &transform_hlds__lco__conv9_STATE_VARIABLE_ModuleInfo_27_27);
        }
#line 308 "lco.m"
        transform_hlds__lco__STATE_VARIABLE_ModuleInfo_27_27 = ((MR_Word) transform_hlds__lco__conv9_STATE_VARIABLE_ModuleInfo_27_27);
#line 309 "lco.m"
        {
#line 309 "lco.m"
          transform_hlds__lco__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 309 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_28_28, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_6[0]));
#line 309 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_28_28, 1) = ((MR_Box) (transform_hlds__lco__lco_scc_5_p_0_3));
#line 309 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 309 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_28_28, 3) = ((MR_Box) (transform_hlds__lco__CurSCCVariantMap_10));
#line 309 "lco.m"
        }
#line 309 "lco.m"
        {
#line 309 "lco.m"
          mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[3], transform_hlds__lco__TypeCtorInfo_43_43, transform_hlds__lco__V_28_28, transform_hlds__lco__CurSCCVariants_13, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ModuleInfo_27_27)), &transform_hlds__lco__conv11_STATE_VARIABLE_ModuleInfo_20);
        }
#line 309 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ModuleInfo_20 = ((MR_Word) transform_hlds__lco__conv11_STATE_VARIABLE_ModuleInfo_20);
#line 308 "lco.m"
      }
#line 311 "lco.m"
    else
#line 312 "lco.m"
      *transform_hlds__lco__STATE_VARIABLE_ModuleInfo_20 = transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_19;
#line 312 "lco.m"
    *transform_hlds__lco__STATE_VARIABLE_VariantMap_18 = transform_hlds__lco__STATE_VARIABLE_VariantMap_0_17;
#line 296 "lco.m"
  }
#line 293 "lco.m"
}

#line 291 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_modulo_constructors_2_p_0_1(
#line 291 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 291 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 291 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 291 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 291 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 291 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5)
#line 291 "lco.m"
{
#line 291 "lco.m"
  {
#line 291 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 291 "lco.m"
    MR_Word transform_hlds__lco__conv1_STATE_VARIABLE_VariantMap_18;
#line 291 "lco.m"
    MR_Word transform_hlds__lco__conv0_STATE_VARIABLE_ModuleInfo_20;

#line 291 "lco.m"
    {
#line 291 "lco.m"
      transform_hlds__lco__lco_scc_5_p_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2), &transform_hlds__lco__conv1_STATE_VARIABLE_VariantMap_18, ((MR_Word) transform_hlds__lco__wrapper_arg_4), &transform_hlds__lco__conv0_STATE_VARIABLE_ModuleInfo_20);
    }
#line 291 "lco.m"
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv1_STATE_VARIABLE_VariantMap_18));
#line 291 "lco.m"
    *transform_hlds__lco__wrapper_arg_5 = ((MR_Box) (transform_hlds__lco__conv0_STATE_VARIABLE_ModuleInfo_20));
#line 291 "lco.m"
  }
#line 291 "lco.m"
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
#line 288 "lco.m"
  {
#line 288 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 288 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_13_13;
#line 288 "lco.m"
    MR_Word transform_hlds__lco__DepInfo_4;
#line 288 "lco.m"
    MR_Word transform_hlds__lco__SCCs_5;
#line 288 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_9_9;
#line 288 "lco.m"
    MR_Word transform_hlds__lco__V_11_11;
#line 291 "lco.m"
    MR_Word transform_hlds__lco__V_6_6;
#line 291 "lco.m"
    MR_Box transform_hlds__lco__conv3_V_6_6;
#line 291 "lco.m"
    MR_Box transform_hlds__lco__conv2_STATE_VARIABLE_ModuleInfo_8;

#line 289 "lco.m"
    {
#line 289 "lco.m"
      transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_7, &transform_hlds__lco__STATE_VARIABLE_ModuleInfo_9_9, &transform_hlds__lco__DepInfo_4);
    }
#line 14730 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_13_13 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 290 "lco.m"
    {
#line 290 "lco.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0(transform_hlds__lco__TypeCtorInfo_13_13, transform_hlds__lco__DepInfo_4, &transform_hlds__lco__SCCs_5);
    }
#line 291 "lco.m"
    {
#line 291 "lco.m"
      transform_hlds__lco__V_11_11 = mercury__map__init_0_f_0(transform_hlds__lco__TypeCtorInfo_13_13, (MR_Word) &transform_hlds__lco_scalar_common_1[0]);
    }
#line 291 "lco.m"
    {
#line 291 "lco.m"
      mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[1], (MR_Word) &transform_hlds__lco_scalar_common_2[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__lco_scalar_common_2[7], transform_hlds__lco__SCCs_5, ((MR_Box) (transform_hlds__lco__V_11_11)), &transform_hlds__lco__conv3_V_6_6, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ModuleInfo_9_9)), &transform_hlds__lco__conv2_STATE_VARIABLE_ModuleInfo_8);
    }
#line 291 "lco.m"
    transform_hlds__lco__V_6_6 = ((MR_Word) transform_hlds__lco__conv3_V_6_6);
#line 291 "lco.m"
    *transform_hlds__lco__STATE_VARIABLE_ModuleInfo_8 = ((MR_Word) transform_hlds__lco__conv2_STATE_VARIABLE_ModuleInfo_8);
#line 288 "lco.m"
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
