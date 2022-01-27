/*
** Automatically generated from `lco.m'
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
#include "cord.mih"
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
#include "hlds.vartypes.mih"
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
#include "parse_tree.file_kind.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
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



#line 1389 "lco.m"
struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s {
#line 1389 "lco.m"
  MR_Word transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12;
#line 1394 "lco.m"
  MR_bool transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded;
#line 1458 "lco.m"
  MR_Word transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVar_42;
#line 1445 "lco.m"
  jmp_buf transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__commit_0;
#line 1445 "lco.m"
  MR_Word transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__TypeInfo_115_115;
#line 1445 "lco.m"
  MR_Word transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVarPair_44;
#line 1445 "lco.m"
  MR_Word transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__V_114_114;
#line 1445 "lco.m"
  MR_Box transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__conv4_FGTVarPair_44;
#line 1389 "lco.m"
};


#line 177 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 180 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0;

#line 183 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0;

#line 186 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 189 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 192 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__lco__type_ctor_info_variant_id_0;

#line 195 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 198 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 201 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 204 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 207 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 210 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 213 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_field_id_0;

#line 216 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 219 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 222 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_transform_hlds__lco__type_ctor_info_variant_arg_0;

#line 225 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0;

#line 228 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0;

#line 231 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_store_target_0;

#line 234 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_0;

#line 237 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_1;

#line 240 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_value_ordered_allow_float_addr_0[2];

#line 243 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_allow_float_addr_0[2];

#line 246 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_allow_float_addr_0[2];

#line 249 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_field_id_0_0[3];

#line 252 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_field_id_0_0[3];

#line 255 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_field_id_0_0;

#line 258 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_field_id_0_0[1];

#line 261 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_field_id_0[1];

#line 264 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_field_id_0[1];

#line 267 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_field_id_0[1];

#line 270 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0;

#line 273 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 276 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 279 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_lco_const_info_0_0[8];

#line 282 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_lco_const_info_0_0[8];

#line 285 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_const_info_0_0;

#line 288 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_const_info_0_0[1];

#line 291 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_const_info_0[1];

#line 294 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_lco_const_info_0[1];

#line 297 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_const_info_0[1];

#line 300 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 303 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 306 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_lco_info_0_0[7];

#line 309 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_lco_info_0_0[7];

#line 312 "transform_hlds.lco.c"
static const MR_DuArgLocn transform_hlds__lco__transform_hlds__lco__field_locns_lco_info_0_0[7];

#line 315 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_info_0_0;

#line 318 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_info_0_0[1];

#line 321 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_info_0[1];

#line 324 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_lco_info_0[1];

#line 327 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_info_0[1];

#line 330 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_0;

#line 333 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_1;

#line 336 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_value_ordered_lco_is_permitted_on_scc_0[2];

#line 339 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_lco_is_permitted_on_scc_0[2];

#line 342 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_is_permitted_on_scc_0[2];

#line 345 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_0;

#line 348 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_1;

#line 351 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_value_ordered_proc_changed_0[2];

#line 354 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_proc_changed_0[2];

#line 357 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_proc_changed_0[2];

#line 360 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__maybe__ti_maybe_1transform_hlds__lco__type_ctor_info_field_id_0;

#line 363 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_store_target_0_0[2];

#line 366 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_store_target_0_0;

#line 369 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_store_target_0_0[1];

#line 372 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_store_target_0[1];

#line 375 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_store_target_0[1];

#line 378 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_store_target_0[1];

#line 381 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0;

#line 384 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_variant_arg_0_0[2];

#line 387 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_variant_arg_0_0[2];

#line 390 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_arg_0_0;

#line 393 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_arg_0_0[1];

#line 396 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_arg_0[1];

#line 399 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_arg_0[1];

#line 402 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_arg_0[1];

#line 405 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_arg_0;

#line 408 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_variant_id_0_0[3];

#line 411 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_id_0_0;

#line 414 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_id_0_0[1];

#line 417 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_id_0[1];

#line 420 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_id_0[1];

#line 423 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_id_0[1];

#line 426 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____allow_float_addr_0_0_10001(
#line 429 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 431 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 434 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____allow_float_addr_0_0_10001(
#line 437 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 439 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 441 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 444 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____field_id_0_0_10001(
#line 447 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 449 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 452 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____field_id_0_0_10001(
#line 455 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 457 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 459 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 462 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_const_info_0_0_10001(
#line 465 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 467 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 470 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____lco_const_info_0_0_10001(
#line 473 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 475 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 477 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 480 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_info_0_0_10001(
#line 483 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 485 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 488 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____lco_info_0_0_10001(
#line 491 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 493 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 495 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 498 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0_10001(
#line 501 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 503 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 506 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0_10001(
#line 509 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 511 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 513 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 516 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____proc_changed_0_0_10001(
#line 519 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 521 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 524 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____proc_changed_0_0_10001(
#line 527 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 529 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 531 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 534 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____store_target_0_0_10001(
#line 537 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 539 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 542 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____store_target_0_0_10001(
#line 545 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 547 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 549 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 552 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____var_to_target_0_0_10001(
#line 555 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 557 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 560 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____var_to_target_0_0_10001(
#line 563 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 565 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 567 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 570 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_arg_0_0_10001(
#line 573 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 575 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 578 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____variant_arg_0_0_10001(
#line 581 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 583 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 585 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 588 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_id_0_0_10001(
#line 591 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 593 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 596 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____variant_id_0_0_10001(
#line 599 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 601 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 603 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 606 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_map_0_0_10001(
#line 609 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 611 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 614 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____variant_map_0_0_10001(
#line 617 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 619 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 621 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 739 "lco.m"
static void MR_CALL 
transform_hlds__lco__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_116_105_116_105_111_110_95_100_101_112_101_110_100_101_110_116_95_103_111_97_108_95_95_91_49_44_32_50_93_95_48_9_p_0(
#line 739 "lco.m"
  MR_Word transform_hlds__lco__Goal_12,
#line 739 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22,
#line 739 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23,
#line 739 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24,
#line 739 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25,
#line 739 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26,
#line 739 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_DelayForVars_27);

#line 1610 "lco.m"
static void MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__lco_transform_variant_plain_call__1610__1_2_p_0(
#line 1610 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_69,
#line 1610 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__2_70);

#line 1328 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__make_addr_vars__1328__1_2_p_0(
#line 1328 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 1328 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_25);

#line 1202 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__update_construct__1202__1_2_p_0(
#line 1202 "lco.m"
  MR_Word transform_hlds__lco__ConsId_23,
#line 1202 "lco.m"
  MR_Word transform_hlds__lco__RHSConsId_43);

#line 1058 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__IntroducedFrom__func__make_variant_args__1058__1_2_f_0(
#line 1058 "lco.m"
  MR_Word transform_hlds__lco__AddrVarFieldIds_6,
#line 1058 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_14);

#line 1055 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__IntroducedFrom__func__make_variant_args__1055__1_1_f_0(
#line 1055 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_17);

#line 897 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__update_call_args__897__1_2_p_0(
#line 897 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 897 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_14);

#line 244 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____variant_map_0_0(
#line 244 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 244 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 244 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 244 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_map_0_0(
#line 244 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 244 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 216 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____variant_id_0_0(
#line 216 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 216 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 216 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 216 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_id_0_0(
#line 216 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 216 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 223 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____variant_arg_0_0(
#line 223 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 223 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 223 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 223 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_arg_0_0(
#line 223 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 223 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 281 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____var_to_target_0_0(
#line 281 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 281 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 281 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 281 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____var_to_target_0_0(
#line 281 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 281 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 283 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____store_target_0_0(
#line 283 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 283 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 283 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 283 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____store_target_0_0(
#line 283 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 283 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 250 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____proc_changed_0_0(
#line 250 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 250 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 250 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 250 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____proc_changed_0_0(
#line 250 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_1,
#line 250 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 246 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0(
#line 246 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 246 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 246 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 246 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0(
#line 246 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_1,
#line 246 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 258 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____lco_info_0_0(
#line 258 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 258 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 258 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 258 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_info_0_0(
#line 258 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 258 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 269 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____lco_const_info_0_0(
#line 269 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 269 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 269 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 269 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_const_info_0_0(
#line 269 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 269 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 237 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____field_id_0_0(
#line 237 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 237 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 237 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 237 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____field_id_0_0(
#line 237 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 237 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 254 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____allow_float_addr_0_0(
#line 254 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 254 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 254 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 254 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____allow_float_addr_0_0(
#line 254 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_1,
#line 254 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 1703 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_unification_args_8_p_0(
#line 1703 "lco.m"
  MR_Word transform_hlds__lco__GroundVar_9,
#line 1703 "lco.m"
  MR_Integer transform_hlds__lco__TargetArgNum_10,
#line 1703 "lco.m"
  MR_Integer transform_hlds__lco__CurArgNum_11,
#line 1703 "lco.m"
  MR_Word transform_hlds__lco__ArgTypes_12,
#line 1703 "lco.m"
  MR_Word * transform_hlds__lco__ArgVars_13,
#line 1703 "lco.m"
  MR_Word * transform_hlds__lco__ArgModes_14,
#line 1703 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22,
#line 1703 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_23);

#line 1660 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_store_goal_6_p_0(
#line 1660 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_7,
#line 1660 "lco.m"
  MR_Word transform_hlds__lco__InstMap_8,
#line 1660 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 1660 "lco.m"
  MR_Word * transform_hlds__lco__Goal_11,
#line 1660 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_31,
#line 1660 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_32);

#line 1635 "lco.m"
static void MR_CALL 
transform_hlds__lco__grounding_to_variant_args_5_p_0(
#line 1635 "lco.m"
  MR_Word transform_hlds__lco__GroundingVarToAddr_6,
#line 1635 "lco.m"
  MR_Integer transform_hlds__lco__OutArgNum_7,
#line 1635 "lco.m"
  MR_Word transform_hlds__lco__OutArgs_8,
#line 1635 "lco.m"
  MR_Word * transform_hlds__lco__Subst_9,
#line 1635 "lco.m"
  MR_Word * transform_hlds__lco__VariantArgs_10);

#line 1625 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__is_grounding_4_p_0(
#line 1625 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_5,
#line 1625 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_6,
#line 1625 "lco.m"
  MR_Word transform_hlds__lco__InstMap_7,
#line 1625 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__4_4);

#line 1610 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_2(
#line 1610 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1610 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1610 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2);

#line 1567 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_1(
#line 1567 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1567 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1);

#line 1558 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0(
#line 1558 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_12,
#line 1558 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_13,
#line 1558 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_14,
#line 1558 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_15,
#line 1558 "lco.m"
  MR_Word transform_hlds__lco__GoalExpr0_16,
#line 1558 "lco.m"
  MR_Word * transform_hlds__lco__GoalExpr_17,
#line 1558 "lco.m"
  MR_Word transform_hlds__lco__GoalInfo0_18,
#line 1558 "lco.m"
  MR_Word * transform_hlds__lco__GoalInfo_19,
#line 1558 "lco.m"
  MR_Word * transform_hlds__lco__Changed_20,
#line 1558 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_53,
#line 1558 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_54);

#line 1551 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_2(
#line 1551 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1551 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1551 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 1551 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_3,
#line 1551 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_4);

#line 1543 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_1(
#line 1543 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1543 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1);

#line 1535 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(
#line 1535 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_10,
#line 1535 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_11,
#line 1535 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_12,
#line 1535 "lco.m"
  MR_Word transform_hlds__lco__GoalInfo_13,
#line 1535 "lco.m"
  MR_Word transform_hlds__lco__GoalExpr0_14,
#line 1535 "lco.m"
  MR_Word * transform_hlds__lco__GoalExpr_15,
#line 1535 "lco.m"
  MR_Word * transform_hlds__lco__Changed_16,
#line 1535 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_23,
#line 1535 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_24);

#line 1524 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_case_9_p_0(
#line 1524 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_10,
#line 1524 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_11,
#line 1524 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_12,
#line 1524 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_13,
#line 1524 "lco.m"
  MR_Word transform_hlds__lco__Case0_14,
#line 1524 "lco.m"
  MR_Word * transform_hlds__lco__Case_15,
#line 1524 "lco.m"
  MR_Word * transform_hlds__lco__Changed_16,
#line 1524 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22,
#line 1524 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_23);

#line 1505 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_conj_9_p_0(
#line 1505 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_1,
#line 1505 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_2,
#line 1505 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_3,
#line 1505 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_4,
#line 1505 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 1505 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6,
#line 1505 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__7_7,
#line 1505 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_8,
#line 1505 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_9);

#line 1420 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_6(
#line 1420 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1420 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1420 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 1420 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 1420 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 1420 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5);

#line 1411 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_1(
#line 1411 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1411 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1411 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 1411 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 1411 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 1411 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5);

#line 1445 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_2(
#line 1445 "lco.m"
  void * transform_hlds__lco__env_ptr_arg);

#line 1445 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_4(
#line 1445 "lco.m"
  void * transform_hlds__lco__env_ptr_arg);

#line 1445 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_3(
#line 1445 "lco.m"
  void * transform_hlds__lco__env_ptr_arg);

#line 1445 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_5(
#line 1445 "lco.m"
  void * transform_hlds__lco__env_ptr_arg);

#line 1389 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0(
#line 1389 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_10,
#line 1389 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_11,
#line 1389 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_12,
#line 1389 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_13,
#line 1389 "lco.m"
  MR_Word transform_hlds__lco__Goal0_14,
#line 1389 "lco.m"
  MR_Word * transform_hlds__lco__Goal_15,
#line 1389 "lco.m"
  MR_Word * transform_hlds__lco__Changed_16,
#line 1389 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73,
#line 1389 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);

#line 1328 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__make_addr_vars_12_p_0_1(
#line 1328 "lco.m"
  MR_Box transform_hlds__lco__closure_arg);

#line 1321 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_addr_vars_12_p_0(
#line 1321 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 1321 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 1321 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__3_3,
#line 1321 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__4_4,
#line 1321 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 1321 "lco.m"
  MR_Integer transform_hlds__lco__NextOutArgNum_6,
#line 1321 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_7,
#line 1321 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__8_8,
#line 1321 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VarSet_0_9,
#line 1321 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VarSet_10,
#line 1321 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11,
#line 1321 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VarTypes_12);

#line 1276 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__occurs_once_2_p_0(
#line 1276 "lco.m"
  MR_Word transform_hlds__lco__Bag_3,
#line 1276 "lco.m"
  MR_Word transform_hlds__lco__Var_4);

#line 1267 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_mode_2_p_0(
#line 1267 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_3,
#line 1267 "lco.m"
  MR_Word transform_hlds__lco__UniMode_4);

#line 1257 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__bound_inst_with_free_arg_2_f_0(
#line 1257 "lco.m"
  MR_Word transform_hlds__lco__ConsId_4,
#line 1257 "lco.m"
  MR_Integer transform_hlds__lco__FreeArg_5);

#line 1222 "lco.m"
static void MR_CALL 
transform_hlds__lco__update_construct_args_14_p_0(
#line 1222 "lco.m"
  MR_Word transform_hlds__lco__Subst_1,
#line 1222 "lco.m"
  MR_Word transform_hlds__lco__HighLevelData_2,
#line 1222 "lco.m"
  MR_Word transform_hlds__lco__VarType_3,
#line 1222 "lco.m"
  MR_Word transform_hlds__lco__ConsId_4,
#line 1222 "lco.m"
  MR_Integer transform_hlds__lco__ArgNum_5,
#line 1222 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__6_6,
#line 1222 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__7_7,
#line 1222 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__8_8,
#line 1222 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_InstMapDelta_0_9,
#line 1222 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_InstMapDelta_10,
#line 1222 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_0_11,
#line 1222 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_12,
#line 1222 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VarTypes_0_13,
#line 1222 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VarTypes_14);

#line 1202 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__update_construct_8_p_0_1(
#line 1202 "lco.m"
  MR_Box transform_hlds__lco__closure_arg);

#line 1156 "lco.m"
static void MR_CALL 
transform_hlds__lco__update_construct_8_p_0(
#line 1156 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_9,
#line 1156 "lco.m"
  MR_Word transform_hlds__lco__Subst_10,
#line 1156 "lco.m"
  MR_Word transform_hlds__lco__Goal0_11,
#line 1156 "lco.m"
  MR_Word * transform_hlds__lco__Goal_12,
#line 1156 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_AddrVarFieldIds_0_59,
#line 1156 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_AddrVarFieldIds_60,
#line 1156 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_61,
#line 1156 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_62);

#line 1141 "lco.m"
static void MR_CALL 
transform_hlds__lco__create_variant_name_4_p_0(
#line 1141 "lco.m"
  MR_Word transform_hlds__lco__PredOrFunc_5,
#line 1141 "lco.m"
  MR_Integer transform_hlds__lco__VariantNumber_6,
#line 1141 "lco.m"
  MR_String transform_hlds__lco__OrigName_7,
#line 1141 "lco.m"
  MR_String * transform_hlds__lco__VariantName_8);

#line 1104 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__match_existing_variant_3_p_0(
#line 1104 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 1104 "lco.m"
  MR_Word transform_hlds__lco__AddrArgNums_6,
#line 1104 "lco.m"
  MR_Word * transform_hlds__lco__Variant_7);

#line 1064 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__ensure_variant_exists_8_p_0(
#line 1064 "lco.m"
  MR_Word transform_hlds__lco__PredId_9,
#line 1064 "lco.m"
  MR_Integer transform_hlds__lco__ProcId_10,
#line 1064 "lco.m"
  MR_Word transform_hlds__lco__AddrArgNums_11,
#line 1064 "lco.m"
  MR_Word * transform_hlds__lco__VariantPredProcId_12,
#line 1064 "lco.m"
  MR_Word transform_hlds__lco__SymName_13,
#line 1064 "lco.m"
  MR_Word * transform_hlds__lco__VariantSymName_14,
#line 1064 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_30,
#line 1064 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_31);

#line 1058 "lco.m"
static MR_Box MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0_2(
#line 1058 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1058 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1);

#line 1055 "lco.m"
static MR_Box MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0_1(
#line 1055 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1055 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1);

#line 1049 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0(
#line 1049 "lco.m"
  MR_Word transform_hlds__lco__HighLevelData_5,
#line 1049 "lco.m"
  MR_Word transform_hlds__lco__AddrVarFieldIds_6,
#line 1049 "lco.m"
  MR_Word transform_hlds__lco__Mismatches_7,
#line 1049 "lco.m"
  MR_Word * transform_hlds__lco__VariantArgs_8);

#line 1040 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__make_ref_type_1_f_0(
#line 1040 "lco.m"
  MR_Word transform_hlds__lco__FieldType_3);

#line 1017 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_address_var_5_p_0(
#line 1017 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_6,
#line 1017 "lco.m"
  MR_Word transform_hlds__lco__Var_7,
#line 1017 "lco.m"
  MR_Word * transform_hlds__lco__AddrVar_8,
#line 1017 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_19,
#line 1017 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_20);

#line 958 "lco.m"
static void MR_CALL 
transform_hlds__lco__find_args_to_pass_by_addr_10_p_0(
#line 958 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 958 "lco.m"
  MR_Word transform_hlds__lco__UnifyInputVars_2,
#line 958 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 958 "lco.m"
  MR_Integer transform_hlds__lco__ArgNum_4,
#line 958 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__5_5,
#line 958 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6,
#line 958 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Subst_0_7,
#line 958 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Subst_8,
#line 958 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_9,
#line 958 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_10);

#line 930 "lco.m"
static void MR_CALL 
transform_hlds__lco__classify_proc_call_args_7_p_0(
#line 930 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 930 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 930 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 930 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__4_4,
#line 930 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__5_5,
#line 930 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6,
#line 930 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__7_7);

#line 897 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__update_call_args_6_p_0_1(
#line 897 "lco.m"
  MR_Box transform_hlds__lco__closure_arg);

#line 893 "lco.m"
static void MR_CALL 
transform_hlds__lco__update_call_args_6_p_0(
#line 893 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 893 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 893 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 893 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__4_4,
#line 893 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 893 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6);

#line 853 "lco.m"
static void MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0_2(
#line 853 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 853 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 853 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 853 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_3,
#line 853 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_4,
#line 853 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_5,
#line 853 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_6);

#line 851 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0_1(
#line 851 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 851 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1);

#line 811 "lco.m"
static void MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0(
#line 811 "lco.m"
  MR_Word transform_hlds__lco__CallGoal_9,
#line 811 "lco.m"
  MR_Word transform_hlds__lco__CallOutArgs_10,
#line 811 "lco.m"
  MR_Word transform_hlds__lco__UnifyGoals_11,
#line 811 "lco.m"
  MR_Word transform_hlds__lco__UnifyInputVars_12,
#line 811 "lco.m"
  MR_Word * transform_hlds__lco__MaybeGoals_13,
#line 811 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_52,
#line 811 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_53,
#line 811 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_15);

#line 775 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_unification_5_p_0_1(
#line 775 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 775 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1);

#line 761 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_unification_5_p_0(
#line 761 "lco.m"
  MR_Word transform_hlds__lco__Goal_6,
#line 761 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_0_30,
#line 761 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_31,
#line 761 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_32,
#line 761 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_33);

#line 739 "lco.m"
static void MR_CALL 
transform_hlds__lco__partition_dependent_goal_9_p_0(
#line 739 "lco.m"
  MR_Word transform_hlds__lco___Info_10,
#line 739 "lco.m"
  MR_Word transform_hlds__lco___ConstInfo_11,
#line 739 "lco.m"
  MR_Word transform_hlds__lco__Goal_12,
#line 739 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22,
#line 739 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23,
#line 739 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24,
#line 739 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25,
#line 739 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26,
#line 739 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_DelayForVars_27);

#line 704 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__potentially_moveable_goal_1_p_0(
#line 704 "lco.m"
  MR_Word transform_hlds__lco__Goal_2);

#line 636 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__divide_rev_conj_8_p_0(
#line 636 "lco.m"
  MR_Word transform_hlds__lco__Info_9,
#line 636 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_10,
#line 636 "lco.m"
  MR_Word transform_hlds__lco__RevGoals0_11,
#line 636 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_AfterGoals_0_19,
#line 636 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_AfterGoals_20,
#line 636 "lco.m"
  MR_Word * transform_hlds__lco__RecGoal_13,
#line 636 "lco.m"
  MR_Word * transform_hlds__lco__RecOutArgs_14,
#line 636 "lco.m"
  MR_Word * transform_hlds__lco__RevBeforeGoals_15);

#line 606 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0_2(
#line 606 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 606 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 606 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 606 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 606 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 606 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5);

#line 602 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0_1(
#line 602 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 602 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 602 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 602 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 602 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 602 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5,
#line 602 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_6,
#line 602 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_7);

#line 592 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0(
#line 592 "lco.m"
  MR_Word transform_hlds__lco__Goals0_6,
#line 592 "lco.m"
  MR_Word * transform_hlds__lco__MaybeGoals_7,
#line 592 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_26,
#line 592 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_27,
#line 592 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_9);

#line 567 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_cases_5_p_0(
#line 567 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 567 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__2_2,
#line 567 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_3,
#line 567 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_4,
#line 567 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5);

#line 479 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_goal_5_p_0(
#line 479 "lco.m"
  MR_Word transform_hlds__lco__Goal0_6,
#line 479 "lco.m"
  MR_Word * transform_hlds__lco__Goal_7,
#line 479 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_60,
#line 479 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_61,
#line 479 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_9);

#line 381 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_proc_11_p_0(
#line 381 "lco.m"
  MR_Word transform_hlds__lco__LowerSCCVariants_12,
#line 381 "lco.m"
  MR_Word transform_hlds__lco__SCC_13,
#line 381 "lco.m"
  MR_Word transform_hlds__lco__CurProc_14,
#line 381 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_49,
#line 381 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_50,
#line 381 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_51,
#line 381 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_52,
#line 381 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_53,
#line 381 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_54,
#line 381 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Permitted_0_55,
#line 381 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Permitted_56);

#line 377 "lco.m"
static MR_Integer MR_CALL 
transform_hlds__lco__va_pos_1_f_0(
#line 377 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1);

#line 364 "lco.m"
static MR_Box MR_CALL 
transform_hlds__lco__lco_process_proc_variant_4_p_0_1(
#line 364 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 364 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1);

#line 333 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_process_proc_variant_4_p_0(
#line 333 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_5,
#line 333 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 333 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32,
#line 333 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_33);

#line 320 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_process_proc_update_3_p_0(
#line 320 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 320 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_15,
#line 320 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_16);

#line 312 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_3(
#line 312 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 312 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 312 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 312 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3);

#line 311 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_2(
#line 311 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 311 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 311 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 311 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3);

#line 302 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_1(
#line 302 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 302 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 302 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 302 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 302 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 302 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5,
#line 302 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_6,
#line 302 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_7,
#line 302 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_8,
#line 302 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_9);

#line 296 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0(
#line 296 "lco.m"
  MR_Word transform_hlds__lco__SCC_6,
#line 296 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VariantMap_0_17,
#line 296 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VariantMap_18,
#line 296 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_19,
#line 296 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_20);

#line 294 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_modulo_constructors_2_p_0_1(
#line 294 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 294 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 294 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 294 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 294 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 294 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5);


static /* final */ const MR_Box transform_hlds__lco_scalar_common_1[13][2];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_2[14][3];

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
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&transform_hlds__lco_scalar_common_1[3]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__bag__bag__type_ctor_info_bag_1)),
    ((MR_Box) (&transform_hlds__lco_scalar_common_1[3]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__lco_scalar_common_1[3]))
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

static /* final */ const MR_Box transform_hlds__lco_scalar_common_2[14][3] = {
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
    ((MR_Box) (&transform_hlds__lco_scalar_common_1[3]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__lco_scalar_common_1[3])),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__lco_scalar_common_1[3])),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__lco_scalar_common_1[3])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__lco_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__lco__lco_modulo_constructors_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__lco_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__lco__lco_scc_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__lco_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__lco__lco_process_proc_variant_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__lco_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__lco__lco_in_conj_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__lco_scalar_common_7[4])),
    ((MR_Box) (transform_hlds__lco__make_variant_args_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
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
    ((MR_Box) (&transform_hlds__lco__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__lco__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
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
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 2197 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 2205 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0
  }
};

#line 2213 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0
  }
};

#line 2222 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 2231 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 2240 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__lco__type_ctor_info_variant_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0
  }
};

#line 2249 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 2257 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2265 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2273 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2281 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2289 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2298 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_field_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0
  }
};

#line 2307 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2315 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2324 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_transform_hlds__lco__type_ctor_info_variant_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0
  }
};

#line 2332 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0
  }
};

#line 2341 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0
  }
};

#line 2349 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_store_target_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0
  }
};

#line 2358 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_0 = {
  (MR_String) "do_not_allow_float_addr",
  (MR_Integer) 0
};

#line 2364 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_1 = {
  (MR_String) "allow_float_addr",
  (MR_Integer) 1
};

#line 2370 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_value_ordered_allow_float_addr_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_0,
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_1
};

#line 2376 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_allow_float_addr_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_1,
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_0
};

#line 2382 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_allow_float_addr_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2388 "transform_hlds.lco.c"
const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_allow_float_addr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__lco____Unify____allow_float_addr_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____allow_float_addr_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "allow_float_addr",
  {     transform_hlds__lco__transform_hlds__lco__enum_name_ordered_allow_float_addr_0 },
  {     transform_hlds__lco__transform_hlds__lco__enum_value_ordered_allow_float_addr_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__lco__transform_hlds__lco__functor_number_map_allow_float_addr_0
};

#line 2405 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_field_id_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2412 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_field_id_0_0[3] = {
  (MR_String) "fi_type",
  (MR_String) "fi_cons_id",
  (MR_String) "fi_arg"
};

#line 2419 "transform_hlds.lco.c"
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

#line 2434 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_field_id_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_field_id_0_0
};

#line 2439 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_field_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_field_id_0_0
  }
};

#line 2448 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_field_id_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_field_id_0_0
};

#line 2453 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_field_id_0[1] = {
  (MR_Integer) 0
};

#line 2458 "transform_hlds.lco.c"
const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lco____Unify____field_id_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____field_id_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "field_id",
  {     transform_hlds__lco__transform_hlds__lco__du_name_ordered_field_id_0 },
  {     transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_field_id_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__lco__transform_hlds__lco__functor_number_map_field_id_0
};

#line 2475 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0
  }
};

#line 2484 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 2492 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2500 "transform_hlds.lco.c"
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

#line 2512 "transform_hlds.lco.c"
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

#line 2524 "transform_hlds.lco.c"
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

#line 2539 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_const_info_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_const_info_0_0
};

#line 2544 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_const_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_const_info_0_0
  }
};

#line 2553 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_lco_const_info_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_const_info_0_0
};

#line 2558 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_const_info_0[1] = {
  (MR_Integer) 0
};

#line 2563 "transform_hlds.lco.c"
const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_const_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lco____Unify____lco_const_info_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____lco_const_info_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "lco_const_info",
  {     transform_hlds__lco__transform_hlds__lco__du_name_ordered_lco_const_info_0 },
  {     transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_const_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_const_info_0
};

#line 2580 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2588 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2597 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_lco_info_0_0[7] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_allow_float_addr_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_is_permitted_on_scc_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_proc_changed_0
};

#line 2608 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_lco_info_0_0[7] = {
  (MR_String) "lco_module_info",
  (MR_String) "lco_cur_scc_variants",
  (MR_String) "lco_var_set",
  (MR_String) "lco_var_types",
  (MR_String) "lco_allow_float_addr",
  (MR_String) "lco_permitted",
  (MR_String) "lco_changed"
};

#line 2619 "transform_hlds.lco.c"
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

#line 2658 "transform_hlds.lco.c"
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

#line 2673 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_info_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_info_0_0
};

#line 2678 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_info_0_0
  }
};

#line 2687 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_lco_info_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_info_0_0
};

#line 2692 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_info_0[1] = {
  (MR_Integer) 0
};

#line 2697 "transform_hlds.lco.c"
const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lco____Unify____lco_info_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____lco_info_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "lco_info",
  {     transform_hlds__lco__transform_hlds__lco__du_name_ordered_lco_info_0 },
  {     transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_info_0
};

#line 2714 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_0 = {
  (MR_String) "lco_is_not_permitted_on_scc",
  (MR_Integer) 0
};

#line 2720 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_1 = {
  (MR_String) "lco_is_permitted_on_scc",
  (MR_Integer) 1
};

#line 2726 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_value_ordered_lco_is_permitted_on_scc_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_0,
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_1
};

#line 2732 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_lco_is_permitted_on_scc_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_0,
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_1
};

#line 2738 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_is_permitted_on_scc_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2744 "transform_hlds.lco.c"
const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_is_permitted_on_scc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "lco_is_permitted_on_scc",
  {     transform_hlds__lco__transform_hlds__lco__enum_name_ordered_lco_is_permitted_on_scc_0 },
  {     transform_hlds__lco__transform_hlds__lco__enum_value_ordered_lco_is_permitted_on_scc_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_is_permitted_on_scc_0
};

#line 2761 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_0 = {
  (MR_String) "proc_not_changed",
  (MR_Integer) 0
};

#line 2767 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_1 = {
  (MR_String) "proc_changed",
  (MR_Integer) 1
};

#line 2773 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_value_ordered_proc_changed_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_0,
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_1
};

#line 2779 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_proc_changed_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_1,
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_0
};

#line 2785 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_proc_changed_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2791 "transform_hlds.lco.c"
const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_proc_changed_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__lco____Unify____proc_changed_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____proc_changed_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "proc_changed",
  {     transform_hlds__lco__transform_hlds__lco__enum_name_ordered_proc_changed_0 },
  {     transform_hlds__lco__transform_hlds__lco__enum_value_ordered_proc_changed_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__lco__transform_hlds__lco__functor_number_map_proc_changed_0
};

#line 2808 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__maybe__ti_maybe_1transform_hlds__lco__type_ctor_info_field_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0
  }
};

#line 2816 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_store_target_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__maybe__ti_maybe_1transform_hlds__lco__type_ctor_info_field_id_0
};

#line 2822 "transform_hlds.lco.c"
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

#line 2837 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_store_target_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_store_target_0_0
};

#line 2842 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_store_target_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_store_target_0_0
  }
};

#line 2851 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_store_target_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_store_target_0_0
};

#line 2856 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_store_target_0[1] = {
  (MR_Integer) 0
};

#line 2861 "transform_hlds.lco.c"
const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lco____Unify____store_target_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____store_target_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "store_target",
  {     transform_hlds__lco__transform_hlds__lco__du_name_ordered_store_target_0 },
  {     transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_store_target_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__lco__transform_hlds__lco__functor_number_map_store_target_0
};

#line 2878 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__lco__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0
  }
};

#line 2886 "transform_hlds.lco.c"
const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_var_to_target_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__lco____Unify____var_to_target_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____var_to_target_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "var_to_target",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__lco__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2903 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_variant_arg_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__maybe__ti_maybe_1transform_hlds__lco__type_ctor_info_field_id_0
};

#line 2909 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_variant_arg_0_0[2] = {
  (MR_String) "va_pos",
  (MR_String) "va_field"
};

#line 2915 "transform_hlds.lco.c"
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

#line 2930 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_arg_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_arg_0_0
};

#line 2935 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_arg_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_arg_0_0
  }
};

#line 2944 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_arg_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_arg_0_0
};

#line 2949 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_arg_0[1] = {
  (MR_Integer) 0
};

#line 2954 "transform_hlds.lco.c"
const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lco____Unify____variant_arg_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____variant_arg_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "variant_arg",
  {     transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_arg_0 },
  {     transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_arg_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_arg_0
};

#line 2971 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0
  }
};

#line 2979 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_variant_id_0_0[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_arg_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2986 "transform_hlds.lco.c"
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

#line 3001 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_id_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_id_0_0
};

#line 3006 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_id_0_0
  }
};

#line 3015 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_id_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_id_0_0
};

#line 3020 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_id_0[1] = {
  (MR_Integer) 0
};

#line 3025 "transform_hlds.lco.c"
const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lco____Unify____variant_id_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____variant_id_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "variant_id",
  {     transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_id_0 },
  {     transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_id_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_id_0
};

#line 3042 "transform_hlds.lco.c"
const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__lco____Unify____variant_map_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____variant_map_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "variant_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__lco__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3059 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____allow_float_addr_0_0_10001(
#line 3062 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3064 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3066 "transform_hlds.lco.c"
{
#line 3068 "transform_hlds.lco.c"
  {
#line 3070 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3073 "transform_hlds.lco.c"
    {
#line 3075 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____allow_float_addr_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3078 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3080 "transform_hlds.lco.c"
  }
#line 3082 "transform_hlds.lco.c"
}

#line 3085 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____allow_float_addr_0_0_10001(
#line 3088 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3090 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3092 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3094 "transform_hlds.lco.c"
{
#line 3096 "transform_hlds.lco.c"
  {
#line 3098 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3101 "transform_hlds.lco.c"
    {
#line 3103 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____allow_float_addr_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3106 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3108 "transform_hlds.lco.c"
  }
#line 3110 "transform_hlds.lco.c"
}

#line 3113 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____field_id_0_0_10001(
#line 3116 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3118 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3120 "transform_hlds.lco.c"
{
#line 3122 "transform_hlds.lco.c"
  {
#line 3124 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3127 "transform_hlds.lco.c"
    {
#line 3129 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____field_id_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3132 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3134 "transform_hlds.lco.c"
  }
#line 3136 "transform_hlds.lco.c"
}

#line 3139 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____field_id_0_0_10001(
#line 3142 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3144 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3146 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3148 "transform_hlds.lco.c"
{
#line 3150 "transform_hlds.lco.c"
  {
#line 3152 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3155 "transform_hlds.lco.c"
    {
#line 3157 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____field_id_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3160 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3162 "transform_hlds.lco.c"
  }
#line 3164 "transform_hlds.lco.c"
}

#line 3167 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_const_info_0_0_10001(
#line 3170 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3172 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3174 "transform_hlds.lco.c"
{
#line 3176 "transform_hlds.lco.c"
  {
#line 3178 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3181 "transform_hlds.lco.c"
    {
#line 3183 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____lco_const_info_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3186 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3188 "transform_hlds.lco.c"
  }
#line 3190 "transform_hlds.lco.c"
}

#line 3193 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____lco_const_info_0_0_10001(
#line 3196 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3198 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3200 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3202 "transform_hlds.lco.c"
{
#line 3204 "transform_hlds.lco.c"
  {
#line 3206 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3209 "transform_hlds.lco.c"
    {
#line 3211 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____lco_const_info_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3214 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3216 "transform_hlds.lco.c"
  }
#line 3218 "transform_hlds.lco.c"
}

#line 3221 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_info_0_0_10001(
#line 3224 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3226 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3228 "transform_hlds.lco.c"
{
#line 3230 "transform_hlds.lco.c"
  {
#line 3232 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3235 "transform_hlds.lco.c"
    {
#line 3237 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____lco_info_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3240 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3242 "transform_hlds.lco.c"
  }
#line 3244 "transform_hlds.lco.c"
}

#line 3247 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____lco_info_0_0_10001(
#line 3250 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3252 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3254 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3256 "transform_hlds.lco.c"
{
#line 3258 "transform_hlds.lco.c"
  {
#line 3260 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3263 "transform_hlds.lco.c"
    {
#line 3265 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____lco_info_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3268 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3270 "transform_hlds.lco.c"
  }
#line 3272 "transform_hlds.lco.c"
}

#line 3275 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0_10001(
#line 3278 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3280 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3282 "transform_hlds.lco.c"
{
#line 3284 "transform_hlds.lco.c"
  {
#line 3286 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3289 "transform_hlds.lco.c"
    {
#line 3291 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3294 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3296 "transform_hlds.lco.c"
  }
#line 3298 "transform_hlds.lco.c"
}

#line 3301 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0_10001(
#line 3304 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3306 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3308 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3310 "transform_hlds.lco.c"
{
#line 3312 "transform_hlds.lco.c"
  {
#line 3314 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3317 "transform_hlds.lco.c"
    {
#line 3319 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3322 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3324 "transform_hlds.lco.c"
  }
#line 3326 "transform_hlds.lco.c"
}

#line 3329 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____proc_changed_0_0_10001(
#line 3332 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3334 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3336 "transform_hlds.lco.c"
{
#line 3338 "transform_hlds.lco.c"
  {
#line 3340 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3343 "transform_hlds.lco.c"
    {
#line 3345 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____proc_changed_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3348 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3350 "transform_hlds.lco.c"
  }
#line 3352 "transform_hlds.lco.c"
}

#line 3355 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____proc_changed_0_0_10001(
#line 3358 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3360 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3362 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3364 "transform_hlds.lco.c"
{
#line 3366 "transform_hlds.lco.c"
  {
#line 3368 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3371 "transform_hlds.lco.c"
    {
#line 3373 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____proc_changed_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3376 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3378 "transform_hlds.lco.c"
  }
#line 3380 "transform_hlds.lco.c"
}

#line 3383 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____store_target_0_0_10001(
#line 3386 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3388 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3390 "transform_hlds.lco.c"
{
#line 3392 "transform_hlds.lco.c"
  {
#line 3394 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3397 "transform_hlds.lco.c"
    {
#line 3399 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____store_target_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3402 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3404 "transform_hlds.lco.c"
  }
#line 3406 "transform_hlds.lco.c"
}

#line 3409 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____store_target_0_0_10001(
#line 3412 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3414 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3416 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3418 "transform_hlds.lco.c"
{
#line 3420 "transform_hlds.lco.c"
  {
#line 3422 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3425 "transform_hlds.lco.c"
    {
#line 3427 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____store_target_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3430 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3432 "transform_hlds.lco.c"
  }
#line 3434 "transform_hlds.lco.c"
}

#line 3437 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____var_to_target_0_0_10001(
#line 3440 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3442 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3444 "transform_hlds.lco.c"
{
#line 3446 "transform_hlds.lco.c"
  {
#line 3448 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3451 "transform_hlds.lco.c"
    {
#line 3453 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____var_to_target_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3456 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3458 "transform_hlds.lco.c"
  }
#line 3460 "transform_hlds.lco.c"
}

#line 3463 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____var_to_target_0_0_10001(
#line 3466 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3468 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3470 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3472 "transform_hlds.lco.c"
{
#line 3474 "transform_hlds.lco.c"
  {
#line 3476 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3479 "transform_hlds.lco.c"
    {
#line 3481 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____var_to_target_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3484 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3486 "transform_hlds.lco.c"
  }
#line 3488 "transform_hlds.lco.c"
}

#line 3491 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_arg_0_0_10001(
#line 3494 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3496 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3498 "transform_hlds.lco.c"
{
#line 3500 "transform_hlds.lco.c"
  {
#line 3502 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3505 "transform_hlds.lco.c"
    {
#line 3507 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____variant_arg_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3510 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3512 "transform_hlds.lco.c"
  }
#line 3514 "transform_hlds.lco.c"
}

#line 3517 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____variant_arg_0_0_10001(
#line 3520 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3522 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3524 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3526 "transform_hlds.lco.c"
{
#line 3528 "transform_hlds.lco.c"
  {
#line 3530 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3533 "transform_hlds.lco.c"
    {
#line 3535 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____variant_arg_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3538 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3540 "transform_hlds.lco.c"
  }
#line 3542 "transform_hlds.lco.c"
}

#line 3545 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_id_0_0_10001(
#line 3548 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3550 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3552 "transform_hlds.lco.c"
{
#line 3554 "transform_hlds.lco.c"
  {
#line 3556 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3559 "transform_hlds.lco.c"
    {
#line 3561 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____variant_id_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3564 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3566 "transform_hlds.lco.c"
  }
#line 3568 "transform_hlds.lco.c"
}

#line 3571 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____variant_id_0_0_10001(
#line 3574 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3576 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3578 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3580 "transform_hlds.lco.c"
{
#line 3582 "transform_hlds.lco.c"
  {
#line 3584 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3587 "transform_hlds.lco.c"
    {
#line 3589 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____variant_id_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3592 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3594 "transform_hlds.lco.c"
  }
#line 3596 "transform_hlds.lco.c"
}

#line 3599 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_map_0_0_10001(
#line 3602 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3604 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3606 "transform_hlds.lco.c"
{
#line 3608 "transform_hlds.lco.c"
  {
#line 3610 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3613 "transform_hlds.lco.c"
    {
#line 3615 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____variant_map_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3618 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3620 "transform_hlds.lco.c"
  }
#line 3622 "transform_hlds.lco.c"
}

#line 3625 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____variant_map_0_0_10001(
#line 3628 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3630 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3632 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3634 "transform_hlds.lco.c"
{
#line 3636 "transform_hlds.lco.c"
  {
#line 3638 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3641 "transform_hlds.lco.c"
    {
#line 3643 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____variant_map_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3646 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3648 "transform_hlds.lco.c"
  }
#line 3650 "transform_hlds.lco.c"
}

#line 739 "lco.m"
static void MR_CALL 
transform_hlds__lco__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_116_105_116_105_111_110_95_100_101_112_101_110_100_101_110_116_95_103_111_97_108_95_95_91_49_44_32_50_93_95_48_9_p_0(
#line 739 "lco.m"
  MR_Word transform_hlds__lco__Goal_12,
#line 739 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22,
#line 739 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23,
#line 739 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24,
#line 739 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25,
#line 739 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26,
#line 739 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_DelayForVars_27)
#line 739 "lco.m"
{
#line 745 "lco.m"
  {
#line 745 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 745 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_31_31;
#line 745 "lco.m"
    MR_Word transform_hlds__lco__GoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_12, (MR_Integer) 1)));
#line 745 "lco.m"
    MR_Word transform_hlds__lco__GoalVars_18;
#line 745 "lco.m"
    MR_Word transform_hlds__lco__Intersection_19;
#line 746 "lco.m"
    MR_Word transform_hlds__lco___GoalExpr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_12, (MR_Integer) 0)));

#line 747 "lco.m"
    {
#line 747 "lco.m"
      hlds__goal_util__goal_vars_2_p_0(transform_hlds__lco__Goal_12, &transform_hlds__lco__GoalVars_18);
    }
#line 3692 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 748 "lco.m"
    {
#line 748 "lco.m"
      parse_tree__set_of_var__intersect_3_p_0(transform_hlds__lco__TypeCtorInfo_31_31, transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26, transform_hlds__lco__GoalVars_18, &transform_hlds__lco__Intersection_19);
    }
#line 749 "lco.m"
    {
#line 749 "lco.m"
      transform_hlds__lco__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__lco__TypeCtorInfo_31_31, transform_hlds__lco__Intersection_19);
    }
#line 751 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 750 "lco.m"
      {
#line 750 "lco.m"
        {
#line 750 "lco.m"
          mercury__list__cons_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (transform_hlds__lco__Goal_12)), transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24, transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25);
        }
#line 750 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_DelayForVars_27 = transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26;
#line 750 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23 = transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22;
#line 750 "lco.m"
      }
#line 751 "lco.m"
    else
#line 752 "lco.m"
      {
#line 752 "lco.m"
        MR_Word transform_hlds__lco__InstmapDelta_20;
#line 752 "lco.m"
        MR_Word transform_hlds__lco__ChangedVars_21;

#line 752 "lco.m"
        {
#line 752 "lco.m"
          mercury__list__cons_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (transform_hlds__lco__Goal_12)), transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22, transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23);
        }
#line 754 "lco.m"
        {
#line 754 "lco.m"
          transform_hlds__lco__InstmapDelta_20 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__lco__GoalInfo_17);
        }
#line 755 "lco.m"
        {
#line 755 "lco.m"
          hlds__instmap__instmap_delta_changed_vars_2_p_0(transform_hlds__lco__InstmapDelta_20, &transform_hlds__lco__ChangedVars_21);
        }
#line 756 "lco.m"
        {
#line 756 "lco.m"
          parse_tree__set_of_var__union_3_p_0(transform_hlds__lco__TypeCtorInfo_31_31, transform_hlds__lco__ChangedVars_21, transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26, transform_hlds__lco__STATE_VARIABLE_DelayForVars_27);
        }
#line 752 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25 = transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24;
#line 752 "lco.m"
      }
#line 745 "lco.m"
  }
#line 739 "lco.m"
}

#line 1610 "lco.m"
static void MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__lco_transform_variant_plain_call__1610__1_2_p_0(
#line 1610 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_69,
#line 1610 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__2_70)
#line 1610 "lco.m"
{
#line 1610 "lco.m"
  {
#line 1610 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1610 "lco.m"
    MR_Box transform_hlds__lco__conv0_HeadVar__2_70;

#line 1610 "lco.m"
    {
#line 1610 "lco.m"
      mercury__pair__fst_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[3], (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0, transform_hlds__lco__HeadVar__1_69, &transform_hlds__lco__conv0_HeadVar__2_70);
    }
#line 1610 "lco.m"
    *transform_hlds__lco__HeadVar__2_70 = ((MR_Word) transform_hlds__lco__conv0_HeadVar__2_70);
#line 1610 "lco.m"
  }
#line 1610 "lco.m"
}

#line 1328 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__make_addr_vars__1328__1_2_p_0(
#line 1328 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 1328 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_25)
#line 1328 "lco.m"
{
#line 1328 "lco.m"
  {
#line 1328 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1328 "lco.m"
    {
#line 1328 "lco.m"
      return transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[7], ((MR_Box) (transform_hlds__lco__HeadVar__5_5)), ((MR_Box) (transform_hlds__lco__HeadVar__2_25)));
    }
#line 1328 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1328 "lco.m"
  }
#line 1328 "lco.m"
}

#line 1202 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__update_construct__1202__1_2_p_0(
#line 1202 "lco.m"
  MR_Word transform_hlds__lco__ConsId_23,
#line 1202 "lco.m"
  MR_Word transform_hlds__lco__RHSConsId_43)
#line 1202 "lco.m"
{
#line 1202 "lco.m"
  {
#line 1202 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1202 "lco.m"
    {
#line 1202 "lco.m"
      return transform_hlds__lco__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__lco__ConsId_23, transform_hlds__lco__RHSConsId_43);
    }
#line 1202 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1202 "lco.m"
  }
#line 1202 "lco.m"
}

#line 1058 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__IntroducedFrom__func__make_variant_args__1058__1_2_f_0(
#line 1058 "lco.m"
  MR_Word transform_hlds__lco__AddrVarFieldIds_6,
#line 1058 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_14)
#line 1058 "lco.m"
{
#line 1058 "lco.m"
  {
#line 1058 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1058 "lco.m"
    MR_Word transform_hlds__lco__HeadVar__3_15;
#line 1058 "lco.m"
    MR_Word transform_hlds__lco__FieldId_13;
#line 1058 "lco.m"
    MR_Word transform_hlds__lco__V_16_16;
#line 1058 "lco.m"
    MR_Integer transform_hlds__lco__Pos_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_14, (MR_Integer) 0)));
#line 1058 "lco.m"
    MR_Word transform_hlds__lco__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_14, (MR_Integer) 1)));
#line 1059 "lco.m"
    MR_Box transform_hlds__lco__conv0_FieldId_13;

#line 1059 "lco.m"
    {
#line 1059 "lco.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[3], (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0, transform_hlds__lco__AddrVarFieldIds_6, ((MR_Box) (transform_hlds__lco__Var_24)), &transform_hlds__lco__conv0_FieldId_13);
    }
#line 1059 "lco.m"
    transform_hlds__lco__FieldId_13 = ((MR_Word) transform_hlds__lco__conv0_FieldId_13);
#line 1058 "lco.m"
    {
#line 1058 "lco.m"
      transform_hlds__lco__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1058 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__V_16_16, 0) = ((MR_Box) (transform_hlds__lco__FieldId_13));
#line 1058 "lco.m"
    }
#line 1058 "lco.m"
    {
#line 1058 "lco.m"
      transform_hlds__lco__HeadVar__3_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1058 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_15, 0) = ((MR_Box) (transform_hlds__lco__Pos_23));
#line 1058 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_15, 1) = ((MR_Box) (transform_hlds__lco__V_16_16));
#line 1058 "lco.m"
    }
#line 1058 "lco.m"
    return transform_hlds__lco__HeadVar__3_15;
#line 1058 "lco.m"
  }
#line 1058 "lco.m"
}

#line 1055 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__IntroducedFrom__func__make_variant_args__1055__1_1_f_0(
#line 1055 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_17)
#line 1055 "lco.m"
{
#line 1055 "lco.m"
  {
#line 1055 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1055 "lco.m"
    MR_Word transform_hlds__lco__HeadVar__2_18;
#line 1055 "lco.m"
    MR_Integer transform_hlds__lco__Pos_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_17, (MR_Integer) 0)));
#line 1055 "lco.m"
    MR_Word transform_hlds__lco___Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_17, (MR_Integer) 1)));

#line 1055 "lco.m"
    {
#line 1055 "lco.m"
      transform_hlds__lco__HeadVar__2_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1055 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_18, 0) = ((MR_Box) (transform_hlds__lco__Pos_21));
#line 1055 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1055 "lco.m"
    }
#line 1055 "lco.m"
    return transform_hlds__lco__HeadVar__2_18;
#line 1055 "lco.m"
  }
#line 1055 "lco.m"
}

#line 897 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__update_call_args__897__1_2_p_0(
#line 897 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 897 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_14)
#line 897 "lco.m"
{
#line 897 "lco.m"
  {
#line 897 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 897 "lco.m"
    {
#line 897 "lco.m"
      return transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[6], ((MR_Box) (transform_hlds__lco__HeadVar__5_5)), ((MR_Box) (transform_hlds__lco__HeadVar__2_14)));
    }
#line 897 "lco.m"
    return transform_hlds__lco__succeeded;
#line 897 "lco.m"
  }
#line 897 "lco.m"
}

#line 244 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____variant_map_0_0(
#line 244 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 244 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 244 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 244 "lco.m"
{
#line 244 "lco.m"
  {
#line 244 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 244 "lco.m"
    MR_Word transform_hlds__lco__Cast_HeadVar1_4 = transform_hlds__lco__HeadVar__2_2;
#line 244 "lco.m"
    MR_Word transform_hlds__lco__Cast_HeadVar2_5 = transform_hlds__lco__HeadVar__3_3;

#line 244 "lco.m"
    {
#line 244 "lco.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[0], transform_hlds__lco__HeadVar__1_1, ((MR_Box) (transform_hlds__lco__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__lco__Cast_HeadVar2_5)));
#line 244 "lco.m"
      return;
    }
#line 244 "lco.m"
  }
#line 244 "lco.m"
}

#line 244 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_map_0_0(
#line 244 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 244 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 244 "lco.m"
{
#line 244 "lco.m"
  {
#line 244 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 244 "lco.m"
    MR_Word transform_hlds__lco__Cast_HeadVar1_3 = transform_hlds__lco__HeadVar__1_1;
#line 244 "lco.m"
    MR_Word transform_hlds__lco__Cast_HeadVar2_4 = transform_hlds__lco__HeadVar__2_2;

#line 244 "lco.m"
    {
#line 244 "lco.m"
      return transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[0], ((MR_Box) (transform_hlds__lco__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__lco__Cast_HeadVar2_4)));
    }
#line 244 "lco.m"
    return transform_hlds__lco__succeeded;
#line 244 "lco.m"
  }
#line 244 "lco.m"
}

#line 216 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____variant_id_0_0(
#line 216 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 216 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 216 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 216 "lco.m"
{
#line 216 "lco.m"
  {
#line 216 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 216 "lco.m"
    MR_Integer transform_hlds__lco__CastX_12 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 216 "lco.m"
    MR_Integer transform_hlds__lco__CastY_13 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 216 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_12 == transform_hlds__lco__CastY_13);
#line 216 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 4042 "transform_hlds.lco.c"
      *transform_hlds__lco__HeadVar__1_1 = (MR_Integer) 0;
#line 216 "lco.m"
    else
#line 216 "lco.m"
      {
#line 216 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 216 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 216 "lco.m"
        MR_String transform_hlds__lco__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));
#line 216 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
#line 216 "lco.m"
        MR_Word transform_hlds__lco__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 216 "lco.m"
        MR_String transform_hlds__lco__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 2)));
#line 216 "lco.m"
        MR_Word transform_hlds__lco__V_10_10;

#line 216 "lco.m"
        {
#line 216 "lco.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[7], &transform_hlds__lco__V_10_10, ((MR_Box) (transform_hlds__lco__V_4_4)), ((MR_Box) (transform_hlds__lco__V_7_7)));
        }
#line 4068 "transform_hlds.lco.c"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_10_10 == (MR_Integer) 0);
#line 216 "lco.m"
        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 216 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 216 "lco.m"
          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_10_10;
#line 216 "lco.m"
        else
#line 216 "lco.m"
          {
#line 216 "lco.m"
            MR_Word transform_hlds__lco__V_11_11;

#line 216 "lco.m"
            {
#line 216 "lco.m"
              hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__lco__V_11_11, transform_hlds__lco__V_5_5, transform_hlds__lco__V_8_8);
            }
#line 4088 "transform_hlds.lco.c"
            transform_hlds__lco__succeeded = (transform_hlds__lco__V_11_11 == (MR_Integer) 0);
#line 216 "lco.m"
            transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 216 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 216 "lco.m"
              *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_11_11;
#line 216 "lco.m"
            else
#line 216 "lco.m"
              {
#line 216 "lco.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__V_6_6, transform_hlds__lco__V_9_9);
#line 216 "lco.m"
                return;
              }
#line 216 "lco.m"
          }
#line 216 "lco.m"
      }
#line 216 "lco.m"
  }
#line 216 "lco.m"
}

#line 216 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_id_0_0(
#line 216 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 216 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 216 "lco.m"
{
#line 216 "lco.m"
  {
#line 216 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 216 "lco.m"
    MR_Integer transform_hlds__lco__CastX_9 = (MR_Integer) transform_hlds__lco__HeadVar__1_1;
#line 216 "lco.m"
    MR_Integer transform_hlds__lco__CastY_10 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;

#line 216 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_9 == transform_hlds__lco__CastY_10);
#line 216 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 216 "lco.m"
      transform_hlds__lco__succeeded = MR_TRUE;
#line 216 "lco.m"
    else
#line 216 "lco.m"
      {
#line 216 "lco.m"
        MR_Word transform_hlds__lco__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 216 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 216 "lco.m"
        MR_String transform_hlds__lco__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 2)));
#line 216 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 216 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 216 "lco.m"
        MR_String transform_hlds__lco__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));

#line 4155 "transform_hlds.lco.c"
        {
#line 4157 "transform_hlds.lco.c"
          transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[7], ((MR_Box) (transform_hlds__lco__V_3_3)), ((MR_Box) (transform_hlds__lco__V_6_6)));
        }
#line 216 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 216 "lco.m"
          {
#line 4164 "transform_hlds.lco.c"
            {
#line 4166 "transform_hlds.lco.c"
              transform_hlds__lco__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__lco__V_4_4, transform_hlds__lco__V_7_7);
            }
#line 216 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 4171 "transform_hlds.lco.c"
              transform_hlds__lco__succeeded = (strcmp(transform_hlds__lco__V_5_5, transform_hlds__lco__V_8_8) == 0);
#line 216 "lco.m"
          }
#line 216 "lco.m"
      }
#line 216 "lco.m"
    return transform_hlds__lco__succeeded;
#line 216 "lco.m"
  }
#line 216 "lco.m"
}

#line 223 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____variant_arg_0_0(
#line 223 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 223 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 223 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 223 "lco.m"
{
#line 223 "lco.m"
  {
#line 223 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 223 "lco.m"
    MR_Integer transform_hlds__lco__CastX_9 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 223 "lco.m"
    MR_Integer transform_hlds__lco__CastY_10 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 223 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_9 == transform_hlds__lco__CastY_10);
#line 223 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 4208 "transform_hlds.lco.c"
      *transform_hlds__lco__HeadVar__1_1 = (MR_Integer) 0;
#line 223 "lco.m"
    else
#line 223 "lco.m"
      {
#line 223 "lco.m"
        MR_Integer transform_hlds__lco__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 223 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 223 "lco.m"
        MR_Integer transform_hlds__lco__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
#line 223 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 223 "lco.m"
        MR_Word transform_hlds__lco__V_8_8;

#line 223 "lco.m"
        {
#line 223 "lco.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__lco__V_8_8, transform_hlds__lco__V_4_4, transform_hlds__lco__V_6_6);
        }
#line 4230 "transform_hlds.lco.c"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_8_8 == (MR_Integer) 0);
#line 223 "lco.m"
        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 223 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 223 "lco.m"
          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_8_8;
#line 223 "lco.m"
        else
#line 223 "lco.m"
          {
#line 223 "lco.m"
            {
#line 223 "lco.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[10], transform_hlds__lco__HeadVar__1_1, ((MR_Box) (transform_hlds__lco__V_5_5)), ((MR_Box) (transform_hlds__lco__V_7_7)));
#line 223 "lco.m"
              return;
            }
#line 223 "lco.m"
          }
#line 223 "lco.m"
      }
#line 223 "lco.m"
  }
#line 223 "lco.m"
}

#line 223 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_arg_0_0(
#line 223 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 223 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 223 "lco.m"
{
#line 223 "lco.m"
  {
#line 223 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 223 "lco.m"
    MR_Integer transform_hlds__lco__CastX_7 = (MR_Integer) transform_hlds__lco__HeadVar__1_1;
#line 223 "lco.m"
    MR_Integer transform_hlds__lco__CastY_8 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;

#line 223 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_7 == transform_hlds__lco__CastY_8);
#line 223 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 223 "lco.m"
      transform_hlds__lco__succeeded = MR_TRUE;
#line 223 "lco.m"
    else
#line 223 "lco.m"
      {
#line 223 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_9_9;
#line 223 "lco.m"
        MR_Integer transform_hlds__lco__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 223 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 223 "lco.m"
        MR_Integer transform_hlds__lco__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 223 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));

#line 4297 "transform_hlds.lco.c"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_3_3 == transform_hlds__lco__V_5_5);
#line 223 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 223 "lco.m"
          {
#line 4303 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_9_9 = (MR_Word) &transform_hlds__lco_scalar_common_1[10];
#line 4305 "transform_hlds.lco.c"
            {
#line 4307 "transform_hlds.lco.c"
              return transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_9_9, ((MR_Box) (transform_hlds__lco__V_4_4)), ((MR_Box) (transform_hlds__lco__V_6_6)));
            }
#line 223 "lco.m"
          }
#line 223 "lco.m"
      }
#line 223 "lco.m"
    return transform_hlds__lco__succeeded;
#line 223 "lco.m"
  }
#line 223 "lco.m"
}

#line 281 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____var_to_target_0_0(
#line 281 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 281 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 281 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 281 "lco.m"
{
#line 281 "lco.m"
  {
#line 281 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 281 "lco.m"
    MR_Word transform_hlds__lco__Cast_HeadVar1_4 = transform_hlds__lco__HeadVar__2_2;
#line 281 "lco.m"
    MR_Word transform_hlds__lco__Cast_HeadVar2_5 = transform_hlds__lco__HeadVar__3_3;

#line 281 "lco.m"
    {
#line 281 "lco.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[11], transform_hlds__lco__HeadVar__1_1, ((MR_Box) (transform_hlds__lco__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__lco__Cast_HeadVar2_5)));
#line 281 "lco.m"
      return;
    }
#line 281 "lco.m"
  }
#line 281 "lco.m"
}

#line 281 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____var_to_target_0_0(
#line 281 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 281 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 281 "lco.m"
{
#line 281 "lco.m"
  {
#line 281 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 281 "lco.m"
    MR_Word transform_hlds__lco__Cast_HeadVar1_3 = transform_hlds__lco__HeadVar__1_1;
#line 281 "lco.m"
    MR_Word transform_hlds__lco__Cast_HeadVar2_4 = transform_hlds__lco__HeadVar__2_2;

#line 281 "lco.m"
    {
#line 281 "lco.m"
      return transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[11], ((MR_Box) (transform_hlds__lco__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__lco__Cast_HeadVar2_4)));
    }
#line 281 "lco.m"
    return transform_hlds__lco__succeeded;
#line 281 "lco.m"
  }
#line 281 "lco.m"
}

#line 283 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____store_target_0_0(
#line 283 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 283 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 283 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 283 "lco.m"
{
#line 283 "lco.m"
  {
#line 283 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 283 "lco.m"
    MR_Integer transform_hlds__lco__CastX_9 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 283 "lco.m"
    MR_Integer transform_hlds__lco__CastY_10 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 283 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_9 == transform_hlds__lco__CastY_10);
#line 283 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 4407 "transform_hlds.lco.c"
      *transform_hlds__lco__HeadVar__1_1 = (MR_Integer) 0;
#line 283 "lco.m"
    else
#line 283 "lco.m"
      {
#line 283 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 283 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 283 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
#line 283 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 283 "lco.m"
        MR_Word transform_hlds__lco__V_8_8;

#line 283 "lco.m"
        {
#line 283 "lco.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[3], &transform_hlds__lco__V_8_8, ((MR_Box) (transform_hlds__lco__V_4_4)), ((MR_Box) (transform_hlds__lco__V_6_6)));
        }
#line 4429 "transform_hlds.lco.c"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_8_8 == (MR_Integer) 0);
#line 283 "lco.m"
        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 283 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 283 "lco.m"
          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_8_8;
#line 283 "lco.m"
        else
#line 283 "lco.m"
          {
#line 283 "lco.m"
            {
#line 283 "lco.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[10], transform_hlds__lco__HeadVar__1_1, ((MR_Box) (transform_hlds__lco__V_5_5)), ((MR_Box) (transform_hlds__lco__V_7_7)));
#line 283 "lco.m"
              return;
            }
#line 283 "lco.m"
          }
#line 283 "lco.m"
      }
#line 283 "lco.m"
  }
#line 283 "lco.m"
}

#line 283 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____store_target_0_0(
#line 283 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 283 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 283 "lco.m"
{
#line 283 "lco.m"
  {
#line 283 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 283 "lco.m"
    MR_Integer transform_hlds__lco__CastX_7 = (MR_Integer) transform_hlds__lco__HeadVar__1_1;
#line 283 "lco.m"
    MR_Integer transform_hlds__lco__CastY_8 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;

#line 283 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_7 == transform_hlds__lco__CastY_8);
#line 283 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 283 "lco.m"
      transform_hlds__lco__succeeded = MR_TRUE;
#line 283 "lco.m"
    else
#line 283 "lco.m"
      {
#line 283 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_10_10;
#line 283 "lco.m"
        MR_Word transform_hlds__lco__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 283 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 283 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 283 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));

#line 4496 "transform_hlds.lco.c"
        {
#line 4498 "transform_hlds.lco.c"
          transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[3], ((MR_Box) (transform_hlds__lco__V_3_3)), ((MR_Box) (transform_hlds__lco__V_5_5)));
        }
#line 283 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 283 "lco.m"
          {
#line 4505 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_10_10 = (MR_Word) &transform_hlds__lco_scalar_common_1[10];
#line 4507 "transform_hlds.lco.c"
            {
#line 4509 "transform_hlds.lco.c"
              return transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_10_10, ((MR_Box) (transform_hlds__lco__V_4_4)), ((MR_Box) (transform_hlds__lco__V_6_6)));
            }
#line 283 "lco.m"
          }
#line 283 "lco.m"
      }
#line 283 "lco.m"
    return transform_hlds__lco__succeeded;
#line 283 "lco.m"
  }
#line 283 "lco.m"
}

#line 250 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____proc_changed_0_0(
#line 250 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 250 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 250 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 250 "lco.m"
{
#line 250 "lco.m"
  {
#line 250 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 250 "lco.m"
    MR_Integer transform_hlds__lco__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 250 "lco.m"
    MR_Integer transform_hlds__lco__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 250 "lco.m"
    {
#line 250 "lco.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__Cast_HeadVar1_4, transform_hlds__lco__Cast_HeadVar2_5);
#line 250 "lco.m"
      return;
    }
#line 250 "lco.m"
  }
#line 250 "lco.m"
}

#line 250 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____proc_changed_0_0(
#line 250 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_1,
#line 250 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 250 "lco.m"
{
#line 4564 "transform_hlds.lco.c"
  {
#line 4566 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded = (transform_hlds__lco__HeadVar__2_1 == transform_hlds__lco__HeadVar__2_2);

#line 4569 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 4571 "transform_hlds.lco.c"
  }
#line 250 "lco.m"
}

#line 246 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0(
#line 246 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 246 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 246 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 246 "lco.m"
{
#line 246 "lco.m"
  {
#line 246 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 246 "lco.m"
    MR_Integer transform_hlds__lco__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 246 "lco.m"
    MR_Integer transform_hlds__lco__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 246 "lco.m"
    {
#line 246 "lco.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__Cast_HeadVar1_4, transform_hlds__lco__Cast_HeadVar2_5);
#line 246 "lco.m"
      return;
    }
#line 246 "lco.m"
  }
#line 246 "lco.m"
}

#line 246 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0(
#line 246 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_1,
#line 246 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 246 "lco.m"
{
#line 4617 "transform_hlds.lco.c"
  {
#line 4619 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded = (transform_hlds__lco__HeadVar__2_1 == transform_hlds__lco__HeadVar__2_2);

#line 4622 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 4624 "transform_hlds.lco.c"
  }
#line 246 "lco.m"
}

#line 258 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____lco_info_0_0(
#line 258 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 258 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 258 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 258 "lco.m"
{
#line 258 "lco.m"
  {
#line 258 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 258 "lco.m"
    MR_Integer transform_hlds__lco__CastX_24 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 258 "lco.m"
    MR_Integer transform_hlds__lco__CastY_25 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 258 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_24 == transform_hlds__lco__CastY_25);
#line 258 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 4653 "transform_hlds.lco.c"
      *transform_hlds__lco__HeadVar__1_1 = (MR_Integer) 0;
#line 258 "lco.m"
    else
#line 258 "lco.m"
      {
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 3)));
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 2)));
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 3)));
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_15_15 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_18_18;

#line 258 "lco.m"
        {
#line 258 "lco.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__lco__V_18_18, transform_hlds__lco__V_4_4, transform_hlds__lco__V_11_11);
        }
#line 4695 "transform_hlds.lco.c"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_18_18 == (MR_Integer) 0);
#line 258 "lco.m"
        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 258 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 258 "lco.m"
          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_18_18;
#line 258 "lco.m"
        else
#line 258 "lco.m"
          {
#line 258 "lco.m"
            MR_Word transform_hlds__lco__V_19_19;

#line 258 "lco.m"
            {
#line 258 "lco.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[0], &transform_hlds__lco__V_19_19, ((MR_Box) (transform_hlds__lco__V_5_5)), ((MR_Box) (transform_hlds__lco__V_12_12)));
            }
#line 4715 "transform_hlds.lco.c"
            transform_hlds__lco__succeeded = (transform_hlds__lco__V_19_19 == (MR_Integer) 0);
#line 258 "lco.m"
            transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 258 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 258 "lco.m"
              *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_19_19;
#line 258 "lco.m"
            else
#line 258 "lco.m"
              {
#line 258 "lco.m"
                MR_Word transform_hlds__lco__V_20_20;

#line 258 "lco.m"
                {
#line 258 "lco.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[9], &transform_hlds__lco__V_20_20, ((MR_Box) (transform_hlds__lco__V_6_6)), ((MR_Box) (transform_hlds__lco__V_13_13)));
                }
#line 4735 "transform_hlds.lco.c"
                transform_hlds__lco__succeeded = (transform_hlds__lco__V_20_20 == (MR_Integer) 0);
#line 258 "lco.m"
                transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 258 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 258 "lco.m"
                  *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_20_20;
#line 258 "lco.m"
                else
#line 258 "lco.m"
                  {
#line 258 "lco.m"
                    MR_Word transform_hlds__lco__V_21_21;

#line 258 "lco.m"
                    {
#line 258 "lco.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[7], &transform_hlds__lco__V_21_21, ((MR_Box) (transform_hlds__lco__V_7_7)), ((MR_Box) (transform_hlds__lco__V_14_14)));
                    }
#line 4755 "transform_hlds.lco.c"
                    transform_hlds__lco__succeeded = (transform_hlds__lco__V_21_21 == (MR_Integer) 0);
#line 258 "lco.m"
                    transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 258 "lco.m"
                    if (transform_hlds__lco__succeeded)
#line 258 "lco.m"
                      *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_21_21;
#line 258 "lco.m"
                    else
#line 258 "lco.m"
                      {
#line 258 "lco.m"
                        MR_Word transform_hlds__lco__V_22_22;
#line 258 "lco.m"
                        MR_Integer transform_hlds__lco__V_33_33 = (MR_Integer) transform_hlds__lco__V_8_8;
#line 258 "lco.m"
                        MR_Integer transform_hlds__lco__V_34_34 = (MR_Integer) transform_hlds__lco__V_15_15;

#line 258 "lco.m"
                        {
#line 258 "lco.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__lco__V_22_22, transform_hlds__lco__V_33_33, transform_hlds__lco__V_34_34);
                        }
#line 4779 "transform_hlds.lco.c"
                        transform_hlds__lco__succeeded = (transform_hlds__lco__V_22_22 == (MR_Integer) 0);
#line 258 "lco.m"
                        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 258 "lco.m"
                        if (transform_hlds__lco__succeeded)
#line 258 "lco.m"
                          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_22_22;
#line 258 "lco.m"
                        else
#line 258 "lco.m"
                          {
#line 258 "lco.m"
                            MR_Word transform_hlds__lco__V_23_23;
#line 258 "lco.m"
                            MR_Integer transform_hlds__lco__V_35_35 = (MR_Integer) transform_hlds__lco__V_9_9;
#line 258 "lco.m"
                            MR_Integer transform_hlds__lco__V_36_36 = (MR_Integer) transform_hlds__lco__V_16_16;

#line 258 "lco.m"
                            {
#line 258 "lco.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__lco__V_23_23, transform_hlds__lco__V_35_35, transform_hlds__lco__V_36_36);
                            }
#line 4803 "transform_hlds.lco.c"
                            transform_hlds__lco__succeeded = (transform_hlds__lco__V_23_23 == (MR_Integer) 0);
#line 258 "lco.m"
                            transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 258 "lco.m"
                            if (transform_hlds__lco__succeeded)
#line 258 "lco.m"
                              *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_23_23;
#line 258 "lco.m"
                            else
#line 258 "lco.m"
                              {
#line 258 "lco.m"
                                MR_Integer transform_hlds__lco__V_37_37 = (MR_Integer) transform_hlds__lco__V_10_10;
#line 258 "lco.m"
                                MR_Integer transform_hlds__lco__V_38_38 = (MR_Integer) transform_hlds__lco__V_17_17;

#line 258 "lco.m"
                                {
#line 258 "lco.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__V_37_37, transform_hlds__lco__V_38_38);
#line 258 "lco.m"
                                  return;
                                }
#line 258 "lco.m"
                              }
#line 258 "lco.m"
                          }
#line 258 "lco.m"
                      }
#line 258 "lco.m"
                  }
#line 258 "lco.m"
              }
#line 258 "lco.m"
          }
#line 258 "lco.m"
      }
#line 258 "lco.m"
  }
#line 258 "lco.m"
}

#line 258 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_info_0_0(
#line 258 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 258 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 258 "lco.m"
{
#line 258 "lco.m"
  {
#line 258 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 258 "lco.m"
    MR_Integer transform_hlds__lco__CastX_17 = (MR_Integer) transform_hlds__lco__HeadVar__1_1;
#line 258 "lco.m"
    MR_Integer transform_hlds__lco__CastY_18 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;

#line 258 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_17 == transform_hlds__lco__CastY_18);
#line 258 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 258 "lco.m"
      transform_hlds__lco__succeeded = MR_TRUE;
#line 258 "lco.m"
    else
#line 258 "lco.m"
      {
#line 258 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_20_20;
#line 258 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_21_21;
#line 258 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_22_22;
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 2)));
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 3)));
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 3)));
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_14_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 4909 "transform_hlds.lco.c"
        {
#line 4911 "transform_hlds.lco.c"
          transform_hlds__lco__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__lco__V_3_3, transform_hlds__lco__V_10_10);
        }
#line 258 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 258 "lco.m"
          {
#line 4918 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_20_20 = (MR_Word) &transform_hlds__lco_scalar_common_2[0];
#line 4920 "transform_hlds.lco.c"
            {
#line 4922 "transform_hlds.lco.c"
              transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_20_20, ((MR_Box) (transform_hlds__lco__V_4_4)), ((MR_Box) (transform_hlds__lco__V_11_11)));
            }
#line 258 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 258 "lco.m"
              {
#line 4929 "transform_hlds.lco.c"
                transform_hlds__lco__TypeInfo_21_21 = (MR_Word) &transform_hlds__lco_scalar_common_1[9];
#line 4931 "transform_hlds.lco.c"
                {
#line 4933 "transform_hlds.lco.c"
                  transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_21_21, ((MR_Box) (transform_hlds__lco__V_5_5)), ((MR_Box) (transform_hlds__lco__V_12_12)));
                }
#line 258 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 258 "lco.m"
                  {
#line 4940 "transform_hlds.lco.c"
                    transform_hlds__lco__TypeInfo_22_22 = (MR_Word) &transform_hlds__lco_scalar_common_2[7];
#line 4942 "transform_hlds.lco.c"
                    {
#line 4944 "transform_hlds.lco.c"
                      transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_22_22, ((MR_Box) (transform_hlds__lco__V_6_6)), ((MR_Box) (transform_hlds__lco__V_13_13)));
                    }
#line 258 "lco.m"
                    if (transform_hlds__lco__succeeded)
#line 258 "lco.m"
                      {
#line 4951 "transform_hlds.lco.c"
                        transform_hlds__lco__succeeded = (transform_hlds__lco__V_7_7 == transform_hlds__lco__V_14_14);
#line 258 "lco.m"
                        if (transform_hlds__lco__succeeded)
#line 258 "lco.m"
                          {
#line 4957 "transform_hlds.lco.c"
                            transform_hlds__lco__succeeded = (transform_hlds__lco__V_8_8 == transform_hlds__lco__V_15_15);
#line 258 "lco.m"
                            if (transform_hlds__lco__succeeded)
#line 4961 "transform_hlds.lco.c"
                              transform_hlds__lco__succeeded = (transform_hlds__lco__V_9_9 == transform_hlds__lco__V_16_16);
#line 258 "lco.m"
                          }
#line 258 "lco.m"
                      }
#line 258 "lco.m"
                  }
#line 258 "lco.m"
              }
#line 258 "lco.m"
          }
#line 258 "lco.m"
      }
#line 258 "lco.m"
    return transform_hlds__lco__succeeded;
#line 258 "lco.m"
  }
#line 258 "lco.m"
}

#line 269 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____lco_const_info_0_0(
#line 269 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 269 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 269 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 269 "lco.m"
{
#line 269 "lco.m"
  {
#line 269 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 269 "lco.m"
    MR_Integer transform_hlds__lco__CastX_27 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 269 "lco.m"
    MR_Integer transform_hlds__lco__CastY_28 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 269 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_27 == transform_hlds__lco__CastY_28);
#line 269 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 5006 "transform_hlds.lco.c"
      *transform_hlds__lco__HeadVar__1_1 = (MR_Integer) 0;
#line 269 "lco.m"
    else
#line 269 "lco.m"
      {
#line 269 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 269 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 269 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));
#line 269 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 3)));
#line 269 "lco.m"
        MR_Word transform_hlds__lco__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 4)));
#line 269 "lco.m"
        MR_Word transform_hlds__lco__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 5)));
#line 269 "lco.m"
        MR_Word transform_hlds__lco__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 6)));
#line 269 "lco.m"
        MR_Word transform_hlds__lco__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 7)));
#line 269 "lco.m"
        MR_Word transform_hlds__lco__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
#line 269 "lco.m"
        MR_Word transform_hlds__lco__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 269 "lco.m"
        MR_Word transform_hlds__lco__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 2)));
#line 269 "lco.m"
        MR_Word transform_hlds__lco__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 3)));
#line 269 "lco.m"
        MR_Word transform_hlds__lco__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 4)));
#line 269 "lco.m"
        MR_Word transform_hlds__lco__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 5)));
#line 269 "lco.m"
        MR_Word transform_hlds__lco__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 6)));
#line 269 "lco.m"
        MR_Word transform_hlds__lco__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 7)));
#line 269 "lco.m"
        MR_Word transform_hlds__lco__V_20_20;

#line 269 "lco.m"
        {
#line 269 "lco.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[0], &transform_hlds__lco__V_20_20, ((MR_Box) (transform_hlds__lco__V_4_4)), ((MR_Box) (transform_hlds__lco__V_12_12)));
        }
#line 5052 "transform_hlds.lco.c"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_20_20 == (MR_Integer) 0);
#line 269 "lco.m"
        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 269 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 269 "lco.m"
          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_20_20;
#line 269 "lco.m"
        else
#line 269 "lco.m"
          {
#line 269 "lco.m"
            MR_Word transform_hlds__lco__V_21_21;

#line 269 "lco.m"
            {
#line 269 "lco.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[8], &transform_hlds__lco__V_21_21, ((MR_Box) (transform_hlds__lco__V_5_5)), ((MR_Box) (transform_hlds__lco__V_13_13)));
            }
#line 5072 "transform_hlds.lco.c"
            transform_hlds__lco__succeeded = (transform_hlds__lco__V_21_21 == (MR_Integer) 0);
#line 269 "lco.m"
            transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 269 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 269 "lco.m"
              *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_21_21;
#line 269 "lco.m"
            else
#line 269 "lco.m"
              {
#line 269 "lco.m"
                MR_Word transform_hlds__lco__V_22_22;

#line 269 "lco.m"
                {
#line 269 "lco.m"
                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__lco__V_22_22, transform_hlds__lco__V_6_6, transform_hlds__lco__V_14_14);
                }
#line 5092 "transform_hlds.lco.c"
                transform_hlds__lco__succeeded = (transform_hlds__lco__V_22_22 == (MR_Integer) 0);
#line 269 "lco.m"
                transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 269 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 269 "lco.m"
                  *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_22_22;
#line 269 "lco.m"
                else
#line 269 "lco.m"
                  {
#line 269 "lco.m"
                    MR_Word transform_hlds__lco__V_23_23;

#line 269 "lco.m"
                    {
#line 269 "lco.m"
                      hlds__hlds_pred____Compare____pred_info_0_0(&transform_hlds__lco__V_23_23, transform_hlds__lco__V_7_7, transform_hlds__lco__V_15_15);
                    }
#line 5112 "transform_hlds.lco.c"
                    transform_hlds__lco__succeeded = (transform_hlds__lco__V_23_23 == (MR_Integer) 0);
#line 269 "lco.m"
                    transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 269 "lco.m"
                    if (transform_hlds__lco__succeeded)
#line 269 "lco.m"
                      *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_23_23;
#line 269 "lco.m"
                    else
#line 269 "lco.m"
                      {
#line 269 "lco.m"
                        MR_Word transform_hlds__lco__V_24_24;

#line 269 "lco.m"
                        {
#line 269 "lco.m"
                          hlds__hlds_pred____Compare____proc_info_0_0(&transform_hlds__lco__V_24_24, transform_hlds__lco__V_8_8, transform_hlds__lco__V_16_16);
                        }
#line 5132 "transform_hlds.lco.c"
                        transform_hlds__lco__succeeded = (transform_hlds__lco__V_24_24 == (MR_Integer) 0);
#line 269 "lco.m"
                        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 269 "lco.m"
                        if (transform_hlds__lco__succeeded)
#line 269 "lco.m"
                          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_24_24;
#line 269 "lco.m"
                        else
#line 269 "lco.m"
                          {
#line 269 "lco.m"
                            MR_Word transform_hlds__lco__V_25_25;

#line 269 "lco.m"
                            {
#line 269 "lco.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[6], &transform_hlds__lco__V_25_25, ((MR_Box) (transform_hlds__lco__V_9_9)), ((MR_Box) (transform_hlds__lco__V_17_17)));
                            }
#line 5152 "transform_hlds.lco.c"
                            transform_hlds__lco__succeeded = (transform_hlds__lco__V_25_25 == (MR_Integer) 0);
#line 269 "lco.m"
                            transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 269 "lco.m"
                            if (transform_hlds__lco__succeeded)
#line 269 "lco.m"
                              *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_25_25;
#line 269 "lco.m"
                            else
#line 269 "lco.m"
                              {
#line 269 "lco.m"
                                MR_Word transform_hlds__lco__V_26_26;
#line 269 "lco.m"
                                MR_Integer transform_hlds__lco__V_37_37 = (MR_Integer) transform_hlds__lco__V_10_10;
#line 269 "lco.m"
                                MR_Integer transform_hlds__lco__V_38_38 = (MR_Integer) transform_hlds__lco__V_18_18;

#line 269 "lco.m"
                                {
#line 269 "lco.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__lco__V_26_26, transform_hlds__lco__V_37_37, transform_hlds__lco__V_38_38);
                                }
#line 5176 "transform_hlds.lco.c"
                                transform_hlds__lco__succeeded = (transform_hlds__lco__V_26_26 == (MR_Integer) 0);
#line 269 "lco.m"
                                transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 269 "lco.m"
                                if (transform_hlds__lco__succeeded)
#line 269 "lco.m"
                                  *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_26_26;
#line 269 "lco.m"
                                else
#line 269 "lco.m"
                                  {
#line 269 "lco.m"
                                    MR_Integer transform_hlds__lco__V_39_39 = (MR_Integer) transform_hlds__lco__V_11_11;
#line 269 "lco.m"
                                    MR_Integer transform_hlds__lco__V_40_40 = (MR_Integer) transform_hlds__lco__V_19_19;

#line 269 "lco.m"
                                    {
#line 269 "lco.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__V_39_39, transform_hlds__lco__V_40_40);
#line 269 "lco.m"
                                      return;
                                    }
#line 269 "lco.m"
                                  }
#line 269 "lco.m"
                              }
#line 269 "lco.m"
                          }
#line 269 "lco.m"
                      }
#line 269 "lco.m"
                  }
#line 269 "lco.m"
              }
#line 269 "lco.m"
          }
#line 269 "lco.m"
      }
#line 269 "lco.m"
  }
#line 269 "lco.m"
}

#line 269 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_const_info_0_0(
#line 269 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 269 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 269 "lco.m"
{
#line 269 "lco.m"
  {
#line 269 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 269 "lco.m"
    MR_Integer transform_hlds__lco__CastX_19 = (MR_Integer) transform_hlds__lco__HeadVar__1_1;
#line 269 "lco.m"
    MR_Integer transform_hlds__lco__CastY_20 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;

#line 269 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_19 == transform_hlds__lco__CastY_20);
#line 269 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 269 "lco.m"
      transform_hlds__lco__succeeded = MR_TRUE;
#line 269 "lco.m"
    else
#line 269 "lco.m"
      {
#line 269 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_22_22;
#line 269 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_26_26;
#line 269 "lco.m"
        MR_Word transform_hlds__lco__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 269 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 269 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 2)));
#line 269 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 3)));
#line 269 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 4)));
#line 269 "lco.m"
        MR_Word transform_hlds__lco__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 5)));
#line 269 "lco.m"
        MR_Word transform_hlds__lco__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 6)));
#line 269 "lco.m"
        MR_Word transform_hlds__lco__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 7)));
#line 269 "lco.m"
        MR_Word transform_hlds__lco__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 269 "lco.m"
        MR_Word transform_hlds__lco__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 269 "lco.m"
        MR_Word transform_hlds__lco__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));
#line 269 "lco.m"
        MR_Word transform_hlds__lco__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 3)));
#line 269 "lco.m"
        MR_Word transform_hlds__lco__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 4)));
#line 269 "lco.m"
        MR_Word transform_hlds__lco__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 5)));
#line 269 "lco.m"
        MR_Word transform_hlds__lco__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 6)));
#line 269 "lco.m"
        MR_Word transform_hlds__lco__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 7)));

#line 5286 "transform_hlds.lco.c"
        {
#line 5288 "transform_hlds.lco.c"
          transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[0], ((MR_Box) (transform_hlds__lco__V_3_3)), ((MR_Box) (transform_hlds__lco__V_11_11)));
        }
#line 269 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 269 "lco.m"
          {
#line 5295 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_22_22 = (MR_Word) &transform_hlds__lco_scalar_common_1[8];
#line 5297 "transform_hlds.lco.c"
            {
#line 5299 "transform_hlds.lco.c"
              transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_22_22, ((MR_Box) (transform_hlds__lco__V_4_4)), ((MR_Box) (transform_hlds__lco__V_12_12)));
            }
#line 269 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 269 "lco.m"
              {
#line 5306 "transform_hlds.lco.c"
                {
#line 5308 "transform_hlds.lco.c"
                  transform_hlds__lco__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__lco__V_5_5, transform_hlds__lco__V_13_13);
                }
#line 269 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 269 "lco.m"
                  {
#line 5315 "transform_hlds.lco.c"
                    {
#line 5317 "transform_hlds.lco.c"
                      transform_hlds__lco__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(transform_hlds__lco__V_6_6, transform_hlds__lco__V_14_14);
                    }
#line 269 "lco.m"
                    if (transform_hlds__lco__succeeded)
#line 269 "lco.m"
                      {
#line 5324 "transform_hlds.lco.c"
                        {
#line 5326 "transform_hlds.lco.c"
                          transform_hlds__lco__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(transform_hlds__lco__V_7_7, transform_hlds__lco__V_15_15);
                        }
#line 269 "lco.m"
                        if (transform_hlds__lco__succeeded)
#line 269 "lco.m"
                          {
#line 5333 "transform_hlds.lco.c"
                            transform_hlds__lco__TypeInfo_26_26 = (MR_Word) &transform_hlds__lco_scalar_common_1[6];
#line 5335 "transform_hlds.lco.c"
                            {
#line 5337 "transform_hlds.lco.c"
                              transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_26_26, ((MR_Box) (transform_hlds__lco__V_8_8)), ((MR_Box) (transform_hlds__lco__V_16_16)));
                            }
#line 269 "lco.m"
                            if (transform_hlds__lco__succeeded)
#line 269 "lco.m"
                              {
#line 5344 "transform_hlds.lco.c"
                                transform_hlds__lco__succeeded = (transform_hlds__lco__V_9_9 == transform_hlds__lco__V_17_17);
#line 269 "lco.m"
                                if (transform_hlds__lco__succeeded)
#line 5348 "transform_hlds.lco.c"
                                  transform_hlds__lco__succeeded = (transform_hlds__lco__V_10_10 == transform_hlds__lco__V_18_18);
#line 269 "lco.m"
                              }
#line 269 "lco.m"
                          }
#line 269 "lco.m"
                      }
#line 269 "lco.m"
                  }
#line 269 "lco.m"
              }
#line 269 "lco.m"
          }
#line 269 "lco.m"
      }
#line 269 "lco.m"
    return transform_hlds__lco__succeeded;
#line 269 "lco.m"
  }
#line 269 "lco.m"
}

#line 237 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____field_id_0_0(
#line 237 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 237 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 237 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 237 "lco.m"
{
#line 237 "lco.m"
  {
#line 237 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 237 "lco.m"
    MR_Integer transform_hlds__lco__CastX_12 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 237 "lco.m"
    MR_Integer transform_hlds__lco__CastY_13 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 237 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_12 == transform_hlds__lco__CastY_13);
#line 237 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 5395 "transform_hlds.lco.c"
      *transform_hlds__lco__HeadVar__1_1 = (MR_Integer) 0;
#line 237 "lco.m"
    else
#line 237 "lco.m"
      {
#line 237 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 237 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 237 "lco.m"
        MR_Integer transform_hlds__lco__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));
#line 237 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
#line 237 "lco.m"
        MR_Word transform_hlds__lco__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 237 "lco.m"
        MR_Integer transform_hlds__lco__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 2)));
#line 237 "lco.m"
        MR_Word transform_hlds__lco__V_10_10;

#line 237 "lco.m"
        {
#line 237 "lco.m"
          parse_tree__prog_data____Compare____mer_type_0_0(&transform_hlds__lco__V_10_10, transform_hlds__lco__V_4_4, transform_hlds__lco__V_7_7);
        }
#line 5421 "transform_hlds.lco.c"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_10_10 == (MR_Integer) 0);
#line 237 "lco.m"
        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 237 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 237 "lco.m"
          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_10_10;
#line 237 "lco.m"
        else
#line 237 "lco.m"
          {
#line 237 "lco.m"
            MR_Word transform_hlds__lco__V_11_11;

#line 237 "lco.m"
            {
#line 237 "lco.m"
              parse_tree__prog_data____Compare____cons_id_0_0(&transform_hlds__lco__V_11_11, transform_hlds__lco__V_5_5, transform_hlds__lco__V_8_8);
            }
#line 5441 "transform_hlds.lco.c"
            transform_hlds__lco__succeeded = (transform_hlds__lco__V_11_11 == (MR_Integer) 0);
#line 237 "lco.m"
            transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 237 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 237 "lco.m"
              *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_11_11;
#line 237 "lco.m"
            else
#line 237 "lco.m"
              {
#line 237 "lco.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__V_6_6, transform_hlds__lco__V_9_9);
#line 237 "lco.m"
                return;
              }
#line 237 "lco.m"
          }
#line 237 "lco.m"
      }
#line 237 "lco.m"
  }
#line 237 "lco.m"
}

#line 237 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____field_id_0_0(
#line 237 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 237 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 237 "lco.m"
{
#line 237 "lco.m"
  {
#line 237 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 237 "lco.m"
    MR_Integer transform_hlds__lco__CastX_9 = (MR_Integer) transform_hlds__lco__HeadVar__1_1;
#line 237 "lco.m"
    MR_Integer transform_hlds__lco__CastY_10 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;

#line 237 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_9 == transform_hlds__lco__CastY_10);
#line 237 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 237 "lco.m"
      transform_hlds__lco__succeeded = MR_TRUE;
#line 237 "lco.m"
    else
#line 237 "lco.m"
      {
#line 237 "lco.m"
        MR_Word transform_hlds__lco__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 237 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 237 "lco.m"
        MR_Integer transform_hlds__lco__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 2)));
#line 237 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 237 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 237 "lco.m"
        MR_Integer transform_hlds__lco__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));

#line 5508 "transform_hlds.lco.c"
        {
#line 5510 "transform_hlds.lco.c"
          transform_hlds__lco__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__lco__V_3_3, transform_hlds__lco__V_6_6);
        }
#line 237 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 237 "lco.m"
          {
#line 5517 "transform_hlds.lco.c"
            {
#line 5519 "transform_hlds.lco.c"
              transform_hlds__lco__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__lco__V_4_4, transform_hlds__lco__V_7_7);
            }
#line 237 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 5524 "transform_hlds.lco.c"
              transform_hlds__lco__succeeded = (transform_hlds__lco__V_5_5 == transform_hlds__lco__V_8_8);
#line 237 "lco.m"
          }
#line 237 "lco.m"
      }
#line 237 "lco.m"
    return transform_hlds__lco__succeeded;
#line 237 "lco.m"
  }
#line 237 "lco.m"
}

#line 254 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____allow_float_addr_0_0(
#line 254 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 254 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 254 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 254 "lco.m"
{
#line 254 "lco.m"
  {
#line 254 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 254 "lco.m"
    MR_Integer transform_hlds__lco__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 254 "lco.m"
    MR_Integer transform_hlds__lco__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 254 "lco.m"
    {
#line 254 "lco.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__Cast_HeadVar1_4, transform_hlds__lco__Cast_HeadVar2_5);
#line 254 "lco.m"
      return;
    }
#line 254 "lco.m"
  }
#line 254 "lco.m"
}

#line 254 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____allow_float_addr_0_0(
#line 254 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_1,
#line 254 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 254 "lco.m"
{
#line 5578 "transform_hlds.lco.c"
  {
#line 5580 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded = (transform_hlds__lco__HeadVar__2_1 == transform_hlds__lco__HeadVar__2_2);

#line 5583 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 5585 "transform_hlds.lco.c"
  }
#line 254 "lco.m"
}

#line 1703 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_unification_args_8_p_0(
#line 1703 "lco.m"
  MR_Word transform_hlds__lco__GroundVar_9,
#line 1703 "lco.m"
  MR_Integer transform_hlds__lco__TargetArgNum_10,
#line 1703 "lco.m"
  MR_Integer transform_hlds__lco__CurArgNum_11,
#line 1703 "lco.m"
  MR_Word transform_hlds__lco__ArgTypes_12,
#line 1703 "lco.m"
  MR_Word * transform_hlds__lco__ArgVars_13,
#line 1703 "lco.m"
  MR_Word * transform_hlds__lco__ArgModes_14,
#line 1703 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22,
#line 1703 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_23)
#line 1703 "lco.m"
{
#line 1710 "lco.m"
  {
#line 1710 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1710 "lco.m"
    if ((transform_hlds__lco__ArgTypes_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1710 "lco.m"
      {
#line 1711 "lco.m"
        *transform_hlds__lco__ArgVars_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1712 "lco.m"
        *transform_hlds__lco__ArgModes_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1710 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_23 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22;
#line 1710 "lco.m"
      }
#line 1710 "lco.m"
    else
#line 1714 "lco.m"
      {
#line 1714 "lco.m"
        MR_Word transform_hlds__lco__ArgType_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__ArgTypes_12, (MR_Integer) 0)));
#line 1714 "lco.m"
        MR_Word transform_hlds__lco__ArgTypesTail_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__ArgTypes_12, (MR_Integer) 1)));
#line 1714 "lco.m"
        MR_Word transform_hlds__lco__ArgVarsTail_18;
#line 1714 "lco.m"
        MR_Word transform_hlds__lco__ArgModesTail_19;
#line 1714 "lco.m"
        MR_Word transform_hlds__lco__Var_20;
#line 1714 "lco.m"
        MR_Word transform_hlds__lco__UniMode_21;
#line 1714 "lco.m"
        MR_Integer transform_hlds__lco__V_24_24 = (transform_hlds__lco__CurArgNum_11 + (MR_Integer) 1);
#line 1714 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_25_25;

#line 1715 "lco.m"
        {
#line 1715 "lco.m"
          transform_hlds__lco__make_unification_args_8_p_0(transform_hlds__lco__GroundVar_9, transform_hlds__lco__TargetArgNum_10, transform_hlds__lco__V_24_24, transform_hlds__lco__ArgTypesTail_17, &transform_hlds__lco__ArgVarsTail_18, &transform_hlds__lco__ArgModesTail_19, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_25_25);
        }
#line 1728 "lco.m"
        transform_hlds__lco__succeeded = (transform_hlds__lco__CurArgNum_11 == transform_hlds__lco__TargetArgNum_10);
#line 1731 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1729 "lco.m"
          {
#line 1729 "lco.m"
            MR_Word transform_hlds__lco__V_37_37;
#line 1729 "lco.m"
            MR_Word transform_hlds__lco__V_38_38;
#line 1729 "lco.m"
            MR_Word transform_hlds__lco__V_39_39;
#line 1729 "lco.m"
            MR_Word transform_hlds__lco__V_40_40;
#line 1729 "lco.m"
            MR_Word transform_hlds__lco__V_41_41;
#line 1729 "lco.m"
            MR_Word transform_hlds__lco__V_42_42;

#line 1729 "lco.m"
            transform_hlds__lco__Var_20 = transform_hlds__lco__GroundVar_9;
#line 1730 "lco.m"
            {
#line 1730 "lco.m"
              transform_hlds__lco__V_38_38 = parse_tree__prog_mode__free_inst_0_f_0();
            }
#line 1730 "lco.m"
            {
#line 1730 "lco.m"
              transform_hlds__lco__V_39_39 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
#line 1730 "lco.m"
            {
#line 1730 "lco.m"
              transform_hlds__lco__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1730 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_37_37, 0) = ((MR_Box) (transform_hlds__lco__V_38_38));
#line 1730 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_37_37, 1) = ((MR_Box) (transform_hlds__lco__V_39_39));
#line 1730 "lco.m"
            }
#line 1730 "lco.m"
            {
#line 1730 "lco.m"
              transform_hlds__lco__V_41_41 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
#line 1730 "lco.m"
            {
#line 1730 "lco.m"
              transform_hlds__lco__V_42_42 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
#line 1730 "lco.m"
            {
#line 1730 "lco.m"
              transform_hlds__lco__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1730 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_40_40, 0) = ((MR_Box) (transform_hlds__lco__V_41_41));
#line 1730 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_40_40, 1) = ((MR_Box) (transform_hlds__lco__V_42_42));
#line 1730 "lco.m"
            }
#line 1730 "lco.m"
            {
#line 1730 "lco.m"
              transform_hlds__lco__UniMode_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1730 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_21, 0) = ((MR_Box) (transform_hlds__lco__V_37_37));
#line 1730 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_21, 1) = ((MR_Box) (transform_hlds__lco__V_40_40));
#line 1730 "lco.m"
            }
#line 1729 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_ProcInfo_23 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_25_25;
#line 1729 "lco.m"
          }
#line 1731 "lco.m"
        else
#line 1733 "lco.m"
          {
#line 1733 "lco.m"
            MR_Word transform_hlds__lco__V_45_45;
#line 1733 "lco.m"
            MR_Word transform_hlds__lco__V_46_46;
#line 1733 "lco.m"
            MR_Word transform_hlds__lco__V_47_47;
#line 1733 "lco.m"
            MR_Word transform_hlds__lco__V_48_48;
#line 1733 "lco.m"
            MR_Word transform_hlds__lco__V_49_49;
#line 1733 "lco.m"
            MR_Word transform_hlds__lco__V_50_50;

#line 1733 "lco.m"
            {
#line 1733 "lco.m"
              hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__lco__ArgType_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__lco__Var_20, transform_hlds__lco__STATE_VARIABLE_ProcInfo_25_25, transform_hlds__lco__STATE_VARIABLE_ProcInfo_23);
            }
#line 1734 "lco.m"
            {
#line 1734 "lco.m"
              transform_hlds__lco__V_46_46 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
#line 1734 "lco.m"
            {
#line 1734 "lco.m"
              transform_hlds__lco__V_47_47 = parse_tree__prog_mode__free_inst_0_f_0();
            }
#line 1734 "lco.m"
            {
#line 1734 "lco.m"
              transform_hlds__lco__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1734 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_45_45, 0) = ((MR_Box) (transform_hlds__lco__V_46_46));
#line 1734 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_45_45, 1) = ((MR_Box) (transform_hlds__lco__V_47_47));
#line 1734 "lco.m"
            }
#line 1734 "lco.m"
            {
#line 1734 "lco.m"
              transform_hlds__lco__V_49_49 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
#line 1734 "lco.m"
            {
#line 1734 "lco.m"
              transform_hlds__lco__V_50_50 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
#line 1734 "lco.m"
            {
#line 1734 "lco.m"
              transform_hlds__lco__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1734 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_48_48, 0) = ((MR_Box) (transform_hlds__lco__V_49_49));
#line 1734 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_48_48, 1) = ((MR_Box) (transform_hlds__lco__V_50_50));
#line 1734 "lco.m"
            }
#line 1734 "lco.m"
            {
#line 1734 "lco.m"
              transform_hlds__lco__UniMode_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1734 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_21, 0) = ((MR_Box) (transform_hlds__lco__V_45_45));
#line 1734 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_21, 1) = ((MR_Box) (transform_hlds__lco__V_48_48));
#line 1734 "lco.m"
            }
#line 1733 "lco.m"
          }
#line 1719 "lco.m"
        {
#line 1719 "lco.m"
          MR_Word base;
#line 1719 "lco.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1719 "lco.m"
          *transform_hlds__lco__ArgVars_13 = base;
#line 1719 "lco.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Var_20));
#line 1719 "lco.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__ArgVarsTail_18));
#line 1719 "lco.m"
        }
#line 1720 "lco.m"
        {
#line 1720 "lco.m"
          MR_Word base;
#line 1720 "lco.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1720 "lco.m"
          *transform_hlds__lco__ArgModes_14 = base;
#line 1720 "lco.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__UniMode_21));
#line 1720 "lco.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__ArgModesTail_19));
#line 1720 "lco.m"
        }
#line 1714 "lco.m"
      }
#line 1710 "lco.m"
  }
#line 1703 "lco.m"
}

#line 1660 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_store_goal_6_p_0(
#line 1660 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_7,
#line 1660 "lco.m"
  MR_Word transform_hlds__lco__InstMap_8,
#line 1660 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 1660 "lco.m"
  MR_Word * transform_hlds__lco__Goal_11,
#line 1660 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_31,
#line 1660 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_32)
#line 1660 "lco.m"
{
#line 1665 "lco.m"
  {
#line 1665 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1665 "lco.m"
    MR_Word transform_hlds__lco__GroundVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
#line 1665 "lco.m"
    MR_Word transform_hlds__lco__StoreTarget_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 1665 "lco.m"
    MR_Word transform_hlds__lco__AddrVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__StoreTarget_10, (MR_Integer) 0)));
#line 1665 "lco.m"
    MR_Word transform_hlds__lco__MaybeFieldId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__StoreTarget_10, (MR_Integer) 1)));

#line 1676 "lco.m"
    if ((transform_hlds__lco__MaybeFieldId_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1669 "lco.m"
      {
#line 1669 "lco.m"
        MR_Word transform_hlds__lco__V_49_49;
#line 1669 "lco.m"
        MR_Word transform_hlds__lco__V_55_55;
#line 1669 "lco.m"
        MR_Word transform_hlds__lco__V_57_57;
#line 1669 "lco.m"
        MR_Word transform_hlds__lco__V_58_58;
#line 1669 "lco.m"
        MR_Word transform_hlds__lco__V_59_59;

#line 1670 "lco.m"
        {
#line 1670 "lco.m"
          transform_hlds__lco__V_49_49 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
        }
#line 1673 "lco.m"
        {
#line 1673 "lco.m"
          transform_hlds__lco__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1673 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_59_59, 0) = ((MR_Box) (transform_hlds__lco__GroundVar_9));
#line 1673 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1673 "lco.m"
        }
#line 1673 "lco.m"
        {
#line 1673 "lco.m"
          transform_hlds__lco__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1673 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_55_55, 0) = ((MR_Box) (transform_hlds__lco__AddrVar_13));
#line 1673 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_55_55, 1) = ((MR_Box) (transform_hlds__lco__V_59_59));
#line 1673 "lco.m"
        }
#line 1674 "lco.m"
        {
#line 1674 "lco.m"
          transform_hlds__lco__V_57_57 = hlds__instmap__instmap_delta_bind_vars_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 1674 "lco.m"
        {
#line 1674 "lco.m"
          transform_hlds__lco__V_58_58 = mercury__term__context_init_0_f_0();
        }
#line 1670 "lco.m"
        {
#line 1670 "lco.m"
          hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__lco__V_49_49, (MR_String) "store_at_ref_impure", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__lco__V_55_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__lco__V_57_57, transform_hlds__lco__ModuleInfo_7, transform_hlds__lco__V_58_58, transform_hlds__lco__Goal_11);
        }
#line 1669 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_32 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_31;
#line 1669 "lco.m"
      }
#line 1676 "lco.m"
    else
#line 1678 "lco.m"
      {
#line 1678 "lco.m"
        MR_Word transform_hlds__lco__AddrVarType_15;
#line 1678 "lco.m"
        MR_Word transform_hlds__lco__ConsId_16;
#line 1678 "lco.m"
        MR_Integer transform_hlds__lco__ArgNum_17;
#line 1678 "lco.m"
        MR_Word transform_hlds__lco__ArgTypes_18;
#line 1678 "lco.m"
        MR_Word transform_hlds__lco__ArgVars_19;
#line 1678 "lco.m"
        MR_Word transform_hlds__lco__ArgModes_20;
#line 1678 "lco.m"
        MR_Word transform_hlds__lco__RHS_21;
#line 1678 "lco.m"
        MR_Word transform_hlds__lco__AddrVarInst0_22;
#line 1678 "lco.m"
        MR_Word transform_hlds__lco__AddrVarInst_23;
#line 1678 "lco.m"
        MR_Word transform_hlds__lco__UniMode_24;
#line 1678 "lco.m"
        MR_Word transform_hlds__lco__Unification_25;
#line 1678 "lco.m"
        MR_Word transform_hlds__lco__GoalExpr_27;
#line 1678 "lco.m"
        MR_Word transform_hlds__lco__GoalInfo0_28;
#line 1678 "lco.m"
        MR_Word transform_hlds__lco__GoalInfo1_29;
#line 1678 "lco.m"
        MR_Word transform_hlds__lco__GoalInfo_30;
#line 1678 "lco.m"
        MR_Word transform_hlds__lco__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__MaybeFieldId_14, (MR_Integer) 0)));
#line 1678 "lco.m"
        MR_Word transform_hlds__lco__V_37_37;
#line 1678 "lco.m"
        MR_Word transform_hlds__lco__V_38_38;
#line 1678 "lco.m"
        MR_Word transform_hlds__lco__V_39_39;
#line 1678 "lco.m"
        MR_Word transform_hlds__lco__V_40_40;
#line 1678 "lco.m"
        MR_Word transform_hlds__lco__V_41_41;
#line 1678 "lco.m"
        MR_Word transform_hlds__lco__V_48_48;

#line 1678 "lco.m"
        transform_hlds__lco__AddrVarType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_33_33, (MR_Integer) 0)));
#line 1678 "lco.m"
        transform_hlds__lco__ConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_33_33, (MR_Integer) 1)));
#line 1678 "lco.m"
        transform_hlds__lco__ArgNum_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_33_33, (MR_Integer) 2)));
#line 1679 "lco.m"
        {
#line 1679 "lco.m"
          check_hlds__type_util__get_cons_id_arg_types_4_p_0(transform_hlds__lco__ModuleInfo_7, transform_hlds__lco__AddrVarType_15, transform_hlds__lco__ConsId_16, &transform_hlds__lco__ArgTypes_18);
        }
#line 1680 "lco.m"
        {
#line 1680 "lco.m"
          transform_hlds__lco__make_unification_args_8_p_0(transform_hlds__lco__GroundVar_9, transform_hlds__lco__ArgNum_17, (MR_Integer) 1, transform_hlds__lco__ArgTypes_18, &transform_hlds__lco__ArgVars_19, &transform_hlds__lco__ArgModes_20, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_31, transform_hlds__lco__STATE_VARIABLE_ProcInfo_32);
        }
#line 1683 "lco.m"
        {
#line 1683 "lco.m"
          transform_hlds__lco__RHS_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1683 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS_21, 0) = ((MR_Box) (transform_hlds__lco__ConsId_16));
#line 1683 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS_21, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1683 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS_21, 2) = ((MR_Box) (transform_hlds__lco__ArgVars_19));
#line 1683 "lco.m"
        }
#line 1685 "lco.m"
        {
#line 1685 "lco.m"
          hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__lco__InstMap_8, transform_hlds__lco__AddrVar_13, &transform_hlds__lco__AddrVarInst0_22);
        }
#line 1686 "lco.m"
        {
#line 1686 "lco.m"
          check_hlds__inst_match__inst_expand_3_p_0(transform_hlds__lco__ModuleInfo_7, transform_hlds__lco__AddrVarInst0_22, &transform_hlds__lco__AddrVarInst_23);
        }
#line 1687 "lco.m"
        {
#line 1687 "lco.m"
          transform_hlds__lco__V_38_38 = parse_tree__prog_mode__ground_inst_0_f_0();
        }
#line 1687 "lco.m"
        {
#line 1687 "lco.m"
          transform_hlds__lco__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1687 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_37_37, 0) = ((MR_Box) (transform_hlds__lco__AddrVarInst_23));
#line 1687 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_37_37, 1) = ((MR_Box) (transform_hlds__lco__V_38_38));
#line 1687 "lco.m"
        }
#line 1687 "lco.m"
        {
#line 1687 "lco.m"
          transform_hlds__lco__V_40_40 = parse_tree__prog_mode__ground_inst_0_f_0();
        }
#line 1687 "lco.m"
        {
#line 1687 "lco.m"
          transform_hlds__lco__V_41_41 = parse_tree__prog_mode__ground_inst_0_f_0();
        }
#line 1687 "lco.m"
        {
#line 1687 "lco.m"
          transform_hlds__lco__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1687 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_39_39, 0) = ((MR_Box) (transform_hlds__lco__V_40_40));
#line 1687 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_39_39, 1) = ((MR_Box) (transform_hlds__lco__V_41_41));
#line 1687 "lco.m"
        }
#line 1687 "lco.m"
        {
#line 1687 "lco.m"
          transform_hlds__lco__UniMode_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1687 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_24, 0) = ((MR_Box) (transform_hlds__lco__V_37_37));
#line 1687 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_24, 1) = ((MR_Box) (transform_hlds__lco__V_39_39));
#line 1687 "lco.m"
        }
#line 1689 "lco.m"
        {
#line 1689 "lco.m"
          transform_hlds__lco__Unification_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1689 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Unification_25, 0) = ((MR_Box) (transform_hlds__lco__AddrVar_13));
#line 1689 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Unification_25, 1) = ((MR_Box) (transform_hlds__lco__ConsId_16));
#line 1689 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Unification_25, 2) = ((MR_Box) (transform_hlds__lco__ArgVars_19));
#line 1689 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Unification_25, 3) = ((MR_Box) (transform_hlds__lco__ArgModes_20));
#line 1689 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Unification_25, 4) = ((MR_Box) ((MR_Integer) 1));
#line 1689 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Unification_25, 5) = ((MR_Box) ((MR_Integer) 1));
#line 1689 "lco.m"
        }
#line 1693 "lco.m"
        {
#line 1693 "lco.m"
          transform_hlds__lco__GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1693 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_27, 0) = ((MR_Box) (transform_hlds__lco__AddrVar_13));
#line 1693 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_27, 1) = ((MR_Box) (transform_hlds__lco__RHS_21));
#line 1693 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_27, 2) = ((MR_Box) (transform_hlds__lco__UniMode_24));
#line 1693 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_27, 3) = ((MR_Box) (transform_hlds__lco__Unification_25));
#line 1693 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_27, 4) = ((MR_Box) (&transform_hlds__lco_scalar_common_1[12]));
#line 1693 "lco.m"
        }
#line 1695 "lco.m"
        {
#line 1695 "lco.m"
          hlds__hlds_goal__goal_info_init_1_p_0(&transform_hlds__lco__GoalInfo0_28);
        }
#line 1696 "lco.m"
        {
#line 1696 "lco.m"
          hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, transform_hlds__lco__GoalInfo0_28, &transform_hlds__lco__GoalInfo1_29);
        }
#line 1697 "lco.m"
        {
#line 1697 "lco.m"
          transform_hlds__lco__V_48_48 = hlds__instmap__instmap_delta_bind_var_1_f_0(transform_hlds__lco__AddrVar_13);
        }
#line 1697 "lco.m"
        {
#line 1697 "lco.m"
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__lco__V_48_48, transform_hlds__lco__GoalInfo1_29, &transform_hlds__lco__GoalInfo_30);
        }
#line 1700 "lco.m"
        {
#line 1700 "lco.m"
          MR_Word base;
#line 1700 "lco.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1700 "lco.m"
          *transform_hlds__lco__Goal_11 = base;
#line 1700 "lco.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__GoalExpr_27));
#line 1700 "lco.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__GoalInfo_30));
#line 1700 "lco.m"
        }
#line 1678 "lco.m"
      }
#line 1665 "lco.m"
  }
#line 1660 "lco.m"
}

#line 1635 "lco.m"
static void MR_CALL 
transform_hlds__lco__grounding_to_variant_args_5_p_0(
#line 1635 "lco.m"
  MR_Word transform_hlds__lco__GroundingVarToAddr_6,
#line 1635 "lco.m"
  MR_Integer transform_hlds__lco__OutArgNum_7,
#line 1635 "lco.m"
  MR_Word transform_hlds__lco__OutArgs_8,
#line 1635 "lco.m"
  MR_Word * transform_hlds__lco__Subst_9,
#line 1635 "lco.m"
  MR_Word * transform_hlds__lco__VariantArgs_10)
#line 1635 "lco.m"
{
#line 1642 "lco.m"
  {
#line 1642 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1642 "lco.m"
    if ((transform_hlds__lco__OutArgs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1642 "lco.m"
      {
#line 1642 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_21_21 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];

#line 1643 "lco.m"
        {
#line 1643 "lco.m"
          *transform_hlds__lco__Subst_9 = mercury__map__init_0_f_0(transform_hlds__lco__TypeInfo_21_21, transform_hlds__lco__TypeInfo_21_21);
        }
#line 1644 "lco.m"
        *transform_hlds__lco__VariantArgs_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1642 "lco.m"
      }
#line 1642 "lco.m"
    else
#line 1646 "lco.m"
      {
#line 1646 "lco.m"
        MR_Word transform_hlds__lco__OutArg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__OutArgs_8, (MR_Integer) 0)));
#line 1646 "lco.m"
        MR_Word transform_hlds__lco__OutArgsTail_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__OutArgs_8, (MR_Integer) 1)));
#line 1646 "lco.m"
        MR_Word transform_hlds__lco__Subst0_13;
#line 1646 "lco.m"
        MR_Word transform_hlds__lco__VariantArgsTail_14;
#line 1646 "lco.m"
        MR_Integer transform_hlds__lco__V_19_19 = (transform_hlds__lco__OutArgNum_7 + (MR_Integer) 1);
#line 1654 "lco.m"
        MR_Word transform_hlds__lco__StoreTarget_15;
#line 1649 "lco.m"
        MR_Box transform_hlds__lco__conv0_StoreTarget_15;

#line 1647 "lco.m"
        {
#line 1647 "lco.m"
          transform_hlds__lco__grounding_to_variant_args_5_p_0(transform_hlds__lco__GroundingVarToAddr_6, transform_hlds__lco__V_19_19, transform_hlds__lco__OutArgsTail_12, &transform_hlds__lco__Subst0_13, &transform_hlds__lco__VariantArgsTail_14);
        }
#line 1649 "lco.m"
        {
#line 1649 "lco.m"
          transform_hlds__lco__succeeded = mercury__assoc_list__search_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[3], (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0, transform_hlds__lco__GroundingVarToAddr_6, ((MR_Box) (transform_hlds__lco__OutArg_11)), &transform_hlds__lco__conv0_StoreTarget_15);
        }
#line 1649 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1649 "lco.m"
          {
#line 1649 "lco.m"
            transform_hlds__lco__StoreTarget_15 = ((MR_Word) transform_hlds__lco__conv0_StoreTarget_15);
#line 1649 "lco.m"
            transform_hlds__lco__succeeded = MR_TRUE;
#line 1649 "lco.m"
          }
#line 1654 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1650 "lco.m"
          {
#line 1650 "lco.m"
            MR_Word transform_hlds__lco__TypeInfo_24_24 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
#line 1650 "lco.m"
            MR_Word transform_hlds__lco__StoreArg_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__StoreTarget_15, (MR_Integer) 0)));
#line 1650 "lco.m"
            MR_Word transform_hlds__lco__MaybeFieldId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__StoreTarget_15, (MR_Integer) 1)));
#line 1650 "lco.m"
            MR_Word transform_hlds__lco__VariantArg_18;

#line 1651 "lco.m"
            {
#line 1651 "lco.m"
              mercury__map__det_insert_4_p_0(transform_hlds__lco__TypeInfo_24_24, transform_hlds__lco__TypeInfo_24_24, ((MR_Box) (transform_hlds__lco__OutArg_11)), ((MR_Box) (transform_hlds__lco__StoreArg_16)), transform_hlds__lco__Subst0_13, transform_hlds__lco__Subst_9);
            }
#line 1652 "lco.m"
            {
#line 1652 "lco.m"
              transform_hlds__lco__VariantArg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1652 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantArg_18, 0) = ((MR_Box) (transform_hlds__lco__OutArgNum_7));
#line 1652 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantArg_18, 1) = ((MR_Box) (transform_hlds__lco__MaybeFieldId_17));
#line 1652 "lco.m"
            }
#line 1653 "lco.m"
            {
#line 1653 "lco.m"
              MR_Word base;
#line 1653 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1653 "lco.m"
              *transform_hlds__lco__VariantArgs_10 = base;
#line 1653 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__VariantArg_18));
#line 1653 "lco.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__VariantArgsTail_14));
#line 1653 "lco.m"
            }
#line 1650 "lco.m"
          }
#line 1654 "lco.m"
        else
#line 1655 "lco.m"
          {
#line 1655 "lco.m"
            *transform_hlds__lco__Subst_9 = transform_hlds__lco__Subst0_13;
#line 1656 "lco.m"
            *transform_hlds__lco__VariantArgs_10 = transform_hlds__lco__VariantArgsTail_14;
#line 1655 "lco.m"
          }
#line 1646 "lco.m"
      }
#line 1642 "lco.m"
  }
#line 1635 "lco.m"
}

#line 1625 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__is_grounding_4_p_0(
#line 1625 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_5,
#line 1625 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_6,
#line 1625 "lco.m"
  MR_Word transform_hlds__lco__InstMap_7,
#line 1625 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__4_4)
#line 1625 "lco.m"
{
#line 1628 "lco.m"
  {
#line 1628 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1628 "lco.m"
    MR_Word transform_hlds__lco__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__4_4, (MR_Integer) 0)));
#line 1628 "lco.m"
    MR_Word transform_hlds__lco__Inst0_10;
#line 1628 "lco.m"
    MR_Word transform_hlds__lco__Inst_11;
#line 1628 "lco.m"
    MR_Word transform_hlds__lco___StoreTarget_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__4_4, (MR_Integer) 1)));

#line 1629 "lco.m"
    {
#line 1629 "lco.m"
      hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__lco__InstMap0_6, transform_hlds__lco__Var_8, &transform_hlds__lco__Inst0_10);
    }
#line 1630 "lco.m"
    {
#line 1630 "lco.m"
      transform_hlds__lco__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(transform_hlds__lco__ModuleInfo_5, transform_hlds__lco__Inst0_10);
    }
#line 1630 "lco.m"
    transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 1628 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 1628 "lco.m"
      {
#line 1631 "lco.m"
        {
#line 1631 "lco.m"
          transform_hlds__lco__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(transform_hlds__lco__InstMap_7);
        }
#line 1628 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1628 "lco.m"
          {
#line 1632 "lco.m"
            {
#line 1632 "lco.m"
              hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__lco__InstMap_7, transform_hlds__lco__Var_8, &transform_hlds__lco__Inst_11);
            }
#line 1633 "lco.m"
            {
#line 1633 "lco.m"
              return transform_hlds__lco__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(transform_hlds__lco__ModuleInfo_5, transform_hlds__lco__Inst_11);
            }
#line 1628 "lco.m"
          }
#line 1628 "lco.m"
      }
#line 1628 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1628 "lco.m"
  }
#line 1625 "lco.m"
}

#line 1610 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_2(
#line 1610 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1610 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1610 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2)
#line 1610 "lco.m"
{
#line 1610 "lco.m"
  {
#line 1610 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 1610 "lco.m"
    MR_Word transform_hlds__lco__conv0_HeadVar__2_70;

#line 1610 "lco.m"
    {
#line 1610 "lco.m"
      transform_hlds__lco__IntroducedFrom__pred__lco_transform_variant_plain_call__1610__1_2_p_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), &transform_hlds__lco__conv0_HeadVar__2_70);
    }
#line 1610 "lco.m"
    *transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__2_70));
#line 1610 "lco.m"
  }
#line 1610 "lco.m"
}

#line 1567 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_1(
#line 1567 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1567 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1)
#line 1567 "lco.m"
{
#line 1567 "lco.m"
  {
#line 1567 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1567 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

#line 1567 "lco.m"
    {
#line 1567 "lco.m"
      return transform_hlds__lco__succeeded = transform_hlds__lco__is_grounding_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
#line 1567 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1567 "lco.m"
  }
#line 1567 "lco.m"
}

#line 1558 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0(
#line 1558 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_12,
#line 1558 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_13,
#line 1558 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_14,
#line 1558 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_15,
#line 1558 "lco.m"
  MR_Word transform_hlds__lco__GoalExpr0_16,
#line 1558 "lco.m"
  MR_Word * transform_hlds__lco__GoalExpr_17,
#line 1558 "lco.m"
  MR_Word transform_hlds__lco__GoalInfo0_18,
#line 1558 "lco.m"
  MR_Word * transform_hlds__lco__GoalInfo_19,
#line 1558 "lco.m"
  MR_Word * transform_hlds__lco__Changed_20,
#line 1558 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_53,
#line 1558 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_54)
#line 1558 "lco.m"
{
#line 1565 "lco.m"
  {
#line 1565 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1565 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_65_65;
#line 1565 "lco.m"
    MR_Word transform_hlds__lco__InstMap1_22;
#line 1565 "lco.m"
    MR_Word transform_hlds__lco__GroundingVarToAddr_23;
#line 1565 "lco.m"
    MR_Word transform_hlds__lco__V_55_55;
#line 1565 "lco.m"
    MR_Word transform_hlds__lco__V_56_56;

#line 1566 "lco.m"
    {
#line 1566 "lco.m"
      transform_hlds__lco__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1566 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_55_55, 0) = ((MR_Box) (transform_hlds__lco__GoalExpr0_16));
#line 1566 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_55_55, 1) = ((MR_Box) (transform_hlds__lco__GoalInfo0_18));
#line 1566 "lco.m"
    }
#line 1566 "lco.m"
    {
#line 1566 "lco.m"
      hlds__goal_util__update_instmap_3_p_0(transform_hlds__lco__V_55_55, transform_hlds__lco__InstMap0_15, &transform_hlds__lco__InstMap1_22);
    }
#line 1567 "lco.m"
    {
#line 1567 "lco.m"
      transform_hlds__lco__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1567 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_56_56, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_6[1]));
#line 1567 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_56_56, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_1));
#line 1567 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1567 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_56_56, 3) = ((MR_Box) (transform_hlds__lco__ModuleInfo_12));
#line 1567 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_56_56, 4) = ((MR_Box) (transform_hlds__lco__InstMap0_15));
#line 1567 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_56_56, 5) = ((MR_Box) (transform_hlds__lco__InstMap1_22));
#line 1567 "lco.m"
    }
#line 6475 "transform_hlds.lco.c"
    transform_hlds__lco__TypeInfo_65_65 = (MR_Word) &transform_hlds__lco_scalar_common_2[6];
#line 1567 "lco.m"
    {
#line 1567 "lco.m"
      mercury__list__filter_3_p_0(transform_hlds__lco__TypeInfo_65_65, transform_hlds__lco__V_56_56, transform_hlds__lco__VarToAddr_14, &transform_hlds__lco__GroundingVarToAddr_23);
    }
#line 1574 "lco.m"
    if ((transform_hlds__lco__GroundingVarToAddr_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1570 "lco.m"
      {
#line 1571 "lco.m"
        *transform_hlds__lco__GoalExpr_17 = transform_hlds__lco__GoalExpr0_16;
#line 1572 "lco.m"
        *transform_hlds__lco__GoalInfo_19 = transform_hlds__lco__GoalInfo0_18;
#line 1573 "lco.m"
        *transform_hlds__lco__Changed_20 = (MR_Integer) 0;
#line 1570 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_54 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_53;
#line 1570 "lco.m"
      }
#line 1574 "lco.m"
    else
#line 1575 "lco.m"
      {
#line 1575 "lco.m"
        MR_Word transform_hlds__lco__CallPredId_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr0_16, (MR_Integer) 0)));
#line 1575 "lco.m"
        MR_Integer transform_hlds__lco__CallProcId_27 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr0_16, (MR_Integer) 1)));
#line 1575 "lco.m"
        MR_Word transform_hlds__lco__Args_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr0_16, (MR_Integer) 2)));
#line 1575 "lco.m"
        MR_Word transform_hlds__lco__Builtin_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr0_16, (MR_Integer) 3)));
#line 1575 "lco.m"
        MR_Word transform_hlds__lco__UnifyContext_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr0_16, (MR_Integer) 4)));
#line 1575 "lco.m"
        MR_Word transform_hlds__lco__SymName_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr0_16, (MR_Integer) 5)));
#line 1575 "lco.m"
        MR_Word transform_hlds__lco__CallPredProcId_32;
#line 1575 "lco.m"
        MR_Word transform_hlds__lco__CalleeProcInfo_33;
#line 1575 "lco.m"
        MR_Word transform_hlds__lco__VarTypes_34;
#line 1575 "lco.m"
        MR_Word transform_hlds__lco__CalleeArgModes_35;
#line 1618 "lco.m"
        MR_Word transform_hlds__lco__Subst_40;
#line 1618 "lco.m"
        MR_Word transform_hlds__lco__ExistingVariant_42;
#line 1587 "lco.m"
        MR_Word transform_hlds__lco__ExistingVariants_36;
#line 1587 "lco.m"
        MR_Word transform_hlds__lco__OutArgs_38;
#line 1587 "lco.m"
        MR_Word transform_hlds__lco__VariantArgs_41;
#line 1587 "lco.m"
        MR_Integer transform_hlds__lco__V_57_57;
#line 1588 "lco.m"
        MR_Word transform_hlds__lco___InArgs_37;
#line 1588 "lco.m"
        MR_Word transform_hlds__lco___UnusedArgs_39;

#line 1581 "lco.m"
        {
#line 1581 "lco.m"
          transform_hlds__lco__CallPredProcId_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1581 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__CallPredProcId_32, 0) = ((MR_Box) (transform_hlds__lco__CallPredId_26));
#line 1581 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__CallPredProcId_32, 1) = ((MR_Box) (transform_hlds__lco__CallProcId_27));
#line 1581 "lco.m"
        }
#line 1582 "lco.m"
        {
#line 1582 "lco.m"
          hlds__hlds_module__module_info_proc_info_4_p_0(transform_hlds__lco__ModuleInfo_12, transform_hlds__lco__CallPredId_26, transform_hlds__lco__CallProcId_27, &transform_hlds__lco__CalleeProcInfo_33);
        }
#line 1584 "lco.m"
        {
#line 1584 "lco.m"
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_53, &transform_hlds__lco__VarTypes_34);
        }
#line 1585 "lco.m"
        {
#line 1585 "lco.m"
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__lco__CalleeProcInfo_33, &transform_hlds__lco__CalleeArgModes_35);
        }
#line 1587 "lco.m"
        {
#line 1587 "lco.m"
          transform_hlds__lco__succeeded = mercury__multi_map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0, transform_hlds__lco__VariantMap_13, ((MR_Box) (transform_hlds__lco__CallPredProcId_32)), &transform_hlds__lco__ExistingVariants_36);
        }
#line 1587 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1587 "lco.m"
          {
#line 1588 "lco.m"
            {
#line 1588 "lco.m"
              transform_hlds__lco__classify_proc_call_args_7_p_0(transform_hlds__lco__ModuleInfo_12, transform_hlds__lco__VarTypes_34, transform_hlds__lco__Args_28, transform_hlds__lco__CalleeArgModes_35, &transform_hlds__lco___InArgs_37, &transform_hlds__lco__OutArgs_38, &transform_hlds__lco___UnusedArgs_39);
            }
#line 1590 "lco.m"
            transform_hlds__lco__V_57_57 = (MR_Integer) 1;
#line 1590 "lco.m"
            {
#line 1590 "lco.m"
              transform_hlds__lco__grounding_to_variant_args_5_p_0(transform_hlds__lco__GroundingVarToAddr_23, transform_hlds__lco__V_57_57, transform_hlds__lco__OutArgs_38, &transform_hlds__lco__Subst_40, &transform_hlds__lco__VariantArgs_41);
            }
#line 1592 "lco.m"
            {
#line 1592 "lco.m"
              transform_hlds__lco__succeeded = transform_hlds__lco__match_existing_variant_3_p_0(transform_hlds__lco__ExistingVariants_36, transform_hlds__lco__VariantArgs_41, &transform_hlds__lco__ExistingVariant_42);
            }
#line 1587 "lco.m"
          }
#line 1618 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1595 "lco.m"
          {
#line 1595 "lco.m"
            MR_Word transform_hlds__lco__CallArgs_43;
#line 1595 "lco.m"
            MR_Word transform_hlds__lco__VariantPredId_44;
#line 1595 "lco.m"
            MR_Integer transform_hlds__lco__VariantProcId_45;
#line 1595 "lco.m"
            MR_Word transform_hlds__lco__VariantSymName_46;
#line 1595 "lco.m"
            MR_Word transform_hlds__lco__Globals_47;
#line 1595 "lco.m"
            MR_Word transform_hlds__lco__HighLevelData_48;
#line 1595 "lco.m"
            MR_Word transform_hlds__lco__V_59_59;
#line 1595 "lco.m"
            MR_String transform_hlds__lco__VariantName_79;
#line 1118 "lco.m"
            MR_Word transform_hlds__lco__V_78_78;

#line 1595 "lco.m"
            {
#line 1595 "lco.m"
              parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, transform_hlds__lco__Subst_40, transform_hlds__lco__Args_28, &transform_hlds__lco__CallArgs_43);
            }
#line 1118 "lco.m"
            transform_hlds__lco__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ExistingVariant_42, (MR_Integer) 0)));
#line 1118 "lco.m"
            transform_hlds__lco__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ExistingVariant_42, (MR_Integer) 1)));
#line 1118 "lco.m"
            transform_hlds__lco__VariantName_79 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ExistingVariant_42, (MR_Integer) 2)));
#line 1122 "lco.m"
            if (((MR_tag((MR_Word) transform_hlds__lco__SymName_31)) == (MR_mktag((MR_Integer) 1))))
#line 1123 "lco.m"
              {
#line 1123 "lco.m"
                MR_Word transform_hlds__lco__ModuleName_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SymName_31, (MR_Integer) 0)));
#line 1123 "lco.m"
                MR_String transform_hlds__lco___Name_82 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SymName_31, (MR_Integer) 1)));

#line 1124 "lco.m"
                {
#line 1124 "lco.m"
                  transform_hlds__lco__VariantSymName_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1124 "lco.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__lco__VariantSymName_46, 0) = ((MR_Box) (transform_hlds__lco__ModuleName_81));
#line 1124 "lco.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__lco__VariantSymName_46, 1) = ((MR_Box) (transform_hlds__lco__VariantName_79));
#line 1124 "lco.m"
                }
#line 1123 "lco.m"
              }
#line 1122 "lco.m"
            else
#line 1121 "lco.m"
              {
#line 1121 "lco.m"
                transform_hlds__lco__VariantSymName_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1121 "lco.m"
                MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantSymName_46, 0) = ((MR_Box) (transform_hlds__lco__VariantName_79));
#line 1121 "lco.m"
              }
#line 1597 "lco.m"
            transform_hlds__lco__VariantPredId_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_59_59, (MR_Integer) 0)));
#line 1597 "lco.m"
            transform_hlds__lco__VariantProcId_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_59_59, (MR_Integer) 1)));
#line 1598 "lco.m"
            {
#line 1598 "lco.m"
              MR_Word base;
#line 1598 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1598 "lco.m"
              *transform_hlds__lco__GoalExpr_17 = base;
#line 1598 "lco.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__lco__VariantPredId_44));
#line 1598 "lco.m"
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (transform_hlds__lco__VariantProcId_45));
#line 1598 "lco.m"
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (transform_hlds__lco__CallArgs_43));
#line 1598 "lco.m"
              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (transform_hlds__lco__Builtin_29));
#line 1598 "lco.m"
              MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (transform_hlds__lco__UnifyContext_30));
#line 1598 "lco.m"
              MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (transform_hlds__lco__VariantSymName_46));
#line 1598 "lco.m"
            }
#line 1601 "lco.m"
            {
#line 1601 "lco.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__lco__ModuleInfo_12, &transform_hlds__lco__Globals_47);
            }
#line 1602 "lco.m"
            {
#line 1602 "lco.m"
              libs__globals__lookup_bool_option_3_p_0(transform_hlds__lco__Globals_47, (MR_Integer) 256, &transform_hlds__lco__HighLevelData_48);
            }
#line 1606 "lco.m"
#line 1606 "lco.m"
            switch (transform_hlds__lco__HighLevelData_48) {
#line 1606 "lco.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1606 "lco.m"
              case (MR_Integer) 0:
#line 1605 "lco.m"
                *transform_hlds__lco__GoalInfo_19 = transform_hlds__lco__GoalInfo0_18;
#line 1606 "lco.m"
                break;
#line 1606 "lco.m"
              case (MR_Integer) 1:
#line 1607 "lco.m"
                {
#line 1607 "lco.m"
                  MR_Word transform_hlds__lco__TypeInfo_73_73 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
#line 1607 "lco.m"
                  MR_Word transform_hlds__lco__GroundVars_49;
#line 1607 "lco.m"
                  MR_Word transform_hlds__lco__AddrVars_50;
#line 1607 "lco.m"
                  MR_Word transform_hlds__lco__InstMapDelta0_51;
#line 1607 "lco.m"
                  MR_Word transform_hlds__lco__InstMapDelta_52;
#line 1607 "lco.m"
                  MR_Word transform_hlds__lco__V_62_62;

#line 1610 "lco.m"
                  {
#line 1610 "lco.m"
                    mercury__list__map_3_p_0(transform_hlds__lco__TypeInfo_65_65, transform_hlds__lco__TypeInfo_73_73, (MR_Word) &transform_hlds__lco_scalar_common_2[13], transform_hlds__lco__GroundingVarToAddr_23, &transform_hlds__lco__GroundVars_49);
                  }
#line 1611 "lco.m"
                  {
#line 1611 "lco.m"
                    mercury__map__apply_to_list_3_p_0(transform_hlds__lco__TypeInfo_73_73, transform_hlds__lco__TypeInfo_73_73, transform_hlds__lco__GroundVars_49, transform_hlds__lco__Subst_40, &transform_hlds__lco__AddrVars_50);
                  }
#line 1612 "lco.m"
                  {
#line 1612 "lco.m"
                    transform_hlds__lco__InstMapDelta0_51 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__lco__GoalInfo0_18);
                  }
#line 1613 "lco.m"
                  {
#line 1613 "lco.m"
                    transform_hlds__lco__V_62_62 = parse_tree__prog_mode__ground_inst_0_f_0();
                  }
#line 1613 "lco.m"
                  {
#line 1613 "lco.m"
                    hlds__instmap__instmap_delta_set_vars_same_4_p_0(transform_hlds__lco__V_62_62, transform_hlds__lco__AddrVars_50, transform_hlds__lco__InstMapDelta0_51, &transform_hlds__lco__InstMapDelta_52);
                  }
#line 1615 "lco.m"
                  {
#line 1615 "lco.m"
                    hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__lco__InstMapDelta_52, transform_hlds__lco__GoalInfo0_18, transform_hlds__lco__GoalInfo_19);
                  }
#line 1607 "lco.m"
                }
#line 1606 "lco.m"
                break;
#line 1606 "lco.m"
            }
#line 1617 "lco.m"
            *transform_hlds__lco__Changed_20 = (MR_Integer) 1;
#line 1595 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_ProcInfo_54 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_53;
#line 1595 "lco.m"
          }
#line 1618 "lco.m"
        else
#line 1620 "lco.m"
          {
#line 1619 "lco.m"
            {
#line 1619 "lco.m"
              transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(transform_hlds__lco__ModuleInfo_12, transform_hlds__lco__VarToAddr_14, transform_hlds__lco__InstMap0_15, transform_hlds__lco__GoalInfo0_18, transform_hlds__lco__GoalExpr0_16, transform_hlds__lco__GoalExpr_17, transform_hlds__lco__Changed_20, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_53, transform_hlds__lco__STATE_VARIABLE_ProcInfo_54);
            }
#line 1621 "lco.m"
            *transform_hlds__lco__GoalInfo_19 = transform_hlds__lco__GoalInfo0_18;
#line 1620 "lco.m"
          }
#line 1575 "lco.m"
      }
#line 1565 "lco.m"
  }
#line 1558 "lco.m"
}

#line 1551 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_2(
#line 1551 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1551 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1551 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 1551 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_3,
#line 1551 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_4)
#line 1551 "lco.m"
{
#line 1551 "lco.m"
  {
#line 1551 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 1551 "lco.m"
    MR_Word transform_hlds__lco__conv1_Goal_11;
#line 1551 "lco.m"
    MR_Word transform_hlds__lco__conv0_STATE_VARIABLE_ProcInfo_32;

#line 1551 "lco.m"
    {
#line 1551 "lco.m"
      transform_hlds__lco__make_store_goal_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), &transform_hlds__lco__conv1_Goal_11, ((MR_Word) transform_hlds__lco__wrapper_arg_3), &transform_hlds__lco__conv0_STATE_VARIABLE_ProcInfo_32);
    }
#line 1551 "lco.m"
    *transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv1_Goal_11));
#line 1551 "lco.m"
    *transform_hlds__lco__wrapper_arg_4 = ((MR_Box) (transform_hlds__lco__conv0_STATE_VARIABLE_ProcInfo_32));
#line 1551 "lco.m"
  }
#line 1551 "lco.m"
}

#line 1543 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_1(
#line 1543 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1543 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1)
#line 1543 "lco.m"
{
#line 1543 "lco.m"
  {
#line 1543 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1543 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

#line 1543 "lco.m"
    {
#line 1543 "lco.m"
      return transform_hlds__lco__succeeded = transform_hlds__lco__is_grounding_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
#line 1543 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1543 "lco.m"
  }
#line 1543 "lco.m"
}

#line 1535 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(
#line 1535 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_10,
#line 1535 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_11,
#line 1535 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_12,
#line 1535 "lco.m"
  MR_Word transform_hlds__lco__GoalInfo_13,
#line 1535 "lco.m"
  MR_Word transform_hlds__lco__GoalExpr0_14,
#line 1535 "lco.m"
  MR_Word * transform_hlds__lco__GoalExpr_15,
#line 1535 "lco.m"
  MR_Word * transform_hlds__lco__Changed_16,
#line 1535 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_23,
#line 1535 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_24)
#line 1535 "lco.m"
{
#line 1541 "lco.m"
  {
#line 1541 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1541 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_33_33;
#line 1541 "lco.m"
    MR_Word transform_hlds__lco__InstMap1_18;
#line 1541 "lco.m"
    MR_Word transform_hlds__lco__GroundingVarToAddr_19;
#line 1541 "lco.m"
    MR_Word transform_hlds__lco__V_25_25;
#line 1541 "lco.m"
    MR_Word transform_hlds__lco__V_26_26;

#line 1542 "lco.m"
    {
#line 1542 "lco.m"
      transform_hlds__lco__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1542 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_25_25, 0) = ((MR_Box) (transform_hlds__lco__GoalExpr0_14));
#line 1542 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_25_25, 1) = ((MR_Box) (transform_hlds__lco__GoalInfo_13));
#line 1542 "lco.m"
    }
#line 1542 "lco.m"
    {
#line 1542 "lco.m"
      hlds__goal_util__update_instmap_3_p_0(transform_hlds__lco__V_25_25, transform_hlds__lco__InstMap0_12, &transform_hlds__lco__InstMap1_18);
    }
#line 1543 "lco.m"
    {
#line 1543 "lco.m"
      transform_hlds__lco__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1543 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_26_26, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_6[1]));
#line 1543 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_26_26, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_1));
#line 1543 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1543 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_26_26, 3) = ((MR_Box) (transform_hlds__lco__ModuleInfo_10));
#line 1543 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_26_26, 4) = ((MR_Box) (transform_hlds__lco__InstMap0_12));
#line 1543 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_26_26, 5) = ((MR_Box) (transform_hlds__lco__InstMap1_18));
#line 1543 "lco.m"
    }
#line 6918 "transform_hlds.lco.c"
    transform_hlds__lco__TypeInfo_33_33 = (MR_Word) &transform_hlds__lco_scalar_common_2[6];
#line 1543 "lco.m"
    {
#line 1543 "lco.m"
      mercury__list__filter_3_p_0(transform_hlds__lco__TypeInfo_33_33, transform_hlds__lco__V_26_26, transform_hlds__lco__VarToAddr_11, &transform_hlds__lco__GroundingVarToAddr_19);
    }
#line 1549 "lco.m"
    if ((transform_hlds__lco__GroundingVarToAddr_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1546 "lco.m"
      {
#line 1547 "lco.m"
        *transform_hlds__lco__GoalExpr_15 = transform_hlds__lco__GoalExpr0_14;
#line 1548 "lco.m"
        *transform_hlds__lco__Changed_16 = (MR_Integer) 0;
#line 1546 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_24 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_23;
#line 1546 "lco.m"
      }
#line 1549 "lco.m"
    else
#line 1550 "lco.m"
      {
#line 1550 "lco.m"
        MR_Word transform_hlds__lco__StoreGoals_22;
#line 1550 "lco.m"
        MR_Word transform_hlds__lco__V_27_27;
#line 1550 "lco.m"
        MR_Word transform_hlds__lco__V_30_30;
#line 1551 "lco.m"
        MR_Box transform_hlds__lco__conv2_STATE_VARIABLE_ProcInfo_24;

#line 1551 "lco.m"
        {
#line 1551 "lco.m"
          transform_hlds__lco__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1551 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_27_27, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_10[0]));
#line 1551 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_27_27, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_2));
#line 1551 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1551 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_27_27, 3) = ((MR_Box) (transform_hlds__lco__ModuleInfo_10));
#line 1551 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_27_27, 4) = ((MR_Box) (transform_hlds__lco__InstMap1_18));
#line 1551 "lco.m"
        }
#line 1551 "lco.m"
        {
#line 1551 "lco.m"
          mercury__list__map_foldl_5_p_0(transform_hlds__lco__TypeInfo_33_33, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__lco__V_27_27, transform_hlds__lco__GroundingVarToAddr_19, &transform_hlds__lco__StoreGoals_22, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_23)), &transform_hlds__lco__conv2_STATE_VARIABLE_ProcInfo_24);
        }
#line 1551 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_24 = ((MR_Word) transform_hlds__lco__conv2_STATE_VARIABLE_ProcInfo_24);
#line 1554 "lco.m"
        {
#line 1554 "lco.m"
          transform_hlds__lco__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1554 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_30_30, 0) = ((MR_Box) (transform_hlds__lco__V_25_25));
#line 1554 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_30_30, 1) = ((MR_Box) (transform_hlds__lco__StoreGoals_22));
#line 1554 "lco.m"
        }
#line 1553 "lco.m"
        {
#line 1553 "lco.m"
          MR_Word base;
#line 1553 "lco.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1553 "lco.m"
          *transform_hlds__lco__GoalExpr_15 = base;
#line 1553 "lco.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1553 "lco.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1553 "lco.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__lco__V_30_30));
#line 1553 "lco.m"
        }
#line 1555 "lco.m"
        *transform_hlds__lco__Changed_16 = (MR_Integer) 1;
#line 1550 "lco.m"
      }
#line 1541 "lco.m"
  }
#line 1535 "lco.m"
}

#line 1524 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_case_9_p_0(
#line 1524 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_10,
#line 1524 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_11,
#line 1524 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_12,
#line 1524 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_13,
#line 1524 "lco.m"
  MR_Word transform_hlds__lco__Case0_14,
#line 1524 "lco.m"
  MR_Word * transform_hlds__lco__Case_15,
#line 1524 "lco.m"
  MR_Word * transform_hlds__lco__Changed_16,
#line 1524 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22,
#line 1524 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_23)
#line 1524 "lco.m"
{
#line 1529 "lco.m"
  {
#line 1529 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1529 "lco.m"
    MR_Word transform_hlds__lco__MainConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Case0_14, (MR_Integer) 0)));
#line 1529 "lco.m"
    MR_Word transform_hlds__lco__OtherConsIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Case0_14, (MR_Integer) 1)));
#line 1529 "lco.m"
    MR_Word transform_hlds__lco__Goal0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Case0_14, (MR_Integer) 2)));
#line 1529 "lco.m"
    MR_Word transform_hlds__lco__Goal_21;

#line 1531 "lco.m"
    {
#line 1531 "lco.m"
      transform_hlds__lco__lco_transform_variant_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VariantMap_11, transform_hlds__lco__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__Goal0_20, &transform_hlds__lco__Goal_21, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22, transform_hlds__lco__STATE_VARIABLE_ProcInfo_23);
    }
#line 1533 "lco.m"
    {
#line 1533 "lco.m"
      MR_Word base;
#line 1533 "lco.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1533 "lco.m"
      *transform_hlds__lco__Case_15 = base;
#line 1533 "lco.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__MainConsId_18));
#line 1533 "lco.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__OtherConsIds_19));
#line 1533 "lco.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__Goal_21));
#line 1533 "lco.m"
    }
#line 1529 "lco.m"
  }
#line 1524 "lco.m"
}

#line 1505 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_conj_9_p_0(
#line 1505 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_1,
#line 1505 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_2,
#line 1505 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_3,
#line 1505 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_4,
#line 1505 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 1505 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6,
#line 1505 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__7_7,
#line 1505 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_8,
#line 1505 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_9)
#line 1505 "lco.m"
{
#line 1509 "lco.m"
  {
#line 1509 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1509 "lco.m"
    if ((transform_hlds__lco__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1509 "lco.m"
      {
#line 1509 "lco.m"
        *transform_hlds__lco__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1509 "lco.m"
        *transform_hlds__lco__HeadVar__7_7 = (MR_Integer) 0;
#line 1509 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_9 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_8;
#line 1509 "lco.m"
      }
#line 1509 "lco.m"
    else
#line 1511 "lco.m"
      {
#line 1511 "lco.m"
        MR_Word transform_hlds__lco__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__5_5, (MR_Integer) 0)));
#line 1511 "lco.m"
        MR_Word transform_hlds__lco__Goals0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__5_5, (MR_Integer) 1)));
#line 1511 "lco.m"
        MR_Word transform_hlds__lco__Goal_26;
#line 1511 "lco.m"
        MR_Word transform_hlds__lco__HeadChanged_27;
#line 1511 "lco.m"
        MR_Word transform_hlds__lco__InstMap1_28;
#line 1511 "lco.m"
        MR_Word transform_hlds__lco__Goals_29;
#line 1511 "lco.m"
        MR_Word transform_hlds__lco__TailChanged_30;
#line 1511 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_35_35;
#line 1520 "lco.m"
        MR_Word transform_hlds__lco__SubConj_31;
#line 1518 "lco.m"
        MR_Word transform_hlds__lco__V_37_37;
#line 1518 "lco.m"
        MR_Word transform_hlds__lco__V_38_38;
#line 1518 "lco.m"
        MR_Word transform_hlds__lco__V_32_32;

#line 1512 "lco.m"
        {
#line 1512 "lco.m"
          transform_hlds__lco__lco_transform_variant_goal_9_p_0(transform_hlds__lco__ModuleInfo_1, transform_hlds__lco__VariantMap_2, transform_hlds__lco__VarToAddr_3, transform_hlds__lco__InstMap0_4, transform_hlds__lco__Goal0_21, &transform_hlds__lco__Goal_26, &transform_hlds__lco__HeadChanged_27, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_8, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_35_35);
        }
#line 1514 "lco.m"
        {
#line 1514 "lco.m"
          hlds__goal_util__update_instmap_3_p_0(transform_hlds__lco__Goal0_21, transform_hlds__lco__InstMap0_4, &transform_hlds__lco__InstMap1_28);
        }
#line 1515 "lco.m"
        {
#line 1515 "lco.m"
          transform_hlds__lco__lco_transform_variant_conj_9_p_0(transform_hlds__lco__ModuleInfo_1, transform_hlds__lco__VariantMap_2, transform_hlds__lco__VarToAddr_3, transform_hlds__lco__InstMap1_28, transform_hlds__lco__Goals0_22, &transform_hlds__lco__Goals_29, &transform_hlds__lco__TailChanged_30, transform_hlds__lco__STATE_VARIABLE_ProcInfo_35_35, transform_hlds__lco__STATE_VARIABLE_ProcInfo_9);
        }
#line 1517 "lco.m"
        {
#line 1517 "lco.m"
          *transform_hlds__lco__HeadVar__7_7 = mercury__bool__or_2_f_0(transform_hlds__lco__HeadChanged_27, transform_hlds__lco__TailChanged_30);
        }
#line 1518 "lco.m"
        transform_hlds__lco__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_26, (MR_Integer) 0)));
#line 1518 "lco.m"
        transform_hlds__lco__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_26, (MR_Integer) 1)));
#line 1518 "lco.m"
        transform_hlds__lco__succeeded = ((((MR_tag((MR_Word) transform_hlds__lco__V_37_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__V_37_37, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1518 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1518 "lco.m"
          {
#line 1518 "lco.m"
            transform_hlds__lco__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__V_37_37, (MR_Integer) 1)));
#line 1518 "lco.m"
            transform_hlds__lco__SubConj_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__V_37_37, (MR_Integer) 2)));
#line 1518 "lco.m"
            transform_hlds__lco__succeeded = (transform_hlds__lco__V_38_38 == (MR_Integer) 0);
#line 1518 "lco.m"
          }
#line 1520 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1519 "lco.m"
          {
#line 1519 "lco.m"
            {
#line 1519 "lco.m"
              *transform_hlds__lco__HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__lco__SubConj_31, transform_hlds__lco__Goals_29);
            }
#line 1519 "lco.m"
          }
#line 1520 "lco.m"
        else
#line 1521 "lco.m"
          {
#line 1521 "lco.m"
            MR_Word base;
#line 1521 "lco.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1521 "lco.m"
            *transform_hlds__lco__HeadVar__6_6 = base;
#line 1521 "lco.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Goal_26));
#line 1521 "lco.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__Goals_29));
#line 1521 "lco.m"
          }
#line 1511 "lco.m"
      }
#line 1509 "lco.m"
  }
#line 1505 "lco.m"
}

#line 1420 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_6(
#line 1420 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1420 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1420 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 1420 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 1420 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 1420 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5)
#line 1420 "lco.m"
{
#line 1420 "lco.m"
  {
#line 1420 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 1420 "lco.m"
    MR_Word transform_hlds__lco__conv7_Case_15;
#line 1420 "lco.m"
    MR_Word transform_hlds__lco__conv6_Changed_16;
#line 1420 "lco.m"
    MR_Word transform_hlds__lco__conv5_STATE_VARIABLE_ProcInfo_23;

#line 1420 "lco.m"
    {
#line 1420 "lco.m"
      transform_hlds__lco__lco_transform_variant_case_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), &transform_hlds__lco__conv7_Case_15, &transform_hlds__lco__conv6_Changed_16, ((MR_Word) transform_hlds__lco__wrapper_arg_4), &transform_hlds__lco__conv5_STATE_VARIABLE_ProcInfo_23);
    }
#line 1420 "lco.m"
    *transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv7_Case_15));
#line 1420 "lco.m"
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv6_Changed_16));
#line 1420 "lco.m"
    *transform_hlds__lco__wrapper_arg_5 = ((MR_Box) (transform_hlds__lco__conv5_STATE_VARIABLE_ProcInfo_23));
#line 1420 "lco.m"
  }
#line 1420 "lco.m"
}

#line 1411 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_1(
#line 1411 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1411 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1411 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 1411 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 1411 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 1411 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5)
#line 1411 "lco.m"
{
#line 1411 "lco.m"
  {
#line 1411 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 1411 "lco.m"
    MR_Word transform_hlds__lco__conv2_Goal_15;
#line 1411 "lco.m"
    MR_Word transform_hlds__lco__conv1_Changed_16;
#line 1411 "lco.m"
    MR_Word transform_hlds__lco__conv0_STATE_VARIABLE_ProcInfo_74;

#line 1411 "lco.m"
    {
#line 1411 "lco.m"
      transform_hlds__lco__lco_transform_variant_goal_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), &transform_hlds__lco__conv2_Goal_15, &transform_hlds__lco__conv1_Changed_16, ((MR_Word) transform_hlds__lco__wrapper_arg_4), &transform_hlds__lco__conv0_STATE_VARIABLE_ProcInfo_74);
    }
#line 1411 "lco.m"
    *transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv2_Goal_15));
#line 1411 "lco.m"
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv1_Changed_16));
#line 1411 "lco.m"
    *transform_hlds__lco__wrapper_arg_5 = ((MR_Box) (transform_hlds__lco__conv0_STATE_VARIABLE_ProcInfo_74));
#line 1411 "lco.m"
  }
#line 1411 "lco.m"
}

#line 1445 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_2(
#line 1445 "lco.m"
  void * transform_hlds__lco__env_ptr_arg)
#line 1445 "lco.m"
{
#line 1445 "lco.m"
  {
#line 1445 "lco.m"
    struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s * transform_hlds__lco__env_ptr = (struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s *) transform_hlds__lco__env_ptr_arg;

#line 1445 "lco.m"
    MR_builtin_longjmp((transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__commit_0, 1);
#line 1445 "lco.m"
  }
#line 1445 "lco.m"
}

#line 1445 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_4(
#line 1445 "lco.m"
  void * transform_hlds__lco__env_ptr_arg)
#line 1445 "lco.m"
{
#line 1445 "lco.m"
  {
#line 1445 "lco.m"
    struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s * transform_hlds__lco__env_ptr = (struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s *) transform_hlds__lco__env_ptr_arg;

#line 1445 "lco.m"
    (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVarPair_44 = ((MR_Word) (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__conv4_FGTVarPair_44);
#line 1445 "lco.m"
    {
#line 1445 "lco.m"
      transform_hlds__lco__lco_transform_variant_goal_9_p_0_3(transform_hlds__lco__env_ptr);
#line 1445 "lco.m"
      return;
    }
#line 1445 "lco.m"
  }
#line 1445 "lco.m"
}

#line 1445 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_3(
#line 1445 "lco.m"
  void * transform_hlds__lco__env_ptr_arg)
#line 1445 "lco.m"
{
#line 1445 "lco.m"
  {
#line 1445 "lco.m"
    struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s * transform_hlds__lco__env_ptr = (struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s *) transform_hlds__lco__env_ptr_arg;

#line 1445 "lco.m"
    {
#line 1446 "lco.m"
      MR_Word transform_hlds__lco__V_45_45;

#line 1446 "lco.m"
      (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVarPair_44, (MR_Integer) 0)));
#line 1446 "lco.m"
      transform_hlds__lco__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVarPair_44, (MR_Integer) 1)));
#line 7365 "transform_hlds.lco.c"
      (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__TypeInfo_115_115 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
#line 1446 "lco.m"
      {
#line 1446 "lco.m"
        (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__TypeInfo_115_115, ((MR_Box) ((transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVar_42)), ((MR_Box) ((transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__V_114_114)));
      }
#line 1446 "lco.m"
      if ((transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded)
#line 1446 "lco.m"
        {
#line 1446 "lco.m"
          transform_hlds__lco__lco_transform_variant_goal_9_p_0_2(transform_hlds__lco__env_ptr);
#line 1446 "lco.m"
          return;
        }
#line 1445 "lco.m"
    }
#line 1445 "lco.m"
  }
#line 1445 "lco.m"
}

#line 1445 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_5(
#line 1445 "lco.m"
  void * transform_hlds__lco__env_ptr_arg)
#line 1445 "lco.m"
{
#line 1445 "lco.m"
  {
#line 1445 "lco.m"
    struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s * transform_hlds__lco__env_ptr = (struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s *) transform_hlds__lco__env_ptr_arg;

#line 1445 "lco.m"
    if (MR_builtin_setjmp((transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__commit_0) == 0)
#line 1445 "lco.m"
      {
#line 1445 "lco.m"
        {
#line 1445 "lco.m"
          {
#line 1445 "lco.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__lco_scalar_common_2[6], &(transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__conv4_FGTVarPair_44, (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__lco_transform_variant_goal_9_p_0_4, transform_hlds__lco__env_ptr);
          }
#line 1445 "lco.m"
        }
#line 1445 "lco.m"
        (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = MR_FALSE;
#line 1445 "lco.m"
      }
#line 1445 "lco.m"
    else
#line 1445 "lco.m"
      (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = MR_TRUE;
#line 1445 "lco.m"
  }
#line 1445 "lco.m"
}

#line 1389 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0(
#line 1389 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_10,
#line 1389 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_11,
#line 1389 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_12,
#line 1389 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_13,
#line 1389 "lco.m"
  MR_Word transform_hlds__lco__Goal0_14,
#line 1389 "lco.m"
  MR_Word * transform_hlds__lco__Goal_15,
#line 1389 "lco.m"
  MR_Word * transform_hlds__lco__Changed_16,
#line 1389 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73,
#line 1389 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_74)
#line 1389 "lco.m"
{
#line 1389 "lco.m"
  {
#line 1389 "lco.m"
    struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s transform_hlds__lco__env;

#line 1389 "lco.m"
    (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12 = transform_hlds__lco__VarToAddr_12;
#line 1394 "lco.m"
    {
#line 1394 "lco.m"
      MR_Word transform_hlds__lco__GoalExpr0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal0_14, (MR_Integer) 0)));
#line 1394 "lco.m"
      MR_Word transform_hlds__lco__GoalInfo0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal0_14, (MR_Integer) 1)));
#line 1394 "lco.m"
      MR_Word transform_hlds__lco__GoalExpr_23;
#line 1394 "lco.m"
      MR_Word transform_hlds__lco__GoalInfo_24;

#line 1408 "lco.m"
#line 1408 "lco.m"
      switch (MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_18)) {
#line 1408 "lco.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1408 "lco.m"
        case (MR_Integer) 0:
#line 1465 "lco.m"
          {
#line 1466 "lco.m"
            transform_hlds__lco__GoalExpr_23 = transform_hlds__lco__GoalExpr0_18;
#line 1467 "lco.m"
            transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1468 "lco.m"
            *transform_hlds__lco__Changed_16 = (MR_Integer) 0;
#line 1465 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_ProcInfo_74 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73;
#line 1465 "lco.m"
          }
#line 1408 "lco.m"
          break;
#line 1408 "lco.m"
        case (MR_Integer) 1:
#line 1480 "lco.m"
          {
#line 1481 "lco.m"
            {
#line 1481 "lco.m"
              transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__GoalInfo0_19, transform_hlds__lco__GoalExpr0_18, &transform_hlds__lco__GoalExpr_23, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
            }
#line 1483 "lco.m"
            transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1480 "lco.m"
          }
#line 1408 "lco.m"
          break;
#line 1408 "lco.m"
        case (MR_Integer) 2:
#line 1476 "lco.m"
          {
#line 1476 "lco.m"
            transform_hlds__lco__lco_transform_variant_plain_call_11_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VariantMap_11, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__GoalExpr0_18, &transform_hlds__lco__GoalExpr_23, transform_hlds__lco__GoalInfo0_19, &transform_hlds__lco__GoalInfo_24, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
          }
#line 1408 "lco.m"
          break;
#line 1408 "lco.m"
        case (MR_Integer) 3:
#line 1408 "lco.m"
#line 1408 "lco.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 0)))) {
#line 1408 "lco.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1408 "lco.m"
            case (MR_Integer) 0:
#line 1470 "lco.m"
              {
#line 1471 "lco.m"
                {
#line 1471 "lco.m"
                  transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__GoalInfo0_19, transform_hlds__lco__GoalExpr0_18, &transform_hlds__lco__GoalExpr_23, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
                }
#line 1473 "lco.m"
                transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1470 "lco.m"
              }
#line 1408 "lco.m"
              break;
#line 1408 "lco.m"
            case (MR_Integer) 1:
#line 1485 "lco.m"
              {
#line 1486 "lco.m"
                {
#line 1486 "lco.m"
                  transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__GoalInfo0_19, transform_hlds__lco__GoalExpr0_18, &transform_hlds__lco__GoalExpr_23, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
                }
#line 1488 "lco.m"
                transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1485 "lco.m"
              }
#line 1408 "lco.m"
              break;
#line 1408 "lco.m"
            case (MR_Integer) 2:
#line 1397 "lco.m"
              {
#line 1397 "lco.m"
                MR_Word transform_hlds__lco__ConjType_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 1)));
#line 1397 "lco.m"
                MR_Word transform_hlds__lco__Goals0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 2)));

#line 1404 "lco.m"
#line 1404 "lco.m"
                switch (transform_hlds__lco__ConjType_20) {
#line 1404 "lco.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1404 "lco.m"
                  case (MR_Integer) 1:
#line 1405 "lco.m"
                    {
#line 1406 "lco.m"
                      {
#line 1406 "lco.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.lco_transform_variant_goal\'/9", (MR_String) "parallel_conj");
#line 1406 "lco.m"
                        return;
                      }
#line 1405 "lco.m"
                    }
#line 1404 "lco.m"
                    break;
#line 1404 "lco.m"
                  case (MR_Integer) 0:
#line 1399 "lco.m"
                    {
#line 1399 "lco.m"
                      MR_Word transform_hlds__lco__Goals_22;

#line 1400 "lco.m"
                      {
#line 1400 "lco.m"
                        transform_hlds__lco__lco_transform_variant_conj_9_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VariantMap_11, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__Goals0_21, &transform_hlds__lco__Goals_22, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
                      }
#line 1402 "lco.m"
                      {
#line 1402 "lco.m"
                        transform_hlds__lco__GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1402 "lco.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1402 "lco.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 1) = ((MR_Box) (transform_hlds__lco__ConjType_20));
#line 1402 "lco.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 2) = ((MR_Box) (transform_hlds__lco__Goals_22));
#line 1402 "lco.m"
                      }
#line 1403 "lco.m"
                      transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1399 "lco.m"
                    }
#line 1404 "lco.m"
                    break;
#line 1404 "lco.m"
                }
#line 1397 "lco.m"
              }
#line 1408 "lco.m"
              break;
#line 1408 "lco.m"
            case (MR_Integer) 3:
#line 1409 "lco.m"
              {
#line 1409 "lco.m"
                MR_Word transform_hlds__lco__TypeCtorInfo_102_102;
#line 1409 "lco.m"
                MR_Word transform_hlds__lco__DisjsChanged_25;
#line 1409 "lco.m"
                MR_Word transform_hlds__lco__V_88_88;
#line 1409 "lco.m"
                MR_Word transform_hlds__lco__Goals0_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 1)));
#line 1409 "lco.m"
                MR_Word transform_hlds__lco__Goals_96;
#line 1410 "lco.m"
                MR_Box transform_hlds__lco__conv3_STATE_VARIABLE_ProcInfo_74;

#line 1411 "lco.m"
                {
#line 1411 "lco.m"
                  transform_hlds__lco__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1411 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_88_88, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_8[1]));
#line 1411 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_88_88, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_goal_9_p_0_1));
#line 1411 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_88_88, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1411 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_88_88, 3) = ((MR_Box) (transform_hlds__lco__ModuleInfo_10));
#line 1411 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_88_88, 4) = ((MR_Box) (transform_hlds__lco__VariantMap_11));
#line 1411 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_88_88, 5) = ((MR_Box) ((transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12));
#line 1411 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_88_88, 6) = ((MR_Box) (transform_hlds__lco__InstMap0_13));
#line 1411 "lco.m"
                }
#line 7651 "transform_hlds.lco.c"
                transform_hlds__lco__TypeCtorInfo_102_102 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1410 "lco.m"
                {
#line 1410 "lco.m"
                  mercury__list__map2_foldl_6_p_0(transform_hlds__lco__TypeCtorInfo_102_102, transform_hlds__lco__TypeCtorInfo_102_102, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__lco__V_88_88, transform_hlds__lco__Goals0_95, &transform_hlds__lco__Goals_96, &transform_hlds__lco__DisjsChanged_25, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73)), &transform_hlds__lco__conv3_STATE_VARIABLE_ProcInfo_74);
                }
#line 1410 "lco.m"
                *transform_hlds__lco__STATE_VARIABLE_ProcInfo_74 = ((MR_Word) transform_hlds__lco__conv3_STATE_VARIABLE_ProcInfo_74);
#line 1414 "lco.m"
                {
#line 1414 "lco.m"
                  *transform_hlds__lco__Changed_16 = mercury__bool__or_list_1_f_0(transform_hlds__lco__DisjsChanged_25);
                }
#line 1415 "lco.m"
                {
#line 1415 "lco.m"
                  transform_hlds__lco__GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1415 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1415 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 1) = ((MR_Box) (transform_hlds__lco__Goals_96));
#line 1415 "lco.m"
                }
#line 1416 "lco.m"
                transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1409 "lco.m"
              }
#line 1408 "lco.m"
              break;
#line 1408 "lco.m"
            case (MR_Integer) 4:
#line 1418 "lco.m"
              {
#line 1418 "lco.m"
                MR_Word transform_hlds__lco__TypeCtorInfo_110_110;
#line 1418 "lco.m"
                MR_Word transform_hlds__lco__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 1)));
#line 1418 "lco.m"
                MR_Word transform_hlds__lco__CanFail_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 2)));
#line 1418 "lco.m"
                MR_Word transform_hlds__lco__Cases0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 3)));
#line 1418 "lco.m"
                MR_Word transform_hlds__lco__Cases_29;
#line 1418 "lco.m"
                MR_Word transform_hlds__lco__CasesChanged_30;
#line 1418 "lco.m"
                MR_Word transform_hlds__lco__V_86_86;
#line 1419 "lco.m"
                MR_Box transform_hlds__lco__conv8_STATE_VARIABLE_ProcInfo_74;

#line 1420 "lco.m"
                {
#line 1420 "lco.m"
                  transform_hlds__lco__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1420 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_86_86, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_8[2]));
#line 1420 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_86_86, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_goal_9_p_0_6));
#line 1420 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_86_86, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1420 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_86_86, 3) = ((MR_Box) (transform_hlds__lco__ModuleInfo_10));
#line 1420 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_86_86, 4) = ((MR_Box) (transform_hlds__lco__VariantMap_11));
#line 1420 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_86_86, 5) = ((MR_Box) ((transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12));
#line 1420 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_86_86, 6) = ((MR_Box) (transform_hlds__lco__InstMap0_13));
#line 1420 "lco.m"
                }
#line 7722 "transform_hlds.lco.c"
                transform_hlds__lco__TypeCtorInfo_110_110 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 1419 "lco.m"
                {
#line 1419 "lco.m"
                  mercury__list__map2_foldl_6_p_0(transform_hlds__lco__TypeCtorInfo_110_110, transform_hlds__lco__TypeCtorInfo_110_110, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__lco__V_86_86, transform_hlds__lco__Cases0_28, &transform_hlds__lco__Cases_29, &transform_hlds__lco__CasesChanged_30, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73)), &transform_hlds__lco__conv8_STATE_VARIABLE_ProcInfo_74);
                }
#line 1419 "lco.m"
                *transform_hlds__lco__STATE_VARIABLE_ProcInfo_74 = ((MR_Word) transform_hlds__lco__conv8_STATE_VARIABLE_ProcInfo_74);
#line 1423 "lco.m"
                {
#line 1423 "lco.m"
                  *transform_hlds__lco__Changed_16 = mercury__bool__or_list_1_f_0(transform_hlds__lco__CasesChanged_30);
                }
#line 1424 "lco.m"
                {
#line 1424 "lco.m"
                  transform_hlds__lco__GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1424 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1424 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 1) = ((MR_Box) (transform_hlds__lco__Var_26));
#line 1424 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 2) = ((MR_Box) (transform_hlds__lco__CanFail_27));
#line 1424 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 3) = ((MR_Box) (transform_hlds__lco__Cases_29));
#line 1424 "lco.m"
                }
#line 1425 "lco.m"
                transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1418 "lco.m"
              }
#line 1408 "lco.m"
              break;
#line 1408 "lco.m"
            case (MR_Integer) 5:
#line 1437 "lco.m"
              {
#line 1437 "lco.m"
                MR_Word transform_hlds__lco__Reason_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 1)));
#line 1437 "lco.m"
                MR_Word transform_hlds__lco__SubGoal0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 2)));
#line 1439 "lco.m"
                MR_Word transform_hlds__lco__FGT_43;

#line 1439 "lco.m"
                (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = ((((MR_tag((MR_Word) transform_hlds__lco__Reason_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_40, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1439 "lco.m"
                if ((transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded)
#line 1439 "lco.m"
                  {
#line 1439 "lco.m"
                    (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVar_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_40, (MR_Integer) 1)));
#line 1439 "lco.m"
                    transform_hlds__lco__FGT_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_40, (MR_Integer) 2)));
#line 1441 "lco.m"
#line 1441 "lco.m"
                    switch (transform_hlds__lco__FGT_43) {
#line 1441 "lco.m"
                      default:
#line 1441 "lco.m"
                        (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = MR_FALSE;
#line 1441 "lco.m"
                        break;
#line 1441 "lco.m"
                      case (MR_Integer) 1:
#line 1440 "lco.m"
                        (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = MR_TRUE;
#line 1441 "lco.m"
                        break;
#line 1441 "lco.m"
                      case (MR_Integer) 2:
#line 1441 "lco.m"
                        (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = MR_TRUE;
#line 1441 "lco.m"
                        break;
#line 1441 "lco.m"
                    }
#line 1439 "lco.m"
                  }
#line 1458 "lco.m"
                if ((transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded)
#line 1454 "lco.m"
                  {
#line 1445 "lco.m"
                    {
#line 1445 "lco.m"
                      transform_hlds__lco__lco_transform_variant_goal_9_p_0_5(&transform_hlds__lco__env);
                    }
#line 1454 "lco.m"
                    if ((transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded)
#line 1451 "lco.m"
                      {
#line 1451 "lco.m"
                        transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__GoalInfo0_19, transform_hlds__lco__GoalExpr0_18, &transform_hlds__lco__GoalExpr_23, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
                      }
#line 1454 "lco.m"
                    else
#line 1455 "lco.m"
                      {
#line 1455 "lco.m"
                        transform_hlds__lco__GoalExpr_23 = transform_hlds__lco__GoalExpr0_18;
#line 1456 "lco.m"
                        *transform_hlds__lco__Changed_16 = (MR_Integer) 0;
#line 1455 "lco.m"
                        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_74 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73;
#line 1455 "lco.m"
                      }
#line 1454 "lco.m"
                  }
#line 1458 "lco.m"
                else
#line 1460 "lco.m"
                  {
#line 1460 "lco.m"
                    MR_Word transform_hlds__lco__SubGoal_46;

#line 1459 "lco.m"
                    {
#line 1459 "lco.m"
                      transform_hlds__lco__lco_transform_variant_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VariantMap_11, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__SubGoal0_41, &transform_hlds__lco__SubGoal_46, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
                    }
#line 1461 "lco.m"
                    {
#line 1461 "lco.m"
                      transform_hlds__lco__GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1461 "lco.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1461 "lco.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 1) = ((MR_Box) (transform_hlds__lco__Reason_40));
#line 1461 "lco.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 2) = ((MR_Box) (transform_hlds__lco__SubGoal_46));
#line 1461 "lco.m"
                    }
#line 1460 "lco.m"
                  }
#line 1463 "lco.m"
                transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1437 "lco.m"
              }
#line 1408 "lco.m"
              break;
#line 1408 "lco.m"
            case (MR_Integer) 6:
#line 1427 "lco.m"
              {
#line 1427 "lco.m"
                MR_Word transform_hlds__lco__Vars_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 1)));
#line 1427 "lco.m"
                MR_Word transform_hlds__lco__Cond_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 2)));
#line 1427 "lco.m"
                MR_Word transform_hlds__lco__Then0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 3)));
#line 1427 "lco.m"
                MR_Word transform_hlds__lco__Else0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 4)));
#line 1427 "lco.m"
                MR_Word transform_hlds__lco__InstMap1_35;
#line 1427 "lco.m"
                MR_Word transform_hlds__lco__Then_36;
#line 1427 "lco.m"
                MR_Word transform_hlds__lco__ThenChanged_37;
#line 1427 "lco.m"
                MR_Word transform_hlds__lco__Else_38;
#line 1427 "lco.m"
                MR_Word transform_hlds__lco__ElseChanged_39;
#line 1427 "lco.m"
                MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_84_84;

#line 1428 "lco.m"
                {
#line 1428 "lco.m"
                  hlds__goal_util__update_instmap_3_p_0(transform_hlds__lco__Cond_32, transform_hlds__lco__InstMap0_13, &transform_hlds__lco__InstMap1_35);
                }
#line 1429 "lco.m"
                {
#line 1429 "lco.m"
                  transform_hlds__lco__lco_transform_variant_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VariantMap_11, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap1_35, transform_hlds__lco__Then0_33, &transform_hlds__lco__Then_36, &transform_hlds__lco__ThenChanged_37, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_84_84);
                }
#line 1431 "lco.m"
                {
#line 1431 "lco.m"
                  transform_hlds__lco__lco_transform_variant_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VariantMap_11, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__Else0_34, &transform_hlds__lco__Else_38, &transform_hlds__lco__ElseChanged_39, transform_hlds__lco__STATE_VARIABLE_ProcInfo_84_84, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
                }
#line 1433 "lco.m"
                {
#line 1433 "lco.m"
                  *transform_hlds__lco__Changed_16 = mercury__bool__or_2_f_0(transform_hlds__lco__ThenChanged_37, transform_hlds__lco__ElseChanged_39);
                }
#line 1434 "lco.m"
                {
#line 1434 "lco.m"
                  transform_hlds__lco__GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1434 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1434 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 1) = ((MR_Box) (transform_hlds__lco__Vars_31));
#line 1434 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 2) = ((MR_Box) (transform_hlds__lco__Cond_32));
#line 1434 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 3) = ((MR_Box) (transform_hlds__lco__Then_36));
#line 1434 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 4) = ((MR_Box) (transform_hlds__lco__Else_38));
#line 1434 "lco.m"
                }
#line 1435 "lco.m"
                transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1427 "lco.m"
              }
#line 1408 "lco.m"
              break;
#line 1408 "lco.m"
            case (MR_Integer) 7:
#line 1490 "lco.m"
              {
#line 1492 "lco.m"
                {
#line 1492 "lco.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.lco_transform_variant_goal\'/9", (MR_String) "shorthand");
#line 1492 "lco.m"
                  return;
                }
#line 1490 "lco.m"
              }
#line 1408 "lco.m"
              break;
#line 1408 "lco.m"
          }
#line 1408 "lco.m"
          break;
#line 1408 "lco.m"
      }
#line 1500 "lco.m"
#line 1500 "lco.m"
      switch (*transform_hlds__lco__Changed_16) {
#line 1500 "lco.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1500 "lco.m"
        case (MR_Integer) 0:
#line 1502 "lco.m"
          *transform_hlds__lco__Goal_15 = transform_hlds__lco__Goal0_14;
#line 1500 "lco.m"
          break;
#line 1500 "lco.m"
        case (MR_Integer) 1:
#line 1495 "lco.m"
          {
#line 1495 "lco.m"
            MR_Word transform_hlds__lco__GoalInfoImpure_72;

#line 1498 "lco.m"
            {
#line 1498 "lco.m"
              hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, transform_hlds__lco__GoalInfo_24, &transform_hlds__lco__GoalInfoImpure_72);
            }
#line 1499 "lco.m"
            {
#line 1499 "lco.m"
              MR_Word base;
#line 1499 "lco.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1499 "lco.m"
              *transform_hlds__lco__Goal_15 = base;
#line 1499 "lco.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__GoalExpr_23));
#line 1499 "lco.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__GoalInfoImpure_72));
#line 1499 "lco.m"
            }
#line 1495 "lco.m"
          }
#line 1500 "lco.m"
          break;
#line 1500 "lco.m"
      }
#line 1394 "lco.m"
    }
#line 1389 "lco.m"
  }
#line 1389 "lco.m"
}

#line 1328 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__make_addr_vars_12_p_0_1(
#line 1328 "lco.m"
  MR_Box transform_hlds__lco__closure_arg)
#line 1328 "lco.m"
{
#line 1328 "lco.m"
  {
#line 1328 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1328 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

#line 1328 "lco.m"
    {
#line 1328 "lco.m"
      return transform_hlds__lco__succeeded = transform_hlds__lco__IntroducedFrom__pred__make_addr_vars__1328__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))));
    }
#line 1328 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1328 "lco.m"
  }
#line 1328 "lco.m"
}

#line 1321 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_addr_vars_12_p_0(
#line 1321 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 1321 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 1321 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__3_3,
#line 1321 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__4_4,
#line 1321 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 1321 "lco.m"
  MR_Integer transform_hlds__lco__NextOutArgNum_6,
#line 1321 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_7,
#line 1321 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__8_8,
#line 1321 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VarSet_0_9,
#line 1321 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VarSet_10,
#line 1321 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11,
#line 1321 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VarTypes_12)
#line 1321 "lco.m"
{
#line 1327 "lco.m"
  {
#line 1327 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1327 "lco.m"
    if ((transform_hlds__lco__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1327 "lco.m"
      if ((transform_hlds__lco__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1327 "lco.m"
        {
#line 1327 "lco.m"
          MR_Word transform_hlds__lco__V_22_22;

#line 1326 "lco.m"
          *transform_hlds__lco__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1326 "lco.m"
          *transform_hlds__lco__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1326 "lco.m"
          *transform_hlds__lco__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1328 "lco.m"
          {
#line 1328 "lco.m"
            transform_hlds__lco__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1328 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_22_22, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_7[6]));
#line 1328 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_22_22, 1) = ((MR_Box) (transform_hlds__lco__make_addr_vars_12_p_0_1));
#line 1328 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1328 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_22_22, 3) = ((MR_Box) (transform_hlds__lco__HeadVar__5_5));
#line 1328 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_22_22, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1328 "lco.m"
          }
#line 1328 "lco.m"
          {
#line 1328 "lco.m"
            mercury__require__expect_3_p_0(transform_hlds__lco__V_22_22, (MR_String) "transform_hlds.lco", (MR_String) "make_addr_vars: AddrOutArgs != []");
          }
#line 1327 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_VarTypes_12 = transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11;
#line 1327 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_VarSet_10 = transform_hlds__lco__STATE_VARIABLE_VarSet_0_9;
#line 1327 "lco.m"
        }
#line 1327 "lco.m"
      else
#line 1330 "lco.m"
        {
#line 1331 "lco.m"
          {
#line 1331 "lco.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.make_addr_vars\'/12", (MR_String) "mismatched lists");
#line 1331 "lco.m"
            return;
          }
#line 1330 "lco.m"
        }
#line 1327 "lco.m"
    else
#line 1327 "lco.m"
      {
#line 1327 "lco.m"
        MR_Word transform_hlds__lco__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 1327 "lco.m"
        MR_Word transform_hlds__lco__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));

#line 1327 "lco.m"
        if ((transform_hlds__lco__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1332 "lco.m"
          {
#line 1333 "lco.m"
            {
#line 1333 "lco.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.make_addr_vars\'/12", (MR_String) "mismatched lists");
#line 1333 "lco.m"
              return;
            }
#line 1332 "lco.m"
          }
#line 1327 "lco.m"
        else
#line 1336 "lco.m"
          {
#line 1336 "lco.m"
            MR_Word transform_hlds__lco__Mode0_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 1336 "lco.m"
            MR_Word transform_hlds__lco__Modes0_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 1336 "lco.m"
            MR_Word transform_hlds__lco__HeadVar_64;
#line 1336 "lco.m"
            MR_Word transform_hlds__lco__HeadVars_65;
#line 1336 "lco.m"
            MR_Word transform_hlds__lco__Mode_66;
#line 1336 "lco.m"
            MR_Word transform_hlds__lco__Modes_67;
#line 1336 "lco.m"
            MR_Word transform_hlds__lco__HeadVarType_74;
#line 1336 "lco.m"
            MR_Word transform_hlds__lco__ArgMode_75;

#line 1337 "lco.m"
            {
#line 1337 "lco.m"
              hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11, transform_hlds__lco__V_133_133, &transform_hlds__lco__HeadVarType_74);
            }
#line 1338 "lco.m"
            {
#line 1338 "lco.m"
              check_hlds__mode_util__mode_to_arg_mode_4_p_0(transform_hlds__lco__ModuleInfo_7, transform_hlds__lco__Mode0_62, transform_hlds__lco__HeadVarType_74, &transform_hlds__lco__ArgMode_75);
            }
#line 1345 "lco.m"
#line 1345 "lco.m"
            switch (transform_hlds__lco__ArgMode_75) {
#line 1345 "lco.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1345 "lco.m"
              case (MR_Integer) 0:
#line 1340 "lco.m"
                {
#line 1341 "lco.m"
                  transform_hlds__lco__HeadVar_64 = transform_hlds__lco__V_133_133;
#line 1342 "lco.m"
                  transform_hlds__lco__Mode_66 = transform_hlds__lco__Mode0_62;
#line 1343 "lco.m"
                  {
#line 1343 "lco.m"
                    transform_hlds__lco__make_addr_vars_12_p_0(transform_hlds__lco__V_132_132, transform_hlds__lco__Modes0_63, &transform_hlds__lco__HeadVars_65, &transform_hlds__lco__Modes_67, transform_hlds__lco__HeadVar__5_5, transform_hlds__lco__NextOutArgNum_6, transform_hlds__lco__ModuleInfo_7, transform_hlds__lco__HeadVar__8_8, transform_hlds__lco__STATE_VARIABLE_VarSet_0_9, transform_hlds__lco__STATE_VARIABLE_VarSet_10, transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11, transform_hlds__lco__STATE_VARIABLE_VarTypes_12);
                  }
#line 1340 "lco.m"
                }
#line 1345 "lco.m"
                break;
#line 1345 "lco.m"
              case (MR_Integer) 1:
#line 1346 "lco.m"
                {
#line 1346 "lco.m"
                  MR_Word transform_hlds__lco__MaybeFieldId_77;
#line 1346 "lco.m"
                  MR_Word transform_hlds__lco__STATE_VARIABLE_AddrOutArgs_97_97;
#line 1348 "lco.m"
                  MR_Word transform_hlds__lco__AddrOutArg_76;
#line 1348 "lco.m"
                  MR_Integer transform_hlds__lco__V_131_131;

#line 1348 "lco.m"
                  transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__HeadVar__5_5)) == (MR_mktag((MR_Integer) 1)));
#line 1348 "lco.m"
                  if (transform_hlds__lco__succeeded)
#line 1348 "lco.m"
                    {
#line 1348 "lco.m"
                      transform_hlds__lco__AddrOutArg_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__5_5, (MR_Integer) 0)));
#line 1348 "lco.m"
                      transform_hlds__lco__STATE_VARIABLE_AddrOutArgs_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__5_5, (MR_Integer) 1)));
#line 1349 "lco.m"
                      transform_hlds__lco__V_131_131 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__AddrOutArg_76, (MR_Integer) 0)));
#line 1349 "lco.m"
                      transform_hlds__lco__MaybeFieldId_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__AddrOutArg_76, (MR_Integer) 1)));
#line 1349 "lco.m"
                      transform_hlds__lco__succeeded = (transform_hlds__lco__NextOutArgNum_6 == transform_hlds__lco__V_131_131);
#line 1348 "lco.m"
                    }
#line 1346 "lco.m"
                  if (transform_hlds__lco__succeeded)
#line 1351 "lco.m"
                    {
#line 1351 "lco.m"
                      MR_Word transform_hlds__lco__TypeCtorInfo_130_130 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1351 "lco.m"
                      MR_String transform_hlds__lco__Name_78;
#line 1351 "lco.m"
                      MR_String transform_hlds__lco__AddrName_79;
#line 1351 "lco.m"
                      MR_Word transform_hlds__lco__OldType_81;
#line 1351 "lco.m"
                      MR_Word transform_hlds__lco__VarToAddrTail_87;
#line 1351 "lco.m"
                      MR_Word transform_hlds__lco__VarToAddrHead_88;
#line 1351 "lco.m"
                      MR_Word transform_hlds__lco__STATE_VARIABLE_VarSet_99_99;
#line 1351 "lco.m"
                      MR_Word transform_hlds__lco__STATE_VARIABLE_VarTypes_108_108;
#line 1351 "lco.m"
                      MR_Integer transform_hlds__lco__V_109_109;
#line 1351 "lco.m"
                      MR_Word transform_hlds__lco__V_113_113;

#line 1351 "lco.m"
                      {
#line 1351 "lco.m"
                        mercury__varset__lookup_name_3_p_0(transform_hlds__lco__TypeCtorInfo_130_130, transform_hlds__lco__STATE_VARIABLE_VarSet_0_9, transform_hlds__lco__V_133_133, &transform_hlds__lco__Name_78);
                      }
#line 1352 "lco.m"
                      {
#line 1352 "lco.m"
                        transform_hlds__lco__AddrName_79 = mercury__string__f_43_43_2_f_0((MR_String) "AddrOf", transform_hlds__lco__Name_78);
                      }
#line 1353 "lco.m"
                      {
#line 1353 "lco.m"
                        mercury__varset__new_named_var_4_p_0(transform_hlds__lco__TypeCtorInfo_130_130, transform_hlds__lco__AddrName_79, &transform_hlds__lco__HeadVar_64, transform_hlds__lco__STATE_VARIABLE_VarSet_0_9, &transform_hlds__lco__STATE_VARIABLE_VarSet_99_99);
                      }
#line 1355 "lco.m"
                      {
#line 1355 "lco.m"
                        hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11, transform_hlds__lco__V_133_133, &transform_hlds__lco__OldType_81);
                      }
#line 1362 "lco.m"
                      if ((transform_hlds__lco__MaybeFieldId_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1357 "lco.m"
                        {
#line 1357 "lco.m"
                          MR_Word transform_hlds__lco__V_107_107;

#line 1360 "lco.m"
                          {
#line 1360 "lco.m"
                            transform_hlds__lco__V_107_107 = transform_hlds__lco__make_ref_type_1_f_0(transform_hlds__lco__OldType_81);
                          }
#line 1360 "lco.m"
                          {
#line 1360 "lco.m"
                            hlds__vartypes__add_var_type_4_p_0(transform_hlds__lco__HeadVar_64, transform_hlds__lco__V_107_107, transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11, &transform_hlds__lco__STATE_VARIABLE_VarTypes_108_108);
                          }
#line 1361 "lco.m"
                          {
#line 1361 "lco.m"
                            transform_hlds__lco__Mode_66 = parse_tree__prog_mode__in_mode_0_f_0();
                          }
#line 1357 "lco.m"
                        }
#line 1362 "lco.m"
                      else
#line 1363 "lco.m"
                        {
#line 1363 "lco.m"
                          MR_Word transform_hlds__lco__AddrVarType_82;
#line 1363 "lco.m"
                          MR_Word transform_hlds__lco__ConsId_83;
#line 1363 "lco.m"
                          MR_Integer transform_hlds__lco__ArgNum_84;
#line 1363 "lco.m"
                          MR_Word transform_hlds__lco__BoundInst_85;
#line 1363 "lco.m"
                          MR_Word transform_hlds__lco__InitialInst_86;
#line 1363 "lco.m"
                          MR_Word transform_hlds__lco__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__MaybeFieldId_77, (MR_Integer) 0)));
#line 1363 "lco.m"
                          MR_Word transform_hlds__lco__V_104_104;
#line 1363 "lco.m"
                          MR_Word transform_hlds__lco__V_106_106;

#line 1363 "lco.m"
                          transform_hlds__lco__AddrVarType_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_100_100, (MR_Integer) 0)));
#line 1363 "lco.m"
                          transform_hlds__lco__ConsId_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_100_100, (MR_Integer) 1)));
#line 1363 "lco.m"
                          transform_hlds__lco__ArgNum_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_100_100, (MR_Integer) 2)));
#line 1367 "lco.m"
                          {
#line 1367 "lco.m"
                            hlds__vartypes__add_var_type_4_p_0(transform_hlds__lco__HeadVar_64, transform_hlds__lco__AddrVarType_82, transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11, &transform_hlds__lco__STATE_VARIABLE_VarTypes_108_108);
                          }
#line 1368 "lco.m"
                          {
#line 1368 "lco.m"
                            transform_hlds__lco__BoundInst_85 = transform_hlds__lco__bound_inst_with_free_arg_2_f_0(transform_hlds__lco__ConsId_83, transform_hlds__lco__ArgNum_84);
                          }
#line 1369 "lco.m"
                          {
#line 1369 "lco.m"
                            transform_hlds__lco__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1369 "lco.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__lco__V_104_104, 0) = ((MR_Box) (transform_hlds__lco__BoundInst_85));
#line 1369 "lco.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__lco__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1369 "lco.m"
                          }
#line 1369 "lco.m"
                          {
#line 1369 "lco.m"
                            transform_hlds__lco__InitialInst_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1369 "lco.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__lco__InitialInst_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1369 "lco.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__lco__InitialInst_86, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1369 "lco.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__lco__InitialInst_86, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1369 "lco.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__lco__InitialInst_86, 3) = ((MR_Box) (transform_hlds__lco__V_104_104));
#line 1369 "lco.m"
                          }
#line 1370 "lco.m"
                          {
#line 1370 "lco.m"
                            transform_hlds__lco__V_106_106 = parse_tree__prog_mode__ground_inst_0_f_0();
                          }
#line 1370 "lco.m"
                          {
#line 1370 "lco.m"
                            transform_hlds__lco__Mode_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1370 "lco.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__lco__Mode_66, 0) = ((MR_Box) (transform_hlds__lco__InitialInst_86));
#line 1370 "lco.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__lco__Mode_66, 1) = ((MR_Box) (transform_hlds__lco__V_106_106));
#line 1370 "lco.m"
                          }
#line 1363 "lco.m"
                        }
#line 1373 "lco.m"
                      transform_hlds__lco__V_109_109 = (transform_hlds__lco__NextOutArgNum_6 + (MR_Integer) 1);
#line 1372 "lco.m"
                      {
#line 1372 "lco.m"
                        transform_hlds__lco__make_addr_vars_12_p_0(transform_hlds__lco__V_132_132, transform_hlds__lco__Modes0_63, &transform_hlds__lco__HeadVars_65, &transform_hlds__lco__Modes_67, transform_hlds__lco__STATE_VARIABLE_AddrOutArgs_97_97, transform_hlds__lco__V_109_109, transform_hlds__lco__ModuleInfo_7, &transform_hlds__lco__VarToAddrTail_87, transform_hlds__lco__STATE_VARIABLE_VarSet_99_99, transform_hlds__lco__STATE_VARIABLE_VarSet_10, transform_hlds__lco__STATE_VARIABLE_VarTypes_108_108, transform_hlds__lco__STATE_VARIABLE_VarTypes_12);
                      }
#line 1375 "lco.m"
                      {
#line 1375 "lco.m"
                        transform_hlds__lco__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1375 "lco.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__lco__V_113_113, 0) = ((MR_Box) (transform_hlds__lco__HeadVar_64));
#line 1375 "lco.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__lco__V_113_113, 1) = ((MR_Box) (transform_hlds__lco__MaybeFieldId_77));
#line 1375 "lco.m"
                      }
#line 1375 "lco.m"
                      {
#line 1375 "lco.m"
                        transform_hlds__lco__VarToAddrHead_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1375 "lco.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__lco__VarToAddrHead_88, 0) = ((MR_Box) (transform_hlds__lco__V_133_133));
#line 1375 "lco.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__lco__VarToAddrHead_88, 1) = ((MR_Box) (transform_hlds__lco__V_113_113));
#line 1375 "lco.m"
                      }
#line 1376 "lco.m"
                      {
#line 1376 "lco.m"
                        MR_Word base;
#line 1376 "lco.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1376 "lco.m"
                        *transform_hlds__lco__HeadVar__8_8 = base;
#line 1376 "lco.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__VarToAddrHead_88));
#line 1376 "lco.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__VarToAddrTail_87));
#line 1376 "lco.m"
                      }
#line 1351 "lco.m"
                    }
#line 1346 "lco.m"
                  else
#line 1378 "lco.m"
                    {
#line 1378 "lco.m"
                      MR_Integer transform_hlds__lco__V_114_114;

#line 1378 "lco.m"
                      transform_hlds__lco__HeadVar_64 = transform_hlds__lco__V_133_133;
#line 1379 "lco.m"
                      transform_hlds__lco__Mode_66 = transform_hlds__lco__Mode0_62;
#line 1381 "lco.m"
                      transform_hlds__lco__V_114_114 = (transform_hlds__lco__NextOutArgNum_6 + (MR_Integer) 1);
#line 1380 "lco.m"
                      {
#line 1380 "lco.m"
                        transform_hlds__lco__make_addr_vars_12_p_0(transform_hlds__lco__V_132_132, transform_hlds__lco__Modes0_63, &transform_hlds__lco__HeadVars_65, &transform_hlds__lco__Modes_67, transform_hlds__lco__HeadVar__5_5, transform_hlds__lco__V_114_114, transform_hlds__lco__ModuleInfo_7, transform_hlds__lco__HeadVar__8_8, transform_hlds__lco__STATE_VARIABLE_VarSet_0_9, transform_hlds__lco__STATE_VARIABLE_VarSet_10, transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11, transform_hlds__lco__STATE_VARIABLE_VarTypes_12);
                      }
#line 1378 "lco.m"
                    }
#line 1346 "lco.m"
                }
#line 1345 "lco.m"
                break;
#line 1345 "lco.m"
              case (MR_Integer) 2:
#line 1385 "lco.m"
                {
#line 1386 "lco.m"
                  {
#line 1386 "lco.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.make_addr_vars\'/12", (MR_String) "top_unused");
#line 1386 "lco.m"
                    return;
                  }
#line 1385 "lco.m"
                }
#line 1345 "lco.m"
                break;
#line 1345 "lco.m"
            }
#line 1335 "lco.m"
            {
#line 1335 "lco.m"
              MR_Word base;
#line 1335 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1335 "lco.m"
              *transform_hlds__lco__HeadVar__3_3 = base;
#line 1335 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__HeadVar_64));
#line 1335 "lco.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__HeadVars_65));
#line 1335 "lco.m"
            }
#line 1335 "lco.m"
            {
#line 1335 "lco.m"
              MR_Word base;
#line 1335 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1335 "lco.m"
              *transform_hlds__lco__HeadVar__4_4 = base;
#line 1335 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Mode_66));
#line 1335 "lco.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__Modes_67));
#line 1335 "lco.m"
            }
#line 1336 "lco.m"
          }
#line 1327 "lco.m"
      }
#line 1327 "lco.m"
  }
#line 1321 "lco.m"
}

#line 1276 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__occurs_once_2_p_0(
#line 1276 "lco.m"
  MR_Word transform_hlds__lco__Bag_3,
#line 1276 "lco.m"
  MR_Word transform_hlds__lco__Var_4)
#line 1276 "lco.m"
{
#line 1278 "lco.m"
  {
#line 1278 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1278 "lco.m"
    MR_Integer transform_hlds__lco__V_7_7;

#line 1279 "lco.m"
    {
#line 1279 "lco.m"
      mercury__bag__count_value_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[3], transform_hlds__lco__Bag_3, ((MR_Box) (transform_hlds__lco__Var_4)), &transform_hlds__lco__V_7_7);
    }
#line 1279 "lco.m"
    transform_hlds__lco__succeeded = ((MR_Integer) 1 == transform_hlds__lco__V_7_7);
#line 1278 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1278 "lco.m"
  }
#line 1276 "lco.m"
}

#line 1267 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_mode_2_p_0(
#line 1267 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_3,
#line 1267 "lco.m"
  MR_Word transform_hlds__lco__UniMode_4)
#line 1267 "lco.m"
{
#line 1269 "lco.m"
  {
#line 1269 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1269 "lco.m"
    MR_Word transform_hlds__lco__InitInstX_5;
#line 1269 "lco.m"
    MR_Word transform_hlds__lco__InitInstY_6;
#line 1269 "lco.m"
    MR_Word transform_hlds__lco__FinalInstX_7;
#line 1269 "lco.m"
    MR_Word transform_hlds__lco__FinalInstY_8;
#line 1269 "lco.m"
    MR_Word transform_hlds__lco__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_4, (MR_Integer) 0)));
#line 1269 "lco.m"
    MR_Word transform_hlds__lco__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_4, (MR_Integer) 1)));

#line 1270 "lco.m"
    transform_hlds__lco__InitInstX_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_9_9, (MR_Integer) 0)));
#line 1270 "lco.m"
    transform_hlds__lco__InitInstY_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_9_9, (MR_Integer) 1)));
#line 1270 "lco.m"
    transform_hlds__lco__FinalInstX_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_10_10, (MR_Integer) 0)));
#line 1270 "lco.m"
    transform_hlds__lco__FinalInstY_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_10_10, (MR_Integer) 1)));
#line 1271 "lco.m"
    {
#line 1271 "lco.m"
      transform_hlds__lco__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(transform_hlds__lco__ModuleInfo_3, transform_hlds__lco__InitInstX_5);
    }
#line 1269 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 1269 "lco.m"
      {
#line 1272 "lco.m"
        {
#line 1272 "lco.m"
          transform_hlds__lco__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(transform_hlds__lco__ModuleInfo_3, transform_hlds__lco__InitInstY_6);
        }
#line 1269 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1269 "lco.m"
          {
#line 1273 "lco.m"
            {
#line 1273 "lco.m"
              transform_hlds__lco__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(transform_hlds__lco__ModuleInfo_3, transform_hlds__lco__FinalInstX_7);
            }
#line 1269 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 1274 "lco.m"
              {
#line 1274 "lco.m"
                return transform_hlds__lco__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(transform_hlds__lco__ModuleInfo_3, transform_hlds__lco__FinalInstY_8);
              }
#line 1269 "lco.m"
          }
#line 1269 "lco.m"
      }
#line 1269 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1269 "lco.m"
  }
#line 1267 "lco.m"
}

#line 1257 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__bound_inst_with_free_arg_2_f_0(
#line 1257 "lco.m"
  MR_Word transform_hlds__lco__ConsId_4,
#line 1257 "lco.m"
  MR_Integer transform_hlds__lco__FreeArg_5)
#line 1257 "lco.m"
{
#line 1259 "lco.m"
  {
#line 1259 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1259 "lco.m"
    MR_Word transform_hlds__lco__Inst_6;
#line 1259 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_12_12;
#line 1259 "lco.m"
    MR_Integer transform_hlds__lco__Arity_7;
#line 1259 "lco.m"
    MR_Word transform_hlds__lco__ArgInsts0_8;
#line 1259 "lco.m"
    MR_Word transform_hlds__lco__ArgInsts_9;
#line 1259 "lco.m"
    MR_Word transform_hlds__lco__V_10_10;
#line 1259 "lco.m"
    MR_Word transform_hlds__lco__V_11_11;

#line 1260 "lco.m"
    {
#line 1260 "lco.m"
      transform_hlds__lco__Arity_7 = parse_tree__prog_util__cons_id_arity_1_f_0(transform_hlds__lco__ConsId_4);
    }
#line 1261 "lco.m"
    {
#line 1261 "lco.m"
      transform_hlds__lco__V_10_10 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 8634 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1261 "lco.m"
    {
#line 1261 "lco.m"
      mercury__list__duplicate_3_p_0(transform_hlds__lco__TypeCtorInfo_12_12, transform_hlds__lco__Arity_7, ((MR_Box) (transform_hlds__lco__V_10_10)), &transform_hlds__lco__ArgInsts0_8);
    }
#line 1262 "lco.m"
    {
#line 1262 "lco.m"
      transform_hlds__lco__V_11_11 = parse_tree__prog_mode__free_inst_0_f_0();
    }
#line 1262 "lco.m"
    {
#line 1262 "lco.m"
      mercury__list__det_replace_nth_4_p_0(transform_hlds__lco__TypeCtorInfo_12_12, transform_hlds__lco__ArgInsts0_8, transform_hlds__lco__FreeArg_5, ((MR_Box) (transform_hlds__lco__V_11_11)), &transform_hlds__lco__ArgInsts_9);
    }
#line 1263 "lco.m"
    {
#line 1263 "lco.m"
      transform_hlds__lco__Inst_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1263 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Inst_6, 0) = ((MR_Box) (transform_hlds__lco__ConsId_4));
#line 1263 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Inst_6, 1) = ((MR_Box) (transform_hlds__lco__ArgInsts_9));
#line 1263 "lco.m"
    }
#line 1259 "lco.m"
    return transform_hlds__lco__Inst_6;
#line 1259 "lco.m"
  }
#line 1257 "lco.m"
}

#line 1222 "lco.m"
static void MR_CALL 
transform_hlds__lco__update_construct_args_14_p_0(
#line 1222 "lco.m"
  MR_Word transform_hlds__lco__Subst_1,
#line 1222 "lco.m"
  MR_Word transform_hlds__lco__HighLevelData_2,
#line 1222 "lco.m"
  MR_Word transform_hlds__lco__VarType_3,
#line 1222 "lco.m"
  MR_Word transform_hlds__lco__ConsId_4,
#line 1222 "lco.m"
  MR_Integer transform_hlds__lco__ArgNum_5,
#line 1222 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__6_6,
#line 1222 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__7_7,
#line 1222 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__8_8,
#line 1222 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_InstMapDelta_0_9,
#line 1222 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_InstMapDelta_10,
#line 1222 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_0_11,
#line 1222 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_12,
#line 1222 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VarTypes_0_13,
#line 1222 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VarTypes_14)
#line 1222 "lco.m"
{
#line 1228 "lco.m"
  {
#line 1228 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1228 "lco.m"
    if ((transform_hlds__lco__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1228 "lco.m"
      {
#line 1228 "lco.m"
        *transform_hlds__lco__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1228 "lco.m"
        *transform_hlds__lco__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1229 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_VarTypes_14 = transform_hlds__lco__STATE_VARIABLE_VarTypes_0_13;
#line 1229 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_12 = transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_0_11;
#line 1229 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_InstMapDelta_10 = transform_hlds__lco__STATE_VARIABLE_InstMapDelta_0_9;
#line 1228 "lco.m"
      }
#line 1228 "lco.m"
    else
#line 1232 "lco.m"
      {
#line 1232 "lco.m"
        MR_Word transform_hlds__lco__OrigVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__6_6, (MR_Integer) 0)));
#line 1232 "lco.m"
        MR_Word transform_hlds__lco__OrigVars_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__6_6, (MR_Integer) 1)));
#line 1232 "lco.m"
        MR_Word transform_hlds__lco__UpdatedVar_36;
#line 1232 "lco.m"
        MR_Word transform_hlds__lco__UpdatedVars_37;
#line 1232 "lco.m"
        MR_Word transform_hlds__lco__AddrArgsTail_42;
#line 1232 "lco.m"
        MR_Integer transform_hlds__lco__V_52_52 = (transform_hlds__lco__ArgNum_5 + (MR_Integer) 1);
#line 1232 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_InstMapDelta_53_53;
#line 1232 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_54_54;
#line 1232 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_VarTypes_55_55;
#line 1252 "lco.m"
        MR_Word transform_hlds__lco__AddrVar_43;
#line 1236 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_65_65;
#line 1236 "lco.m"
        MR_Box transform_hlds__lco__conv0_AddrVar_43;

#line 1233 "lco.m"
        {
#line 1233 "lco.m"
          transform_hlds__lco__update_construct_args_14_p_0(transform_hlds__lco__Subst_1, transform_hlds__lco__HighLevelData_2, transform_hlds__lco__VarType_3, transform_hlds__lco__ConsId_4, transform_hlds__lco__V_52_52, transform_hlds__lco__OrigVars_35, &transform_hlds__lco__UpdatedVars_37, &transform_hlds__lco__AddrArgsTail_42, transform_hlds__lco__STATE_VARIABLE_InstMapDelta_0_9, &transform_hlds__lco__STATE_VARIABLE_InstMapDelta_53_53, transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_0_11, &transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_54_54, transform_hlds__lco__STATE_VARIABLE_VarTypes_0_13, &transform_hlds__lco__STATE_VARIABLE_VarTypes_55_55);
        }
#line 8756 "transform_hlds.lco.c"
        transform_hlds__lco__TypeInfo_65_65 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
#line 1236 "lco.m"
        {
#line 1236 "lco.m"
          transform_hlds__lco__succeeded = mercury__map__search_3_p_0(transform_hlds__lco__TypeInfo_65_65, transform_hlds__lco__TypeInfo_65_65, transform_hlds__lco__Subst_1, ((MR_Box) (transform_hlds__lco__OrigVar_34)), &transform_hlds__lco__conv0_AddrVar_43);
        }
#line 1236 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1236 "lco.m"
          {
#line 1236 "lco.m"
            transform_hlds__lco__AddrVar_43 = ((MR_Word) transform_hlds__lco__conv0_AddrVar_43);
#line 1236 "lco.m"
            transform_hlds__lco__succeeded = MR_TRUE;
#line 1236 "lco.m"
          }
#line 1252 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1237 "lco.m"
          {
#line 1237 "lco.m"
            MR_Word transform_hlds__lco__FinalInst_44;
#line 1237 "lco.m"
            MR_Word transform_hlds__lco__V_63_63;

#line 1237 "lco.m"
            transform_hlds__lco__UpdatedVar_36 = transform_hlds__lco__AddrVar_43;
#line 1241 "lco.m"
#line 1241 "lco.m"
            switch (transform_hlds__lco__HighLevelData_2) {
#line 1241 "lco.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1241 "lco.m"
              case (MR_Integer) 0:
#line 1239 "lco.m"
                {
#line 1240 "lco.m"
                  {
#line 1240 "lco.m"
                    transform_hlds__lco__FinalInst_44 = parse_tree__prog_mode__ground_inst_0_f_0();
                  }
#line 1239 "lco.m"
                  *transform_hlds__lco__STATE_VARIABLE_VarTypes_14 = transform_hlds__lco__STATE_VARIABLE_VarTypes_55_55;
#line 1239 "lco.m"
                }
#line 1241 "lco.m"
                break;
#line 1241 "lco.m"
              case (MR_Integer) 1:
#line 1242 "lco.m"
                {
#line 1242 "lco.m"
                  MR_Word transform_hlds__lco__TypeCtorInfo_12_76;
#line 1242 "lco.m"
                  MR_Word transform_hlds__lco__BoundInst_45;
#line 1242 "lco.m"
                  MR_Word transform_hlds__lco__V_59_59;
#line 1242 "lco.m"
                  MR_Integer transform_hlds__lco__Arity_71;
#line 1242 "lco.m"
                  MR_Word transform_hlds__lco__ArgInsts0_72;
#line 1242 "lco.m"
                  MR_Word transform_hlds__lco__ArgInsts_73;
#line 1242 "lco.m"
                  MR_Word transform_hlds__lco__V_74_74;
#line 1242 "lco.m"
                  MR_Word transform_hlds__lco__V_75_75;

#line 1260 "lco.m"
                  {
#line 1260 "lco.m"
                    transform_hlds__lco__Arity_71 = parse_tree__prog_util__cons_id_arity_1_f_0(transform_hlds__lco__ConsId_4);
                  }
#line 1261 "lco.m"
                  {
#line 1261 "lco.m"
                    transform_hlds__lco__V_74_74 = parse_tree__prog_mode__ground_inst_0_f_0();
                  }
#line 8835 "transform_hlds.lco.c"
                  transform_hlds__lco__TypeCtorInfo_12_76 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1261 "lco.m"
                  {
#line 1261 "lco.m"
                    mercury__list__duplicate_3_p_0(transform_hlds__lco__TypeCtorInfo_12_76, transform_hlds__lco__Arity_71, ((MR_Box) (transform_hlds__lco__V_74_74)), &transform_hlds__lco__ArgInsts0_72);
                  }
#line 1262 "lco.m"
                  {
#line 1262 "lco.m"
                    transform_hlds__lco__V_75_75 = parse_tree__prog_mode__free_inst_0_f_0();
                  }
#line 1262 "lco.m"
                  {
#line 1262 "lco.m"
                    mercury__list__det_replace_nth_4_p_0(transform_hlds__lco__TypeCtorInfo_12_76, transform_hlds__lco__ArgInsts0_72, transform_hlds__lco__ArgNum_5, ((MR_Box) (transform_hlds__lco__V_75_75)), &transform_hlds__lco__ArgInsts_73);
                  }
#line 1263 "lco.m"
                  {
#line 1263 "lco.m"
                    transform_hlds__lco__BoundInst_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1263 "lco.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__lco__BoundInst_45, 0) = ((MR_Box) (transform_hlds__lco__ConsId_4));
#line 1263 "lco.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__lco__BoundInst_45, 1) = ((MR_Box) (transform_hlds__lco__ArgInsts_73));
#line 1263 "lco.m"
                  }
#line 1244 "lco.m"
                  {
#line 1244 "lco.m"
                    transform_hlds__lco__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1244 "lco.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__lco__V_59_59, 0) = ((MR_Box) (transform_hlds__lco__BoundInst_45));
#line 1244 "lco.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__lco__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1244 "lco.m"
                  }
#line 1244 "lco.m"
                  {
#line 1244 "lco.m"
                    transform_hlds__lco__FinalInst_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1244 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__FinalInst_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1244 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__FinalInst_44, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1244 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__FinalInst_44, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1244 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__FinalInst_44, 3) = ((MR_Box) (transform_hlds__lco__V_59_59));
#line 1244 "lco.m"
                  }
#line 1246 "lco.m"
                  {
#line 1246 "lco.m"
                    hlds__vartypes__add_var_type_4_p_0(transform_hlds__lco__AddrVar_43, transform_hlds__lco__VarType_3, transform_hlds__lco__STATE_VARIABLE_VarTypes_55_55, transform_hlds__lco__STATE_VARIABLE_VarTypes_14);
                  }
#line 1242 "lco.m"
                }
#line 1241 "lco.m"
                break;
#line 1241 "lco.m"
            }
#line 1248 "lco.m"
            {
#line 1248 "lco.m"
              hlds__instmap__instmap_delta_set_var_4_p_0(transform_hlds__lco__AddrVar_43, transform_hlds__lco__FinalInst_44, transform_hlds__lco__STATE_VARIABLE_InstMapDelta_53_53, transform_hlds__lco__STATE_VARIABLE_InstMapDelta_10);
            }
#line 1249 "lco.m"
            {
#line 1249 "lco.m"
              transform_hlds__lco__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1249 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_63_63, 0) = ((MR_Box) (transform_hlds__lco__VarType_3));
#line 1249 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_63_63, 1) = ((MR_Box) (transform_hlds__lco__ConsId_4));
#line 1249 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_63_63, 2) = ((MR_Box) (transform_hlds__lco__ArgNum_5));
#line 1249 "lco.m"
            }
#line 1249 "lco.m"
            {
#line 1249 "lco.m"
              mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[3], (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0, ((MR_Box) (transform_hlds__lco__OrigVar_34)), ((MR_Box) (transform_hlds__lco__V_63_63)), transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_54_54, transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_12);
            }
#line 1251 "lco.m"
            {
#line 1251 "lco.m"
              MR_Word base;
#line 1251 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1251 "lco.m"
              *transform_hlds__lco__HeadVar__8_8 = base;
#line 1251 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__ArgNum_5));
#line 1251 "lco.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__AddrArgsTail_42));
#line 1251 "lco.m"
            }
#line 1237 "lco.m"
          }
#line 1252 "lco.m"
        else
#line 1253 "lco.m"
          {
#line 1253 "lco.m"
            transform_hlds__lco__UpdatedVar_36 = transform_hlds__lco__OrigVar_34;
#line 1254 "lco.m"
            *transform_hlds__lco__HeadVar__8_8 = transform_hlds__lco__AddrArgsTail_42;
#line 1253 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_VarTypes_14 = transform_hlds__lco__STATE_VARIABLE_VarTypes_55_55;
#line 1253 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_12 = transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_54_54;
#line 1253 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_InstMapDelta_10 = transform_hlds__lco__STATE_VARIABLE_InstMapDelta_53_53;
#line 1253 "lco.m"
          }
#line 1231 "lco.m"
        {
#line 1231 "lco.m"
          MR_Word base;
#line 1231 "lco.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1231 "lco.m"
          *transform_hlds__lco__HeadVar__7_7 = base;
#line 1231 "lco.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__UpdatedVar_36));
#line 1231 "lco.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__UpdatedVars_37));
#line 1231 "lco.m"
        }
#line 1232 "lco.m"
      }
#line 1228 "lco.m"
  }
#line 1222 "lco.m"
}

#line 1202 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__update_construct_8_p_0_1(
#line 1202 "lco.m"
  MR_Box transform_hlds__lco__closure_arg)
#line 1202 "lco.m"
{
#line 1202 "lco.m"
  {
#line 1202 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1202 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

#line 1202 "lco.m"
    {
#line 1202 "lco.m"
      return transform_hlds__lco__succeeded = transform_hlds__lco__IntroducedFrom__pred__update_construct__1202__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))));
    }
#line 1202 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1202 "lco.m"
  }
#line 1202 "lco.m"
}

#line 1156 "lco.m"
static void MR_CALL 
transform_hlds__lco__update_construct_8_p_0(
#line 1156 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_9,
#line 1156 "lco.m"
  MR_Word transform_hlds__lco__Subst_10,
#line 1156 "lco.m"
  MR_Word transform_hlds__lco__Goal0_11,
#line 1156 "lco.m"
  MR_Word * transform_hlds__lco__Goal_12,
#line 1156 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_AddrVarFieldIds_0_59,
#line 1156 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_AddrVarFieldIds_60,
#line 1156 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_61,
#line 1156 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_62)
#line 1156 "lco.m"
{
#line 1161 "lco.m"
  {
#line 1161 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1161 "lco.m"
    MR_Word transform_hlds__lco__GoalExpr0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal0_11, (MR_Integer) 0)));
#line 1161 "lco.m"
    MR_Word transform_hlds__lco__GoalInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal0_11, (MR_Integer) 1)));
#line 1218 "lco.m"
    MR_Word transform_hlds__lco__LHS_17;
#line 1218 "lco.m"
    MR_Word transform_hlds__lco__RHS0_18;
#line 1218 "lco.m"
    MR_Word transform_hlds__lco__Mode_19;
#line 1218 "lco.m"
    MR_Word transform_hlds__lco__UnifyContext_21;
#line 1218 "lco.m"
    MR_Word transform_hlds__lco__Var_22;
#line 1218 "lco.m"
    MR_Word transform_hlds__lco__ConsId_23;
#line 1218 "lco.m"
    MR_Word transform_hlds__lco__ArgVars_24;
#line 1218 "lco.m"
    MR_Word transform_hlds__lco__UniModes_25;
#line 1218 "lco.m"
    MR_Word transform_hlds__lco__How_26;
#line 1218 "lco.m"
    MR_Word transform_hlds__lco__IsUnique_27;
#line 1218 "lco.m"
    MR_Word transform_hlds__lco__TermSizeSlot_29;
#line 1164 "lco.m"
    MR_Word transform_hlds__lco__Unification0_20;
#line 1164 "lco.m"
    MR_Word transform_hlds__lco__SubInfo0_28;

#line 1164 "lco.m"
    transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_15)) == (MR_mktag((MR_Integer) 1)));
#line 1164 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 1164 "lco.m"
      {
#line 1164 "lco.m"
        transform_hlds__lco__LHS_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr0_15, (MR_Integer) 0)));
#line 1164 "lco.m"
        transform_hlds__lco__RHS0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr0_15, (MR_Integer) 1)));
#line 1164 "lco.m"
        transform_hlds__lco__Mode_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr0_15, (MR_Integer) 2)));
#line 1164 "lco.m"
        transform_hlds__lco__Unification0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr0_15, (MR_Integer) 3)));
#line 1164 "lco.m"
        transform_hlds__lco__UnifyContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr0_15, (MR_Integer) 4)));
#line 1165 "lco.m"
        transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__Unification0_20)) == (MR_mktag((MR_Integer) 0)));
#line 1165 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1165 "lco.m"
          {
#line 1165 "lco.m"
            transform_hlds__lco__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 0)));
#line 1165 "lco.m"
            transform_hlds__lco__ConsId_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 1)));
#line 1165 "lco.m"
            transform_hlds__lco__ArgVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 2)));
#line 1165 "lco.m"
            transform_hlds__lco__UniModes_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 3)));
#line 1165 "lco.m"
            transform_hlds__lco__How_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 4)));
#line 1165 "lco.m"
            transform_hlds__lco__IsUnique_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 5)));
#line 1165 "lco.m"
            transform_hlds__lco__SubInfo0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 6)));
#line 1170 "lco.m"
            if ((transform_hlds__lco__SubInfo0_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1169 "lco.m"
              {
#line 1169 "lco.m"
                transform_hlds__lco__TermSizeSlot_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1169 "lco.m"
                transform_hlds__lco__succeeded = MR_TRUE;
#line 1169 "lco.m"
              }
#line 1170 "lco.m"
            else
#line 1171 "lco.m"
              {
#line 1171 "lco.m"
                MR_Word transform_hlds__lco__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SubInfo0_28, (MR_Integer) 0)));

#line 1171 "lco.m"
                transform_hlds__lco__TermSizeSlot_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SubInfo0_28, (MR_Integer) 1)));
#line 1171 "lco.m"
                transform_hlds__lco__succeeded = (transform_hlds__lco__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1171 "lco.m"
              }
#line 1165 "lco.m"
          }
#line 1164 "lco.m"
      }
#line 1218 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 1179 "lco.m"
      {
#line 1179 "lco.m"
        MR_Word transform_hlds__lco__HighLevelData_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 7)));
#line 1179 "lco.m"
        MR_Word transform_hlds__lco__VarTypes0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 3)));
#line 1179 "lco.m"
        MR_Word transform_hlds__lco__VarType_32;
#line 1179 "lco.m"
        MR_Word transform_hlds__lco__InstMapDelta0_33;
#line 1179 "lco.m"
        MR_Word transform_hlds__lco__UpdatedArgVars_34;
#line 1179 "lco.m"
        MR_Word transform_hlds__lco__AddrFields_35;
#line 1179 "lco.m"
        MR_Word transform_hlds__lco__InstMapDelta_36;
#line 1179 "lco.m"
        MR_Word transform_hlds__lco__VarTypes_37;
#line 1179 "lco.m"
        MR_Word transform_hlds__lco__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 0)));
#line 1179 "lco.m"
        MR_Word transform_hlds__lco__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 1)));
#line 1179 "lco.m"
        MR_Word transform_hlds__lco__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 2)));
#line 1179 "lco.m"
        MR_Word transform_hlds__lco__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 3)));
#line 1179 "lco.m"
        MR_Word transform_hlds__lco__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 4)));
#line 1179 "lco.m"
        MR_Word transform_hlds__lco__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 5)));
#line 1179 "lco.m"
        MR_Word transform_hlds__lco__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 6)));
#line 1180 "lco.m"
        MR_Word transform_hlds__lco__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 0)));
#line 1180 "lco.m"
        MR_Word transform_hlds__lco__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 1)));
#line 1180 "lco.m"
        MR_Word transform_hlds__lco__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 2)));
#line 1180 "lco.m"
        MR_Word transform_hlds__lco__V_91_91 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 1180 "lco.m"
        MR_Word transform_hlds__lco__V_92_92 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1180 "lco.m"
        MR_Word transform_hlds__lco__V_93_93 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1186 "lco.m"
        MR_Word transform_hlds__lco__V_94_94;
#line 1186 "lco.m"
        MR_Word transform_hlds__lco__V_95_95;
#line 1186 "lco.m"
        MR_Word transform_hlds__lco__V_96_96;
#line 1186 "lco.m"
        MR_Word transform_hlds__lco__V_98_98;
#line 1186 "lco.m"
        MR_Word transform_hlds__lco__V_99_99;
#line 1186 "lco.m"
        MR_Word transform_hlds__lco__V_100_100;
#line 1186 "lco.m"
        MR_Word transform_hlds__lco__V_97_97;

#line 1181 "lco.m"
        {
#line 1181 "lco.m"
          hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__lco__VarTypes0_31, transform_hlds__lco__Var_22, &transform_hlds__lco__VarType_32);
        }
#line 1182 "lco.m"
        {
#line 1182 "lco.m"
          transform_hlds__lco__InstMapDelta0_33 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__lco__GoalInfo0_16);
        }
#line 1183 "lco.m"
        {
#line 1183 "lco.m"
          transform_hlds__lco__update_construct_args_14_p_0(transform_hlds__lco__Subst_10, transform_hlds__lco__HighLevelData_30, transform_hlds__lco__VarType_32, transform_hlds__lco__ConsId_23, (MR_Integer) 1, transform_hlds__lco__ArgVars_24, &transform_hlds__lco__UpdatedArgVars_34, &transform_hlds__lco__AddrFields_35, transform_hlds__lco__InstMapDelta0_33, &transform_hlds__lco__InstMapDelta_36, transform_hlds__lco__STATE_VARIABLE_AddrVarFieldIds_0_59, transform_hlds__lco__STATE_VARIABLE_AddrVarFieldIds_60, transform_hlds__lco__VarTypes0_31, &transform_hlds__lco__VarTypes_37);
        }
#line 1186 "lco.m"
        transform_hlds__lco__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 0)));
#line 1186 "lco.m"
        transform_hlds__lco__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 1)));
#line 1186 "lco.m"
        transform_hlds__lco__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 2)));
#line 1186 "lco.m"
        transform_hlds__lco__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 3)));
#line 1186 "lco.m"
        transform_hlds__lco__V_98_98 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 1186 "lco.m"
        transform_hlds__lco__V_99_99 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1186 "lco.m"
        transform_hlds__lco__V_100_100 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1186 "lco.m"
        {
#line 1186 "lco.m"
          MR_Word base;
#line 1186 "lco.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1186 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_Info_62 = base;
#line 1186 "lco.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__V_94_94));
#line 1186 "lco.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__V_95_95));
#line 1186 "lco.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__V_96_96));
#line 1186 "lco.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lco__VarTypes_37));
#line 1186 "lco.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((transform_hlds__lco__V_98_98 | ((((transform_hlds__lco__V_99_99 << (MR_Integer) 1)) | ((transform_hlds__lco__V_100_100 << (MR_Integer) 2)))))));
#line 1186 "lco.m"
        }
#line 1190 "lco.m"
        if ((transform_hlds__lco__AddrFields_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1189 "lco.m"
          *transform_hlds__lco__Goal_12 = transform_hlds__lco__Goal0_11;
#line 1190 "lco.m"
        else
#line 1191 "lco.m"
          {
#line 1191 "lco.m"
            MR_Word transform_hlds__lco__SubInfo_40;
#line 1191 "lco.m"
            MR_Word transform_hlds__lco__Unification_41;
#line 1191 "lco.m"
            MR_Word transform_hlds__lco__RHS_47;
#line 1191 "lco.m"
            MR_Word transform_hlds__lco__GoalExpr_57;
#line 1191 "lco.m"
            MR_Word transform_hlds__lco__GoalInfo_58;
#line 1191 "lco.m"
            MR_Word transform_hlds__lco__V_67_67;

#line 1192 "lco.m"
            {
#line 1192 "lco.m"
              transform_hlds__lco__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1192 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__V_67_67, 0) = ((MR_Box) (transform_hlds__lco__AddrFields_35));
#line 1192 "lco.m"
            }
#line 1192 "lco.m"
            {
#line 1192 "lco.m"
              transform_hlds__lco__SubInfo_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1192 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__SubInfo_40, 0) = ((MR_Box) (transform_hlds__lco__V_67_67));
#line 1192 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__SubInfo_40, 1) = ((MR_Box) (transform_hlds__lco__TermSizeSlot_29));
#line 1192 "lco.m"
            }
#line 1193 "lco.m"
            {
#line 1193 "lco.m"
              transform_hlds__lco__Unification_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1193 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 0) = ((MR_Box) (transform_hlds__lco__Var_22));
#line 1193 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 1) = ((MR_Box) (transform_hlds__lco__ConsId_23));
#line 1193 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 2) = ((MR_Box) (transform_hlds__lco__UpdatedArgVars_34));
#line 1193 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 3) = ((MR_Box) (transform_hlds__lco__UniModes_25));
#line 1193 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 4) = ((MR_Box) (transform_hlds__lco__How_26));
#line 1193 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 5) = ((MR_Box) (transform_hlds__lco__IsUnique_27));
#line 1193 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 6) = ((MR_Box) (transform_hlds__lco__SubInfo_40));
#line 1193 "lco.m"
            }
#line 1200 "lco.m"
#line 1200 "lco.m"
            switch (MR_tag((MR_Word) transform_hlds__lco__RHS0_18)) {
#line 1200 "lco.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1200 "lco.m"
              case (MR_Integer) 0:
#line 1198 "lco.m"
                {
#line 1199 "lco.m"
                  {
#line 1199 "lco.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_construct\'/8", (MR_String) "var RHS");
#line 1199 "lco.m"
                    return;
                  }
#line 1198 "lco.m"
                }
#line 1200 "lco.m"
                break;
#line 1200 "lco.m"
              case (MR_Integer) 1:
#line 1201 "lco.m"
                {
#line 1201 "lco.m"
                  MR_Word transform_hlds__lco__RHSConsId_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS0_18, (MR_Integer) 0)));
#line 1201 "lco.m"
                  MR_Word transform_hlds__lco__IsExistConstr_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS0_18, (MR_Integer) 1)));
#line 1201 "lco.m"
                  MR_Word transform_hlds__lco__RHSVars0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS0_18, (MR_Integer) 2)));
#line 1201 "lco.m"
                  MR_Word transform_hlds__lco__RHSVars_46;
#line 1201 "lco.m"
                  MR_Word transform_hlds__lco__V_71_71;

#line 1202 "lco.m"
                  {
#line 1202 "lco.m"
                    transform_hlds__lco__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1202 "lco.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__lco__V_71_71, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_7[5]));
#line 1202 "lco.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__lco__V_71_71, 1) = ((MR_Box) (transform_hlds__lco__update_construct_8_p_0_1));
#line 1202 "lco.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__lco__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1202 "lco.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__lco__V_71_71, 3) = ((MR_Box) (transform_hlds__lco__ConsId_23));
#line 1202 "lco.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__lco__V_71_71, 4) = ((MR_Box) (transform_hlds__lco__RHSConsId_43));
#line 1202 "lco.m"
                  }
#line 1202 "lco.m"
                  {
#line 1202 "lco.m"
                    mercury__require__expect_3_p_0(transform_hlds__lco__V_71_71, (MR_String) "transform_hlds.lco", (MR_String) "update_construct: cons_id mismatch");
                  }
#line 1204 "lco.m"
                  {
#line 1204 "lco.m"
                    parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, transform_hlds__lco__Subst_10, transform_hlds__lco__RHSVars0_45, &transform_hlds__lco__RHSVars_46);
                  }
#line 1205 "lco.m"
                  {
#line 1205 "lco.m"
                    transform_hlds__lco__RHS_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1205 "lco.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS_47, 0) = ((MR_Box) (transform_hlds__lco__RHSConsId_43));
#line 1205 "lco.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS_47, 1) = ((MR_Box) (transform_hlds__lco__IsExistConstr_44));
#line 1205 "lco.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS_47, 2) = ((MR_Box) (transform_hlds__lco__RHSVars_46));
#line 1205 "lco.m"
                  }
#line 1201 "lco.m"
                }
#line 1200 "lco.m"
                break;
#line 1200 "lco.m"
              case (MR_Integer) 2:
#line 1207 "lco.m"
                {
#line 1208 "lco.m"
                  {
#line 1208 "lco.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_construct\'/8", (MR_String) "lambda RHS");
#line 1208 "lco.m"
                    return;
                  }
#line 1207 "lco.m"
                }
#line 1200 "lco.m"
                break;
#line 1200 "lco.m"
            }
#line 1210 "lco.m"
            {
#line 1210 "lco.m"
              transform_hlds__lco__GoalExpr_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1210 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_57, 0) = ((MR_Box) (transform_hlds__lco__LHS_17));
#line 1210 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_57, 1) = ((MR_Box) (transform_hlds__lco__RHS_47));
#line 1210 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_57, 2) = ((MR_Box) (transform_hlds__lco__Mode_19));
#line 1210 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_57, 3) = ((MR_Box) (transform_hlds__lco__Unification_41));
#line 1210 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_57, 4) = ((MR_Box) (transform_hlds__lco__UnifyContext_21));
#line 1210 "lco.m"
            }
#line 1215 "lco.m"
            {
#line 1215 "lco.m"
              hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__lco__InstMapDelta_36, transform_hlds__lco__GoalInfo0_16, &transform_hlds__lco__GoalInfo_58);
            }
#line 1216 "lco.m"
            {
#line 1216 "lco.m"
              MR_Word base;
#line 1216 "lco.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1216 "lco.m"
              *transform_hlds__lco__Goal_12 = base;
#line 1216 "lco.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__GoalExpr_57));
#line 1216 "lco.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__GoalInfo_58));
#line 1216 "lco.m"
            }
#line 1191 "lco.m"
          }
#line 1179 "lco.m"
      }
#line 1218 "lco.m"
    else
#line 1219 "lco.m"
      {
#line 1219 "lco.m"
        {
#line 1219 "lco.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_construct\'/8", (MR_String) "not construct");
#line 1219 "lco.m"
          return;
        }
#line 1219 "lco.m"
      }
#line 1161 "lco.m"
  }
#line 1156 "lco.m"
}

#line 1141 "lco.m"
static void MR_CALL 
transform_hlds__lco__create_variant_name_4_p_0(
#line 1141 "lco.m"
  MR_Word transform_hlds__lco__PredOrFunc_5,
#line 1141 "lco.m"
  MR_Integer transform_hlds__lco__VariantNumber_6,
#line 1141 "lco.m"
  MR_String transform_hlds__lco__OrigName_7,
#line 1141 "lco.m"
  MR_String * transform_hlds__lco__VariantName_8)
#line 1141 "lco.m"
{
#line 1144 "lco.m"
  {
#line 1144 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1144 "lco.m"
    MR_String transform_hlds__lco__Prefix_9;
#line 1144 "lco.m"
    MR_String transform_hlds__lco__V_10_10;
#line 1144 "lco.m"
    MR_String transform_hlds__lco__V_11_11;
#line 1144 "lco.m"
    MR_String transform_hlds__lco__V_13_13;

#line 1148 "lco.m"
#line 1148 "lco.m"
    switch (transform_hlds__lco__PredOrFunc_5) {
#line 1148 "lco.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1148 "lco.m"
      case (MR_Integer) 1:
#line 1147 "lco.m"
        transform_hlds__lco__Prefix_9 = (MR_String) "LCMCfn_";
#line 1148 "lco.m"
        break;
#line 1148 "lco.m"
      case (MR_Integer) 0:
#line 1150 "lco.m"
        transform_hlds__lco__Prefix_9 = (MR_String) "LCMCpr_";
#line 1148 "lco.m"
        break;
#line 1148 "lco.m"
    }
#line 1152 "lco.m"
    {
#line 1152 "lco.m"
      transform_hlds__lco__V_13_13 = mercury__string__int_to_string_1_f_0(transform_hlds__lco__VariantNumber_6);
    }
#line 1152 "lco.m"
    {
#line 1152 "lco.m"
      transform_hlds__lco__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__lco__V_13_13);
    }
#line 1152 "lco.m"
    {
#line 1152 "lco.m"
      transform_hlds__lco__V_10_10 = mercury__string__f_43_43_2_f_0(transform_hlds__lco__OrigName_7, transform_hlds__lco__V_11_11);
    }
#line 1152 "lco.m"
    {
#line 1152 "lco.m"
      *transform_hlds__lco__VariantName_8 = mercury__string__f_43_43_2_f_0(transform_hlds__lco__Prefix_9, transform_hlds__lco__V_10_10);
    }
#line 1144 "lco.m"
  }
#line 1141 "lco.m"
}

#line 1104 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__match_existing_variant_3_p_0(
#line 1104 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 1104 "lco.m"
  MR_Word transform_hlds__lco__AddrArgNums_6,
#line 1104 "lco.m"
  MR_Word * transform_hlds__lco__Variant_7)
#line 1104 "lco.m"
{
#line 1107 "lco.m"
  while (MR_TRUE)
#line 1107 "lco.m"
    {
#line 1107 "lco.m"
      /* tailcall optimized into a loop */
#line 1107 "lco.m"
      {
#line 1107 "lco.m"
        MR_bool transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1107 "lco.m"
        MR_Word transform_hlds__lco__Variant0_4;
#line 1107 "lco.m"
        MR_Word transform_hlds__lco__Variants_5;
#line 1108 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_11_11;
#line 1108 "lco.m"
        MR_Word transform_hlds__lco__V_10_10;
#line 1108 "lco.m"
        MR_Word transform_hlds__lco__V_8_8;
#line 1108 "lco.m"
        MR_String transform_hlds__lco__V_9_9;

#line 1107 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1107 "lco.m"
          {
#line 1107 "lco.m"
            transform_hlds__lco__Variant0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 1107 "lco.m"
            transform_hlds__lco__Variants_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 1108 "lco.m"
            transform_hlds__lco__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Variant0_4, (MR_Integer) 0)));
#line 1108 "lco.m"
            transform_hlds__lco__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Variant0_4, (MR_Integer) 1)));
#line 1108 "lco.m"
            transform_hlds__lco__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Variant0_4, (MR_Integer) 2)));
#line 9555 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_11_11 = (MR_Word) &transform_hlds__lco_scalar_common_1[7];
#line 1108 "lco.m"
            {
#line 1108 "lco.m"
              transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_11_11, ((MR_Box) (transform_hlds__lco__AddrArgNums_6)), ((MR_Box) (transform_hlds__lco__V_10_10)));
            }
#line 1110 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 1109 "lco.m"
              {
#line 1109 "lco.m"
                *transform_hlds__lco__Variant_7 = transform_hlds__lco__Variant0_4;
#line 1109 "lco.m"
                transform_hlds__lco__succeeded = MR_TRUE;
#line 1109 "lco.m"
              }
#line 1110 "lco.m"
            else
#line 1111 "lco.m"
              {
#line 1111 "lco.m"
                /* direct tailcall eliminated */
#line 1111 "lco.m"
                {
#line 1111 "lco.m"
                  MR_Word transform_hlds__lco__HeadVar__1__tmp_copy_1 = transform_hlds__lco__Variants_5;

#line 1111 "lco.m"
                  transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__HeadVar__1__tmp_copy_1;
#line 1111 "lco.m"
                }
#line 1111 "lco.m"
                continue;
#line 1111 "lco.m"
              }
#line 1107 "lco.m"
          }
#line 1107 "lco.m"
        return transform_hlds__lco__succeeded;
#line 1107 "lco.m"
      }
#line 1107 "lco.m"
      break;
#line 1107 "lco.m"
    }
#line 1104 "lco.m"
}

#line 1064 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__ensure_variant_exists_8_p_0(
#line 1064 "lco.m"
  MR_Word transform_hlds__lco__PredId_9,
#line 1064 "lco.m"
  MR_Integer transform_hlds__lco__ProcId_10,
#line 1064 "lco.m"
  MR_Word transform_hlds__lco__AddrArgNums_11,
#line 1064 "lco.m"
  MR_Word * transform_hlds__lco__VariantPredProcId_12,
#line 1064 "lco.m"
  MR_Word transform_hlds__lco__SymName_13,
#line 1064 "lco.m"
  MR_Word * transform_hlds__lco__VariantSymName_14,
#line 1064 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_30,
#line 1064 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_31)
#line 1064 "lco.m"
{
#line 1069 "lco.m"
  {
#line 1069 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1069 "lco.m"
    MR_Word transform_hlds__lco__PredProcId_16;
#line 1069 "lco.m"
    MR_Word transform_hlds__lco__CurSCCVariants0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 1)));
#line 1071 "lco.m"
    MR_Word transform_hlds__lco__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 0)));
#line 1071 "lco.m"
    MR_Word transform_hlds__lco__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 2)));
#line 1071 "lco.m"
    MR_Word transform_hlds__lco__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 3)));
#line 1071 "lco.m"
    MR_Word transform_hlds__lco__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 1071 "lco.m"
    MR_Word transform_hlds__lco__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1071 "lco.m"
    MR_Word transform_hlds__lco__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1078 "lco.m"
    MR_Word transform_hlds__lco__ExistingVariant_19;
#line 1073 "lco.m"
    MR_Word transform_hlds__lco__ExistingVariants_18;

#line 1070 "lco.m"
    {
#line 1070 "lco.m"
      transform_hlds__lco__PredProcId_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1070 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__PredProcId_16, 0) = ((MR_Box) (transform_hlds__lco__PredId_9));
#line 1070 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__PredProcId_16, 1) = ((MR_Box) (transform_hlds__lco__ProcId_10));
#line 1070 "lco.m"
    }
#line 1073 "lco.m"
    {
#line 1073 "lco.m"
      transform_hlds__lco__succeeded = mercury__multi_map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0, transform_hlds__lco__CurSCCVariants0_17, ((MR_Box) (transform_hlds__lco__PredProcId_16)), &transform_hlds__lco__ExistingVariants_18);
    }
#line 1073 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 1074 "lco.m"
      {
#line 1074 "lco.m"
        transform_hlds__lco__succeeded = transform_hlds__lco__match_existing_variant_3_p_0(transform_hlds__lco__ExistingVariants_18, transform_hlds__lco__AddrArgNums_11, &transform_hlds__lco__ExistingVariant_19);
      }
#line 1078 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 1076 "lco.m"
      {
#line 1076 "lco.m"
        MR_String transform_hlds__lco__VariantName_78;
#line 1118 "lco.m"
        MR_Word transform_hlds__lco__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ExistingVariant_19, (MR_Integer) 0)));

#line 1118 "lco.m"
        *transform_hlds__lco__VariantPredProcId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ExistingVariant_19, (MR_Integer) 1)));
#line 1118 "lco.m"
        transform_hlds__lco__VariantName_78 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ExistingVariant_19, (MR_Integer) 2)));
#line 1122 "lco.m"
        if (((MR_tag((MR_Word) transform_hlds__lco__SymName_13)) == (MR_mktag((MR_Integer) 1))))
#line 1123 "lco.m"
          {
#line 1123 "lco.m"
            MR_Word transform_hlds__lco__ModuleName_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SymName_13, (MR_Integer) 0)));
#line 1123 "lco.m"
            MR_String transform_hlds__lco___Name_81 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SymName_13, (MR_Integer) 1)));

#line 1124 "lco.m"
            {
#line 1124 "lco.m"
              MR_Word base;
#line 1124 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1124 "lco.m"
              *transform_hlds__lco__VariantSymName_14 = base;
#line 1124 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__ModuleName_80));
#line 1124 "lco.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__VariantName_78));
#line 1124 "lco.m"
            }
#line 1123 "lco.m"
          }
#line 1122 "lco.m"
        else
#line 1121 "lco.m"
          {
#line 1121 "lco.m"
            MR_Word base;
#line 1121 "lco.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1121 "lco.m"
            *transform_hlds__lco__VariantSymName_14 = base;
#line 1121 "lco.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__VariantName_78));
#line 1121 "lco.m"
          }
#line 1076 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_Info_31 = transform_hlds__lco__STATE_VARIABLE_Info_0_30;
#line 1076 "lco.m"
        transform_hlds__lco__succeeded = MR_TRUE;
#line 1076 "lco.m"
      }
#line 1078 "lco.m"
    else
#line 1079 "lco.m"
      {
#line 1079 "lco.m"
        MR_Word transform_hlds__lco__TypeCtorInfo_71_71;
#line 1079 "lco.m"
        MR_Word transform_hlds__lco__TypeCtorInfo_72_72;
#line 1079 "lco.m"
        MR_Word transform_hlds__lco__ModuleInfo0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 0)));
#line 1079 "lco.m"
        MR_Word transform_hlds__lco__ClonePredId_21;
#line 1079 "lco.m"
        MR_Word transform_hlds__lco__PredOrFunc_22;
#line 1079 "lco.m"
        MR_Word transform_hlds__lco__ModuleInfo_23;
#line 1079 "lco.m"
        MR_Integer transform_hlds__lco__VariantNumber_24;
#line 1079 "lco.m"
        MR_String transform_hlds__lco__VariantName_26;
#line 1079 "lco.m"
        MR_Word transform_hlds__lco__NewVariant_28;
#line 1079 "lco.m"
        MR_Word transform_hlds__lco__CurSCCVariants_29;
#line 1079 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_Info_32_32;
#line 1079 "lco.m"
        MR_Word transform_hlds__lco__PredInfo_89;
#line 1079 "lco.m"
        MR_Word transform_hlds__lco__PredTable0_90;
#line 1079 "lco.m"
        MR_Word transform_hlds__lco__PredTable_91;
#line 1079 "lco.m"
        MR_Word transform_hlds__lco__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 1)));
#line 1079 "lco.m"
        MR_Word transform_hlds__lco__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 2)));
#line 1079 "lco.m"
        MR_Word transform_hlds__lco__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 3)));
#line 1079 "lco.m"
        MR_Word transform_hlds__lco__V_49_49 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 1079 "lco.m"
        MR_Word transform_hlds__lco__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1079 "lco.m"
        MR_Word transform_hlds__lco__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1083 "lco.m"
        MR_Word transform_hlds__lco__V_53_53;
#line 1083 "lco.m"
        MR_Word transform_hlds__lco__V_54_54;
#line 1083 "lco.m"
        MR_Word transform_hlds__lco__V_55_55;
#line 1083 "lco.m"
        MR_Word transform_hlds__lco__V_56_56;
#line 1083 "lco.m"
        MR_Word transform_hlds__lco__V_57_57;
#line 1083 "lco.m"
        MR_Word transform_hlds__lco__V_58_58;
#line 1083 "lco.m"
        MR_Word transform_hlds__lco__V_52_52;
#line 1086 "lco.m"
        MR_Word transform_hlds__lco__ExistingVariants_37;
#line 1101 "lco.m"
        MR_Word transform_hlds__lco__V_59_59;
#line 1101 "lco.m"
        MR_Word transform_hlds__lco__V_61_61;
#line 1101 "lco.m"
        MR_Word transform_hlds__lco__V_62_62;
#line 1101 "lco.m"
        MR_Word transform_hlds__lco__V_63_63;
#line 1101 "lco.m"
        MR_Word transform_hlds__lco__V_64_64;
#line 1101 "lco.m"
        MR_Word transform_hlds__lco__V_65_65;
#line 1101 "lco.m"
        MR_Word transform_hlds__lco__V_60_60;

#line 1135 "lco.m"
        {
#line 1135 "lco.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__lco__ModuleInfo0_20, transform_hlds__lco__PredId_9, &transform_hlds__lco__PredInfo_89);
        }
#line 1136 "lco.m"
        {
#line 1136 "lco.m"
          transform_hlds__lco__PredOrFunc_22 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__lco__PredInfo_89);
        }
#line 1137 "lco.m"
        {
#line 1137 "lco.m"
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__lco__ModuleInfo0_20, &transform_hlds__lco__PredTable0_90);
        }
#line 1138 "lco.m"
        {
#line 1138 "lco.m"
          hlds__pred_table__predicate_table_insert_4_p_0(transform_hlds__lco__PredInfo_89, &transform_hlds__lco__ClonePredId_21, transform_hlds__lco__PredTable0_90, &transform_hlds__lco__PredTable_91);
        }
#line 1139 "lco.m"
        {
#line 1139 "lco.m"
          hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__lco__PredTable_91, transform_hlds__lco__ModuleInfo0_20, &transform_hlds__lco__ModuleInfo_23);
        }
#line 1082 "lco.m"
        {
#line 1082 "lco.m"
          MR_Word base;
#line 1082 "lco.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1082 "lco.m"
          *transform_hlds__lco__VariantPredProcId_12 = base;
#line 1082 "lco.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__ClonePredId_21));
#line 1082 "lco.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__ProcId_10));
#line 1082 "lco.m"
        }
#line 1083 "lco.m"
        transform_hlds__lco__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 0)));
#line 1083 "lco.m"
        transform_hlds__lco__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 1)));
#line 1083 "lco.m"
        transform_hlds__lco__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 2)));
#line 1083 "lco.m"
        transform_hlds__lco__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 3)));
#line 1083 "lco.m"
        transform_hlds__lco__V_56_56 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 1083 "lco.m"
        transform_hlds__lco__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1083 "lco.m"
        transform_hlds__lco__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1083 "lco.m"
        {
#line 1083 "lco.m"
          transform_hlds__lco__STATE_VARIABLE_Info_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1083 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, 0) = ((MR_Box) (transform_hlds__lco__ModuleInfo_23));
#line 1083 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, 1) = ((MR_Box) (transform_hlds__lco__V_53_53));
#line 1083 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, 2) = ((MR_Box) (transform_hlds__lco__V_54_54));
#line 1083 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, 3) = ((MR_Box) (transform_hlds__lco__V_55_55));
#line 1083 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, 4) = ((MR_Box) ((transform_hlds__lco__V_56_56 | ((((transform_hlds__lco__V_57_57 << (MR_Integer) 1)) | ((transform_hlds__lco__V_58_58 << (MR_Integer) 2)))))));
#line 1083 "lco.m"
        }
#line 1084 "lco.m"
        {
#line 1084 "lco.m"
          transform_hlds__lco__succeeded = mercury__multi_map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0, transform_hlds__lco__CurSCCVariants0_17, ((MR_Box) (transform_hlds__lco__PredProcId_16)), &transform_hlds__lco__ExistingVariants_37);
        }
#line 1086 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1085 "lco.m"
          {
#line 1085 "lco.m"
            MR_Integer transform_hlds__lco__V_33_33;

#line 1085 "lco.m"
            {
#line 1085 "lco.m"
              transform_hlds__lco__V_33_33 = mercury__list__length_1_f_0((MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0, transform_hlds__lco__ExistingVariants_37);
            }
#line 1085 "lco.m"
            transform_hlds__lco__VariantNumber_24 = (transform_hlds__lco__V_33_33 + (MR_Integer) 1);
#line 1085 "lco.m"
          }
#line 1086 "lco.m"
        else
#line 1087 "lco.m"
          transform_hlds__lco__VariantNumber_24 = (MR_Integer) 1;
#line 1089 "lco.m"
        transform_hlds__lco__succeeded = (transform_hlds__lco__VariantNumber_24 <= (MR_Integer) 4);
#line 1079 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1079 "lco.m"
          {
#line 1094 "lco.m"
            if (((MR_tag((MR_Word) transform_hlds__lco__SymName_13)) == (MR_mktag((MR_Integer) 1))))
#line 1095 "lco.m"
              {
#line 1095 "lco.m"
                MR_Word transform_hlds__lco__ModuleName_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SymName_13, (MR_Integer) 0)));
#line 1095 "lco.m"
                MR_String transform_hlds__lco__Name_38 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SymName_13, (MR_Integer) 1)));

#line 1096 "lco.m"
                {
#line 1096 "lco.m"
                  transform_hlds__lco__create_variant_name_4_p_0(transform_hlds__lco__PredOrFunc_22, transform_hlds__lco__VariantNumber_24, transform_hlds__lco__Name_38, &transform_hlds__lco__VariantName_26);
                }
#line 1097 "lco.m"
                {
#line 1097 "lco.m"
                  MR_Word base;
#line 1097 "lco.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1097 "lco.m"
                  *transform_hlds__lco__VariantSymName_14 = base;
#line 1097 "lco.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__ModuleName_27));
#line 1097 "lco.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__VariantName_26));
#line 1097 "lco.m"
                }
#line 1095 "lco.m"
              }
#line 1094 "lco.m"
            else
#line 1091 "lco.m"
              {
#line 1091 "lco.m"
                MR_String transform_hlds__lco__Name_25 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__SymName_13, (MR_Integer) 0)));

#line 1092 "lco.m"
                {
#line 1092 "lco.m"
                  transform_hlds__lco__create_variant_name_4_p_0(transform_hlds__lco__PredOrFunc_22, transform_hlds__lco__VariantNumber_24, transform_hlds__lco__Name_25, &transform_hlds__lco__VariantName_26);
                }
#line 1093 "lco.m"
                {
#line 1093 "lco.m"
                  MR_Word base;
#line 1093 "lco.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1093 "lco.m"
                  *transform_hlds__lco__VariantSymName_14 = base;
#line 1093 "lco.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__VariantName_26));
#line 1093 "lco.m"
                }
#line 1091 "lco.m"
              }
#line 9961 "transform_hlds.lco.c"
            transform_hlds__lco__TypeCtorInfo_71_71 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 9963 "transform_hlds.lco.c"
            transform_hlds__lco__TypeCtorInfo_72_72 = (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0;
#line 1099 "lco.m"
            {
#line 1099 "lco.m"
              transform_hlds__lco__NewVariant_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1099 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__NewVariant_28, 0) = ((MR_Box) (transform_hlds__lco__AddrArgNums_11));
#line 1099 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__NewVariant_28, 1) = ((MR_Box) (*transform_hlds__lco__VariantPredProcId_12));
#line 1099 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__NewVariant_28, 2) = ((MR_Box) (transform_hlds__lco__VariantName_26));
#line 1099 "lco.m"
            }
#line 1100 "lco.m"
            {
#line 1100 "lco.m"
              mercury__multi_map__set_4_p_0(transform_hlds__lco__TypeCtorInfo_71_71, transform_hlds__lco__TypeCtorInfo_72_72, ((MR_Box) (transform_hlds__lco__PredProcId_16)), ((MR_Box) (transform_hlds__lco__NewVariant_28)), transform_hlds__lco__CurSCCVariants0_17, &transform_hlds__lco__CurSCCVariants_29);
            }
#line 1101 "lco.m"
            transform_hlds__lco__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 0)));
#line 1101 "lco.m"
            transform_hlds__lco__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 1)));
#line 1101 "lco.m"
            transform_hlds__lco__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 2)));
#line 1101 "lco.m"
            transform_hlds__lco__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 3)));
#line 1101 "lco.m"
            transform_hlds__lco__V_63_63 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 1101 "lco.m"
            transform_hlds__lco__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1101 "lco.m"
            transform_hlds__lco__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1101 "lco.m"
            {
#line 1101 "lco.m"
              MR_Word base;
#line 1101 "lco.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1101 "lco.m"
              *transform_hlds__lco__STATE_VARIABLE_Info_31 = base;
#line 1101 "lco.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__V_59_59));
#line 1101 "lco.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__CurSCCVariants_29));
#line 1101 "lco.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__V_61_61));
#line 1101 "lco.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lco__V_62_62));
#line 1101 "lco.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((transform_hlds__lco__V_63_63 | ((((transform_hlds__lco__V_64_64 << (MR_Integer) 1)) | ((transform_hlds__lco__V_65_65 << (MR_Integer) 2)))))));
#line 1101 "lco.m"
            }
#line 1101 "lco.m"
            transform_hlds__lco__succeeded = MR_TRUE;
#line 1079 "lco.m"
          }
#line 1079 "lco.m"
      }
#line 1069 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1069 "lco.m"
  }
#line 1064 "lco.m"
}

#line 1058 "lco.m"
static MR_Box MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0_2(
#line 1058 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1058 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1)
#line 1058 "lco.m"
{
#line 1058 "lco.m"
  {
#line 1058 "lco.m"
    MR_Box transform_hlds__lco__wrapper_arg_2;
#line 1058 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 1058 "lco.m"
    MR_Word transform_hlds__lco__conv1_HeadVar__3_15;

#line 1058 "lco.m"
    {
#line 1058 "lco.m"
      transform_hlds__lco__conv1_HeadVar__3_15 = transform_hlds__lco__IntroducedFrom__func__make_variant_args__1058__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
#line 1058 "lco.m"
    transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv1_HeadVar__3_15));
#line 1058 "lco.m"
    return transform_hlds__lco__wrapper_arg_2;
#line 1058 "lco.m"
  }
#line 1058 "lco.m"
}

#line 1055 "lco.m"
static MR_Box MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0_1(
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
    MR_Word transform_hlds__lco__conv0_HeadVar__2_18;

#line 1055 "lco.m"
    {
#line 1055 "lco.m"
      transform_hlds__lco__conv0_HeadVar__2_18 = transform_hlds__lco__IntroducedFrom__func__make_variant_args__1055__1_1_f_0(((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
#line 1055 "lco.m"
    transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__2_18));
#line 1055 "lco.m"
    return transform_hlds__lco__wrapper_arg_2;
#line 1055 "lco.m"
  }
#line 1055 "lco.m"
}

#line 1049 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0(
#line 1049 "lco.m"
  MR_Word transform_hlds__lco__HighLevelData_5,
#line 1049 "lco.m"
  MR_Word transform_hlds__lco__AddrVarFieldIds_6,
#line 1049 "lco.m"
  MR_Word transform_hlds__lco__Mismatches_7,
#line 1049 "lco.m"
  MR_Word * transform_hlds__lco__VariantArgs_8)
#line 1049 "lco.m"
{
#line 1052 "lco.m"
  {
#line 1052 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1052 "lco.m"
    MR_Word transform_hlds__lco__MakeArg_9;

#line 1056 "lco.m"
#line 1056 "lco.m"
    switch (transform_hlds__lco__HighLevelData_5) {
#line 1056 "lco.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1056 "lco.m"
      case (MR_Integer) 0:
#line 1055 "lco.m"
        transform_hlds__lco__MakeArg_9 = (MR_Word) &transform_hlds__lco_scalar_common_2[12];
#line 1056 "lco.m"
        break;
#line 1056 "lco.m"
      case (MR_Integer) 1:
#line 1058 "lco.m"
        {
#line 1058 "lco.m"
          transform_hlds__lco__MakeArg_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1058 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__MakeArg_9, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_5[1]));
#line 1058 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__MakeArg_9, 1) = ((MR_Box) (transform_hlds__lco__make_variant_args_4_p_0_2));
#line 1058 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__MakeArg_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1058 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__MakeArg_9, 3) = ((MR_Box) (transform_hlds__lco__AddrVarFieldIds_6));
#line 1058 "lco.m"
        }
#line 1056 "lco.m"
        break;
#line 1056 "lco.m"
    }
#line 1062 "lco.m"
    {
#line 1062 "lco.m"
      *transform_hlds__lco__VariantArgs_8 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__lco_scalar_common_2[4], (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0, transform_hlds__lco__MakeArg_9, transform_hlds__lco__Mismatches_7);
    }
#line 1052 "lco.m"
  }
#line 1049 "lco.m"
}

#line 1040 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__make_ref_type_1_f_0(
#line 1040 "lco.m"
  MR_Word transform_hlds__lco__FieldType_3)
#line 1040 "lco.m"
{
#line 1042 "lco.m"
  {
#line 1042 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1042 "lco.m"
    MR_Word transform_hlds__lco__PtrType_4;
#line 1042 "lco.m"
    MR_Word transform_hlds__lco__RefTypeName_5;
#line 1042 "lco.m"
    MR_Word transform_hlds__lco__V_6_6;
#line 1042 "lco.m"
    MR_Word transform_hlds__lco__V_8_8;

#line 1043 "lco.m"
    {
#line 1043 "lco.m"
      transform_hlds__lco__V_6_6 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 1043 "lco.m"
    {
#line 1043 "lco.m"
      transform_hlds__lco__RefTypeName_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1043 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__RefTypeName_5, 0) = ((MR_Box) (transform_hlds__lco__V_6_6));
#line 1043 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__RefTypeName_5, 1) = ((MR_Box) ((MR_String) "store_at_ref_type"));
#line 1043 "lco.m"
    }
#line 1045 "lco.m"
    {
#line 1045 "lco.m"
      transform_hlds__lco__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1045 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__V_8_8, 0) = ((MR_Box) (transform_hlds__lco__FieldType_3));
#line 1045 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__V_8_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1045 "lco.m"
    }
#line 1045 "lco.m"
    {
#line 1045 "lco.m"
      transform_hlds__lco__PtrType_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1045 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__PtrType_4, 0) = ((MR_Box) (transform_hlds__lco__RefTypeName_5));
#line 1045 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__PtrType_4, 1) = ((MR_Box) (transform_hlds__lco__V_8_8));
#line 1045 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__PtrType_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1045 "lco.m"
    }
#line 1042 "lco.m"
    return transform_hlds__lco__PtrType_4;
#line 1042 "lco.m"
  }
#line 1040 "lco.m"
}

#line 1017 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_address_var_5_p_0(
#line 1017 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_6,
#line 1017 "lco.m"
  MR_Word transform_hlds__lco__Var_7,
#line 1017 "lco.m"
  MR_Word * transform_hlds__lco__AddrVar_8,
#line 1017 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_19,
#line 1017 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_20)
#line 1017 "lco.m"
{
#line 1020 "lco.m"
  {
#line 1020 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1020 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_58_58 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1020 "lco.m"
    MR_Word transform_hlds__lco__VarSet0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 2)));
#line 1020 "lco.m"
    MR_Word transform_hlds__lco__VarTypes0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 3)));
#line 1020 "lco.m"
    MR_String transform_hlds__lco__Name_12;
#line 1020 "lco.m"
    MR_String transform_hlds__lco__AddrName_13;
#line 1020 "lco.m"
    MR_Word transform_hlds__lco__VarSet_14;
#line 1020 "lco.m"
    MR_Word transform_hlds__lco__HighLevelData_15;
#line 1020 "lco.m"
    MR_Word transform_hlds__lco__VarTypes_18;
#line 1020 "lco.m"
    MR_Word transform_hlds__lco__V_44_44;
#line 1020 "lco.m"
    MR_Word transform_hlds__lco__V_45_45;
#line 1020 "lco.m"
    MR_Word transform_hlds__lco__V_48_48;
#line 1020 "lco.m"
    MR_Word transform_hlds__lco__V_49_49;
#line 1020 "lco.m"
    MR_Word transform_hlds__lco__V_50_50;
#line 1021 "lco.m"
    MR_Word transform_hlds__lco__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 0)));
#line 1021 "lco.m"
    MR_Word transform_hlds__lco__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 1)));
#line 1021 "lco.m"
    MR_Word transform_hlds__lco__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 1021 "lco.m"
    MR_Word transform_hlds__lco__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1021 "lco.m"
    MR_Word transform_hlds__lco__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1026 "lco.m"
    MR_Word transform_hlds__lco__V_37_37;
#line 1026 "lco.m"
    MR_Word transform_hlds__lco__V_38_38;
#line 1026 "lco.m"
    MR_Word transform_hlds__lco__V_39_39;
#line 1026 "lco.m"
    MR_Word transform_hlds__lco__V_40_40;
#line 1026 "lco.m"
    MR_Word transform_hlds__lco__V_41_41;
#line 1026 "lco.m"
    MR_Word transform_hlds__lco__V_42_42;
#line 1026 "lco.m"
    MR_Word transform_hlds__lco__V_43_43;
#line 1037 "lco.m"
    MR_Word transform_hlds__lco__V_46_46;
#line 1037 "lco.m"
    MR_Word transform_hlds__lco__V_47_47;

#line 1023 "lco.m"
    {
#line 1023 "lco.m"
      mercury__varset__lookup_name_4_p_0(transform_hlds__lco__TypeCtorInfo_58_58, transform_hlds__lco__VarSet0_10, transform_hlds__lco__Var_7, (MR_String) "SCCcallarg", &transform_hlds__lco__Name_12);
    }
#line 1024 "lco.m"
    {
#line 1024 "lco.m"
      transform_hlds__lco__AddrName_13 = mercury__string__f_43_43_2_f_0((MR_String) "Addr", transform_hlds__lco__Name_12);
    }
#line 1025 "lco.m"
    {
#line 1025 "lco.m"
      mercury__varset__new_named_var_4_p_0(transform_hlds__lco__TypeCtorInfo_58_58, transform_hlds__lco__AddrName_13, transform_hlds__lco__AddrVar_8, transform_hlds__lco__VarSet0_10, &transform_hlds__lco__VarSet_14);
    }
#line 1026 "lco.m"
    transform_hlds__lco__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 0)));
#line 1026 "lco.m"
    transform_hlds__lco__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 1)));
#line 1026 "lco.m"
    transform_hlds__lco__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 2)));
#line 1026 "lco.m"
    transform_hlds__lco__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 3)));
#line 1026 "lco.m"
    transform_hlds__lco__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 4)));
#line 1026 "lco.m"
    transform_hlds__lco__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 5)));
#line 1026 "lco.m"
    transform_hlds__lco__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)));
#line 1026 "lco.m"
    transform_hlds__lco__HighLevelData_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 7)));
#line 1032 "lco.m"
#line 1032 "lco.m"
    switch (transform_hlds__lco__HighLevelData_15) {
#line 1032 "lco.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1032 "lco.m"
      case (MR_Integer) 0:
#line 1028 "lco.m"
        {
#line 1028 "lco.m"
          MR_Word transform_hlds__lco__FieldType_16;
#line 1028 "lco.m"
          MR_Word transform_hlds__lco__AddrVarType_17;
#line 1028 "lco.m"
          MR_Word transform_hlds__lco__RefTypeName_61;
#line 1028 "lco.m"
          MR_Word transform_hlds__lco__V_62_62;
#line 1028 "lco.m"
          MR_Word transform_hlds__lco__V_64_64;

#line 1029 "lco.m"
          {
#line 1029 "lco.m"
            hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__lco__VarTypes0_11, transform_hlds__lco__Var_7, &transform_hlds__lco__FieldType_16);
          }
#line 1043 "lco.m"
          {
#line 1043 "lco.m"
            transform_hlds__lco__V_62_62 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
#line 1043 "lco.m"
          {
#line 1043 "lco.m"
            transform_hlds__lco__RefTypeName_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1043 "lco.m"
            MR_hl_field(MR_mktag(1), transform_hlds__lco__RefTypeName_61, 0) = ((MR_Box) (transform_hlds__lco__V_62_62));
#line 1043 "lco.m"
            MR_hl_field(MR_mktag(1), transform_hlds__lco__RefTypeName_61, 1) = ((MR_Box) ((MR_String) "store_at_ref_type"));
#line 1043 "lco.m"
          }
#line 1045 "lco.m"
          {
#line 1045 "lco.m"
            transform_hlds__lco__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1045 "lco.m"
            MR_hl_field(MR_mktag(1), transform_hlds__lco__V_64_64, 0) = ((MR_Box) (transform_hlds__lco__FieldType_16));
#line 1045 "lco.m"
            MR_hl_field(MR_mktag(1), transform_hlds__lco__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1045 "lco.m"
          }
#line 1045 "lco.m"
          {
#line 1045 "lco.m"
            transform_hlds__lco__AddrVarType_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1045 "lco.m"
            MR_hl_field(MR_mktag(1), transform_hlds__lco__AddrVarType_17, 0) = ((MR_Box) (transform_hlds__lco__RefTypeName_61));
#line 1045 "lco.m"
            MR_hl_field(MR_mktag(1), transform_hlds__lco__AddrVarType_17, 1) = ((MR_Box) (transform_hlds__lco__V_64_64));
#line 1045 "lco.m"
            MR_hl_field(MR_mktag(1), transform_hlds__lco__AddrVarType_17, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1045 "lco.m"
          }
#line 1031 "lco.m"
          {
#line 1031 "lco.m"
            hlds__vartypes__add_var_type_4_p_0(*transform_hlds__lco__AddrVar_8, transform_hlds__lco__AddrVarType_17, transform_hlds__lco__VarTypes0_11, &transform_hlds__lco__VarTypes_18);
          }
#line 1028 "lco.m"
        }
#line 1032 "lco.m"
        break;
#line 1032 "lco.m"
      case (MR_Integer) 1:
#line 1035 "lco.m"
        transform_hlds__lco__VarTypes_18 = transform_hlds__lco__VarTypes0_11;
#line 1032 "lco.m"
        break;
#line 1032 "lco.m"
    }
#line 1037 "lco.m"
    transform_hlds__lco__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 0)));
#line 1037 "lco.m"
    transform_hlds__lco__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 1)));
#line 1037 "lco.m"
    transform_hlds__lco__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 2)));
#line 1037 "lco.m"
    transform_hlds__lco__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 3)));
#line 1037 "lco.m"
    transform_hlds__lco__V_48_48 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 1037 "lco.m"
    transform_hlds__lco__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1037 "lco.m"
    transform_hlds__lco__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1038 "lco.m"
    {
#line 1038 "lco.m"
      MR_Word base;
#line 1038 "lco.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1038 "lco.m"
      *transform_hlds__lco__STATE_VARIABLE_Info_20 = base;
#line 1038 "lco.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__V_44_44));
#line 1038 "lco.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__V_45_45));
#line 1038 "lco.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__VarSet_14));
#line 1038 "lco.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lco__VarTypes_18));
#line 1038 "lco.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((transform_hlds__lco__V_48_48 | ((((transform_hlds__lco__V_49_49 << (MR_Integer) 1)) | ((transform_hlds__lco__V_50_50 << (MR_Integer) 2)))))));
#line 1038 "lco.m"
    }
#line 1020 "lco.m"
  }
#line 1017 "lco.m"
}

#line 958 "lco.m"
static void MR_CALL 
transform_hlds__lco__find_args_to_pass_by_addr_10_p_0(
#line 958 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 958 "lco.m"
  MR_Word transform_hlds__lco__UnifyInputVars_2,
#line 958 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 958 "lco.m"
  MR_Integer transform_hlds__lco__ArgNum_4,
#line 958 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__5_5,
#line 958 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6,
#line 958 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Subst_0_7,
#line 958 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Subst_8,
#line 958 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_9,
#line 958 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_10)
#line 958 "lco.m"
{
#line 964 "lco.m"
  {
#line 964 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 964 "lco.m"
    if ((transform_hlds__lco__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 964 "lco.m"
      {
#line 964 "lco.m"
        *transform_hlds__lco__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 964 "lco.m"
        *transform_hlds__lco__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 964 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_Info_10 = transform_hlds__lco__STATE_VARIABLE_Info_0_9;
#line 964 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_Subst_8 = transform_hlds__lco__STATE_VARIABLE_Subst_0_7;
#line 964 "lco.m"
      }
#line 964 "lco.m"
    else
#line 967 "lco.m"
      {
#line 967 "lco.m"
        MR_Word transform_hlds__lco__CallArg_22;
#line 967 "lco.m"
        MR_Word transform_hlds__lco__HeadArg_23;
#line 967 "lco.m"
        MR_Word transform_hlds__lco__CallHeadArgs_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 967 "lco.m"
        MR_Word transform_hlds__lco__UpdatedCallArg_27;
#line 967 "lco.m"
        MR_Word transform_hlds__lco__UpdatedCallArgs_28;
#line 967 "lco.m"
        MR_Word transform_hlds__lco__MismatchesTail_31;
#line 967 "lco.m"
        MR_Word transform_hlds__lco__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
#line 967 "lco.m"
        MR_Integer transform_hlds__lco__V_39_39;
#line 967 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_Subst_40_40;
#line 967 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_Info_41_41;
#line 967 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_Info_48_48;
#line 971 "lco.m"
        MR_Word transform_hlds__lco__CallArgType_32;
#line 971 "lco.m"
        MR_Word transform_hlds__lco__CallArgTypeCtor_33;
#line 971 "lco.m"
        MR_Word transform_hlds__lco__V_43_43;
#line 971 "lco.m"
        MR_Word transform_hlds__lco__V_45_45;
#line 971 "lco.m"
        MR_String transform_hlds__lco__V_46_46;
#line 971 "lco.m"
        MR_Integer transform_hlds__lco__V_47_47;
#line 971 "lco.m"
        MR_Word transform_hlds__lco__V_58_58;
#line 971 "lco.m"
        MR_Word transform_hlds__lco__V_55_55;
#line 971 "lco.m"
        MR_Word transform_hlds__lco__V_56_56;
#line 971 "lco.m"
        MR_Word transform_hlds__lco__V_57_57;
#line 971 "lco.m"
        MR_Word transform_hlds__lco__V_59_59;
#line 971 "lco.m"
        MR_Word transform_hlds__lco__V_60_60;

#line 966 "lco.m"
        transform_hlds__lco__CallArg_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_38_38, (MR_Integer) 0)));
#line 966 "lco.m"
        transform_hlds__lco__HeadArg_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_38_38, (MR_Integer) 1)));
#line 969 "lco.m"
        transform_hlds__lco__V_39_39 = (transform_hlds__lco__ArgNum_4 + (MR_Integer) 1);
#line 968 "lco.m"
        {
#line 968 "lco.m"
          transform_hlds__lco__find_args_to_pass_by_addr_10_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__UnifyInputVars_2, transform_hlds__lco__CallHeadArgs_24, transform_hlds__lco__V_39_39, &transform_hlds__lco__MismatchesTail_31, &transform_hlds__lco__UpdatedCallArgs_28, transform_hlds__lco__STATE_VARIABLE_Subst_0_7, &transform_hlds__lco__STATE_VARIABLE_Subst_40_40, transform_hlds__lco__STATE_VARIABLE_Info_0_9, &transform_hlds__lco__STATE_VARIABLE_Info_41_41);
        }
#line 971 "lco.m"
        transform_hlds__lco__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 0)));
#line 971 "lco.m"
        transform_hlds__lco__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 1)));
#line 971 "lco.m"
        transform_hlds__lco__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 2)));
#line 971 "lco.m"
        transform_hlds__lco__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 3)));
#line 971 "lco.m"
        transform_hlds__lco__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 971 "lco.m"
        transform_hlds__lco__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 971 "lco.m"
        transform_hlds__lco__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 971 "lco.m"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_43_43 == (MR_Integer) 0);
#line 971 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 971 "lco.m"
          {
#line 972 "lco.m"
            {
#line 972 "lco.m"
              hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__lco__V_58_58, transform_hlds__lco__CallArg_22, &transform_hlds__lco__CallArgType_32);
            }
#line 973 "lco.m"
            {
#line 973 "lco.m"
              transform_hlds__lco__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(transform_hlds__lco__CallArgType_32, &transform_hlds__lco__CallArgTypeCtor_33);
            }
#line 971 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 971 "lco.m"
              {
#line 974 "lco.m"
                transform_hlds__lco__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__CallArgTypeCtor_33, (MR_Integer) 0)));
#line 974 "lco.m"
                transform_hlds__lco__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__CallArgTypeCtor_33, (MR_Integer) 1)));
#line 974 "lco.m"
                transform_hlds__lco__succeeded = (transform_hlds__lco__V_47_47 == (MR_Integer) 0);
#line 971 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 971 "lco.m"
                  {
#line 974 "lco.m"
                    transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__V_45_45)) == (MR_mktag((MR_Integer) 0)));
#line 974 "lco.m"
                    if (transform_hlds__lco__succeeded)
#line 974 "lco.m"
                      {
#line 974 "lco.m"
                        transform_hlds__lco__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_45_45, (MR_Integer) 0)));
#line 974 "lco.m"
                        transform_hlds__lco__succeeded = (strcmp(transform_hlds__lco__V_46_46, (MR_String) "float") == 0);
#line 974 "lco.m"
                      }
#line 971 "lco.m"
                  }
#line 971 "lco.m"
              }
#line 971 "lco.m"
          }
#line 977 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 976 "lco.m"
          {
#line 976 "lco.m"
            MR_Word transform_hlds__lco__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 0)));
#line 976 "lco.m"
            MR_Word transform_hlds__lco__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 1)));
#line 976 "lco.m"
            MR_Word transform_hlds__lco__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 2)));
#line 976 "lco.m"
            MR_Word transform_hlds__lco__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 3)));
#line 976 "lco.m"
            MR_Word transform_hlds__lco__V_71_71 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 976 "lco.m"
            MR_Word transform_hlds__lco__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 976 "lco.m"
            MR_Word transform_hlds__lco__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 976 "lco.m"
            {
#line 976 "lco.m"
              transform_hlds__lco__STATE_VARIABLE_Info_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 976 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, 0) = ((MR_Box) (transform_hlds__lco__V_67_67));
#line 976 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, 1) = ((MR_Box) (transform_hlds__lco__V_68_68));
#line 976 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, 2) = ((MR_Box) (transform_hlds__lco__V_69_69));
#line 976 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, 3) = ((MR_Box) (transform_hlds__lco__V_70_70));
#line 976 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, 4) = ((MR_Box) ((transform_hlds__lco__V_71_71 | (((((MR_Integer) 0 << (MR_Integer) 1)) | ((transform_hlds__lco__V_73_73 << (MR_Integer) 2)))))));
#line 976 "lco.m"
            }
#line 976 "lco.m"
          }
#line 977 "lco.m"
        else
#line 977 "lco.m"
          transform_hlds__lco__STATE_VARIABLE_Info_48_48 = transform_hlds__lco__STATE_VARIABLE_Info_41_41;
#line 980 "lco.m"
        {
#line 980 "lco.m"
          transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[3], ((MR_Box) (transform_hlds__lco__CallArg_22)), ((MR_Box) (transform_hlds__lco__HeadArg_23)));
        }
#line 1011 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 981 "lco.m"
          {
#line 981 "lco.m"
            transform_hlds__lco__UpdatedCallArg_27 = transform_hlds__lco__CallArg_22;
#line 982 "lco.m"
            *transform_hlds__lco__HeadVar__5_5 = transform_hlds__lco__MismatchesTail_31;
#line 983 "lco.m"
            {
#line 983 "lco.m"
              transform_hlds__lco__succeeded = mercury__bag__member_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[3], ((MR_Box) (transform_hlds__lco__HeadArg_23)), transform_hlds__lco__UnifyInputVars_2);
            }
#line 1008 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 1007 "lco.m"
              {
#line 1007 "lco.m"
                MR_Word transform_hlds__lco__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 0)));
#line 1007 "lco.m"
                MR_Word transform_hlds__lco__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 1)));
#line 1007 "lco.m"
                MR_Word transform_hlds__lco__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 2)));
#line 1007 "lco.m"
                MR_Word transform_hlds__lco__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 3)));
#line 1007 "lco.m"
                MR_Word transform_hlds__lco__V_78_78 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 1007 "lco.m"
                MR_Word transform_hlds__lco__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1007 "lco.m"
                MR_Word transform_hlds__lco__V_79_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 1007 "lco.m"
                {
#line 1007 "lco.m"
                  MR_Word base;
#line 1007 "lco.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1007 "lco.m"
                  *transform_hlds__lco__STATE_VARIABLE_Info_10 = base;
#line 1007 "lco.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__V_74_74));
#line 1007 "lco.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__V_75_75));
#line 1007 "lco.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__V_76_76));
#line 1007 "lco.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lco__V_77_77));
#line 1007 "lco.m"
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((transform_hlds__lco__V_78_78 | (((((MR_Integer) 0 << (MR_Integer) 1)) | ((transform_hlds__lco__V_80_80 << (MR_Integer) 2)))))));
#line 1007 "lco.m"
                }
#line 1007 "lco.m"
              }
#line 1008 "lco.m"
            else
#line 1008 "lco.m"
              *transform_hlds__lco__STATE_VARIABLE_Info_10 = transform_hlds__lco__STATE_VARIABLE_Info_48_48;
#line 981 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_Subst_8 = transform_hlds__lco__STATE_VARIABLE_Subst_40_40;
#line 981 "lco.m"
          }
#line 1011 "lco.m"
        else
#line 1012 "lco.m"
          {
#line 1012 "lco.m"
            MR_Word transform_hlds__lco__TypeInfo_82_82;
#line 1012 "lco.m"
            MR_Word transform_hlds__lco__V_53_53;

#line 1012 "lco.m"
            {
#line 1012 "lco.m"
              transform_hlds__lco__make_address_var_5_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__CallArg_22, &transform_hlds__lco__UpdatedCallArg_27, transform_hlds__lco__STATE_VARIABLE_Info_48_48, transform_hlds__lco__STATE_VARIABLE_Info_10);
            }
#line 1013 "lco.m"
            {
#line 1013 "lco.m"
              transform_hlds__lco__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1013 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_53_53, 0) = ((MR_Box) (transform_hlds__lco__ArgNum_4));
#line 1013 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_53_53, 1) = ((MR_Box) (transform_hlds__lco__CallArg_22));
#line 1013 "lco.m"
            }
#line 1013 "lco.m"
            {
#line 1013 "lco.m"
              MR_Word base;
#line 1013 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1013 "lco.m"
              *transform_hlds__lco__HeadVar__5_5 = base;
#line 1013 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__V_53_53));
#line 1013 "lco.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__MismatchesTail_31));
#line 1013 "lco.m"
            }
#line 10755 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_82_82 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
#line 1014 "lco.m"
            {
#line 1014 "lco.m"
              mercury__map__det_insert_4_p_0(transform_hlds__lco__TypeInfo_82_82, transform_hlds__lco__TypeInfo_82_82, ((MR_Box) (transform_hlds__lco__CallArg_22)), ((MR_Box) (transform_hlds__lco__UpdatedCallArg_27)), transform_hlds__lco__STATE_VARIABLE_Subst_40_40, transform_hlds__lco__STATE_VARIABLE_Subst_8);
            }
#line 1012 "lco.m"
          }
#line 967 "lco.m"
        {
#line 967 "lco.m"
          MR_Word base;
#line 967 "lco.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 967 "lco.m"
          *transform_hlds__lco__HeadVar__6_6 = base;
#line 967 "lco.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__UpdatedCallArg_27));
#line 967 "lco.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__UpdatedCallArgs_28));
#line 967 "lco.m"
        }
#line 967 "lco.m"
      }
#line 964 "lco.m"
  }
#line 958 "lco.m"
}

#line 930 "lco.m"
static void MR_CALL 
transform_hlds__lco__classify_proc_call_args_7_p_0(
#line 930 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 930 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 930 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 930 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__4_4,
#line 930 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__5_5,
#line 930 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6,
#line 930 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__7_7)
#line 930 "lco.m"
{
#line 934 "lco.m"
  {
#line 934 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 934 "lco.m"
    if ((transform_hlds__lco__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 934 "lco.m"
      if ((transform_hlds__lco__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 934 "lco.m"
        {
#line 934 "lco.m"
          *transform_hlds__lco__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 934 "lco.m"
          *transform_hlds__lco__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 934 "lco.m"
          *transform_hlds__lco__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 934 "lco.m"
        }
#line 934 "lco.m"
      else
#line 935 "lco.m"
        {
#line 936 "lco.m"
          {
#line 936 "lco.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.classify_proc_call_args\'/7", (MR_String) "mismatched lists");
#line 936 "lco.m"
            return;
          }
#line 935 "lco.m"
        }
#line 934 "lco.m"
    else
#line 934 "lco.m"
      {
#line 934 "lco.m"
        MR_Word transform_hlds__lco__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 934 "lco.m"
        MR_Word transform_hlds__lco__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));

#line 934 "lco.m"
        if ((transform_hlds__lco__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 937 "lco.m"
          {
#line 938 "lco.m"
            {
#line 938 "lco.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.classify_proc_call_args\'/7", (MR_String) "mismatched lists");
#line 938 "lco.m"
              return;
            }
#line 937 "lco.m"
          }
#line 934 "lco.m"
        else
#line 940 "lco.m"
          {
#line 940 "lco.m"
            MR_Word transform_hlds__lco__CalleeMode_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__4_4, (MR_Integer) 0)));
#line 940 "lco.m"
            MR_Word transform_hlds__lco__CalleeModes_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__4_4, (MR_Integer) 1)));
#line 940 "lco.m"
            MR_Word transform_hlds__lco__CalleeType_39;
#line 940 "lco.m"
            MR_Word transform_hlds__lco__ArgMode_40;
#line 940 "lco.m"
            MR_Word transform_hlds__lco__STATE_VARIABLE_InArgs_44_44;
#line 940 "lco.m"
            MR_Word transform_hlds__lco__STATE_VARIABLE_OutArgs_45_45;
#line 940 "lco.m"
            MR_Word transform_hlds__lco__STATE_VARIABLE_UnusedArgs_46_46;

#line 941 "lco.m"
            {
#line 941 "lco.m"
              transform_hlds__lco__classify_proc_call_args_7_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__HeadVar__2_2, transform_hlds__lco__V_50_50, transform_hlds__lco__CalleeModes_35, &transform_hlds__lco__STATE_VARIABLE_InArgs_44_44, &transform_hlds__lco__STATE_VARIABLE_OutArgs_45_45, &transform_hlds__lco__STATE_VARIABLE_UnusedArgs_46_46);
            }
#line 943 "lco.m"
            {
#line 943 "lco.m"
              hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__lco__HeadVar__2_2, transform_hlds__lco__V_51_51, &transform_hlds__lco__CalleeType_39);
            }
#line 944 "lco.m"
            {
#line 944 "lco.m"
              check_hlds__mode_util__mode_to_arg_mode_4_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__CalleeMode_34, transform_hlds__lco__CalleeType_39, &transform_hlds__lco__ArgMode_40);
            }
#line 948 "lco.m"
#line 948 "lco.m"
            switch (transform_hlds__lco__ArgMode_40) {
#line 948 "lco.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 948 "lco.m"
              case (MR_Integer) 0:
#line 946 "lco.m"
                {
#line 947 "lco.m"
                  {
#line 947 "lco.m"
                    MR_Word base;
#line 947 "lco.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 947 "lco.m"
                    *transform_hlds__lco__HeadVar__5_5 = base;
#line 947 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__V_51_51));
#line 947 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_InArgs_44_44));
#line 947 "lco.m"
                  }
#line 946 "lco.m"
                  *transform_hlds__lco__HeadVar__6_6 = transform_hlds__lco__STATE_VARIABLE_OutArgs_45_45;
#line 946 "lco.m"
                  *transform_hlds__lco__HeadVar__7_7 = transform_hlds__lco__STATE_VARIABLE_UnusedArgs_46_46;
#line 946 "lco.m"
                }
#line 948 "lco.m"
                break;
#line 948 "lco.m"
              case (MR_Integer) 1:
#line 949 "lco.m"
                {
#line 950 "lco.m"
                  {
#line 950 "lco.m"
                    MR_Word base;
#line 950 "lco.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 950 "lco.m"
                    *transform_hlds__lco__HeadVar__6_6 = base;
#line 950 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__V_51_51));
#line 950 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_OutArgs_45_45));
#line 950 "lco.m"
                  }
#line 949 "lco.m"
                  *transform_hlds__lco__HeadVar__5_5 = transform_hlds__lco__STATE_VARIABLE_InArgs_44_44;
#line 949 "lco.m"
                  *transform_hlds__lco__HeadVar__7_7 = transform_hlds__lco__STATE_VARIABLE_UnusedArgs_46_46;
#line 949 "lco.m"
                }
#line 948 "lco.m"
                break;
#line 948 "lco.m"
              case (MR_Integer) 2:
#line 952 "lco.m"
                {
#line 953 "lco.m"
                  {
#line 953 "lco.m"
                    MR_Word base;
#line 953 "lco.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 953 "lco.m"
                    *transform_hlds__lco__HeadVar__7_7 = base;
#line 953 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__V_51_51));
#line 953 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_UnusedArgs_46_46));
#line 953 "lco.m"
                  }
#line 952 "lco.m"
                  *transform_hlds__lco__HeadVar__5_5 = transform_hlds__lco__STATE_VARIABLE_InArgs_44_44;
#line 952 "lco.m"
                  *transform_hlds__lco__HeadVar__6_6 = transform_hlds__lco__STATE_VARIABLE_OutArgs_45_45;
#line 952 "lco.m"
                }
#line 948 "lco.m"
                break;
#line 948 "lco.m"
            }
#line 940 "lco.m"
          }
#line 934 "lco.m"
      }
#line 934 "lco.m"
  }
#line 930 "lco.m"
}

#line 897 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__update_call_args_6_p_0_1(
#line 897 "lco.m"
  MR_Box transform_hlds__lco__closure_arg)
#line 897 "lco.m"
{
#line 897 "lco.m"
  {
#line 897 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 897 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

#line 897 "lco.m"
    {
#line 897 "lco.m"
      return transform_hlds__lco__succeeded = transform_hlds__lco__IntroducedFrom__pred__update_call_args__897__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))));
    }
#line 897 "lco.m"
    return transform_hlds__lco__succeeded;
#line 897 "lco.m"
  }
#line 897 "lco.m"
}

#line 893 "lco.m"
static void MR_CALL 
transform_hlds__lco__update_call_args_6_p_0(
#line 893 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 893 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 893 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 893 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__4_4,
#line 893 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 893 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6)
#line 893 "lco.m"
{
#line 896 "lco.m"
  {
#line 896 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 896 "lco.m"
    if ((transform_hlds__lco__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 896 "lco.m"
      if ((transform_hlds__lco__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 896 "lco.m"
        {
#line 896 "lco.m"
          MR_Word transform_hlds__lco__V_10_10;

#line 896 "lco.m"
          *transform_hlds__lco__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 897 "lco.m"
          {
#line 897 "lco.m"
            transform_hlds__lco__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 897 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_10_10, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_7[3]));
#line 897 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_10_10, 1) = ((MR_Box) (transform_hlds__lco__update_call_args_6_p_0_1));
#line 897 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 897 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_10_10, 3) = ((MR_Box) (transform_hlds__lco__HeadVar__5_5));
#line 897 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_10_10, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 897 "lco.m"
          }
#line 897 "lco.m"
          {
#line 897 "lco.m"
            mercury__require__expect_4_p_0(transform_hlds__lco__V_10_10, (MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_call_args\'/6", (MR_String) "updating nonexistent arg");
#line 897 "lco.m"
            return;
          }
#line 896 "lco.m"
        }
#line 896 "lco.m"
      else
#line 899 "lco.m"
        {
#line 900 "lco.m"
          {
#line 900 "lco.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_call_args\'/6", (MR_String) "mismatched lists");
#line 900 "lco.m"
            return;
          }
#line 899 "lco.m"
        }
#line 896 "lco.m"
    else
#line 896 "lco.m"
      {
#line 896 "lco.m"
        MR_Word transform_hlds__lco__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 896 "lco.m"
        MR_Word transform_hlds__lco__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));

#line 896 "lco.m"
        if ((transform_hlds__lco__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 901 "lco.m"
          {
#line 902 "lco.m"
            {
#line 902 "lco.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_call_args\'/6", (MR_String) "mismatched lists");
#line 902 "lco.m"
              return;
            }
#line 901 "lco.m"
          }
#line 896 "lco.m"
        else
#line 904 "lco.m"
          {
#line 904 "lco.m"
            MR_Word transform_hlds__lco__Arg_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__4_4, (MR_Integer) 0)));
#line 904 "lco.m"
            MR_Word transform_hlds__lco__Args_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__4_4, (MR_Integer) 1)));
#line 904 "lco.m"
            MR_Word transform_hlds__lco__CalleeType_41;
#line 904 "lco.m"
            MR_Word transform_hlds__lco__ArgMode_42;

#line 905 "lco.m"
            {
#line 905 "lco.m"
              hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__lco__HeadVar__2_2, transform_hlds__lco__Arg_37, &transform_hlds__lco__CalleeType_41);
            }
#line 906 "lco.m"
            {
#line 906 "lco.m"
              check_hlds__mode_util__mode_to_arg_mode_4_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__V_62_62, transform_hlds__lco__CalleeType_41, &transform_hlds__lco__ArgMode_42);
            }
#line 912 "lco.m"
#line 912 "lco.m"
            switch (transform_hlds__lco__ArgMode_42) {
#line 912 "lco.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 912 "lco.m"
              case (MR_Integer) 0:
#line 908 "lco.m"
                {
#line 908 "lco.m"
                  MR_Word transform_hlds__lco__STATE_VARIABLE_UpdatedArgs_55_55;

#line 909 "lco.m"
                  {
#line 909 "lco.m"
                    transform_hlds__lco__update_call_args_6_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__HeadVar__2_2, transform_hlds__lco__V_61_61, transform_hlds__lco__Args_38, transform_hlds__lco__HeadVar__5_5, &transform_hlds__lco__STATE_VARIABLE_UpdatedArgs_55_55);
                  }
#line 911 "lco.m"
                  {
#line 911 "lco.m"
                    MR_Word base;
#line 911 "lco.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 911 "lco.m"
                    *transform_hlds__lco__HeadVar__6_6 = base;
#line 911 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Arg_37));
#line 911 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_UpdatedArgs_55_55));
#line 911 "lco.m"
                  }
#line 908 "lco.m"
                }
#line 912 "lco.m"
                break;
#line 912 "lco.m"
              case (MR_Integer) 1:
#line 913 "lco.m"
                {
#line 913 "lco.m"
                  MR_Word transform_hlds__lco__UpdatedArg_43;
#line 913 "lco.m"
                  MR_Word transform_hlds__lco__STATE_VARIABLE_UpdatedArgs_53_53;
#line 913 "lco.m"
                  MR_Word transform_hlds__lco__STATE_VARIABLE_UpdatedCallOutArgs_52_57;

#line 916 "lco.m"
                  if ((transform_hlds__lco__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 917 "lco.m"
                    {
#line 918 "lco.m"
                      {
#line 918 "lco.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_call_args\'/6", (MR_String) "no UpdatedCallOutArgs");
#line 918 "lco.m"
                        return;
                      }
#line 917 "lco.m"
                    }
#line 916 "lco.m"
                  else
#line 915 "lco.m"
                    {
#line 915 "lco.m"
                      transform_hlds__lco__UpdatedArg_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__5_5, (MR_Integer) 0)));
#line 915 "lco.m"
                      transform_hlds__lco__STATE_VARIABLE_UpdatedCallOutArgs_52_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__5_5, (MR_Integer) 1)));
#line 915 "lco.m"
                    }
#line 920 "lco.m"
                  {
#line 920 "lco.m"
                    transform_hlds__lco__update_call_args_6_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__HeadVar__2_2, transform_hlds__lco__V_61_61, transform_hlds__lco__Args_38, transform_hlds__lco__STATE_VARIABLE_UpdatedCallOutArgs_52_57, &transform_hlds__lco__STATE_VARIABLE_UpdatedArgs_53_53);
                  }
#line 922 "lco.m"
                  {
#line 922 "lco.m"
                    MR_Word base;
#line 922 "lco.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 922 "lco.m"
                    *transform_hlds__lco__HeadVar__6_6 = base;
#line 922 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__UpdatedArg_43));
#line 922 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_UpdatedArgs_53_53));
#line 922 "lco.m"
                  }
#line 913 "lco.m"
                }
#line 912 "lco.m"
                break;
#line 912 "lco.m"
              case (MR_Integer) 2:
#line 924 "lco.m"
                {
#line 925 "lco.m"
                  {
#line 925 "lco.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_call_args\'/6", (MR_String) "top_unused");
#line 925 "lco.m"
                    return;
                  }
#line 924 "lco.m"
                }
#line 912 "lco.m"
                break;
#line 912 "lco.m"
            }
#line 904 "lco.m"
          }
#line 896 "lco.m"
      }
#line 896 "lco.m"
  }
#line 893 "lco.m"
}

#line 853 "lco.m"
static void MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0_2(
#line 853 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 853 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 853 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 853 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_3,
#line 853 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_4,
#line 853 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_5,
#line 853 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_6)
#line 853 "lco.m"
{
#line 853 "lco.m"
  {
#line 853 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 853 "lco.m"
    MR_Word transform_hlds__lco__conv2_Goal_12;
#line 853 "lco.m"
    MR_Word transform_hlds__lco__conv1_STATE_VARIABLE_AddrVarFieldIds_60;
#line 853 "lco.m"
    MR_Word transform_hlds__lco__conv0_STATE_VARIABLE_Info_62;

#line 853 "lco.m"
    {
#line 853 "lco.m"
      transform_hlds__lco__update_construct_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), &transform_hlds__lco__conv2_Goal_12, ((MR_Word) transform_hlds__lco__wrapper_arg_3), &transform_hlds__lco__conv1_STATE_VARIABLE_AddrVarFieldIds_60, ((MR_Word) transform_hlds__lco__wrapper_arg_5), &transform_hlds__lco__conv0_STATE_VARIABLE_Info_62);
    }
#line 853 "lco.m"
    *transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv2_Goal_12));
#line 853 "lco.m"
    *transform_hlds__lco__wrapper_arg_4 = ((MR_Box) (transform_hlds__lco__conv1_STATE_VARIABLE_AddrVarFieldIds_60));
#line 853 "lco.m"
    *transform_hlds__lco__wrapper_arg_6 = ((MR_Box) (transform_hlds__lco__conv0_STATE_VARIABLE_Info_62));
#line 853 "lco.m"
  }
#line 853 "lco.m"
}

#line 851 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0_1(
#line 851 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 851 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1)
#line 851 "lco.m"
{
#line 851 "lco.m"
  {
#line 851 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 851 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

#line 851 "lco.m"
    {
#line 851 "lco.m"
      return transform_hlds__lco__succeeded = transform_hlds__lco__occurs_once_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
#line 851 "lco.m"
    return transform_hlds__lco__succeeded;
#line 851 "lco.m"
  }
#line 851 "lco.m"
}

#line 811 "lco.m"
static void MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0(
#line 811 "lco.m"
  MR_Word transform_hlds__lco__CallGoal_9,
#line 811 "lco.m"
  MR_Word transform_hlds__lco__CallOutArgs_10,
#line 811 "lco.m"
  MR_Word transform_hlds__lco__UnifyGoals_11,
#line 811 "lco.m"
  MR_Word transform_hlds__lco__UnifyInputVars_12,
#line 811 "lco.m"
  MR_Word * transform_hlds__lco__MaybeGoals_13,
#line 811 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_52,
#line 811 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_53,
#line 811 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_15)
#line 811 "lco.m"
{
#line 816 "lco.m"
  {
#line 816 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 816 "lco.m"
    MR_Word transform_hlds__lco__CallGoalExpr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__CallGoal_9, (MR_Integer) 0)));
#line 816 "lco.m"
    MR_Word transform_hlds__lco__CallGoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__CallGoal_9, (MR_Integer) 1)));
#line 816 "lco.m"
    MR_Word transform_hlds__lco__ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_52, (MR_Integer) 0)));
#line 816 "lco.m"
    MR_Word transform_hlds__lco__ProcInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 4)));
#line 816 "lco.m"
    MR_Word transform_hlds__lco__VarTypes_20;
#line 818 "lco.m"
    MR_Word transform_hlds__lco__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_52, (MR_Integer) 1)));
#line 818 "lco.m"
    MR_Word transform_hlds__lco__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_52, (MR_Integer) 2)));
#line 818 "lco.m"
    MR_Word transform_hlds__lco__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_52, (MR_Integer) 3)));
#line 818 "lco.m"
    MR_Word transform_hlds__lco__V_106_106 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_52, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 818 "lco.m"
    MR_Word transform_hlds__lco__V_107_107 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_52, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 818 "lco.m"
    MR_Word transform_hlds__lco__V_108_108 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_52, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 819 "lco.m"
    MR_Word transform_hlds__lco__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 0)));
#line 819 "lco.m"
    MR_Word transform_hlds__lco__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 1)));
#line 819 "lco.m"
    MR_Word transform_hlds__lco__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 2)));
#line 819 "lco.m"
    MR_Word transform_hlds__lco__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 3)));
#line 819 "lco.m"
    MR_Word transform_hlds__lco__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 5)));
#line 819 "lco.m"
    MR_Word transform_hlds__lco__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 6)));
#line 819 "lco.m"
    MR_Word transform_hlds__lco__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 7)));
#line 887 "lco.m"
    MR_Word transform_hlds__lco__PredId_21;
#line 887 "lco.m"
    MR_Integer transform_hlds__lco__ProcId_22;
#line 887 "lco.m"
    MR_Word transform_hlds__lco__Args_23;
#line 887 "lco.m"
    MR_Word transform_hlds__lco__Builtin_24;
#line 887 "lco.m"
    MR_Word transform_hlds__lco__UnifyContext_25;
#line 887 "lco.m"
    MR_Word transform_hlds__lco__UpdatedCallOutArgs_30;
#line 887 "lco.m"
    MR_Word transform_hlds__lco__UpdatedUnifyGoals_36;
#line 887 "lco.m"
    MR_Word transform_hlds__lco__VariantPredProcId_41;
#line 887 "lco.m"
    MR_Word transform_hlds__lco__VariantSymName_42;
#line 887 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_Info_98_98;
#line 823 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_143_143;
#line 823 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_148_148;
#line 823 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_156_156;
#line 823 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_157_157;
#line 823 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_158_158;
#line 823 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_159_159;
#line 823 "lco.m"
    MR_Word transform_hlds__lco__SymName_26;
#line 823 "lco.m"
    MR_Word transform_hlds__lco__CurrProcOutArgs_27;
#line 823 "lco.m"
    MR_Word transform_hlds__lco__CallHeadPairs_28;
#line 823 "lco.m"
    MR_Word transform_hlds__lco__Mismatches_29;
#line 823 "lco.m"
    MR_Word transform_hlds__lco__Subst_31;
#line 823 "lco.m"
    MR_Word transform_hlds__lco__MismatchedCallArgs_35;
#line 823 "lco.m"
    MR_Word transform_hlds__lco__AddrFieldIds_37;
#line 823 "lco.m"
    MR_Word transform_hlds__lco__HighLevelData_39;
#line 823 "lco.m"
    MR_Word transform_hlds__lco__VariantArgs_40;
#line 823 "lco.m"
    MR_Integer transform_hlds__lco__V_54_54;
#line 823 "lco.m"
    MR_Word transform_hlds__lco__V_55_55;
#line 823 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_Info_56_56;
#line 823 "lco.m"
    MR_Word transform_hlds__lco__V_77_77;
#line 823 "lco.m"
    MR_Word transform_hlds__lco__V_78_78;
#line 823 "lco.m"
    MR_Word transform_hlds__lco__V_79_79;
#line 823 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_Info_80_80;
#line 824 "lco.m"
    MR_Word transform_hlds__lco__V_116_116;
#line 824 "lco.m"
    MR_Word transform_hlds__lco__V_117_117;
#line 824 "lco.m"
    MR_Word transform_hlds__lco__V_118_118;
#line 824 "lco.m"
    MR_Word transform_hlds__lco__V_119_119;
#line 824 "lco.m"
    MR_Word transform_hlds__lco__V_120_120;
#line 824 "lco.m"
    MR_Word transform_hlds__lco__V_121_121;
#line 824 "lco.m"
    MR_Word transform_hlds__lco__V_122_122;
#line 847 "lco.m"
    MR_Word transform_hlds__lco__V_33_33;
#line 847 "lco.m"
    MR_Word transform_hlds__lco__V_34_34;
#line 853 "lco.m"
    MR_Box transform_hlds__lco__conv4_AddrFieldIds_37;
#line 853 "lco.m"
    MR_Box transform_hlds__lco__conv3_STATE_VARIABLE_Info_80_80;
#line 869 "lco.m"
    MR_Word transform_hlds__lco__V_129_129;
#line 869 "lco.m"
    MR_Word transform_hlds__lco__V_130_130;
#line 869 "lco.m"
    MR_Word transform_hlds__lco__V_131_131;
#line 869 "lco.m"
    MR_Word transform_hlds__lco__V_132_132;
#line 869 "lco.m"
    MR_Word transform_hlds__lco__V_133_133;
#line 869 "lco.m"
    MR_Word transform_hlds__lco__V_134_134;
#line 869 "lco.m"
    MR_Word transform_hlds__lco__V_135_135;

#line 820 "lco.m"
    {
#line 820 "lco.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lco__ProcInfo_19, &transform_hlds__lco__VarTypes_20);
    }
#line 822 "lco.m"
    transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__CallGoalExpr_16)) == (MR_mktag((MR_Integer) 2)));
#line 822 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 822 "lco.m"
      {
#line 822 "lco.m"
        transform_hlds__lco__PredId_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__CallGoalExpr_16, (MR_Integer) 0)));
#line 822 "lco.m"
        transform_hlds__lco__ProcId_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__lco__CallGoalExpr_16, (MR_Integer) 1)));
#line 822 "lco.m"
        transform_hlds__lco__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__CallGoalExpr_16, (MR_Integer) 2)));
#line 822 "lco.m"
        transform_hlds__lco__Builtin_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__CallGoalExpr_16, (MR_Integer) 3)));
#line 822 "lco.m"
        transform_hlds__lco__UnifyContext_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__CallGoalExpr_16, (MR_Integer) 4)));
#line 822 "lco.m"
        transform_hlds__lco__SymName_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__CallGoalExpr_16, (MR_Integer) 5)));
#line 824 "lco.m"
        transform_hlds__lco__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 0)));
#line 824 "lco.m"
        transform_hlds__lco__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 1)));
#line 824 "lco.m"
        transform_hlds__lco__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 2)));
#line 824 "lco.m"
        transform_hlds__lco__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 3)));
#line 824 "lco.m"
        transform_hlds__lco__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 4)));
#line 824 "lco.m"
        transform_hlds__lco__CurrProcOutArgs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 5)));
#line 824 "lco.m"
        transform_hlds__lco__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 6)));
#line 824 "lco.m"
        transform_hlds__lco__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 7)));
#line 11521 "transform_hlds.lco.c"
        transform_hlds__lco__TypeInfo_143_143 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
#line 825 "lco.m"
        {
#line 825 "lco.m"
          mercury__assoc_list__from_corresponding_lists_3_p_0(transform_hlds__lco__TypeInfo_143_143, transform_hlds__lco__TypeInfo_143_143, transform_hlds__lco__CallOutArgs_10, transform_hlds__lco__CurrProcOutArgs_27, &transform_hlds__lco__CallHeadPairs_28);
        }
#line 828 "lco.m"
        transform_hlds__lco__V_54_54 = (MR_Integer) 1;
#line 828 "lco.m"
        {
#line 828 "lco.m"
          transform_hlds__lco__V_55_55 = mercury__map__init_0_f_0(transform_hlds__lco__TypeInfo_143_143, transform_hlds__lco__TypeInfo_143_143);
        }
#line 827 "lco.m"
        {
#line 827 "lco.m"
          transform_hlds__lco__find_args_to_pass_by_addr_10_p_0(transform_hlds__lco__ConstInfo_15, transform_hlds__lco__UnifyInputVars_12, transform_hlds__lco__CallHeadPairs_28, transform_hlds__lco__V_54_54, &transform_hlds__lco__Mismatches_29, &transform_hlds__lco__UpdatedCallOutArgs_30, transform_hlds__lco__V_55_55, &transform_hlds__lco__Subst_31, transform_hlds__lco__STATE_VARIABLE_Info_0_52, &transform_hlds__lco__STATE_VARIABLE_Info_56_56);
        }
#line 847 "lco.m"
        transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__Mismatches_29)) == (MR_mktag((MR_Integer) 1)));
#line 847 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 847 "lco.m"
          {
#line 847 "lco.m"
            transform_hlds__lco__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__Mismatches_29, (MR_Integer) 0)));
#line 847 "lco.m"
            transform_hlds__lco__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__Mismatches_29, (MR_Integer) 1)));
#line 11550 "transform_hlds.lco.c"
            transform_hlds__lco__TypeCtorInfo_148_148 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 848 "lco.m"
            {
#line 848 "lco.m"
              mercury__assoc_list__values_2_p_0(transform_hlds__lco__TypeCtorInfo_148_148, transform_hlds__lco__TypeInfo_143_143, transform_hlds__lco__Mismatches_29, &transform_hlds__lco__MismatchedCallArgs_35);
            }
#line 851 "lco.m"
            {
#line 851 "lco.m"
              transform_hlds__lco__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 851 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_77_77, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_7[2]));
#line 851 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_77_77, 1) = ((MR_Box) (transform_hlds__lco__transform_call_and_unifies_8_p_0_1));
#line 851 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 851 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_77_77, 3) = ((MR_Box) (transform_hlds__lco__UnifyInputVars_12));
#line 851 "lco.m"
            }
#line 851 "lco.m"
            {
#line 851 "lco.m"
              transform_hlds__lco__succeeded = mercury__list__all_true_2_p_0(transform_hlds__lco__TypeInfo_143_143, transform_hlds__lco__V_77_77, transform_hlds__lco__MismatchedCallArgs_35);
            }
#line 823 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 823 "lco.m"
              {
#line 11580 "transform_hlds.lco.c"
                transform_hlds__lco__TypeCtorInfo_156_156 = (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0;
#line 853 "lco.m"
                {
#line 853 "lco.m"
                  transform_hlds__lco__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 853 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_78_78, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_9[0]));
#line 853 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_78_78, 1) = ((MR_Box) (transform_hlds__lco__transform_call_and_unifies_8_p_0_2));
#line 853 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_78_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 853 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_78_78, 3) = ((MR_Box) (transform_hlds__lco__ConstInfo_15));
#line 853 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_78_78, 4) = ((MR_Box) (transform_hlds__lco__Subst_31));
#line 853 "lco.m"
                }
#line 854 "lco.m"
                {
#line 854 "lco.m"
                  transform_hlds__lco__V_79_79 = mercury__map__init_0_f_0(transform_hlds__lco__TypeInfo_143_143, transform_hlds__lco__TypeCtorInfo_156_156);
                }
#line 11603 "transform_hlds.lco.c"
                transform_hlds__lco__TypeCtorInfo_157_157 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 11605 "transform_hlds.lco.c"
                transform_hlds__lco__TypeInfo_158_158 = (MR_Word) &transform_hlds__lco_scalar_common_2[5];
#line 11607 "transform_hlds.lco.c"
                transform_hlds__lco__TypeCtorInfo_159_159 = (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_info_0;
#line 853 "lco.m"
                {
#line 853 "lco.m"
                  mercury__list__map_foldl2_7_p_0(transform_hlds__lco__TypeCtorInfo_157_157, transform_hlds__lco__TypeCtorInfo_157_157, transform_hlds__lco__TypeInfo_158_158, transform_hlds__lco__TypeCtorInfo_159_159, transform_hlds__lco__V_78_78, transform_hlds__lco__UnifyGoals_11, &transform_hlds__lco__UpdatedUnifyGoals_36, ((MR_Box) (transform_hlds__lco__V_79_79)), &transform_hlds__lco__conv4_AddrFieldIds_37, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_Info_56_56)), &transform_hlds__lco__conv3_STATE_VARIABLE_Info_80_80);
                }
#line 853 "lco.m"
                transform_hlds__lco__AddrFieldIds_37 = ((MR_Word) transform_hlds__lco__conv4_AddrFieldIds_37);
#line 853 "lco.m"
                transform_hlds__lco__STATE_VARIABLE_Info_80_80 = ((MR_Word) transform_hlds__lco__conv3_STATE_VARIABLE_Info_80_80);
#line 869 "lco.m"
                transform_hlds__lco__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 0)));
#line 869 "lco.m"
                transform_hlds__lco__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 1)));
#line 869 "lco.m"
                transform_hlds__lco__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 2)));
#line 869 "lco.m"
                transform_hlds__lco__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 3)));
#line 869 "lco.m"
                transform_hlds__lco__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 4)));
#line 869 "lco.m"
                transform_hlds__lco__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 5)));
#line 869 "lco.m"
                transform_hlds__lco__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 6)));
#line 869 "lco.m"
                transform_hlds__lco__HighLevelData_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 7)));
#line 870 "lco.m"
                {
#line 870 "lco.m"
                  transform_hlds__lco__make_variant_args_4_p_0(transform_hlds__lco__HighLevelData_39, transform_hlds__lco__AddrFieldIds_37, transform_hlds__lco__Mismatches_29, &transform_hlds__lco__VariantArgs_40);
                }
#line 872 "lco.m"
                {
#line 872 "lco.m"
                  transform_hlds__lco__succeeded = transform_hlds__lco__ensure_variant_exists_8_p_0(transform_hlds__lco__PredId_21, transform_hlds__lco__ProcId_22, transform_hlds__lco__VariantArgs_40, &transform_hlds__lco__VariantPredProcId_41, transform_hlds__lco__SymName_26, &transform_hlds__lco__VariantSymName_42, transform_hlds__lco__STATE_VARIABLE_Info_80_80, &transform_hlds__lco__STATE_VARIABLE_Info_98_98);
                }
#line 823 "lco.m"
              }
#line 847 "lco.m"
          }
#line 822 "lco.m"
      }
#line 887 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 875 "lco.m"
      {
#line 875 "lco.m"
        MR_Word transform_hlds__lco__CalleeProcInfo_43;
#line 875 "lco.m"
        MR_Word transform_hlds__lco__CalleeModes_44;
#line 875 "lco.m"
        MR_Word transform_hlds__lco__UpdatedArgs_45;
#line 875 "lco.m"
        MR_Word transform_hlds__lco__VariantPredId_46;
#line 875 "lco.m"
        MR_Integer transform_hlds__lco__VariantProcId_47;
#line 875 "lco.m"
        MR_Word transform_hlds__lco__UpdatedGoalExpr_48;
#line 875 "lco.m"
        MR_Word transform_hlds__lco__UpdatedGoal_50;
#line 875 "lco.m"
        MR_Word transform_hlds__lco__Goals_51;
#line 875 "lco.m"
        MR_Word transform_hlds__lco__V_99_99;
#line 886 "lco.m"
        MR_Word transform_hlds__lco__V_136_136;
#line 886 "lco.m"
        MR_Word transform_hlds__lco__V_137_137;
#line 886 "lco.m"
        MR_Word transform_hlds__lco__V_138_138;
#line 886 "lco.m"
        MR_Word transform_hlds__lco__V_139_139;
#line 886 "lco.m"
        MR_Word transform_hlds__lco__V_140_140;
#line 886 "lco.m"
        MR_Word transform_hlds__lco__V_141_141;
#line 886 "lco.m"
        MR_Word transform_hlds__lco__V_142_142;

#line 875 "lco.m"
        {
#line 875 "lco.m"
          hlds__hlds_module__module_info_proc_info_4_p_0(transform_hlds__lco__ModuleInfo_18, transform_hlds__lco__PredId_21, transform_hlds__lco__ProcId_22, &transform_hlds__lco__CalleeProcInfo_43);
        }
#line 876 "lco.m"
        {
#line 876 "lco.m"
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__lco__CalleeProcInfo_43, &transform_hlds__lco__CalleeModes_44);
        }
#line 877 "lco.m"
        {
#line 877 "lco.m"
          transform_hlds__lco__update_call_args_6_p_0(transform_hlds__lco__ModuleInfo_18, transform_hlds__lco__VarTypes_20, transform_hlds__lco__CalleeModes_44, transform_hlds__lco__Args_23, transform_hlds__lco__UpdatedCallOutArgs_30, &transform_hlds__lco__UpdatedArgs_45);
        }
#line 879 "lco.m"
        transform_hlds__lco__VariantPredId_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantPredProcId_41, (MR_Integer) 0)));
#line 879 "lco.m"
        transform_hlds__lco__VariantProcId_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantPredProcId_41, (MR_Integer) 1)));
#line 880 "lco.m"
        {
#line 880 "lco.m"
          transform_hlds__lco__UpdatedGoalExpr_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 880 "lco.m"
          MR_hl_field(MR_mktag(2), transform_hlds__lco__UpdatedGoalExpr_48, 0) = ((MR_Box) (transform_hlds__lco__VariantPredId_46));
#line 880 "lco.m"
          MR_hl_field(MR_mktag(2), transform_hlds__lco__UpdatedGoalExpr_48, 1) = ((MR_Box) (transform_hlds__lco__VariantProcId_47));
#line 880 "lco.m"
          MR_hl_field(MR_mktag(2), transform_hlds__lco__UpdatedGoalExpr_48, 2) = ((MR_Box) (transform_hlds__lco__UpdatedArgs_45));
#line 880 "lco.m"
          MR_hl_field(MR_mktag(2), transform_hlds__lco__UpdatedGoalExpr_48, 3) = ((MR_Box) (transform_hlds__lco__Builtin_24));
#line 880 "lco.m"
          MR_hl_field(MR_mktag(2), transform_hlds__lco__UpdatedGoalExpr_48, 4) = ((MR_Box) (transform_hlds__lco__UnifyContext_25));
#line 880 "lco.m"
          MR_hl_field(MR_mktag(2), transform_hlds__lco__UpdatedGoalExpr_48, 5) = ((MR_Box) (transform_hlds__lco__VariantSymName_42));
#line 880 "lco.m"
        }
#line 883 "lco.m"
        {
#line 883 "lco.m"
          transform_hlds__lco__UpdatedGoal_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 883 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__UpdatedGoal_50, 0) = ((MR_Box) (transform_hlds__lco__UpdatedGoalExpr_48));
#line 883 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__UpdatedGoal_50, 1) = ((MR_Box) (transform_hlds__lco__CallGoalInfo_17));
#line 883 "lco.m"
        }
#line 884 "lco.m"
        {
#line 884 "lco.m"
          transform_hlds__lco__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 884 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_99_99, 0) = ((MR_Box) (transform_hlds__lco__UpdatedGoal_50));
#line 884 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 884 "lco.m"
        }
#line 884 "lco.m"
        {
#line 884 "lco.m"
          transform_hlds__lco__Goals_51 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__lco__UpdatedUnifyGoals_36, transform_hlds__lco__V_99_99);
        }
#line 885 "lco.m"
        {
#line 885 "lco.m"
          MR_Word base;
#line 885 "lco.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 885 "lco.m"
          *transform_hlds__lco__MaybeGoals_13 = base;
#line 885 "lco.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Goals_51));
#line 885 "lco.m"
        }
#line 886 "lco.m"
        transform_hlds__lco__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_98_98, (MR_Integer) 0)));
#line 886 "lco.m"
        transform_hlds__lco__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_98_98, (MR_Integer) 1)));
#line 886 "lco.m"
        transform_hlds__lco__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_98_98, (MR_Integer) 2)));
#line 886 "lco.m"
        transform_hlds__lco__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_98_98, (MR_Integer) 3)));
#line 886 "lco.m"
        transform_hlds__lco__V_140_140 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_98_98, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 886 "lco.m"
        transform_hlds__lco__V_141_141 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_98_98, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 886 "lco.m"
        transform_hlds__lco__V_142_142 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_98_98, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 886 "lco.m"
        {
#line 886 "lco.m"
          MR_Word base;
#line 886 "lco.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 886 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_Info_53 = base;
#line 886 "lco.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__V_136_136));
#line 886 "lco.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__V_137_137));
#line 886 "lco.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__V_138_138));
#line 886 "lco.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lco__V_139_139));
#line 886 "lco.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((transform_hlds__lco__V_140_140 | ((((transform_hlds__lco__V_141_141 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 2)))))));
#line 886 "lco.m"
        }
#line 875 "lco.m"
      }
#line 887 "lco.m"
    else
#line 890 "lco.m"
      {
#line 890 "lco.m"
        *transform_hlds__lco__MaybeGoals_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 890 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_Info_53 = transform_hlds__lco__STATE_VARIABLE_Info_0_52;
#line 890 "lco.m"
      }
#line 816 "lco.m"
  }
#line 811 "lco.m"
}

#line 775 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_unification_5_p_0_1(
#line 775 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 775 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1)
#line 775 "lco.m"
{
#line 775 "lco.m"
  {
#line 775 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 775 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

#line 775 "lco.m"
    {
#line 775 "lco.m"
      return transform_hlds__lco__succeeded = transform_hlds__lco__acceptable_construct_mode_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
#line 775 "lco.m"
    return transform_hlds__lco__succeeded;
#line 775 "lco.m"
  }
#line 775 "lco.m"
}

#line 761 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_unification_5_p_0(
#line 761 "lco.m"
  MR_Word transform_hlds__lco__Goal_6,
#line 761 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_0_30,
#line 761 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_31,
#line 761 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_32,
#line 761 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_33)
#line 761 "lco.m"
{
#line 764 "lco.m"
  {
#line 764 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 764 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_67_67;
#line 764 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_72_72;
#line 764 "lco.m"
    MR_Word transform_hlds__lco__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_6, (MR_Integer) 0)));
#line 764 "lco.m"
    MR_Word transform_hlds__lco__Unification_14;
#line 764 "lco.m"
    MR_Word transform_hlds__lco__ConstructedVar_16;
#line 764 "lco.m"
    MR_Word transform_hlds__lco__ConsId_17;
#line 764 "lco.m"
    MR_Word transform_hlds__lco__ConstructArgs_18;
#line 764 "lco.m"
    MR_Word transform_hlds__lco__ArgUniModes_19;
#line 764 "lco.m"
    MR_Word transform_hlds__lco__SubInfo_22;
#line 764 "lco.m"
    MR_Word transform_hlds__lco__ModuleInfo_24;
#line 764 "lco.m"
    MR_Word transform_hlds__lco__ConsTag_25;
#line 764 "lco.m"
    MR_Word transform_hlds__lco__V_35_35;
#line 764 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_53_53;
#line 765 "lco.m"
    MR_Word transform_hlds__lco___GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_6, (MR_Integer) 1)));
#line 766 "lco.m"
    MR_Word transform_hlds__lco__V_11_11;
#line 766 "lco.m"
    MR_Word transform_hlds__lco__V_12_12;
#line 766 "lco.m"
    MR_Word transform_hlds__lco__V_13_13;
#line 766 "lco.m"
    MR_Word transform_hlds__lco__V_15_15;
#line 767 "lco.m"
    MR_Word transform_hlds__lco__V_20_20;
#line 767 "lco.m"
    MR_Word transform_hlds__lco__V_21_21;
#line 774 "lco.m"
    MR_Word transform_hlds__lco__V_60_60;
#line 774 "lco.m"
    MR_Word transform_hlds__lco__V_61_61;
#line 774 "lco.m"
    MR_Word transform_hlds__lco__V_62_62;
#line 774 "lco.m"
    MR_Word transform_hlds__lco__V_63_63;
#line 774 "lco.m"
    MR_Word transform_hlds__lco__V_64_64;
#line 774 "lco.m"
    MR_Word transform_hlds__lco__V_65_65;

#line 766 "lco.m"
    transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__GoalExpr_9)) == (MR_mktag((MR_Integer) 1)));
#line 766 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 766 "lco.m"
      {
#line 766 "lco.m"
        transform_hlds__lco__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_9, (MR_Integer) 0)));
#line 766 "lco.m"
        transform_hlds__lco__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_9, (MR_Integer) 1)));
#line 766 "lco.m"
        transform_hlds__lco__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_9, (MR_Integer) 2)));
#line 766 "lco.m"
        transform_hlds__lco__Unification_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_9, (MR_Integer) 3)));
#line 766 "lco.m"
        transform_hlds__lco__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_9, (MR_Integer) 4)));
#line 767 "lco.m"
        transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__Unification_14)) == (MR_mktag((MR_Integer) 0)));
#line 767 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 767 "lco.m"
          {
#line 767 "lco.m"
            transform_hlds__lco__ConstructedVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 0)));
#line 767 "lco.m"
            transform_hlds__lco__ConsId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 1)));
#line 767 "lco.m"
            transform_hlds__lco__ConstructArgs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 2)));
#line 767 "lco.m"
            transform_hlds__lco__ArgUniModes_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 3)));
#line 767 "lco.m"
            transform_hlds__lco__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 4)));
#line 767 "lco.m"
            transform_hlds__lco__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 5)));
#line 767 "lco.m"
            transform_hlds__lco__SubInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 6)));
#line 771 "lco.m"
            if ((transform_hlds__lco__SubInfo_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 770 "lco.m"
              transform_hlds__lco__succeeded = MR_TRUE;
#line 771 "lco.m"
            else
#line 772 "lco.m"
              {
#line 772 "lco.m"
                MR_Word transform_hlds__lco__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SubInfo_22, (MR_Integer) 0)));
#line 772 "lco.m"
                MR_Word transform_hlds__lco__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SubInfo_22, (MR_Integer) 1)));

#line 772 "lco.m"
                transform_hlds__lco__succeeded = (transform_hlds__lco__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 772 "lco.m"
              }
#line 764 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 764 "lco.m"
              {
#line 774 "lco.m"
                transform_hlds__lco__ModuleInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 0)));
#line 774 "lco.m"
                transform_hlds__lco__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 1)));
#line 774 "lco.m"
                transform_hlds__lco__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 2)));
#line 774 "lco.m"
                transform_hlds__lco__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 3)));
#line 774 "lco.m"
                transform_hlds__lco__V_63_63 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 774 "lco.m"
                transform_hlds__lco__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 774 "lco.m"
                transform_hlds__lco__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 11983 "transform_hlds.lco.c"
                transform_hlds__lco__TypeCtorInfo_67_67 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0;
#line 775 "lco.m"
                {
#line 775 "lco.m"
                  transform_hlds__lco__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 775 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_35_35, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_7[1]));
#line 775 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_35_35, 1) = ((MR_Box) (transform_hlds__lco__acceptable_construct_unification_5_p_0_1));
#line 775 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 775 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_35_35, 3) = ((MR_Box) (transform_hlds__lco__ModuleInfo_24));
#line 775 "lco.m"
                }
#line 775 "lco.m"
                {
#line 775 "lco.m"
                  transform_hlds__lco__succeeded = mercury__list__all_true_2_p_0(transform_hlds__lco__TypeCtorInfo_67_67, transform_hlds__lco__V_35_35, transform_hlds__lco__ArgUniModes_19);
                }
#line 764 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 764 "lco.m"
                  {
#line 776 "lco.m"
                    {
#line 776 "lco.m"
                      transform_hlds__lco__ConsTag_25 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(transform_hlds__lco__ModuleInfo_24, transform_hlds__lco__ConsId_17);
                    }
#line 782 "lco.m"
#line 782 "lco.m"
                    switch (MR_tag((MR_Word) transform_hlds__lco__ConsTag_25)) {
#line 782 "lco.m"
                      default:
#line 782 "lco.m"
                        transform_hlds__lco__succeeded = MR_FALSE;
#line 782 "lco.m"
                        break;
#line 782 "lco.m"
                      case (MR_Integer) 0:
#line 782 "lco.m"
#line 782 "lco.m"
                        switch (MR_unmkbody(transform_hlds__lco__ConsTag_25)) {
#line 782 "lco.m"
                          default:
#line 782 "lco.m"
                            transform_hlds__lco__succeeded = MR_FALSE;
#line 782 "lco.m"
                            break;
#line 782 "lco.m"
                          case (MR_Integer) 0:
#line 781 "lco.m"
                            transform_hlds__lco__succeeded = MR_TRUE;
#line 782 "lco.m"
                            break;
#line 782 "lco.m"
                        }
#line 782 "lco.m"
                        break;
#line 782 "lco.m"
                      case (MR_Integer) 3:
#line 782 "lco.m"
#line 782 "lco.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__ConsTag_25, (MR_Integer) 0)))) {
#line 782 "lco.m"
                          default:
#line 782 "lco.m"
                            transform_hlds__lco__succeeded = MR_FALSE;
#line 782 "lco.m"
                            break;
#line 782 "lco.m"
                          case (MR_Integer) 11:
#line 783 "lco.m"
                            transform_hlds__lco__succeeded = MR_TRUE;
#line 782 "lco.m"
                            break;
#line 782 "lco.m"
                          case (MR_Integer) 13:
#line 785 "lco.m"
                            transform_hlds__lco__succeeded = MR_TRUE;
#line 782 "lco.m"
                            break;
#line 782 "lco.m"
                        }
#line 782 "lco.m"
                        break;
#line 782 "lco.m"
                    }
#line 764 "lco.m"
                    if (transform_hlds__lco__succeeded)
#line 764 "lco.m"
                      {
#line 12076 "transform_hlds.lco.c"
                        transform_hlds__lco__TypeInfo_72_72 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
#line 802 "lco.m"
                        {
#line 802 "lco.m"
                          mercury__bag__delete_3_p_0(transform_hlds__lco__TypeInfo_72_72, ((MR_Box) (transform_hlds__lco__ConstructedVar_16)), transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_0_30, &transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_53_53);
                        }
#line 803 "lco.m"
                        {
#line 803 "lco.m"
                          mercury__bag__insert_list_3_p_0(transform_hlds__lco__TypeInfo_72_72, transform_hlds__lco__ConstructArgs_18, transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_53_53, transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_31);
                        }
#line 764 "lco.m"
                        *transform_hlds__lco__STATE_VARIABLE_Info_33 = transform_hlds__lco__STATE_VARIABLE_Info_0_32;
#line 764 "lco.m"
                        transform_hlds__lco__succeeded = MR_TRUE;
#line 764 "lco.m"
                      }
#line 764 "lco.m"
                  }
#line 764 "lco.m"
              }
#line 767 "lco.m"
          }
#line 766 "lco.m"
      }
#line 764 "lco.m"
    return transform_hlds__lco__succeeded;
#line 764 "lco.m"
  }
#line 761 "lco.m"
}

#line 739 "lco.m"
static void MR_CALL 
transform_hlds__lco__partition_dependent_goal_9_p_0(
#line 739 "lco.m"
  MR_Word transform_hlds__lco___Info_10,
#line 739 "lco.m"
  MR_Word transform_hlds__lco___ConstInfo_11,
#line 739 "lco.m"
  MR_Word transform_hlds__lco__Goal_12,
#line 739 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22,
#line 739 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23,
#line 739 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24,
#line 739 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25,
#line 739 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26,
#line 739 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_DelayForVars_27)
#line 739 "lco.m"
{
#line 745 "lco.m"
  {
#line 745 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 745 "lco.m"
    {
#line 745 "lco.m"
      transform_hlds__lco__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_116_105_116_105_111_110_95_100_101_112_101_110_100_101_110_116_95_103_111_97_108_95_95_91_49_44_32_50_93_95_48_9_p_0(transform_hlds__lco__Goal_12, transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22, transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23, transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24, transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25, transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26, transform_hlds__lco__STATE_VARIABLE_DelayForVars_27);
#line 745 "lco.m"
      return;
    }
#line 745 "lco.m"
  }
#line 739 "lco.m"
}

#line 704 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__potentially_moveable_goal_1_p_0(
#line 704 "lco.m"
  MR_Word transform_hlds__lco__Goal_2)
#line 704 "lco.m"
{
#line 706 "lco.m"
  while (MR_TRUE)
#line 706 "lco.m"
    {
#line 706 "lco.m"
      /* tailcall optimized into a loop */
#line 706 "lco.m"
      {
#line 706 "lco.m"
        MR_bool transform_hlds__lco__succeeded;
#line 706 "lco.m"
        MR_Word transform_hlds__lco__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_2, (MR_Integer) 0)));
#line 706 "lco.m"
        MR_Word transform_hlds__lco__GoalInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_2, (MR_Integer) 1)));
#line 706 "lco.m"
        MR_Word transform_hlds__lco__V_44_44;

#line 708 "lco.m"
        {
#line 708 "lco.m"
          transform_hlds__lco__V_44_44 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__lco__GoalInfo_4);
        }
#line 708 "lco.m"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_44_44 == (MR_Integer) 0);
#line 706 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 712 "lco.m"
#line 712 "lco.m"
          switch (MR_tag((MR_Word) transform_hlds__lco__GoalExpr_3)) {
#line 712 "lco.m"
            default:
#line 712 "lco.m"
              transform_hlds__lco__succeeded = MR_FALSE;
#line 712 "lco.m"
              break;
#line 712 "lco.m"
            case (MR_Integer) 1:
#line 711 "lco.m"
              transform_hlds__lco__succeeded = MR_TRUE;
#line 712 "lco.m"
              break;
#line 712 "lco.m"
            case (MR_Integer) 3:
#line 712 "lco.m"
#line 712 "lco.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_3, (MR_Integer) 0)))) {
#line 712 "lco.m"
                default:
#line 712 "lco.m"
                  transform_hlds__lco__succeeded = MR_FALSE;
#line 712 "lco.m"
                  break;
#line 712 "lco.m"
                case (MR_Integer) 5:
#line 713 "lco.m"
                  {
#line 713 "lco.m"
                    MR_Word transform_hlds__lco__Reason_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_3, (MR_Integer) 1)));
#line 713 "lco.m"
                    MR_Word transform_hlds__lco__SubGoal_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_3, (MR_Integer) 2)));
#line 714 "lco.m"
                    MR_Word transform_hlds__lco__V_12_12;
#line 714 "lco.m"
                    MR_Word transform_hlds__lco__V_13_13;

#line 714 "lco.m"
                    transform_hlds__lco__succeeded = ((((MR_tag((MR_Word) transform_hlds__lco__Reason_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_10, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 714 "lco.m"
                    if (transform_hlds__lco__succeeded)
#line 714 "lco.m"
                      {
#line 714 "lco.m"
                        transform_hlds__lco__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_10, (MR_Integer) 1)));
#line 714 "lco.m"
                        transform_hlds__lco__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_10, (MR_Integer) 2)));
#line 715 "lco.m"
                        transform_hlds__lco__succeeded = MR_TRUE;
#line 714 "lco.m"
                      }
#line 714 "lco.m"
                    else
#line 717 "lco.m"
                      {
#line 717 "lco.m"
                        /* direct tailcall eliminated */
#line 717 "lco.m"
                        {
#line 717 "lco.m"
                          MR_Word transform_hlds__lco__Goal__tmp_copy_2 = transform_hlds__lco__SubGoal_11;

#line 717 "lco.m"
                          transform_hlds__lco__Goal_2 = transform_hlds__lco__Goal__tmp_copy_2;
#line 717 "lco.m"
                        }
#line 717 "lco.m"
                        continue;
#line 717 "lco.m"
                      }
#line 713 "lco.m"
                  }
#line 712 "lco.m"
                  break;
#line 712 "lco.m"
                case (MR_Integer) 7:
#line 731 "lco.m"
                  {
#line 732 "lco.m"
                    {
#line 732 "lco.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.potentially_moveable_goal\'/1", (MR_String) "shorthand");
                    }
#line 731 "lco.m"
                    transform_hlds__lco__succeeded = MR_TRUE;
#line 731 "lco.m"
                  }
#line 712 "lco.m"
                  break;
#line 712 "lco.m"
              }
#line 712 "lco.m"
              break;
#line 712 "lco.m"
          }
#line 706 "lco.m"
        return transform_hlds__lco__succeeded;
#line 706 "lco.m"
      }
#line 706 "lco.m"
      break;
#line 706 "lco.m"
    }
#line 704 "lco.m"
}

#line 636 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__divide_rev_conj_8_p_0(
#line 636 "lco.m"
  MR_Word transform_hlds__lco__Info_9,
#line 636 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_10,
#line 636 "lco.m"
  MR_Word transform_hlds__lco__RevGoals0_11,
#line 636 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_AfterGoals_0_19,
#line 636 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_AfterGoals_20,
#line 636 "lco.m"
  MR_Word * transform_hlds__lco__RecGoal_13,
#line 636 "lco.m"
  MR_Word * transform_hlds__lco__RecOutArgs_14,
#line 636 "lco.m"
  MR_Word * transform_hlds__lco__RevBeforeGoals_15)
#line 636 "lco.m"
{
#line 12311 "transform_hlds.lco.c"
  while (MR_TRUE)
#line 12313 "transform_hlds.lco.c"
    {
#line 12315 "transform_hlds.lco.c"
      /* tailcall optimized into a loop */
#line 12317 "transform_hlds.lco.c"
      {
#line 12319 "transform_hlds.lco.c"
        MR_bool transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__RevGoals0_11)) == (MR_mktag((MR_Integer) 1)));
#line 12321 "transform_hlds.lco.c"
        MR_Word transform_hlds__lco__RevGoal_16;
#line 12323 "transform_hlds.lco.c"
        MR_Word transform_hlds__lco__RevGoalsTail_17;
#line 655 "lco.m"
        MR_Word transform_hlds__lco__OutArgs_18;
#line 669 "lco.m"
        MR_Word transform_hlds__lco__TypeCtorInfo_70_91;
#line 669 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_72_93;
#line 669 "lco.m"
        MR_Word transform_hlds__lco__GoalExpr_30;
#line 669 "lco.m"
        MR_Word transform_hlds__lco__GoalInfo_31;
#line 669 "lco.m"
        MR_Word transform_hlds__lco__PredId_32;
#line 669 "lco.m"
        MR_Integer transform_hlds__lco__ProcId_33;
#line 669 "lco.m"
        MR_Word transform_hlds__lco__Args_34;
#line 669 "lco.m"
        MR_Word transform_hlds__lco__ModuleInfo_38;
#line 669 "lco.m"
        MR_Word transform_hlds__lco__ProcInfo_39;
#line 669 "lco.m"
        MR_Word transform_hlds__lco__VarTypes_40;
#line 669 "lco.m"
        MR_Word transform_hlds__lco__CalleeProcInfo_41;
#line 669 "lco.m"
        MR_Word transform_hlds__lco__CalleeArgModes_42;
#line 669 "lco.m"
        MR_Word transform_hlds__lco__UnusedArgs_44;
#line 669 "lco.m"
        MR_Integer transform_hlds__lco__NumOutArgs_46;
#line 669 "lco.m"
        MR_Word transform_hlds__lco__CurrProcOutArgs_47;
#line 669 "lco.m"
        MR_Integer transform_hlds__lco__NumCurrProcOutArgs_48;
#line 669 "lco.m"
        MR_Word transform_hlds__lco__V_49_49;
#line 669 "lco.m"
        MR_Word transform_hlds__lco__V_50_50;
#line 669 "lco.m"
        MR_Word transform_hlds__lco__V_51_51;
#line 669 "lco.m"
        MR_Word transform_hlds__lco__V_94_94;
#line 671 "lco.m"
        MR_Word transform_hlds__lco___Builtin_35;
#line 671 "lco.m"
        MR_Word transform_hlds__lco___UnifyContext_36;
#line 671 "lco.m"
        MR_Word transform_hlds__lco___SymName_37;
#line 673 "lco.m"
        MR_Word transform_hlds__lco__V_57_57;
#line 673 "lco.m"
        MR_Word transform_hlds__lco__V_58_58;
#line 673 "lco.m"
        MR_Word transform_hlds__lco__V_59_59;
#line 673 "lco.m"
        MR_Word transform_hlds__lco__V_60_60;
#line 673 "lco.m"
        MR_Word transform_hlds__lco__V_61_61;
#line 673 "lco.m"
        MR_Word transform_hlds__lco__V_62_62;
#line 673 "lco.m"
        MR_Word transform_hlds__lco__V_63_63;
#line 674 "lco.m"
        MR_Word transform_hlds__lco__V_64_64;
#line 674 "lco.m"
        MR_Word transform_hlds__lco__V_65_65;
#line 674 "lco.m"
        MR_Word transform_hlds__lco__V_66_66;
#line 674 "lco.m"
        MR_Word transform_hlds__lco__V_67_67;
#line 674 "lco.m"
        MR_Word transform_hlds__lco__V_69_69;
#line 674 "lco.m"
        MR_Word transform_hlds__lco__V_70_70;
#line 676 "lco.m"
        MR_Word transform_hlds__lco__V_71_71;
#line 676 "lco.m"
        MR_Word transform_hlds__lco__V_72_72;
#line 676 "lco.m"
        MR_Word transform_hlds__lco__V_73_73;
#line 676 "lco.m"
        MR_Word transform_hlds__lco__V_74_74;
#line 676 "lco.m"
        MR_Word transform_hlds__lco__V_75_75;
#line 676 "lco.m"
        MR_Word transform_hlds__lco__V_76_76;
#line 682 "lco.m"
        MR_Word transform_hlds__lco___InArgs_43;
#line 692 "lco.m"
        MR_Word transform_hlds__lco__V_84_84;
#line 692 "lco.m"
        MR_Word transform_hlds__lco__V_85_85;
#line 692 "lco.m"
        MR_Word transform_hlds__lco__V_86_86;
#line 692 "lco.m"
        MR_Word transform_hlds__lco__V_87_87;
#line 692 "lco.m"
        MR_Word transform_hlds__lco__V_88_88;
#line 692 "lco.m"
        MR_Word transform_hlds__lco__V_89_89;
#line 692 "lco.m"
        MR_Word transform_hlds__lco__V_90_90;

#line 12428 "transform_hlds.lco.c"
        if (transform_hlds__lco__succeeded)
#line 12430 "transform_hlds.lco.c"
          {
#line 12432 "transform_hlds.lco.c"
            transform_hlds__lco__RevGoal_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__RevGoals0_11, (MR_Integer) 0)));
#line 12434 "transform_hlds.lco.c"
            transform_hlds__lco__RevGoalsTail_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__RevGoals0_11, (MR_Integer) 1)));
#line 670 "lco.m"
            transform_hlds__lco__GoalExpr_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__RevGoal_16, (MR_Integer) 0)));
#line 670 "lco.m"
            transform_hlds__lco__GoalInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__RevGoal_16, (MR_Integer) 1)));
#line 671 "lco.m"
            transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__GoalExpr_30)) == (MR_mktag((MR_Integer) 2)));
#line 671 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 671 "lco.m"
              {
#line 671 "lco.m"
                transform_hlds__lco__PredId_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr_30, (MR_Integer) 0)));
#line 671 "lco.m"
                transform_hlds__lco__ProcId_33 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr_30, (MR_Integer) 1)));
#line 671 "lco.m"
                transform_hlds__lco__Args_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr_30, (MR_Integer) 2)));
#line 671 "lco.m"
                transform_hlds__lco___Builtin_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr_30, (MR_Integer) 3)));
#line 671 "lco.m"
                transform_hlds__lco___UnifyContext_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr_30, (MR_Integer) 4)));
#line 671 "lco.m"
                transform_hlds__lco___SymName_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr_30, (MR_Integer) 5)));
#line 673 "lco.m"
                transform_hlds__lco__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 0)));
#line 673 "lco.m"
                transform_hlds__lco__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 1)));
#line 673 "lco.m"
                transform_hlds__lco__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 2)));
#line 673 "lco.m"
                transform_hlds__lco__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 3)));
#line 673 "lco.m"
                transform_hlds__lco__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 4)));
#line 673 "lco.m"
                transform_hlds__lco__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 5)));
#line 673 "lco.m"
                transform_hlds__lco__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 6)));
#line 673 "lco.m"
                transform_hlds__lco__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 7)));
#line 12474 "transform_hlds.lco.c"
                transform_hlds__lco__TypeCtorInfo_70_91 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 673 "lco.m"
                {
#line 673 "lco.m"
                  transform_hlds__lco__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 673 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_49_49, 0) = ((MR_Box) (transform_hlds__lco__PredId_32));
#line 673 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_49_49, 1) = ((MR_Box) (transform_hlds__lco__ProcId_33));
#line 673 "lco.m"
                }
#line 673 "lco.m"
                {
#line 673 "lco.m"
                  transform_hlds__lco__succeeded = mercury__set__member_2_p_0(transform_hlds__lco__TypeCtorInfo_70_91, ((MR_Box) (transform_hlds__lco__V_49_49)), transform_hlds__lco__V_50_50);
                }
#line 669 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 669 "lco.m"
                  {
#line 674 "lco.m"
                    {
#line 674 "lco.m"
                      transform_hlds__lco__V_51_51 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__lco__GoalInfo_31);
                    }
#line 674 "lco.m"
                    transform_hlds__lco__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 0)));
#line 674 "lco.m"
                    transform_hlds__lco__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 1)));
#line 674 "lco.m"
                    transform_hlds__lco__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 2)));
#line 674 "lco.m"
                    transform_hlds__lco__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 3)));
#line 674 "lco.m"
                    transform_hlds__lco__ProcInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 4)));
#line 674 "lco.m"
                    transform_hlds__lco__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 5)));
#line 674 "lco.m"
                    transform_hlds__lco__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 6)));
#line 674 "lco.m"
                    transform_hlds__lco__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 7)));
#line 674 "lco.m"
                    transform_hlds__lco__succeeded = (transform_hlds__lco__V_51_51 == transform_hlds__lco__V_94_94);
#line 669 "lco.m"
                    if (transform_hlds__lco__succeeded)
#line 669 "lco.m"
                      {
#line 676 "lco.m"
                        transform_hlds__lco__ModuleInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_9, (MR_Integer) 0)));
#line 676 "lco.m"
                        transform_hlds__lco__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_9, (MR_Integer) 1)));
#line 676 "lco.m"
                        transform_hlds__lco__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_9, (MR_Integer) 2)));
#line 676 "lco.m"
                        transform_hlds__lco__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_9, (MR_Integer) 3)));
#line 676 "lco.m"
                        transform_hlds__lco__V_74_74 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_9, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 676 "lco.m"
                        transform_hlds__lco__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_9, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 676 "lco.m"
                        transform_hlds__lco__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_9, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 678 "lco.m"
                        {
#line 678 "lco.m"
                          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lco__ProcInfo_39, &transform_hlds__lco__VarTypes_40);
                        }
#line 680 "lco.m"
                        {
#line 680 "lco.m"
                          hlds__hlds_module__module_info_proc_info_4_p_0(transform_hlds__lco__ModuleInfo_38, transform_hlds__lco__PredId_32, transform_hlds__lco__ProcId_33, &transform_hlds__lco__CalleeProcInfo_41);
                        }
#line 681 "lco.m"
                        {
#line 681 "lco.m"
                          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__lco__CalleeProcInfo_41, &transform_hlds__lco__CalleeArgModes_42);
                        }
#line 682 "lco.m"
                        {
#line 682 "lco.m"
                          transform_hlds__lco__classify_proc_call_args_7_p_0(transform_hlds__lco__ModuleInfo_38, transform_hlds__lco__VarTypes_40, transform_hlds__lco__Args_34, transform_hlds__lco__CalleeArgModes_42, &transform_hlds__lco___InArgs_43, &transform_hlds__lco__OutArgs_18, &transform_hlds__lco__UnusedArgs_44);
                        }
#line 684 "lco.m"
                        transform_hlds__lco__succeeded = (transform_hlds__lco__UnusedArgs_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 669 "lco.m"
                        if (transform_hlds__lco__succeeded)
#line 669 "lco.m"
                          {
#line 12562 "transform_hlds.lco.c"
                            transform_hlds__lco__TypeInfo_72_93 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
#line 691 "lco.m"
                            {
#line 691 "lco.m"
                              mercury__list__length_2_p_0(transform_hlds__lco__TypeInfo_72_93, transform_hlds__lco__OutArgs_18, &transform_hlds__lco__NumOutArgs_46);
                            }
#line 692 "lco.m"
                            transform_hlds__lco__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 0)));
#line 692 "lco.m"
                            transform_hlds__lco__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 1)));
#line 692 "lco.m"
                            transform_hlds__lco__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 2)));
#line 692 "lco.m"
                            transform_hlds__lco__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 3)));
#line 692 "lco.m"
                            transform_hlds__lco__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 4)));
#line 692 "lco.m"
                            transform_hlds__lco__CurrProcOutArgs_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 5)));
#line 692 "lco.m"
                            transform_hlds__lco__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 6)));
#line 692 "lco.m"
                            transform_hlds__lco__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_10, (MR_Integer) 7)));
#line 693 "lco.m"
                            {
#line 693 "lco.m"
                              mercury__list__length_2_p_0(transform_hlds__lco__TypeInfo_72_93, transform_hlds__lco__CurrProcOutArgs_47, &transform_hlds__lco__NumCurrProcOutArgs_48);
                            }
#line 694 "lco.m"
                            transform_hlds__lco__succeeded = (transform_hlds__lco__NumOutArgs_46 == transform_hlds__lco__NumCurrProcOutArgs_48);
#line 669 "lco.m"
                          }
#line 669 "lco.m"
                      }
#line 669 "lco.m"
                  }
#line 671 "lco.m"
              }
#line 655 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 652 "lco.m"
              {
#line 652 "lco.m"
                *transform_hlds__lco__RecGoal_13 = transform_hlds__lco__RevGoal_16;
#line 653 "lco.m"
                *transform_hlds__lco__RecOutArgs_14 = transform_hlds__lco__OutArgs_18;
#line 654 "lco.m"
                *transform_hlds__lco__RevBeforeGoals_15 = transform_hlds__lco__RevGoalsTail_17;
#line 652 "lco.m"
                *transform_hlds__lco__STATE_VARIABLE_AfterGoals_20 = transform_hlds__lco__STATE_VARIABLE_AfterGoals_0_19;
#line 652 "lco.m"
                transform_hlds__lco__succeeded = MR_TRUE;
#line 652 "lco.m"
              }
#line 655 "lco.m"
            else
#line 661 "lco.m"
              {
#line 661 "lco.m"
                MR_Word transform_hlds__lco__TypeCtorInfo_23_23;
#line 661 "lco.m"
                MR_Word transform_hlds__lco__STATE_VARIABLE_AfterGoals_21_21;

#line 656 "lco.m"
                {
#line 656 "lco.m"
                  transform_hlds__lco__succeeded = transform_hlds__lco__potentially_moveable_goal_1_p_0(transform_hlds__lco__RevGoal_16);
                }
#line 661 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 661 "lco.m"
                  {
#line 12634 "transform_hlds.lco.c"
                    transform_hlds__lco__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 658 "lco.m"
                    {
#line 658 "lco.m"
                      mercury__list__cons_3_p_0(transform_hlds__lco__TypeCtorInfo_23_23, ((MR_Box) (transform_hlds__lco__RevGoal_16)), transform_hlds__lco__STATE_VARIABLE_AfterGoals_0_19, &transform_hlds__lco__STATE_VARIABLE_AfterGoals_21_21);
                    }
#line 659 "lco.m"
                    /* direct tailcall eliminated */
#line 659 "lco.m"
                    {
#line 659 "lco.m"
                      MR_Word transform_hlds__lco__RevGoals0__tmp_copy_11 = transform_hlds__lco__RevGoalsTail_17;
#line 659 "lco.m"
                      MR_Word transform_hlds__lco__STATE_VARIABLE_AfterGoals_0__tmp_copy_19 = transform_hlds__lco__STATE_VARIABLE_AfterGoals_21_21;

#line 659 "lco.m"
                      transform_hlds__lco__STATE_VARIABLE_AfterGoals_0_19 = transform_hlds__lco__STATE_VARIABLE_AfterGoals_0__tmp_copy_19;
#line 659 "lco.m"
                      transform_hlds__lco__RevGoals0_11 = transform_hlds__lco__RevGoals0__tmp_copy_11;
#line 659 "lco.m"
                    }
#line 659 "lco.m"
                    continue;
#line 661 "lco.m"
                  }
#line 661 "lco.m"
              }
#line 12662 "transform_hlds.lco.c"
          }
#line 12664 "transform_hlds.lco.c"
        return transform_hlds__lco__succeeded;
#line 12666 "transform_hlds.lco.c"
      }
#line 12668 "transform_hlds.lco.c"
      break;
#line 12670 "transform_hlds.lco.c"
    }
#line 636 "lco.m"
}

#line 606 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0_2(
#line 606 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 606 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 606 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 606 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 606 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 606 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5)
#line 606 "lco.m"
{
#line 606 "lco.m"
  {
#line 606 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 606 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 606 "lco.m"
    MR_Word transform_hlds__lco__conv7_STATE_VARIABLE_UnifyInputVars_31;
#line 606 "lco.m"
    MR_Word transform_hlds__lco__conv6_STATE_VARIABLE_Info_33;

#line 606 "lco.m"
    {
#line 606 "lco.m"
      transform_hlds__lco__succeeded = transform_hlds__lco__acceptable_construct_unification_5_p_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2), &transform_hlds__lco__conv7_STATE_VARIABLE_UnifyInputVars_31, ((MR_Word) transform_hlds__lco__wrapper_arg_4), &transform_hlds__lco__conv6_STATE_VARIABLE_Info_33);
    }
#line 606 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 606 "lco.m"
      {
#line 606 "lco.m"
        *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv7_STATE_VARIABLE_UnifyInputVars_31));
#line 606 "lco.m"
        *transform_hlds__lco__wrapper_arg_5 = ((MR_Box) (transform_hlds__lco__conv6_STATE_VARIABLE_Info_33));
#line 606 "lco.m"
        transform_hlds__lco__succeeded = MR_TRUE;
#line 606 "lco.m"
      }
#line 606 "lco.m"
    return transform_hlds__lco__succeeded;
#line 606 "lco.m"
  }
#line 606 "lco.m"
}

#line 602 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0_1(
#line 602 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 602 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 602 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 602 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 602 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 602 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5,
#line 602 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_6,
#line 602 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_7)
#line 602 "lco.m"
{
#line 602 "lco.m"
  {
#line 602 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 602 "lco.m"
    MR_Word transform_hlds__lco__conv2_STATE_VARIABLE_RevDependentGoals_23;
#line 602 "lco.m"
    MR_Word transform_hlds__lco__conv1_STATE_VARIABLE_RevNonDependentGoals_25;
#line 602 "lco.m"
    MR_Word transform_hlds__lco__conv0_STATE_VARIABLE_DelayForVars_27;

#line 602 "lco.m"
    {
#line 602 "lco.m"
      transform_hlds__lco__partition_dependent_goal_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2), &transform_hlds__lco__conv2_STATE_VARIABLE_RevDependentGoals_23, ((MR_Word) transform_hlds__lco__wrapper_arg_4), &transform_hlds__lco__conv1_STATE_VARIABLE_RevNonDependentGoals_25, ((MR_Word) transform_hlds__lco__wrapper_arg_6), &transform_hlds__lco__conv0_STATE_VARIABLE_DelayForVars_27);
    }
#line 602 "lco.m"
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv2_STATE_VARIABLE_RevDependentGoals_23));
#line 602 "lco.m"
    *transform_hlds__lco__wrapper_arg_5 = ((MR_Box) (transform_hlds__lco__conv1_STATE_VARIABLE_RevNonDependentGoals_25));
#line 602 "lco.m"
    *transform_hlds__lco__wrapper_arg_7 = ((MR_Box) (transform_hlds__lco__conv0_STATE_VARIABLE_DelayForVars_27));
#line 602 "lco.m"
  }
#line 602 "lco.m"
}

#line 592 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0(
#line 592 "lco.m"
  MR_Word transform_hlds__lco__Goals0_6,
#line 592 "lco.m"
  MR_Word * transform_hlds__lco__MaybeGoals_7,
#line 592 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_26,
#line 592 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_27,
#line 592 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_9)
#line 592 "lco.m"
{
#line 595 "lco.m"
  {
#line 595 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 595 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_39_39 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 595 "lco.m"
    MR_Word transform_hlds__lco__RevGoals0_10;
#line 622 "lco.m"
    MR_Word transform_hlds__lco__RecGoal_12;
#line 622 "lco.m"
    MR_Word transform_hlds__lco__RecOutArgs_13;
#line 622 "lco.m"
    MR_Word transform_hlds__lco__RevBeforeGoals_14;
#line 622 "lco.m"
    MR_Word transform_hlds__lco__RevAfterDependentGoals_18;
#line 622 "lco.m"
    MR_Word transform_hlds__lco__RevAfterNonDependentGoals_19;
#line 622 "lco.m"
    MR_Word transform_hlds__lco__UnifyInputVars_21;
#line 622 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_Info_34_34;
#line 599 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_40_40;
#line 599 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_48_48;
#line 599 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_49_49;
#line 599 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_55_55;
#line 599 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_56_56;
#line 599 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_57_57;
#line 599 "lco.m"
    MR_Word transform_hlds__lco__AfterGoals_11;
#line 599 "lco.m"
    MR_Word transform_hlds__lco__DelayForVars0_17;
#line 599 "lco.m"
    MR_Word transform_hlds__lco__V_29_29;
#line 599 "lco.m"
    MR_Word transform_hlds__lco__V_30_30;
#line 599 "lco.m"
    MR_Word transform_hlds__lco__V_31_31;
#line 599 "lco.m"
    MR_Word transform_hlds__lco__V_32_32;
#line 599 "lco.m"
    MR_Word transform_hlds__lco__V_33_33;
#line 600 "lco.m"
    MR_Word transform_hlds__lco__V_15_15;
#line 600 "lco.m"
    MR_Word transform_hlds__lco__V_16_16;
#line 602 "lco.m"
    MR_Word transform_hlds__lco___DelayForVars_20;
#line 602 "lco.m"
    MR_Box transform_hlds__lco__conv5_RevAfterDependentGoals_18;
#line 602 "lco.m"
    MR_Box transform_hlds__lco__conv4_RevAfterNonDependentGoals_19;
#line 602 "lco.m"
    MR_Box transform_hlds__lco__conv3__DelayForVars_20;
#line 606 "lco.m"
    MR_Box transform_hlds__lco__conv9_UnifyInputVars_21;
#line 606 "lco.m"
    MR_Box transform_hlds__lco__conv8_STATE_VARIABLE_Info_34_34;

#line 596 "lco.m"
    {
#line 596 "lco.m"
      mercury__list__reverse_2_p_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__Goals0_6, &transform_hlds__lco__RevGoals0_10);
    }
#line 598 "lco.m"
    {
#line 598 "lco.m"
      transform_hlds__lco__succeeded = transform_hlds__lco__divide_rev_conj_8_p_0(transform_hlds__lco__STATE_VARIABLE_Info_0_26, transform_hlds__lco__ConstInfo_9, transform_hlds__lco__RevGoals0_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__lco__AfterGoals_11, &transform_hlds__lco__RecGoal_12, &transform_hlds__lco__RecOutArgs_13, &transform_hlds__lco__RevBeforeGoals_14);
    }
#line 599 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 599 "lco.m"
      {
#line 600 "lco.m"
        transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__AfterGoals_11)) == (MR_mktag((MR_Integer) 1)));
#line 600 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 600 "lco.m"
          {
#line 600 "lco.m"
            transform_hlds__lco__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__AfterGoals_11, (MR_Integer) 0)));
#line 600 "lco.m"
            transform_hlds__lco__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__AfterGoals_11, (MR_Integer) 1)));
#line 12879 "transform_hlds.lco.c"
            transform_hlds__lco__TypeCtorInfo_40_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 601 "lco.m"
            {
#line 601 "lco.m"
              parse_tree__set_of_var__list_to_set_2_p_0(transform_hlds__lco__TypeCtorInfo_40_40, transform_hlds__lco__RecOutArgs_13, &transform_hlds__lco__DelayForVars0_17);
            }
#line 603 "lco.m"
            transform_hlds__lco__V_30_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 604 "lco.m"
            transform_hlds__lco__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 12890 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_48_48 = (MR_Word) &transform_hlds__lco_scalar_common_1[2];
#line 12892 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_49_49 = (MR_Word) &transform_hlds__lco_scalar_common_1[4];
#line 602 "lco.m"
            {
#line 602 "lco.m"
              transform_hlds__lco__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 602 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_29_29, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_8[0]));
#line 602 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_29_29, 1) = ((MR_Box) (transform_hlds__lco__lco_in_conj_5_p_0_1));
#line 602 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 602 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_29_29, 3) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_Info_0_26));
#line 602 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_29_29, 4) = ((MR_Box) (transform_hlds__lco__ConstInfo_9));
#line 602 "lco.m"
            }
#line 602 "lco.m"
            {
#line 602 "lco.m"
              mercury__list__foldl3_8_p_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__TypeInfo_48_48, transform_hlds__lco__TypeInfo_48_48, transform_hlds__lco__TypeInfo_49_49, transform_hlds__lco__V_29_29, transform_hlds__lco__AfterGoals_11, ((MR_Box) (transform_hlds__lco__V_30_30)), &transform_hlds__lco__conv5_RevAfterDependentGoals_18, ((MR_Box) (transform_hlds__lco__V_31_31)), &transform_hlds__lco__conv4_RevAfterNonDependentGoals_19, ((MR_Box) (transform_hlds__lco__DelayForVars0_17)), &transform_hlds__lco__conv3__DelayForVars_20);
            }
#line 602 "lco.m"
            transform_hlds__lco__RevAfterDependentGoals_18 = ((MR_Word) transform_hlds__lco__conv5_RevAfterDependentGoals_18);
#line 602 "lco.m"
            transform_hlds__lco__RevAfterNonDependentGoals_19 = ((MR_Word) transform_hlds__lco__conv4_RevAfterNonDependentGoals_19);
#line 602 "lco.m"
            transform_hlds__lco___DelayForVars_20 = ((MR_Word) transform_hlds__lco__conv3__DelayForVars_20);
#line 606 "lco.m"
            transform_hlds__lco__V_32_32 = (MR_Word) &transform_hlds__lco_scalar_common_2[11];
#line 12923 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_55_55 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
#line 607 "lco.m"
            {
#line 607 "lco.m"
              transform_hlds__lco__V_33_33 = mercury__bag__init_0_f_0(transform_hlds__lco__TypeInfo_55_55);
            }
#line 12930 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_56_56 = (MR_Word) &transform_hlds__lco_scalar_common_1[5];
#line 12932 "transform_hlds.lco.c"
            transform_hlds__lco__TypeCtorInfo_57_57 = (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_info_0;
#line 606 "lco.m"
            {
#line 606 "lco.m"
              transform_hlds__lco__succeeded = mercury__list__foldl2_6_p_4(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__TypeInfo_56_56, transform_hlds__lco__TypeCtorInfo_57_57, transform_hlds__lco__V_32_32, transform_hlds__lco__RevAfterDependentGoals_18, ((MR_Box) (transform_hlds__lco__V_33_33)), &transform_hlds__lco__conv9_UnifyInputVars_21, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_Info_0_26)), &transform_hlds__lco__conv8_STATE_VARIABLE_Info_34_34);
            }
#line 606 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 606 "lco.m"
              {
#line 606 "lco.m"
                transform_hlds__lco__UnifyInputVars_21 = ((MR_Word) transform_hlds__lco__conv9_UnifyInputVars_21);
#line 606 "lco.m"
                transform_hlds__lco__STATE_VARIABLE_Info_34_34 = ((MR_Word) transform_hlds__lco__conv8_STATE_VARIABLE_Info_34_34);
#line 606 "lco.m"
                transform_hlds__lco__succeeded = MR_TRUE;
#line 606 "lco.m"
              }
#line 600 "lco.m"
          }
#line 599 "lco.m"
      }
#line 622 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 609 "lco.m"
      {
#line 609 "lco.m"
        MR_Word transform_hlds__lco__UnifyGoals_22;
#line 609 "lco.m"
        MR_Word transform_hlds__lco__MaybeGoals1_23;

#line 609 "lco.m"
        {
#line 609 "lco.m"
          mercury__list__reverse_2_p_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__RevAfterDependentGoals_18, &transform_hlds__lco__UnifyGoals_22);
        }
#line 610 "lco.m"
        {
#line 610 "lco.m"
          transform_hlds__lco__transform_call_and_unifies_8_p_0(transform_hlds__lco__RecGoal_12, transform_hlds__lco__RecOutArgs_13, transform_hlds__lco__UnifyGoals_22, transform_hlds__lco__UnifyInputVars_21, &transform_hlds__lco__MaybeGoals1_23, transform_hlds__lco__STATE_VARIABLE_Info_34_34, transform_hlds__lco__STATE_VARIABLE_Info_27, transform_hlds__lco__ConstInfo_9);
        }
#line 618 "lco.m"
        if ((transform_hlds__lco__MaybeGoals1_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 620 "lco.m"
          *transform_hlds__lco__MaybeGoals_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 618 "lco.m"
        else
#line 613 "lco.m"
          {
#line 613 "lco.m"
            MR_Word transform_hlds__lco__UpdatedRecAndUnifies_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__MaybeGoals1_23, (MR_Integer) 0)));
#line 613 "lco.m"
            MR_Word transform_hlds__lco__Goals_25;
#line 613 "lco.m"
            MR_Word transform_hlds__lco__V_36_36;
#line 613 "lco.m"
            MR_Word transform_hlds__lco__V_37_37;
#line 613 "lco.m"
            MR_Word transform_hlds__lco__V_38_38;

#line 614 "lco.m"
            {
#line 614 "lco.m"
              transform_hlds__lco__V_36_36 = mercury__list__reverse_1_f_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__RevBeforeGoals_14);
            }
#line 615 "lco.m"
            {
#line 615 "lco.m"
              transform_hlds__lco__V_38_38 = mercury__list__reverse_1_f_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__RevAfterNonDependentGoals_19);
            }
#line 616 "lco.m"
            {
#line 616 "lco.m"
              transform_hlds__lco__V_37_37 = mercury__list__f_43_43_2_f_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__V_38_38, transform_hlds__lco__UpdatedRecAndUnifies_24);
            }
#line 615 "lco.m"
            {
#line 615 "lco.m"
              transform_hlds__lco__Goals_25 = mercury__list__f_43_43_2_f_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__V_36_36, transform_hlds__lco__V_37_37);
            }
#line 617 "lco.m"
            {
#line 617 "lco.m"
              MR_Word base;
#line 617 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 617 "lco.m"
              *transform_hlds__lco__MaybeGoals_7 = base;
#line 617 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Goals_25));
#line 617 "lco.m"
            }
#line 613 "lco.m"
          }
#line 609 "lco.m"
      }
#line 622 "lco.m"
    else
#line 623 "lco.m"
      {
#line 623 "lco.m"
        *transform_hlds__lco__MaybeGoals_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 623 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_Info_27 = transform_hlds__lco__STATE_VARIABLE_Info_0_26;
#line 623 "lco.m"
      }
#line 595 "lco.m"
  }
#line 592 "lco.m"
}

#line 567 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_cases_5_p_0(
#line 567 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 567 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__2_2,
#line 567 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_3,
#line 567 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_4,
#line 567 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5)
#line 567 "lco.m"
{
#line 570 "lco.m"
  {
#line 570 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 570 "lco.m"
    if ((transform_hlds__lco__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 570 "lco.m"
      {
#line 570 "lco.m"
        *transform_hlds__lco__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 570 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_Info_4 = transform_hlds__lco__STATE_VARIABLE_Info_0_3;
#line 570 "lco.m"
      }
#line 570 "lco.m"
    else
#line 571 "lco.m"
      {
#line 571 "lco.m"
        MR_Word transform_hlds__lco__Case0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 571 "lco.m"
        MR_Word transform_hlds__lco__Cases0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 571 "lco.m"
        MR_Word transform_hlds__lco__Case_12;
#line 571 "lco.m"
        MR_Word transform_hlds__lco__Cases_13;
#line 571 "lco.m"
        MR_Word transform_hlds__lco__MainConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Case0_10, (MR_Integer) 0)));
#line 571 "lco.m"
        MR_Word transform_hlds__lco__OtherConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Case0_10, (MR_Integer) 1)));
#line 571 "lco.m"
        MR_Word transform_hlds__lco__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Case0_10, (MR_Integer) 2)));
#line 571 "lco.m"
        MR_Word transform_hlds__lco__Goal_19;
#line 571 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_Info_22_22;

#line 573 "lco.m"
        {
#line 573 "lco.m"
          transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__Goal0_18, &transform_hlds__lco__Goal_19, transform_hlds__lco__STATE_VARIABLE_Info_0_3, &transform_hlds__lco__STATE_VARIABLE_Info_22_22, transform_hlds__lco__HeadVar__5_5);
        }
#line 574 "lco.m"
        {
#line 574 "lco.m"
          transform_hlds__lco__Case_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 574 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__Case_12, 0) = ((MR_Box) (transform_hlds__lco__MainConsId_16));
#line 574 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__Case_12, 1) = ((MR_Box) (transform_hlds__lco__OtherConsIds_17));
#line 574 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__Case_12, 2) = ((MR_Box) (transform_hlds__lco__Goal_19));
#line 574 "lco.m"
        }
#line 575 "lco.m"
        {
#line 575 "lco.m"
          transform_hlds__lco__lco_in_cases_5_p_0(transform_hlds__lco__Cases0_11, &transform_hlds__lco__Cases_13, transform_hlds__lco__STATE_VARIABLE_Info_22_22, transform_hlds__lco__STATE_VARIABLE_Info_4, transform_hlds__lco__HeadVar__5_5);
        }
#line 571 "lco.m"
        {
#line 571 "lco.m"
          MR_Word base;
#line 571 "lco.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "lco.m"
          *transform_hlds__lco__HeadVar__2_2 = base;
#line 571 "lco.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Case_12));
#line 571 "lco.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__Cases_13));
#line 571 "lco.m"
        }
#line 571 "lco.m"
      }
#line 570 "lco.m"
  }
#line 567 "lco.m"
}

#line 479 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_goal_5_p_0(
#line 479 "lco.m"
  MR_Word transform_hlds__lco__Goal0_6,
#line 479 "lco.m"
  MR_Word * transform_hlds__lco__Goal_7,
#line 479 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_60,
#line 479 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_61,
#line 479 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_9)
#line 479 "lco.m"
{
#line 482 "lco.m"
  {
#line 482 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 482 "lco.m"
    MR_Word transform_hlds__lco__GoalExpr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal0_6, (MR_Integer) 0)));
#line 482 "lco.m"
    MR_Word transform_hlds__lco__GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal0_6, (MR_Integer) 1)));
#line 482 "lco.m"
    MR_Word transform_hlds__lco__GoalExpr_16;

#line 510 "lco.m"
#line 510 "lco.m"
    switch (MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_10)) {
#line 510 "lco.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 510 "lco.m"
      case (MR_Integer) 0:
#line 548 "lco.m"
        {
#line 549 "lco.m"
          transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
#line 548 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_0_60;
#line 548 "lco.m"
        }
#line 510 "lco.m"
        break;
#line 510 "lco.m"
      case (MR_Integer) 1:
#line 510 "lco.m"
      case (MR_Integer) 2:
#line 548 "lco.m"
        {
#line 549 "lco.m"
          transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
#line 548 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_0_60;
#line 548 "lco.m"
        }
#line 510 "lco.m"
        break;
#line 510 "lco.m"
      case (MR_Integer) 3:
#line 510 "lco.m"
#line 510 "lco.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 0)))) {
#line 510 "lco.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 510 "lco.m"
          case (MR_Integer) 0:
#line 510 "lco.m"
          case (MR_Integer) 1:
#line 548 "lco.m"
            {
#line 549 "lco.m"
              transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
#line 548 "lco.m"
              *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_0_60;
#line 548 "lco.m"
            }
#line 510 "lco.m"
            break;
#line 510 "lco.m"
          case (MR_Integer) 2:
#line 485 "lco.m"
            {
#line 485 "lco.m"
              MR_Word transform_hlds__lco__ConjType_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 1)));
#line 485 "lco.m"
              MR_Word transform_hlds__lco__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 2)));

#line 505 "lco.m"
#line 505 "lco.m"
              switch (transform_hlds__lco__ConjType_12) {
#line 505 "lco.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 505 "lco.m"
                case (MR_Integer) 1:
#line 506 "lco.m"
                  {
#line 508 "lco.m"
                    MR_Word transform_hlds__lco__V_90_90;
#line 508 "lco.m"
                    MR_Word transform_hlds__lco__V_91_91;
#line 508 "lco.m"
                    MR_Word transform_hlds__lco__V_92_92;
#line 508 "lco.m"
                    MR_Word transform_hlds__lco__V_93_93;
#line 508 "lco.m"
                    MR_Word transform_hlds__lco__V_94_94;
#line 508 "lco.m"
                    MR_Word transform_hlds__lco__V_96_96;
#line 508 "lco.m"
                    MR_Word transform_hlds__lco__V_95_95;

#line 507 "lco.m"
                    transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
#line 508 "lco.m"
                    transform_hlds__lco__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 0)));
#line 508 "lco.m"
                    transform_hlds__lco__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 1)));
#line 508 "lco.m"
                    transform_hlds__lco__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 2)));
#line 508 "lco.m"
                    transform_hlds__lco__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 3)));
#line 508 "lco.m"
                    transform_hlds__lco__V_94_94 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 508 "lco.m"
                    transform_hlds__lco__V_95_95 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 508 "lco.m"
                    transform_hlds__lco__V_96_96 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 508 "lco.m"
                    {
#line 508 "lco.m"
                      MR_Word base;
#line 508 "lco.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 508 "lco.m"
                      *transform_hlds__lco__STATE_VARIABLE_Info_61 = base;
#line 508 "lco.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__V_90_90));
#line 508 "lco.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__V_91_91));
#line 508 "lco.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__V_92_92));
#line 508 "lco.m"
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lco__V_93_93));
#line 508 "lco.m"
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((transform_hlds__lco__V_94_94 | (((((MR_Integer) 0 << (MR_Integer) 1)) | ((transform_hlds__lco__V_96_96 << (MR_Integer) 2)))))));
#line 508 "lco.m"
                    }
#line 506 "lco.m"
                  }
#line 505 "lco.m"
                  break;
#line 505 "lco.m"
                case (MR_Integer) 0:
#line 487 "lco.m"
                  {
#line 487 "lco.m"
                    MR_Word transform_hlds__lco__MaybeGoals_14;
#line 487 "lco.m"
                    MR_Word transform_hlds__lco__STATE_VARIABLE_Info_75_75;

#line 488 "lco.m"
                    {
#line 488 "lco.m"
                      transform_hlds__lco__lco_in_conj_5_p_0(transform_hlds__lco__Goals0_13, &transform_hlds__lco__MaybeGoals_14, transform_hlds__lco__STATE_VARIABLE_Info_0_60, &transform_hlds__lco__STATE_VARIABLE_Info_75_75, transform_hlds__lco__ConstInfo_9);
                    }
#line 492 "lco.m"
                    if ((transform_hlds__lco__MaybeGoals_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 501 "lco.m"
                      {
#line 501 "lco.m"
                        MR_Word transform_hlds__lco__AllButLast_17;
#line 501 "lco.m"
                        MR_Word transform_hlds__lco__Last0_18;
#line 498 "lco.m"
                        MR_Box transform_hlds__lco__conv0_Last0_18;

#line 498 "lco.m"
                        {
#line 498 "lco.m"
                          transform_hlds__lco__succeeded = mercury__list__split_last_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__lco__Goals0_13, &transform_hlds__lco__AllButLast_17, &transform_hlds__lco__conv0_Last0_18);
                        }
#line 498 "lco.m"
                        if (transform_hlds__lco__succeeded)
#line 498 "lco.m"
                          {
#line 498 "lco.m"
                            transform_hlds__lco__Last0_18 = ((MR_Word) transform_hlds__lco__conv0_Last0_18);
#line 498 "lco.m"
                            transform_hlds__lco__succeeded = MR_TRUE;
#line 498 "lco.m"
                          }
#line 501 "lco.m"
                        if (transform_hlds__lco__succeeded)
#line 499 "lco.m"
                          {
#line 499 "lco.m"
                            MR_Word transform_hlds__lco__Last_19;
#line 499 "lco.m"
                            MR_Word transform_hlds__lco__V_78_78;
#line 499 "lco.m"
                            MR_Word transform_hlds__lco__V_79_79;

#line 499 "lco.m"
                            {
#line 499 "lco.m"
                              transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__Last0_18, &transform_hlds__lco__Last_19, transform_hlds__lco__STATE_VARIABLE_Info_75_75, transform_hlds__lco__STATE_VARIABLE_Info_61, transform_hlds__lco__ConstInfo_9);
                            }
#line 500 "lco.m"
                            {
#line 500 "lco.m"
                              transform_hlds__lco__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 500 "lco.m"
                              MR_hl_field(MR_mktag(1), transform_hlds__lco__V_79_79, 0) = ((MR_Box) (transform_hlds__lco__Last_19));
#line 500 "lco.m"
                              MR_hl_field(MR_mktag(1), transform_hlds__lco__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 500 "lco.m"
                            }
#line 500 "lco.m"
                            {
#line 500 "lco.m"
                              transform_hlds__lco__V_78_78 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__lco__AllButLast_17, transform_hlds__lco__V_79_79);
                            }
#line 500 "lco.m"
                            {
#line 500 "lco.m"
                              transform_hlds__lco__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 500 "lco.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 500 "lco.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 1) = ((MR_Box) ((MR_Integer) 0));
#line 500 "lco.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__lco__V_78_78));
#line 500 "lco.m"
                            }
#line 499 "lco.m"
                          }
#line 501 "lco.m"
                        else
#line 502 "lco.m"
                          {
#line 502 "lco.m"
                            transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
#line 502 "lco.m"
                            *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_75_75;
#line 502 "lco.m"
                          }
#line 501 "lco.m"
                      }
#line 492 "lco.m"
                    else
#line 490 "lco.m"
                      {
#line 490 "lco.m"
                        MR_Word transform_hlds__lco__Goals_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__MaybeGoals_14, (MR_Integer) 0)));

#line 491 "lco.m"
                        {
#line 491 "lco.m"
                          transform_hlds__lco__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 491 "lco.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 491 "lco.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 1) = ((MR_Box) ((MR_Integer) 0));
#line 491 "lco.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__lco__Goals_15));
#line 491 "lco.m"
                        }
#line 490 "lco.m"
                        *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_75_75;
#line 490 "lco.m"
                      }
#line 487 "lco.m"
                  }
#line 505 "lco.m"
                  break;
#line 505 "lco.m"
              }
#line 485 "lco.m"
            }
#line 510 "lco.m"
            break;
#line 510 "lco.m"
          case (MR_Integer) 3:
#line 511 "lco.m"
            {
#line 511 "lco.m"
              MR_Word transform_hlds__lco__Goals0_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 1)));
#line 517 "lco.m"
              MR_Word transform_hlds__lco__AllButLast_83;
#line 517 "lco.m"
              MR_Word transform_hlds__lco__Last0_84;
#line 514 "lco.m"
              MR_Box transform_hlds__lco__conv1_Last0_84;

#line 514 "lco.m"
              {
#line 514 "lco.m"
                transform_hlds__lco__succeeded = mercury__list__split_last_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__lco__Goals0_86, &transform_hlds__lco__AllButLast_83, &transform_hlds__lco__conv1_Last0_84);
              }
#line 514 "lco.m"
              if (transform_hlds__lco__succeeded)
#line 514 "lco.m"
                {
#line 514 "lco.m"
                  transform_hlds__lco__Last0_84 = ((MR_Word) transform_hlds__lco__conv1_Last0_84);
#line 514 "lco.m"
                  transform_hlds__lco__succeeded = MR_TRUE;
#line 514 "lco.m"
                }
#line 517 "lco.m"
              if (transform_hlds__lco__succeeded)
#line 515 "lco.m"
                {
#line 515 "lco.m"
                  MR_Word transform_hlds__lco__V_70_70;
#line 515 "lco.m"
                  MR_Word transform_hlds__lco__V_71_71;
#line 515 "lco.m"
                  MR_Word transform_hlds__lco__Last_82;

#line 515 "lco.m"
                  {
#line 515 "lco.m"
                    transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__Last0_84, &transform_hlds__lco__Last_82, transform_hlds__lco__STATE_VARIABLE_Info_0_60, transform_hlds__lco__STATE_VARIABLE_Info_61, transform_hlds__lco__ConstInfo_9);
                  }
#line 516 "lco.m"
                  {
#line 516 "lco.m"
                    transform_hlds__lco__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 516 "lco.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__lco__V_71_71, 0) = ((MR_Box) (transform_hlds__lco__Last_82));
#line 516 "lco.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__lco__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 516 "lco.m"
                  }
#line 516 "lco.m"
                  {
#line 516 "lco.m"
                    transform_hlds__lco__V_70_70 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__lco__AllButLast_83, transform_hlds__lco__V_71_71);
                  }
#line 516 "lco.m"
                  {
#line 516 "lco.m"
                    transform_hlds__lco__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 516 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 516 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__lco__V_70_70));
#line 516 "lco.m"
                  }
#line 515 "lco.m"
                }
#line 517 "lco.m"
              else
#line 518 "lco.m"
                {
#line 518 "lco.m"
                  transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
#line 518 "lco.m"
                  *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_0_60;
#line 518 "lco.m"
                }
#line 511 "lco.m"
            }
#line 510 "lco.m"
            break;
#line 510 "lco.m"
          case (MR_Integer) 4:
#line 521 "lco.m"
            {
#line 521 "lco.m"
              MR_Word transform_hlds__lco__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 1)));
#line 521 "lco.m"
              MR_Word transform_hlds__lco__CanFail_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 2)));
#line 521 "lco.m"
              MR_Word transform_hlds__lco__Cases0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 3)));
#line 521 "lco.m"
              MR_Word transform_hlds__lco__Cases_23;

#line 522 "lco.m"
              {
#line 522 "lco.m"
                transform_hlds__lco__lco_in_cases_5_p_0(transform_hlds__lco__Cases0_22, &transform_hlds__lco__Cases_23, transform_hlds__lco__STATE_VARIABLE_Info_0_60, transform_hlds__lco__STATE_VARIABLE_Info_61, transform_hlds__lco__ConstInfo_9);
              }
#line 523 "lco.m"
              {
#line 523 "lco.m"
                transform_hlds__lco__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 523 "lco.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 523 "lco.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__lco__Var_20));
#line 523 "lco.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__lco__CanFail_21));
#line 523 "lco.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 3) = ((MR_Box) (transform_hlds__lco__Cases_23));
#line 523 "lco.m"
              }
#line 521 "lco.m"
            }
#line 510 "lco.m"
            break;
#line 510 "lco.m"
          case (MR_Integer) 5:
#line 530 "lco.m"
            {
#line 530 "lco.m"
              MR_Word transform_hlds__lco__Reason_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 1)));
#line 530 "lco.m"
              MR_Word transform_hlds__lco__SubGoal0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 2)));
#line 532 "lco.m"
              MR_Word transform_hlds__lco__FGT_33;
#line 532 "lco.m"
              MR_Word transform_hlds__lco__V_32_32;

#line 532 "lco.m"
              transform_hlds__lco__succeeded = ((((MR_tag((MR_Word) transform_hlds__lco__Reason_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_30, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 532 "lco.m"
              if (transform_hlds__lco__succeeded)
#line 532 "lco.m"
                {
#line 532 "lco.m"
                  transform_hlds__lco__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_30, (MR_Integer) 1)));
#line 532 "lco.m"
                  transform_hlds__lco__FGT_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_30, (MR_Integer) 2)));
#line 534 "lco.m"
#line 534 "lco.m"
                  switch (transform_hlds__lco__FGT_33) {
#line 534 "lco.m"
                    default:
#line 534 "lco.m"
                      transform_hlds__lco__succeeded = MR_FALSE;
#line 534 "lco.m"
                      break;
#line 534 "lco.m"
                    case (MR_Integer) 1:
#line 533 "lco.m"
                      transform_hlds__lco__succeeded = MR_TRUE;
#line 534 "lco.m"
                      break;
#line 534 "lco.m"
                    case (MR_Integer) 2:
#line 534 "lco.m"
                      transform_hlds__lco__succeeded = MR_TRUE;
#line 534 "lco.m"
                      break;
#line 534 "lco.m"
                  }
#line 532 "lco.m"
                }
#line 538 "lco.m"
              if (transform_hlds__lco__succeeded)
#line 537 "lco.m"
                {
#line 537 "lco.m"
                  transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
#line 537 "lco.m"
                  *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_0_60;
#line 537 "lco.m"
                }
#line 538 "lco.m"
              else
#line 539 "lco.m"
                {
#line 539 "lco.m"
                  MR_Word transform_hlds__lco__SubGoal_34;

#line 539 "lco.m"
                  {
#line 539 "lco.m"
                    transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__SubGoal0_31, &transform_hlds__lco__SubGoal_34, transform_hlds__lco__STATE_VARIABLE_Info_0_60, transform_hlds__lco__STATE_VARIABLE_Info_61, transform_hlds__lco__ConstInfo_9);
                  }
#line 540 "lco.m"
                  {
#line 540 "lco.m"
                    transform_hlds__lco__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 540 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 540 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__lco__Reason_30));
#line 540 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__lco__SubGoal_34));
#line 540 "lco.m"
                  }
#line 539 "lco.m"
                }
#line 530 "lco.m"
            }
#line 510 "lco.m"
            break;
#line 510 "lco.m"
          case (MR_Integer) 6:
#line 525 "lco.m"
            {
#line 525 "lco.m"
              MR_Word transform_hlds__lco__Vars_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 1)));
#line 525 "lco.m"
              MR_Word transform_hlds__lco__Cond_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 2)));
#line 525 "lco.m"
              MR_Word transform_hlds__lco__Then0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 3)));
#line 525 "lco.m"
              MR_Word transform_hlds__lco__Else0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 4)));
#line 525 "lco.m"
              MR_Word transform_hlds__lco__Then_28;
#line 525 "lco.m"
              MR_Word transform_hlds__lco__Else_29;
#line 525 "lco.m"
              MR_Word transform_hlds__lco__STATE_VARIABLE_Info_66_66;

#line 526 "lco.m"
              {
#line 526 "lco.m"
                transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__Then0_26, &transform_hlds__lco__Then_28, transform_hlds__lco__STATE_VARIABLE_Info_0_60, &transform_hlds__lco__STATE_VARIABLE_Info_66_66, transform_hlds__lco__ConstInfo_9);
              }
#line 527 "lco.m"
              {
#line 527 "lco.m"
                transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__Else0_27, &transform_hlds__lco__Else_29, transform_hlds__lco__STATE_VARIABLE_Info_66_66, transform_hlds__lco__STATE_VARIABLE_Info_61, transform_hlds__lco__ConstInfo_9);
              }
#line 528 "lco.m"
              {
#line 528 "lco.m"
                transform_hlds__lco__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 528 "lco.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 528 "lco.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__lco__Vars_24));
#line 528 "lco.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__lco__Cond_25));
#line 528 "lco.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 3) = ((MR_Box) (transform_hlds__lco__Then_28));
#line 528 "lco.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 4) = ((MR_Box) (transform_hlds__lco__Else_29));
#line 528 "lco.m"
              }
#line 525 "lco.m"
            }
#line 510 "lco.m"
            break;
#line 510 "lco.m"
          case (MR_Integer) 7:
#line 551 "lco.m"
            {
#line 553 "lco.m"
              {
#line 553 "lco.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.lco_in_goal\'/5", (MR_String) "shorthand");
#line 553 "lco.m"
                return;
              }
#line 551 "lco.m"
            }
#line 510 "lco.m"
            break;
#line 510 "lco.m"
        }
#line 510 "lco.m"
        break;
#line 510 "lco.m"
    }
#line 555 "lco.m"
    {
#line 555 "lco.m"
      MR_Word base;
#line 555 "lco.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 555 "lco.m"
      *transform_hlds__lco__Goal_7 = base;
#line 555 "lco.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__GoalExpr_16));
#line 555 "lco.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__GoalInfo_11));
#line 555 "lco.m"
    }
#line 482 "lco.m"
  }
#line 479 "lco.m"
}

#line 381 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_proc_11_p_0(
#line 381 "lco.m"
  MR_Word transform_hlds__lco__LowerSCCVariants_12,
#line 381 "lco.m"
  MR_Word transform_hlds__lco__SCC_13,
#line 381 "lco.m"
  MR_Word transform_hlds__lco__CurProc_14,
#line 381 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_49,
#line 381 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_50,
#line 381 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_51,
#line 381 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_52,
#line 381 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_53,
#line 381 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_54,
#line 381 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Permitted_0_55,
#line 381 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Permitted_56)
#line 381 "lco.m"
{
#line 390 "lco.m"
  {
#line 390 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 390 "lco.m"
#line 390 "lco.m"
    switch (transform_hlds__lco__STATE_VARIABLE_Permitted_0_55) {
#line 390 "lco.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 390 "lco.m"
      case (MR_Integer) 0:
#line 390 "lco.m"
        {
#line 390 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_ModuleInfo_50 = transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_49;
#line 390 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_52 = transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_51;
#line 390 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_54 = transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_53;
#line 390 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_Permitted_56 = transform_hlds__lco__STATE_VARIABLE_Permitted_0_55;
#line 390 "lco.m"
        }
#line 390 "lco.m"
        break;
#line 390 "lco.m"
      case (MR_Integer) 1:
#line 392 "lco.m"
        {
#line 392 "lco.m"
          MR_Word transform_hlds__lco__PredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__CurProc_14, (MR_Integer) 0)));
#line 392 "lco.m"
          MR_Integer transform_hlds__lco__ProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__CurProc_14, (MR_Integer) 1)));
#line 392 "lco.m"
          MR_Word transform_hlds__lco__PredInfo_21;
#line 392 "lco.m"
          MR_Word transform_hlds__lco__ProcInfo0_22;
#line 392 "lco.m"
          MR_Word transform_hlds__lco__Status_23;
#line 392 "lco.m"
          MR_Word transform_hlds__lco__DefInThisModule_24;
#line 392 "lco.m"
          MR_Word transform_hlds__lco__Detism_25;

#line 394 "lco.m"
          {
#line 394 "lco.m"
            hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_49, transform_hlds__lco__PredId_19, transform_hlds__lco__ProcId_20, &transform_hlds__lco__PredInfo_21, &transform_hlds__lco__ProcInfo0_22);
          }
#line 396 "lco.m"
          {
#line 396 "lco.m"
            hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__lco__PredInfo_21, &transform_hlds__lco__Status_23);
          }
#line 397 "lco.m"
          {
#line 397 "lco.m"
            transform_hlds__lco__DefInThisModule_24 = parse_tree__status__status_defined_in_this_module_1_f_0(transform_hlds__lco__Status_23);
          }
#line 398 "lco.m"
          {
#line 398 "lco.m"
            hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(transform_hlds__lco__ProcInfo0_22, &transform_hlds__lco__Detism_25);
          }
#line 400 "lco.m"
          transform_hlds__lco__succeeded = (transform_hlds__lco__DefInThisModule_24 == (MR_Integer) 0);
#line 401 "lco.m"
          if (!(transform_hlds__lco__succeeded))
#line 401 "lco.m"
            {
#line 471 "lco.m"
              if (((MR_Integer) 51 & (((MR_Integer) 1 << transform_hlds__lco__Detism_25))))
#line 471 "lco.m"
                {
#line 471 "lco.m"
                  transform_hlds__lco__succeeded = MR_TRUE;
#line 471 "lco.m"
                }
#line 471 "lco.m"
              else
#line 471 "lco.m"
                transform_hlds__lco__succeeded = MR_FALSE;
#line 401 "lco.m"
              transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 401 "lco.m"
            }
#line 405 "lco.m"
          if (transform_hlds__lco__succeeded)
#line 404 "lco.m"
            {
#line 404 "lco.m"
              *transform_hlds__lco__STATE_VARIABLE_Permitted_56 = (MR_Integer) 0;
#line 404 "lco.m"
              *transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_54 = transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_53;
#line 404 "lco.m"
              *transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_52 = transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_51;
#line 404 "lco.m"
              *transform_hlds__lco__STATE_VARIABLE_ModuleInfo_50 = transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_49;
#line 404 "lco.m"
            }
#line 405 "lco.m"
          else
#line 406 "lco.m"
            {
#line 406 "lco.m"
              MR_Word transform_hlds__lco__TypeCtorInfo_82_82;
#line 406 "lco.m"
              MR_Word transform_hlds__lco__VarSet0_26;
#line 406 "lco.m"
              MR_Word transform_hlds__lco__VarTypes0_27;
#line 406 "lco.m"
              MR_Word transform_hlds__lco__HeadVars_28;
#line 406 "lco.m"
              MR_Word transform_hlds__lco__ArgModes_29;
#line 406 "lco.m"
              MR_Word transform_hlds__lco__ArgTypes_30;
#line 406 "lco.m"
              MR_Word transform_hlds__lco__OutputHeadVars_32;
#line 406 "lco.m"
              MR_Word transform_hlds__lco__CurProcDetism_33;
#line 406 "lco.m"
              MR_Word transform_hlds__lco__Globals_34;
#line 406 "lco.m"
              MR_Word transform_hlds__lco__HighLevelData_35;
#line 406 "lco.m"
              MR_Word transform_hlds__lco__ConstInfo_36;
#line 406 "lco.m"
              MR_Word transform_hlds__lco__UnboxedFloat_37;
#line 406 "lco.m"
              MR_Word transform_hlds__lco__AllowFloatAddr_38;
#line 406 "lco.m"
              MR_Word transform_hlds__lco__Info0_39;
#line 406 "lco.m"
              MR_Word transform_hlds__lco__Goal0_40;
#line 406 "lco.m"
              MR_Word transform_hlds__lco__Goal_41;
#line 406 "lco.m"
              MR_Word transform_hlds__lco__Info_42;
#line 406 "lco.m"
              MR_Word transform_hlds__lco__VarSet_43;
#line 406 "lco.m"
              MR_Word transform_hlds__lco__VarTypes_44;
#line 406 "lco.m"
              MR_Word transform_hlds__lco__Changed_46;
#line 406 "lco.m"
              MR_Word transform_hlds__lco__V_59_59;
#line 411 "lco.m"
              MR_Word transform_hlds__lco___InputHeadVars_31;
#line 436 "lco.m"
              MR_Word transform_hlds__lco___AllowFloatAddr_45;

#line 406 "lco.m"
              {
#line 406 "lco.m"
                hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__lco__ProcInfo0_22, &transform_hlds__lco__VarSet0_26);
              }
#line 407 "lco.m"
              {
#line 407 "lco.m"
                hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lco__ProcInfo0_22, &transform_hlds__lco__VarTypes0_27);
              }
#line 408 "lco.m"
              {
#line 408 "lco.m"
                hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__lco__ProcInfo0_22, &transform_hlds__lco__HeadVars_28);
              }
#line 409 "lco.m"
              {
#line 409 "lco.m"
                hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__lco__ProcInfo0_22, &transform_hlds__lco__ArgModes_29);
              }
#line 410 "lco.m"
              {
#line 410 "lco.m"
                hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__lco__VarTypes0_27, transform_hlds__lco__HeadVars_28, &transform_hlds__lco__ArgTypes_30);
              }
#line 411 "lco.m"
              {
#line 411 "lco.m"
                hlds__arg_info__compute_in_and_out_vars_6_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_49, transform_hlds__lco__HeadVars_28, transform_hlds__lco__ArgModes_29, transform_hlds__lco__ArgTypes_30, &transform_hlds__lco___InputHeadVars_31, &transform_hlds__lco__OutputHeadVars_32);
              }
#line 413 "lco.m"
              {
#line 413 "lco.m"
                hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(transform_hlds__lco__ProcInfo0_22, &transform_hlds__lco__CurProcDetism_33);
              }
#line 13933 "transform_hlds.lco.c"
              transform_hlds__lco__TypeCtorInfo_82_82 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 415 "lco.m"
              {
#line 415 "lco.m"
                transform_hlds__lco__V_59_59 = mercury__set__list_to_set_1_f_0(transform_hlds__lco__TypeCtorInfo_82_82, transform_hlds__lco__SCC_13);
              }
#line 418 "lco.m"
              {
#line 418 "lco.m"
                hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_49, &transform_hlds__lco__Globals_34);
              }
#line 414 "lco.m"
              {
#line 414 "lco.m"
                libs__globals__lookup_bool_option_3_p_0(transform_hlds__lco__Globals_34, (MR_Integer) 256, &transform_hlds__lco__HighLevelData_35);
              }
#line 415 "lco.m"
              {
#line 415 "lco.m"
                transform_hlds__lco__ConstInfo_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 415 "lco.m"
                MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_36, 0) = ((MR_Box) (transform_hlds__lco__LowerSCCVariants_12));
#line 415 "lco.m"
                MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_36, 1) = ((MR_Box) (transform_hlds__lco__V_59_59));
#line 415 "lco.m"
                MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_36, 2) = ((MR_Box) (transform_hlds__lco__CurProc_14));
#line 415 "lco.m"
                MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_36, 3) = ((MR_Box) (transform_hlds__lco__PredInfo_21));
#line 415 "lco.m"
                MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_36, 4) = ((MR_Box) (transform_hlds__lco__ProcInfo0_22));
#line 415 "lco.m"
                MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_36, 5) = ((MR_Box) (transform_hlds__lco__OutputHeadVars_32));
#line 415 "lco.m"
                MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_36, 6) = ((MR_Box) (transform_hlds__lco__CurProcDetism_33));
#line 415 "lco.m"
                MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_36, 7) = ((MR_Box) (transform_hlds__lco__HighLevelData_35));
#line 415 "lco.m"
              }
#line 419 "lco.m"
              {
#line 419 "lco.m"
                libs__globals__lookup_bool_option_3_p_0(transform_hlds__lco__Globals_34, (MR_Integer) 244, &transform_hlds__lco__UnboxedFloat_37);
              }
#line 427 "lco.m"
#line 427 "lco.m"
              switch (transform_hlds__lco__UnboxedFloat_37) {
#line 427 "lco.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 427 "lco.m"
                case (MR_Integer) 0:
#line 426 "lco.m"
                  transform_hlds__lco__AllowFloatAddr_38 = (MR_Integer) 0;
#line 427 "lco.m"
                  break;
#line 427 "lco.m"
                case (MR_Integer) 1:
#line 429 "lco.m"
                  transform_hlds__lco__AllowFloatAddr_38 = (MR_Integer) 1;
#line 427 "lco.m"
                  break;
#line 427 "lco.m"
              }
#line 431 "lco.m"
              {
#line 431 "lco.m"
                transform_hlds__lco__Info0_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 431 "lco.m"
                MR_hl_field(MR_mktag(0), transform_hlds__lco__Info0_39, 0) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_49));
#line 431 "lco.m"
                MR_hl_field(MR_mktag(0), transform_hlds__lco__Info0_39, 1) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_51));
#line 431 "lco.m"
                MR_hl_field(MR_mktag(0), transform_hlds__lco__Info0_39, 2) = ((MR_Box) (transform_hlds__lco__VarSet0_26));
#line 431 "lco.m"
                MR_hl_field(MR_mktag(0), transform_hlds__lco__Info0_39, 3) = ((MR_Box) (transform_hlds__lco__VarTypes0_27));
#line 431 "lco.m"
                MR_hl_field(MR_mktag(0), transform_hlds__lco__Info0_39, 4) = ((MR_Box) ((transform_hlds__lco__AllowFloatAddr_38 | (((((MR_Integer) 1 << (MR_Integer) 1)) | (((MR_Integer) 0 << (MR_Integer) 2)))))));
#line 431 "lco.m"
              }
#line 434 "lco.m"
              {
#line 434 "lco.m"
                hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__lco__ProcInfo0_22, &transform_hlds__lco__Goal0_40);
              }
#line 435 "lco.m"
              {
#line 435 "lco.m"
                transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__Goal0_40, &transform_hlds__lco__Goal_41, transform_hlds__lco__Info0_39, &transform_hlds__lco__Info_42, transform_hlds__lco__ConstInfo_36);
              }
#line 436 "lco.m"
              *transform_hlds__lco__STATE_VARIABLE_ModuleInfo_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_42, (MR_Integer) 0)));
#line 436 "lco.m"
              *transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_42, (MR_Integer) 1)));
#line 436 "lco.m"
              transform_hlds__lco__VarSet_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_42, (MR_Integer) 2)));
#line 436 "lco.m"
              transform_hlds__lco__VarTypes_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_42, (MR_Integer) 3)));
#line 436 "lco.m"
              transform_hlds__lco___AllowFloatAddr_45 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_42, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 436 "lco.m"
              *transform_hlds__lco__STATE_VARIABLE_Permitted_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_42, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 436 "lco.m"
              transform_hlds__lco__Changed_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_42, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 439 "lco.m"
              transform_hlds__lco__succeeded = (*transform_hlds__lco__STATE_VARIABLE_Permitted_56 == (MR_Integer) 1);
#line 439 "lco.m"
              if (transform_hlds__lco__succeeded)
#line 440 "lco.m"
                transform_hlds__lco__succeeded = (transform_hlds__lco__Changed_46 == (MR_Integer) 1);
#line 459 "lco.m"
              if (transform_hlds__lco__succeeded)
#line 449 "lco.m"
                {
#line 449 "lco.m"
                  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_76_76;
#line 449 "lco.m"
                  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_77_77;
#line 449 "lco.m"
                  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_78_78;
#line 449 "lco.m"
                  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_80_80;

#line 452 "lco.m"
                  {
#line 452 "lco.m"
                    hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__lco__VarSet_43, transform_hlds__lco__ProcInfo0_22, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_76_76);
                  }
#line 453 "lco.m"
                  {
#line 453 "lco.m"
                    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__lco__VarTypes_44, transform_hlds__lco__STATE_VARIABLE_ProcInfo_76_76, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_77_77);
                  }
#line 454 "lco.m"
                  {
#line 454 "lco.m"
                    hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__lco__Goal_41, transform_hlds__lco__STATE_VARIABLE_ProcInfo_77_77, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_78_78);
                  }
#line 455 "lco.m"
                  {
#line 455 "lco.m"
                    hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__lco__STATE_VARIABLE_ProcInfo_78_78, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_80_80);
                  }
#line 457 "lco.m"
                  {
#line 457 "lco.m"
                    mercury__map__det_insert_4_p_0(transform_hlds__lco__TypeCtorInfo_82_82, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ((MR_Box) (transform_hlds__lco__CurProc_14)), ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ProcInfo_80_80)), transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_53, transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_54);
#line 457 "lco.m"
                    return;
                  }
#line 449 "lco.m"
                }
#line 459 "lco.m"
              else
#line 459 "lco.m"
                *transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_54 = transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_53;
#line 406 "lco.m"
            }
#line 392 "lco.m"
        }
#line 390 "lco.m"
        break;
#line 390 "lco.m"
    }
#line 390 "lco.m"
  }
#line 381 "lco.m"
}

#line 377 "lco.m"
static MR_Integer MR_CALL 
transform_hlds__lco__va_pos_1_f_0(
#line 377 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1)
#line 377 "lco.m"
{
#line 377 "lco.m"
  {
#line 377 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 377 "lco.m"
    MR_Integer transform_hlds__lco__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 377 "lco.m"
    MR_Word transform_hlds__lco__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));

#line 377 "lco.m"
    return transform_hlds__lco__HeadVar__2_2;
#line 377 "lco.m"
  }
#line 377 "lco.m"
}

#line 364 "lco.m"
static MR_Box MR_CALL 
transform_hlds__lco__lco_process_proc_variant_4_p_0_1(
#line 364 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 364 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1)
#line 364 "lco.m"
{
#line 364 "lco.m"
  {
#line 364 "lco.m"
    MR_Box transform_hlds__lco__wrapper_arg_2;
#line 364 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 364 "lco.m"
    MR_Integer transform_hlds__lco__conv1_HeadVar__2_2;

#line 364 "lco.m"
    {
#line 364 "lco.m"
      transform_hlds__lco__conv1_HeadVar__2_2 = transform_hlds__lco__va_pos_1_f_0(((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
#line 364 "lco.m"
    transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv1_HeadVar__2_2));
#line 364 "lco.m"
    return transform_hlds__lco__wrapper_arg_2;
#line 364 "lco.m"
  }
#line 364 "lco.m"
}

#line 333 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_process_proc_variant_4_p_0(
#line 333 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_5,
#line 333 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 333 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32,
#line 333 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_33)
#line 333 "lco.m"
{
#line 337 "lco.m"
  {
#line 337 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_46_46;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_47_47;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_49_49;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__PredProcId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 337 "lco.m"
    MR_Word transform_hlds__lco__VariantId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 337 "lco.m"
    MR_Word transform_hlds__lco__AddrOutArgs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantId_7, (MR_Integer) 0)));
#line 337 "lco.m"
    MR_Word transform_hlds__lco__VariantPredProcId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantId_7, (MR_Integer) 1)));
#line 337 "lco.m"
    MR_String transform_hlds__lco__VariantName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantId_7, (MR_Integer) 2)));
#line 337 "lco.m"
    MR_Word transform_hlds__lco__VariantPredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantPredProcId_10, (MR_Integer) 0)));
#line 337 "lco.m"
    MR_Integer transform_hlds__lco__VariantProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantPredProcId_10, (MR_Integer) 1)));
#line 337 "lco.m"
    MR_Word transform_hlds__lco__PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__PredProcId_6, (MR_Integer) 0)));
#line 337 "lco.m"
    MR_Integer transform_hlds__lco__ProcId_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__PredProcId_6, (MR_Integer) 1)));
#line 337 "lco.m"
    MR_Word transform_hlds__lco__ProcInfo_17;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__VariantProcInfo_18;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__HeadVars_19;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__VarTypes_20;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__ArgTypes_21;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__TVarSet_24;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__ExistQVars_25;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__Origin0_27;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__AddrOutArgPosns_28;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__Transform_29;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__Origin_30;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__VariantProcs_31;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_34_34;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_PredTable_35_35;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_36_36;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_37_37;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_39_39;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_40_40;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_42_42;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_43_43;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_PredTable_44_44;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__VarSet0_61;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__VarTypes0_62;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__HeadVars0_63;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__ArgModes0_64;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__HeadVars_65;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__ArgModes_66;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__VarToAddr_67;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__VarSet_68;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__VarTypes_69;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__InstMap0_70;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__Goal0_71;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__Goal_72;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__Globals_74;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__HighLevelData_75;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_32_78;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_33_79;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_34_80;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_35_81;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_36_82;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_37_83;
#line 337 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_39_85;
#line 342 "lco.m"
    MR_Word transform_hlds__lco___PredInfo_16;
#line 1303 "lco.m"
    MR_Word transform_hlds__lco___Changed_73;
#line 353 "lco.m"
    MR_Box transform_hlds__lco__conv0_STATE_VARIABLE_VariantPredInfo_36_36;
#line 358 "lco.m"
    MR_Word transform_hlds__lco___ArgTypes0_26;

#line 342 "lco.m"
    {
#line 342 "lco.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32, transform_hlds__lco__PredId_14, transform_hlds__lco__ProcId_15, &transform_hlds__lco___PredInfo_16, &transform_hlds__lco__ProcInfo_17);
    }
#line 1289 "lco.m"
    {
#line 1289 "lco.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__lco__ProcInfo_17, &transform_hlds__lco__VarSet0_61);
    }
#line 1290 "lco.m"
    {
#line 1290 "lco.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lco__ProcInfo_17, &transform_hlds__lco__VarTypes0_62);
    }
#line 1291 "lco.m"
    {
#line 1291 "lco.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__lco__ProcInfo_17, &transform_hlds__lco__HeadVars0_63);
    }
#line 1292 "lco.m"
    {
#line 1292 "lco.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__lco__ProcInfo_17, &transform_hlds__lco__ArgModes0_64);
    }
#line 1293 "lco.m"
    {
#line 1293 "lco.m"
      transform_hlds__lco__make_addr_vars_12_p_0(transform_hlds__lco__HeadVars0_63, transform_hlds__lco__ArgModes0_64, &transform_hlds__lco__HeadVars_65, &transform_hlds__lco__ArgModes_66, transform_hlds__lco__AddrOutArgs_9, (MR_Integer) 1, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32, &transform_hlds__lco__VarToAddr_67, transform_hlds__lco__VarSet0_61, &transform_hlds__lco__VarSet_68, transform_hlds__lco__VarTypes0_62, &transform_hlds__lco__VarTypes_69);
    }
#line 1296 "lco.m"
    {
#line 1296 "lco.m"
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__lco__HeadVars_65, transform_hlds__lco__ProcInfo_17, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_32_78);
    }
#line 1297 "lco.m"
    {
#line 1297 "lco.m"
      hlds__hlds_pred__proc_info_set_argmodes_3_p_0(transform_hlds__lco__ArgModes_66, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_32_78, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_33_79);
    }
#line 1298 "lco.m"
    {
#line 1298 "lco.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__lco__VarSet_68, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_33_79, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_34_80);
    }
#line 1299 "lco.m"
    {
#line 1299 "lco.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__lco__VarTypes_69, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_34_80, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_35_81);
    }
#line 1301 "lco.m"
    {
#line 1301 "lco.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__lco__ProcInfo_17, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32, &transform_hlds__lco__InstMap0_70);
    }
#line 1302 "lco.m"
    {
#line 1302 "lco.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__lco__ProcInfo_17, &transform_hlds__lco__Goal0_71);
    }
#line 1303 "lco.m"
    {
#line 1303 "lco.m"
      transform_hlds__lco__lco_transform_variant_goal_9_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32, transform_hlds__lco__VariantMap_5, transform_hlds__lco__VarToAddr_67, transform_hlds__lco__InstMap0_70, transform_hlds__lco__Goal0_71, &transform_hlds__lco__Goal_72, &transform_hlds__lco___Changed_73, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_35_81, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_36_82);
    }
#line 1305 "lco.m"
    {
#line 1305 "lco.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__lco__Goal_72, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_36_82, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_37_83);
    }
#line 1307 "lco.m"
    {
#line 1307 "lco.m"
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_37_83, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_39_85);
    }
#line 1311 "lco.m"
    {
#line 1311 "lco.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32, &transform_hlds__lco__Globals_74);
    }
#line 1312 "lco.m"
    {
#line 1312 "lco.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__lco__Globals_74, (MR_Integer) 256, &transform_hlds__lco__HighLevelData_75);
    }
#line 1317 "lco.m"
#line 1317 "lco.m"
    switch (transform_hlds__lco__HighLevelData_75) {
#line 1317 "lco.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1317 "lco.m"
      case (MR_Integer) 0:
#line 1318 "lco.m"
        {
#line 1318 "lco.m"
          transform_hlds__lco__VariantProcInfo_18 = transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_39_85;
#line 1318 "lco.m"
          transform_hlds__lco__STATE_VARIABLE_ModuleInfo_34_34 = transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32;
#line 1318 "lco.m"
        }
#line 1317 "lco.m"
        break;
#line 1317 "lco.m"
      case (MR_Integer) 1:
#line 1314 "lco.m"
        {
#line 1315 "lco.m"
          {
#line 1315 "lco.m"
            check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_39_85, &transform_hlds__lco__VariantProcInfo_18, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32, &transform_hlds__lco__STATE_VARIABLE_ModuleInfo_34_34);
          }
#line 1314 "lco.m"
        }
#line 1317 "lco.m"
        break;
#line 1317 "lco.m"
    }
#line 347 "lco.m"
    {
#line 347 "lco.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__lco__VariantProcInfo_18, &transform_hlds__lco__HeadVars_19);
    }
#line 348 "lco.m"
    {
#line 348 "lco.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lco__VariantProcInfo_18, &transform_hlds__lco__VarTypes_20);
    }
#line 349 "lco.m"
    {
#line 349 "lco.m"
      hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__lco__VarTypes_20, transform_hlds__lco__HeadVars_19, &transform_hlds__lco__ArgTypes_21);
    }
#line 352 "lco.m"
    {
#line 352 "lco.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_34_34, &transform_hlds__lco__STATE_VARIABLE_PredTable_35_35);
    }
#line 14427 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_46_46 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 14429 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_47_47 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 353 "lco.m"
    {
#line 353 "lco.m"
      mercury__map__lookup_3_p_0(transform_hlds__lco__TypeCtorInfo_46_46, transform_hlds__lco__TypeCtorInfo_47_47, transform_hlds__lco__STATE_VARIABLE_PredTable_35_35, ((MR_Box) (transform_hlds__lco__VariantPredId_12)), &transform_hlds__lco__conv0_STATE_VARIABLE_VariantPredInfo_36_36);
    }
#line 353 "lco.m"
    transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_36_36 = ((MR_Word) transform_hlds__lco__conv0_STATE_VARIABLE_VariantPredInfo_36_36);
#line 354 "lco.m"
    {
#line 354 "lco.m"
      hlds__hlds_pred__pred_info_set_name_3_p_0(transform_hlds__lco__VariantName_11, transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_36_36, &transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_37_37);
    }
#line 355 "lco.m"
    {
#line 355 "lco.m"
      hlds__hlds_pred__pred_info_set_is_pred_or_func_3_p_0((MR_Integer) 0, transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_37_37, &transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_39_39);
    }
#line 358 "lco.m"
    {
#line 358 "lco.m"
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_39_39, &transform_hlds__lco__TVarSet_24, &transform_hlds__lco__ExistQVars_25, &transform_hlds__lco___ArgTypes0_26);
    }
#line 360 "lco.m"
    {
#line 360 "lco.m"
      hlds__hlds_pred__pred_info_set_arg_types_5_p_0(transform_hlds__lco__TVarSet_24, transform_hlds__lco__ExistQVars_25, transform_hlds__lco__ArgTypes_21, transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_39_39, &transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_40_40);
    }
#line 363 "lco.m"
    {
#line 363 "lco.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_40_40, &transform_hlds__lco__Origin0_27);
    }
#line 14463 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_49_49 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 364 "lco.m"
    {
#line 364 "lco.m"
      transform_hlds__lco__AddrOutArgPosns_28 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0, transform_hlds__lco__TypeCtorInfo_49_49, (MR_Word) &transform_hlds__lco_scalar_common_2[10], transform_hlds__lco__AddrOutArgs_9);
    }
#line 365 "lco.m"
    {
#line 365 "lco.m"
      transform_hlds__lco__Transform_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 365 "lco.m"
      MR_hl_field(MR_mktag(3), transform_hlds__lco__Transform_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 365 "lco.m"
      MR_hl_field(MR_mktag(3), transform_hlds__lco__Transform_29, 1) = ((MR_Box) (transform_hlds__lco__ProcId_15));
#line 365 "lco.m"
      MR_hl_field(MR_mktag(3), transform_hlds__lco__Transform_29, 2) = ((MR_Box) (transform_hlds__lco__AddrOutArgPosns_28));
#line 365 "lco.m"
    }
#line 366 "lco.m"
    {
#line 366 "lco.m"
      transform_hlds__lco__Origin_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 366 "lco.m"
      MR_hl_field(MR_mktag(2), transform_hlds__lco__Origin_30, 0) = ((MR_Box) (transform_hlds__lco__Transform_29));
#line 366 "lco.m"
      MR_hl_field(MR_mktag(2), transform_hlds__lco__Origin_30, 1) = ((MR_Box) (transform_hlds__lco__Origin0_27));
#line 366 "lco.m"
      MR_hl_field(MR_mktag(2), transform_hlds__lco__Origin_30, 2) = ((MR_Box) (transform_hlds__lco__PredId_14));
#line 366 "lco.m"
    }
#line 367 "lco.m"
    {
#line 367 "lco.m"
      hlds__hlds_pred__pred_info_set_origin_3_p_0(transform_hlds__lco__Origin_30, transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_40_40, &transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_42_42);
    }
#line 371 "lco.m"
    {
#line 371 "lco.m"
      transform_hlds__lco__VariantProcs_31 = mercury__map__singleton_2_f_0(transform_hlds__lco__TypeCtorInfo_49_49, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ((MR_Box) (transform_hlds__lco__VariantProcId_13)), ((MR_Box) (transform_hlds__lco__VariantProcInfo_18)));
    }
#line 372 "lco.m"
    {
#line 372 "lco.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__lco__VariantProcs_31, transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_42_42, &transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_43_43);
    }
#line 373 "lco.m"
    {
#line 373 "lco.m"
      mercury__map__det_update_4_p_0(transform_hlds__lco__TypeCtorInfo_46_46, transform_hlds__lco__TypeCtorInfo_47_47, ((MR_Box) (transform_hlds__lco__VariantPredId_12)), ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_43_43)), transform_hlds__lco__STATE_VARIABLE_PredTable_35_35, &transform_hlds__lco__STATE_VARIABLE_PredTable_44_44);
    }
#line 374 "lco.m"
    {
#line 374 "lco.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__lco__STATE_VARIABLE_PredTable_44_44, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_34_34, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_33);
#line 374 "lco.m"
      return;
    }
#line 337 "lco.m"
  }
#line 333 "lco.m"
}

#line 320 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_process_proc_update_3_p_0(
#line 320 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 320 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_15,
#line 320 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_16)
#line 320 "lco.m"
{
#line 323 "lco.m"
  {
#line 323 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 323 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_18_18;
#line 323 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_19_19;
#line 323 "lco.m"
    MR_Word transform_hlds__lco__PredProcId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 323 "lco.m"
    MR_Word transform_hlds__lco__NewProcInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 323 "lco.m"
    MR_Word transform_hlds__lco__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__PredProcId_4, (MR_Integer) 0)));
#line 323 "lco.m"
    MR_Integer transform_hlds__lco__ProcId_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__PredProcId_4, (MR_Integer) 1)));
#line 323 "lco.m"
    MR_Word transform_hlds__lco__PredTable0_9;
#line 323 "lco.m"
    MR_Word transform_hlds__lco__PredInfo0_10;
#line 323 "lco.m"
    MR_Word transform_hlds__lco__Procs0_11;
#line 323 "lco.m"
    MR_Word transform_hlds__lco__Procs_12;
#line 323 "lco.m"
    MR_Word transform_hlds__lco__PredInfo_13;
#line 323 "lco.m"
    MR_Word transform_hlds__lco__PredTable_14;
#line 326 "lco.m"
    MR_Box transform_hlds__lco__conv0_PredInfo0_10;

#line 325 "lco.m"
    {
#line 325 "lco.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_15, &transform_hlds__lco__PredTable0_9);
    }
#line 14573 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 14575 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 326 "lco.m"
    {
#line 326 "lco.m"
      mercury__map__lookup_3_p_0(transform_hlds__lco__TypeCtorInfo_18_18, transform_hlds__lco__TypeCtorInfo_19_19, transform_hlds__lco__PredTable0_9, ((MR_Box) (transform_hlds__lco__PredId_7)), &transform_hlds__lco__conv0_PredInfo0_10);
    }
#line 326 "lco.m"
    transform_hlds__lco__PredInfo0_10 = ((MR_Word) transform_hlds__lco__conv0_PredInfo0_10);
#line 327 "lco.m"
    {
#line 327 "lco.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__lco__PredInfo0_10, &transform_hlds__lco__Procs0_11);
    }
#line 328 "lco.m"
    {
#line 328 "lco.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__lco__ProcId_8, ((MR_Box) (transform_hlds__lco__NewProcInfo_5)), transform_hlds__lco__Procs0_11, &transform_hlds__lco__Procs_12);
    }
#line 329 "lco.m"
    {
#line 329 "lco.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__lco__Procs_12, transform_hlds__lco__PredInfo0_10, &transform_hlds__lco__PredInfo_13);
    }
#line 330 "lco.m"
    {
#line 330 "lco.m"
      mercury__map__det_update_4_p_0(transform_hlds__lco__TypeCtorInfo_18_18, transform_hlds__lco__TypeCtorInfo_19_19, ((MR_Box) (transform_hlds__lco__PredId_7)), ((MR_Box) (transform_hlds__lco__PredInfo_13)), transform_hlds__lco__PredTable0_9, &transform_hlds__lco__PredTable_14);
    }
#line 331 "lco.m"
    {
#line 331 "lco.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__lco__PredTable_14, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_15, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_16);
#line 331 "lco.m"
      return;
    }
#line 323 "lco.m"
  }
#line 320 "lco.m"
}

#line 312 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_3(
#line 312 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 312 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 312 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 312 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3)
#line 312 "lco.m"
{
#line 312 "lco.m"
  {
#line 312 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 312 "lco.m"
    MR_Word transform_hlds__lco__conv10_STATE_VARIABLE_ModuleInfo_33;

#line 312 "lco.m"
    {
#line 312 "lco.m"
      transform_hlds__lco__lco_process_proc_variant_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2), &transform_hlds__lco__conv10_STATE_VARIABLE_ModuleInfo_33);
    }
#line 312 "lco.m"
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv10_STATE_VARIABLE_ModuleInfo_33));
#line 312 "lco.m"
  }
#line 312 "lco.m"
}

#line 311 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_2(
#line 311 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 311 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 311 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 311 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3)
#line 311 "lco.m"
{
#line 311 "lco.m"
  {
#line 311 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 311 "lco.m"
    MR_Word transform_hlds__lco__conv8_STATE_VARIABLE_ModuleInfo_16;

#line 311 "lco.m"
    {
#line 311 "lco.m"
      transform_hlds__lco__lco_process_proc_update_3_p_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2), &transform_hlds__lco__conv8_STATE_VARIABLE_ModuleInfo_16);
    }
#line 311 "lco.m"
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv8_STATE_VARIABLE_ModuleInfo_16));
#line 311 "lco.m"
  }
#line 311 "lco.m"
}

#line 302 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_1(
#line 302 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 302 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 302 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 302 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 302 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 302 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5,
#line 302 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_6,
#line 302 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_7,
#line 302 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_8,
#line 302 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_9)
#line 302 "lco.m"
{
#line 302 "lco.m"
  {
#line 302 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 302 "lco.m"
    MR_Word transform_hlds__lco__conv3_STATE_VARIABLE_ModuleInfo_50;
#line 302 "lco.m"
    MR_Word transform_hlds__lco__conv2_STATE_VARIABLE_CurSCCVariants_52;
#line 302 "lco.m"
    MR_Word transform_hlds__lco__conv1_STATE_VARIABLE_CurSCCUpdates_54;
#line 302 "lco.m"
    MR_Word transform_hlds__lco__conv0_STATE_VARIABLE_Permitted_56;

#line 302 "lco.m"
    {
#line 302 "lco.m"
      transform_hlds__lco__lco_proc_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2), &transform_hlds__lco__conv3_STATE_VARIABLE_ModuleInfo_50, ((MR_Word) transform_hlds__lco__wrapper_arg_4), &transform_hlds__lco__conv2_STATE_VARIABLE_CurSCCVariants_52, ((MR_Word) transform_hlds__lco__wrapper_arg_6), &transform_hlds__lco__conv1_STATE_VARIABLE_CurSCCUpdates_54, ((MR_Word) transform_hlds__lco__wrapper_arg_8), &transform_hlds__lco__conv0_STATE_VARIABLE_Permitted_56);
    }
#line 302 "lco.m"
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv3_STATE_VARIABLE_ModuleInfo_50));
#line 302 "lco.m"
    *transform_hlds__lco__wrapper_arg_5 = ((MR_Box) (transform_hlds__lco__conv2_STATE_VARIABLE_CurSCCVariants_52));
#line 302 "lco.m"
    *transform_hlds__lco__wrapper_arg_7 = ((MR_Box) (transform_hlds__lco__conv1_STATE_VARIABLE_CurSCCUpdates_54));
#line 302 "lco.m"
    *transform_hlds__lco__wrapper_arg_9 = ((MR_Box) (transform_hlds__lco__conv0_STATE_VARIABLE_Permitted_56));
#line 302 "lco.m"
  }
#line 302 "lco.m"
}

#line 296 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0(
#line 296 "lco.m"
  MR_Word transform_hlds__lco__SCC_6,
#line 296 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VariantMap_0_17,
#line 296 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VariantMap_18,
#line 296 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_19,
#line 296 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_20)
#line 296 "lco.m"
{
#line 299 "lco.m"
  {
#line 299 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 299 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_40_40;
#line 299 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_42_42;
#line 299 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_43_43;
#line 299 "lco.m"
    MR_Word transform_hlds__lco__CurSCCVariantMap_10;
#line 299 "lco.m"
    MR_Word transform_hlds__lco__CurSCCUpdateMap_11;
#line 299 "lco.m"
    MR_Word transform_hlds__lco__Permitted_12;
#line 299 "lco.m"
    MR_Word transform_hlds__lco__CurSCCVariants_13;
#line 299 "lco.m"
    MR_Word transform_hlds__lco__CurSCCUpdates_14;
#line 299 "lco.m"
    MR_Word transform_hlds__lco__V_21_21;
#line 299 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_22_22;
#line 299 "lco.m"
    MR_Word transform_hlds__lco__V_23_23;
#line 299 "lco.m"
    MR_Word transform_hlds__lco__V_24_24;
#line 302 "lco.m"
    MR_Box transform_hlds__lco__conv7_STATE_VARIABLE_ModuleInfo_22_22;
#line 302 "lco.m"
    MR_Box transform_hlds__lco__conv6_CurSCCVariantMap_10;
#line 302 "lco.m"
    MR_Box transform_hlds__lco__conv5_CurSCCUpdateMap_11;
#line 302 "lco.m"
    MR_Box transform_hlds__lco__conv4_Permitted_12;
#line 309 "lco.m"
    MR_Word transform_hlds__lco__V_15_15;
#line 309 "lco.m"
    MR_Word transform_hlds__lco__V_16_16;

#line 302 "lco.m"
    {
#line 302 "lco.m"
      transform_hlds__lco__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 302 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_21_21, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_4[0]));
#line 302 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_21_21, 1) = ((MR_Box) (transform_hlds__lco__lco_scc_5_p_0_1));
#line 302 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 302 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_21_21, 3) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_VariantMap_0_17));
#line 302 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_21_21, 4) = ((MR_Box) (transform_hlds__lco__SCC_6));
#line 302 "lco.m"
    }
#line 14808 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_40_40 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 303 "lco.m"
    {
#line 303 "lco.m"
      transform_hlds__lco__V_23_23 = mercury__map__init_0_f_0(transform_hlds__lco__TypeCtorInfo_40_40, (MR_Word) &transform_hlds__lco_scalar_common_1[0]);
    }
#line 14815 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_42_42 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 303 "lco.m"
    {
#line 303 "lco.m"
      transform_hlds__lco__V_24_24 = mercury__map__init_0_f_0(transform_hlds__lco__TypeCtorInfo_40_40, transform_hlds__lco__TypeCtorInfo_42_42);
    }
#line 14822 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_43_43 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0;
#line 302 "lco.m"
    {
#line 302 "lco.m"
      mercury__list__foldl4_10_p_0(transform_hlds__lco__TypeCtorInfo_40_40, transform_hlds__lco__TypeCtorInfo_43_43, (MR_Word) &transform_hlds__lco_scalar_common_2[0], (MR_Word) &transform_hlds__lco_scalar_common_2[1], (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_is_permitted_on_scc_0, transform_hlds__lco__V_21_21, transform_hlds__lco__SCC_6, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_19)), &transform_hlds__lco__conv7_STATE_VARIABLE_ModuleInfo_22_22, ((MR_Box) (transform_hlds__lco__V_23_23)), &transform_hlds__lco__conv6_CurSCCVariantMap_10, ((MR_Box) (transform_hlds__lco__V_24_24)), &transform_hlds__lco__conv5_CurSCCUpdateMap_11, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__lco__conv4_Permitted_12);
    }
#line 302 "lco.m"
    transform_hlds__lco__STATE_VARIABLE_ModuleInfo_22_22 = ((MR_Word) transform_hlds__lco__conv7_STATE_VARIABLE_ModuleInfo_22_22);
#line 302 "lco.m"
    transform_hlds__lco__CurSCCVariantMap_10 = ((MR_Word) transform_hlds__lco__conv6_CurSCCVariantMap_10);
#line 302 "lco.m"
    transform_hlds__lco__CurSCCUpdateMap_11 = ((MR_Word) transform_hlds__lco__conv5_CurSCCUpdateMap_11);
#line 302 "lco.m"
    transform_hlds__lco__Permitted_12 = ((MR_Word) transform_hlds__lco__conv4_Permitted_12);
#line 305 "lco.m"
    {
#line 305 "lco.m"
      mercury__multi_map__to_flat_assoc_list_2_p_0(transform_hlds__lco__TypeCtorInfo_40_40, (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0, transform_hlds__lco__CurSCCVariantMap_10, &transform_hlds__lco__CurSCCVariants_13);
    }
#line 306 "lco.m"
    {
#line 306 "lco.m"
      mercury__map__to_assoc_list_2_p_0(transform_hlds__lco__TypeCtorInfo_40_40, transform_hlds__lco__TypeCtorInfo_42_42, transform_hlds__lco__CurSCCUpdateMap_11, &transform_hlds__lco__CurSCCUpdates_14);
    }
#line 308 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__Permitted_12 == (MR_Integer) 1);
#line 308 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 308 "lco.m"
      {
#line 309 "lco.m"
        transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__CurSCCUpdates_14)) == (MR_mktag((MR_Integer) 1)));
#line 309 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 309 "lco.m"
          {
#line 309 "lco.m"
            transform_hlds__lco__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__CurSCCUpdates_14, (MR_Integer) 0)));
#line 309 "lco.m"
            transform_hlds__lco__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__CurSCCUpdates_14, (MR_Integer) 1)));
#line 309 "lco.m"
          }
#line 308 "lco.m"
      }
#line 314 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 311 "lco.m"
      {
#line 311 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_27_27;
#line 311 "lco.m"
        MR_Word transform_hlds__lco__V_28_28;
#line 311 "lco.m"
        MR_Box transform_hlds__lco__conv9_STATE_VARIABLE_ModuleInfo_27_27;
#line 312 "lco.m"
        MR_Box transform_hlds__lco__conv11_STATE_VARIABLE_ModuleInfo_20;

#line 311 "lco.m"
        {
#line 311 "lco.m"
          mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[2], transform_hlds__lco__TypeCtorInfo_43_43, (MR_Word) &transform_hlds__lco_scalar_common_2[9], transform_hlds__lco__CurSCCUpdates_14, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ModuleInfo_22_22)), &transform_hlds__lco__conv9_STATE_VARIABLE_ModuleInfo_27_27);
        }
#line 311 "lco.m"
        transform_hlds__lco__STATE_VARIABLE_ModuleInfo_27_27 = ((MR_Word) transform_hlds__lco__conv9_STATE_VARIABLE_ModuleInfo_27_27);
#line 312 "lco.m"
        {
#line 312 "lco.m"
          transform_hlds__lco__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 312 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_28_28, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_6[0]));
#line 312 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_28_28, 1) = ((MR_Box) (transform_hlds__lco__lco_scc_5_p_0_3));
#line 312 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 312 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_28_28, 3) = ((MR_Box) (transform_hlds__lco__CurSCCVariantMap_10));
#line 312 "lco.m"
        }
#line 312 "lco.m"
        {
#line 312 "lco.m"
          mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[3], transform_hlds__lco__TypeCtorInfo_43_43, transform_hlds__lco__V_28_28, transform_hlds__lco__CurSCCVariants_13, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ModuleInfo_27_27)), &transform_hlds__lco__conv11_STATE_VARIABLE_ModuleInfo_20);
        }
#line 312 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ModuleInfo_20 = ((MR_Word) transform_hlds__lco__conv11_STATE_VARIABLE_ModuleInfo_20);
#line 311 "lco.m"
      }
#line 314 "lco.m"
    else
#line 315 "lco.m"
      *transform_hlds__lco__STATE_VARIABLE_ModuleInfo_20 = transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_19;
#line 299 "lco.m"
    *transform_hlds__lco__STATE_VARIABLE_VariantMap_18 = transform_hlds__lco__STATE_VARIABLE_VariantMap_0_17;
#line 299 "lco.m"
  }
#line 296 "lco.m"
}

#line 294 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_modulo_constructors_2_p_0_1(
#line 294 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 294 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 294 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 294 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 294 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 294 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5)
#line 294 "lco.m"
{
#line 294 "lco.m"
  {
#line 294 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 294 "lco.m"
    MR_Word transform_hlds__lco__conv1_STATE_VARIABLE_VariantMap_18;
#line 294 "lco.m"
    MR_Word transform_hlds__lco__conv0_STATE_VARIABLE_ModuleInfo_20;

#line 294 "lco.m"
    {
#line 294 "lco.m"
      transform_hlds__lco__lco_scc_5_p_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2), &transform_hlds__lco__conv1_STATE_VARIABLE_VariantMap_18, ((MR_Word) transform_hlds__lco__wrapper_arg_4), &transform_hlds__lco__conv0_STATE_VARIABLE_ModuleInfo_20);
    }
#line 294 "lco.m"
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv1_STATE_VARIABLE_VariantMap_18));
#line 294 "lco.m"
    *transform_hlds__lco__wrapper_arg_5 = ((MR_Box) (transform_hlds__lco__conv0_STATE_VARIABLE_ModuleInfo_20));
#line 294 "lco.m"
  }
#line 294 "lco.m"
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
#line 291 "lco.m"
  {
#line 291 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 291 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_13_13;
#line 291 "lco.m"
    MR_Word transform_hlds__lco__DepInfo_4;
#line 291 "lco.m"
    MR_Word transform_hlds__lco__SCCs_5;
#line 291 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_9_9;
#line 291 "lco.m"
    MR_Word transform_hlds__lco__V_11_11;
#line 294 "lco.m"
    MR_Word transform_hlds__lco__V_6_6;
#line 294 "lco.m"
    MR_Box transform_hlds__lco__conv3_V_6_6;
#line 294 "lco.m"
    MR_Box transform_hlds__lco__conv2_STATE_VARIABLE_ModuleInfo_8;

#line 292 "lco.m"
    {
#line 292 "lco.m"
      transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_7, &transform_hlds__lco__STATE_VARIABLE_ModuleInfo_9_9, &transform_hlds__lco__DepInfo_4);
    }
#line 14996 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_13_13 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 293 "lco.m"
    {
#line 293 "lco.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0(transform_hlds__lco__TypeCtorInfo_13_13, transform_hlds__lco__DepInfo_4, &transform_hlds__lco__SCCs_5);
    }
#line 294 "lco.m"
    {
#line 294 "lco.m"
      transform_hlds__lco__V_11_11 = mercury__map__init_0_f_0(transform_hlds__lco__TypeCtorInfo_13_13, (MR_Word) &transform_hlds__lco_scalar_common_1[0]);
    }
#line 294 "lco.m"
    {
#line 294 "lco.m"
      mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[1], (MR_Word) &transform_hlds__lco_scalar_common_2[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__lco_scalar_common_2[8], transform_hlds__lco__SCCs_5, ((MR_Box) (transform_hlds__lco__V_11_11)), &transform_hlds__lco__conv3_V_6_6, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ModuleInfo_9_9)), &transform_hlds__lco__conv2_STATE_VARIABLE_ModuleInfo_8);
    }
#line 294 "lco.m"
    transform_hlds__lco__V_6_6 = ((MR_Word) transform_hlds__lco__conv3_V_6_6);
#line 294 "lco.m"
    *transform_hlds__lco__STATE_VARIABLE_ModuleInfo_8 = ((MR_Word) transform_hlds__lco__conv2_STATE_VARIABLE_ModuleInfo_8);
#line 291 "lco.m"
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
