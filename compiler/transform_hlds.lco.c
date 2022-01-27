/*
** Automatically generated from `lco.m'
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


/* :- module transform_hlds.lco. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__lco__init
ENDINIT
*/

#include "transform_hlds.lco.mih"


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
#include "check_hlds.inst_test.mih"
#include "check_hlds.inst_util.mih"
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
#include "mdbcomp.builtin_modules.mih"
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
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.dependency_graph.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 1445 "lco.m"
struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s {
#line 1445 "lco.m"
  MR_Word transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12;
#line 1450 "lco.m"
  MR_bool transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded;
#line 1514 "lco.m"
  MR_Word transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVar_42;
#line 1501 "lco.m"
  jmp_buf transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__commit_0;
#line 1501 "lco.m"
  MR_Word transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__TypeInfo_115_115;
#line 1501 "lco.m"
  MR_Word transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVarPair_44;
#line 1501 "lco.m"
  MR_Word transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__V_114_114;
#line 1501 "lco.m"
  MR_Box transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__conv4_FGTVarPair_44;
#line 1445 "lco.m"
};


#line 180 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 183 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0;

#line 186 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0;

#line 189 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 192 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 195 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__lco__type_ctor_info_variant_id_0;

#line 198 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 201 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 204 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 207 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 210 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 213 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 216 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_field_id_0;

#line 219 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 222 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 225 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_transform_hlds__lco__type_ctor_info_variant_arg_0;

#line 228 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0;

#line 231 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0;

#line 234 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_store_target_0;

#line 237 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_0;

#line 240 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_1;

#line 243 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_value_ordered_allow_float_addr_0[2];

#line 246 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_allow_float_addr_0[2];

#line 249 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_allow_float_addr_0[2];

#line 252 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_field_id_0_0[3];

#line 255 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_field_id_0_0[3];

#line 258 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_field_id_0_0;

#line 261 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_field_id_0_0[1];

#line 264 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_field_id_0[1];

#line 267 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_field_id_0[1];

#line 270 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_field_id_0[1];

#line 273 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0;

#line 276 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 279 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 282 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_lco_const_info_0_0[9];

#line 285 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_lco_const_info_0_0[9];

#line 288 "transform_hlds.lco.c"
static const MR_DuArgLocn transform_hlds__lco__transform_hlds__lco__field_locns_lco_const_info_0_0[9];

#line 291 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_const_info_0_0;

#line 294 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_const_info_0_0[1];

#line 297 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_const_info_0[1];

#line 300 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_lco_const_info_0[1];

#line 303 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_const_info_0[1];

#line 306 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 309 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 312 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_lco_info_0_0[6];

#line 315 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_lco_info_0_0[6];

#line 318 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_info_0_0;

#line 321 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_info_0_0[1];

#line 324 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_info_0[1];

#line 327 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_lco_info_0[1];

#line 330 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_info_0[1];

#line 333 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_0;

#line 336 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_1;

#line 339 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_value_ordered_lco_is_permitted_on_scc_0[2];

#line 342 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_lco_is_permitted_on_scc_0[2];

#line 345 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_is_permitted_on_scc_0[2];

#line 348 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_0;

#line 351 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_1;

#line 354 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_value_ordered_proc_changed_0[2];

#line 357 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_proc_changed_0[2];

#line 360 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_proc_changed_0[2];

#line 363 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__maybe__ti_maybe_1transform_hlds__lco__type_ctor_info_field_id_0;

#line 366 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_store_target_0_0[2];

#line 369 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_store_target_0_0;

#line 372 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_store_target_0_0[1];

#line 375 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_store_target_0[1];

#line 378 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_store_target_0[1];

#line 381 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_store_target_0[1];

#line 384 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0;

#line 387 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_variant_arg_0_0[2];

#line 390 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_variant_arg_0_0[2];

#line 393 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_arg_0_0;

#line 396 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_arg_0_0[1];

#line 399 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_arg_0[1];

#line 402 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_arg_0[1];

#line 405 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_arg_0[1];

#line 408 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_arg_0;

#line 411 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_variant_id_0_0[3];

#line 414 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_id_0_0;

#line 417 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_id_0_0[1];

#line 420 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_id_0[1];

#line 423 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_id_0[1];

#line 426 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_id_0[1];

#line 429 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____allow_float_addr_0_0_10001(
#line 432 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 434 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 437 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____allow_float_addr_0_0_10001(
#line 440 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 442 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 444 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 447 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____field_id_0_0_10001(
#line 450 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 452 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 455 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____field_id_0_0_10001(
#line 458 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 460 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 462 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 465 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_const_info_0_0_10001(
#line 468 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 470 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 473 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____lco_const_info_0_0_10001(
#line 476 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 478 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 480 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 483 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_info_0_0_10001(
#line 486 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 488 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 491 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____lco_info_0_0_10001(
#line 494 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 496 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 498 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 501 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0_10001(
#line 504 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 506 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 509 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0_10001(
#line 512 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 514 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 516 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 519 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____proc_changed_0_0_10001(
#line 522 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 524 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 527 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____proc_changed_0_0_10001(
#line 530 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 532 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 534 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 537 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____store_target_0_0_10001(
#line 540 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 542 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 545 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____store_target_0_0_10001(
#line 548 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 550 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 552 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 555 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____var_to_target_0_0_10001(
#line 558 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 560 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 563 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____var_to_target_0_0_10001(
#line 566 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 568 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 570 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 573 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_arg_0_0_10001(
#line 576 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 578 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 581 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____variant_arg_0_0_10001(
#line 584 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 586 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 588 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 591 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_id_0_0_10001(
#line 594 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 596 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 599 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____variant_id_0_0_10001(
#line 602 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 604 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 606 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 609 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_map_0_0_10001(
#line 612 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 614 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 617 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____variant_map_0_0_10001(
#line 620 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 622 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 624 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 754 "lco.m"
static void MR_CALL 
transform_hlds__lco__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_116_105_116_105_111_110_95_100_101_112_101_110_100_101_110_116_95_103_111_97_108_95_95_91_49_44_32_50_93_95_48_9_p_0(
#line 754 "lco.m"
  MR_Word transform_hlds__lco__Goal_12,
#line 754 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22,
#line 754 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23,
#line 754 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24,
#line 754 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25,
#line 754 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26,
#line 754 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_DelayForVars_27);

#line 1666 "lco.m"
static void MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__lco_transform_variant_plain_call__1666__1_2_p_0(
#line 1666 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_69,
#line 1666 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__2_70);

#line 1384 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__make_addr_vars__1384__1_2_p_0(
#line 1384 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 1384 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_25);

#line 1258 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__update_construct__1258__1_2_p_0(
#line 1258 "lco.m"
  MR_Word transform_hlds__lco__ConsId_23,
#line 1258 "lco.m"
  MR_Word transform_hlds__lco__RHSConsId_43);

#line 1112 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__IntroducedFrom__func__make_variant_args__1112__1_2_f_0(
#line 1112 "lco.m"
  MR_Word transform_hlds__lco__AddrVarFieldIds_6,
#line 1112 "lco.m"
  MR_Word transform_hlds__lco__LambdaHeadVar__1_14);

#line 1109 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__IntroducedFrom__func__make_variant_args__1109__1_1_f_0(
#line 1109 "lco.m"
  MR_Word transform_hlds__lco__LambdaHeadVar__1_17);

#line 951 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__update_call_args__951__1_2_p_0(
#line 951 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 951 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_14);

#line 246 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____variant_map_0_0(
#line 246 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 246 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 246 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 246 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_map_0_0(
#line 246 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 246 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 218 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____variant_id_0_0(
#line 218 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 218 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 218 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 218 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_id_0_0(
#line 218 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 218 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 225 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____variant_arg_0_0(
#line 225 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 225 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 225 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 225 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_arg_0_0(
#line 225 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 225 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 283 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____var_to_target_0_0(
#line 283 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 283 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 283 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 283 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____var_to_target_0_0(
#line 283 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 283 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 285 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____store_target_0_0(
#line 285 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 285 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 285 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 285 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____store_target_0_0(
#line 285 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 285 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 252 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____proc_changed_0_0(
#line 252 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 252 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 252 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 252 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____proc_changed_0_0(
#line 252 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_1,
#line 252 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 248 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0(
#line 248 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 248 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 248 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 248 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0(
#line 248 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_1,
#line 248 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 260 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____lco_info_0_0(
#line 260 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 260 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 260 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 260 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_info_0_0(
#line 260 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 260 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 270 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____lco_const_info_0_0(
#line 270 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 270 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 270 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 270 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_const_info_0_0(
#line 270 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 270 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 239 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____field_id_0_0(
#line 239 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 239 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 239 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 239 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____field_id_0_0(
#line 239 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 239 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 256 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____allow_float_addr_0_0(
#line 256 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 256 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 256 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 256 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____allow_float_addr_0_0(
#line 256 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_1,
#line 256 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2);

#line 1759 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_unification_args_8_p_0(
#line 1759 "lco.m"
  MR_Word transform_hlds__lco__GroundVar_9,
#line 1759 "lco.m"
  MR_Integer transform_hlds__lco__TargetArgNum_10,
#line 1759 "lco.m"
  MR_Integer transform_hlds__lco__CurArgNum_11,
#line 1759 "lco.m"
  MR_Word transform_hlds__lco__ArgTypes_12,
#line 1759 "lco.m"
  MR_Word * transform_hlds__lco__ArgVars_13,
#line 1759 "lco.m"
  MR_Word * transform_hlds__lco__ArgModes_14,
#line 1759 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22,
#line 1759 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_23);

#line 1716 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_store_goal_6_p_0(
#line 1716 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_7,
#line 1716 "lco.m"
  MR_Word transform_hlds__lco__InstMap_8,
#line 1716 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 1716 "lco.m"
  MR_Word * transform_hlds__lco__Goal_11,
#line 1716 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_31,
#line 1716 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_32);

#line 1691 "lco.m"
static void MR_CALL 
transform_hlds__lco__grounding_to_variant_args_5_p_0(
#line 1691 "lco.m"
  MR_Word transform_hlds__lco__GroundingVarToAddr_6,
#line 1691 "lco.m"
  MR_Integer transform_hlds__lco__OutArgNum_7,
#line 1691 "lco.m"
  MR_Word transform_hlds__lco__OutArgs_8,
#line 1691 "lco.m"
  MR_Word * transform_hlds__lco__Subst_9,
#line 1691 "lco.m"
  MR_Word * transform_hlds__lco__VariantArgs_10);

#line 1681 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__is_grounding_4_p_0(
#line 1681 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_5,
#line 1681 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_6,
#line 1681 "lco.m"
  MR_Word transform_hlds__lco__InstMap_7,
#line 1681 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__4_4);

#line 1666 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_2(
#line 1666 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1666 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1666 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2);

#line 1623 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_1(
#line 1623 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1623 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1);

#line 1614 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0(
#line 1614 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_12,
#line 1614 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_13,
#line 1614 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_14,
#line 1614 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_15,
#line 1614 "lco.m"
  MR_Word transform_hlds__lco__GoalExpr0_16,
#line 1614 "lco.m"
  MR_Word * transform_hlds__lco__GoalExpr_17,
#line 1614 "lco.m"
  MR_Word transform_hlds__lco__GoalInfo0_18,
#line 1614 "lco.m"
  MR_Word * transform_hlds__lco__GoalInfo_19,
#line 1614 "lco.m"
  MR_Word * transform_hlds__lco__Changed_20,
#line 1614 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_53,
#line 1614 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_54);

#line 1607 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_2(
#line 1607 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1607 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1607 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 1607 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_3,
#line 1607 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_4);

#line 1599 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_1(
#line 1599 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1599 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1);

#line 1591 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(
#line 1591 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_10,
#line 1591 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_11,
#line 1591 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_12,
#line 1591 "lco.m"
  MR_Word transform_hlds__lco__GoalInfo_13,
#line 1591 "lco.m"
  MR_Word transform_hlds__lco__GoalExpr0_14,
#line 1591 "lco.m"
  MR_Word * transform_hlds__lco__GoalExpr_15,
#line 1591 "lco.m"
  MR_Word * transform_hlds__lco__Changed_16,
#line 1591 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_23,
#line 1591 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_24);

#line 1580 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_case_9_p_0(
#line 1580 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_10,
#line 1580 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_11,
#line 1580 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_12,
#line 1580 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_13,
#line 1580 "lco.m"
  MR_Word transform_hlds__lco__Case0_14,
#line 1580 "lco.m"
  MR_Word * transform_hlds__lco__Case_15,
#line 1580 "lco.m"
  MR_Word * transform_hlds__lco__Changed_16,
#line 1580 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22,
#line 1580 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_23);

#line 1561 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_conj_9_p_0(
#line 1561 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_1,
#line 1561 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_2,
#line 1561 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_3,
#line 1561 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_4,
#line 1561 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 1561 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6,
#line 1561 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__7_7,
#line 1561 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_8,
#line 1561 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_9);

#line 1476 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_6(
#line 1476 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1476 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1476 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 1476 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 1476 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 1476 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5);

#line 1467 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_1(
#line 1467 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1467 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1467 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 1467 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 1467 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 1467 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5);

#line 1501 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_2(
#line 1501 "lco.m"
  void * transform_hlds__lco__env_ptr_arg);

#line 1501 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_4(
#line 1501 "lco.m"
  void * transform_hlds__lco__env_ptr_arg);

#line 1501 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_3(
#line 1501 "lco.m"
  void * transform_hlds__lco__env_ptr_arg);

#line 1501 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_5(
#line 1501 "lco.m"
  void * transform_hlds__lco__env_ptr_arg);

#line 1445 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0(
#line 1445 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_10,
#line 1445 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_11,
#line 1445 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_12,
#line 1445 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_13,
#line 1445 "lco.m"
  MR_Word transform_hlds__lco__Goal0_14,
#line 1445 "lco.m"
  MR_Word * transform_hlds__lco__Goal_15,
#line 1445 "lco.m"
  MR_Word * transform_hlds__lco__Changed_16,
#line 1445 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73,
#line 1445 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);

#line 1384 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__make_addr_vars_12_p_0_1(
#line 1384 "lco.m"
  MR_Box transform_hlds__lco__closure_arg);

#line 1377 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_addr_vars_12_p_0(
#line 1377 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 1377 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 1377 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__3_3,
#line 1377 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__4_4,
#line 1377 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 1377 "lco.m"
  MR_Integer transform_hlds__lco__NextOutArgNum_6,
#line 1377 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_7,
#line 1377 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__8_8,
#line 1377 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VarSet_0_9,
#line 1377 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VarSet_10,
#line 1377 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11,
#line 1377 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VarTypes_12);

#line 1332 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__occurs_once_2_p_0(
#line 1332 "lco.m"
  MR_Word transform_hlds__lco__Bag_3,
#line 1332 "lco.m"
  MR_Word transform_hlds__lco__Var_4);

#line 1323 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_mode_2_p_0(
#line 1323 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_3,
#line 1323 "lco.m"
  MR_Word transform_hlds__lco__UniMode_4);

#line 1313 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__bound_inst_with_free_arg_2_f_0(
#line 1313 "lco.m"
  MR_Word transform_hlds__lco__ConsId_4,
#line 1313 "lco.m"
  MR_Integer transform_hlds__lco__FreeArg_5);

#line 1278 "lco.m"
static void MR_CALL 
transform_hlds__lco__update_construct_args_14_p_0(
#line 1278 "lco.m"
  MR_Word transform_hlds__lco__Subst_1,
#line 1278 "lco.m"
  MR_Word transform_hlds__lco__HighLevelData_2,
#line 1278 "lco.m"
  MR_Word transform_hlds__lco__VarType_3,
#line 1278 "lco.m"
  MR_Word transform_hlds__lco__ConsId_4,
#line 1278 "lco.m"
  MR_Integer transform_hlds__lco__ArgNum_5,
#line 1278 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__6_6,
#line 1278 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__7_7,
#line 1278 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__8_8,
#line 1278 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_InstMapDelta_0_9,
#line 1278 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_InstMapDelta_10,
#line 1278 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_0_11,
#line 1278 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_12,
#line 1278 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VarTypes_0_13,
#line 1278 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VarTypes_14);

#line 1258 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__update_construct_8_p_0_1(
#line 1258 "lco.m"
  MR_Box transform_hlds__lco__closure_arg);

#line 1212 "lco.m"
static void MR_CALL 
transform_hlds__lco__update_construct_8_p_0(
#line 1212 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_9,
#line 1212 "lco.m"
  MR_Word transform_hlds__lco__Subst_10,
#line 1212 "lco.m"
  MR_Word transform_hlds__lco__Goal0_11,
#line 1212 "lco.m"
  MR_Word * transform_hlds__lco__Goal_12,
#line 1212 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_AddrVarFieldIds_0_59,
#line 1212 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_AddrVarFieldIds_60,
#line 1212 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_61,
#line 1212 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_62);

#line 1197 "lco.m"
static void MR_CALL 
transform_hlds__lco__create_variant_name_4_p_0(
#line 1197 "lco.m"
  MR_Word transform_hlds__lco__PredOrFunc_5,
#line 1197 "lco.m"
  MR_Integer transform_hlds__lco__VariantNumber_6,
#line 1197 "lco.m"
  MR_String transform_hlds__lco__OrigName_7,
#line 1197 "lco.m"
  MR_String * transform_hlds__lco__VariantName_8);

#line 1160 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__match_existing_variant_3_p_0(
#line 1160 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 1160 "lco.m"
  MR_Word transform_hlds__lco__AddrArgNums_6,
#line 1160 "lco.m"
  MR_Word * transform_hlds__lco__Variant_7);

#line 1118 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__ensure_variant_exists_8_p_0(
#line 1118 "lco.m"
  MR_Word transform_hlds__lco__PredId_9,
#line 1118 "lco.m"
  MR_Integer transform_hlds__lco__ProcId_10,
#line 1118 "lco.m"
  MR_Word transform_hlds__lco__AddrArgNums_11,
#line 1118 "lco.m"
  MR_Word * transform_hlds__lco__VariantPredProcId_12,
#line 1118 "lco.m"
  MR_Word transform_hlds__lco__SymName_13,
#line 1118 "lco.m"
  MR_Word * transform_hlds__lco__VariantSymName_14,
#line 1118 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_30,
#line 1118 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_31);

#line 1112 "lco.m"
static MR_Box MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0_2(
#line 1112 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1112 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1);

#line 1109 "lco.m"
static MR_Box MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0_1(
#line 1109 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1109 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1);

#line 1103 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0(
#line 1103 "lco.m"
  MR_Word transform_hlds__lco__HighLevelData_5,
#line 1103 "lco.m"
  MR_Word transform_hlds__lco__AddrVarFieldIds_6,
#line 1103 "lco.m"
  MR_Word transform_hlds__lco__Mismatches_7,
#line 1103 "lco.m"
  MR_Word * transform_hlds__lco__VariantArgs_8);

#line 1094 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__make_ref_type_1_f_0(
#line 1094 "lco.m"
  MR_Word transform_hlds__lco__FieldType_3);

#line 1071 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_address_var_5_p_0(
#line 1071 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_6,
#line 1071 "lco.m"
  MR_Word transform_hlds__lco__Var_7,
#line 1071 "lco.m"
  MR_Word * transform_hlds__lco__AddrVar_8,
#line 1071 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_19,
#line 1071 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_20);

#line 1012 "lco.m"
static void MR_CALL 
transform_hlds__lco__find_args_to_pass_by_addr_10_p_0(
#line 1012 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 1012 "lco.m"
  MR_Word transform_hlds__lco__UnifyInputVars_2,
#line 1012 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 1012 "lco.m"
  MR_Integer transform_hlds__lco__ArgNum_4,
#line 1012 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__5_5,
#line 1012 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6,
#line 1012 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Subst_0_7,
#line 1012 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Subst_8,
#line 1012 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_9,
#line 1012 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_10);

#line 984 "lco.m"
static void MR_CALL 
transform_hlds__lco__classify_proc_call_args_7_p_0(
#line 984 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 984 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 984 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 984 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__4_4,
#line 984 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__5_5,
#line 984 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6,
#line 984 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__7_7);

#line 951 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__update_call_args_6_p_0_1(
#line 951 "lco.m"
  MR_Box transform_hlds__lco__closure_arg);

#line 947 "lco.m"
static void MR_CALL 
transform_hlds__lco__update_call_args_6_p_0(
#line 947 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 947 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 947 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 947 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__4_4,
#line 947 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 947 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6);

#line 868 "lco.m"
static void MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0_2(
#line 868 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 868 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 868 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 868 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_3,
#line 868 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_4,
#line 868 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_5,
#line 868 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_6);

#line 866 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0_1(
#line 866 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 866 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1);

#line 826 "lco.m"
static void MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0(
#line 826 "lco.m"
  MR_Word transform_hlds__lco__CallGoal_9,
#line 826 "lco.m"
  MR_Word transform_hlds__lco__CallOutArgs_10,
#line 826 "lco.m"
  MR_Word transform_hlds__lco__UnifyGoals_11,
#line 826 "lco.m"
  MR_Word transform_hlds__lco__UnifyInputVars_12,
#line 826 "lco.m"
  MR_Word * transform_hlds__lco__MaybeGoals_13,
#line 826 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_57,
#line 826 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_58,
#line 826 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_15);

#line 790 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_unification_5_p_0_1(
#line 790 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 790 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1);

#line 776 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_unification_5_p_0(
#line 776 "lco.m"
  MR_Word transform_hlds__lco__Goal_6,
#line 776 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_0_30,
#line 776 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_31,
#line 776 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_32,
#line 776 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_33);

#line 754 "lco.m"
static void MR_CALL 
transform_hlds__lco__partition_dependent_goal_9_p_0(
#line 754 "lco.m"
  MR_Word transform_hlds__lco___Info_10,
#line 754 "lco.m"
  MR_Word transform_hlds__lco___ConstInfo_11,
#line 754 "lco.m"
  MR_Word transform_hlds__lco__Goal_12,
#line 754 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22,
#line 754 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23,
#line 754 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24,
#line 754 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25,
#line 754 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26,
#line 754 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_DelayForVars_27);

#line 719 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__potentially_moveable_goal_1_p_0(
#line 719 "lco.m"
  MR_Word transform_hlds__lco__Goal_2);

#line 681 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__potentially_transformable_recursive_call_4_p_0(
#line 681 "lco.m"
  MR_Word transform_hlds__lco__Info_5,
#line 681 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_6,
#line 681 "lco.m"
  MR_Word transform_hlds__lco__Goal_7,
#line 681 "lco.m"
  MR_Word * transform_hlds__lco__OutArgs_8);

#line 651 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__divide_rev_conj_8_p_0(
#line 651 "lco.m"
  MR_Word transform_hlds__lco__Info_9,
#line 651 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_10,
#line 651 "lco.m"
  MR_Word transform_hlds__lco__RevGoals0_11,
#line 651 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_AfterGoals_0_19,
#line 651 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_AfterGoals_20,
#line 651 "lco.m"
  MR_Word * transform_hlds__lco__RecGoal_13,
#line 651 "lco.m"
  MR_Word * transform_hlds__lco__RecOutArgs_14,
#line 651 "lco.m"
  MR_Word * transform_hlds__lco__RevBeforeGoals_15);

#line 621 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0_2(
#line 621 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 621 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 621 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 621 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 621 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 621 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5);

#line 617 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0_1(
#line 617 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 617 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 617 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 617 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 617 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 617 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5,
#line 617 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_6,
#line 617 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_7);

#line 607 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0(
#line 607 "lco.m"
  MR_Word transform_hlds__lco__Goals0_6,
#line 607 "lco.m"
  MR_Word * transform_hlds__lco__MaybeGoals_7,
#line 607 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_26,
#line 607 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_27,
#line 607 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_9);

#line 582 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_cases_5_p_0(
#line 582 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 582 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__2_2,
#line 582 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_3,
#line 582 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_4,
#line 582 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5);

#line 494 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_goal_5_p_0(
#line 494 "lco.m"
  MR_Word transform_hlds__lco__Goal0_6,
#line 494 "lco.m"
  MR_Word * transform_hlds__lco__Goal_7,
#line 494 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_60,
#line 494 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_61,
#line 494 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_9);

#line 413 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_proc_12_p_0(
#line 413 "lco.m"
  MR_Word transform_hlds__lco__LowerSCCVariants_13,
#line 413 "lco.m"
  MR_Word transform_hlds__lco__SCC_14,
#line 413 "lco.m"
  MR_Word transform_hlds__lco__CurProc_15,
#line 413 "lco.m"
  MR_Word transform_hlds__lco__PredInfo_16,
#line 413 "lco.m"
  MR_Word transform_hlds__lco__ProcInfo0_17,
#line 413 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_44,
#line 413 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_45,
#line 413 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_46,
#line 413 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_47,
#line 413 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_48,
#line 413 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_49,
#line 413 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Permitted_50);

#line 383 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_proc_if_permitted_11_p_0(
#line 383 "lco.m"
  MR_Word transform_hlds__lco__LowerSCCVariants_12,
#line 383 "lco.m"
  MR_Word transform_hlds__lco__SCC_13,
#line 383 "lco.m"
  MR_Word transform_hlds__lco__CurProc_14,
#line 383 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_26,
#line 383 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_27,
#line 383 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_28,
#line 383 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_29,
#line 383 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_30,
#line 383 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_31,
#line 383 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Permitted_0_32,
#line 383 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Permitted_33);

#line 379 "lco.m"
static MR_Integer MR_CALL 
transform_hlds__lco__va_pos_1_f_0(
#line 379 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1);

#line 366 "lco.m"
static MR_Box MR_CALL 
transform_hlds__lco__lco_process_proc_variant_4_p_0_1(
#line 366 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 366 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1);

#line 335 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_process_proc_variant_4_p_0(
#line 335 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_5,
#line 335 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 335 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32,
#line 335 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_33);

#line 322 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_process_proc_update_3_p_0(
#line 322 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 322 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_15,
#line 322 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_16);

#line 314 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_3(
#line 314 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 314 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 314 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 314 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3);

#line 313 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_2(
#line 313 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 313 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 313 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 313 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3);

#line 304 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_1(
#line 304 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 304 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 304 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 304 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 304 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 304 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5,
#line 304 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_6,
#line 304 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_7,
#line 304 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_8,
#line 304 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_9);

#line 298 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0(
#line 298 "lco.m"
  MR_Word transform_hlds__lco__SCC_6,
#line 298 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VariantMap_0_17,
#line 298 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VariantMap_18,
#line 298 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_19,
#line 298 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_20);

#line 296 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_modulo_constructors_2_p_0_1(
#line 296 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 296 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 296 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 296 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 296 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 296 "lco.m"
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 2238 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 2246 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0
  }
};

#line 2254 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0
  }
};

#line 2263 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 2272 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 2281 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__lco__type_ctor_info_variant_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0
  }
};

#line 2290 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 2298 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2306 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2314 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2322 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2330 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2339 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_field_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0
  }
};

#line 2348 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2356 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2365 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_transform_hlds__lco__type_ctor_info_variant_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0
  }
};

#line 2373 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0
  }
};

#line 2382 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0
  }
};

#line 2390 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_store_target_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0
  }
};

#line 2399 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_0 = {
  (MR_String) "do_not_allow_float_addr",
  (MR_Integer) 0
};

#line 2405 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_1 = {
  (MR_String) "allow_float_addr",
  (MR_Integer) 1
};

#line 2411 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_value_ordered_allow_float_addr_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_0,
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_1
};

#line 2417 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_allow_float_addr_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_1,
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_0
};

#line 2423 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_allow_float_addr_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2429 "transform_hlds.lco.c"
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

#line 2446 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_field_id_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2453 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_field_id_0_0[3] = {
  (MR_String) "fi_type",
  (MR_String) "fi_cons_id",
  (MR_String) "fi_arg"
};

#line 2460 "transform_hlds.lco.c"
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

#line 2475 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_field_id_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_field_id_0_0
};

#line 2480 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_field_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_field_id_0_0
  }
};

#line 2489 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_field_id_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_field_id_0_0
};

#line 2494 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_field_id_0[1] = {
  (MR_Integer) 0
};

#line 2499 "transform_hlds.lco.c"
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

#line 2516 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0
  }
};

#line 2525 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 2533 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2541 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_lco_const_info_0_0[9] = {
  (MR_PseudoTypeInfo) &transform_hlds__lco__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_allow_float_addr_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 2554 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_lco_const_info_0_0[9] = {
  (MR_String) "lci_lower_scc_variants",
  (MR_String) "lci_cur_scc",
  (MR_String) "lci_cur_proc_id",
  (MR_String) "lci_cur_proc_pred",
  (MR_String) "lci_cur_proc_proc",
  (MR_String) "lci_cur_proc_outputs",
  (MR_String) "lci_cur_proc_detism",
  (MR_String) "lci_allow_float_addr",
  (MR_String) "lci_highlevel_data"
};

#line 2567 "transform_hlds.lco.c"
static const MR_DuArgLocn transform_hlds__lco__transform_hlds__lco__field_locns_lco_const_info_0_0[9] = {
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
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 4,
    (MR_Integer) 1
  }
};

#line 2616 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_const_info_0_0 = {
  (MR_String) "lco_const_info",
  (MR_Integer) 9,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__lco__transform_hlds__lco__field_types_lco_const_info_0_0,
  transform_hlds__lco__transform_hlds__lco__field_names_lco_const_info_0_0,
  transform_hlds__lco__transform_hlds__lco__field_locns_lco_const_info_0_0,
  NULL
};

#line 2631 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_const_info_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_const_info_0_0
};

#line 2636 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_const_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_const_info_0_0
  }
};

#line 2645 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_lco_const_info_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_const_info_0_0
};

#line 2650 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_const_info_0[1] = {
  (MR_Integer) 0
};

#line 2655 "transform_hlds.lco.c"
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

#line 2672 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2680 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2689 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_lco_info_0_0[6] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_is_permitted_on_scc_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_proc_changed_0
};

#line 2699 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_lco_info_0_0[6] = {
  (MR_String) "lco_module_info",
  (MR_String) "lco_cur_scc_variants",
  (MR_String) "lco_var_set",
  (MR_String) "lco_var_types",
  (MR_String) "lco_permitted",
  (MR_String) "lco_changed"
};

#line 2709 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_info_0_0 = {
  (MR_String) "lco_info",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__lco__transform_hlds__lco__field_types_lco_info_0_0,
  transform_hlds__lco__transform_hlds__lco__field_names_lco_info_0_0,
  NULL,
  NULL
};

#line 2724 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_info_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_info_0_0
};

#line 2729 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_info_0_0
  }
};

#line 2738 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_lco_info_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_info_0_0
};

#line 2743 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_info_0[1] = {
  (MR_Integer) 0
};

#line 2748 "transform_hlds.lco.c"
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

#line 2765 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_0 = {
  (MR_String) "lco_is_not_permitted_on_scc",
  (MR_Integer) 0
};

#line 2771 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_1 = {
  (MR_String) "lco_is_permitted_on_scc",
  (MR_Integer) 1
};

#line 2777 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_value_ordered_lco_is_permitted_on_scc_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_0,
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_1
};

#line 2783 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_lco_is_permitted_on_scc_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_0,
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_1
};

#line 2789 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_is_permitted_on_scc_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2795 "transform_hlds.lco.c"
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

#line 2812 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_0 = {
  (MR_String) "proc_not_changed",
  (MR_Integer) 0
};

#line 2818 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_1 = {
  (MR_String) "proc_changed",
  (MR_Integer) 1
};

#line 2824 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_value_ordered_proc_changed_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_0,
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_1
};

#line 2830 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_proc_changed_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_1,
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_0
};

#line 2836 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_proc_changed_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2842 "transform_hlds.lco.c"
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

#line 2859 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__maybe__ti_maybe_1transform_hlds__lco__type_ctor_info_field_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0
  }
};

#line 2867 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_store_target_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__maybe__ti_maybe_1transform_hlds__lco__type_ctor_info_field_id_0
};

#line 2873 "transform_hlds.lco.c"
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

#line 2888 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_store_target_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_store_target_0_0
};

#line 2893 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_store_target_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_store_target_0_0
  }
};

#line 2902 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_store_target_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_store_target_0_0
};

#line 2907 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_store_target_0[1] = {
  (MR_Integer) 0
};

#line 2912 "transform_hlds.lco.c"
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

#line 2929 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__lco__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0
  }
};

#line 2937 "transform_hlds.lco.c"
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

#line 2954 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_variant_arg_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__maybe__ti_maybe_1transform_hlds__lco__type_ctor_info_field_id_0
};

#line 2960 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_variant_arg_0_0[2] = {
  (MR_String) "va_pos",
  (MR_String) "va_field"
};

#line 2966 "transform_hlds.lco.c"
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

#line 2981 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_arg_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_arg_0_0
};

#line 2986 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_arg_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_arg_0_0
  }
};

#line 2995 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_arg_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_arg_0_0
};

#line 3000 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_arg_0[1] = {
  (MR_Integer) 0
};

#line 3005 "transform_hlds.lco.c"
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

#line 3022 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0
  }
};

#line 3030 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_variant_id_0_0[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_arg_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3037 "transform_hlds.lco.c"
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

#line 3052 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_id_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_id_0_0
};

#line 3057 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_id_0_0
  }
};

#line 3066 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_id_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_id_0_0
};

#line 3071 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_id_0[1] = {
  (MR_Integer) 0
};

#line 3076 "transform_hlds.lco.c"
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

#line 3093 "transform_hlds.lco.c"
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

#line 3110 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____allow_float_addr_0_0_10001(
#line 3113 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3115 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3117 "transform_hlds.lco.c"
{
#line 3119 "transform_hlds.lco.c"
  {
#line 3121 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3124 "transform_hlds.lco.c"
    {
#line 3126 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____allow_float_addr_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3129 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3131 "transform_hlds.lco.c"
  }
#line 3133 "transform_hlds.lco.c"
}

#line 3136 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____allow_float_addr_0_0_10001(
#line 3139 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3141 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3143 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3145 "transform_hlds.lco.c"
{
#line 3147 "transform_hlds.lco.c"
  {
#line 3149 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3152 "transform_hlds.lco.c"
    {
#line 3154 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____allow_float_addr_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3157 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3159 "transform_hlds.lco.c"
  }
#line 3161 "transform_hlds.lco.c"
}

#line 3164 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____field_id_0_0_10001(
#line 3167 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3169 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3171 "transform_hlds.lco.c"
{
#line 3173 "transform_hlds.lco.c"
  {
#line 3175 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3178 "transform_hlds.lco.c"
    {
#line 3180 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____field_id_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3183 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3185 "transform_hlds.lco.c"
  }
#line 3187 "transform_hlds.lco.c"
}

#line 3190 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____field_id_0_0_10001(
#line 3193 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3195 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3197 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3199 "transform_hlds.lco.c"
{
#line 3201 "transform_hlds.lco.c"
  {
#line 3203 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3206 "transform_hlds.lco.c"
    {
#line 3208 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____field_id_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3211 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3213 "transform_hlds.lco.c"
  }
#line 3215 "transform_hlds.lco.c"
}

#line 3218 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_const_info_0_0_10001(
#line 3221 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3223 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3225 "transform_hlds.lco.c"
{
#line 3227 "transform_hlds.lco.c"
  {
#line 3229 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3232 "transform_hlds.lco.c"
    {
#line 3234 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____lco_const_info_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3237 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3239 "transform_hlds.lco.c"
  }
#line 3241 "transform_hlds.lco.c"
}

#line 3244 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____lco_const_info_0_0_10001(
#line 3247 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3249 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3251 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3253 "transform_hlds.lco.c"
{
#line 3255 "transform_hlds.lco.c"
  {
#line 3257 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3260 "transform_hlds.lco.c"
    {
#line 3262 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____lco_const_info_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3265 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3267 "transform_hlds.lco.c"
  }
#line 3269 "transform_hlds.lco.c"
}

#line 3272 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_info_0_0_10001(
#line 3275 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3277 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3279 "transform_hlds.lco.c"
{
#line 3281 "transform_hlds.lco.c"
  {
#line 3283 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3286 "transform_hlds.lco.c"
    {
#line 3288 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____lco_info_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3291 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3293 "transform_hlds.lco.c"
  }
#line 3295 "transform_hlds.lco.c"
}

#line 3298 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____lco_info_0_0_10001(
#line 3301 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3303 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3305 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3307 "transform_hlds.lco.c"
{
#line 3309 "transform_hlds.lco.c"
  {
#line 3311 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3314 "transform_hlds.lco.c"
    {
#line 3316 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____lco_info_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3319 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3321 "transform_hlds.lco.c"
  }
#line 3323 "transform_hlds.lco.c"
}

#line 3326 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0_10001(
#line 3329 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3331 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3333 "transform_hlds.lco.c"
{
#line 3335 "transform_hlds.lco.c"
  {
#line 3337 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3340 "transform_hlds.lco.c"
    {
#line 3342 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3345 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3347 "transform_hlds.lco.c"
  }
#line 3349 "transform_hlds.lco.c"
}

#line 3352 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0_10001(
#line 3355 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3357 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3359 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3361 "transform_hlds.lco.c"
{
#line 3363 "transform_hlds.lco.c"
  {
#line 3365 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3368 "transform_hlds.lco.c"
    {
#line 3370 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3373 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3375 "transform_hlds.lco.c"
  }
#line 3377 "transform_hlds.lco.c"
}

#line 3380 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____proc_changed_0_0_10001(
#line 3383 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3385 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3387 "transform_hlds.lco.c"
{
#line 3389 "transform_hlds.lco.c"
  {
#line 3391 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3394 "transform_hlds.lco.c"
    {
#line 3396 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____proc_changed_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3399 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3401 "transform_hlds.lco.c"
  }
#line 3403 "transform_hlds.lco.c"
}

#line 3406 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____proc_changed_0_0_10001(
#line 3409 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3411 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3413 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3415 "transform_hlds.lco.c"
{
#line 3417 "transform_hlds.lco.c"
  {
#line 3419 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3422 "transform_hlds.lco.c"
    {
#line 3424 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____proc_changed_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3427 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3429 "transform_hlds.lco.c"
  }
#line 3431 "transform_hlds.lco.c"
}

#line 3434 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____store_target_0_0_10001(
#line 3437 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3439 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3441 "transform_hlds.lco.c"
{
#line 3443 "transform_hlds.lco.c"
  {
#line 3445 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3448 "transform_hlds.lco.c"
    {
#line 3450 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____store_target_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3453 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3455 "transform_hlds.lco.c"
  }
#line 3457 "transform_hlds.lco.c"
}

#line 3460 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____store_target_0_0_10001(
#line 3463 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3465 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3467 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3469 "transform_hlds.lco.c"
{
#line 3471 "transform_hlds.lco.c"
  {
#line 3473 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3476 "transform_hlds.lco.c"
    {
#line 3478 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____store_target_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3481 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3483 "transform_hlds.lco.c"
  }
#line 3485 "transform_hlds.lco.c"
}

#line 3488 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____var_to_target_0_0_10001(
#line 3491 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3493 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3495 "transform_hlds.lco.c"
{
#line 3497 "transform_hlds.lco.c"
  {
#line 3499 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3502 "transform_hlds.lco.c"
    {
#line 3504 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____var_to_target_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3507 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3509 "transform_hlds.lco.c"
  }
#line 3511 "transform_hlds.lco.c"
}

#line 3514 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____var_to_target_0_0_10001(
#line 3517 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3519 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3521 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3523 "transform_hlds.lco.c"
{
#line 3525 "transform_hlds.lco.c"
  {
#line 3527 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3530 "transform_hlds.lco.c"
    {
#line 3532 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____var_to_target_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3535 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3537 "transform_hlds.lco.c"
  }
#line 3539 "transform_hlds.lco.c"
}

#line 3542 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_arg_0_0_10001(
#line 3545 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3547 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3549 "transform_hlds.lco.c"
{
#line 3551 "transform_hlds.lco.c"
  {
#line 3553 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3556 "transform_hlds.lco.c"
    {
#line 3558 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____variant_arg_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3561 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3563 "transform_hlds.lco.c"
  }
#line 3565 "transform_hlds.lco.c"
}

#line 3568 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____variant_arg_0_0_10001(
#line 3571 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3573 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3575 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3577 "transform_hlds.lco.c"
{
#line 3579 "transform_hlds.lco.c"
  {
#line 3581 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3584 "transform_hlds.lco.c"
    {
#line 3586 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____variant_arg_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3589 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3591 "transform_hlds.lco.c"
  }
#line 3593 "transform_hlds.lco.c"
}

#line 3596 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_id_0_0_10001(
#line 3599 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3601 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3603 "transform_hlds.lco.c"
{
#line 3605 "transform_hlds.lco.c"
  {
#line 3607 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3610 "transform_hlds.lco.c"
    {
#line 3612 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____variant_id_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3615 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3617 "transform_hlds.lco.c"
  }
#line 3619 "transform_hlds.lco.c"
}

#line 3622 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____variant_id_0_0_10001(
#line 3625 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3627 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3629 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3631 "transform_hlds.lco.c"
{
#line 3633 "transform_hlds.lco.c"
  {
#line 3635 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3638 "transform_hlds.lco.c"
    {
#line 3640 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____variant_id_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3643 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3645 "transform_hlds.lco.c"
  }
#line 3647 "transform_hlds.lco.c"
}

#line 3650 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_map_0_0_10001(
#line 3653 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3655 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3657 "transform_hlds.lco.c"
{
#line 3659 "transform_hlds.lco.c"
  {
#line 3661 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3664 "transform_hlds.lco.c"
    {
#line 3666 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____variant_map_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3669 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3671 "transform_hlds.lco.c"
  }
#line 3673 "transform_hlds.lco.c"
}

#line 3676 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____variant_map_0_0_10001(
#line 3679 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3681 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3683 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3685 "transform_hlds.lco.c"
{
#line 3687 "transform_hlds.lco.c"
  {
#line 3689 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3692 "transform_hlds.lco.c"
    {
#line 3694 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____variant_map_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3697 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3699 "transform_hlds.lco.c"
  }
#line 3701 "transform_hlds.lco.c"
}

#line 754 "lco.m"
static void MR_CALL 
transform_hlds__lco__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_116_105_116_105_111_110_95_100_101_112_101_110_100_101_110_116_95_103_111_97_108_95_95_91_49_44_32_50_93_95_48_9_p_0(
#line 754 "lco.m"
  MR_Word transform_hlds__lco__Goal_12,
#line 754 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22,
#line 754 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23,
#line 754 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24,
#line 754 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25,
#line 754 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26,
#line 754 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_DelayForVars_27)
#line 754 "lco.m"
{
#line 760 "lco.m"
  {
#line 760 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 760 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_31_31;
#line 760 "lco.m"
    MR_Word transform_hlds__lco__GoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_12, (MR_Integer) 1)));
#line 760 "lco.m"
    MR_Word transform_hlds__lco__GoalVars_18;
#line 760 "lco.m"
    MR_Word transform_hlds__lco__Intersection_19;
#line 761 "lco.m"
    MR_Word transform_hlds__lco___GoalExpr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_12, (MR_Integer) 0)));

#line 762 "lco.m"
    {
#line 762 "lco.m"
      hlds__goal_util__goal_vars_2_p_0(transform_hlds__lco__Goal_12, &transform_hlds__lco__GoalVars_18);
    }
#line 3743 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 763 "lco.m"
    {
#line 763 "lco.m"
      parse_tree__set_of_var__intersect_3_p_0(transform_hlds__lco__TypeCtorInfo_31_31, transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26, transform_hlds__lco__GoalVars_18, &transform_hlds__lco__Intersection_19);
    }
#line 764 "lco.m"
    {
#line 764 "lco.m"
      transform_hlds__lco__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__lco__TypeCtorInfo_31_31, transform_hlds__lco__Intersection_19);
    }
#line 766 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 765 "lco.m"
      {
#line 765 "lco.m"
        {
#line 765 "lco.m"
          mercury__list__cons_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (transform_hlds__lco__Goal_12)), transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24, transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25);
        }
#line 765 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_DelayForVars_27 = transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26;
#line 765 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23 = transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22;
#line 765 "lco.m"
      }
#line 766 "lco.m"
    else
#line 767 "lco.m"
      {
#line 767 "lco.m"
        MR_Word transform_hlds__lco__InstmapDelta_20;
#line 767 "lco.m"
        MR_Word transform_hlds__lco__ChangedVars_21;

#line 767 "lco.m"
        {
#line 767 "lco.m"
          mercury__list__cons_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (transform_hlds__lco__Goal_12)), transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22, transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23);
        }
#line 769 "lco.m"
        {
#line 769 "lco.m"
          transform_hlds__lco__InstmapDelta_20 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__lco__GoalInfo_17);
        }
#line 770 "lco.m"
        {
#line 770 "lco.m"
          hlds__instmap__instmap_delta_changed_vars_2_p_0(transform_hlds__lco__InstmapDelta_20, &transform_hlds__lco__ChangedVars_21);
        }
#line 771 "lco.m"
        {
#line 771 "lco.m"
          parse_tree__set_of_var__union_3_p_0(transform_hlds__lco__TypeCtorInfo_31_31, transform_hlds__lco__ChangedVars_21, transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26, transform_hlds__lco__STATE_VARIABLE_DelayForVars_27);
        }
#line 767 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25 = transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24;
#line 767 "lco.m"
      }
#line 760 "lco.m"
  }
#line 754 "lco.m"
}

#line 1666 "lco.m"
static void MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__lco_transform_variant_plain_call__1666__1_2_p_0(
#line 1666 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_69,
#line 1666 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__2_70)
#line 1666 "lco.m"
{
#line 1666 "lco.m"
  {
#line 1666 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1666 "lco.m"
    MR_Box transform_hlds__lco__conv0_HeadVar__2_70;

#line 1666 "lco.m"
    {
#line 1666 "lco.m"
      mercury__pair__fst_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[3], (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0, transform_hlds__lco__HeadVar__1_69, &transform_hlds__lco__conv0_HeadVar__2_70);
    }
#line 1666 "lco.m"
    *transform_hlds__lco__HeadVar__2_70 = ((MR_Word) transform_hlds__lco__conv0_HeadVar__2_70);
#line 1666 "lco.m"
  }
#line 1666 "lco.m"
}

#line 1384 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__make_addr_vars__1384__1_2_p_0(
#line 1384 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 1384 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_25)
#line 1384 "lco.m"
{
#line 1384 "lco.m"
  {
#line 1384 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1384 "lco.m"
    {
#line 1384 "lco.m"
      transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[7], ((MR_Box) (transform_hlds__lco__HeadVar__5_5)), ((MR_Box) (transform_hlds__lco__HeadVar__2_25)));
    }
#line 1384 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1384 "lco.m"
  }
#line 1384 "lco.m"
}

#line 1258 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__update_construct__1258__1_2_p_0(
#line 1258 "lco.m"
  MR_Word transform_hlds__lco__ConsId_23,
#line 1258 "lco.m"
  MR_Word transform_hlds__lco__RHSConsId_43)
#line 1258 "lco.m"
{
#line 1258 "lco.m"
  {
#line 1258 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1258 "lco.m"
    {
#line 1258 "lco.m"
      transform_hlds__lco__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__lco__ConsId_23, transform_hlds__lco__RHSConsId_43);
    }
#line 1258 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1258 "lco.m"
  }
#line 1258 "lco.m"
}

#line 1112 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__IntroducedFrom__func__make_variant_args__1112__1_2_f_0(
#line 1112 "lco.m"
  MR_Word transform_hlds__lco__AddrVarFieldIds_6,
#line 1112 "lco.m"
  MR_Word transform_hlds__lco__LambdaHeadVar__1_14)
#line 1112 "lco.m"
{
#line 1112 "lco.m"
  {
#line 1112 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1112 "lco.m"
    MR_Word transform_hlds__lco__LambdaHeadVar__2_15;
#line 1112 "lco.m"
    MR_Word transform_hlds__lco__FieldId_13;
#line 1112 "lco.m"
    MR_Word transform_hlds__lco__V_16_16;
#line 1112 "lco.m"
    MR_Integer transform_hlds__lco__Pos_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__LambdaHeadVar__1_14, (MR_Integer) 0)));
#line 1112 "lco.m"
    MR_Word transform_hlds__lco__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__LambdaHeadVar__1_14, (MR_Integer) 1)));
#line 1113 "lco.m"
    MR_Box transform_hlds__lco__conv0_FieldId_13;

#line 1113 "lco.m"
    {
#line 1113 "lco.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[3], (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0, transform_hlds__lco__AddrVarFieldIds_6, ((MR_Box) (transform_hlds__lco__Var_24)), &transform_hlds__lco__conv0_FieldId_13);
    }
#line 1113 "lco.m"
    transform_hlds__lco__FieldId_13 = ((MR_Word) transform_hlds__lco__conv0_FieldId_13);
#line 1112 "lco.m"
    {
#line 1112 "lco.m"
      transform_hlds__lco__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1112 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__V_16_16, 0) = ((MR_Box) (transform_hlds__lco__FieldId_13));
#line 1112 "lco.m"
    }
#line 1112 "lco.m"
    {
#line 1112 "lco.m"
      transform_hlds__lco__LambdaHeadVar__2_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1112 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__LambdaHeadVar__2_15, 0) = ((MR_Box) (transform_hlds__lco__Pos_23));
#line 1112 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__LambdaHeadVar__2_15, 1) = ((MR_Box) (transform_hlds__lco__V_16_16));
#line 1112 "lco.m"
    }
#line 1112 "lco.m"
    return transform_hlds__lco__LambdaHeadVar__2_15;
#line 1112 "lco.m"
  }
#line 1112 "lco.m"
}

#line 1109 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__IntroducedFrom__func__make_variant_args__1109__1_1_f_0(
#line 1109 "lco.m"
  MR_Word transform_hlds__lco__LambdaHeadVar__1_17)
#line 1109 "lco.m"
{
#line 1109 "lco.m"
  {
#line 1109 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1109 "lco.m"
    MR_Word transform_hlds__lco__LambdaHeadVar__2_18;
#line 1109 "lco.m"
    MR_Integer transform_hlds__lco__Pos_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__LambdaHeadVar__1_17, (MR_Integer) 0)));
#line 1109 "lco.m"
    MR_Word transform_hlds__lco___Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__LambdaHeadVar__1_17, (MR_Integer) 1)));

#line 1109 "lco.m"
    {
#line 1109 "lco.m"
      transform_hlds__lco__LambdaHeadVar__2_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1109 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__LambdaHeadVar__2_18, 0) = ((MR_Box) (transform_hlds__lco__Pos_21));
#line 1109 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__LambdaHeadVar__2_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1109 "lco.m"
    }
#line 1109 "lco.m"
    return transform_hlds__lco__LambdaHeadVar__2_18;
#line 1109 "lco.m"
  }
#line 1109 "lco.m"
}

#line 951 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__update_call_args__951__1_2_p_0(
#line 951 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 951 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_14)
#line 951 "lco.m"
{
#line 951 "lco.m"
  {
#line 951 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 951 "lco.m"
    {
#line 951 "lco.m"
      transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[6], ((MR_Box) (transform_hlds__lco__HeadVar__5_5)), ((MR_Box) (transform_hlds__lco__HeadVar__2_14)));
    }
#line 951 "lco.m"
    return transform_hlds__lco__succeeded;
#line 951 "lco.m"
  }
#line 951 "lco.m"
}

#line 246 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____variant_map_0_0(
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
    MR_Word transform_hlds__lco__Cast_HeadVar1_4 = transform_hlds__lco__HeadVar__2_2;
#line 246 "lco.m"
    MR_Word transform_hlds__lco__Cast_HeadVar2_5 = transform_hlds__lco__HeadVar__3_3;

#line 246 "lco.m"
    {
#line 246 "lco.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[0], transform_hlds__lco__HeadVar__1_1, ((MR_Box) (transform_hlds__lco__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__lco__Cast_HeadVar2_5)));
    }
#line 246 "lco.m"
  }
#line 246 "lco.m"
}

#line 246 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_map_0_0(
#line 246 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 246 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 246 "lco.m"
{
#line 246 "lco.m"
  {
#line 246 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 246 "lco.m"
    MR_Word transform_hlds__lco__Cast_HeadVar1_3 = transform_hlds__lco__HeadVar__1_1;
#line 246 "lco.m"
    MR_Word transform_hlds__lco__Cast_HeadVar2_4 = transform_hlds__lco__HeadVar__2_2;

#line 246 "lco.m"
    {
#line 246 "lco.m"
      transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[0], ((MR_Box) (transform_hlds__lco__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__lco__Cast_HeadVar2_4)));
    }
#line 246 "lco.m"
    return transform_hlds__lco__succeeded;
#line 246 "lco.m"
  }
#line 246 "lco.m"
}

#line 218 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____variant_id_0_0(
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
    MR_Integer transform_hlds__lco__CastX_12 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 218 "lco.m"
    MR_Integer transform_hlds__lco__CastY_13 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 218 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_12 == transform_hlds__lco__CastY_13);
#line 218 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 4091 "transform_hlds.lco.c"
      *transform_hlds__lco__HeadVar__1_1 = (MR_Integer) 0;
#line 218 "lco.m"
    else
#line 218 "lco.m"
      {
#line 218 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 218 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 218 "lco.m"
        MR_String transform_hlds__lco__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));
#line 218 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
#line 218 "lco.m"
        MR_Word transform_hlds__lco__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 218 "lco.m"
        MR_String transform_hlds__lco__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 2)));
#line 218 "lco.m"
        MR_Word transform_hlds__lco__V_10_10;

#line 218 "lco.m"
        {
#line 218 "lco.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[7], &transform_hlds__lco__V_10_10, ((MR_Box) (transform_hlds__lco__V_4_4)), ((MR_Box) (transform_hlds__lco__V_7_7)));
        }
#line 4117 "transform_hlds.lco.c"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_10_10 == (MR_Integer) 0);
#line 218 "lco.m"
        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 218 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 218 "lco.m"
          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_10_10;
#line 218 "lco.m"
        else
#line 218 "lco.m"
          {
#line 218 "lco.m"
            MR_Word transform_hlds__lco__V_11_11;

#line 218 "lco.m"
            {
#line 218 "lco.m"
              hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__lco__V_11_11, transform_hlds__lco__V_5_5, transform_hlds__lco__V_8_8);
            }
#line 4137 "transform_hlds.lco.c"
            transform_hlds__lco__succeeded = (transform_hlds__lco__V_11_11 == (MR_Integer) 0);
#line 218 "lco.m"
            transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 218 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 218 "lco.m"
              *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_11_11;
#line 218 "lco.m"
            else
#line 218 "lco.m"
              {
#line 218 "lco.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__V_6_6, transform_hlds__lco__V_9_9);
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
transform_hlds__lco____Unify____variant_id_0_0(
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
    MR_Integer transform_hlds__lco__CastX_9 = (MR_Integer) transform_hlds__lco__HeadVar__1_1;
#line 218 "lco.m"
    MR_Integer transform_hlds__lco__CastY_10 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;

#line 218 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_9 == transform_hlds__lco__CastY_10);
#line 218 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 218 "lco.m"
      transform_hlds__lco__succeeded = MR_TRUE;
#line 218 "lco.m"
    else
#line 218 "lco.m"
      {
#line 218 "lco.m"
        MR_Word transform_hlds__lco__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 218 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 218 "lco.m"
        MR_String transform_hlds__lco__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 2)));
#line 218 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 218 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 218 "lco.m"
        MR_String transform_hlds__lco__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));

#line 4202 "transform_hlds.lco.c"
        {
#line 4204 "transform_hlds.lco.c"
          transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[7], ((MR_Box) (transform_hlds__lco__V_3_3)), ((MR_Box) (transform_hlds__lco__V_6_6)));
        }
#line 218 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 218 "lco.m"
          {
#line 4211 "transform_hlds.lco.c"
            {
#line 4213 "transform_hlds.lco.c"
              transform_hlds__lco__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__lco__V_4_4, transform_hlds__lco__V_7_7);
            }
#line 218 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 4218 "transform_hlds.lco.c"
              transform_hlds__lco__succeeded = (strcmp(transform_hlds__lco__V_5_5, transform_hlds__lco__V_8_8) == 0);
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

#line 225 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____variant_arg_0_0(
#line 225 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 225 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 225 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 225 "lco.m"
{
#line 225 "lco.m"
  {
#line 225 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 225 "lco.m"
    MR_Integer transform_hlds__lco__CastX_9 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 225 "lco.m"
    MR_Integer transform_hlds__lco__CastY_10 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 225 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_9 == transform_hlds__lco__CastY_10);
#line 225 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 4255 "transform_hlds.lco.c"
      *transform_hlds__lco__HeadVar__1_1 = (MR_Integer) 0;
#line 225 "lco.m"
    else
#line 225 "lco.m"
      {
#line 225 "lco.m"
        MR_Integer transform_hlds__lco__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 225 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 225 "lco.m"
        MR_Integer transform_hlds__lco__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
#line 225 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 225 "lco.m"
        MR_Word transform_hlds__lco__V_8_8;

#line 225 "lco.m"
        {
#line 225 "lco.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__lco__V_8_8, transform_hlds__lco__V_4_4, transform_hlds__lco__V_6_6);
        }
#line 4277 "transform_hlds.lco.c"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_8_8 == (MR_Integer) 0);
#line 225 "lco.m"
        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 225 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 225 "lco.m"
          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_8_8;
#line 225 "lco.m"
        else
#line 225 "lco.m"
          {
#line 225 "lco.m"
            {
#line 225 "lco.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[10], transform_hlds__lco__HeadVar__1_1, ((MR_Box) (transform_hlds__lco__V_5_5)), ((MR_Box) (transform_hlds__lco__V_7_7)));
            }
#line 225 "lco.m"
          }
#line 225 "lco.m"
      }
#line 225 "lco.m"
  }
#line 225 "lco.m"
}

#line 225 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_arg_0_0(
#line 225 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 225 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 225 "lco.m"
{
#line 225 "lco.m"
  {
#line 225 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 225 "lco.m"
    MR_Integer transform_hlds__lco__CastX_7 = (MR_Integer) transform_hlds__lco__HeadVar__1_1;
#line 225 "lco.m"
    MR_Integer transform_hlds__lco__CastY_8 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;

#line 225 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_7 == transform_hlds__lco__CastY_8);
#line 225 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 225 "lco.m"
      transform_hlds__lco__succeeded = MR_TRUE;
#line 225 "lco.m"
    else
#line 225 "lco.m"
      {
#line 225 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_9_9;
#line 225 "lco.m"
        MR_Integer transform_hlds__lco__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 225 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 225 "lco.m"
        MR_Integer transform_hlds__lco__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 225 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));

#line 4342 "transform_hlds.lco.c"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_3_3 == transform_hlds__lco__V_5_5);
#line 225 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 225 "lco.m"
          {
#line 4348 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_9_9 = (MR_Word) &transform_hlds__lco_scalar_common_1[10];
#line 4350 "transform_hlds.lco.c"
            {
#line 4352 "transform_hlds.lco.c"
              transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_9_9, ((MR_Box) (transform_hlds__lco__V_4_4)), ((MR_Box) (transform_hlds__lco__V_6_6)));
            }
#line 225 "lco.m"
          }
#line 225 "lco.m"
      }
#line 225 "lco.m"
    return transform_hlds__lco__succeeded;
#line 225 "lco.m"
  }
#line 225 "lco.m"
}

#line 283 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____var_to_target_0_0(
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
    MR_Word transform_hlds__lco__Cast_HeadVar1_4 = transform_hlds__lco__HeadVar__2_2;
#line 283 "lco.m"
    MR_Word transform_hlds__lco__Cast_HeadVar2_5 = transform_hlds__lco__HeadVar__3_3;

#line 283 "lco.m"
    {
#line 283 "lco.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[11], transform_hlds__lco__HeadVar__1_1, ((MR_Box) (transform_hlds__lco__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__lco__Cast_HeadVar2_5)));
    }
#line 283 "lco.m"
  }
#line 283 "lco.m"
}

#line 283 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____var_to_target_0_0(
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
    MR_Word transform_hlds__lco__Cast_HeadVar1_3 = transform_hlds__lco__HeadVar__1_1;
#line 283 "lco.m"
    MR_Word transform_hlds__lco__Cast_HeadVar2_4 = transform_hlds__lco__HeadVar__2_2;

#line 283 "lco.m"
    {
#line 283 "lco.m"
      transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[11], ((MR_Box) (transform_hlds__lco__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__lco__Cast_HeadVar2_4)));
    }
#line 283 "lco.m"
    return transform_hlds__lco__succeeded;
#line 283 "lco.m"
  }
#line 283 "lco.m"
}

#line 285 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____store_target_0_0(
#line 285 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 285 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 285 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 285 "lco.m"
{
#line 285 "lco.m"
  {
#line 285 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 285 "lco.m"
    MR_Integer transform_hlds__lco__CastX_9 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 285 "lco.m"
    MR_Integer transform_hlds__lco__CastY_10 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 285 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_9 == transform_hlds__lco__CastY_10);
#line 285 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 4450 "transform_hlds.lco.c"
      *transform_hlds__lco__HeadVar__1_1 = (MR_Integer) 0;
#line 285 "lco.m"
    else
#line 285 "lco.m"
      {
#line 285 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 285 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 285 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
#line 285 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 285 "lco.m"
        MR_Word transform_hlds__lco__V_8_8;

#line 285 "lco.m"
        {
#line 285 "lco.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[3], &transform_hlds__lco__V_8_8, ((MR_Box) (transform_hlds__lco__V_4_4)), ((MR_Box) (transform_hlds__lco__V_6_6)));
        }
#line 4472 "transform_hlds.lco.c"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_8_8 == (MR_Integer) 0);
#line 285 "lco.m"
        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 285 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 285 "lco.m"
          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_8_8;
#line 285 "lco.m"
        else
#line 285 "lco.m"
          {
#line 285 "lco.m"
            {
#line 285 "lco.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[10], transform_hlds__lco__HeadVar__1_1, ((MR_Box) (transform_hlds__lco__V_5_5)), ((MR_Box) (transform_hlds__lco__V_7_7)));
            }
#line 285 "lco.m"
          }
#line 285 "lco.m"
      }
#line 285 "lco.m"
  }
#line 285 "lco.m"
}

#line 285 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____store_target_0_0(
#line 285 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 285 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 285 "lco.m"
{
#line 285 "lco.m"
  {
#line 285 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 285 "lco.m"
    MR_Integer transform_hlds__lco__CastX_7 = (MR_Integer) transform_hlds__lco__HeadVar__1_1;
#line 285 "lco.m"
    MR_Integer transform_hlds__lco__CastY_8 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;

#line 285 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_7 == transform_hlds__lco__CastY_8);
#line 285 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 285 "lco.m"
      transform_hlds__lco__succeeded = MR_TRUE;
#line 285 "lco.m"
    else
#line 285 "lco.m"
      {
#line 285 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_10_10;
#line 285 "lco.m"
        MR_Word transform_hlds__lco__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 285 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 285 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 285 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));

#line 4537 "transform_hlds.lco.c"
        {
#line 4539 "transform_hlds.lco.c"
          transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[3], ((MR_Box) (transform_hlds__lco__V_3_3)), ((MR_Box) (transform_hlds__lco__V_5_5)));
        }
#line 285 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 285 "lco.m"
          {
#line 4546 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_10_10 = (MR_Word) &transform_hlds__lco_scalar_common_1[10];
#line 4548 "transform_hlds.lco.c"
            {
#line 4550 "transform_hlds.lco.c"
              transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_10_10, ((MR_Box) (transform_hlds__lco__V_4_4)), ((MR_Box) (transform_hlds__lco__V_6_6)));
            }
#line 285 "lco.m"
          }
#line 285 "lco.m"
      }
#line 285 "lco.m"
    return transform_hlds__lco__succeeded;
#line 285 "lco.m"
  }
#line 285 "lco.m"
}

#line 252 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____proc_changed_0_0(
#line 252 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 252 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 252 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 252 "lco.m"
{
#line 252 "lco.m"
  {
#line 252 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 252 "lco.m"
    MR_Integer transform_hlds__lco__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 252 "lco.m"
    MR_Integer transform_hlds__lco__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 252 "lco.m"
    {
#line 252 "lco.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__Cast_HeadVar1_4, transform_hlds__lco__Cast_HeadVar2_5);
    }
#line 252 "lco.m"
  }
#line 252 "lco.m"
}

#line 252 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____proc_changed_0_0(
#line 252 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_1,
#line 252 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 252 "lco.m"
{
#line 4603 "transform_hlds.lco.c"
  {
#line 4605 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded = (transform_hlds__lco__HeadVar__2_1 == transform_hlds__lco__HeadVar__2_2);

#line 4608 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 4610 "transform_hlds.lco.c"
  }
#line 252 "lco.m"
}

#line 248 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0(
#line 248 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 248 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 248 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 248 "lco.m"
{
#line 248 "lco.m"
  {
#line 248 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 248 "lco.m"
    MR_Integer transform_hlds__lco__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 248 "lco.m"
    MR_Integer transform_hlds__lco__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 248 "lco.m"
    {
#line 248 "lco.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__Cast_HeadVar1_4, transform_hlds__lco__Cast_HeadVar2_5);
    }
#line 248 "lco.m"
  }
#line 248 "lco.m"
}

#line 248 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0(
#line 248 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_1,
#line 248 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 248 "lco.m"
{
#line 4654 "transform_hlds.lco.c"
  {
#line 4656 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded = (transform_hlds__lco__HeadVar__2_1 == transform_hlds__lco__HeadVar__2_2);

#line 4659 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 4661 "transform_hlds.lco.c"
  }
#line 248 "lco.m"
}

#line 260 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____lco_info_0_0(
#line 260 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 260 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 260 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 260 "lco.m"
{
#line 260 "lco.m"
  {
#line 260 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 260 "lco.m"
    MR_Integer transform_hlds__lco__CastX_21 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 260 "lco.m"
    MR_Integer transform_hlds__lco__CastY_22 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 260 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_21 == transform_hlds__lco__CastY_22);
#line 260 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 4690 "transform_hlds.lco.c"
      *transform_hlds__lco__HeadVar__1_1 = (MR_Integer) 0;
#line 260 "lco.m"
    else
#line 260 "lco.m"
      {
#line 260 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 260 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 260 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));
#line 260 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 3)));
#line 260 "lco.m"
        MR_Word transform_hlds__lco__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 4)));
#line 260 "lco.m"
        MR_Word transform_hlds__lco__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 5)));
#line 260 "lco.m"
        MR_Word transform_hlds__lco__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
#line 260 "lco.m"
        MR_Word transform_hlds__lco__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 260 "lco.m"
        MR_Word transform_hlds__lco__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 2)));
#line 260 "lco.m"
        MR_Word transform_hlds__lco__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 3)));
#line 260 "lco.m"
        MR_Word transform_hlds__lco__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 4)));
#line 260 "lco.m"
        MR_Word transform_hlds__lco__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 5)));
#line 260 "lco.m"
        MR_Word transform_hlds__lco__V_16_16;

#line 260 "lco.m"
        {
#line 260 "lco.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__lco__V_16_16, transform_hlds__lco__V_4_4, transform_hlds__lco__V_10_10);
        }
#line 4728 "transform_hlds.lco.c"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_16_16 == (MR_Integer) 0);
#line 260 "lco.m"
        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 260 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 260 "lco.m"
          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_16_16;
#line 260 "lco.m"
        else
#line 260 "lco.m"
          {
#line 260 "lco.m"
            MR_Word transform_hlds__lco__V_17_17;

#line 260 "lco.m"
            {
#line 260 "lco.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[0], &transform_hlds__lco__V_17_17, ((MR_Box) (transform_hlds__lco__V_5_5)), ((MR_Box) (transform_hlds__lco__V_11_11)));
            }
#line 4748 "transform_hlds.lco.c"
            transform_hlds__lco__succeeded = (transform_hlds__lco__V_17_17 == (MR_Integer) 0);
#line 260 "lco.m"
            transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 260 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 260 "lco.m"
              *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_17_17;
#line 260 "lco.m"
            else
#line 260 "lco.m"
              {
#line 260 "lco.m"
                MR_Word transform_hlds__lco__V_18_18;

#line 260 "lco.m"
                {
#line 260 "lco.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[9], &transform_hlds__lco__V_18_18, ((MR_Box) (transform_hlds__lco__V_6_6)), ((MR_Box) (transform_hlds__lco__V_12_12)));
                }
#line 4768 "transform_hlds.lco.c"
                transform_hlds__lco__succeeded = (transform_hlds__lco__V_18_18 == (MR_Integer) 0);
#line 260 "lco.m"
                transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 260 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 260 "lco.m"
                  *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_18_18;
#line 260 "lco.m"
                else
#line 260 "lco.m"
                  {
#line 260 "lco.m"
                    MR_Word transform_hlds__lco__V_19_19;

#line 260 "lco.m"
                    {
#line 260 "lco.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[7], &transform_hlds__lco__V_19_19, ((MR_Box) (transform_hlds__lco__V_7_7)), ((MR_Box) (transform_hlds__lco__V_13_13)));
                    }
#line 4788 "transform_hlds.lco.c"
                    transform_hlds__lco__succeeded = (transform_hlds__lco__V_19_19 == (MR_Integer) 0);
#line 260 "lco.m"
                    transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 260 "lco.m"
                    if (transform_hlds__lco__succeeded)
#line 260 "lco.m"
                      *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_19_19;
#line 260 "lco.m"
                    else
#line 260 "lco.m"
                      {
#line 260 "lco.m"
                        MR_Word transform_hlds__lco__V_20_20;
#line 260 "lco.m"
                        MR_Integer transform_hlds__lco__V_29_29 = (MR_Integer) transform_hlds__lco__V_8_8;
#line 260 "lco.m"
                        MR_Integer transform_hlds__lco__V_30_30 = (MR_Integer) transform_hlds__lco__V_14_14;

#line 260 "lco.m"
                        {
#line 260 "lco.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__lco__V_20_20, transform_hlds__lco__V_29_29, transform_hlds__lco__V_30_30);
                        }
#line 4812 "transform_hlds.lco.c"
                        transform_hlds__lco__succeeded = (transform_hlds__lco__V_20_20 == (MR_Integer) 0);
#line 260 "lco.m"
                        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 260 "lco.m"
                        if (transform_hlds__lco__succeeded)
#line 260 "lco.m"
                          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_20_20;
#line 260 "lco.m"
                        else
#line 260 "lco.m"
                          {
#line 260 "lco.m"
                            MR_Integer transform_hlds__lco__V_31_31 = (MR_Integer) transform_hlds__lco__V_9_9;
#line 260 "lco.m"
                            MR_Integer transform_hlds__lco__V_32_32 = (MR_Integer) transform_hlds__lco__V_15_15;

#line 260 "lco.m"
                            {
#line 260 "lco.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__V_31_31, transform_hlds__lco__V_32_32);
                            }
#line 260 "lco.m"
                          }
#line 260 "lco.m"
                      }
#line 260 "lco.m"
                  }
#line 260 "lco.m"
              }
#line 260 "lco.m"
          }
#line 260 "lco.m"
      }
#line 260 "lco.m"
  }
#line 260 "lco.m"
}

#line 260 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_info_0_0(
#line 260 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 260 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 260 "lco.m"
{
#line 260 "lco.m"
  {
#line 260 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 260 "lco.m"
    MR_Integer transform_hlds__lco__CastX_15 = (MR_Integer) transform_hlds__lco__HeadVar__1_1;
#line 260 "lco.m"
    MR_Integer transform_hlds__lco__CastY_16 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;

#line 260 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_15 == transform_hlds__lco__CastY_16);
#line 260 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 260 "lco.m"
      transform_hlds__lco__succeeded = MR_TRUE;
#line 260 "lco.m"
    else
#line 260 "lco.m"
      {
#line 260 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_18_18;
#line 260 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_19_19;
#line 260 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_20_20;
#line 260 "lco.m"
        MR_Word transform_hlds__lco__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 260 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 260 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 2)));
#line 260 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 3)));
#line 260 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 4)));
#line 260 "lco.m"
        MR_Word transform_hlds__lco__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 5)));
#line 260 "lco.m"
        MR_Word transform_hlds__lco__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 260 "lco.m"
        MR_Word transform_hlds__lco__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 260 "lco.m"
        MR_Word transform_hlds__lco__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));
#line 260 "lco.m"
        MR_Word transform_hlds__lco__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 3)));
#line 260 "lco.m"
        MR_Word transform_hlds__lco__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 4)));
#line 260 "lco.m"
        MR_Word transform_hlds__lco__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 5)));

#line 4910 "transform_hlds.lco.c"
        {
#line 4912 "transform_hlds.lco.c"
          transform_hlds__lco__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__lco__V_3_3, transform_hlds__lco__V_9_9);
        }
#line 260 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 260 "lco.m"
          {
#line 4919 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_18_18 = (MR_Word) &transform_hlds__lco_scalar_common_2[0];
#line 4921 "transform_hlds.lco.c"
            {
#line 4923 "transform_hlds.lco.c"
              transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_18_18, ((MR_Box) (transform_hlds__lco__V_4_4)), ((MR_Box) (transform_hlds__lco__V_10_10)));
            }
#line 260 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 260 "lco.m"
              {
#line 4930 "transform_hlds.lco.c"
                transform_hlds__lco__TypeInfo_19_19 = (MR_Word) &transform_hlds__lco_scalar_common_1[9];
#line 4932 "transform_hlds.lco.c"
                {
#line 4934 "transform_hlds.lco.c"
                  transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_19_19, ((MR_Box) (transform_hlds__lco__V_5_5)), ((MR_Box) (transform_hlds__lco__V_11_11)));
                }
#line 260 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 260 "lco.m"
                  {
#line 4941 "transform_hlds.lco.c"
                    transform_hlds__lco__TypeInfo_20_20 = (MR_Word) &transform_hlds__lco_scalar_common_2[7];
#line 4943 "transform_hlds.lco.c"
                    {
#line 4945 "transform_hlds.lco.c"
                      transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_20_20, ((MR_Box) (transform_hlds__lco__V_6_6)), ((MR_Box) (transform_hlds__lco__V_12_12)));
                    }
#line 260 "lco.m"
                    if (transform_hlds__lco__succeeded)
#line 260 "lco.m"
                      {
#line 4952 "transform_hlds.lco.c"
                        transform_hlds__lco__succeeded = (transform_hlds__lco__V_7_7 == transform_hlds__lco__V_13_13);
#line 260 "lco.m"
                        if (transform_hlds__lco__succeeded)
#line 4956 "transform_hlds.lco.c"
                          transform_hlds__lco__succeeded = (transform_hlds__lco__V_8_8 == transform_hlds__lco__V_14_14);
#line 260 "lco.m"
                      }
#line 260 "lco.m"
                  }
#line 260 "lco.m"
              }
#line 260 "lco.m"
          }
#line 260 "lco.m"
      }
#line 260 "lco.m"
    return transform_hlds__lco__succeeded;
#line 260 "lco.m"
  }
#line 260 "lco.m"
}

#line 270 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____lco_const_info_0_0(
#line 270 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 270 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 270 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 270 "lco.m"
{
#line 270 "lco.m"
  {
#line 270 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 270 "lco.m"
    MR_Integer transform_hlds__lco__CastX_30 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 270 "lco.m"
    MR_Integer transform_hlds__lco__CastY_31 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 270 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_30 == transform_hlds__lco__CastY_31);
#line 270 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 4999 "transform_hlds.lco.c"
      *transform_hlds__lco__HeadVar__1_1 = (MR_Integer) 0;
#line 270 "lco.m"
    else
#line 270 "lco.m"
      {
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 3)));
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 4)));
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 5)));
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 6)))) & (MR_Integer) 7);
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 2)));
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 3)));
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 4)));
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 5)));
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 6)))) & (MR_Integer) 7);
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_22_22;

#line 270 "lco.m"
        {
#line 270 "lco.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[0], &transform_hlds__lco__V_22_22, ((MR_Box) (transform_hlds__lco__V_4_4)), ((MR_Box) (transform_hlds__lco__V_13_13)));
        }
#line 5049 "transform_hlds.lco.c"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_22_22 == (MR_Integer) 0);
#line 270 "lco.m"
        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 270 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 270 "lco.m"
          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_22_22;
#line 270 "lco.m"
        else
#line 270 "lco.m"
          {
#line 270 "lco.m"
            MR_Word transform_hlds__lco__V_23_23;

#line 270 "lco.m"
            {
#line 270 "lco.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[8], &transform_hlds__lco__V_23_23, ((MR_Box) (transform_hlds__lco__V_5_5)), ((MR_Box) (transform_hlds__lco__V_14_14)));
            }
#line 5069 "transform_hlds.lco.c"
            transform_hlds__lco__succeeded = (transform_hlds__lco__V_23_23 == (MR_Integer) 0);
#line 270 "lco.m"
            transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 270 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 270 "lco.m"
              *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_23_23;
#line 270 "lco.m"
            else
#line 270 "lco.m"
              {
#line 270 "lco.m"
                MR_Word transform_hlds__lco__V_24_24;

#line 270 "lco.m"
                {
#line 270 "lco.m"
                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__lco__V_24_24, transform_hlds__lco__V_6_6, transform_hlds__lco__V_15_15);
                }
#line 5089 "transform_hlds.lco.c"
                transform_hlds__lco__succeeded = (transform_hlds__lco__V_24_24 == (MR_Integer) 0);
#line 270 "lco.m"
                transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 270 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 270 "lco.m"
                  *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_24_24;
#line 270 "lco.m"
                else
#line 270 "lco.m"
                  {
#line 270 "lco.m"
                    MR_Word transform_hlds__lco__V_25_25;

#line 270 "lco.m"
                    {
#line 270 "lco.m"
                      hlds__hlds_pred____Compare____pred_info_0_0(&transform_hlds__lco__V_25_25, transform_hlds__lco__V_7_7, transform_hlds__lco__V_16_16);
                    }
#line 5109 "transform_hlds.lco.c"
                    transform_hlds__lco__succeeded = (transform_hlds__lco__V_25_25 == (MR_Integer) 0);
#line 270 "lco.m"
                    transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 270 "lco.m"
                    if (transform_hlds__lco__succeeded)
#line 270 "lco.m"
                      *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_25_25;
#line 270 "lco.m"
                    else
#line 270 "lco.m"
                      {
#line 270 "lco.m"
                        MR_Word transform_hlds__lco__V_26_26;

#line 270 "lco.m"
                        {
#line 270 "lco.m"
                          hlds__hlds_pred____Compare____proc_info_0_0(&transform_hlds__lco__V_26_26, transform_hlds__lco__V_8_8, transform_hlds__lco__V_17_17);
                        }
#line 5129 "transform_hlds.lco.c"
                        transform_hlds__lco__succeeded = (transform_hlds__lco__V_26_26 == (MR_Integer) 0);
#line 270 "lco.m"
                        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 270 "lco.m"
                        if (transform_hlds__lco__succeeded)
#line 270 "lco.m"
                          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_26_26;
#line 270 "lco.m"
                        else
#line 270 "lco.m"
                          {
#line 270 "lco.m"
                            MR_Word transform_hlds__lco__V_27_27;

#line 270 "lco.m"
                            {
#line 270 "lco.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[6], &transform_hlds__lco__V_27_27, ((MR_Box) (transform_hlds__lco__V_9_9)), ((MR_Box) (transform_hlds__lco__V_18_18)));
                            }
#line 5149 "transform_hlds.lco.c"
                            transform_hlds__lco__succeeded = (transform_hlds__lco__V_27_27 == (MR_Integer) 0);
#line 270 "lco.m"
                            transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 270 "lco.m"
                            if (transform_hlds__lco__succeeded)
#line 270 "lco.m"
                              *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_27_27;
#line 270 "lco.m"
                            else
#line 270 "lco.m"
                              {
#line 270 "lco.m"
                                MR_Word transform_hlds__lco__V_28_28;
#line 270 "lco.m"
                                MR_Integer transform_hlds__lco__V_41_41 = (MR_Integer) transform_hlds__lco__V_10_10;
#line 270 "lco.m"
                                MR_Integer transform_hlds__lco__V_42_42 = (MR_Integer) transform_hlds__lco__V_19_19;

#line 270 "lco.m"
                                {
#line 270 "lco.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__lco__V_28_28, transform_hlds__lco__V_41_41, transform_hlds__lco__V_42_42);
                                }
#line 5173 "transform_hlds.lco.c"
                                transform_hlds__lco__succeeded = (transform_hlds__lco__V_28_28 == (MR_Integer) 0);
#line 270 "lco.m"
                                transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 270 "lco.m"
                                if (transform_hlds__lco__succeeded)
#line 270 "lco.m"
                                  *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_28_28;
#line 270 "lco.m"
                                else
#line 270 "lco.m"
                                  {
#line 270 "lco.m"
                                    MR_Word transform_hlds__lco__V_29_29;
#line 270 "lco.m"
                                    MR_Integer transform_hlds__lco__V_43_43 = (MR_Integer) transform_hlds__lco__V_11_11;
#line 270 "lco.m"
                                    MR_Integer transform_hlds__lco__V_44_44 = (MR_Integer) transform_hlds__lco__V_20_20;

#line 270 "lco.m"
                                    {
#line 270 "lco.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__lco__V_29_29, transform_hlds__lco__V_43_43, transform_hlds__lco__V_44_44);
                                    }
#line 5197 "transform_hlds.lco.c"
                                    transform_hlds__lco__succeeded = (transform_hlds__lco__V_29_29 == (MR_Integer) 0);
#line 270 "lco.m"
                                    transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 270 "lco.m"
                                    if (transform_hlds__lco__succeeded)
#line 270 "lco.m"
                                      *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_29_29;
#line 270 "lco.m"
                                    else
#line 270 "lco.m"
                                      {
#line 270 "lco.m"
                                        MR_Integer transform_hlds__lco__V_45_45 = (MR_Integer) transform_hlds__lco__V_12_12;
#line 270 "lco.m"
                                        MR_Integer transform_hlds__lco__V_46_46 = (MR_Integer) transform_hlds__lco__V_21_21;

#line 270 "lco.m"
                                        {
#line 270 "lco.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__V_45_45, transform_hlds__lco__V_46_46);
                                        }
#line 270 "lco.m"
                                      }
#line 270 "lco.m"
                                  }
#line 270 "lco.m"
                              }
#line 270 "lco.m"
                          }
#line 270 "lco.m"
                      }
#line 270 "lco.m"
                  }
#line 270 "lco.m"
              }
#line 270 "lco.m"
          }
#line 270 "lco.m"
      }
#line 270 "lco.m"
  }
#line 270 "lco.m"
}

#line 270 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_const_info_0_0(
#line 270 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 270 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 270 "lco.m"
{
#line 270 "lco.m"
  {
#line 270 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 270 "lco.m"
    MR_Integer transform_hlds__lco__CastX_21 = (MR_Integer) transform_hlds__lco__HeadVar__1_1;
#line 270 "lco.m"
    MR_Integer transform_hlds__lco__CastY_22 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;

#line 270 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_21 == transform_hlds__lco__CastY_22);
#line 270 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 270 "lco.m"
      transform_hlds__lco__succeeded = MR_TRUE;
#line 270 "lco.m"
    else
#line 270 "lco.m"
      {
#line 270 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_24_24;
#line 270 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_28_28;
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 2)));
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 3)));
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 4)));
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 5)));
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 6)))) & (MR_Integer) 7);
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 3)));
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 4)));
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 5)));
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 6)))) & (MR_Integer) 7);
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 270 "lco.m"
        MR_Word transform_hlds__lco__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 5311 "transform_hlds.lco.c"
        {
#line 5313 "transform_hlds.lco.c"
          transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[0], ((MR_Box) (transform_hlds__lco__V_3_3)), ((MR_Box) (transform_hlds__lco__V_12_12)));
        }
#line 270 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 270 "lco.m"
          {
#line 5320 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_24_24 = (MR_Word) &transform_hlds__lco_scalar_common_1[8];
#line 5322 "transform_hlds.lco.c"
            {
#line 5324 "transform_hlds.lco.c"
              transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_24_24, ((MR_Box) (transform_hlds__lco__V_4_4)), ((MR_Box) (transform_hlds__lco__V_13_13)));
            }
#line 270 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 270 "lco.m"
              {
#line 5331 "transform_hlds.lco.c"
                {
#line 5333 "transform_hlds.lco.c"
                  transform_hlds__lco__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__lco__V_5_5, transform_hlds__lco__V_14_14);
                }
#line 270 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 270 "lco.m"
                  {
#line 5340 "transform_hlds.lco.c"
                    {
#line 5342 "transform_hlds.lco.c"
                      transform_hlds__lco__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(transform_hlds__lco__V_6_6, transform_hlds__lco__V_15_15);
                    }
#line 270 "lco.m"
                    if (transform_hlds__lco__succeeded)
#line 270 "lco.m"
                      {
#line 5349 "transform_hlds.lco.c"
                        {
#line 5351 "transform_hlds.lco.c"
                          transform_hlds__lco__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(transform_hlds__lco__V_7_7, transform_hlds__lco__V_16_16);
                        }
#line 270 "lco.m"
                        if (transform_hlds__lco__succeeded)
#line 270 "lco.m"
                          {
#line 5358 "transform_hlds.lco.c"
                            transform_hlds__lco__TypeInfo_28_28 = (MR_Word) &transform_hlds__lco_scalar_common_1[6];
#line 5360 "transform_hlds.lco.c"
                            {
#line 5362 "transform_hlds.lco.c"
                              transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_28_28, ((MR_Box) (transform_hlds__lco__V_8_8)), ((MR_Box) (transform_hlds__lco__V_17_17)));
                            }
#line 270 "lco.m"
                            if (transform_hlds__lco__succeeded)
#line 270 "lco.m"
                              {
#line 5369 "transform_hlds.lco.c"
                                transform_hlds__lco__succeeded = (transform_hlds__lco__V_9_9 == transform_hlds__lco__V_18_18);
#line 270 "lco.m"
                                if (transform_hlds__lco__succeeded)
#line 270 "lco.m"
                                  {
#line 5375 "transform_hlds.lco.c"
                                    transform_hlds__lco__succeeded = (transform_hlds__lco__V_10_10 == transform_hlds__lco__V_19_19);
#line 270 "lco.m"
                                    if (transform_hlds__lco__succeeded)
#line 5379 "transform_hlds.lco.c"
                                      transform_hlds__lco__succeeded = (transform_hlds__lco__V_11_11 == transform_hlds__lco__V_20_20);
#line 270 "lco.m"
                                  }
#line 270 "lco.m"
                              }
#line 270 "lco.m"
                          }
#line 270 "lco.m"
                      }
#line 270 "lco.m"
                  }
#line 270 "lco.m"
              }
#line 270 "lco.m"
          }
#line 270 "lco.m"
      }
#line 270 "lco.m"
    return transform_hlds__lco__succeeded;
#line 270 "lco.m"
  }
#line 270 "lco.m"
}

#line 239 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____field_id_0_0(
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
    MR_Integer transform_hlds__lco__CastX_12 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 239 "lco.m"
    MR_Integer transform_hlds__lco__CastY_13 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 239 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_12 == transform_hlds__lco__CastY_13);
#line 239 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 5428 "transform_hlds.lco.c"
      *transform_hlds__lco__HeadVar__1_1 = (MR_Integer) 0;
#line 239 "lco.m"
    else
#line 239 "lco.m"
      {
#line 239 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 239 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 239 "lco.m"
        MR_Integer transform_hlds__lco__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));
#line 239 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
#line 239 "lco.m"
        MR_Word transform_hlds__lco__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 239 "lco.m"
        MR_Integer transform_hlds__lco__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 2)));
#line 239 "lco.m"
        MR_Word transform_hlds__lco__V_10_10;

#line 239 "lco.m"
        {
#line 239 "lco.m"
          parse_tree__prog_data____Compare____mer_type_0_0(&transform_hlds__lco__V_10_10, transform_hlds__lco__V_4_4, transform_hlds__lco__V_7_7);
        }
#line 5454 "transform_hlds.lco.c"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_10_10 == (MR_Integer) 0);
#line 239 "lco.m"
        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 239 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 239 "lco.m"
          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_10_10;
#line 239 "lco.m"
        else
#line 239 "lco.m"
          {
#line 239 "lco.m"
            MR_Word transform_hlds__lco__V_11_11;

#line 239 "lco.m"
            {
#line 239 "lco.m"
              parse_tree__prog_data____Compare____cons_id_0_0(&transform_hlds__lco__V_11_11, transform_hlds__lco__V_5_5, transform_hlds__lco__V_8_8);
            }
#line 5474 "transform_hlds.lco.c"
            transform_hlds__lco__succeeded = (transform_hlds__lco__V_11_11 == (MR_Integer) 0);
#line 239 "lco.m"
            transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 239 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 239 "lco.m"
              *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_11_11;
#line 239 "lco.m"
            else
#line 239 "lco.m"
              {
#line 239 "lco.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__V_6_6, transform_hlds__lco__V_9_9);
              }
#line 239 "lco.m"
          }
#line 239 "lco.m"
      }
#line 239 "lco.m"
  }
#line 239 "lco.m"
}

#line 239 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____field_id_0_0(
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
    MR_Integer transform_hlds__lco__CastX_9 = (MR_Integer) transform_hlds__lco__HeadVar__1_1;
#line 239 "lco.m"
    MR_Integer transform_hlds__lco__CastY_10 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;

#line 239 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_9 == transform_hlds__lco__CastY_10);
#line 239 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 239 "lco.m"
      transform_hlds__lco__succeeded = MR_TRUE;
#line 239 "lco.m"
    else
#line 239 "lco.m"
      {
#line 239 "lco.m"
        MR_Word transform_hlds__lco__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 239 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 239 "lco.m"
        MR_Integer transform_hlds__lco__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 2)));
#line 239 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 239 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 239 "lco.m"
        MR_Integer transform_hlds__lco__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));

#line 5539 "transform_hlds.lco.c"
        {
#line 5541 "transform_hlds.lco.c"
          transform_hlds__lco__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__lco__V_3_3, transform_hlds__lco__V_6_6);
        }
#line 239 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 239 "lco.m"
          {
#line 5548 "transform_hlds.lco.c"
            {
#line 5550 "transform_hlds.lco.c"
              transform_hlds__lco__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__lco__V_4_4, transform_hlds__lco__V_7_7);
            }
#line 239 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 5555 "transform_hlds.lco.c"
              transform_hlds__lco__succeeded = (transform_hlds__lco__V_5_5 == transform_hlds__lco__V_8_8);
#line 239 "lco.m"
          }
#line 239 "lco.m"
      }
#line 239 "lco.m"
    return transform_hlds__lco__succeeded;
#line 239 "lco.m"
  }
#line 239 "lco.m"
}

#line 256 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____allow_float_addr_0_0(
#line 256 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 256 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 256 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 256 "lco.m"
{
#line 256 "lco.m"
  {
#line 256 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 256 "lco.m"
    MR_Integer transform_hlds__lco__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 256 "lco.m"
    MR_Integer transform_hlds__lco__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 256 "lco.m"
    {
#line 256 "lco.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__Cast_HeadVar1_4, transform_hlds__lco__Cast_HeadVar2_5);
    }
#line 256 "lco.m"
  }
#line 256 "lco.m"
}

#line 256 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____allow_float_addr_0_0(
#line 256 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_1,
#line 256 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 256 "lco.m"
{
#line 5607 "transform_hlds.lco.c"
  {
#line 5609 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded = (transform_hlds__lco__HeadVar__2_1 == transform_hlds__lco__HeadVar__2_2);

#line 5612 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 5614 "transform_hlds.lco.c"
  }
#line 256 "lco.m"
}

#line 1759 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_unification_args_8_p_0(
#line 1759 "lco.m"
  MR_Word transform_hlds__lco__GroundVar_9,
#line 1759 "lco.m"
  MR_Integer transform_hlds__lco__TargetArgNum_10,
#line 1759 "lco.m"
  MR_Integer transform_hlds__lco__CurArgNum_11,
#line 1759 "lco.m"
  MR_Word transform_hlds__lco__ArgTypes_12,
#line 1759 "lco.m"
  MR_Word * transform_hlds__lco__ArgVars_13,
#line 1759 "lco.m"
  MR_Word * transform_hlds__lco__ArgModes_14,
#line 1759 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22,
#line 1759 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_23)
#line 1759 "lco.m"
{
#line 1766 "lco.m"
  {
#line 1766 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1766 "lco.m"
    if ((transform_hlds__lco__ArgTypes_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1766 "lco.m"
      {
#line 1767 "lco.m"
        *transform_hlds__lco__ArgVars_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1768 "lco.m"
        *transform_hlds__lco__ArgModes_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1766 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_23 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22;
#line 1766 "lco.m"
      }
#line 1766 "lco.m"
    else
#line 1770 "lco.m"
      {
#line 1770 "lco.m"
        MR_Word transform_hlds__lco__ArgType_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__ArgTypes_12, (MR_Integer) 0)));
#line 1770 "lco.m"
        MR_Word transform_hlds__lco__ArgTypesTail_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__ArgTypes_12, (MR_Integer) 1)));
#line 1770 "lco.m"
        MR_Word transform_hlds__lco__ArgVarsTail_18;
#line 1770 "lco.m"
        MR_Word transform_hlds__lco__ArgModesTail_19;
#line 1770 "lco.m"
        MR_Word transform_hlds__lco__Var_20;
#line 1770 "lco.m"
        MR_Word transform_hlds__lco__UniMode_21;
#line 1770 "lco.m"
        MR_Integer transform_hlds__lco__V_24_24 = (transform_hlds__lco__CurArgNum_11 + (MR_Integer) 1);
#line 1770 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_25_25;

#line 1771 "lco.m"
        {
#line 1771 "lco.m"
          transform_hlds__lco__make_unification_args_8_p_0(transform_hlds__lco__GroundVar_9, transform_hlds__lco__TargetArgNum_10, transform_hlds__lco__V_24_24, transform_hlds__lco__ArgTypesTail_17, &transform_hlds__lco__ArgVarsTail_18, &transform_hlds__lco__ArgModesTail_19, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_25_25);
        }
#line 1784 "lco.m"
        transform_hlds__lco__succeeded = (transform_hlds__lco__CurArgNum_11 == transform_hlds__lco__TargetArgNum_10);
#line 1787 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1785 "lco.m"
          {
#line 1785 "lco.m"
            MR_Word transform_hlds__lco__V_37_37;
#line 1785 "lco.m"
            MR_Word transform_hlds__lco__V_38_38;
#line 1785 "lco.m"
            MR_Word transform_hlds__lco__V_39_39;
#line 1785 "lco.m"
            MR_Word transform_hlds__lco__V_40_40;
#line 1785 "lco.m"
            MR_Word transform_hlds__lco__V_41_41;
#line 1785 "lco.m"
            MR_Word transform_hlds__lco__V_42_42;

#line 1785 "lco.m"
            transform_hlds__lco__Var_20 = transform_hlds__lco__GroundVar_9;
#line 1786 "lco.m"
            {
#line 1786 "lco.m"
              transform_hlds__lco__V_38_38 = parse_tree__prog_mode__free_inst_0_f_0();
            }
#line 1786 "lco.m"
            {
#line 1786 "lco.m"
              transform_hlds__lco__V_39_39 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
#line 1786 "lco.m"
            {
#line 1786 "lco.m"
              transform_hlds__lco__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1786 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_37_37, 0) = ((MR_Box) (transform_hlds__lco__V_38_38));
#line 1786 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_37_37, 1) = ((MR_Box) (transform_hlds__lco__V_39_39));
#line 1786 "lco.m"
            }
#line 1786 "lco.m"
            {
#line 1786 "lco.m"
              transform_hlds__lco__V_41_41 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
#line 1786 "lco.m"
            {
#line 1786 "lco.m"
              transform_hlds__lco__V_42_42 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
#line 1786 "lco.m"
            {
#line 1786 "lco.m"
              transform_hlds__lco__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1786 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_40_40, 0) = ((MR_Box) (transform_hlds__lco__V_41_41));
#line 1786 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_40_40, 1) = ((MR_Box) (transform_hlds__lco__V_42_42));
#line 1786 "lco.m"
            }
#line 1786 "lco.m"
            {
#line 1786 "lco.m"
              transform_hlds__lco__UniMode_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1786 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_21, 0) = ((MR_Box) (transform_hlds__lco__V_37_37));
#line 1786 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_21, 1) = ((MR_Box) (transform_hlds__lco__V_40_40));
#line 1786 "lco.m"
            }
#line 1785 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_ProcInfo_23 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_25_25;
#line 1785 "lco.m"
          }
#line 1787 "lco.m"
        else
#line 1789 "lco.m"
          {
#line 1789 "lco.m"
            MR_Word transform_hlds__lco__V_45_45;
#line 1789 "lco.m"
            MR_Word transform_hlds__lco__V_46_46;
#line 1789 "lco.m"
            MR_Word transform_hlds__lco__V_47_47;
#line 1789 "lco.m"
            MR_Word transform_hlds__lco__V_48_48;
#line 1789 "lco.m"
            MR_Word transform_hlds__lco__V_49_49;
#line 1789 "lco.m"
            MR_Word transform_hlds__lco__V_50_50;

#line 1789 "lco.m"
            {
#line 1789 "lco.m"
              hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__lco__ArgType_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__lco__Var_20, transform_hlds__lco__STATE_VARIABLE_ProcInfo_25_25, transform_hlds__lco__STATE_VARIABLE_ProcInfo_23);
            }
#line 1790 "lco.m"
            {
#line 1790 "lco.m"
              transform_hlds__lco__V_46_46 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
#line 1790 "lco.m"
            {
#line 1790 "lco.m"
              transform_hlds__lco__V_47_47 = parse_tree__prog_mode__free_inst_0_f_0();
            }
#line 1790 "lco.m"
            {
#line 1790 "lco.m"
              transform_hlds__lco__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1790 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_45_45, 0) = ((MR_Box) (transform_hlds__lco__V_46_46));
#line 1790 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_45_45, 1) = ((MR_Box) (transform_hlds__lco__V_47_47));
#line 1790 "lco.m"
            }
#line 1790 "lco.m"
            {
#line 1790 "lco.m"
              transform_hlds__lco__V_49_49 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
#line 1790 "lco.m"
            {
#line 1790 "lco.m"
              transform_hlds__lco__V_50_50 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
#line 1790 "lco.m"
            {
#line 1790 "lco.m"
              transform_hlds__lco__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1790 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_48_48, 0) = ((MR_Box) (transform_hlds__lco__V_49_49));
#line 1790 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_48_48, 1) = ((MR_Box) (transform_hlds__lco__V_50_50));
#line 1790 "lco.m"
            }
#line 1790 "lco.m"
            {
#line 1790 "lco.m"
              transform_hlds__lco__UniMode_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1790 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_21, 0) = ((MR_Box) (transform_hlds__lco__V_45_45));
#line 1790 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_21, 1) = ((MR_Box) (transform_hlds__lco__V_48_48));
#line 1790 "lco.m"
            }
#line 1789 "lco.m"
          }
#line 1775 "lco.m"
        {
#line 1775 "lco.m"
          MR_Word base;
#line 1775 "lco.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1775 "lco.m"
          *transform_hlds__lco__ArgVars_13 = base;
#line 1775 "lco.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Var_20));
#line 1775 "lco.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__ArgVarsTail_18));
#line 1775 "lco.m"
        }
#line 1776 "lco.m"
        {
#line 1776 "lco.m"
          MR_Word base;
#line 1776 "lco.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1776 "lco.m"
          *transform_hlds__lco__ArgModes_14 = base;
#line 1776 "lco.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__UniMode_21));
#line 1776 "lco.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__ArgModesTail_19));
#line 1776 "lco.m"
        }
#line 1770 "lco.m"
      }
#line 1766 "lco.m"
  }
#line 1759 "lco.m"
}

#line 1716 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_store_goal_6_p_0(
#line 1716 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_7,
#line 1716 "lco.m"
  MR_Word transform_hlds__lco__InstMap_8,
#line 1716 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 1716 "lco.m"
  MR_Word * transform_hlds__lco__Goal_11,
#line 1716 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_31,
#line 1716 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_32)
#line 1716 "lco.m"
{
#line 1721 "lco.m"
  {
#line 1721 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1721 "lco.m"
    MR_Word transform_hlds__lco__GroundVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
#line 1721 "lco.m"
    MR_Word transform_hlds__lco__StoreTarget_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 1721 "lco.m"
    MR_Word transform_hlds__lco__AddrVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__StoreTarget_10, (MR_Integer) 0)));
#line 1721 "lco.m"
    MR_Word transform_hlds__lco__MaybeFieldId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__StoreTarget_10, (MR_Integer) 1)));

#line 1732 "lco.m"
    if ((transform_hlds__lco__MaybeFieldId_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1725 "lco.m"
      {
#line 1725 "lco.m"
        MR_Word transform_hlds__lco__V_49_49;
#line 1725 "lco.m"
        MR_Word transform_hlds__lco__V_55_55;
#line 1725 "lco.m"
        MR_Word transform_hlds__lco__V_57_57;
#line 1725 "lco.m"
        MR_Word transform_hlds__lco__V_58_58;
#line 1725 "lco.m"
        MR_Word transform_hlds__lco__V_59_59;

#line 1726 "lco.m"
        {
#line 1726 "lco.m"
          transform_hlds__lco__V_49_49 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
        }
#line 1729 "lco.m"
        {
#line 1729 "lco.m"
          transform_hlds__lco__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1729 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_59_59, 0) = ((MR_Box) (transform_hlds__lco__GroundVar_9));
#line 1729 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1729 "lco.m"
        }
#line 1729 "lco.m"
        {
#line 1729 "lco.m"
          transform_hlds__lco__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1729 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_55_55, 0) = ((MR_Box) (transform_hlds__lco__AddrVar_13));
#line 1729 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_55_55, 1) = ((MR_Box) (transform_hlds__lco__V_59_59));
#line 1729 "lco.m"
        }
#line 1730 "lco.m"
        {
#line 1730 "lco.m"
          transform_hlds__lco__V_57_57 = hlds__instmap__instmap_delta_bind_vars_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 1730 "lco.m"
        {
#line 1730 "lco.m"
          transform_hlds__lco__V_58_58 = mercury__term__context_init_0_f_0();
        }
#line 1726 "lco.m"
        {
#line 1726 "lco.m"
          hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__lco__V_49_49, (MR_String) "store_at_ref_impure", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__lco__V_55_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__lco__V_57_57, transform_hlds__lco__ModuleInfo_7, transform_hlds__lco__V_58_58, transform_hlds__lco__Goal_11);
        }
#line 1725 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_32 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_31;
#line 1725 "lco.m"
      }
#line 1732 "lco.m"
    else
#line 1734 "lco.m"
      {
#line 1734 "lco.m"
        MR_Word transform_hlds__lco__AddrVarType_15;
#line 1734 "lco.m"
        MR_Word transform_hlds__lco__ConsId_16;
#line 1734 "lco.m"
        MR_Integer transform_hlds__lco__ArgNum_17;
#line 1734 "lco.m"
        MR_Word transform_hlds__lco__ArgTypes_18;
#line 1734 "lco.m"
        MR_Word transform_hlds__lco__ArgVars_19;
#line 1734 "lco.m"
        MR_Word transform_hlds__lco__ArgModes_20;
#line 1734 "lco.m"
        MR_Word transform_hlds__lco__RHS_21;
#line 1734 "lco.m"
        MR_Word transform_hlds__lco__AddrVarInst0_22;
#line 1734 "lco.m"
        MR_Word transform_hlds__lco__AddrVarInst_23;
#line 1734 "lco.m"
        MR_Word transform_hlds__lco__UniMode_24;
#line 1734 "lco.m"
        MR_Word transform_hlds__lco__Unification_25;
#line 1734 "lco.m"
        MR_Word transform_hlds__lco__GoalExpr_27;
#line 1734 "lco.m"
        MR_Word transform_hlds__lco__GoalInfo0_28;
#line 1734 "lco.m"
        MR_Word transform_hlds__lco__GoalInfo1_29;
#line 1734 "lco.m"
        MR_Word transform_hlds__lco__GoalInfo_30;
#line 1734 "lco.m"
        MR_Word transform_hlds__lco__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__MaybeFieldId_14, (MR_Integer) 0)));
#line 1734 "lco.m"
        MR_Word transform_hlds__lco__V_37_37;
#line 1734 "lco.m"
        MR_Word transform_hlds__lco__V_38_38;
#line 1734 "lco.m"
        MR_Word transform_hlds__lco__V_39_39;
#line 1734 "lco.m"
        MR_Word transform_hlds__lco__V_40_40;
#line 1734 "lco.m"
        MR_Word transform_hlds__lco__V_41_41;
#line 1734 "lco.m"
        MR_Word transform_hlds__lco__V_48_48;

#line 1734 "lco.m"
        transform_hlds__lco__AddrVarType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_33_33, (MR_Integer) 0)));
#line 1734 "lco.m"
        transform_hlds__lco__ConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_33_33, (MR_Integer) 1)));
#line 1734 "lco.m"
        transform_hlds__lco__ArgNum_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_33_33, (MR_Integer) 2)));
#line 1735 "lco.m"
        {
#line 1735 "lco.m"
          check_hlds__type_util__get_cons_id_arg_types_4_p_0(transform_hlds__lco__ModuleInfo_7, transform_hlds__lco__AddrVarType_15, transform_hlds__lco__ConsId_16, &transform_hlds__lco__ArgTypes_18);
        }
#line 1736 "lco.m"
        {
#line 1736 "lco.m"
          transform_hlds__lco__make_unification_args_8_p_0(transform_hlds__lco__GroundVar_9, transform_hlds__lco__ArgNum_17, (MR_Integer) 1, transform_hlds__lco__ArgTypes_18, &transform_hlds__lco__ArgVars_19, &transform_hlds__lco__ArgModes_20, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_31, transform_hlds__lco__STATE_VARIABLE_ProcInfo_32);
        }
#line 1739 "lco.m"
        {
#line 1739 "lco.m"
          transform_hlds__lco__RHS_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1739 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS_21, 0) = ((MR_Box) (transform_hlds__lco__ConsId_16));
#line 1739 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS_21, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1739 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS_21, 2) = ((MR_Box) (transform_hlds__lco__ArgVars_19));
#line 1739 "lco.m"
        }
#line 1741 "lco.m"
        {
#line 1741 "lco.m"
          hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__lco__InstMap_8, transform_hlds__lco__AddrVar_13, &transform_hlds__lco__AddrVarInst0_22);
        }
#line 1742 "lco.m"
        {
#line 1742 "lco.m"
          check_hlds__inst_util__inst_expand_3_p_0(transform_hlds__lco__ModuleInfo_7, transform_hlds__lco__AddrVarInst0_22, &transform_hlds__lco__AddrVarInst_23);
        }
#line 1743 "lco.m"
        {
#line 1743 "lco.m"
          transform_hlds__lco__V_38_38 = parse_tree__prog_mode__ground_inst_0_f_0();
        }
#line 1743 "lco.m"
        {
#line 1743 "lco.m"
          transform_hlds__lco__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1743 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_37_37, 0) = ((MR_Box) (transform_hlds__lco__AddrVarInst_23));
#line 1743 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_37_37, 1) = ((MR_Box) (transform_hlds__lco__V_38_38));
#line 1743 "lco.m"
        }
#line 1743 "lco.m"
        {
#line 1743 "lco.m"
          transform_hlds__lco__V_40_40 = parse_tree__prog_mode__ground_inst_0_f_0();
        }
#line 1743 "lco.m"
        {
#line 1743 "lco.m"
          transform_hlds__lco__V_41_41 = parse_tree__prog_mode__ground_inst_0_f_0();
        }
#line 1743 "lco.m"
        {
#line 1743 "lco.m"
          transform_hlds__lco__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1743 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_39_39, 0) = ((MR_Box) (transform_hlds__lco__V_40_40));
#line 1743 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_39_39, 1) = ((MR_Box) (transform_hlds__lco__V_41_41));
#line 1743 "lco.m"
        }
#line 1743 "lco.m"
        {
#line 1743 "lco.m"
          transform_hlds__lco__UniMode_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1743 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_24, 0) = ((MR_Box) (transform_hlds__lco__V_37_37));
#line 1743 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_24, 1) = ((MR_Box) (transform_hlds__lco__V_39_39));
#line 1743 "lco.m"
        }
#line 1745 "lco.m"
        {
#line 1745 "lco.m"
          transform_hlds__lco__Unification_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1745 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Unification_25, 0) = ((MR_Box) (transform_hlds__lco__AddrVar_13));
#line 1745 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Unification_25, 1) = ((MR_Box) (transform_hlds__lco__ConsId_16));
#line 1745 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Unification_25, 2) = ((MR_Box) (transform_hlds__lco__ArgVars_19));
#line 1745 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Unification_25, 3) = ((MR_Box) (transform_hlds__lco__ArgModes_20));
#line 1745 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Unification_25, 4) = ((MR_Box) ((MR_Integer) 1));
#line 1745 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Unification_25, 5) = ((MR_Box) ((MR_Integer) 1));
#line 1745 "lco.m"
        }
#line 1749 "lco.m"
        {
#line 1749 "lco.m"
          transform_hlds__lco__GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1749 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_27, 0) = ((MR_Box) (transform_hlds__lco__AddrVar_13));
#line 1749 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_27, 1) = ((MR_Box) (transform_hlds__lco__RHS_21));
#line 1749 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_27, 2) = ((MR_Box) (transform_hlds__lco__UniMode_24));
#line 1749 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_27, 3) = ((MR_Box) (transform_hlds__lco__Unification_25));
#line 1749 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_27, 4) = ((MR_Box) (&transform_hlds__lco_scalar_common_1[12]));
#line 1749 "lco.m"
        }
#line 1751 "lco.m"
        {
#line 1751 "lco.m"
          hlds__hlds_goal__goal_info_init_1_p_0(&transform_hlds__lco__GoalInfo0_28);
        }
#line 1752 "lco.m"
        {
#line 1752 "lco.m"
          hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, transform_hlds__lco__GoalInfo0_28, &transform_hlds__lco__GoalInfo1_29);
        }
#line 1753 "lco.m"
        {
#line 1753 "lco.m"
          transform_hlds__lco__V_48_48 = hlds__instmap__instmap_delta_bind_var_1_f_0(transform_hlds__lco__AddrVar_13);
        }
#line 1753 "lco.m"
        {
#line 1753 "lco.m"
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__lco__V_48_48, transform_hlds__lco__GoalInfo1_29, &transform_hlds__lco__GoalInfo_30);
        }
#line 1756 "lco.m"
        {
#line 1756 "lco.m"
          MR_Word base;
#line 1756 "lco.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1756 "lco.m"
          *transform_hlds__lco__Goal_11 = base;
#line 1756 "lco.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__GoalExpr_27));
#line 1756 "lco.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__GoalInfo_30));
#line 1756 "lco.m"
        }
#line 1734 "lco.m"
      }
#line 1721 "lco.m"
  }
#line 1716 "lco.m"
}

#line 1691 "lco.m"
static void MR_CALL 
transform_hlds__lco__grounding_to_variant_args_5_p_0(
#line 1691 "lco.m"
  MR_Word transform_hlds__lco__GroundingVarToAddr_6,
#line 1691 "lco.m"
  MR_Integer transform_hlds__lco__OutArgNum_7,
#line 1691 "lco.m"
  MR_Word transform_hlds__lco__OutArgs_8,
#line 1691 "lco.m"
  MR_Word * transform_hlds__lco__Subst_9,
#line 1691 "lco.m"
  MR_Word * transform_hlds__lco__VariantArgs_10)
#line 1691 "lco.m"
{
#line 1698 "lco.m"
  {
#line 1698 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1698 "lco.m"
    if ((transform_hlds__lco__OutArgs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1698 "lco.m"
      {
#line 1698 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_21_21 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];

#line 1699 "lco.m"
        {
#line 1699 "lco.m"
          *transform_hlds__lco__Subst_9 = mercury__map__init_0_f_0(transform_hlds__lco__TypeInfo_21_21, transform_hlds__lco__TypeInfo_21_21);
        }
#line 1700 "lco.m"
        *transform_hlds__lco__VariantArgs_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1698 "lco.m"
      }
#line 1698 "lco.m"
    else
#line 1702 "lco.m"
      {
#line 1702 "lco.m"
        MR_Word transform_hlds__lco__OutArg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__OutArgs_8, (MR_Integer) 0)));
#line 1702 "lco.m"
        MR_Word transform_hlds__lco__OutArgsTail_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__OutArgs_8, (MR_Integer) 1)));
#line 1702 "lco.m"
        MR_Word transform_hlds__lco__Subst0_13;
#line 1702 "lco.m"
        MR_Word transform_hlds__lco__VariantArgsTail_14;
#line 1702 "lco.m"
        MR_Integer transform_hlds__lco__V_19_19 = (transform_hlds__lco__OutArgNum_7 + (MR_Integer) 1);
#line 1710 "lco.m"
        MR_Word transform_hlds__lco__StoreTarget_15;
#line 1705 "lco.m"
        MR_Box transform_hlds__lco__conv0_StoreTarget_15;

#line 1703 "lco.m"
        {
#line 1703 "lco.m"
          transform_hlds__lco__grounding_to_variant_args_5_p_0(transform_hlds__lco__GroundingVarToAddr_6, transform_hlds__lco__V_19_19, transform_hlds__lco__OutArgsTail_12, &transform_hlds__lco__Subst0_13, &transform_hlds__lco__VariantArgsTail_14);
        }
#line 1705 "lco.m"
        {
#line 1705 "lco.m"
          transform_hlds__lco__succeeded = mercury__assoc_list__search_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[3], (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0, transform_hlds__lco__GroundingVarToAddr_6, ((MR_Box) (transform_hlds__lco__OutArg_11)), &transform_hlds__lco__conv0_StoreTarget_15);
        }
#line 1705 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1705 "lco.m"
          {
#line 1705 "lco.m"
            transform_hlds__lco__StoreTarget_15 = ((MR_Word) transform_hlds__lco__conv0_StoreTarget_15);
#line 1705 "lco.m"
            transform_hlds__lco__succeeded = MR_TRUE;
#line 1705 "lco.m"
          }
#line 1710 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1706 "lco.m"
          {
#line 1706 "lco.m"
            MR_Word transform_hlds__lco__TypeInfo_24_24 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
#line 1706 "lco.m"
            MR_Word transform_hlds__lco__StoreArg_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__StoreTarget_15, (MR_Integer) 0)));
#line 1706 "lco.m"
            MR_Word transform_hlds__lco__MaybeFieldId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__StoreTarget_15, (MR_Integer) 1)));
#line 1706 "lco.m"
            MR_Word transform_hlds__lco__VariantArg_18;

#line 1707 "lco.m"
            {
#line 1707 "lco.m"
              mercury__map__det_insert_4_p_0(transform_hlds__lco__TypeInfo_24_24, transform_hlds__lco__TypeInfo_24_24, ((MR_Box) (transform_hlds__lco__OutArg_11)), ((MR_Box) (transform_hlds__lco__StoreArg_16)), transform_hlds__lco__Subst0_13, transform_hlds__lco__Subst_9);
            }
#line 1708 "lco.m"
            {
#line 1708 "lco.m"
              transform_hlds__lco__VariantArg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1708 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantArg_18, 0) = ((MR_Box) (transform_hlds__lco__OutArgNum_7));
#line 1708 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantArg_18, 1) = ((MR_Box) (transform_hlds__lco__MaybeFieldId_17));
#line 1708 "lco.m"
            }
#line 1709 "lco.m"
            {
#line 1709 "lco.m"
              MR_Word base;
#line 1709 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1709 "lco.m"
              *transform_hlds__lco__VariantArgs_10 = base;
#line 1709 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__VariantArg_18));
#line 1709 "lco.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__VariantArgsTail_14));
#line 1709 "lco.m"
            }
#line 1706 "lco.m"
          }
#line 1710 "lco.m"
        else
#line 1711 "lco.m"
          {
#line 1711 "lco.m"
            *transform_hlds__lco__Subst_9 = transform_hlds__lco__Subst0_13;
#line 1712 "lco.m"
            *transform_hlds__lco__VariantArgs_10 = transform_hlds__lco__VariantArgsTail_14;
#line 1711 "lco.m"
          }
#line 1702 "lco.m"
      }
#line 1698 "lco.m"
  }
#line 1691 "lco.m"
}

#line 1681 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__is_grounding_4_p_0(
#line 1681 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_5,
#line 1681 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_6,
#line 1681 "lco.m"
  MR_Word transform_hlds__lco__InstMap_7,
#line 1681 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__4_4)
#line 1681 "lco.m"
{
#line 1684 "lco.m"
  {
#line 1684 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1684 "lco.m"
    MR_Word transform_hlds__lco__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__4_4, (MR_Integer) 0)));
#line 1684 "lco.m"
    MR_Word transform_hlds__lco__Inst0_10;
#line 1684 "lco.m"
    MR_Word transform_hlds__lco__Inst_11;
#line 1684 "lco.m"
    MR_Word transform_hlds__lco___StoreTarget_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__4_4, (MR_Integer) 1)));

#line 1685 "lco.m"
    {
#line 1685 "lco.m"
      hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__lco__InstMap0_6, transform_hlds__lco__Var_8, &transform_hlds__lco__Inst0_10);
    }
#line 1686 "lco.m"
    {
#line 1686 "lco.m"
      transform_hlds__lco__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(transform_hlds__lco__ModuleInfo_5, transform_hlds__lco__Inst0_10);
    }
#line 1686 "lco.m"
    transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 1684 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 1684 "lco.m"
      {
#line 1687 "lco.m"
        {
#line 1687 "lco.m"
          transform_hlds__lco__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(transform_hlds__lco__InstMap_7);
        }
#line 1684 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1684 "lco.m"
          {
#line 1688 "lco.m"
            {
#line 1688 "lco.m"
              hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__lco__InstMap_7, transform_hlds__lco__Var_8, &transform_hlds__lco__Inst_11);
            }
#line 1689 "lco.m"
            {
#line 1689 "lco.m"
              transform_hlds__lco__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(transform_hlds__lco__ModuleInfo_5, transform_hlds__lco__Inst_11);
            }
#line 1684 "lco.m"
          }
#line 1684 "lco.m"
      }
#line 1684 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1684 "lco.m"
  }
#line 1681 "lco.m"
}

#line 1666 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_2(
#line 1666 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1666 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1666 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2)
#line 1666 "lco.m"
{
#line 1666 "lco.m"
  {
#line 1666 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 1666 "lco.m"
    MR_Word transform_hlds__lco__conv0_HeadVar__2_70;

#line 1666 "lco.m"
    {
#line 1666 "lco.m"
      transform_hlds__lco__IntroducedFrom__pred__lco_transform_variant_plain_call__1666__1_2_p_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), &transform_hlds__lco__conv0_HeadVar__2_70);
    }
#line 1666 "lco.m"
    *transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__2_70));
#line 1666 "lco.m"
  }
#line 1666 "lco.m"
}

#line 1623 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_1(
#line 1623 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1623 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1)
#line 1623 "lco.m"
{
#line 1623 "lco.m"
  {
#line 1623 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1623 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

#line 1623 "lco.m"
    {
#line 1623 "lco.m"
      transform_hlds__lco__succeeded = transform_hlds__lco__is_grounding_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
#line 1623 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1623 "lco.m"
  }
#line 1623 "lco.m"
}

#line 1614 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0(
#line 1614 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_12,
#line 1614 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_13,
#line 1614 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_14,
#line 1614 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_15,
#line 1614 "lco.m"
  MR_Word transform_hlds__lco__GoalExpr0_16,
#line 1614 "lco.m"
  MR_Word * transform_hlds__lco__GoalExpr_17,
#line 1614 "lco.m"
  MR_Word transform_hlds__lco__GoalInfo0_18,
#line 1614 "lco.m"
  MR_Word * transform_hlds__lco__GoalInfo_19,
#line 1614 "lco.m"
  MR_Word * transform_hlds__lco__Changed_20,
#line 1614 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_53,
#line 1614 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_54)
#line 1614 "lco.m"
{
#line 1621 "lco.m"
  {
#line 1621 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1621 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_65_65;
#line 1621 "lco.m"
    MR_Word transform_hlds__lco__InstMap1_22;
#line 1621 "lco.m"
    MR_Word transform_hlds__lco__GroundingVarToAddr_23;
#line 1621 "lco.m"
    MR_Word transform_hlds__lco__V_55_55;
#line 1621 "lco.m"
    MR_Word transform_hlds__lco__V_56_56;

#line 1622 "lco.m"
    {
#line 1622 "lco.m"
      transform_hlds__lco__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1622 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_55_55, 0) = ((MR_Box) (transform_hlds__lco__GoalExpr0_16));
#line 1622 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_55_55, 1) = ((MR_Box) (transform_hlds__lco__GoalInfo0_18));
#line 1622 "lco.m"
    }
#line 1622 "lco.m"
    {
#line 1622 "lco.m"
      hlds__goal_util__update_instmap_3_p_0(transform_hlds__lco__V_55_55, transform_hlds__lco__InstMap0_15, &transform_hlds__lco__InstMap1_22);
    }
#line 1623 "lco.m"
    {
#line 1623 "lco.m"
      transform_hlds__lco__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1623 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_56_56, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_6[1]));
#line 1623 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_56_56, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_1));
#line 1623 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1623 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_56_56, 3) = ((MR_Box) (transform_hlds__lco__ModuleInfo_12));
#line 1623 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_56_56, 4) = ((MR_Box) (transform_hlds__lco__InstMap0_15));
#line 1623 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_56_56, 5) = ((MR_Box) (transform_hlds__lco__InstMap1_22));
#line 1623 "lco.m"
    }
#line 6504 "transform_hlds.lco.c"
    transform_hlds__lco__TypeInfo_65_65 = (MR_Word) &transform_hlds__lco_scalar_common_2[6];
#line 1623 "lco.m"
    {
#line 1623 "lco.m"
      mercury__list__filter_3_p_0(transform_hlds__lco__TypeInfo_65_65, transform_hlds__lco__V_56_56, transform_hlds__lco__VarToAddr_14, &transform_hlds__lco__GroundingVarToAddr_23);
    }
#line 1630 "lco.m"
    if ((transform_hlds__lco__GroundingVarToAddr_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1626 "lco.m"
      {
#line 1627 "lco.m"
        *transform_hlds__lco__GoalExpr_17 = transform_hlds__lco__GoalExpr0_16;
#line 1628 "lco.m"
        *transform_hlds__lco__GoalInfo_19 = transform_hlds__lco__GoalInfo0_18;
#line 1629 "lco.m"
        *transform_hlds__lco__Changed_20 = (MR_Integer) 0;
#line 1626 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_54 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_53;
#line 1626 "lco.m"
      }
#line 1630 "lco.m"
    else
#line 1631 "lco.m"
      {
#line 1631 "lco.m"
        MR_Word transform_hlds__lco__CallPredId_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr0_16, (MR_Integer) 0)));
#line 1631 "lco.m"
        MR_Integer transform_hlds__lco__CallProcId_27 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr0_16, (MR_Integer) 1)));
#line 1631 "lco.m"
        MR_Word transform_hlds__lco__Args_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr0_16, (MR_Integer) 2)));
#line 1631 "lco.m"
        MR_Word transform_hlds__lco__Builtin_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr0_16, (MR_Integer) 3)));
#line 1631 "lco.m"
        MR_Word transform_hlds__lco__UnifyContext_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr0_16, (MR_Integer) 4)));
#line 1631 "lco.m"
        MR_Word transform_hlds__lco__SymName_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr0_16, (MR_Integer) 5)));
#line 1631 "lco.m"
        MR_Word transform_hlds__lco__CallPredProcId_32;
#line 1631 "lco.m"
        MR_Word transform_hlds__lco__CalleeProcInfo_33;
#line 1631 "lco.m"
        MR_Word transform_hlds__lco__VarTypes_34;
#line 1631 "lco.m"
        MR_Word transform_hlds__lco__CalleeArgModes_35;
#line 1674 "lco.m"
        MR_Word transform_hlds__lco__Subst_40;
#line 1674 "lco.m"
        MR_Word transform_hlds__lco__ExistingVariant_42;
#line 1643 "lco.m"
        MR_Word transform_hlds__lco__ExistingVariants_36;
#line 1643 "lco.m"
        MR_Word transform_hlds__lco__OutArgs_38;
#line 1643 "lco.m"
        MR_Word transform_hlds__lco__VariantArgs_41;
#line 1643 "lco.m"
        MR_Integer transform_hlds__lco__V_57_57;
#line 1644 "lco.m"
        MR_Word transform_hlds__lco___InArgs_37;
#line 1644 "lco.m"
        MR_Word transform_hlds__lco___UnusedArgs_39;

#line 1637 "lco.m"
        {
#line 1637 "lco.m"
          transform_hlds__lco__CallPredProcId_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1637 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__CallPredProcId_32, 0) = ((MR_Box) (transform_hlds__lco__CallPredId_26));
#line 1637 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__CallPredProcId_32, 1) = ((MR_Box) (transform_hlds__lco__CallProcId_27));
#line 1637 "lco.m"
        }
#line 1638 "lco.m"
        {
#line 1638 "lco.m"
          hlds__hlds_module__module_info_proc_info_4_p_0(transform_hlds__lco__ModuleInfo_12, transform_hlds__lco__CallPredId_26, transform_hlds__lco__CallProcId_27, &transform_hlds__lco__CalleeProcInfo_33);
        }
#line 1640 "lco.m"
        {
#line 1640 "lco.m"
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_53, &transform_hlds__lco__VarTypes_34);
        }
#line 1641 "lco.m"
        {
#line 1641 "lco.m"
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__lco__CalleeProcInfo_33, &transform_hlds__lco__CalleeArgModes_35);
        }
#line 1643 "lco.m"
        {
#line 1643 "lco.m"
          transform_hlds__lco__succeeded = mercury__multi_map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0, transform_hlds__lco__VariantMap_13, ((MR_Box) (transform_hlds__lco__CallPredProcId_32)), &transform_hlds__lco__ExistingVariants_36);
        }
#line 1643 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1643 "lco.m"
          {
#line 1644 "lco.m"
            {
#line 1644 "lco.m"
              transform_hlds__lco__classify_proc_call_args_7_p_0(transform_hlds__lco__ModuleInfo_12, transform_hlds__lco__VarTypes_34, transform_hlds__lco__Args_28, transform_hlds__lco__CalleeArgModes_35, &transform_hlds__lco___InArgs_37, &transform_hlds__lco__OutArgs_38, &transform_hlds__lco___UnusedArgs_39);
            }
#line 1646 "lco.m"
            transform_hlds__lco__V_57_57 = (MR_Integer) 1;
#line 1646 "lco.m"
            {
#line 1646 "lco.m"
              transform_hlds__lco__grounding_to_variant_args_5_p_0(transform_hlds__lco__GroundingVarToAddr_23, transform_hlds__lco__V_57_57, transform_hlds__lco__OutArgs_38, &transform_hlds__lco__Subst_40, &transform_hlds__lco__VariantArgs_41);
            }
#line 1648 "lco.m"
            {
#line 1648 "lco.m"
              transform_hlds__lco__succeeded = transform_hlds__lco__match_existing_variant_3_p_0(transform_hlds__lco__ExistingVariants_36, transform_hlds__lco__VariantArgs_41, &transform_hlds__lco__ExistingVariant_42);
            }
#line 1643 "lco.m"
          }
#line 1674 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1651 "lco.m"
          {
#line 1651 "lco.m"
            MR_Word transform_hlds__lco__CallArgs_43;
#line 1651 "lco.m"
            MR_Word transform_hlds__lco__VariantPredId_44;
#line 1651 "lco.m"
            MR_Integer transform_hlds__lco__VariantProcId_45;
#line 1651 "lco.m"
            MR_Word transform_hlds__lco__VariantSymName_46;
#line 1651 "lco.m"
            MR_Word transform_hlds__lco__Globals_47;
#line 1651 "lco.m"
            MR_Word transform_hlds__lco__HighLevelData_48;
#line 1651 "lco.m"
            MR_Word transform_hlds__lco__V_59_59;
#line 1651 "lco.m"
            MR_String transform_hlds__lco__VariantName_79;
#line 1174 "lco.m"
            MR_Word transform_hlds__lco__V_78_78;

#line 1651 "lco.m"
            {
#line 1651 "lco.m"
              parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, transform_hlds__lco__Subst_40, transform_hlds__lco__Args_28, &transform_hlds__lco__CallArgs_43);
            }
#line 1174 "lco.m"
            transform_hlds__lco__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ExistingVariant_42, (MR_Integer) 0)));
#line 1174 "lco.m"
            transform_hlds__lco__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ExistingVariant_42, (MR_Integer) 1)));
#line 1174 "lco.m"
            transform_hlds__lco__VariantName_79 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ExistingVariant_42, (MR_Integer) 2)));
#line 1178 "lco.m"
            if (((MR_tag((MR_Word) transform_hlds__lco__SymName_31)) == (MR_mktag((MR_Integer) 1))))
#line 1179 "lco.m"
              {
#line 1179 "lco.m"
                MR_Word transform_hlds__lco__ModuleName_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SymName_31, (MR_Integer) 0)));
#line 1179 "lco.m"
                MR_String transform_hlds__lco___Name_82 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SymName_31, (MR_Integer) 1)));

#line 1180 "lco.m"
                {
#line 1180 "lco.m"
                  transform_hlds__lco__VariantSymName_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1180 "lco.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__lco__VariantSymName_46, 0) = ((MR_Box) (transform_hlds__lco__ModuleName_81));
#line 1180 "lco.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__lco__VariantSymName_46, 1) = ((MR_Box) (transform_hlds__lco__VariantName_79));
#line 1180 "lco.m"
                }
#line 1179 "lco.m"
              }
#line 1178 "lco.m"
            else
#line 1177 "lco.m"
              {
#line 1177 "lco.m"
                transform_hlds__lco__VariantSymName_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1177 "lco.m"
                MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantSymName_46, 0) = ((MR_Box) (transform_hlds__lco__VariantName_79));
#line 1177 "lco.m"
              }
#line 1653 "lco.m"
            transform_hlds__lco__VariantPredId_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_59_59, (MR_Integer) 0)));
#line 1653 "lco.m"
            transform_hlds__lco__VariantProcId_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_59_59, (MR_Integer) 1)));
#line 1654 "lco.m"
            {
#line 1654 "lco.m"
              MR_Word base;
#line 1654 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1654 "lco.m"
              *transform_hlds__lco__GoalExpr_17 = base;
#line 1654 "lco.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__lco__VariantPredId_44));
#line 1654 "lco.m"
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (transform_hlds__lco__VariantProcId_45));
#line 1654 "lco.m"
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (transform_hlds__lco__CallArgs_43));
#line 1654 "lco.m"
              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (transform_hlds__lco__Builtin_29));
#line 1654 "lco.m"
              MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (transform_hlds__lco__UnifyContext_30));
#line 1654 "lco.m"
              MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (transform_hlds__lco__VariantSymName_46));
#line 1654 "lco.m"
            }
#line 1657 "lco.m"
            {
#line 1657 "lco.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__lco__ModuleInfo_12, &transform_hlds__lco__Globals_47);
            }
#line 1658 "lco.m"
            {
#line 1658 "lco.m"
              libs__globals__lookup_bool_option_3_p_0(transform_hlds__lco__Globals_47, (MR_Integer) 252, &transform_hlds__lco__HighLevelData_48);
            }
#line 1662 "lco.m"
#line 1662 "lco.m"
            switch (transform_hlds__lco__HighLevelData_48) {
#line 1662 "lco.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1662 "lco.m"
              case (MR_Integer) 0:
#line 1661 "lco.m"
                *transform_hlds__lco__GoalInfo_19 = transform_hlds__lco__GoalInfo0_18;
#line 1662 "lco.m"
                break;
#line 1662 "lco.m"
              case (MR_Integer) 1:
#line 1663 "lco.m"
                {
#line 1663 "lco.m"
                  MR_Word transform_hlds__lco__TypeInfo_73_73 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
#line 1663 "lco.m"
                  MR_Word transform_hlds__lco__GroundVars_49;
#line 1663 "lco.m"
                  MR_Word transform_hlds__lco__AddrVars_50;
#line 1663 "lco.m"
                  MR_Word transform_hlds__lco__InstMapDelta0_51;
#line 1663 "lco.m"
                  MR_Word transform_hlds__lco__InstMapDelta_52;
#line 1663 "lco.m"
                  MR_Word transform_hlds__lco__V_62_62;

#line 1666 "lco.m"
                  {
#line 1666 "lco.m"
                    mercury__list__map_3_p_0(transform_hlds__lco__TypeInfo_65_65, transform_hlds__lco__TypeInfo_73_73, (MR_Word) &transform_hlds__lco_scalar_common_2[13], transform_hlds__lco__GroundingVarToAddr_23, &transform_hlds__lco__GroundVars_49);
                  }
#line 1667 "lco.m"
                  {
#line 1667 "lco.m"
                    mercury__map__apply_to_list_3_p_0(transform_hlds__lco__TypeInfo_73_73, transform_hlds__lco__TypeInfo_73_73, transform_hlds__lco__GroundVars_49, transform_hlds__lco__Subst_40, &transform_hlds__lco__AddrVars_50);
                  }
#line 1668 "lco.m"
                  {
#line 1668 "lco.m"
                    transform_hlds__lco__InstMapDelta0_51 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__lco__GoalInfo0_18);
                  }
#line 1669 "lco.m"
                  {
#line 1669 "lco.m"
                    transform_hlds__lco__V_62_62 = parse_tree__prog_mode__ground_inst_0_f_0();
                  }
#line 1669 "lco.m"
                  {
#line 1669 "lco.m"
                    hlds__instmap__instmap_delta_set_vars_same_4_p_0(transform_hlds__lco__V_62_62, transform_hlds__lco__AddrVars_50, transform_hlds__lco__InstMapDelta0_51, &transform_hlds__lco__InstMapDelta_52);
                  }
#line 1671 "lco.m"
                  {
#line 1671 "lco.m"
                    hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__lco__InstMapDelta_52, transform_hlds__lco__GoalInfo0_18, transform_hlds__lco__GoalInfo_19);
                  }
#line 1663 "lco.m"
                }
#line 1662 "lco.m"
                break;
#line 1662 "lco.m"
            }
#line 1673 "lco.m"
            *transform_hlds__lco__Changed_20 = (MR_Integer) 1;
#line 1651 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_ProcInfo_54 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_53;
#line 1651 "lco.m"
          }
#line 1674 "lco.m"
        else
#line 1676 "lco.m"
          {
#line 1675 "lco.m"
            {
#line 1675 "lco.m"
              transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(transform_hlds__lco__ModuleInfo_12, transform_hlds__lco__VarToAddr_14, transform_hlds__lco__InstMap0_15, transform_hlds__lco__GoalInfo0_18, transform_hlds__lco__GoalExpr0_16, transform_hlds__lco__GoalExpr_17, transform_hlds__lco__Changed_20, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_53, transform_hlds__lco__STATE_VARIABLE_ProcInfo_54);
            }
#line 1677 "lco.m"
            *transform_hlds__lco__GoalInfo_19 = transform_hlds__lco__GoalInfo0_18;
#line 1676 "lco.m"
          }
#line 1631 "lco.m"
      }
#line 1621 "lco.m"
  }
#line 1614 "lco.m"
}

#line 1607 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_2(
#line 1607 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1607 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1607 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 1607 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_3,
#line 1607 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_4)
#line 1607 "lco.m"
{
#line 1607 "lco.m"
  {
#line 1607 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 1607 "lco.m"
    MR_Word transform_hlds__lco__conv1_Goal_11;
#line 1607 "lco.m"
    MR_Word transform_hlds__lco__conv0_STATE_VARIABLE_ProcInfo_32;

#line 1607 "lco.m"
    {
#line 1607 "lco.m"
      transform_hlds__lco__make_store_goal_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), &transform_hlds__lco__conv1_Goal_11, ((MR_Word) transform_hlds__lco__wrapper_arg_3), &transform_hlds__lco__conv0_STATE_VARIABLE_ProcInfo_32);
    }
#line 1607 "lco.m"
    *transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv1_Goal_11));
#line 1607 "lco.m"
    *transform_hlds__lco__wrapper_arg_4 = ((MR_Box) (transform_hlds__lco__conv0_STATE_VARIABLE_ProcInfo_32));
#line 1607 "lco.m"
  }
#line 1607 "lco.m"
}

#line 1599 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_1(
#line 1599 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1599 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1)
#line 1599 "lco.m"
{
#line 1599 "lco.m"
  {
#line 1599 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1599 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

#line 1599 "lco.m"
    {
#line 1599 "lco.m"
      transform_hlds__lco__succeeded = transform_hlds__lco__is_grounding_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
#line 1599 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1599 "lco.m"
  }
#line 1599 "lco.m"
}

#line 1591 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(
#line 1591 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_10,
#line 1591 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_11,
#line 1591 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_12,
#line 1591 "lco.m"
  MR_Word transform_hlds__lco__GoalInfo_13,
#line 1591 "lco.m"
  MR_Word transform_hlds__lco__GoalExpr0_14,
#line 1591 "lco.m"
  MR_Word * transform_hlds__lco__GoalExpr_15,
#line 1591 "lco.m"
  MR_Word * transform_hlds__lco__Changed_16,
#line 1591 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_23,
#line 1591 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_24)
#line 1591 "lco.m"
{
#line 1597 "lco.m"
  {
#line 1597 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1597 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_33_33;
#line 1597 "lco.m"
    MR_Word transform_hlds__lco__InstMap1_18;
#line 1597 "lco.m"
    MR_Word transform_hlds__lco__GroundingVarToAddr_19;
#line 1597 "lco.m"
    MR_Word transform_hlds__lco__V_25_25;
#line 1597 "lco.m"
    MR_Word transform_hlds__lco__V_26_26;

#line 1598 "lco.m"
    {
#line 1598 "lco.m"
      transform_hlds__lco__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1598 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_25_25, 0) = ((MR_Box) (transform_hlds__lco__GoalExpr0_14));
#line 1598 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_25_25, 1) = ((MR_Box) (transform_hlds__lco__GoalInfo_13));
#line 1598 "lco.m"
    }
#line 1598 "lco.m"
    {
#line 1598 "lco.m"
      hlds__goal_util__update_instmap_3_p_0(transform_hlds__lco__V_25_25, transform_hlds__lco__InstMap0_12, &transform_hlds__lco__InstMap1_18);
    }
#line 1599 "lco.m"
    {
#line 1599 "lco.m"
      transform_hlds__lco__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1599 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_26_26, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_6[1]));
#line 1599 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_26_26, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_1));
#line 1599 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1599 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_26_26, 3) = ((MR_Box) (transform_hlds__lco__ModuleInfo_10));
#line 1599 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_26_26, 4) = ((MR_Box) (transform_hlds__lco__InstMap0_12));
#line 1599 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_26_26, 5) = ((MR_Box) (transform_hlds__lco__InstMap1_18));
#line 1599 "lco.m"
    }
#line 6947 "transform_hlds.lco.c"
    transform_hlds__lco__TypeInfo_33_33 = (MR_Word) &transform_hlds__lco_scalar_common_2[6];
#line 1599 "lco.m"
    {
#line 1599 "lco.m"
      mercury__list__filter_3_p_0(transform_hlds__lco__TypeInfo_33_33, transform_hlds__lco__V_26_26, transform_hlds__lco__VarToAddr_11, &transform_hlds__lco__GroundingVarToAddr_19);
    }
#line 1605 "lco.m"
    if ((transform_hlds__lco__GroundingVarToAddr_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1602 "lco.m"
      {
#line 1603 "lco.m"
        *transform_hlds__lco__GoalExpr_15 = transform_hlds__lco__GoalExpr0_14;
#line 1604 "lco.m"
        *transform_hlds__lco__Changed_16 = (MR_Integer) 0;
#line 1602 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_24 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_23;
#line 1602 "lco.m"
      }
#line 1605 "lco.m"
    else
#line 1606 "lco.m"
      {
#line 1606 "lco.m"
        MR_Word transform_hlds__lco__StoreGoals_22;
#line 1606 "lco.m"
        MR_Word transform_hlds__lco__V_27_27;
#line 1606 "lco.m"
        MR_Word transform_hlds__lco__V_30_30;
#line 1607 "lco.m"
        MR_Box transform_hlds__lco__conv2_STATE_VARIABLE_ProcInfo_24;

#line 1607 "lco.m"
        {
#line 1607 "lco.m"
          transform_hlds__lco__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1607 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_27_27, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_10[0]));
#line 1607 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_27_27, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_2));
#line 1607 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1607 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_27_27, 3) = ((MR_Box) (transform_hlds__lco__ModuleInfo_10));
#line 1607 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_27_27, 4) = ((MR_Box) (transform_hlds__lco__InstMap1_18));
#line 1607 "lco.m"
        }
#line 1607 "lco.m"
        {
#line 1607 "lco.m"
          mercury__list__map_foldl_5_p_0(transform_hlds__lco__TypeInfo_33_33, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__lco__V_27_27, transform_hlds__lco__GroundingVarToAddr_19, &transform_hlds__lco__StoreGoals_22, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_23)), &transform_hlds__lco__conv2_STATE_VARIABLE_ProcInfo_24);
        }
#line 1607 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_24 = ((MR_Word) transform_hlds__lco__conv2_STATE_VARIABLE_ProcInfo_24);
#line 1610 "lco.m"
        {
#line 1610 "lco.m"
          transform_hlds__lco__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1610 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_30_30, 0) = ((MR_Box) (transform_hlds__lco__V_25_25));
#line 1610 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_30_30, 1) = ((MR_Box) (transform_hlds__lco__StoreGoals_22));
#line 1610 "lco.m"
        }
#line 1609 "lco.m"
        {
#line 1609 "lco.m"
          MR_Word base;
#line 1609 "lco.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1609 "lco.m"
          *transform_hlds__lco__GoalExpr_15 = base;
#line 1609 "lco.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1609 "lco.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1609 "lco.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__lco__V_30_30));
#line 1609 "lco.m"
        }
#line 1611 "lco.m"
        *transform_hlds__lco__Changed_16 = (MR_Integer) 1;
#line 1606 "lco.m"
      }
#line 1597 "lco.m"
  }
#line 1591 "lco.m"
}

#line 1580 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_case_9_p_0(
#line 1580 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_10,
#line 1580 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_11,
#line 1580 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_12,
#line 1580 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_13,
#line 1580 "lco.m"
  MR_Word transform_hlds__lco__Case0_14,
#line 1580 "lco.m"
  MR_Word * transform_hlds__lco__Case_15,
#line 1580 "lco.m"
  MR_Word * transform_hlds__lco__Changed_16,
#line 1580 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22,
#line 1580 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_23)
#line 1580 "lco.m"
{
#line 1585 "lco.m"
  {
#line 1585 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1585 "lco.m"
    MR_Word transform_hlds__lco__MainConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Case0_14, (MR_Integer) 0)));
#line 1585 "lco.m"
    MR_Word transform_hlds__lco__OtherConsIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Case0_14, (MR_Integer) 1)));
#line 1585 "lco.m"
    MR_Word transform_hlds__lco__Goal0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Case0_14, (MR_Integer) 2)));
#line 1585 "lco.m"
    MR_Word transform_hlds__lco__Goal_21;

#line 1587 "lco.m"
    {
#line 1587 "lco.m"
      transform_hlds__lco__lco_transform_variant_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VariantMap_11, transform_hlds__lco__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__Goal0_20, &transform_hlds__lco__Goal_21, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22, transform_hlds__lco__STATE_VARIABLE_ProcInfo_23);
    }
#line 1589 "lco.m"
    {
#line 1589 "lco.m"
      MR_Word base;
#line 1589 "lco.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1589 "lco.m"
      *transform_hlds__lco__Case_15 = base;
#line 1589 "lco.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__MainConsId_18));
#line 1589 "lco.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__OtherConsIds_19));
#line 1589 "lco.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__Goal_21));
#line 1589 "lco.m"
    }
#line 1585 "lco.m"
  }
#line 1580 "lco.m"
}

#line 1561 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_conj_9_p_0(
#line 1561 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_1,
#line 1561 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_2,
#line 1561 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_3,
#line 1561 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_4,
#line 1561 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 1561 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6,
#line 1561 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__7_7,
#line 1561 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_8,
#line 1561 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_9)
#line 1561 "lco.m"
{
#line 1565 "lco.m"
  {
#line 1565 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1565 "lco.m"
    if ((transform_hlds__lco__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1565 "lco.m"
      {
#line 1565 "lco.m"
        *transform_hlds__lco__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1565 "lco.m"
        *transform_hlds__lco__HeadVar__7_7 = (MR_Integer) 0;
#line 1565 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_9 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_8;
#line 1565 "lco.m"
      }
#line 1565 "lco.m"
    else
#line 1567 "lco.m"
      {
#line 1567 "lco.m"
        MR_Word transform_hlds__lco__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__5_5, (MR_Integer) 0)));
#line 1567 "lco.m"
        MR_Word transform_hlds__lco__Goals0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__5_5, (MR_Integer) 1)));
#line 1567 "lco.m"
        MR_Word transform_hlds__lco__Goal_26;
#line 1567 "lco.m"
        MR_Word transform_hlds__lco__HeadChanged_27;
#line 1567 "lco.m"
        MR_Word transform_hlds__lco__InstMap1_28;
#line 1567 "lco.m"
        MR_Word transform_hlds__lco__Goals_29;
#line 1567 "lco.m"
        MR_Word transform_hlds__lco__TailChanged_30;
#line 1567 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_35_35;
#line 1576 "lco.m"
        MR_Word transform_hlds__lco__SubConj_31;
#line 1574 "lco.m"
        MR_Word transform_hlds__lco__V_37_37;
#line 1574 "lco.m"
        MR_Word transform_hlds__lco__V_38_38;
#line 1574 "lco.m"
        MR_Word transform_hlds__lco__V_32_32;

#line 1568 "lco.m"
        {
#line 1568 "lco.m"
          transform_hlds__lco__lco_transform_variant_goal_9_p_0(transform_hlds__lco__ModuleInfo_1, transform_hlds__lco__VariantMap_2, transform_hlds__lco__VarToAddr_3, transform_hlds__lco__InstMap0_4, transform_hlds__lco__Goal0_21, &transform_hlds__lco__Goal_26, &transform_hlds__lco__HeadChanged_27, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_8, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_35_35);
        }
#line 1570 "lco.m"
        {
#line 1570 "lco.m"
          hlds__goal_util__update_instmap_3_p_0(transform_hlds__lco__Goal0_21, transform_hlds__lco__InstMap0_4, &transform_hlds__lco__InstMap1_28);
        }
#line 1571 "lco.m"
        {
#line 1571 "lco.m"
          transform_hlds__lco__lco_transform_variant_conj_9_p_0(transform_hlds__lco__ModuleInfo_1, transform_hlds__lco__VariantMap_2, transform_hlds__lco__VarToAddr_3, transform_hlds__lco__InstMap1_28, transform_hlds__lco__Goals0_22, &transform_hlds__lco__Goals_29, &transform_hlds__lco__TailChanged_30, transform_hlds__lco__STATE_VARIABLE_ProcInfo_35_35, transform_hlds__lco__STATE_VARIABLE_ProcInfo_9);
        }
#line 1573 "lco.m"
        {
#line 1573 "lco.m"
          *transform_hlds__lco__HeadVar__7_7 = mercury__bool__or_2_f_0(transform_hlds__lco__HeadChanged_27, transform_hlds__lco__TailChanged_30);
        }
#line 1574 "lco.m"
        transform_hlds__lco__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_26, (MR_Integer) 0)));
#line 1574 "lco.m"
        transform_hlds__lco__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_26, (MR_Integer) 1)));
#line 1574 "lco.m"
        transform_hlds__lco__succeeded = ((((MR_tag((MR_Word) transform_hlds__lco__V_37_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__V_37_37, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1574 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1574 "lco.m"
          {
#line 1574 "lco.m"
            transform_hlds__lco__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__V_37_37, (MR_Integer) 1)));
#line 1574 "lco.m"
            transform_hlds__lco__SubConj_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__V_37_37, (MR_Integer) 2)));
#line 1574 "lco.m"
            transform_hlds__lco__succeeded = (transform_hlds__lco__V_38_38 == (MR_Integer) 0);
#line 1574 "lco.m"
          }
#line 1576 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1575 "lco.m"
          {
#line 1575 "lco.m"
            {
#line 1575 "lco.m"
              *transform_hlds__lco__HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__lco__SubConj_31, transform_hlds__lco__Goals_29);
            }
#line 1575 "lco.m"
          }
#line 1576 "lco.m"
        else
#line 1577 "lco.m"
          {
#line 1577 "lco.m"
            MR_Word base;
#line 1577 "lco.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1577 "lco.m"
            *transform_hlds__lco__HeadVar__6_6 = base;
#line 1577 "lco.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Goal_26));
#line 1577 "lco.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__Goals_29));
#line 1577 "lco.m"
          }
#line 1567 "lco.m"
      }
#line 1565 "lco.m"
  }
#line 1561 "lco.m"
}

#line 1476 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_6(
#line 1476 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1476 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1476 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 1476 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 1476 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 1476 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5)
#line 1476 "lco.m"
{
#line 1476 "lco.m"
  {
#line 1476 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 1476 "lco.m"
    MR_Word transform_hlds__lco__conv7_Case_15;
#line 1476 "lco.m"
    MR_Word transform_hlds__lco__conv6_Changed_16;
#line 1476 "lco.m"
    MR_Word transform_hlds__lco__conv5_STATE_VARIABLE_ProcInfo_23;

#line 1476 "lco.m"
    {
#line 1476 "lco.m"
      transform_hlds__lco__lco_transform_variant_case_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), &transform_hlds__lco__conv7_Case_15, &transform_hlds__lco__conv6_Changed_16, ((MR_Word) transform_hlds__lco__wrapper_arg_4), &transform_hlds__lco__conv5_STATE_VARIABLE_ProcInfo_23);
    }
#line 1476 "lco.m"
    *transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv7_Case_15));
#line 1476 "lco.m"
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv6_Changed_16));
#line 1476 "lco.m"
    *transform_hlds__lco__wrapper_arg_5 = ((MR_Box) (transform_hlds__lco__conv5_STATE_VARIABLE_ProcInfo_23));
#line 1476 "lco.m"
  }
#line 1476 "lco.m"
}

#line 1467 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_1(
#line 1467 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1467 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1467 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 1467 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 1467 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 1467 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5)
#line 1467 "lco.m"
{
#line 1467 "lco.m"
  {
#line 1467 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 1467 "lco.m"
    MR_Word transform_hlds__lco__conv2_Goal_15;
#line 1467 "lco.m"
    MR_Word transform_hlds__lco__conv1_Changed_16;
#line 1467 "lco.m"
    MR_Word transform_hlds__lco__conv0_STATE_VARIABLE_ProcInfo_74;

#line 1467 "lco.m"
    {
#line 1467 "lco.m"
      transform_hlds__lco__lco_transform_variant_goal_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), &transform_hlds__lco__conv2_Goal_15, &transform_hlds__lco__conv1_Changed_16, ((MR_Word) transform_hlds__lco__wrapper_arg_4), &transform_hlds__lco__conv0_STATE_VARIABLE_ProcInfo_74);
    }
#line 1467 "lco.m"
    *transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv2_Goal_15));
#line 1467 "lco.m"
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv1_Changed_16));
#line 1467 "lco.m"
    *transform_hlds__lco__wrapper_arg_5 = ((MR_Box) (transform_hlds__lco__conv0_STATE_VARIABLE_ProcInfo_74));
#line 1467 "lco.m"
  }
#line 1467 "lco.m"
}

#line 1501 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_2(
#line 1501 "lco.m"
  void * transform_hlds__lco__env_ptr_arg)
#line 1501 "lco.m"
{
#line 1501 "lco.m"
  {
#line 1501 "lco.m"
    struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s * transform_hlds__lco__env_ptr = (struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s *) transform_hlds__lco__env_ptr_arg;

#line 1501 "lco.m"
    MR_builtin_longjmp((transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__commit_0, 1);
#line 1501 "lco.m"
  }
#line 1501 "lco.m"
}

#line 1501 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_4(
#line 1501 "lco.m"
  void * transform_hlds__lco__env_ptr_arg)
#line 1501 "lco.m"
{
#line 1501 "lco.m"
  {
#line 1501 "lco.m"
    struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s * transform_hlds__lco__env_ptr = (struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s *) transform_hlds__lco__env_ptr_arg;

#line 1501 "lco.m"
    (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVarPair_44 = ((MR_Word) (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__conv4_FGTVarPair_44);
#line 1501 "lco.m"
    {
#line 1501 "lco.m"
      transform_hlds__lco__lco_transform_variant_goal_9_p_0_3(transform_hlds__lco__env_ptr);
    }
#line 1501 "lco.m"
  }
#line 1501 "lco.m"
}

#line 1501 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_3(
#line 1501 "lco.m"
  void * transform_hlds__lco__env_ptr_arg)
#line 1501 "lco.m"
{
#line 1501 "lco.m"
  {
#line 1501 "lco.m"
    struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s * transform_hlds__lco__env_ptr = (struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s *) transform_hlds__lco__env_ptr_arg;

#line 1501 "lco.m"
    {
#line 1502 "lco.m"
      MR_Word transform_hlds__lco__V_45_45;

#line 1502 "lco.m"
      (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVarPair_44, (MR_Integer) 0)));
#line 1502 "lco.m"
      transform_hlds__lco__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVarPair_44, (MR_Integer) 1)));
#line 7392 "transform_hlds.lco.c"
      (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__TypeInfo_115_115 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
#line 1502 "lco.m"
      {
#line 1502 "lco.m"
        (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__TypeInfo_115_115, ((MR_Box) ((transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVar_42)), ((MR_Box) ((transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__V_114_114)));
      }
#line 1502 "lco.m"
      if ((transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded)
#line 1502 "lco.m"
        {
#line 1502 "lco.m"
          transform_hlds__lco__lco_transform_variant_goal_9_p_0_2(transform_hlds__lco__env_ptr);
        }
#line 1501 "lco.m"
    }
#line 1501 "lco.m"
  }
#line 1501 "lco.m"
}

#line 1501 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_5(
#line 1501 "lco.m"
  void * transform_hlds__lco__env_ptr_arg)
#line 1501 "lco.m"
{
#line 1501 "lco.m"
  {
#line 1501 "lco.m"
    struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s * transform_hlds__lco__env_ptr = (struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s *) transform_hlds__lco__env_ptr_arg;

#line 1501 "lco.m"
    if (MR_builtin_setjmp((transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__commit_0) == 0)
#line 1501 "lco.m"
      {
#line 1501 "lco.m"
        {
#line 1501 "lco.m"
          {
#line 1501 "lco.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__lco_scalar_common_2[6], &(transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__conv4_FGTVarPair_44, (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__lco_transform_variant_goal_9_p_0_4, transform_hlds__lco__env_ptr);
          }
#line 1501 "lco.m"
        }
#line 1501 "lco.m"
        (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = MR_FALSE;
#line 1501 "lco.m"
      }
#line 1501 "lco.m"
    else
#line 1501 "lco.m"
      (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = MR_TRUE;
#line 1501 "lco.m"
  }
#line 1501 "lco.m"
}

#line 1445 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0(
#line 1445 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_10,
#line 1445 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_11,
#line 1445 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_12,
#line 1445 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_13,
#line 1445 "lco.m"
  MR_Word transform_hlds__lco__Goal0_14,
#line 1445 "lco.m"
  MR_Word * transform_hlds__lco__Goal_15,
#line 1445 "lco.m"
  MR_Word * transform_hlds__lco__Changed_16,
#line 1445 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73,
#line 1445 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_74)
#line 1445 "lco.m"
{
#line 1445 "lco.m"
  {
#line 1445 "lco.m"
    struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s transform_hlds__lco__env;

#line 1445 "lco.m"
    (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12 = transform_hlds__lco__VarToAddr_12;
#line 1450 "lco.m"
    {
#line 1450 "lco.m"
      MR_Word transform_hlds__lco__GoalExpr0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal0_14, (MR_Integer) 0)));
#line 1450 "lco.m"
      MR_Word transform_hlds__lco__GoalInfo0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal0_14, (MR_Integer) 1)));
#line 1450 "lco.m"
      MR_Word transform_hlds__lco__GoalExpr_23;
#line 1450 "lco.m"
      MR_Word transform_hlds__lco__GoalInfo_24;

#line 1464 "lco.m"
#line 1464 "lco.m"
      switch (MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_18)) {
#line 1464 "lco.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1464 "lco.m"
        case (MR_Integer) 0:
#line 1521 "lco.m"
          {
#line 1522 "lco.m"
            transform_hlds__lco__GoalExpr_23 = transform_hlds__lco__GoalExpr0_18;
#line 1523 "lco.m"
            transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1524 "lco.m"
            *transform_hlds__lco__Changed_16 = (MR_Integer) 0;
#line 1521 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_ProcInfo_74 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73;
#line 1521 "lco.m"
          }
#line 1464 "lco.m"
          break;
#line 1464 "lco.m"
        case (MR_Integer) 1:
#line 1536 "lco.m"
          {
#line 1537 "lco.m"
            {
#line 1537 "lco.m"
              transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__GoalInfo0_19, transform_hlds__lco__GoalExpr0_18, &transform_hlds__lco__GoalExpr_23, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
            }
#line 1539 "lco.m"
            transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1536 "lco.m"
          }
#line 1464 "lco.m"
          break;
#line 1464 "lco.m"
        case (MR_Integer) 2:
#line 1532 "lco.m"
          {
#line 1532 "lco.m"
            transform_hlds__lco__lco_transform_variant_plain_call_11_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VariantMap_11, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__GoalExpr0_18, &transform_hlds__lco__GoalExpr_23, transform_hlds__lco__GoalInfo0_19, &transform_hlds__lco__GoalInfo_24, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
          }
#line 1464 "lco.m"
          break;
#line 1464 "lco.m"
        case (MR_Integer) 3:
#line 1464 "lco.m"
#line 1464 "lco.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 0)))) {
#line 1464 "lco.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1464 "lco.m"
            case (MR_Integer) 0:
#line 1526 "lco.m"
              {
#line 1527 "lco.m"
                {
#line 1527 "lco.m"
                  transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__GoalInfo0_19, transform_hlds__lco__GoalExpr0_18, &transform_hlds__lco__GoalExpr_23, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
                }
#line 1529 "lco.m"
                transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1526 "lco.m"
              }
#line 1464 "lco.m"
              break;
#line 1464 "lco.m"
            case (MR_Integer) 1:
#line 1541 "lco.m"
              {
#line 1542 "lco.m"
                {
#line 1542 "lco.m"
                  transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__GoalInfo0_19, transform_hlds__lco__GoalExpr0_18, &transform_hlds__lco__GoalExpr_23, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
                }
#line 1544 "lco.m"
                transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1541 "lco.m"
              }
#line 1464 "lco.m"
              break;
#line 1464 "lco.m"
            case (MR_Integer) 2:
#line 1453 "lco.m"
              {
#line 1453 "lco.m"
                MR_Word transform_hlds__lco__ConjType_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 1)));
#line 1453 "lco.m"
                MR_Word transform_hlds__lco__Goals0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 2)));

#line 1460 "lco.m"
#line 1460 "lco.m"
                switch (transform_hlds__lco__ConjType_20) {
#line 1460 "lco.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1460 "lco.m"
                  case (MR_Integer) 1:
#line 1461 "lco.m"
                    {
#line 1462 "lco.m"
                      {
#line 1462 "lco.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.lco_transform_variant_goal\'/9", (MR_String) "parallel_conj");
#line 1462 "lco.m"
                        return;
                      }
#line 1461 "lco.m"
                    }
#line 1460 "lco.m"
                    break;
#line 1460 "lco.m"
                  case (MR_Integer) 0:
#line 1455 "lco.m"
                    {
#line 1455 "lco.m"
                      MR_Word transform_hlds__lco__Goals_22;

#line 1456 "lco.m"
                      {
#line 1456 "lco.m"
                        transform_hlds__lco__lco_transform_variant_conj_9_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VariantMap_11, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__Goals0_21, &transform_hlds__lco__Goals_22, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
                      }
#line 1458 "lco.m"
                      {
#line 1458 "lco.m"
                        transform_hlds__lco__GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1458 "lco.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1458 "lco.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 1) = ((MR_Box) (transform_hlds__lco__ConjType_20));
#line 1458 "lco.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 2) = ((MR_Box) (transform_hlds__lco__Goals_22));
#line 1458 "lco.m"
                      }
#line 1459 "lco.m"
                      transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1455 "lco.m"
                    }
#line 1460 "lco.m"
                    break;
#line 1460 "lco.m"
                }
#line 1453 "lco.m"
              }
#line 1464 "lco.m"
              break;
#line 1464 "lco.m"
            case (MR_Integer) 3:
#line 1465 "lco.m"
              {
#line 1465 "lco.m"
                MR_Word transform_hlds__lco__TypeCtorInfo_102_102;
#line 1465 "lco.m"
                MR_Word transform_hlds__lco__DisjsChanged_25;
#line 1465 "lco.m"
                MR_Word transform_hlds__lco__V_88_88;
#line 1465 "lco.m"
                MR_Word transform_hlds__lco__Goals0_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 1)));
#line 1465 "lco.m"
                MR_Word transform_hlds__lco__Goals_96;
#line 1466 "lco.m"
                MR_Box transform_hlds__lco__conv3_STATE_VARIABLE_ProcInfo_74;

#line 1467 "lco.m"
                {
#line 1467 "lco.m"
                  transform_hlds__lco__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1467 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_88_88, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_8[1]));
#line 1467 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_88_88, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_goal_9_p_0_1));
#line 1467 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_88_88, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1467 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_88_88, 3) = ((MR_Box) (transform_hlds__lco__ModuleInfo_10));
#line 1467 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_88_88, 4) = ((MR_Box) (transform_hlds__lco__VariantMap_11));
#line 1467 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_88_88, 5) = ((MR_Box) ((transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12));
#line 1467 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_88_88, 6) = ((MR_Box) (transform_hlds__lco__InstMap0_13));
#line 1467 "lco.m"
                }
#line 7676 "transform_hlds.lco.c"
                transform_hlds__lco__TypeCtorInfo_102_102 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1466 "lco.m"
                {
#line 1466 "lco.m"
                  mercury__list__map2_foldl_6_p_0(transform_hlds__lco__TypeCtorInfo_102_102, transform_hlds__lco__TypeCtorInfo_102_102, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__lco__V_88_88, transform_hlds__lco__Goals0_95, &transform_hlds__lco__Goals_96, &transform_hlds__lco__DisjsChanged_25, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73)), &transform_hlds__lco__conv3_STATE_VARIABLE_ProcInfo_74);
                }
#line 1466 "lco.m"
                *transform_hlds__lco__STATE_VARIABLE_ProcInfo_74 = ((MR_Word) transform_hlds__lco__conv3_STATE_VARIABLE_ProcInfo_74);
#line 1470 "lco.m"
                {
#line 1470 "lco.m"
                  *transform_hlds__lco__Changed_16 = mercury__bool__or_list_1_f_0(transform_hlds__lco__DisjsChanged_25);
                }
#line 1471 "lco.m"
                {
#line 1471 "lco.m"
                  transform_hlds__lco__GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1471 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1471 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 1) = ((MR_Box) (transform_hlds__lco__Goals_96));
#line 1471 "lco.m"
                }
#line 1472 "lco.m"
                transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1465 "lco.m"
              }
#line 1464 "lco.m"
              break;
#line 1464 "lco.m"
            case (MR_Integer) 4:
#line 1474 "lco.m"
              {
#line 1474 "lco.m"
                MR_Word transform_hlds__lco__TypeCtorInfo_110_110;
#line 1474 "lco.m"
                MR_Word transform_hlds__lco__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 1)));
#line 1474 "lco.m"
                MR_Word transform_hlds__lco__CanFail_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 2)));
#line 1474 "lco.m"
                MR_Word transform_hlds__lco__Cases0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 3)));
#line 1474 "lco.m"
                MR_Word transform_hlds__lco__Cases_29;
#line 1474 "lco.m"
                MR_Word transform_hlds__lco__CasesChanged_30;
#line 1474 "lco.m"
                MR_Word transform_hlds__lco__V_86_86;
#line 1475 "lco.m"
                MR_Box transform_hlds__lco__conv8_STATE_VARIABLE_ProcInfo_74;

#line 1476 "lco.m"
                {
#line 1476 "lco.m"
                  transform_hlds__lco__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1476 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_86_86, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_8[2]));
#line 1476 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_86_86, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_goal_9_p_0_6));
#line 1476 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_86_86, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1476 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_86_86, 3) = ((MR_Box) (transform_hlds__lco__ModuleInfo_10));
#line 1476 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_86_86, 4) = ((MR_Box) (transform_hlds__lco__VariantMap_11));
#line 1476 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_86_86, 5) = ((MR_Box) ((transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12));
#line 1476 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_86_86, 6) = ((MR_Box) (transform_hlds__lco__InstMap0_13));
#line 1476 "lco.m"
                }
#line 7747 "transform_hlds.lco.c"
                transform_hlds__lco__TypeCtorInfo_110_110 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 1475 "lco.m"
                {
#line 1475 "lco.m"
                  mercury__list__map2_foldl_6_p_0(transform_hlds__lco__TypeCtorInfo_110_110, transform_hlds__lco__TypeCtorInfo_110_110, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__lco__V_86_86, transform_hlds__lco__Cases0_28, &transform_hlds__lco__Cases_29, &transform_hlds__lco__CasesChanged_30, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73)), &transform_hlds__lco__conv8_STATE_VARIABLE_ProcInfo_74);
                }
#line 1475 "lco.m"
                *transform_hlds__lco__STATE_VARIABLE_ProcInfo_74 = ((MR_Word) transform_hlds__lco__conv8_STATE_VARIABLE_ProcInfo_74);
#line 1479 "lco.m"
                {
#line 1479 "lco.m"
                  *transform_hlds__lco__Changed_16 = mercury__bool__or_list_1_f_0(transform_hlds__lco__CasesChanged_30);
                }
#line 1480 "lco.m"
                {
#line 1480 "lco.m"
                  transform_hlds__lco__GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1480 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1480 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 1) = ((MR_Box) (transform_hlds__lco__Var_26));
#line 1480 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 2) = ((MR_Box) (transform_hlds__lco__CanFail_27));
#line 1480 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 3) = ((MR_Box) (transform_hlds__lco__Cases_29));
#line 1480 "lco.m"
                }
#line 1481 "lco.m"
                transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1474 "lco.m"
              }
#line 1464 "lco.m"
              break;
#line 1464 "lco.m"
            case (MR_Integer) 5:
#line 1493 "lco.m"
              {
#line 1493 "lco.m"
                MR_Word transform_hlds__lco__Reason_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 1)));
#line 1493 "lco.m"
                MR_Word transform_hlds__lco__SubGoal0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 2)));
#line 1495 "lco.m"
                MR_Word transform_hlds__lco__FGT_43;

#line 1495 "lco.m"
                (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = ((((MR_tag((MR_Word) transform_hlds__lco__Reason_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_40, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1495 "lco.m"
                if ((transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded)
#line 1495 "lco.m"
                  {
#line 1495 "lco.m"
                    (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVar_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_40, (MR_Integer) 1)));
#line 1495 "lco.m"
                    transform_hlds__lco__FGT_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_40, (MR_Integer) 2)));
#line 1497 "lco.m"
#line 1497 "lco.m"
                    switch (transform_hlds__lco__FGT_43) {
#line 1497 "lco.m"
                      default:
#line 1497 "lco.m"
                        (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = MR_FALSE;
#line 1497 "lco.m"
                        break;
#line 1497 "lco.m"
                      case (MR_Integer) 1:
#line 1496 "lco.m"
                        (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = MR_TRUE;
#line 1497 "lco.m"
                        break;
#line 1497 "lco.m"
                      case (MR_Integer) 2:
#line 1497 "lco.m"
                        (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = MR_TRUE;
#line 1497 "lco.m"
                        break;
#line 1497 "lco.m"
                    }
#line 1495 "lco.m"
                  }
#line 1514 "lco.m"
                if ((transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded)
#line 1510 "lco.m"
                  {
#line 1501 "lco.m"
                    {
#line 1501 "lco.m"
                      transform_hlds__lco__lco_transform_variant_goal_9_p_0_5(&transform_hlds__lco__env);
                    }
#line 1510 "lco.m"
                    if ((transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded)
#line 1507 "lco.m"
                      {
#line 1507 "lco.m"
                        transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__GoalInfo0_19, transform_hlds__lco__GoalExpr0_18, &transform_hlds__lco__GoalExpr_23, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
                      }
#line 1510 "lco.m"
                    else
#line 1511 "lco.m"
                      {
#line 1511 "lco.m"
                        transform_hlds__lco__GoalExpr_23 = transform_hlds__lco__GoalExpr0_18;
#line 1512 "lco.m"
                        *transform_hlds__lco__Changed_16 = (MR_Integer) 0;
#line 1511 "lco.m"
                        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_74 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73;
#line 1511 "lco.m"
                      }
#line 1510 "lco.m"
                  }
#line 1514 "lco.m"
                else
#line 1516 "lco.m"
                  {
#line 1516 "lco.m"
                    MR_Word transform_hlds__lco__SubGoal_46;

#line 1515 "lco.m"
                    {
#line 1515 "lco.m"
                      transform_hlds__lco__lco_transform_variant_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VariantMap_11, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__SubGoal0_41, &transform_hlds__lco__SubGoal_46, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
                    }
#line 1517 "lco.m"
                    {
#line 1517 "lco.m"
                      transform_hlds__lco__GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1517 "lco.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1517 "lco.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 1) = ((MR_Box) (transform_hlds__lco__Reason_40));
#line 1517 "lco.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 2) = ((MR_Box) (transform_hlds__lco__SubGoal_46));
#line 1517 "lco.m"
                    }
#line 1516 "lco.m"
                  }
#line 1519 "lco.m"
                transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1493 "lco.m"
              }
#line 1464 "lco.m"
              break;
#line 1464 "lco.m"
            case (MR_Integer) 6:
#line 1483 "lco.m"
              {
#line 1483 "lco.m"
                MR_Word transform_hlds__lco__Vars_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 1)));
#line 1483 "lco.m"
                MR_Word transform_hlds__lco__Cond_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 2)));
#line 1483 "lco.m"
                MR_Word transform_hlds__lco__Then0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 3)));
#line 1483 "lco.m"
                MR_Word transform_hlds__lco__Else0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 4)));
#line 1483 "lco.m"
                MR_Word transform_hlds__lco__InstMap1_35;
#line 1483 "lco.m"
                MR_Word transform_hlds__lco__Then_36;
#line 1483 "lco.m"
                MR_Word transform_hlds__lco__ThenChanged_37;
#line 1483 "lco.m"
                MR_Word transform_hlds__lco__Else_38;
#line 1483 "lco.m"
                MR_Word transform_hlds__lco__ElseChanged_39;
#line 1483 "lco.m"
                MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_84_84;

#line 1484 "lco.m"
                {
#line 1484 "lco.m"
                  hlds__goal_util__update_instmap_3_p_0(transform_hlds__lco__Cond_32, transform_hlds__lco__InstMap0_13, &transform_hlds__lco__InstMap1_35);
                }
#line 1485 "lco.m"
                {
#line 1485 "lco.m"
                  transform_hlds__lco__lco_transform_variant_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VariantMap_11, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap1_35, transform_hlds__lco__Then0_33, &transform_hlds__lco__Then_36, &transform_hlds__lco__ThenChanged_37, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_84_84);
                }
#line 1487 "lco.m"
                {
#line 1487 "lco.m"
                  transform_hlds__lco__lco_transform_variant_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VariantMap_11, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__Else0_34, &transform_hlds__lco__Else_38, &transform_hlds__lco__ElseChanged_39, transform_hlds__lco__STATE_VARIABLE_ProcInfo_84_84, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
                }
#line 1489 "lco.m"
                {
#line 1489 "lco.m"
                  *transform_hlds__lco__Changed_16 = mercury__bool__or_2_f_0(transform_hlds__lco__ThenChanged_37, transform_hlds__lco__ElseChanged_39);
                }
#line 1490 "lco.m"
                {
#line 1490 "lco.m"
                  transform_hlds__lco__GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1490 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1490 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 1) = ((MR_Box) (transform_hlds__lco__Vars_31));
#line 1490 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 2) = ((MR_Box) (transform_hlds__lco__Cond_32));
#line 1490 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 3) = ((MR_Box) (transform_hlds__lco__Then_36));
#line 1490 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 4) = ((MR_Box) (transform_hlds__lco__Else_38));
#line 1490 "lco.m"
                }
#line 1491 "lco.m"
                transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1483 "lco.m"
              }
#line 1464 "lco.m"
              break;
#line 1464 "lco.m"
            case (MR_Integer) 7:
#line 1546 "lco.m"
              {
#line 1548 "lco.m"
                {
#line 1548 "lco.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.lco_transform_variant_goal\'/9", (MR_String) "shorthand");
#line 1548 "lco.m"
                  return;
                }
#line 1546 "lco.m"
              }
#line 1464 "lco.m"
              break;
#line 1464 "lco.m"
          }
#line 1464 "lco.m"
          break;
#line 1464 "lco.m"
      }
#line 1556 "lco.m"
#line 1556 "lco.m"
      switch (*transform_hlds__lco__Changed_16) {
#line 1556 "lco.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1556 "lco.m"
        case (MR_Integer) 0:
#line 1558 "lco.m"
          *transform_hlds__lco__Goal_15 = transform_hlds__lco__Goal0_14;
#line 1556 "lco.m"
          break;
#line 1556 "lco.m"
        case (MR_Integer) 1:
#line 1551 "lco.m"
          {
#line 1551 "lco.m"
            MR_Word transform_hlds__lco__GoalInfoImpure_72;

#line 1554 "lco.m"
            {
#line 1554 "lco.m"
              hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, transform_hlds__lco__GoalInfo_24, &transform_hlds__lco__GoalInfoImpure_72);
            }
#line 1555 "lco.m"
            {
#line 1555 "lco.m"
              MR_Word base;
#line 1555 "lco.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1555 "lco.m"
              *transform_hlds__lco__Goal_15 = base;
#line 1555 "lco.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__GoalExpr_23));
#line 1555 "lco.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__GoalInfoImpure_72));
#line 1555 "lco.m"
            }
#line 1551 "lco.m"
          }
#line 1556 "lco.m"
          break;
#line 1556 "lco.m"
      }
#line 1450 "lco.m"
    }
#line 1445 "lco.m"
  }
#line 1445 "lco.m"
}

#line 1384 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__make_addr_vars_12_p_0_1(
#line 1384 "lco.m"
  MR_Box transform_hlds__lco__closure_arg)
#line 1384 "lco.m"
{
#line 1384 "lco.m"
  {
#line 1384 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1384 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

#line 1384 "lco.m"
    {
#line 1384 "lco.m"
      transform_hlds__lco__succeeded = transform_hlds__lco__IntroducedFrom__pred__make_addr_vars__1384__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))));
    }
#line 1384 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1384 "lco.m"
  }
#line 1384 "lco.m"
}

#line 1377 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_addr_vars_12_p_0(
#line 1377 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 1377 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 1377 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__3_3,
#line 1377 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__4_4,
#line 1377 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 1377 "lco.m"
  MR_Integer transform_hlds__lco__NextOutArgNum_6,
#line 1377 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_7,
#line 1377 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__8_8,
#line 1377 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VarSet_0_9,
#line 1377 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VarSet_10,
#line 1377 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11,
#line 1377 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VarTypes_12)
#line 1377 "lco.m"
{
#line 1383 "lco.m"
  {
#line 1383 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1383 "lco.m"
    if ((transform_hlds__lco__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1383 "lco.m"
      if ((transform_hlds__lco__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1383 "lco.m"
        {
#line 1383 "lco.m"
          MR_Word transform_hlds__lco__V_22_22;

#line 1382 "lco.m"
          *transform_hlds__lco__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1382 "lco.m"
          *transform_hlds__lco__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1382 "lco.m"
          *transform_hlds__lco__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1384 "lco.m"
          {
#line 1384 "lco.m"
            transform_hlds__lco__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1384 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_22_22, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_7[6]));
#line 1384 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_22_22, 1) = ((MR_Box) (transform_hlds__lco__make_addr_vars_12_p_0_1));
#line 1384 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1384 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_22_22, 3) = ((MR_Box) (transform_hlds__lco__HeadVar__5_5));
#line 1384 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_22_22, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1384 "lco.m"
          }
#line 1384 "lco.m"
          {
#line 1384 "lco.m"
            mercury__require__expect_3_p_0(transform_hlds__lco__V_22_22, (MR_String) "transform_hlds.lco", (MR_String) "make_addr_vars: AddrOutArgs != []");
          }
#line 1383 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_VarTypes_12 = transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11;
#line 1383 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_VarSet_10 = transform_hlds__lco__STATE_VARIABLE_VarSet_0_9;
#line 1383 "lco.m"
        }
#line 1383 "lco.m"
      else
#line 1386 "lco.m"
        {
#line 1387 "lco.m"
          {
#line 1387 "lco.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.make_addr_vars\'/12", (MR_String) "mismatched lists");
#line 1387 "lco.m"
            return;
          }
#line 1386 "lco.m"
        }
#line 1383 "lco.m"
    else
#line 1383 "lco.m"
      {
#line 1383 "lco.m"
        MR_Word transform_hlds__lco__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 1383 "lco.m"
        MR_Word transform_hlds__lco__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));

#line 1383 "lco.m"
        if ((transform_hlds__lco__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1388 "lco.m"
          {
#line 1389 "lco.m"
            {
#line 1389 "lco.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.make_addr_vars\'/12", (MR_String) "mismatched lists");
#line 1389 "lco.m"
              return;
            }
#line 1388 "lco.m"
          }
#line 1383 "lco.m"
        else
#line 1392 "lco.m"
          {
#line 1392 "lco.m"
            MR_Word transform_hlds__lco__Mode0_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 1392 "lco.m"
            MR_Word transform_hlds__lco__Modes0_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 1392 "lco.m"
            MR_Word transform_hlds__lco__HeadVar_64;
#line 1392 "lco.m"
            MR_Word transform_hlds__lco__HeadVars_65;
#line 1392 "lco.m"
            MR_Word transform_hlds__lco__Mode_66;
#line 1392 "lco.m"
            MR_Word transform_hlds__lco__Modes_67;
#line 1392 "lco.m"
            MR_Word transform_hlds__lco__HeadVarType_74;
#line 1392 "lco.m"
            MR_Word transform_hlds__lco__ArgMode_75;

#line 1393 "lco.m"
            {
#line 1393 "lco.m"
              hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11, transform_hlds__lco__V_133_133, &transform_hlds__lco__HeadVarType_74);
            }
#line 1394 "lco.m"
            {
#line 1394 "lco.m"
              check_hlds__mode_util__mode_to_arg_mode_4_p_0(transform_hlds__lco__ModuleInfo_7, transform_hlds__lco__Mode0_62, transform_hlds__lco__HeadVarType_74, &transform_hlds__lco__ArgMode_75);
            }
#line 1401 "lco.m"
#line 1401 "lco.m"
            switch (transform_hlds__lco__ArgMode_75) {
#line 1401 "lco.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1401 "lco.m"
              case (MR_Integer) 0:
#line 1396 "lco.m"
                {
#line 1397 "lco.m"
                  transform_hlds__lco__HeadVar_64 = transform_hlds__lco__V_133_133;
#line 1398 "lco.m"
                  transform_hlds__lco__Mode_66 = transform_hlds__lco__Mode0_62;
#line 1399 "lco.m"
                  {
#line 1399 "lco.m"
                    transform_hlds__lco__make_addr_vars_12_p_0(transform_hlds__lco__V_132_132, transform_hlds__lco__Modes0_63, &transform_hlds__lco__HeadVars_65, &transform_hlds__lco__Modes_67, transform_hlds__lco__HeadVar__5_5, transform_hlds__lco__NextOutArgNum_6, transform_hlds__lco__ModuleInfo_7, transform_hlds__lco__HeadVar__8_8, transform_hlds__lco__STATE_VARIABLE_VarSet_0_9, transform_hlds__lco__STATE_VARIABLE_VarSet_10, transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11, transform_hlds__lco__STATE_VARIABLE_VarTypes_12);
                  }
#line 1396 "lco.m"
                }
#line 1401 "lco.m"
                break;
#line 1401 "lco.m"
              case (MR_Integer) 1:
#line 1402 "lco.m"
                {
#line 1402 "lco.m"
                  MR_Word transform_hlds__lco__MaybeFieldId_77;
#line 1402 "lco.m"
                  MR_Word transform_hlds__lco__STATE_VARIABLE_AddrOutArgs_97_97;
#line 1404 "lco.m"
                  MR_Word transform_hlds__lco__AddrOutArg_76;
#line 1404 "lco.m"
                  MR_Integer transform_hlds__lco__V_131_131;

#line 1404 "lco.m"
                  transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__HeadVar__5_5)) == (MR_mktag((MR_Integer) 1)));
#line 1404 "lco.m"
                  if (transform_hlds__lco__succeeded)
#line 1404 "lco.m"
                    {
#line 1404 "lco.m"
                      transform_hlds__lco__AddrOutArg_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__5_5, (MR_Integer) 0)));
#line 1404 "lco.m"
                      transform_hlds__lco__STATE_VARIABLE_AddrOutArgs_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__5_5, (MR_Integer) 1)));
#line 1405 "lco.m"
                      transform_hlds__lco__V_131_131 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__AddrOutArg_76, (MR_Integer) 0)));
#line 1405 "lco.m"
                      transform_hlds__lco__MaybeFieldId_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__AddrOutArg_76, (MR_Integer) 1)));
#line 1405 "lco.m"
                      transform_hlds__lco__succeeded = (transform_hlds__lco__NextOutArgNum_6 == transform_hlds__lco__V_131_131);
#line 1404 "lco.m"
                    }
#line 1402 "lco.m"
                  if (transform_hlds__lco__succeeded)
#line 1407 "lco.m"
                    {
#line 1407 "lco.m"
                      MR_Word transform_hlds__lco__TypeCtorInfo_130_130 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1407 "lco.m"
                      MR_String transform_hlds__lco__Name_78;
#line 1407 "lco.m"
                      MR_String transform_hlds__lco__AddrName_79;
#line 1407 "lco.m"
                      MR_Word transform_hlds__lco__OldType_81;
#line 1407 "lco.m"
                      MR_Word transform_hlds__lco__VarToAddrTail_87;
#line 1407 "lco.m"
                      MR_Word transform_hlds__lco__VarToAddrHead_88;
#line 1407 "lco.m"
                      MR_Word transform_hlds__lco__STATE_VARIABLE_VarSet_99_99;
#line 1407 "lco.m"
                      MR_Word transform_hlds__lco__STATE_VARIABLE_VarTypes_108_108;
#line 1407 "lco.m"
                      MR_Integer transform_hlds__lco__V_109_109;
#line 1407 "lco.m"
                      MR_Word transform_hlds__lco__V_113_113;

#line 1407 "lco.m"
                      {
#line 1407 "lco.m"
                        mercury__varset__lookup_name_3_p_0(transform_hlds__lco__TypeCtorInfo_130_130, transform_hlds__lco__STATE_VARIABLE_VarSet_0_9, transform_hlds__lco__V_133_133, &transform_hlds__lco__Name_78);
                      }
#line 1408 "lco.m"
                      {
#line 1408 "lco.m"
                        transform_hlds__lco__AddrName_79 = mercury__string__f_43_43_2_f_0((MR_String) "AddrOf", transform_hlds__lco__Name_78);
                      }
#line 1409 "lco.m"
                      {
#line 1409 "lco.m"
                        mercury__varset__new_named_var_4_p_0(transform_hlds__lco__TypeCtorInfo_130_130, transform_hlds__lco__AddrName_79, &transform_hlds__lco__HeadVar_64, transform_hlds__lco__STATE_VARIABLE_VarSet_0_9, &transform_hlds__lco__STATE_VARIABLE_VarSet_99_99);
                      }
#line 1411 "lco.m"
                      {
#line 1411 "lco.m"
                        hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11, transform_hlds__lco__V_133_133, &transform_hlds__lco__OldType_81);
                      }
#line 1418 "lco.m"
                      if ((transform_hlds__lco__MaybeFieldId_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1413 "lco.m"
                        {
#line 1413 "lco.m"
                          MR_Word transform_hlds__lco__V_107_107;

#line 1416 "lco.m"
                          {
#line 1416 "lco.m"
                            transform_hlds__lco__V_107_107 = transform_hlds__lco__make_ref_type_1_f_0(transform_hlds__lco__OldType_81);
                          }
#line 1416 "lco.m"
                          {
#line 1416 "lco.m"
                            hlds__vartypes__add_var_type_4_p_0(transform_hlds__lco__HeadVar_64, transform_hlds__lco__V_107_107, transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11, &transform_hlds__lco__STATE_VARIABLE_VarTypes_108_108);
                          }
#line 1417 "lco.m"
                          {
#line 1417 "lco.m"
                            transform_hlds__lco__Mode_66 = parse_tree__prog_mode__in_mode_0_f_0();
                          }
#line 1413 "lco.m"
                        }
#line 1418 "lco.m"
                      else
#line 1419 "lco.m"
                        {
#line 1419 "lco.m"
                          MR_Word transform_hlds__lco__AddrVarType_82;
#line 1419 "lco.m"
                          MR_Word transform_hlds__lco__ConsId_83;
#line 1419 "lco.m"
                          MR_Integer transform_hlds__lco__ArgNum_84;
#line 1419 "lco.m"
                          MR_Word transform_hlds__lco__BoundInst_85;
#line 1419 "lco.m"
                          MR_Word transform_hlds__lco__InitialInst_86;
#line 1419 "lco.m"
                          MR_Word transform_hlds__lco__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__MaybeFieldId_77, (MR_Integer) 0)));
#line 1419 "lco.m"
                          MR_Word transform_hlds__lco__V_104_104;
#line 1419 "lco.m"
                          MR_Word transform_hlds__lco__V_106_106;

#line 1419 "lco.m"
                          transform_hlds__lco__AddrVarType_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_100_100, (MR_Integer) 0)));
#line 1419 "lco.m"
                          transform_hlds__lco__ConsId_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_100_100, (MR_Integer) 1)));
#line 1419 "lco.m"
                          transform_hlds__lco__ArgNum_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_100_100, (MR_Integer) 2)));
#line 1423 "lco.m"
                          {
#line 1423 "lco.m"
                            hlds__vartypes__add_var_type_4_p_0(transform_hlds__lco__HeadVar_64, transform_hlds__lco__AddrVarType_82, transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11, &transform_hlds__lco__STATE_VARIABLE_VarTypes_108_108);
                          }
#line 1424 "lco.m"
                          {
#line 1424 "lco.m"
                            transform_hlds__lco__BoundInst_85 = transform_hlds__lco__bound_inst_with_free_arg_2_f_0(transform_hlds__lco__ConsId_83, transform_hlds__lco__ArgNum_84);
                          }
#line 1425 "lco.m"
                          {
#line 1425 "lco.m"
                            transform_hlds__lco__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1425 "lco.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__lco__V_104_104, 0) = ((MR_Box) (transform_hlds__lco__BoundInst_85));
#line 1425 "lco.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__lco__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1425 "lco.m"
                          }
#line 1425 "lco.m"
                          {
#line 1425 "lco.m"
                            transform_hlds__lco__InitialInst_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1425 "lco.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__lco__InitialInst_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1425 "lco.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__lco__InitialInst_86, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1425 "lco.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__lco__InitialInst_86, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1425 "lco.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__lco__InitialInst_86, 3) = ((MR_Box) (transform_hlds__lco__V_104_104));
#line 1425 "lco.m"
                          }
#line 1426 "lco.m"
                          {
#line 1426 "lco.m"
                            transform_hlds__lco__V_106_106 = parse_tree__prog_mode__ground_inst_0_f_0();
                          }
#line 1426 "lco.m"
                          {
#line 1426 "lco.m"
                            transform_hlds__lco__Mode_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1426 "lco.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__lco__Mode_66, 0) = ((MR_Box) (transform_hlds__lco__InitialInst_86));
#line 1426 "lco.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__lco__Mode_66, 1) = ((MR_Box) (transform_hlds__lco__V_106_106));
#line 1426 "lco.m"
                          }
#line 1419 "lco.m"
                        }
#line 1429 "lco.m"
                      transform_hlds__lco__V_109_109 = (transform_hlds__lco__NextOutArgNum_6 + (MR_Integer) 1);
#line 1428 "lco.m"
                      {
#line 1428 "lco.m"
                        transform_hlds__lco__make_addr_vars_12_p_0(transform_hlds__lco__V_132_132, transform_hlds__lco__Modes0_63, &transform_hlds__lco__HeadVars_65, &transform_hlds__lco__Modes_67, transform_hlds__lco__STATE_VARIABLE_AddrOutArgs_97_97, transform_hlds__lco__V_109_109, transform_hlds__lco__ModuleInfo_7, &transform_hlds__lco__VarToAddrTail_87, transform_hlds__lco__STATE_VARIABLE_VarSet_99_99, transform_hlds__lco__STATE_VARIABLE_VarSet_10, transform_hlds__lco__STATE_VARIABLE_VarTypes_108_108, transform_hlds__lco__STATE_VARIABLE_VarTypes_12);
                      }
#line 1431 "lco.m"
                      {
#line 1431 "lco.m"
                        transform_hlds__lco__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1431 "lco.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__lco__V_113_113, 0) = ((MR_Box) (transform_hlds__lco__HeadVar_64));
#line 1431 "lco.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__lco__V_113_113, 1) = ((MR_Box) (transform_hlds__lco__MaybeFieldId_77));
#line 1431 "lco.m"
                      }
#line 1431 "lco.m"
                      {
#line 1431 "lco.m"
                        transform_hlds__lco__VarToAddrHead_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1431 "lco.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__lco__VarToAddrHead_88, 0) = ((MR_Box) (transform_hlds__lco__V_133_133));
#line 1431 "lco.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__lco__VarToAddrHead_88, 1) = ((MR_Box) (transform_hlds__lco__V_113_113));
#line 1431 "lco.m"
                      }
#line 1432 "lco.m"
                      {
#line 1432 "lco.m"
                        MR_Word base;
#line 1432 "lco.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1432 "lco.m"
                        *transform_hlds__lco__HeadVar__8_8 = base;
#line 1432 "lco.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__VarToAddrHead_88));
#line 1432 "lco.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__VarToAddrTail_87));
#line 1432 "lco.m"
                      }
#line 1407 "lco.m"
                    }
#line 1402 "lco.m"
                  else
#line 1434 "lco.m"
                    {
#line 1434 "lco.m"
                      MR_Integer transform_hlds__lco__V_114_114;

#line 1434 "lco.m"
                      transform_hlds__lco__HeadVar_64 = transform_hlds__lco__V_133_133;
#line 1435 "lco.m"
                      transform_hlds__lco__Mode_66 = transform_hlds__lco__Mode0_62;
#line 1437 "lco.m"
                      transform_hlds__lco__V_114_114 = (transform_hlds__lco__NextOutArgNum_6 + (MR_Integer) 1);
#line 1436 "lco.m"
                      {
#line 1436 "lco.m"
                        transform_hlds__lco__make_addr_vars_12_p_0(transform_hlds__lco__V_132_132, transform_hlds__lco__Modes0_63, &transform_hlds__lco__HeadVars_65, &transform_hlds__lco__Modes_67, transform_hlds__lco__HeadVar__5_5, transform_hlds__lco__V_114_114, transform_hlds__lco__ModuleInfo_7, transform_hlds__lco__HeadVar__8_8, transform_hlds__lco__STATE_VARIABLE_VarSet_0_9, transform_hlds__lco__STATE_VARIABLE_VarSet_10, transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11, transform_hlds__lco__STATE_VARIABLE_VarTypes_12);
                      }
#line 1434 "lco.m"
                    }
#line 1402 "lco.m"
                }
#line 1401 "lco.m"
                break;
#line 1401 "lco.m"
              case (MR_Integer) 2:
#line 1441 "lco.m"
                {
#line 1442 "lco.m"
                  {
#line 1442 "lco.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.make_addr_vars\'/12", (MR_String) "top_unused");
#line 1442 "lco.m"
                    return;
                  }
#line 1441 "lco.m"
                }
#line 1401 "lco.m"
                break;
#line 1401 "lco.m"
            }
#line 1391 "lco.m"
            {
#line 1391 "lco.m"
              MR_Word base;
#line 1391 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1391 "lco.m"
              *transform_hlds__lco__HeadVar__3_3 = base;
#line 1391 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__HeadVar_64));
#line 1391 "lco.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__HeadVars_65));
#line 1391 "lco.m"
            }
#line 1391 "lco.m"
            {
#line 1391 "lco.m"
              MR_Word base;
#line 1391 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1391 "lco.m"
              *transform_hlds__lco__HeadVar__4_4 = base;
#line 1391 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Mode_66));
#line 1391 "lco.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__Modes_67));
#line 1391 "lco.m"
            }
#line 1392 "lco.m"
          }
#line 1383 "lco.m"
      }
#line 1383 "lco.m"
  }
#line 1377 "lco.m"
}

#line 1332 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__occurs_once_2_p_0(
#line 1332 "lco.m"
  MR_Word transform_hlds__lco__Bag_3,
#line 1332 "lco.m"
  MR_Word transform_hlds__lco__Var_4)
#line 1332 "lco.m"
{
#line 1334 "lco.m"
  {
#line 1334 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1334 "lco.m"
    MR_Integer transform_hlds__lco__V_7_7;

#line 1335 "lco.m"
    {
#line 1335 "lco.m"
      mercury__bag__count_value_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[3], transform_hlds__lco__Bag_3, ((MR_Box) (transform_hlds__lco__Var_4)), &transform_hlds__lco__V_7_7);
    }
#line 1335 "lco.m"
    transform_hlds__lco__succeeded = ((MR_Integer) 1 == transform_hlds__lco__V_7_7);
#line 1334 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1334 "lco.m"
  }
#line 1332 "lco.m"
}

#line 1323 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_mode_2_p_0(
#line 1323 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_3,
#line 1323 "lco.m"
  MR_Word transform_hlds__lco__UniMode_4)
#line 1323 "lco.m"
{
#line 1325 "lco.m"
  {
#line 1325 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1325 "lco.m"
    MR_Word transform_hlds__lco__InitInstX_5;
#line 1325 "lco.m"
    MR_Word transform_hlds__lco__InitInstY_6;
#line 1325 "lco.m"
    MR_Word transform_hlds__lco__FinalInstX_7;
#line 1325 "lco.m"
    MR_Word transform_hlds__lco__FinalInstY_8;
#line 1325 "lco.m"
    MR_Word transform_hlds__lco__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_4, (MR_Integer) 0)));
#line 1325 "lco.m"
    MR_Word transform_hlds__lco__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_4, (MR_Integer) 1)));

#line 1326 "lco.m"
    transform_hlds__lco__InitInstX_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_9_9, (MR_Integer) 0)));
#line 1326 "lco.m"
    transform_hlds__lco__InitInstY_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_9_9, (MR_Integer) 1)));
#line 1326 "lco.m"
    transform_hlds__lco__FinalInstX_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_10_10, (MR_Integer) 0)));
#line 1326 "lco.m"
    transform_hlds__lco__FinalInstY_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_10_10, (MR_Integer) 1)));
#line 1327 "lco.m"
    {
#line 1327 "lco.m"
      transform_hlds__lco__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(transform_hlds__lco__ModuleInfo_3, transform_hlds__lco__InitInstX_5);
    }
#line 1325 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 1325 "lco.m"
      {
#line 1328 "lco.m"
        {
#line 1328 "lco.m"
          transform_hlds__lco__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(transform_hlds__lco__ModuleInfo_3, transform_hlds__lco__InitInstY_6);
        }
#line 1325 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1325 "lco.m"
          {
#line 1329 "lco.m"
            {
#line 1329 "lco.m"
              transform_hlds__lco__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(transform_hlds__lco__ModuleInfo_3, transform_hlds__lco__FinalInstX_7);
            }
#line 1325 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 1330 "lco.m"
              {
#line 1330 "lco.m"
                transform_hlds__lco__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(transform_hlds__lco__ModuleInfo_3, transform_hlds__lco__FinalInstY_8);
              }
#line 1325 "lco.m"
          }
#line 1325 "lco.m"
      }
#line 1325 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1325 "lco.m"
  }
#line 1323 "lco.m"
}

#line 1313 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__bound_inst_with_free_arg_2_f_0(
#line 1313 "lco.m"
  MR_Word transform_hlds__lco__ConsId_4,
#line 1313 "lco.m"
  MR_Integer transform_hlds__lco__FreeArg_5)
#line 1313 "lco.m"
{
#line 1315 "lco.m"
  {
#line 1315 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1315 "lco.m"
    MR_Word transform_hlds__lco__Inst_6;
#line 1315 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_12_12;
#line 1315 "lco.m"
    MR_Integer transform_hlds__lco__Arity_7;
#line 1315 "lco.m"
    MR_Word transform_hlds__lco__ArgInsts0_8;
#line 1315 "lco.m"
    MR_Word transform_hlds__lco__ArgInsts_9;
#line 1315 "lco.m"
    MR_Word transform_hlds__lco__V_10_10;
#line 1315 "lco.m"
    MR_Word transform_hlds__lco__V_11_11;

#line 1316 "lco.m"
    {
#line 1316 "lco.m"
      transform_hlds__lco__Arity_7 = parse_tree__prog_util__cons_id_arity_1_f_0(transform_hlds__lco__ConsId_4);
    }
#line 1317 "lco.m"
    {
#line 1317 "lco.m"
      transform_hlds__lco__V_10_10 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 8659 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1317 "lco.m"
    {
#line 1317 "lco.m"
      mercury__list__duplicate_3_p_0(transform_hlds__lco__TypeCtorInfo_12_12, transform_hlds__lco__Arity_7, ((MR_Box) (transform_hlds__lco__V_10_10)), &transform_hlds__lco__ArgInsts0_8);
    }
#line 1318 "lco.m"
    {
#line 1318 "lco.m"
      transform_hlds__lco__V_11_11 = parse_tree__prog_mode__free_inst_0_f_0();
    }
#line 1318 "lco.m"
    {
#line 1318 "lco.m"
      mercury__list__det_replace_nth_4_p_0(transform_hlds__lco__TypeCtorInfo_12_12, transform_hlds__lco__ArgInsts0_8, transform_hlds__lco__FreeArg_5, ((MR_Box) (transform_hlds__lco__V_11_11)), &transform_hlds__lco__ArgInsts_9);
    }
#line 1319 "lco.m"
    {
#line 1319 "lco.m"
      transform_hlds__lco__Inst_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1319 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Inst_6, 0) = ((MR_Box) (transform_hlds__lco__ConsId_4));
#line 1319 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Inst_6, 1) = ((MR_Box) (transform_hlds__lco__ArgInsts_9));
#line 1319 "lco.m"
    }
#line 1315 "lco.m"
    return transform_hlds__lco__Inst_6;
#line 1315 "lco.m"
  }
#line 1313 "lco.m"
}

#line 1278 "lco.m"
static void MR_CALL 
transform_hlds__lco__update_construct_args_14_p_0(
#line 1278 "lco.m"
  MR_Word transform_hlds__lco__Subst_1,
#line 1278 "lco.m"
  MR_Word transform_hlds__lco__HighLevelData_2,
#line 1278 "lco.m"
  MR_Word transform_hlds__lco__VarType_3,
#line 1278 "lco.m"
  MR_Word transform_hlds__lco__ConsId_4,
#line 1278 "lco.m"
  MR_Integer transform_hlds__lco__ArgNum_5,
#line 1278 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__6_6,
#line 1278 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__7_7,
#line 1278 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__8_8,
#line 1278 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_InstMapDelta_0_9,
#line 1278 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_InstMapDelta_10,
#line 1278 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_0_11,
#line 1278 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_12,
#line 1278 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VarTypes_0_13,
#line 1278 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VarTypes_14)
#line 1278 "lco.m"
{
#line 1284 "lco.m"
  {
#line 1284 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1284 "lco.m"
    if ((transform_hlds__lco__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1284 "lco.m"
      {
#line 1284 "lco.m"
        *transform_hlds__lco__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1284 "lco.m"
        *transform_hlds__lco__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1285 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_VarTypes_14 = transform_hlds__lco__STATE_VARIABLE_VarTypes_0_13;
#line 1285 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_12 = transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_0_11;
#line 1285 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_InstMapDelta_10 = transform_hlds__lco__STATE_VARIABLE_InstMapDelta_0_9;
#line 1284 "lco.m"
      }
#line 1284 "lco.m"
    else
#line 1288 "lco.m"
      {
#line 1288 "lco.m"
        MR_Word transform_hlds__lco__OrigVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__6_6, (MR_Integer) 0)));
#line 1288 "lco.m"
        MR_Word transform_hlds__lco__OrigVars_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__6_6, (MR_Integer) 1)));
#line 1288 "lco.m"
        MR_Word transform_hlds__lco__UpdatedVar_36;
#line 1288 "lco.m"
        MR_Word transform_hlds__lco__UpdatedVars_37;
#line 1288 "lco.m"
        MR_Word transform_hlds__lco__AddrArgsTail_42;
#line 1288 "lco.m"
        MR_Integer transform_hlds__lco__V_52_52 = (transform_hlds__lco__ArgNum_5 + (MR_Integer) 1);
#line 1288 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_InstMapDelta_53_53;
#line 1288 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_54_54;
#line 1288 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_VarTypes_55_55;
#line 1308 "lco.m"
        MR_Word transform_hlds__lco__AddrVar_43;
#line 1292 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_65_65;
#line 1292 "lco.m"
        MR_Box transform_hlds__lco__conv0_AddrVar_43;

#line 1289 "lco.m"
        {
#line 1289 "lco.m"
          transform_hlds__lco__update_construct_args_14_p_0(transform_hlds__lco__Subst_1, transform_hlds__lco__HighLevelData_2, transform_hlds__lco__VarType_3, transform_hlds__lco__ConsId_4, transform_hlds__lco__V_52_52, transform_hlds__lco__OrigVars_35, &transform_hlds__lco__UpdatedVars_37, &transform_hlds__lco__AddrArgsTail_42, transform_hlds__lco__STATE_VARIABLE_InstMapDelta_0_9, &transform_hlds__lco__STATE_VARIABLE_InstMapDelta_53_53, transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_0_11, &transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_54_54, transform_hlds__lco__STATE_VARIABLE_VarTypes_0_13, &transform_hlds__lco__STATE_VARIABLE_VarTypes_55_55);
        }
#line 8781 "transform_hlds.lco.c"
        transform_hlds__lco__TypeInfo_65_65 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
#line 1292 "lco.m"
        {
#line 1292 "lco.m"
          transform_hlds__lco__succeeded = mercury__map__search_3_p_0(transform_hlds__lco__TypeInfo_65_65, transform_hlds__lco__TypeInfo_65_65, transform_hlds__lco__Subst_1, ((MR_Box) (transform_hlds__lco__OrigVar_34)), &transform_hlds__lco__conv0_AddrVar_43);
        }
#line 1292 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1292 "lco.m"
          {
#line 1292 "lco.m"
            transform_hlds__lco__AddrVar_43 = ((MR_Word) transform_hlds__lco__conv0_AddrVar_43);
#line 1292 "lco.m"
            transform_hlds__lco__succeeded = MR_TRUE;
#line 1292 "lco.m"
          }
#line 1308 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1293 "lco.m"
          {
#line 1293 "lco.m"
            MR_Word transform_hlds__lco__FinalInst_44;
#line 1293 "lco.m"
            MR_Word transform_hlds__lco__V_63_63;

#line 1293 "lco.m"
            transform_hlds__lco__UpdatedVar_36 = transform_hlds__lco__AddrVar_43;
#line 1297 "lco.m"
#line 1297 "lco.m"
            switch (transform_hlds__lco__HighLevelData_2) {
#line 1297 "lco.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1297 "lco.m"
              case (MR_Integer) 0:
#line 1295 "lco.m"
                {
#line 1296 "lco.m"
                  {
#line 1296 "lco.m"
                    transform_hlds__lco__FinalInst_44 = parse_tree__prog_mode__ground_inst_0_f_0();
                  }
#line 1295 "lco.m"
                  *transform_hlds__lco__STATE_VARIABLE_VarTypes_14 = transform_hlds__lco__STATE_VARIABLE_VarTypes_55_55;
#line 1295 "lco.m"
                }
#line 1297 "lco.m"
                break;
#line 1297 "lco.m"
              case (MR_Integer) 1:
#line 1298 "lco.m"
                {
#line 1298 "lco.m"
                  MR_Word transform_hlds__lco__TypeCtorInfo_12_76;
#line 1298 "lco.m"
                  MR_Word transform_hlds__lco__BoundInst_45;
#line 1298 "lco.m"
                  MR_Word transform_hlds__lco__V_59_59;
#line 1298 "lco.m"
                  MR_Integer transform_hlds__lco__Arity_71;
#line 1298 "lco.m"
                  MR_Word transform_hlds__lco__ArgInsts0_72;
#line 1298 "lco.m"
                  MR_Word transform_hlds__lco__ArgInsts_73;
#line 1298 "lco.m"
                  MR_Word transform_hlds__lco__V_74_74;
#line 1298 "lco.m"
                  MR_Word transform_hlds__lco__V_75_75;

#line 1316 "lco.m"
                  {
#line 1316 "lco.m"
                    transform_hlds__lco__Arity_71 = parse_tree__prog_util__cons_id_arity_1_f_0(transform_hlds__lco__ConsId_4);
                  }
#line 1317 "lco.m"
                  {
#line 1317 "lco.m"
                    transform_hlds__lco__V_74_74 = parse_tree__prog_mode__ground_inst_0_f_0();
                  }
#line 8860 "transform_hlds.lco.c"
                  transform_hlds__lco__TypeCtorInfo_12_76 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1317 "lco.m"
                  {
#line 1317 "lco.m"
                    mercury__list__duplicate_3_p_0(transform_hlds__lco__TypeCtorInfo_12_76, transform_hlds__lco__Arity_71, ((MR_Box) (transform_hlds__lco__V_74_74)), &transform_hlds__lco__ArgInsts0_72);
                  }
#line 1318 "lco.m"
                  {
#line 1318 "lco.m"
                    transform_hlds__lco__V_75_75 = parse_tree__prog_mode__free_inst_0_f_0();
                  }
#line 1318 "lco.m"
                  {
#line 1318 "lco.m"
                    mercury__list__det_replace_nth_4_p_0(transform_hlds__lco__TypeCtorInfo_12_76, transform_hlds__lco__ArgInsts0_72, transform_hlds__lco__ArgNum_5, ((MR_Box) (transform_hlds__lco__V_75_75)), &transform_hlds__lco__ArgInsts_73);
                  }
#line 1319 "lco.m"
                  {
#line 1319 "lco.m"
                    transform_hlds__lco__BoundInst_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1319 "lco.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__lco__BoundInst_45, 0) = ((MR_Box) (transform_hlds__lco__ConsId_4));
#line 1319 "lco.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__lco__BoundInst_45, 1) = ((MR_Box) (transform_hlds__lco__ArgInsts_73));
#line 1319 "lco.m"
                  }
#line 1300 "lco.m"
                  {
#line 1300 "lco.m"
                    transform_hlds__lco__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1300 "lco.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__lco__V_59_59, 0) = ((MR_Box) (transform_hlds__lco__BoundInst_45));
#line 1300 "lco.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__lco__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1300 "lco.m"
                  }
#line 1300 "lco.m"
                  {
#line 1300 "lco.m"
                    transform_hlds__lco__FinalInst_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1300 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__FinalInst_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1300 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__FinalInst_44, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1300 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__FinalInst_44, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1300 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__FinalInst_44, 3) = ((MR_Box) (transform_hlds__lco__V_59_59));
#line 1300 "lco.m"
                  }
#line 1302 "lco.m"
                  {
#line 1302 "lco.m"
                    hlds__vartypes__add_var_type_4_p_0(transform_hlds__lco__AddrVar_43, transform_hlds__lco__VarType_3, transform_hlds__lco__STATE_VARIABLE_VarTypes_55_55, transform_hlds__lco__STATE_VARIABLE_VarTypes_14);
                  }
#line 1298 "lco.m"
                }
#line 1297 "lco.m"
                break;
#line 1297 "lco.m"
            }
#line 1304 "lco.m"
            {
#line 1304 "lco.m"
              hlds__instmap__instmap_delta_set_var_4_p_0(transform_hlds__lco__AddrVar_43, transform_hlds__lco__FinalInst_44, transform_hlds__lco__STATE_VARIABLE_InstMapDelta_53_53, transform_hlds__lco__STATE_VARIABLE_InstMapDelta_10);
            }
#line 1305 "lco.m"
            {
#line 1305 "lco.m"
              transform_hlds__lco__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1305 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_63_63, 0) = ((MR_Box) (transform_hlds__lco__VarType_3));
#line 1305 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_63_63, 1) = ((MR_Box) (transform_hlds__lco__ConsId_4));
#line 1305 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_63_63, 2) = ((MR_Box) (transform_hlds__lco__ArgNum_5));
#line 1305 "lco.m"
            }
#line 1305 "lco.m"
            {
#line 1305 "lco.m"
              mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[3], (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0, ((MR_Box) (transform_hlds__lco__OrigVar_34)), ((MR_Box) (transform_hlds__lco__V_63_63)), transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_54_54, transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_12);
            }
#line 1307 "lco.m"
            {
#line 1307 "lco.m"
              MR_Word base;
#line 1307 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1307 "lco.m"
              *transform_hlds__lco__HeadVar__8_8 = base;
#line 1307 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__ArgNum_5));
#line 1307 "lco.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__AddrArgsTail_42));
#line 1307 "lco.m"
            }
#line 1293 "lco.m"
          }
#line 1308 "lco.m"
        else
#line 1309 "lco.m"
          {
#line 1309 "lco.m"
            transform_hlds__lco__UpdatedVar_36 = transform_hlds__lco__OrigVar_34;
#line 1310 "lco.m"
            *transform_hlds__lco__HeadVar__8_8 = transform_hlds__lco__AddrArgsTail_42;
#line 1309 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_VarTypes_14 = transform_hlds__lco__STATE_VARIABLE_VarTypes_55_55;
#line 1309 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_12 = transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_54_54;
#line 1309 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_InstMapDelta_10 = transform_hlds__lco__STATE_VARIABLE_InstMapDelta_53_53;
#line 1309 "lco.m"
          }
#line 1287 "lco.m"
        {
#line 1287 "lco.m"
          MR_Word base;
#line 1287 "lco.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1287 "lco.m"
          *transform_hlds__lco__HeadVar__7_7 = base;
#line 1287 "lco.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__UpdatedVar_36));
#line 1287 "lco.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__UpdatedVars_37));
#line 1287 "lco.m"
        }
#line 1288 "lco.m"
      }
#line 1284 "lco.m"
  }
#line 1278 "lco.m"
}

#line 1258 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__update_construct_8_p_0_1(
#line 1258 "lco.m"
  MR_Box transform_hlds__lco__closure_arg)
#line 1258 "lco.m"
{
#line 1258 "lco.m"
  {
#line 1258 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1258 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

#line 1258 "lco.m"
    {
#line 1258 "lco.m"
      transform_hlds__lco__succeeded = transform_hlds__lco__IntroducedFrom__pred__update_construct__1258__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))));
    }
#line 1258 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1258 "lco.m"
  }
#line 1258 "lco.m"
}

#line 1212 "lco.m"
static void MR_CALL 
transform_hlds__lco__update_construct_8_p_0(
#line 1212 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_9,
#line 1212 "lco.m"
  MR_Word transform_hlds__lco__Subst_10,
#line 1212 "lco.m"
  MR_Word transform_hlds__lco__Goal0_11,
#line 1212 "lco.m"
  MR_Word * transform_hlds__lco__Goal_12,
#line 1212 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_AddrVarFieldIds_0_59,
#line 1212 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_AddrVarFieldIds_60,
#line 1212 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_61,
#line 1212 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_62)
#line 1212 "lco.m"
{
#line 1217 "lco.m"
  {
#line 1217 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1217 "lco.m"
    MR_Word transform_hlds__lco__GoalExpr0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal0_11, (MR_Integer) 0)));
#line 1217 "lco.m"
    MR_Word transform_hlds__lco__GoalInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal0_11, (MR_Integer) 1)));
#line 1274 "lco.m"
    MR_Word transform_hlds__lco__LHS_17;
#line 1274 "lco.m"
    MR_Word transform_hlds__lco__RHS0_18;
#line 1274 "lco.m"
    MR_Word transform_hlds__lco__Mode_19;
#line 1274 "lco.m"
    MR_Word transform_hlds__lco__UnifyContext_21;
#line 1274 "lco.m"
    MR_Word transform_hlds__lco__Var_22;
#line 1274 "lco.m"
    MR_Word transform_hlds__lco__ConsId_23;
#line 1274 "lco.m"
    MR_Word transform_hlds__lco__ArgVars_24;
#line 1274 "lco.m"
    MR_Word transform_hlds__lco__UniModes_25;
#line 1274 "lco.m"
    MR_Word transform_hlds__lco__How_26;
#line 1274 "lco.m"
    MR_Word transform_hlds__lco__IsUnique_27;
#line 1274 "lco.m"
    MR_Word transform_hlds__lco__TermSizeSlot_29;
#line 1220 "lco.m"
    MR_Word transform_hlds__lco__Unification0_20;
#line 1220 "lco.m"
    MR_Word transform_hlds__lco__SubInfo0_28;

#line 1220 "lco.m"
    transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_15)) == (MR_mktag((MR_Integer) 1)));
#line 1220 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 1220 "lco.m"
      {
#line 1220 "lco.m"
        transform_hlds__lco__LHS_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr0_15, (MR_Integer) 0)));
#line 1220 "lco.m"
        transform_hlds__lco__RHS0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr0_15, (MR_Integer) 1)));
#line 1220 "lco.m"
        transform_hlds__lco__Mode_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr0_15, (MR_Integer) 2)));
#line 1220 "lco.m"
        transform_hlds__lco__Unification0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr0_15, (MR_Integer) 3)));
#line 1220 "lco.m"
        transform_hlds__lco__UnifyContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr0_15, (MR_Integer) 4)));
#line 1221 "lco.m"
        transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__Unification0_20)) == (MR_mktag((MR_Integer) 0)));
#line 1221 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1221 "lco.m"
          {
#line 1221 "lco.m"
            transform_hlds__lco__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 0)));
#line 1221 "lco.m"
            transform_hlds__lco__ConsId_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 1)));
#line 1221 "lco.m"
            transform_hlds__lco__ArgVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 2)));
#line 1221 "lco.m"
            transform_hlds__lco__UniModes_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 3)));
#line 1221 "lco.m"
            transform_hlds__lco__How_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 4)));
#line 1221 "lco.m"
            transform_hlds__lco__IsUnique_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 5)));
#line 1221 "lco.m"
            transform_hlds__lco__SubInfo0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 6)));
#line 1226 "lco.m"
            if ((transform_hlds__lco__SubInfo0_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1225 "lco.m"
              {
#line 1225 "lco.m"
                transform_hlds__lco__TermSizeSlot_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1225 "lco.m"
                transform_hlds__lco__succeeded = MR_TRUE;
#line 1225 "lco.m"
              }
#line 1226 "lco.m"
            else
#line 1227 "lco.m"
              {
#line 1227 "lco.m"
                MR_Word transform_hlds__lco__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SubInfo0_28, (MR_Integer) 0)));

#line 1227 "lco.m"
                transform_hlds__lco__TermSizeSlot_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SubInfo0_28, (MR_Integer) 1)));
#line 1227 "lco.m"
                transform_hlds__lco__succeeded = (transform_hlds__lco__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1227 "lco.m"
              }
#line 1221 "lco.m"
          }
#line 1220 "lco.m"
      }
#line 1274 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 1235 "lco.m"
      {
#line 1235 "lco.m"
        MR_Word transform_hlds__lco__HighLevelData_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1235 "lco.m"
        MR_Word transform_hlds__lco__VarTypes0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 3)));
#line 1235 "lco.m"
        MR_Word transform_hlds__lco__VarType_32;
#line 1235 "lco.m"
        MR_Word transform_hlds__lco__InstMapDelta0_33;
#line 1235 "lco.m"
        MR_Word transform_hlds__lco__UpdatedArgVars_34;
#line 1235 "lco.m"
        MR_Word transform_hlds__lco__AddrFields_35;
#line 1235 "lco.m"
        MR_Word transform_hlds__lco__InstMapDelta_36;
#line 1235 "lco.m"
        MR_Word transform_hlds__lco__VarTypes_37;
#line 1235 "lco.m"
        MR_Word transform_hlds__lco__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 0)));
#line 1235 "lco.m"
        MR_Word transform_hlds__lco__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 1)));
#line 1235 "lco.m"
        MR_Word transform_hlds__lco__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 2)));
#line 1235 "lco.m"
        MR_Word transform_hlds__lco__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 3)));
#line 1235 "lco.m"
        MR_Word transform_hlds__lco__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 4)));
#line 1235 "lco.m"
        MR_Word transform_hlds__lco__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 5)));
#line 1235 "lco.m"
        MR_Word transform_hlds__lco__V_87_87 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 6)))) & (MR_Integer) 7);
#line 1235 "lco.m"
        MR_Word transform_hlds__lco__V_88_88 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1236 "lco.m"
        MR_Word transform_hlds__lco__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 0)));
#line 1236 "lco.m"
        MR_Word transform_hlds__lco__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 1)));
#line 1236 "lco.m"
        MR_Word transform_hlds__lco__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 2)));
#line 1236 "lco.m"
        MR_Word transform_hlds__lco__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 4)));
#line 1236 "lco.m"
        MR_Word transform_hlds__lco__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 5)));
#line 1242 "lco.m"
        MR_Word transform_hlds__lco__V_94_94;
#line 1242 "lco.m"
        MR_Word transform_hlds__lco__V_95_95;
#line 1242 "lco.m"
        MR_Word transform_hlds__lco__V_96_96;
#line 1242 "lco.m"
        MR_Word transform_hlds__lco__V_98_98;
#line 1242 "lco.m"
        MR_Word transform_hlds__lco__V_99_99;
#line 1242 "lco.m"
        MR_Word transform_hlds__lco__V_97_97;

#line 1237 "lco.m"
        {
#line 1237 "lco.m"
          hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__lco__VarTypes0_31, transform_hlds__lco__Var_22, &transform_hlds__lco__VarType_32);
        }
#line 1238 "lco.m"
        {
#line 1238 "lco.m"
          transform_hlds__lco__InstMapDelta0_33 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__lco__GoalInfo0_16);
        }
#line 1239 "lco.m"
        {
#line 1239 "lco.m"
          transform_hlds__lco__update_construct_args_14_p_0(transform_hlds__lco__Subst_10, transform_hlds__lco__HighLevelData_30, transform_hlds__lco__VarType_32, transform_hlds__lco__ConsId_23, (MR_Integer) 1, transform_hlds__lco__ArgVars_24, &transform_hlds__lco__UpdatedArgVars_34, &transform_hlds__lco__AddrFields_35, transform_hlds__lco__InstMapDelta0_33, &transform_hlds__lco__InstMapDelta_36, transform_hlds__lco__STATE_VARIABLE_AddrVarFieldIds_0_59, transform_hlds__lco__STATE_VARIABLE_AddrVarFieldIds_60, transform_hlds__lco__VarTypes0_31, &transform_hlds__lco__VarTypes_37);
        }
#line 1242 "lco.m"
        transform_hlds__lco__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 0)));
#line 1242 "lco.m"
        transform_hlds__lco__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 1)));
#line 1242 "lco.m"
        transform_hlds__lco__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 2)));
#line 1242 "lco.m"
        transform_hlds__lco__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 3)));
#line 1242 "lco.m"
        transform_hlds__lco__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 4)));
#line 1242 "lco.m"
        transform_hlds__lco__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 5)));
#line 1242 "lco.m"
        {
#line 1242 "lco.m"
          MR_Word base;
#line 1242 "lco.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1242 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_Info_62 = base;
#line 1242 "lco.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__V_94_94));
#line 1242 "lco.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__V_95_95));
#line 1242 "lco.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__V_96_96));
#line 1242 "lco.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lco__VarTypes_37));
#line 1242 "lco.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__lco__V_98_98));
#line 1242 "lco.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__lco__V_99_99));
#line 1242 "lco.m"
        }
#line 1246 "lco.m"
        if ((transform_hlds__lco__AddrFields_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1245 "lco.m"
          *transform_hlds__lco__Goal_12 = transform_hlds__lco__Goal0_11;
#line 1246 "lco.m"
        else
#line 1247 "lco.m"
          {
#line 1247 "lco.m"
            MR_Word transform_hlds__lco__SubInfo_40;
#line 1247 "lco.m"
            MR_Word transform_hlds__lco__Unification_41;
#line 1247 "lco.m"
            MR_Word transform_hlds__lco__RHS_47;
#line 1247 "lco.m"
            MR_Word transform_hlds__lco__GoalExpr_57;
#line 1247 "lco.m"
            MR_Word transform_hlds__lco__GoalInfo_58;
#line 1247 "lco.m"
            MR_Word transform_hlds__lco__V_67_67;

#line 1248 "lco.m"
            {
#line 1248 "lco.m"
              transform_hlds__lco__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1248 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__V_67_67, 0) = ((MR_Box) (transform_hlds__lco__AddrFields_35));
#line 1248 "lco.m"
            }
#line 1248 "lco.m"
            {
#line 1248 "lco.m"
              transform_hlds__lco__SubInfo_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1248 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__SubInfo_40, 0) = ((MR_Box) (transform_hlds__lco__V_67_67));
#line 1248 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__SubInfo_40, 1) = ((MR_Box) (transform_hlds__lco__TermSizeSlot_29));
#line 1248 "lco.m"
            }
#line 1249 "lco.m"
            {
#line 1249 "lco.m"
              transform_hlds__lco__Unification_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1249 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 0) = ((MR_Box) (transform_hlds__lco__Var_22));
#line 1249 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 1) = ((MR_Box) (transform_hlds__lco__ConsId_23));
#line 1249 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 2) = ((MR_Box) (transform_hlds__lco__UpdatedArgVars_34));
#line 1249 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 3) = ((MR_Box) (transform_hlds__lco__UniModes_25));
#line 1249 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 4) = ((MR_Box) (transform_hlds__lco__How_26));
#line 1249 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 5) = ((MR_Box) (transform_hlds__lco__IsUnique_27));
#line 1249 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 6) = ((MR_Box) (transform_hlds__lco__SubInfo_40));
#line 1249 "lco.m"
            }
#line 1256 "lco.m"
#line 1256 "lco.m"
            switch (MR_tag((MR_Word) transform_hlds__lco__RHS0_18)) {
#line 1256 "lco.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1256 "lco.m"
              case (MR_Integer) 0:
#line 1254 "lco.m"
                {
#line 1255 "lco.m"
                  {
#line 1255 "lco.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_construct\'/8", (MR_String) "var RHS");
#line 1255 "lco.m"
                    return;
                  }
#line 1254 "lco.m"
                }
#line 1256 "lco.m"
                break;
#line 1256 "lco.m"
              case (MR_Integer) 1:
#line 1257 "lco.m"
                {
#line 1257 "lco.m"
                  MR_Word transform_hlds__lco__RHSConsId_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS0_18, (MR_Integer) 0)));
#line 1257 "lco.m"
                  MR_Word transform_hlds__lco__IsExistConstr_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS0_18, (MR_Integer) 1)));
#line 1257 "lco.m"
                  MR_Word transform_hlds__lco__RHSVars0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS0_18, (MR_Integer) 2)));
#line 1257 "lco.m"
                  MR_Word transform_hlds__lco__RHSVars_46;
#line 1257 "lco.m"
                  MR_Word transform_hlds__lco__V_71_71;

#line 1258 "lco.m"
                  {
#line 1258 "lco.m"
                    transform_hlds__lco__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1258 "lco.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__lco__V_71_71, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_7[5]));
#line 1258 "lco.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__lco__V_71_71, 1) = ((MR_Box) (transform_hlds__lco__update_construct_8_p_0_1));
#line 1258 "lco.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__lco__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1258 "lco.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__lco__V_71_71, 3) = ((MR_Box) (transform_hlds__lco__ConsId_23));
#line 1258 "lco.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__lco__V_71_71, 4) = ((MR_Box) (transform_hlds__lco__RHSConsId_43));
#line 1258 "lco.m"
                  }
#line 1258 "lco.m"
                  {
#line 1258 "lco.m"
                    mercury__require__expect_3_p_0(transform_hlds__lco__V_71_71, (MR_String) "transform_hlds.lco", (MR_String) "update_construct: cons_id mismatch");
                  }
#line 1260 "lco.m"
                  {
#line 1260 "lco.m"
                    parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, transform_hlds__lco__Subst_10, transform_hlds__lco__RHSVars0_45, &transform_hlds__lco__RHSVars_46);
                  }
#line 1261 "lco.m"
                  {
#line 1261 "lco.m"
                    transform_hlds__lco__RHS_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1261 "lco.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS_47, 0) = ((MR_Box) (transform_hlds__lco__RHSConsId_43));
#line 1261 "lco.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS_47, 1) = ((MR_Box) (transform_hlds__lco__IsExistConstr_44));
#line 1261 "lco.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS_47, 2) = ((MR_Box) (transform_hlds__lco__RHSVars_46));
#line 1261 "lco.m"
                  }
#line 1257 "lco.m"
                }
#line 1256 "lco.m"
                break;
#line 1256 "lco.m"
              case (MR_Integer) 2:
#line 1263 "lco.m"
                {
#line 1264 "lco.m"
                  {
#line 1264 "lco.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_construct\'/8", (MR_String) "lambda RHS");
#line 1264 "lco.m"
                    return;
                  }
#line 1263 "lco.m"
                }
#line 1256 "lco.m"
                break;
#line 1256 "lco.m"
            }
#line 1266 "lco.m"
            {
#line 1266 "lco.m"
              transform_hlds__lco__GoalExpr_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1266 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_57, 0) = ((MR_Box) (transform_hlds__lco__LHS_17));
#line 1266 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_57, 1) = ((MR_Box) (transform_hlds__lco__RHS_47));
#line 1266 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_57, 2) = ((MR_Box) (transform_hlds__lco__Mode_19));
#line 1266 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_57, 3) = ((MR_Box) (transform_hlds__lco__Unification_41));
#line 1266 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_57, 4) = ((MR_Box) (transform_hlds__lco__UnifyContext_21));
#line 1266 "lco.m"
            }
#line 1271 "lco.m"
            {
#line 1271 "lco.m"
              hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__lco__InstMapDelta_36, transform_hlds__lco__GoalInfo0_16, &transform_hlds__lco__GoalInfo_58);
            }
#line 1272 "lco.m"
            {
#line 1272 "lco.m"
              MR_Word base;
#line 1272 "lco.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1272 "lco.m"
              *transform_hlds__lco__Goal_12 = base;
#line 1272 "lco.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__GoalExpr_57));
#line 1272 "lco.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__GoalInfo_58));
#line 1272 "lco.m"
            }
#line 1247 "lco.m"
          }
#line 1235 "lco.m"
      }
#line 1274 "lco.m"
    else
#line 1275 "lco.m"
      {
#line 1275 "lco.m"
        {
#line 1275 "lco.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_construct\'/8", (MR_String) "not construct");
#line 1275 "lco.m"
          return;
        }
#line 1275 "lco.m"
      }
#line 1217 "lco.m"
  }
#line 1212 "lco.m"
}

#line 1197 "lco.m"
static void MR_CALL 
transform_hlds__lco__create_variant_name_4_p_0(
#line 1197 "lco.m"
  MR_Word transform_hlds__lco__PredOrFunc_5,
#line 1197 "lco.m"
  MR_Integer transform_hlds__lco__VariantNumber_6,
#line 1197 "lco.m"
  MR_String transform_hlds__lco__OrigName_7,
#line 1197 "lco.m"
  MR_String * transform_hlds__lco__VariantName_8)
#line 1197 "lco.m"
{
#line 1200 "lco.m"
  {
#line 1200 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1200 "lco.m"
    MR_String transform_hlds__lco__Prefix_9;
#line 1200 "lco.m"
    MR_String transform_hlds__lco__V_10_10;
#line 1200 "lco.m"
    MR_String transform_hlds__lco__V_11_11;
#line 1200 "lco.m"
    MR_String transform_hlds__lco__V_13_13;

#line 1204 "lco.m"
#line 1204 "lco.m"
    switch (transform_hlds__lco__PredOrFunc_5) {
#line 1204 "lco.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1204 "lco.m"
      case (MR_Integer) 1:
#line 1203 "lco.m"
        transform_hlds__lco__Prefix_9 = (MR_String) "LCMCfn_";
#line 1204 "lco.m"
        break;
#line 1204 "lco.m"
      case (MR_Integer) 0:
#line 1206 "lco.m"
        transform_hlds__lco__Prefix_9 = (MR_String) "LCMCpr_";
#line 1204 "lco.m"
        break;
#line 1204 "lco.m"
    }
#line 1208 "lco.m"
    {
#line 1208 "lco.m"
      transform_hlds__lco__V_13_13 = mercury__string__int_to_string_1_f_0(transform_hlds__lco__VariantNumber_6);
    }
#line 1208 "lco.m"
    {
#line 1208 "lco.m"
      transform_hlds__lco__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__lco__V_13_13);
    }
#line 1208 "lco.m"
    {
#line 1208 "lco.m"
      transform_hlds__lco__V_10_10 = mercury__string__f_43_43_2_f_0(transform_hlds__lco__OrigName_7, transform_hlds__lco__V_11_11);
    }
#line 1208 "lco.m"
    {
#line 1208 "lco.m"
      *transform_hlds__lco__VariantName_8 = mercury__string__f_43_43_2_f_0(transform_hlds__lco__Prefix_9, transform_hlds__lco__V_10_10);
    }
#line 1200 "lco.m"
  }
#line 1197 "lco.m"
}

#line 1160 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__match_existing_variant_3_p_0(
#line 1160 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 1160 "lco.m"
  MR_Word transform_hlds__lco__AddrArgNums_6,
#line 1160 "lco.m"
  MR_Word * transform_hlds__lco__Variant_7)
#line 1160 "lco.m"
{
#line 1163 "lco.m"
  while (MR_TRUE)
#line 1163 "lco.m"
    {
#line 1163 "lco.m"
      /* tailcall optimized into a loop */
#line 1163 "lco.m"
      {
#line 1163 "lco.m"
        MR_bool transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1163 "lco.m"
        MR_Word transform_hlds__lco__Variant0_4;
#line 1163 "lco.m"
        MR_Word transform_hlds__lco__Variants_5;
#line 1164 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_11_11;
#line 1164 "lco.m"
        MR_Word transform_hlds__lco__V_10_10;
#line 1164 "lco.m"
        MR_Word transform_hlds__lco__V_8_8;
#line 1164 "lco.m"
        MR_String transform_hlds__lco__V_9_9;

#line 1163 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1163 "lco.m"
          {
#line 1163 "lco.m"
            transform_hlds__lco__Variant0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 1163 "lco.m"
            transform_hlds__lco__Variants_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 1164 "lco.m"
            transform_hlds__lco__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Variant0_4, (MR_Integer) 0)));
#line 1164 "lco.m"
            transform_hlds__lco__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Variant0_4, (MR_Integer) 1)));
#line 1164 "lco.m"
            transform_hlds__lco__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Variant0_4, (MR_Integer) 2)));
#line 9578 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_11_11 = (MR_Word) &transform_hlds__lco_scalar_common_1[7];
#line 1164 "lco.m"
            {
#line 1164 "lco.m"
              transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_11_11, ((MR_Box) (transform_hlds__lco__AddrArgNums_6)), ((MR_Box) (transform_hlds__lco__V_10_10)));
            }
#line 1166 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 1165 "lco.m"
              {
#line 1165 "lco.m"
                *transform_hlds__lco__Variant_7 = transform_hlds__lco__Variant0_4;
#line 1165 "lco.m"
                transform_hlds__lco__succeeded = MR_TRUE;
#line 1165 "lco.m"
              }
#line 1166 "lco.m"
            else
#line 1167 "lco.m"
              {
#line 1167 "lco.m"
                /* direct tailcall eliminated */
#line 1167 "lco.m"
                {
#line 1167 "lco.m"
                  MR_Word transform_hlds__lco__HeadVar__1__tmp_copy_1 = transform_hlds__lco__Variants_5;

#line 1167 "lco.m"
                  transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__HeadVar__1__tmp_copy_1;
#line 1167 "lco.m"
                }
#line 1167 "lco.m"
                continue;
#line 1167 "lco.m"
              }
#line 1163 "lco.m"
          }
#line 1163 "lco.m"
        return transform_hlds__lco__succeeded;
#line 1163 "lco.m"
      }
#line 1163 "lco.m"
      break;
#line 1163 "lco.m"
    }
#line 1160 "lco.m"
}

#line 1118 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__ensure_variant_exists_8_p_0(
#line 1118 "lco.m"
  MR_Word transform_hlds__lco__PredId_9,
#line 1118 "lco.m"
  MR_Integer transform_hlds__lco__ProcId_10,
#line 1118 "lco.m"
  MR_Word transform_hlds__lco__AddrArgNums_11,
#line 1118 "lco.m"
  MR_Word * transform_hlds__lco__VariantPredProcId_12,
#line 1118 "lco.m"
  MR_Word transform_hlds__lco__SymName_13,
#line 1118 "lco.m"
  MR_Word * transform_hlds__lco__VariantSymName_14,
#line 1118 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_30,
#line 1118 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_31)
#line 1118 "lco.m"
{
#line 1123 "lco.m"
  {
#line 1123 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1123 "lco.m"
    MR_Word transform_hlds__lco__PredProcId_16;
#line 1123 "lco.m"
    MR_Word transform_hlds__lco__CurSCCVariants0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 1)));
#line 1125 "lco.m"
    MR_Word transform_hlds__lco__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 0)));
#line 1125 "lco.m"
    MR_Word transform_hlds__lco__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 2)));
#line 1125 "lco.m"
    MR_Word transform_hlds__lco__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 3)));
#line 1125 "lco.m"
    MR_Word transform_hlds__lco__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)));
#line 1125 "lco.m"
    MR_Word transform_hlds__lco__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 5)));
#line 1132 "lco.m"
    MR_Word transform_hlds__lco__ExistingVariant_19;
#line 1127 "lco.m"
    MR_Word transform_hlds__lco__ExistingVariants_18;

#line 1124 "lco.m"
    {
#line 1124 "lco.m"
      transform_hlds__lco__PredProcId_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1124 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__PredProcId_16, 0) = ((MR_Box) (transform_hlds__lco__PredId_9));
#line 1124 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__PredProcId_16, 1) = ((MR_Box) (transform_hlds__lco__ProcId_10));
#line 1124 "lco.m"
    }
#line 1127 "lco.m"
    {
#line 1127 "lco.m"
      transform_hlds__lco__succeeded = mercury__multi_map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0, transform_hlds__lco__CurSCCVariants0_17, ((MR_Box) (transform_hlds__lco__PredProcId_16)), &transform_hlds__lco__ExistingVariants_18);
    }
#line 1127 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 1128 "lco.m"
      {
#line 1128 "lco.m"
        transform_hlds__lco__succeeded = transform_hlds__lco__match_existing_variant_3_p_0(transform_hlds__lco__ExistingVariants_18, transform_hlds__lco__AddrArgNums_11, &transform_hlds__lco__ExistingVariant_19);
      }
#line 1132 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 1130 "lco.m"
      {
#line 1130 "lco.m"
        MR_String transform_hlds__lco__VariantName_74;
#line 1174 "lco.m"
        MR_Word transform_hlds__lco__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ExistingVariant_19, (MR_Integer) 0)));

#line 1174 "lco.m"
        *transform_hlds__lco__VariantPredProcId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ExistingVariant_19, (MR_Integer) 1)));
#line 1174 "lco.m"
        transform_hlds__lco__VariantName_74 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ExistingVariant_19, (MR_Integer) 2)));
#line 1178 "lco.m"
        if (((MR_tag((MR_Word) transform_hlds__lco__SymName_13)) == (MR_mktag((MR_Integer) 1))))
#line 1179 "lco.m"
          {
#line 1179 "lco.m"
            MR_Word transform_hlds__lco__ModuleName_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SymName_13, (MR_Integer) 0)));
#line 1179 "lco.m"
            MR_String transform_hlds__lco___Name_77 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SymName_13, (MR_Integer) 1)));

#line 1180 "lco.m"
            {
#line 1180 "lco.m"
              MR_Word base;
#line 1180 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1180 "lco.m"
              *transform_hlds__lco__VariantSymName_14 = base;
#line 1180 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__ModuleName_76));
#line 1180 "lco.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__VariantName_74));
#line 1180 "lco.m"
            }
#line 1179 "lco.m"
          }
#line 1178 "lco.m"
        else
#line 1177 "lco.m"
          {
#line 1177 "lco.m"
            MR_Word base;
#line 1177 "lco.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1177 "lco.m"
            *transform_hlds__lco__VariantSymName_14 = base;
#line 1177 "lco.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__VariantName_74));
#line 1177 "lco.m"
          }
#line 1130 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_Info_31 = transform_hlds__lco__STATE_VARIABLE_Info_0_30;
#line 1130 "lco.m"
        transform_hlds__lco__succeeded = MR_TRUE;
#line 1130 "lco.m"
      }
#line 1132 "lco.m"
    else
#line 1133 "lco.m"
      {
#line 1133 "lco.m"
        MR_Word transform_hlds__lco__TypeCtorInfo_67_67;
#line 1133 "lco.m"
        MR_Word transform_hlds__lco__TypeCtorInfo_68_68;
#line 1133 "lco.m"
        MR_Word transform_hlds__lco__ModuleInfo0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 0)));
#line 1133 "lco.m"
        MR_Word transform_hlds__lco__ClonePredId_21;
#line 1133 "lco.m"
        MR_Word transform_hlds__lco__PredOrFunc_22;
#line 1133 "lco.m"
        MR_Word transform_hlds__lco__ModuleInfo_23;
#line 1133 "lco.m"
        MR_Integer transform_hlds__lco__VariantNumber_24;
#line 1133 "lco.m"
        MR_String transform_hlds__lco__VariantName_26;
#line 1133 "lco.m"
        MR_Word transform_hlds__lco__NewVariant_28;
#line 1133 "lco.m"
        MR_Word transform_hlds__lco__CurSCCVariants_29;
#line 1133 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_Info_32_32;
#line 1133 "lco.m"
        MR_Word transform_hlds__lco__PredInfo_85;
#line 1133 "lco.m"
        MR_Word transform_hlds__lco__PredTable0_86;
#line 1133 "lco.m"
        MR_Word transform_hlds__lco__PredTable_87;
#line 1133 "lco.m"
        MR_Word transform_hlds__lco__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 1)));
#line 1133 "lco.m"
        MR_Word transform_hlds__lco__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 2)));
#line 1133 "lco.m"
        MR_Word transform_hlds__lco__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 3)));
#line 1133 "lco.m"
        MR_Word transform_hlds__lco__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)));
#line 1133 "lco.m"
        MR_Word transform_hlds__lco__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 5)));
#line 1137 "lco.m"
        MR_Word transform_hlds__lco__V_51_51;
#line 1137 "lco.m"
        MR_Word transform_hlds__lco__V_52_52;
#line 1137 "lco.m"
        MR_Word transform_hlds__lco__V_53_53;
#line 1137 "lco.m"
        MR_Word transform_hlds__lco__V_54_54;
#line 1137 "lco.m"
        MR_Word transform_hlds__lco__V_55_55;
#line 1137 "lco.m"
        MR_Word transform_hlds__lco__V_50_50;
#line 1142 "lco.m"
        MR_Word transform_hlds__lco__ExistingVariants_37;
#line 1157 "lco.m"
        MR_Word transform_hlds__lco__V_56_56;
#line 1157 "lco.m"
        MR_Word transform_hlds__lco__V_58_58;
#line 1157 "lco.m"
        MR_Word transform_hlds__lco__V_59_59;
#line 1157 "lco.m"
        MR_Word transform_hlds__lco__V_60_60;
#line 1157 "lco.m"
        MR_Word transform_hlds__lco__V_61_61;
#line 1157 "lco.m"
        MR_Word transform_hlds__lco__V_57_57;

#line 1191 "lco.m"
        {
#line 1191 "lco.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__lco__ModuleInfo0_20, transform_hlds__lco__PredId_9, &transform_hlds__lco__PredInfo_85);
        }
#line 1192 "lco.m"
        {
#line 1192 "lco.m"
          transform_hlds__lco__PredOrFunc_22 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__lco__PredInfo_85);
        }
#line 1193 "lco.m"
        {
#line 1193 "lco.m"
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__lco__ModuleInfo0_20, &transform_hlds__lco__PredTable0_86);
        }
#line 1194 "lco.m"
        {
#line 1194 "lco.m"
          hlds__pred_table__predicate_table_insert_4_p_0(transform_hlds__lco__PredInfo_85, &transform_hlds__lco__ClonePredId_21, transform_hlds__lco__PredTable0_86, &transform_hlds__lco__PredTable_87);
        }
#line 1195 "lco.m"
        {
#line 1195 "lco.m"
          hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__lco__PredTable_87, transform_hlds__lco__ModuleInfo0_20, &transform_hlds__lco__ModuleInfo_23);
        }
#line 1136 "lco.m"
        {
#line 1136 "lco.m"
          MR_Word base;
#line 1136 "lco.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1136 "lco.m"
          *transform_hlds__lco__VariantPredProcId_12 = base;
#line 1136 "lco.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__ClonePredId_21));
#line 1136 "lco.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__ProcId_10));
#line 1136 "lco.m"
        }
#line 1137 "lco.m"
        transform_hlds__lco__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 0)));
#line 1137 "lco.m"
        transform_hlds__lco__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 1)));
#line 1137 "lco.m"
        transform_hlds__lco__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 2)));
#line 1137 "lco.m"
        transform_hlds__lco__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 3)));
#line 1137 "lco.m"
        transform_hlds__lco__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)));
#line 1137 "lco.m"
        transform_hlds__lco__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 5)));
#line 1137 "lco.m"
        {
#line 1137 "lco.m"
          transform_hlds__lco__STATE_VARIABLE_Info_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1137 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, 0) = ((MR_Box) (transform_hlds__lco__ModuleInfo_23));
#line 1137 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, 1) = ((MR_Box) (transform_hlds__lco__V_51_51));
#line 1137 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, 2) = ((MR_Box) (transform_hlds__lco__V_52_52));
#line 1137 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, 3) = ((MR_Box) (transform_hlds__lco__V_53_53));
#line 1137 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, 4) = ((MR_Box) (transform_hlds__lco__V_54_54));
#line 1137 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, 5) = ((MR_Box) (transform_hlds__lco__V_55_55));
#line 1137 "lco.m"
        }
#line 1139 "lco.m"
        {
#line 1139 "lco.m"
          transform_hlds__lco__succeeded = mercury__multi_map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0, transform_hlds__lco__CurSCCVariants0_17, ((MR_Box) (transform_hlds__lco__PredProcId_16)), &transform_hlds__lco__ExistingVariants_37);
        }
#line 1142 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1141 "lco.m"
          {
#line 1141 "lco.m"
            MR_Integer transform_hlds__lco__V_33_33;

#line 1141 "lco.m"
            {
#line 1141 "lco.m"
              transform_hlds__lco__V_33_33 = mercury__list__length_1_f_0((MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0, transform_hlds__lco__ExistingVariants_37);
            }
#line 1141 "lco.m"
            transform_hlds__lco__VariantNumber_24 = (transform_hlds__lco__V_33_33 + (MR_Integer) 1);
#line 1141 "lco.m"
          }
#line 1142 "lco.m"
        else
#line 1143 "lco.m"
          transform_hlds__lco__VariantNumber_24 = (MR_Integer) 1;
#line 1145 "lco.m"
        transform_hlds__lco__succeeded = (transform_hlds__lco__VariantNumber_24 <= (MR_Integer) 4);
#line 1133 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1133 "lco.m"
          {
#line 1150 "lco.m"
            if (((MR_tag((MR_Word) transform_hlds__lco__SymName_13)) == (MR_mktag((MR_Integer) 1))))
#line 1151 "lco.m"
              {
#line 1151 "lco.m"
                MR_Word transform_hlds__lco__ModuleName_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SymName_13, (MR_Integer) 0)));
#line 1151 "lco.m"
                MR_String transform_hlds__lco__Name_38 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SymName_13, (MR_Integer) 1)));

#line 1152 "lco.m"
                {
#line 1152 "lco.m"
                  transform_hlds__lco__create_variant_name_4_p_0(transform_hlds__lco__PredOrFunc_22, transform_hlds__lco__VariantNumber_24, transform_hlds__lco__Name_38, &transform_hlds__lco__VariantName_26);
                }
#line 1153 "lco.m"
                {
#line 1153 "lco.m"
                  MR_Word base;
#line 1153 "lco.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1153 "lco.m"
                  *transform_hlds__lco__VariantSymName_14 = base;
#line 1153 "lco.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__ModuleName_27));
#line 1153 "lco.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__VariantName_26));
#line 1153 "lco.m"
                }
#line 1151 "lco.m"
              }
#line 1150 "lco.m"
            else
#line 1147 "lco.m"
              {
#line 1147 "lco.m"
                MR_String transform_hlds__lco__Name_25 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__SymName_13, (MR_Integer) 0)));

#line 1148 "lco.m"
                {
#line 1148 "lco.m"
                  transform_hlds__lco__create_variant_name_4_p_0(transform_hlds__lco__PredOrFunc_22, transform_hlds__lco__VariantNumber_24, transform_hlds__lco__Name_25, &transform_hlds__lco__VariantName_26);
                }
#line 1149 "lco.m"
                {
#line 1149 "lco.m"
                  MR_Word base;
#line 1149 "lco.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1149 "lco.m"
                  *transform_hlds__lco__VariantSymName_14 = base;
#line 1149 "lco.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__VariantName_26));
#line 1149 "lco.m"
                }
#line 1147 "lco.m"
              }
#line 9976 "transform_hlds.lco.c"
            transform_hlds__lco__TypeCtorInfo_67_67 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 9978 "transform_hlds.lco.c"
            transform_hlds__lco__TypeCtorInfo_68_68 = (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0;
#line 1155 "lco.m"
            {
#line 1155 "lco.m"
              transform_hlds__lco__NewVariant_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1155 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__NewVariant_28, 0) = ((MR_Box) (transform_hlds__lco__AddrArgNums_11));
#line 1155 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__NewVariant_28, 1) = ((MR_Box) (*transform_hlds__lco__VariantPredProcId_12));
#line 1155 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__NewVariant_28, 2) = ((MR_Box) (transform_hlds__lco__VariantName_26));
#line 1155 "lco.m"
            }
#line 1156 "lco.m"
            {
#line 1156 "lco.m"
              mercury__multi_map__set_4_p_0(transform_hlds__lco__TypeCtorInfo_67_67, transform_hlds__lco__TypeCtorInfo_68_68, ((MR_Box) (transform_hlds__lco__PredProcId_16)), ((MR_Box) (transform_hlds__lco__NewVariant_28)), transform_hlds__lco__CurSCCVariants0_17, &transform_hlds__lco__CurSCCVariants_29);
            }
#line 1157 "lco.m"
            transform_hlds__lco__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 0)));
#line 1157 "lco.m"
            transform_hlds__lco__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 1)));
#line 1157 "lco.m"
            transform_hlds__lco__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 2)));
#line 1157 "lco.m"
            transform_hlds__lco__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 3)));
#line 1157 "lco.m"
            transform_hlds__lco__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 4)));
#line 1157 "lco.m"
            transform_hlds__lco__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 5)));
#line 1157 "lco.m"
            {
#line 1157 "lco.m"
              MR_Word base;
#line 1157 "lco.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1157 "lco.m"
              *transform_hlds__lco__STATE_VARIABLE_Info_31 = base;
#line 1157 "lco.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__V_56_56));
#line 1157 "lco.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__CurSCCVariants_29));
#line 1157 "lco.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__V_58_58));
#line 1157 "lco.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lco__V_59_59));
#line 1157 "lco.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__lco__V_60_60));
#line 1157 "lco.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__lco__V_61_61));
#line 1157 "lco.m"
            }
#line 1157 "lco.m"
            transform_hlds__lco__succeeded = MR_TRUE;
#line 1133 "lco.m"
          }
#line 1133 "lco.m"
      }
#line 1123 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1123 "lco.m"
  }
#line 1118 "lco.m"
}

#line 1112 "lco.m"
static MR_Box MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0_2(
#line 1112 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1112 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1)
#line 1112 "lco.m"
{
#line 1112 "lco.m"
  {
#line 1112 "lco.m"
    MR_Box transform_hlds__lco__wrapper_arg_2;
#line 1112 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 1112 "lco.m"
    MR_Word transform_hlds__lco__conv1_LambdaHeadVar__2_15;

#line 1112 "lco.m"
    {
#line 1112 "lco.m"
      transform_hlds__lco__conv1_LambdaHeadVar__2_15 = transform_hlds__lco__IntroducedFrom__func__make_variant_args__1112__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
#line 1112 "lco.m"
    transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv1_LambdaHeadVar__2_15));
#line 1112 "lco.m"
    return transform_hlds__lco__wrapper_arg_2;
#line 1112 "lco.m"
  }
#line 1112 "lco.m"
}

#line 1109 "lco.m"
static MR_Box MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0_1(
#line 1109 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1109 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1)
#line 1109 "lco.m"
{
#line 1109 "lco.m"
  {
#line 1109 "lco.m"
    MR_Box transform_hlds__lco__wrapper_arg_2;
#line 1109 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 1109 "lco.m"
    MR_Word transform_hlds__lco__conv0_LambdaHeadVar__2_18;

#line 1109 "lco.m"
    {
#line 1109 "lco.m"
      transform_hlds__lco__conv0_LambdaHeadVar__2_18 = transform_hlds__lco__IntroducedFrom__func__make_variant_args__1109__1_1_f_0(((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
#line 1109 "lco.m"
    transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv0_LambdaHeadVar__2_18));
#line 1109 "lco.m"
    return transform_hlds__lco__wrapper_arg_2;
#line 1109 "lco.m"
  }
#line 1109 "lco.m"
}

#line 1103 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0(
#line 1103 "lco.m"
  MR_Word transform_hlds__lco__HighLevelData_5,
#line 1103 "lco.m"
  MR_Word transform_hlds__lco__AddrVarFieldIds_6,
#line 1103 "lco.m"
  MR_Word transform_hlds__lco__Mismatches_7,
#line 1103 "lco.m"
  MR_Word * transform_hlds__lco__VariantArgs_8)
#line 1103 "lco.m"
{
#line 1106 "lco.m"
  {
#line 1106 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1106 "lco.m"
    MR_Word transform_hlds__lco__MakeArg_9;

#line 1110 "lco.m"
#line 1110 "lco.m"
    switch (transform_hlds__lco__HighLevelData_5) {
#line 1110 "lco.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1110 "lco.m"
      case (MR_Integer) 0:
#line 1109 "lco.m"
        transform_hlds__lco__MakeArg_9 = (MR_Word) &transform_hlds__lco_scalar_common_2[12];
#line 1110 "lco.m"
        break;
#line 1110 "lco.m"
      case (MR_Integer) 1:
#line 1112 "lco.m"
        {
#line 1112 "lco.m"
          transform_hlds__lco__MakeArg_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1112 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__MakeArg_9, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_5[1]));
#line 1112 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__MakeArg_9, 1) = ((MR_Box) (transform_hlds__lco__make_variant_args_4_p_0_2));
#line 1112 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__MakeArg_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1112 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__MakeArg_9, 3) = ((MR_Box) (transform_hlds__lco__AddrVarFieldIds_6));
#line 1112 "lco.m"
        }
#line 1110 "lco.m"
        break;
#line 1110 "lco.m"
    }
#line 1116 "lco.m"
    {
#line 1116 "lco.m"
      *transform_hlds__lco__VariantArgs_8 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__lco_scalar_common_2[4], (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0, transform_hlds__lco__MakeArg_9, transform_hlds__lco__Mismatches_7);
    }
#line 1106 "lco.m"
  }
#line 1103 "lco.m"
}

#line 1094 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__make_ref_type_1_f_0(
#line 1094 "lco.m"
  MR_Word transform_hlds__lco__FieldType_3)
#line 1094 "lco.m"
{
#line 1096 "lco.m"
  {
#line 1096 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1096 "lco.m"
    MR_Word transform_hlds__lco__PtrType_4;
#line 1096 "lco.m"
    MR_Word transform_hlds__lco__RefTypeName_5;
#line 1096 "lco.m"
    MR_Word transform_hlds__lco__V_6_6;
#line 1096 "lco.m"
    MR_Word transform_hlds__lco__V_8_8;

#line 1097 "lco.m"
    {
#line 1097 "lco.m"
      transform_hlds__lco__V_6_6 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 1097 "lco.m"
    {
#line 1097 "lco.m"
      transform_hlds__lco__RefTypeName_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1097 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__RefTypeName_5, 0) = ((MR_Box) (transform_hlds__lco__V_6_6));
#line 1097 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__RefTypeName_5, 1) = ((MR_Box) ((MR_String) "store_at_ref_type"));
#line 1097 "lco.m"
    }
#line 1099 "lco.m"
    {
#line 1099 "lco.m"
      transform_hlds__lco__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1099 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__V_8_8, 0) = ((MR_Box) (transform_hlds__lco__FieldType_3));
#line 1099 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__V_8_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1099 "lco.m"
    }
#line 1099 "lco.m"
    {
#line 1099 "lco.m"
      transform_hlds__lco__PtrType_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1099 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__PtrType_4, 0) = ((MR_Box) (transform_hlds__lco__RefTypeName_5));
#line 1099 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__PtrType_4, 1) = ((MR_Box) (transform_hlds__lco__V_8_8));
#line 1099 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__PtrType_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1099 "lco.m"
    }
#line 1096 "lco.m"
    return transform_hlds__lco__PtrType_4;
#line 1096 "lco.m"
  }
#line 1094 "lco.m"
}

#line 1071 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_address_var_5_p_0(
#line 1071 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_6,
#line 1071 "lco.m"
  MR_Word transform_hlds__lco__Var_7,
#line 1071 "lco.m"
  MR_Word * transform_hlds__lco__AddrVar_8,
#line 1071 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_19,
#line 1071 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_20)
#line 1071 "lco.m"
{
#line 1074 "lco.m"
  {
#line 1074 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1074 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_55_55 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1074 "lco.m"
    MR_Word transform_hlds__lco__VarSet0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 2)));
#line 1074 "lco.m"
    MR_Word transform_hlds__lco__VarTypes0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 3)));
#line 1074 "lco.m"
    MR_String transform_hlds__lco__Name_12;
#line 1074 "lco.m"
    MR_String transform_hlds__lco__AddrName_13;
#line 1074 "lco.m"
    MR_Word transform_hlds__lco__VarSet_14;
#line 1074 "lco.m"
    MR_Word transform_hlds__lco__HighLevelData_15;
#line 1074 "lco.m"
    MR_Word transform_hlds__lco__VarTypes_18;
#line 1074 "lco.m"
    MR_Word transform_hlds__lco__V_43_43;
#line 1074 "lco.m"
    MR_Word transform_hlds__lco__V_44_44;
#line 1074 "lco.m"
    MR_Word transform_hlds__lco__V_47_47;
#line 1074 "lco.m"
    MR_Word transform_hlds__lco__V_48_48;
#line 1075 "lco.m"
    MR_Word transform_hlds__lco__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 0)));
#line 1075 "lco.m"
    MR_Word transform_hlds__lco__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 1)));
#line 1075 "lco.m"
    MR_Word transform_hlds__lco__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 4)));
#line 1075 "lco.m"
    MR_Word transform_hlds__lco__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 5)));
#line 1080 "lco.m"
    MR_Word transform_hlds__lco__V_35_35;
#line 1080 "lco.m"
    MR_Word transform_hlds__lco__V_36_36;
#line 1080 "lco.m"
    MR_Word transform_hlds__lco__V_37_37;
#line 1080 "lco.m"
    MR_Word transform_hlds__lco__V_38_38;
#line 1080 "lco.m"
    MR_Word transform_hlds__lco__V_39_39;
#line 1080 "lco.m"
    MR_Word transform_hlds__lco__V_40_40;
#line 1080 "lco.m"
    MR_Word transform_hlds__lco__V_41_41;
#line 1080 "lco.m"
    MR_Word transform_hlds__lco__V_42_42;
#line 1091 "lco.m"
    MR_Word transform_hlds__lco__V_45_45;
#line 1091 "lco.m"
    MR_Word transform_hlds__lco__V_46_46;

#line 1077 "lco.m"
    {
#line 1077 "lco.m"
      mercury__varset__lookup_name_4_p_0(transform_hlds__lco__TypeCtorInfo_55_55, transform_hlds__lco__VarSet0_10, transform_hlds__lco__Var_7, (MR_String) "SCCcallarg", &transform_hlds__lco__Name_12);
    }
#line 1078 "lco.m"
    {
#line 1078 "lco.m"
      transform_hlds__lco__AddrName_13 = mercury__string__f_43_43_2_f_0((MR_String) "Addr", transform_hlds__lco__Name_12);
    }
#line 1079 "lco.m"
    {
#line 1079 "lco.m"
      mercury__varset__new_named_var_4_p_0(transform_hlds__lco__TypeCtorInfo_55_55, transform_hlds__lco__AddrName_13, transform_hlds__lco__AddrVar_8, transform_hlds__lco__VarSet0_10, &transform_hlds__lco__VarSet_14);
    }
#line 1080 "lco.m"
    transform_hlds__lco__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 0)));
#line 1080 "lco.m"
    transform_hlds__lco__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 1)));
#line 1080 "lco.m"
    transform_hlds__lco__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 2)));
#line 1080 "lco.m"
    transform_hlds__lco__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 3)));
#line 1080 "lco.m"
    transform_hlds__lco__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 4)));
#line 1080 "lco.m"
    transform_hlds__lco__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 5)));
#line 1080 "lco.m"
    transform_hlds__lco__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)))) & (MR_Integer) 7);
#line 1080 "lco.m"
    transform_hlds__lco__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1080 "lco.m"
    transform_hlds__lco__HighLevelData_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1086 "lco.m"
#line 1086 "lco.m"
    switch (transform_hlds__lco__HighLevelData_15) {
#line 1086 "lco.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1086 "lco.m"
      case (MR_Integer) 0:
#line 1082 "lco.m"
        {
#line 1082 "lco.m"
          MR_Word transform_hlds__lco__FieldType_16;
#line 1082 "lco.m"
          MR_Word transform_hlds__lco__AddrVarType_17;
#line 1082 "lco.m"
          MR_Word transform_hlds__lco__RefTypeName_58;
#line 1082 "lco.m"
          MR_Word transform_hlds__lco__V_59_59;
#line 1082 "lco.m"
          MR_Word transform_hlds__lco__V_61_61;

#line 1083 "lco.m"
          {
#line 1083 "lco.m"
            hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__lco__VarTypes0_11, transform_hlds__lco__Var_7, &transform_hlds__lco__FieldType_16);
          }
#line 1097 "lco.m"
          {
#line 1097 "lco.m"
            transform_hlds__lco__V_59_59 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
#line 1097 "lco.m"
          {
#line 1097 "lco.m"
            transform_hlds__lco__RefTypeName_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1097 "lco.m"
            MR_hl_field(MR_mktag(1), transform_hlds__lco__RefTypeName_58, 0) = ((MR_Box) (transform_hlds__lco__V_59_59));
#line 1097 "lco.m"
            MR_hl_field(MR_mktag(1), transform_hlds__lco__RefTypeName_58, 1) = ((MR_Box) ((MR_String) "store_at_ref_type"));
#line 1097 "lco.m"
          }
#line 1099 "lco.m"
          {
#line 1099 "lco.m"
            transform_hlds__lco__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1099 "lco.m"
            MR_hl_field(MR_mktag(1), transform_hlds__lco__V_61_61, 0) = ((MR_Box) (transform_hlds__lco__FieldType_16));
#line 1099 "lco.m"
            MR_hl_field(MR_mktag(1), transform_hlds__lco__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1099 "lco.m"
          }
#line 1099 "lco.m"
          {
#line 1099 "lco.m"
            transform_hlds__lco__AddrVarType_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1099 "lco.m"
            MR_hl_field(MR_mktag(1), transform_hlds__lco__AddrVarType_17, 0) = ((MR_Box) (transform_hlds__lco__RefTypeName_58));
#line 1099 "lco.m"
            MR_hl_field(MR_mktag(1), transform_hlds__lco__AddrVarType_17, 1) = ((MR_Box) (transform_hlds__lco__V_61_61));
#line 1099 "lco.m"
            MR_hl_field(MR_mktag(1), transform_hlds__lco__AddrVarType_17, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1099 "lco.m"
          }
#line 1085 "lco.m"
          {
#line 1085 "lco.m"
            hlds__vartypes__add_var_type_4_p_0(*transform_hlds__lco__AddrVar_8, transform_hlds__lco__AddrVarType_17, transform_hlds__lco__VarTypes0_11, &transform_hlds__lco__VarTypes_18);
          }
#line 1082 "lco.m"
        }
#line 1086 "lco.m"
        break;
#line 1086 "lco.m"
      case (MR_Integer) 1:
#line 1089 "lco.m"
        transform_hlds__lco__VarTypes_18 = transform_hlds__lco__VarTypes0_11;
#line 1086 "lco.m"
        break;
#line 1086 "lco.m"
    }
#line 1091 "lco.m"
    transform_hlds__lco__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 0)));
#line 1091 "lco.m"
    transform_hlds__lco__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 1)));
#line 1091 "lco.m"
    transform_hlds__lco__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 2)));
#line 1091 "lco.m"
    transform_hlds__lco__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 3)));
#line 1091 "lco.m"
    transform_hlds__lco__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 4)));
#line 1091 "lco.m"
    transform_hlds__lco__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 5)));
#line 1092 "lco.m"
    {
#line 1092 "lco.m"
      MR_Word base;
#line 1092 "lco.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1092 "lco.m"
      *transform_hlds__lco__STATE_VARIABLE_Info_20 = base;
#line 1092 "lco.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__V_43_43));
#line 1092 "lco.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__V_44_44));
#line 1092 "lco.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__VarSet_14));
#line 1092 "lco.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lco__VarTypes_18));
#line 1092 "lco.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__lco__V_47_47));
#line 1092 "lco.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__lco__V_48_48));
#line 1092 "lco.m"
    }
#line 1074 "lco.m"
  }
#line 1071 "lco.m"
}

#line 1012 "lco.m"
static void MR_CALL 
transform_hlds__lco__find_args_to_pass_by_addr_10_p_0(
#line 1012 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 1012 "lco.m"
  MR_Word transform_hlds__lco__UnifyInputVars_2,
#line 1012 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 1012 "lco.m"
  MR_Integer transform_hlds__lco__ArgNum_4,
#line 1012 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__5_5,
#line 1012 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6,
#line 1012 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Subst_0_7,
#line 1012 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Subst_8,
#line 1012 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_9,
#line 1012 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_10)
#line 1012 "lco.m"
{
#line 1018 "lco.m"
  {
#line 1018 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1018 "lco.m"
    if ((transform_hlds__lco__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1018 "lco.m"
      {
#line 1018 "lco.m"
        *transform_hlds__lco__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1018 "lco.m"
        *transform_hlds__lco__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1018 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_Info_10 = transform_hlds__lco__STATE_VARIABLE_Info_0_9;
#line 1018 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_Subst_8 = transform_hlds__lco__STATE_VARIABLE_Subst_0_7;
#line 1018 "lco.m"
      }
#line 1018 "lco.m"
    else
#line 1021 "lco.m"
      {
#line 1021 "lco.m"
        MR_Word transform_hlds__lco__CallArg_22;
#line 1021 "lco.m"
        MR_Word transform_hlds__lco__HeadArg_23;
#line 1021 "lco.m"
        MR_Word transform_hlds__lco__CallHeadArgs_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 1021 "lco.m"
        MR_Word transform_hlds__lco__UpdatedCallArg_27;
#line 1021 "lco.m"
        MR_Word transform_hlds__lco__UpdatedCallArgs_28;
#line 1021 "lco.m"
        MR_Word transform_hlds__lco__MismatchesTail_31;
#line 1021 "lco.m"
        MR_Word transform_hlds__lco__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
#line 1021 "lco.m"
        MR_Integer transform_hlds__lco__V_39_39;
#line 1021 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_Subst_40_40;
#line 1021 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_Info_41_41;
#line 1021 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_Info_48_48;
#line 1025 "lco.m"
        MR_Word transform_hlds__lco__CallArgType_32;
#line 1025 "lco.m"
        MR_Word transform_hlds__lco__CallArgTypeCtor_33;
#line 1025 "lco.m"
        MR_Word transform_hlds__lco__V_43_43;
#line 1025 "lco.m"
        MR_Word transform_hlds__lco__V_44_44;
#line 1025 "lco.m"
        MR_Word transform_hlds__lco__V_45_45;
#line 1025 "lco.m"
        MR_String transform_hlds__lco__V_46_46;
#line 1025 "lco.m"
        MR_Integer transform_hlds__lco__V_47_47;
#line 1025 "lco.m"
        MR_Word transform_hlds__lco__V_55_55;
#line 1025 "lco.m"
        MR_Word transform_hlds__lco__V_56_56;
#line 1025 "lco.m"
        MR_Word transform_hlds__lco__V_57_57;
#line 1025 "lco.m"
        MR_Word transform_hlds__lco__V_58_58;
#line 1025 "lco.m"
        MR_Word transform_hlds__lco__V_59_59;
#line 1025 "lco.m"
        MR_Word transform_hlds__lco__V_60_60;
#line 1025 "lco.m"
        MR_Word transform_hlds__lco__V_61_61;
#line 1025 "lco.m"
        MR_Word transform_hlds__lco__V_62_62;
#line 1026 "lco.m"
        MR_Word transform_hlds__lco__V_63_63;
#line 1026 "lco.m"
        MR_Word transform_hlds__lco__V_64_64;
#line 1026 "lco.m"
        MR_Word transform_hlds__lco__V_65_65;
#line 1026 "lco.m"
        MR_Word transform_hlds__lco__V_66_66;
#line 1026 "lco.m"
        MR_Word transform_hlds__lco__V_67_67;

#line 1020 "lco.m"
        transform_hlds__lco__CallArg_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_38_38, (MR_Integer) 0)));
#line 1020 "lco.m"
        transform_hlds__lco__HeadArg_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_38_38, (MR_Integer) 1)));
#line 1023 "lco.m"
        transform_hlds__lco__V_39_39 = (transform_hlds__lco__ArgNum_4 + (MR_Integer) 1);
#line 1022 "lco.m"
        {
#line 1022 "lco.m"
          transform_hlds__lco__find_args_to_pass_by_addr_10_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__UnifyInputVars_2, transform_hlds__lco__CallHeadArgs_24, transform_hlds__lco__V_39_39, &transform_hlds__lco__MismatchesTail_31, &transform_hlds__lco__UpdatedCallArgs_28, transform_hlds__lco__STATE_VARIABLE_Subst_0_7, &transform_hlds__lco__STATE_VARIABLE_Subst_40_40, transform_hlds__lco__STATE_VARIABLE_Info_0_9, &transform_hlds__lco__STATE_VARIABLE_Info_41_41);
        }
#line 1025 "lco.m"
        transform_hlds__lco__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 1025 "lco.m"
        transform_hlds__lco__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 1025 "lco.m"
        transform_hlds__lco__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 2)));
#line 1025 "lco.m"
        transform_hlds__lco__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 3)));
#line 1025 "lco.m"
        transform_hlds__lco__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 4)));
#line 1025 "lco.m"
        transform_hlds__lco__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 5)));
#line 1025 "lco.m"
        transform_hlds__lco__V_61_61 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 6)))) & (MR_Integer) 7);
#line 1025 "lco.m"
        transform_hlds__lco__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1025 "lco.m"
        transform_hlds__lco__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1025 "lco.m"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_43_43 == (MR_Integer) 0);
#line 1025 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1025 "lco.m"
          {
#line 1026 "lco.m"
            transform_hlds__lco__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 0)));
#line 1026 "lco.m"
            transform_hlds__lco__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 1)));
#line 1026 "lco.m"
            transform_hlds__lco__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 2)));
#line 1026 "lco.m"
            transform_hlds__lco__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 3)));
#line 1026 "lco.m"
            transform_hlds__lco__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 4)));
#line 1026 "lco.m"
            transform_hlds__lco__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 5)));
#line 1026 "lco.m"
            {
#line 1026 "lco.m"
              hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__lco__V_44_44, transform_hlds__lco__CallArg_22, &transform_hlds__lco__CallArgType_32);
            }
#line 1027 "lco.m"
            {
#line 1027 "lco.m"
              transform_hlds__lco__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(transform_hlds__lco__CallArgType_32, &transform_hlds__lco__CallArgTypeCtor_33);
            }
#line 1025 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 1025 "lco.m"
              {
#line 1028 "lco.m"
                transform_hlds__lco__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__CallArgTypeCtor_33, (MR_Integer) 0)));
#line 1028 "lco.m"
                transform_hlds__lco__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__CallArgTypeCtor_33, (MR_Integer) 1)));
#line 1028 "lco.m"
                transform_hlds__lco__succeeded = (transform_hlds__lco__V_47_47 == (MR_Integer) 0);
#line 1025 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 1025 "lco.m"
                  {
#line 1028 "lco.m"
                    transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__V_45_45)) == (MR_mktag((MR_Integer) 0)));
#line 1028 "lco.m"
                    if (transform_hlds__lco__succeeded)
#line 1028 "lco.m"
                      {
#line 1028 "lco.m"
                        transform_hlds__lco__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_45_45, (MR_Integer) 0)));
#line 1028 "lco.m"
                        transform_hlds__lco__succeeded = (strcmp(transform_hlds__lco__V_46_46, (MR_String) "float") == 0);
#line 1028 "lco.m"
                      }
#line 1025 "lco.m"
                  }
#line 1025 "lco.m"
              }
#line 1025 "lco.m"
          }
#line 1031 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1030 "lco.m"
          {
#line 1030 "lco.m"
            MR_Word transform_hlds__lco__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 0)));
#line 1030 "lco.m"
            MR_Word transform_hlds__lco__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 1)));
#line 1030 "lco.m"
            MR_Word transform_hlds__lco__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 2)));
#line 1030 "lco.m"
            MR_Word transform_hlds__lco__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 3)));
#line 1030 "lco.m"
            MR_Word transform_hlds__lco__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 5)));
#line 1030 "lco.m"
            MR_Word transform_hlds__lco__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 4)));

#line 1030 "lco.m"
            {
#line 1030 "lco.m"
              transform_hlds__lco__STATE_VARIABLE_Info_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1030 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, 0) = ((MR_Box) (transform_hlds__lco__V_68_68));
#line 1030 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, 1) = ((MR_Box) (transform_hlds__lco__V_69_69));
#line 1030 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, 2) = ((MR_Box) (transform_hlds__lco__V_70_70));
#line 1030 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, 3) = ((MR_Box) (transform_hlds__lco__V_71_71));
#line 1030 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1030 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, 5) = ((MR_Box) (transform_hlds__lco__V_73_73));
#line 1030 "lco.m"
            }
#line 1030 "lco.m"
          }
#line 1031 "lco.m"
        else
#line 1031 "lco.m"
          transform_hlds__lco__STATE_VARIABLE_Info_48_48 = transform_hlds__lco__STATE_VARIABLE_Info_41_41;
#line 1034 "lco.m"
        {
#line 1034 "lco.m"
          transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[3], ((MR_Box) (transform_hlds__lco__CallArg_22)), ((MR_Box) (transform_hlds__lco__HeadArg_23)));
        }
#line 1065 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1035 "lco.m"
          {
#line 1035 "lco.m"
            transform_hlds__lco__UpdatedCallArg_27 = transform_hlds__lco__CallArg_22;
#line 1036 "lco.m"
            *transform_hlds__lco__HeadVar__5_5 = transform_hlds__lco__MismatchesTail_31;
#line 1037 "lco.m"
            {
#line 1037 "lco.m"
              transform_hlds__lco__succeeded = mercury__bag__member_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[3], ((MR_Box) (transform_hlds__lco__HeadArg_23)), transform_hlds__lco__UnifyInputVars_2);
            }
#line 1062 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 1061 "lco.m"
              {
#line 1061 "lco.m"
                MR_Word transform_hlds__lco__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 0)));
#line 1061 "lco.m"
                MR_Word transform_hlds__lco__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 1)));
#line 1061 "lco.m"
                MR_Word transform_hlds__lco__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 2)));
#line 1061 "lco.m"
                MR_Word transform_hlds__lco__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 3)));
#line 1061 "lco.m"
                MR_Word transform_hlds__lco__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 5)));
#line 1061 "lco.m"
                MR_Word transform_hlds__lco__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 4)));

#line 1061 "lco.m"
                {
#line 1061 "lco.m"
                  MR_Word base;
#line 1061 "lco.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1061 "lco.m"
                  *transform_hlds__lco__STATE_VARIABLE_Info_10 = base;
#line 1061 "lco.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__V_74_74));
#line 1061 "lco.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__V_75_75));
#line 1061 "lco.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__V_76_76));
#line 1061 "lco.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lco__V_77_77));
#line 1061 "lco.m"
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1061 "lco.m"
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__lco__V_79_79));
#line 1061 "lco.m"
                }
#line 1061 "lco.m"
              }
#line 1062 "lco.m"
            else
#line 1062 "lco.m"
              *transform_hlds__lco__STATE_VARIABLE_Info_10 = transform_hlds__lco__STATE_VARIABLE_Info_48_48;
#line 1035 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_Subst_8 = transform_hlds__lco__STATE_VARIABLE_Subst_40_40;
#line 1035 "lco.m"
          }
#line 1065 "lco.m"
        else
#line 1066 "lco.m"
          {
#line 1066 "lco.m"
            MR_Word transform_hlds__lco__TypeInfo_81_81;
#line 1066 "lco.m"
            MR_Word transform_hlds__lco__V_53_53;

#line 1066 "lco.m"
            {
#line 1066 "lco.m"
              transform_hlds__lco__make_address_var_5_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__CallArg_22, &transform_hlds__lco__UpdatedCallArg_27, transform_hlds__lco__STATE_VARIABLE_Info_48_48, transform_hlds__lco__STATE_VARIABLE_Info_10);
            }
#line 1067 "lco.m"
            {
#line 1067 "lco.m"
              transform_hlds__lco__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1067 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_53_53, 0) = ((MR_Box) (transform_hlds__lco__ArgNum_4));
#line 1067 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_53_53, 1) = ((MR_Box) (transform_hlds__lco__CallArg_22));
#line 1067 "lco.m"
            }
#line 1067 "lco.m"
            {
#line 1067 "lco.m"
              MR_Word base;
#line 1067 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1067 "lco.m"
              *transform_hlds__lco__HeadVar__5_5 = base;
#line 1067 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__V_53_53));
#line 1067 "lco.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__MismatchesTail_31));
#line 1067 "lco.m"
            }
#line 10802 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_81_81 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
#line 1068 "lco.m"
            {
#line 1068 "lco.m"
              mercury__map__det_insert_4_p_0(transform_hlds__lco__TypeInfo_81_81, transform_hlds__lco__TypeInfo_81_81, ((MR_Box) (transform_hlds__lco__CallArg_22)), ((MR_Box) (transform_hlds__lco__UpdatedCallArg_27)), transform_hlds__lco__STATE_VARIABLE_Subst_40_40, transform_hlds__lco__STATE_VARIABLE_Subst_8);
            }
#line 1066 "lco.m"
          }
#line 1021 "lco.m"
        {
#line 1021 "lco.m"
          MR_Word base;
#line 1021 "lco.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "lco.m"
          *transform_hlds__lco__HeadVar__6_6 = base;
#line 1021 "lco.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__UpdatedCallArg_27));
#line 1021 "lco.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__UpdatedCallArgs_28));
#line 1021 "lco.m"
        }
#line 1021 "lco.m"
      }
#line 1018 "lco.m"
  }
#line 1012 "lco.m"
}

#line 984 "lco.m"
static void MR_CALL 
transform_hlds__lco__classify_proc_call_args_7_p_0(
#line 984 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 984 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 984 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 984 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__4_4,
#line 984 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__5_5,
#line 984 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6,
#line 984 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__7_7)
#line 984 "lco.m"
{
#line 988 "lco.m"
  {
#line 988 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 988 "lco.m"
    if ((transform_hlds__lco__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 988 "lco.m"
      if ((transform_hlds__lco__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 988 "lco.m"
        {
#line 988 "lco.m"
          *transform_hlds__lco__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 988 "lco.m"
          *transform_hlds__lco__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 988 "lco.m"
          *transform_hlds__lco__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 988 "lco.m"
        }
#line 988 "lco.m"
      else
#line 989 "lco.m"
        {
#line 990 "lco.m"
          {
#line 990 "lco.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.classify_proc_call_args\'/7", (MR_String) "mismatched lists");
#line 990 "lco.m"
            return;
          }
#line 989 "lco.m"
        }
#line 988 "lco.m"
    else
#line 988 "lco.m"
      {
#line 988 "lco.m"
        MR_Word transform_hlds__lco__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 988 "lco.m"
        MR_Word transform_hlds__lco__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));

#line 988 "lco.m"
        if ((transform_hlds__lco__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 991 "lco.m"
          {
#line 992 "lco.m"
            {
#line 992 "lco.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.classify_proc_call_args\'/7", (MR_String) "mismatched lists");
#line 992 "lco.m"
              return;
            }
#line 991 "lco.m"
          }
#line 988 "lco.m"
        else
#line 994 "lco.m"
          {
#line 994 "lco.m"
            MR_Word transform_hlds__lco__CalleeMode_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__4_4, (MR_Integer) 0)));
#line 994 "lco.m"
            MR_Word transform_hlds__lco__CalleeModes_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__4_4, (MR_Integer) 1)));
#line 994 "lco.m"
            MR_Word transform_hlds__lco__CalleeType_39;
#line 994 "lco.m"
            MR_Word transform_hlds__lco__ArgMode_40;
#line 994 "lco.m"
            MR_Word transform_hlds__lco__STATE_VARIABLE_InArgs_44_44;
#line 994 "lco.m"
            MR_Word transform_hlds__lco__STATE_VARIABLE_OutArgs_45_45;
#line 994 "lco.m"
            MR_Word transform_hlds__lco__STATE_VARIABLE_UnusedArgs_46_46;

#line 995 "lco.m"
            {
#line 995 "lco.m"
              transform_hlds__lco__classify_proc_call_args_7_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__HeadVar__2_2, transform_hlds__lco__V_50_50, transform_hlds__lco__CalleeModes_35, &transform_hlds__lco__STATE_VARIABLE_InArgs_44_44, &transform_hlds__lco__STATE_VARIABLE_OutArgs_45_45, &transform_hlds__lco__STATE_VARIABLE_UnusedArgs_46_46);
            }
#line 997 "lco.m"
            {
#line 997 "lco.m"
              hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__lco__HeadVar__2_2, transform_hlds__lco__V_51_51, &transform_hlds__lco__CalleeType_39);
            }
#line 998 "lco.m"
            {
#line 998 "lco.m"
              check_hlds__mode_util__mode_to_arg_mode_4_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__CalleeMode_34, transform_hlds__lco__CalleeType_39, &transform_hlds__lco__ArgMode_40);
            }
#line 1002 "lco.m"
#line 1002 "lco.m"
            switch (transform_hlds__lco__ArgMode_40) {
#line 1002 "lco.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1002 "lco.m"
              case (MR_Integer) 0:
#line 1000 "lco.m"
                {
#line 1001 "lco.m"
                  {
#line 1001 "lco.m"
                    MR_Word base;
#line 1001 "lco.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1001 "lco.m"
                    *transform_hlds__lco__HeadVar__5_5 = base;
#line 1001 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__V_51_51));
#line 1001 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_InArgs_44_44));
#line 1001 "lco.m"
                  }
#line 1000 "lco.m"
                  *transform_hlds__lco__HeadVar__6_6 = transform_hlds__lco__STATE_VARIABLE_OutArgs_45_45;
#line 1000 "lco.m"
                  *transform_hlds__lco__HeadVar__7_7 = transform_hlds__lco__STATE_VARIABLE_UnusedArgs_46_46;
#line 1000 "lco.m"
                }
#line 1002 "lco.m"
                break;
#line 1002 "lco.m"
              case (MR_Integer) 1:
#line 1003 "lco.m"
                {
#line 1004 "lco.m"
                  {
#line 1004 "lco.m"
                    MR_Word base;
#line 1004 "lco.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1004 "lco.m"
                    *transform_hlds__lco__HeadVar__6_6 = base;
#line 1004 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__V_51_51));
#line 1004 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_OutArgs_45_45));
#line 1004 "lco.m"
                  }
#line 1003 "lco.m"
                  *transform_hlds__lco__HeadVar__5_5 = transform_hlds__lco__STATE_VARIABLE_InArgs_44_44;
#line 1003 "lco.m"
                  *transform_hlds__lco__HeadVar__7_7 = transform_hlds__lco__STATE_VARIABLE_UnusedArgs_46_46;
#line 1003 "lco.m"
                }
#line 1002 "lco.m"
                break;
#line 1002 "lco.m"
              case (MR_Integer) 2:
#line 1006 "lco.m"
                {
#line 1007 "lco.m"
                  {
#line 1007 "lco.m"
                    MR_Word base;
#line 1007 "lco.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1007 "lco.m"
                    *transform_hlds__lco__HeadVar__7_7 = base;
#line 1007 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__V_51_51));
#line 1007 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_UnusedArgs_46_46));
#line 1007 "lco.m"
                  }
#line 1006 "lco.m"
                  *transform_hlds__lco__HeadVar__5_5 = transform_hlds__lco__STATE_VARIABLE_InArgs_44_44;
#line 1006 "lco.m"
                  *transform_hlds__lco__HeadVar__6_6 = transform_hlds__lco__STATE_VARIABLE_OutArgs_45_45;
#line 1006 "lco.m"
                }
#line 1002 "lco.m"
                break;
#line 1002 "lco.m"
            }
#line 994 "lco.m"
          }
#line 988 "lco.m"
      }
#line 988 "lco.m"
  }
#line 984 "lco.m"
}

#line 951 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__update_call_args_6_p_0_1(
#line 951 "lco.m"
  MR_Box transform_hlds__lco__closure_arg)
#line 951 "lco.m"
{
#line 951 "lco.m"
  {
#line 951 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 951 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

#line 951 "lco.m"
    {
#line 951 "lco.m"
      transform_hlds__lco__succeeded = transform_hlds__lco__IntroducedFrom__pred__update_call_args__951__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))));
    }
#line 951 "lco.m"
    return transform_hlds__lco__succeeded;
#line 951 "lco.m"
  }
#line 951 "lco.m"
}

#line 947 "lco.m"
static void MR_CALL 
transform_hlds__lco__update_call_args_6_p_0(
#line 947 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 947 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 947 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 947 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__4_4,
#line 947 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 947 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6)
#line 947 "lco.m"
{
#line 950 "lco.m"
  {
#line 950 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 950 "lco.m"
    if ((transform_hlds__lco__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 950 "lco.m"
      if ((transform_hlds__lco__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 950 "lco.m"
        {
#line 950 "lco.m"
          MR_Word transform_hlds__lco__V_10_10;

#line 950 "lco.m"
          *transform_hlds__lco__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 951 "lco.m"
          {
#line 951 "lco.m"
            transform_hlds__lco__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 951 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_10_10, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_7[3]));
#line 951 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_10_10, 1) = ((MR_Box) (transform_hlds__lco__update_call_args_6_p_0_1));
#line 951 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 951 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_10_10, 3) = ((MR_Box) (transform_hlds__lco__HeadVar__5_5));
#line 951 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_10_10, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 951 "lco.m"
          }
#line 951 "lco.m"
          {
#line 951 "lco.m"
            mercury__require__expect_4_p_0(transform_hlds__lco__V_10_10, (MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_call_args\'/6", (MR_String) "updating nonexistent arg");
          }
#line 950 "lco.m"
        }
#line 950 "lco.m"
      else
#line 953 "lco.m"
        {
#line 954 "lco.m"
          {
#line 954 "lco.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_call_args\'/6", (MR_String) "mismatched lists");
#line 954 "lco.m"
            return;
          }
#line 953 "lco.m"
        }
#line 950 "lco.m"
    else
#line 950 "lco.m"
      {
#line 950 "lco.m"
        MR_Word transform_hlds__lco__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 950 "lco.m"
        MR_Word transform_hlds__lco__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));

#line 950 "lco.m"
        if ((transform_hlds__lco__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 955 "lco.m"
          {
#line 956 "lco.m"
            {
#line 956 "lco.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_call_args\'/6", (MR_String) "mismatched lists");
#line 956 "lco.m"
              return;
            }
#line 955 "lco.m"
          }
#line 950 "lco.m"
        else
#line 958 "lco.m"
          {
#line 958 "lco.m"
            MR_Word transform_hlds__lco__Arg_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__4_4, (MR_Integer) 0)));
#line 958 "lco.m"
            MR_Word transform_hlds__lco__Args_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__4_4, (MR_Integer) 1)));
#line 958 "lco.m"
            MR_Word transform_hlds__lco__CalleeType_41;
#line 958 "lco.m"
            MR_Word transform_hlds__lco__ArgMode_42;

#line 959 "lco.m"
            {
#line 959 "lco.m"
              hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__lco__HeadVar__2_2, transform_hlds__lco__Arg_37, &transform_hlds__lco__CalleeType_41);
            }
#line 960 "lco.m"
            {
#line 960 "lco.m"
              check_hlds__mode_util__mode_to_arg_mode_4_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__V_62_62, transform_hlds__lco__CalleeType_41, &transform_hlds__lco__ArgMode_42);
            }
#line 966 "lco.m"
#line 966 "lco.m"
            switch (transform_hlds__lco__ArgMode_42) {
#line 966 "lco.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 966 "lco.m"
              case (MR_Integer) 0:
#line 962 "lco.m"
                {
#line 962 "lco.m"
                  MR_Word transform_hlds__lco__STATE_VARIABLE_UpdatedArgs_55_55;

#line 963 "lco.m"
                  {
#line 963 "lco.m"
                    transform_hlds__lco__update_call_args_6_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__HeadVar__2_2, transform_hlds__lco__V_61_61, transform_hlds__lco__Args_38, transform_hlds__lco__HeadVar__5_5, &transform_hlds__lco__STATE_VARIABLE_UpdatedArgs_55_55);
                  }
#line 965 "lco.m"
                  {
#line 965 "lco.m"
                    MR_Word base;
#line 965 "lco.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 965 "lco.m"
                    *transform_hlds__lco__HeadVar__6_6 = base;
#line 965 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Arg_37));
#line 965 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_UpdatedArgs_55_55));
#line 965 "lco.m"
                  }
#line 962 "lco.m"
                }
#line 966 "lco.m"
                break;
#line 966 "lco.m"
              case (MR_Integer) 1:
#line 967 "lco.m"
                {
#line 967 "lco.m"
                  MR_Word transform_hlds__lco__UpdatedArg_43;
#line 967 "lco.m"
                  MR_Word transform_hlds__lco__STATE_VARIABLE_UpdatedArgs_53_53;
#line 967 "lco.m"
                  MR_Word transform_hlds__lco__STATE_VARIABLE_UpdatedCallOutArgs_52_57;

#line 970 "lco.m"
                  if ((transform_hlds__lco__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 971 "lco.m"
                    {
#line 972 "lco.m"
                      {
#line 972 "lco.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_call_args\'/6", (MR_String) "no UpdatedCallOutArgs");
#line 972 "lco.m"
                        return;
                      }
#line 971 "lco.m"
                    }
#line 970 "lco.m"
                  else
#line 969 "lco.m"
                    {
#line 969 "lco.m"
                      transform_hlds__lco__UpdatedArg_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__5_5, (MR_Integer) 0)));
#line 969 "lco.m"
                      transform_hlds__lco__STATE_VARIABLE_UpdatedCallOutArgs_52_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__5_5, (MR_Integer) 1)));
#line 969 "lco.m"
                    }
#line 974 "lco.m"
                  {
#line 974 "lco.m"
                    transform_hlds__lco__update_call_args_6_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__HeadVar__2_2, transform_hlds__lco__V_61_61, transform_hlds__lco__Args_38, transform_hlds__lco__STATE_VARIABLE_UpdatedCallOutArgs_52_57, &transform_hlds__lco__STATE_VARIABLE_UpdatedArgs_53_53);
                  }
#line 976 "lco.m"
                  {
#line 976 "lco.m"
                    MR_Word base;
#line 976 "lco.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 976 "lco.m"
                    *transform_hlds__lco__HeadVar__6_6 = base;
#line 976 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__UpdatedArg_43));
#line 976 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_UpdatedArgs_53_53));
#line 976 "lco.m"
                  }
#line 967 "lco.m"
                }
#line 966 "lco.m"
                break;
#line 966 "lco.m"
              case (MR_Integer) 2:
#line 978 "lco.m"
                {
#line 979 "lco.m"
                  {
#line 979 "lco.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_call_args\'/6", (MR_String) "top_unused");
#line 979 "lco.m"
                    return;
                  }
#line 978 "lco.m"
                }
#line 966 "lco.m"
                break;
#line 966 "lco.m"
            }
#line 958 "lco.m"
          }
#line 950 "lco.m"
      }
#line 950 "lco.m"
  }
#line 947 "lco.m"
}

#line 868 "lco.m"
static void MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0_2(
#line 868 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 868 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 868 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 868 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_3,
#line 868 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_4,
#line 868 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_5,
#line 868 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_6)
#line 868 "lco.m"
{
#line 868 "lco.m"
  {
#line 868 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 868 "lco.m"
    MR_Word transform_hlds__lco__conv2_Goal_12;
#line 868 "lco.m"
    MR_Word transform_hlds__lco__conv1_STATE_VARIABLE_AddrVarFieldIds_60;
#line 868 "lco.m"
    MR_Word transform_hlds__lco__conv0_STATE_VARIABLE_Info_62;

#line 868 "lco.m"
    {
#line 868 "lco.m"
      transform_hlds__lco__update_construct_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), &transform_hlds__lco__conv2_Goal_12, ((MR_Word) transform_hlds__lco__wrapper_arg_3), &transform_hlds__lco__conv1_STATE_VARIABLE_AddrVarFieldIds_60, ((MR_Word) transform_hlds__lco__wrapper_arg_5), &transform_hlds__lco__conv0_STATE_VARIABLE_Info_62);
    }
#line 868 "lco.m"
    *transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv2_Goal_12));
#line 868 "lco.m"
    *transform_hlds__lco__wrapper_arg_4 = ((MR_Box) (transform_hlds__lco__conv1_STATE_VARIABLE_AddrVarFieldIds_60));
#line 868 "lco.m"
    *transform_hlds__lco__wrapper_arg_6 = ((MR_Box) (transform_hlds__lco__conv0_STATE_VARIABLE_Info_62));
#line 868 "lco.m"
  }
#line 868 "lco.m"
}

#line 866 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0_1(
#line 866 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 866 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1)
#line 866 "lco.m"
{
#line 866 "lco.m"
  {
#line 866 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 866 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

#line 866 "lco.m"
    {
#line 866 "lco.m"
      transform_hlds__lco__succeeded = transform_hlds__lco__occurs_once_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
#line 866 "lco.m"
    return transform_hlds__lco__succeeded;
#line 866 "lco.m"
  }
#line 866 "lco.m"
}

#line 826 "lco.m"
static void MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0(
#line 826 "lco.m"
  MR_Word transform_hlds__lco__CallGoal_9,
#line 826 "lco.m"
  MR_Word transform_hlds__lco__CallOutArgs_10,
#line 826 "lco.m"
  MR_Word transform_hlds__lco__UnifyGoals_11,
#line 826 "lco.m"
  MR_Word transform_hlds__lco__UnifyInputVars_12,
#line 826 "lco.m"
  MR_Word * transform_hlds__lco__MaybeGoals_13,
#line 826 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_57,
#line 826 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_58,
#line 826 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_15)
#line 826 "lco.m"
{
#line 831 "lco.m"
  {
#line 831 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 831 "lco.m"
    MR_Word transform_hlds__lco__CallGoalExpr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__CallGoal_9, (MR_Integer) 0)));
#line 831 "lco.m"
    MR_Word transform_hlds__lco__CallGoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__CallGoal_9, (MR_Integer) 1)));
#line 831 "lco.m"
    MR_Word transform_hlds__lco__ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_57, (MR_Integer) 0)));
#line 831 "lco.m"
    MR_Word transform_hlds__lco__ProcInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 4)));
#line 831 "lco.m"
    MR_Word transform_hlds__lco__VarTypes_20;
#line 833 "lco.m"
    MR_Word transform_hlds__lco__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_57, (MR_Integer) 1)));
#line 833 "lco.m"
    MR_Word transform_hlds__lco__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_57, (MR_Integer) 2)));
#line 833 "lco.m"
    MR_Word transform_hlds__lco__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_57, (MR_Integer) 3)));
#line 833 "lco.m"
    MR_Word transform_hlds__lco__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_57, (MR_Integer) 4)));
#line 833 "lco.m"
    MR_Word transform_hlds__lco__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_57, (MR_Integer) 5)));
#line 834 "lco.m"
    MR_Word transform_hlds__lco__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 0)));
#line 834 "lco.m"
    MR_Word transform_hlds__lco__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 1)));
#line 834 "lco.m"
    MR_Word transform_hlds__lco__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 2)));
#line 834 "lco.m"
    MR_Word transform_hlds__lco__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 3)));
#line 834 "lco.m"
    MR_Word transform_hlds__lco__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 5)));
#line 834 "lco.m"
    MR_Word transform_hlds__lco__V_123_123 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 6)))) & (MR_Integer) 7);
#line 834 "lco.m"
    MR_Word transform_hlds__lco__V_124_124 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 834 "lco.m"
    MR_Word transform_hlds__lco__V_125_125 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 941 "lco.m"
    MR_Word transform_hlds__lco__PredId_21;
#line 941 "lco.m"
    MR_Integer transform_hlds__lco__ProcId_22;
#line 941 "lco.m"
    MR_Word transform_hlds__lco__Args_23;
#line 941 "lco.m"
    MR_Word transform_hlds__lco__Builtin_24;
#line 941 "lco.m"
    MR_Word transform_hlds__lco__UnifyContext_25;
#line 941 "lco.m"
    MR_Word transform_hlds__lco__UpdatedCallOutArgs_30;
#line 941 "lco.m"
    MR_Word transform_hlds__lco__UpdatedUnifyGoals_36;
#line 941 "lco.m"
    MR_Word transform_hlds__lco__VariantPredProcId_41;
#line 941 "lco.m"
    MR_Word transform_hlds__lco__VariantSymName_42;
#line 941 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_Info_103_103;
#line 838 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_153_153;
#line 838 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_158_158;
#line 838 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_166_166;
#line 838 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_167_167;
#line 838 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_168_168;
#line 838 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_169_169;
#line 838 "lco.m"
    MR_Word transform_hlds__lco__SymName_26;
#line 838 "lco.m"
    MR_Word transform_hlds__lco__CurrProcOutArgs_27;
#line 838 "lco.m"
    MR_Word transform_hlds__lco__CallHeadPairs_28;
#line 838 "lco.m"
    MR_Word transform_hlds__lco__Mismatches_29;
#line 838 "lco.m"
    MR_Word transform_hlds__lco__Subst_31;
#line 838 "lco.m"
    MR_Word transform_hlds__lco__MismatchedCallArgs_35;
#line 838 "lco.m"
    MR_Word transform_hlds__lco__AddrFieldIds_37;
#line 838 "lco.m"
    MR_Word transform_hlds__lco__HighLevelData_39;
#line 838 "lco.m"
    MR_Word transform_hlds__lco__VariantArgs_40;
#line 838 "lco.m"
    MR_Integer transform_hlds__lco__V_59_59;
#line 838 "lco.m"
    MR_Word transform_hlds__lco__V_60_60;
#line 838 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_Info_61_61;
#line 838 "lco.m"
    MR_Word transform_hlds__lco__V_82_82;
#line 838 "lco.m"
    MR_Word transform_hlds__lco__V_83_83;
#line 838 "lco.m"
    MR_Word transform_hlds__lco__V_84_84;
#line 838 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_Info_85_85;
#line 839 "lco.m"
    MR_Word transform_hlds__lco__V_126_126;
#line 839 "lco.m"
    MR_Word transform_hlds__lco__V_127_127;
#line 839 "lco.m"
    MR_Word transform_hlds__lco__V_128_128;
#line 839 "lco.m"
    MR_Word transform_hlds__lco__V_129_129;
#line 839 "lco.m"
    MR_Word transform_hlds__lco__V_130_130;
#line 839 "lco.m"
    MR_Word transform_hlds__lco__V_131_131;
#line 839 "lco.m"
    MR_Word transform_hlds__lco__V_132_132;
#line 839 "lco.m"
    MR_Word transform_hlds__lco__V_133_133;
#line 862 "lco.m"
    MR_Word transform_hlds__lco__V_33_33;
#line 862 "lco.m"
    MR_Word transform_hlds__lco__V_34_34;
#line 868 "lco.m"
    MR_Box transform_hlds__lco__conv4_AddrFieldIds_37;
#line 868 "lco.m"
    MR_Box transform_hlds__lco__conv3_STATE_VARIABLE_Info_85_85;
#line 884 "lco.m"
    MR_Word transform_hlds__lco__V_139_139;
#line 884 "lco.m"
    MR_Word transform_hlds__lco__V_140_140;
#line 884 "lco.m"
    MR_Word transform_hlds__lco__V_141_141;
#line 884 "lco.m"
    MR_Word transform_hlds__lco__V_142_142;
#line 884 "lco.m"
    MR_Word transform_hlds__lco__V_143_143;
#line 884 "lco.m"
    MR_Word transform_hlds__lco__V_144_144;
#line 884 "lco.m"
    MR_Word transform_hlds__lco__V_145_145;
#line 884 "lco.m"
    MR_Word transform_hlds__lco__V_146_146;

#line 835 "lco.m"
    {
#line 835 "lco.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lco__ProcInfo_19, &transform_hlds__lco__VarTypes_20);
    }
#line 837 "lco.m"
    transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__CallGoalExpr_16)) == (MR_mktag((MR_Integer) 2)));
#line 837 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 837 "lco.m"
      {
#line 837 "lco.m"
        transform_hlds__lco__PredId_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__CallGoalExpr_16, (MR_Integer) 0)));
#line 837 "lco.m"
        transform_hlds__lco__ProcId_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__lco__CallGoalExpr_16, (MR_Integer) 1)));
#line 837 "lco.m"
        transform_hlds__lco__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__CallGoalExpr_16, (MR_Integer) 2)));
#line 837 "lco.m"
        transform_hlds__lco__Builtin_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__CallGoalExpr_16, (MR_Integer) 3)));
#line 837 "lco.m"
        transform_hlds__lco__UnifyContext_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__CallGoalExpr_16, (MR_Integer) 4)));
#line 837 "lco.m"
        transform_hlds__lco__SymName_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__CallGoalExpr_16, (MR_Integer) 5)));
#line 839 "lco.m"
        transform_hlds__lco__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 0)));
#line 839 "lco.m"
        transform_hlds__lco__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 1)));
#line 839 "lco.m"
        transform_hlds__lco__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 2)));
#line 839 "lco.m"
        transform_hlds__lco__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 3)));
#line 839 "lco.m"
        transform_hlds__lco__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 4)));
#line 839 "lco.m"
        transform_hlds__lco__CurrProcOutArgs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 5)));
#line 839 "lco.m"
        transform_hlds__lco__V_131_131 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 6)))) & (MR_Integer) 7);
#line 839 "lco.m"
        transform_hlds__lco__V_132_132 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 839 "lco.m"
        transform_hlds__lco__V_133_133 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 11572 "transform_hlds.lco.c"
        transform_hlds__lco__TypeInfo_153_153 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
#line 840 "lco.m"
        {
#line 840 "lco.m"
          mercury__assoc_list__from_corresponding_lists_3_p_0(transform_hlds__lco__TypeInfo_153_153, transform_hlds__lco__TypeInfo_153_153, transform_hlds__lco__CallOutArgs_10, transform_hlds__lco__CurrProcOutArgs_27, &transform_hlds__lco__CallHeadPairs_28);
        }
#line 843 "lco.m"
        transform_hlds__lco__V_59_59 = (MR_Integer) 1;
#line 843 "lco.m"
        {
#line 843 "lco.m"
          transform_hlds__lco__V_60_60 = mercury__map__init_0_f_0(transform_hlds__lco__TypeInfo_153_153, transform_hlds__lco__TypeInfo_153_153);
        }
#line 842 "lco.m"
        {
#line 842 "lco.m"
          transform_hlds__lco__find_args_to_pass_by_addr_10_p_0(transform_hlds__lco__ConstInfo_15, transform_hlds__lco__UnifyInputVars_12, transform_hlds__lco__CallHeadPairs_28, transform_hlds__lco__V_59_59, &transform_hlds__lco__Mismatches_29, &transform_hlds__lco__UpdatedCallOutArgs_30, transform_hlds__lco__V_60_60, &transform_hlds__lco__Subst_31, transform_hlds__lco__STATE_VARIABLE_Info_0_57, &transform_hlds__lco__STATE_VARIABLE_Info_61_61);
        }
#line 862 "lco.m"
        transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__Mismatches_29)) == (MR_mktag((MR_Integer) 1)));
#line 862 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 862 "lco.m"
          {
#line 862 "lco.m"
            transform_hlds__lco__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__Mismatches_29, (MR_Integer) 0)));
#line 862 "lco.m"
            transform_hlds__lco__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__Mismatches_29, (MR_Integer) 1)));
#line 11601 "transform_hlds.lco.c"
            transform_hlds__lco__TypeCtorInfo_158_158 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 863 "lco.m"
            {
#line 863 "lco.m"
              mercury__assoc_list__values_2_p_0(transform_hlds__lco__TypeCtorInfo_158_158, transform_hlds__lco__TypeInfo_153_153, transform_hlds__lco__Mismatches_29, &transform_hlds__lco__MismatchedCallArgs_35);
            }
#line 866 "lco.m"
            {
#line 866 "lco.m"
              transform_hlds__lco__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 866 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_82_82, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_7[2]));
#line 866 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_82_82, 1) = ((MR_Box) (transform_hlds__lco__transform_call_and_unifies_8_p_0_1));
#line 866 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_82_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 866 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_82_82, 3) = ((MR_Box) (transform_hlds__lco__UnifyInputVars_12));
#line 866 "lco.m"
            }
#line 866 "lco.m"
            {
#line 866 "lco.m"
              transform_hlds__lco__succeeded = mercury__list__all_true_2_p_0(transform_hlds__lco__TypeInfo_153_153, transform_hlds__lco__V_82_82, transform_hlds__lco__MismatchedCallArgs_35);
            }
#line 838 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 838 "lco.m"
              {
#line 11631 "transform_hlds.lco.c"
                transform_hlds__lco__TypeCtorInfo_166_166 = (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0;
#line 868 "lco.m"
                {
#line 868 "lco.m"
                  transform_hlds__lco__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 868 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_83_83, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_9[0]));
#line 868 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_83_83, 1) = ((MR_Box) (transform_hlds__lco__transform_call_and_unifies_8_p_0_2));
#line 868 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_83_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 868 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_83_83, 3) = ((MR_Box) (transform_hlds__lco__ConstInfo_15));
#line 868 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_83_83, 4) = ((MR_Box) (transform_hlds__lco__Subst_31));
#line 868 "lco.m"
                }
#line 869 "lco.m"
                {
#line 869 "lco.m"
                  transform_hlds__lco__V_84_84 = mercury__map__init_0_f_0(transform_hlds__lco__TypeInfo_153_153, transform_hlds__lco__TypeCtorInfo_166_166);
                }
#line 11654 "transform_hlds.lco.c"
                transform_hlds__lco__TypeCtorInfo_167_167 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 11656 "transform_hlds.lco.c"
                transform_hlds__lco__TypeInfo_168_168 = (MR_Word) &transform_hlds__lco_scalar_common_2[5];
#line 11658 "transform_hlds.lco.c"
                transform_hlds__lco__TypeCtorInfo_169_169 = (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_info_0;
#line 868 "lco.m"
                {
#line 868 "lco.m"
                  mercury__list__map_foldl2_7_p_0(transform_hlds__lco__TypeCtorInfo_167_167, transform_hlds__lco__TypeCtorInfo_167_167, transform_hlds__lco__TypeInfo_168_168, transform_hlds__lco__TypeCtorInfo_169_169, transform_hlds__lco__V_83_83, transform_hlds__lco__UnifyGoals_11, &transform_hlds__lco__UpdatedUnifyGoals_36, ((MR_Box) (transform_hlds__lco__V_84_84)), &transform_hlds__lco__conv4_AddrFieldIds_37, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_Info_61_61)), &transform_hlds__lco__conv3_STATE_VARIABLE_Info_85_85);
                }
#line 868 "lco.m"
                transform_hlds__lco__AddrFieldIds_37 = ((MR_Word) transform_hlds__lco__conv4_AddrFieldIds_37);
#line 868 "lco.m"
                transform_hlds__lco__STATE_VARIABLE_Info_85_85 = ((MR_Word) transform_hlds__lco__conv3_STATE_VARIABLE_Info_85_85);
#line 884 "lco.m"
                transform_hlds__lco__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 0)));
#line 884 "lco.m"
                transform_hlds__lco__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 1)));
#line 884 "lco.m"
                transform_hlds__lco__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 2)));
#line 884 "lco.m"
                transform_hlds__lco__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 3)));
#line 884 "lco.m"
                transform_hlds__lco__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 4)));
#line 884 "lco.m"
                transform_hlds__lco__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 5)));
#line 884 "lco.m"
                transform_hlds__lco__V_145_145 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 6)))) & (MR_Integer) 7);
#line 884 "lco.m"
                transform_hlds__lco__V_146_146 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 884 "lco.m"
                transform_hlds__lco__HighLevelData_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 885 "lco.m"
                {
#line 885 "lco.m"
                  transform_hlds__lco__make_variant_args_4_p_0(transform_hlds__lco__HighLevelData_39, transform_hlds__lco__AddrFieldIds_37, transform_hlds__lco__Mismatches_29, &transform_hlds__lco__VariantArgs_40);
                }
#line 887 "lco.m"
                {
#line 887 "lco.m"
                  transform_hlds__lco__succeeded = transform_hlds__lco__ensure_variant_exists_8_p_0(transform_hlds__lco__PredId_21, transform_hlds__lco__ProcId_22, transform_hlds__lco__VariantArgs_40, &transform_hlds__lco__VariantPredProcId_41, transform_hlds__lco__SymName_26, &transform_hlds__lco__VariantSymName_42, transform_hlds__lco__STATE_VARIABLE_Info_85_85, &transform_hlds__lco__STATE_VARIABLE_Info_103_103);
                }
#line 838 "lco.m"
              }
#line 862 "lco.m"
          }
#line 837 "lco.m"
      }
#line 941 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 890 "lco.m"
      {
#line 890 "lco.m"
        MR_Word transform_hlds__lco__CalleeProcInfo_43;
#line 890 "lco.m"
        MR_Word transform_hlds__lco__CalleeModes_44;
#line 890 "lco.m"
        MR_Word transform_hlds__lco__UpdatedArgs_45;
#line 890 "lco.m"
        MR_Word transform_hlds__lco__VariantPredId_46;
#line 890 "lco.m"
        MR_Integer transform_hlds__lco__VariantProcId_47;
#line 890 "lco.m"
        MR_Word transform_hlds__lco__UpdatedGoalExpr_48;
#line 890 "lco.m"
        MR_Word transform_hlds__lco__OrigCallPurity_49;
#line 890 "lco.m"
        MR_Word transform_hlds__lco__UpdatedGoalInfo_50;
#line 890 "lco.m"
        MR_Word transform_hlds__lco__UpdatedGoal_51;
#line 890 "lco.m"
        MR_Word transform_hlds__lco__Goals_52;
#line 890 "lco.m"
        MR_Word transform_hlds__lco__V_105_105;
#line 940 "lco.m"
        MR_Word transform_hlds__lco__V_147_147;
#line 940 "lco.m"
        MR_Word transform_hlds__lco__V_148_148;
#line 940 "lco.m"
        MR_Word transform_hlds__lco__V_149_149;
#line 940 "lco.m"
        MR_Word transform_hlds__lco__V_150_150;
#line 940 "lco.m"
        MR_Word transform_hlds__lco__V_151_151;
#line 940 "lco.m"
        MR_Word transform_hlds__lco__V_152_152;

#line 890 "lco.m"
        {
#line 890 "lco.m"
          hlds__hlds_module__module_info_proc_info_4_p_0(transform_hlds__lco__ModuleInfo_18, transform_hlds__lco__PredId_21, transform_hlds__lco__ProcId_22, &transform_hlds__lco__CalleeProcInfo_43);
        }
#line 891 "lco.m"
        {
#line 891 "lco.m"
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__lco__CalleeProcInfo_43, &transform_hlds__lco__CalleeModes_44);
        }
#line 892 "lco.m"
        {
#line 892 "lco.m"
          transform_hlds__lco__update_call_args_6_p_0(transform_hlds__lco__ModuleInfo_18, transform_hlds__lco__VarTypes_20, transform_hlds__lco__CalleeModes_44, transform_hlds__lco__Args_23, transform_hlds__lco__UpdatedCallOutArgs_30, &transform_hlds__lco__UpdatedArgs_45);
        }
#line 894 "lco.m"
        transform_hlds__lco__VariantPredId_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantPredProcId_41, (MR_Integer) 0)));
#line 894 "lco.m"
        transform_hlds__lco__VariantProcId_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantPredProcId_41, (MR_Integer) 1)));
#line 895 "lco.m"
        {
#line 895 "lco.m"
          transform_hlds__lco__UpdatedGoalExpr_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 895 "lco.m"
          MR_hl_field(MR_mktag(2), transform_hlds__lco__UpdatedGoalExpr_48, 0) = ((MR_Box) (transform_hlds__lco__VariantPredId_46));
#line 895 "lco.m"
          MR_hl_field(MR_mktag(2), transform_hlds__lco__UpdatedGoalExpr_48, 1) = ((MR_Box) (transform_hlds__lco__VariantProcId_47));
#line 895 "lco.m"
          MR_hl_field(MR_mktag(2), transform_hlds__lco__UpdatedGoalExpr_48, 2) = ((MR_Box) (transform_hlds__lco__UpdatedArgs_45));
#line 895 "lco.m"
          MR_hl_field(MR_mktag(2), transform_hlds__lco__UpdatedGoalExpr_48, 3) = ((MR_Box) (transform_hlds__lco__Builtin_24));
#line 895 "lco.m"
          MR_hl_field(MR_mktag(2), transform_hlds__lco__UpdatedGoalExpr_48, 4) = ((MR_Box) (transform_hlds__lco__UnifyContext_25));
#line 895 "lco.m"
          MR_hl_field(MR_mktag(2), transform_hlds__lco__UpdatedGoalExpr_48, 5) = ((MR_Box) (transform_hlds__lco__VariantSymName_42));
#line 895 "lco.m"
        }
#line 897 "lco.m"
        {
#line 897 "lco.m"
          transform_hlds__lco__OrigCallPurity_49 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__lco__CallGoalInfo_17);
        }
#line 906 "lco.m"
        {
#line 906 "lco.m"
          hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, transform_hlds__lco__CallGoalInfo_17, &transform_hlds__lco__UpdatedGoalInfo_50);
        }
#line 907 "lco.m"
        {
#line 907 "lco.m"
          transform_hlds__lco__UpdatedGoal_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 907 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__UpdatedGoal_51, 0) = ((MR_Box) (transform_hlds__lco__UpdatedGoalExpr_48));
#line 907 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__UpdatedGoal_51, 1) = ((MR_Box) (transform_hlds__lco__UpdatedGoalInfo_50));
#line 907 "lco.m"
        }
#line 908 "lco.m"
        {
#line 908 "lco.m"
          transform_hlds__lco__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 908 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_105_105, 0) = ((MR_Box) (transform_hlds__lco__UpdatedGoal_51));
#line 908 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 908 "lco.m"
        }
#line 908 "lco.m"
        {
#line 908 "lco.m"
          transform_hlds__lco__Goals_52 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__lco__UpdatedUnifyGoals_36, transform_hlds__lco__V_105_105);
        }
#line 909 "lco.m"
        transform_hlds__lco__succeeded = (transform_hlds__lco__OrigCallPurity_49 == (MR_Integer) 2);
#line 912 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 911 "lco.m"
          {
#line 911 "lco.m"
            MR_Word base;
#line 911 "lco.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 911 "lco.m"
            *transform_hlds__lco__MaybeGoals_13 = base;
#line 911 "lco.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Goals_52));
#line 911 "lco.m"
          }
#line 912 "lco.m"
        else
#line 934 "lco.m"
          {
#line 934 "lco.m"
            MR_Word transform_hlds__lco__ConjGoalExpr_53;
#line 934 "lco.m"
            MR_Word transform_hlds__lco__ConjGoal_54;
#line 934 "lco.m"
            MR_Word transform_hlds__lco__PromiseGoalExpr_55;
#line 934 "lco.m"
            MR_Word transform_hlds__lco__PromiseGoal_56;
#line 934 "lco.m"
            MR_Word transform_hlds__lco__V_108_108;
#line 934 "lco.m"
            MR_Word transform_hlds__lco__V_109_109;

#line 934 "lco.m"
            {
#line 934 "lco.m"
              transform_hlds__lco__ConjGoalExpr_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 934 "lco.m"
              MR_hl_field(MR_mktag(3), transform_hlds__lco__ConjGoalExpr_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 934 "lco.m"
              MR_hl_field(MR_mktag(3), transform_hlds__lco__ConjGoalExpr_53, 1) = ((MR_Box) ((MR_Integer) 0));
#line 934 "lco.m"
              MR_hl_field(MR_mktag(3), transform_hlds__lco__ConjGoalExpr_53, 2) = ((MR_Box) (transform_hlds__lco__Goals_52));
#line 934 "lco.m"
            }
#line 935 "lco.m"
            {
#line 935 "lco.m"
              transform_hlds__lco__ConjGoal_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 935 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__ConjGoal_54, 0) = ((MR_Box) (transform_hlds__lco__ConjGoalExpr_53));
#line 935 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__ConjGoal_54, 1) = ((MR_Box) (transform_hlds__lco__UpdatedGoalInfo_50));
#line 935 "lco.m"
            }
#line 936 "lco.m"
            {
#line 936 "lco.m"
              transform_hlds__lco__V_108_108 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 936 "lco.m"
              MR_hl_field(MR_mktag(2), transform_hlds__lco__V_108_108, 0) = ((MR_Box) (transform_hlds__lco__OrigCallPurity_49));
#line 936 "lco.m"
            }
#line 936 "lco.m"
            {
#line 936 "lco.m"
              transform_hlds__lco__PromiseGoalExpr_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 936 "lco.m"
              MR_hl_field(MR_mktag(3), transform_hlds__lco__PromiseGoalExpr_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 936 "lco.m"
              MR_hl_field(MR_mktag(3), transform_hlds__lco__PromiseGoalExpr_55, 1) = ((MR_Box) (transform_hlds__lco__V_108_108));
#line 936 "lco.m"
              MR_hl_field(MR_mktag(3), transform_hlds__lco__PromiseGoalExpr_55, 2) = ((MR_Box) (transform_hlds__lco__ConjGoal_54));
#line 936 "lco.m"
            }
#line 937 "lco.m"
            {
#line 937 "lco.m"
              transform_hlds__lco__PromiseGoal_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 937 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__PromiseGoal_56, 0) = ((MR_Box) (transform_hlds__lco__PromiseGoalExpr_55));
#line 937 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__PromiseGoal_56, 1) = ((MR_Box) (transform_hlds__lco__UpdatedGoalInfo_50));
#line 937 "lco.m"
            }
#line 938 "lco.m"
            {
#line 938 "lco.m"
              transform_hlds__lco__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 938 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__V_109_109, 0) = ((MR_Box) (transform_hlds__lco__PromiseGoal_56));
#line 938 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__V_109_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 938 "lco.m"
            }
#line 938 "lco.m"
            {
#line 938 "lco.m"
              MR_Word base;
#line 938 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 938 "lco.m"
              *transform_hlds__lco__MaybeGoals_13 = base;
#line 938 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__V_109_109));
#line 938 "lco.m"
            }
#line 934 "lco.m"
          }
#line 940 "lco.m"
        transform_hlds__lco__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_103_103, (MR_Integer) 0)));
#line 940 "lco.m"
        transform_hlds__lco__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_103_103, (MR_Integer) 1)));
#line 940 "lco.m"
        transform_hlds__lco__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_103_103, (MR_Integer) 2)));
#line 940 "lco.m"
        transform_hlds__lco__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_103_103, (MR_Integer) 3)));
#line 940 "lco.m"
        transform_hlds__lco__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_103_103, (MR_Integer) 4)));
#line 940 "lco.m"
        transform_hlds__lco__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_103_103, (MR_Integer) 5)));
#line 940 "lco.m"
        {
#line 940 "lco.m"
          MR_Word base;
#line 940 "lco.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 940 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_Info_58 = base;
#line 940 "lco.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__V_147_147));
#line 940 "lco.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__V_148_148));
#line 940 "lco.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__V_149_149));
#line 940 "lco.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lco__V_150_150));
#line 940 "lco.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__lco__V_151_151));
#line 940 "lco.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Integer) 1));
#line 940 "lco.m"
        }
#line 890 "lco.m"
      }
#line 941 "lco.m"
    else
#line 944 "lco.m"
      {
#line 944 "lco.m"
        *transform_hlds__lco__MaybeGoals_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 944 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_Info_58 = transform_hlds__lco__STATE_VARIABLE_Info_0_57;
#line 944 "lco.m"
      }
#line 831 "lco.m"
  }
#line 826 "lco.m"
}

#line 790 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_unification_5_p_0_1(
#line 790 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 790 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1)
#line 790 "lco.m"
{
#line 790 "lco.m"
  {
#line 790 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 790 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

#line 790 "lco.m"
    {
#line 790 "lco.m"
      transform_hlds__lco__succeeded = transform_hlds__lco__acceptable_construct_mode_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
#line 790 "lco.m"
    return transform_hlds__lco__succeeded;
#line 790 "lco.m"
  }
#line 790 "lco.m"
}

#line 776 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_unification_5_p_0(
#line 776 "lco.m"
  MR_Word transform_hlds__lco__Goal_6,
#line 776 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_0_30,
#line 776 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_31,
#line 776 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_32,
#line 776 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_33)
#line 776 "lco.m"
{
#line 779 "lco.m"
  {
#line 779 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 779 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_66_66;
#line 779 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_71_71;
#line 779 "lco.m"
    MR_Word transform_hlds__lco__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_6, (MR_Integer) 0)));
#line 779 "lco.m"
    MR_Word transform_hlds__lco__Unification_14;
#line 779 "lco.m"
    MR_Word transform_hlds__lco__ConstructedVar_16;
#line 779 "lco.m"
    MR_Word transform_hlds__lco__ConsId_17;
#line 779 "lco.m"
    MR_Word transform_hlds__lco__ConstructArgs_18;
#line 779 "lco.m"
    MR_Word transform_hlds__lco__ArgUniModes_19;
#line 779 "lco.m"
    MR_Word transform_hlds__lco__SubInfo_22;
#line 779 "lco.m"
    MR_Word transform_hlds__lco__ModuleInfo_24;
#line 779 "lco.m"
    MR_Word transform_hlds__lco__ConsTag_25;
#line 779 "lco.m"
    MR_Word transform_hlds__lco__V_35_35;
#line 779 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_53_53;
#line 780 "lco.m"
    MR_Word transform_hlds__lco___GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_6, (MR_Integer) 1)));
#line 781 "lco.m"
    MR_Word transform_hlds__lco__V_11_11;
#line 781 "lco.m"
    MR_Word transform_hlds__lco__V_12_12;
#line 781 "lco.m"
    MR_Word transform_hlds__lco__V_13_13;
#line 781 "lco.m"
    MR_Word transform_hlds__lco__V_15_15;
#line 782 "lco.m"
    MR_Word transform_hlds__lco__V_20_20;
#line 782 "lco.m"
    MR_Word transform_hlds__lco__V_21_21;
#line 789 "lco.m"
    MR_Word transform_hlds__lco__V_60_60;
#line 789 "lco.m"
    MR_Word transform_hlds__lco__V_61_61;
#line 789 "lco.m"
    MR_Word transform_hlds__lco__V_62_62;
#line 789 "lco.m"
    MR_Word transform_hlds__lco__V_63_63;
#line 789 "lco.m"
    MR_Word transform_hlds__lco__V_64_64;

#line 781 "lco.m"
    transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__GoalExpr_9)) == (MR_mktag((MR_Integer) 1)));
#line 781 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 781 "lco.m"
      {
#line 781 "lco.m"
        transform_hlds__lco__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_9, (MR_Integer) 0)));
#line 781 "lco.m"
        transform_hlds__lco__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_9, (MR_Integer) 1)));
#line 781 "lco.m"
        transform_hlds__lco__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_9, (MR_Integer) 2)));
#line 781 "lco.m"
        transform_hlds__lco__Unification_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_9, (MR_Integer) 3)));
#line 781 "lco.m"
        transform_hlds__lco__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_9, (MR_Integer) 4)));
#line 782 "lco.m"
        transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__Unification_14)) == (MR_mktag((MR_Integer) 0)));
#line 782 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 782 "lco.m"
          {
#line 782 "lco.m"
            transform_hlds__lco__ConstructedVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 0)));
#line 782 "lco.m"
            transform_hlds__lco__ConsId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 1)));
#line 782 "lco.m"
            transform_hlds__lco__ConstructArgs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 2)));
#line 782 "lco.m"
            transform_hlds__lco__ArgUniModes_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 3)));
#line 782 "lco.m"
            transform_hlds__lco__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 4)));
#line 782 "lco.m"
            transform_hlds__lco__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 5)));
#line 782 "lco.m"
            transform_hlds__lco__SubInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 6)));
#line 786 "lco.m"
            if ((transform_hlds__lco__SubInfo_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 785 "lco.m"
              transform_hlds__lco__succeeded = MR_TRUE;
#line 786 "lco.m"
            else
#line 787 "lco.m"
              {
#line 787 "lco.m"
                MR_Word transform_hlds__lco__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SubInfo_22, (MR_Integer) 0)));
#line 787 "lco.m"
                MR_Word transform_hlds__lco__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SubInfo_22, (MR_Integer) 1)));

#line 787 "lco.m"
                transform_hlds__lco__succeeded = (transform_hlds__lco__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 787 "lco.m"
              }
#line 779 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 779 "lco.m"
              {
#line 789 "lco.m"
                transform_hlds__lco__ModuleInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 0)));
#line 789 "lco.m"
                transform_hlds__lco__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 1)));
#line 789 "lco.m"
                transform_hlds__lco__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 2)));
#line 789 "lco.m"
                transform_hlds__lco__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 3)));
#line 789 "lco.m"
                transform_hlds__lco__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 4)));
#line 789 "lco.m"
                transform_hlds__lco__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 5)));
#line 12141 "transform_hlds.lco.c"
                transform_hlds__lco__TypeCtorInfo_66_66 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0;
#line 790 "lco.m"
                {
#line 790 "lco.m"
                  transform_hlds__lco__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 790 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_35_35, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_7[1]));
#line 790 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_35_35, 1) = ((MR_Box) (transform_hlds__lco__acceptable_construct_unification_5_p_0_1));
#line 790 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 790 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_35_35, 3) = ((MR_Box) (transform_hlds__lco__ModuleInfo_24));
#line 790 "lco.m"
                }
#line 790 "lco.m"
                {
#line 790 "lco.m"
                  transform_hlds__lco__succeeded = mercury__list__all_true_2_p_0(transform_hlds__lco__TypeCtorInfo_66_66, transform_hlds__lco__V_35_35, transform_hlds__lco__ArgUniModes_19);
                }
#line 779 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 779 "lco.m"
                  {
#line 791 "lco.m"
                    {
#line 791 "lco.m"
                      transform_hlds__lco__ConsTag_25 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(transform_hlds__lco__ModuleInfo_24, transform_hlds__lco__ConsId_17);
                    }
#line 797 "lco.m"
#line 797 "lco.m"
                    switch (MR_tag((MR_Word) transform_hlds__lco__ConsTag_25)) {
#line 797 "lco.m"
                      default:
#line 797 "lco.m"
                        transform_hlds__lco__succeeded = MR_FALSE;
#line 797 "lco.m"
                        break;
#line 797 "lco.m"
                      case (MR_Integer) 0:
#line 797 "lco.m"
#line 797 "lco.m"
                        switch (MR_unmkbody(transform_hlds__lco__ConsTag_25)) {
#line 797 "lco.m"
                          default:
#line 797 "lco.m"
                            transform_hlds__lco__succeeded = MR_FALSE;
#line 797 "lco.m"
                            break;
#line 797 "lco.m"
                          case (MR_Integer) 0:
#line 796 "lco.m"
                            transform_hlds__lco__succeeded = MR_TRUE;
#line 797 "lco.m"
                            break;
#line 797 "lco.m"
                        }
#line 797 "lco.m"
                        break;
#line 797 "lco.m"
                      case (MR_Integer) 3:
#line 797 "lco.m"
#line 797 "lco.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__ConsTag_25, (MR_Integer) 0)))) {
#line 797 "lco.m"
                          default:
#line 797 "lco.m"
                            transform_hlds__lco__succeeded = MR_FALSE;
#line 797 "lco.m"
                            break;
#line 797 "lco.m"
                          case (MR_Integer) 11:
#line 798 "lco.m"
                            transform_hlds__lco__succeeded = MR_TRUE;
#line 797 "lco.m"
                            break;
#line 797 "lco.m"
                          case (MR_Integer) 13:
#line 800 "lco.m"
                            transform_hlds__lco__succeeded = MR_TRUE;
#line 797 "lco.m"
                            break;
#line 797 "lco.m"
                        }
#line 797 "lco.m"
                        break;
#line 797 "lco.m"
                    }
#line 779 "lco.m"
                    if (transform_hlds__lco__succeeded)
#line 779 "lco.m"
                      {
#line 12234 "transform_hlds.lco.c"
                        transform_hlds__lco__TypeInfo_71_71 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
#line 817 "lco.m"
                        {
#line 817 "lco.m"
                          mercury__bag__delete_3_p_0(transform_hlds__lco__TypeInfo_71_71, ((MR_Box) (transform_hlds__lco__ConstructedVar_16)), transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_0_30, &transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_53_53);
                        }
#line 818 "lco.m"
                        {
#line 818 "lco.m"
                          mercury__bag__insert_list_3_p_0(transform_hlds__lco__TypeInfo_71_71, transform_hlds__lco__ConstructArgs_18, transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_53_53, transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_31);
                        }
#line 779 "lco.m"
                        *transform_hlds__lco__STATE_VARIABLE_Info_33 = transform_hlds__lco__STATE_VARIABLE_Info_0_32;
#line 779 "lco.m"
                        transform_hlds__lco__succeeded = MR_TRUE;
#line 779 "lco.m"
                      }
#line 779 "lco.m"
                  }
#line 779 "lco.m"
              }
#line 782 "lco.m"
          }
#line 781 "lco.m"
      }
#line 779 "lco.m"
    return transform_hlds__lco__succeeded;
#line 779 "lco.m"
  }
#line 776 "lco.m"
}

#line 754 "lco.m"
static void MR_CALL 
transform_hlds__lco__partition_dependent_goal_9_p_0(
#line 754 "lco.m"
  MR_Word transform_hlds__lco___Info_10,
#line 754 "lco.m"
  MR_Word transform_hlds__lco___ConstInfo_11,
#line 754 "lco.m"
  MR_Word transform_hlds__lco__Goal_12,
#line 754 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22,
#line 754 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23,
#line 754 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24,
#line 754 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25,
#line 754 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26,
#line 754 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_DelayForVars_27)
#line 754 "lco.m"
{
#line 760 "lco.m"
  {
#line 760 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 760 "lco.m"
    {
#line 760 "lco.m"
      transform_hlds__lco__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_116_105_116_105_111_110_95_100_101_112_101_110_100_101_110_116_95_103_111_97_108_95_95_91_49_44_32_50_93_95_48_9_p_0(transform_hlds__lco__Goal_12, transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22, transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23, transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24, transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25, transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26, transform_hlds__lco__STATE_VARIABLE_DelayForVars_27);
    }
#line 760 "lco.m"
  }
#line 754 "lco.m"
}

#line 719 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__potentially_moveable_goal_1_p_0(
#line 719 "lco.m"
  MR_Word transform_hlds__lco__Goal_2)
#line 719 "lco.m"
{
#line 721 "lco.m"
  while (MR_TRUE)
#line 721 "lco.m"
    {
#line 721 "lco.m"
      /* tailcall optimized into a loop */
#line 721 "lco.m"
      {
#line 721 "lco.m"
        MR_bool transform_hlds__lco__succeeded;
#line 721 "lco.m"
        MR_Word transform_hlds__lco__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_2, (MR_Integer) 0)));
#line 721 "lco.m"
        MR_Word transform_hlds__lco__GoalInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_2, (MR_Integer) 1)));
#line 721 "lco.m"
        MR_Word transform_hlds__lco__V_44_44;

#line 723 "lco.m"
        {
#line 723 "lco.m"
          transform_hlds__lco__V_44_44 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__lco__GoalInfo_4);
        }
#line 723 "lco.m"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_44_44 == (MR_Integer) 0);
#line 721 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 727 "lco.m"
#line 727 "lco.m"
          switch (MR_tag((MR_Word) transform_hlds__lco__GoalExpr_3)) {
#line 727 "lco.m"
            default:
#line 727 "lco.m"
              transform_hlds__lco__succeeded = MR_FALSE;
#line 727 "lco.m"
              break;
#line 727 "lco.m"
            case (MR_Integer) 1:
#line 726 "lco.m"
              transform_hlds__lco__succeeded = MR_TRUE;
#line 727 "lco.m"
              break;
#line 727 "lco.m"
            case (MR_Integer) 3:
#line 727 "lco.m"
#line 727 "lco.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_3, (MR_Integer) 0)))) {
#line 727 "lco.m"
                default:
#line 727 "lco.m"
                  transform_hlds__lco__succeeded = MR_FALSE;
#line 727 "lco.m"
                  break;
#line 727 "lco.m"
                case (MR_Integer) 5:
#line 728 "lco.m"
                  {
#line 728 "lco.m"
                    MR_Word transform_hlds__lco__Reason_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_3, (MR_Integer) 1)));
#line 728 "lco.m"
                    MR_Word transform_hlds__lco__SubGoal_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_3, (MR_Integer) 2)));
#line 729 "lco.m"
                    MR_Word transform_hlds__lco__V_12_12;
#line 729 "lco.m"
                    MR_Word transform_hlds__lco__V_13_13;

#line 729 "lco.m"
                    transform_hlds__lco__succeeded = ((((MR_tag((MR_Word) transform_hlds__lco__Reason_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_10, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 729 "lco.m"
                    if (transform_hlds__lco__succeeded)
#line 729 "lco.m"
                      {
#line 729 "lco.m"
                        transform_hlds__lco__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_10, (MR_Integer) 1)));
#line 729 "lco.m"
                        transform_hlds__lco__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_10, (MR_Integer) 2)));
#line 730 "lco.m"
                        transform_hlds__lco__succeeded = MR_TRUE;
#line 729 "lco.m"
                      }
#line 729 "lco.m"
                    else
#line 732 "lco.m"
                      {
#line 732 "lco.m"
                        /* direct tailcall eliminated */
#line 732 "lco.m"
                        {
#line 732 "lco.m"
                          MR_Word transform_hlds__lco__Goal__tmp_copy_2 = transform_hlds__lco__SubGoal_11;

#line 732 "lco.m"
                          transform_hlds__lco__Goal_2 = transform_hlds__lco__Goal__tmp_copy_2;
#line 732 "lco.m"
                        }
#line 732 "lco.m"
                        continue;
#line 732 "lco.m"
                      }
#line 728 "lco.m"
                  }
#line 727 "lco.m"
                  break;
#line 727 "lco.m"
                case (MR_Integer) 7:
#line 746 "lco.m"
                  {
#line 747 "lco.m"
                    {
#line 747 "lco.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.potentially_moveable_goal\'/1", (MR_String) "shorthand");
                    }
#line 746 "lco.m"
                    transform_hlds__lco__succeeded = MR_TRUE;
#line 746 "lco.m"
                  }
#line 727 "lco.m"
                  break;
#line 727 "lco.m"
              }
#line 727 "lco.m"
              break;
#line 727 "lco.m"
          }
#line 721 "lco.m"
        return transform_hlds__lco__succeeded;
#line 721 "lco.m"
      }
#line 721 "lco.m"
      break;
#line 721 "lco.m"
    }
#line 719 "lco.m"
}

#line 681 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__potentially_transformable_recursive_call_4_p_0(
#line 681 "lco.m"
  MR_Word transform_hlds__lco__Info_5,
#line 681 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_6,
#line 681 "lco.m"
  MR_Word transform_hlds__lco__Goal_7,
#line 681 "lco.m"
  MR_Word * transform_hlds__lco__OutArgs_8)
#line 681 "lco.m"
{
#line 684 "lco.m"
  {
#line 684 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 684 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_73_73;
#line 684 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_75_75;
#line 684 "lco.m"
    MR_Word transform_hlds__lco__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_7, (MR_Integer) 0)));
#line 684 "lco.m"
    MR_Word transform_hlds__lco__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_7, (MR_Integer) 1)));
#line 684 "lco.m"
    MR_Word transform_hlds__lco__PredId_11;
#line 684 "lco.m"
    MR_Integer transform_hlds__lco__ProcId_12;
#line 684 "lco.m"
    MR_Word transform_hlds__lco__Args_13;
#line 684 "lco.m"
    MR_Word transform_hlds__lco__ModuleInfo_17;
#line 684 "lco.m"
    MR_Word transform_hlds__lco__ProcInfo_18;
#line 684 "lco.m"
    MR_Word transform_hlds__lco__VarTypes_19;
#line 684 "lco.m"
    MR_Word transform_hlds__lco__CalleeProcInfo_20;
#line 684 "lco.m"
    MR_Word transform_hlds__lco__CalleeArgModes_21;
#line 684 "lco.m"
    MR_Word transform_hlds__lco__UnusedArgs_23;
#line 684 "lco.m"
    MR_Integer transform_hlds__lco__NumOutArgs_25;
#line 684 "lco.m"
    MR_Word transform_hlds__lco__CurrProcOutArgs_26;
#line 684 "lco.m"
    MR_Integer transform_hlds__lco__NumCurrProcOutArgs_27;
#line 684 "lco.m"
    MR_Word transform_hlds__lco__V_28_28;
#line 684 "lco.m"
    MR_Word transform_hlds__lco__V_29_29;
#line 684 "lco.m"
    MR_Word transform_hlds__lco__V_30_30;
#line 684 "lco.m"
    MR_Word transform_hlds__lco__V_76_76;
#line 686 "lco.m"
    MR_Word transform_hlds__lco___Builtin_14;
#line 686 "lco.m"
    MR_Word transform_hlds__lco___UnifyContext_15;
#line 686 "lco.m"
    MR_Word transform_hlds__lco___SymName_16;
#line 688 "lco.m"
    MR_Word transform_hlds__lco__V_36_36;
#line 688 "lco.m"
    MR_Word transform_hlds__lco__V_37_37;
#line 688 "lco.m"
    MR_Word transform_hlds__lco__V_38_38;
#line 688 "lco.m"
    MR_Word transform_hlds__lco__V_39_39;
#line 688 "lco.m"
    MR_Word transform_hlds__lco__V_40_40;
#line 688 "lco.m"
    MR_Word transform_hlds__lco__V_41_41;
#line 688 "lco.m"
    MR_Word transform_hlds__lco__V_42_42;
#line 688 "lco.m"
    MR_Word transform_hlds__lco__V_43_43;
#line 689 "lco.m"
    MR_Word transform_hlds__lco__V_44_44;
#line 689 "lco.m"
    MR_Word transform_hlds__lco__V_45_45;
#line 689 "lco.m"
    MR_Word transform_hlds__lco__V_46_46;
#line 689 "lco.m"
    MR_Word transform_hlds__lco__V_47_47;
#line 689 "lco.m"
    MR_Word transform_hlds__lco__V_49_49;
#line 689 "lco.m"
    MR_Word transform_hlds__lco__V_50_50;
#line 689 "lco.m"
    MR_Word transform_hlds__lco__V_51_51;
#line 691 "lco.m"
    MR_Word transform_hlds__lco__V_52_52;
#line 691 "lco.m"
    MR_Word transform_hlds__lco__V_53_53;
#line 691 "lco.m"
    MR_Word transform_hlds__lco__V_54_54;
#line 691 "lco.m"
    MR_Word transform_hlds__lco__V_55_55;
#line 691 "lco.m"
    MR_Word transform_hlds__lco__V_56_56;
#line 697 "lco.m"
    MR_Word transform_hlds__lco___InArgs_22;
#line 707 "lco.m"
    MR_Word transform_hlds__lco__V_65_65;
#line 707 "lco.m"
    MR_Word transform_hlds__lco__V_66_66;
#line 707 "lco.m"
    MR_Word transform_hlds__lco__V_67_67;
#line 707 "lco.m"
    MR_Word transform_hlds__lco__V_68_68;
#line 707 "lco.m"
    MR_Word transform_hlds__lco__V_69_69;
#line 707 "lco.m"
    MR_Word transform_hlds__lco__V_70_70;
#line 707 "lco.m"
    MR_Word transform_hlds__lco__V_71_71;
#line 707 "lco.m"
    MR_Word transform_hlds__lco__V_72_72;

#line 686 "lco.m"
    transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__GoalExpr_9)) == (MR_mktag((MR_Integer) 2)));
#line 686 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 686 "lco.m"
      {
#line 686 "lco.m"
        transform_hlds__lco__PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr_9, (MR_Integer) 0)));
#line 686 "lco.m"
        transform_hlds__lco__ProcId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr_9, (MR_Integer) 1)));
#line 686 "lco.m"
        transform_hlds__lco__Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr_9, (MR_Integer) 2)));
#line 686 "lco.m"
        transform_hlds__lco___Builtin_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr_9, (MR_Integer) 3)));
#line 686 "lco.m"
        transform_hlds__lco___UnifyContext_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr_9, (MR_Integer) 4)));
#line 686 "lco.m"
        transform_hlds__lco___SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr_9, (MR_Integer) 5)));
#line 688 "lco.m"
        transform_hlds__lco__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 0)));
#line 688 "lco.m"
        transform_hlds__lco__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 1)));
#line 688 "lco.m"
        transform_hlds__lco__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 2)));
#line 688 "lco.m"
        transform_hlds__lco__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 3)));
#line 688 "lco.m"
        transform_hlds__lco__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 4)));
#line 688 "lco.m"
        transform_hlds__lco__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 5)));
#line 688 "lco.m"
        transform_hlds__lco__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)))) & (MR_Integer) 7);
#line 688 "lco.m"
        transform_hlds__lco__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 688 "lco.m"
        transform_hlds__lco__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 12604 "transform_hlds.lco.c"
        transform_hlds__lco__TypeCtorInfo_73_73 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 688 "lco.m"
        {
#line 688 "lco.m"
          transform_hlds__lco__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 688 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_28_28, 0) = ((MR_Box) (transform_hlds__lco__PredId_11));
#line 688 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_28_28, 1) = ((MR_Box) (transform_hlds__lco__ProcId_12));
#line 688 "lco.m"
        }
#line 688 "lco.m"
        {
#line 688 "lco.m"
          transform_hlds__lco__succeeded = mercury__set__member_2_p_0(transform_hlds__lco__TypeCtorInfo_73_73, ((MR_Box) (transform_hlds__lco__V_28_28)), transform_hlds__lco__V_29_29);
        }
#line 684 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 684 "lco.m"
          {
#line 689 "lco.m"
            {
#line 689 "lco.m"
              transform_hlds__lco__V_30_30 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__lco__GoalInfo_10);
            }
#line 689 "lco.m"
            transform_hlds__lco__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 0)));
#line 689 "lco.m"
            transform_hlds__lco__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 1)));
#line 689 "lco.m"
            transform_hlds__lco__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 2)));
#line 689 "lco.m"
            transform_hlds__lco__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 3)));
#line 689 "lco.m"
            transform_hlds__lco__ProcInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 4)));
#line 689 "lco.m"
            transform_hlds__lco__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 5)));
#line 689 "lco.m"
            transform_hlds__lco__V_76_76 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)))) & (MR_Integer) 7);
#line 689 "lco.m"
            transform_hlds__lco__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 689 "lco.m"
            transform_hlds__lco__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 689 "lco.m"
            transform_hlds__lco__succeeded = (transform_hlds__lco__V_30_30 == transform_hlds__lco__V_76_76);
#line 684 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 684 "lco.m"
              {
#line 691 "lco.m"
                transform_hlds__lco__ModuleInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_5, (MR_Integer) 0)));
#line 691 "lco.m"
                transform_hlds__lco__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_5, (MR_Integer) 1)));
#line 691 "lco.m"
                transform_hlds__lco__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_5, (MR_Integer) 2)));
#line 691 "lco.m"
                transform_hlds__lco__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_5, (MR_Integer) 3)));
#line 691 "lco.m"
                transform_hlds__lco__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_5, (MR_Integer) 4)));
#line 691 "lco.m"
                transform_hlds__lco__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_5, (MR_Integer) 5)));
#line 693 "lco.m"
                {
#line 693 "lco.m"
                  hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lco__ProcInfo_18, &transform_hlds__lco__VarTypes_19);
                }
#line 695 "lco.m"
                {
#line 695 "lco.m"
                  hlds__hlds_module__module_info_proc_info_4_p_0(transform_hlds__lco__ModuleInfo_17, transform_hlds__lco__PredId_11, transform_hlds__lco__ProcId_12, &transform_hlds__lco__CalleeProcInfo_20);
                }
#line 696 "lco.m"
                {
#line 696 "lco.m"
                  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__lco__CalleeProcInfo_20, &transform_hlds__lco__CalleeArgModes_21);
                }
#line 697 "lco.m"
                {
#line 697 "lco.m"
                  transform_hlds__lco__classify_proc_call_args_7_p_0(transform_hlds__lco__ModuleInfo_17, transform_hlds__lco__VarTypes_19, transform_hlds__lco__Args_13, transform_hlds__lco__CalleeArgModes_21, &transform_hlds__lco___InArgs_22, transform_hlds__lco__OutArgs_8, &transform_hlds__lco__UnusedArgs_23);
                }
#line 699 "lco.m"
                transform_hlds__lco__succeeded = (transform_hlds__lco__UnusedArgs_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 684 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 684 "lco.m"
                  {
#line 12692 "transform_hlds.lco.c"
                    transform_hlds__lco__TypeInfo_75_75 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
#line 706 "lco.m"
                    {
#line 706 "lco.m"
                      mercury__list__length_2_p_0(transform_hlds__lco__TypeInfo_75_75, *transform_hlds__lco__OutArgs_8, &transform_hlds__lco__NumOutArgs_25);
                    }
#line 707 "lco.m"
                    transform_hlds__lco__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 0)));
#line 707 "lco.m"
                    transform_hlds__lco__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 1)));
#line 707 "lco.m"
                    transform_hlds__lco__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 2)));
#line 707 "lco.m"
                    transform_hlds__lco__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 3)));
#line 707 "lco.m"
                    transform_hlds__lco__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 4)));
#line 707 "lco.m"
                    transform_hlds__lco__CurrProcOutArgs_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 5)));
#line 707 "lco.m"
                    transform_hlds__lco__V_70_70 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)))) & (MR_Integer) 7);
#line 707 "lco.m"
                    transform_hlds__lco__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 707 "lco.m"
                    transform_hlds__lco__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 708 "lco.m"
                    {
#line 708 "lco.m"
                      mercury__list__length_2_p_0(transform_hlds__lco__TypeInfo_75_75, transform_hlds__lco__CurrProcOutArgs_26, &transform_hlds__lco__NumCurrProcOutArgs_27);
                    }
#line 709 "lco.m"
                    transform_hlds__lco__succeeded = (transform_hlds__lco__NumOutArgs_25 == transform_hlds__lco__NumCurrProcOutArgs_27);
#line 684 "lco.m"
                  }
#line 684 "lco.m"
              }
#line 684 "lco.m"
          }
#line 686 "lco.m"
      }
#line 684 "lco.m"
    return transform_hlds__lco__succeeded;
#line 684 "lco.m"
  }
#line 681 "lco.m"
}

#line 651 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__divide_rev_conj_8_p_0(
#line 651 "lco.m"
  MR_Word transform_hlds__lco__Info_9,
#line 651 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_10,
#line 651 "lco.m"
  MR_Word transform_hlds__lco__RevGoals0_11,
#line 651 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_AfterGoals_0_19,
#line 651 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_AfterGoals_20,
#line 651 "lco.m"
  MR_Word * transform_hlds__lco__RecGoal_13,
#line 651 "lco.m"
  MR_Word * transform_hlds__lco__RecOutArgs_14,
#line 651 "lco.m"
  MR_Word * transform_hlds__lco__RevBeforeGoals_15)
#line 651 "lco.m"
{
#line 12760 "transform_hlds.lco.c"
  while (MR_TRUE)
#line 12762 "transform_hlds.lco.c"
    {
#line 12764 "transform_hlds.lco.c"
      /* tailcall optimized into a loop */
#line 12766 "transform_hlds.lco.c"
      {
#line 12768 "transform_hlds.lco.c"
        MR_bool transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__RevGoals0_11)) == (MR_mktag((MR_Integer) 1)));
#line 12770 "transform_hlds.lco.c"
        MR_Word transform_hlds__lco__RevGoal_16;
#line 12772 "transform_hlds.lco.c"
        MR_Word transform_hlds__lco__RevGoalsTail_17;
#line 670 "lco.m"
        MR_Word transform_hlds__lco__OutArgs_18;

#line 12777 "transform_hlds.lco.c"
        if (transform_hlds__lco__succeeded)
#line 12779 "transform_hlds.lco.c"
          {
#line 12781 "transform_hlds.lco.c"
            transform_hlds__lco__RevGoal_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__RevGoals0_11, (MR_Integer) 0)));
#line 12783 "transform_hlds.lco.c"
            transform_hlds__lco__RevGoalsTail_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__RevGoals0_11, (MR_Integer) 1)));
#line 664 "lco.m"
            {
#line 664 "lco.m"
              transform_hlds__lco__succeeded = transform_hlds__lco__potentially_transformable_recursive_call_4_p_0(transform_hlds__lco__Info_9, transform_hlds__lco__ConstInfo_10, transform_hlds__lco__RevGoal_16, &transform_hlds__lco__OutArgs_18);
            }
#line 670 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 667 "lco.m"
              {
#line 667 "lco.m"
                *transform_hlds__lco__RecGoal_13 = transform_hlds__lco__RevGoal_16;
#line 668 "lco.m"
                *transform_hlds__lco__RecOutArgs_14 = transform_hlds__lco__OutArgs_18;
#line 669 "lco.m"
                *transform_hlds__lco__RevBeforeGoals_15 = transform_hlds__lco__RevGoalsTail_17;
#line 667 "lco.m"
                *transform_hlds__lco__STATE_VARIABLE_AfterGoals_20 = transform_hlds__lco__STATE_VARIABLE_AfterGoals_0_19;
#line 667 "lco.m"
                transform_hlds__lco__succeeded = MR_TRUE;
#line 667 "lco.m"
              }
#line 670 "lco.m"
            else
#line 676 "lco.m"
              {
#line 676 "lco.m"
                MR_Word transform_hlds__lco__TypeCtorInfo_23_23;
#line 676 "lco.m"
                MR_Word transform_hlds__lco__STATE_VARIABLE_AfterGoals_21_21;

#line 671 "lco.m"
                {
#line 671 "lco.m"
                  transform_hlds__lco__succeeded = transform_hlds__lco__potentially_moveable_goal_1_p_0(transform_hlds__lco__RevGoal_16);
                }
#line 676 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 676 "lco.m"
                  {
#line 12824 "transform_hlds.lco.c"
                    transform_hlds__lco__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 673 "lco.m"
                    {
#line 673 "lco.m"
                      mercury__list__cons_3_p_0(transform_hlds__lco__TypeCtorInfo_23_23, ((MR_Box) (transform_hlds__lco__RevGoal_16)), transform_hlds__lco__STATE_VARIABLE_AfterGoals_0_19, &transform_hlds__lco__STATE_VARIABLE_AfterGoals_21_21);
                    }
#line 674 "lco.m"
                    /* direct tailcall eliminated */
#line 674 "lco.m"
                    {
#line 674 "lco.m"
                      MR_Word transform_hlds__lco__RevGoals0__tmp_copy_11 = transform_hlds__lco__RevGoalsTail_17;
#line 674 "lco.m"
                      MR_Word transform_hlds__lco__STATE_VARIABLE_AfterGoals_0__tmp_copy_19 = transform_hlds__lco__STATE_VARIABLE_AfterGoals_21_21;

#line 674 "lco.m"
                      transform_hlds__lco__STATE_VARIABLE_AfterGoals_0_19 = transform_hlds__lco__STATE_VARIABLE_AfterGoals_0__tmp_copy_19;
#line 674 "lco.m"
                      transform_hlds__lco__RevGoals0_11 = transform_hlds__lco__RevGoals0__tmp_copy_11;
#line 674 "lco.m"
                    }
#line 674 "lco.m"
                    continue;
#line 676 "lco.m"
                  }
#line 676 "lco.m"
              }
#line 12852 "transform_hlds.lco.c"
          }
#line 12854 "transform_hlds.lco.c"
        return transform_hlds__lco__succeeded;
#line 12856 "transform_hlds.lco.c"
      }
#line 12858 "transform_hlds.lco.c"
      break;
#line 12860 "transform_hlds.lco.c"
    }
#line 651 "lco.m"
}

#line 621 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0_2(
#line 621 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 621 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 621 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 621 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 621 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 621 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5)
#line 621 "lco.m"
{
#line 621 "lco.m"
  {
#line 621 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 621 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 621 "lco.m"
    MR_Word transform_hlds__lco__conv7_STATE_VARIABLE_UnifyInputVars_31;
#line 621 "lco.m"
    MR_Word transform_hlds__lco__conv6_STATE_VARIABLE_Info_33;

#line 621 "lco.m"
    {
#line 621 "lco.m"
      transform_hlds__lco__succeeded = transform_hlds__lco__acceptable_construct_unification_5_p_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2), &transform_hlds__lco__conv7_STATE_VARIABLE_UnifyInputVars_31, ((MR_Word) transform_hlds__lco__wrapper_arg_4), &transform_hlds__lco__conv6_STATE_VARIABLE_Info_33);
    }
#line 621 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 621 "lco.m"
      {
#line 621 "lco.m"
        *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv7_STATE_VARIABLE_UnifyInputVars_31));
#line 621 "lco.m"
        *transform_hlds__lco__wrapper_arg_5 = ((MR_Box) (transform_hlds__lco__conv6_STATE_VARIABLE_Info_33));
#line 621 "lco.m"
        transform_hlds__lco__succeeded = MR_TRUE;
#line 621 "lco.m"
      }
#line 621 "lco.m"
    return transform_hlds__lco__succeeded;
#line 621 "lco.m"
  }
#line 621 "lco.m"
}

#line 617 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0_1(
#line 617 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 617 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 617 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 617 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 617 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 617 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5,
#line 617 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_6,
#line 617 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_7)
#line 617 "lco.m"
{
#line 617 "lco.m"
  {
#line 617 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 617 "lco.m"
    MR_Word transform_hlds__lco__conv2_STATE_VARIABLE_RevDependentGoals_23;
#line 617 "lco.m"
    MR_Word transform_hlds__lco__conv1_STATE_VARIABLE_RevNonDependentGoals_25;
#line 617 "lco.m"
    MR_Word transform_hlds__lco__conv0_STATE_VARIABLE_DelayForVars_27;

#line 617 "lco.m"
    {
#line 617 "lco.m"
      transform_hlds__lco__partition_dependent_goal_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2), &transform_hlds__lco__conv2_STATE_VARIABLE_RevDependentGoals_23, ((MR_Word) transform_hlds__lco__wrapper_arg_4), &transform_hlds__lco__conv1_STATE_VARIABLE_RevNonDependentGoals_25, ((MR_Word) transform_hlds__lco__wrapper_arg_6), &transform_hlds__lco__conv0_STATE_VARIABLE_DelayForVars_27);
    }
#line 617 "lco.m"
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv2_STATE_VARIABLE_RevDependentGoals_23));
#line 617 "lco.m"
    *transform_hlds__lco__wrapper_arg_5 = ((MR_Box) (transform_hlds__lco__conv1_STATE_VARIABLE_RevNonDependentGoals_25));
#line 617 "lco.m"
    *transform_hlds__lco__wrapper_arg_7 = ((MR_Box) (transform_hlds__lco__conv0_STATE_VARIABLE_DelayForVars_27));
#line 617 "lco.m"
  }
#line 617 "lco.m"
}

#line 607 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0(
#line 607 "lco.m"
  MR_Word transform_hlds__lco__Goals0_6,
#line 607 "lco.m"
  MR_Word * transform_hlds__lco__MaybeGoals_7,
#line 607 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_26,
#line 607 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_27,
#line 607 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_9)
#line 607 "lco.m"
{
#line 610 "lco.m"
  {
#line 610 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 610 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_39_39 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 610 "lco.m"
    MR_Word transform_hlds__lco__RevGoals0_10;
#line 637 "lco.m"
    MR_Word transform_hlds__lco__RecGoal_12;
#line 637 "lco.m"
    MR_Word transform_hlds__lco__RecOutArgs_13;
#line 637 "lco.m"
    MR_Word transform_hlds__lco__RevBeforeGoals_14;
#line 637 "lco.m"
    MR_Word transform_hlds__lco__RevAfterDependentGoals_18;
#line 637 "lco.m"
    MR_Word transform_hlds__lco__RevAfterNonDependentGoals_19;
#line 637 "lco.m"
    MR_Word transform_hlds__lco__UnifyInputVars_21;
#line 637 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_Info_34_34;
#line 614 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_40_40;
#line 614 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_48_48;
#line 614 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_49_49;
#line 614 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_55_55;
#line 614 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_56_56;
#line 614 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_57_57;
#line 614 "lco.m"
    MR_Word transform_hlds__lco__AfterGoals_11;
#line 614 "lco.m"
    MR_Word transform_hlds__lco__DelayForVars0_17;
#line 614 "lco.m"
    MR_Word transform_hlds__lco__V_29_29;
#line 614 "lco.m"
    MR_Word transform_hlds__lco__V_30_30;
#line 614 "lco.m"
    MR_Word transform_hlds__lco__V_31_31;
#line 614 "lco.m"
    MR_Word transform_hlds__lco__V_32_32;
#line 614 "lco.m"
    MR_Word transform_hlds__lco__V_33_33;
#line 615 "lco.m"
    MR_Word transform_hlds__lco__V_15_15;
#line 615 "lco.m"
    MR_Word transform_hlds__lco__V_16_16;
#line 617 "lco.m"
    MR_Word transform_hlds__lco___DelayForVars_20;
#line 617 "lco.m"
    MR_Box transform_hlds__lco__conv5_RevAfterDependentGoals_18;
#line 617 "lco.m"
    MR_Box transform_hlds__lco__conv4_RevAfterNonDependentGoals_19;
#line 617 "lco.m"
    MR_Box transform_hlds__lco__conv3__DelayForVars_20;
#line 621 "lco.m"
    MR_Box transform_hlds__lco__conv9_UnifyInputVars_21;
#line 621 "lco.m"
    MR_Box transform_hlds__lco__conv8_STATE_VARIABLE_Info_34_34;

#line 611 "lco.m"
    {
#line 611 "lco.m"
      mercury__list__reverse_2_p_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__Goals0_6, &transform_hlds__lco__RevGoals0_10);
    }
#line 613 "lco.m"
    {
#line 613 "lco.m"
      transform_hlds__lco__succeeded = transform_hlds__lco__divide_rev_conj_8_p_0(transform_hlds__lco__STATE_VARIABLE_Info_0_26, transform_hlds__lco__ConstInfo_9, transform_hlds__lco__RevGoals0_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__lco__AfterGoals_11, &transform_hlds__lco__RecGoal_12, &transform_hlds__lco__RecOutArgs_13, &transform_hlds__lco__RevBeforeGoals_14);
    }
#line 614 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 614 "lco.m"
      {
#line 615 "lco.m"
        transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__AfterGoals_11)) == (MR_mktag((MR_Integer) 1)));
#line 615 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 615 "lco.m"
          {
#line 615 "lco.m"
            transform_hlds__lco__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__AfterGoals_11, (MR_Integer) 0)));
#line 615 "lco.m"
            transform_hlds__lco__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__AfterGoals_11, (MR_Integer) 1)));
#line 13069 "transform_hlds.lco.c"
            transform_hlds__lco__TypeCtorInfo_40_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 616 "lco.m"
            {
#line 616 "lco.m"
              parse_tree__set_of_var__list_to_set_2_p_0(transform_hlds__lco__TypeCtorInfo_40_40, transform_hlds__lco__RecOutArgs_13, &transform_hlds__lco__DelayForVars0_17);
            }
#line 618 "lco.m"
            transform_hlds__lco__V_30_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 619 "lco.m"
            transform_hlds__lco__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 13080 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_48_48 = (MR_Word) &transform_hlds__lco_scalar_common_1[2];
#line 13082 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_49_49 = (MR_Word) &transform_hlds__lco_scalar_common_1[4];
#line 617 "lco.m"
            {
#line 617 "lco.m"
              transform_hlds__lco__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 617 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_29_29, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_8[0]));
#line 617 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_29_29, 1) = ((MR_Box) (transform_hlds__lco__lco_in_conj_5_p_0_1));
#line 617 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 617 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_29_29, 3) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_Info_0_26));
#line 617 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_29_29, 4) = ((MR_Box) (transform_hlds__lco__ConstInfo_9));
#line 617 "lco.m"
            }
#line 617 "lco.m"
            {
#line 617 "lco.m"
              mercury__list__foldl3_8_p_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__TypeInfo_48_48, transform_hlds__lco__TypeInfo_48_48, transform_hlds__lco__TypeInfo_49_49, transform_hlds__lco__V_29_29, transform_hlds__lco__AfterGoals_11, ((MR_Box) (transform_hlds__lco__V_30_30)), &transform_hlds__lco__conv5_RevAfterDependentGoals_18, ((MR_Box) (transform_hlds__lco__V_31_31)), &transform_hlds__lco__conv4_RevAfterNonDependentGoals_19, ((MR_Box) (transform_hlds__lco__DelayForVars0_17)), &transform_hlds__lco__conv3__DelayForVars_20);
            }
#line 617 "lco.m"
            transform_hlds__lco__RevAfterDependentGoals_18 = ((MR_Word) transform_hlds__lco__conv5_RevAfterDependentGoals_18);
#line 617 "lco.m"
            transform_hlds__lco__RevAfterNonDependentGoals_19 = ((MR_Word) transform_hlds__lco__conv4_RevAfterNonDependentGoals_19);
#line 617 "lco.m"
            transform_hlds__lco___DelayForVars_20 = ((MR_Word) transform_hlds__lco__conv3__DelayForVars_20);
#line 621 "lco.m"
            transform_hlds__lco__V_32_32 = (MR_Word) &transform_hlds__lco_scalar_common_2[11];
#line 13113 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_55_55 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
#line 622 "lco.m"
            {
#line 622 "lco.m"
              transform_hlds__lco__V_33_33 = mercury__bag__init_0_f_0(transform_hlds__lco__TypeInfo_55_55);
            }
#line 13120 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_56_56 = (MR_Word) &transform_hlds__lco_scalar_common_1[5];
#line 13122 "transform_hlds.lco.c"
            transform_hlds__lco__TypeCtorInfo_57_57 = (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_info_0;
#line 621 "lco.m"
            {
#line 621 "lco.m"
              transform_hlds__lco__succeeded = mercury__list__foldl2_6_p_4(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__TypeInfo_56_56, transform_hlds__lco__TypeCtorInfo_57_57, transform_hlds__lco__V_32_32, transform_hlds__lco__RevAfterDependentGoals_18, ((MR_Box) (transform_hlds__lco__V_33_33)), &transform_hlds__lco__conv9_UnifyInputVars_21, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_Info_0_26)), &transform_hlds__lco__conv8_STATE_VARIABLE_Info_34_34);
            }
#line 621 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 621 "lco.m"
              {
#line 621 "lco.m"
                transform_hlds__lco__UnifyInputVars_21 = ((MR_Word) transform_hlds__lco__conv9_UnifyInputVars_21);
#line 621 "lco.m"
                transform_hlds__lco__STATE_VARIABLE_Info_34_34 = ((MR_Word) transform_hlds__lco__conv8_STATE_VARIABLE_Info_34_34);
#line 621 "lco.m"
                transform_hlds__lco__succeeded = MR_TRUE;
#line 621 "lco.m"
              }
#line 615 "lco.m"
          }
#line 614 "lco.m"
      }
#line 637 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 624 "lco.m"
      {
#line 624 "lco.m"
        MR_Word transform_hlds__lco__UnifyGoals_22;
#line 624 "lco.m"
        MR_Word transform_hlds__lco__MaybeGoals1_23;

#line 624 "lco.m"
        {
#line 624 "lco.m"
          mercury__list__reverse_2_p_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__RevAfterDependentGoals_18, &transform_hlds__lco__UnifyGoals_22);
        }
#line 625 "lco.m"
        {
#line 625 "lco.m"
          transform_hlds__lco__transform_call_and_unifies_8_p_0(transform_hlds__lco__RecGoal_12, transform_hlds__lco__RecOutArgs_13, transform_hlds__lco__UnifyGoals_22, transform_hlds__lco__UnifyInputVars_21, &transform_hlds__lco__MaybeGoals1_23, transform_hlds__lco__STATE_VARIABLE_Info_34_34, transform_hlds__lco__STATE_VARIABLE_Info_27, transform_hlds__lco__ConstInfo_9);
        }
#line 633 "lco.m"
        if ((transform_hlds__lco__MaybeGoals1_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 635 "lco.m"
          *transform_hlds__lco__MaybeGoals_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 633 "lco.m"
        else
#line 628 "lco.m"
          {
#line 628 "lco.m"
            MR_Word transform_hlds__lco__UpdatedRecAndUnifies_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__MaybeGoals1_23, (MR_Integer) 0)));
#line 628 "lco.m"
            MR_Word transform_hlds__lco__Goals_25;
#line 628 "lco.m"
            MR_Word transform_hlds__lco__V_36_36;
#line 628 "lco.m"
            MR_Word transform_hlds__lco__V_37_37;
#line 628 "lco.m"
            MR_Word transform_hlds__lco__V_38_38;

#line 629 "lco.m"
            {
#line 629 "lco.m"
              transform_hlds__lco__V_36_36 = mercury__list__reverse_1_f_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__RevBeforeGoals_14);
            }
#line 630 "lco.m"
            {
#line 630 "lco.m"
              transform_hlds__lco__V_38_38 = mercury__list__reverse_1_f_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__RevAfterNonDependentGoals_19);
            }
#line 631 "lco.m"
            {
#line 631 "lco.m"
              transform_hlds__lco__V_37_37 = mercury__list__f_43_43_2_f_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__V_38_38, transform_hlds__lco__UpdatedRecAndUnifies_24);
            }
#line 630 "lco.m"
            {
#line 630 "lco.m"
              transform_hlds__lco__Goals_25 = mercury__list__f_43_43_2_f_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__V_36_36, transform_hlds__lco__V_37_37);
            }
#line 632 "lco.m"
            {
#line 632 "lco.m"
              MR_Word base;
#line 632 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 632 "lco.m"
              *transform_hlds__lco__MaybeGoals_7 = base;
#line 632 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Goals_25));
#line 632 "lco.m"
            }
#line 628 "lco.m"
          }
#line 624 "lco.m"
      }
#line 637 "lco.m"
    else
#line 638 "lco.m"
      {
#line 638 "lco.m"
        *transform_hlds__lco__MaybeGoals_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 638 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_Info_27 = transform_hlds__lco__STATE_VARIABLE_Info_0_26;
#line 638 "lco.m"
      }
#line 610 "lco.m"
  }
#line 607 "lco.m"
}

#line 582 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_cases_5_p_0(
#line 582 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 582 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__2_2,
#line 582 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_3,
#line 582 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_4,
#line 582 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5)
#line 582 "lco.m"
{
#line 585 "lco.m"
  {
#line 585 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 585 "lco.m"
    if ((transform_hlds__lco__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 585 "lco.m"
      {
#line 585 "lco.m"
        *transform_hlds__lco__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 585 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_Info_4 = transform_hlds__lco__STATE_VARIABLE_Info_0_3;
#line 585 "lco.m"
      }
#line 585 "lco.m"
    else
#line 586 "lco.m"
      {
#line 586 "lco.m"
        MR_Word transform_hlds__lco__Case0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 586 "lco.m"
        MR_Word transform_hlds__lco__Cases0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 586 "lco.m"
        MR_Word transform_hlds__lco__Case_12;
#line 586 "lco.m"
        MR_Word transform_hlds__lco__Cases_13;
#line 586 "lco.m"
        MR_Word transform_hlds__lco__MainConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Case0_10, (MR_Integer) 0)));
#line 586 "lco.m"
        MR_Word transform_hlds__lco__OtherConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Case0_10, (MR_Integer) 1)));
#line 586 "lco.m"
        MR_Word transform_hlds__lco__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Case0_10, (MR_Integer) 2)));
#line 586 "lco.m"
        MR_Word transform_hlds__lco__Goal_19;
#line 586 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_Info_22_22;

#line 588 "lco.m"
        {
#line 588 "lco.m"
          transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__Goal0_18, &transform_hlds__lco__Goal_19, transform_hlds__lco__STATE_VARIABLE_Info_0_3, &transform_hlds__lco__STATE_VARIABLE_Info_22_22, transform_hlds__lco__HeadVar__5_5);
        }
#line 589 "lco.m"
        {
#line 589 "lco.m"
          transform_hlds__lco__Case_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 589 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__Case_12, 0) = ((MR_Box) (transform_hlds__lco__MainConsId_16));
#line 589 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__Case_12, 1) = ((MR_Box) (transform_hlds__lco__OtherConsIds_17));
#line 589 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__Case_12, 2) = ((MR_Box) (transform_hlds__lco__Goal_19));
#line 589 "lco.m"
        }
#line 590 "lco.m"
        {
#line 590 "lco.m"
          transform_hlds__lco__lco_in_cases_5_p_0(transform_hlds__lco__Cases0_11, &transform_hlds__lco__Cases_13, transform_hlds__lco__STATE_VARIABLE_Info_22_22, transform_hlds__lco__STATE_VARIABLE_Info_4, transform_hlds__lco__HeadVar__5_5);
        }
#line 586 "lco.m"
        {
#line 586 "lco.m"
          MR_Word base;
#line 586 "lco.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 586 "lco.m"
          *transform_hlds__lco__HeadVar__2_2 = base;
#line 586 "lco.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Case_12));
#line 586 "lco.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__Cases_13));
#line 586 "lco.m"
        }
#line 586 "lco.m"
      }
#line 585 "lco.m"
  }
#line 582 "lco.m"
}

#line 494 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_goal_5_p_0(
#line 494 "lco.m"
  MR_Word transform_hlds__lco__Goal0_6,
#line 494 "lco.m"
  MR_Word * transform_hlds__lco__Goal_7,
#line 494 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_60,
#line 494 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_61,
#line 494 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_9)
#line 494 "lco.m"
{
#line 497 "lco.m"
  {
#line 497 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 497 "lco.m"
    MR_Word transform_hlds__lco__GoalExpr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal0_6, (MR_Integer) 0)));
#line 497 "lco.m"
    MR_Word transform_hlds__lco__GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal0_6, (MR_Integer) 1)));
#line 497 "lco.m"
    MR_Word transform_hlds__lco__GoalExpr_16;

#line 525 "lco.m"
#line 525 "lco.m"
    switch (MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_10)) {
#line 525 "lco.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 525 "lco.m"
      case (MR_Integer) 0:
#line 563 "lco.m"
        {
#line 564 "lco.m"
          transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
#line 563 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_0_60;
#line 563 "lco.m"
        }
#line 525 "lco.m"
        break;
#line 525 "lco.m"
      case (MR_Integer) 1:
#line 525 "lco.m"
      case (MR_Integer) 2:
#line 563 "lco.m"
        {
#line 564 "lco.m"
          transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
#line 563 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_0_60;
#line 563 "lco.m"
        }
#line 525 "lco.m"
        break;
#line 525 "lco.m"
      case (MR_Integer) 3:
#line 525 "lco.m"
#line 525 "lco.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 0)))) {
#line 525 "lco.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 525 "lco.m"
          case (MR_Integer) 0:
#line 525 "lco.m"
          case (MR_Integer) 1:
#line 563 "lco.m"
            {
#line 564 "lco.m"
              transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
#line 563 "lco.m"
              *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_0_60;
#line 563 "lco.m"
            }
#line 525 "lco.m"
            break;
#line 525 "lco.m"
          case (MR_Integer) 2:
#line 500 "lco.m"
            {
#line 500 "lco.m"
              MR_Word transform_hlds__lco__ConjType_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 1)));
#line 500 "lco.m"
              MR_Word transform_hlds__lco__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 2)));

#line 520 "lco.m"
#line 520 "lco.m"
              switch (transform_hlds__lco__ConjType_12) {
#line 520 "lco.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 520 "lco.m"
                case (MR_Integer) 1:
#line 521 "lco.m"
                  {
#line 523 "lco.m"
                    MR_Word transform_hlds__lco__V_90_90;
#line 523 "lco.m"
                    MR_Word transform_hlds__lco__V_91_91;
#line 523 "lco.m"
                    MR_Word transform_hlds__lco__V_92_92;
#line 523 "lco.m"
                    MR_Word transform_hlds__lco__V_93_93;
#line 523 "lco.m"
                    MR_Word transform_hlds__lco__V_95_95;
#line 523 "lco.m"
                    MR_Word transform_hlds__lco__V_94_94;

#line 522 "lco.m"
                    transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
#line 523 "lco.m"
                    transform_hlds__lco__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 0)));
#line 523 "lco.m"
                    transform_hlds__lco__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 1)));
#line 523 "lco.m"
                    transform_hlds__lco__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 2)));
#line 523 "lco.m"
                    transform_hlds__lco__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 3)));
#line 523 "lco.m"
                    transform_hlds__lco__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 4)));
#line 523 "lco.m"
                    transform_hlds__lco__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 5)));
#line 523 "lco.m"
                    {
#line 523 "lco.m"
                      MR_Word base;
#line 523 "lco.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 523 "lco.m"
                      *transform_hlds__lco__STATE_VARIABLE_Info_61 = base;
#line 523 "lco.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__V_90_90));
#line 523 "lco.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__V_91_91));
#line 523 "lco.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__V_92_92));
#line 523 "lco.m"
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lco__V_93_93));
#line 523 "lco.m"
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Integer) 0));
#line 523 "lco.m"
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__lco__V_95_95));
#line 523 "lco.m"
                    }
#line 521 "lco.m"
                  }
#line 520 "lco.m"
                  break;
#line 520 "lco.m"
                case (MR_Integer) 0:
#line 502 "lco.m"
                  {
#line 502 "lco.m"
                    MR_Word transform_hlds__lco__MaybeGoals_14;
#line 502 "lco.m"
                    MR_Word transform_hlds__lco__STATE_VARIABLE_Info_75_75;

#line 503 "lco.m"
                    {
#line 503 "lco.m"
                      transform_hlds__lco__lco_in_conj_5_p_0(transform_hlds__lco__Goals0_13, &transform_hlds__lco__MaybeGoals_14, transform_hlds__lco__STATE_VARIABLE_Info_0_60, &transform_hlds__lco__STATE_VARIABLE_Info_75_75, transform_hlds__lco__ConstInfo_9);
                    }
#line 507 "lco.m"
                    if ((transform_hlds__lco__MaybeGoals_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 516 "lco.m"
                      {
#line 516 "lco.m"
                        MR_Word transform_hlds__lco__AllButLast_17;
#line 516 "lco.m"
                        MR_Word transform_hlds__lco__Last0_18;
#line 513 "lco.m"
                        MR_Box transform_hlds__lco__conv0_Last0_18;

#line 513 "lco.m"
                        {
#line 513 "lco.m"
                          transform_hlds__lco__succeeded = mercury__list__split_last_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__lco__Goals0_13, &transform_hlds__lco__AllButLast_17, &transform_hlds__lco__conv0_Last0_18);
                        }
#line 513 "lco.m"
                        if (transform_hlds__lco__succeeded)
#line 513 "lco.m"
                          {
#line 513 "lco.m"
                            transform_hlds__lco__Last0_18 = ((MR_Word) transform_hlds__lco__conv0_Last0_18);
#line 513 "lco.m"
                            transform_hlds__lco__succeeded = MR_TRUE;
#line 513 "lco.m"
                          }
#line 516 "lco.m"
                        if (transform_hlds__lco__succeeded)
#line 514 "lco.m"
                          {
#line 514 "lco.m"
                            MR_Word transform_hlds__lco__Last_19;
#line 514 "lco.m"
                            MR_Word transform_hlds__lco__V_78_78;
#line 514 "lco.m"
                            MR_Word transform_hlds__lco__V_79_79;

#line 514 "lco.m"
                            {
#line 514 "lco.m"
                              transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__Last0_18, &transform_hlds__lco__Last_19, transform_hlds__lco__STATE_VARIABLE_Info_75_75, transform_hlds__lco__STATE_VARIABLE_Info_61, transform_hlds__lco__ConstInfo_9);
                            }
#line 515 "lco.m"
                            {
#line 515 "lco.m"
                              transform_hlds__lco__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "lco.m"
                              MR_hl_field(MR_mktag(1), transform_hlds__lco__V_79_79, 0) = ((MR_Box) (transform_hlds__lco__Last_19));
#line 515 "lco.m"
                              MR_hl_field(MR_mktag(1), transform_hlds__lco__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 515 "lco.m"
                            }
#line 515 "lco.m"
                            {
#line 515 "lco.m"
                              transform_hlds__lco__V_78_78 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__lco__AllButLast_17, transform_hlds__lco__V_79_79);
                            }
#line 515 "lco.m"
                            {
#line 515 "lco.m"
                              transform_hlds__lco__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 515 "lco.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 515 "lco.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 1) = ((MR_Box) ((MR_Integer) 0));
#line 515 "lco.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__lco__V_78_78));
#line 515 "lco.m"
                            }
#line 514 "lco.m"
                          }
#line 516 "lco.m"
                        else
#line 517 "lco.m"
                          {
#line 517 "lco.m"
                            transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
#line 517 "lco.m"
                            *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_75_75;
#line 517 "lco.m"
                          }
#line 516 "lco.m"
                      }
#line 507 "lco.m"
                    else
#line 505 "lco.m"
                      {
#line 505 "lco.m"
                        MR_Word transform_hlds__lco__Goals_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__MaybeGoals_14, (MR_Integer) 0)));

#line 506 "lco.m"
                        {
#line 506 "lco.m"
                          transform_hlds__lco__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 506 "lco.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 506 "lco.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 1) = ((MR_Box) ((MR_Integer) 0));
#line 506 "lco.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__lco__Goals_15));
#line 506 "lco.m"
                        }
#line 505 "lco.m"
                        *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_75_75;
#line 505 "lco.m"
                      }
#line 502 "lco.m"
                  }
#line 520 "lco.m"
                  break;
#line 520 "lco.m"
              }
#line 500 "lco.m"
            }
#line 525 "lco.m"
            break;
#line 525 "lco.m"
          case (MR_Integer) 3:
#line 526 "lco.m"
            {
#line 526 "lco.m"
              MR_Word transform_hlds__lco__Goals0_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 1)));
#line 532 "lco.m"
              MR_Word transform_hlds__lco__AllButLast_83;
#line 532 "lco.m"
              MR_Word transform_hlds__lco__Last0_84;
#line 529 "lco.m"
              MR_Box transform_hlds__lco__conv1_Last0_84;

#line 529 "lco.m"
              {
#line 529 "lco.m"
                transform_hlds__lco__succeeded = mercury__list__split_last_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__lco__Goals0_86, &transform_hlds__lco__AllButLast_83, &transform_hlds__lco__conv1_Last0_84);
              }
#line 529 "lco.m"
              if (transform_hlds__lco__succeeded)
#line 529 "lco.m"
                {
#line 529 "lco.m"
                  transform_hlds__lco__Last0_84 = ((MR_Word) transform_hlds__lco__conv1_Last0_84);
#line 529 "lco.m"
                  transform_hlds__lco__succeeded = MR_TRUE;
#line 529 "lco.m"
                }
#line 532 "lco.m"
              if (transform_hlds__lco__succeeded)
#line 530 "lco.m"
                {
#line 530 "lco.m"
                  MR_Word transform_hlds__lco__V_70_70;
#line 530 "lco.m"
                  MR_Word transform_hlds__lco__V_71_71;
#line 530 "lco.m"
                  MR_Word transform_hlds__lco__Last_82;

#line 530 "lco.m"
                  {
#line 530 "lco.m"
                    transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__Last0_84, &transform_hlds__lco__Last_82, transform_hlds__lco__STATE_VARIABLE_Info_0_60, transform_hlds__lco__STATE_VARIABLE_Info_61, transform_hlds__lco__ConstInfo_9);
                  }
#line 531 "lco.m"
                  {
#line 531 "lco.m"
                    transform_hlds__lco__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 531 "lco.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__lco__V_71_71, 0) = ((MR_Box) (transform_hlds__lco__Last_82));
#line 531 "lco.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__lco__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 531 "lco.m"
                  }
#line 531 "lco.m"
                  {
#line 531 "lco.m"
                    transform_hlds__lco__V_70_70 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__lco__AllButLast_83, transform_hlds__lco__V_71_71);
                  }
#line 531 "lco.m"
                  {
#line 531 "lco.m"
                    transform_hlds__lco__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 531 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 531 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__lco__V_70_70));
#line 531 "lco.m"
                  }
#line 530 "lco.m"
                }
#line 532 "lco.m"
              else
#line 533 "lco.m"
                {
#line 533 "lco.m"
                  transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
#line 533 "lco.m"
                  *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_0_60;
#line 533 "lco.m"
                }
#line 526 "lco.m"
            }
#line 525 "lco.m"
            break;
#line 525 "lco.m"
          case (MR_Integer) 4:
#line 536 "lco.m"
            {
#line 536 "lco.m"
              MR_Word transform_hlds__lco__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 1)));
#line 536 "lco.m"
              MR_Word transform_hlds__lco__CanFail_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 2)));
#line 536 "lco.m"
              MR_Word transform_hlds__lco__Cases0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 3)));
#line 536 "lco.m"
              MR_Word transform_hlds__lco__Cases_23;

#line 537 "lco.m"
              {
#line 537 "lco.m"
                transform_hlds__lco__lco_in_cases_5_p_0(transform_hlds__lco__Cases0_22, &transform_hlds__lco__Cases_23, transform_hlds__lco__STATE_VARIABLE_Info_0_60, transform_hlds__lco__STATE_VARIABLE_Info_61, transform_hlds__lco__ConstInfo_9);
              }
#line 538 "lco.m"
              {
#line 538 "lco.m"
                transform_hlds__lco__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 538 "lco.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 538 "lco.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__lco__Var_20));
#line 538 "lco.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__lco__CanFail_21));
#line 538 "lco.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 3) = ((MR_Box) (transform_hlds__lco__Cases_23));
#line 538 "lco.m"
              }
#line 536 "lco.m"
            }
#line 525 "lco.m"
            break;
#line 525 "lco.m"
          case (MR_Integer) 5:
#line 545 "lco.m"
            {
#line 545 "lco.m"
              MR_Word transform_hlds__lco__Reason_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 1)));
#line 545 "lco.m"
              MR_Word transform_hlds__lco__SubGoal0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 2)));
#line 547 "lco.m"
              MR_Word transform_hlds__lco__FGT_33;
#line 547 "lco.m"
              MR_Word transform_hlds__lco__V_32_32;

#line 547 "lco.m"
              transform_hlds__lco__succeeded = ((((MR_tag((MR_Word) transform_hlds__lco__Reason_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_30, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 547 "lco.m"
              if (transform_hlds__lco__succeeded)
#line 547 "lco.m"
                {
#line 547 "lco.m"
                  transform_hlds__lco__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_30, (MR_Integer) 1)));
#line 547 "lco.m"
                  transform_hlds__lco__FGT_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_30, (MR_Integer) 2)));
#line 549 "lco.m"
#line 549 "lco.m"
                  switch (transform_hlds__lco__FGT_33) {
#line 549 "lco.m"
                    default:
#line 549 "lco.m"
                      transform_hlds__lco__succeeded = MR_FALSE;
#line 549 "lco.m"
                      break;
#line 549 "lco.m"
                    case (MR_Integer) 1:
#line 548 "lco.m"
                      transform_hlds__lco__succeeded = MR_TRUE;
#line 549 "lco.m"
                      break;
#line 549 "lco.m"
                    case (MR_Integer) 2:
#line 549 "lco.m"
                      transform_hlds__lco__succeeded = MR_TRUE;
#line 549 "lco.m"
                      break;
#line 549 "lco.m"
                  }
#line 547 "lco.m"
                }
#line 553 "lco.m"
              if (transform_hlds__lco__succeeded)
#line 552 "lco.m"
                {
#line 552 "lco.m"
                  transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
#line 552 "lco.m"
                  *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_0_60;
#line 552 "lco.m"
                }
#line 553 "lco.m"
              else
#line 554 "lco.m"
                {
#line 554 "lco.m"
                  MR_Word transform_hlds__lco__SubGoal_34;

#line 554 "lco.m"
                  {
#line 554 "lco.m"
                    transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__SubGoal0_31, &transform_hlds__lco__SubGoal_34, transform_hlds__lco__STATE_VARIABLE_Info_0_60, transform_hlds__lco__STATE_VARIABLE_Info_61, transform_hlds__lco__ConstInfo_9);
                  }
#line 555 "lco.m"
                  {
#line 555 "lco.m"
                    transform_hlds__lco__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 555 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 555 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__lco__Reason_30));
#line 555 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__lco__SubGoal_34));
#line 555 "lco.m"
                  }
#line 554 "lco.m"
                }
#line 545 "lco.m"
            }
#line 525 "lco.m"
            break;
#line 525 "lco.m"
          case (MR_Integer) 6:
#line 540 "lco.m"
            {
#line 540 "lco.m"
              MR_Word transform_hlds__lco__Vars_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 1)));
#line 540 "lco.m"
              MR_Word transform_hlds__lco__Cond_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 2)));
#line 540 "lco.m"
              MR_Word transform_hlds__lco__Then0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 3)));
#line 540 "lco.m"
              MR_Word transform_hlds__lco__Else0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 4)));
#line 540 "lco.m"
              MR_Word transform_hlds__lco__Then_28;
#line 540 "lco.m"
              MR_Word transform_hlds__lco__Else_29;
#line 540 "lco.m"
              MR_Word transform_hlds__lco__STATE_VARIABLE_Info_66_66;

#line 541 "lco.m"
              {
#line 541 "lco.m"
                transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__Then0_26, &transform_hlds__lco__Then_28, transform_hlds__lco__STATE_VARIABLE_Info_0_60, &transform_hlds__lco__STATE_VARIABLE_Info_66_66, transform_hlds__lco__ConstInfo_9);
              }
#line 542 "lco.m"
              {
#line 542 "lco.m"
                transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__Else0_27, &transform_hlds__lco__Else_29, transform_hlds__lco__STATE_VARIABLE_Info_66_66, transform_hlds__lco__STATE_VARIABLE_Info_61, transform_hlds__lco__ConstInfo_9);
              }
#line 543 "lco.m"
              {
#line 543 "lco.m"
                transform_hlds__lco__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 543 "lco.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 543 "lco.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__lco__Vars_24));
#line 543 "lco.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__lco__Cond_25));
#line 543 "lco.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 3) = ((MR_Box) (transform_hlds__lco__Then_28));
#line 543 "lco.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 4) = ((MR_Box) (transform_hlds__lco__Else_29));
#line 543 "lco.m"
              }
#line 540 "lco.m"
            }
#line 525 "lco.m"
            break;
#line 525 "lco.m"
          case (MR_Integer) 7:
#line 566 "lco.m"
            {
#line 568 "lco.m"
              {
#line 568 "lco.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.lco_in_goal\'/5", (MR_String) "shorthand");
#line 568 "lco.m"
                return;
              }
#line 566 "lco.m"
            }
#line 525 "lco.m"
            break;
#line 525 "lco.m"
        }
#line 525 "lco.m"
        break;
#line 525 "lco.m"
    }
#line 570 "lco.m"
    {
#line 570 "lco.m"
      MR_Word base;
#line 570 "lco.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 570 "lco.m"
      *transform_hlds__lco__Goal_7 = base;
#line 570 "lco.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__GoalExpr_16));
#line 570 "lco.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__GoalInfo_11));
#line 570 "lco.m"
    }
#line 497 "lco.m"
  }
#line 494 "lco.m"
}

#line 413 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_proc_12_p_0(
#line 413 "lco.m"
  MR_Word transform_hlds__lco__LowerSCCVariants_13,
#line 413 "lco.m"
  MR_Word transform_hlds__lco__SCC_14,
#line 413 "lco.m"
  MR_Word transform_hlds__lco__CurProc_15,
#line 413 "lco.m"
  MR_Word transform_hlds__lco__PredInfo_16,
#line 413 "lco.m"
  MR_Word transform_hlds__lco__ProcInfo0_17,
#line 413 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_44,
#line 413 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_45,
#line 413 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_46,
#line 413 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_47,
#line 413 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_48,
#line 413 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_49,
#line 413 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Permitted_50)
#line 413 "lco.m"
{
#line 420 "lco.m"
  {
#line 420 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 420 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_78_78;
#line 420 "lco.m"
    MR_Word transform_hlds__lco__VarSet0_22;
#line 420 "lco.m"
    MR_Word transform_hlds__lco__VarTypes0_23;
#line 420 "lco.m"
    MR_Word transform_hlds__lco__HeadVars_24;
#line 420 "lco.m"
    MR_Word transform_hlds__lco__ArgModes_25;
#line 420 "lco.m"
    MR_Word transform_hlds__lco__ArgTypes_26;
#line 420 "lco.m"
    MR_Word transform_hlds__lco__OutputHeadVars_28;
#line 420 "lco.m"
    MR_Word transform_hlds__lco__CurProcDetism_29;
#line 420 "lco.m"
    MR_Word transform_hlds__lco__Globals_30;
#line 420 "lco.m"
    MR_Word transform_hlds__lco__HighLevelData_31;
#line 420 "lco.m"
    MR_Word transform_hlds__lco__UnboxedFloat_32;
#line 420 "lco.m"
    MR_Word transform_hlds__lco__AllowFloatAddr_33;
#line 420 "lco.m"
    MR_Word transform_hlds__lco__ConstInfo_34;
#line 420 "lco.m"
    MR_Word transform_hlds__lco__Info0_35;
#line 420 "lco.m"
    MR_Word transform_hlds__lco__Goal0_36;
#line 420 "lco.m"
    MR_Word transform_hlds__lco__Goal_37;
#line 420 "lco.m"
    MR_Word transform_hlds__lco__Info_38;
#line 420 "lco.m"
    MR_Word transform_hlds__lco__VarSet_39;
#line 420 "lco.m"
    MR_Word transform_hlds__lco__VarTypes_40;
#line 420 "lco.m"
    MR_Word transform_hlds__lco__Changed_41;
#line 420 "lco.m"
    MR_Word transform_hlds__lco__V_53_53;
#line 420 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_56_56;
#line 426 "lco.m"
    MR_Word transform_hlds__lco___InputHeadVars_27;

#line 421 "lco.m"
    {
#line 421 "lco.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__lco__ProcInfo0_17, &transform_hlds__lco__VarSet0_22);
    }
#line 422 "lco.m"
    {
#line 422 "lco.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lco__ProcInfo0_17, &transform_hlds__lco__VarTypes0_23);
    }
#line 423 "lco.m"
    {
#line 423 "lco.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__lco__ProcInfo0_17, &transform_hlds__lco__HeadVars_24);
    }
#line 424 "lco.m"
    {
#line 424 "lco.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__lco__ProcInfo0_17, &transform_hlds__lco__ArgModes_25);
    }
#line 425 "lco.m"
    {
#line 425 "lco.m"
      hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__lco__VarTypes0_23, transform_hlds__lco__HeadVars_24, &transform_hlds__lco__ArgTypes_26);
    }
#line 426 "lco.m"
    {
#line 426 "lco.m"
      hlds__arg_info__compute_in_and_out_vars_6_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_44, transform_hlds__lco__HeadVars_24, transform_hlds__lco__ArgModes_25, transform_hlds__lco__ArgTypes_26, &transform_hlds__lco___InputHeadVars_27, &transform_hlds__lco__OutputHeadVars_28);
    }
#line 428 "lco.m"
    {
#line 428 "lco.m"
      hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(transform_hlds__lco__ProcInfo0_17, &transform_hlds__lco__CurProcDetism_29);
    }
#line 430 "lco.m"
    {
#line 430 "lco.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_44, &transform_hlds__lco__Globals_30);
    }
#line 429 "lco.m"
    {
#line 429 "lco.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__lco__Globals_30, (MR_Integer) 252, &transform_hlds__lco__HighLevelData_31);
    }
#line 431 "lco.m"
    {
#line 431 "lco.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__lco__Globals_30, (MR_Integer) 240, &transform_hlds__lco__UnboxedFloat_32);
    }
#line 439 "lco.m"
#line 439 "lco.m"
    switch (transform_hlds__lco__UnboxedFloat_32) {
#line 439 "lco.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 439 "lco.m"
      case (MR_Integer) 0:
#line 438 "lco.m"
        transform_hlds__lco__AllowFloatAddr_33 = (MR_Integer) 0;
#line 439 "lco.m"
        break;
#line 439 "lco.m"
      case (MR_Integer) 1:
#line 441 "lco.m"
        transform_hlds__lco__AllowFloatAddr_33 = (MR_Integer) 1;
#line 439 "lco.m"
        break;
#line 439 "lco.m"
    }
#line 14056 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_78_78 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 443 "lco.m"
    {
#line 443 "lco.m"
      transform_hlds__lco__V_53_53 = mercury__set__list_to_set_1_f_0(transform_hlds__lco__TypeCtorInfo_78_78, transform_hlds__lco__SCC_14);
    }
#line 443 "lco.m"
    {
#line 443 "lco.m"
      transform_hlds__lco__ConstInfo_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 443 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_34, 0) = ((MR_Box) (transform_hlds__lco__LowerSCCVariants_13));
#line 443 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_34, 1) = ((MR_Box) (transform_hlds__lco__V_53_53));
#line 443 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_34, 2) = ((MR_Box) (transform_hlds__lco__CurProc_15));
#line 443 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_34, 3) = ((MR_Box) (transform_hlds__lco__PredInfo_16));
#line 443 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_34, 4) = ((MR_Box) (transform_hlds__lco__ProcInfo0_17));
#line 443 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_34, 5) = ((MR_Box) (transform_hlds__lco__OutputHeadVars_28));
#line 443 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_34, 6) = ((MR_Box) ((transform_hlds__lco__CurProcDetism_29 | ((((transform_hlds__lco__AllowFloatAddr_33 << (MR_Integer) 3)) | ((transform_hlds__lco__HighLevelData_31 << (MR_Integer) 4)))))));
#line 443 "lco.m"
    }
#line 446 "lco.m"
    {
#line 446 "lco.m"
      transform_hlds__lco__Info0_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 446 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Info0_35, 0) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_44));
#line 446 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Info0_35, 1) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_46));
#line 446 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Info0_35, 2) = ((MR_Box) (transform_hlds__lco__VarSet0_22));
#line 446 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Info0_35, 3) = ((MR_Box) (transform_hlds__lco__VarTypes0_23));
#line 446 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Info0_35, 4) = ((MR_Box) ((MR_Integer) 1));
#line 446 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Info0_35, 5) = ((MR_Box) ((MR_Integer) 0));
#line 446 "lco.m"
    }
#line 448 "lco.m"
    {
#line 448 "lco.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__lco__ProcInfo0_17, &transform_hlds__lco__Goal0_36);
    }
#line 449 "lco.m"
    {
#line 449 "lco.m"
      transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__Goal0_36, &transform_hlds__lco__Goal_37, transform_hlds__lco__Info0_35, &transform_hlds__lco__Info_38, transform_hlds__lco__ConstInfo_34);
    }
#line 450 "lco.m"
    transform_hlds__lco__STATE_VARIABLE_ModuleInfo_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_38, (MR_Integer) 0)));
#line 450 "lco.m"
    *transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_38, (MR_Integer) 1)));
#line 450 "lco.m"
    transform_hlds__lco__VarSet_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_38, (MR_Integer) 2)));
#line 450 "lco.m"
    transform_hlds__lco__VarTypes_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_38, (MR_Integer) 3)));
#line 450 "lco.m"
    *transform_hlds__lco__STATE_VARIABLE_Permitted_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_38, (MR_Integer) 4)));
#line 450 "lco.m"
    transform_hlds__lco__Changed_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_38, (MR_Integer) 5)));
#line 453 "lco.m"
    transform_hlds__lco__succeeded = (*transform_hlds__lco__STATE_VARIABLE_Permitted_50 == (MR_Integer) 1);
#line 453 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 454 "lco.m"
      transform_hlds__lco__succeeded = (transform_hlds__lco__Changed_41 == (MR_Integer) 1);
#line 476 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 463 "lco.m"
      {
#line 463 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_69_69;
#line 463 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_70_70;
#line 463 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_71_71;
#line 463 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_73_73;
#line 463 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_75_75;

#line 466 "lco.m"
        {
#line 466 "lco.m"
          hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__lco__VarSet_39, transform_hlds__lco__ProcInfo0_17, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_69_69);
        }
#line 467 "lco.m"
        {
#line 467 "lco.m"
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__lco__VarTypes_40, transform_hlds__lco__STATE_VARIABLE_ProcInfo_69_69, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_70_70);
        }
#line 468 "lco.m"
        {
#line 468 "lco.m"
          hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__lco__Goal_37, transform_hlds__lco__STATE_VARIABLE_ProcInfo_70_70, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_71_71);
        }
#line 471 "lco.m"
        {
#line 471 "lco.m"
          hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__lco__STATE_VARIABLE_ProcInfo_71_71, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_73_73);
        }
#line 472 "lco.m"
        {
#line 472 "lco.m"
          check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__lco__STATE_VARIABLE_ProcInfo_73_73, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_75_75, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_56_56, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_45);
        }
#line 474 "lco.m"
        {
#line 474 "lco.m"
          mercury__map__det_insert_4_p_0(transform_hlds__lco__TypeCtorInfo_78_78, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ((MR_Box) (transform_hlds__lco__CurProc_15)), ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ProcInfo_75_75)), transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_48, transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_49);
        }
#line 463 "lco.m"
      }
#line 476 "lco.m"
    else
#line 477 "lco.m"
      {
#line 477 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_49 = transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_48;
#line 477 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ModuleInfo_45 = transform_hlds__lco__STATE_VARIABLE_ModuleInfo_56_56;
#line 477 "lco.m"
      }
#line 420 "lco.m"
  }
#line 413 "lco.m"
}

#line 383 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_proc_if_permitted_11_p_0(
#line 383 "lco.m"
  MR_Word transform_hlds__lco__LowerSCCVariants_12,
#line 383 "lco.m"
  MR_Word transform_hlds__lco__SCC_13,
#line 383 "lco.m"
  MR_Word transform_hlds__lco__CurProc_14,
#line 383 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_26,
#line 383 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_27,
#line 383 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_28,
#line 383 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_29,
#line 383 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_30,
#line 383 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_31,
#line 383 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Permitted_0_32,
#line 383 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Permitted_33)
#line 383 "lco.m"
{
#line 392 "lco.m"
  {
#line 392 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 392 "lco.m"
#line 392 "lco.m"
    switch (transform_hlds__lco__STATE_VARIABLE_Permitted_0_32) {
#line 392 "lco.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 392 "lco.m"
      case (MR_Integer) 0:
#line 392 "lco.m"
        {
#line 392 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_ModuleInfo_27 = transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_26;
#line 392 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_29 = transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_28;
#line 392 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_31 = transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_30;
#line 392 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_Permitted_33 = transform_hlds__lco__STATE_VARIABLE_Permitted_0_32;
#line 392 "lco.m"
        }
#line 392 "lco.m"
        break;
#line 392 "lco.m"
      case (MR_Integer) 1:
#line 394 "lco.m"
        {
#line 394 "lco.m"
          MR_Word transform_hlds__lco__PredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__CurProc_14, (MR_Integer) 0)));
#line 394 "lco.m"
          MR_Integer transform_hlds__lco__ProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__CurProc_14, (MR_Integer) 1)));
#line 394 "lco.m"
          MR_Word transform_hlds__lco__PredInfo_21;
#line 394 "lco.m"
          MR_Word transform_hlds__lco__ProcInfo0_22;
#line 394 "lco.m"
          MR_Word transform_hlds__lco__PredStatus_23;
#line 394 "lco.m"
          MR_Word transform_hlds__lco__DefInThisModule_24;
#line 394 "lco.m"
          MR_Word transform_hlds__lco__Detism_25;

#line 396 "lco.m"
          {
#line 396 "lco.m"
            hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__lco__PredId_19, transform_hlds__lco__ProcId_20, &transform_hlds__lco__PredInfo_21, &transform_hlds__lco__ProcInfo0_22);
          }
#line 398 "lco.m"
          {
#line 398 "lco.m"
            hlds__hlds_pred__pred_info_get_status_2_p_0(transform_hlds__lco__PredInfo_21, &transform_hlds__lco__PredStatus_23);
          }
#line 399 "lco.m"
          {
#line 399 "lco.m"
            transform_hlds__lco__DefInThisModule_24 = hlds__status__pred_status_defined_in_this_module_1_f_0(transform_hlds__lco__PredStatus_23);
          }
#line 400 "lco.m"
          {
#line 400 "lco.m"
            hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(transform_hlds__lco__ProcInfo0_22, &transform_hlds__lco__Detism_25);
          }
#line 402 "lco.m"
          transform_hlds__lco__succeeded = (transform_hlds__lco__DefInThisModule_24 == (MR_Integer) 0);
#line 403 "lco.m"
          if (!(transform_hlds__lco__succeeded))
#line 403 "lco.m"
            {
#line 486 "lco.m"
              if (((MR_Integer) 51 & (((MR_Integer) 1 << transform_hlds__lco__Detism_25))))
#line 486 "lco.m"
                {
#line 486 "lco.m"
                  transform_hlds__lco__succeeded = MR_TRUE;
#line 486 "lco.m"
                }
#line 486 "lco.m"
              else
#line 486 "lco.m"
                transform_hlds__lco__succeeded = MR_FALSE;
#line 403 "lco.m"
              transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 403 "lco.m"
            }
#line 407 "lco.m"
          if (transform_hlds__lco__succeeded)
#line 406 "lco.m"
            {
#line 406 "lco.m"
              *transform_hlds__lco__STATE_VARIABLE_Permitted_33 = (MR_Integer) 0;
#line 406 "lco.m"
              *transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_31 = transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_30;
#line 406 "lco.m"
              *transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_29 = transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_28;
#line 406 "lco.m"
              *transform_hlds__lco__STATE_VARIABLE_ModuleInfo_27 = transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_26;
#line 406 "lco.m"
            }
#line 407 "lco.m"
          else
#line 408 "lco.m"
            {
#line 408 "lco.m"
              transform_hlds__lco__lco_proc_12_p_0(transform_hlds__lco__LowerSCCVariants_12, transform_hlds__lco__SCC_13, transform_hlds__lco__CurProc_14, transform_hlds__lco__PredInfo_21, transform_hlds__lco__ProcInfo0_22, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_27, transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_28, transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_29, transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_30, transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_31, transform_hlds__lco__STATE_VARIABLE_Permitted_33);
            }
#line 394 "lco.m"
        }
#line 392 "lco.m"
        break;
#line 392 "lco.m"
    }
#line 392 "lco.m"
  }
#line 383 "lco.m"
}

#line 379 "lco.m"
static MR_Integer MR_CALL 
transform_hlds__lco__va_pos_1_f_0(
#line 379 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1)
#line 379 "lco.m"
{
#line 379 "lco.m"
  {
#line 379 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 379 "lco.m"
    MR_Integer transform_hlds__lco__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 379 "lco.m"
    MR_Word transform_hlds__lco__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));

#line 379 "lco.m"
    return transform_hlds__lco__HeadVar__2_2;
#line 379 "lco.m"
  }
#line 379 "lco.m"
}

#line 366 "lco.m"
static MR_Box MR_CALL 
transform_hlds__lco__lco_process_proc_variant_4_p_0_1(
#line 366 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 366 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1)
#line 366 "lco.m"
{
#line 366 "lco.m"
  {
#line 366 "lco.m"
    MR_Box transform_hlds__lco__wrapper_arg_2;
#line 366 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 366 "lco.m"
    MR_Integer transform_hlds__lco__conv1_HeadVar__2_2;

#line 366 "lco.m"
    {
#line 366 "lco.m"
      transform_hlds__lco__conv1_HeadVar__2_2 = transform_hlds__lco__va_pos_1_f_0(((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
#line 366 "lco.m"
    transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv1_HeadVar__2_2));
#line 366 "lco.m"
    return transform_hlds__lco__wrapper_arg_2;
#line 366 "lco.m"
  }
#line 366 "lco.m"
}

#line 335 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_process_proc_variant_4_p_0(
#line 335 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_5,
#line 335 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 335 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32,
#line 335 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_33)
#line 335 "lco.m"
{
#line 339 "lco.m"
  {
#line 339 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_46_46;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_47_47;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_49_49;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__PredProcId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 339 "lco.m"
    MR_Word transform_hlds__lco__VariantId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 339 "lco.m"
    MR_Word transform_hlds__lco__AddrOutArgs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantId_7, (MR_Integer) 0)));
#line 339 "lco.m"
    MR_Word transform_hlds__lco__VariantPredProcId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantId_7, (MR_Integer) 1)));
#line 339 "lco.m"
    MR_String transform_hlds__lco__VariantName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantId_7, (MR_Integer) 2)));
#line 339 "lco.m"
    MR_Word transform_hlds__lco__VariantPredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantPredProcId_10, (MR_Integer) 0)));
#line 339 "lco.m"
    MR_Integer transform_hlds__lco__VariantProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantPredProcId_10, (MR_Integer) 1)));
#line 339 "lco.m"
    MR_Word transform_hlds__lco__PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__PredProcId_6, (MR_Integer) 0)));
#line 339 "lco.m"
    MR_Integer transform_hlds__lco__ProcId_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__PredProcId_6, (MR_Integer) 1)));
#line 339 "lco.m"
    MR_Word transform_hlds__lco__ProcInfo_17;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__VariantProcInfo_18;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__HeadVars_19;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__VarTypes_20;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__ArgTypes_21;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__TVarSet_24;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__ExistQVars_25;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__Origin0_27;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__AddrOutArgPosns_28;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__Transform_29;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__Origin_30;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__VariantProcs_31;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_34_34;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_PredTable_35_35;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_36_36;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_37_37;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_39_39;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_40_40;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_42_42;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_43_43;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_PredTable_44_44;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__VarSet0_61;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__VarTypes0_62;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__HeadVars0_63;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__ArgModes0_64;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__HeadVars_65;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__ArgModes_66;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__VarToAddr_67;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__VarSet_68;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__VarTypes_69;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__InstMap0_70;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__Goal0_71;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__Goal_72;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__Globals_74;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__HighLevelData_75;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_32_78;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_33_79;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_34_80;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_35_81;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_36_82;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_37_83;
#line 339 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_39_85;
#line 344 "lco.m"
    MR_Word transform_hlds__lco___PredInfo_16;
#line 1359 "lco.m"
    MR_Word transform_hlds__lco___Changed_73;
#line 355 "lco.m"
    MR_Box transform_hlds__lco__conv0_STATE_VARIABLE_VariantPredInfo_36_36;
#line 360 "lco.m"
    MR_Word transform_hlds__lco___ArgTypes0_26;

#line 344 "lco.m"
    {
#line 344 "lco.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32, transform_hlds__lco__PredId_14, transform_hlds__lco__ProcId_15, &transform_hlds__lco___PredInfo_16, &transform_hlds__lco__ProcInfo_17);
    }
#line 1345 "lco.m"
    {
#line 1345 "lco.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__lco__ProcInfo_17, &transform_hlds__lco__VarSet0_61);
    }
#line 1346 "lco.m"
    {
#line 1346 "lco.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lco__ProcInfo_17, &transform_hlds__lco__VarTypes0_62);
    }
#line 1347 "lco.m"
    {
#line 1347 "lco.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__lco__ProcInfo_17, &transform_hlds__lco__HeadVars0_63);
    }
#line 1348 "lco.m"
    {
#line 1348 "lco.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__lco__ProcInfo_17, &transform_hlds__lco__ArgModes0_64);
    }
#line 1349 "lco.m"
    {
#line 1349 "lco.m"
      transform_hlds__lco__make_addr_vars_12_p_0(transform_hlds__lco__HeadVars0_63, transform_hlds__lco__ArgModes0_64, &transform_hlds__lco__HeadVars_65, &transform_hlds__lco__ArgModes_66, transform_hlds__lco__AddrOutArgs_9, (MR_Integer) 1, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32, &transform_hlds__lco__VarToAddr_67, transform_hlds__lco__VarSet0_61, &transform_hlds__lco__VarSet_68, transform_hlds__lco__VarTypes0_62, &transform_hlds__lco__VarTypes_69);
    }
#line 1352 "lco.m"
    {
#line 1352 "lco.m"
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__lco__HeadVars_65, transform_hlds__lco__ProcInfo_17, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_32_78);
    }
#line 1353 "lco.m"
    {
#line 1353 "lco.m"
      hlds__hlds_pred__proc_info_set_argmodes_3_p_0(transform_hlds__lco__ArgModes_66, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_32_78, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_33_79);
    }
#line 1354 "lco.m"
    {
#line 1354 "lco.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__lco__VarSet_68, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_33_79, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_34_80);
    }
#line 1355 "lco.m"
    {
#line 1355 "lco.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__lco__VarTypes_69, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_34_80, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_35_81);
    }
#line 1357 "lco.m"
    {
#line 1357 "lco.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__lco__ProcInfo_17, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32, &transform_hlds__lco__InstMap0_70);
    }
#line 1358 "lco.m"
    {
#line 1358 "lco.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__lco__ProcInfo_17, &transform_hlds__lco__Goal0_71);
    }
#line 1359 "lco.m"
    {
#line 1359 "lco.m"
      transform_hlds__lco__lco_transform_variant_goal_9_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32, transform_hlds__lco__VariantMap_5, transform_hlds__lco__VarToAddr_67, transform_hlds__lco__InstMap0_70, transform_hlds__lco__Goal0_71, &transform_hlds__lco__Goal_72, &transform_hlds__lco___Changed_73, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_35_81, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_36_82);
    }
#line 1361 "lco.m"
    {
#line 1361 "lco.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__lco__Goal_72, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_36_82, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_37_83);
    }
#line 1363 "lco.m"
    {
#line 1363 "lco.m"
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_37_83, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_39_85);
    }
#line 1367 "lco.m"
    {
#line 1367 "lco.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32, &transform_hlds__lco__Globals_74);
    }
#line 1368 "lco.m"
    {
#line 1368 "lco.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__lco__Globals_74, (MR_Integer) 252, &transform_hlds__lco__HighLevelData_75);
    }
#line 1373 "lco.m"
#line 1373 "lco.m"
    switch (transform_hlds__lco__HighLevelData_75) {
#line 1373 "lco.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1373 "lco.m"
      case (MR_Integer) 0:
#line 1374 "lco.m"
        {
#line 1374 "lco.m"
          transform_hlds__lco__VariantProcInfo_18 = transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_39_85;
#line 1374 "lco.m"
          transform_hlds__lco__STATE_VARIABLE_ModuleInfo_34_34 = transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32;
#line 1374 "lco.m"
        }
#line 1373 "lco.m"
        break;
#line 1373 "lco.m"
      case (MR_Integer) 1:
#line 1370 "lco.m"
        {
#line 1371 "lco.m"
          {
#line 1371 "lco.m"
            check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_39_85, &transform_hlds__lco__VariantProcInfo_18, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32, &transform_hlds__lco__STATE_VARIABLE_ModuleInfo_34_34);
          }
#line 1370 "lco.m"
        }
#line 1373 "lco.m"
        break;
#line 1373 "lco.m"
    }
#line 349 "lco.m"
    {
#line 349 "lco.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__lco__VariantProcInfo_18, &transform_hlds__lco__HeadVars_19);
    }
#line 350 "lco.m"
    {
#line 350 "lco.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lco__VariantProcInfo_18, &transform_hlds__lco__VarTypes_20);
    }
#line 351 "lco.m"
    {
#line 351 "lco.m"
      hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__lco__VarTypes_20, transform_hlds__lco__HeadVars_19, &transform_hlds__lco__ArgTypes_21);
    }
#line 354 "lco.m"
    {
#line 354 "lco.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_34_34, &transform_hlds__lco__STATE_VARIABLE_PredTable_35_35);
    }
#line 14663 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_46_46 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 14665 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_47_47 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 355 "lco.m"
    {
#line 355 "lco.m"
      mercury__map__lookup_3_p_0(transform_hlds__lco__TypeCtorInfo_46_46, transform_hlds__lco__TypeCtorInfo_47_47, transform_hlds__lco__STATE_VARIABLE_PredTable_35_35, ((MR_Box) (transform_hlds__lco__VariantPredId_12)), &transform_hlds__lco__conv0_STATE_VARIABLE_VariantPredInfo_36_36);
    }
#line 355 "lco.m"
    transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_36_36 = ((MR_Word) transform_hlds__lco__conv0_STATE_VARIABLE_VariantPredInfo_36_36);
#line 356 "lco.m"
    {
#line 356 "lco.m"
      hlds__hlds_pred__pred_info_set_name_3_p_0(transform_hlds__lco__VariantName_11, transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_36_36, &transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_37_37);
    }
#line 357 "lco.m"
    {
#line 357 "lco.m"
      hlds__hlds_pred__pred_info_set_is_pred_or_func_3_p_0((MR_Integer) 0, transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_37_37, &transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_39_39);
    }
#line 360 "lco.m"
    {
#line 360 "lco.m"
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_39_39, &transform_hlds__lco__TVarSet_24, &transform_hlds__lco__ExistQVars_25, &transform_hlds__lco___ArgTypes0_26);
    }
#line 362 "lco.m"
    {
#line 362 "lco.m"
      hlds__hlds_pred__pred_info_set_arg_types_5_p_0(transform_hlds__lco__TVarSet_24, transform_hlds__lco__ExistQVars_25, transform_hlds__lco__ArgTypes_21, transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_39_39, &transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_40_40);
    }
#line 365 "lco.m"
    {
#line 365 "lco.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_40_40, &transform_hlds__lco__Origin0_27);
    }
#line 14699 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_49_49 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 366 "lco.m"
    {
#line 366 "lco.m"
      transform_hlds__lco__AddrOutArgPosns_28 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0, transform_hlds__lco__TypeCtorInfo_49_49, (MR_Word) &transform_hlds__lco_scalar_common_2[10], transform_hlds__lco__AddrOutArgs_9);
    }
#line 367 "lco.m"
    {
#line 367 "lco.m"
      transform_hlds__lco__Transform_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 367 "lco.m"
      MR_hl_field(MR_mktag(3), transform_hlds__lco__Transform_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 367 "lco.m"
      MR_hl_field(MR_mktag(3), transform_hlds__lco__Transform_29, 1) = ((MR_Box) (transform_hlds__lco__ProcId_15));
#line 367 "lco.m"
      MR_hl_field(MR_mktag(3), transform_hlds__lco__Transform_29, 2) = ((MR_Box) (transform_hlds__lco__AddrOutArgPosns_28));
#line 367 "lco.m"
    }
#line 368 "lco.m"
    {
#line 368 "lco.m"
      transform_hlds__lco__Origin_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 368 "lco.m"
      MR_hl_field(MR_mktag(2), transform_hlds__lco__Origin_30, 0) = ((MR_Box) (transform_hlds__lco__Transform_29));
#line 368 "lco.m"
      MR_hl_field(MR_mktag(2), transform_hlds__lco__Origin_30, 1) = ((MR_Box) (transform_hlds__lco__Origin0_27));
#line 368 "lco.m"
      MR_hl_field(MR_mktag(2), transform_hlds__lco__Origin_30, 2) = ((MR_Box) (transform_hlds__lco__PredId_14));
#line 368 "lco.m"
    }
#line 369 "lco.m"
    {
#line 369 "lco.m"
      hlds__hlds_pred__pred_info_set_origin_3_p_0(transform_hlds__lco__Origin_30, transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_40_40, &transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_42_42);
    }
#line 373 "lco.m"
    {
#line 373 "lco.m"
      transform_hlds__lco__VariantProcs_31 = mercury__map__singleton_2_f_0(transform_hlds__lco__TypeCtorInfo_49_49, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ((MR_Box) (transform_hlds__lco__VariantProcId_13)), ((MR_Box) (transform_hlds__lco__VariantProcInfo_18)));
    }
#line 374 "lco.m"
    {
#line 374 "lco.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__lco__VariantProcs_31, transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_42_42, &transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_43_43);
    }
#line 375 "lco.m"
    {
#line 375 "lco.m"
      mercury__map__det_update_4_p_0(transform_hlds__lco__TypeCtorInfo_46_46, transform_hlds__lco__TypeCtorInfo_47_47, ((MR_Box) (transform_hlds__lco__VariantPredId_12)), ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_43_43)), transform_hlds__lco__STATE_VARIABLE_PredTable_35_35, &transform_hlds__lco__STATE_VARIABLE_PredTable_44_44);
    }
#line 376 "lco.m"
    {
#line 376 "lco.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__lco__STATE_VARIABLE_PredTable_44_44, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_34_34, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_33);
    }
#line 339 "lco.m"
  }
#line 335 "lco.m"
}

#line 322 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_process_proc_update_3_p_0(
#line 322 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 322 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_15,
#line 322 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_16)
#line 322 "lco.m"
{
#line 325 "lco.m"
  {
#line 325 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 325 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_18_18;
#line 325 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_19_19;
#line 325 "lco.m"
    MR_Word transform_hlds__lco__PredProcId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 325 "lco.m"
    MR_Word transform_hlds__lco__NewProcInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 325 "lco.m"
    MR_Word transform_hlds__lco__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__PredProcId_4, (MR_Integer) 0)));
#line 325 "lco.m"
    MR_Integer transform_hlds__lco__ProcId_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__PredProcId_4, (MR_Integer) 1)));
#line 325 "lco.m"
    MR_Word transform_hlds__lco__PredTable0_9;
#line 325 "lco.m"
    MR_Word transform_hlds__lco__PredInfo0_10;
#line 325 "lco.m"
    MR_Word transform_hlds__lco__Procs0_11;
#line 325 "lco.m"
    MR_Word transform_hlds__lco__Procs_12;
#line 325 "lco.m"
    MR_Word transform_hlds__lco__PredInfo_13;
#line 325 "lco.m"
    MR_Word transform_hlds__lco__PredTable_14;
#line 328 "lco.m"
    MR_Box transform_hlds__lco__conv0_PredInfo0_10;

#line 327 "lco.m"
    {
#line 327 "lco.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_15, &transform_hlds__lco__PredTable0_9);
    }
#line 14807 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 14809 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 328 "lco.m"
    {
#line 328 "lco.m"
      mercury__map__lookup_3_p_0(transform_hlds__lco__TypeCtorInfo_18_18, transform_hlds__lco__TypeCtorInfo_19_19, transform_hlds__lco__PredTable0_9, ((MR_Box) (transform_hlds__lco__PredId_7)), &transform_hlds__lco__conv0_PredInfo0_10);
    }
#line 328 "lco.m"
    transform_hlds__lco__PredInfo0_10 = ((MR_Word) transform_hlds__lco__conv0_PredInfo0_10);
#line 329 "lco.m"
    {
#line 329 "lco.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__lco__PredInfo0_10, &transform_hlds__lco__Procs0_11);
    }
#line 330 "lco.m"
    {
#line 330 "lco.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__lco__ProcId_8, ((MR_Box) (transform_hlds__lco__NewProcInfo_5)), transform_hlds__lco__Procs0_11, &transform_hlds__lco__Procs_12);
    }
#line 331 "lco.m"
    {
#line 331 "lco.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__lco__Procs_12, transform_hlds__lco__PredInfo0_10, &transform_hlds__lco__PredInfo_13);
    }
#line 332 "lco.m"
    {
#line 332 "lco.m"
      mercury__map__det_update_4_p_0(transform_hlds__lco__TypeCtorInfo_18_18, transform_hlds__lco__TypeCtorInfo_19_19, ((MR_Box) (transform_hlds__lco__PredId_7)), ((MR_Box) (transform_hlds__lco__PredInfo_13)), transform_hlds__lco__PredTable0_9, &transform_hlds__lco__PredTable_14);
    }
#line 333 "lco.m"
    {
#line 333 "lco.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__lco__PredTable_14, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_15, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_16);
    }
#line 325 "lco.m"
  }
#line 322 "lco.m"
}

#line 314 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_3(
#line 314 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 314 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 314 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 314 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3)
#line 314 "lco.m"
{
#line 314 "lco.m"
  {
#line 314 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 314 "lco.m"
    MR_Word transform_hlds__lco__conv10_STATE_VARIABLE_ModuleInfo_33;

#line 314 "lco.m"
    {
#line 314 "lco.m"
      transform_hlds__lco__lco_process_proc_variant_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2), &transform_hlds__lco__conv10_STATE_VARIABLE_ModuleInfo_33);
    }
#line 314 "lco.m"
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv10_STATE_VARIABLE_ModuleInfo_33));
#line 314 "lco.m"
  }
#line 314 "lco.m"
}

#line 313 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_2(
#line 313 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 313 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 313 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 313 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3)
#line 313 "lco.m"
{
#line 313 "lco.m"
  {
#line 313 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 313 "lco.m"
    MR_Word transform_hlds__lco__conv8_STATE_VARIABLE_ModuleInfo_16;

#line 313 "lco.m"
    {
#line 313 "lco.m"
      transform_hlds__lco__lco_process_proc_update_3_p_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2), &transform_hlds__lco__conv8_STATE_VARIABLE_ModuleInfo_16);
    }
#line 313 "lco.m"
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv8_STATE_VARIABLE_ModuleInfo_16));
#line 313 "lco.m"
  }
#line 313 "lco.m"
}

#line 304 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_1(
#line 304 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 304 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 304 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 304 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 304 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 304 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5,
#line 304 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_6,
#line 304 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_7,
#line 304 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_8,
#line 304 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_9)
#line 304 "lco.m"
{
#line 304 "lco.m"
  {
#line 304 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 304 "lco.m"
    MR_Word transform_hlds__lco__conv3_STATE_VARIABLE_ModuleInfo_27;
#line 304 "lco.m"
    MR_Word transform_hlds__lco__conv2_STATE_VARIABLE_CurSCCVariants_29;
#line 304 "lco.m"
    MR_Word transform_hlds__lco__conv1_STATE_VARIABLE_CurSCCUpdates_31;
#line 304 "lco.m"
    MR_Word transform_hlds__lco__conv0_STATE_VARIABLE_Permitted_33;

#line 304 "lco.m"
    {
#line 304 "lco.m"
      transform_hlds__lco__lco_proc_if_permitted_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2), &transform_hlds__lco__conv3_STATE_VARIABLE_ModuleInfo_27, ((MR_Word) transform_hlds__lco__wrapper_arg_4), &transform_hlds__lco__conv2_STATE_VARIABLE_CurSCCVariants_29, ((MR_Word) transform_hlds__lco__wrapper_arg_6), &transform_hlds__lco__conv1_STATE_VARIABLE_CurSCCUpdates_31, ((MR_Word) transform_hlds__lco__wrapper_arg_8), &transform_hlds__lco__conv0_STATE_VARIABLE_Permitted_33);
    }
#line 304 "lco.m"
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv3_STATE_VARIABLE_ModuleInfo_27));
#line 304 "lco.m"
    *transform_hlds__lco__wrapper_arg_5 = ((MR_Box) (transform_hlds__lco__conv2_STATE_VARIABLE_CurSCCVariants_29));
#line 304 "lco.m"
    *transform_hlds__lco__wrapper_arg_7 = ((MR_Box) (transform_hlds__lco__conv1_STATE_VARIABLE_CurSCCUpdates_31));
#line 304 "lco.m"
    *transform_hlds__lco__wrapper_arg_9 = ((MR_Box) (transform_hlds__lco__conv0_STATE_VARIABLE_Permitted_33));
#line 304 "lco.m"
  }
#line 304 "lco.m"
}

#line 298 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0(
#line 298 "lco.m"
  MR_Word transform_hlds__lco__SCC_6,
#line 298 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VariantMap_0_17,
#line 298 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VariantMap_18,
#line 298 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_19,
#line 298 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_20)
#line 298 "lco.m"
{
#line 301 "lco.m"
  {
#line 301 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 301 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_40_40;
#line 301 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_42_42;
#line 301 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_43_43;
#line 301 "lco.m"
    MR_Word transform_hlds__lco__CurSCCVariantMap_10;
#line 301 "lco.m"
    MR_Word transform_hlds__lco__CurSCCUpdateMap_11;
#line 301 "lco.m"
    MR_Word transform_hlds__lco__Permitted_12;
#line 301 "lco.m"
    MR_Word transform_hlds__lco__CurSCCVariants_13;
#line 301 "lco.m"
    MR_Word transform_hlds__lco__CurSCCUpdates_14;
#line 301 "lco.m"
    MR_Word transform_hlds__lco__V_21_21;
#line 301 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_22_22;
#line 301 "lco.m"
    MR_Word transform_hlds__lco__V_23_23;
#line 301 "lco.m"
    MR_Word transform_hlds__lco__V_24_24;
#line 304 "lco.m"
    MR_Box transform_hlds__lco__conv7_STATE_VARIABLE_ModuleInfo_22_22;
#line 304 "lco.m"
    MR_Box transform_hlds__lco__conv6_CurSCCVariantMap_10;
#line 304 "lco.m"
    MR_Box transform_hlds__lco__conv5_CurSCCUpdateMap_11;
#line 304 "lco.m"
    MR_Box transform_hlds__lco__conv4_Permitted_12;
#line 311 "lco.m"
    MR_Word transform_hlds__lco__V_15_15;
#line 311 "lco.m"
    MR_Word transform_hlds__lco__V_16_16;

#line 304 "lco.m"
    {
#line 304 "lco.m"
      transform_hlds__lco__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 304 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_21_21, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_4[0]));
#line 304 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_21_21, 1) = ((MR_Box) (transform_hlds__lco__lco_scc_5_p_0_1));
#line 304 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 304 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_21_21, 3) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_VariantMap_0_17));
#line 304 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_21_21, 4) = ((MR_Box) (transform_hlds__lco__SCC_6));
#line 304 "lco.m"
    }
#line 15040 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_40_40 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 305 "lco.m"
    {
#line 305 "lco.m"
      transform_hlds__lco__V_23_23 = mercury__map__init_0_f_0(transform_hlds__lco__TypeCtorInfo_40_40, (MR_Word) &transform_hlds__lco_scalar_common_1[0]);
    }
#line 15047 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_42_42 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 305 "lco.m"
    {
#line 305 "lco.m"
      transform_hlds__lco__V_24_24 = mercury__map__init_0_f_0(transform_hlds__lco__TypeCtorInfo_40_40, transform_hlds__lco__TypeCtorInfo_42_42);
    }
#line 15054 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_43_43 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0;
#line 304 "lco.m"
    {
#line 304 "lco.m"
      mercury__list__foldl4_10_p_0(transform_hlds__lco__TypeCtorInfo_40_40, transform_hlds__lco__TypeCtorInfo_43_43, (MR_Word) &transform_hlds__lco_scalar_common_2[0], (MR_Word) &transform_hlds__lco_scalar_common_2[1], (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_is_permitted_on_scc_0, transform_hlds__lco__V_21_21, transform_hlds__lco__SCC_6, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_19)), &transform_hlds__lco__conv7_STATE_VARIABLE_ModuleInfo_22_22, ((MR_Box) (transform_hlds__lco__V_23_23)), &transform_hlds__lco__conv6_CurSCCVariantMap_10, ((MR_Box) (transform_hlds__lco__V_24_24)), &transform_hlds__lco__conv5_CurSCCUpdateMap_11, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__lco__conv4_Permitted_12);
    }
#line 304 "lco.m"
    transform_hlds__lco__STATE_VARIABLE_ModuleInfo_22_22 = ((MR_Word) transform_hlds__lco__conv7_STATE_VARIABLE_ModuleInfo_22_22);
#line 304 "lco.m"
    transform_hlds__lco__CurSCCVariantMap_10 = ((MR_Word) transform_hlds__lco__conv6_CurSCCVariantMap_10);
#line 304 "lco.m"
    transform_hlds__lco__CurSCCUpdateMap_11 = ((MR_Word) transform_hlds__lco__conv5_CurSCCUpdateMap_11);
#line 304 "lco.m"
    transform_hlds__lco__Permitted_12 = ((MR_Word) transform_hlds__lco__conv4_Permitted_12);
#line 307 "lco.m"
    {
#line 307 "lco.m"
      mercury__multi_map__to_flat_assoc_list_2_p_0(transform_hlds__lco__TypeCtorInfo_40_40, (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0, transform_hlds__lco__CurSCCVariantMap_10, &transform_hlds__lco__CurSCCVariants_13);
    }
#line 308 "lco.m"
    {
#line 308 "lco.m"
      mercury__map__to_assoc_list_2_p_0(transform_hlds__lco__TypeCtorInfo_40_40, transform_hlds__lco__TypeCtorInfo_42_42, transform_hlds__lco__CurSCCUpdateMap_11, &transform_hlds__lco__CurSCCUpdates_14);
    }
#line 310 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__Permitted_12 == (MR_Integer) 1);
#line 310 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 310 "lco.m"
      {
#line 311 "lco.m"
        transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__CurSCCUpdates_14)) == (MR_mktag((MR_Integer) 1)));
#line 311 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 311 "lco.m"
          {
#line 311 "lco.m"
            transform_hlds__lco__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__CurSCCUpdates_14, (MR_Integer) 0)));
#line 311 "lco.m"
            transform_hlds__lco__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__CurSCCUpdates_14, (MR_Integer) 1)));
#line 311 "lco.m"
          }
#line 310 "lco.m"
      }
#line 316 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 313 "lco.m"
      {
#line 313 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_27_27;
#line 313 "lco.m"
        MR_Word transform_hlds__lco__V_28_28;
#line 313 "lco.m"
        MR_Box transform_hlds__lco__conv9_STATE_VARIABLE_ModuleInfo_27_27;
#line 314 "lco.m"
        MR_Box transform_hlds__lco__conv11_STATE_VARIABLE_ModuleInfo_20;

#line 313 "lco.m"
        {
#line 313 "lco.m"
          mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[2], transform_hlds__lco__TypeCtorInfo_43_43, (MR_Word) &transform_hlds__lco_scalar_common_2[9], transform_hlds__lco__CurSCCUpdates_14, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ModuleInfo_22_22)), &transform_hlds__lco__conv9_STATE_VARIABLE_ModuleInfo_27_27);
        }
#line 313 "lco.m"
        transform_hlds__lco__STATE_VARIABLE_ModuleInfo_27_27 = ((MR_Word) transform_hlds__lco__conv9_STATE_VARIABLE_ModuleInfo_27_27);
#line 314 "lco.m"
        {
#line 314 "lco.m"
          transform_hlds__lco__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 314 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_28_28, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_6[0]));
#line 314 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_28_28, 1) = ((MR_Box) (transform_hlds__lco__lco_scc_5_p_0_3));
#line 314 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 314 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_28_28, 3) = ((MR_Box) (transform_hlds__lco__CurSCCVariantMap_10));
#line 314 "lco.m"
        }
#line 314 "lco.m"
        {
#line 314 "lco.m"
          mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[3], transform_hlds__lco__TypeCtorInfo_43_43, transform_hlds__lco__V_28_28, transform_hlds__lco__CurSCCVariants_13, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ModuleInfo_27_27)), &transform_hlds__lco__conv11_STATE_VARIABLE_ModuleInfo_20);
        }
#line 314 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ModuleInfo_20 = ((MR_Word) transform_hlds__lco__conv11_STATE_VARIABLE_ModuleInfo_20);
#line 313 "lco.m"
      }
#line 316 "lco.m"
    else
#line 317 "lco.m"
      *transform_hlds__lco__STATE_VARIABLE_ModuleInfo_20 = transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_19;
#line 301 "lco.m"
    *transform_hlds__lco__STATE_VARIABLE_VariantMap_18 = transform_hlds__lco__STATE_VARIABLE_VariantMap_0_17;
#line 301 "lco.m"
  }
#line 298 "lco.m"
}

#line 296 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_modulo_constructors_2_p_0_1(
#line 296 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 296 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 296 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 296 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 296 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 296 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5)
#line 296 "lco.m"
{
#line 296 "lco.m"
  {
#line 296 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 296 "lco.m"
    MR_Word transform_hlds__lco__conv1_STATE_VARIABLE_VariantMap_18;
#line 296 "lco.m"
    MR_Word transform_hlds__lco__conv0_STATE_VARIABLE_ModuleInfo_20;

#line 296 "lco.m"
    {
#line 296 "lco.m"
      transform_hlds__lco__lco_scc_5_p_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2), &transform_hlds__lco__conv1_STATE_VARIABLE_VariantMap_18, ((MR_Word) transform_hlds__lco__wrapper_arg_4), &transform_hlds__lco__conv0_STATE_VARIABLE_ModuleInfo_20);
    }
#line 296 "lco.m"
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv1_STATE_VARIABLE_VariantMap_18));
#line 296 "lco.m"
    *transform_hlds__lco__wrapper_arg_5 = ((MR_Box) (transform_hlds__lco__conv0_STATE_VARIABLE_ModuleInfo_20));
#line 296 "lco.m"
  }
#line 296 "lco.m"
}

#line 163 "lco.m"
void MR_CALL 
transform_hlds__lco__lco_modulo_constructors_2_p_0(
#line 163 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_7,
#line 163 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_8)
#line 163 "lco.m"
{
#line 293 "lco.m"
  {
#line 293 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 293 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_13_13;
#line 293 "lco.m"
    MR_Word transform_hlds__lco__DepInfo_4;
#line 293 "lco.m"
    MR_Word transform_hlds__lco__SCCs_5;
#line 293 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_9_9;
#line 293 "lco.m"
    MR_Word transform_hlds__lco__V_11_11;
#line 296 "lco.m"
    MR_Word transform_hlds__lco__V_6_6;
#line 296 "lco.m"
    MR_Box transform_hlds__lco__conv3_V_6_6;
#line 296 "lco.m"
    MR_Box transform_hlds__lco__conv2_STATE_VARIABLE_ModuleInfo_8;

#line 294 "lco.m"
    {
#line 294 "lco.m"
      transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_7, &transform_hlds__lco__STATE_VARIABLE_ModuleInfo_9_9, &transform_hlds__lco__DepInfo_4);
    }
#line 15228 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_13_13 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 295 "lco.m"
    {
#line 295 "lco.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0(transform_hlds__lco__TypeCtorInfo_13_13, transform_hlds__lco__DepInfo_4, &transform_hlds__lco__SCCs_5);
    }
#line 296 "lco.m"
    {
#line 296 "lco.m"
      transform_hlds__lco__V_11_11 = mercury__map__init_0_f_0(transform_hlds__lco__TypeCtorInfo_13_13, (MR_Word) &transform_hlds__lco_scalar_common_1[0]);
    }
#line 296 "lco.m"
    {
#line 296 "lco.m"
      mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[1], (MR_Word) &transform_hlds__lco_scalar_common_2[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__lco_scalar_common_2[8], transform_hlds__lco__SCCs_5, ((MR_Box) (transform_hlds__lco__V_11_11)), &transform_hlds__lco__conv3_V_6_6, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ModuleInfo_9_9)), &transform_hlds__lco__conv2_STATE_VARIABLE_ModuleInfo_8);
    }
#line 296 "lco.m"
    transform_hlds__lco__V_6_6 = ((MR_Word) transform_hlds__lco__conv3_V_6_6);
#line 296 "lco.m"
    *transform_hlds__lco__STATE_VARIABLE_ModuleInfo_8 = ((MR_Word) transform_hlds__lco__conv2_STATE_VARIABLE_ModuleInfo_8);
#line 293 "lco.m"
  }
#line 163 "lco.m"
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
